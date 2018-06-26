/**
 * \file
 *
 * \brief Component description for NVMCTRL
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

#ifndef _SAML11_NVMCTRL_COMPONENT_
#define _SAML11_NVMCTRL_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR NVMCTRL */
/* ========================================================================== */
/** \addtogroup SAML11_NVMCTRL Non-Volatile Memory Controller */
/*@{*/

#define NVMCTRL_U2802
#define REV_NVMCTRL                 0x100

/* -------- NVMCTRL_CTRLA : (NVMCTRL Offset: 0x00) ( /W 16) Control A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t CMD:7;            /*!< bit:  0.. 6  Command                            */
    uint16_t :1;               /*!< bit:      7  Reserved                           */
    uint16_t CMDEX:8;          /*!< bit:  8..15  Command Execution                  */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} NVMCTRL_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_CTRLA_OFFSET        0x00         /**< \brief (NVMCTRL_CTRLA offset) Control A */
#define NVMCTRL_CTRLA_RESETVALUE    _U_(0x0000)  /**< \brief (NVMCTRL_CTRLA reset_value) Control A */

#define NVMCTRL_CTRLA_CMD_Pos       0            /**< \brief (NVMCTRL_CTRLA) Command */
#define NVMCTRL_CTRLA_CMD_Msk       (_U_(0x7F) << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD(value)    (NVMCTRL_CTRLA_CMD_Msk & ((value) << NVMCTRL_CTRLA_CMD_Pos))
#define   NVMCTRL_CTRLA_CMD_ER_Val        _U_(0x2)   /**< \brief (NVMCTRL_CTRLA) Erase Row - Erases the row addressed by the ADDR register. */
#define   NVMCTRL_CTRLA_CMD_WP_Val        _U_(0x4)   /**< \brief (NVMCTRL_CTRLA) Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register. */
#define   NVMCTRL_CTRLA_CMD_SPRM_Val      _U_(0x42)   /**< \brief (NVMCTRL_CTRLA) Sets the power reduction mode. */
#define   NVMCTRL_CTRLA_CMD_CPRM_Val      _U_(0x43)   /**< \brief (NVMCTRL_CTRLA) Clears the power reduction mode. */
#define   NVMCTRL_CTRLA_CMD_PBC_Val       _U_(0x44)   /**< \brief (NVMCTRL_CTRLA) Page Buffer Clear - Clears the page buffer. */
#define   NVMCTRL_CTRLA_CMD_INVALL_Val    _U_(0x46)   /**< \brief (NVMCTRL_CTRLA) Invalidate all cache lines. */
#define   NVMCTRL_CTRLA_CMD_SDAL0_Val     _U_(0x4B)   /**< \brief (NVMCTRL_CTRLA) Set DAL=0 */
#define   NVMCTRL_CTRLA_CMD_SDAL1_Val     _U_(0x4C)   /**< \brief (NVMCTRL_CTRLA) Set DAL=1 */
#define NVMCTRL_CTRLA_CMD_ER        (NVMCTRL_CTRLA_CMD_ER_Val      << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_WP        (NVMCTRL_CTRLA_CMD_WP_Val      << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_SPRM      (NVMCTRL_CTRLA_CMD_SPRM_Val    << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_CPRM      (NVMCTRL_CTRLA_CMD_CPRM_Val    << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_PBC       (NVMCTRL_CTRLA_CMD_PBC_Val     << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_INVALL    (NVMCTRL_CTRLA_CMD_INVALL_Val  << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_SDAL0     (NVMCTRL_CTRLA_CMD_SDAL0_Val   << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_SDAL1     (NVMCTRL_CTRLA_CMD_SDAL1_Val   << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMDEX_Pos     8            /**< \brief (NVMCTRL_CTRLA) Command Execution */
#define NVMCTRL_CTRLA_CMDEX_Msk     (_U_(0xFF) << NVMCTRL_CTRLA_CMDEX_Pos)
#define NVMCTRL_CTRLA_CMDEX(value)  (NVMCTRL_CTRLA_CMDEX_Msk & ((value) << NVMCTRL_CTRLA_CMDEX_Pos))
#define   NVMCTRL_CTRLA_CMDEX_KEY_Val     _U_(0xA5)   /**< \brief (NVMCTRL_CTRLA) Execution Key */
#define NVMCTRL_CTRLA_CMDEX_KEY     (NVMCTRL_CTRLA_CMDEX_KEY_Val   << NVMCTRL_CTRLA_CMDEX_Pos)
#define NVMCTRL_CTRLA_MASK          _U_(0xFF7F)  /**< \brief (NVMCTRL_CTRLA) MASK Register */

/* -------- NVMCTRL_CTRLB : (NVMCTRL Offset: 0x04) (R/W 32) Control B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t RWS:4;            /*!< bit:  1.. 4  NVM Read Wait States               */
    uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    uint32_t SLEEPPRM:2;       /*!< bit:  8.. 9  Power Reduction Mode during Sleep  */
    uint32_t :1;               /*!< bit:     10  Reserved                           */
    uint32_t FWUP:1;           /*!< bit:     11  fast wake-up                       */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t READMODE:2;       /*!< bit: 16..17  NVMCTRL Read Mode                  */
    uint32_t CACHEDIS:1;       /*!< bit:     18  Cache Disable                      */
    uint32_t QWEN:1;           /*!< bit:     19  Quick Write Enable                 */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} NVMCTRL_CTRLB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_CTRLB_OFFSET        0x04         /**< \brief (NVMCTRL_CTRLB offset) Control B */
#define NVMCTRL_CTRLB_RESETVALUE    _U_(0x00000000) /**< \brief (NVMCTRL_CTRLB reset_value) Control B */

#define NVMCTRL_CTRLB_RWS_Pos       1            /**< \brief (NVMCTRL_CTRLB) NVM Read Wait States */
#define NVMCTRL_CTRLB_RWS_Msk       (_U_(0xF) << NVMCTRL_CTRLB_RWS_Pos)
#define NVMCTRL_CTRLB_RWS(value)    (NVMCTRL_CTRLB_RWS_Msk & ((value) << NVMCTRL_CTRLB_RWS_Pos))
#define NVMCTRL_CTRLB_SLEEPPRM_Pos  8            /**< \brief (NVMCTRL_CTRLB) Power Reduction Mode during Sleep */
#define NVMCTRL_CTRLB_SLEEPPRM_Msk  (_U_(0x3) << NVMCTRL_CTRLB_SLEEPPRM_Pos)
#define NVMCTRL_CTRLB_SLEEPPRM(value) (NVMCTRL_CTRLB_SLEEPPRM_Msk & ((value) << NVMCTRL_CTRLB_SLEEPPRM_Pos))
#define   NVMCTRL_CTRLB_SLEEPPRM_WAKEONACCESS_Val _U_(0x0)   /**< \brief (NVMCTRL_CTRLB) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode upon first access. */
#define   NVMCTRL_CTRLB_SLEEPPRM_WAKEUPINSTANT_Val _U_(0x1)   /**< \brief (NVMCTRL_CTRLB) NVM block enters low-power mode when entering sleep.NVM block exits low-power mode when exiting sleep. */
#define   NVMCTRL_CTRLB_SLEEPPRM_DISABLED_Val _U_(0x3)   /**< \brief (NVMCTRL_CTRLB) Auto power reduction disabled. */
#define NVMCTRL_CTRLB_SLEEPPRM_WAKEONACCESS (NVMCTRL_CTRLB_SLEEPPRM_WAKEONACCESS_Val << NVMCTRL_CTRLB_SLEEPPRM_Pos)
#define NVMCTRL_CTRLB_SLEEPPRM_WAKEUPINSTANT (NVMCTRL_CTRLB_SLEEPPRM_WAKEUPINSTANT_Val << NVMCTRL_CTRLB_SLEEPPRM_Pos)
#define NVMCTRL_CTRLB_SLEEPPRM_DISABLED (NVMCTRL_CTRLB_SLEEPPRM_DISABLED_Val << NVMCTRL_CTRLB_SLEEPPRM_Pos)
#define NVMCTRL_CTRLB_FWUP_Pos      11           /**< \brief (NVMCTRL_CTRLB) fast wake-up */
#define NVMCTRL_CTRLB_FWUP          (_U_(0x1) << NVMCTRL_CTRLB_FWUP_Pos)
#define NVMCTRL_CTRLB_READMODE_Pos  16           /**< \brief (NVMCTRL_CTRLB) NVMCTRL Read Mode */
#define NVMCTRL_CTRLB_READMODE_Msk  (_U_(0x3) << NVMCTRL_CTRLB_READMODE_Pos)
#define NVMCTRL_CTRLB_READMODE(value) (NVMCTRL_CTRLB_READMODE_Msk & ((value) << NVMCTRL_CTRLB_READMODE_Pos))
#define   NVMCTRL_CTRLB_READMODE_NO_MISS_PENALTY_Val _U_(0x0)   /**< \brief (NVMCTRL_CTRLB) The NVM Controller (cache system) does not insert wait states on a cache miss. Gives the best system performance. */
#define   NVMCTRL_CTRLB_READMODE_LOW_POWER_Val _U_(0x1)   /**< \brief (NVMCTRL_CTRLB) Reduces power consumption of the cache system, but inserts a wait state each time there is a cache miss. This mode may not be relevant if CPU performance is required, as the application will be stalled and may lead to increase run time. */
#define   NVMCTRL_CTRLB_READMODE_DETERMINISTIC_Val _U_(0x2)   /**< \brief (NVMCTRL_CTRLB) The cache system ensures that a cache hit or miss takes the same amount of time, determined by the number of programmed flash wait states. This mode can be used for real-time applications that require deterministic execution timings. */
#define NVMCTRL_CTRLB_READMODE_NO_MISS_PENALTY (NVMCTRL_CTRLB_READMODE_NO_MISS_PENALTY_Val << NVMCTRL_CTRLB_READMODE_Pos)
#define NVMCTRL_CTRLB_READMODE_LOW_POWER (NVMCTRL_CTRLB_READMODE_LOW_POWER_Val << NVMCTRL_CTRLB_READMODE_Pos)
#define NVMCTRL_CTRLB_READMODE_DETERMINISTIC (NVMCTRL_CTRLB_READMODE_DETERMINISTIC_Val << NVMCTRL_CTRLB_READMODE_Pos)
#define NVMCTRL_CTRLB_CACHEDIS_Pos  18           /**< \brief (NVMCTRL_CTRLB) Cache Disable */
#define NVMCTRL_CTRLB_CACHEDIS      (_U_(0x1) << NVMCTRL_CTRLB_CACHEDIS_Pos)
#define NVMCTRL_CTRLB_QWEN_Pos      19           /**< \brief (NVMCTRL_CTRLB) Quick Write Enable */
#define NVMCTRL_CTRLB_QWEN          (_U_(0x1) << NVMCTRL_CTRLB_QWEN_Pos)
#define NVMCTRL_CTRLB_MASK          _U_(0x000F0B1E) /**< \brief (NVMCTRL_CTRLB) MASK Register */

