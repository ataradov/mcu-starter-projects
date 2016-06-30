/**
 * \file
 *
 * \brief Component description for DIVAS
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMC21_DIVAS_COMPONENT_
#define _SAMC21_DIVAS_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR DIVAS */
/* ========================================================================== */
/** \addtogroup SAMC21_DIVAS Divide and Square Root Accelerator */
/*@{*/

#define DIVAS_U2258
#define REV_DIVAS                   0x100

/* -------- DIVAS_CTRLA : (DIVAS Offset: 0x00) (R/W  8) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SIGNED:1;         /*!< bit:      0  Signed                             */
    uint8_t  DLZ:1;            /*!< bit:      1  Disable Leading Zero Optimization  */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} DIVAS_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DIVAS_CTRLA_OFFSET          0x00         /**< \brief (DIVAS_CTRLA offset) Control */
#define DIVAS_CTRLA_RESETVALUE      0x00ul       /**< \brief (DIVAS_CTRLA reset_value) Control */

#define DIVAS_CTRLA_SIGNED_Pos      0            /**< \brief (DIVAS_CTRLA) Signed */
#define DIVAS_CTRLA_SIGNED          (0x1ul << DIVAS_CTRLA_SIGNED_Pos)
#define DIVAS_CTRLA_DLZ_Pos         1            /**< \brief (DIVAS_CTRLA) Disable Leading Zero Optimization */
#define DIVAS_CTRLA_DLZ             (0x1ul << DIVAS_CTRLA_DLZ_Pos)
#define DIVAS_CTRLA_MASK            0x03ul       /**< \brief (DIVAS_CTRLA) MASK Register */

/* -------- DIVAS_STATUS : (DIVAS Offset: 0x04) (R/W  8) Status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  BUSY:1;           /*!< bit:      0  DIVAS Accelerator Busy             */
    uint8_t  DBZ:1;            /*!< bit:      1  Writing a one to this bit clears DBZ to zero */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} DIVAS_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DIVAS_STATUS_OFFSET         0x04         /**< \brief (DIVAS_STATUS offset) Status */
#define DIVAS_STATUS_RESETVALUE     0x00ul       /**< \brief (DIVAS_STATUS reset_value) Status */

#define DIVAS_STATUS_BUSY_Pos       0            /**< \brief (DIVAS_STATUS) DIVAS Accelerator Busy */
#define DIVAS_STATUS_BUSY           (0x1ul << DIVAS_STATUS_BUSY_Pos)
#define DIVAS_STATUS_DBZ_Pos        1            /**< \brief (DIVAS_STATUS) Writing a one to this bit clears DBZ to zero */
#define DIVAS_STATUS_DBZ            (0x1ul << DIVAS_STATUS_DBZ_Pos)
#define DIVAS_STATUS_MASK           0x03ul       /**< \brief (DIVAS_STATUS) MASK Register */

/* -------- DIVAS_DIVIDEND : (DIVAS Offset: 0x08) (R/W 32) Dividend -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DIVIDEND:32;      /*!< bit:  0..31  DIVIDEND                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DIVAS_DIVIDEND_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DIVAS_DIVIDEND_OFFSET       0x08         /**< \brief (DIVAS_DIVIDEND offset) Dividend */
#define DIVAS_DIVIDEND_RESETVALUE   0x00000000ul /**< \brief (DIVAS_DIVIDEND reset_value) Dividend */

#define DIVAS_DIVIDEND_DIVIDEND_Pos 0            /**< \brief (DIVAS_DIVIDEND) DIVIDEND */
#define DIVAS_DIVIDEND_DIVIDEND_Msk (0xFFFFFFFFul << DIVAS_DIVIDEND_DIVIDEND_Pos)
#define DIVAS_DIVIDEND_DIVIDEND(value) (DIVAS_DIVIDEND_DIVIDEND_Msk & ((value) << DIVAS_DIVIDEND_DIVIDEND_Pos))
#define DIVAS_DIVIDEND_MASK         0xFFFFFFFFul /**< \brief (DIVAS_DIVIDEND) MASK Register */

/* -------- DIVAS_DIVISOR : (DIVAS Offset: 0x0C) (R/W 32) Divisor -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DIVISOR:32;       /*!< bit:  0..31  DIVISOR                            */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DIVAS_DIVISOR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DIVAS_DIVISOR_OFFSET        0x0C         /**< \brief (DIVAS_DIVISOR offset) Divisor */
#define DIVAS_DIVISOR_RESETVALUE    0x00000000ul /**< \brief (DIVAS_DIVISOR reset_value) Divisor */

