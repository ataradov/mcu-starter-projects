/**
 * \file
 *
 * \brief Component description for OSCCTRL
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

#ifndef _SAML11_OSCCTRL_COMPONENT_
#define _SAML11_OSCCTRL_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR OSCCTRL */
/* ========================================================================== */
/** \addtogroup SAML11_OSCCTRL Oscillators Control */
/*@{*/

#define OSCCTRL_U2119
#define REV_OSCCTRL                 0x400

/* -------- OSCCTRL_EVCTRL : (OSCCTRL Offset: 0x00) (R/W  8) Event Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CFDEO:1;          /*!< bit:      0  Clock Failure Detector Event Output Enable */
    uint8_t  TUNEEI:1;         /*!< bit:      1  Tune Event Input Enable            */
    uint8_t  TUNEINV:1;        /*!< bit:      2  Tune Event Input Invert            */
    uint8_t  :5;               /*!< bit:  3.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_EVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_EVCTRL_OFFSET       0x00         /**< \brief (OSCCTRL_EVCTRL offset) Event Control */
#define OSCCTRL_EVCTRL_RESETVALUE   _U_(0x00)    /**< \brief (OSCCTRL_EVCTRL reset_value) Event Control */

#define OSCCTRL_EVCTRL_CFDEO_Pos    0            /**< \brief (OSCCTRL_EVCTRL) Clock Failure Detector Event Output Enable */
#define OSCCTRL_EVCTRL_CFDEO        (_U_(0x1) << OSCCTRL_EVCTRL_CFDEO_Pos)
#define OSCCTRL_EVCTRL_TUNEEI_Pos   1            /**< \brief (OSCCTRL_EVCTRL) Tune Event Input Enable */
#define OSCCTRL_EVCTRL_TUNEEI       (_U_(0x1) << OSCCTRL_EVCTRL_TUNEEI_Pos)
#define OSCCTRL_EVCTRL_TUNEINV_Pos  2            /**< \brief (OSCCTRL_EVCTRL) Tune Event Input Invert */
#define OSCCTRL_EVCTRL_TUNEINV      (_U_(0x1) << OSCCTRL_EVCTRL_TUNEINV_Pos)
#define OSCCTRL_EVCTRL_MASK         _U_(0x07)    /**< \brief (OSCCTRL_EVCTRL) MASK Register */

/* -------- OSCCTRL_INTENCLR : (OSCCTRL Offset: 0x04) (R/W 32) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t XOSCRDY:1;        /*!< bit:      0  XOSC Ready Interrupt Enable        */
    uint32_t XOSCFAIL:1;       /*!< bit:      1  XOSC Clock Failure Detector Interrupt Enable */
    uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    uint32_t OSC16MRDY:1;      /*!< bit:      4  OSC16M Ready Interrupt Enable      */
    uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    uint32_t DFLLULPRDY:1;     /*!< bit:      8  DFLLULP Ready interrupt Enable     */
    uint32_t DFLLULPLOCK:1;    /*!< bit:      9  DFLLULP Lock Interrupt Enable      */
    uint32_t DFLLULPNOLOCK:1;  /*!< bit:     10  DFLLULP No Lock Interrupt Enable   */
    uint32_t :5;               /*!< bit: 11..15  Reserved                           */
    uint32_t DPLLLCKR:1;       /*!< bit:     16  DPLL Lock Rise Interrupt Enable    */
    uint32_t DPLLLCKF:1;       /*!< bit:     17  DPLL Lock Fall Interrupt Enable    */
    uint32_t DPLLLTO:1;        /*!< bit:     18  DPLL Lock Timeout Interrupt Enable */
    uint32_t DPLLLDRTO:1;      /*!< bit:     19  DPLL Loop Divider Ratio Update Complete Interrupt Enable */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_INTENCLR_OFFSET     0x04         /**< \brief (OSCCTRL_INTENCLR offset) Interrupt Enable Clear */
#define OSCCTRL_INTENCLR_RESETVALUE _U_(0x00000000) /**< \brief (OSCCTRL_INTENCLR reset_value) Interrupt Enable Clear */

#define OSCCTRL_INTENCLR_XOSCRDY_Pos 0            /**< \brief (OSCCTRL_INTENCLR) XOSC Ready Interrupt Enable */
#define OSCCTRL_INTENCLR_XOSCRDY    (_U_(0x1) << OSCCTRL_INTENCLR_XOSCRDY_Pos)
#define OSCCTRL_INTENCLR_XOSCFAIL_Pos 1            /**< \brief (OSCCTRL_INTENCLR) XOSC Clock Failure Detector Interrupt Enable */
#define OSCCTRL_INTENCLR_XOSCFAIL   (_U_(0x1) << OSCCTRL_INTENCLR_XOSCFAIL_Pos)
#define OSCCTRL_INTENCLR_OSC16MRDY_Pos 4            /**< \brief (OSCCTRL_INTENCLR) OSC16M Ready Interrupt Enable */
#define OSCCTRL_INTENCLR_OSC16MRDY  (_U_(0x1) << OSCCTRL_INTENCLR_OSC16MRDY_Pos)
#define OSCCTRL_INTENCLR_DFLLULPRDY_Pos 8            /**< \brief (OSCCTRL_INTENCLR) DFLLULP Ready interrupt Enable */
#define OSCCTRL_INTENCLR_DFLLULPRDY (_U_(0x1) << OSCCTRL_INTENCLR_DFLLULPRDY_Pos)
#define OSCCTRL_INTENCLR_DFLLULPLOCK_Pos 9            /**< \brief (OSCCTRL_INTENCLR) DFLLULP Lock Interrupt Enable */
#define OSCCTRL_INTENCLR_DFLLULPLOCK (_U_(0x1) << OSCCTRL_INTENCLR_DFLLULPLOCK_Pos)
#define OSCCTRL_INTENCLR_DFLLULPNOLOCK_Pos 10           /**< \brief (OSCCTRL_INTENCLR) DFLLULP No Lock Interrupt Enable */
#define OSCCTRL_INTENCLR_DFLLULPNOLOCK (_U_(0x1) << OSCCTRL_INTENCLR_DFLLULPNOLOCK_Pos)
#define OSCCTRL_INTENCLR_DPLLLCKR_Pos 16           /**< \brief (OSCCTRL_INTENCLR) DPLL Lock Rise Interrupt Enable */
#define OSCCTRL_INTENCLR_DPLLLCKR   (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLCKR_Pos)
#define OSCCTRL_INTENCLR_DPLLLCKF_Pos 17           /**< \brief (OSCCTRL_INTENCLR) DPLL Lock Fall Interrupt Enable */
#define OSCCTRL_INTENCLR_DPLLLCKF   (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLCKF_Pos)
#define OSCCTRL_INTENCLR_DPLLLTO_Pos 18           /**< \brief (OSCCTRL_INTENCLR) DPLL Lock Timeout Interrupt Enable */
#define OSCCTRL_INTENCLR_DPLLLTO    (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLTO_Pos)
#define OSCCTRL_INTENCLR_DPLLLDRTO_Pos 19           /**< \brief (OSCCTRL_INTENCLR) DPLL Loop Divider Ratio Update Complete Interrupt Enable */
#define OSCCTRL_INTENCLR_DPLLLDRTO  (_U_(0x1) << OSCCTRL_INTENCLR_DPLLLDRTO_Pos)
#define OSCCTRL_INTENCLR_MASK       _U_(0x000F0713) /**< \brief (OSCCTRL_INTENCLR) MASK Register */

/* -------- OSCCTRL_INTENSET : (OSCCTRL Offset: 0x08) (R/W 32) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t XOSCRDY:1;        /*!< bit:      0  XOSC Ready Interrupt Enable        */
    uint32_t XOSCFAIL:1;       /*!< bit:      1  XOSC Clock Failure Detector Interrupt Enable */
    uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    uint32_t OSC16MRDY:1;      /*!< bit:      4  OSC16M Ready Interrupt Enable      */
    uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    uint32_t DFLLULPRDY:1;     /*!< bit:      8  DFLLULP Ready interrupt Enable     */
    uint32_t DFLLULPLOCK:1;    /*!< bit:      9  DFLLULP Lock Interrupt Enable      */
    uint32_t DFLLULPNOLOCK:1;  /*!< bit:     10  DFLLULP No Lock Interrupt Enable   */
    uint32_t :5;               /*!< bit: 11..15  Reserved                           */
    uint32_t DPLLLCKR:1;       /*!< bit:     16  DPLL Lock Rise Interrupt Enable    */
    uint32_t DPLLLCKF:1;       /*!< bit:     17  DPLL Lock Fall Interrupt Enable    */
    uint32_t DPLLLTO:1;        /*!< bit:     18  DPLL Lock Timeout Interrupt Enable */
    uint32_t DPLLLDRTO:1;      /*!< bit:     19  DPLL Loop Divider Ratio Update Complete Interrupt Enable */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_INTENSET_OFFSET     0x08         /**< \brief (OSCCTRL_INTENSET offset) Interrupt Enable Set */
#define OSCCTRL_INTENSET_RESETVALUE _U_(0x00000000) /**< \brief (OSCCTRL_INTENSET reset_value) Interrupt Enable Set */

