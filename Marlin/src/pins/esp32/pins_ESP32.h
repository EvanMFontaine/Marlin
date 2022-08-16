/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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

/**
 * Espressif ESP32 (Tensilica Xtensa LX6) pin assignments
 */

#include "env_validate.h"

#define BOARD_INFO_NAME "Espressif ESP32"

//
// I2S (steppers & other output-only pins)
//
#define I2S_STEPPER_STREAM
#if ENABLED(I2S_STEPPER_STREAM)
  #define I2S_WS                              25
  #define I2S_BCK                             26
  #define I2S_DATA                            27
#endif

//
// Limit Switches
//
#define X_MIN_PIN                             34
#define Y_MIN_PIN                             35
#define Z_MIN_PIN                             15

//
// Steppers
//
#define X_STEP_PIN                           16
#define X_DIR_PIN                            17
#define X_ENABLE_PIN                         18
//#define X_CS_PIN                             0

#define Y_STEP_PIN                           19
#define Y_DIR_PIN                            21
#define Y_ENABLE_PIN                         22
//#define Y_CS_PIN                            13

#define Z_STEP_PIN                           23
#define Z_DIR_PIN                            32
#define Z_ENABLE_PIN                         33
//#define Z_CS_PIN                             5  // SS_PIN

#define E0_STEP_PIN                          137
#define E0_DIR_PIN                           138
#define E0_ENABLE_PIN                        139
//#define E0_CS_PIN                           21

//
// Temperature Sensors
//
#define TEMP_0_PIN                            36  // Analog Input
#define TEMP_BED_PIN                          39  // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN                           2
#define FAN_PIN                               13
#define HEATER_BED_PIN                         4

// SPI
#define SDSS                                   5


/**
 
GPIO	Input	Output	Notes
0	pulled up	OK	outputs PWM signal at boot /
1	TX pin	OK	debug output at boot  /
2	OK	OK	connected to on-board LED/
3	OK	RX pin	HIGH at boot /
4	OK	OK	/
5	OK	OK	outputs PWM signal at boot /
6	x	x	connected to the integrated SPI flash /
7	x	x	connected to the integrated SPI flash /
8	x	x	connected to the integrated SPI flash /
9	x	x	connected to the integrated SPI flash /
10	x	x	connected to the integrated SPI flash /
11	x	x	connected to the integrated SPI flash /
12	OK	OK	boot fail if pulled high /
13	OK	OK	/
14	OK	OK	outputs PWM signal at boot
15	OK	OK	outputs PWM signal at boot /
16	OK	OK	X_STEP_PIN
17	OK	OK	X_DIR_PIN
18	OK	OK	X_ENABLE_PIN
19	OK	OK	Y_STEP_PIN
21	OK	OK	Y_DIR_PIN
22	OK	OK	Y_ENABLE_PIN  
23	OK	OK	Z_STEP_PIN
25	OK	OK	/
26	OK	OK	/
27	OK	OK	/
32	OK	OK	Z_DIR_PIN 
33	OK	OK	Z_ENABLE_PIN
34	OK		input only /
35	OK		input only /
36	OK		input only /
39	OK		input only /
 */