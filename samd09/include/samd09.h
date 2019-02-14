/**
 * \file
 *
 * \brief Top header file for SAMD09
 *
 * Copyright (c) 2018 Microchip Technology Inc.
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

#ifndef _SAMD09_
#define _SAMD09_

/**
 * \defgroup SAMD09_definitions SAMD09 Device Definitions
 * \brief SAMD09 CMSIS Definitions.
 */

#if   defined(__SAMD09C13A__) || defined(__ATSAMD09C13A__)
  #include "samd09c13a.h"
#elif defined(__SAMD09D14A__) || defined(__ATSAMD09D14A__)
  #include "samd09d14a.h"
#else
  #error Library does not support the specified device.
#endif

#endif /* _SAMD09_ */