#define OSCCTRL_INTENSET_XOSCRDY_Pos 0            /**< \brief (OSCCTRL_INTENSET) XOSC Ready Interrupt Enable */
#define OSCCTRL_INTENSET_XOSCRDY    (_U_(0x1) << OSCCTRL_INTENSET_XOSCRDY_Pos)
#define OSCCTRL_INTENSET_XOSCFAIL_Pos 1            /**< \brief (OSCCTRL_INTENSET) XOSC Clock Failure Detector Interrupt Enable */
#define OSCCTRL_INTENSET_XOSCFAIL   (_U_(0x1) << OSCCTRL_INTENSET_XOSCFAIL_Pos)
#define OSCCTRL_INTENSET_OSC16MRDY_Pos 4            /**< \brief (OSCCTRL_INTENSET) OSC16M Ready Interrupt Enable */
#define OSCCTRL_INTENSET_OSC16MRDY  (_U_(0x1) << OSCCTRL_INTENSET_OSC16MRDY_Pos)
#define OSCCTRL_INTENSET_DFLLULPRDY_Pos 8            /**< \brief (OSCCTRL_INTENSET) DFLLULP Ready interrupt Enable */
#define OSCCTRL_INTENSET_DFLLULPRDY (_U_(0x1) << OSCCTRL_INTENSET_DFLLULPRDY_Pos)
#define OSCCTRL_INTENSET_DFLLULPLOCK_Pos 9            /**< \brief (OSCCTRL_INTENSET) DFLLULP Lock Interrupt Enable */
#define OSCCTRL_INTENSET_DFLLULPLOCK (_U_(0x1) << OSCCTRL_INTENSET_DFLLULPLOCK_Pos)
#define OSCCTRL_INTENSET_DFLLULPNOLOCK_Pos 10           /**< \brief (OSCCTRL_INTENSET) DFLLULP No Lock Interrupt Enable */
#define OSCCTRL_INTENSET_DFLLULPNOLOCK (_U_(0x1) << OSCCTRL_INTENSET_DFLLULPNOLOCK_Pos)
#define OSCCTRL_INTENSET_DPLLLCKR_Pos 16           /**< \brief (OSCCTRL_INTENSET) DPLL Lock Rise Interrupt Enable */
#define OSCCTRL_INTENSET_DPLLLCKR   (_U_(0x1) << OSCCTRL_INTENSET_DPLLLCKR_Pos)
#define OSCCTRL_INTENSET_DPLLLCKF_Pos 17           /**< \brief (OSCCTRL_INTENSET) DPLL Lock Fall Interrupt Enable */
#define OSCCTRL_INTENSET_DPLLLCKF   (_U_(0x1) << OSCCTRL_INTENSET_DPLLLCKF_Pos)
#define OSCCTRL_INTENSET_DPLLLTO_Pos 18           /**< \brief (OSCCTRL_INTENSET) DPLL Lock Timeout Interrupt Enable */
#define OSCCTRL_INTENSET_DPLLLTO    (_U_(0x1) << OSCCTRL_INTENSET_DPLLLTO_Pos)
#define OSCCTRL_INTENSET_DPLLLDRTO_Pos 19           /**< \brief (OSCCTRL_INTENSET) DPLL Loop Divider Ratio Update Complete Interrupt Enable */
#define OSCCTRL_INTENSET_DPLLLDRTO  (_U_(0x1) << OSCCTRL_INTENSET_DPLLLDRTO_Pos)
#define OSCCTRL_INTENSET_MASK       _U_(0x000F0713) /**< \brief (OSCCTRL_INTENSET) MASK Register */

/* -------- OSCCTRL_INTFLAG : (OSCCTRL Offset: 0x0C) (R/W 32) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t XOSCRDY:1;        /*!< bit:      0  XOSC Ready                         */
    __I uint32_t XOSCFAIL:1;       /*!< bit:      1  XOSC Clock Failure Detector        */
    __I uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    __I uint32_t OSC16MRDY:1;      /*!< bit:      4  OSC16M Ready                       */
    __I uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    __I uint32_t DFLLULPRDY:1;     /*!< bit:      8  DFLLULP Ready                      */
    __I uint32_t DFLLULPLOCK:1;    /*!< bit:      9  DFLLULP Lock                       */
    __I uint32_t DFLLULPNOLOCK:1;  /*!< bit:     10  DFLLULP No Lock                    */
    __I uint32_t :5;               /*!< bit: 11..15  Reserved                           */
    __I uint32_t DPLLLCKR:1;       /*!< bit:     16  DPLL Lock Rise                     */
    __I uint32_t DPLLLCKF:1;       /*!< bit:     17  DPLL Lock Fall                     */
    __I uint32_t DPLLLTO:1;        /*!< bit:     18  DPLL Lock Timeout                  */
    __I uint32_t DPLLLDRTO:1;      /*!< bit:     19  DPLL Loop Divider Ratio Update Complete */
    __I uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_INTFLAG_OFFSET      0x0C         /**< \brief (OSCCTRL_INTFLAG offset) Interrupt Flag Status and Clear */
#define OSCCTRL_INTFLAG_RESETVALUE  _U_(0x00000000) /**< \brief (OSCCTRL_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define OSCCTRL_INTFLAG_XOSCRDY_Pos 0            /**< \brief (OSCCTRL_INTFLAG) XOSC Ready */
#define OSCCTRL_INTFLAG_XOSCRDY     (_U_(0x1) << OSCCTRL_INTFLAG_XOSCRDY_Pos)
#define OSCCTRL_INTFLAG_XOSCFAIL_Pos 1            /**< \brief (OSCCTRL_INTFLAG) XOSC Clock Failure Detector */
#define OSCCTRL_INTFLAG_XOSCFAIL    (_U_(0x1) << OSCCTRL_INTFLAG_XOSCFAIL_Pos)
#define OSCCTRL_INTFLAG_OSC16MRDY_Pos 4            /**< \brief (OSCCTRL_INTFLAG) OSC16M Ready */
#define OSCCTRL_INTFLAG_OSC16MRDY   (_U_(0x1) << OSCCTRL_INTFLAG_OSC16MRDY_Pos)
#define OSCCTRL_INTFLAG_DFLLULPRDY_Pos 8            /**< \brief (OSCCTRL_INTFLAG) DFLLULP Ready */
#define OSCCTRL_INTFLAG_DFLLULPRDY  (_U_(0x1) << OSCCTRL_INTFLAG_DFLLULPRDY_Pos)
#define OSCCTRL_INTFLAG_DFLLULPLOCK_Pos 9            /**< \brief (OSCCTRL_INTFLAG) DFLLULP Lock */
#define OSCCTRL_INTFLAG_DFLLULPLOCK (_U_(0x1) << OSCCTRL_INTFLAG_DFLLULPLOCK_Pos)
#define OSCCTRL_INTFLAG_DFLLULPNOLOCK_Pos 10           /**< \brief (OSCCTRL_INTFLAG) DFLLULP No Lock */
#define OSCCTRL_INTFLAG_DFLLULPNOLOCK (_U_(0x1) << OSCCTRL_INTFLAG_DFLLULPNOLOCK_Pos)
#define OSCCTRL_INTFLAG_DPLLLCKR_Pos 16           /**< \brief (OSCCTRL_INTFLAG) DPLL Lock Rise */
#define OSCCTRL_INTFLAG_DPLLLCKR    (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLCKR_Pos)
#define OSCCTRL_INTFLAG_DPLLLCKF_Pos 17           /**< \brief (OSCCTRL_INTFLAG) DPLL Lock Fall */
#define OSCCTRL_INTFLAG_DPLLLCKF    (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLCKF_Pos)
#define OSCCTRL_INTFLAG_DPLLLTO_Pos 18           /**< \brief (OSCCTRL_INTFLAG) DPLL Lock Timeout */
#define OSCCTRL_INTFLAG_DPLLLTO     (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLTO_Pos)
#define OSCCTRL_INTFLAG_DPLLLDRTO_Pos 19           /**< \brief (OSCCTRL_INTFLAG) DPLL Loop Divider Ratio Update Complete */
#define OSCCTRL_INTFLAG_DPLLLDRTO   (_U_(0x1) << OSCCTRL_INTFLAG_DPLLLDRTO_Pos)
#define OSCCTRL_INTFLAG_MASK        _U_(0x000F0713) /**< \brief (OSCCTRL_INTFLAG) MASK Register */

/* -------- OSCCTRL_STATUS : (OSCCTRL Offset: 0x10) (R/  32) Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t XOSCRDY:1;        /*!< bit:      0  XOSC Ready                         */
    uint32_t XOSCFAIL:1;       /*!< bit:      1  XOSC Clock Failure Detector        */
    uint32_t XOSCCKSW:1;       /*!< bit:      2  XOSC Clock Switch                  */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t OSC16MRDY:1;      /*!< bit:      4  OSC16M Ready                       */
    uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    uint32_t DFLLULPRDY:1;     /*!< bit:      8  DFLLULP Ready                      */
    uint32_t DFLLULPLOCK:1;    /*!< bit:      9  DFLLULP Lock                       */
    uint32_t DFLLULPNOLOCK:1;  /*!< bit:     10  DFLLULP No Lock                    */
    uint32_t :5;               /*!< bit: 11..15  Reserved                           */
    uint32_t DPLLLCKR:1;       /*!< bit:     16  DPLL Lock Rise                     */
    uint32_t DPLLLCKF:1;       /*!< bit:     17  DPLL Lock Fall                     */
    uint32_t DPLLTO:1;         /*!< bit:     18  DPLL Lock Timeout                  */
    uint32_t DPLLLDRTO:1;      /*!< bit:     19  DPLL Loop Divider Ratio Update Complete */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_STATUS_OFFSET       0x10         /**< \brief (OSCCTRL_STATUS offset) Status */
