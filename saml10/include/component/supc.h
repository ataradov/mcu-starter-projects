/**
 * \file
 *
 * \brief Component description for SUPC
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

#ifndef _SAML10_SUPC_COMPONENT_
#define _SAML10_SUPC_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SUPC */
/* ========================================================================== */
/** \addtogroup SAML10_SUPC Supply Controller */
/*@{*/

#define SUPC_U2117
#define REV_SUPC                    0x400

/* -------- SUPC_INTENCLR : (SUPC Offset: 0x00) (R/W 32) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BOD33RDY:1;       /*!< bit:      0  BOD33 Ready                        */
    uint32_t BOD33DET:1;       /*!< bit:      1  BOD33 Detection                    */
    uint32_t B33SRDY:1;        /*!< bit:      2  BOD33 Synchronization Ready        */
    uint32_t BOD12RDY:1;       /*!< bit:      3  BOD12 Ready                        */
    uint32_t BOD12DET:1;       /*!< bit:      4  BOD12 Detection                    */
    uint32_t B12SRDY:1;        /*!< bit:      5  BOD12 Synchronization Ready        */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t VREGRDY:1;        /*!< bit:      8  Voltage Regulator Ready            */
    uint32_t :1;               /*!< bit:      9  Reserved                           */
    uint32_t VCORERDY:1;       /*!< bit:     10  VDDCORE Ready                      */
    uint32_t ULPVREFRDY:1;     /*!< bit:     11  ULPVREF Voltage Reference Ready    */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SUPC_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_INTENCLR_OFFSET        0x00         /**< \brief (SUPC_INTENCLR offset) Interrupt Enable Clear */
#define SUPC_INTENCLR_RESETVALUE    _U_(0x00000000) /**< \brief (SUPC_INTENCLR reset_value) Interrupt Enable Clear */

#define SUPC_INTENCLR_BOD33RDY_Pos  0            /**< \brief (SUPC_INTENCLR) BOD33 Ready */
#define SUPC_INTENCLR_BOD33RDY      (_U_(0x1) << SUPC_INTENCLR_BOD33RDY_Pos)
#define SUPC_INTENCLR_BOD33DET_Pos  1            /**< \brief (SUPC_INTENCLR) BOD33 Detection */
#define SUPC_INTENCLR_BOD33DET      (_U_(0x1) << SUPC_INTENCLR_BOD33DET_Pos)
#define SUPC_INTENCLR_B33SRDY_Pos   2            /**< \brief (SUPC_INTENCLR) BOD33 Synchronization Ready */
#define SUPC_INTENCLR_B33SRDY       (_U_(0x1) << SUPC_INTENCLR_B33SRDY_Pos)
#define SUPC_INTENCLR_BOD12RDY_Pos  3            /**< \brief (SUPC_INTENCLR) BOD12 Ready */
#define SUPC_INTENCLR_BOD12RDY      (_U_(0x1) << SUPC_INTENCLR_BOD12RDY_Pos)
#define SUPC_INTENCLR_BOD12DET_Pos  4            /**< \brief (SUPC_INTENCLR) BOD12 Detection */
#define SUPC_INTENCLR_BOD12DET      (_U_(0x1) << SUPC_INTENCLR_BOD12DET_Pos)
#define SUPC_INTENCLR_B12SRDY_Pos   5            /**< \brief (SUPC_INTENCLR) BOD12 Synchronization Ready */
#define SUPC_INTENCLR_B12SRDY       (_U_(0x1) << SUPC_INTENCLR_B12SRDY_Pos)
#define SUPC_INTENCLR_VREGRDY_Pos   8            /**< \brief (SUPC_INTENCLR) Voltage Regulator Ready */
#define SUPC_INTENCLR_VREGRDY       (_U_(0x1) << SUPC_INTENCLR_VREGRDY_Pos)
#define SUPC_INTENCLR_VCORERDY_Pos  10           /**< \brief (SUPC_INTENCLR) VDDCORE Ready */
#define SUPC_INTENCLR_VCORERDY      (_U_(0x1) << SUPC_INTENCLR_VCORERDY_Pos)
#define SUPC_INTENCLR_ULPVREFRDY_Pos 11           /**< \brief (SUPC_INTENCLR) ULPVREF Voltage Reference Ready */
#define SUPC_INTENCLR_ULPVREFRDY    (_U_(0x1) << SUPC_INTENCLR_ULPVREFRDY_Pos)
#define SUPC_INTENCLR_MASK          _U_(0x00000D3F) /**< \brief (SUPC_INTENCLR) MASK Register */

/* -------- SUPC_INTENSET : (SUPC Offset: 0x04) (R/W 32) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BOD33RDY:1;       /*!< bit:      0  BOD33 Ready                        */
    uint32_t BOD33DET:1;       /*!< bit:      1  BOD33 Detection                    */
    uint32_t B33SRDY:1;        /*!< bit:      2  BOD33 Synchronization Ready        */
    uint32_t BOD12RDY:1;       /*!< bit:      3  BOD12 Ready                        */
    uint32_t BOD12DET:1;       /*!< bit:      4  BOD12 Detection                    */
    uint32_t B12SRDY:1;        /*!< bit:      5  BOD12 Synchronization Ready        */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t VREGRDY:1;        /*!< bit:      8  Voltage Regulator Ready            */
    uint32_t :1;               /*!< bit:      9  Reserved                           */
    uint32_t VCORERDY:1;       /*!< bit:     10  VDDCORE Ready                      */
    uint32_t ULPVREFRDY:1;     /*!< bit:     11  ULPVREF Voltage Reference Ready    */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SUPC_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_INTENSET_OFFSET        0x04         /**< \brief (SUPC_INTENSET offset) Interrupt Enable Set */
#define SUPC_INTENSET_RESETVALUE    _U_(0x00000000) /**< \brief (SUPC_INTENSET reset_value) Interrupt Enable Set */

