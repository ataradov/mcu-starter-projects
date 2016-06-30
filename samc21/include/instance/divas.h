/**
 * \file
 *
 * \brief Instance description for DIVAS
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

#ifndef _SAMC21_DIVAS_INSTANCE_
#define _SAMC21_DIVAS_INSTANCE_

/* ========== Register definition for DIVAS peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_DIVAS_CTRLA            (0x48000000U) /**< \brief (DIVAS) Control */
#define REG_DIVAS_STATUS           (0x48000004U) /**< \brief (DIVAS) Status */
#define REG_DIVAS_DIVIDEND         (0x48000008U) /**< \brief (DIVAS) Dividend */
#define REG_DIVAS_DIVISOR          (0x4800000CU) /**< \brief (DIVAS) Divisor */
#define REG_DIVAS_RESULT           (0x48000010U) /**< \brief (DIVAS) Result */
#define REG_DIVAS_REM              (0x48000014U) /**< \brief (DIVAS) Remainder */
#define REG_DIVAS_SQRNUM           (0x48000018U) /**< \brief (DIVAS) Square Root Input */
#else
#define REG_DIVAS_CTRLA            (*(RwReg8 *)0x48000000U) /**< \brief (DIVAS) Control */
#define REG_DIVAS_STATUS           (*(RwReg8 *)0x48000004U) /**< \brief (DIVAS) Status */
#define REG_DIVAS_DIVIDEND         (*(RwReg  *)0x48000008U) /**< \brief (DIVAS) Dividend */
#define REG_DIVAS_DIVISOR          (*(RwReg  *)0x4800000CU) /**< \brief (DIVAS) Divisor */
#define REG_DIVAS_RESULT           (*(RoReg  *)0x48000010U) /**< \brief (DIVAS) Result */
#define REG_DIVAS_REM              (*(RoReg  *)0x48000014U) /**< \brief (DIVAS) Remainder */
#define REG_DIVAS_SQRNUM           (*(RwReg  *)0x48000018U) /**< \brief (DIVAS) Square Root Input */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for DIVAS peripheral ========== */
#define DIVAS_CLK_AHB_ID            12       // AHB clock index

#endif /* _SAMC21_DIVAS_INSTANCE_ */
