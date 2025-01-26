// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │
     * ├───┼───┼───┼───┼───┼───┤
     * │ G │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_2x6(
    _______,_______,_______,_______,_______,_______,
    _______,_______,_______,_______,_______,_______
    )
};