#define SUPC_INTENSET_BOD33RDY_Pos  0            /**< \brief (SUPC_INTENSET) BOD33 Ready */
#define SUPC_INTENSET_BOD33RDY      (_U_(0x1) << SUPC_INTENSET_BOD33RDY_Pos)
#define SUPC_INTENSET_BOD33DET_Pos  1            /**< \brief (SUPC_INTENSET) BOD33 Detection */
#define SUPC_INTENSET_BOD33DET      (_U_(0x1) << SUPC_INTENSET_BOD33DET_Pos)
#define SUPC_INTENSET_B33SRDY_Pos   2            /**< \brief (SUPC_INTENSET) BOD33 Synchronization Ready */
#define SUPC_INTENSET_B33SRDY       (_U_(0x1) << SUPC_INTENSET_B33SRDY_Pos)
#define SUPC_INTENSET_BOD12RDY_Pos  3            /**< \brief (SUPC_INTENSET) BOD12 Ready */
#define SUPC_INTENSET_BOD12RDY      (_U_(0x1) << SUPC_INTENSET_BOD12RDY_Pos)
#define SUPC_INTENSET_BOD12DET_Pos  4            /**< \brief (SUPC_INTENSET) BOD12 Detection */
#define SUPC_INTENSET_BOD12DET      (_U_(0x1) << SUPC_INTENSET_BOD12DET_Pos)
#define SUPC_INTENSET_B12SRDY_Pos   5            /**< \brief (SUPC_INTENSET) BOD12 Synchronization Ready */
#define SUPC_INTENSET_B12SRDY       (_U_(0x1) << SUPC_INTENSET_B12SRDY_Pos)
#define SUPC_INTENSET_VREGRDY_Pos   8            /**< \brief (SUPC_INTENSET) Voltage Regulator Ready */
#define SUPC_INTENSET_VREGRDY       (_U_(0x1) << SUPC_INTENSET_VREGRDY_Pos)
#define SUPC_INTENSET_VCORERDY_Pos  10           /**< \brief (SUPC_INTENSET) VDDCORE Ready */
#define SUPC_INTENSET_VCORERDY      (_U_(0x1) << SUPC_INTENSET_VCORERDY_Pos)
#define SUPC_INTENSET_ULPVREFRDY_Pos 11           /**< \brief (SUPC_INTENSET) ULPVREF Voltage Reference Ready */
#define SUPC_INTENSET_ULPVREFRDY    (_U_(0x1) << SUPC_INTENSET_ULPVREFRDY_Pos)
#define SUPC_INTENSET_MASK          _U_(0x00000D3F) /**< \brief (SUPC_INTENSET) MASK Register */

/* -------- SUPC_INTFLAG : (SUPC Offset: 0x08) (R/W 32) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t BOD33RDY:1;       /*!< bit:      0  BOD33 Ready                        */
    __I uint32_t BOD33DET:1;       /*!< bit:      1  BOD33 Detection                    */
    __I uint32_t B33SRDY:1;        /*!< bit:      2  BOD33 Synchronization Ready        */
    __I uint32_t BOD12RDY:1;       /*!< bit:      3  BOD12 Ready                        */
    __I uint32_t BOD12DET:1;       /*!< bit:      4  BOD12 Detection                    */
    __I uint32_t B12SRDY:1;        /*!< bit:      5  BOD12 Synchronization Ready        */
    __I uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    __I uint32_t VREGRDY:1;        /*!< bit:      8  Voltage Regulator Ready            */
    __I uint32_t :1;               /*!< bit:      9  Reserved                           */
    __I uint32_t VCORERDY:1;       /*!< bit:     10  VDDCORE Ready                      */
    __I uint32_t ULPVREFRDY:1;     /*!< bit:     11  ULPVREF Voltage Reference Ready    */
    __I uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SUPC_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_INTFLAG_OFFSET         0x08         /**< \brief (SUPC_INTFLAG offset) Interrupt Flag Status and Clear */
#define SUPC_INTFLAG_RESETVALUE     _U_(0x00000000) /**< \brief (SUPC_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define SUPC_INTFLAG_BOD33RDY_Pos   0            /**< \brief (SUPC_INTFLAG) BOD33 Ready */
#define SUPC_INTFLAG_BOD33RDY       (_U_(0x1) << SUPC_INTFLAG_BOD33RDY_Pos)
#define SUPC_INTFLAG_BOD33DET_Pos   1            /**< \brief (SUPC_INTFLAG) BOD33 Detection */
#define SUPC_INTFLAG_BOD33DET       (_U_(0x1) << SUPC_INTFLAG_BOD33DET_Pos)
#define SUPC_INTFLAG_B33SRDY_Pos    2            /**< \brief (SUPC_INTFLAG) BOD33 Synchronization Ready */
#define SUPC_INTFLAG_B33SRDY        (_U_(0x1) << SUPC_INTFLAG_B33SRDY_Pos)
#define SUPC_INTFLAG_BOD12RDY_Pos   3            /**< \brief (SUPC_INTFLAG) BOD12 Ready */
#define SUPC_INTFLAG_BOD12RDY       (_U_(0x1) << SUPC_INTFLAG_BOD12RDY_Pos)
#define SUPC_INTFLAG_BOD12DET_Pos   4            /**< \brief (SUPC_INTFLAG) BOD12 Detection */
#define SUPC_INTFLAG_BOD12DET       (_U_(0x1) << SUPC_INTFLAG_BOD12DET_Pos)
#define SUPC_INTFLAG_B12SRDY_Pos    5            /**< \brief (SUPC_INTFLAG) BOD12 Synchronization Ready */
#define SUPC_INTFLAG_B12SRDY        (_U_(0x1) << SUPC_INTFLAG_B12SRDY_Pos)
#define SUPC_INTFLAG_VREGRDY_Pos    8            /**< \brief (SUPC_INTFLAG) Voltage Regulator Ready */
#define SUPC_INTFLAG_VREGRDY        (_U_(0x1) << SUPC_INTFLAG_VREGRDY_Pos)
#define SUPC_INTFLAG_VCORERDY_Pos   10           /**< \brief (SUPC_INTFLAG) VDDCORE Ready */
#define SUPC_INTFLAG_VCORERDY       (_U_(0x1) << SUPC_INTFLAG_VCORERDY_Pos)
#define SUPC_INTFLAG_ULPVREFRDY_Pos 11           /**< \brief (SUPC_INTFLAG) ULPVREF Voltage Reference Ready */
#define SUPC_INTFLAG_ULPVREFRDY     (_U_(0x1) << SUPC_INTFLAG_ULPVREFRDY_Pos)
#define SUPC_INTFLAG_MASK           _U_(0x00000D3F) /**< \brief (SUPC_INTFLAG) MASK Register */

