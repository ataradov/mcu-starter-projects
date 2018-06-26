/**
 * \file
 *
 * \brief Component description for TRAM
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

#ifndef _SAML11_TRAM_COMPONENT_
#define _SAML11_TRAM_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TRAM */
/* ========================================================================== */
/** \addtogroup SAML11_TRAM TrustRAM */
/*@{*/

#define TRAM_U2801
#define REV_TRAM                    0x100

/* -------- TRAM_CTRLA : (TRAM Offset: 0x000) (R/W  8) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint8_t  ENABLE:1;         /*!< bit:      1  Enable                             */
    uint8_t  :2;               /*!< bit:  2.. 3  Reserved                           */
    uint8_t  TAMPERS:1;        /*!< bit:      4  Tamper Erase                       */
    uint8_t  :1;               /*!< bit:      5  Reserved                           */
    uint8_t  DRP:1;            /*!< bit:      6  Data Remanence Prevention          */
    uint8_t  SILACC:1;         /*!< bit:      7  Silent Access                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TRAM_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRAM_CTRLA_OFFSET           0x000        /**< \brief (TRAM_CTRLA offset) Control */
#define TRAM_CTRLA_RESETVALUE       _U_(0x00)    /**< \brief (TRAM_CTRLA reset_value) Control */

#define TRAM_CTRLA_SWRST_Pos        0            /**< \brief (TRAM_CTRLA) Software Reset */
#define TRAM_CTRLA_SWRST            (_U_(0x1) << TRAM_CTRLA_SWRST_Pos)
#define TRAM_CTRLA_ENABLE_Pos       1            /**< \brief (TRAM_CTRLA) Enable */
#define TRAM_CTRLA_ENABLE           (_U_(0x1) << TRAM_CTRLA_ENABLE_Pos)
#define TRAM_CTRLA_TAMPERS_Pos      4            /**< \brief (TRAM_CTRLA) Tamper Erase */
#define TRAM_CTRLA_TAMPERS          (_U_(0x1) << TRAM_CTRLA_TAMPERS_Pos)
#define TRAM_CTRLA_DRP_Pos          6            /**< \brief (TRAM_CTRLA) Data Remanence Prevention */
#define TRAM_CTRLA_DRP              (_U_(0x1) << TRAM_CTRLA_DRP_Pos)
#define TRAM_CTRLA_SILACC_Pos       7            /**< \brief (TRAM_CTRLA) Silent Access */
#define TRAM_CTRLA_SILACC           (_U_(0x1) << TRAM_CTRLA_SILACC_Pos)
#define TRAM_CTRLA_MASK             _U_(0xD3)    /**< \brief (TRAM_CTRLA) MASK Register */

/* -------- TRAM_INTENCLR : (TRAM Offset: 0x004) (R/W  8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  ERR:1;            /*!< bit:      0  TrustRAM Readout Error Interrupt Enable */
    uint8_t  DRP:1;            /*!< bit:      1  Data Remanence Prevention Ended Interrupt Enable */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TRAM_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRAM_INTENCLR_OFFSET        0x004        /**< \brief (TRAM_INTENCLR offset) Interrupt Enable Clear */
#define TRAM_INTENCLR_RESETVALUE    _U_(0x00)    /**< \brief (TRAM_INTENCLR reset_value) Interrupt Enable Clear */

#define TRAM_INTENCLR_ERR_Pos       0            /**< \brief (TRAM_INTENCLR) TrustRAM Readout Error Interrupt Enable */
#define TRAM_INTENCLR_ERR           (_U_(0x1) << TRAM_INTENCLR_ERR_Pos)
#define TRAM_INTENCLR_DRP_Pos       1            /**< \brief (TRAM_INTENCLR) Data Remanence Prevention Ended Interrupt Enable */
#define TRAM_INTENCLR_DRP           (_U_(0x1) << TRAM_INTENCLR_DRP_Pos)
#define TRAM_INTENCLR_MASK          _U_(0x03)    /**< \brief (TRAM_INTENCLR) MASK Register */

/* -------- TRAM_INTENSET : (TRAM Offset: 0x005) (R/W  8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  ERR:1;            /*!< bit:      0  TrustRAM Readout Error Interrupt Enable */
    uint8_t  DRP:1;            /*!< bit:      1  Data Remanence Prevention Ended Interrupt Enable */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TRAM_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRAM_INTENSET_OFFSET        0x005        /**< \brief (TRAM_INTENSET offset) Interrupt Enable Set */
#define TRAM_INTENSET_RESETVALUE    _U_(0x00)    /**< \brief (TRAM_INTENSET reset_value) Interrupt Enable Set */

#define TRAM_INTENSET_ERR_Pos       0            /**< \brief (TRAM_INTENSET) TrustRAM Readout Error Interrupt Enable */
#define TRAM_INTENSET_ERR           (_U_(0x1) << TRAM_INTENSET_ERR_Pos)
#define TRAM_INTENSET_DRP_Pos       1            /**< \brief (TRAM_INTENSET) Data Remanence Prevention Ended Interrupt Enable */
#define TRAM_INTENSET_DRP           (_U_(0x1) << TRAM_INTENSET_DRP_Pos)
#define TRAM_INTENSET_MASK          _U_(0x03)    /**< \brief (TRAM_INTENSET) MASK Register */

