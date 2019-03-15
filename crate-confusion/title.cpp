#include "common.h"

static int8_t cursor_pos = 0;

void title_update(uint32_t frame) {
	if (arduboy.justPressed(DOWN_BUTTON)) {
		cursor_pos++;
		play_sound(500, 33);
	}
	else if (arduboy.justPressed(UP_BUTTON)) {
		cursor_pos--;
		play_sound(500, 33);
	}
	cursor_pos = clamp(cursor_pos, 0, 2);

	if (arduboy.justPressed(A_BUTTON)) {
		if (cursor_pos == 0) {
			set_mode(mode_game);
		}
		else if (cursor_pos == 1) {
			sound_on = !sound_on;
		}
		else if (cursor_pos == 2) {
			set_mode(mode_credits);
		}
		play_sound(300, 33);
	}
}

void title_draw(uint32_t frame) {
	image_draw(0, 0, bg_image, 0);
	image_draw(SCREEN_TO_F(46), SCREEN_TO_F(6), title_image, 0);

	write_text(64, 30 + 8 * 0, "PLAY!");
	write_text(64, 30 + 8 * 1, sound_on ? "SOUND ON" : "SOUND OFF");
	write_text(64, 30 + 8 * 2, "CREDITS");

	write_text(58, 30 + 8 * cursor_pos, ">");
}

mode_t mode_title = {
	.init = NULL,
	.update = title_update,
	.draw = title_draw
};