/* -------- SUPC_STATUS : (SUPC Offset: 0x0C) (R/  32) Power and Clocks Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BOD33RDY:1;       /*!< bit:      0  BOD33 Ready                        */
    uint32_t BOD33DET:1;       /*!< bit:      1  BOD33 Detection                    */
    uint32_t B33SRDY:1;        /*!< bit:      2  BOD33 Synchronization Ready        */
    uint32_t BOD12RDY:1;       /*!< bit:      3  BOD12 Ready                        */
    uint32_t BOD12DET:1;       /*!< bit:      4  BOD12 Detection                    */
    uint32_t B12SRDY:1;        /*!< bit:      5  BOD12 Synchronization Ready        */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t VREGRDY:1;        /*!< bit:      8  Voltage Regulator Ready            */
    uint32_t :1;               /*!< bit:      9  Reserved                           */
    uint32_t VCORERDY:1;       /*!< bit:     10  VDDCORE Ready                      */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t ULPVREFRDY:1;     /*!< bit:     12  Low Power Voltage Reference Ready  */
    uint32_t ULPBIASRDY:1;     /*!< bit:     13  Low Power Voltage Bias Ready       */
    uint32_t :18;              /*!< bit: 14..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SUPC_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_STATUS_OFFSET          0x0C         /**< \brief (SUPC_STATUS offset) Power and Clocks Status */
#define SUPC_STATUS_RESETVALUE      _U_(0x00000000) /**< \brief (SUPC_STATUS reset_value) Power and Clocks Status */

#define SUPC_STATUS_BOD33RDY_Pos    0            /**< \brief (SUPC_STATUS) BOD33 Ready */
#define SUPC_STATUS_BOD33RDY        (_U_(0x1) << SUPC_STATUS_BOD33RDY_Pos)
#define SUPC_STATUS_BOD33DET_Pos    1            /**< \brief (SUPC_STATUS) BOD33 Detection */
#define SUPC_STATUS_BOD33DET        (_U_(0x1) << SUPC_STATUS_BOD33DET_Pos)
#define SUPC_STATUS_B33SRDY_Pos     2            /**< \brief (SUPC_STATUS) BOD33 Synchronization Ready */
#define SUPC_STATUS_B33SRDY         (_U_(0x1) << SUPC_STATUS_B33SRDY_Pos)
#define SUPC_STATUS_BOD12RDY_Pos    3            /**< \brief (SUPC_STATUS) BOD12 Ready */
#define SUPC_STATUS_BOD12RDY        (_U_(0x1) << SUPC_STATUS_BOD12RDY_Pos)
#define SUPC_STATUS_BOD12DET_Pos    4            /**< \brief (SUPC_STATUS) BOD12 Detection */
#define SUPC_STATUS_BOD12DET        (_U_(0x1) << SUPC_STATUS_BOD12DET_Pos)
#define SUPC_STATUS_B12SRDY_Pos     5            /**< \brief (SUPC_STATUS) BOD12 Synchronization Ready */
#define SUPC_STATUS_B12SRDY         (_U_(0x1) << SUPC_STATUS_B12SRDY_Pos)
#define SUPC_STATUS_VREGRDY_Pos     8            /**< \brief (SUPC_STATUS) Voltage Regulator Ready */
#define SUPC_STATUS_VREGRDY         (_U_(0x1) << SUPC_STATUS_VREGRDY_Pos)
#define SUPC_STATUS_VCORERDY_Pos    10           /**< \brief (SUPC_STATUS) VDDCORE Ready */
#define SUPC_STATUS_VCORERDY        (_U_(0x1) << SUPC_STATUS_VCORERDY_Pos)
#define SUPC_STATUS_ULPVREFRDY_Pos  12           /**< \brief (SUPC_STATUS) Low Power Voltage Reference Ready */
#define SUPC_STATUS_ULPVREFRDY      (_U_(0x1) << SUPC_STATUS_ULPVREFRDY_Pos)
#define SUPC_STATUS_ULPBIASRDY_Pos  13           /**< \brief (SUPC_STATUS) Low Power Voltage Bias Ready */
#define SUPC_STATUS_ULPBIASRDY      (_U_(0x1) << SUPC_STATUS_ULPBIASRDY_Pos)
#define SUPC_STATUS_MASK            _U_(0x0000353F) /**< \brief (SUPC_STATUS) MASK Register */

/* -------- SUPC_BOD33 : (SUPC Offset: 0x10) (R/W 32) BOD33 Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable                             */
    uint32_t HYST:1;           /*!< bit:      2  Hysteresis Enable                  */
    uint32_t ACTION:2;         /*!< bit:  3.. 4  Action when Threshold Crossed      */
    uint32_t STDBYCFG:1;       /*!< bit:      5  Configuration in Standby mode      */
    uint32_t RUNSTDBY:1;       /*!< bit:      6  Run during Standby                 */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t ACTCFG:1;         /*!< bit:      8  Configuration in Active mode       */
    uint32_t :2;               /*!< bit:  9..10  Reserved                           */
    uint32_t REFSEL:1;         /*!< bit:     11  BOD33 Voltage Reference Selection  */
    uint32_t PSEL:4;           /*!< bit: 12..15  Prescaler Select                   */
    uint32_t LEVEL:6;          /*!< bit: 16..21  Threshold Level for VDD            */
    uint32_t :10;              /*!< bit: 22..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SUPC_BOD33_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_BOD33_OFFSET           0x10         /**< \brief (SUPC_BOD33 offset) BOD33 Control */
#define SUPC_BOD33_RESETVALUE       _U_(0x00000000) /**< \brief (SUPC_BOD33 reset_value) BOD33 Control */