#define OSCCTRL_STATUS_RESETVALUE   _U_(0x00000000) /**< \brief (OSCCTRL_STATUS reset_value) Status */

#define OSCCTRL_STATUS_XOSCRDY_Pos  0            /**< \brief (OSCCTRL_STATUS) XOSC Ready */
#define OSCCTRL_STATUS_XOSCRDY      (_U_(0x1) << OSCCTRL_STATUS_XOSCRDY_Pos)
#define OSCCTRL_STATUS_XOSCFAIL_Pos 1            /**< \brief (OSCCTRL_STATUS) XOSC Clock Failure Detector */
#define OSCCTRL_STATUS_XOSCFAIL     (_U_(0x1) << OSCCTRL_STATUS_XOSCFAIL_Pos)
#define OSCCTRL_STATUS_XOSCCKSW_Pos 2            /**< \brief (OSCCTRL_STATUS) XOSC Clock Switch */
#define OSCCTRL_STATUS_XOSCCKSW     (_U_(0x1) << OSCCTRL_STATUS_XOSCCKSW_Pos)
#define OSCCTRL_STATUS_OSC16MRDY_Pos 4            /**< \brief (OSCCTRL_STATUS) OSC16M Ready */
#define OSCCTRL_STATUS_OSC16MRDY    (_U_(0x1) << OSCCTRL_STATUS_OSC16MRDY_Pos)
#define OSCCTRL_STATUS_DFLLULPRDY_Pos 8            /**< \brief (OSCCTRL_STATUS) DFLLULP Ready */
#define OSCCTRL_STATUS_DFLLULPRDY   (_U_(0x1) << OSCCTRL_STATUS_DFLLULPRDY_Pos)
#define OSCCTRL_STATUS_DFLLULPLOCK_Pos 9            /**< \brief (OSCCTRL_STATUS) DFLLULP Lock */
#define OSCCTRL_STATUS_DFLLULPLOCK  (_U_(0x1) << OSCCTRL_STATUS_DFLLULPLOCK_Pos)
#define OSCCTRL_STATUS_DFLLULPNOLOCK_Pos 10           /**< \brief (OSCCTRL_STATUS) DFLLULP No Lock */
#define OSCCTRL_STATUS_DFLLULPNOLOCK (_U_(0x1) << OSCCTRL_STATUS_DFLLULPNOLOCK_Pos)
#define OSCCTRL_STATUS_DPLLLCKR_Pos 16           /**< \brief (OSCCTRL_STATUS) DPLL Lock Rise */
#define OSCCTRL_STATUS_DPLLLCKR     (_U_(0x1) << OSCCTRL_STATUS_DPLLLCKR_Pos)
#define OSCCTRL_STATUS_DPLLLCKF_Pos 17           /**< \brief (OSCCTRL_STATUS) DPLL Lock Fall */
#define OSCCTRL_STATUS_DPLLLCKF     (_U_(0x1) << OSCCTRL_STATUS_DPLLLCKF_Pos)
#define OSCCTRL_STATUS_DPLLTO_Pos   18           /**< \brief (OSCCTRL_STATUS) DPLL Lock Timeout */
#define OSCCTRL_STATUS_DPLLTO       (_U_(0x1) << OSCCTRL_STATUS_DPLLTO_Pos)
#define OSCCTRL_STATUS_DPLLLDRTO_Pos 19           /**< \brief (OSCCTRL_STATUS) DPLL Loop Divider Ratio Update Complete */
#define OSCCTRL_STATUS_DPLLLDRTO    (_U_(0x1) << OSCCTRL_STATUS_DPLLLDRTO_Pos)
#define OSCCTRL_STATUS_MASK         _U_(0x000F0717) /**< \brief (OSCCTRL_STATUS) MASK Register */

/* -------- OSCCTRL_XOSCCTRL : (OSCCTRL Offset: 0x14) (R/W 16) External Multipurpose Crystal Oscillator (XOSC) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t :1;               /*!< bit:      0  Reserved                           */
    uint16_t ENABLE:1;         /*!< bit:      1  Oscillator Enable                  */
    uint16_t XTALEN:1;         /*!< bit:      2  Crystal Oscillator Enable          */
    uint16_t CFDEN:1;          /*!< bit:      3  Clock Failure Detector Enable      */
    uint16_t SWBEN:1;          /*!< bit:      4  Xosc Clock Switch Enable           */
    uint16_t :1;               /*!< bit:      5  Reserved                           */
    uint16_t RUNSTDBY:1;       /*!< bit:      6  Run in Standby                     */
    uint16_t ONDEMAND:1;       /*!< bit:      7  On Demand Control                  */
    uint16_t GAIN:3;           /*!< bit:  8..10  Oscillator Gain                    */
    uint16_t AMPGC:1;          /*!< bit:     11  Automatic Amplitude Gain Control   */
    uint16_t STARTUP:4;        /*!< bit: 12..15  Start-Up Time                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} OSCCTRL_XOSCCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_XOSCCTRL_OFFSET     0x14         /**< \brief (OSCCTRL_XOSCCTRL offset) External Multipurpose Crystal Oscillator (XOSC) Control */
#define OSCCTRL_XOSCCTRL_RESETVALUE _U_(0x0080)  /**< \brief (OSCCTRL_XOSCCTRL reset_value) External Multipurpose Crystal Oscillator (XOSC) Control */

#define OSCCTRL_XOSCCTRL_ENABLE_Pos 1            /**< \brief (OSCCTRL_XOSCCTRL) Oscillator Enable */
#define OSCCTRL_XOSCCTRL_ENABLE     (_U_(0x1) << OSCCTRL_XOSCCTRL_ENABLE_Pos)
#define OSCCTRL_XOSCCTRL_XTALEN_Pos 2            /**< \brief (OSCCTRL_XOSCCTRL) Crystal Oscillator Enable */
#define OSCCTRL_XOSCCTRL_XTALEN     (_U_(0x1) << OSCCTRL_XOSCCTRL_XTALEN_Pos)
#define OSCCTRL_XOSCCTRL_CFDEN_Pos  3            /**< \brief (OSCCTRL_XOSCCTRL) Clock Failure Detector Enable */
#define OSCCTRL_XOSCCTRL_CFDEN      (_U_(0x1) << OSCCTRL_XOSCCTRL_CFDEN_Pos)
#define OSCCTRL_XOSCCTRL_SWBEN_Pos  4            /**< \brief (OSCCTRL_XOSCCTRL) Xosc Clock Switch Enable */
#define OSCCTRL_XOSCCTRL_SWBEN      (_U_(0x1) << OSCCTRL_XOSCCTRL_SWBEN_Pos)
#define OSCCTRL_XOSCCTRL_RUNSTDBY_Pos 6            /**< \brief (OSCCTRL_XOSCCTRL) Run in Standby */
#define OSCCTRL_XOSCCTRL_RUNSTDBY   (_U_(0x1) << OSCCTRL_XOSCCTRL_RUNSTDBY_Pos)
#define OSCCTRL_XOSCCTRL_ONDEMAND_Pos 7            /**< \brief (OSCCTRL_XOSCCTRL) On Demand Control */
#define OSCCTRL_XOSCCTRL_ONDEMAND   (_U_(0x1) << OSCCTRL_XOSCCTRL_ONDEMAND_Pos)
#define OSCCTRL_XOSCCTRL_GAIN_Pos   8            /**< \brief (OSCCTRL_XOSCCTRL) Oscillator Gain */
#define OSCCTRL_XOSCCTRL_GAIN_Msk   (_U_(0x7) << OSCCTRL_XOSCCTRL_GAIN_Pos)
#define OSCCTRL_XOSCCTRL_GAIN(value) (OSCCTRL_XOSCCTRL_GAIN_Msk & ((value) << OSCCTRL_XOSCCTRL_GAIN_Pos))
#define OSCCTRL_XOSCCTRL_AMPGC_Pos  11           /**< \brief (OSCCTRL_XOSCCTRL) Automatic Amplitude Gain Control */
#define OSCCTRL_XOSCCTRL_AMPGC      (_U_(0x1) << OSCCTRL_XOSCCTRL_AMPGC_Pos)
#define OSCCTRL_XOSCCTRL_STARTUP_Pos 12           /**< \brief (OSCCTRL_XOSCCTRL) Start-Up Time */
#define OSCCTRL_XOSCCTRL_STARTUP_Msk (_U_(0xF) << OSCCTRL_XOSCCTRL_STARTUP_Pos)
#define OSCCTRL_XOSCCTRL_STARTUP(value) (OSCCTRL_XOSCCTRL_STARTUP_Msk & ((value) << OSCCTRL_XOSCCTRL_STARTUP_Pos))
#define OSCCTRL_XOSCCTRL_MASK       _U_(0xFFDE)  /**< \brief (OSCCTRL_XOSCCTRL) MASK Register */

