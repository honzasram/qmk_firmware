#pragma once

/* The pin connected to the data pin of the LEDs */
// #define WS2812_DI_PIN D5
/* Number of LEDs 25 key and 8 or ???15 down side */  
#define RGBLED_NUM 33

#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 200

/* Defining Lighting Layers - by default 8 */
// #define RGBLIGHT_MAX_LAYERS 9 



/* If defined, the RGB lighting will be switched off when the host goes to sleep */

#define RGBLIGHT_SLEEP
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYER_BLINK
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#define RGBLIGHT_LAYERS_RETAIN_VAL

#if defined(LED_ANIMATIONS)

// #define RGBLIGHT_EFFECT_BREATHING
// // #define RGBLIGHT_EFFECT_RAINBOW_MOOD
// // #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #define RGBLIGHT_EFFECT_SNAKE
// #define RGBLIGHT_EFFECT_KNIGHT
// #define RGBLIGHT_EFFECT_CHRISTMAS
// #define RGBLIGHT_EFFECT_STATIC_GRADIENT
// // #define RGBLIGHT_EFFECT_RGB_TEST
// // #define RGBLIGHT_EFFECT_ALTERNATING
// #define RGBLIGHT_EFFECT_TWINKLE

#endif