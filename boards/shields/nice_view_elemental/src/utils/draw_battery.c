#include "../../include/utils/draw_battery.h"

#include <lvgl.h>
#include "../../include/colors.h"
#include "../../include/utils/draw_image.h"

LV_IMG_DECLARE(battery);
LV_IMG_DECLARE(battery_bolt);

void draw_battery(lv_obj_t* canvas, lv_coord_t x, lv_coord_t y, struct battery_state state) {
    draw_image(&battery, canvas, x, y);

    // Draw the main part of the battery
    // const int width = 19 * (state.level / 100.0);
    // ! TODO Fix freezing issue when battery nearing 100%. 19 should be the max width, but from 17 on, the keyboard freezes.
    const int width = 16 * (state.level / 100.0);
    if (width > 0) {
        lv_layer_t layer;
        lv_canvas_init_layer(canvas, &layer);

        lv_draw_rect_dsc_t rect_dsc;
        lv_draw_rect_dsc_init(&rect_dsc);
        rect_dsc.bg_color = FOREGROUND_COLOR;
        lv_area_t coords = { 
            x + 3,
            y + 3,
            x + 3 + width - 1,
            y + 3 + 7 - 1
        };
        lv_draw_rect(&layer, &rect_dsc, &coords);
        
        lv_canvas_finish_layer(canvas, &layer);

        // Round the corners
        lv_canvas_set_px(canvas, x + 3, y + 3, BACKGROUND_COLOR, LV_OPA_COVER); // Top left
        lv_canvas_set_px(canvas, x + 21, y + 3, BACKGROUND_COLOR, LV_OPA_COVER); // Top right
        lv_canvas_set_px(canvas, x + 21, y + 9, BACKGROUND_COLOR, LV_OPA_COVER); // Bottom right
        lv_canvas_set_px(canvas, x + 3, y + 9, BACKGROUND_COLOR, LV_OPA_COVER); // Bottom left
    }

    if (state.is_charging) {
        draw_image(&battery_bolt, canvas, x + 10, y + 3);
    }
}