/* -------- NVMCTRL_CTRLC : (NVMCTRL Offset: 0x08) (R/W  8) Control C -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  MANW:1;           /*!< bit:      0  Manual Write                       */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} NVMCTRL_CTRLC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_CTRLC_OFFSET        0x08         /**< \brief (NVMCTRL_CTRLC offset) Control C */
#define NVMCTRL_CTRLC_RESETVALUE    _U_(0x01)    /**< \brief (NVMCTRL_CTRLC reset_value) Control C */

#define NVMCTRL_CTRLC_MANW_Pos      0            /**< \brief (NVMCTRL_CTRLC) Manual Write */
#define NVMCTRL_CTRLC_MANW          (_U_(0x1) << NVMCTRL_CTRLC_MANW_Pos)
#define NVMCTRL_CTRLC_MASK          _U_(0x01)    /**< \brief (NVMCTRL_CTRLC) MASK Register */

/* -------- NVMCTRL_EVCTRL : (NVMCTRL Offset: 0x0A) (R/W  8) Event Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  AUTOWEI:1;        /*!< bit:      0  Auto Write Event Enable            */
    uint8_t  AUTOWINV:1;       /*!< bit:      1  Auto Write Event Polarity Inverted */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} NVMCTRL_EVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_EVCTRL_OFFSET       0x0A         /**< \brief (NVMCTRL_EVCTRL offset) Event Control */
#define NVMCTRL_EVCTRL_RESETVALUE   _U_(0x00)    /**< \brief (NVMCTRL_EVCTRL reset_value) Event Control */

#define NVMCTRL_EVCTRL_AUTOWEI_Pos  0            /**< \brief (NVMCTRL_EVCTRL) Auto Write Event Enable */
#define NVMCTRL_EVCTRL_AUTOWEI      (_U_(0x1) << NVMCTRL_EVCTRL_AUTOWEI_Pos)
#define NVMCTRL_EVCTRL_AUTOWINV_Pos 1            /**< \brief (NVMCTRL_EVCTRL) Auto Write Event Polarity Inverted */
#define NVMCTRL_EVCTRL_AUTOWINV     (_U_(0x1) << NVMCTRL_EVCTRL_AUTOWINV_Pos)
#define NVMCTRL_EVCTRL_MASK         _U_(0x03)    /**< \brief (NVMCTRL_EVCTRL) MASK Register */

/* -------- NVMCTRL_INTENCLR : (NVMCTRL Offset: 0x0C) (R/W  8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DONE:1;           /*!< bit:      0  NVM Done Interrupt Clear           */
    uint8_t  PROGE:1;          /*!< bit:      1  Programming Error Status Interrupt Clear */
    uint8_t  LOCKE:1;          /*!< bit:      2  Lock Error Status Interrupt Clear  */
    uint8_t  NVME:1;           /*!< bit:      3  NVM Error Interrupt Clear          */
    uint8_t  KEYE:1;           /*!< bit:      4  Key Write Error Interrupt Clear    */
    uint8_t  NSCHK:1;          /*!< bit:      5  NS configuration change detected Interrupt Clear */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} NVMCTRL_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_INTENCLR_OFFSET     0x0C         /**< \brief (NVMCTRL_INTENCLR offset) Interrupt Enable Clear */
#define NVMCTRL_INTENCLR_RESETVALUE _U_(0x00)    /**< \brief (NVMCTRL_INTENCLR reset_value) Interrupt Enable Clear */

#define NVMCTRL_INTENCLR_DONE_Pos   0            /**< \brief (NVMCTRL_INTENCLR) NVM Done Interrupt Clear */
#define NVMCTRL_INTENCLR_DONE       (_U_(0x1) << NVMCTRL_INTENCLR_DONE_Pos)
#define NVMCTRL_INTENCLR_PROGE_Pos  1            /**< \brief (NVMCTRL_INTENCLR) Programming Error Status Interrupt Clear */
#define NVMCTRL_INTENCLR_PROGE      (_U_(0x1) << NVMCTRL_INTENCLR_PROGE_Pos)
#define NVMCTRL_INTENCLR_LOCKE_Pos  2            /**< \brief (NVMCTRL_INTENCLR) Lock Error Status Interrupt Clear */
#define NVMCTRL_INTENCLR_LOCKE      (_U_(0x1) << NVMCTRL_INTENCLR_LOCKE_Pos)
#define NVMCTRL_INTENCLR_NVME_Pos   3            /**< \brief (NVMCTRL_INTENCLR) NVM Error Interrupt Clear */
#define NVMCTRL_INTENCLR_NVME       (_U_(0x1) << NVMCTRL_INTENCLR_NVME_Pos)
#define NVMCTRL_INTENCLR_KEYE_Pos   4            /**< \brief (NVMCTRL_INTENCLR) Key Write Error Interrupt Clear */
#define NVMCTRL_INTENCLR_KEYE       (_U_(0x1) << NVMCTRL_INTENCLR_KEYE_Pos)
#define NVMCTRL_INTENCLR_NSCHK_Pos  5            /**< \brief (NVMCTRL_INTENCLR) NS configuration change detected Interrupt Clear */
#define NVMCTRL_INTENCLR_NSCHK      (_U_(0x1) << NVMCTRL_INTENCLR_NSCHK_Pos)
#define NVMCTRL_INTENCLR_MASK       _U_(0x3F)    /**< \brief (NVMCTRL_INTENCLR) MASK Register */

/* -------- NVMCTRL_INTENSET : (NVMCTRL Offset: 0x10) (R/W  8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DONE:1;           /*!< bit:      0  NVM Done Interrupt Enable          */
    uint8_t  PROGE:1;          /*!< bit:      1  Programming Error Status Interrupt Enable */
    uint8_t  LOCKE:1;          /*!< bit:      2  Lock Error Status Interrupt Enable */
    uint8_t  NVME:1;           /*!< bit:      3  NVM Error Interrupt Enable         */
    uint8_t  KEYE:1;           /*!< bit:      4  Key Write Error Interrupt Enable   */
    uint8_t  NSCHK:1;          /*!< bit:      5  NS configuration change detected Interrupt Enable */
    uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} NVMCTRL_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_INTENSET_OFFSET     0x10         /**< \brief (NVMCTRL_INTENSET offset) Interrupt Enable Set */
#define NVMCTRL_INTENSET_RESETVALUE _U_(0x00)    /**< \brief (NVMCTRL_INTENSET reset_value) Interrupt Enable Set */

#define NVMCTRL_INTENSET_DONE_Pos   0            /**< \brief (NVMCTRL_INTENSET) NVM Done Interrupt Enable */
#define NVMCTRL_INTENSET_DONE       (_U_(0x1) << NVMCTRL_INTENSET_DONE_Pos)
#define NVMCTRL_INTENSET_PROGE_Pos  1            /**< \brief (NVMCTRL_INTENSET) Programming Error Status Interrupt Enable */
#define NVMCTRL_INTENSET_PROGE      (_U_(0x1) << NVMCTRL_INTENSET_PROGE_Pos)
#define NVMCTRL_INTENSET_LOCKE_Pos  2            /**< \brief (NVMCTRL_INTENSET) Lock Error Status Interrupt Enable */
#define NVMCTRL_INTENSET_LOCKE      (_U_(0x1) << NVMCTRL_INTENSET_LOCKE_Pos)
#define NVMCTRL_INTENSET_NVME_Pos   3            /**< \brief (NVMCTRL_INTENSET) NVM Error Interrupt Enable */
#define NVMCTRL_INTENSET_NVME       (_U_(0x1) << NVMCTRL_INTENSET_NVME_Pos)
#define NVMCTRL_INTENSET_KEYE_Pos   4            /**< \brief (NVMCTRL_INTENSET) Key Write Error Interrupt Enable */
#define NVMCTRL_INTENSET_KEYE       (_U_(0x1) << NVMCTRL_INTENSET_KEYE_Pos)
#define NVMCTRL_INTENSET_NSCHK_Pos  5            /**< \brief (NVMCTRL_INTENSET) NS configuration change detected Interrupt Enable */
#define NVMCTRL_INTENSET_NSCHK      (_U_(0x1) << NVMCTRL_INTENSET_NSCHK_Pos)
#define NVMCTRL_INTENSET_MASK       _U_(0x3F)    /**< \brief (NVMCTRL_INTENSET) MASK Register */

/* -------- NVMCTRL_INTFLAG : (NVMCTRL Offset: 0x14) (R/W  8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  DONE:1;           /*!< bit:      0  NVM Done                           */
    __I uint8_t  PROGE:1;          /*!< bit:      1  Programming Error Status           */
    __I uint8_t  LOCKE:1;          /*!< bit:      2  Lock Error Status                  */
    __I uint8_t  NVME:1;           /*!< bit:      3  NVM Error                          */
    __I uint8_t  KEYE:1;           /*!< bit:      4  KEY Write Error                    */
    __I uint8_t  NSCHK:1;          /*!< bit:      5  NS configuration change detected   */
    __I uint8_t  :2;               /*!< bit:  6.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} NVMCTRL_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_INTFLAG_OFFSET      0x14         /**< \brief (NVMCTRL_INTFLAG offset) Interrupt Flag Status and Clear */
#define NVMCTRL_INTFLAG_RESETVALUE  _U_(0x00)    /**< \brief (NVMCTRL_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define NVMCTRL_INTFLAG_DONE_Pos    0            /**< \brief (NVMCTRL_INTFLAG) NVM Done */
#define NVMCTRL_INTFLAG_DONE        (_U_(0x1) << NVMCTRL_INTFLAG_DONE_Pos)
#define NVMCTRL_INTFLAG_PROGE_Pos   1            /**< \brief (NVMCTRL_INTFLAG) Programming Error Status */
#define NVMCTRL_INTFLAG_PROGE       (_U_(0x1) << NVMCTRL_INTFLAG_PROGE_Pos)
#define NVMCTRL_INTFLAG_LOCKE_Pos   2            /**< \brief (NVMCTRL_INTFLAG) Lock Error Status */
#define NVMCTRL_INTFLAG_LOCKE       (_U_(0x1) << NVMCTRL_INTFLAG_LOCKE_Pos)
#define NVMCTRL_INTFLAG_NVME_Pos    3            /**< \brief (NVMCTRL_INTFLAG) NVM Error */
#define NVMCTRL_INTFLAG_NVME        (_U_(0x1) << NVMCTRL_INTFLAG_NVME_Pos)
#define NVMCTRL_INTFLAG_KEYE_Pos    4            /**< \brief (NVMCTRL_INTFLAG) KEY Write Error */
#define NVMCTRL_INTFLAG_KEYE        (_U_(0x1) << NVMCTRL_INTFLAG_KEYE_Pos)
#define NVMCTRL_INTFLAG_NSCHK_Pos   5            /**< \brief (NVMCTRL_INTFLAG) NS configuration change detected */
#define NVMCTRL_INTFLAG_NSCHK       (_U_(0x1) << NVMCTRL_INTFLAG_NSCHK_Pos)
#define NVMCTRL_INTFLAG_MASK        _U_(0x3F)    /**< \brief (NVMCTRL_INTFLAG) MASK Register */

