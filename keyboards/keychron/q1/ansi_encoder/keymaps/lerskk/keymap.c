#include QMK_KEYBOARD_H

#define HOME_LG LGUI_T(KC_S)
#define HOME_LA LALT_T(KC_R)
#define HOME_LS LSFT_T(KC_T)
#define HOME_LC LCTL_T(KC_D)
#define HOME_RC LCTL_T(KC_N)
#define HOME_RS RSFT_T(KC_A)
#define HOME_RA LALT_T(KC_E)
#define HOME_RG LGUI_T(KC_I)
#define ALTGR_L RALT_T(KC_C)
#define ALTGR_R RALT_T(KC_H)

#define HOME_DA LGUI_T(KC_A)
#define HOME_DO LALT_T(KC_O)
#define HOME_DE LSFT_T(KC_E)
#define HOME_DU LCTL_T(KC_U)
#define HOME_DH LCTL_T(KC_H)
#define HOME_DT LSFT_T(KC_T)
#define HOME_DN LALT_T(KC_N)
#define HOME_DS LGUI_T(KC_S)

#define LT_L1 LT(THREE, KC_F)
#define LT_L2 LT(ONE, KC_L)
#define LT_L3 LT(FIVE, KC_M)

#define LT_R1 LT(FOUR, KC_Y)
#define LT_R2 LT(TWO, KC_U)
#define LT_R3 LT(SIX, KC_O)

#define LT_D1 LT(ONE, KC_COMM)
#define LT_D2 LT(TWO, KC_R)
#define LT_D3 LT(THREE, KC_QUOT)
#define LT_D4 LT(FOUR, KC_L)
#define LT_D5 LT(FIVE, KC_DOT)
#define LT_D6 LT(SIX, KC_C)

#define DF_B DF(BASE)
#define DF_G DF(GAME)
#define DF_Q DF(QWERTY)

#define STAR QK_AREP

#define UNDO LCTL(KC_Z)
#define REDO RCS(KC_Z)

enum layers {
    BASE,
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
    CLSRABK,
    UPDIR,
    CUDIR,
    HODIR,
    LAYER,
    MGONE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        KC_TAB ,  LT_L1  ,  LT_L2  ,  LT_L3  ,  ALTGR_L,  KC_W   ,  KC_SCLN,  ALTGR_R,  LT_R3  ,  LT_R2  ,  LT_R1  ,  QK_AREP,  QK_REP ,            DF_G   ,  _______,
        KC_ESC ,  HOME_LG,  HOME_LA,  HOME_LS,  HOME_LC,  KC_G   ,  KC_COMM,  HOME_RC,  HOME_RS,  HOME_RA,  HOME_RG,  KC_BSPC,                      KC_ENT ,  _______,
        _______,  KC_V   ,  KC_J   ,  KC_K   ,  KC_P   ,  KC_Z   ,  KC_Q   ,  KC_B   ,  KC_DOT ,  KC_QUOT,  KC_X   ,                      _______,  KC_UP  ,
        _______,  _______,  _______,                                KC_SPC ,                      DF_G   ,  DF_B   ,  DF_Q   ,            KC_LEFT,  KC_DOWN,  KC_RGHT
        ), // [ALT] = LAYOUT_ansi_82(

    [ONE] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_BSLS,  KC_7   ,  KC_8   ,  KC_9   ,  KC_0   ,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_EQL ,  KC_4   ,  KC_5   ,  KC_6   ,  KC_MINS,  _______,                      _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_SLSH,  KC_1   ,  KC_2   ,  KC_3   ,  _______,                      _______,  _______,
        _______,  _______,  _______,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [TWO] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  KC_PGUP,  KC_HOME,  KC_UP  ,  KC_END ,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  KC_CAPS,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  KC_PGDN,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
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
        _______,  _______,  _______,  _______,  UNDO   ,  REDO   ,  _______,  KC_LBRC,  KC_RBRC,  ARRW   ,  DARW   ,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  KC_DEL ,  _______,  _______,  KC_LPRN,  KC_LCBR,  KC_RCBR,  KC_RPRN,  _______,                      _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_GRV ,  KC_LABK,  KC_RABK,  CLSRABK,                      _______,  _______,
        _______,  _______,  _______,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [SIX] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  UPDIR  ,  CUDIR  ,  HODIR  ,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  _______,  _______,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [QWERTY] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        KC_GRV ,  KC_1   ,  KC_2   ,  KC_3   ,  KC_4   ,  KC_5   ,  KC_6   ,  KC_7   ,  KC_8   ,  KC_9   ,  KC_0   ,  _______,  _______,  _______,            _______,
        KC_TAB ,  KC_Q   ,  KC_W   ,  KC_E   ,  KC_R   ,  KC_T   ,  KC_Y   ,  KC_U   ,  KC_I   ,  KC_O   ,  KC_P   ,  _______,  _______,            DF_B   ,  _______,
        KC_ESC ,  KC_A   ,  KC_S   ,  KC_D   ,  KC_F   ,  KC_G   ,  KC_H   ,  KC_J   ,  KC_K   ,  KC_L   ,  KC_SCLN,  KC_BSPC,                      KC_ENT ,  _______,
        KC_LSFT,  KC_Z   ,  KC_X   ,  KC_C   ,  KC_V   ,  KC_B   ,  KC_N   ,  KC_M   ,  KC_COMM,  KC_DOT ,  KC_SLSH,                      _______,  _______,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC ,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [GAME] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        KC_GRV ,  KC_0   ,  KC_1   ,  KC_2   ,  KC_3   ,  KC_4   ,  KC_5   ,  KC_6   ,  KC_7   ,  KC_8   ,  KC_9   ,  _______,  _______,  _______,            _______,
        KC_TAB ,  KC_P   ,  KC_Q   ,  KC_W   ,  KC_E   ,  KC_R   ,  KC_T   ,  KC_Y   ,  KC_U   ,  KC_I   ,  KC_O   ,  _______,  _______,            DF_B   ,  _______,
        KC_ESC ,  KC_LSFT,  KC_A   ,  KC_S   ,  KC_D   ,  KC_F   ,  KC_G   ,  KC_H   ,  KC_J   ,  KC_K   ,  KC_SCLN,  KC_BSPC,                      KC_ENT ,  _______,
        KC_L   ,  KC_M   ,  KC_Z   ,  KC_X   ,  KC_LCTL,  KC_V   ,  KC_B   ,  KC_N   ,  KC_COMM,  KC_DOT ,  KC_SLSH,                      _______,  _______,
        KC_C   ,  KC_LGUI,  KC_LALT,                                KC_SPC ,                      _______,  _______,  _______,            _______,  _______,  _______
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