#define DIVAS_DIVISOR_DIVISOR_Pos   0            /**< \brief (DIVAS_DIVISOR) DIVISOR */
#define DIVAS_DIVISOR_DIVISOR_Msk   (0xFFFFFFFFul << DIVAS_DIVISOR_DIVISOR_Pos)
#define DIVAS_DIVISOR_DIVISOR(value) (DIVAS_DIVISOR_DIVISOR_Msk & ((value) << DIVAS_DIVISOR_DIVISOR_Pos))
#define DIVAS_DIVISOR_MASK          0xFFFFFFFFul /**< \brief (DIVAS_DIVISOR) MASK Register */

/* -------- DIVAS_RESULT : (DIVAS Offset: 0x10) (R/  32) Result -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RESULT:32;        /*!< bit:  0..31  RESULT                             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DIVAS_RESULT_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DIVAS_RESULT_OFFSET         0x10         /**< \brief (DIVAS_RESULT offset) Result */
#define DIVAS_RESULT_RESETVALUE     0x00000000ul /**< \brief (DIVAS_RESULT reset_value) Result */

#define DIVAS_RESULT_RESULT_Pos     0            /**< \brief (DIVAS_RESULT) RESULT */
#define DIVAS_RESULT_RESULT_Msk     (0xFFFFFFFFul << DIVAS_RESULT_RESULT_Pos)
#define DIVAS_RESULT_RESULT(value)  (DIVAS_RESULT_RESULT_Msk & ((value) << DIVAS_RESULT_RESULT_Pos))
#define DIVAS_RESULT_MASK           0xFFFFFFFFul /**< \brief (DIVAS_RESULT) MASK Register */

/* -------- DIVAS_REM : (DIVAS Offset: 0x14) (R/  32) Remainder -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t REM:32;           /*!< bit:  0..31  REM                                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DIVAS_REM_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DIVAS_REM_OFFSET            0x14         /**< \brief (DIVAS_REM offset) Remainder */
#define DIVAS_REM_RESETVALUE        0x00000000ul /**< \brief (DIVAS_REM reset_value) Remainder */

#define DIVAS_REM_REM_Pos           0            /**< \brief (DIVAS_REM) REM */
#define DIVAS_REM_REM_Msk           (0xFFFFFFFFul << DIVAS_REM_REM_Pos)
#define DIVAS_REM_REM(value)        (DIVAS_REM_REM_Msk & ((value) << DIVAS_REM_REM_Pos))
#define DIVAS_REM_MASK              0xFFFFFFFFul /**< \brief (DIVAS_REM) MASK Register */

/* -------- DIVAS_SQRNUM : (DIVAS Offset: 0x18) (R/W 32) Square Root Input -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SQRNUM:32;        /*!< bit:  0..31  Square Root Input                  */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DIVAS_SQRNUM_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DIVAS_SQRNUM_OFFSET         0x18         /**< \brief (DIVAS_SQRNUM offset) Square Root Input */
#define DIVAS_SQRNUM_RESETVALUE     0x00000000ul /**< \brief (DIVAS_SQRNUM reset_value) Square Root Input */

#define DIVAS_SQRNUM_SQRNUM_Pos     0            /**< \brief (DIVAS_SQRNUM) Square Root Input */
#define DIVAS_SQRNUM_SQRNUM_Msk     (0xFFFFFFFFul << DIVAS_SQRNUM_SQRNUM_Pos)
#define DIVAS_SQRNUM_SQRNUM(value)  (DIVAS_SQRNUM_SQRNUM_Msk & ((value) << DIVAS_SQRNUM_SQRNUM_Pos))
#define DIVAS_SQRNUM_MASK           0xFFFFFFFFul /**< \brief (DIVAS_SQRNUM) MASK Register */

/** \brief DIVAS hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO DIVAS_CTRLA_Type          CTRLA;       /**< \brief Offset: 0x00 (R/W  8) Control */
       RoReg8                    Reserved1[0x3];
  __IO DIVAS_STATUS_Type         STATUS;      /**< \brief Offset: 0x04 (R/W  8) Status */
       RoReg8                    Reserved2[0x3];
  __IO DIVAS_DIVIDEND_Type       DIVIDEND;    /**< \brief Offset: 0x08 (R/W 32) Dividend */
  __IO DIVAS_DIVISOR_Type        DIVISOR;     /**< \brief Offset: 0x0C (R/W 32) Divisor */
  __I  DIVAS_RESULT_Type         RESULT;      /**< \brief Offset: 0x10 (R/  32) Result */
  __I  DIVAS_REM_Type            REM;         /**< \brief Offset: 0x14 (R/  32) Remainder */
  __IO DIVAS_SQRNUM_Type         SQRNUM;      /**< \brief Offset: 0x18 (R/W 32) Square Root Input */
} Divas;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
#define SECTION_DIVAS_IOBUS

/*@}*/

#endif /* _SAMC21_DIVAS_COMPONENT_ */