#define SUPC_BOD33_ENABLE_Pos       1            /**< \brief (SUPC_BOD33) Enable */
#define SUPC_BOD33_ENABLE           (_U_(0x1) << SUPC_BOD33_ENABLE_Pos)
#define SUPC_BOD33_HYST_Pos         2            /**< \brief (SUPC_BOD33) Hysteresis Enable */
#define SUPC_BOD33_HYST             (_U_(0x1) << SUPC_BOD33_HYST_Pos)
#define SUPC_BOD33_ACTION_Pos       3            /**< \brief (SUPC_BOD33) Action when Threshold Crossed */
#define SUPC_BOD33_ACTION_Msk       (_U_(0x3) << SUPC_BOD33_ACTION_Pos)
#define SUPC_BOD33_ACTION(value)    (SUPC_BOD33_ACTION_Msk & ((value) << SUPC_BOD33_ACTION_Pos))
#define   SUPC_BOD33_ACTION_NONE_Val      _U_(0x0)   /**< \brief (SUPC_BOD33) No action */
#define   SUPC_BOD33_ACTION_RESET_Val     _U_(0x1)   /**< \brief (SUPC_BOD33) The BOD33 generates a reset */
#define   SUPC_BOD33_ACTION_INT_Val       _U_(0x2)   /**< \brief (SUPC_BOD33) The BOD33 generates an interrupt */
#define   SUPC_BOD33_ACTION_BKUP_Val      _U_(0x3)   /**< \brief (SUPC_BOD33) The BOD33 puts the device in backup sleep mode if VMON=0 */
#define SUPC_BOD33_ACTION_NONE      (SUPC_BOD33_ACTION_NONE_Val    << SUPC_BOD33_ACTION_Pos)
#define SUPC_BOD33_ACTION_RESET     (SUPC_BOD33_ACTION_RESET_Val   << SUPC_BOD33_ACTION_Pos)
#define SUPC_BOD33_ACTION_INT       (SUPC_BOD33_ACTION_INT_Val     << SUPC_BOD33_ACTION_Pos)
#define SUPC_BOD33_ACTION_BKUP      (SUPC_BOD33_ACTION_BKUP_Val    << SUPC_BOD33_ACTION_Pos)
#define SUPC_BOD33_STDBYCFG_Pos     5            /**< \brief (SUPC_BOD33) Configuration in Standby mode */
#define SUPC_BOD33_STDBYCFG         (_U_(0x1) << SUPC_BOD33_STDBYCFG_Pos)
#define SUPC_BOD33_RUNSTDBY_Pos     6            /**< \brief (SUPC_BOD33) Run during Standby */
#define SUPC_BOD33_RUNSTDBY         (_U_(0x1) << SUPC_BOD33_RUNSTDBY_Pos)
#define SUPC_BOD33_ACTCFG_Pos       8            /**< \brief (SUPC_BOD33) Configuration in Active mode */
#define SUPC_BOD33_ACTCFG           (_U_(0x1) << SUPC_BOD33_ACTCFG_Pos)
#define SUPC_BOD33_REFSEL_Pos       11           /**< \brief (SUPC_BOD33) BOD33 Voltage Reference Selection */
#define SUPC_BOD33_REFSEL           (_U_(0x1) << SUPC_BOD33_REFSEL_Pos)
#define   SUPC_BOD33_REFSEL_SEL_VREFDETREF_Val _U_(0x0)   /**< \brief (SUPC_BOD33) Selects VREFDETREF for the BOD33 */
#define   SUPC_BOD33_REFSEL_SEL_ULPVREF_Val _U_(0x1)   /**< \brief (SUPC_BOD33) Selects ULPVREF for the BOD33 */
#define SUPC_BOD33_REFSEL_SEL_VREFDETREF (SUPC_BOD33_REFSEL_SEL_VREFDETREF_Val << SUPC_BOD33_REFSEL_Pos)
#define SUPC_BOD33_REFSEL_SEL_ULPVREF (SUPC_BOD33_REFSEL_SEL_ULPVREF_Val << SUPC_BOD33_REFSEL_Pos)
#define SUPC_BOD33_PSEL_Pos         12           /**< \brief (SUPC_BOD33) Prescaler Select */
#define SUPC_BOD33_PSEL_Msk         (_U_(0xF) << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL(value)      (SUPC_BOD33_PSEL_Msk & ((value) << SUPC_BOD33_PSEL_Pos))
#define   SUPC_BOD33_PSEL_DIV2_Val        _U_(0x0)   /**< \brief (SUPC_BOD33) Divide clock by 2 */
#define   SUPC_BOD33_PSEL_DIV4_Val        _U_(0x1)   /**< \brief (SUPC_BOD33) Divide clock by 4 */
#define   SUPC_BOD33_PSEL_DIV8_Val        _U_(0x2)   /**< \brief (SUPC_BOD33) Divide clock by 8 */
#define   SUPC_BOD33_PSEL_DIV16_Val       _U_(0x3)   /**< \brief (SUPC_BOD33) Divide clock by 16 */
#define   SUPC_BOD33_PSEL_DIV32_Val       _U_(0x4)   /**< \brief (SUPC_BOD33) Divide clock by 32 */
#define   SUPC_BOD33_PSEL_DIV64_Val       _U_(0x5)   /**< \brief (SUPC_BOD33) Divide clock by 64 */
#define   SUPC_BOD33_PSEL_DIV128_Val      _U_(0x6)   /**< \brief (SUPC_BOD33) Divide clock by 128 */
#define   SUPC_BOD33_PSEL_DIV256_Val      _U_(0x7)   /**< \brief (SUPC_BOD33) Divide clock by 256 */
#define   SUPC_BOD33_PSEL_DIV512_Val      _U_(0x8)   /**< \brief (SUPC_BOD33) Divide clock by 512 */
#define   SUPC_BOD33_PSEL_DIV1024_Val     _U_(0x9)   /**< \brief (SUPC_BOD33) Divide clock by 1024 */
#define   SUPC_BOD33_PSEL_DIV2048_Val     _U_(0xA)   /**< \brief (SUPC_BOD33) Divide clock by 2048 */
#define   SUPC_BOD33_PSEL_DIV4096_Val     _U_(0xB)   /**< \brief (SUPC_BOD33) Divide clock by 4096 */
#define   SUPC_BOD33_PSEL_DIV8192_Val     _U_(0xC)   /**< \brief (SUPC_BOD33) Divide clock by 8192 */
#define   SUPC_BOD33_PSEL_DIV16384_Val    _U_(0xD)   /**< \brief (SUPC_BOD33) Divide clock by 16384 */
#define   SUPC_BOD33_PSEL_DIV32768_Val    _U_(0xE)   /**< \brief (SUPC_BOD33) Divide clock by 32768 */
#define   SUPC_BOD33_PSEL_DIV65536_Val    _U_(0xF)   /**< \brief (SUPC_BOD33) Divide clock by 65536 */
#define SUPC_BOD33_PSEL_DIV2        (SUPC_BOD33_PSEL_DIV2_Val      << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV4        (SUPC_BOD33_PSEL_DIV4_Val      << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV8        (SUPC_BOD33_PSEL_DIV8_Val      << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV16       (SUPC_BOD33_PSEL_DIV16_Val     << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV32       (SUPC_BOD33_PSEL_DIV32_Val     << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV64       (SUPC_BOD33_PSEL_DIV64_Val     << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV128      (SUPC_BOD33_PSEL_DIV128_Val    << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV256      (SUPC_BOD33_PSEL_DIV256_Val    << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV512      (SUPC_BOD33_PSEL_DIV512_Val    << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV1024     (SUPC_BOD33_PSEL_DIV1024_Val   << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV2048     (SUPC_BOD33_PSEL_DIV2048_Val   << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV4096     (SUPC_BOD33_PSEL_DIV4096_Val   << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV8192     (SUPC_BOD33_PSEL_DIV8192_Val   << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV16384    (SUPC_BOD33_PSEL_DIV16384_Val  << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV32768    (SUPC_BOD33_PSEL_DIV32768_Val  << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_PSEL_DIV65536    (SUPC_BOD33_PSEL_DIV65536_Val  << SUPC_BOD33_PSEL_Pos)
#define SUPC_BOD33_LEVEL_Pos        16           /**< \brief (SUPC_BOD33) Threshold Level for VDD */
#define SUPC_BOD33_LEVEL_Msk        (_U_(0x3F) << SUPC_BOD33_LEVEL_Pos)
#define SUPC_BOD33_LEVEL(value)     (SUPC_BOD33_LEVEL_Msk & ((value) << SUPC_BOD33_LEVEL_Pos))
#define SUPC_BOD33_MASK             _U_(0x003FF97E) /**< \brief (SUPC_BOD33) MASK Register */

