import os
import shutil
import subprocess
import time
from multiprocessing import Pool


ARCH_FLAGS = "-m64 -march=x86-64 -mabi=sysv -mno-red-zone -mcmodel=kernel -MMD -MP"
WARN_FLAGS = "-w -Wall -Wextra -nostdlib"
STANDART_FLAGS = "-std=gnu11"
PROTECT_FLAGS = "-O0 -pipe -ffreestanding -fno-stack-protector -fno-lto -fno-stack-check -fno-PIC -fno-PIE"
CHARSET_FLAGS = "-finput-charset=UTF-8 -fexec-charset=cp1251"
LIBS_FLAGS = "-Ilimine -Iinclude"

def version_build():
    with open("include/version.h", "r") as file:
        lines = file.readlines()

    major = 0
    minor = 0
    build = 0

    with open("include/version.h", "w") as file:
        for line in lines:
            if line.startswith("#define VERSION_BUILD"):
                parts = line.split()
                build = int(parts[2]) + 1
                if build > 999:
                    build = 0
                    minor += 1
                    file.write(f"#define VERSION_MINOR {minor}\n")
                file.write(f"#define VERSION_BUILD {build}\n")
            elif line.startswith("#define VERSION_MAJOR"):
                parts = line.split()
                major = int(parts[2])
                file.write(line)
            elif line.startswith("#define VERSION_MINOR"):
                parts = line.split()
                minor = int(parts[2])
                file.write(line)
            else:
                file.write(line)

    return [major, minor, build]

def sort_strings(strings):
    return sorted(strings, key=lambda x: not x.endswith('.s.o'))

def find_files(directory, extensions):
    file_list = []
    for root, dirs, files in os.walk(directory):
        for file in files:
            if any(file.endswith(extension) for extension in extensions):
                file_list.append(os.path.join(root, file))
    return file_list


def compile(file: str):
    CC = "gcc"
    output_file = file.replace('/', '_')
    obj_file = f"bin/{output_file}.o"
    cmd = f"{CC} {WARN_FLAGS} {PROTECT_FLAGS} {ARCH_FLAGS} {CHARSET_FLAGS} {LIBS_FLAGS} -c {file} -o {obj_file}"
    print(cmd)
    os.system(cmd)
    return obj_file


def compile_all():
    file_list = find_files("kernel/", [".s", ".cpp", ".c"])
    file_list += find_files("kernel/*/*", [".s", ".cpp", ".c"])

    with Pool() as pool:
        results = pool.map(compile, file_list)

    while not all(results):
        print(results)
        time.sleep(1)
    print(results)
    cmd = f"ld -nostdlib -static -m elf_x86_64 -z max-page-size=0x1000 -T configs/linker.ld -o kernel.elf {' '.join(sort_strings(results))}"
    print(cmd)
    os.system(cmd)


def check_limine():
    if not os.path.isdir("limine"):
        subprocess.run(["git", "clone", "https://github.com/limine-bootloader/limine.git", "--branch=v5.x-branch-binary", "--depth=1"])
    else:
        os.chdir("limine")
        subprocess.run(["git", "pull"])
        os.chdir("..")
    os.chdir("limine")
    subprocess.run(["make"])
    os.chdir("..")



def check_os():
    import platform
    using_distro = False
    try:
        import distro
        using_distro = True
    except ImportError:
        pass
    if using_distro:
        linux_distro = distro.like()
    else:
        linux_distro = platform.linux_distribution()[0]
    if linux_distro.lower() in ['debian', 'ubuntu']:
        return 1
    return 0

def check_tools():
    required_tools = ["gcc", "g++", "xorriso", "make", "mtools", "curl"]
    missing_tools = []

    for tool in required_tools:
        if shutil.which(tool) is None:
            missing_tools.append(tool)

    if len(missing_tools) > 0:
        if check_os():
            subprocess.run(["sudo", "apt", "install"] + missing_tools)
            return
        subprocess.run(["sudo", "pacman", "-S"] + missing_tools)


