/* Copyright (C) 2023 Alexey Zagorodnikov <xglooom@gmail.com>
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define SN32_RGB_MATRIX_ROW_PINS { C0,C1,C3, C4,C5,C6, C7,C8,C9, C10,C11,C12, C13,C14,B13, C15,B15,B14 }

#define SN32_RGB_MATRIX_COL_PINS { B9, A8, A9, A10, A11, A12, A13, A14, A15, B0, B1, B2, B3, B4, B5, B6, B7, B8 }

#define RGB_MATRIX_LED_COUNT 98
#define MATRIX_UNSELECT_DRIVE_HIGH
#define SN32_PWM_OUTPUT_ACTIVE_LEVEL SN32_PWM_OUTPUT_ACTIVE_HIGH
#define SN32_RGB_OUTPUT_ACTIVE_LEVEL SN32_RGB_OUTPUT_ACTIVE_HIGH

/* RGB Reactive Effects Toggle */
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
//#define RGB_MATRIX_KEYRELEASES

/* Enable RGB sleep */
#define RGB_DISABLE_WHEN_USB_SUSPENDED
