/**
 * \file
 *
 * \brief Component description for EVSYS
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

#ifndef _SAML10_EVSYS_COMPONENT_
#define _SAML10_EVSYS_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR EVSYS */
/* ========================================================================== */
/** \addtogroup SAML10_EVSYS Event System Interface */
/*@{*/

#define EVSYS_U2504
#define REV_EVSYS                   0x200

/* -------- EVSYS_CTRLA : (EVSYS Offset: 0x000) ( /W  8) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EVSYS_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CTRLA_OFFSET          0x000        /**< \brief (EVSYS_CTRLA offset) Control */
#define EVSYS_CTRLA_RESETVALUE      _U_(0x00)    /**< \brief (EVSYS_CTRLA reset_value) Control */

#define EVSYS_CTRLA_SWRST_Pos       0            /**< \brief (EVSYS_CTRLA) Software Reset */
#define EVSYS_CTRLA_SWRST           (_U_(0x1) << EVSYS_CTRLA_SWRST_Pos)
#define EVSYS_CTRLA_MASK            _U_(0x01)    /**< \brief (EVSYS_CTRLA) MASK Register */

/* -------- EVSYS_SWEVT : (EVSYS Offset: 0x004) ( /W 32) Software Event -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CHANNEL0:1;       /*!< bit:      0  Channel 0 Software Selection       */
    uint32_t CHANNEL1:1;       /*!< bit:      1  Channel 1 Software Selection       */
    uint32_t CHANNEL2:1;       /*!< bit:      2  Channel 2 Software Selection       */
    uint32_t CHANNEL3:1;       /*!< bit:      3  Channel 3 Software Selection       */
    uint32_t CHANNEL4:1;       /*!< bit:      4  Channel 4 Software Selection       */
    uint32_t CHANNEL5:1;       /*!< bit:      5  Channel 5 Software Selection       */
    uint32_t CHANNEL6:1;       /*!< bit:      6  Channel 6 Software Selection       */
    uint32_t CHANNEL7:1;       /*!< bit:      7  Channel 7 Software Selection       */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t CHANNEL:8;        /*!< bit:  0.. 7  Channel x Software Selection       */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_SWEVT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_SWEVT_OFFSET          0x004        /**< \brief (EVSYS_SWEVT offset) Software Event */
#define EVSYS_SWEVT_RESETVALUE      _U_(0x00000000) /**< \brief (EVSYS_SWEVT reset_value) Software Event */

#define EVSYS_SWEVT_CHANNEL0_Pos    0            /**< \brief (EVSYS_SWEVT) Channel 0 Software Selection */
#define EVSYS_SWEVT_CHANNEL0        (_U_(1) << EVSYS_SWEVT_CHANNEL0_Pos)
#define EVSYS_SWEVT_CHANNEL1_Pos    1            /**< \brief (EVSYS_SWEVT) Channel 1 Software Selection */
#define EVSYS_SWEVT_CHANNEL1        (_U_(1) << EVSYS_SWEVT_CHANNEL1_Pos)
#define EVSYS_SWEVT_CHANNEL2_Pos    2            /**< \brief (EVSYS_SWEVT) Channel 2 Software Selection */
#define EVSYS_SWEVT_CHANNEL2        (_U_(1) << EVSYS_SWEVT_CHANNEL2_Pos)
#define EVSYS_SWEVT_CHANNEL3_Pos    3            /**< \brief (EVSYS_SWEVT) Channel 3 Software Selection */
#define EVSYS_SWEVT_CHANNEL3        (_U_(1) << EVSYS_SWEVT_CHANNEL3_Pos)
#define EVSYS_SWEVT_CHANNEL4_Pos    4            /**< \brief (EVSYS_SWEVT) Channel 4 Software Selection */
#define EVSYS_SWEVT_CHANNEL4        (_U_(1) << EVSYS_SWEVT_CHANNEL4_Pos)
#define EVSYS_SWEVT_CHANNEL5_Pos    5            /**< \brief (EVSYS_SWEVT) Channel 5 Software Selection */
#define EVSYS_SWEVT_CHANNEL5        (_U_(1) << EVSYS_SWEVT_CHANNEL5_Pos)
#define EVSYS_SWEVT_CHANNEL6_Pos    6            /**< \brief (EVSYS_SWEVT) Channel 6 Software Selection */
#define EVSYS_SWEVT_CHANNEL6        (_U_(1) << EVSYS_SWEVT_CHANNEL6_Pos)
#define EVSYS_SWEVT_CHANNEL7_Pos    7            /**< \brief (EVSYS_SWEVT) Channel 7 Software Selection */
#define EVSYS_SWEVT_CHANNEL7        (_U_(1) << EVSYS_SWEVT_CHANNEL7_Pos)
#define EVSYS_SWEVT_CHANNEL_Pos     0            /**< \brief (EVSYS_SWEVT) Channel x Software Selection */
#define EVSYS_SWEVT_CHANNEL_Msk     (_U_(0xFF) << EVSYS_SWEVT_CHANNEL_Pos)
#define EVSYS_SWEVT_CHANNEL(value)  (EVSYS_SWEVT_CHANNEL_Msk & ((value) << EVSYS_SWEVT_CHANNEL_Pos))
#define EVSYS_SWEVT_MASK            _U_(0x000000FF) /**< \brief (EVSYS_SWEVT) MASK Register */

/* -------- EVSYS_PRICTRL : (EVSYS Offset: 0x008) (R/W  8) Priority Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PRI:2;            /*!< bit:  0.. 1  Channel Priority Number            */
    uint8_t  :5;               /*!< bit:  2.. 6  Reserved                           */
    uint8_t  RREN:1;           /*!< bit:      7  Round-Robin Scheduling Enable      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EVSYS_PRICTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_PRICTRL_OFFSET        0x008        /**< \brief (EVSYS_PRICTRL offset) Priority Control */
#define EVSYS_PRICTRL_RESETVALUE    _U_(0x00)    /**< \brief (EVSYS_PRICTRL reset_value) Priority Control */

#define EVSYS_PRICTRL_PRI_Pos       0            /**< \brief (EVSYS_PRICTRL) Channel Priority Number */
#define EVSYS_PRICTRL_PRI_Msk       (_U_(0x3) << EVSYS_PRICTRL_PRI_Pos)
#define EVSYS_PRICTRL_PRI(value)    (EVSYS_PRICTRL_PRI_Msk & ((value) << EVSYS_PRICTRL_PRI_Pos))
#define EVSYS_PRICTRL_RREN_Pos      7            /**< \brief (EVSYS_PRICTRL) Round-Robin Scheduling Enable */
#define EVSYS_PRICTRL_RREN          (_U_(0x1) << EVSYS_PRICTRL_RREN_Pos)
#define EVSYS_PRICTRL_MASK          _U_(0x83)    /**< \brief (EVSYS_PRICTRL) MASK Register */

/* -------- EVSYS_INTPEND : (EVSYS Offset: 0x010) (R/W 16) Channel Pending Interrupt -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t ID:2;             /*!< bit:  0.. 1  Channel ID                         */
    uint16_t :6;               /*!< bit:  2.. 7  Reserved                           */
    uint16_t OVR:1;            /*!< bit:      8  Channel Overrun                    */
    uint16_t EVD:1;            /*!< bit:      9  Channel Event Detected             */
    uint16_t :4;               /*!< bit: 10..13  Reserved                           */
    uint16_t READY:1;          /*!< bit:     14  Ready                              */
    uint16_t BUSY:1;           /*!< bit:     15  Busy                               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} EVSYS_INTPEND_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_INTPEND_OFFSET        0x010        /**< \brief (EVSYS_INTPEND offset) Channel Pending Interrupt */
#define EVSYS_INTPEND_RESETVALUE    _U_(0x4000)  /**< \brief (EVSYS_INTPEND reset_value) Channel Pending Interrupt */

