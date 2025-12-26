#include "../include/render.h"

#include <ctype.h>
#include <lvgl.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <zephyr/sys/util.h>
#include "../include/colors.h"
#include "../include/initialize_listeners.h"
#include "../include/fonts/press_start_2p_8.h"
#include "../include/fonts/press_start_2p_16.h"
#include "../include/fonts/press_start_2p_24.h"
#include "../include/main.h"
#include "../include/utils/draw_battery.h"
#include "../include/utils/draw_image.h"

LV_IMG_DECLARE(bluetooth_connected);
LV_IMG_DECLARE(bluetooth_disconnected);
LV_IMG_DECLARE(bluetooth_searching);
LV_IMG_DECLARE(usb);

void draw_label_with_outline(
    lv_obj_t* canvas,
    lv_layer_t* layer,
    lv_draw_label_dsc_t* dsc,
    lv_area_t* origin,
    lv_color_t outline_color
) {
    lv_color_t initial_color = dsc->color;
    dsc->color = outline_color;

    { // Top left
        lv_area_t coords = {
            origin->x1 - 1,
            origin->y1 - 1,
            origin->x2 - 1,
            origin->y2 - 1
        };
        lv_draw_label(
            layer,
            dsc,
            &coords
        );
        lv_canvas_finish_layer(canvas, layer);
    }
    { // Top right
        lv_area_t coords = {
            origin->x1 + 1,
            origin->y1 - 1,
            origin->x2 + 1,
            origin->y2 - 1
        };
        lv_draw_label(
            layer,
            dsc,
            &coords
        );
        lv_canvas_finish_layer(canvas, layer);
    }
    { // Bottom left
        lv_area_t coords = {
            origin->x1 - 1,
            origin->y1 + 1,
            origin->x2 - 1,
            origin->y2 + 1
        };
        lv_draw_label(
            layer,
            dsc,
            &coords
        );
        lv_canvas_finish_layer(canvas, layer);
    }
    {
        lv_area_t coords = {
            origin->x1 + 1,
            origin->y1 + 1,
            origin->x2 + 1,
            origin->y2 + 1
        };
        lv_draw_label(
            layer,
            dsc,
            &coords
        );
    }

    dsc->color = initial_color;
    lv_draw_label(
        layer,
        dsc,
        origin
    );
    lv_canvas_finish_layer(canvas, layer);
}

void rotate_battery_canvas() {
    static lv_color_t tmp_buffer[
        LV_CANVAS_BUF_SIZE(
            BATTERY_CANVAS_WIDTH,
            BATTERY_CANVAS_HEIGHT,
            LV_COLOR_FORMAT_GET_BPP(LV_COLOR_FORMAT_ARGB8888),
            LV_DRAW_BUF_STRIDE_ALIGN
        )
    ];
    memcpy(tmp_buffer, battery_canvas_buffer, sizeof(tmp_buffer));

    const uint32_t stride = lv_draw_buf_width_to_stride(BATTERY_CANVAS_WIDTH, LV_COLOR_FORMAT_ARGB8888);
    lv_draw_sw_rotate(
        tmp_buffer,
        battery_canvas_buffer,
        BATTERY_CANVAS_WIDTH,
        BATTERY_CANVAS_HEIGHT,
        stride,
        stride,
        LV_DISPLAY_ROTATION_180,
        LV_COLOR_FORMAT_ARGB8888
    );
}

void render_battery() {
    lv_canvas_fill_bg(battery_canvas, BACKGROUND_COLOR, LV_OPA_TRANSP);

    draw_battery(battery_canvas, 0, 0, states.battery);

#if (defined(CONFIG_ZMK_SPLIT) && !defined(CONFIG_ZMK_SPLIT_ROLE_CENTRAL))
    rotate_battery_canvas();
#endif
}

void rotate_connectivity_canvas() {
    static lv_color_t tmp_buffer[
        LV_CANVAS_BUF_SIZE(
            CONNECTIVITY_CANVAS_WIDTH,
            CONNECTIVITY_CANVAS_HEIGHT,
            LV_COLOR_FORMAT_GET_BPP(COLOR_FORMAT),
            LV_DRAW_BUF_STRIDE_ALIGN
        )
    ];
    memcpy(tmp_buffer, connectivity_canvas_buffer, sizeof(tmp_buffer));

    lv_canvas_fill_bg(connectivity_canvas, BACKGROUND_COLOR, LV_OPA_0);

    const uint32_t stride = lv_draw_buf_width_to_stride(CONNECTIVITY_CANVAS_WIDTH, COLOR_FORMAT);
    lv_draw_sw_rotate(
        tmp_buffer,
        connectivity_canvas_buffer,
        CONNECTIVITY_CANVAS_WIDTH,
        CONNECTIVITY_CANVAS_HEIGHT,
        stride,
        stride,
        LV_DISPLAY_ROTATION_180,
        COLOR_FORMAT
    );
}



