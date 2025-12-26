#pragma once

#include <stdbool.h>
#include <zmk/endpoints.h>
#include <zmk/keymap.h>
#include "./utils/draw_battery.h"

struct connectivity_state {
#if (defined(CONFIG_ZMK_SPLIT) && defined(CONFIG_ZMK_SPLIT_ROLE_CENTRAL))
    struct zmk_endpoint_instance selected_endpoint;
    int active_profile_index;
    bool active_profile_connected;
    bool active_profile_bonded;
#else
    bool connected;
#endif
};

struct layer_state {
    zmk_keymap_layer_index_t index;
    const char* name;
};

struct modifiers_state {
    bool is_shift_active;
    bool is_ctrl_active;
    bool is_alt_active;
    bool is_gui_active;
};

struct states {
#if (defined(CONFIG_ZMK_SPLIT) && defined(CONFIG_ZMK_SPLIT_ROLE_CENTRAL))
    struct layer_state layer;
    struct modifiers_state modifiers;
#endif
    struct battery_state battery;
    struct connectivity_state connectivity;
};

extern struct states states;

void initialize_listeners();
