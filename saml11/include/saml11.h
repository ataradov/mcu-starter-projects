/**
 * \file
 *
 * \brief Top header file for SAML11
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

#ifndef _SAML11_
#define _SAML11_

/**
 * \defgroup SAML11_definitions SAML11 Device Definitions
 * \brief SAML11 CMSIS Definitions.
 */

#if   defined(__SAML11D14A__) || defined(__ATSAML11D14A__)
  #include "saml11d14a.h"
#elif defined(__SAML11D15A__) || defined(__ATSAML11D15A__)
  #include "saml11d15a.h"
#elif defined(__SAML11D16A__) || defined(__ATSAML11D16A__)
  #include "saml11d16a.h"
#elif defined(__SAML11E14A__) || defined(__ATSAML11E14A__)
  #include "saml11e14a.h"
#elif defined(__SAML11E15A__) || defined(__ATSAML11E15A__)
  #include "saml11e15a.h"
#elif defined(__SAML11E16A__) || defined(__ATSAML11E16A__)
  #include "saml11e16a.h"
#else
  #error Library does not support the specified device.
#endif

#endif /* _SAML11_ */
