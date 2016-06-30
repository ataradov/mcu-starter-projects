/**
 * \file
 *
 * \brief Top header file for SAMC21
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

#ifndef _SAMC21_
#define _SAMC21_

/**
 * \defgroup SAMC21_definitions SAMC21 Device Definitions
 * \brief SAMC21 CMSIS Definitions.
 */

#if   defined(__SAMC21E15A__) || defined(__ATSAMC21E15A__)
  #include "samc21e15a.h"
#elif defined(__SAMC21E16A__) || defined(__ATSAMC21E16A__)
  #include "samc21e16a.h"
#elif defined(__SAMC21E17A__) || defined(__ATSAMC21E17A__)
  #include "samc21e17a.h"
#elif defined(__SAMC21E18A__) || defined(__ATSAMC21E18A__)
  #include "samc21e18a.h"
#elif defined(__SAMC21G15A__) || defined(__ATSAMC21G15A__)
  #include "samc21g15a.h"
#elif defined(__SAMC21G16A__) || defined(__ATSAMC21G16A__)
  #include "samc21g16a.h"
#elif defined(__SAMC21G17A__) || defined(__ATSAMC21G17A__)
  #include "samc21g17a.h"
#elif defined(__SAMC21G18A__) || defined(__ATSAMC21G18A__)
  #include "samc21g18a.h"
#elif defined(__SAMC21J15A__) || defined(__ATSAMC21J15A__)
  #include "samc21j15a.h"
#elif defined(__SAMC21J16A__) || defined(__ATSAMC21J16A__)
  #include "samc21j16a.h"
#elif defined(__SAMC21J17A__) || defined(__ATSAMC21J17A__)
  #include "samc21j17a.h"
#elif defined(__SAMC21J18A__) || defined(__ATSAMC21J18A__)
  #include "samc21j18a.h"
#else
  #error Library does not support the specified device.
#endif

#endif /* _SAMC21_ */