/* -------- NVMCTRL_STATUS : (NVMCTRL Offset: 0x18) (R/  16) Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t PRM:1;            /*!< bit:      0  Power Reduction Mode               */
    uint16_t LOAD:1;           /*!< bit:      1  NVM Page Buffer Active Loading     */
    uint16_t READY:1;          /*!< bit:      2  NVM Ready                          */
    uint16_t DALFUSE:2;        /*!< bit:  3.. 4  Debug Access Level Fuse            */
    uint16_t :11;              /*!< bit:  5..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} NVMCTRL_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_STATUS_OFFSET       0x18         /**< \brief (NVMCTRL_STATUS offset) Status */
#define NVMCTRL_STATUS_RESETVALUE   _U_(0x0000)  /**< \brief (NVMCTRL_STATUS reset_value) Status */

#define NVMCTRL_STATUS_PRM_Pos      0            /**< \brief (NVMCTRL_STATUS) Power Reduction Mode */
#define NVMCTRL_STATUS_PRM          (_U_(0x1) << NVMCTRL_STATUS_PRM_Pos)
#define NVMCTRL_STATUS_LOAD_Pos     1            /**< \brief (NVMCTRL_STATUS) NVM Page Buffer Active Loading */
#define NVMCTRL_STATUS_LOAD         (_U_(0x1) << NVMCTRL_STATUS_LOAD_Pos)
#define NVMCTRL_STATUS_READY_Pos    2            /**< \brief (NVMCTRL_STATUS) NVM Ready */
#define NVMCTRL_STATUS_READY        (_U_(0x1) << NVMCTRL_STATUS_READY_Pos)
#define NVMCTRL_STATUS_DALFUSE_Pos  3            /**< \brief (NVMCTRL_STATUS) Debug Access Level Fuse */
#define NVMCTRL_STATUS_DALFUSE_Msk  (_U_(0x3) << NVMCTRL_STATUS_DALFUSE_Pos)
#define NVMCTRL_STATUS_DALFUSE(value) (NVMCTRL_STATUS_DALFUSE_Msk & ((value) << NVMCTRL_STATUS_DALFUSE_Pos))
#define NVMCTRL_STATUS_MASK         _U_(0x001F)  /**< \brief (NVMCTRL_STATUS) MASK Register */

/* -------- NVMCTRL_ADDR : (NVMCTRL Offset: 0x1C) (R/W 32) Address -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t AOFFSET:16;       /*!< bit:  0..15  NVM Address Offset In The Selected Array */
    uint32_t :6;               /*!< bit: 16..21  Reserved                           */
    uint32_t ARRAY:2;          /*!< bit: 22..23  Array Select                       */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} NVMCTRL_ADDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_ADDR_OFFSET         0x1C         /**< \brief (NVMCTRL_ADDR offset) Address */
#define NVMCTRL_ADDR_RESETVALUE     _U_(0x00000000) /**< \brief (NVMCTRL_ADDR reset_value) Address */

#define NVMCTRL_ADDR_AOFFSET_Pos    0            /**< \brief (NVMCTRL_ADDR) NVM Address Offset In The Selected Array */
#define NVMCTRL_ADDR_AOFFSET_Msk    (_U_(0xFFFF) << NVMCTRL_ADDR_AOFFSET_Pos)
#define NVMCTRL_ADDR_AOFFSET(value) (NVMCTRL_ADDR_AOFFSET_Msk & ((value) << NVMCTRL_ADDR_AOFFSET_Pos))
#define NVMCTRL_ADDR_ARRAY_Pos      22           /**< \brief (NVMCTRL_ADDR) Array Select */
#define NVMCTRL_ADDR_ARRAY_Msk      (_U_(0x3) << NVMCTRL_ADDR_ARRAY_Pos)
#define NVMCTRL_ADDR_ARRAY(value)   (NVMCTRL_ADDR_ARRAY_Msk & ((value) << NVMCTRL_ADDR_ARRAY_Pos))
#define   NVMCTRL_ADDR_ARRAY_FLASH_Val    _U_(0x0)   /**< \brief (NVMCTRL_ADDR) FLASH Array */
#define   NVMCTRL_ADDR_ARRAY_DATAFLASH_Val _U_(0x1)   /**< \brief (NVMCTRL_ADDR) DATA FLASH Array */
#define   NVMCTRL_ADDR_ARRAY_AUX_Val      _U_(0x2)   /**< \brief (NVMCTRL_ADDR) Auxilliary Space */
#define   NVMCTRL_ADDR_ARRAY_RESERVED_Val _U_(0x3)   /**< \brief (NVMCTRL_ADDR) Reserved Array */
#define NVMCTRL_ADDR_ARRAY_FLASH    (NVMCTRL_ADDR_ARRAY_FLASH_Val  << NVMCTRL_ADDR_ARRAY_Pos)
#define NVMCTRL_ADDR_ARRAY_DATAFLASH (NVMCTRL_ADDR_ARRAY_DATAFLASH_Val << NVMCTRL_ADDR_ARRAY_Pos)
#define NVMCTRL_ADDR_ARRAY_AUX      (NVMCTRL_ADDR_ARRAY_AUX_Val    << NVMCTRL_ADDR_ARRAY_Pos)
#define NVMCTRL_ADDR_ARRAY_RESERVED (NVMCTRL_ADDR_ARRAY_RESERVED_Val << NVMCTRL_ADDR_ARRAY_Pos)
#define NVMCTRL_ADDR_MASK           _U_(0x00C0FFFF) /**< \brief (NVMCTRL_ADDR) MASK Register */

/* -------- NVMCTRL_SULCK : (NVMCTRL Offset: 0x20) (R/W 16) Secure Unlock Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t BS:1;             /*!< bit:      0  Secure Boot Region                 */
    uint16_t AS:1;             /*!< bit:      1  Secure Application Region          */
    uint16_t DS:1;             /*!< bit:      2  Data Secure Region                 */
    uint16_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint16_t SLKEY:8;          /*!< bit:  8..15  Write Key                          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} NVMCTRL_SULCK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_SULCK_OFFSET        0x20         /**< \brief (NVMCTRL_SULCK offset) Secure Unlock Register */

#define NVMCTRL_SULCK_BS_Pos        0            /**< \brief (NVMCTRL_SULCK) Secure Boot Region */
#define NVMCTRL_SULCK_BS            (_U_(0x1) << NVMCTRL_SULCK_BS_Pos)
#define NVMCTRL_SULCK_AS_Pos        1            /**< \brief (NVMCTRL_SULCK) Secure Application Region */
#define NVMCTRL_SULCK_AS            (_U_(0x1) << NVMCTRL_SULCK_AS_Pos)
#define NVMCTRL_SULCK_DS_Pos        2            /**< \brief (NVMCTRL_SULCK) Data Secure Region */
#define NVMCTRL_SULCK_DS            (_U_(0x1) << NVMCTRL_SULCK_DS_Pos)
#define NVMCTRL_SULCK_SLKEY_Pos     8            /**< \brief (NVMCTRL_SULCK) Write Key */
#define NVMCTRL_SULCK_SLKEY_Msk     (_U_(0xFF) << NVMCTRL_SULCK_SLKEY_Pos)
#define NVMCTRL_SULCK_SLKEY(value)  (NVMCTRL_SULCK_SLKEY_Msk & ((value) << NVMCTRL_SULCK_SLKEY_Pos))
#define   NVMCTRL_SULCK_SLKEY_KEY_Val     _U_(0xA5)   /**< \brief (NVMCTRL_SULCK) Write Key */
#define NVMCTRL_SULCK_SLKEY_KEY     (NVMCTRL_SULCK_SLKEY_KEY_Val   << NVMCTRL_SULCK_SLKEY_Pos)
#define NVMCTRL_SULCK_MASK          _U_(0xFF07)  /**< \brief (NVMCTRL_SULCK) MASK Register */

/* -------- NVMCTRL_NSULCK : (NVMCTRL Offset: 0x22) (R/W 16) Non-Secure Unlock Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t BNS:1;            /*!< bit:      0  Non-Secure Boot Region             */
    uint16_t ANS:1;            /*!< bit:      1  Non-Secure Application Region      */
    uint16_t DNS:1;            /*!< bit:      2  Non-Secure Data Region             */
    uint16_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint16_t NSLKEY:8;         /*!< bit:  8..15  Write Key                          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} NVMCTRL_NSULCK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_NSULCK_OFFSET       0x22         /**< \brief (NVMCTRL_NSULCK offset) Non-Secure Unlock Register */

#define NVMCTRL_NSULCK_BNS_Pos      0            /**< \brief (NVMCTRL_NSULCK) Non-Secure Boot Region */
#define NVMCTRL_NSULCK_BNS          (_U_(0x1) << NVMCTRL_NSULCK_BNS_Pos)
#define NVMCTRL_NSULCK_ANS_Pos      1            /**< \brief (NVMCTRL_NSULCK) Non-Secure Application Region */
#define NVMCTRL_NSULCK_ANS          (_U_(0x1) << NVMCTRL_NSULCK_ANS_Pos)
#define NVMCTRL_NSULCK_DNS_Pos      2            /**< \brief (NVMCTRL_NSULCK) Non-Secure Data Region */
#define NVMCTRL_NSULCK_DNS          (_U_(0x1) << NVMCTRL_NSULCK_DNS_Pos)
#define NVMCTRL_NSULCK_NSLKEY_Pos   8            /**< \brief (NVMCTRL_NSULCK) Write Key */
#define NVMCTRL_NSULCK_NSLKEY_Msk   (_U_(0xFF) << NVMCTRL_NSULCK_NSLKEY_Pos)
#define NVMCTRL_NSULCK_NSLKEY(value) (NVMCTRL_NSULCK_NSLKEY_Msk & ((value) << NVMCTRL_NSULCK_NSLKEY_Pos))
#define   NVMCTRL_NSULCK_NSLKEY_KEY_Val   _U_(0xA5)   /**< \brief (NVMCTRL_NSULCK) Write Key */
#define NVMCTRL_NSULCK_NSLKEY_KEY   (NVMCTRL_NSULCK_NSLKEY_KEY_Val << NVMCTRL_NSULCK_NSLKEY_Pos)
#define NVMCTRL_NSULCK_MASK         _U_(0xFF07)  /**< \brief (NVMCTRL_NSULCK) MASK Register */

/* -------- NVMCTRL_PARAM : (NVMCTRL Offset: 0x24) (R/W 32) NVM Parameter -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FLASHP:16;        /*!< bit:  0..15  FLASH Pages                        */
    uint32_t PSZ:3;            /*!< bit: 16..18  Page Size                          */
    uint32_t :1;               /*!< bit:     19  Reserved                           */
    uint32_t DFLASHP:12;       /*!< bit: 20..31  DATAFLASH Pages                    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} NVMCTRL_PARAM_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_PARAM_OFFSET        0x24         /**< \brief (NVMCTRL_PARAM offset) NVM Parameter */
#define NVMCTRL_PARAM_RESETVALUE    _U_(0x00000000) /**< \brief (NVMCTRL_PARAM reset_value) NVM Parameter */

