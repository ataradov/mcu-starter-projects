/**
 * \file
 *
 * \brief Peripheral I/O description for SAML11D15A
 *
 * Copyright (c) 2017 Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAML11D15A_PIO_
#define _SAML11D15A_PIO_

#define PIN_PA00                            0  /**< \brief Pin Number for PA00 */
#define PORT_PA00              (_UL_(1) <<  0) /**< \brief PORT Mask  for PA00 */
#define PIN_PA01                            1  /**< \brief Pin Number for PA01 */
#define PORT_PA01              (_UL_(1) <<  1) /**< \brief PORT Mask  for PA01 */
#define PIN_PA02                            2  /**< \brief Pin Number for PA02 */
#define PORT_PA02              (_UL_(1) <<  2) /**< \brief PORT Mask  for PA02 */
#define PIN_PA03                            3  /**< \brief Pin Number for PA03 */
#define PORT_PA03              (_UL_(1) <<  3) /**< \brief PORT Mask  for PA03 */
#define PIN_PA04                            4  /**< \brief Pin Number for PA04 */
#define PORT_PA04              (_UL_(1) <<  4) /**< \brief PORT Mask  for PA04 */
#define PIN_PA05                            5  /**< \brief Pin Number for PA05 */
#define PORT_PA05              (_UL_(1) <<  5) /**< \brief PORT Mask  for PA05 */
#define PIN_PA08                            8  /**< \brief Pin Number for PA08 */
#define PORT_PA08              (_UL_(1) <<  8) /**< \brief PORT Mask  for PA08 */
#define PIN_PA14                           14  /**< \brief Pin Number for PA14 */
#define PORT_PA14              (_UL_(1) << 14) /**< \brief PORT Mask  for PA14 */
#define PIN_PA15                           15  /**< \brief Pin Number for PA15 */
#define PORT_PA15              (_UL_(1) << 15) /**< \brief PORT Mask  for PA15 */
#define PIN_PA16                           16  /**< \brief Pin Number for PA16 */
#define PORT_PA16              (_UL_(1) << 16) /**< \brief PORT Mask  for PA16 */
#define PIN_PA17                           17  /**< \brief Pin Number for PA17 */
#define PORT_PA17              (_UL_(1) << 17) /**< \brief PORT Mask  for PA17 */
#define PIN_PA18                           18  /**< \brief Pin Number for PA18 */
#define PORT_PA18              (_UL_(1) << 18) /**< \brief PORT Mask  for PA18 */
#define PIN_PA19                           19  /**< \brief Pin Number for PA19 */
#define PORT_PA19              (_UL_(1) << 19) /**< \brief PORT Mask  for PA19 */
#define PIN_PA22                           22  /**< \brief Pin Number for PA22 */
#define PORT_PA22              (_UL_(1) << 22) /**< \brief PORT Mask  for PA22 */
#define PIN_PA23                           23  /**< \brief Pin Number for PA23 */
#define PORT_PA23              (_UL_(1) << 23) /**< \brief PORT Mask  for PA23 */
#define PIN_PA30                           30  /**< \brief Pin Number for PA30 */
#define PORT_PA30              (_UL_(1) << 30) /**< \brief PORT Mask  for PA30 */
#define PIN_PA31                           31  /**< \brief Pin Number for PA31 */
#define PORT_PA31              (_UL_(1) << 31) /**< \brief PORT Mask  for PA31 */
/* ========== PORT definition for GCLK peripheral ========== */
#define PIN_PA30H_GCLK_IO0             _L_(30) /**< \brief GCLK signal: IO0 on PA30 mux H */
#define MUX_PA30H_GCLK_IO0              _L_(7)
#define PINMUX_PA30H_GCLK_IO0      ((PIN_PA30H_GCLK_IO0 << 16) | MUX_PA30H_GCLK_IO0)
#define PORT_PA30H_GCLK_IO0    (_UL_(1) << 30)
#define PIN_PA14H_GCLK_IO0             _L_(14) /**< \brief GCLK signal: IO0 on PA14 mux H */
#define MUX_PA14H_GCLK_IO0              _L_(7)
#define PINMUX_PA14H_GCLK_IO0      ((PIN_PA14H_GCLK_IO0 << 16) | MUX_PA14H_GCLK_IO0)
#define PORT_PA14H_GCLK_IO0    (_UL_(1) << 14)
#define PIN_PA23H_GCLK_IO1             _L_(23) /**< \brief GCLK signal: IO1 on PA23 mux H */
#define MUX_PA23H_GCLK_IO1              _L_(7)
#define PINMUX_PA23H_GCLK_IO1      ((PIN_PA23H_GCLK_IO1 << 16) | MUX_PA23H_GCLK_IO1)
#define PORT_PA23H_GCLK_IO1    (_UL_(1) << 23)
#define PIN_PA15H_GCLK_IO1             _L_(15) /**< \brief GCLK signal: IO1 on PA15 mux H */
#define MUX_PA15H_GCLK_IO1              _L_(7)
#define PINMUX_PA15H_GCLK_IO1      ((PIN_PA15H_GCLK_IO1 << 16) | MUX_PA15H_GCLK_IO1)
#define PORT_PA15H_GCLK_IO1    (_UL_(1) << 15)
#define PIN_PA16H_GCLK_IO2             _L_(16) /**< \brief GCLK signal: IO2 on PA16 mux H */
#define MUX_PA16H_GCLK_IO2              _L_(7)
#define PINMUX_PA16H_GCLK_IO2      ((PIN_PA16H_GCLK_IO2 << 16) | MUX_PA16H_GCLK_IO2)
#define PORT_PA16H_GCLK_IO2    (_UL_(1) << 16)
#define PIN_PA22H_GCLK_IO2             _L_(22) /**< \brief GCLK signal: IO2 on PA22 mux H */
#define MUX_PA22H_GCLK_IO2              _L_(7)
#define PINMUX_PA22H_GCLK_IO2      ((PIN_PA22H_GCLK_IO2 << 16) | MUX_PA22H_GCLK_IO2)
#define PORT_PA22H_GCLK_IO2    (_UL_(1) << 22)
#define PIN_PA17H_GCLK_IO3             _L_(17) /**< \brief GCLK signal: IO3 on PA17 mux H */
#define MUX_PA17H_GCLK_IO3              _L_(7)
#define PINMUX_PA17H_GCLK_IO3      ((PIN_PA17H_GCLK_IO3 << 16) | MUX_PA17H_GCLK_IO3)
#define PORT_PA17H_GCLK_IO3    (_UL_(1) << 17)
/* ========== PORT definition for RTC peripheral ========== */
#define PIN_PA08G_RTC_IN0               _L_(8) /**< \brief RTC signal: IN0 on PA08 mux G */
#define MUX_PA08G_RTC_IN0               _L_(6)
#define PINMUX_PA08G_RTC_IN0       ((PIN_PA08G_RTC_IN0 << 16) | MUX_PA08G_RTC_IN0)
#define PORT_PA08G_RTC_IN0     (_UL_(1) <<  8)
#define PIN_PA16G_RTC_IN2              _L_(16) /**< \brief RTC signal: IN2 on PA16 mux G */
#define MUX_PA16G_RTC_IN2               _L_(6)
#define PINMUX_PA16G_RTC_IN2       ((PIN_PA16G_RTC_IN2 << 16) | MUX_PA16G_RTC_IN2)
#define PORT_PA16G_RTC_IN2     (_UL_(1) << 16)
#define PIN_PA17G_RTC_IN3              _L_(17) /**< \brief RTC signal: IN3 on PA17 mux G */
#define MUX_PA17G_RTC_IN3               _L_(6)
#define PINMUX_PA17G_RTC_IN3       ((PIN_PA17G_RTC_IN3 << 16) | MUX_PA17G_RTC_IN3)
#define PORT_PA17G_RTC_IN3     (_UL_(1) << 17)
#define PIN_PA18G_RTC_OUT0             _L_(18) /**< \brief RTC signal: OUT0 on PA18 mux G */
#define MUX_PA18G_RTC_OUT0              _L_(6)
#define PINMUX_PA18G_RTC_OUT0      ((PIN_PA18G_RTC_OUT0 << 16) | MUX_PA18G_RTC_OUT0)
#define PORT_PA18G_RTC_OUT0    (_UL_(1) << 18)
#define PIN_PA19G_RTC_OUT1             _L_(19) /**< \brief RTC signal: OUT1 on PA19 mux G */
#define MUX_PA19G_RTC_OUT1              _L_(6)
#define PINMUX_PA19G_RTC_OUT1      ((PIN_PA19G_RTC_OUT1 << 16) | MUX_PA19G_RTC_OUT1)
#define PORT_PA19G_RTC_OUT1    (_UL_(1) << 19)
#define PIN_PA22G_RTC_OUT2             _L_(22) /**< \brief RTC signal: OUT2 on PA22 mux G */
#define MUX_PA22G_RTC_OUT2              _L_(6)
#define PINMUX_PA22G_RTC_OUT2      ((PIN_PA22G_RTC_OUT2 << 16) | MUX_PA22G_RTC_OUT2)
#define PORT_PA22G_RTC_OUT2    (_UL_(1) << 22)
#define PIN_PA23G_RTC_OUT3             _L_(23) /**< \brief RTC signal: OUT3 on PA23 mux G */
#define MUX_PA23G_RTC_OUT3              _L_(6)
#define PINMUX_PA23G_RTC_OUT3      ((PIN_PA23G_RTC_OUT3 << 16) | MUX_PA23G_RTC_OUT3)
#define PORT_PA23G_RTC_OUT3    (_UL_(1) << 23)
/* ========== PORT definition for EIC peripheral ========== */
#define PIN_PA19A_EIC_EXTINT0          _L_(19) /**< \brief EIC signal: EXTINT0 on PA19 mux A */
#define MUX_PA19A_EIC_EXTINT0           _L_(0)
#define PINMUX_PA19A_EIC_EXTINT0   ((PIN_PA19A_EIC_EXTINT0 << 16) | MUX_PA19A_EIC_EXTINT0)
#define PORT_PA19A_EIC_EXTINT0  (_UL_(1) << 19)
#define PIN_PA19A_EIC_EXTINT_NUM        _L_(0) /**< \brief EIC signal: PIN_PA19 External Interrupt Line */
#define PIN_PA00A_EIC_EXTINT0           _L_(0) /**< \brief EIC signal: EXTINT0 on PA00 mux A */
#define MUX_PA00A_EIC_EXTINT0           _L_(0)
#define PINMUX_PA00A_EIC_EXTINT0   ((PIN_PA00A_EIC_EXTINT0 << 16) | MUX_PA00A_EIC_EXTINT0)
#define PORT_PA00A_EIC_EXTINT0  (_UL_(1) <<  0)
#define PIN_PA00A_EIC_EXTINT_NUM        _L_(0) /**< \brief EIC signal: PIN_PA00 External Interrupt Line */
#define PIN_PA22A_EIC_EXTINT1          _L_(22) /**< \brief EIC signal: EXTINT1 on PA22 mux A */
#define MUX_PA22A_EIC_EXTINT1           _L_(0)
#define PINMUX_PA22A_EIC_EXTINT1   ((PIN_PA22A_EIC_EXTINT1 << 16) | MUX_PA22A_EIC_EXTINT1)
#define PORT_PA22A_EIC_EXTINT1  (_UL_(1) << 22)
#define PIN_PA22A_EIC_EXTINT_NUM        _L_(1) /**< \brief EIC signal: PIN_PA22 External Interrupt Line */
#define PIN_PA01A_EIC_EXTINT1           _L_(1) /**< \brief EIC signal: EXTINT1 on PA01 mux A */
#define MUX_PA01A_EIC_EXTINT1           _L_(0)
#define PINMUX_PA01A_EIC_EXTINT1   ((PIN_PA01A_EIC_EXTINT1 << 16) | MUX_PA01A_EIC_EXTINT1)
#define PORT_PA01A_EIC_EXTINT1  (_UL_(1) <<  1)
#define PIN_PA01A_EIC_EXTINT_NUM        _L_(1) /**< \brief EIC signal: PIN_PA01 External Interrupt Line */
#define PIN_PA02A_EIC_EXTINT2           _L_(2) /**< \brief EIC signal: EXTINT2 on PA02 mux A */
#define MUX_PA02A_EIC_EXTINT2           _L_(0)
#define PINMUX_PA02A_EIC_EXTINT2   ((PIN_PA02A_EIC_EXTINT2 << 16) | MUX_PA02A_EIC_EXTINT2)
#define PORT_PA02A_EIC_EXTINT2  (_UL_(1) <<  2)
#define PIN_PA02A_EIC_EXTINT_NUM        _L_(2) /**< \brief EIC signal: PIN_PA02 External Interrupt Line */
#define PIN_PA23A_EIC_EXTINT2          _L_(23) /**< \brief EIC signal: EXTINT2 on PA23 mux A */
#define MUX_PA23A_EIC_EXTINT2           _L_(0)
#define PINMUX_PA23A_EIC_EXTINT2   ((PIN_PA23A_EIC_EXTINT2 << 16) | MUX_PA23A_EIC_EXTINT2)
#define PORT_PA23A_EIC_EXTINT2  (_UL_(1) << 23)
#define PIN_PA23A_EIC_EXTINT_NUM        _L_(2) /**< \brief EIC signal: PIN_PA23 External Interrupt Line */
#define PIN_PA03A_EIC_EXTINT3           _L_(3) /**< \brief EIC signal: EXTINT3 on PA03 mux A */
#define MUX_PA03A_EIC_EXTINT3           _L_(0)
#define PINMUX_PA03A_EIC_EXTINT3   ((PIN_PA03A_EIC_EXTINT3 << 16) | MUX_PA03A_EIC_EXTINT3)
#define PORT_PA03A_EIC_EXTINT3  (_UL_(1) <<  3)
#define PIN_PA03A_EIC_EXTINT_NUM        _L_(3) /**< \brief EIC signal: PIN_PA03 External Interrupt Line */
#define PIN_PA14A_EIC_EXTINT3          _L_(14) /**< \brief EIC signal: EXTINT3 on PA14 mux A */
#define MUX_PA14A_EIC_EXTINT3           _L_(0)
#define PINMUX_PA14A_EIC_EXTINT3   ((PIN_PA14A_EIC_EXTINT3 << 16) | MUX_PA14A_EIC_EXTINT3)
#define PORT_PA14A_EIC_EXTINT3  (_UL_(1) << 14)
#define PIN_PA14A_EIC_EXTINT_NUM        _L_(3) /**< \brief EIC signal: PIN_PA14 External Interrupt Line */
#define PIN_PA04A_EIC_EXTINT4           _L_(4) /**< \brief EIC signal: EXTINT4 on PA04 mux A */
#define MUX_PA04A_EIC_EXTINT4           _L_(0)
#define PINMUX_PA04A_EIC_EXTINT4   ((PIN_PA04A_EIC_EXTINT4 << 16) | MUX_PA04A_EIC_EXTINT4)
#define PORT_PA04A_EIC_EXTINT4  (_UL_(1) <<  4)
#define PIN_PA04A_EIC_EXTINT_NUM        _L_(4) /**< \brief EIC signal: PIN_PA04 External Interrupt Line */
#define PIN_PA15A_EIC_EXTINT4          _L_(15) /**< \brief EIC signal: EXTINT4 on PA15 mux A */
#define MUX_PA15A_EIC_EXTINT4           _L_(0)
#define PINMUX_PA15A_EIC_EXTINT4   ((PIN_PA15A_EIC_EXTINT4 << 16) | MUX_PA15A_EIC_EXTINT4)
#define PORT_PA15A_EIC_EXTINT4  (_UL_(1) << 15)
#define PIN_PA15A_EIC_EXTINT_NUM        _L_(4) /**< \brief EIC signal: PIN_PA15 External Interrupt Line */
#define PIN_PA05A_EIC_EXTINT5           _L_(5) /**< \brief EIC signal: EXTINT5 on PA05 mux A */
#define MUX_PA05A_EIC_EXTINT5           _L_(0)
#define PINMUX_PA05A_EIC_EXTINT5   ((PIN_PA05A_EIC_EXTINT5 << 16) | MUX_PA05A_EIC_EXTINT5)
#define PORT_PA05A_EIC_EXTINT5  (_UL_(1) <<  5)
#define PIN_PA05A_EIC_EXTINT_NUM        _L_(5) /**< \brief EIC signal: PIN_PA05 External Interrupt Line */
#define PIN_PA16A_EIC_EXTINT5          _L_(16) /**< \brief EIC signal: EXTINT5 on PA16 mux A */
#define MUX_PA16A_EIC_EXTINT5           _L_(0)
#define PINMUX_PA16A_EIC_EXTINT5   ((PIN_PA16A_EIC_EXTINT5 << 16) | MUX_PA16A_EIC_EXTINT5)
#define PORT_PA16A_EIC_EXTINT5  (_UL_(1) << 16)
#define PIN_PA16A_EIC_EXTINT_NUM        _L_(5) /**< \brief EIC signal: PIN_PA16 External Interrupt Line */
#define PIN_PA17A_EIC_EXTINT6          _L_(17) /**< \brief EIC signal: EXTINT6 on PA17 mux A */
#define MUX_PA17A_EIC_EXTINT6           _L_(0)
#define PINMUX_PA17A_EIC_EXTINT6   ((PIN_PA17A_EIC_EXTINT6 << 16) | MUX_PA17A_EIC_EXTINT6)
#define PORT_PA17A_EIC_EXTINT6  (_UL_(1) << 17)
#define PIN_PA17A_EIC_EXTINT_NUM        _L_(6) /**< \brief EIC signal: PIN_PA17 External Interrupt Line */
#define PIN_PA30A_EIC_EXTINT6          _L_(30) /**< \brief EIC signal: EXTINT6 on PA30 mux A */
#define MUX_PA30A_EIC_EXTINT6           _L_(0)
#define PINMUX_PA30A_EIC_EXTINT6   ((PIN_PA30A_EIC_EXTINT6 << 16) | MUX_PA30A_EIC_EXTINT6)
#define PORT_PA30A_EIC_EXTINT6  (_UL_(1) << 30)
#define PIN_PA30A_EIC_EXTINT_NUM        _L_(6) /**< \brief EIC signal: PIN_PA30 External Interrupt Line */
#define PIN_PA18A_EIC_EXTINT7          _L_(18) /**< \brief EIC signal: EXTINT7 on PA18 mux A */
#define MUX_PA18A_EIC_EXTINT7           _L_(0)
#define PINMUX_PA18A_EIC_EXTINT7   ((PIN_PA18A_EIC_EXTINT7 << 16) | MUX_PA18A_EIC_EXTINT7)
#define PORT_PA18A_EIC_EXTINT7  (_UL_(1) << 18)
#define PIN_PA18A_EIC_EXTINT_NUM        _L_(7) /**< \brief EIC signal: PIN_PA18 External Interrupt Line */
#define PIN_PA31A_EIC_EXTINT7          _L_(31) /**< \brief EIC signal: EXTINT7 on PA31 mux A */
#define MUX_PA31A_EIC_EXTINT7           _L_(0)
#define PINMUX_PA31A_EIC_EXTINT7   ((PIN_PA31A_EIC_EXTINT7 << 16) | MUX_PA31A_EIC_EXTINT7)
#define PORT_PA31A_EIC_EXTINT7  (_UL_(1) << 31)
#define PIN_PA31A_EIC_EXTINT_NUM        _L_(7) /**< \brief EIC signal: PIN_PA31 External Interrupt Line */
#define PIN_PA08A_EIC_NMI               _L_(8) /**< \brief EIC signal: NMI on PA08 mux A */
#define MUX_PA08A_EIC_NMI               _L_(0)
#define PINMUX_PA08A_EIC_NMI       ((PIN_PA08A_EIC_NMI << 16) | MUX_PA08A_EIC_NMI)
#define PORT_PA08A_EIC_NMI     (_UL_(1) <<  8)
/* ========== PORT definition for AC peripheral ========== */
#define PIN_PA04B_AC_AIN0               _L_(4) /**< \brief AC signal: AIN0 on PA04 mux B */
#define MUX_PA04B_AC_AIN0               _L_(1)
#define PINMUX_PA04B_AC_AIN0       ((PIN_PA04B_AC_AIN0 << 16) | MUX_PA04B_AC_AIN0)
#define PORT_PA04B_AC_AIN0     (_UL_(1) <<  4)
#define PIN_PA05B_AC_AIN1               _L_(5) /**< \brief AC signal: AIN1 on PA05 mux B */
#define MUX_PA05B_AC_AIN1               _L_(1)
#define PINMUX_PA05B_AC_AIN1       ((PIN_PA05B_AC_AIN1 << 16) | MUX_PA05B_AC_AIN1)
#define PORT_PA05B_AC_AIN1     (_UL_(1) <<  5)
#define PIN_PA18H_AC_CMP0              _L_(18) /**< \brief AC signal: CMP0 on PA18 mux H */
#define MUX_PA18H_AC_CMP0               _L_(7)
#define PINMUX_PA18H_AC_CMP0       ((PIN_PA18H_AC_CMP0 << 16) | MUX_PA18H_AC_CMP0)
#define PORT_PA18H_AC_CMP0     (_UL_(1) << 18)
#define PIN_PA19H_AC_CMP1              _L_(19) /**< \brief AC signal: CMP1 on PA19 mux H */
#define MUX_PA19H_AC_CMP1               _L_(7)
#define PINMUX_PA19H_AC_CMP1       ((PIN_PA19H_AC_CMP1 << 16) | MUX_PA19H_AC_CMP1)
#define PORT_PA19H_AC_CMP1     (_UL_(1) << 19)
/* ========== PORT definition for SERCOM0 peripheral ========== */
#define PIN_PA04D_SERCOM0_PAD0          _L_(4) /**< \brief SERCOM0 signal: PAD0 on PA04 mux D */
#define MUX_PA04D_SERCOM0_PAD0          _L_(3)
#define PINMUX_PA04D_SERCOM0_PAD0  ((PIN_PA04D_SERCOM0_PAD0 << 16) | MUX_PA04D_SERCOM0_PAD0)
#define PORT_PA04D_SERCOM0_PAD0  (_UL_(1) <<  4)
#define PIN_PA16D_SERCOM0_PAD0         _L_(16) /**< \brief SERCOM0 signal: PAD0 on PA16 mux D */
#define MUX_PA16D_SERCOM0_PAD0          _L_(3)
#define PINMUX_PA16D_SERCOM0_PAD0  ((PIN_PA16D_SERCOM0_PAD0 << 16) | MUX_PA16D_SERCOM0_PAD0)
#define PORT_PA16D_SERCOM0_PAD0  (_UL_(1) << 16)
#define PIN_PA22C_SERCOM0_PAD0         _L_(22) /**< \brief SERCOM0 signal: PAD0 on PA22 mux C */
#define MUX_PA22C_SERCOM0_PAD0          _L_(2)
#define PINMUX_PA22C_SERCOM0_PAD0  ((PIN_PA22C_SERCOM0_PAD0 << 16) | MUX_PA22C_SERCOM0_PAD0)
#define PORT_PA22C_SERCOM0_PAD0  (_UL_(1) << 22)
#define PIN_PA05D_SERCOM0_PAD1          _L_(5) /**< \brief SERCOM0 signal: PAD1 on PA05 mux D */
#define MUX_PA05D_SERCOM0_PAD1          _L_(3)
#define PINMUX_PA05D_SERCOM0_PAD1  ((PIN_PA05D_SERCOM0_PAD1 << 16) | MUX_PA05D_SERCOM0_PAD1)
#define PORT_PA05D_SERCOM0_PAD1  (_UL_(1) <<  5)
#define PIN_PA17D_SERCOM0_PAD1         _L_(17) /**< \brief SERCOM0 signal: PAD1 on PA17 mux D */
#define MUX_PA17D_SERCOM0_PAD1          _L_(3)
#define PINMUX_PA17D_SERCOM0_PAD1  ((PIN_PA17D_SERCOM0_PAD1 << 16) | MUX_PA17D_SERCOM0_PAD1)
#define PORT_PA17D_SERCOM0_PAD1  (_UL_(1) << 17)
#define PIN_PA23C_SERCOM0_PAD1         _L_(23) /**< \brief SERCOM0 signal: PAD1 on PA23 mux C */
#define MUX_PA23C_SERCOM0_PAD1          _L_(2)
#define PINMUX_PA23C_SERCOM0_PAD1  ((PIN_PA23C_SERCOM0_PAD1 << 16) | MUX_PA23C_SERCOM0_PAD1)
#define PORT_PA23C_SERCOM0_PAD1  (_UL_(1) << 23)
#define PIN_PA14D_SERCOM0_PAD2         _L_(14) /**< \brief SERCOM0 signal: PAD2 on PA14 mux D */
#define MUX_PA14D_SERCOM0_PAD2          _L_(3)
#define PINMUX_PA14D_SERCOM0_PAD2  ((PIN_PA14D_SERCOM0_PAD2 << 16) | MUX_PA14D_SERCOM0_PAD2)
#define PORT_PA14D_SERCOM0_PAD2  (_UL_(1) << 14)
#define PIN_PA18D_SERCOM0_PAD2         _L_(18) /**< \brief SERCOM0 signal: PAD2 on PA18 mux D */
#define MUX_PA18D_SERCOM0_PAD2          _L_(3)
#define PINMUX_PA18D_SERCOM0_PAD2  ((PIN_PA18D_SERCOM0_PAD2 << 16) | MUX_PA18D_SERCOM0_PAD2)
#define PORT_PA18D_SERCOM0_PAD2  (_UL_(1) << 18)
#define PIN_PA02D_SERCOM0_PAD2          _L_(2) /**< \brief SERCOM0 signal: PAD2 on PA02 mux D */
#define MUX_PA02D_SERCOM0_PAD2          _L_(3)
#define PINMUX_PA02D_SERCOM0_PAD2  ((PIN_PA02D_SERCOM0_PAD2 << 16) | MUX_PA02D_SERCOM0_PAD2)
#define PORT_PA02D_SERCOM0_PAD2  (_UL_(1) <<  2)
#define PIN_PA15D_SERCOM0_PAD3         _L_(15) /**< \brief SERCOM0 signal: PAD3 on PA15 mux D */
#define MUX_PA15D_SERCOM0_PAD3          _L_(3)
#define PINMUX_PA15D_SERCOM0_PAD3  ((PIN_PA15D_SERCOM0_PAD3 << 16) | MUX_PA15D_SERCOM0_PAD3)
#define PORT_PA15D_SERCOM0_PAD3  (_UL_(1) << 15)
#define PIN_PA19D_SERCOM0_PAD3         _L_(19) /**< \brief SERCOM0 signal: PAD3 on PA19 mux D */
#define MUX_PA19D_SERCOM0_PAD3          _L_(3)
#define PINMUX_PA19D_SERCOM0_PAD3  ((PIN_PA19D_SERCOM0_PAD3 << 16) | MUX_PA19D_SERCOM0_PAD3)
#define PORT_PA19D_SERCOM0_PAD3  (_UL_(1) << 19)
#define PIN_PA03D_SERCOM0_PAD3          _L_(3) /**< \brief SERCOM0 signal: PAD3 on PA03 mux D */
#define MUX_PA03D_SERCOM0_PAD3          _L_(3)
#define PINMUX_PA03D_SERCOM0_PAD3  ((PIN_PA03D_SERCOM0_PAD3 << 16) | MUX_PA03D_SERCOM0_PAD3)
#define PORT_PA03D_SERCOM0_PAD3  (_UL_(1) <<  3)
/* ========== PORT definition for SERCOM1 peripheral ========== */
#define PIN_PA16C_SERCOM1_PAD0         _L_(16) /**< \brief SERCOM1 signal: PAD0 on PA16 mux C */
#define MUX_PA16C_SERCOM1_PAD0          _L_(2)
#define PINMUX_PA16C_SERCOM1_PAD0  ((PIN_PA16C_SERCOM1_PAD0 << 16) | MUX_PA16C_SERCOM1_PAD0)
#define PORT_PA16C_SERCOM1_PAD0  (_UL_(1) << 16)
#define PIN_PA08C_SERCOM1_PAD0          _L_(8) /**< \brief SERCOM1 signal: PAD0 on PA08 mux C */
#define MUX_PA08C_SERCOM1_PAD0          _L_(2)
#define PINMUX_PA08C_SERCOM1_PAD0  ((PIN_PA08C_SERCOM1_PAD0 << 16) | MUX_PA08C_SERCOM1_PAD0)
#define PORT_PA08C_SERCOM1_PAD0  (_UL_(1) <<  8)
#define PIN_PA00D_SERCOM1_PAD0          _L_(0) /**< \brief SERCOM1 signal: PAD0 on PA00 mux D */
#define MUX_PA00D_SERCOM1_PAD0          _L_(3)
#define PINMUX_PA00D_SERCOM1_PAD0  ((PIN_PA00D_SERCOM1_PAD0 << 16) | MUX_PA00D_SERCOM1_PAD0)
#define PORT_PA00D_SERCOM1_PAD0  (_UL_(1) <<  0)
#define PIN_PA17C_SERCOM1_PAD1         _L_(17) /**< \brief SERCOM1 signal: PAD1 on PA17 mux C */
#define MUX_PA17C_SERCOM1_PAD1          _L_(2)
#define PINMUX_PA17C_SERCOM1_PAD1  ((PIN_PA17C_SERCOM1_PAD1 << 16) | MUX_PA17C_SERCOM1_PAD1)
#define PORT_PA17C_SERCOM1_PAD1  (_UL_(1) << 17)
#define PIN_PA01D_SERCOM1_PAD1          _L_(1) /**< \brief SERCOM1 signal: PAD1 on PA01 mux D */
#define MUX_PA01D_SERCOM1_PAD1          _L_(3)
#define PINMUX_PA01D_SERCOM1_PAD1  ((PIN_PA01D_SERCOM1_PAD1 << 16) | MUX_PA01D_SERCOM1_PAD1)
#define PORT_PA01D_SERCOM1_PAD1  (_UL_(1) <<  1)
#define PIN_PA18C_SERCOM1_PAD2         _L_(18) /**< \brief SERCOM1 signal: PAD2 on PA18 mux C */
#define MUX_PA18C_SERCOM1_PAD2          _L_(2)
#define PINMUX_PA18C_SERCOM1_PAD2  ((PIN_PA18C_SERCOM1_PAD2 << 16) | MUX_PA18C_SERCOM1_PAD2)
#define PORT_PA18C_SERCOM1_PAD2  (_UL_(1) << 18)
#define PIN_PA30D_SERCOM1_PAD2         _L_(30) /**< \brief SERCOM1 signal: PAD2 on PA30 mux D */
#define MUX_PA30D_SERCOM1_PAD2          _L_(3)
#define PINMUX_PA30D_SERCOM1_PAD2  ((PIN_PA30D_SERCOM1_PAD2 << 16) | MUX_PA30D_SERCOM1_PAD2)
#define PORT_PA30D_SERCOM1_PAD2  (_UL_(1) << 30)
#define PIN_PA19C_SERCOM1_PAD3         _L_(19) /**< \brief SERCOM1 signal: PAD3 on PA19 mux C */
#define MUX_PA19C_SERCOM1_PAD3          _L_(2)
#define PINMUX_PA19C_SERCOM1_PAD3  ((PIN_PA19C_SERCOM1_PAD3 << 16) | MUX_PA19C_SERCOM1_PAD3)
#define PORT_PA19C_SERCOM1_PAD3  (_UL_(1) << 19)
#define PIN_PA31D_SERCOM1_PAD3         _L_(31) /**< \brief SERCOM1 signal: PAD3 on PA31 mux D */
#define MUX_PA31D_SERCOM1_PAD3          _L_(3)
#define PINMUX_PA31D_SERCOM1_PAD3  ((PIN_PA31D_SERCOM1_PAD3 << 16) | MUX_PA31D_SERCOM1_PAD3)
#define PORT_PA31D_SERCOM1_PAD3  (_UL_(1) << 31)
/* ========== PORT definition for TC0 peripheral ========== */
#define PIN_PA04E_TC0_WO0               _L_(4) /**< \brief TC0 signal: WO0 on PA04 mux E */
#define MUX_PA04E_TC0_WO0               _L_(4)
#define PINMUX_PA04E_TC0_WO0       ((PIN_PA04E_TC0_WO0 << 16) | MUX_PA04E_TC0_WO0)
#define PORT_PA04E_TC0_WO0     (_UL_(1) <<  4)
#define PIN_PA14E_TC0_WO0              _L_(14) /**< \brief TC0 signal: WO0 on PA14 mux E */
#define MUX_PA14E_TC0_WO0               _L_(4)
#define PINMUX_PA14E_TC0_WO0       ((PIN_PA14E_TC0_WO0 << 16) | MUX_PA14E_TC0_WO0)
#define PORT_PA14E_TC0_WO0     (_UL_(1) << 14)
#define PIN_PA22E_TC0_WO0              _L_(22) /**< \brief TC0 signal: WO0 on PA22 mux E */
#define MUX_PA22E_TC0_WO0               _L_(4)
#define PINMUX_PA22E_TC0_WO0       ((PIN_PA22E_TC0_WO0 << 16) | MUX_PA22E_TC0_WO0)
#define PORT_PA22E_TC0_WO0     (_UL_(1) << 22)
#define PIN_PA05E_TC0_WO1               _L_(5) /**< \brief TC0 signal: WO1 on PA05 mux E */
#define MUX_PA05E_TC0_WO1               _L_(4)
#define PINMUX_PA05E_TC0_WO1       ((PIN_PA05E_TC0_WO1 << 16) | MUX_PA05E_TC0_WO1)
#define PORT_PA05E_TC0_WO1     (_UL_(1) <<  5)
#define PIN_PA15E_TC0_WO1              _L_(15) /**< \brief TC0 signal: WO1 on PA15 mux E */
#define MUX_PA15E_TC0_WO1               _L_(4)
#define PINMUX_PA15E_TC0_WO1       ((PIN_PA15E_TC0_WO1 << 16) | MUX_PA15E_TC0_WO1)
#define PORT_PA15E_TC0_WO1     (_UL_(1) << 15)
#define PIN_PA23E_TC0_WO1              _L_(23) /**< \brief TC0 signal: WO1 on PA23 mux E */
#define MUX_PA23E_TC0_WO1               _L_(4)
#define PINMUX_PA23E_TC0_WO1       ((PIN_PA23E_TC0_WO1 << 16) | MUX_PA23E_TC0_WO1)
#define PORT_PA23E_TC0_WO1     (_UL_(1) << 23)
/* ========== PORT definition for TC1 peripheral ========== */
#define PIN_PA30E_TC1_WO0              _L_(30) /**< \brief TC1 signal: WO0 on PA30 mux E */
#define MUX_PA30E_TC1_WO0               _L_(4)
#define PINMUX_PA30E_TC1_WO0       ((PIN_PA30E_TC1_WO0 << 16) | MUX_PA30E_TC1_WO0)
#define PORT_PA30E_TC1_WO0     (_UL_(1) << 30)
#define PIN_PA31E_TC1_WO1              _L_(31) /**< \brief TC1 signal: WO1 on PA31 mux E */
#define MUX_PA31E_TC1_WO1               _L_(4)
#define PINMUX_PA31E_TC1_WO1       ((PIN_PA31E_TC1_WO1 << 16) | MUX_PA31E_TC1_WO1)
#define PORT_PA31E_TC1_WO1     (_UL_(1) << 31)
/* ========== PORT definition for TC2 peripheral ========== */
#define PIN_PA00E_TC2_WO0               _L_(0) /**< \brief TC2 signal: WO0 on PA00 mux E */
#define MUX_PA00E_TC2_WO0               _L_(4)
#define PINMUX_PA00E_TC2_WO0       ((PIN_PA00E_TC2_WO0 << 16) | MUX_PA00E_TC2_WO0)
#define PORT_PA00E_TC2_WO0     (_UL_(1) <<  0)
#define PIN_PA18E_TC2_WO0              _L_(18) /**< \brief TC2 signal: WO0 on PA18 mux E */
#define MUX_PA18E_TC2_WO0               _L_(4)
#define PINMUX_PA18E_TC2_WO0       ((PIN_PA18E_TC2_WO0 << 16) | MUX_PA18E_TC2_WO0)
#define PORT_PA18E_TC2_WO0     (_UL_(1) << 18)
#define PIN_PA01E_TC2_WO1               _L_(1) /**< \brief TC2 signal: WO1 on PA01 mux E */
#define MUX_PA01E_TC2_WO1               _L_(4)
#define PINMUX_PA01E_TC2_WO1       ((PIN_PA01E_TC2_WO1 << 16) | MUX_PA01E_TC2_WO1)
#define PORT_PA01E_TC2_WO1     (_UL_(1) <<  1)
#define PIN_PA19E_TC2_WO1              _L_(19) /**< \brief TC2 signal: WO1 on PA19 mux E */
#define MUX_PA19E_TC2_WO1               _L_(4)
#define PINMUX_PA19E_TC2_WO1       ((PIN_PA19E_TC2_WO1 << 16) | MUX_PA19E_TC2_WO1)
#define PORT_PA19E_TC2_WO1     (_UL_(1) << 19)
/* ========== PORT definition for ADC peripheral ========== */
#define PIN_PA02B_ADC_AIN0              _L_(2) /**< \brief ADC signal: AIN0 on PA02 mux B */
#define MUX_PA02B_ADC_AIN0              _L_(1)
#define PINMUX_PA02B_ADC_AIN0      ((PIN_PA02B_ADC_AIN0 << 16) | MUX_PA02B_ADC_AIN0)
#define PORT_PA02B_ADC_AIN0    (_UL_(1) <<  2)
#define PIN_PA03B_ADC_AIN1              _L_(3) /**< \brief ADC signal: AIN1 on PA03 mux B */
#define MUX_PA03B_ADC_AIN1              _L_(1)
#define PINMUX_PA03B_ADC_AIN1      ((PIN_PA03B_ADC_AIN1 << 16) | MUX_PA03B_ADC_AIN1)
#define PORT_PA03B_ADC_AIN1    (_UL_(1) <<  3)
#define PIN_PA04B_ADC_AIN2              _L_(4) /**< \brief ADC signal: AIN2 on PA04 mux B */
#define MUX_PA04B_ADC_AIN2              _L_(1)
#define PINMUX_PA04B_ADC_AIN2      ((PIN_PA04B_ADC_AIN2 << 16) | MUX_PA04B_ADC_AIN2)
#define PORT_PA04B_ADC_AIN2    (_UL_(1) <<  4)
#define PIN_PA05B_ADC_AIN3              _L_(5) /**< \brief ADC signal: AIN3 on PA05 mux B */
#define MUX_PA05B_ADC_AIN3              _L_(1)
#define PINMUX_PA05B_ADC_AIN3      ((PIN_PA05B_ADC_AIN3 << 16) | MUX_PA05B_ADC_AIN3)
#define PORT_PA05B_ADC_AIN3    (_UL_(1) <<  5)
#define PIN_PA08B_ADC_AIN6              _L_(8) /**< \brief ADC signal: AIN6 on PA08 mux B */
#define MUX_PA08B_ADC_AIN6              _L_(1)
#define PINMUX_PA08B_ADC_AIN6      ((PIN_PA08B_ADC_AIN6 << 16) | MUX_PA08B_ADC_AIN6)
#define PORT_PA08B_ADC_AIN6    (_UL_(1) <<  8)
#define PIN_PA04B_ADC_VREFP             _L_(4) /**< \brief ADC signal: VREFP on PA04 mux B */
#define MUX_PA04B_ADC_VREFP             _L_(1)
#define PINMUX_PA04B_ADC_VREFP     ((PIN_PA04B_ADC_VREFP << 16) | MUX_PA04B_ADC_VREFP)
#define PORT_PA04B_ADC_VREFP   (_UL_(1) <<  4)
/* ========== PORT definition for DAC peripheral ========== */
#define PIN_PA02B_DAC_VOUT              _L_(2) /**< \brief DAC signal: VOUT on PA02 mux B */
#define MUX_PA02B_DAC_VOUT              _L_(1)
#define PINMUX_PA02B_DAC_VOUT      ((PIN_PA02B_DAC_VOUT << 16) | MUX_PA02B_DAC_VOUT)
#define PORT_PA02B_DAC_VOUT    (_UL_(1) <<  2)
#define PIN_PA03B_DAC_VREFP             _L_(3) /**< \brief DAC signal: VREFP on PA03 mux B */
#define MUX_PA03B_DAC_VREFP             _L_(1)
#define PINMUX_PA03B_DAC_VREFP     ((PIN_PA03B_DAC_VREFP << 16) | MUX_PA03B_DAC_VREFP)
#define PORT_PA03B_DAC_VREFP   (_UL_(1) <<  3)
/* ========== PORT definition for CCL peripheral ========== */
#define PIN_PA04I_CCL_IN0               _L_(4) /**< \brief CCL signal: IN0 on PA04 mux I */
#define MUX_PA04I_CCL_IN0               _L_(8)
#define PINMUX_PA04I_CCL_IN0       ((PIN_PA04I_CCL_IN0 << 16) | MUX_PA04I_CCL_IN0)
#define PORT_PA04I_CCL_IN0     (_UL_(1) <<  4)
#define PIN_PA16I_CCL_IN0              _L_(16) /**< \brief CCL signal: IN0 on PA16 mux I */
#define MUX_PA16I_CCL_IN0               _L_(8)
#define PINMUX_PA16I_CCL_IN0       ((PIN_PA16I_CCL_IN0 << 16) | MUX_PA16I_CCL_IN0)
#define PORT_PA16I_CCL_IN0     (_UL_(1) << 16)
#define PIN_PA05I_CCL_IN1               _L_(5) /**< \brief CCL signal: IN1 on PA05 mux I */
#define MUX_PA05I_CCL_IN1               _L_(8)
#define PINMUX_PA05I_CCL_IN1       ((PIN_PA05I_CCL_IN1 << 16) | MUX_PA05I_CCL_IN1)
#define PORT_PA05I_CCL_IN1     (_UL_(1) <<  5)
#define PIN_PA17I_CCL_IN1              _L_(17) /**< \brief CCL signal: IN1 on PA17 mux I */
#define MUX_PA17I_CCL_IN1               _L_(8)
#define PINMUX_PA17I_CCL_IN1       ((PIN_PA17I_CCL_IN1 << 16) | MUX_PA17I_CCL_IN1)
#define PORT_PA17I_CCL_IN1     (_UL_(1) << 17)
#define PIN_PA18I_CCL_IN2              _L_(18) /**< \brief CCL signal: IN2 on PA18 mux I */
#define MUX_PA18I_CCL_IN2               _L_(8)
#define PINMUX_PA18I_CCL_IN2       ((PIN_PA18I_CCL_IN2 << 16) | MUX_PA18I_CCL_IN2)
#define PORT_PA18I_CCL_IN2     (_UL_(1) << 18)
#define PIN_PA08I_CCL_IN3               _L_(8) /**< \brief CCL signal: IN3 on PA08 mux I */
#define MUX_PA08I_CCL_IN3               _L_(8)
#define PINMUX_PA08I_CCL_IN3       ((PIN_PA08I_CCL_IN3 << 16) | MUX_PA08I_CCL_IN3)
#define PORT_PA08I_CCL_IN3     (_UL_(1) <<  8)
#define PIN_PA30I_CCL_IN3              _L_(30) /**< \brief CCL signal: IN3 on PA30 mux I */
#define MUX_PA30I_CCL_IN3               _L_(8)
#define PINMUX_PA30I_CCL_IN3       ((PIN_PA30I_CCL_IN3 << 16) | MUX_PA30I_CCL_IN3)
#define PORT_PA30I_CCL_IN3     (_UL_(1) << 30)
#define PIN_PA19I_CCL_OUT0             _L_(19) /**< \brief CCL signal: OUT0 on PA19 mux I */
#define MUX_PA19I_CCL_OUT0              _L_(8)
#define PINMUX_PA19I_CCL_OUT0      ((PIN_PA19I_CCL_OUT0 << 16) | MUX_PA19I_CCL_OUT0)
#define PORT_PA19I_CCL_OUT0    (_UL_(1) << 19)
#define PIN_PA31I_CCL_OUT1             _L_(31) /**< \brief CCL signal: OUT1 on PA31 mux I */
#define MUX_PA31I_CCL_OUT1              _L_(8)
#define PINMUX_PA31I_CCL_OUT1      ((PIN_PA31I_CCL_OUT1 << 16) | MUX_PA31I_CCL_OUT1)
#define PORT_PA31I_CCL_OUT1    (_UL_(1) << 31)
/* ========== PORT definition for OPAMP peripheral ========== */
#define PIN_PA02B_OPAMP_OANEG0          _L_(2) /**< \brief OPAMP signal: OANEG0 on PA02 mux B */
#define MUX_PA02B_OPAMP_OANEG0          _L_(1)
#define PINMUX_PA02B_OPAMP_OANEG0  ((PIN_PA02B_OPAMP_OANEG0 << 16) | MUX_PA02B_OPAMP_OANEG0)
#define PORT_PA02B_OPAMP_OANEG0  (_UL_(1) <<  2)
#define PIN_PA00B_OPAMP_OANEG1          _L_(0) /**< \brief OPAMP signal: OANEG1 on PA00 mux B */
#define MUX_PA00B_OPAMP_OANEG1          _L_(1)
#define PINMUX_PA00B_OPAMP_OANEG1  ((PIN_PA00B_OPAMP_OANEG1 << 16) | MUX_PA00B_OPAMP_OANEG1)
#define PORT_PA00B_OPAMP_OANEG1  (_UL_(1) <<  0)
#define PIN_PA03B_OPAMP_OANEG2          _L_(3) /**< \brief OPAMP signal: OANEG2 on PA03 mux B */
#define MUX_PA03B_OPAMP_OANEG2          _L_(1)
#define PINMUX_PA03B_OPAMP_OANEG2  ((PIN_PA03B_OPAMP_OANEG2 << 16) | MUX_PA03B_OPAMP_OANEG2)
#define PORT_PA03B_OPAMP_OANEG2  (_UL_(1) <<  3)
#define PIN_PA04B_OPAMP_OAOUT2          _L_(4) /**< \brief OPAMP signal: OAOUT2 on PA04 mux B */
#define MUX_PA04B_OPAMP_OAOUT2          _L_(1)
#define PINMUX_PA04B_OPAMP_OAOUT2  ((PIN_PA04B_OPAMP_OAOUT2 << 16) | MUX_PA04B_OPAMP_OAOUT2)
#define PORT_PA04B_OPAMP_OAOUT2  (_UL_(1) <<  4)
#define PIN_PA01B_OPAMP_OAPOS1          _L_(1) /**< \brief OPAMP signal: OAPOS1 on PA01 mux B */
#define MUX_PA01B_OPAMP_OAPOS1          _L_(1)
#define PINMUX_PA01B_OPAMP_OAPOS1  ((PIN_PA01B_OPAMP_OAPOS1 << 16) | MUX_PA01B_OPAMP_OAPOS1)
#define PORT_PA01B_OPAMP_OAPOS1  (_UL_(1) <<  1)
#define PIN_PA05B_OPAMP_OAPOS2          _L_(5) /**< \brief OPAMP signal: OAPOS2 on PA05 mux B */
#define MUX_PA05B_OPAMP_OAPOS2          _L_(1)
#define PINMUX_PA05B_OPAMP_OAPOS2  ((PIN_PA05B_OPAMP_OAPOS2 << 16) | MUX_PA05B_OPAMP_OAPOS2)
#define PORT_PA05B_OPAMP_OAPOS2  (_UL_(1) <<  5)

#endif /* _SAML11D15A_PIO_ */