/* -------- OSCCTRL_CFDPRESC : (OSCCTRL Offset: 0x16) (R/W  8) Clock Failure Detector Prescaler -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CFDPRESC:3;       /*!< bit:  0.. 2  Clock Failure Detector Prescaler   */
    uint8_t  :5;               /*!< bit:  3.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_CFDPRESC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_CFDPRESC_OFFSET     0x16         /**< \brief (OSCCTRL_CFDPRESC offset) Clock Failure Detector Prescaler */
#define OSCCTRL_CFDPRESC_RESETVALUE _U_(0x00)    /**< \brief (OSCCTRL_CFDPRESC reset_value) Clock Failure Detector Prescaler */

#define OSCCTRL_CFDPRESC_CFDPRESC_Pos 0            /**< \brief (OSCCTRL_CFDPRESC) Clock Failure Detector Prescaler */
#define OSCCTRL_CFDPRESC_CFDPRESC_Msk (_U_(0x7) << OSCCTRL_CFDPRESC_CFDPRESC_Pos)
#define OSCCTRL_CFDPRESC_CFDPRESC(value) (OSCCTRL_CFDPRESC_CFDPRESC_Msk & ((value) << OSCCTRL_CFDPRESC_CFDPRESC_Pos))
#define OSCCTRL_CFDPRESC_MASK       _U_(0x07)    /**< \brief (OSCCTRL_CFDPRESC) MASK Register */

/* -------- OSCCTRL_OSC16MCTRL : (OSCCTRL Offset: 0x18) (R/W  8) 16MHz Internal Oscillator (OSC16M) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :1;               /*!< bit:      0  Reserved                           */
    uint8_t  ENABLE:1;         /*!< bit:      1  Oscillator Enable                  */
    uint8_t  FSEL:2;           /*!< bit:  2.. 3  Oscillator Frequency Selection     */
    uint8_t  :2;               /*!< bit:  4.. 5  Reserved                           */
    uint8_t  RUNSTDBY:1;       /*!< bit:      6  Run in Standby                     */
    uint8_t  ONDEMAND:1;       /*!< bit:      7  On Demand Control                  */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_OSC16MCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_OSC16MCTRL_OFFSET   0x18         /**< \brief (OSCCTRL_OSC16MCTRL offset) 16MHz Internal Oscillator (OSC16M) Control */
#define OSCCTRL_OSC16MCTRL_RESETVALUE _U_(0x82)    /**< \brief (OSCCTRL_OSC16MCTRL reset_value) 16MHz Internal Oscillator (OSC16M) Control */

#define OSCCTRL_OSC16MCTRL_ENABLE_Pos 1            /**< \brief (OSCCTRL_OSC16MCTRL) Oscillator Enable */
#define OSCCTRL_OSC16MCTRL_ENABLE   (_U_(0x1) << OSCCTRL_OSC16MCTRL_ENABLE_Pos)
#define OSCCTRL_OSC16MCTRL_FSEL_Pos 2            /**< \brief (OSCCTRL_OSC16MCTRL) Oscillator Frequency Selection */
#define OSCCTRL_OSC16MCTRL_FSEL_Msk (_U_(0x3) << OSCCTRL_OSC16MCTRL_FSEL_Pos)
#define OSCCTRL_OSC16MCTRL_FSEL(value) (OSCCTRL_OSC16MCTRL_FSEL_Msk & ((value) << OSCCTRL_OSC16MCTRL_FSEL_Pos))
#define   OSCCTRL_OSC16MCTRL_FSEL_4_Val   _U_(0x0)   /**< \brief (OSCCTRL_OSC16MCTRL) 4MHz */
#define   OSCCTRL_OSC16MCTRL_FSEL_8_Val   _U_(0x1)   /**< \brief (OSCCTRL_OSC16MCTRL) 8MHz */
#define   OSCCTRL_OSC16MCTRL_FSEL_12_Val  _U_(0x2)   /**< \brief (OSCCTRL_OSC16MCTRL) 12MHz */
#define   OSCCTRL_OSC16MCTRL_FSEL_16_Val  _U_(0x3)   /**< \brief (OSCCTRL_OSC16MCTRL) 16MHz */
#define OSCCTRL_OSC16MCTRL_FSEL_4   (OSCCTRL_OSC16MCTRL_FSEL_4_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)
#define OSCCTRL_OSC16MCTRL_FSEL_8   (OSCCTRL_OSC16MCTRL_FSEL_8_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)
#define OSCCTRL_OSC16MCTRL_FSEL_12  (OSCCTRL_OSC16MCTRL_FSEL_12_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)
#define OSCCTRL_OSC16MCTRL_FSEL_16  (OSCCTRL_OSC16MCTRL_FSEL_16_Val << OSCCTRL_OSC16MCTRL_FSEL_Pos)
#define OSCCTRL_OSC16MCTRL_RUNSTDBY_Pos 6            /**< \brief (OSCCTRL_OSC16MCTRL) Run in Standby */
#define OSCCTRL_OSC16MCTRL_RUNSTDBY (_U_(0x1) << OSCCTRL_OSC16MCTRL_RUNSTDBY_Pos)
#define OSCCTRL_OSC16MCTRL_ONDEMAND_Pos 7            /**< \brief (OSCCTRL_OSC16MCTRL) On Demand Control */
#define OSCCTRL_OSC16MCTRL_ONDEMAND (_U_(0x1) << OSCCTRL_OSC16MCTRL_ONDEMAND_Pos)
#define OSCCTRL_OSC16MCTRL_MASK     _U_(0xCE)    /**< \brief (OSCCTRL_OSC16MCTRL) MASK Register */

/* -------- OSCCTRL_DFLLULPCTRL : (OSCCTRL Offset: 0x1C) (R/W 16) DFLLULP Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t :1;               /*!< bit:      0  Reserved                           */
    uint16_t ENABLE:1;         /*!< bit:      1  Enable                             */
    uint16_t :1;               /*!< bit:      2  Reserved                           */
    uint16_t BINSE:1;          /*!< bit:      3  Binary Search Enable               */
    uint16_t SAFE:1;           /*!< bit:      4  Tuner Safe Mode                    */
    uint16_t DITHER:1;         /*!< bit:      5  Tuner Dither Mode                  */
    uint16_t RUNSTDBY:1;       /*!< bit:      6  Run in Standby                     */
    uint16_t ONDEMAND:1;       /*!< bit:      7  On Demand                          */
    uint16_t DIV:3;            /*!< bit:  8..10  Division Factor                    */
    uint16_t :5;               /*!< bit: 11..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} OSCCTRL_DFLLULPCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLULPCTRL_OFFSET  0x1C         /**< \brief (OSCCTRL_DFLLULPCTRL offset) DFLLULP Control */
#define OSCCTRL_DFLLULPCTRL_RESETVALUE _U_(0x0504)  /**< \brief (OSCCTRL_DFLLULPCTRL reset_value) DFLLULP Control */