/* -------- TRAM_INTFLAG : (TRAM Offset: 0x006) (R/W  8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  ERR:1;            /*!< bit:      0  TrustRAM Readout Error             */
    __I uint8_t  DRP:1;            /*!< bit:      1  Data Remanence Prevention Ended    */
    __I uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TRAM_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRAM_INTFLAG_OFFSET         0x006        /**< \brief (TRAM_INTFLAG offset) Interrupt Flag Status and Clear */
#define TRAM_INTFLAG_RESETVALUE     _U_(0x00)    /**< \brief (TRAM_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define TRAM_INTFLAG_ERR_Pos        0            /**< \brief (TRAM_INTFLAG) TrustRAM Readout Error */
#define TRAM_INTFLAG_ERR            (_U_(0x1) << TRAM_INTFLAG_ERR_Pos)
#define TRAM_INTFLAG_DRP_Pos        1            /**< \brief (TRAM_INTFLAG) Data Remanence Prevention Ended */
#define TRAM_INTFLAG_DRP            (_U_(0x1) << TRAM_INTFLAG_DRP_Pos)
#define TRAM_INTFLAG_MASK           _U_(0x03)    /**< \brief (TRAM_INTFLAG) MASK Register */

/* -------- TRAM_STATUS : (TRAM Offset: 0x007) (R/   8) Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  RAMINV:1;         /*!< bit:      0  RAM Inversion Bit                  */
    uint8_t  DRP:1;            /*!< bit:      1  Data Remanence Prevention Ongoing  */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TRAM_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRAM_STATUS_OFFSET          0x007        /**< \brief (TRAM_STATUS offset) Status */
#define TRAM_STATUS_RESETVALUE      _U_(0x00)    /**< \brief (TRAM_STATUS reset_value) Status */

#define TRAM_STATUS_RAMINV_Pos      0            /**< \brief (TRAM_STATUS) RAM Inversion Bit */
#define TRAM_STATUS_RAMINV          (_U_(0x1) << TRAM_STATUS_RAMINV_Pos)
#define TRAM_STATUS_DRP_Pos         1            /**< \brief (TRAM_STATUS) Data Remanence Prevention Ongoing */
#define TRAM_STATUS_DRP             (_U_(0x1) << TRAM_STATUS_DRP_Pos)
#define TRAM_STATUS_MASK            _U_(0x03)    /**< \brief (TRAM_STATUS) MASK Register */

/* -------- TRAM_SYNCBUSY : (TRAM Offset: 0x008) (R/  32) Synchronization Busy Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset Busy                */
    uint32_t ENABLE:1;         /*!< bit:      1  Enable Busy                        */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TRAM_SYNCBUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRAM_SYNCBUSY_OFFSET        0x008        /**< \brief (TRAM_SYNCBUSY offset) Synchronization Busy Status */
#define TRAM_SYNCBUSY_RESETVALUE    _U_(0x00000000) /**< \brief (TRAM_SYNCBUSY reset_value) Synchronization Busy Status */

#define TRAM_SYNCBUSY_SWRST_Pos     0            /**< \brief (TRAM_SYNCBUSY) Software Reset Busy */
#define TRAM_SYNCBUSY_SWRST         (_U_(0x1) << TRAM_SYNCBUSY_SWRST_Pos)
#define TRAM_SYNCBUSY_ENABLE_Pos    1            /**< \brief (TRAM_SYNCBUSY) Enable Busy */
#define TRAM_SYNCBUSY_ENABLE        (_U_(0x1) << TRAM_SYNCBUSY_ENABLE_Pos)
#define TRAM_SYNCBUSY_MASK          _U_(0x00000003) /**< \brief (TRAM_SYNCBUSY) MASK Register */

/* -------- TRAM_DSCC : (TRAM Offset: 0x00C) ( /W 32) Data Scramble Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DSCKEY:30;        /*!< bit:  0..29  Data Scramble Key                  */
    uint32_t :1;               /*!< bit:     30  Reserved                           */
    uint32_t DSCEN:1;          /*!< bit:     31  Data Scramble Enable               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TRAM_DSCC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRAM_DSCC_OFFSET            0x00C        /**< \brief (TRAM_DSCC offset) Data Scramble Control */
#define TRAM_DSCC_RESETVALUE        _U_(0x00000000) /**< \brief (TRAM_DSCC reset_value) Data Scramble Control */

#define TRAM_DSCC_DSCKEY_Pos        0            /**< \brief (TRAM_DSCC) Data Scramble Key */
#define TRAM_DSCC_DSCKEY_Msk        (_U_(0x3FFFFFFF) << TRAM_DSCC_DSCKEY_Pos)
#define TRAM_DSCC_DSCKEY(value)     (TRAM_DSCC_DSCKEY_Msk & ((value) << TRAM_DSCC_DSCKEY_Pos))
#define TRAM_DSCC_DSCEN_Pos         31           /**< \brief (TRAM_DSCC) Data Scramble Enable */
#define TRAM_DSCC_DSCEN             (_U_(0x1) << TRAM_DSCC_DSCEN_Pos)
#define TRAM_DSCC_MASK              _U_(0xBFFFFFFF) /**< \brief (TRAM_DSCC) MASK Register */

