#ifndef GLOBAL_H
#define GLOBAL_H

#define MAX_X 1408
#define MAX_Y 1344

static const u16 color_black   		= RGB24_TO_VDPCOLOR(0x000000);
static const u16 color_magenta  	= RGB24_TO_VDPCOLOR(0xEA1487);
static const u16 color_white 	   	= RGB24_TO_VDPCOLOR(0xFFFFFF);
static const u16 color_dark_green	= RGB24_TO_VDPCOLOR(0x88C74E);
static const u16 color_light_green	= RGB24_TO_VDPCOLOR(0xBCD84A);
static const u16 color_light_blue	= RGB24_TO_VDPCOLOR(0x86D4F4);
static const u16 color_dark_blue	= RGB24_TO_VDPCOLOR(0x4F76A4);
static const u16 color_purple		= RGB24_TO_VDPCOLOR(0x672C89);
static const u16 color_orange		= RGB24_TO_VDPCOLOR(0xF3824A);
static const u16 color_yellow		= RGB24_TO_VDPCOLOR(0xFAE05A);

extern u32 _bend;
extern u16 nvramIndex;
extern vu8 hlineIndex;	// Horizontal raster line index (where are we on the screen?)

typedef struct Point_fix32 {
    fix32 x;
	fix32 y;
} Point_fix32_t;

typedef struct Point_s16 {
    s16 x;
	s16 y;
} Point_s16_t;

typedef struct Point_s32 {
    s32 x;
	s32 y;
} Point_s32_t;

#endif // GLOBAL_H
