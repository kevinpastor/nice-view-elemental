/*******************************************************************************
 * Size: 43 px
 * Bpp: 1
 * Opts: --bpp 1 --size 43 --no-compress --font Custom Font Outline.ttf --range 32-127 --format lvgl -o custom_font_outline.c
 ******************************************************************************/

// I'm not sure why I had to add 2 to the size I was using in Photopea, which was 41.

#include "../../include/fonts/custom_font_outline.h"

#ifndef CUSTOM_FONT_OUTLINE
#define CUSTOM_FONT_OUTLINE 1
#endif

#if CUSTOM_FONT_OUTLINE

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0041 "A" */
    0x3, 0xff, 0xf0, 0x0, 0xff, 0xfc, 0x0, 0x3f,
    0xff, 0x0, 0xf, 0xff, 0xc0, 0x3, 0xff, 0xf0,
    0x0, 0xff, 0xfc, 0x0, 0xff, 0xff, 0xc0, 0x3f,
    0xff, 0xf0, 0xf, 0xff, 0xfc, 0x3, 0xff, 0xff,
    0x0, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xf0, 0xf,
    0xff, 0xfc, 0x3, 0xff, 0xff, 0x0, 0xff, 0xff,
    0xc0, 0x3f, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xf,
    0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0, 0xff, 0xff,
    0xfc, 0x3f, 0xff, 0xff, 0xf, 0xff, 0xff, 0xc3,
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff,
    0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0,
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+0042 "B" */
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff,
    0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff,
    0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff,
    0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff,
    0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff,
    0xff, 0xfc, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xf0,

    /* U+0043 "C" */
    0x3f, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0xf, 0xff, 0xc0,
    0xff, 0xfc, 0xf, 0xff, 0xc0, 0xff, 0xfc, 0xf,
    0xff, 0xc0, 0xff, 0xfc, 0xf, 0xff, 0xc0, 0xff,
    0xfc, 0xf, 0xff, 0xc0, 0xff, 0xfc, 0xf, 0xff,
    0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f,
    0xff, 0xc3, 0xff, 0xfc,

    /* U+0044 "D" */
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff,
    0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff,
    0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff,
    0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff,
    0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff,
    0xff, 0xfc, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xf0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x3f, 0xff, 0xfc, 0xff, 0xff, 0xf3, 0xff,
    0xff, 0xf, 0xff, 0xfc, 0x3f, 0xff, 0xf0, 0xff,
    0xff, 0xc3, 0xff, 0xff, 0xf, 0xff, 0xfc, 0x3f,
    0xff, 0xf0, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf,
    0xff, 0xfc, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xc3,
    0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x3f, 0xff, 0xfc, 0xff, 0xff, 0xf3, 0xff,
    0xff, 0xf, 0xff, 0xfc, 0x3f, 0xff, 0xf0, 0xff,
    0xff, 0xc3, 0xff, 0xff, 0xf, 0xff, 0xfc, 0x3f,
    0xff, 0xf0, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf,
    0xff, 0xfc, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xc3,
    0xff, 0xf0, 0xf, 0xff, 0xc0, 0xff, 0xff, 0xc3,
    0xff, 0xff, 0xf, 0xff, 0xfc, 0x3f, 0xff, 0xf0,
    0xff, 0xff, 0xc3, 0xff, 0xff, 0xf, 0xff, 0xfc,
    0x3f, 0xff, 0xf0, 0xff, 0xff, 0xc3, 0xff, 0xff,
    0xf, 0xff, 0xfc, 0x3f, 0xff, 0xf0,

    /* U+0047 "G" */
    0x3f, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf3, 0xff, 0xff, 0xcf, 0xff, 0xff,

    /* U+0048 "H" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff,
    0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xf,
    0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0, 0xff, 0xff,
    0xfc, 0x3f, 0xff, 0xff, 0xf, 0xff, 0xff, 0xc3,
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff,
    0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0,
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x3f, 0xff, 0xf, 0xff, 0xc3,
    0xff, 0xf0, 0xff, 0xfc, 0x3f, 0xff, 0xf, 0xff,
    0xc3, 0xff, 0xf0, 0xff, 0xfc, 0x3f, 0xff, 0xf,
    0xff, 0xc3, 0xff, 0xf0, 0xff, 0xfc, 0x3f, 0xff,
    0xf, 0xff, 0xc3, 0xff, 0xf0, 0xff, 0xfc, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+004A "J" */
    0x3f, 0xff, 0xf3, 0xff, 0xff, 0x3f, 0xff, 0xf3,
    0xff, 0xff, 0x3f, 0xff, 0xf3, 0xff, 0xff, 0x3f,
    0xff, 0xf3, 0xff, 0xff, 0x3f, 0xff, 0xf3, 0xff,
    0xff, 0x3f, 0xff, 0xf3, 0xff, 0xff, 0xf, 0xff,
    0xc0, 0xff, 0xfc, 0xf, 0xff, 0xc0, 0xff, 0xfc,
    0xf, 0xff, 0xc0, 0xff, 0xfc, 0xf, 0xff, 0xc0,
    0xff, 0xfc, 0xf, 0xff, 0xc0, 0xff, 0xfc, 0xf,
    0xff, 0xc0, 0xff, 0xfc, 0xf, 0xff, 0xc0, 0xff,
    0xfc, 0xf, 0xff, 0xc0, 0xff, 0xfc, 0xff, 0xff,
    0xcf, 0xff, 0xfc, 0xff, 0xff, 0xcf, 0xff, 0xfc,
    0xff, 0xff, 0xcf, 0xff, 0xfc, 0xff, 0xff, 0xcf,
    0xff, 0xfc, 0xff, 0xff, 0xcf, 0xff, 0xfc, 0xff,
    0xff, 0xf, 0xff, 0xf0,

    /* U+004B "K" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff,
    0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xfc, 0xf,
    0xff, 0xff, 0x3, 0xff, 0xff, 0xc0, 0xff, 0xff,
    0xf0, 0x3f, 0xff, 0xfc, 0xf, 0xff, 0xff, 0x3,
    0xff, 0xff, 0xc0, 0xff, 0xff, 0xf0, 0x3f, 0xff,
    0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0,
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+004C "L" */
    0xff, 0xff, 0xc3, 0xff, 0xff, 0xf, 0xff, 0xfc,
    0x3f, 0xff, 0xf0, 0xff, 0xff, 0xc3, 0xff, 0xff,
    0xf, 0xff, 0xfc, 0x3f, 0xff, 0xf0, 0xff, 0xff,
    0xc3, 0xff, 0xff, 0xf, 0xff, 0xfc, 0x3f, 0xff,
    0xf0, 0x3f, 0xff, 0x0, 0xff, 0xfc, 0x3, 0xff,
    0xf0, 0xf, 0xff, 0xc0, 0x3f, 0xff, 0x0, 0xff,
    0xfc, 0x3, 0xff, 0xf0, 0xf, 0xff, 0xc0, 0x3f,
    0xff, 0x0, 0xff, 0xfc, 0x3, 0xff, 0xf0, 0xf,
    0xff, 0xc0, 0x3f, 0xff, 0x0, 0xff, 0xfc, 0x3,
    0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+004D "M" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc,
    0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc,
    0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc,
    0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc,
    0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc,
    0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc,
    0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc,
    0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+004E "N" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff,
    0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xf,
    0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0, 0xff, 0xff,
    0xfc, 0x3f, 0xff, 0xff, 0xf, 0xff, 0xff, 0xc3,
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff,
    0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0,
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0x3f, 0xff,
    0xff, 0xcf, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xfc,
    0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xcf, 0xff,
    0xff, 0xf3, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff,
    0x3f, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xf3, 0xff,
    0xff, 0xfc,

    /* U+004F "O" */
    0x3f, 0xff, 0xf0, 0xff, 0xff, 0xcf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf3, 0xff, 0xff, 0xf, 0xff, 0xfc,

    /* U+0050 "P" */
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff,
    0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff,
    0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff,
    0x3f, 0xff, 0xfc, 0x3f, 0xff, 0xfc, 0x3f, 0xff,
    0xf0, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xc0, 0xff,
    0xff, 0xc0, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xc0, 0xff, 0xff, 0xc0, 0xff, 0xff,
    0xc0, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xc0, 0xff,
    0xff, 0xc0, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xc0,

    /* U+0051 "Q" */
    0x3f, 0xff, 0xf0, 0x3f, 0xff, 0xf0, 0xff, 0xff,
    0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff,
    0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc,
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff,
    0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff,
    0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc,
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff,
    0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff,
    0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc,
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff,
    0xfc, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xff,
    0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x3f, 0xff, 0xff, 0x3f, 0xff, 0xff,
    0x1, 0xff, 0xff, 0x1, 0xff, 0xff,

    /* U+0052 "R" */
    0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xf, 0xff,
    0xff, 0xf3, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff,
    0x3f, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xf3, 0xff,
    0xff, 0xfc, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff,
    0xcf, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xfc, 0x3f,
    0xff, 0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff,
    0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xf,
    0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0, 0xff, 0xff,
    0xfc, 0x3f, 0xff, 0xff, 0xf, 0xff, 0xff, 0xc3,
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff,
    0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0,
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+0053 "S" */
    0x3f, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xfc,
    0xff, 0xff, 0xcf, 0xff, 0xfc, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f,
    0xff, 0xf3, 0xff, 0xff, 0x3f, 0xff, 0xf3, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xcf, 0xff, 0xfc,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff,
    0x0, 0xf, 0xff, 0xc0, 0x3, 0xff, 0xf0, 0x0,
    0xff, 0xfc, 0x0, 0x3f, 0xff, 0x0, 0xf, 0xff,
    0xc0, 0x3, 0xff, 0xf0, 0x0, 0xff, 0xfc, 0x0,
    0x3f, 0xff, 0x0, 0xf, 0xff, 0xc0, 0x3, 0xff,
    0xf0, 0x0, 0xff, 0xfc, 0x0, 0x3f, 0xff, 0x0,
    0xf, 0xff, 0xc0, 0xf, 0xff, 0xfc, 0x3, 0xff,
    0xff, 0x0, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xf0,
    0xf, 0xff, 0xfc, 0x3, 0xff, 0xff, 0x0, 0xff,
    0xff, 0xc0, 0x3f, 0xff, 0xf0, 0xf, 0xff, 0xfc,
    0x3, 0xff, 0xff, 0x0, 0xff, 0xff, 0xc0, 0x3f,
    0xff, 0xf0,

    /* U+0055 "U" */
    0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xcf, 0xff,
    0xff, 0xf3, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff,
    0x3f, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xf3, 0xff,
    0xff, 0xfc, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff,
    0xcf, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xfc, 0x3f,
    0xff, 0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff,
    0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xf,
    0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0, 0xff, 0xff,
    0xfc, 0x3f, 0xff, 0xff, 0xf, 0xff, 0xff, 0xc3,
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff,
    0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0,
    0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xcf, 0xff,
    0xff, 0xf3, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff,
    0x3f, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xf3, 0xff,
    0xff, 0xfc, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff,
    0xcf, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x3f,
    0xff, 0xff,

    /* U+0056 "V" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff,
    0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xf,
    0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0, 0xff, 0xff,
    0xfc, 0x3f, 0xff, 0xff, 0xf, 0xff, 0xff, 0xc0,
    0xff, 0xff, 0xc0, 0x3f, 0xff, 0xf0, 0xf, 0xff,
    0xfc, 0x3, 0xff, 0xff, 0x0, 0xff, 0xff, 0xc0,
    0x3f, 0xff, 0xf0, 0xf, 0xff, 0xfc, 0x3, 0xff,
    0xff, 0x0, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xf0,
    0x3, 0xff, 0xf0, 0x0, 0xff, 0xfc, 0x0, 0x3f,
    0xff, 0x0, 0xf, 0xff, 0xc0, 0x3, 0xff, 0xf0,
    0x0, 0xff, 0xfc, 0x0, 0x3f, 0xff, 0x0, 0xf,
    0xff, 0xc0,

    /* U+0057 "W" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xf,
    0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xf0,
    0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff,
    0xf, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff,
    0xf0, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff,
    0xff, 0xf, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff,
    0xff, 0xc0, 0x3f, 0xff, 0xff, 0xf0, 0xf, 0xff,
    0xff, 0xfc, 0x3, 0xff, 0xff, 0xff, 0x0, 0xff,
    0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xf0, 0xf,
    0xff, 0xff, 0xfc, 0x3, 0xff, 0xff, 0xff, 0x0,
    0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xf0,
    0x3, 0xff, 0xff, 0xf0, 0x0, 0xff, 0xff, 0xfc,
    0x0, 0x3f, 0xff, 0xff, 0x0, 0xf, 0xff, 0xff,
    0xc0, 0x3, 0xff, 0xff, 0xf0, 0x0, 0xff, 0xff,
    0xfc, 0x0, 0x3f, 0xff, 0xff, 0x0, 0xf, 0xff,
    0xff, 0xc0,

    /* U+0058 "X" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff,
    0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xf,
    0xff, 0xff, 0xc0, 0xff, 0xff, 0xc0, 0x3f, 0xff,
    0xf0, 0xf, 0xff, 0xfc, 0x3, 0xff, 0xff, 0x3,
    0xff, 0xff, 0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff,
    0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf0,
    0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff,

    /* U+0059 "Y" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f,
    0xff, 0xff, 0xf, 0xff, 0xff, 0xc3, 0xff, 0xff,
    0xf0, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xf,
    0xff, 0xff, 0xc0, 0xff, 0xff, 0xc0, 0x3f, 0xff,
    0xf0, 0xf, 0xff, 0xfc, 0x3, 0xff, 0xff, 0x0,
    0xff, 0xff, 0xc0, 0x3f, 0xff, 0xf0, 0xf, 0xff,
    0xfc, 0x3, 0xff, 0xff, 0x0, 0x3f, 0xff, 0x0,
    0xf, 0xff, 0xc0, 0xf, 0xff, 0xfc, 0x3, 0xff,
    0xff, 0x0, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xf0,
    0xf, 0xff, 0xfc, 0x3, 0xff, 0xff, 0x0, 0xff,
    0xff, 0xc0, 0x3f, 0xff, 0xf0, 0xf, 0xff, 0xfc,
    0x3, 0xff, 0xff, 0x0, 0xff, 0xff, 0xc0, 0x3f,
    0xff, 0xf0,

    /* U+005A "Z" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x3f, 0xff, 0xf3, 0xff, 0xff,
    0x3f, 0xff, 0xf3, 0xff, 0xff, 0x3f, 0xff, 0xc3,
    0xff, 0xfc, 0xff, 0xff, 0xcf, 0xff, 0xfc, 0xff,
    0xff, 0xcf, 0xff, 0xfc, 0xff, 0xff, 0xf, 0xff,
    0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 32, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 288, .box_w = 26, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 131, .adv_w = 288, .box_w = 24, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 251, .adv_w = 224, .box_w = 20, .box_h = 40, .ofs_x = -1, .ofs_y = -5},
    {.bitmap_index = 351, .adv_w = 288, .box_w = 24, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 471, .adv_w = 208, .box_w = 22, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 581, .adv_w = 224, .box_w = 22, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 691, .adv_w = 288, .box_w = 22, .box_h = 40, .ofs_x = -1, .ofs_y = -5},
    {.bitmap_index = 801, .adv_w = 288, .box_w = 26, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 931, .adv_w = 160, .box_w = 18, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 1021, .adv_w = 192, .box_w = 20, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 1121, .adv_w = 288, .box_w = 26, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 1251, .adv_w = 224, .box_w = 22, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 1361, .adv_w = 384, .box_w = 32, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 1521, .adv_w = 288, .box_w = 26, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 1651, .adv_w = 288, .box_w = 22, .box_h = 40, .ofs_x = -1, .ofs_y = -5},
    {.bitmap_index = 1761, .adv_w = 256, .box_w = 24, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 1881, .adv_w = 288, .box_w = 24, .box_h = 42, .ofs_x = -1, .ofs_y = -7},
    {.bitmap_index = 2007, .adv_w = 288, .box_w = 26, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 2137, .adv_w = 192, .box_w = 20, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 2237, .adv_w = 288, .box_w = 26, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 2367, .adv_w = 288, .box_w = 26, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 2497, .adv_w = 288, .box_w = 26, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 2627, .adv_w = 416, .box_w = 34, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 2797, .adv_w = 288, .box_w = 26, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 2927, .adv_w = 288, .box_w = 26, .box_h = 40, .ofs_x = -3, .ofs_y = -5},
    {.bitmap_index = 3057, .adv_w = 192, .box_w = 20, .box_h = 40, .ofs_x = -3, .ofs_y = -5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 1, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 2,
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
    .cmap_num = 2,
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
const lv_font_t custom_font_outline = {
#else
lv_font_t custom_font_outline = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 42,          /*The maximum line height required by the font*/
    .base_line = 7,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if CUSTOM_FONT_OUTLINE*/