#define EVSYS_INTPEND_ID_Pos        0            /**< \brief (EVSYS_INTPEND) Channel ID */
#define EVSYS_INTPEND_ID_Msk        (_U_(0x3) << EVSYS_INTPEND_ID_Pos)
#define EVSYS_INTPEND_ID(value)     (EVSYS_INTPEND_ID_Msk & ((value) << EVSYS_INTPEND_ID_Pos))
#define EVSYS_INTPEND_OVR_Pos       8            /**< \brief (EVSYS_INTPEND) Channel Overrun */
#define EVSYS_INTPEND_OVR           (_U_(0x1) << EVSYS_INTPEND_OVR_Pos)
#define EVSYS_INTPEND_EVD_Pos       9            /**< \brief (EVSYS_INTPEND) Channel Event Detected */
#define EVSYS_INTPEND_EVD           (_U_(0x1) << EVSYS_INTPEND_EVD_Pos)
#define EVSYS_INTPEND_READY_Pos     14           /**< \brief (EVSYS_INTPEND) Ready */
#define EVSYS_INTPEND_READY         (_U_(0x1) << EVSYS_INTPEND_READY_Pos)
#define EVSYS_INTPEND_BUSY_Pos      15           /**< \brief (EVSYS_INTPEND) Busy */
#define EVSYS_INTPEND_BUSY          (_U_(0x1) << EVSYS_INTPEND_BUSY_Pos)
#define EVSYS_INTPEND_MASK          _U_(0xC303)  /**< \brief (EVSYS_INTPEND) MASK Register */

/* -------- EVSYS_INTSTATUS : (EVSYS Offset: 0x014) (R/  32) Interrupt Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CHINT0:1;         /*!< bit:      0  Channel 0 Pending Interrupt        */
    uint32_t CHINT1:1;         /*!< bit:      1  Channel 1 Pending Interrupt        */
    uint32_t CHINT2:1;         /*!< bit:      2  Channel 2 Pending Interrupt        */
    uint32_t CHINT3:1;         /*!< bit:      3  Channel 3 Pending Interrupt        */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t CHINT:4;          /*!< bit:  0.. 3  Channel x Pending Interrupt        */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_INTSTATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_INTSTATUS_OFFSET      0x014        /**< \brief (EVSYS_INTSTATUS offset) Interrupt Status */
#define EVSYS_INTSTATUS_RESETVALUE  _U_(0x00000000) /**< \brief (EVSYS_INTSTATUS reset_value) Interrupt Status */

#define EVSYS_INTSTATUS_CHINT0_Pos  0            /**< \brief (EVSYS_INTSTATUS) Channel 0 Pending Interrupt */
#define EVSYS_INTSTATUS_CHINT0      (_U_(1) << EVSYS_INTSTATUS_CHINT0_Pos)
#define EVSYS_INTSTATUS_CHINT1_Pos  1            /**< \brief (EVSYS_INTSTATUS) Channel 1 Pending Interrupt */
#define EVSYS_INTSTATUS_CHINT1      (_U_(1) << EVSYS_INTSTATUS_CHINT1_Pos)
#define EVSYS_INTSTATUS_CHINT2_Pos  2            /**< \brief (EVSYS_INTSTATUS) Channel 2 Pending Interrupt */
#define EVSYS_INTSTATUS_CHINT2      (_U_(1) << EVSYS_INTSTATUS_CHINT2_Pos)
#define EVSYS_INTSTATUS_CHINT3_Pos  3            /**< \brief (EVSYS_INTSTATUS) Channel 3 Pending Interrupt */
#define EVSYS_INTSTATUS_CHINT3      (_U_(1) << EVSYS_INTSTATUS_CHINT3_Pos)
#define EVSYS_INTSTATUS_CHINT_Pos   0            /**< \brief (EVSYS_INTSTATUS) Channel x Pending Interrupt */
#define EVSYS_INTSTATUS_CHINT_Msk   (_U_(0xF) << EVSYS_INTSTATUS_CHINT_Pos)
#define EVSYS_INTSTATUS_CHINT(value) (EVSYS_INTSTATUS_CHINT_Msk & ((value) << EVSYS_INTSTATUS_CHINT_Pos))
#define EVSYS_INTSTATUS_MASK        _U_(0x0000000F) /**< \brief (EVSYS_INTSTATUS) MASK Register */

/* -------- EVSYS_BUSYCH : (EVSYS Offset: 0x018) (R/  32) Busy Channels -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BUSYCH0:1;        /*!< bit:      0  Busy Channel 0                     */
    uint32_t BUSYCH1:1;        /*!< bit:      1  Busy Channel 1                     */
    uint32_t BUSYCH2:1;        /*!< bit:      2  Busy Channel 2                     */
    uint32_t BUSYCH3:1;        /*!< bit:      3  Busy Channel 3                     */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t BUSYCH:4;         /*!< bit:  0.. 3  Busy Channel x                     */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_BUSYCH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_BUSYCH_OFFSET         0x018        /**< \brief (EVSYS_BUSYCH offset) Busy Channels */
#define EVSYS_BUSYCH_RESETVALUE     _U_(0x00000000) /**< \brief (EVSYS_BUSYCH reset_value) Busy Channels */

#define EVSYS_BUSYCH_BUSYCH0_Pos    0            /**< \brief (EVSYS_BUSYCH) Busy Channel 0 */
#define EVSYS_BUSYCH_BUSYCH0        (_U_(1) << EVSYS_BUSYCH_BUSYCH0_Pos)
#define EVSYS_BUSYCH_BUSYCH1_Pos    1            /**< \brief (EVSYS_BUSYCH) Busy Channel 1 */
#define EVSYS_BUSYCH_BUSYCH1        (_U_(1) << EVSYS_BUSYCH_BUSYCH1_Pos)
#define EVSYS_BUSYCH_BUSYCH2_Pos    2            /**< \brief (EVSYS_BUSYCH) Busy Channel 2 */
#define EVSYS_BUSYCH_BUSYCH2        (_U_(1) << EVSYS_BUSYCH_BUSYCH2_Pos)
#define EVSYS_BUSYCH_BUSYCH3_Pos    3            /**< \brief (EVSYS_BUSYCH) Busy Channel 3 */
#define EVSYS_BUSYCH_BUSYCH3        (_U_(1) << EVSYS_BUSYCH_BUSYCH3_Pos)
#define EVSYS_BUSYCH_BUSYCH_Pos     0            /**< \brief (EVSYS_BUSYCH) Busy Channel x */
#define EVSYS_BUSYCH_BUSYCH_Msk     (_U_(0xF) << EVSYS_BUSYCH_BUSYCH_Pos)
#define EVSYS_BUSYCH_BUSYCH(value)  (EVSYS_BUSYCH_BUSYCH_Msk & ((value) << EVSYS_BUSYCH_BUSYCH_Pos))
#define EVSYS_BUSYCH_MASK           _U_(0x0000000F) /**< \brief (EVSYS_BUSYCH) MASK Register */

/* -------- EVSYS_READYUSR : (EVSYS Offset: 0x01C) (R/  32) Ready Users -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t READYUSR0:1;      /*!< bit:      0  Ready User for Channel 0           */
    uint32_t READYUSR1:1;      /*!< bit:      1  Ready User for Channel 1           */
    uint32_t READYUSR2:1;      /*!< bit:      2  Ready User for Channel 2           */
    uint32_t READYUSR3:1;      /*!< bit:      3  Ready User for Channel 3           */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t READYUSR:4;       /*!< bit:  0.. 3  Ready User for Channel x           */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_READYUSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_READYUSR_OFFSET       0x01C        /**< \brief (EVSYS_READYUSR offset) Ready Users */
#define EVSYS_READYUSR_RESETVALUE   _U_(0xFFFFFFFF) /**< \brief (EVSYS_READYUSR reset_value) Ready Users */