#define NVMCTRL_PARAM_FLASHP_Pos    0            /**< \brief (NVMCTRL_PARAM) FLASH Pages */
#define NVMCTRL_PARAM_FLASHP_Msk    (_U_(0xFFFF) << NVMCTRL_PARAM_FLASHP_Pos)
#define NVMCTRL_PARAM_FLASHP(value) (NVMCTRL_PARAM_FLASHP_Msk & ((value) << NVMCTRL_PARAM_FLASHP_Pos))
#define NVMCTRL_PARAM_PSZ_Pos       16           /**< \brief (NVMCTRL_PARAM) Page Size */
#define NVMCTRL_PARAM_PSZ_Msk       (_U_(0x7) << NVMCTRL_PARAM_PSZ_Pos)
#define NVMCTRL_PARAM_PSZ(value)    (NVMCTRL_PARAM_PSZ_Msk & ((value) << NVMCTRL_PARAM_PSZ_Pos))
#define   NVMCTRL_PARAM_PSZ_8_Val         _U_(0x0)   /**< \brief (NVMCTRL_PARAM) 8 bytes */
#define   NVMCTRL_PARAM_PSZ_16_Val        _U_(0x1)   /**< \brief (NVMCTRL_PARAM) 16 bytes */
#define   NVMCTRL_PARAM_PSZ_32_Val        _U_(0x2)   /**< \brief (NVMCTRL_PARAM) 32 bytes */
#define   NVMCTRL_PARAM_PSZ_64_Val        _U_(0x3)   /**< \brief (NVMCTRL_PARAM) 64 bytes */
#define   NVMCTRL_PARAM_PSZ_128_Val       _U_(0x4)   /**< \brief (NVMCTRL_PARAM) 128 bytes */
#define   NVMCTRL_PARAM_PSZ_256_Val       _U_(0x5)   /**< \brief (NVMCTRL_PARAM) 256 bytes */
#define   NVMCTRL_PARAM_PSZ_512_Val       _U_(0x6)   /**< \brief (NVMCTRL_PARAM) 512 bytes */
#define   NVMCTRL_PARAM_PSZ_1024_Val      _U_(0x7)   /**< \brief (NVMCTRL_PARAM) 1024 bytes */
#define NVMCTRL_PARAM_PSZ_8         (NVMCTRL_PARAM_PSZ_8_Val       << NVMCTRL_PARAM_PSZ_Pos)
#define NVMCTRL_PARAM_PSZ_16        (NVMCTRL_PARAM_PSZ_16_Val      << NVMCTRL_PARAM_PSZ_Pos)
#define NVMCTRL_PARAM_PSZ_32        (NVMCTRL_PARAM_PSZ_32_Val      << NVMCTRL_PARAM_PSZ_Pos)
#define NVMCTRL_PARAM_PSZ_64        (NVMCTRL_PARAM_PSZ_64_Val      << NVMCTRL_PARAM_PSZ_Pos)
#define NVMCTRL_PARAM_PSZ_128       (NVMCTRL_PARAM_PSZ_128_Val     << NVMCTRL_PARAM_PSZ_Pos)
#define NVMCTRL_PARAM_PSZ_256       (NVMCTRL_PARAM_PSZ_256_Val     << NVMCTRL_PARAM_PSZ_Pos)
#define NVMCTRL_PARAM_PSZ_512       (NVMCTRL_PARAM_PSZ_512_Val     << NVMCTRL_PARAM_PSZ_Pos)
#define NVMCTRL_PARAM_PSZ_1024      (NVMCTRL_PARAM_PSZ_1024_Val    << NVMCTRL_PARAM_PSZ_Pos)
#define NVMCTRL_PARAM_DFLASHP_Pos   20           /**< \brief (NVMCTRL_PARAM) DATAFLASH Pages */
#define NVMCTRL_PARAM_DFLASHP_Msk   (_U_(0xFFF) << NVMCTRL_PARAM_DFLASHP_Pos)
#define NVMCTRL_PARAM_DFLASHP(value) (NVMCTRL_PARAM_DFLASHP_Msk & ((value) << NVMCTRL_PARAM_DFLASHP_Pos))
#define NVMCTRL_PARAM_MASK          _U_(0xFFF7FFFF) /**< \brief (NVMCTRL_PARAM) MASK Register */

/* -------- NVMCTRL_DSCC : (NVMCTRL Offset: 0x30) ( /W 32) Data Scramble Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DSCKEY:30;        /*!< bit:  0..29  Data Scramble Key                  */
    uint32_t :2;               /*!< bit: 30..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} NVMCTRL_DSCC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_DSCC_OFFSET         0x30         /**< \brief (NVMCTRL_DSCC offset) Data Scramble Configuration */
#define NVMCTRL_DSCC_RESETVALUE     _U_(0x00000000) /**< \brief (NVMCTRL_DSCC reset_value) Data Scramble Configuration */

#define NVMCTRL_DSCC_DSCKEY_Pos     0            /**< \brief (NVMCTRL_DSCC) Data Scramble Key */
#define NVMCTRL_DSCC_DSCKEY_Msk     (_U_(0x3FFFFFFF) << NVMCTRL_DSCC_DSCKEY_Pos)
#define NVMCTRL_DSCC_DSCKEY(value)  (NVMCTRL_DSCC_DSCKEY_Msk & ((value) << NVMCTRL_DSCC_DSCKEY_Pos))
#define NVMCTRL_DSCC_MASK           _U_(0x3FFFFFFF) /**< \brief (NVMCTRL_DSCC) MASK Register */

/* -------- NVMCTRL_SECCTRL : (NVMCTRL Offset: 0x34) (R/W 32) Security Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TAMPEEN:1;        /*!< bit:      0  Tamper Erase Enable                */
    uint32_t :1;               /*!< bit:      1  Reserved                           */
    uint32_t SILACC:1;         /*!< bit:      2  Silent Access                      */
    uint32_t DSCEN:1;          /*!< bit:      3  Data Scramble Enable               */
    uint32_t :2;               /*!< bit:  4.. 5  Reserved                           */
    uint32_t DXN:1;            /*!< bit:      6  Data Flash is eXecute Never        */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t TEROW:3;          /*!< bit:  8..10  Tamper Rease Row                   */
    uint32_t :13;              /*!< bit: 11..23  Reserved                           */
    uint32_t KEY:8;            /*!< bit: 24..31  Write Key                          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} NVMCTRL_SECCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_SECCTRL_OFFSET      0x34         /**< \brief (NVMCTRL_SECCTRL offset) Security Control */
#define NVMCTRL_SECCTRL_RESETVALUE  _U_(0x00000030) /**< \brief (NVMCTRL_SECCTRL reset_value) Security Control */

#define NVMCTRL_SECCTRL_TAMPEEN_Pos 0            /**< \brief (NVMCTRL_SECCTRL) Tamper Erase Enable */
#define NVMCTRL_SECCTRL_TAMPEEN     (_U_(0x1) << NVMCTRL_SECCTRL_TAMPEEN_Pos)
#define NVMCTRL_SECCTRL_SILACC_Pos  2            /**< \brief (NVMCTRL_SECCTRL) Silent Access */
#define NVMCTRL_SECCTRL_SILACC      (_U_(0x1) << NVMCTRL_SECCTRL_SILACC_Pos)
#define NVMCTRL_SECCTRL_DSCEN_Pos   3            /**< \brief (NVMCTRL_SECCTRL) Data Scramble Enable */
#define NVMCTRL_SECCTRL_DSCEN       (_U_(0x1) << NVMCTRL_SECCTRL_DSCEN_Pos)
#define NVMCTRL_SECCTRL_DXN_Pos     6            /**< \brief (NVMCTRL_SECCTRL) Data Flash is eXecute Never */
#define NVMCTRL_SECCTRL_DXN         (_U_(0x1) << NVMCTRL_SECCTRL_DXN_Pos)
#define NVMCTRL_SECCTRL_TEROW_Pos   8            /**< \brief (NVMCTRL_SECCTRL) Tamper Rease Row */
#define NVMCTRL_SECCTRL_TEROW_Msk   (_U_(0x7) << NVMCTRL_SECCTRL_TEROW_Pos)
#define NVMCTRL_SECCTRL_TEROW(value) (NVMCTRL_SECCTRL_TEROW_Msk & ((value) << NVMCTRL_SECCTRL_TEROW_Pos))
#define NVMCTRL_SECCTRL_KEY_Pos     24           /**< \brief (NVMCTRL_SECCTRL) Write Key */
#define NVMCTRL_SECCTRL_KEY_Msk     (_U_(0xFF) << NVMCTRL_SECCTRL_KEY_Pos)
#define NVMCTRL_SECCTRL_KEY(value)  (NVMCTRL_SECCTRL_KEY_Msk & ((value) << NVMCTRL_SECCTRL_KEY_Pos))
#define   NVMCTRL_SECCTRL_KEY_KEY_Val     _U_(0xA5)   /**< \brief (NVMCTRL_SECCTRL) Write Key */
#define NVMCTRL_SECCTRL_KEY_KEY     (NVMCTRL_SECCTRL_KEY_KEY_Val   << NVMCTRL_SECCTRL_KEY_Pos)
#define NVMCTRL_SECCTRL_MASK        _U_(0xFF00074D) /**< \brief (NVMCTRL_SECCTRL) MASK Register */

/* -------- NVMCTRL_SCFGB : (NVMCTRL Offset: 0x38) (R/W 32) Secure Boot Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BCREN:1;          /*!< bit:      0  Boot Configuration Row Read Enable */
    uint32_t BCWEN:1;          /*!< bit:      1  Boot Configuration Row Write Enable */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} NVMCTRL_SCFGB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_SCFGB_OFFSET        0x38         /**< \brief (NVMCTRL_SCFGB offset) Secure Boot Configuration */
#define NVMCTRL_SCFGB_RESETVALUE    _U_(0x00000003) /**< \brief (NVMCTRL_SCFGB reset_value) Secure Boot Configuration */

#define NVMCTRL_SCFGB_BCREN_Pos     0            /**< \brief (NVMCTRL_SCFGB) Boot Configuration Row Read Enable */
#define NVMCTRL_SCFGB_BCREN         (_U_(0x1) << NVMCTRL_SCFGB_BCREN_Pos)
#define NVMCTRL_SCFGB_BCWEN_Pos     1            /**< \brief (NVMCTRL_SCFGB) Boot Configuration Row Write Enable */
#define NVMCTRL_SCFGB_BCWEN         (_U_(0x1) << NVMCTRL_SCFGB_BCWEN_Pos)
#define NVMCTRL_SCFGB_MASK          _U_(0x00000003) /**< \brief (NVMCTRL_SCFGB) MASK Register */

/* -------- NVMCTRL_SCFGAD : (NVMCTRL Offset: 0x3C) (R/W 32) Secure Application and Data Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t URWEN:1;          /*!< bit:      0  User Row Write Enable              */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} NVMCTRL_SCFGAD_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_SCFGAD_OFFSET       0x3C         /**< \brief (NVMCTRL_SCFGAD offset) Secure Application and Data Configuration */
#define NVMCTRL_SCFGAD_RESETVALUE   _U_(0x00000001) /**< \brief (NVMCTRL_SCFGAD reset_value) Secure Application and Data Configuration */

