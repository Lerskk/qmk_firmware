#include QMK_KEYBOARD_H
#include "features/orbital_mouse.h"

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

#define LT_L3 LT(FIVE, KC_M)

#define LT_R1 LT(FOUR, KC_Y)

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
    LLOCK = SAFE_RANGE,
    DCOL,
    ARRW,
    DARW,
    CLSRABK,
    UPDIR,
    CUDIR,
    HODIR,
    LAYER,
    MGONE
};

enum {
    DANCE_00,
    DANCE_01,
    DANCE_02,
    DANCE_03,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        // -----------------------------------------------------------------------------   ----------------------------------------------------------------------------- //
        _______,  KC_1   ,  KC_2   ,  KC_3   ,  KC_4   ,  KC_5   ,                         KC_6   ,  KC_7   ,  KC_8   ,  KC_9   ,  KC_0   ,  _______,  _______,  _______,            _______,
        // -----------------------------------------------------------------------------   ----------------------------------------------------------------------------- //
        KC_TAB ,  KC_F   ,  KC_L   ,  LT_L3  ,  ALTGR_L,  KC_W   ,                         TD(DANCE_01),  ALTGR_R,  KC_O   ,  KC_U   ,  LT_R1  ,  TO(ONE),  QK_REP ,            DF_G   ,  _______,
        // -----------------------------------------------------------------------------   ----------------------------------------------------------------------------- //
        KC_ESC ,  HOME_LG,  HOME_LA,  HOME_LS,  HOME_LC,  KC_G   ,                         TD(DANCE_03),  HOME_RC,  HOME_RS,  HOME_RA,  HOME_RG,  KC_BSPC,                      KC_ENT ,  _______,
        // -----------------------------------------------------------------------------   ----------------------------------------------------------------------------- //
        _______,  KC_V   ,  KC_J   ,  KC_K   ,  KC_P   ,  KC_Z   ,                         KC_Q   ,  KC_B   ,  TD(DANCE_02),  KC_QUOT,  KC_X   ,                      _______,  KC_UP  ,
        // -----------------------------------------------------------------------------   ----------------------------------------------------------------------------- //
        _______,  _______,  _______,                                KC_SPC,                      _______,  _______,  DF_Q   ,            KC_LEFT,  KC_DOWN,  KC_RGHT
        ),

    [ONE] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        // -----------------------------------------------------------------------------   ----------------------------------------------------------------------------- //
        _______,  KC_EXLM,  KC_AT  ,  KC_HASH,  KC_DLR ,  KC_PERC,                         KC_BSLS,  KC_GRV ,  KC_COLN,  KC_SCLN,  KC_AMPR,  TO(TWO),  _______,            _______,  _______,
        // -----------------------------------------------------------------------------   ----------------------------------------------------------------------------- //
        _______,  KC_QUES,  KC_PLUS,  KC_MINS,  KC_EQL ,  KC_CIRC,                         KC_QUOT,  KC_LPRN,  KC_LCBR,  KC_LBRC,  KC_PIPE,  _______,                      _______,  _______,
        // -----------------------------------------------------------------------------   ----------------------------------------------------------------------------- //
        _______,  KC_LABK,  KC_ASTR,  KC_SLSH,  KC_RABK,  KC_UNDS,                         KC_TILD ,  KC_RPRN,  KC_RCBR,  KC_RBRC,  TO(THREE),                      _______,  _______,
        // -----------------------------------------------------------------------------   ----------------------------------------------------------------------------- //
        _______,  _______,  _______,                                TD(DANCE_00),                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [TWO] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_MINS,  KC_7   ,  KC_8   ,  KC_9   ,  KC_0   ,  TO(ONE),  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_EQL ,  KC_4   ,  KC_5   ,  KC_6   ,  KC_MINS,  _______,                      _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_0   ,  KC_1   ,  KC_2   ,  KC_3   ,  _______,                      _______,  _______,
        _______,  _______,  _______,                                TD(DANCE_00),                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [THREE] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,  KC_PGUP,  KC_HOME,  KC_UP  ,  KC_END ,  _______,  OM_DBLS,  OM_BTNS,  OM_U   ,  OM_BTN2,  OM_SEL1,  TO(ONE),  _______,            _______,  _______,
        _______,  _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  OM_HLDS,  OM_L   ,  OM_D   ,  OM_R   ,  OM_SEL2,  _______,                      _______,  _______,
        _______,  KC_PGDN,  KC_CAPS,  _______,  _______,  _______,  OM_RELS,  OM_W_D ,  OM_W_U ,  OM_BTN3,  OM_SEL3,                      _______,  _______,
        _______,  _______,  _______,                                TD(DANCE_00),                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [FIVE] = LAYOUT_ansi_82(
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
        KC_GRV ,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        KC_TAB ,  KC_Q   ,  KC_W   ,  KC_E   ,  KC_R   ,  KC_T   ,  KC_Y   ,  KC_U   ,  KC_I   ,  KC_O   ,  KC_P   ,  _______,  _______,            DF_B   ,  _______,
        KC_ESC ,  KC_A   ,  KC_S   ,  KC_D   ,  KC_F   ,  KC_G   ,  KC_H   ,  KC_J   ,  KC_K   ,  KC_L   ,  KC_SCLN,  KC_BSPC,                      KC_ENT ,  _______,
        KC_LSFT,  KC_Z   ,  KC_X   ,  KC_C   ,  KC_V   ,  KC_B   ,  KC_N   ,  KC_M   ,  KC_COMM,  KC_DOT ,  KC_SLSH,                      _______,  _______,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
        ),

    [GAME] = LAYOUT_ansi_82(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        KC_GRV ,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        KC_TAB ,  KC_P   ,  KC_Q   ,  KC_W   ,  KC_E   ,  KC_R   ,  KC_T   ,  KC_Y   ,  KC_U   ,  KC_I   ,  KC_O   ,  _______,  _______,            DF_B   ,  _______,
        KC_ESC ,  KC_LSFT,  KC_A   ,  KC_S   ,  KC_D   ,  KC_F   ,  KC_G   ,  KC_H   ,  KC_J   ,  KC_K   ,  KC_SCLN,  KC_BSPC,                      KC_ENT ,  _______,
        KC_L   ,  KC_M   ,  KC_Z   ,  KC_X   ,  KC_LCTL,  KC_V   ,  KC_B   ,  KC_N   ,  KC_COMM,  KC_DOT ,  KC_SLSH,                      _______,  _______,
        KC_C   ,  KC_LGUI,  KC_LALT,                                _______,                      _______,  _______,  _______,            _______,  _______,  _______
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
    if (!process_orbital_mouse(keycode, record)) { return false; }

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
};