#if (defined(CONFIG_ZMK_SPLIT) && defined(CONFIG_ZMK_SPLIT_ROLE_CENTRAL))
static void render_bluetooth_logo() {
    if (states.connectivity.active_profile_bonded) {
        if (states.connectivity.active_profile_connected) {
            draw_image(&bluetooth_connected, connectivity_canvas, 16, 0);
        } else {
            draw_image(&bluetooth_disconnected, connectivity_canvas, 16, 0);
        }
    } else {
        draw_image(&bluetooth_searching, connectivity_canvas, 16, 0);
    }
}

static void render_bluetooth_profile_index() {
    lv_draw_label_dsc_t label_dsc;
    lv_draw_label_dsc_init(&label_dsc);
    label_dsc.color = FOREGROUND_COLOR;
    label_dsc.font = &press_start_2p_16;
    label_dsc.align = LV_TEXT_ALIGN_RIGHT;
    
    // Magic number
    static const unsigned padding_x_offset = 2;
    static const unsigned padding_x = padding_x_offset;
    
    // Magic number
    static const unsigned padding_y_offset = 1;
    // `ceil` is used to tend towards the bottom of the screen.
    const unsigned padding_y = ceil((CONNECTIVITY_CANVAS_HEIGHT - press_start_2p_16.line_height) / 2) + padding_y_offset;
    static const unsigned width = CONNECTIVITY_CANVAS_WIDTH - 12 - 2;
    static const char bluetooth_profile_label[5][2] = {"1", "2", "3", "4", "5"};
    const char* label = bluetooth_profile_label[states.connectivity.active_profile_index];
    label_dsc.text = label;

    lv_layer_t layer;
    lv_canvas_init_layer(connectivity_canvas, &layer);

    lv_area_t coords_rect = { 
        padding_x + 1,
        padding_y + 1,
        padding_x + width - 1 - 1,
        padding_y + press_start_2p_16.line_height - 1 - 1
    };
   
    draw_label_with_outline(connectivity_canvas, &layer, &label_dsc, &coords_rect, BACKGROUND_COLOR);

    lv_canvas_finish_layer(connectivity_canvas, &layer);
}

static void render_bluetooth_connectivity() {
    render_bluetooth_logo();
    render_bluetooth_profile_index();
}

#endif

void render_connectivity() {
    lv_canvas_fill_bg(connectivity_canvas, BACKGROUND_COLOR, LV_OPA_TRANSP);

#if (defined(CONFIG_ZMK_SPLIT) && defined(CONFIG_ZMK_SPLIT_ROLE_CENTRAL))
    switch (states.connectivity.selected_endpoint.transport) {
        case ZMK_TRANSPORT_BLE: {
            render_bluetooth_connectivity();
            break;
        }
        case ZMK_TRANSPORT_USB: {
            draw_image(&usb, connectivity_canvas, 7, 4);
            break;
        }
    }
#else
    if (states.connectivity.connected) {
        draw_image(&bluetooth_connected, connectivity_canvas, 16, 0);
    } else {
        draw_image(&bluetooth_disconnected, connectivity_canvas, 16, 0);
    }

    rotate_connectivity_canvas();
#endif
}

#if (defined(CONFIG_ZMK_SPLIT) && defined(CONFIG_ZMK_SPLIT_ROLE_CENTRAL))
void render_main() {
    lv_layer_t layer;
    lv_canvas_init_layer(layer_canvas, &layer);

    lv_canvas_fill_bg(layer_canvas, BACKGROUND_COLOR, LV_OPA_TRANSP);

    // Capitalize the layer name if given or use the layer number otherwise.
    char* text = NULL;
    if (states.layer.name == NULL) {
        text = malloc(10 * sizeof(char));
        sprintf(text, "LAYER %i", states.layer.index);
    }
    else {
        text = malloc((strlen(states.layer.name) + 1) * sizeof(char));
        for (unsigned i = 0; states.layer.name[i] != '\0'; i++) {
#if IS_ENABLED(NICE_VIEW_ELEMENTAL_CAPITALIZATION)
            text[i] = toupper(states.layer.name[i]);
#else
            text[i] = states.layer.name[i];
#endif
        }
        text[strlen(states.layer.name)] = '\0';
    }

    lv_draw_label_dsc_t layer_name_dsc;
    lv_draw_label_dsc_init(&layer_name_dsc);
    layer_name_dsc.color = FOREGROUND_COLOR;
    layer_name_dsc.font = &press_start_2p_24;
    layer_name_dsc.align = LV_TEXT_ALIGN_CENTER;
    layer_name_dsc.text = text;

    lv_area_t layer_name_coords_rect = {
        1,
        1,
        LAYER_CANVAS_WIDTH - 1 - 1,
        LAYER_CANVAS_HEIGHT - 1 - 1
    };

    // lv_draw_label(
    //     &layer,
    //     &layer_name_dsc,
    //     &layer_name_coords_rect
    // );
    draw_label_with_outline(
        layer_canvas,
        &layer,
        &layer_name_dsc,
        &layer_name_coords_rect,
        BACKGROUND_COLOR
    );

    lv_canvas_finish_layer(layer_canvas, &layer);

    free(text);
    text = NULL;
}