#define EVSYS_READYUSR_READYUSR0_Pos 0            /**< \brief (EVSYS_READYUSR) Ready User for Channel 0 */
#define EVSYS_READYUSR_READYUSR0    (_U_(1) << EVSYS_READYUSR_READYUSR0_Pos)
#define EVSYS_READYUSR_READYUSR1_Pos 1            /**< \brief (EVSYS_READYUSR) Ready User for Channel 1 */
#define EVSYS_READYUSR_READYUSR1    (_U_(1) << EVSYS_READYUSR_READYUSR1_Pos)
#define EVSYS_READYUSR_READYUSR2_Pos 2            /**< \brief (EVSYS_READYUSR) Ready User for Channel 2 */
#define EVSYS_READYUSR_READYUSR2    (_U_(1) << EVSYS_READYUSR_READYUSR2_Pos)
#define EVSYS_READYUSR_READYUSR3_Pos 3            /**< \brief (EVSYS_READYUSR) Ready User for Channel 3 */
#define EVSYS_READYUSR_READYUSR3    (_U_(1) << EVSYS_READYUSR_READYUSR3_Pos)
#define EVSYS_READYUSR_READYUSR_Pos 0            /**< \brief (EVSYS_READYUSR) Ready User for Channel x */
#define EVSYS_READYUSR_READYUSR_Msk (_U_(0xF) << EVSYS_READYUSR_READYUSR_Pos)
#define EVSYS_READYUSR_READYUSR(value) (EVSYS_READYUSR_READYUSR_Msk & ((value) << EVSYS_READYUSR_READYUSR_Pos))
#define EVSYS_READYUSR_MASK         _U_(0x0000000F) /**< \brief (EVSYS_READYUSR) MASK Register */

/* -------- EVSYS_CHANNEL : (EVSYS Offset: 0x020) (R/W 32) CHANNEL Channel n Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EVGEN:6;          /*!< bit:  0.. 5  Event Generator Selection          */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t PATH:2;           /*!< bit:  8.. 9  Path Selection                     */
    uint32_t EDGSEL:2;         /*!< bit: 10..11  Edge Detection Selection           */
    uint32_t :2;               /*!< bit: 12..13  Reserved                           */
    uint32_t RUNSTDBY:1;       /*!< bit:     14  Run in standby                     */
    uint32_t ONDEMAND:1;       /*!< bit:     15  Generic Clock On Demand            */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_CHANNEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CHANNEL_OFFSET        0x020        /**< \brief (EVSYS_CHANNEL offset) Channel n Control */
#define EVSYS_CHANNEL_RESETVALUE    _U_(0x00008000) /**< \brief (EVSYS_CHANNEL reset_value) Channel n Control */

#define EVSYS_CHANNEL_EVGEN_Pos     0            /**< \brief (EVSYS_CHANNEL) Event Generator Selection */
#define EVSYS_CHANNEL_EVGEN_Msk     (_U_(0x3F) << EVSYS_CHANNEL_EVGEN_Pos)
#define EVSYS_CHANNEL_EVGEN(value)  (EVSYS_CHANNEL_EVGEN_Msk & ((value) << EVSYS_CHANNEL_EVGEN_Pos))
#define EVSYS_CHANNEL_PATH_Pos      8            /**< \brief (EVSYS_CHANNEL) Path Selection */
#define EVSYS_CHANNEL_PATH_Msk      (_U_(0x3) << EVSYS_CHANNEL_PATH_Pos)
#define EVSYS_CHANNEL_PATH(value)   (EVSYS_CHANNEL_PATH_Msk & ((value) << EVSYS_CHANNEL_PATH_Pos))
#define   EVSYS_CHANNEL_PATH_SYNCHRONOUS_Val _U_(0x0)   /**< \brief (EVSYS_CHANNEL) Synchronous path */
#define   EVSYS_CHANNEL_PATH_RESYNCHRONIZED_Val _U_(0x1)   /**< \brief (EVSYS_CHANNEL) Resynchronized path */
#define   EVSYS_CHANNEL_PATH_ASYNCHRONOUS_Val _U_(0x2)   /**< \brief (EVSYS_CHANNEL) Asynchronous path */
#define EVSYS_CHANNEL_PATH_SYNCHRONOUS (EVSYS_CHANNEL_PATH_SYNCHRONOUS_Val << EVSYS_CHANNEL_PATH_Pos)
#define EVSYS_CHANNEL_PATH_RESYNCHRONIZED (EVSYS_CHANNEL_PATH_RESYNCHRONIZED_Val << EVSYS_CHANNEL_PATH_Pos)
#define EVSYS_CHANNEL_PATH_ASYNCHRONOUS (EVSYS_CHANNEL_PATH_ASYNCHRONOUS_Val << EVSYS_CHANNEL_PATH_Pos)
#define EVSYS_CHANNEL_EDGSEL_Pos    10           /**< \brief (EVSYS_CHANNEL) Edge Detection Selection */
#define EVSYS_CHANNEL_EDGSEL_Msk    (_U_(0x3) << EVSYS_CHANNEL_EDGSEL_Pos)
#define EVSYS_CHANNEL_EDGSEL(value) (EVSYS_CHANNEL_EDGSEL_Msk & ((value) << EVSYS_CHANNEL_EDGSEL_Pos))
#define   EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT_Val _U_(0x0)   /**< \brief (EVSYS_CHANNEL) No event output when using the resynchronized or synchronous path */
#define   EVSYS_CHANNEL_EDGSEL_RISING_EDGE_Val _U_(0x1)   /**< \brief (EVSYS_CHANNEL) Event detection only on the rising edge of the signal from the event generator when using the resynchronized or synchronous path */
#define   EVSYS_CHANNEL_EDGSEL_FALLING_EDGE_Val _U_(0x2)   /**< \brief (EVSYS_CHANNEL) Event detection only on the falling edge of the signal from the event generator when using the resynchronized or synchronous path */
#define   EVSYS_CHANNEL_EDGSEL_BOTH_EDGES_Val _U_(0x3)   /**< \brief (EVSYS_CHANNEL) Event detection on rising and falling edges of the signal from the event generator when using the resynchronized or synchronous path */
#define EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT (EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT_Val << EVSYS_CHANNEL_EDGSEL_Pos)
#define EVSYS_CHANNEL_EDGSEL_RISING_EDGE (EVSYS_CHANNEL_EDGSEL_RISING_EDGE_Val << EVSYS_CHANNEL_EDGSEL_Pos)
#define EVSYS_CHANNEL_EDGSEL_FALLING_EDGE (EVSYS_CHANNEL_EDGSEL_FALLING_EDGE_Val << EVSYS_CHANNEL_EDGSEL_Pos)
#define EVSYS_CHANNEL_EDGSEL_BOTH_EDGES (EVSYS_CHANNEL_EDGSEL_BOTH_EDGES_Val << EVSYS_CHANNEL_EDGSEL_Pos)
#define EVSYS_CHANNEL_RUNSTDBY_Pos  14           /**< \brief (EVSYS_CHANNEL) Run in standby */
#define EVSYS_CHANNEL_RUNSTDBY      (_U_(0x1) << EVSYS_CHANNEL_RUNSTDBY_Pos)
#define EVSYS_CHANNEL_ONDEMAND_Pos  15           /**< \brief (EVSYS_CHANNEL) Generic Clock On Demand */
#define EVSYS_CHANNEL_ONDEMAND      (_U_(0x1) << EVSYS_CHANNEL_ONDEMAND_Pos)
#define EVSYS_CHANNEL_MASK          _U_(0x0000CF3F) /**< \brief (EVSYS_CHANNEL) MASK Register */

/* -------- EVSYS_CHINTENCLR : (EVSYS Offset: 0x024) (R/W  8) CHANNEL Channel n Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  OVR:1;            /*!< bit:      0  Channel Overrun Interrupt Disable  */
    uint8_t  EVD:1;            /*!< bit:      1  Channel Event Detected Interrupt Disable */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EVSYS_CHINTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CHINTENCLR_OFFSET     0x024        /**< \brief (EVSYS_CHINTENCLR offset) Channel n Interrupt Enable Clear */
