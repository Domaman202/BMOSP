#include <system.h>

static inline void outb(uint16_t port, uint8_t val) {
	asm volatile("outb %0, %1" : : "a"(val), "Nd"(port));
}

static inline uint8_t inb(uint16_t port) {
	uint8_t ret;
	asm volatile("inb %1, %0" : "=a"(ret) : "Nd"(port));
	return ret;
}

static inline void usleep(uint64_t ticks) {
	for (uint64_t i = 0; i < ticks * 100; i++) { asm volatile("pause"); }
}

static inline void play_sound(unsigned int frequency) {
	uint32_t div;
	uint8_t tmp;

	// Set the PIT to the desired frequency
	div = 1193180 / frequency;
	outb(0x43, 0xb6);
	outb(0x42, (uint8_t)(div));
	outb(0x42, (uint8_t)(div >> 8));

	// And play the sound using the PC speaker
	tmp = inb(0x61);
	if (tmp != (tmp | 3)) { outb(0x61, tmp | 3); }
}

static void nosound( ) {
	uint8_t tmp = inb(0x61) & 0xFC;

	outb(0x61, tmp);
}

int init(env_t *env) {
	init_env(env);
	env->fb_printf("Программа инициализирована!\n");
	return 0;
	// Массив с нотами
	unsigned int tetris_notes[] = { 0 };

	// Расчет количества нот в мелодии
	int num_notes = sizeof(tetris_notes) / sizeof(tetris_notes[0]);

	// Начальное значение для подсчета времени
	int note_duration = 1000000; // 1 секунда

	// Зацикленное воспроизведение мелодии в течение минуты
	for (int i = 0; i < num_notes; i++) {
		// Воспроизведение ноты с заданным временем
		play_sound(tetris_notes[i]);
		usleep(note_duration);

		// Уменьшение времени для следующей ноты
		note_duration -= note_duration / 24; // Уменьшение на 1/24 каждый раз
	}

	return 0;
}