/**
 * \file
 *
 * \brief Top header file for SAMD10
 *
 * Copyright (c) 2014-2015 Atmel Corporation. All rights reserved.
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
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#ifndef _SAMD10_
#define _SAMD10_

/**
 * \defgroup SAMD10_definitions SAMD10 Device Definitions
 * \brief SAMD10 CMSIS Definitions.
 */

#if   defined(__SAMD10C12A__) || defined(__ATSAMD10C12A__)
  #include "samd10c12a.h"
#elif defined(__SAMD10C13A__) || defined(__ATSAMD10C13A__)
  #include "samd10c13a.h"
#elif defined(__SAMD10C14A__) || defined(__ATSAMD10C14A__)
  #include "samd10c14a.h"
#elif defined(__SAMD10D12AM__) || defined(__ATSAMD10D12AM__)
  #include "samd10d12am.h"
#elif defined(__SAMD10D12AS__) || defined(__ATSAMD10D12AS__)
  #include "samd10d12as.h"
#elif defined(__SAMD10D13AM__) || defined(__ATSAMD10D13AM__)
  #include "samd10d13am.h"
#elif defined(__SAMD10D13AS__) || defined(__ATSAMD10D13AS__)
  #include "samd10d13as.h"
#elif defined(__SAMD10D14AM__) || defined(__ATSAMD10D14AM__)
  #include "samd10d14am.h"
#elif defined(__SAMD10D14AS__) || defined(__ATSAMD10D14AS__)
  #include "samd10d14as.h"
#else
  #error Library does not support the specified device.
#endif

#endif /* _SAMD10_ */