#define OSCCTRL_DFLLULPCTRL_ENABLE_Pos 1            /**< \brief (OSCCTRL_DFLLULPCTRL) Enable */
#define OSCCTRL_DFLLULPCTRL_ENABLE  (_U_(0x1) << OSCCTRL_DFLLULPCTRL_ENABLE_Pos)
#define OSCCTRL_DFLLULPCTRL_BINSE_Pos 3            /**< \brief (OSCCTRL_DFLLULPCTRL) Binary Search Enable */
#define OSCCTRL_DFLLULPCTRL_BINSE   (_U_(0x1) << OSCCTRL_DFLLULPCTRL_BINSE_Pos)
#define OSCCTRL_DFLLULPCTRL_SAFE_Pos 4            /**< \brief (OSCCTRL_DFLLULPCTRL) Tuner Safe Mode */
#define OSCCTRL_DFLLULPCTRL_SAFE    (_U_(0x1) << OSCCTRL_DFLLULPCTRL_SAFE_Pos)
#define OSCCTRL_DFLLULPCTRL_DITHER_Pos 5            /**< \brief (OSCCTRL_DFLLULPCTRL) Tuner Dither Mode */
#define OSCCTRL_DFLLULPCTRL_DITHER  (_U_(0x1) << OSCCTRL_DFLLULPCTRL_DITHER_Pos)
#define OSCCTRL_DFLLULPCTRL_RUNSTDBY_Pos 6            /**< \brief (OSCCTRL_DFLLULPCTRL) Run in Standby */
#define OSCCTRL_DFLLULPCTRL_RUNSTDBY (_U_(0x1) << OSCCTRL_DFLLULPCTRL_RUNSTDBY_Pos)
#define OSCCTRL_DFLLULPCTRL_ONDEMAND_Pos 7            /**< \brief (OSCCTRL_DFLLULPCTRL) On Demand */
#define OSCCTRL_DFLLULPCTRL_ONDEMAND (_U_(0x1) << OSCCTRL_DFLLULPCTRL_ONDEMAND_Pos)
#define OSCCTRL_DFLLULPCTRL_DIV_Pos 8            /**< \brief (OSCCTRL_DFLLULPCTRL) Division Factor */
#define OSCCTRL_DFLLULPCTRL_DIV_Msk (_U_(0x7) << OSCCTRL_DFLLULPCTRL_DIV_Pos)
#define OSCCTRL_DFLLULPCTRL_DIV(value) (OSCCTRL_DFLLULPCTRL_DIV_Msk & ((value) << OSCCTRL_DFLLULPCTRL_DIV_Pos))
#define   OSCCTRL_DFLLULPCTRL_DIV_DIV1_Val _U_(0x0)   /**< \brief (OSCCTRL_DFLLULPCTRL) Frequency Divided by 1 */
#define   OSCCTRL_DFLLULPCTRL_DIV_DIV2_Val _U_(0x1)   /**< \brief (OSCCTRL_DFLLULPCTRL) Frequency Divided by 2 */
#define   OSCCTRL_DFLLULPCTRL_DIV_DIV4_Val _U_(0x2)   /**< \brief (OSCCTRL_DFLLULPCTRL) Frequency Divided by 4 */
#define   OSCCTRL_DFLLULPCTRL_DIV_DIV8_Val _U_(0x3)   /**< \brief (OSCCTRL_DFLLULPCTRL) Frequency Divided by 8 */
#define   OSCCTRL_DFLLULPCTRL_DIV_DIV16_Val _U_(0x4)   /**< \brief (OSCCTRL_DFLLULPCTRL) Frequency Divided by 16 */
#define   OSCCTRL_DFLLULPCTRL_DIV_DIV32_Val _U_(0x5)   /**< \brief (OSCCTRL_DFLLULPCTRL) Frequency Divided by 32 */
#define OSCCTRL_DFLLULPCTRL_DIV_DIV1 (OSCCTRL_DFLLULPCTRL_DIV_DIV1_Val << OSCCTRL_DFLLULPCTRL_DIV_Pos)
#define OSCCTRL_DFLLULPCTRL_DIV_DIV2 (OSCCTRL_DFLLULPCTRL_DIV_DIV2_Val << OSCCTRL_DFLLULPCTRL_DIV_Pos)
#define OSCCTRL_DFLLULPCTRL_DIV_DIV4 (OSCCTRL_DFLLULPCTRL_DIV_DIV4_Val << OSCCTRL_DFLLULPCTRL_DIV_Pos)
#define OSCCTRL_DFLLULPCTRL_DIV_DIV8 (OSCCTRL_DFLLULPCTRL_DIV_DIV8_Val << OSCCTRL_DFLLULPCTRL_DIV_Pos)
#define OSCCTRL_DFLLULPCTRL_DIV_DIV16 (OSCCTRL_DFLLULPCTRL_DIV_DIV16_Val << OSCCTRL_DFLLULPCTRL_DIV_Pos)
#define OSCCTRL_DFLLULPCTRL_DIV_DIV32 (OSCCTRL_DFLLULPCTRL_DIV_DIV32_Val << OSCCTRL_DFLLULPCTRL_DIV_Pos)
#define OSCCTRL_DFLLULPCTRL_MASK    _U_(0x07FA)  /**< \brief (OSCCTRL_DFLLULPCTRL) MASK Register */

/* -------- OSCCTRL_DFLLULPDITHER : (OSCCTRL Offset: 0x1E) (R/W  8) DFLLULP Dither Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  STEP:3;           /*!< bit:  0.. 2  Dither Step                        */
    uint8_t  :1;               /*!< bit:      3  Reserved                           */
    uint8_t  PER:3;            /*!< bit:  4.. 6  Dither Period                      */
    uint8_t  :1;               /*!< bit:      7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_DFLLULPDITHER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLULPDITHER_OFFSET 0x1E         /**< \brief (OSCCTRL_DFLLULPDITHER offset) DFLLULP Dither Control */
#define OSCCTRL_DFLLULPDITHER_RESETVALUE _U_(0x00)    /**< \brief (OSCCTRL_DFLLULPDITHER reset_value) DFLLULP Dither Control */

#define OSCCTRL_DFLLULPDITHER_STEP_Pos 0            /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Step */
#define OSCCTRL_DFLLULPDITHER_STEP_Msk (_U_(0x7) << OSCCTRL_DFLLULPDITHER_STEP_Pos)
#define OSCCTRL_DFLLULPDITHER_STEP(value) (OSCCTRL_DFLLULPDITHER_STEP_Msk & ((value) << OSCCTRL_DFLLULPDITHER_STEP_Pos))
#define   OSCCTRL_DFLLULPDITHER_STEP_STEP1_Val _U_(0x0)   /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Step = 1 */
#define   OSCCTRL_DFLLULPDITHER_STEP_STEP2_Val _U_(0x1)   /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Step = 2 */
#define   OSCCTRL_DFLLULPDITHER_STEP_STEP4_Val _U_(0x2)   /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Step = 4 */
#define   OSCCTRL_DFLLULPDITHER_STEP_STEP8_Val _U_(0x3)   /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Step = 8 */
#define OSCCTRL_DFLLULPDITHER_STEP_STEP1 (OSCCTRL_DFLLULPDITHER_STEP_STEP1_Val << OSCCTRL_DFLLULPDITHER_STEP_Pos)
#define OSCCTRL_DFLLULPDITHER_STEP_STEP2 (OSCCTRL_DFLLULPDITHER_STEP_STEP2_Val << OSCCTRL_DFLLULPDITHER_STEP_Pos)
#define OSCCTRL_DFLLULPDITHER_STEP_STEP4 (OSCCTRL_DFLLULPDITHER_STEP_STEP4_Val << OSCCTRL_DFLLULPDITHER_STEP_Pos)
#define OSCCTRL_DFLLULPDITHER_STEP_STEP8 (OSCCTRL_DFLLULPDITHER_STEP_STEP8_Val << OSCCTRL_DFLLULPDITHER_STEP_Pos)
#define OSCCTRL_DFLLULPDITHER_PER_Pos 4            /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Period */
#define OSCCTRL_DFLLULPDITHER_PER_Msk (_U_(0x7) << OSCCTRL_DFLLULPDITHER_PER_Pos)
#define OSCCTRL_DFLLULPDITHER_PER(value) (OSCCTRL_DFLLULPDITHER_PER_Msk & ((value) << OSCCTRL_DFLLULPDITHER_PER_Pos))
#define   OSCCTRL_DFLLULPDITHER_PER_PER1_Val _U_(0x0)   /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Over 1 Reference Clock Period */
#define   OSCCTRL_DFLLULPDITHER_PER_PER2_Val _U_(0x1)   /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Over 2 Reference Clock Period */
#define   OSCCTRL_DFLLULPDITHER_PER_PER4_Val _U_(0x2)   /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Over 4 Reference Clock Period */
#define   OSCCTRL_DFLLULPDITHER_PER_PER8_Val _U_(0x3)   /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Over 8 Reference Clock Period */
#define   OSCCTRL_DFLLULPDITHER_PER_PER16_Val _U_(0x4)   /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Over 16 Reference Clock Period */
#define   OSCCTRL_DFLLULPDITHER_PER_PER32_Val _U_(0x5)   /**< \brief (OSCCTRL_DFLLULPDITHER) Dither Over 32 Reference Clock Period */
#define OSCCTRL_DFLLULPDITHER_PER_PER1 (OSCCTRL_DFLLULPDITHER_PER_PER1_Val << OSCCTRL_DFLLULPDITHER_PER_Pos)
#define OSCCTRL_DFLLULPDITHER_PER_PER2 (OSCCTRL_DFLLULPDITHER_PER_PER2_Val << OSCCTRL_DFLLULPDITHER_PER_Pos)
#define OSCCTRL_DFLLULPDITHER_PER_PER4 (OSCCTRL_DFLLULPDITHER_PER_PER4_Val << OSCCTRL_DFLLULPDITHER_PER_Pos)
#define OSCCTRL_DFLLULPDITHER_PER_PER8 (OSCCTRL_DFLLULPDITHER_PER_PER8_Val << OSCCTRL_DFLLULPDITHER_PER_Pos)
#define OSCCTRL_DFLLULPDITHER_PER_PER16 (OSCCTRL_DFLLULPDITHER_PER_PER16_Val << OSCCTRL_DFLLULPDITHER_PER_Pos)
#define OSCCTRL_DFLLULPDITHER_PER_PER32 (OSCCTRL_DFLLULPDITHER_PER_PER32_Val << OSCCTRL_DFLLULPDITHER_PER_Pos)
#define OSCCTRL_DFLLULPDITHER_MASK  _U_(0x77)    /**< \brief (OSCCTRL_DFLLULPDITHER) MASK Register */

/* -------- OSCCTRL_DFLLULPRREQ : (OSCCTRL Offset: 0x1F) (R/W  8) DFLLULP Read Request -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :7;               /*!< bit:  0.. 6  Reserved                           */
    uint8_t  RREQ:1;           /*!< bit:      7  Read Request                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_DFLLULPRREQ_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLULPRREQ_OFFSET  0x1F         /**< \brief (OSCCTRL_DFLLULPRREQ offset) DFLLULP Read Request */
#define OSCCTRL_DFLLULPRREQ_RESETVALUE _U_(0x00)    /**< \brief (OSCCTRL_DFLLULPRREQ reset_value) DFLLULP Read Request */

#define OSCCTRL_DFLLULPRREQ_RREQ_Pos 7            /**< \brief (OSCCTRL_DFLLULPRREQ) Read Request */
#define OSCCTRL_DFLLULPRREQ_RREQ    (_U_(0x1) << OSCCTRL_DFLLULPRREQ_RREQ_Pos)
#define OSCCTRL_DFLLULPRREQ_MASK    _U_(0x80)    /**< \brief (OSCCTRL_DFLLULPRREQ) MASK Register */

