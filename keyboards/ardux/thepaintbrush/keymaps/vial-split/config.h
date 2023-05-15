// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

#undef MATRIX_ROWS
#undef MATRIX_COLS
//#include "config_common.h"

//vial
#define VIAL_KEYBOARD_UID {0xA8, 0x70, 0x79, 0x6F, 0xDD, 0x3D, 0x14, 0xD8}
#define VIAL_UNLOCK_COMBO_ROWS {0,2}
#define VIAL_UNLOCK_COMBO_COLS {0,3}

#define VIAL_COMBO_ENTRIES 50
#define DYNAMIC_KEYMAP_MACRO_COUNT 1
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define LAYER_STATE_8BIT

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7E71
#define PRODUCT_ID      0x7E72
#define DEVICE_VER      0x0001
#define MANUFACTURER    "ardux"
#define PRODUCT         "thepaintbrush"
#define DESCRIPTION     "thepaintbrush"

/* Board layout */
#define MATRIX_ROWS 2
#define MATRIX_COLS 8
#define UNUSED_PINS

/* Prevent jitters in key presses */
#define DEBOUNCE 5


