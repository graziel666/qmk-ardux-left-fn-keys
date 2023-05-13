// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

//#include "config_common.h"

//vial
#define VIAL_KEYBOARD_UID {0xA8, 0x70, 0x79, 0x6F, 0xDD, 0x3D, 0x14, 0xD8}
#define VIAL_UNLOCK_COMBO_ROWS {0,0}
#define VIAL_UNLOCK_COMBO_COLS {0,1}

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7E71
#define PRODUCT_ID      0x7E72
#define DEVICE_VER      0x0001
#define MANUFACTURER    "ardux"
#define PRODUCT         "thepaintbrush"
#define DESCRIPTION     "thepaintbrush"

/* Board layout */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4
#define UNUSED_PINS

/* Prevent jitters in key presses */
#define DEBOUNCE 5
