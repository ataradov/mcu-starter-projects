/**
 * \file
 *
 * \brief Component description for RSTC
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

#ifndef _SAMC21_RSTC_COMPONENT_
#define _SAMC21_RSTC_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR RSTC */
/* ========================================================================== */
/** \addtogroup SAMC21_RSTC Reset Controller */
/*@{*/

#define RSTC_U2239
#define REV_RSTC                    0x202

/* -------- RSTC_RCAUSE : (RSTC Offset: 0x00) (R/   8) Reset Cause -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  POR:1;            /*!< bit:      0  Power On Reset                     */
    uint8_t  BODCORE:1;        /*!< bit:      1  Brown Out CORE Detector Reset      */
    uint8_t  BODVDD:1;         /*!< bit:      2  Brown Out VDD Detector Reset       */
    uint8_t  :1;               /*!< bit:      3  Reserved                           */
    uint8_t  EXT:1;            /*!< bit:      4  External Reset                     */
    uint8_t  WDT:1;            /*!< bit:      5  Watchdog Reset                     */
    uint8_t  SYST:1;           /*!< bit:      6  System Reset Request               */
    uint8_t  :1;               /*!< bit:      7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} RSTC_RCAUSE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define RSTC_RCAUSE_OFFSET          0x00         /**< \brief (RSTC_RCAUSE offset) Reset Cause */

#define RSTC_RCAUSE_POR_Pos         0            /**< \brief (RSTC_RCAUSE) Power On Reset */
#define RSTC_RCAUSE_POR             (0x1ul << RSTC_RCAUSE_POR_Pos)
#define RSTC_RCAUSE_BODCORE_Pos     1            /**< \brief (RSTC_RCAUSE) Brown Out CORE Detector Reset */
#define RSTC_RCAUSE_BODCORE         (0x1ul << RSTC_RCAUSE_BODCORE_Pos)
#define RSTC_RCAUSE_BODVDD_Pos      2            /**< \brief (RSTC_RCAUSE) Brown Out VDD Detector Reset */
#define RSTC_RCAUSE_BODVDD          (0x1ul << RSTC_RCAUSE_BODVDD_Pos)
#define RSTC_RCAUSE_EXT_Pos         4            /**< \brief (RSTC_RCAUSE) External Reset */
#define RSTC_RCAUSE_EXT             (0x1ul << RSTC_RCAUSE_EXT_Pos)
#define RSTC_RCAUSE_WDT_Pos         5            /**< \brief (RSTC_RCAUSE) Watchdog Reset */
#define RSTC_RCAUSE_WDT             (0x1ul << RSTC_RCAUSE_WDT_Pos)
#define RSTC_RCAUSE_SYST_Pos        6            /**< \brief (RSTC_RCAUSE) System Reset Request */
#define RSTC_RCAUSE_SYST            (0x1ul << RSTC_RCAUSE_SYST_Pos)
#define RSTC_RCAUSE_MASK            0x77ul       /**< \brief (RSTC_RCAUSE) MASK Register */

/** \brief RSTC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __I  RSTC_RCAUSE_Type          RCAUSE;      /**< \brief Offset: 0x00 (R/   8) Reset Cause */
} Rstc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAMC21_RSTC_COMPONENT_ */