#define EVSYS_CHINTENCLR_RESETVALUE _U_(0x00)    /**< \brief (EVSYS_CHINTENCLR reset_value) Channel n Interrupt Enable Clear */

#define EVSYS_CHINTENCLR_OVR_Pos    0            /**< \brief (EVSYS_CHINTENCLR) Channel Overrun Interrupt Disable */
#define EVSYS_CHINTENCLR_OVR        (_U_(0x1) << EVSYS_CHINTENCLR_OVR_Pos)
#define EVSYS_CHINTENCLR_EVD_Pos    1            /**< \brief (EVSYS_CHINTENCLR) Channel Event Detected Interrupt Disable */
#define EVSYS_CHINTENCLR_EVD        (_U_(0x1) << EVSYS_CHINTENCLR_EVD_Pos)
#define EVSYS_CHINTENCLR_MASK       _U_(0x03)    /**< \brief (EVSYS_CHINTENCLR) MASK Register */

/* -------- EVSYS_CHINTENSET : (EVSYS Offset: 0x025) (R/W  8) CHANNEL Channel n Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  OVR:1;            /*!< bit:      0  Channel Overrun Interrupt Enable   */
    uint8_t  EVD:1;            /*!< bit:      1  Channel Event Detected Interrupt Enable */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EVSYS_CHINTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CHINTENSET_OFFSET     0x025        /**< \brief (EVSYS_CHINTENSET offset) Channel n Interrupt Enable Set */
#define EVSYS_CHINTENSET_RESETVALUE _U_(0x00)    /**< \brief (EVSYS_CHINTENSET reset_value) Channel n Interrupt Enable Set */

#define EVSYS_CHINTENSET_OVR_Pos    0            /**< \brief (EVSYS_CHINTENSET) Channel Overrun Interrupt Enable */
#define EVSYS_CHINTENSET_OVR        (_U_(0x1) << EVSYS_CHINTENSET_OVR_Pos)
#define EVSYS_CHINTENSET_EVD_Pos    1            /**< \brief (EVSYS_CHINTENSET) Channel Event Detected Interrupt Enable */
#define EVSYS_CHINTENSET_EVD        (_U_(0x1) << EVSYS_CHINTENSET_EVD_Pos)
#define EVSYS_CHINTENSET_MASK       _U_(0x03)    /**< \brief (EVSYS_CHINTENSET) MASK Register */

/* -------- EVSYS_CHINTFLAG : (EVSYS Offset: 0x026) (R/W  8) CHANNEL Channel n Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  OVR:1;            /*!< bit:      0  Channel Overrun                    */
    __I uint8_t  EVD:1;            /*!< bit:      1  Channel Event Detected             */
    __I uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EVSYS_CHINTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CHINTFLAG_OFFSET      0x026        /**< \brief (EVSYS_CHINTFLAG offset) Channel n Interrupt Flag Status and Clear */
#define EVSYS_CHINTFLAG_RESETVALUE  _U_(0x00)    /**< \brief (EVSYS_CHINTFLAG reset_value) Channel n Interrupt Flag Status and Clear */

#define EVSYS_CHINTFLAG_OVR_Pos     0            /**< \brief (EVSYS_CHINTFLAG) Channel Overrun */
#define EVSYS_CHINTFLAG_OVR         (_U_(0x1) << EVSYS_CHINTFLAG_OVR_Pos)
#define EVSYS_CHINTFLAG_EVD_Pos     1            /**< \brief (EVSYS_CHINTFLAG) Channel Event Detected */
#define EVSYS_CHINTFLAG_EVD         (_U_(0x1) << EVSYS_CHINTFLAG_EVD_Pos)
#define EVSYS_CHINTFLAG_MASK        _U_(0x03)    /**< \brief (EVSYS_CHINTFLAG) MASK Register */

/* -------- EVSYS_CHSTATUS : (EVSYS Offset: 0x027) (R/   8) CHANNEL Channel n Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  RDYUSR:1;         /*!< bit:      0  Ready User                         */
    uint8_t  BUSYCH:1;         /*!< bit:      1  Busy Channel                       */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EVSYS_CHSTATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_CHSTATUS_OFFSET       0x027        /**< \brief (EVSYS_CHSTATUS offset) Channel n Status */
#define EVSYS_CHSTATUS_RESETVALUE   _U_(0x01)    /**< \brief (EVSYS_CHSTATUS reset_value) Channel n Status */

#define EVSYS_CHSTATUS_RDYUSR_Pos   0            /**< \brief (EVSYS_CHSTATUS) Ready User */
#define EVSYS_CHSTATUS_RDYUSR       (_U_(0x1) << EVSYS_CHSTATUS_RDYUSR_Pos)
#define EVSYS_CHSTATUS_BUSYCH_Pos   1            /**< \brief (EVSYS_CHSTATUS) Busy Channel */
#define EVSYS_CHSTATUS_BUSYCH       (_U_(0x1) << EVSYS_CHSTATUS_BUSYCH_Pos)
#define EVSYS_CHSTATUS_MASK         _U_(0x03)    /**< \brief (EVSYS_CHSTATUS) MASK Register */

/* -------- EVSYS_USER : (EVSYS Offset: 0x120) (R/W  8) User Multiplexer n -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CHANNEL:4;        /*!< bit:  0.. 3  Channel Event Selection            */
    uint8_t  :4;               /*!< bit:  4.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EVSYS_USER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_USER_OFFSET           0x120        /**< \brief (EVSYS_USER offset) User Multiplexer n */
#define EVSYS_USER_RESETVALUE       _U_(0x00)    /**< \brief (EVSYS_USER reset_value) User Multiplexer n */

#define EVSYS_USER_CHANNEL_Pos      0            /**< \brief (EVSYS_USER) Channel Event Selection */
#define EVSYS_USER_CHANNEL_Msk      (_U_(0xF) << EVSYS_USER_CHANNEL_Pos)
#define EVSYS_USER_CHANNEL(value)   (EVSYS_USER_CHANNEL_Msk & ((value) << EVSYS_USER_CHANNEL_Pos))
#define EVSYS_USER_MASK             _U_(0x0F)    /**< \brief (EVSYS_USER) MASK Register */

/* -------- EVSYS_INTENCLR : (EVSYS Offset: 0x1D4) (R/W  8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  NSCHK:1;          /*!< bit:      0  Non-Secure Check Interrupt Enable  */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EVSYS_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_INTENCLR_OFFSET       0x1D4        /**< \brief (EVSYS_INTENCLR offset) Interrupt Enable Clear */
#define EVSYS_INTENCLR_RESETVALUE   _U_(0x00)    /**< \brief (EVSYS_INTENCLR reset_value) Interrupt Enable Clear */

#define EVSYS_INTENCLR_NSCHK_Pos    0            /**< \brief (EVSYS_INTENCLR) Non-Secure Check Interrupt Enable */
#define EVSYS_INTENCLR_NSCHK        (_U_(0x1) << EVSYS_INTENCLR_NSCHK_Pos)
#define EVSYS_INTENCLR_MASK         _U_(0x01)    /**< \brief (EVSYS_INTENCLR) MASK Register */

/* -------- EVSYS_INTENSET : (EVSYS Offset: 0x1D5) (R/W  8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  NSCHK:1;          /*!< bit:      0  Non-Secure Check Interrupt Enable  */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EVSYS_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_INTENSET_OFFSET       0x1D5        /**< \brief (EVSYS_INTENSET offset) Interrupt Enable Set */
#define EVSYS_INTENSET_RESETVALUE   _U_(0x00)    /**< \brief (EVSYS_INTENSET reset_value) Interrupt Enable Set */

