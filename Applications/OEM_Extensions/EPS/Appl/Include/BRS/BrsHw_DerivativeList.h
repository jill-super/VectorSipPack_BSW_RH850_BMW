
/**********************************************************************************************************************
  COPYRIGHT
-----------------------------------------------------------------------------------------------------------------------
  \par      copyright
  \verbatim
  Copyright (c) 2017 by Vector Informatik GmbH.                                                  All rights reserved.

                This software is copyright protected and proprietary to Vector Informatik GmbH.
                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
                All other rights remain with Vector Informatik GmbH.
  \endverbatim
-----------------------------------------------------------------------------------------------------------------------
  FILE DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
  \file  File:  BrsHw_DerivativeList.h
      Project:  Vector Basic Runtime System
       Module:  BrsHw for Platform Renesas RH850

  \brief Description:  This header file contains the information for the specific groups of the different derivatives,
                       supported by this Brs implementation.

  \attention Please note:
    The demo and example programs only show special aspects of the software. With regard to the fact
    that these programs are meant for demonstration purposes only, Vector Informatik liability shall be
    expressly excluded in cases of ordinary negligence, to the extent admissible by law or statute.
**********************************************************************************************************************/

/**********************************************************************************************************************
  AUTHOR IDENTITY
 ----------------------------------------------------------------------------------------------------------------------
  Name                          Initials      Company
  ----------------------------  ------------  -------------------------------------------------------------------------
  Benjamin Walter               visbwa        Vector Informatik GmbH
  Anja Unnasch                  visuna        Vector Informatik GmbH
  Wolfgang Lienhart             viswlt        Vector Informatik GmbH
  Paul Buchmueller              visbpl        Vector Informatik GmbH
  Nika Hamidi                   visnhi        Vector Informatik GmbH
  Wamba Cyrille                 viswca        Vector Informatik GmbH
  Manuel Rettig                 visrgm        Vector Informatik GmbH
  Sascha Mauser                 vismaa        Vector Informatik GmbH
  Sherif Elsabbahy              vissey        Vector Informatik GmbH
  Fabio Campaniello             vitmfco       Vector Italia s.r.l
  Ivo Georgiev                  visivg        Vector Informatik GmbH
  Thomas Wiesgickl              virtwl        Vector Informatik GmbH
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
 ----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Description
  --------  ----------  ------  ---------------------------------------------------------------------------------------
  01.00.00  2016-04-07  visbwa  Added revision history
  01.00.01  2016-04-08  visuna  Added 701053
  01.00.02  2016-04-11  viswlt  Added 701010
  01.00.03  2016-04-20  viswlt  Added 701404 and 701405
  01.00.04  2016-05-11  visbwa  Added 701054
  01.00.05  2016-05-17  visbpl  Added 701568
  01.00.06  2016-06-03  viswlt  Added 701530 and 701531
  01.00.07  2016-06-15  visbwa  Added 701407, fixed 701406
  01.00.08  2016-06-23  visnhi  Added 701318, 701623 and 701502, fixed Protection Group of F1K family
  01.00.09  2016-08-26  visuna  Added support for 701044
  01.00.10  2016-09-23  viswca  Added support for 701582
  01.00.11  2016-10-07  visrgm  Added support for 701583
  01.00.12  2016-10-28  vismaa  Added support for 701620
  01.00.13  2016-11-21  visbwa  Added support for 701400 and 701401
  01.00.14  2016-11-22  visbwa  Added support for 701327, fixed P1H max frequency to 240MHz
  01.00.15  2017-01-19  vismaa  Added support for 701015, 701378 and 701567
  01.00.16  2017-02-20  visbwa  Added support for 701373 (P1H-C)
  01.00.17  2017-02-27  visbwa  Added support for 701461 (successor of 701406)
  01.00.18  2017-03-03  vissey  Added support for 701057
  01.00.19  2017-03-22  vitmfco Added support for 701043
  01.00.20  2017-04-10  visivg  Added support for 701602
  01.00.21  2017-04-10  visivg  Added support for 701581
  01.00.22  2017-04-20  visivg  Added support for 701320 and 701364
  01.00.23  2017-04-21  viswlt  Added support for 701026, 701027, 701028
  01.00.24  2017-04-27  virtwl  Added support for 701022
  01.00.25  2017-05-05  vismaa  Added support for 701621
  01.00.26  2017-05-15  visivg  Added support for 701649
**********************************************************************************************************************/

