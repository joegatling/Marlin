/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CONFIG_EXAMPLES_DIR "Creality/Ender-3 Pro/BigTreeTech SKR Mini E3 3.0"

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_TIMEOUT 200
#define CUSTOM_BOOTSCREEN_BMPWIDTH  29

const unsigned char custom_start_bmp[] PROGMEM = {
  B00001111,B01111110,B11111111,B00000000,
  B00001001,B11000011,B10000001,B10000000,
  B00001001,B10011001,B10011111,B10000000,
  B11111001,B10011001,B10000111,B10000000,
  B10011001,B10011001,B10000110,B00000000,
  B10011001,B10011001,B10011111,B00000000,
  B11000011,B11000011,B10000001,B10000000,
  B01111111,B11111111,B11111111,B10000000,
  B00111111,B00111111,B01111111,B10000000,
  B01111110,B01111110,B11111111,B00000000,
  B11000011,B11000011,B10000001,B10000000,
  B10011001,B10011001,B11100111,B10000000,
  B10011111,B10011001,B11100111,B10000000,
  B10010001,B10000001,B10100110,B00000000,
  B10011001,B10011001,B10100110,B00000000,
  B11000001,B10011001,B10100110,B00000000,
  B01111111,B11111111,B10111110,B00000000,
  B00111111,B01111111,B10011110,B00000000,
  B11110000,B11111111,B11101111,B11000000,
  B10011000,B10011001,B10011100,B00100000,
  B10011000,B10011000,B10011001,B10010000,
  B10011000,B10011000,B00011001,B11111000,
  B10011000,B10011001,B00011001,B10011000,
  B10011111,B10011001,B10011001,B10011000,
  B10000001,B10011001,B10011100,B00011000,
  B11111111,B11111111,B11111111,B11111000,
  B01111111,B11111111,B11111111,B11111000
};