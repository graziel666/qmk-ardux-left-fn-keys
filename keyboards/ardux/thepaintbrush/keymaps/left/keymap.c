// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#include QMK_KEYBOARD_H

#define _BASE 0

#define LAYOUT_left( \
    K00, K01, K02, K03, \
    K10, K11, K12, K13 \
    ) { \
    { K00, K01, K02, K03, }, \
    { K10, K11, K12, K13}  \
   }

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_left(
    KC_S, KC_T, KC_R, KC_A,
    KC_O, KC_I, KC_Y, KC_E
),

[1] = LAYOUT_left(
    _______, _______, _______, _______,
    _______, _______, _______, _______
),

[2] = LAYOUT_left(
    _______, _______, _______, _______,
    _______, _______, _______, _______
),

[3] = LAYOUT_left(
    _______, _______, _______, _______,
    _______, _______, _______, _______
),

[4] = LAYOUT_left(
    _______, _______, _______, _______,
    _______, _______, _______, _______
),
};
