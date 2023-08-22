#include QMK_KEYBOARD_H
// #include "features/achordion.h"

#define HOME_DA LGUI_T(KC_A)
#define HOME_DO LALT_T(KC_O)
#define HOME_DE LSFT_T(KC_E)
#define HOME_DU LCTL_T(KC_U)
#define HOME_DH LCTL_T(KC_H)
#define HOME_DT LSFT_T(KC_T)
#define HOME_DN LALT_T(KC_N)
#define HOME_DS LGUI_T(KC_S)

#define HOME_S LGUI_T(KC_S)
#define HOME_R LALT_T(KC_R)
#define HOME_N LSFT_T(KC_N)
#define HOME_T LCTL_T(KC_T)
#define HOME_D LCTL_T(KC_D)
#define HOME_E LSFT_T(KC_E)
#define HOME_A LALT_T(KC_A)
#define HOME_I LGUI_T(KC_I)

#define LT_D1 LT(ONE, KC_COMM)
#define LT_D2 LT(TWO, KC_R)
#define LT_D3 LT(THREE, KC_QUOT)
#define LT_D4 LT(FOUR, KC_L)

#define LT_1 LT(ONE, KC_L)
#define LT_2 LT(TWO, KC_O)
#define LT_3 LT(THREE, KC_F)
#define LT_4 LT(FOUR, KC_Y)
#define LT_5 LT(FIVE, KC_H)
#define LT_6 LT(SIX, KC_U)

#define DF_D DF(DVORAK)
#define DF_B DF(BASE)
#define DF_G DF(GAME)
#define DF_Q DF(QWERTY)

#define STAR QK_AREP

#define UNDO LCTL(KC_Z)
#define REDO RCS(KC_Z)


enum layers {
    BASE,
    DVORAK,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    QWERTY,
    GAME
};

enum custom_keycodes {
    // QUOT = SAFE_RANGE,
    LLOCK = SAFE_RANGE,
    DCOL,
    ARRW,
    DARW,
    LAYER,
    MGONE,
    MGTWO,
    MGTHE
    // DQUO,
    // GRV,
    // TILD,
    // CIRC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        KC_TAB ,  LT_3   ,  LT_1   ,  LT_5   ,  KC_V   ,  KC_Z   ,  KC_QUOT,  KC_W   ,  LT_6   ,  LT_2   ,  LT_4   ,  MGONE  ,  MGTWO  ,            DF_D   ,  _______,
        KC_ESC ,  HOME_S ,  HOME_R ,  HOME_N ,  HOME_T ,  KC_K   ,  KC_C   ,  HOME_D ,  HOME_E ,  HOME_A ,  HOME_I ,  KC_BSPC,                      KC_ENT ,  _______,
        _______,  KC_X   ,  KC_Q   ,  KC_B   ,  KC_M   ,  KC_J   ,  KC_P   ,  KC_G   ,  KC_COMM,  KC_DOT ,  KC_SCLN,                      _______,  _______,
        _______,  _______,  _______,                                KC_SPC ,                      DF_G   ,  DF_Q   ,  _______,            _______,  _______,  _______
        ),

    [DVORAK] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        KC_TAB ,  LT_D3  ,  LT_D1  ,  KC_DOT ,  KC_P   ,  KC_Y   ,  KC_F   ,  KC_G   ,  KC_C   ,  LT_D2  ,  LT_D4  ,  MGONE  ,  MGTWO  ,            DF_B   ,  _______,
        KC_ESC ,  HOME_DA,  HOME_DO,  HOME_DE,  HOME_DU,  KC_I   ,  KC_D   ,  HOME_DH,  HOME_DT,  HOME_DN,  HOME_DS,  KC_BSPC,                      KC_ENT ,  _______,
        _______,  KC_SCLN,  KC_Q   ,  KC_J   ,  KC_K   ,  KC_X   ,  KC_B   ,  KC_M   ,  KC_W   ,  KC_V   ,  KC_Z   ,                      _______,  _______,
        _______,  _______,  _______,                                KC_SPC ,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [ONE] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_LBRC,  KC_7   ,  KC_8   ,  KC_9   ,  KC_RBRC,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_EQL ,  KC_4   ,  KC_5   ,  KC_6   ,  KC_0   ,  _______,                      _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_MINS,  KC_1   ,  KC_2   ,  KC_3   ,  KC_SLSH,                      _______,  _______,
        _______,  _______,  _______,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [TWO] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  KC_PGUP,  KC_HOME,  KC_UP  ,  KC_END ,  KC_GRV ,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  KC_PGDN,  UNDO   ,  REDO   ,  KC_DEL ,  KC_BSLS,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  _______,  _______,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [THREE] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_F9  ,  KC_F10 ,  KC_F11 ,  KC_F12 ,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_F5  ,  KC_F6  ,  KC_F7  ,  KC_F8  ,  _______,                      _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_F1  ,  KC_F2  ,  KC_F3  ,  KC_F4  ,                      _______,  _______,
        _______,  _______,  _______,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [FOUR] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  KC_BRIU,  KC_VOLU,  KC_BRID,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  KC_PSCR,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  _______,  KC_MUTE,  KC_VOLD,  KC_MSTP,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  _______,  _______,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [FIVE] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_PIPE,  KC_EXLM,  KC_QUES,  KC_LBRC,  KC_RBRC,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  KC_DEL ,  _______,  KC_AMPR,  KC_LPRN,  KC_LCBR,  KC_RCBR,  KC_RPRN,  _______,                      _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_CIRC,  KC_DLR ,  KC_AT  ,  KC_HASH,  KC_PERC,                      _______,  _______,
        _______,  _______,  _______,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [SIX] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  KC_SCLN,  KC_COLN,  ARRW   ,  DARW   ,  KC_GRV ,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  KC_PLUS,  KC_MINS,  KC_ASTR,  KC_SLSH,  KC_EQL ,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  _______,  KC_UNDS,  KC_TILD,  KC_BSLS,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  _______,  _______,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [QWERTY] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        KC_TILD,  KC_1   ,  KC_2   ,  KC_3   ,  KC_4   ,  KC_5   ,  KC_6   ,  KC_7   ,  KC_8   ,  KC_9   ,  KC_0   ,  _______,  _______,  _______,            _______,
        KC_TAB ,  KC_Q   ,  KC_W   ,  KC_E   ,  KC_R   ,  KC_T   ,  KC_Y   ,  KC_U   ,  KC_I   ,  KC_O   ,  KC_P   ,  _______,  _______,            DF_B   ,  _______,
        KC_ESC ,  KC_A   ,  KC_S   ,  KC_D   ,  KC_F   ,  KC_G   ,  KC_H   ,  KC_J   ,  KC_K   ,  KC_L   ,  KC_D   ,  KC_BSPC,                      KC_ENT ,  _______,
        KC_LSFT,  KC_Z   ,  KC_X   ,  KC_C   ,  KC_V   ,  KC_B   ,  KC_N   ,  KC_M   ,  KC_W   ,  KC_V   ,  KC_Z   ,                      _______,  _______,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC ,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [GAME] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        KC_TAB ,  KC_P   ,  KC_Q   ,  KC_W   ,  KC_E   ,  KC_R   ,  KC_T   ,  KC_Y   ,  KC_U   ,  KC_I   ,  KC_O   ,  _______,  _______,            DF_B   ,  _______,
        KC_ESC ,  KC_LSFT,  KC_A   ,  KC_S   ,  KC_D   ,  KC_F   ,  KC_G   ,  KC_H   ,  KC_J   ,  KC_K   ,  _______,  KC_BSPC,                      KC_ENT ,  _______,
        KC_L   ,  KC_W   ,  KC_Z   ,  KC_X   ,  KC_LCTL,  KC_V   ,  KC_B   ,  KC_N   ,  KC_M   ,  _______,  _______,                      _______,  _______,
        KC_C   ,  _______,  _______,                                KC_SPC ,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    // [EMPTY] = LAYOUT_ansi_82(
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
    //     _______,  _______,  _______,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
    //     ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [DVORAK] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [ONE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [TWO] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [THREE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [FOUR] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [FIVE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [SIX] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [QWERTY] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [GAME] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif


bool get_repeat_key_eligible_user(uint16_t keycode, keyrecord_t* record, uint8_t* remembered_mods) {
    switch (keycode) {
        // Ignore Custom Magic Keys
        case MGONE:
        case MGTWO:
            return false;
        case KC_A ... KC_Z:
            if ((*remembered_mods & ~(MOD_MASK_SHIFT)) == 0) {
                *remembered_mods &= ~MOD_MASK_SHIFT;
            }
            break;
    }

    return true;
}

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_C:
        case KC_P:
        case KC_D:
        case KC_G:
        case KC_Z: return KC_Y;
        case KC_Y: return KC_P;
        case KC_R: return KC_L;
        case KC_K: return KC_S;
        case KC_L:
        case KC_S: return KC_K;
        case KC_U: return KC_E;
        case KC_E: return KC_U;
        case KC_O: return KC_A;
        case KC_A: return KC_O;
        case KC_1 ... KC_0: return KC_DOT;
    }

    return MGTHE;
}

// void matrix_scan_user(void) {
//   achordion_task();
// }
//
// bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record, uint16_t other_keycode, keyrecord_t* other_record) {
//   return achordion_opposite_hands(tap_hold_record, other_record);
// }
//
// uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
//   return 800;
// }
//
// bool achordion_eager_mod(uint8_t mod) {
//   switch (mod) {
//     case MOD_LSFT:
//     case MOD_RSFT:
//     case MOD_LCTL:
//     case MOD_RCTL:
//     case MOD_LALT:
//     case MOD_RALT:
//       return true;  // Eagerly apply Shift and Ctrl mods.
//
//     default:
//       return false;
//   }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // if (!process_achordion(keycode, record)) { return false; }

    if (record->event.pressed) {
        switch (keycode) {
            case MGTHE:
                SEND_STRING("the");
                return false;
            case ARRW:
                SEND_STRING("->");
                return false;
            case DARW:
                SEND_STRING("=>");
                return false;
        }
    }
    return true;
}
