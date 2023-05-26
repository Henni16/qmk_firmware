/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
    [_BASE] = LAYOUT_iso_110(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MUTE,  KC_PSCR,  RGB_TOG,  RGB_MOD,  _______,  _______,  QK_MAKE,  QK_BOOT,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,              KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,    KC_ENT,                                 KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  MO(_1), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
*/

#include QMK_KEYBOARD_H

// clang-format off

enum layers{
  _BASE,
  _1,
  _2
};



// Home row mods
#define H_A LGUI_T(KC_A)
#define H_S LALT_T(KC_S)
#define H_D LSFT_T(KC_D)
#define H_F LCTL_T(KC_F)
#define H_J RCTL_T(KC_J)
#define H_K RSFT_T(KC_K)
#define H_L LALT_T(KC_L)
#define H_SC RGUI_T(KC_SCLN)

#define LTE2 LT(_2, KC_E)


#define KC_PTT HYPR(KC_F1) // Push to talk
#define KC_VA HYPR(KC_F2) // Voice activation
#define KC_MU HYPR(KC_F3) // Mute
#define KC_AE RALT(KC_Q)
#define KC_OE RALT(KC_P)
#define KC_UE RALT(KC_Y)
#define KC_SS RALT(KC_S)
#define LSHIF OSM(MOD_LSFT)
#define RSHIF OSM(MOD_RSFT)
#define SLBRC S(KC_LBRC)
#define RLBRC S(KC_RBRC)
#define QEST S(KC_SLSH) // question mark
#define PIPE S(KC_BSLS)
#define DQUOT S(KC_QUOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_iso_110(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MUTE,  KC_PSCR,  RGB_TOG,  RGB_MOD,  KC_PTT,   KC_VA,    KC_MU,  QK_BOOT,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     LTE2,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,              KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_ESC,   H_A,      H_S,      H_D,      H_F,      KC_G,     KC_H,     H_J,      H_K,      H_L,      H_SC,     KC_BSPC,  OSL(_2),    KC_ENT,                                 KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        LSHIF,    OSL(_1),  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   OSL(_1),               RSHIF,             KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  TT(_1), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    [_1] = LAYOUT_iso_110(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  KC_OE,    S(KC_2),  KC_LBRC,  KC_RBRC,  KC_MINS,  S(KC_8),  KC_QUOT,  DQUOT,    KC_GRV,   _______,  _______,  _______,              _______,  _______,  _______,  _______,  _______,  _______,
        _______,  KC_AE,    KC_SS,    SLBRC,    RLBRC,    S(KC_EQL),KC_EQL,   KC_SLSH,  KC_BSLS,  S(KC_MINS),S(KC_3), S(KC_GRV),_______,    _______,                                _______,  _______,  _______,  _______,
        _______,  KC_UE,    S(KC_5),  S(KC_7),  S(KC_9),  S(KC_0),  S(KC_1),  QEST,     PIPE,     RALT(KC_5),_______, _______,              _______,            _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,            _______,  _______),
    [_2] = LAYOUT_iso_110(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,    KC_UP,  KC_END,   _______,  _______,  _______,              _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_PGUP,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  _______,    _______,                                _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PGDN,  _______,  _______,  _______,  _______,            _______,            _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______,  _______,            _______,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][1][2] = {
    [_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_1]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [_2] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

