// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "print.h"


#ifdef HD2_CODES_ENABLED
    #include "hd2_codes.h"
#endif

void via_set_layout_options_kb(uint32_t value) {
#ifdef CONSOLE_ENABLE
  uprintf("Got something %lu", value);
#endif
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
  bool returns = true;
#ifdef HD2_CODES_ENABLED
  returns = process_record_user_HD2(keycode, record); 
#endif
#ifdef CONSOLE_ENABLE
  uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
  return returns;
}

enum my_layers {
    layer0,
    layer1,
    layer2,
    layer3,
    layer4,
    layer5
};

#ifdef HD2_CODES_ENABLED
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [layer0] = LAYOUT(
        Supply_Pack,   KC_NO,   KC_NO,   Resupply,   Reinforce,
        Guard_Dog,   Guard_Dog_Rover,   Shield_Generator_Pack,   Jump_Pack,   Ballistic_Shield_Backpack,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer1] = LAYOUT(
        Autocannon,   Grenade_Launcher,   Flamethrower,   Resupply,   Reinforce,
        Machine_Gun,   Expendable_AntiTank,   AntiMateriel_Rifle,   KC_NO,   Quasar_Cannon,
        Hellbomb,   KC_NO,   Arc_Thrower,   Spear,   MO(layer5)
    ),
    [layer2] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   Resupply,   Reinforce,
        AMG43_Machine_Gun_Sentry,   AG16_Gatling_Sentry,   AAC8_Autocannon_Sentry,   AMLS4X_Rocket_Sentry,   AM12_Mortar_Sentry,
        EXO45_Patriot_Exosuit,   EXO49_Emancipator_Exosuit,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer3] = LAYOUT(
        Orbital_Laser,   Orbital_Precision_Strike,   Orbital_Railcannon_Strike,   Resupply,   Reinforce,
        Orbital_380mm_HE_Barrage,   Orbital_120mm_HE_Barrage,   Orbital_EMS_Strike,   KC_NO,   Orbital_Gas_Strike,
        SEAF_Artillery,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer4] = LAYOUT(
        Eagle_500kg_Bomb,   Eagle_Airstrike,   Eagle_110mm_Rocket_Pods,   Resupply,   Reinforce,
        Eagle_Cluster_Bomb,   Eagle_Strafing_Run,   Eagle_Napalm_Airstrike,   KC_NO,   Eagle_Smoke_Strike,
        Eagle_AirtoAir_Missiles,   KC_NO,   Eagle_Rearm,   KC_NO,   MO(layer5)
    ),
    [layer5] = LAYOUT(
        TO(layer0),   TO(layer1),   TO(layer2),   TO(layer3),   TO(layer4),
        RGB_VAI,   RGB_MOD,   KC_NO,   KC_NO,   KC_NO,
        RGB_VAD,   RGB_TOG,   KC_NO,   KC_NO,   MO(layer5)
    )
};
#else
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [layer0] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer1] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer2] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer3] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer4] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer5] = LAYOUT(
        TO(layer0),   TO(layer1),   TO(layer2),   TO(layer3),   TO(layer4),
        RGB_VAI,   RGB_MOD,   KC_NO,   KC_NO,   KC_NO,
        RGB_VAD,   RGB_TOG,   KC_NO,   KC_NO,   MO(layer5)
    )
};
#endif

#ifdef RGBLIGHT_ENABLE
const rgblight_segment_t PROGMEM rgp_layer_0[] = RGBLIGHT_LAYER_SEGMENTS(
    {14, 1, HSV_GREEN },
	{0, 1, HSV_PINK }
);
const rgblight_segment_t PROGMEM rgp_layer_1[] = RGBLIGHT_LAYER_SEGMENTS(
    {13, 1, HSV_GREEN},
	{0, 1, HSV_PINK }
);
const rgblight_segment_t PROGMEM rgp_layer_2[] = RGBLIGHT_LAYER_SEGMENTS(
    {12, 1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM rgp_layer_3[] = RGBLIGHT_LAYER_SEGMENTS(
    {11, 1, HSV_GREEN},
	{0, 1, HSV_PINK }
);
const rgblight_segment_t PROGMEM rgp_layer_4[] = RGBLIGHT_LAYER_SEGMENTS(
    {10, 1, HSV_GREEN},
	{0, 1, HSV_PINK }
);
const rgblight_segment_t PROGMEM rgp_layer_5[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_RED}
);

enum rgb_layer_index {
    L_0,
    L_1,
    L_2,
    L_3,
    L_4,
    L_5
};

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    [L_0]=rgp_layer_0,
    [L_1]=rgp_layer_1,
    [L_2]=rgp_layer_2,
    [L_3]=rgp_layer_3,
    [L_4]=rgp_layer_4,
    [L_5]=rgp_layer_5
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
    rgblight_setrgb(HSV_WHITE);

    // Customise these values to desired behaviour
    debug_enable=true;
    debug_matrix=true;
    debug_keyboard=true;
    //debug_mouse=true;
}

// // #define NUMLOCK_ON (host_keyboard_leds() & (1<<USB_LED_NUM_LOCK))
layer_state_t layer_state_set_user(layer_state_t state) {
    if (layer_state_cmp(state, layer5)) {
        rgblight_set_layer_state(L_0, false);
        rgblight_set_layer_state(L_1, false);
        rgblight_set_layer_state(L_2, false);
        rgblight_set_layer_state(L_3, false);
        rgblight_set_layer_state(L_4, false);
    } else {
        rgblight_set_layer_state(L_0, layer_state_cmp(state, layer0));
        rgblight_set_layer_state(L_1, layer_state_cmp(state, layer1));
        rgblight_set_layer_state(L_2, layer_state_cmp(state, layer2));
        rgblight_set_layer_state(L_3, layer_state_cmp(state, layer3));
        rgblight_set_layer_state(L_4, layer_state_cmp(state, layer4));
    }
    rgblight_set_layer_state(L_5, layer_state_cmp(state, layer5));
    return state;
}

// // This function is called when num lock indicators (num lock led) are changed/toggled/updated
// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(L_NUMLOCK, led_state.num_lock);
//     return true;
// }


#endif