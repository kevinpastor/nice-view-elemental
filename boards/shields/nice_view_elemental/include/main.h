#pragma once

#include <zmk/display/status_screen.h>

#include <lvgl.h>

#define SCREEN_WIDTH 160
#define SCREEN_HEIGHT 68

#define COLOR_FORMAT LV_COLOR_FORMAT_ARGB8888

#define PADDING 2

#define STATUS_HEIGHT 21

#define BORDER_WIDTH 1

#define BATTERY_CANVAS_WIDTH 26
#define BATTERY_CANVAS_HEIGHT 13

#define CONNECTIVITY_CANVAS_WIDTH 30
#define CONNECTIVITY_CANVAS_HEIGHT 19

#define IMAGE_CANVAS_WIDTH 116
#define IMAGE_CANVAS_HEIGHT 64

#define MODIFIERS_GAP 1
#define MODIFIERS_COUNT 4
#define MODIFIER_FONT_WIDTH 7
#define MODIFIER_PADDING_X 1
#define MODIFIER_WIDTH (MODIFIER_FONT_WIDTH + 2 * MODIFIER_PADDING_X + 2 * BORDER_WIDTH)
#define MODIFIERS_CANVAS_WIDTH (MODIFIERS_COUNT * MODIFIER_WIDTH + (MODIFIERS_COUNT - 1) * MODIFIERS_GAP)
#define MODIFIER_PADDING_Y 3
#define MODIFIERS_CANVAS_HEIGHT 15

#define LAYER_CANVAS_WIDTH (SCREEN_WIDTH - 2 * PADDING)
// This seemingly magic number comes from the font line height used, but the
// variable cannot be used since it is not a static constant.
#define LAYER_CANVAS_HEIGHT 26

extern lv_obj_t* battery_canvas;
extern lv_color_t battery_canvas_buffer[];

extern lv_obj_t* connectivity_canvas;
extern lv_color_t connectivity_canvas_buffer[];

extern lv_obj_t* layer_canvas;
extern lv_color_t layer_canvas_buffer[];

extern lv_obj_t* modifiers_canvas;
extern lv_color_t modifiers_canvas_buffer[];

extern lv_obj_t* image_canvas;