def create_hdd(IMAGE_NAME):
    subprocess.run(["rm", "-f", IMAGE_NAME+".hdd"])
    subprocess.run(["dd", "if=/dev/zero", "bs=1M", "count=0", "seek=4", "of="+IMAGE_NAME+".hdd"])
    subprocess.run(["sgdisk", IMAGE_NAME+".hdd", "-n", "1:2048", "-t", "1:ef00"])
    subprocess.run(["./limine/limine", "bios-install", IMAGE_NAME+".hdd"])
    subprocess.run(["mformat", "-i", IMAGE_NAME+".hdd@@1M"])
    subprocess.run(["mmd", "-i", IMAGE_NAME+".hdd@@1M", "::/mod", "::/EFI", "::/EFI/BOOT", "::/user"])
    subprocess.run(["mcopy", "-i", IMAGE_NAME+".hdd@@1M",
                    "kernel.elf", "configs/limine.cfg", "limine/limine-bios.sys", "::/"])
    subprocess.run(["mcopy", "-i", IMAGE_NAME+".hdd@@1M",
                    "modules/music/music.so", "modules/helloworld/hello.so", "::/mod"])
    subprocess.run(["mcopy", "-i", IMAGE_NAME+".hdd@@1M", 
                    "limine/BOOTX64.EFI", "limine/BOOTIA32.EFI", "::/EFI/BOOT"])
    subprocess.run(["mcopy", "-i", IMAGE_NAME+".hdd@@1M",
                    "boot.tga", "::/"])
    subprocess.run(["./limine/limine", "bios-install", IMAGE_NAME+".hdd"])


def create_iso(IMAGE_NAME):
    subprocess.run(["rm", "-f", IMAGE_NAME+".iso"])
    subprocess.run(["rm", "-rf", "iso_root"])
    subprocess.run(["mkdir", "-p", "iso_root"])
    subprocess.run(["cp", "-v", "iso_root/"])
    subprocess.run(["cp", "-v", "kernel.elf", "boot.tga",
                    "configs/limine.cfg", "limine/limine-bios.sys", 
                    "limine/limine-bios-cd.bin", "limine/limine-uefi-cd.bin", 
                    "iso_root/"])
    subprocess.run(["mkdir", "-p", "iso_root/EFI/BOOT"])
    subprocess.run(["mkdir", "-p", "iso_root/mod"])
    subprocess.run(["cp", "-v", "modules/helloworld/hello.so", "iso_root/mod/"])
    subprocess.run(["cp", "-v", "modules/music/music.so", "iso_root/mod/"])
    subprocess.run(["cp", "-v", "limine/BOOTX64.EFI", "iso_root/EFI/BOOT/"])
    subprocess.run(["cp", "-v", "limine/BOOTIA32.EFI", "iso_root/EFI/BOOT/"])
    subprocess.run(["xorriso", "-as", "mkisofs", "-b", "limine-bios-cd.bin",
                    "-no-emul-boot", "-boot-load-size", "4", "-boot-info-table",
                    "--efi-boot", "limine-uefi-cd.bin",
                    "-efi-boot-part", "--efi-boot-image", "--protective-msdos-label",
                    "iso_root", "-o", IMAGE_NAME+".iso"])
    subprocess.run(["./limine/limine", "bios-install", IMAGE_NAME+".iso"])

if __name__ == "__main__":
    os.system("""find . \( -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.hpp" \) -print0 | xargs -0 clang-format -i -style=file""")
    subprocess.run(["rm", "-rf", "bin"])
    subprocess.run(["mkdir", "-p", "bin"])

    if not os.path.isdir("ovmf"):
        subprocess.run(["mkdir", "-p", "ovmf"])
        os.chdir("ovmf")
        subprocess.run(["curl", "-Lo", "OVMF.fd", "https://retrage.github.io/edk2-nightly/bin/RELEASEX64_OVMF.fd"])
        os.chdir("..")

    check_limine()
    check_tools()
    major, minor, build = version_build()
    compile_all()
    create_iso("bmosp")
    create_hdd("bmosp")

    print(f"Не забудьте сохранить изменения! Номер сборки: {major}.{minor}.{build}")