#define NVMCTRL_SCFGAD_URWEN_Pos    0            /**< \brief (NVMCTRL_SCFGAD) User Row Write Enable */
#define NVMCTRL_SCFGAD_URWEN        (_U_(0x1) << NVMCTRL_SCFGAD_URWEN_Pos)
#define NVMCTRL_SCFGAD_MASK         _U_(0x00000001) /**< \brief (NVMCTRL_SCFGAD) MASK Register */

/* -------- NVMCTRL_NONSEC : (NVMCTRL Offset: 0x40) (R/W 32) Non-secure Write Enable -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WRITE:1;          /*!< bit:      0  Non-secure APB alias write enable, non-secure AHB writes to non-secure regions enable */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} NVMCTRL_NONSEC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_NONSEC_OFFSET       0x40         /**< \brief (NVMCTRL_NONSEC offset) Non-secure Write Enable */
#define NVMCTRL_NONSEC_RESETVALUE   _U_(0x00000001) /**< \brief (NVMCTRL_NONSEC reset_value) Non-secure Write Enable */

#define NVMCTRL_NONSEC_WRITE_Pos    0            /**< \brief (NVMCTRL_NONSEC) Non-secure APB alias write enable, non-secure AHB writes to non-secure regions enable */
#define NVMCTRL_NONSEC_WRITE        (_U_(0x1) << NVMCTRL_NONSEC_WRITE_Pos)
#define NVMCTRL_NONSEC_MASK         _U_(0x00000001) /**< \brief (NVMCTRL_NONSEC) MASK Register */

/* -------- NVMCTRL_NSCHK : (NVMCTRL Offset: 0x44) (R/W 32) Non-secure Write Reference Value -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WRITE:1;          /*!< bit:      0  Reference value to be checked against NONSEC.WRITE */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} NVMCTRL_NSCHK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define NVMCTRL_NSCHK_OFFSET        0x44         /**< \brief (NVMCTRL_NSCHK offset) Non-secure Write Reference Value */
#define NVMCTRL_NSCHK_RESETVALUE    _U_(0x00000001) /**< \brief (NVMCTRL_NSCHK reset_value) Non-secure Write Reference Value */

#define NVMCTRL_NSCHK_WRITE_Pos     0            /**< \brief (NVMCTRL_NSCHK) Reference value to be checked against NONSEC.WRITE */
#define NVMCTRL_NSCHK_WRITE         (_U_(0x1) << NVMCTRL_NSCHK_WRITE_Pos)
#define NVMCTRL_NSCHK_MASK          _U_(0x00000001) /**< \brief (NVMCTRL_NSCHK) MASK Register */

/** \brief NVMCTRL APB hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  NVMCTRL_CTRLA_Type        CTRLA;       /**< \brief Offset: 0x00 ( /W 16) Control A */
       RoReg8                    Reserved1[0x2];
  __IO NVMCTRL_CTRLB_Type        CTRLB;       /**< \brief Offset: 0x04 (R/W 32) Control B */
  __IO NVMCTRL_CTRLC_Type        CTRLC;       /**< \brief Offset: 0x08 (R/W  8) Control C */
       RoReg8                    Reserved2[0x1];
  __IO NVMCTRL_EVCTRL_Type       EVCTRL;      /**< \brief Offset: 0x0A (R/W  8) Event Control */
       RoReg8                    Reserved3[0x1];
  __IO NVMCTRL_INTENCLR_Type     INTENCLR;    /**< \brief Offset: 0x0C (R/W  8) Interrupt Enable Clear */
       RoReg8                    Reserved4[0x3];
  __IO NVMCTRL_INTENSET_Type     INTENSET;    /**< \brief Offset: 0x10 (R/W  8) Interrupt Enable Set */
       RoReg8                    Reserved5[0x3];
  __IO NVMCTRL_INTFLAG_Type      INTFLAG;     /**< \brief Offset: 0x14 (R/W  8) Interrupt Flag Status and Clear */
       RoReg8                    Reserved6[0x3];
  __I  NVMCTRL_STATUS_Type       STATUS;      /**< \brief Offset: 0x18 (R/  16) Status */
       RoReg8                    Reserved7[0x2];
  __IO NVMCTRL_ADDR_Type         ADDR;        /**< \brief Offset: 0x1C (R/W 32) Address */
  __IO NVMCTRL_SULCK_Type        SULCK;       /**< \brief Offset: 0x20 (R/W 16) Secure Unlock Register */
  __IO NVMCTRL_NSULCK_Type       NSULCK;      /**< \brief Offset: 0x22 (R/W 16) Non-Secure Unlock Register */
  __IO NVMCTRL_PARAM_Type        PARAM;       /**< \brief Offset: 0x24 (R/W 32) NVM Parameter */
       RoReg8                    Reserved8[0x8];
  __O  NVMCTRL_DSCC_Type         DSCC;        /**< \brief Offset: 0x30 ( /W 32) Data Scramble Configuration */
  __IO NVMCTRL_SECCTRL_Type      SECCTRL;     /**< \brief Offset: 0x34 (R/W 32) Security Control */
  __IO NVMCTRL_SCFGB_Type        SCFGB;       /**< \brief Offset: 0x38 (R/W 32) Secure Boot Configuration */
  __IO NVMCTRL_SCFGAD_Type       SCFGAD;      /**< \brief Offset: 0x3C (R/W 32) Secure Application and Data Configuration */
  __IO NVMCTRL_NONSEC_Type       NONSEC;      /**< \brief Offset: 0x40 (R/W 32) Non-secure Write Enable */
  __IO NVMCTRL_NSCHK_Type        NSCHK;       /**< \brief Offset: 0x44 (R/W 32) Non-secure Write Reference Value */
} Nvmctrl;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#ifdef __GNUC__
 #define SECTION_NVMCTRL_AUX0         __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_AUX0         @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_AUX1         __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_AUX1         @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_AUX1_4       __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_AUX1_4       @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_AUX1_5       __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_AUX1_5       @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_AUX1_6       __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_AUX1_6       @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_AUX1_7       __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_AUX1_7       @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_AUX1_8       __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_AUX1_8       @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_AUX2         __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_AUX2         @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_AUX3         __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_AUX3         @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_AUX4         __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_AUX4         @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_AUX5         __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_AUX5         @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_BOCOR        __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_BOCOR        @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_BOCOR1       __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_BOCOR1       @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_CAL          __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_CAL          @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_DATAFLASH    __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_DATAFLASH    @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_LOCKROW      __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_LOCKROW      @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_OTP1         __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_OTP1         @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_OTP2         __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_OTP2         @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_OTP3         __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_OTP3         @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_OTP4         __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_OTP4         @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_ROM          __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_ROM          @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_SHADOW       __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_SHADOW       @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_SW_CALIB     __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_SW_CALIB     @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_TEMP_LOG     __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_TEMP_LOG     @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_TLATCH       __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_TLATCH       @".flash"
#endif

#ifdef __GNUC__
 #define SECTION_NVMCTRL_USER         __attribute__ ((section(".flash")))
#elif defined(__ICCARM__)
 #define SECTION_NVMCTRL_USER         @".flash"
#endif

/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR NON-VOLATILE FUSES */
/* ************************************************************************** */
/** \addtogroup fuses_api Peripheral Software API */
/*@{*/


#define ADC_FUSES_BIASCOMP_ADDR     NVMCTRL_SW_CALIB
#define ADC_FUSES_BIASCOMP_Pos      3            /**< \brief (NVMCTRL_SW_CALIB) ADC Comparator Scaling */
#define ADC_FUSES_BIASCOMP_Msk      (_U_(0x7) << ADC_FUSES_BIASCOMP_Pos)
#define ADC_FUSES_BIASCOMP(value)   (ADC_FUSES_BIASCOMP_Msk & ((value) << ADC_FUSES_BIASCOMP_Pos))

#define ADC_FUSES_BIASREFBUF_ADDR   NVMCTRL_SW_CALIB
#define ADC_FUSES_BIASREFBUF_Pos    0            /**< \brief (NVMCTRL_SW_CALIB) ADC Bias Reference Buffer Scaling */
#define ADC_FUSES_BIASREFBUF_Msk    (_U_(0x7) << ADC_FUSES_BIASREFBUF_Pos)
#define ADC_FUSES_BIASREFBUF(value) (ADC_FUSES_BIASREFBUF_Msk & ((value) << ADC_FUSES_BIASREFBUF_Pos))

#define FUSES_BOD33USERLEVEL_ADDR   NVMCTRL_USER
#define FUSES_BOD33USERLEVEL_Pos    7            /**< \brief (NVMCTRL_USER) BOD33 User Level */
#define FUSES_BOD33USERLEVEL_Msk    (_U_(0x3F) << FUSES_BOD33USERLEVEL_Pos)
#define FUSES_BOD33USERLEVEL(value) (FUSES_BOD33USERLEVEL_Msk & ((value) << FUSES_BOD33USERLEVEL_Pos))

#define FUSES_BOD33_ACTION_ADDR     NVMCTRL_USER
#define FUSES_BOD33_ACTION_Pos      14           /**< \brief (NVMCTRL_USER) BOD33 Action */
#define FUSES_BOD33_ACTION_Msk      (_U_(0x3) << FUSES_BOD33_ACTION_Pos)
#define FUSES_BOD33_ACTION(value)   (FUSES_BOD33_ACTION_Msk & ((value) << FUSES_BOD33_ACTION_Pos))

#define FUSES_BOD33_DIS_ADDR        NVMCTRL_USER
#define FUSES_BOD33_DIS_Pos         13           /**< \brief (NVMCTRL_USER) BOD33 Disable */
#define FUSES_BOD33_DIS_Msk         (_U_(0x1) << FUSES_BOD33_DIS_Pos)

#define FUSES_BOD33_HYST_ADDR       (NVMCTRL_USER + 4)
#define FUSES_BOD33_HYST_Pos        9            /**< \brief (NVMCTRL_USER) BOD33 Hysteresis */
#define FUSES_BOD33_HYST_Msk        (_U_(0x1) << FUSES_BOD33_HYST_Pos)

#define FUSES_BOOTROM_BOCORCRC_ADDR (NVMCTRL_BOCOR + 8)
#define FUSES_BOOTROM_BOCORCRC_Pos  0            /**< \brief (NVMCTRL_BOCOR) CRC for BOCOR0 DWORD */
#define FUSES_BOOTROM_BOCORCRC_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOCORCRC_Pos)
#define FUSES_BOOTROM_BOCORCRC(value) (FUSES_BOOTROM_BOCORCRC_Msk & ((value) << FUSES_BOOTROM_BOCORCRC_Pos))

#define FUSES_BOOTROM_BOCORHASH_0_ADDR (NVMCTRL_BOCOR + 224)
#define FUSES_BOOTROM_BOCORHASH_0_Pos 0            /**< \brief (NVMCTRL_BOCOR) Boot Configuration Row Hash bits 31:0 */
#define FUSES_BOOTROM_BOCORHASH_0_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOCORHASH_0_Pos)
#define FUSES_BOOTROM_BOCORHASH_0(value) (FUSES_BOOTROM_BOCORHASH_0_Msk & ((value) << FUSES_BOOTROM_BOCORHASH_0_Pos))

