#include "common.h"

void credits_update(uint32_t frame) {
	if (arduboy.justPressed(A_BUTTON)) {
		set_mode(mode_title);
	}
}

void credits_draw(uint32_t frame) {
	write_text(4, 8+8*0, "CRATE CONFUSION");
	write_text(4, 8+8*2, "Dominic Szablewski");
	write_text(4, 8+8*3, "phoboslab.org - 2019");
}

mode_t mode_credits = {
	.init = NULL,
	.update = credits_update,
	.draw = credits_draw
};