#ifndef _BRSHW_DERIVATIVELIST_H_
#define _BRSHW_DERIVATIVELIST_H_

/*******************************************************************************
  F1L derivatives
********************************************************************************/
#if defined (BRS_DERIVATIVE_701010) || \
    defined (BRS_DERIVATIVE_701012) || \
    defined (BRS_DERIVATIVE_701013) || \
    defined (BRS_DERIVATIVE_701014) || \
    defined (BRS_DERIVATIVE_701015) || \
    defined (BRS_DERIVATIVE_701019) || \
    defined (BRS_DERIVATIVE_701020) || \
    defined (BRS_DERIVATIVE_701022) || \
    defined (BRS_DERIVATIVE_701023) || \
    defined (BRS_DERIVATIVE_701025) || \
    defined (BRS_DERIVATIVE_701026) || \
    defined (BRS_DERIVATIVE_701027) || \
    defined (BRS_DERIVATIVE_701028) || \
    defined (BRS_DERIVATIVE_701029) || \
    defined (BRS_DERIVATIVE_701030) || \
    defined (BRS_DERIVATIVE_701031) /* same as 701006 */ || \
    defined (BRS_DERIVATIVE_701035) /* same as 701007 */ || \
    defined (BRS_DERIVATIVE_701044) || \
    defined (BRS_DERIVATIVE_701045)
  #define BRSHW_CPU_MAX_FREQUENCY     80
  #define BRSHW_INTERRUPT_TABLE_GROUP_A
  #define BRSHW_PLL_GROUP_A
  #define BRSHW_CLOCK_GROUP_A
  #define BRSHW_TIMER_GROUP_A         0xFFE20000
  #define BRSHW_PORT_GROUP_A
  #define BRSHW_PROTECTION_GROUP_A

#elif defined (BRS_DERIVATIVE_701049) || \
      defined (BRS_DERIVATIVE_701053) || \
      defined (BRS_DERIVATIVE_701054) || \
      defined (BRS_DERIVATIVE_701057) || \
      defined (BRS_DERIVATIVE_701043)
  #define BRSHW_CPU_MAX_FREQUENCY     96
  #define BRSHW_INTERRUPT_TABLE_GROUP_A
  #define BRSHW_PLL_GROUP_A
  #define BRSHW_CLOCK_GROUP_A
  #define BRSHW_TIMER_GROUP_A         0xFFE20000
  #define BRSHW_PORT_GROUP_A
  #define BRSHW_PROTECTION_GROUP_A

