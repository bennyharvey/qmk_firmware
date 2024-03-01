// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0





#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // https://docs.qmk.fm/#/keymap?id=keymap-and-layers
    // https://docs.qmk.fm/#/feature_layers
    // https://docs.qmk.fm/#/keycodes
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Alt│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Esc│
      *               └───┤MO1├───┐   ┌───┤MO2├───┘
      *                   └───┤Spc│   │Ent├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LEFT_ALT,
                                            KC_LGUI, MO(1), KC_SPC,          KC_ENT, MO(2), KC_ESC
    ),
      /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │ F1│ F2│ F3│ F4│ F5│ F6│       │ F7│ F8│ F9│F10│F11│F12│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│Dt1│Dt2│Dt3│Dt4│   │       │Lft│Dwn│Up │Rht│PDn│PUp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │Alt│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Esc│
      *               └───┤MO1├───┐   ┌───┤MO2├───┘
      *                   └───┤Spc│   │Ent├───┘
      *                       └───┘   └───┘
      */
    [1] = LAYOUT_split_3x6_3(
        KC_F1,  KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,                           KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,    KC_F12,
        KC_LCTL, LGUI(KC_1),    LGUI(KC_2),    LGUI(KC_3),    LGUI(KC_4),    KC_NO,                               KC_LEFT,    KC_DOWN,    KC_UP,    KC_RIGHT,    KC_PAGE_DOWN, KC_PAGE_UP,
        KC_LSFT, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8, KC_9,  KC_0, KC_TRNS,
                                            KC_LGUI, KC_TRNS, KC_SPC,          KC_ENT, KC_TRNS, KC_TRNS
    ),
      /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ ` │   │ ( │ { │ [ │       │ ] │ } │ ) │   │   │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│   │   │ $ │ - │ + │       │ < │ > │ / │ | │   │   │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│   │   │   │ = │ _ │       │   │   │ * │ \ │   │Alt│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Esc│
      *               └───┤MO1├───┐   ┌───┤MO2├───┘
      *                   └───┤Spc│   │Ent├───┘
      *                       └───┘   └───┘
      */
    [2] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_GRAVE,    KC_NO,    LSFT(KC_9),    LSFT(KC_LEFT_BRACKET),    KC_LEFT_BRACKET,         KC_RIGHT_BRACKET,    LSFT(KC_RIGHT_BRACKET),    LSFT(KC_0),    KC_NO,    KC_NO,    KC_BSPC,
        KC_LCTL, KC_NO,    KC_NO,    LSFT(KC_4),    KC_MINUS,    LSFT(KC_EQUAL),                          LSFT(KC_COMMA),    LSFT(KC_DOT),    KC_SLASH,    LSFT(KC_BACKSLASH),    KC_NO, KC_NO,
        KC_LSFT, KC_NO,    KC_NO,    KC_NO,    KC_EQUAL,    LSFT(KC_MINUS),                               KC_NO,    KC_NO,    LSFT(KC_8), KC_BACKSLASH,  KC_NO, KC_TRNS,
                                            KC_LGUI, KC_TRNS, KC_SPC,          KC_ENT, KC_TRNS, KC_TRNS
    ),
};