#define EVSYS_INTENSET_NSCHK_Pos    0            /**< \brief (EVSYS_INTENSET) Non-Secure Check Interrupt Enable */
#define EVSYS_INTENSET_NSCHK        (_U_(0x1) << EVSYS_INTENSET_NSCHK_Pos)
#define EVSYS_INTENSET_MASK         _U_(0x01)    /**< \brief (EVSYS_INTENSET) MASK Register */

/* -------- EVSYS_INTFLAG : (EVSYS Offset: 0x1D6) (R/W  8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  NSCHK:1;          /*!< bit:      0  Non-Secure Check                   */
    __I uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} EVSYS_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_INTFLAG_OFFSET        0x1D6        /**< \brief (EVSYS_INTFLAG offset) Interrupt Flag Status and Clear */
#define EVSYS_INTFLAG_RESETVALUE    _U_(0x00)    /**< \brief (EVSYS_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define EVSYS_INTFLAG_NSCHK_Pos     0            /**< \brief (EVSYS_INTFLAG) Non-Secure Check */
#define EVSYS_INTFLAG_NSCHK         (_U_(0x1) << EVSYS_INTFLAG_NSCHK_Pos)
#define EVSYS_INTFLAG_MASK          _U_(0x01)    /**< \brief (EVSYS_INTFLAG) MASK Register */

/* -------- EVSYS_NONSECCHAN : (EVSYS Offset: 0x1D8) (R/W 32) Channels Security Attribution -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CHANNEL0:1;       /*!< bit:      0  Non-Secure for Channel 0           */
    uint32_t CHANNEL1:1;       /*!< bit:      1  Non-Secure for Channel 1           */
    uint32_t CHANNEL2:1;       /*!< bit:      2  Non-Secure for Channel 2           */
    uint32_t CHANNEL3:1;       /*!< bit:      3  Non-Secure for Channel 3           */
    uint32_t CHANNEL4:1;       /*!< bit:      4  Non-Secure for Channel 4           */
    uint32_t CHANNEL5:1;       /*!< bit:      5  Non-Secure for Channel 5           */
    uint32_t CHANNEL6:1;       /*!< bit:      6  Non-Secure for Channel 6           */
    uint32_t CHANNEL7:1;       /*!< bit:      7  Non-Secure for Channel 7           */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t CHANNEL:8;        /*!< bit:  0.. 7  Non-Secure for Channel x           */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_NONSECCHAN_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_NONSECCHAN_OFFSET     0x1D8        /**< \brief (EVSYS_NONSECCHAN offset) Channels Security Attribution */
#define EVSYS_NONSECCHAN_RESETVALUE _U_(0x00000000) /**< \brief (EVSYS_NONSECCHAN reset_value) Channels Security Attribution */

#define EVSYS_NONSECCHAN_CHANNEL0_Pos 0            /**< \brief (EVSYS_NONSECCHAN) Non-Secure for Channel 0 */
#define EVSYS_NONSECCHAN_CHANNEL0   (_U_(1) << EVSYS_NONSECCHAN_CHANNEL0_Pos)
#define EVSYS_NONSECCHAN_CHANNEL1_Pos 1            /**< \brief (EVSYS_NONSECCHAN) Non-Secure for Channel 1 */
#define EVSYS_NONSECCHAN_CHANNEL1   (_U_(1) << EVSYS_NONSECCHAN_CHANNEL1_Pos)
#define EVSYS_NONSECCHAN_CHANNEL2_Pos 2            /**< \brief (EVSYS_NONSECCHAN) Non-Secure for Channel 2 */
#define EVSYS_NONSECCHAN_CHANNEL2   (_U_(1) << EVSYS_NONSECCHAN_CHANNEL2_Pos)
#define EVSYS_NONSECCHAN_CHANNEL3_Pos 3            /**< \brief (EVSYS_NONSECCHAN) Non-Secure for Channel 3 */
#define EVSYS_NONSECCHAN_CHANNEL3   (_U_(1) << EVSYS_NONSECCHAN_CHANNEL3_Pos)
#define EVSYS_NONSECCHAN_CHANNEL4_Pos 4            /**< \brief (EVSYS_NONSECCHAN) Non-Secure for Channel 4 */
#define EVSYS_NONSECCHAN_CHANNEL4   (_U_(1) << EVSYS_NONSECCHAN_CHANNEL4_Pos)
#define EVSYS_NONSECCHAN_CHANNEL5_Pos 5            /**< \brief (EVSYS_NONSECCHAN) Non-Secure for Channel 5 */
#define EVSYS_NONSECCHAN_CHANNEL5   (_U_(1) << EVSYS_NONSECCHAN_CHANNEL5_Pos)
#define EVSYS_NONSECCHAN_CHANNEL6_Pos 6            /**< \brief (EVSYS_NONSECCHAN) Non-Secure for Channel 6 */
#define EVSYS_NONSECCHAN_CHANNEL6   (_U_(1) << EVSYS_NONSECCHAN_CHANNEL6_Pos)
#define EVSYS_NONSECCHAN_CHANNEL7_Pos 7            /**< \brief (EVSYS_NONSECCHAN) Non-Secure for Channel 7 */
#define EVSYS_NONSECCHAN_CHANNEL7   (_U_(1) << EVSYS_NONSECCHAN_CHANNEL7_Pos)
#define EVSYS_NONSECCHAN_CHANNEL_Pos 0            /**< \brief (EVSYS_NONSECCHAN) Non-Secure for Channel x */
#define EVSYS_NONSECCHAN_CHANNEL_Msk (_U_(0xFF) << EVSYS_NONSECCHAN_CHANNEL_Pos)
#define EVSYS_NONSECCHAN_CHANNEL(value) (EVSYS_NONSECCHAN_CHANNEL_Msk & ((value) << EVSYS_NONSECCHAN_CHANNEL_Pos))
#define EVSYS_NONSECCHAN_MASK       _U_(0x000000FF) /**< \brief (EVSYS_NONSECCHAN) MASK Register */

/* -------- EVSYS_NSCHKCHAN : (EVSYS Offset: 0x1DC) (R/W 32) Non-Secure Channels Check -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CHANNEL0:1;       /*!< bit:      0  Channel 0 to be checked as non-secured */
    uint32_t CHANNEL1:1;       /*!< bit:      1  Channel 1 to be checked as non-secured */
    uint32_t CHANNEL2:1;       /*!< bit:      2  Channel 2 to be checked as non-secured */
    uint32_t CHANNEL3:1;       /*!< bit:      3  Channel 3 to be checked as non-secured */
    uint32_t CHANNEL4:1;       /*!< bit:      4  Channel 4 to be checked as non-secured */
    uint32_t CHANNEL5:1;       /*!< bit:      5  Channel 5 to be checked as non-secured */
    uint32_t CHANNEL6:1;       /*!< bit:      6  Channel 6 to be checked as non-secured */
    uint32_t CHANNEL7:1;       /*!< bit:      7  Channel 7 to be checked as non-secured */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t CHANNEL:8;        /*!< bit:  0.. 7  Channel x to be checked as non-secured */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_NSCHKCHAN_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_NSCHKCHAN_OFFSET      0x1DC        /**< \brief (EVSYS_NSCHKCHAN offset) Non-Secure Channels Check */
#define EVSYS_NSCHKCHAN_RESETVALUE  _U_(0x00000000) /**< \brief (EVSYS_NSCHKCHAN reset_value) Non-Secure Channels Check */

