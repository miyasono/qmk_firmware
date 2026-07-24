/* Copyright 2025 Carlos Eduardo de Paula <carlosedp@gmail.com>
 * Copyright 2025 EPOMAKER <https://github.com/Epomaker>
 * Copyright 2023 LiWenLiu <https://github.com/LiuLiuQMK>
 * Copyright 2021 QMK <https://github.com/qmk/qmk_firmware>
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

// Custom configuration
#undef DEBOUNCE
#define DEBOUNCE 7

#define TAPPING_TERM 130

// Vial configuration
#define VIAL_KEYBOARD_UID {0x2A, 0xE2, 0xCB, 0x9F, 0xA2, 0x26, 0x9C, 0x20}

// Unlock combo: Tab (0,0) + Enter (2,10)
#define VIAL_UNLOCK_COMBO_ROWS {0, 2}
#define VIAL_UNLOCK_COMBO_COLS {0, 10}

// 8 dynamic layers: 8*5*12*2 = 960 bytes of keymap storage.
// Emulated EEPROM kept at 2560 bytes; the space freed vs 12 layers goes to
// macros (2 x 8KB flash pages hold up to ~4KB of 16-bit vars in steady
// state; vendor private page is separate at 0x1BE00).
#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#undef EEPROM_SIZE
#define EEPROM_SIZE 2560
#undef DYNAMIC_KEYMAP_EEPROM_MAX_ADDR
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 2559