void matrix_scan_user(void) {
    orbital_mouse_task();
}

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

static tap dance_state = {
    .is_press_action = true,
    .step = 0
};

uint8_t dance_step(tap_dance_state_t *state);
uint8_t dance_step(tap_dance_state_t *state) {
	if (state->count == 1) {
		if (state->interrupted || !state->pressed) return SINGLE_TAP;
		else return SINGLE_HOLD;
	} else if (state->count == 2) {
		if (state->interrupted) return DOUBLE_SINGLE_TAP;
		else if (state->pressed) return DOUBLE_HOLD;
		else return DOUBLE_TAP;
	}
	return MORE_TAPS;
}

void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
        tap_code16(KC_SPC); layer_move(BASE);
	}
}
void dance_0_finished(tap_dance_state_t *state, void *user_data) {
	dance_state.step = dance_step(state);
	switch (dance_state.step) {
		case SINGLE_TAP:  layer_move(BASE); break;
		case SINGLE_HOLD: tap_code16(KC_SPC); break;
		case DOUBLE_TAP: tap_code16(KC_SPC); register_code16(KC_SPC); break;
		case DOUBLE_SINGLE_TAP: tap_code16(KC_SPC); tap_code16(KC_SPC); break;
	}
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state.step) {
        case SINGLE_TAP: unregister_code16(KC_SPC); break;
        // case SINGLE_HOLD: unregister_code16(KC_EXLM); break;
		case DOUBLE_TAP: unregister_code16(KC_SPC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPC); break;
	}
	dance_state.step = 0;
}


void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(KC_SLASH);
		tap_code16(KC_SLASH);
		tap_code16(KC_SLASH);
	}
	if(state->count > 3) {
		tap_code16(KC_SLASH);
	}
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
	dance_state.step = dance_step(state);
	switch (dance_state.step) {
		case SINGLE_TAP: register_code16(KC_SLASH); break;
		case SINGLE_HOLD: register_code16(S(KC_1)); break;
		case DOUBLE_TAP: register_code16(KC_SLASH); register_code16(KC_SLASH); break;
		case DOUBLE_SINGLE_TAP: tap_code16(KC_SLASH); register_code16(KC_SLASH);
	}
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state.step) {
		case SINGLE_TAP: unregister_code16(KC_SLASH); break;
		case SINGLE_HOLD: unregister_code16(S(KC_1)); break;
		case DOUBLE_TAP: unregister_code16(KC_SLASH); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(KC_SLASH); break;
	}
	dance_state.step = 0;
}

void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(KC_DOT);
		tap_code16(KC_DOT);
		tap_code16(KC_DOT);
	}
	if(state->count > 3) {
		tap_code16(KC_DOT);
	}
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
	dance_state.step = dance_step(state);
	switch (dance_state.step) {
		case SINGLE_TAP: register_code16(KC_DOT); break;
		case SINGLE_HOLD: register_code16(KC_MINS); break;
		case DOUBLE_TAP: register_code16(KC_DOT); register_code16(KC_DOT); break;
		case DOUBLE_SINGLE_TAP: tap_code16(KC_DOT); register_code16(KC_DOT);
	}
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state.step) {
		case SINGLE_TAP: unregister_code16(KC_DOT); break;
		case SINGLE_HOLD: unregister_code16(KC_MINS); break;
		case DOUBLE_TAP: unregister_code16(KC_DOT); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOT); break;
	}
	dance_state.step = 0;
}

void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
	if(state->count == 3) {
		tap_code16(KC_COMM);
		tap_code16(KC_COMM);
		tap_code16(KC_COMM);
	}
	if(state->count > 3) {
		tap_code16(KC_COMM);
	}
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
	dance_state.step = dance_step(state);
	switch (dance_state.step) {
		case SINGLE_TAP: register_code16(KC_COMM); break;
		case SINGLE_HOLD: register_code16(LSFT(KC_MINS)); break;
		case DOUBLE_TAP: register_code16(KC_COMM); register_code16(KC_COMM); break;
		case DOUBLE_SINGLE_TAP: tap_code16(KC_COMM); register_code16(KC_COMM);
	}
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
	wait_ms(10);
	switch (dance_state.step) {
		case SINGLE_TAP: unregister_code16(KC_COMM); break;
		case SINGLE_HOLD: unregister_code16(LSFT(KC_MINS)); break;
		case DOUBLE_TAP: unregister_code16(KC_COMM); break;
		case DOUBLE_SINGLE_TAP: unregister_code16(KC_COMM); break;
	}
	dance_state.step = 0;
}


tap_dance_action_t tap_dance_actions[] = {
    [DANCE_00] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
    [DANCE_01] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
    [DANCE_02] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
    [DANCE_03] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
};