#define EVSYS_NSCHKCHAN_CHANNEL0_Pos 0            /**< \brief (EVSYS_NSCHKCHAN) Channel 0 to be checked as non-secured */
#define EVSYS_NSCHKCHAN_CHANNEL0    (_U_(1) << EVSYS_NSCHKCHAN_CHANNEL0_Pos)
#define EVSYS_NSCHKCHAN_CHANNEL1_Pos 1            /**< \brief (EVSYS_NSCHKCHAN) Channel 1 to be checked as non-secured */
#define EVSYS_NSCHKCHAN_CHANNEL1    (_U_(1) << EVSYS_NSCHKCHAN_CHANNEL1_Pos)
#define EVSYS_NSCHKCHAN_CHANNEL2_Pos 2            /**< \brief (EVSYS_NSCHKCHAN) Channel 2 to be checked as non-secured */
#define EVSYS_NSCHKCHAN_CHANNEL2    (_U_(1) << EVSYS_NSCHKCHAN_CHANNEL2_Pos)
#define EVSYS_NSCHKCHAN_CHANNEL3_Pos 3            /**< \brief (EVSYS_NSCHKCHAN) Channel 3 to be checked as non-secured */
#define EVSYS_NSCHKCHAN_CHANNEL3    (_U_(1) << EVSYS_NSCHKCHAN_CHANNEL3_Pos)
#define EVSYS_NSCHKCHAN_CHANNEL4_Pos 4            /**< \brief (EVSYS_NSCHKCHAN) Channel 4 to be checked as non-secured */
#define EVSYS_NSCHKCHAN_CHANNEL4    (_U_(1) << EVSYS_NSCHKCHAN_CHANNEL4_Pos)
#define EVSYS_NSCHKCHAN_CHANNEL5_Pos 5            /**< \brief (EVSYS_NSCHKCHAN) Channel 5 to be checked as non-secured */
#define EVSYS_NSCHKCHAN_CHANNEL5    (_U_(1) << EVSYS_NSCHKCHAN_CHANNEL5_Pos)
#define EVSYS_NSCHKCHAN_CHANNEL6_Pos 6            /**< \brief (EVSYS_NSCHKCHAN) Channel 6 to be checked as non-secured */
#define EVSYS_NSCHKCHAN_CHANNEL6    (_U_(1) << EVSYS_NSCHKCHAN_CHANNEL6_Pos)
#define EVSYS_NSCHKCHAN_CHANNEL7_Pos 7            /**< \brief (EVSYS_NSCHKCHAN) Channel 7 to be checked as non-secured */
#define EVSYS_NSCHKCHAN_CHANNEL7    (_U_(1) << EVSYS_NSCHKCHAN_CHANNEL7_Pos)
#define EVSYS_NSCHKCHAN_CHANNEL_Pos 0            /**< \brief (EVSYS_NSCHKCHAN) Channel x to be checked as non-secured */
#define EVSYS_NSCHKCHAN_CHANNEL_Msk (_U_(0xFF) << EVSYS_NSCHKCHAN_CHANNEL_Pos)
#define EVSYS_NSCHKCHAN_CHANNEL(value) (EVSYS_NSCHKCHAN_CHANNEL_Msk & ((value) << EVSYS_NSCHKCHAN_CHANNEL_Pos))
#define EVSYS_NSCHKCHAN_MASK        _U_(0x000000FF) /**< \brief (EVSYS_NSCHKCHAN) MASK Register */

/* -------- EVSYS_NONSECUSER : (EVSYS Offset: 0x1E0) (R/W 32) Users Security Attribution -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t USER0:1;          /*!< bit:      0  Non-Secure for User 0              */
    uint32_t USER1:1;          /*!< bit:      1  Non-Secure for User 1              */
    uint32_t USER2:1;          /*!< bit:      2  Non-Secure for User 2              */
    uint32_t USER3:1;          /*!< bit:      3  Non-Secure for User 3              */
    uint32_t USER4:1;          /*!< bit:      4  Non-Secure for User 4              */
    uint32_t USER5:1;          /*!< bit:      5  Non-Secure for User 5              */
    uint32_t USER6:1;          /*!< bit:      6  Non-Secure for User 6              */
    uint32_t USER7:1;          /*!< bit:      7  Non-Secure for User 7              */
    uint32_t USER8:1;          /*!< bit:      8  Non-Secure for User 8              */
    uint32_t USER9:1;          /*!< bit:      9  Non-Secure for User 9              */
    uint32_t USER10:1;         /*!< bit:     10  Non-Secure for User 10             */
    uint32_t USER11:1;         /*!< bit:     11  Non-Secure for User 11             */
    uint32_t USER12:1;         /*!< bit:     12  Non-Secure for User 12             */
    uint32_t USER13:1;         /*!< bit:     13  Non-Secure for User 13             */
    uint32_t USER14:1;         /*!< bit:     14  Non-Secure for User 14             */
    uint32_t USER15:1;         /*!< bit:     15  Non-Secure for User 15             */
    uint32_t USER16:1;         /*!< bit:     16  Non-Secure for User 16             */
    uint32_t USER17:1;         /*!< bit:     17  Non-Secure for User 17             */
    uint32_t USER18:1;         /*!< bit:     18  Non-Secure for User 18             */
    uint32_t USER19:1;         /*!< bit:     19  Non-Secure for User 19             */
    uint32_t USER20:1;         /*!< bit:     20  Non-Secure for User 20             */
    uint32_t USER21:1;         /*!< bit:     21  Non-Secure for User 21             */
    uint32_t USER22:1;         /*!< bit:     22  Non-Secure for User 22             */
    uint32_t :9;               /*!< bit: 23..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t USER:23;          /*!< bit:  0..22  Non-Secure for User x              */
    uint32_t :9;               /*!< bit: 23..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_NONSECUSER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_NONSECUSER_OFFSET     0x1E0        /**< \brief (EVSYS_NONSECUSER offset) Users Security Attribution */
#define EVSYS_NONSECUSER_RESETVALUE _U_(0x00000000) /**< \brief (EVSYS_NONSECUSER reset_value) Users Security Attribution */

