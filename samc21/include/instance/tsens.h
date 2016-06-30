/**
 * \file
 *
 * \brief Instance description for TSENS
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

#ifndef _SAMC21_TSENS_INSTANCE_
#define _SAMC21_TSENS_INSTANCE_

/* ========== Register definition for TSENS peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TSENS_CTRLA            (0x40003000U) /**< \brief (TSENS) Control A Register */
#define REG_TSENS_CTRLB            (0x40003001U) /**< \brief (TSENS) Control B Register */
#define REG_TSENS_CTRLC            (0x40003002U) /**< \brief (TSENS) Control C Register */
#define REG_TSENS_EVCTRL           (0x40003003U) /**< \brief (TSENS) Event Control Register */
#define REG_TSENS_INTENCLR         (0x40003004U) /**< \brief (TSENS) Interrupt Enable Clear Register */
#define REG_TSENS_INTENSET         (0x40003005U) /**< \brief (TSENS) Interrupt Enable Set Register */
#define REG_TSENS_INTFLAG          (0x40003006U) /**< \brief (TSENS) Interrupt Flag Status and Clear Register */
#define REG_TSENS_STATUS           (0x40003007U) /**< \brief (TSENS) Status Register */
#define REG_TSENS_SYNCBUSY         (0x40003008U) /**< \brief (TSENS) Synchronization Busy Register */
#define REG_TSENS_VALUE            (0x4000300CU) /**< \brief (TSENS) Value Register */
#define REG_TSENS_WINLT            (0x40003010U) /**< \brief (TSENS) Window Monitor Lower Threshold Register */
#define REG_TSENS_WINUT            (0x40003014U) /**< \brief (TSENS) Window Monitor Upper Threshold Register */
#define REG_TSENS_GAIN             (0x40003018U) /**< \brief (TSENS) Gain Register */
#define REG_TSENS_OFFSET           (0x4000301CU) /**< \brief (TSENS) Offset Register */
#define REG_TSENS_CAL              (0x40003020U) /**< \brief (TSENS) Calibration Register */
#define REG_TSENS_DBGCTRL          (0x40003024U) /**< \brief (TSENS) Debug Control Register */
#else
#define REG_TSENS_CTRLA            (*(RwReg8 *)0x40003000U) /**< \brief (TSENS) Control A Register */
#define REG_TSENS_CTRLB            (*(WoReg8 *)0x40003001U) /**< \brief (TSENS) Control B Register */
#define REG_TSENS_CTRLC            (*(RwReg8 *)0x40003002U) /**< \brief (TSENS) Control C Register */
#define REG_TSENS_EVCTRL           (*(RwReg8 *)0x40003003U) /**< \brief (TSENS) Event Control Register */
#define REG_TSENS_INTENCLR         (*(RwReg8 *)0x40003004U) /**< \brief (TSENS) Interrupt Enable Clear Register */
#define REG_TSENS_INTENSET         (*(RwReg8 *)0x40003005U) /**< \brief (TSENS) Interrupt Enable Set Register */
#define REG_TSENS_INTFLAG          (*(RwReg8 *)0x40003006U) /**< \brief (TSENS) Interrupt Flag Status and Clear Register */
#define REG_TSENS_STATUS           (*(RoReg8 *)0x40003007U) /**< \brief (TSENS) Status Register */
#define REG_TSENS_SYNCBUSY         (*(RoReg  *)0x40003008U) /**< \brief (TSENS) Synchronization Busy Register */
#define REG_TSENS_VALUE            (*(RoReg  *)0x4000300CU) /**< \brief (TSENS) Value Register */
#define REG_TSENS_WINLT            (*(RwReg  *)0x40003010U) /**< \brief (TSENS) Window Monitor Lower Threshold Register */
#define REG_TSENS_WINUT            (*(RwReg  *)0x40003014U) /**< \brief (TSENS) Window Monitor Upper Threshold Register */
#define REG_TSENS_GAIN             (*(RwReg  *)0x40003018U) /**< \brief (TSENS) Gain Register */
#define REG_TSENS_OFFSET           (*(RwReg  *)0x4000301CU) /**< \brief (TSENS) Offset Register */
#define REG_TSENS_CAL              (*(RwReg  *)0x40003020U) /**< \brief (TSENS) Calibration Register */
#define REG_TSENS_DBGCTRL          (*(RwReg8 *)0x40003024U) /**< \brief (TSENS) Debug Control Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TSENS peripheral ========== */
#define TSENS_DMAC_ID_RESRDY        1        // Index of DMA RESRDY trigger
#define TSENS_GCLK_ID               5        // Index of Generic Clock

#endif /* _SAMC21_TSENS_INSTANCE_ */
