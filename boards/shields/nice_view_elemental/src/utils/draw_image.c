#include "../../include/utils/draw_image.h"

#include <lvgl.h>

void draw_image(const lv_image_dsc_t* image, lv_obj_t* canvas, lv_coord_t x, lv_coord_t y) {
    lv_layer_t layer;
    lv_canvas_init_layer(canvas, &layer);

    lv_draw_image_dsc_t dsc;
    lv_draw_image_dsc_init(&dsc);
    dsc.src = image;

    lv_area_t coords = {
        x,
        y,
        x + image->header.w - 1,
        y + image->header.h - 1
    };
   
    lv_draw_image(&layer, &dsc, &coords);

    lv_canvas_finish_layer(canvas, &layer);
}