/* -------- SUPC_BOD12 : (SUPC Offset: 0x14) (R/W 32) BOD12 Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable                             */
    uint32_t HYST:1;           /*!< bit:      2  Hysteresis Enable                  */
    uint32_t ACTION:2;         /*!< bit:  3.. 4  Action when Threshold Crossed      */
    uint32_t STDBYCFG:1;       /*!< bit:      5  Configuration in Standby mode      */
    uint32_t RUNSTDBY:1;       /*!< bit:      6  Run during Standby                 */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t ACTCFG:1;         /*!< bit:      8  Configuration in Active mode       */
    uint32_t :3;               /*!< bit:  9..11  Reserved                           */
    uint32_t PSEL:4;           /*!< bit: 12..15  Prescaler Select                   */
    uint32_t LEVEL:6;          /*!< bit: 16..21  Threshold Level                    */
    uint32_t :10;              /*!< bit: 22..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SUPC_BOD12_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_BOD12_OFFSET           0x14         /**< \brief (SUPC_BOD12 offset) BOD12 Control */
#define SUPC_BOD12_RESETVALUE       _U_(0x00000000) /**< \brief (SUPC_BOD12 reset_value) BOD12 Control */

#define SUPC_BOD12_ENABLE_Pos       1            /**< \brief (SUPC_BOD12) Enable */
#define SUPC_BOD12_ENABLE           (_U_(0x1) << SUPC_BOD12_ENABLE_Pos)
#define SUPC_BOD12_HYST_Pos         2            /**< \brief (SUPC_BOD12) Hysteresis Enable */
#define SUPC_BOD12_HYST             (_U_(0x1) << SUPC_BOD12_HYST_Pos)
#define SUPC_BOD12_ACTION_Pos       3            /**< \brief (SUPC_BOD12) Action when Threshold Crossed */
#define SUPC_BOD12_ACTION_Msk       (_U_(0x3) << SUPC_BOD12_ACTION_Pos)
#define SUPC_BOD12_ACTION(value)    (SUPC_BOD12_ACTION_Msk & ((value) << SUPC_BOD12_ACTION_Pos))
#define   SUPC_BOD12_ACTION_NONE_Val      _U_(0x0)   /**< \brief (SUPC_BOD12) No action */
#define   SUPC_BOD12_ACTION_RESET_Val     _U_(0x1)   /**< \brief (SUPC_BOD12) The BOD12 generates a reset */
#define   SUPC_BOD12_ACTION_INT_Val       _U_(0x2)   /**< \brief (SUPC_BOD12) The BOD12 generates an interrupt */
#define SUPC_BOD12_ACTION_NONE      (SUPC_BOD12_ACTION_NONE_Val    << SUPC_BOD12_ACTION_Pos)
#define SUPC_BOD12_ACTION_RESET     (SUPC_BOD12_ACTION_RESET_Val   << SUPC_BOD12_ACTION_Pos)
#define SUPC_BOD12_ACTION_INT       (SUPC_BOD12_ACTION_INT_Val     << SUPC_BOD12_ACTION_Pos)
#define SUPC_BOD12_STDBYCFG_Pos     5            /**< \brief (SUPC_BOD12) Configuration in Standby mode */
#define SUPC_BOD12_STDBYCFG         (_U_(0x1) << SUPC_BOD12_STDBYCFG_Pos)
#define SUPC_BOD12_RUNSTDBY_Pos     6            /**< \brief (SUPC_BOD12) Run during Standby */
#define SUPC_BOD12_RUNSTDBY         (_U_(0x1) << SUPC_BOD12_RUNSTDBY_Pos)
#define SUPC_BOD12_ACTCFG_Pos       8            /**< \brief (SUPC_BOD12) Configuration in Active mode */
#define SUPC_BOD12_ACTCFG           (_U_(0x1) << SUPC_BOD12_ACTCFG_Pos)
#define SUPC_BOD12_PSEL_Pos         12           /**< \brief (SUPC_BOD12) Prescaler Select */
#define SUPC_BOD12_PSEL_Msk         (_U_(0xF) << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL(value)      (SUPC_BOD12_PSEL_Msk & ((value) << SUPC_BOD12_PSEL_Pos))
#define   SUPC_BOD12_PSEL_DIV2_Val        _U_(0x0)   /**< \brief (SUPC_BOD12) Divide clock by 2 */
#define   SUPC_BOD12_PSEL_DIV4_Val        _U_(0x1)   /**< \brief (SUPC_BOD12) Divide clock by 4 */
#define   SUPC_BOD12_PSEL_DIV8_Val        _U_(0x2)   /**< \brief (SUPC_BOD12) Divide clock by 8 */
#define   SUPC_BOD12_PSEL_DIV16_Val       _U_(0x3)   /**< \brief (SUPC_BOD12) Divide clock by 16 */
#define   SUPC_BOD12_PSEL_DIV32_Val       _U_(0x4)   /**< \brief (SUPC_BOD12) Divide clock by 32 */
#define   SUPC_BOD12_PSEL_DIV64_Val       _U_(0x5)   /**< \brief (SUPC_BOD12) Divide clock by 64 */
#define   SUPC_BOD12_PSEL_DIV128_Val      _U_(0x6)   /**< \brief (SUPC_BOD12) Divide clock by 128 */
#define   SUPC_BOD12_PSEL_DIV256_Val      _U_(0x7)   /**< \brief (SUPC_BOD12) Divide clock by 256 */
#define   SUPC_BOD12_PSEL_DIV512_Val      _U_(0x8)   /**< \brief (SUPC_BOD12) Divide clock by 512 */
#define   SUPC_BOD12_PSEL_DIV1024_Val     _U_(0x9)   /**< \brief (SUPC_BOD12) Divide clock by 1024 */
#define   SUPC_BOD12_PSEL_DIV2048_Val     _U_(0xA)   /**< \brief (SUPC_BOD12) Divide clock by 2048 */
#define   SUPC_BOD12_PSEL_DIV4096_Val     _U_(0xB)   /**< \brief (SUPC_BOD12) Divide clock by 4096 */
#define   SUPC_BOD12_PSEL_DIV8192_Val     _U_(0xC)   /**< \brief (SUPC_BOD12) Divide clock by 8192 */
#define   SUPC_BOD12_PSEL_DIV16384_Val    _U_(0xD)   /**< \brief (SUPC_BOD12) Divide clock by 16384 */
#define   SUPC_BOD12_PSEL_DIV32768_Val    _U_(0xE)   /**< \brief (SUPC_BOD12) Divide clock by 32768 */
#define   SUPC_BOD12_PSEL_DIV65536_Val    _U_(0xF)   /**< \brief (SUPC_BOD12) Divide clock by 65536 */
#define SUPC_BOD12_PSEL_DIV2        (SUPC_BOD12_PSEL_DIV2_Val      << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV4        (SUPC_BOD12_PSEL_DIV4_Val      << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV8        (SUPC_BOD12_PSEL_DIV8_Val      << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV16       (SUPC_BOD12_PSEL_DIV16_Val     << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV32       (SUPC_BOD12_PSEL_DIV32_Val     << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV64       (SUPC_BOD12_PSEL_DIV64_Val     << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV128      (SUPC_BOD12_PSEL_DIV128_Val    << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV256      (SUPC_BOD12_PSEL_DIV256_Val    << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV512      (SUPC_BOD12_PSEL_DIV512_Val    << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV1024     (SUPC_BOD12_PSEL_DIV1024_Val   << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV2048     (SUPC_BOD12_PSEL_DIV2048_Val   << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV4096     (SUPC_BOD12_PSEL_DIV4096_Val   << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV8192     (SUPC_BOD12_PSEL_DIV8192_Val   << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV16384    (SUPC_BOD12_PSEL_DIV16384_Val  << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV32768    (SUPC_BOD12_PSEL_DIV32768_Val  << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_PSEL_DIV65536    (SUPC_BOD12_PSEL_DIV65536_Val  << SUPC_BOD12_PSEL_Pos)
#define SUPC_BOD12_LEVEL_Pos        16           /**< \brief (SUPC_BOD12) Threshold Level */
#define SUPC_BOD12_LEVEL_Msk        (_U_(0x3F) << SUPC_BOD12_LEVEL_Pos)
#define SUPC_BOD12_LEVEL(value)     (SUPC_BOD12_LEVEL_Msk & ((value) << SUPC_BOD12_LEVEL_Pos))
#define SUPC_BOD12_MASK             _U_(0x003FF17E) /**< \brief (SUPC_BOD12) MASK Register */