#define EVSYS_NONSECUSER_USER0_Pos  0            /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 0 */
#define EVSYS_NONSECUSER_USER0      (_U_(1) << EVSYS_NONSECUSER_USER0_Pos)
#define EVSYS_NONSECUSER_USER1_Pos  1            /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 1 */
#define EVSYS_NONSECUSER_USER1      (_U_(1) << EVSYS_NONSECUSER_USER1_Pos)
#define EVSYS_NONSECUSER_USER2_Pos  2            /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 2 */
#define EVSYS_NONSECUSER_USER2      (_U_(1) << EVSYS_NONSECUSER_USER2_Pos)
#define EVSYS_NONSECUSER_USER3_Pos  3            /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 3 */
#define EVSYS_NONSECUSER_USER3      (_U_(1) << EVSYS_NONSECUSER_USER3_Pos)
#define EVSYS_NONSECUSER_USER4_Pos  4            /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 4 */
#define EVSYS_NONSECUSER_USER4      (_U_(1) << EVSYS_NONSECUSER_USER4_Pos)
#define EVSYS_NONSECUSER_USER5_Pos  5            /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 5 */
#define EVSYS_NONSECUSER_USER5      (_U_(1) << EVSYS_NONSECUSER_USER5_Pos)
#define EVSYS_NONSECUSER_USER6_Pos  6            /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 6 */
#define EVSYS_NONSECUSER_USER6      (_U_(1) << EVSYS_NONSECUSER_USER6_Pos)
#define EVSYS_NONSECUSER_USER7_Pos  7            /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 7 */
#define EVSYS_NONSECUSER_USER7      (_U_(1) << EVSYS_NONSECUSER_USER7_Pos)
#define EVSYS_NONSECUSER_USER8_Pos  8            /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 8 */
#define EVSYS_NONSECUSER_USER8      (_U_(1) << EVSYS_NONSECUSER_USER8_Pos)
#define EVSYS_NONSECUSER_USER9_Pos  9            /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 9 */
#define EVSYS_NONSECUSER_USER9      (_U_(1) << EVSYS_NONSECUSER_USER9_Pos)
#define EVSYS_NONSECUSER_USER10_Pos 10           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 10 */
#define EVSYS_NONSECUSER_USER10     (_U_(1) << EVSYS_NONSECUSER_USER10_Pos)
#define EVSYS_NONSECUSER_USER11_Pos 11           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 11 */
#define EVSYS_NONSECUSER_USER11     (_U_(1) << EVSYS_NONSECUSER_USER11_Pos)
#define EVSYS_NONSECUSER_USER12_Pos 12           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 12 */
#define EVSYS_NONSECUSER_USER12     (_U_(1) << EVSYS_NONSECUSER_USER12_Pos)
#define EVSYS_NONSECUSER_USER13_Pos 13           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 13 */
#define EVSYS_NONSECUSER_USER13     (_U_(1) << EVSYS_NONSECUSER_USER13_Pos)
#define EVSYS_NONSECUSER_USER14_Pos 14           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 14 */
#define EVSYS_NONSECUSER_USER14     (_U_(1) << EVSYS_NONSECUSER_USER14_Pos)
#define EVSYS_NONSECUSER_USER15_Pos 15           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 15 */
#define EVSYS_NONSECUSER_USER15     (_U_(1) << EVSYS_NONSECUSER_USER15_Pos)
#define EVSYS_NONSECUSER_USER16_Pos 16           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 16 */
#define EVSYS_NONSECUSER_USER16     (_U_(1) << EVSYS_NONSECUSER_USER16_Pos)
#define EVSYS_NONSECUSER_USER17_Pos 17           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 17 */
#define EVSYS_NONSECUSER_USER17     (_U_(1) << EVSYS_NONSECUSER_USER17_Pos)
#define EVSYS_NONSECUSER_USER18_Pos 18           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 18 */
#define EVSYS_NONSECUSER_USER18     (_U_(1) << EVSYS_NONSECUSER_USER18_Pos)
#define EVSYS_NONSECUSER_USER19_Pos 19           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 19 */
#define EVSYS_NONSECUSER_USER19     (_U_(1) << EVSYS_NONSECUSER_USER19_Pos)
#define EVSYS_NONSECUSER_USER20_Pos 20           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 20 */
#define EVSYS_NONSECUSER_USER20     (_U_(1) << EVSYS_NONSECUSER_USER20_Pos)
#define EVSYS_NONSECUSER_USER21_Pos 21           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 21 */
#define EVSYS_NONSECUSER_USER21     (_U_(1) << EVSYS_NONSECUSER_USER21_Pos)
#define EVSYS_NONSECUSER_USER22_Pos 22           /**< \brief (EVSYS_NONSECUSER) Non-Secure for User 22 */
#define EVSYS_NONSECUSER_USER22     (_U_(1) << EVSYS_NONSECUSER_USER22_Pos)
#define EVSYS_NONSECUSER_USER_Pos   0            /**< \brief (EVSYS_NONSECUSER) Non-Secure for User x */
#define EVSYS_NONSECUSER_USER_Msk   (_U_(0x7FFFFF) << EVSYS_NONSECUSER_USER_Pos)
#define EVSYS_NONSECUSER_USER(value) (EVSYS_NONSECUSER_USER_Msk & ((value) << EVSYS_NONSECUSER_USER_Pos))
#define EVSYS_NONSECUSER_MASK       _U_(0x007FFFFF) /**< \brief (EVSYS_NONSECUSER) MASK Register */

/* -------- EVSYS_NSCHKUSER : (EVSYS Offset: 0x1F0) (R/W 32) Non-Secure Users Check -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t USER0:1;          /*!< bit:      0  User 0 to be checked as non-secured */
    uint32_t USER1:1;          /*!< bit:      1  User 1 to be checked as non-secured */
    uint32_t USER2:1;          /*!< bit:      2  User 2 to be checked as non-secured */
    uint32_t USER3:1;          /*!< bit:      3  User 3 to be checked as non-secured */
    uint32_t USER4:1;          /*!< bit:      4  User 4 to be checked as non-secured */
    uint32_t USER5:1;          /*!< bit:      5  User 5 to be checked as non-secured */
    uint32_t USER6:1;          /*!< bit:      6  User 6 to be checked as non-secured */
    uint32_t USER7:1;          /*!< bit:      7  User 7 to be checked as non-secured */
    uint32_t USER8:1;          /*!< bit:      8  User 8 to be checked as non-secured */
    uint32_t USER9:1;          /*!< bit:      9  User 9 to be checked as non-secured */
    uint32_t USER10:1;         /*!< bit:     10  User 10 to be checked as non-secured */
    uint32_t USER11:1;         /*!< bit:     11  User 11 to be checked as non-secured */
    uint32_t USER12:1;         /*!< bit:     12  User 12 to be checked as non-secured */
    uint32_t USER13:1;         /*!< bit:     13  User 13 to be checked as non-secured */
    uint32_t USER14:1;         /*!< bit:     14  User 14 to be checked as non-secured */
    uint32_t USER15:1;         /*!< bit:     15  User 15 to be checked as non-secured */
    uint32_t USER16:1;         /*!< bit:     16  User 16 to be checked as non-secured */
    uint32_t USER17:1;         /*!< bit:     17  User 17 to be checked as non-secured */
    uint32_t USER18:1;         /*!< bit:     18  User 18 to be checked as non-secured */
    uint32_t USER19:1;         /*!< bit:     19  User 19 to be checked as non-secured */
    uint32_t USER20:1;         /*!< bit:     20  User 20 to be checked as non-secured */
    uint32_t USER21:1;         /*!< bit:     21  User 21 to be checked as non-secured */
    uint32_t USER22:1;         /*!< bit:     22  User 22 to be checked as non-secured */
    uint32_t :9;               /*!< bit: 23..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  struct {
    uint32_t USER:23;          /*!< bit:  0..22  User x to be checked as non-secured */
    uint32_t :9;               /*!< bit: 23..31  Reserved                           */
  } vec;                       /*!< Structure used for vec  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} EVSYS_NSCHKUSER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define EVSYS_NSCHKUSER_OFFSET      0x1F0        /**< \brief (EVSYS_NSCHKUSER offset) Non-Secure Users Check */
#define EVSYS_NSCHKUSER_RESETVALUE  _U_(0x00000000) /**< \brief (EVSYS_NSCHKUSER reset_value) Non-Secure Users Check */