#define FUSES_BOOTROM_BOCORHASH_1_ADDR (NVMCTRL_BOCOR + 228)
#define FUSES_BOOTROM_BOCORHASH_1_Pos 0            /**< \brief (NVMCTRL_BOCOR) Boot Configuration Row Hash bits 63:32 */
#define FUSES_BOOTROM_BOCORHASH_1_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOCORHASH_1_Pos)
#define FUSES_BOOTROM_BOCORHASH_1(value) (FUSES_BOOTROM_BOCORHASH_1_Msk & ((value) << FUSES_BOOTROM_BOCORHASH_1_Pos))

#define FUSES_BOOTROM_BOCORHASH_2_ADDR (NVMCTRL_BOCOR + 232)
#define FUSES_BOOTROM_BOCORHASH_2_Pos 0            /**< \brief (NVMCTRL_BOCOR) Boot Configuration Row Hash bits 95:64 */
#define FUSES_BOOTROM_BOCORHASH_2_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOCORHASH_2_Pos)
#define FUSES_BOOTROM_BOCORHASH_2(value) (FUSES_BOOTROM_BOCORHASH_2_Msk & ((value) << FUSES_BOOTROM_BOCORHASH_2_Pos))

#define FUSES_BOOTROM_BOCORHASH_3_ADDR (NVMCTRL_BOCOR + 236)
#define FUSES_BOOTROM_BOCORHASH_3_Pos 0            /**< \brief (NVMCTRL_BOCOR) Boot Configuration Row Hash bits 127:96 */
#define FUSES_BOOTROM_BOCORHASH_3_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOCORHASH_3_Pos)
#define FUSES_BOOTROM_BOCORHASH_3(value) (FUSES_BOOTROM_BOCORHASH_3_Msk & ((value) << FUSES_BOOTROM_BOCORHASH_3_Pos))

#define FUSES_BOOTROM_BOCORHASH_4_ADDR (NVMCTRL_BOCOR + 240)
#define FUSES_BOOTROM_BOCORHASH_4_Pos 0            /**< \brief (NVMCTRL_BOCOR) Boot Configuration Row Hash bits 159:128 */
#define FUSES_BOOTROM_BOCORHASH_4_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOCORHASH_4_Pos)
#define FUSES_BOOTROM_BOCORHASH_4(value) (FUSES_BOOTROM_BOCORHASH_4_Msk & ((value) << FUSES_BOOTROM_BOCORHASH_4_Pos))

#define FUSES_BOOTROM_BOCORHASH_5_ADDR (NVMCTRL_BOCOR + 244)
#define FUSES_BOOTROM_BOCORHASH_5_Pos 0            /**< \brief (NVMCTRL_BOCOR) Boot Configuration Row Hash bits 191:160 */
#define FUSES_BOOTROM_BOCORHASH_5_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOCORHASH_5_Pos)
#define FUSES_BOOTROM_BOCORHASH_5(value) (FUSES_BOOTROM_BOCORHASH_5_Msk & ((value) << FUSES_BOOTROM_BOCORHASH_5_Pos))

#define FUSES_BOOTROM_BOCORHASH_6_ADDR (NVMCTRL_BOCOR + 248)
#define FUSES_BOOTROM_BOCORHASH_6_Pos 0            /**< \brief (NVMCTRL_BOCOR) Boot Configuration Row Hash bits 223:192 */
#define FUSES_BOOTROM_BOCORHASH_6_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOCORHASH_6_Pos)
#define FUSES_BOOTROM_BOCORHASH_6(value) (FUSES_BOOTROM_BOCORHASH_6_Msk & ((value) << FUSES_BOOTROM_BOCORHASH_6_Pos))

#define FUSES_BOOTROM_BOCORHASH_7_ADDR (NVMCTRL_BOCOR + 252)
#define FUSES_BOOTROM_BOCORHASH_7_Pos 0            /**< \brief (NVMCTRL_BOCOR) Boot Configuration Row Hash bits 255:224 */
#define FUSES_BOOTROM_BOCORHASH_7_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOCORHASH_7_Pos)
#define FUSES_BOOTROM_BOCORHASH_7(value) (FUSES_BOOTROM_BOCORHASH_7_Msk & ((value) << FUSES_BOOTROM_BOCORHASH_7_Pos))

#define FUSES_BOOTROM_BOOTKEY_0_ADDR (NVMCTRL_BOCOR + 80)
#define FUSES_BOOTROM_BOOTKEY_0_Pos 0            /**< \brief (NVMCTRL_BOCOR) Secure Boot Key bits 31:0 */
#define FUSES_BOOTROM_BOOTKEY_0_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOOTKEY_0_Pos)
#define FUSES_BOOTROM_BOOTKEY_0(value) (FUSES_BOOTROM_BOOTKEY_0_Msk & ((value) << FUSES_BOOTROM_BOOTKEY_0_Pos))

#define FUSES_BOOTROM_BOOTKEY_1_ADDR (NVMCTRL_BOCOR + 84)
#define FUSES_BOOTROM_BOOTKEY_1_Pos 0            /**< \brief (NVMCTRL_BOCOR) Secure Boot Key bits 63:32 */
#define FUSES_BOOTROM_BOOTKEY_1_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOOTKEY_1_Pos)
#define FUSES_BOOTROM_BOOTKEY_1(value) (FUSES_BOOTROM_BOOTKEY_1_Msk & ((value) << FUSES_BOOTROM_BOOTKEY_1_Pos))

#define FUSES_BOOTROM_BOOTKEY_2_ADDR (NVMCTRL_BOCOR + 88)
#define FUSES_BOOTROM_BOOTKEY_2_Pos 0            /**< \brief (NVMCTRL_BOCOR) Secure Boot Key bits 95:64 */
#define FUSES_BOOTROM_BOOTKEY_2_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOOTKEY_2_Pos)
#define FUSES_BOOTROM_BOOTKEY_2(value) (FUSES_BOOTROM_BOOTKEY_2_Msk & ((value) << FUSES_BOOTROM_BOOTKEY_2_Pos))

#define FUSES_BOOTROM_BOOTKEY_3_ADDR (NVMCTRL_BOCOR + 92)
#define FUSES_BOOTROM_BOOTKEY_3_Pos 0            /**< \brief (NVMCTRL_BOCOR) Secure Boot Key bits 127:96 */
#define FUSES_BOOTROM_BOOTKEY_3_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOOTKEY_3_Pos)
#define FUSES_BOOTROM_BOOTKEY_3(value) (FUSES_BOOTROM_BOOTKEY_3_Msk & ((value) << FUSES_BOOTROM_BOOTKEY_3_Pos))

#define FUSES_BOOTROM_BOOTKEY_4_ADDR (NVMCTRL_BOCOR + 96)
#define FUSES_BOOTROM_BOOTKEY_4_Pos 0            /**< \brief (NVMCTRL_BOCOR) Secure Boot Key bits 159:128 */
#define FUSES_BOOTROM_BOOTKEY_4_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOOTKEY_4_Pos)
#define FUSES_BOOTROM_BOOTKEY_4(value) (FUSES_BOOTROM_BOOTKEY_4_Msk & ((value) << FUSES_BOOTROM_BOOTKEY_4_Pos))

#define FUSES_BOOTROM_BOOTKEY_5_ADDR (NVMCTRL_BOCOR + 100)
#define FUSES_BOOTROM_BOOTKEY_5_Pos 0            /**< \brief (NVMCTRL_BOCOR) Secure Boot Key bits 191:160 */
#define FUSES_BOOTROM_BOOTKEY_5_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOOTKEY_5_Pos)
#define FUSES_BOOTROM_BOOTKEY_5(value) (FUSES_BOOTROM_BOOTKEY_5_Msk & ((value) << FUSES_BOOTROM_BOOTKEY_5_Pos))

#define FUSES_BOOTROM_BOOTKEY_6_ADDR (NVMCTRL_BOCOR + 104)
#define FUSES_BOOTROM_BOOTKEY_6_Pos 0            /**< \brief (NVMCTRL_BOCOR) Secure Boot Key bits 223:192 */
#define FUSES_BOOTROM_BOOTKEY_6_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOOTKEY_6_Pos)
#define FUSES_BOOTROM_BOOTKEY_6(value) (FUSES_BOOTROM_BOOTKEY_6_Msk & ((value) << FUSES_BOOTROM_BOOTKEY_6_Pos))

#define FUSES_BOOTROM_BOOTKEY_7_ADDR (NVMCTRL_BOCOR + 108)
#define FUSES_BOOTROM_BOOTKEY_7_Pos 0            /**< \brief (NVMCTRL_BOCOR) Secure Boot Key bits 255:224 */
#define FUSES_BOOTROM_BOOTKEY_7_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_BOOTKEY_7_Pos)
#define FUSES_BOOTROM_BOOTKEY_7(value) (FUSES_BOOTROM_BOOTKEY_7_Msk & ((value) << FUSES_BOOTROM_BOOTKEY_7_Pos))

#define FUSES_BOOTROM_BOOTOPT_ADDR  NVMCTRL_BOCOR
#define FUSES_BOOTROM_BOOTOPT_Pos   24           /**< \brief (NVMCTRL_BOCOR) Boot Option */
#define FUSES_BOOTROM_BOOTOPT_Msk   (_U_(0xFF) << FUSES_BOOTROM_BOOTOPT_Pos)
#define FUSES_BOOTROM_BOOTOPT(value) (FUSES_BOOTROM_BOOTOPT_Msk & ((value) << FUSES_BOOTROM_BOOTOPT_Pos))

#define FUSES_BOOTROM_CEKEY0_0_ADDR (NVMCTRL_BOCOR + 16)
#define FUSES_BOOTROM_CEKEY0_0_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 0 bits 31:0 */
#define FUSES_BOOTROM_CEKEY0_0_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY0_0_Pos)
#define FUSES_BOOTROM_CEKEY0_0(value) (FUSES_BOOTROM_CEKEY0_0_Msk & ((value) << FUSES_BOOTROM_CEKEY0_0_Pos))

#define FUSES_BOOTROM_CEKEY0_1_ADDR (NVMCTRL_BOCOR + 20)
#define FUSES_BOOTROM_CEKEY0_1_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 0 bits 63:32 */
#define FUSES_BOOTROM_CEKEY0_1_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY0_1_Pos)
#define FUSES_BOOTROM_CEKEY0_1(value) (FUSES_BOOTROM_CEKEY0_1_Msk & ((value) << FUSES_BOOTROM_CEKEY0_1_Pos))

#define FUSES_BOOTROM_CEKEY0_2_ADDR (NVMCTRL_BOCOR + 24)
#define FUSES_BOOTROM_CEKEY0_2_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 0 bits 95:64 */
#define FUSES_BOOTROM_CEKEY0_2_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY0_2_Pos)
#define FUSES_BOOTROM_CEKEY0_2(value) (FUSES_BOOTROM_CEKEY0_2_Msk & ((value) << FUSES_BOOTROM_CEKEY0_2_Pos))

