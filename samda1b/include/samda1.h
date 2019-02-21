/**
 * \file
 *
 * \brief Top header file for SAMDA1
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMDA1_
#define _SAMDA1_

/**
 * \defgroup SAMDA1_definitions SAMDA1 Device Definitions
 * \brief SAMDA1 CMSIS Definitions.
 */

#if   defined(__SAMDA1E14B__) || defined(__ATSAMDA1E14B__)
  #include "samda1e14b.h"
#elif defined(__SAMDA1E15B__) || defined(__ATSAMDA1E15B__)
  #include "samda1e15b.h"
#elif defined(__SAMDA1E16B__) || defined(__ATSAMDA1E16B__)
  #include "samda1e16b.h"
#elif defined(__SAMDA1G14B__) || defined(__ATSAMDA1G14B__)
  #include "samda1g14b.h"
#elif defined(__SAMDA1G15B__) || defined(__ATSAMDA1G15B__)
  #include "samda1g15b.h"
#elif defined(__SAMDA1G16B__) || defined(__ATSAMDA1G16B__)
  #include "samda1g16b.h"
#elif defined(__SAMDA1J14B__) || defined(__ATSAMDA1J14B__)
  #include "samda1j14b.h"
#elif defined(__SAMDA1J15B__) || defined(__ATSAMDA1J15B__)
  #include "samda1j15b.h"
#elif defined(__SAMDA1J16B__) || defined(__ATSAMDA1J16B__)
  #include "samda1j16b.h"
#else
  #error Library does not support the specified device.
#endif

#endif /* _SAMDA1_ */