/* -------- TRAM_PERMW : (TRAM Offset: 0x010) ( /W  8) Permutation Write -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DATA:3;           /*!< bit:  0.. 2  Permutation Scrambler Data Input   */
    uint8_t  :5;               /*!< bit:  3.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TRAM_PERMW_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRAM_PERMW_OFFSET           0x010        /**< \brief (TRAM_PERMW offset) Permutation Write */
#define TRAM_PERMW_RESETVALUE       _U_(0x00)    /**< \brief (TRAM_PERMW reset_value) Permutation Write */

#define TRAM_PERMW_DATA_Pos         0            /**< \brief (TRAM_PERMW) Permutation Scrambler Data Input */
#define TRAM_PERMW_DATA_Msk         (_U_(0x7) << TRAM_PERMW_DATA_Pos)
#define TRAM_PERMW_DATA(value)      (TRAM_PERMW_DATA_Msk & ((value) << TRAM_PERMW_DATA_Pos))
#define TRAM_PERMW_MASK             _U_(0x07)    /**< \brief (TRAM_PERMW) MASK Register */

/* -------- TRAM_PERMR : (TRAM Offset: 0x011) (R/   8) Permutation Read -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  DATA:3;           /*!< bit:  0.. 2  Permutation Scrambler Data Output  */
    uint8_t  :5;               /*!< bit:  3.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} TRAM_PERMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRAM_PERMR_OFFSET           0x011        /**< \brief (TRAM_PERMR offset) Permutation Read */
#define TRAM_PERMR_RESETVALUE       _U_(0x00)    /**< \brief (TRAM_PERMR reset_value) Permutation Read */

#define TRAM_PERMR_DATA_Pos         0            /**< \brief (TRAM_PERMR) Permutation Scrambler Data Output */
#define TRAM_PERMR_DATA_Msk         (_U_(0x7) << TRAM_PERMR_DATA_Pos)
#define TRAM_PERMR_DATA(value)      (TRAM_PERMR_DATA_Msk & ((value) << TRAM_PERMR_DATA_Pos))
#define TRAM_PERMR_MASK             _U_(0x07)    /**< \brief (TRAM_PERMR) MASK Register */

/* -------- TRAM_RAM : (TRAM Offset: 0x100) (R/W 32) TrustRAM -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Trust RAM Data                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TRAM_RAM_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRAM_RAM_OFFSET             0x100        /**< \brief (TRAM_RAM offset) TrustRAM */
#define TRAM_RAM_RESETVALUE         _U_(0x00000000) /**< \brief (TRAM_RAM reset_value) TrustRAM */

#define TRAM_RAM_DATA_Pos           0            /**< \brief (TRAM_RAM) Trust RAM Data */
#define TRAM_RAM_DATA_Msk           (_U_(0xFFFFFFFF) << TRAM_RAM_DATA_Pos)
#define TRAM_RAM_DATA(value)        (TRAM_RAM_DATA_Msk & ((value) << TRAM_RAM_DATA_Pos))
#define TRAM_RAM_MASK               _U_(0xFFFFFFFF) /**< \brief (TRAM_RAM) MASK Register */

/** \brief TRAM hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO TRAM_CTRLA_Type           CTRLA;       /**< \brief Offset: 0x000 (R/W  8) Control */
       RoReg8                    Reserved1[0x3];
  __IO TRAM_INTENCLR_Type        INTENCLR;    /**< \brief Offset: 0x004 (R/W  8) Interrupt Enable Clear */
  __IO TRAM_INTENSET_Type        INTENSET;    /**< \brief Offset: 0x005 (R/W  8) Interrupt Enable Set */
  __IO TRAM_INTFLAG_Type         INTFLAG;     /**< \brief Offset: 0x006 (R/W  8) Interrupt Flag Status and Clear */
  __I  TRAM_STATUS_Type          STATUS;      /**< \brief Offset: 0x007 (R/   8) Status */
  __I  TRAM_SYNCBUSY_Type        SYNCBUSY;    /**< \brief Offset: 0x008 (R/  32) Synchronization Busy Status */
  __O  TRAM_DSCC_Type            DSCC;        /**< \brief Offset: 0x00C ( /W 32) Data Scramble Control */
  __O  TRAM_PERMW_Type           PERMW;       /**< \brief Offset: 0x010 ( /W  8) Permutation Write */
  __I  TRAM_PERMR_Type           PERMR;       /**< \brief Offset: 0x011 (R/   8) Permutation Read */
       RoReg8                    Reserved2[0xEE];
  __IO TRAM_RAM_Type             RAM[64];     /**< \brief Offset: 0x100 (R/W 32) TrustRAM */
} Tram;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML11_TRAM_COMPONENT_ */