#define FUSES_BOOTROM_CEKEY0_3_ADDR (NVMCTRL_BOCOR + 28)
#define FUSES_BOOTROM_CEKEY0_3_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 0 bits 127:96 */
#define FUSES_BOOTROM_CEKEY0_3_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY0_3_Pos)
#define FUSES_BOOTROM_CEKEY0_3(value) (FUSES_BOOTROM_CEKEY0_3_Msk & ((value) << FUSES_BOOTROM_CEKEY0_3_Pos))

#define FUSES_BOOTROM_CEKEY1_0_ADDR (NVMCTRL_BOCOR + 32)
#define FUSES_BOOTROM_CEKEY1_0_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 1 bits 31:0 */
#define FUSES_BOOTROM_CEKEY1_0_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY1_0_Pos)
#define FUSES_BOOTROM_CEKEY1_0(value) (FUSES_BOOTROM_CEKEY1_0_Msk & ((value) << FUSES_BOOTROM_CEKEY1_0_Pos))

#define FUSES_BOOTROM_CEKEY1_1_ADDR (NVMCTRL_BOCOR + 36)
#define FUSES_BOOTROM_CEKEY1_1_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 1 bits 63:32 */
#define FUSES_BOOTROM_CEKEY1_1_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY1_1_Pos)
#define FUSES_BOOTROM_CEKEY1_1(value) (FUSES_BOOTROM_CEKEY1_1_Msk & ((value) << FUSES_BOOTROM_CEKEY1_1_Pos))

#define FUSES_BOOTROM_CEKEY1_2_ADDR (NVMCTRL_BOCOR + 40)
#define FUSES_BOOTROM_CEKEY1_2_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 1 bits 95:64 */
#define FUSES_BOOTROM_CEKEY1_2_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY1_2_Pos)
#define FUSES_BOOTROM_CEKEY1_2(value) (FUSES_BOOTROM_CEKEY1_2_Msk & ((value) << FUSES_BOOTROM_CEKEY1_2_Pos))

#define FUSES_BOOTROM_CEKEY1_3_ADDR (NVMCTRL_BOCOR + 44)
#define FUSES_BOOTROM_CEKEY1_3_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 1 bits 127:96 */
#define FUSES_BOOTROM_CEKEY1_3_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY1_3_Pos)
#define FUSES_BOOTROM_CEKEY1_3(value) (FUSES_BOOTROM_CEKEY1_3_Msk & ((value) << FUSES_BOOTROM_CEKEY1_3_Pos))

#define FUSES_BOOTROM_CEKEY2_0_ADDR (NVMCTRL_BOCOR + 48)
#define FUSES_BOOTROM_CEKEY2_0_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 2 bits 31:0 */
#define FUSES_BOOTROM_CEKEY2_0_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY2_0_Pos)
#define FUSES_BOOTROM_CEKEY2_0(value) (FUSES_BOOTROM_CEKEY2_0_Msk & ((value) << FUSES_BOOTROM_CEKEY2_0_Pos))

#define FUSES_BOOTROM_CEKEY2_1_ADDR (NVMCTRL_BOCOR + 52)
#define FUSES_BOOTROM_CEKEY2_1_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 2 bits 63:32 */
#define FUSES_BOOTROM_CEKEY2_1_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY2_1_Pos)
#define FUSES_BOOTROM_CEKEY2_1(value) (FUSES_BOOTROM_CEKEY2_1_Msk & ((value) << FUSES_BOOTROM_CEKEY2_1_Pos))

#define FUSES_BOOTROM_CEKEY2_2_ADDR (NVMCTRL_BOCOR + 56)
#define FUSES_BOOTROM_CEKEY2_2_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 2 bits 95:64 */
#define FUSES_BOOTROM_CEKEY2_2_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY2_2_Pos)
#define FUSES_BOOTROM_CEKEY2_2(value) (FUSES_BOOTROM_CEKEY2_2_Msk & ((value) << FUSES_BOOTROM_CEKEY2_2_Pos))

#define FUSES_BOOTROM_CEKEY2_3_ADDR (NVMCTRL_BOCOR + 60)
#define FUSES_BOOTROM_CEKEY2_3_Pos  0            /**< \brief (NVMCTRL_BOCOR) Chip Erase Key 2 bits 127:96 */
#define FUSES_BOOTROM_CEKEY2_3_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CEKEY2_3_Pos)
#define FUSES_BOOTROM_CEKEY2_3(value) (FUSES_BOOTROM_CEKEY2_3_Msk & ((value) << FUSES_BOOTROM_CEKEY2_3_Pos))

#define FUSES_BOOTROM_CRCKEY_0_ADDR (NVMCTRL_BOCOR + 64)
#define FUSES_BOOTROM_CRCKEY_0_Pos  0            /**< \brief (NVMCTRL_BOCOR) CRC Key bits 31:0 */
#define FUSES_BOOTROM_CRCKEY_0_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CRCKEY_0_Pos)
#define FUSES_BOOTROM_CRCKEY_0(value) (FUSES_BOOTROM_CRCKEY_0_Msk & ((value) << FUSES_BOOTROM_CRCKEY_0_Pos))

#define FUSES_BOOTROM_CRCKEY_1_ADDR (NVMCTRL_BOCOR + 68)
#define FUSES_BOOTROM_CRCKEY_1_Pos  0            /**< \brief (NVMCTRL_BOCOR) CRC Key bits 63:32 */
#define FUSES_BOOTROM_CRCKEY_1_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CRCKEY_1_Pos)
#define FUSES_BOOTROM_CRCKEY_1(value) (FUSES_BOOTROM_CRCKEY_1_Msk & ((value) << FUSES_BOOTROM_CRCKEY_1_Pos))

#define FUSES_BOOTROM_CRCKEY_2_ADDR (NVMCTRL_BOCOR + 72)
#define FUSES_BOOTROM_CRCKEY_2_Pos  0            /**< \brief (NVMCTRL_BOCOR) CRC Key bits 95:64 */
#define FUSES_BOOTROM_CRCKEY_2_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CRCKEY_2_Pos)
#define FUSES_BOOTROM_CRCKEY_2(value) (FUSES_BOOTROM_CRCKEY_2_Msk & ((value) << FUSES_BOOTROM_CRCKEY_2_Pos))

#define FUSES_BOOTROM_CRCKEY_3_ADDR (NVMCTRL_BOCOR + 76)
#define FUSES_BOOTROM_CRCKEY_3_Pos  0            /**< \brief (NVMCTRL_BOCOR) CRC Key bits 127:96 */
#define FUSES_BOOTROM_CRCKEY_3_Msk  (_U_(0xFFFFFFFF) << FUSES_BOOTROM_CRCKEY_3_Pos)
#define FUSES_BOOTROM_CRCKEY_3(value) (FUSES_BOOTROM_CRCKEY_3_Msk & ((value) << FUSES_BOOTROM_CRCKEY_3_Pos))

#define FUSES_BOOTROM_DXN_ADDR      (NVMCTRL_USER + 4)
#define FUSES_BOOTROM_DXN_Pos       12           /**< \brief (NVMCTRL_USER) DATA FLASH is eXecute Never */
#define FUSES_BOOTROM_DXN_Msk       (_U_(0x1) << FUSES_BOOTROM_DXN_Pos)

#define FUSES_BOOTROM_NONSECA_ADDR  (NVMCTRL_USER + 16)
#define FUSES_BOOTROM_NONSECA_Pos   0            /**< \brief (NVMCTRL_USER) NONSEC fuses for the bridgeA peripherals */
#define FUSES_BOOTROM_NONSECA_Msk   (_U_(0xFFFFFFFF) << FUSES_BOOTROM_NONSECA_Pos)
#define FUSES_BOOTROM_NONSECA(value) (FUSES_BOOTROM_NONSECA_Msk & ((value) << FUSES_BOOTROM_NONSECA_Pos))

#define FUSES_BOOTROM_NONSECB_ADDR  (NVMCTRL_USER + 20)
#define FUSES_BOOTROM_NONSECB_Pos   0            /**< \brief (NVMCTRL_USER) NONSEC fuses for the bridgeB peripherals */
#define FUSES_BOOTROM_NONSECB_Msk   (_U_(0xFFFFFFFF) << FUSES_BOOTROM_NONSECB_Pos)
#define FUSES_BOOTROM_NONSECB(value) (FUSES_BOOTROM_NONSECB_Msk & ((value) << FUSES_BOOTROM_NONSECB_Pos))

#define FUSES_BOOTROM_NONSECC_ADDR  (NVMCTRL_USER + 24)
#define FUSES_BOOTROM_NONSECC_Pos   0            /**< \brief (NVMCTRL_USER) NONSEC fuses for the bridgeC peripherals */
#define FUSES_BOOTROM_NONSECC_Msk   (_U_(0xFFFFFFFF) << FUSES_BOOTROM_NONSECC_Pos)
#define FUSES_BOOTROM_NONSECC(value) (FUSES_BOOTROM_NONSECC_Msk & ((value) << FUSES_BOOTROM_NONSECC_Pos))

#define FUSES_BOOTROM_ROMVERSION_ADDR (NVMCTRL_BOCOR + 12)
#define FUSES_BOOTROM_ROMVERSION_Pos 0            /**< \brief (NVMCTRL_BOCOR) BOOTROM Version */
#define FUSES_BOOTROM_ROMVERSION_Msk (_U_(0xFFFFFFFF) << FUSES_BOOTROM_ROMVERSION_Pos)
#define FUSES_BOOTROM_ROMVERSION(value) (FUSES_BOOTROM_ROMVERSION_Msk & ((value) << FUSES_BOOTROM_ROMVERSION_Pos))

#define FUSES_BOOTROM_RXN_ADDR      (NVMCTRL_USER + 4)
#define FUSES_BOOTROM_RXN_Pos       11           /**< \brief (NVMCTRL_USER) RAM is eXecute Never */
#define FUSES_BOOTROM_RXN_Msk       (_U_(0x1) << FUSES_BOOTROM_RXN_Pos)

#define FUSES_BOOTROM_USERCRC_ADDR  (NVMCTRL_USER + 28)
#define FUSES_BOOTROM_USERCRC_Pos   0            /**< \brief (NVMCTRL_USER) CRC for USER[1,2,3] DWORDS */
#define FUSES_BOOTROM_USERCRC_Msk   (_U_(0xFFFFFFFF) << FUSES_BOOTROM_USERCRC_Pos)
#define FUSES_BOOTROM_USERCRC(value) (FUSES_BOOTROM_USERCRC_Msk & ((value) << FUSES_BOOTROM_USERCRC_Pos))

#define FUSES_DFLLULP_DIV_PL0_ADDR  NVMCTRL_SW_CALIB
#define FUSES_DFLLULP_DIV_PL0_Pos   6            /**< \brief (NVMCTRL_SW_CALIB) DFLLULP DIV at PL0 */
#define FUSES_DFLLULP_DIV_PL0_Msk   (_U_(0x7) << FUSES_DFLLULP_DIV_PL0_Pos)
#define FUSES_DFLLULP_DIV_PL0(value) (FUSES_DFLLULP_DIV_PL0_Msk & ((value) << FUSES_DFLLULP_DIV_PL0_Pos))

