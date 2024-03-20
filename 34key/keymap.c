#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
    ST_MACRO_0,
    ST_MACRO_1,
    ST_MACRO_2,
    ST_MACRO_3,
    ST_MACRO_4,
    ST_MACRO_5,
    ST_MACRO_6,
    ST_MACRO_7,
    ST_MACRO_8,
    ST_MACRO_9,
    ST_MACRO_10,
    ST_MACRO_11,
    ST_MACRO_12,
    ST_MACRO_13,
    ST_MACRO_14,
    ST_MACRO_15,
    ST_MACRO_16,
    ST_MACRO_17,
    ST_MACRO_18,
    ST_MACRO_19,
    ST_MACRO_20,
};

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
    DANCE_2,
    DANCE_3,
    DANCE_4,
    DANCE_5,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_X, KC_W, KC_M, KC_G, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_0), KC_Q, KC_J, KC_H, KC_S, KC_C, KC_N, KC_T, KC_K, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_1), KC_A, KC_E, KC_I, KC_B, KC_V, KC_F, KC_L, KC_D, KC_Z, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_U, KC_O, KC_Y, KC_P, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_20, LT(1, KC_R), KC_TRANSPARENT, KC_TRANSPARENT, LT(2, KC_SPACE), TD(DANCE_2), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [1] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE, KC_EQUAL, KC_LPRN, KC_RPRN, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PIPE, KC_CIRC, KC_DLR, KC_HASH, KC_ASTR, KC_MINUS, KC_PLUS, KC_LCBR, KC_RCBR, KC_AT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_PERC, KC_AMPR, KC_LBRC, KC_RBRC, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSLS, KC_QUOTE, KC_DQUO, KC_EXLM, KC_QUES, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [2] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F1, KC_F2, KC_F3, KC_F4, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_7, KC_8, KC_9, TD(DANCE_3), KC_F5, KC_F6, KC_F7, KC_F8, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_0, KC_4, KC_5, KC_6, TD(DANCE_4), KC_F9, KC_F10, KC_F11, KC_F12, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_1, KC_2, KC_3, TD(DANCE_5), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_R, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [3] = LAYOUT_moonlander(KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SYSTEM_POWER, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_REWIND, KC_MEDIA_FAST_FORWARD, QK_BOOT, KC_LEFT_SHIFT, KC_A, KC_S, KC_D, KC_F, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM, KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_CAPS, KC_LEFT_CTRL, KC_Z, KC_X, KC_C, KC_V, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_L), KC_TRANSPARENT, KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE, TO(0), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                            KC_TRANSPARENT, KC_TRANSPARENT),
};
const uint16_t PROGMEM combo0[]  = {KC_T, KC_N, COMBO_END};
const uint16_t PROGMEM combo1[]  = {KC_N, KC_C, COMBO_END};
const uint16_t PROGMEM combo2[]  = {KC_N, KC_S, COMBO_END};
const uint16_t PROGMEM combo3[]  = {KC_M, KC_W, COMBO_END};
const uint16_t PROGMEM combo4[]  = {KC_M, KC_G, COMBO_END};
const uint16_t PROGMEM combo5[]  = {KC_Y, KC_P, COMBO_END};
const uint16_t PROGMEM combo6[]  = {KC_A, KC_I, COMBO_END};
const uint16_t PROGMEM combo7[]  = {KC_I, KC_T, COMBO_END};
const uint16_t PROGMEM combo8[]  = {KC_I, KC_S, COMBO_END};
const uint16_t PROGMEM combo9[]  = {KC_B, KC_E, COMBO_END};
const uint16_t PROGMEM combo10[] = {KC_C, KC_T, COMBO_END};
const uint16_t PROGMEM combo11[] = {KC_M, KC_I, COMBO_END};
const uint16_t PROGMEM combo12[] = {KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM combo13[] = {KC_A, KC_N, COMBO_END};
const uint16_t PROGMEM combo14[] = {KC_N, KC_I, COMBO_END};
const uint16_t PROGMEM combo15[] = {KC_F, KC_O, COMBO_END};
const uint16_t PROGMEM combo16[] = {KC_M, KC_T, COMBO_END};
const uint16_t PROGMEM combo17[] = {KC_N, KC_O, COMBO_END};
const uint16_t PROGMEM combo18[] = {KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM combo19[] = {KC_N, KC_U, COMBO_END};
const uint16_t PROGMEM combo20[] = {KC_X, KC_W, COMBO_END};
const uint16_t PROGMEM combo21[] = {KC_S, KC_C, COMBO_END};
const uint16_t PROGMEM combo22[] = {KC_V, KC_F, COMBO_END};
const uint16_t PROGMEM combo23[] = {KC_F, KC_L, COMBO_END};
const uint16_t PROGMEM combo24[] = {KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM combo25[] = {KC_A, KC_E, COMBO_END};
const uint16_t PROGMEM combo26[] = {KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM combo27[] = {KC_I, KC_E, COMBO_END};
const uint16_t PROGMEM combo28[] = {TD(DANCE_0), KC_Q, COMBO_END};
const uint16_t PROGMEM combo29[] = {KC_Q, KC_J, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_0), COMBO(combo1, ST_MACRO_1), COMBO(combo2, ST_MACRO_2), COMBO(combo3, ST_MACRO_3), COMBO(combo4, ST_MACRO_4), COMBO(combo5, ST_MACRO_5), COMBO(combo6, ST_MACRO_6), COMBO(combo7, ST_MACRO_7), COMBO(combo8, ST_MACRO_8), COMBO(combo9, ST_MACRO_9), COMBO(combo10, ST_MACRO_10), COMBO(combo11, ST_MACRO_11), COMBO(combo12, ST_MACRO_12), COMBO(combo13, ST_MACRO_13), COMBO(combo14, ST_MACRO_14), COMBO(combo15, ST_MACRO_15), COMBO(combo16, ST_MACRO_16), COMBO(combo17, ST_MACRO_17), COMBO(combo18, ST_MACRO_18), COMBO(combo19, ST_MACRO_19), COMBO(combo20, KC_TAB), COMBO(combo21, KC_LEFT_SHIFT), COMBO(combo22, KC_LEFT_CTRL), COMBO(combo23, KC_LEFT_GUI), COMBO(combo24, KC_LEFT_ALT), COMBO(combo25, KC_RIGHT_SHIFT), COMBO(combo26, KC_RIGHT_CTRL), COMBO(combo27, KC_ENTER), COMBO(combo28, KC_BSPC), COMBO(combo29, KC_DELETE),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H));
            }
            break;
        case ST_MACRO_1:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_H));
            }
            break;
        case ST_MACRO_2:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_H));
            }
            break;
        case ST_MACRO_3:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_H));
            }
            break;
        case ST_MACRO_4:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_H));
            }
            break;
        case ST_MACRO_5:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_P) SS_DELAY(100) SS_TAP(X_H));
            }
            break;
        case ST_MACRO_6:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_G));
            }
            break;
        case ST_MACRO_7:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_N));
            }
            break;
        case ST_MACRO_8:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_N));
            }
            break;
        case ST_MACRO_9:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_E));
            }
            break;
        case ST_MACRO_10:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_T));
            }
            break;
        case ST_MACRO_11:
            if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_TAP(X_I)) SS_DELAY(100) SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_M));
            }
            break;
        case ST_MACRO_12:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_E));
            }
            break;
        case ST_MACRO_13:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_A));
            }
            break;
        case ST_MACRO_14:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_I));
            }
            break;
        case ST_MACRO_15:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_M));
            }
            break;
        case ST_MACRO_16:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_T));
            }
            break;
        case ST_MACRO_17:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_O));
            }
            break;
        case ST_MACRO_18:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_E));
            }
            break;
        case ST_MACRO_19:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_U));
            }
            break;
        case ST_MACRO_20:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_ESCAPE));
                clear_oneshot_mods();
            }
            break;
    }
    return true;
}

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[6];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if (state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            register_code16(KC_DOT);
            break;
        case SINGLE_HOLD:
            register_code16(KC_COLN);
            break;
        case DOUBLE_TAP:
            register_code16(KC_DOT);
            register_code16(KC_DOT);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_DOT);
            register_code16(KC_DOT);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            unregister_code16(KC_DOT);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_COLN);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_DOT);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_DOT);
            break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
    }
    if (state->count > 3) {
        tap_code16(KC_COMMA);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            register_code16(KC_COMMA);
            break;
        case SINGLE_HOLD:
            register_code16(KC_SCLN);
            break;
        case DOUBLE_TAP:
            register_code16(KC_COMMA);
            register_code16(KC_COMMA);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_COMMA);
            register_code16(KC_COMMA);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            unregister_code16(KC_COMMA);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_SCLN);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_COMMA);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_COMMA);
            break;
    }
    dance_state[1].step = 0;
}
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case DOUBLE_TAP:
            layer_move(3);
            break;
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {}
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_ASTR);
        tap_code16(KC_ASTR);
        tap_code16(KC_ASTR);
    }
    if (state->count > 3) {
        tap_code16(KC_ASTR);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP:
            register_code16(KC_ASTR);
            break;
        case SINGLE_HOLD:
            register_code16(KC_SLASH);
            break;
        case DOUBLE_TAP:
            register_code16(KC_ASTR);
            register_code16(KC_ASTR);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_ASTR);
            register_code16(KC_ASTR);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP:
            unregister_code16(KC_ASTR);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_SLASH);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_ASTR);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_ASTR);
            break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_PLUS);
        tap_code16(KC_PLUS);
        tap_code16(KC_PLUS);
    }
    if (state->count > 3) {
        tap_code16(KC_PLUS);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP:
            register_code16(KC_PLUS);
            break;
        case SINGLE_HOLD:
            register_code16(KC_MINUS);
            break;
        case DOUBLE_TAP:
            register_code16(KC_PLUS);
            register_code16(KC_PLUS);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_PLUS);
            register_code16(KC_PLUS);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP:
            unregister_code16(KC_PLUS);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_MINUS);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_PLUS);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_PLUS);
            break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if (state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP:
            register_code16(KC_DOT);
            break;
        case SINGLE_HOLD:
            register_code16(KC_EQUAL);
            break;
        case DOUBLE_TAP:
            register_code16(KC_DOT);
            register_code16(KC_DOT);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_DOT);
            register_code16(KC_DOT);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP:
            unregister_code16(KC_DOT);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_EQUAL);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_DOT);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_DOT);
            break;
    }
    dance_state[5].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset), [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset), [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_2_finished, dance_2_reset), [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset), [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset), [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
};
