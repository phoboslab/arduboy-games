#ifndef COMMON_H
#define COMMON_H

#include <Arduboy2.h>
#include "data.h"

typedef struct {
	int16_t x, y;
} vec_t;

#define F_TO_SCREEN(v) ((v) >> 8)
#define SCREEN_TO_F(v) ((v) << 8)
#define F_TO_MAP(v) ((v) >> 11)
#define MAP_TO_F(v) ((v) << 11)

#define WIDTH_F SCREEN_TO_F(WIDTH)
#define HEIGHT_F SCREEN_TO_F(HEIGHT)

typedef struct {
    void (*init)(void);
    void (*update)(uint32_t frame);
    void (*draw)(uint32_t frame);
} mode_t;

void set_mode(mode_t new_mode);

void image_draw(int16_t x, int16_t y, const unsigned char *data, uint8_t image);
void sprite_draw(int16_t x, int16_t y, uint8_t sprite);
void sprite_draw_wrapped(int16_t x, int16_t y, uint8_t sprite);
void play_sound(unsigned int frequency, unsigned int duration);
void write_text(int16_t x, int16_t y, const char *s);
void write_int(int16_t x, int16_t y, int16_t v);
int16_t clamp(int16_t in, int16_t min, int16_t max);

void run_frame();

extern Arduboy2 arduboy;
extern Sprites sprites;
extern BeepPin1 beep;
extern bool sound_on;

extern mode_t 
	mode_title, 
	mode_game,
	mode_credits;

#endif