/* -------- SUPC_VREG : (SUPC Offset: 0x18) (R/W 32) VREG Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable                             */
    uint32_t SEL:2;            /*!< bit:  2.. 3  Voltage Regulator Selection in active mode */
    uint32_t :1;               /*!< bit:      4  Reserved                           */
    uint32_t STDBYPL0:1;       /*!< bit:      5  Standby in PL0                     */
    uint32_t RUNSTDBY:1;       /*!< bit:      6  Run during Standby                 */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t LPEFF:1;          /*!< bit:      8  Low Power efficiency               */
    uint32_t VREFSEL:1;        /*!< bit:      9  Voltage Regulator Voltage Reference Selection */
    uint32_t :6;               /*!< bit: 10..15  Reserved                           */
    uint32_t VSVSTEP:4;        /*!< bit: 16..19  Voltage Scaling Voltage Step       */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t VSPER:8;          /*!< bit: 24..31  Voltage Scaling Period             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SUPC_VREG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_VREG_OFFSET            0x18         /**< \brief (SUPC_VREG offset) VREG Control */
#define SUPC_VREG_RESETVALUE        _U_(0x00000002) /**< \brief (SUPC_VREG reset_value) VREG Control */

#define SUPC_VREG_ENABLE_Pos        1            /**< \brief (SUPC_VREG) Enable */
#define SUPC_VREG_ENABLE            (_U_(0x1) << SUPC_VREG_ENABLE_Pos)
#define SUPC_VREG_SEL_Pos           2            /**< \brief (SUPC_VREG) Voltage Regulator Selection in active mode */
#define SUPC_VREG_SEL_Msk           (_U_(0x3) << SUPC_VREG_SEL_Pos)
#define SUPC_VREG_SEL(value)        (SUPC_VREG_SEL_Msk & ((value) << SUPC_VREG_SEL_Pos))
#define   SUPC_VREG_SEL_LDO_Val           _U_(0x0)   /**< \brief (SUPC_VREG) LDO selection */
#define   SUPC_VREG_SEL_BUCK_Val          _U_(0x1)   /**< \brief (SUPC_VREG) Buck selection */
#define SUPC_VREG_SEL_LDO           (SUPC_VREG_SEL_LDO_Val         << SUPC_VREG_SEL_Pos)
#define SUPC_VREG_SEL_BUCK          (SUPC_VREG_SEL_BUCK_Val        << SUPC_VREG_SEL_Pos)
#define SUPC_VREG_STDBYPL0_Pos      5            /**< \brief (SUPC_VREG) Standby in PL0 */
#define SUPC_VREG_STDBYPL0          (_U_(0x1) << SUPC_VREG_STDBYPL0_Pos)
#define SUPC_VREG_RUNSTDBY_Pos      6            /**< \brief (SUPC_VREG) Run during Standby */
#define SUPC_VREG_RUNSTDBY          (_U_(0x1) << SUPC_VREG_RUNSTDBY_Pos)
#define SUPC_VREG_LPEFF_Pos         8            /**< \brief (SUPC_VREG) Low Power efficiency */
#define SUPC_VREG_LPEFF             (_U_(0x1) << SUPC_VREG_LPEFF_Pos)
#define SUPC_VREG_VREFSEL_Pos       9            /**< \brief (SUPC_VREG) Voltage Regulator Voltage Reference Selection */
#define SUPC_VREG_VREFSEL           (_U_(0x1) << SUPC_VREG_VREFSEL_Pos)
#define SUPC_VREG_VSVSTEP_Pos       16           /**< \brief (SUPC_VREG) Voltage Scaling Voltage Step */
#define SUPC_VREG_VSVSTEP_Msk       (_U_(0xF) << SUPC_VREG_VSVSTEP_Pos)
#define SUPC_VREG_VSVSTEP(value)    (SUPC_VREG_VSVSTEP_Msk & ((value) << SUPC_VREG_VSVSTEP_Pos))
#define SUPC_VREG_VSPER_Pos         24           /**< \brief (SUPC_VREG) Voltage Scaling Period */
#define SUPC_VREG_VSPER_Msk         (_U_(0xFF) << SUPC_VREG_VSPER_Pos)
#define SUPC_VREG_VSPER(value)      (SUPC_VREG_VSPER_Msk & ((value) << SUPC_VREG_VSPER_Pos))
#define SUPC_VREG_MASK              _U_(0xFF0F036E) /**< \brief (SUPC_VREG) MASK Register */