#define FUSES_DFLLULP_DIV_PL2_ADDR  NVMCTRL_SW_CALIB
#define FUSES_DFLLULP_DIV_PL2_Pos   9            /**< \brief (NVMCTRL_SW_CALIB) DFLLULP DIV at PL2 */
#define FUSES_DFLLULP_DIV_PL2_Msk   (_U_(0x7) << FUSES_DFLLULP_DIV_PL2_Pos)
#define FUSES_DFLLULP_DIV_PL2(value) (FUSES_DFLLULP_DIV_PL2_Msk & ((value) << FUSES_DFLLULP_DIV_PL2_Pos))

#define FUSES_HOT_ADC_VAL_PTAT_ADDR (NVMCTRL_TEMP_LOG + 4)
#define FUSES_HOT_ADC_VAL_PTAT_Pos  20           /**< \brief (NVMCTRL_TEMP_LOG) 12-bit ADC conversion at hot temperature PTAT */
#define FUSES_HOT_ADC_VAL_PTAT_Msk  (_U_(0xFFF) << FUSES_HOT_ADC_VAL_PTAT_Pos)
#define FUSES_HOT_ADC_VAL_PTAT(value) (FUSES_HOT_ADC_VAL_PTAT_Msk & ((value) << FUSES_HOT_ADC_VAL_PTAT_Pos))

#define FUSES_HOT_INT1V_VAL_ADDR    (NVMCTRL_TEMP_LOG + 4)
#define FUSES_HOT_INT1V_VAL_Pos     0            /**< \brief (NVMCTRL_TEMP_LOG) 2's complement of the internal 1V reference drift at hot temperature (versus a 1.0 centered value) */
#define FUSES_HOT_INT1V_VAL_Msk     (_U_(0xFF) << FUSES_HOT_INT1V_VAL_Pos)
#define FUSES_HOT_INT1V_VAL(value)  (FUSES_HOT_INT1V_VAL_Msk & ((value) << FUSES_HOT_INT1V_VAL_Pos))

#define FUSES_HOT_TEMP_VAL_DEC_ADDR NVMCTRL_TEMP_LOG
#define FUSES_HOT_TEMP_VAL_DEC_Pos  20           /**< \brief (NVMCTRL_TEMP_LOG) Decimal part of hot temperature */
#define FUSES_HOT_TEMP_VAL_DEC_Msk  (_U_(0xF) << FUSES_HOT_TEMP_VAL_DEC_Pos)
#define FUSES_HOT_TEMP_VAL_DEC(value) (FUSES_HOT_TEMP_VAL_DEC_Msk & ((value) << FUSES_HOT_TEMP_VAL_DEC_Pos))

#define FUSES_HOT_TEMP_VAL_INT_ADDR NVMCTRL_TEMP_LOG
#define FUSES_HOT_TEMP_VAL_INT_Pos  12           /**< \brief (NVMCTRL_TEMP_LOG) Integer part of hot temperature in oC */
#define FUSES_HOT_TEMP_VAL_INT_Msk  (_U_(0xFF) << FUSES_HOT_TEMP_VAL_INT_Pos)
#define FUSES_HOT_TEMP_VAL_INT(value) (FUSES_HOT_TEMP_VAL_INT_Msk & ((value) << FUSES_HOT_TEMP_VAL_INT_Pos))

#define FUSES_ROOM_ADC_VAL_PTAT_ADDR (NVMCTRL_TEMP_LOG + 4)
#define FUSES_ROOM_ADC_VAL_PTAT_Pos 8            /**< \brief (NVMCTRL_TEMP_LOG) 12-bit ADC conversion at room temperature PTAT */
#define FUSES_ROOM_ADC_VAL_PTAT_Msk (_U_(0xFFF) << FUSES_ROOM_ADC_VAL_PTAT_Pos)
#define FUSES_ROOM_ADC_VAL_PTAT(value) (FUSES_ROOM_ADC_VAL_PTAT_Msk & ((value) << FUSES_ROOM_ADC_VAL_PTAT_Pos))

#define FUSES_ROOM_INT1V_VAL_ADDR   NVMCTRL_TEMP_LOG
#define FUSES_ROOM_INT1V_VAL_Pos    24           /**< \brief (NVMCTRL_TEMP_LOG) 2's complement of the internal 1V reference drift at room temperature (versus a 1.0 centered value) */
#define FUSES_ROOM_INT1V_VAL_Msk    (_U_(0xFF) << FUSES_ROOM_INT1V_VAL_Pos)
#define FUSES_ROOM_INT1V_VAL(value) (FUSES_ROOM_INT1V_VAL_Msk & ((value) << FUSES_ROOM_INT1V_VAL_Pos))

#define FUSES_ROOM_TEMP_VAL_DEC_ADDR NVMCTRL_TEMP_LOG
#define FUSES_ROOM_TEMP_VAL_DEC_Pos 8            /**< \brief (NVMCTRL_TEMP_LOG) Decimal part of room temperature */
#define FUSES_ROOM_TEMP_VAL_DEC_Msk (_U_(0xF) << FUSES_ROOM_TEMP_VAL_DEC_Pos)
#define FUSES_ROOM_TEMP_VAL_DEC(value) (FUSES_ROOM_TEMP_VAL_DEC_Msk & ((value) << FUSES_ROOM_TEMP_VAL_DEC_Pos))

#define FUSES_ROOM_TEMP_VAL_INT_ADDR NVMCTRL_TEMP_LOG
#define FUSES_ROOM_TEMP_VAL_INT_Pos 0            /**< \brief (NVMCTRL_TEMP_LOG) Integer part of room temperature in oC */
#define FUSES_ROOM_TEMP_VAL_INT_Msk (_U_(0xFF) << FUSES_ROOM_TEMP_VAL_INT_Pos)
#define FUSES_ROOM_TEMP_VAL_INT(value) (FUSES_ROOM_TEMP_VAL_INT_Msk & ((value) << FUSES_ROOM_TEMP_VAL_INT_Pos))

#define NVMCTRL_FUSES_BCREN_ADDR    (NVMCTRL_BOCOR + 4)
#define NVMCTRL_FUSES_BCREN_Pos     17           /**< \brief (NVMCTRL_BOCOR) Boot Configuration Read Enable */
#define NVMCTRL_FUSES_BCREN_Msk     (_U_(0x1) << NVMCTRL_FUSES_BCREN_Pos)

#define NVMCTRL_FUSES_BCWEN_ADDR    (NVMCTRL_BOCOR + 4)
#define NVMCTRL_FUSES_BCWEN_Pos     16           /**< \brief (NVMCTRL_BOCOR) Boot Configuration Write Enable */
#define NVMCTRL_FUSES_BCWEN_Msk     (_U_(0x1) << NVMCTRL_FUSES_BCWEN_Pos)

#define NVMCTRL_FUSES_NSULCK_ADDR   NVMCTRL_USER
#define NVMCTRL_FUSES_NSULCK_Pos    3            /**< \brief (NVMCTRL_USER) NVM Non-Secure Region Locks */
#define NVMCTRL_FUSES_NSULCK_Msk    (_U_(0x7) << NVMCTRL_FUSES_NSULCK_Pos)
#define NVMCTRL_FUSES_NSULCK(value) (NVMCTRL_FUSES_NSULCK_Msk & ((value) << NVMCTRL_FUSES_NSULCK_Pos))

#define NVMCTRL_FUSES_SULCK_ADDR    NVMCTRL_USER
#define NVMCTRL_FUSES_SULCK_Pos     0            /**< \brief (NVMCTRL_USER) NVM Secure Region Locks */
#define NVMCTRL_FUSES_SULCK_Msk     (_U_(0x7) << NVMCTRL_FUSES_SULCK_Pos)
#define NVMCTRL_FUSES_SULCK(value)  (NVMCTRL_FUSES_SULCK_Msk & ((value) << NVMCTRL_FUSES_SULCK_Pos))

#define NVMCTRL_FUSES_URWEN_ADDR    (NVMCTRL_USER + 12)
#define NVMCTRL_FUSES_URWEN_Pos     0            /**< \brief (NVMCTRL_USER) User Row Write Enable */
#define NVMCTRL_FUSES_URWEN_Msk     (_U_(0x1) << NVMCTRL_FUSES_URWEN_Pos)

#define WDT_FUSES_ALWAYSON_ADDR     NVMCTRL_USER
#define WDT_FUSES_ALWAYSON_Pos      27           /**< \brief (NVMCTRL_USER) WDT Always On */
#define WDT_FUSES_ALWAYSON_Msk      (_U_(0x1) << WDT_FUSES_ALWAYSON_Pos)

#define WDT_FUSES_ENABLE_ADDR       NVMCTRL_USER
#define WDT_FUSES_ENABLE_Pos        26           /**< \brief (NVMCTRL_USER) WDT Enable */
#define WDT_FUSES_ENABLE_Msk        (_U_(0x1) << WDT_FUSES_ENABLE_Pos)

#define WDT_FUSES_EWOFFSET_ADDR     (NVMCTRL_USER + 4)
#define WDT_FUSES_EWOFFSET_Pos      4            /**< \brief (NVMCTRL_USER) WDT Early Warning Offset */
#define WDT_FUSES_EWOFFSET_Msk      (_U_(0xF) << WDT_FUSES_EWOFFSET_Pos)
#define WDT_FUSES_EWOFFSET(value)   (WDT_FUSES_EWOFFSET_Msk & ((value) << WDT_FUSES_EWOFFSET_Pos))

#define WDT_FUSES_PER_ADDR          NVMCTRL_USER
#define WDT_FUSES_PER_Pos           28           /**< \brief (NVMCTRL_USER) WDT Period */
#define WDT_FUSES_PER_Msk           (_U_(0xF) << WDT_FUSES_PER_Pos)
#define WDT_FUSES_PER(value)        (WDT_FUSES_PER_Msk & ((value) << WDT_FUSES_PER_Pos))

#define WDT_FUSES_RUNSTDBY_ADDR     NVMCTRL_USER
#define WDT_FUSES_RUNSTDBY_Pos      25           /**< \brief (NVMCTRL_USER) WDT Run During Standby */
#define WDT_FUSES_RUNSTDBY_Msk      (_U_(0x1) << WDT_FUSES_RUNSTDBY_Pos)

#define WDT_FUSES_WEN_ADDR          (NVMCTRL_USER + 4)
#define WDT_FUSES_WEN_Pos           8            /**< \brief (NVMCTRL_USER) WDT Window Mode Enable */
#define WDT_FUSES_WEN_Msk           (_U_(0x1) << WDT_FUSES_WEN_Pos)

#define WDT_FUSES_WINDOW_ADDR       (NVMCTRL_USER + 4)
#define WDT_FUSES_WINDOW_Pos        0            /**< \brief (NVMCTRL_USER) WDT Window */
#define WDT_FUSES_WINDOW_Msk        (_U_(0xF) << WDT_FUSES_WINDOW_Pos)
#define WDT_FUSES_WINDOW(value)     (WDT_FUSES_WINDOW_Msk & ((value) << WDT_FUSES_WINDOW_Pos))

/*@}*/

#endif /* _SAML11_NVMCTRL_COMPONENT_ */