// bool get_repeat_key_eligible_user(uint16_t keycode, keyrecord_t* record, uint8_t* remembered_mods) {
//     switch (keycode) {
//         // Ignore Custom Magic Keys
//         case MGONE:
//         case MGTWO:
//             return false;
//         case KC_A ... KC_Z:
//             if ((*remembered_mods & ~(MOD_MASK_SHIFT)) == 0) {
//                 *remembered_mods &= ~MOD_MASK_SHIFT;
//             }
//             break;
//     }
//
//     return true;
// }
//
// uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
//     switch (keycode) {
//         case KC_C:
//         case KC_P:
//         case KC_D:
//         case KC_G:
//         case KC_Z: return KC_Y;
//         case KC_Y: return KC_P;
//         case KC_R: return KC_L;
//         case KC_K: return KC_S;
//         case KC_L:
//         case KC_S: return KC_K;
//         case KC_U: return KC_E;
//         case KC_E: return KC_U;
//         case KC_O: return KC_A;
//         case KC_A: return KC_O;
//         case KC_1 ... KC_0: return KC_DOT;
//     }
//
//     return MGTHE;
// }

// void matrix_scan_user(void) {
//   achordion_task();
// }
//
// uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
//   return 120;
// }

// bool achordion_chord(uint16_t tap_hold_keycode,
//                      keyrecord_t* tap_hold_record,
//                      uint16_t other_keycode,
//                      keyrecord_t* other_record) {
//   // Exceptionally consider the following chords as holds, even though they
//   // are on the same hand in Dvorak.
//   switch (tap_hold_keycode) {
//     case HOME_ST:  // T + C.
//       if (other_keycode == KC_C || other_keycode == KC_V || other_keycode == KC_Z) { return true; }
//       break;
//   }
//
//   // Also allow same-hand holds when the other key is in the rows below the
//   // alphas. I need the `% (MATRIX_ROWS / 2)` because my keyboard is split.
//   // if (other_record->event.key.row % (MATRIX_ROWS / 2) >= 4) { return true; }
//
//   // Otherwise, follow the opposite hands rule.
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // if (!process_achordion(keycode, record)) { return false; }

    if (record->event.pressed) {
        switch (keycode) {
            case ARRW:
                SEND_STRING("->");
                return false;
            case DARW:
                SEND_STRING("=>");
                return false;
            case CLSRABK:
                SEND_STRING("/>");
                return false;
            case UPDIR:
                SEND_STRING("../");
                return false;
            case CUDIR:
                SEND_STRING("./");
                return false;
            case HODIR:
                SEND_STRING("~/");
                return false;
        }
    }
    return true;
}