/* -------- SUPC_VREF : (SUPC Offset: 0x1C) (R/W 32) VREF Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t TSEN:1;           /*!< bit:      1  Temperature Sensor Output Enable   */
    uint32_t VREFOE:1;         /*!< bit:      2  Voltage Reference Output Enable    */
    uint32_t TSSEL:1;          /*!< bit:      3  Temperature Sensor Selection       */
    uint32_t :2;               /*!< bit:  4.. 5  Reserved                           */
    uint32_t RUNSTDBY:1;       /*!< bit:      6  Run during Standby                 */
    uint32_t ONDEMAND:1;       /*!< bit:      7  On Demand Control                  */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t SEL:4;            /*!< bit: 16..19  Voltage Reference Selection        */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SUPC_VREF_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_VREF_OFFSET            0x1C         /**< \brief (SUPC_VREF offset) VREF Control */
#define SUPC_VREF_RESETVALUE        _U_(0x00000000) /**< \brief (SUPC_VREF reset_value) VREF Control */

#define SUPC_VREF_TSEN_Pos          1            /**< \brief (SUPC_VREF) Temperature Sensor Output Enable */
#define SUPC_VREF_TSEN              (_U_(0x1) << SUPC_VREF_TSEN_Pos)
#define SUPC_VREF_VREFOE_Pos        2            /**< \brief (SUPC_VREF) Voltage Reference Output Enable */
#define SUPC_VREF_VREFOE            (_U_(0x1) << SUPC_VREF_VREFOE_Pos)
#define SUPC_VREF_TSSEL_Pos         3            /**< \brief (SUPC_VREF) Temperature Sensor Selection */
#define SUPC_VREF_TSSEL             (_U_(0x1) << SUPC_VREF_TSSEL_Pos)
#define SUPC_VREF_RUNSTDBY_Pos      6            /**< \brief (SUPC_VREF) Run during Standby */
#define SUPC_VREF_RUNSTDBY          (_U_(0x1) << SUPC_VREF_RUNSTDBY_Pos)
#define SUPC_VREF_ONDEMAND_Pos      7            /**< \brief (SUPC_VREF) On Demand Control */
#define SUPC_VREF_ONDEMAND          (_U_(0x1) << SUPC_VREF_ONDEMAND_Pos)
#define SUPC_VREF_SEL_Pos           16           /**< \brief (SUPC_VREF) Voltage Reference Selection */
#define SUPC_VREF_SEL_Msk           (_U_(0xF) << SUPC_VREF_SEL_Pos)
#define SUPC_VREF_SEL(value)        (SUPC_VREF_SEL_Msk & ((value) << SUPC_VREF_SEL_Pos))
#define   SUPC_VREF_SEL_1V0_Val           _U_(0x0)   /**< \brief (SUPC_VREF) 1.0V voltage reference typical value */
#define   SUPC_VREF_SEL_1V1_Val           _U_(0x1)   /**< \brief (SUPC_VREF) 1.1V voltage reference typical value */
#define   SUPC_VREF_SEL_1V2_Val           _U_(0x2)   /**< \brief (SUPC_VREF) 1.2V voltage reference typical value */
#define   SUPC_VREF_SEL_1V25_Val          _U_(0x3)   /**< \brief (SUPC_VREF) 1.25V voltage reference typical value */
#define   SUPC_VREF_SEL_2V0_Val           _U_(0x4)   /**< \brief (SUPC_VREF) 2.0V voltage reference typical value */
#define   SUPC_VREF_SEL_2V2_Val           _U_(0x5)   /**< \brief (SUPC_VREF) 2.2V voltage reference typical value */
#define   SUPC_VREF_SEL_2V4_Val           _U_(0x6)   /**< \brief (SUPC_VREF) 2.4V voltage reference typical value */
#define   SUPC_VREF_SEL_2V5_Val           _U_(0x7)   /**< \brief (SUPC_VREF) 2.5V voltage reference typical value */
#define SUPC_VREF_SEL_1V0           (SUPC_VREF_SEL_1V0_Val         << SUPC_VREF_SEL_Pos)
#define SUPC_VREF_SEL_1V1           (SUPC_VREF_SEL_1V1_Val         << SUPC_VREF_SEL_Pos)
#define SUPC_VREF_SEL_1V2           (SUPC_VREF_SEL_1V2_Val         << SUPC_VREF_SEL_Pos)
#define SUPC_VREF_SEL_1V25          (SUPC_VREF_SEL_1V25_Val        << SUPC_VREF_SEL_Pos)
#define SUPC_VREF_SEL_2V0           (SUPC_VREF_SEL_2V0_Val         << SUPC_VREF_SEL_Pos)
#define SUPC_VREF_SEL_2V2           (SUPC_VREF_SEL_2V2_Val         << SUPC_VREF_SEL_Pos)
#define SUPC_VREF_SEL_2V4           (SUPC_VREF_SEL_2V4_Val         << SUPC_VREF_SEL_Pos)
#define SUPC_VREF_SEL_2V5           (SUPC_VREF_SEL_2V5_Val         << SUPC_VREF_SEL_Pos)
#define SUPC_VREF_MASK              _U_(0x000F00CE) /**< \brief (SUPC_VREF) MASK Register */

