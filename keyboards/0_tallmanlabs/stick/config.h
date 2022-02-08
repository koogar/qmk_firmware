/*
Copyright 2021 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x111C
#define DEVICE_VER      0x0100
#define MANUFACTURER    Keebio
#define PRODUCT         The Stick

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 12

/* key matrix pins */
#define DIRECT_PINS { \
    { D1, D4, D7, D1, D4, D7, D1, D4, D7, D1, D4, D7 } \
}



/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200