/* -------- OSCCTRL_DFLLULPDLY : (OSCCTRL Offset: 0x20) (R/W 32) DFLLULP Delay Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DELAY:8;          /*!< bit:  0.. 7  Delay Value                        */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_DFLLULPDLY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLULPDLY_OFFSET   0x20         /**< \brief (OSCCTRL_DFLLULPDLY offset) DFLLULP Delay Value */
#define OSCCTRL_DFLLULPDLY_RESETVALUE _U_(0x00000080) /**< \brief (OSCCTRL_DFLLULPDLY reset_value) DFLLULP Delay Value */

#define OSCCTRL_DFLLULPDLY_DELAY_Pos 0            /**< \brief (OSCCTRL_DFLLULPDLY) Delay Value */
#define OSCCTRL_DFLLULPDLY_DELAY_Msk (_U_(0xFF) << OSCCTRL_DFLLULPDLY_DELAY_Pos)
#define OSCCTRL_DFLLULPDLY_DELAY(value) (OSCCTRL_DFLLULPDLY_DELAY_Msk & ((value) << OSCCTRL_DFLLULPDLY_DELAY_Pos))
#define OSCCTRL_DFLLULPDLY_MASK     _U_(0x000000FF) /**< \brief (OSCCTRL_DFLLULPDLY) MASK Register */

/* -------- OSCCTRL_DFLLULPRATIO : (OSCCTRL Offset: 0x24) (R/W 32) DFLLULP Target Ratio -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RATIO:11;         /*!< bit:  0..10  Target Tuner Ratio                 */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_DFLLULPRATIO_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLULPRATIO_OFFSET 0x24         /**< \brief (OSCCTRL_DFLLULPRATIO offset) DFLLULP Target Ratio */
#define OSCCTRL_DFLLULPRATIO_RESETVALUE _U_(0x00000000) /**< \brief (OSCCTRL_DFLLULPRATIO reset_value) DFLLULP Target Ratio */

#define OSCCTRL_DFLLULPRATIO_RATIO_Pos 0            /**< \brief (OSCCTRL_DFLLULPRATIO) Target Tuner Ratio */
#define OSCCTRL_DFLLULPRATIO_RATIO_Msk (_U_(0x7FF) << OSCCTRL_DFLLULPRATIO_RATIO_Pos)
#define OSCCTRL_DFLLULPRATIO_RATIO(value) (OSCCTRL_DFLLULPRATIO_RATIO_Msk & ((value) << OSCCTRL_DFLLULPRATIO_RATIO_Pos))
#define OSCCTRL_DFLLULPRATIO_MASK   _U_(0x000007FF) /**< \brief (OSCCTRL_DFLLULPRATIO) MASK Register */

/* -------- OSCCTRL_DFLLULPSYNCBUSY : (OSCCTRL Offset: 0x28) (R/  32) DFLLULP Synchronization Busy -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable Bit Synchronization Busy    */
    uint32_t TUNE:1;           /*!< bit:      2  Tune Bit Synchronization Busy      */
    uint32_t DELAY:1;          /*!< bit:      3  Delay Register Synchronization Busy */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_DFLLULPSYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DFLLULPSYNCBUSY_OFFSET 0x28         /**< \brief (OSCCTRL_DFLLULPSYNCBUSY offset) DFLLULP Synchronization Busy */
#define OSCCTRL_DFLLULPSYNCBUSY_RESETVALUE _U_(0x00000000) /**< \brief (OSCCTRL_DFLLULPSYNCBUSY reset_value) DFLLULP Synchronization Busy */

#define OSCCTRL_DFLLULPSYNCBUSY_ENABLE_Pos 1            /**< \brief (OSCCTRL_DFLLULPSYNCBUSY) Enable Bit Synchronization Busy */
#define OSCCTRL_DFLLULPSYNCBUSY_ENABLE (_U_(0x1) << OSCCTRL_DFLLULPSYNCBUSY_ENABLE_Pos)
#define OSCCTRL_DFLLULPSYNCBUSY_TUNE_Pos 2            /**< \brief (OSCCTRL_DFLLULPSYNCBUSY) Tune Bit Synchronization Busy */
#define OSCCTRL_DFLLULPSYNCBUSY_TUNE (_U_(0x1) << OSCCTRL_DFLLULPSYNCBUSY_TUNE_Pos)
#define OSCCTRL_DFLLULPSYNCBUSY_DELAY_Pos 3            /**< \brief (OSCCTRL_DFLLULPSYNCBUSY) Delay Register Synchronization Busy */
#define OSCCTRL_DFLLULPSYNCBUSY_DELAY (_U_(0x1) << OSCCTRL_DFLLULPSYNCBUSY_DELAY_Pos)
#define OSCCTRL_DFLLULPSYNCBUSY_MASK _U_(0x0000000E) /**< \brief (OSCCTRL_DFLLULPSYNCBUSY) MASK Register */

/* -------- OSCCTRL_DPLLCTRLA : (OSCCTRL Offset: 0x2C) (R/W  8) DPLL Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :1;               /*!< bit:      0  Reserved                           */
    uint8_t  ENABLE:1;         /*!< bit:      1  DPLL Enable                        */
    uint8_t  :4;               /*!< bit:  2.. 5  Reserved                           */
    uint8_t  RUNSTDBY:1;       /*!< bit:      6  Run in Standby                     */
    uint8_t  ONDEMAND:1;       /*!< bit:      7  On Demand Clock Activation         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_DPLLCTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLCTRLA_OFFSET    0x2C         /**< \brief (OSCCTRL_DPLLCTRLA offset) DPLL Control A */
#define OSCCTRL_DPLLCTRLA_RESETVALUE _U_(0x80)    /**< \brief (OSCCTRL_DPLLCTRLA reset_value) DPLL Control A */

#define OSCCTRL_DPLLCTRLA_ENABLE_Pos 1            /**< \brief (OSCCTRL_DPLLCTRLA) DPLL Enable */
#define OSCCTRL_DPLLCTRLA_ENABLE    (_U_(0x1) << OSCCTRL_DPLLCTRLA_ENABLE_Pos)
#define OSCCTRL_DPLLCTRLA_RUNSTDBY_Pos 6            /**< \brief (OSCCTRL_DPLLCTRLA) Run in Standby */
#define OSCCTRL_DPLLCTRLA_RUNSTDBY  (_U_(0x1) << OSCCTRL_DPLLCTRLA_RUNSTDBY_Pos)
#define OSCCTRL_DPLLCTRLA_ONDEMAND_Pos 7            /**< \brief (OSCCTRL_DPLLCTRLA) On Demand Clock Activation */
#define OSCCTRL_DPLLCTRLA_ONDEMAND  (_U_(0x1) << OSCCTRL_DPLLCTRLA_ONDEMAND_Pos)
#define OSCCTRL_DPLLCTRLA_MASK      _U_(0xC2)    /**< \brief (OSCCTRL_DPLLCTRLA) MASK Register */

/* -------- OSCCTRL_DPLLRATIO : (OSCCTRL Offset: 0x30) (R/W 32) DPLL Ratio Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LDR:12;           /*!< bit:  0..11  Loop Divider Ratio                 */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t LDRFRAC:4;        /*!< bit: 16..19  Loop Divider Ratio Fractional Part */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_DPLLRATIO_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLRATIO_OFFSET    0x30         /**< \brief (OSCCTRL_DPLLRATIO offset) DPLL Ratio Control */
#define OSCCTRL_DPLLRATIO_RESETVALUE _U_(0x00000000) /**< \brief (OSCCTRL_DPLLRATIO reset_value) DPLL Ratio Control */

#define OSCCTRL_DPLLRATIO_LDR_Pos   0            /**< \brief (OSCCTRL_DPLLRATIO) Loop Divider Ratio */
#define OSCCTRL_DPLLRATIO_LDR_Msk   (_U_(0xFFF) << OSCCTRL_DPLLRATIO_LDR_Pos)
#define OSCCTRL_DPLLRATIO_LDR(value) (OSCCTRL_DPLLRATIO_LDR_Msk & ((value) << OSCCTRL_DPLLRATIO_LDR_Pos))
#define OSCCTRL_DPLLRATIO_LDRFRAC_Pos 16           /**< \brief (OSCCTRL_DPLLRATIO) Loop Divider Ratio Fractional Part */
#define OSCCTRL_DPLLRATIO_LDRFRAC_Msk (_U_(0xF) << OSCCTRL_DPLLRATIO_LDRFRAC_Pos)
#define OSCCTRL_DPLLRATIO_LDRFRAC(value) (OSCCTRL_DPLLRATIO_LDRFRAC_Msk & ((value) << OSCCTRL_DPLLRATIO_LDRFRAC_Pos))
#define OSCCTRL_DPLLRATIO_MASK      _U_(0x000F0FFF) /**< \brief (OSCCTRL_DPLLRATIO) MASK Register */