/* -------- SUPC_EVCTRL : (SUPC Offset: 0x2C) (R/W 32) Event Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t BOD33DETEO:1;     /*!< bit:      1  BOD33 Detection Event Output Enable */
    uint32_t :2;               /*!< bit:  2.. 3  Reserved                           */
    uint32_t BOD12DETEO:1;     /*!< bit:      4  BOD12 Detection Event Output Enable */
    uint32_t :27;              /*!< bit:  5..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SUPC_EVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_EVCTRL_OFFSET          0x2C         /**< \brief (SUPC_EVCTRL offset) Event Control */
#define SUPC_EVCTRL_RESETVALUE      _U_(0x00000000) /**< \brief (SUPC_EVCTRL reset_value) Event Control */

#define SUPC_EVCTRL_BOD33DETEO_Pos  1            /**< \brief (SUPC_EVCTRL) BOD33 Detection Event Output Enable */
#define SUPC_EVCTRL_BOD33DETEO      (_U_(0x1) << SUPC_EVCTRL_BOD33DETEO_Pos)
#define SUPC_EVCTRL_BOD12DETEO_Pos  4            /**< \brief (SUPC_EVCTRL) BOD12 Detection Event Output Enable */
#define SUPC_EVCTRL_BOD12DETEO      (_U_(0x1) << SUPC_EVCTRL_BOD12DETEO_Pos)
#define SUPC_EVCTRL_MASK            _U_(0x00000012) /**< \brief (SUPC_EVCTRL) MASK Register */

/* -------- SUPC_VREGSUSP : (SUPC Offset: 0x30) (R/W 32) VREG Suspend Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VREGSEN:1;        /*!< bit:      0  Enable Voltage Regulator Suspend   */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SUPC_VREGSUSP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_VREGSUSP_OFFSET        0x30         /**< \brief (SUPC_VREGSUSP offset) VREG Suspend Control */
#define SUPC_VREGSUSP_RESETVALUE    _U_(0x00000000) /**< \brief (SUPC_VREGSUSP reset_value) VREG Suspend Control */

#define SUPC_VREGSUSP_VREGSEN_Pos   0            /**< \brief (SUPC_VREGSUSP) Enable Voltage Regulator Suspend */
#define SUPC_VREGSUSP_VREGSEN       (_U_(0x1) << SUPC_VREGSUSP_VREGSEN_Pos)
#define SUPC_VREGSUSP_MASK          _U_(0x00000001) /**< \brief (SUPC_VREGSUSP) MASK Register */

/** \brief SUPC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO SUPC_INTENCLR_Type        INTENCLR;    /**< \brief Offset: 0x00 (R/W 32) Interrupt Enable Clear */
  __IO SUPC_INTENSET_Type        INTENSET;    /**< \brief Offset: 0x04 (R/W 32) Interrupt Enable Set */
  __IO SUPC_INTFLAG_Type         INTFLAG;     /**< \brief Offset: 0x08 (R/W 32) Interrupt Flag Status and Clear */
  __I  SUPC_STATUS_Type          STATUS;      /**< \brief Offset: 0x0C (R/  32) Power and Clocks Status */
  __IO SUPC_BOD33_Type           BOD33;       /**< \brief Offset: 0x10 (R/W 32) BOD33 Control */
  __IO SUPC_BOD12_Type           BOD12;       /**< \brief Offset: 0x14 (R/W 32) BOD12 Control */
  __IO SUPC_VREG_Type            VREG;        /**< \brief Offset: 0x18 (R/W 32) VREG Control */
  __IO SUPC_VREF_Type            VREF;        /**< \brief Offset: 0x1C (R/W 32) VREF Control */
       RoReg8                    Reserved1[0xC];
  __IO SUPC_EVCTRL_Type          EVCTRL;      /**< \brief Offset: 0x2C (R/W 32) Event Control */
  __IO SUPC_VREGSUSP_Type        VREGSUSP;    /**< \brief Offset: 0x30 (R/W 32) VREG Suspend Control */
} Supc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML10_SUPC_COMPONENT_ */