/*******************************************************************************
  F1M derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701544) || \
      defined (BRS_DERIVATIVE_701545) || \
      defined (BRS_DERIVATIVE_701548) || \
      defined (BRS_DERIVATIVE_701549) || \
      defined (BRS_DERIVATIVE_701564) || \
      defined (BRS_DERIVATIVE_701565) || \
      defined (BRS_DERIVATIVE_701569) || \
      defined (BRS_DERIVATIVE_701552) || \
      defined (BRS_DERIVATIVE_701568)
  #define BRSHW_CPU_MAX_FREQUENCY     120
  #define BRSHW_INTERRUPT_TABLE_GROUP_C
  #define BRSHW_PLL_GROUP_A1
  #define BRSHW_CLOCK_GROUP_A
  #define BRSHW_TIMER_GROUP_A         0xFFE20000
  #define BRSHW_PORT_GROUP_A
  #define BRSHW_PROTECTION_GROUP_A

/*******************************************************************************
  F1H derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701501) || \
      defined (BRS_DERIVATIVE_701502) || \
      defined (BRS_DERIVATIVE_701503) || \
      defined (BRS_DERIVATIVE_701522) || \
      defined (BRS_DERIVATIVE_701527) || \
      defined (BRS_DERIVATIVE_701507) || \
      defined (BRS_DERIVATIVE_701530) || \
      defined (BRS_DERIVATIVE_701531) || \
      defined (BRS_DERIVATIVE_701534)
  #define BRSHW_CPU_MAX_FREQUENCY     120
  #define BRSHW_INTERRUPT_TABLE_GROUP_C
  #define BRSHW_PLL_GROUP_A1
  #define BRSHW_CLOCK_GROUP_A
  #define BRSHW_TIMER_GROUP_A         0xFFE20000
  #define BRSHW_PORT_GROUP_A
  #define BRSHW_PROTECTION_GROUP_A

/*******************************************************************************
  F1K derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701562) || \
      defined (BRS_DERIVATIVE_701567) || \
      defined (BRS_DERIVATIVE_701581) || \
      defined (BRS_DERIVATIVE_701582) || \
      defined (BRS_DERIVATIVE_701583) || \
      defined (BRS_DERIVATIVE_701587) || \
      defined (BRS_DERIVATIVE_701602) || \
      defined (BRS_DERIVATIVE_701620) || \
      defined (BRS_DERIVATIVE_701621) || \
      defined (BRS_DERIVATIVE_701623)
  #define BRSHW_CPU_MAX_FREQUENCY     120
  #define BRSHW_INTERRUPT_TABLE_GROUP_C
  #define BRSHW_PLL_GROUP_A3
  #define BRSHW_CLOCK_GROUP_A2
  #define BRSHW_TIMER_GROUP_A        0xFFE20000
  #define BRSHW_PORT_GROUP_A
  #define BRSHW_PROTECTION_GROUP_A

/*******************************************************************************
  F1KM derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701649)
  #define BRSHW_CPU_MAX_FREQUENCY     240
  #define BRSHW_INTERRUPT_TABLE_GROUP_C
  #define BRSHW_PLL_GROUP_A1
  #define BRSHW_CLOCK_GROUP_A2
  #define BRSHW_TIMER_GROUP_A        0xFFE20000
  #define BRSHW_PORT_GROUP_A
  #define BRSHW_PROTECTION_GROUP_A

/*******************************************************************************
  R1M derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701062) || \
      defined (BRS_DERIVATIVE_701070)
  #define BRSHW_CPU_MAX_FREQUENCY     96
  #define BRSHW_INTERRUPT_TABLE_GROUP_A
  #define BRSHW_PLL_GROUP_A
  #define BRSHW_CLOCK_GROUP_A
  #define BRSHW_TIMER_GROUP_A         0xFFE20000
  #define BRSHW_PORT_GROUP_A
  #define BRSHW_PROTECTION_GROUP_A

/*******************************************************************************
  P1M derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701307) || \
      defined (BRS_DERIVATIVE_701310) || \
      defined (BRS_DERIVATIVE_701311) || \
      defined (BRS_DERIVATIVE_701312) || \
      defined (BRS_DERIVATIVE_701318) || \
      defined (BRS_DERIVATIVE_701320) || \
      defined (BRS_DERIVATIVE_701364)
  #define BRSHW_CPU_MAX_FREQUENCY     160
  #define BRSHW_INTERRUPT_TABLE_GROUP_B
  #define BRSHW_PLL_GROUP_B
  #define BRSHW_CLOCK_GROUP_B
  #define BRSHW_TIMER_GROUP_A         0xFFE20000
  #define BRSHW_PORT_GROUP_B
  #define BRSHW_PROTECTION_GROUP_B
  #define BRSHW_LIN_USE_THREE_INT_SOURCES

/*******************************************************************************
  P1M_E derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701378) 
  #define BRSHW_CPU_MAX_FREQUENCY     80
  #define BRSHW_INTERRUPT_TABLE_GROUP_B
  #define BRSHW_PLL_GROUP_B1
  #define BRSHW_CLOCK_GROUP_B1
  #define BRSHW_TIMER_GROUP_A         0xFFE20000
  #define BRSHW_PORT_GROUP_B
  #define BRSHW_PROTECTION_GROUP_NONE
  #define BRSHW_LIN_USE_THREE_INT_SOURCES
#elif defined (BRS_DERIVATIVE_701319)			/*@@@visbim*/
  #define BRSHW_CPU_MAX_FREQUENCY     160
  #define BRSHW_INTERRUPT_TABLE_GROUP_B
  #define BRSHW_PLL_GROUP_B
  #define BRSHW_CLOCK_GROUP_B
  #define BRSHW_TIMER_GROUP_A         0xFFE20000
  #define BRSHW_PORT_GROUP_B
  #define BRSHW_PROTECTION_GROUP_A
  #define BRSHW_LIN_USE_THREE_INT_SOURCES

