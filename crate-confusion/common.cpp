#include "common.h"

static mode_t mode = {.init = NULL, .update = NULL, .draw = NULL};
static uint32_t frame = 0;
bool sound_on = true;

void set_mode(mode_t new_mode) {
	mode = new_mode;
	frame = 0;
	if (mode.init) {
		mode.init();
	}
}

int16_t clamp(int16_t in, int16_t min, int16_t max) {
	if (in < min) {
		return min;
	}
	else if (in > max) {
		return max;
	}
	return in;
}

void image_draw(int16_t x, int16_t y, const unsigned char *data, uint8_t image) {
	uint16_t
		sx = F_TO_SCREEN(x),
		sy = F_TO_SCREEN(y);

	sprites.drawSelfMasked(sx, sy, data, image);
}

void sprite_draw(int16_t x, int16_t y, uint8_t sprite) {
	uint16_t
		sx = F_TO_SCREEN(x),
		sy = F_TO_SCREEN(y);

	sprites.drawPlusMask(sx, sy, sprite_sheet, sprite);
}

void sprite_draw_wrapped(int16_t x, int16_t y, uint8_t sprite) {
	uint16_t
		sx = F_TO_SCREEN(x),
		sy = F_TO_SCREEN(y);

	sprites.drawPlusMask(sx, sy, sprite_sheet, sprite);

	if (sx > WIDTH - sprite_sheet[0]) {
		sprites.drawPlusMask(sx - WIDTH, sy, sprite_sheet, sprite);
	}
}

void play_sound(unsigned int frequency, unsigned int duration) {
	if (!sound_on) {
		return;
	}

 	beep.tone(beep.freq(frequency), duration / (1000 / 60));
}

void write_text(int16_t x, int16_t y, const char *s) {
	arduboy.setCursor(x, y);
	arduboy.print(s);
}

void write_int(int16_t x, int16_t y, int16_t v) {
	arduboy.setCursor(x, y);
	arduboy.print(v);
}

void run_frame() {
	mode.update(frame);
	mode.draw(frame);
	frame++;
}
