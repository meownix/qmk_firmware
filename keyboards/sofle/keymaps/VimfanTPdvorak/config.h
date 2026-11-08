#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define OLED_BRIGHTNESS 64
#define SPLIT_WPM_ENABLE
#define MASTER_RIGHT
/* Match the seller's Sofle RGB firmware: D3, 36 LEDs on each half. */
#undef RGBLED_NUM
#undef RGBLIGHT_LED_COUNT
#define RGBLIGHT_LED_COUNT 72
#undef RGBLED_SPLIT
#define RGBLED_SPLIT { 36, 36 }
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_DEFAULT_VAL 32
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_ACTION_TAPPING
#define LAYER_STATE_4BIT

/* Enable mouse key's combined mode */
#define MK_COMBINED

/* Use constant speed mode */
#define MK_3_SPEED

/* Enable momentary speed selection */
#define MK_MOMENTARY_ACCEL
