#include "common.h"

#define THRUST 8
#define GRAVITY 4

#define FUEL_MAX 4096
#define FUEL_BONUS 1024
#define FUEL_CONSUMPTION_HORZ 6
#define FUEL_CONSUMPTION_VERT 12

#define MAP_WIDTH 16
#define MAP_HEIGHT 8

typedef struct {
	vec_t pos, vel, accel;
	int16_t fuel;
} player_t;

typedef struct {
	uint8_t tx, ty;
	int16_t age;
} item_t;


static item_t item;
static player_t player;
static int16_t score;
static bool is_game_over;
static uint8_t game_over_wait;

static uint8_t bg_map[MAP_HEIGHT][MAP_WIDTH];

uint8_t map_get_tile(int8_t tx, int8_t ty) {	
	if (ty >= MAP_HEIGHT || ty < 0) {
		return 0;
	}
	if (tx < 0) {
		tx += MAP_WIDTH;
	}
	else if (tx >= MAP_WIDTH) {
		tx -= MAP_WIDTH;
	}
	return bg_map[ty][tx];
}

uint8_t map_collides(int16_t x, int16_t y) {
	uint8_t
		t = 0,
		tx1 = F_TO_MAP(x + SCREEN_TO_F(1)),
		ty1 = F_TO_MAP(y + SCREEN_TO_F(1)),
		tx2 = F_TO_MAP(x + SCREEN_TO_F(7)),
		ty2 = F_TO_MAP(y + SCREEN_TO_F(7));

	if (t = map_get_tile(tx1, ty1)) { return t; }
	if (t = map_get_tile(tx2, ty1)) { return t; }
	if (t = map_get_tile(tx1, ty2)) { return t; }
	if (t = map_get_tile(tx2, ty2)) { return t; }
	return 0;
}

void spawn_item() {
	do {
		item.tx = random(0, MAP_WIDTH);
		item.ty = random(1, MAP_HEIGHT-1); // skip first & last row
	} while (bg_map[item.ty][item.tx]);

	item.age = clamp(score << 2, 0, 220);
}

void game_init() {
	game_over_wait = 0;
	is_game_over = false;

	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 16; x++) {
			bg_map[y][x] = 0;
		}
	}

	player.fuel = FUEL_MAX;
	player.pos.x = SCREEN_TO_F(60);
	player.pos.y = SCREEN_TO_F(28);
	player.accel.x = 0;
	player.accel.y = 0;
	player.vel.x = 0;
	player.vel.y = 0;
	score = 0;

	spawn_item();
}

void game_over() {
	is_game_over = true;
	play_sound(250, 450);
}

void game_update(uint32_t frame) {
	if (is_game_over) {
		if (game_over_wait > 30) {
			if (arduboy.justPressed(A_BUTTON)) {
				set_mode(mode_title);
			}
		}
		else {
			game_over_wait++;
		}
		return;
	}


	player.accel.x = 0;
	player.accel.y = 4;
	
	// player controls
	if (player.fuel > 0) {
		if (arduboy.pressed(LEFT_BUTTON)) {
			player.accel.x = -THRUST;
			player.fuel -= FUEL_CONSUMPTION_HORZ;
		}
		else if (arduboy.pressed(RIGHT_BUTTON)) {
			player.accel.x = THRUST;
			player.fuel -= FUEL_CONSUMPTION_HORZ;
		}
		
		if (arduboy.pressed(A_BUTTON)) {
			player.accel.y = -THRUST;
			player.fuel -= FUEL_CONSUMPTION_VERT;
		}
	}

	// physics
	player.vel.x += player.accel.x;
	player.vel.y += player.accel.y;

	player.pos.x += player.vel.x;
	player.pos.y += player.vel.y;

	// wrap horizontal
	if (player.pos.x > WIDTH_F) {
		player.pos.x -= WIDTH_F;
	}
	if (player.pos.x < 0) {
		player.pos.x += WIDTH_F;
	}

	// create crate
	item.age++;
	if (item.age == 255) {
		play_sound(550, 250);
		bg_map[item.ty][item.tx] = 9;
		spawn_item();
	}


	uint8_t ct = map_collides(player.pos.x, player.pos.y);

	// collide with crate
	if (ct == 9) {
		game_over();
	}

	// collect fuel
	else if (ct > 0 ) {
		play_sound(750, 100);
		bg_map[item.ty][item.tx] = 0;
		spawn_item();
		player.fuel += FUEL_BONUS;
		score++;
	}

	// collide with ground
	if (player.pos.y > SCREEN_TO_F(55)) {
		game_over();
	}

	player.fuel = clamp(player.fuel, 0, FUEL_MAX);
}

void game_draw(uint32_t frame) {
	image_draw(0, 0, bg_image, 0);

	// set current item tile
	uint8_t item_tile = 4;
	if (item.age > 250) {
		item_tile = 7;
	}
	else if (item.age > 245) {
		item_tile = 6;
	}
	else if (item.age > 192) {
		item_tile = item.age & 0x04 ? 4 : 5;
	}
	else {
		item_tile = item.age & 0x10 ? 5 : 4;
	}
	
	bg_map[item.ty][item.tx] = item_tile+1;

	// draw map
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 16; x++) {
			uint8_t tile = bg_map[y][x];
			if (tile) {
				sprite_draw(MAP_TO_F(x), MAP_TO_F(y), tile-1);
			}
		}
	}
	
	// player
	sprite_draw_wrapped(player.pos.x, player.pos.y, 0);

	// thrust, every 2nd frame
	if (frame & 0x01) {
		if (player.accel.x < 0) {
			sprite_draw_wrapped(player.pos.x + SCREEN_TO_F(9), player.pos.y, 1);
		}
		else if (player.accel.x > 0) {
			sprite_draw_wrapped(player.pos.x - SCREEN_TO_F(9), player.pos.y, 2);
		}

		if (player.accel.y < 0) {
			sprite_draw_wrapped(player.pos.x, player.pos.y + SCREEN_TO_F(9), 3);
		}
	}

	// hud, fuel indicator
	uint8_t fuel_line = player.fuel >> 8;
	for (uint8_t i = 0; i < fuel_line; i++) {
		arduboy.drawPixel(128 - (i << 1), 0);
	}

	// hud, score
	write_int(116 + (score < 10 ? 6 : 0), 2, score);

	// game over
	if (is_game_over) {
		write_text(40, 24, "GAME OVER!");
	}
}

mode_t mode_game = {
	.init = game_init,
	.update = game_update,
	.draw = game_draw
};
