/*******************************************************************************
 * Size: 8 px
 * Bpp: 1
 * Opts: --bpp 1 --size 8 --no-compress --font PressStart2P-Regular.ttf --range 32-127 --format lvgl -o press_start_2p_8.c
 ******************************************************************************/

#include "../../include/fonts/press_start_2p_8.h"

#include <lvgl.h>

#ifndef PRESS_START_2P_8
#define PRESS_START_2P_8 1
#endif

#if PRESS_START_2P_8

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xec, 0x30,

    /* U+0022 "\"" */
    0xde, 0xf6,

    /* U+0023 "#" */
    0x6d, 0xfd, 0xb3, 0x66, 0xdf, 0xdb, 0x0,

    /* U+0024 "$" */
    0x10, 0xfb, 0x43, 0xe1, 0x7f, 0x84, 0x0,

    /* U+0025 "%" */
    0x63, 0x4b, 0x20, 0x82, 0x69, 0x63, 0x0,

    /* U+0026 "&" */
    0x71, 0xb3, 0x63, 0x8d, 0xb9, 0x9f, 0x80,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x36, 0xcc, 0xc6, 0x30,

    /* U+0029 ")" */
    0xc6, 0x33, 0x36, 0xc0,

    /* U+002A "*" */
    0x6c, 0x73, 0xf9, 0xc6, 0xc0,

    /* U+002B "+" */
    0x30, 0xcf, 0xcc, 0x30,

    /* U+002C "," */
    0x6f, 0x0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x2, 0x8, 0x20, 0x82, 0x8, 0x20, 0x0,

    /* U+0030 "0" */
    0x38, 0x9b, 0x1e, 0x3c, 0x6c, 0x8e, 0x0,

    /* U+0031 "1" */
    0x31, 0xc3, 0xc, 0x30, 0xcf, 0xc0,

    /* U+0032 "2" */
    0x7d, 0x8c, 0x39, 0xe7, 0x9c, 0x3f, 0x80,

    /* U+0033 "3" */
    0x7e, 0x18, 0x61, 0xe0, 0x78, 0xdf, 0x0,

    /* U+0034 "4" */
    0x1c, 0x79, 0xb6, 0x6f, 0xe1, 0x83, 0x0,

    /* U+0035 "5" */
    0xfd, 0x83, 0xf0, 0x30, 0x78, 0xdf, 0x0,

    /* U+0036 "6" */
    0x3c, 0xc3, 0x7, 0xec, 0x78, 0xdf, 0x0,

    /* U+0037 "7" */
    0xff, 0x8c, 0x30, 0xc3, 0x6, 0xc, 0x0,

    /* U+0038 "8" */
    0x79, 0x8b, 0x93, 0xc9, 0xf0, 0xdf, 0x0,

    /* U+0039 "9" */
    0x7d, 0x8f, 0x1b, 0xf0, 0x61, 0x9e, 0x0,

    /* U+003A ":" */
    0xf3, 0xc0,

    /* U+003B ";" */
    0x6c, 0x37, 0x80,

    /* U+003C "<" */
    0x19, 0x99, 0x86, 0x18, 0x60,

    /* U+003D "=" */
    0xfe, 0x3, 0xf8,

    /* U+003E ">" */
    0xc3, 0xc, 0x33, 0x33, 0x0,

    /* U+003F "?" */
    0x7d, 0xff, 0x18, 0x63, 0x80, 0xe, 0x0,

    /* U+0040 "@" */
    0x7d, 0x6, 0xed, 0x5b, 0xf0, 0x1f, 0x0,

    /* U+0041 "A" */
    0x38, 0xdb, 0x1e, 0x3f, 0xf8, 0xf1, 0x80,

    /* U+0042 "B" */
    0xfd, 0x8f, 0x1f, 0xec, 0x78, 0xff, 0x0,

    /* U+0043 "C" */
    0x3c, 0xcf, 0x6, 0xc, 0xc, 0xcf, 0x0,

    /* U+0044 "D" */
    0xf9, 0x9b, 0x1e, 0x3c, 0x79, 0xbe, 0x0,

    /* U+0045 "E" */
    0xff, 0x83, 0x7, 0xec, 0x18, 0x3f, 0x80,

    /* U+0046 "F" */
    0xff, 0x83, 0x7, 0xec, 0x18, 0x30, 0x0,

    /* U+0047 "G" */
    0x3e, 0xc3, 0x6, 0x7c, 0x6c, 0xcf, 0x80,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1f, 0xfc, 0x78, 0xf1, 0x80,

    /* U+0049 "I" */
    0xfc, 0xc3, 0xc, 0x30, 0xcf, 0xc0,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x78, 0xdf, 0x0,

    /* U+004B "K" */
    0xc7, 0x9b, 0x67, 0x8f, 0x9b, 0xb3, 0x80,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xf, 0xc0,

    /* U+004D "M" */
    0xc7, 0xdf, 0xfe, 0xbd, 0x78, 0xf1, 0x80,

    /* U+004E "N" */
    0xc7, 0xcf, 0xde, 0xfc, 0xf8, 0xf1, 0x80,

    /* U+004F "O" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+0050 "P" */
    0xfd, 0x8f, 0x1e, 0x3f, 0xd8, 0x30, 0x0,

    /* U+0051 "Q" */
    0x7d, 0x8f, 0x1e, 0x3d, 0xf9, 0x9e, 0x80,

    /* U+0052 "R" */
    0xfd, 0x8f, 0x1e, 0x7f, 0x9b, 0xb3, 0x80,

    /* U+0053 "S" */
    0x7d, 0x8f, 0x3, 0xe0, 0x78, 0xdf, 0x0,

    /* U+0054 "T" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0x0,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xdf, 0x0,

    /* U+0056 "V" */
    0xc7, 0x8f, 0x1f, 0x77, 0xc7, 0x4, 0x0,

    /* U+0057 "W" */
    0xd7, 0xaf, 0x5e, 0xbf, 0xfd, 0xd1, 0x0,

    /* U+0058 "X" */
    0xc7, 0x8d, 0xb1, 0xc6, 0xd8, 0xf1, 0x80,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xde, 0x30, 0xc3, 0x0,

    /* U+005A "Z" */
    0xfe, 0x1c, 0x71, 0xc7, 0x1c, 0x3f, 0x80,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xf0,

    /* U+005C "\\" */
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0xf0,

    /* U+005E "^" */
    0x76, 0xc0,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x7c, 0xd, 0xfe, 0x37, 0xe0,

    /* U+0062 "b" */
    0xc1, 0x83, 0xf6, 0x3c, 0x78, 0xdf, 0x0,

    /* U+0063 "c" */
    0x7f, 0x83, 0x6, 0x7, 0xe0,

    /* U+0064 "d" */
    0x6, 0xd, 0xfe, 0x3c, 0x78, 0xdf, 0x80,

    /* U+0065 "e" */
    0x7d, 0x8f, 0xfe, 0x7, 0xc0,

    /* U+0066 "f" */
    0x1c, 0xcf, 0xcc, 0x30, 0xc3, 0x0,

    /* U+0067 "g" */
    0x7f, 0x8f, 0x1b, 0xf0, 0x6f, 0x80,

    /* U+0068 "h" */
    0xc1, 0x83, 0xf6, 0x3c, 0x78, 0xf1, 0x80,

    /* U+0069 "i" */
    0x30, 0x7, 0xc, 0x30, 0xcf, 0xc0,

    /* U+006A "j" */
    0x18, 0xe, 0x31, 0x8c, 0x7e,

    /* U+006B "k" */
    0xc1, 0x83, 0x1e, 0x6f, 0x99, 0xb1, 0x80,

    /* U+006C "l" */
    0x70, 0xc3, 0xc, 0x30, 0xcf, 0xc0,

    /* U+006D "m" */
    0xfd, 0x6e, 0xdd, 0xbb, 0x60,

    /* U+006E "n" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x60,

    /* U+006F "o" */
    0x7d, 0x8f, 0x1e, 0x37, 0xc0,

    /* U+0070 "p" */
    0xfd, 0x8f, 0x1f, 0xec, 0x18, 0x0,

    /* U+0071 "q" */
    0x7f, 0x8f, 0x1b, 0xf0, 0x60, 0xc0,

    /* U+0072 "r" */
    0xdf, 0x8c, 0x30, 0xc0,

    /* U+0073 "s" */
    0x7d, 0x81, 0xf0, 0x3f, 0xc0,

    /* U+0074 "t" */
    0x30, 0xcf, 0xcc, 0x30, 0xc3, 0x0,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x37, 0xe0,

    /* U+0076 "v" */
    0xcf, 0x3c, 0xde, 0x30,

    /* U+0077 "w" */
    0xd7, 0xaf, 0x5e, 0xb6, 0xc0,

    /* U+0078 "x" */
    0xc6, 0xd8, 0xe3, 0x6c, 0x60,

    /* U+0079 "y" */
    0xc7, 0x8f, 0x1b, 0xf0, 0x6f, 0x80,

    /* U+007A "z" */
    0xfe, 0x38, 0xe3, 0x8f, 0xe0,

    /* U+007B "{" */
    0x36, 0x6c, 0x66, 0x30,

    /* U+007C "|" */
    0xff, 0xfc,

    /* U+007D "}" */
    0xc6, 0x63, 0x66, 0xc0,

    /* U+007E "~" */
    0x71, 0x74, 0x70,

    /* U+007F "" */
    0xde, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 128, .box_w = 3, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 4, .adv_w = 128, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 6, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 13, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 20, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 27, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 34, .adv_w = 128, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 35, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 39, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 43, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 48, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 52, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 55, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 56, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 63, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 70, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 76, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 83, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 90, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 97, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 104, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 111, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 118, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 125, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 132, .adv_w = 128, .box_w = 2, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 134, .adv_w = 128, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 137, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 142, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 145, .adv_w = 128, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 150, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 157, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 164, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 171, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 178, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 185, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 192, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 199, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 206, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 213, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 220, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 226, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 233, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 240, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 246, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 253, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 260, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 267, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 274, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 281, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 288, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 295, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 301, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 308, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 315, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 322, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 329, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 335, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 342, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 346, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 353, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 357, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 359, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 6},
    {.bitmap_index = 361, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 366, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 373, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 378, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 385, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 390, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 396, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 409, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 415, .adv_w = 128, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 427, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 433, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 438, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 443, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 448, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 464, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 469, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 475, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 480, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 484, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 489, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 494, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 505, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 509, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 511, .adv_w = 128, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 515, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 518, .adv_w = 128, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t press_start_2p_8 = {
#else
lv_font_t press_start_2p_8 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 8,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if PRESS_START_2P_8*/

