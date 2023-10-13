#/bin/sh
echo "Название: Hello world"
echo "Лицензия: Публичное достояние"
g++ -O0 -finput-charset=UTF-8 -fexec-charset=cp1251 -c -fPIC -nostdlib main.cpp -o hello.o
gcc -shared -nostdlib hello.o -o hello.so -Wl,--entry=_start
echo "Сборка завершена, файл: hello.so"