/*******************************************************************************
  P1M-C derivatives (single Core P1H-C)
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701373) 
  #define BRSHW_CPU_MAX_FREQUENCY     240
  #define BRSHW_INTERRUPT_TABLE_GROUP_G
  #define BRSHW_PLL_GROUP_D
  #define BRSHW_CLOCK_GROUP_D
  #define BRSHW_TIMER_GROUP_C         0xFFDD8000
  #define BRSHW_PORT_GROUP_B2
  #define BRSHW_PROTECTION_GROUP_NONE
  #define BRSHW_LIN_USE_THREE_INT_SOURCES
  #define BRSHW_POWER_DOWN_MODES

/*******************************************************************************
  P1H derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701325) || \
      defined (BRS_DERIVATIVE_701327) || \
      defined (BRS_DERIVATIVE_701372)
  #define BRSHW_CPU_MAX_FREQUENCY     240
  #define BRSHW_INTERRUPT_TABLE_GROUP_G
  #define BRSHW_PLL_GROUP_D
  #define BRSHW_CLOCK_GROUP_D
  #define BRSHW_TIMER_GROUP_C         0xFFDD8000
  #define BRSHW_PORT_GROUP_B2
  #define BRSHW_PROTECTION_GROUP_NONE
  #define BRSHW_LIN_USE_THREE_INT_SOURCES
  #define BRSHW_POWER_DOWN_MODES

/*******************************************************************************
  D1L derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701400) || \
      defined (BRS_DERIVATIVE_701401) || \
      defined (BRS_DERIVATIVE_701402) || \
      defined (BRS_DERIVATIVE_701403)
  #define BRSHW_CPU_MAX_FREQUENCY     120
  #define BRSHW_INTERRUPT_TABLE_GROUP_D
  #define BRSHW_PLL_GROUP_A2
  #define BRSHW_CLOCK_GROUP_A1
  #define BRSHW_TIMER_GROUP_A         0xFFE30000
  #define BRSHW_PORT_GROUP_C
  #define BRSHW_PROTECTION_GROUP_A
  #define BRSHW_LIN_USE_THREE_INT_SOURCES

/*******************************************************************************
  D1M derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701404) || \
      defined (BRS_DERIVATIVE_701405)
  #define BRSHW_CPU_MAX_FREQUENCY     160
  #define BRSHW_INTERRUPT_TABLE_GROUP_D
  #define BRSHW_PLL_GROUP_A2
  #define BRSHW_CLOCK_GROUP_A1
  #define BRSHW_TIMER_GROUP_A         0xFFE30000
  #define BRSHW_PORT_GROUP_C
  #define BRSHW_PROTECTION_GROUP_A
  #define BRSHW_LIN_USE_THREE_INT_SOURCES

#elif defined (BRS_DERIVATIVE_701406) || \
      defined (BRS_DERIVATIVE_701407) || \
      defined (BRS_DERIVATIVE_701461)
  #define BRSHW_CPU_MAX_FREQUENCY     200
  #define BRSHW_INTERRUPT_TABLE_GROUP_D
  #define BRSHW_PLL_GROUP_A2
  #define BRSHW_CLOCK_GROUP_A1
  #define BRSHW_TIMER_GROUP_A         0xFFE30000
  #define BRSHW_PORT_GROUP_C
  #define BRSHW_PROTECTION_GROUP_A
  #define BRSHW_LIN_USE_THREE_INT_SOURCES

#elif defined (BRS_DERIVATIVE_701408) || \
      defined (BRS_DERIVATIVE_701428)
  #define BRSHW_CPU_MAX_FREQUENCY     240
  #define BRSHW_INTERRUPT_TABLE_GROUP_D
  #define BRSHW_PLL_GROUP_A2
  #define BRSHW_CLOCK_GROUP_A1
  #define BRSHW_TIMER_GROUP_A         0xFFE30000
  #define BRSHW_PORT_GROUP_C
  #define BRSHW_PROTECTION_GROUP_A
  #define BRSHW_LIN_USE_THREE_INT_SOURCES

#elif defined (BRS_DERIVATIVE_701412)
  #define BRSHW_CPU_MAX_FREQUENCY     240
  #define BRSHW_INTERRUPT_TABLE_GROUP_D
  #define BRSHW_PLL_GROUP_A2
  #define BRSHW_CLOCK_GROUP_A1
  #define BRSHW_TIMER_GROUP_A         0xFFE30000
  #define BRSHW_PORT_GROUP_C
  #define BRSHW_PROTECTION_GROUP_A
  #define BRSHW_LIN_USE_THREE_INT_SOURCES

/*******************************************************************************
  E1L derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701201)
  #define BRSHW_CPU_MAX_FREQUENCY     240
  #define BRSHW_INTERRUPT_TABLE_GROUP_E
  #define BRSHW_PLL_GROUP_C
  #define BRSHW_CLOCK_GROUP_C
  #define BRSHW_TIMER_GROUP_B
  #define BRSHW_PORT_GROUP_D
  #define BRSHW_PROTECTION_GROUP_B

#elif defined (BRS_DERIVATIVE_701205)
  #define BRSHW_CPU_MAX_FREQUENCY     160
  #define BRSHW_INTERRUPT_TABLE_GROUP_E
  #define BRSHW_PLL_GROUP_C
  #define BRSHW_CLOCK_GROUP_C
  #define BRSHW_TIMER_GROUP_B
  #define BRSHW_PORT_GROUP_D
  #define BRSHW_PROTECTION_GROUP_B

/*******************************************************************************
  E1M derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701202)
  #define BRSHW_CPU_MAX_FREQUENCY     320
  #define BRSHW_INTERRUPT_TABLE_GROUP_E
  #define BRSHW_PLL_GROUP_C
  #define BRSHW_CLOCK_GROUP_C
  #define BRSHW_TIMER_GROUP_B
  #define BRSHW_PORT_GROUP_D
  #define BRSHW_PROTECTION_GROUP_B

#elif defined (BRS_DERIVATIVE_701204)
  #define BRSHW_CPU_MAX_FREQUENCY     240
  #define BRSHW_INTERRUPT_TABLE_GROUP_E
  #define BRSHW_PLL_GROUP_C
  #define BRSHW_CLOCK_GROUP_C
  #define BRSHW_TIMER_GROUP_B
  #define BRSHW_PORT_GROUP_D
  #define BRSHW_PROTECTION_GROUP_B

  #elif defined (BRS_DERIVATIVE_701Z11)
  #define BRSHW_CPU_MAX_FREQUENCY     240
  #define BRSHW_INTERRUPT_TABLE_GROUP_E
  #define BRSHW_PLL_GROUP_C
  #define BRSHW_CLOCK_GROUP_C
  #define BRSHW_TIMER_GROUP_B
  #define BRSHW_PORT_GROUP_D
  #define BRSHW_PROTECTION_GROUP_B

  #elif defined (BRS_DERIVATIVE_701Z12)
  #define BRSHW_CPU_MAX_FREQUENCY     320
  #define BRSHW_INTERRUPT_TABLE_GROUP_E
  #define BRSHW_PLL_GROUP_C
  #define BRSHW_CLOCK_GROUP_C
  #define BRSHW_TIMER_GROUP_B
  #define BRSHW_PORT_GROUP_D
  #define BRSHW_PROTECTION_GROUP_B

/*******************************************************************************
  C1H / C1M derivatives
********************************************************************************/
#elif defined (BRS_DERIVATIVE_701260) || \
      defined (BRS_DERIVATIVE_701263)
  #define BRSHW_CPU_MAX_FREQUENCY     240
  #define BRSHW_INTERRUPT_TABLE_GROUP_F
  #define BRSHW_PLL_GROUP_C
  #define BRSHW_CLOCK_GROUP_C
  #define BRSHW_TIMER_GROUP_A         0xFFE20000
  #define BRSHW_PORT_GROUP_B1
  #define BRSHW_PROTECTION_GROUP_B

#else
  #error "Configured derivative (Makefile.config) not yet supported"
#endif /*BRS_DERIVATIVE_x*/

#endif /*_BRSHW_DERIVATIVELIST_H_*/
