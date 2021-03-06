#ifndef DATA_H
#define DATA_H

const unsigned char PROGMEM title_image[] =
{
// width, height,
80, 24,
0x00, 0xfe, 0xfe, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x00, 0xfe, 0xfe, 0x36, 0x36, 0x36, 0xf6, 0xf6, 0x3e, 0x00, 0xfe, 0xfe, 0x36, 0x36, 0x36, 0x36, 0xf6, 0xfe, 0x00, 0x06, 0x06, 0x06, 0xfe, 0xfe, 0x06, 0x06, 0x06, 0x00, 0xfe, 0xfe, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xe1, 0xe1, 0x61, 0x61, 0x61, 0x61, 0x61, 0x61, 0x00, 0x01, 0xe1, 0xe0, 0x60, 0x60, 0x60, 0x61, 0xe1, 0xe0, 0x01, 0xe1, 0xe0, 0xc0, 0x80, 0x00, 0x01, 0x01, 0xe0, 0x00, 0xe0, 0xe0, 0x61, 0x61, 0x60, 0x60, 0x60, 0x60, 0x01, 0x01, 0xe1, 0xe1, 0x01, 0x01, 0x01, 0x01, 0x00, 0xe0, 0x00, 0xe0, 0xe0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0xe0, 0xe0, 0x00, 0xe0, 0xe0, 0x60, 0x60, 0x60, 0x60, 0xe0, 0xe0, 0x00, 0xe0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 
0x00, 0x1f, 0x1f, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x1f, 0x1f, 0x18, 0x18, 0x18, 0x18, 0x1f, 0x1f, 0x00, 0x1f, 0x1f, 0x01, 0x03, 0x07, 0x0c, 0x1f, 0x1f, 0x00, 0x1f, 0x1f, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x1f, 0x1f, 0x18, 0x18, 0x18, 0x18, 0x1f, 0x1f, 0x00, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1f, 0x1f, 0x00, 0x1f, 0x1f, 0x00, 0x1f, 0x1f, 0x18, 0x18, 0x18, 0x18, 0x1f, 0x1f, 0x00, 0x1f, 0x1f, 0x01, 0x03, 0x07, 0x0c, 0x1f, 0x1f, 0x00, 0x00, 0x00, 
};

const unsigned char PROGMEM bg_image[] =
{
// width, height,
128, 64,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x02, 0x12, 0x14, 0x04, 0x04, 0x04, 0x28, 0x08, 0x18, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0f, 0x12, 0x02, 0x04, 0x00, 0x00, 0x30, 0x20, 0x00, 0x40, 0x00, 0x80, 0x00, 0x00, 0x00, 0x10, 0x60, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xc0, 0x42, 0x02, 0x80, 0xe1, 0x50, 0x08, 0x6c, 0x42, 0x01, 0x30, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x30, 0x40, 0x40, 0x80, 0x20, 0x68, 0x4c, 0x20, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x38, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x0f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xb0, 0x10, 0x10, 0x90, 0x88, 0x08, 0x00, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x1b, 0x01, 0x00, 0xc8, 0x38, 0x4f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x41, 0x60, 0x18, 0x06, 0x00, 0x00, 0x00, 0x00, 0x60, 0x1c, 0x80, 0x30, 0x10, 0x10, 0x10, 0x1c, 0x0c, 0x10, 0x10, 0x30, 0x00, 0x3b, 0xf4, 0x20, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x37, 0x10, 0x18, 0x0c, 0x02, 0x02, 0x0e, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x30, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 0x0c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xe0, 0xa0, 0xa0, 0xa0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0xd0, 0xc0, 0xc0, 0xc0, 0xc2, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xa0, 0xa0, 0xa0, 0xa0, 0xe0, 0xe0, 0xe0, 0xe0, 0xa0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x60, 0x60, 0xe0, 0xe0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe0, 0x60, 0x60, 0x60, 0x60, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xa0, 0xa0, 0xa0, 0xa0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 
};

const unsigned char PROGMEM sprite_sheet[] =
{
	// width, height,
	8, 8,
	// FRAME 00 player
	0x7c, 0x7c, 0xc2, 0xfe, 0xda, 0xfe, 0x42, 0x7e, 
	0x42, 0x7e, 0xda, 0xfe, 0xc2, 0xfe, 0x7c, 0x7c, 

	// FRAME 01 thrust right
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 
	0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 

	// FRAME 02 thrust left
	0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 
	0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 

	// FRAME 03 thrust down
	0x00, 0x00, 0xb7, 0xb7, 0xb7, 0xb7, 0x00, 0x00, 
	0x00, 0x00, 0xb7, 0xb7, 0xb7, 0xb7, 0x00, 0x00, 

	// FRAME 04 fuel 1
	0x00, 0x00, 0x66, 0x66, 0x5a, 0x7e, 0x24, 0x3c, 
	0x24, 0x3c, 0x5a, 0x7e, 0x66, 0x66, 0x00, 0x00, 
	
	// FRAME 05 fuel 2
	0x00, 0x00, 0x00, 0x66, 0x24, 0x7e, 0x18, 0x3c, 
	0x18, 0x3c, 0x24, 0x7e, 0x00, 0x66, 0x00, 0x00, 

	// FRAME 06 crate 1
	0xc3, 0xff, 0x81, 0xff, 0x24, 0xff, 0x18, 0xff, 
	0x18, 0xff, 0x24, 0xff, 0x81, 0xff, 0xc3, 0xff, 

	// FRAME 07 crate 2
	0xdb, 0xff, 0x81, 0xff, 0x24, 0xff, 0x99, 0xff, 
	0x99, 0xff, 0x24, 0xff, 0x81, 0xff, 0xdb, 0xff, 

	// FRAME 08 solid
	0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0xe7, 0xff, 
	0xe7, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff,
};

#endif