#define EVSYS_NSCHKUSER_USER0_Pos   0            /**< \brief (EVSYS_NSCHKUSER) User 0 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER0       (_U_(1) << EVSYS_NSCHKUSER_USER0_Pos)
#define EVSYS_NSCHKUSER_USER1_Pos   1            /**< \brief (EVSYS_NSCHKUSER) User 1 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER1       (_U_(1) << EVSYS_NSCHKUSER_USER1_Pos)
#define EVSYS_NSCHKUSER_USER2_Pos   2            /**< \brief (EVSYS_NSCHKUSER) User 2 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER2       (_U_(1) << EVSYS_NSCHKUSER_USER2_Pos)
#define EVSYS_NSCHKUSER_USER3_Pos   3            /**< \brief (EVSYS_NSCHKUSER) User 3 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER3       (_U_(1) << EVSYS_NSCHKUSER_USER3_Pos)
#define EVSYS_NSCHKUSER_USER4_Pos   4            /**< \brief (EVSYS_NSCHKUSER) User 4 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER4       (_U_(1) << EVSYS_NSCHKUSER_USER4_Pos)
#define EVSYS_NSCHKUSER_USER5_Pos   5            /**< \brief (EVSYS_NSCHKUSER) User 5 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER5       (_U_(1) << EVSYS_NSCHKUSER_USER5_Pos)
#define EVSYS_NSCHKUSER_USER6_Pos   6            /**< \brief (EVSYS_NSCHKUSER) User 6 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER6       (_U_(1) << EVSYS_NSCHKUSER_USER6_Pos)
#define EVSYS_NSCHKUSER_USER7_Pos   7            /**< \brief (EVSYS_NSCHKUSER) User 7 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER7       (_U_(1) << EVSYS_NSCHKUSER_USER7_Pos)
#define EVSYS_NSCHKUSER_USER8_Pos   8            /**< \brief (EVSYS_NSCHKUSER) User 8 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER8       (_U_(1) << EVSYS_NSCHKUSER_USER8_Pos)
#define EVSYS_NSCHKUSER_USER9_Pos   9            /**< \brief (EVSYS_NSCHKUSER) User 9 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER9       (_U_(1) << EVSYS_NSCHKUSER_USER9_Pos)
#define EVSYS_NSCHKUSER_USER10_Pos  10           /**< \brief (EVSYS_NSCHKUSER) User 10 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER10      (_U_(1) << EVSYS_NSCHKUSER_USER10_Pos)
#define EVSYS_NSCHKUSER_USER11_Pos  11           /**< \brief (EVSYS_NSCHKUSER) User 11 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER11      (_U_(1) << EVSYS_NSCHKUSER_USER11_Pos)
#define EVSYS_NSCHKUSER_USER12_Pos  12           /**< \brief (EVSYS_NSCHKUSER) User 12 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER12      (_U_(1) << EVSYS_NSCHKUSER_USER12_Pos)
#define EVSYS_NSCHKUSER_USER13_Pos  13           /**< \brief (EVSYS_NSCHKUSER) User 13 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER13      (_U_(1) << EVSYS_NSCHKUSER_USER13_Pos)
#define EVSYS_NSCHKUSER_USER14_Pos  14           /**< \brief (EVSYS_NSCHKUSER) User 14 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER14      (_U_(1) << EVSYS_NSCHKUSER_USER14_Pos)
#define EVSYS_NSCHKUSER_USER15_Pos  15           /**< \brief (EVSYS_NSCHKUSER) User 15 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER15      (_U_(1) << EVSYS_NSCHKUSER_USER15_Pos)
#define EVSYS_NSCHKUSER_USER16_Pos  16           /**< \brief (EVSYS_NSCHKUSER) User 16 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER16      (_U_(1) << EVSYS_NSCHKUSER_USER16_Pos)
#define EVSYS_NSCHKUSER_USER17_Pos  17           /**< \brief (EVSYS_NSCHKUSER) User 17 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER17      (_U_(1) << EVSYS_NSCHKUSER_USER17_Pos)
#define EVSYS_NSCHKUSER_USER18_Pos  18           /**< \brief (EVSYS_NSCHKUSER) User 18 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER18      (_U_(1) << EVSYS_NSCHKUSER_USER18_Pos)
#define EVSYS_NSCHKUSER_USER19_Pos  19           /**< \brief (EVSYS_NSCHKUSER) User 19 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER19      (_U_(1) << EVSYS_NSCHKUSER_USER19_Pos)
#define EVSYS_NSCHKUSER_USER20_Pos  20           /**< \brief (EVSYS_NSCHKUSER) User 20 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER20      (_U_(1) << EVSYS_NSCHKUSER_USER20_Pos)
#define EVSYS_NSCHKUSER_USER21_Pos  21           /**< \brief (EVSYS_NSCHKUSER) User 21 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER21      (_U_(1) << EVSYS_NSCHKUSER_USER21_Pos)
#define EVSYS_NSCHKUSER_USER22_Pos  22           /**< \brief (EVSYS_NSCHKUSER) User 22 to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER22      (_U_(1) << EVSYS_NSCHKUSER_USER22_Pos)
#define EVSYS_NSCHKUSER_USER_Pos    0            /**< \brief (EVSYS_NSCHKUSER) User x to be checked as non-secured */
#define EVSYS_NSCHKUSER_USER_Msk    (_U_(0x7FFFFF) << EVSYS_NSCHKUSER_USER_Pos)
#define EVSYS_NSCHKUSER_USER(value) (EVSYS_NSCHKUSER_USER_Msk & ((value) << EVSYS_NSCHKUSER_USER_Pos))
#define EVSYS_NSCHKUSER_MASK        _U_(0x007FFFFF) /**< \brief (EVSYS_NSCHKUSER) MASK Register */

/** \brief EvsysChannel hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO EVSYS_CHANNEL_Type        CHANNEL;     /**< \brief Offset: 0x000 (R/W 32) Channel n Control */
  __IO EVSYS_CHINTENCLR_Type     CHINTENCLR;  /**< \brief Offset: 0x004 (R/W  8) Channel n Interrupt Enable Clear */
  __IO EVSYS_CHINTENSET_Type     CHINTENSET;  /**< \brief Offset: 0x005 (R/W  8) Channel n Interrupt Enable Set */
  __IO EVSYS_CHINTFLAG_Type      CHINTFLAG;   /**< \brief Offset: 0x006 (R/W  8) Channel n Interrupt Flag Status and Clear */
  __I  EVSYS_CHSTATUS_Type       CHSTATUS;    /**< \brief Offset: 0x007 (R/   8) Channel n Status */
} EvsysChannel;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief EVSYS hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  EVSYS_CTRLA_Type          CTRLA;       /**< \brief Offset: 0x000 ( /W  8) Control */
       RoReg8                    Reserved1[0x3];
  __O  EVSYS_SWEVT_Type          SWEVT;       /**< \brief Offset: 0x004 ( /W 32) Software Event */
  __IO EVSYS_PRICTRL_Type        PRICTRL;     /**< \brief Offset: 0x008 (R/W  8) Priority Control */
       RoReg8                    Reserved2[0x7];
  __IO EVSYS_INTPEND_Type        INTPEND;     /**< \brief Offset: 0x010 (R/W 16) Channel Pending Interrupt */
       RoReg8                    Reserved3[0x2];
  __I  EVSYS_INTSTATUS_Type      INTSTATUS;   /**< \brief Offset: 0x014 (R/  32) Interrupt Status */
  __I  EVSYS_BUSYCH_Type         BUSYCH;      /**< \brief Offset: 0x018 (R/  32) Busy Channels */
  __I  EVSYS_READYUSR_Type       READYUSR;    /**< \brief Offset: 0x01C (R/  32) Ready Users */
       EvsysChannel              Channel[8];  /**< \brief Offset: 0x020 EvsysChannel groups [CHANNELS] */
       RoReg8                    Reserved4[0xC0];
  __IO EVSYS_USER_Type           USER[23];    /**< \brief Offset: 0x120 (R/W  8) User Multiplexer n */
       RoReg8                    Reserved5[0x9D];
  __IO EVSYS_INTENCLR_Type       INTENCLR;    /**< \brief Offset: 0x1D4 (R/W  8) Interrupt Enable Clear */
  __IO EVSYS_INTENSET_Type       INTENSET;    /**< \brief Offset: 0x1D5 (R/W  8) Interrupt Enable Set */
  __IO EVSYS_INTFLAG_Type        INTFLAG;     /**< \brief Offset: 0x1D6 (R/W  8) Interrupt Flag Status and Clear */
       RoReg8                    Reserved6[0x1];
  __IO EVSYS_NONSECCHAN_Type     NONSECCHAN;  /**< \brief Offset: 0x1D8 (R/W 32) Channels Security Attribution */
  __IO EVSYS_NSCHKCHAN_Type      NSCHKCHAN;   /**< \brief Offset: 0x1DC (R/W 32) Non-Secure Channels Check */
  __IO EVSYS_NONSECUSER_Type     NONSECUSER[1]; /**< \brief Offset: 0x1E0 (R/W 32) Users Security Attribution */
       RoReg8                    Reserved7[0xC];
  __IO EVSYS_NSCHKUSER_Type      NSCHKUSER[1]; /**< \brief Offset: 0x1F0 (R/W 32) Non-Secure Users Check */
} Evsys;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML10_EVSYS_COMPONENT_ */
