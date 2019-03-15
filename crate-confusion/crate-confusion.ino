#include "common.h"

// block in EEPROM to save high scores
#define EE_FILE 2


Arduboy2 arduboy;
Sprites sprites;
BeepPin1 beep;

void setup() {
	arduboy.boot();
	arduboy.flashlight();
	arduboy.audio.begin();

	beep.begin();
	arduboy.setFrameRate(60);
	arduboy.initRandomSeed();
	arduboy.clear();

	set_mode(mode_title);
}


void loop() {
	if (!(arduboy.nextFrame())) {
		return;
	}

	beep.timer();
	arduboy.pollButtons();
	arduboy.clear();

	run_frame();
	
	arduboy.display();
}