/* -------- OSCCTRL_DPLLCTRLB : (OSCCTRL Offset: 0x34) (R/W 32) DPLL Control B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FILTER:2;         /*!< bit:  0.. 1  Proportional Integral Filter Selection */
    uint32_t LPEN:1;           /*!< bit:      2  Low-Power Enable                   */
    uint32_t WUF:1;            /*!< bit:      3  Wake Up Fast                       */
    uint32_t REFCLK:2;         /*!< bit:  4.. 5  Reference Clock Selection          */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t LTIME:3;          /*!< bit:  8..10  Lock Time                          */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t LBYPASS:1;        /*!< bit:     12  Lock Bypass                        */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t DIV:11;           /*!< bit: 16..26  Clock Divider                      */
    uint32_t :5;               /*!< bit: 27..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} OSCCTRL_DPLLCTRLB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLCTRLB_OFFSET    0x34         /**< \brief (OSCCTRL_DPLLCTRLB offset) DPLL Control B */
#define OSCCTRL_DPLLCTRLB_RESETVALUE _U_(0x00000000) /**< \brief (OSCCTRL_DPLLCTRLB reset_value) DPLL Control B */

#define OSCCTRL_DPLLCTRLB_FILTER_Pos 0            /**< \brief (OSCCTRL_DPLLCTRLB) Proportional Integral Filter Selection */
#define OSCCTRL_DPLLCTRLB_FILTER_Msk (_U_(0x3) << OSCCTRL_DPLLCTRLB_FILTER_Pos)
#define OSCCTRL_DPLLCTRLB_FILTER(value) (OSCCTRL_DPLLCTRLB_FILTER_Msk & ((value) << OSCCTRL_DPLLCTRLB_FILTER_Pos))
#define   OSCCTRL_DPLLCTRLB_FILTER_DEFAULT_Val _U_(0x0)   /**< \brief (OSCCTRL_DPLLCTRLB) Default Filter Mode */
#define   OSCCTRL_DPLLCTRLB_FILTER_LBFILT_Val _U_(0x1)   /**< \brief (OSCCTRL_DPLLCTRLB) Low Bandwidth Filter */
#define   OSCCTRL_DPLLCTRLB_FILTER_HBFILT_Val _U_(0x2)   /**< \brief (OSCCTRL_DPLLCTRLB) High Bandwidth Filter */
#define   OSCCTRL_DPLLCTRLB_FILTER_HDFILT_Val _U_(0x3)   /**< \brief (OSCCTRL_DPLLCTRLB) High Damping Filter */
#define OSCCTRL_DPLLCTRLB_FILTER_DEFAULT (OSCCTRL_DPLLCTRLB_FILTER_DEFAULT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos)
#define OSCCTRL_DPLLCTRLB_FILTER_LBFILT (OSCCTRL_DPLLCTRLB_FILTER_LBFILT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos)
#define OSCCTRL_DPLLCTRLB_FILTER_HBFILT (OSCCTRL_DPLLCTRLB_FILTER_HBFILT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos)
#define OSCCTRL_DPLLCTRLB_FILTER_HDFILT (OSCCTRL_DPLLCTRLB_FILTER_HDFILT_Val << OSCCTRL_DPLLCTRLB_FILTER_Pos)
#define OSCCTRL_DPLLCTRLB_LPEN_Pos  2            /**< \brief (OSCCTRL_DPLLCTRLB) Low-Power Enable */
#define OSCCTRL_DPLLCTRLB_LPEN      (_U_(0x1) << OSCCTRL_DPLLCTRLB_LPEN_Pos)
#define OSCCTRL_DPLLCTRLB_WUF_Pos   3            /**< \brief (OSCCTRL_DPLLCTRLB) Wake Up Fast */
#define OSCCTRL_DPLLCTRLB_WUF       (_U_(0x1) << OSCCTRL_DPLLCTRLB_WUF_Pos)
#define OSCCTRL_DPLLCTRLB_REFCLK_Pos 4            /**< \brief (OSCCTRL_DPLLCTRLB) Reference Clock Selection */
#define OSCCTRL_DPLLCTRLB_REFCLK_Msk (_U_(0x3) << OSCCTRL_DPLLCTRLB_REFCLK_Pos)
#define OSCCTRL_DPLLCTRLB_REFCLK(value) (OSCCTRL_DPLLCTRLB_REFCLK_Msk & ((value) << OSCCTRL_DPLLCTRLB_REFCLK_Pos))
#define   OSCCTRL_DPLLCTRLB_REFCLK_XOSC32K_Val _U_(0x0)   /**< \brief (OSCCTRL_DPLLCTRLB) XOSC32K Clock Reference */
#define   OSCCTRL_DPLLCTRLB_REFCLK_XOSC_Val _U_(0x1)   /**< \brief (OSCCTRL_DPLLCTRLB) XOSC Clock Reference */
#define   OSCCTRL_DPLLCTRLB_REFCLK_GCLK_Val _U_(0x2)   /**< \brief (OSCCTRL_DPLLCTRLB) GCLK Clock Reference */
#define OSCCTRL_DPLLCTRLB_REFCLK_XOSC32K (OSCCTRL_DPLLCTRLB_REFCLK_XOSC32K_Val << OSCCTRL_DPLLCTRLB_REFCLK_Pos)
#define OSCCTRL_DPLLCTRLB_REFCLK_XOSC (OSCCTRL_DPLLCTRLB_REFCLK_XOSC_Val << OSCCTRL_DPLLCTRLB_REFCLK_Pos)
#define OSCCTRL_DPLLCTRLB_REFCLK_GCLK (OSCCTRL_DPLLCTRLB_REFCLK_GCLK_Val << OSCCTRL_DPLLCTRLB_REFCLK_Pos)
#define OSCCTRL_DPLLCTRLB_LTIME_Pos 8            /**< \brief (OSCCTRL_DPLLCTRLB) Lock Time */
#define OSCCTRL_DPLLCTRLB_LTIME_Msk (_U_(0x7) << OSCCTRL_DPLLCTRLB_LTIME_Pos)
#define OSCCTRL_DPLLCTRLB_LTIME(value) (OSCCTRL_DPLLCTRLB_LTIME_Msk & ((value) << OSCCTRL_DPLLCTRLB_LTIME_Pos))
#define   OSCCTRL_DPLLCTRLB_LTIME_DEFAULT_Val _U_(0x0)   /**< \brief (OSCCTRL_DPLLCTRLB) No time-out. Automatic lock */
#define   OSCCTRL_DPLLCTRLB_LTIME_8MS_Val _U_(0x4)   /**< \brief (OSCCTRL_DPLLCTRLB) Time-out if no lock within 8 ms */
#define   OSCCTRL_DPLLCTRLB_LTIME_9MS_Val _U_(0x5)   /**< \brief (OSCCTRL_DPLLCTRLB) Time-out if no lock within 9 ms */
#define   OSCCTRL_DPLLCTRLB_LTIME_10MS_Val _U_(0x6)   /**< \brief (OSCCTRL_DPLLCTRLB) Time-out if no lock within 10 ms */
#define   OSCCTRL_DPLLCTRLB_LTIME_11MS_Val _U_(0x7)   /**< \brief (OSCCTRL_DPLLCTRLB) Time-out if no lock within 11 ms */
#define OSCCTRL_DPLLCTRLB_LTIME_DEFAULT (OSCCTRL_DPLLCTRLB_LTIME_DEFAULT_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos)
#define OSCCTRL_DPLLCTRLB_LTIME_8MS (OSCCTRL_DPLLCTRLB_LTIME_8MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos)
#define OSCCTRL_DPLLCTRLB_LTIME_9MS (OSCCTRL_DPLLCTRLB_LTIME_9MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos)
#define OSCCTRL_DPLLCTRLB_LTIME_10MS (OSCCTRL_DPLLCTRLB_LTIME_10MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos)
#define OSCCTRL_DPLLCTRLB_LTIME_11MS (OSCCTRL_DPLLCTRLB_LTIME_11MS_Val << OSCCTRL_DPLLCTRLB_LTIME_Pos)
#define OSCCTRL_DPLLCTRLB_LBYPASS_Pos 12           /**< \brief (OSCCTRL_DPLLCTRLB) Lock Bypass */
#define OSCCTRL_DPLLCTRLB_LBYPASS   (_U_(0x1) << OSCCTRL_DPLLCTRLB_LBYPASS_Pos)
#define OSCCTRL_DPLLCTRLB_DIV_Pos   16           /**< \brief (OSCCTRL_DPLLCTRLB) Clock Divider */
#define OSCCTRL_DPLLCTRLB_DIV_Msk   (_U_(0x7FF) << OSCCTRL_DPLLCTRLB_DIV_Pos)
#define OSCCTRL_DPLLCTRLB_DIV(value) (OSCCTRL_DPLLCTRLB_DIV_Msk & ((value) << OSCCTRL_DPLLCTRLB_DIV_Pos))
#define OSCCTRL_DPLLCTRLB_MASK      _U_(0x07FF173F) /**< \brief (OSCCTRL_DPLLCTRLB) MASK Register */

/* -------- OSCCTRL_DPLLPRESC : (OSCCTRL Offset: 0x38) (R/W  8) DPLL Prescaler -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PRESC:2;          /*!< bit:  0.. 1  Output Clock Prescaler             */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_DPLLPRESC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLPRESC_OFFSET    0x38         /**< \brief (OSCCTRL_DPLLPRESC offset) DPLL Prescaler */
#define OSCCTRL_DPLLPRESC_RESETVALUE _U_(0x00)    /**< \brief (OSCCTRL_DPLLPRESC reset_value) DPLL Prescaler */