void render_modifiers() {
    lv_canvas_fill_bg(modifiers_canvas, BACKGROUND_COLOR, LV_OPA_TRANSP);

    lv_layer_t layer;
    lv_canvas_init_layer(modifiers_canvas, &layer);

    lv_draw_rect_dsc_t inactive_modifier_background_dsc;
    lv_draw_rect_dsc_init(&inactive_modifier_background_dsc);
    inactive_modifier_background_dsc.bg_color = BACKGROUND_COLOR;
    inactive_modifier_background_dsc.border_color = BACKGROUND_COLOR;
    inactive_modifier_background_dsc.border_width = 1;
    inactive_modifier_background_dsc.border_side = LV_BORDER_SIDE_FULL;

    lv_draw_rect_dsc_t active_modifier_background_dsc;
    lv_draw_rect_dsc_init(&active_modifier_background_dsc);
    active_modifier_background_dsc.bg_color = FOREGROUND_COLOR;
    active_modifier_background_dsc.border_color = BACKGROUND_COLOR;
    active_modifier_background_dsc.border_width = 1;
    active_modifier_background_dsc.border_side = LV_BORDER_SIDE_FULL;

    lv_draw_label_dsc_t active_modifier_text_dsc;
    lv_draw_label_dsc_init(&active_modifier_text_dsc);
    active_modifier_text_dsc.color = BACKGROUND_COLOR;
    active_modifier_text_dsc.font = &press_start_2p_8;
    active_modifier_text_dsc.align = LV_TEXT_ALIGN_LEFT;
    
    lv_draw_label_dsc_t inactive_modifier_text_dsc;
    lv_draw_label_dsc_init(&inactive_modifier_text_dsc);
    inactive_modifier_text_dsc.color = FOREGROUND_COLOR;
    inactive_modifier_text_dsc.font = &press_start_2p_8;
    inactive_modifier_text_dsc.align = LV_TEXT_ALIGN_LEFT;
    
    {
        {
            lv_area_t coords = {
                0, // 0 * (MODIFIER_WIDTH + MODIFIER_PADDING_X),
                0,
                0 + MODIFIER_WIDTH - 1,
                0 + MODIFIERS_CANVAS_HEIGHT - 1
            };
            lv_draw_rect(
                &layer,
                states.modifiers.is_gui_active ? &active_modifier_background_dsc : &inactive_modifier_background_dsc,
                &coords
            );
            lv_canvas_finish_layer(modifiers_canvas, &layer);
        }
        {
            lv_area_t coords = {
                BORDER_WIDTH + MODIFIER_PADDING_X,
                BORDER_WIDTH + MODIFIER_PADDING_Y,
                BORDER_WIDTH + MODIFIER_PADDING_X + MODIFIER_WIDTH - 1,
                BORDER_WIDTH + MODIFIER_PADDING_Y + press_start_2p_8.line_height - 1
            };
            active_modifier_text_dsc.text = "W";
            inactive_modifier_text_dsc.text = "W";
            lv_draw_label(
                &layer,
                states.modifiers.is_gui_active ? &active_modifier_text_dsc : &inactive_modifier_text_dsc,
                &coords
            );
            lv_canvas_finish_layer(modifiers_canvas, &layer);
        }
    }

    {
        {
            lv_area_t coords = {
                1 * (MODIFIER_WIDTH + MODIFIERS_GAP),
                0,
                1 * (MODIFIER_WIDTH + MODIFIERS_GAP) + MODIFIER_WIDTH - 1,
                0 + MODIFIERS_CANVAS_HEIGHT - 1
            };
            lv_draw_rect(
                &layer,
                states.modifiers.is_alt_active ? &active_modifier_background_dsc : &inactive_modifier_background_dsc,
                &coords
            );
            lv_canvas_finish_layer(modifiers_canvas, &layer);
        }
        {
            lv_area_t coords = {
                1 * (MODIFIER_WIDTH + MODIFIERS_GAP) + BORDER_WIDTH + MODIFIER_PADDING_X,
                BORDER_WIDTH + MODIFIER_PADDING_Y,
                1 * (MODIFIER_WIDTH + MODIFIERS_GAP) + BORDER_WIDTH + MODIFIER_PADDING_X + MODIFIER_WIDTH - 1,
                BORDER_WIDTH + MODIFIER_PADDING_Y + press_start_2p_8.line_height - 1
            };
            active_modifier_text_dsc.text = "A";
            inactive_modifier_text_dsc.text = "A";
            lv_draw_label(
                &layer,
                states.modifiers.is_alt_active ? &active_modifier_text_dsc : &inactive_modifier_text_dsc,
                &coords
            );
            lv_canvas_finish_layer(modifiers_canvas, &layer);
        }
    }

    {
        {
            lv_area_t coords = {
                2 * (MODIFIER_WIDTH + MODIFIERS_GAP),
                0,
                2 * (MODIFIER_WIDTH + MODIFIERS_GAP) + MODIFIER_WIDTH - 1,
                0 + MODIFIERS_CANVAS_HEIGHT - 1
            };
            lv_draw_rect(
                &layer,
                states.modifiers.is_ctrl_active ? &active_modifier_background_dsc : &inactive_modifier_background_dsc,
                &coords
            );
            lv_canvas_finish_layer(modifiers_canvas, &layer);
        }
        {
            lv_area_t coords = {
                2 * (MODIFIER_WIDTH + MODIFIERS_GAP) + BORDER_WIDTH + MODIFIER_PADDING_X,
                BORDER_WIDTH + MODIFIER_PADDING_Y,
                2 * (MODIFIER_WIDTH + MODIFIERS_GAP) + BORDER_WIDTH + MODIFIER_PADDING_X + MODIFIER_WIDTH - 1,
                BORDER_WIDTH + MODIFIER_PADDING_Y + press_start_2p_8.line_height - 1
            };
            active_modifier_text_dsc.text = "C";
            inactive_modifier_text_dsc.text = "C";
            lv_draw_label(
                &layer,
                states.modifiers.is_ctrl_active ? &active_modifier_text_dsc : &inactive_modifier_text_dsc,
                &coords
            );
            lv_canvas_finish_layer(modifiers_canvas, &layer);
        }
    }

    {
        {
            lv_area_t coords = {
                3 * (MODIFIER_WIDTH + MODIFIERS_GAP),
                0,
                3 * (MODIFIER_WIDTH + MODIFIERS_GAP) + MODIFIER_WIDTH - 1,
                0 + MODIFIERS_CANVAS_HEIGHT - 1
            };
            lv_draw_rect(
                &layer,
                states.modifiers.is_shift_active ? &active_modifier_background_dsc : &inactive_modifier_background_dsc,
                &coords
            );
            lv_canvas_finish_layer(modifiers_canvas, &layer);
        }
        {
            lv_area_t coords = {
                3 * (MODIFIER_WIDTH + MODIFIERS_GAP) + BORDER_WIDTH + MODIFIER_PADDING_X,
                BORDER_WIDTH + MODIFIER_PADDING_Y,
                3 * (MODIFIER_WIDTH + MODIFIERS_GAP) + BORDER_WIDTH + MODIFIER_PADDING_X + MODIFIER_WIDTH - 1,
                BORDER_WIDTH + MODIFIER_PADDING_Y + press_start_2p_8.line_height - 1
            };
            active_modifier_text_dsc.text = "S";
            inactive_modifier_text_dsc.text = "S";
            lv_draw_label(
                &layer,
                states.modifiers.is_shift_active ? &active_modifier_text_dsc : &inactive_modifier_text_dsc,
                &coords
            );
            lv_canvas_finish_layer(modifiers_canvas, &layer);
        }
    }
}
#endif

// 1. Insert images here.
LV_IMG_DECLARE(grid);
LV_IMG_DECLARE(grid_inverse);
const lv_image_dsc_t* images[] = {
    &grid,
    // &grid_inverse
};

static const unsigned int frame_count = sizeof(images) / sizeof(images[0]);

void initialize_animation() {
    lv_animimg_set_src(image_canvas, (const void**)images, frame_count);
    // 2. Set the time for the whole animation.
    lv_animimg_set_duration(image_canvas, 200);
}

void start_animation() {
    lv_animimg_set_repeat_count(image_canvas, LV_ANIM_REPEAT_INFINITE);
    lv_animimg_start(image_canvas);
}

void stop_animation() {
    lv_animimg_set_repeat_count(image_canvas, 1);
    lv_animimg_start(image_canvas);
}