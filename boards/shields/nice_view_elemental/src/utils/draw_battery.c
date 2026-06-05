#include "../../include/utils/draw_battery.h"

#include <lvgl.h>
#include "../../include/colors.h"
#include "../../include/utils/draw_image.h"
#include "../../include/main.h"

LV_IMG_DECLARE(battery);
LV_IMG_DECLARE(battery_bolt);

// This is somewhat of a reimplementation of `lv_draw_rect`. That function consistently crashed once the fill width
// crossed 16 out of 19 pixels. Direct pixel writes were stable.
static void fill_rect_pixels(
    lv_obj_t* canvas,
    lv_coord_t x,
    lv_coord_t y,
    lv_coord_t width,
    lv_coord_t height,
    lv_color_t color,
    lv_opa_t opa
) {
    for (lv_coord_t pixel_x = 0; pixel_x < width; pixel_x++) {
        for (lv_coord_t pixel_y = 0; pixel_y < height; pixel_y++) {
            lv_canvas_set_px(canvas, x + pixel_x, y + pixel_y, color, opa);
        }
    }
}

void draw_battery(lv_obj_t* canvas, lv_coord_t x, lv_coord_t y, struct battery_state state) {
    draw_image(&battery, canvas, x, y);

    const lv_coord_t fill_x = x + 3;
    const lv_coord_t fill_y = y + 3;
    const lv_coord_t fill_width = 19;
    const lv_coord_t fill_height = 7;
    const uint8_t clamped_level = LV_MIN(state.level, 100);
    const lv_coord_t filled_width = (fill_width * clamped_level) / 100;

    fill_rect_pixels(canvas, fill_x, fill_y, filled_width, fill_height, FOREGROUND_COLOR, LV_OPA_COVER);

    if (filled_width > 0) {
        lv_canvas_set_px(canvas, fill_x, fill_y, BACKGROUND_COLOR, LV_OPA_COVER);
        lv_canvas_set_px(canvas, fill_x, fill_y + fill_height - 1, BACKGROUND_COLOR, LV_OPA_COVER);

        const lv_coord_t right_x = fill_x + filled_width - 1;
        lv_canvas_set_px(canvas, right_x, fill_y, BACKGROUND_COLOR, LV_OPA_COVER);
        lv_canvas_set_px(canvas, right_x, fill_y + fill_height - 1, BACKGROUND_COLOR, LV_OPA_COVER);
    }

    if (state.is_charging) {
        draw_image(&battery_bolt, canvas, x + 11, y + 3);
    }
}