#define OSCCTRL_DPLLPRESC_PRESC_Pos 0            /**< \brief (OSCCTRL_DPLLPRESC) Output Clock Prescaler */
#define OSCCTRL_DPLLPRESC_PRESC_Msk (_U_(0x3) << OSCCTRL_DPLLPRESC_PRESC_Pos)
#define OSCCTRL_DPLLPRESC_PRESC(value) (OSCCTRL_DPLLPRESC_PRESC_Msk & ((value) << OSCCTRL_DPLLPRESC_PRESC_Pos))
#define   OSCCTRL_DPLLPRESC_PRESC_DIV1_Val _U_(0x0)   /**< \brief (OSCCTRL_DPLLPRESC) DPLL output is divided by 1 */
#define   OSCCTRL_DPLLPRESC_PRESC_DIV2_Val _U_(0x1)   /**< \brief (OSCCTRL_DPLLPRESC) DPLL output is divided by 2 */
#define   OSCCTRL_DPLLPRESC_PRESC_DIV4_Val _U_(0x2)   /**< \brief (OSCCTRL_DPLLPRESC) DPLL output is divided by 4 */
#define OSCCTRL_DPLLPRESC_PRESC_DIV1 (OSCCTRL_DPLLPRESC_PRESC_DIV1_Val << OSCCTRL_DPLLPRESC_PRESC_Pos)
#define OSCCTRL_DPLLPRESC_PRESC_DIV2 (OSCCTRL_DPLLPRESC_PRESC_DIV2_Val << OSCCTRL_DPLLPRESC_PRESC_Pos)
#define OSCCTRL_DPLLPRESC_PRESC_DIV4 (OSCCTRL_DPLLPRESC_PRESC_DIV4_Val << OSCCTRL_DPLLPRESC_PRESC_Pos)
#define OSCCTRL_DPLLPRESC_MASK      _U_(0x03)    /**< \brief (OSCCTRL_DPLLPRESC) MASK Register */

/* -------- OSCCTRL_DPLLSYNCBUSY : (OSCCTRL Offset: 0x3C) (R/   8) DPLL Synchronization Busy -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :1;               /*!< bit:      0  Reserved                           */
    uint8_t  ENABLE:1;         /*!< bit:      1  DPLL Enable Synchronization Status */
    uint8_t  DPLLRATIO:1;      /*!< bit:      2  DPLL Loop Divider Ratio Synchronization Status */
    uint8_t  DPLLPRESC:1;      /*!< bit:      3  DPLL Prescaler Synchronization Status */
    uint8_t  :4;               /*!< bit:  4.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_DPLLSYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLSYNCBUSY_OFFSET 0x3C         /**< \brief (OSCCTRL_DPLLSYNCBUSY offset) DPLL Synchronization Busy */
#define OSCCTRL_DPLLSYNCBUSY_RESETVALUE _U_(0x00)    /**< \brief (OSCCTRL_DPLLSYNCBUSY reset_value) DPLL Synchronization Busy */

#define OSCCTRL_DPLLSYNCBUSY_ENABLE_Pos 1            /**< \brief (OSCCTRL_DPLLSYNCBUSY) DPLL Enable Synchronization Status */
#define OSCCTRL_DPLLSYNCBUSY_ENABLE (_U_(0x1) << OSCCTRL_DPLLSYNCBUSY_ENABLE_Pos)
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Pos 2            /**< \brief (OSCCTRL_DPLLSYNCBUSY) DPLL Loop Divider Ratio Synchronization Status */
#define OSCCTRL_DPLLSYNCBUSY_DPLLRATIO (_U_(0x1) << OSCCTRL_DPLLSYNCBUSY_DPLLRATIO_Pos)
#define OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Pos 3            /**< \brief (OSCCTRL_DPLLSYNCBUSY) DPLL Prescaler Synchronization Status */
#define OSCCTRL_DPLLSYNCBUSY_DPLLPRESC (_U_(0x1) << OSCCTRL_DPLLSYNCBUSY_DPLLPRESC_Pos)
#define OSCCTRL_DPLLSYNCBUSY_MASK   _U_(0x0E)    /**< \brief (OSCCTRL_DPLLSYNCBUSY) MASK Register */

/* -------- OSCCTRL_DPLLSTATUS : (OSCCTRL Offset: 0x40) (R/   8) DPLL Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  LOCK:1;           /*!< bit:      0  DPLL Lock                          */
    uint8_t  CLKRDY:1;         /*!< bit:      1  DPLL Clock Ready                   */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} OSCCTRL_DPLLSTATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define OSCCTRL_DPLLSTATUS_OFFSET   0x40         /**< \brief (OSCCTRL_DPLLSTATUS offset) DPLL Status */
#define OSCCTRL_DPLLSTATUS_RESETVALUE _U_(0x00)    /**< \brief (OSCCTRL_DPLLSTATUS reset_value) DPLL Status */

#define OSCCTRL_DPLLSTATUS_LOCK_Pos 0            /**< \brief (OSCCTRL_DPLLSTATUS) DPLL Lock */
#define OSCCTRL_DPLLSTATUS_LOCK     (_U_(0x1) << OSCCTRL_DPLLSTATUS_LOCK_Pos)
#define OSCCTRL_DPLLSTATUS_CLKRDY_Pos 1            /**< \brief (OSCCTRL_DPLLSTATUS) DPLL Clock Ready */
#define OSCCTRL_DPLLSTATUS_CLKRDY   (_U_(0x1) << OSCCTRL_DPLLSTATUS_CLKRDY_Pos)
#define OSCCTRL_DPLLSTATUS_MASK     _U_(0x03)    /**< \brief (OSCCTRL_DPLLSTATUS) MASK Register */

/** \brief OSCCTRL hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO OSCCTRL_EVCTRL_Type       EVCTRL;      /**< \brief Offset: 0x00 (R/W  8) Event Control */
       RoReg8                    Reserved1[0x3];
  __IO OSCCTRL_INTENCLR_Type     INTENCLR;    /**< \brief Offset: 0x04 (R/W 32) Interrupt Enable Clear */
  __IO OSCCTRL_INTENSET_Type     INTENSET;    /**< \brief Offset: 0x08 (R/W 32) Interrupt Enable Set */
  __IO OSCCTRL_INTFLAG_Type      INTFLAG;     /**< \brief Offset: 0x0C (R/W 32) Interrupt Flag Status and Clear */
  __I  OSCCTRL_STATUS_Type       STATUS;      /**< \brief Offset: 0x10 (R/  32) Status */
  __IO OSCCTRL_XOSCCTRL_Type     XOSCCTRL;    /**< \brief Offset: 0x14 (R/W 16) External Multipurpose Crystal Oscillator (XOSC) Control */
  __IO OSCCTRL_CFDPRESC_Type     CFDPRESC;    /**< \brief Offset: 0x16 (R/W  8) Clock Failure Detector Prescaler */
       RoReg8                    Reserved2[0x1];
  __IO OSCCTRL_OSC16MCTRL_Type   OSC16MCTRL;  /**< \brief Offset: 0x18 (R/W  8) 16MHz Internal Oscillator (OSC16M) Control */
       RoReg8                    Reserved3[0x3];
  __IO OSCCTRL_DFLLULPCTRL_Type  DFLLULPCTRL; /**< \brief Offset: 0x1C (R/W 16) DFLLULP Control */
  __IO OSCCTRL_DFLLULPDITHER_Type DFLLULPDITHER; /**< \brief Offset: 0x1E (R/W  8) DFLLULP Dither Control */
  __IO OSCCTRL_DFLLULPRREQ_Type  DFLLULPRREQ; /**< \brief Offset: 0x1F (R/W  8) DFLLULP Read Request */
  __IO OSCCTRL_DFLLULPDLY_Type   DFLLULPDLY;  /**< \brief Offset: 0x20 (R/W 32) DFLLULP Delay Value */
  __IO OSCCTRL_DFLLULPRATIO_Type DFLLULPRATIO; /**< \brief Offset: 0x24 (R/W 32) DFLLULP Target Ratio */
  __I  OSCCTRL_DFLLULPSYNCBUSY_Type DFLLULPSYNCBUSY; /**< \brief Offset: 0x28 (R/  32) DFLLULP Synchronization Busy */
  __IO OSCCTRL_DPLLCTRLA_Type    DPLLCTRLA;   /**< \brief Offset: 0x2C (R/W  8) DPLL Control A */
       RoReg8                    Reserved4[0x3];
  __IO OSCCTRL_DPLLRATIO_Type    DPLLRATIO;   /**< \brief Offset: 0x30 (R/W 32) DPLL Ratio Control */
  __IO OSCCTRL_DPLLCTRLB_Type    DPLLCTRLB;   /**< \brief Offset: 0x34 (R/W 32) DPLL Control B */
  __IO OSCCTRL_DPLLPRESC_Type    DPLLPRESC;   /**< \brief Offset: 0x38 (R/W  8) DPLL Prescaler */
       RoReg8                    Reserved5[0x3];
  __I  OSCCTRL_DPLLSYNCBUSY_Type DPLLSYNCBUSY; /**< \brief Offset: 0x3C (R/   8) DPLL Synchronization Busy */
       RoReg8                    Reserved6[0x3];
  __I  OSCCTRL_DPLLSTATUS_Type   DPLLSTATUS;  /**< \brief Offset: 0x40 (R/   8) DPLL Status */
} Oscctrl;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML11_OSCCTRL_COMPONENT_ */
