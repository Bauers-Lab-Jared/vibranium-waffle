/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef IGNORE_MOD_TAP_INTERRUPT
#undef DEBOUNCE
#define DEBOUNCE 5

#define ONESHOT_TAP_TOGGLE 2

#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 3000

#define USB_SUSPEND_WAKEUP_DELAY 200
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 1

#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 30

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 1

#define FIRMWARE_VERSION u8"blQ5D/5gNKq"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define COMBO_ONLY_FROM_LAYER 0
#define COMBO_COUNT 30

/* #define RGB_MATRIX_STARTUP_SPD 60 */
