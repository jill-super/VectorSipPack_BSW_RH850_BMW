
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
  \file  File:  BrsIntTb.c
      Project:  Vector Basic Runtime System
       Module:  BrsHw for Platform Renesas RH850

  \brief Description:  This file consists of the Interrupt Vector Table.

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
  Jan Lutterbeck                visljn        Vector Informatik GmbH
  Steffen Frank                 visfsn        Vector Informatik GmbH
  Torsten Kercher               vistkr        Vector Informatik GmbH
  Alexander Becker              visabc        Vector Informatik GmbH
  Benjamin Walter               visbwa        Vector Informatik GmbH
  Bastian Molkenthin            visbmo        Vector Informatik GmbH
  Timo Müller                   vistir        Vector Informatik GmbH
  Andreas Pick                  visap         Vector Informatik GmbH
  Michael Kock                  vismkk        Vector Informatik GmbH
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
 ----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Description
  --------  ----------  ------  ---------------------------------------------------------------------------------------
  01.00.00  2012-07-09  visljn  First Version
  01.01.00  2013-07-25  visfsn  Removed F1X
  01.03.00  2013-08-14  visljn  Added support for DiabData compiler
  01.04.00  2013-08-20  vistkr  Use V_ switches, reworks for DrvCan
  01.05.00  2013-10-16  vistkr  Support wakeup for DrvCan
  01.06.00  2013-11-06  visabc  P1X added
  01.07.00  2013-11-11  visljn  R1M added
  01.08.00  2014-05-20  vistkr  Added support for IAR compiler, reorganize file
  02.00.00  2014-07-30  visbwa  Complete rework of zBrs_Rh850, according to styleguide Vector_BrsHw_2.0
  02.00.01  2014-09-02  visljn  Added Ethernet-ISR for BRSHW_INTERRUPT_TABLE_GROUP_C
  02.00.02  2014-09-05  visbmo  Adoptions for ISRs of LIN SIO driver (CBD LIN master/slave)
  02.00.03  2014-09-29  vistir  Introduced BRSHW_ENABLE_CAN_WAKEUP,
                                WakeUp-ISR handling template for BRSHW_INTERRUPT_TABLE_GROUP_F
  02.01.00  2014-09-30  visbwa  Moved all ISR function declarations into BrsHw_IsrDef.h
  02.01.01  2015-01-09  visbwa  Several cosmetic adoptions
  02.01.02  2015-12-02  visap   Fixed header for DrvLin CANbedded
  02.01.03  2015-12-08  visbwa  Removed duplicated includes
  02.01.04  2016-01-20  visbwa  Added include of Fr.h (necessary for FR_CFG_STATUS_ISR_LINE usage in BrsHw_IsrDef.h)
  02.01.05  2016-06-14  visbwa  Added include of Eth.h
  02.02.00  2016-08-29  visbwa  Removed variable BRS_INT_TABLE_SECTION (is fix anyway),
                                renamed usr_init to usr_init_c0,
                                separated vector table into intvect_CoreExceptions and intvect_ExtExceptions
  02.03.00  2017-04-28  vismkk  Enabled DummyIntTable for OsGen7 UseCase (exception handling during startup)
**********************************************************************************************************************/

/**********************************************************************************************************************
*  SAMPLE CODE ONLY
*  -------------------------------------------------------------------------------------------------------------------
*  This implementation is sample code and only intended to illustrate an example of a possible BSW implementation.
*  The implementation may not be complete and is not provided for use in production
*  without any modifications. If this sample code is used in any way, the customer shall test
*  this implementation as well as any of its modifications with diligent care.
*********************************************************************************************************************/

#if defined (BRS_OS_USECASE_OSGEN7)

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
/*
 * Description: The BrsHw header provides all the necessary interfaces to
 *              the microcontroller hardware features like ports, timers, LEDs, ...
 */
#include "BrsHw.h"

#if defined (VGEN_ENABLE_CAN_DRV)
# if defined (VGEN_ENABLE_IF_ASRIFCAN)
  /*Autosar component*/
  #include "Can.h"
# else
  /*CANbedded component*/
  #include "can_inc.h"
# endif
#endif

#if defined (VGEN_ENABLE_LIN_DRV)
# if defined (VGEN_ENABLE_IF_ASRIFLIN)
  /*Autosar component*/
  #include "Lin.h"
# else
  /*CANbedded component*/
  #include "lin_api.h"
  #include "sio_cfg.h"
# endif
#endif

#if defined (VGEN_ENABLE_DRVFR__BASEASR)
  #include "Fr.h"
#endif

#if defined (VGEN_ENABLE_DRVETH__BASEASR)
  #include "Eth.h"
#endif

#if !defined (BRS_OS_USECASE_OSGEN7)
  /* All ISR function definitions are set within this separate header */
  #include "BrsHw_IsrDef.h"
#endif

/**********************************************************************************************************************
  VERSION CHECK
**********************************************************************************************************************/
/* No header, therefore no version check */

/**********************************************************************************************************************
  CONFIGURATION CHECK
**********************************************************************************************************************/
#if defined (BRS_COMP_GHS)     
#else
  #error "Unknown compiler specified!"
#endif

#if defined (VGEN_ENABLE_CAN_DRV) && defined (C_ENABLE_DIRECT_INTERRUPT_BRANCH)
  #error "Only table based interrupt branching is supported by BRS"
#endif

/*****************************************************************************************/
/* define dummy interrupt handlers                                                       */
/*****************************************************************************************/
#if defined (BRS_HW_ENABLE_SINGLE_DUMMY_INTERRUPT) || defined (BRS_OS_USECASE_OSGEN7)
  #define BrsDummyInterrupt(inta) BRS_ISR_DEFINE(BrsHwDummyInterrupt)
#else
  #define BrsDummyInterrupt(inta) BRS_ISR_DEFINE(BrsHwDummyInterrupt##inta)
#endif /*BRS_HW_ENABLE_SINGLE_DUMMY_INTERRUPT*/

#if !defined (BrsDummyInterrupt4)
# define BrsDummyInterrupt4 BrsDummyInterrupt(4)
#endif
#if !defined (BrsDummyInterrupt8)
# define BrsDummyInterrupt8 BrsDummyInterrupt(8)
#endif
#if !defined (BrsDummyInterrupt12)
# define BrsDummyInterrupt12 BrsDummyInterrupt(12)
#endif
#if !defined (BrsDummyInterrupt16)
# define BrsDummyInterrupt16 BrsDummyInterrupt(16)
#endif
#if !defined (BrsDummyInterrupt20)
# define BrsDummyInterrupt20 BrsDummyInterrupt(20)
#endif
#if !defined (BrsDummyInterrupt24)
# define BrsDummyInterrupt24 BrsDummyInterrupt(24)
#endif
#if !defined (BrsDummyInterrupt28)
# define BrsDummyInterrupt28 BrsDummyInterrupt(28)
#endif
#if !defined (BrsDummyInterrupt32)
# define BrsDummyInterrupt32 BrsDummyInterrupt(32)
#endif
#if !defined (BrsDummyInterrupt36)
# define BrsDummyInterrupt36 BrsDummyInterrupt(36)
#endif
#if !defined (BrsDummyInterrupt40)
# define BrsDummyInterrupt40 BrsDummyInterrupt(40)
#endif
#if !defined (BrsDummyInterrupt44)
# define BrsDummyInterrupt44 BrsDummyInterrupt(44)
#endif
#if !defined (BrsDummyInterrupt48)
# define BrsDummyInterrupt48 BrsDummyInterrupt(48)
#endif
#if !defined (BrsDummyInterrupt52)
# define BrsDummyInterrupt52 BrsDummyInterrupt(52)
#endif
#if !defined (BrsDummyInterrupt56)
# define BrsDummyInterrupt56 BrsDummyInterrupt(56)
#endif
#if !defined (BrsDummyInterrupt60)
# define BrsDummyInterrupt60 BrsDummyInterrupt(60)
#endif
#if !defined (BrsDummyInterrupt64)
# define BrsDummyInterrupt64 BrsDummyInterrupt(64)
#endif
#if !defined (BrsDummyInterrupt68)
# define BrsDummyInterrupt68 BrsDummyInterrupt(68)
#endif
#if !defined (BrsDummyInterrupt72)
# define BrsDummyInterrupt72 BrsDummyInterrupt(72)
#endif
#if !defined (BrsDummyInterrupt76)
# define BrsDummyInterrupt76 BrsDummyInterrupt(76)
#endif
#if !defined (BrsDummyInterrupt80)
# define BrsDummyInterrupt80 BrsDummyInterrupt(80)
#endif
#if !defined (BrsDummyInterrupt84)
# define BrsDummyInterrupt84 BrsDummyInterrupt(84)
#endif
#if !defined (BrsDummyInterrupt88)
# define BrsDummyInterrupt88 BrsDummyInterrupt(88)
#endif
#if !defined (BrsDummyInterrupt92)
# define BrsDummyInterrupt92 BrsDummyInterrupt(92)
#endif
#if !defined (BrsDummyInterrupt96)
# define BrsDummyInterrupt96 BrsDummyInterrupt(96)
#endif
#if !defined (BrsDummyInterrupt100)
# define BrsDummyInterrupt100 BrsDummyInterrupt(100)
#endif
#if !defined (BrsDummyInterrupt104)
# define BrsDummyInterrupt104 BrsDummyInterrupt(104)
#endif
#if !defined (BrsDummyInterrupt108)
# define BrsDummyInterrupt108 BrsDummyInterrupt(108)
#endif
#if !defined (BrsDummyInterrupt112)
# define BrsDummyInterrupt112 BrsDummyInterrupt(112)
#endif
#if !defined (BrsDummyInterrupt116)
# define BrsDummyInterrupt116 BrsDummyInterrupt(116)
#endif
#if !defined (BrsDummyInterrupt120)
# define BrsDummyInterrupt120 BrsDummyInterrupt(120)
#endif
#if !defined (BrsDummyInterrupt124)
# define BrsDummyInterrupt124 BrsDummyInterrupt(124)
#endif
#if !defined (BrsDummyInterrupt128)
# define BrsDummyInterrupt128 BrsDummyInterrupt(128)
#endif
#if !defined (BrsDummyInterrupt132)
# define BrsDummyInterrupt132 BrsDummyInterrupt(132)
#endif
#if !defined (BrsDummyInterrupt136)
# define BrsDummyInterrupt136 BrsDummyInterrupt(136)
#endif
#if !defined (BrsDummyInterrupt140)
# define BrsDummyInterrupt140 BrsDummyInterrupt(140)
#endif
#if !defined (BrsDummyInterrupt144)
# define BrsDummyInterrupt144 BrsDummyInterrupt(144)
#endif
#if !defined (BrsDummyInterrupt148)
# define BrsDummyInterrupt148 BrsDummyInterrupt(148)
#endif
#if !defined (BrsDummyInterrupt152)
# define BrsDummyInterrupt152 BrsDummyInterrupt(152)
#endif
#if !defined (BrsDummyInterrupt156)
# define BrsDummyInterrupt156 BrsDummyInterrupt(156)
#endif
#if !defined (BrsDummyInterrupt160)
# define BrsDummyInterrupt160 BrsDummyInterrupt(160)
#endif
#if !defined (BrsDummyInterrupt164)
# define BrsDummyInterrupt164 BrsDummyInterrupt(164)
#endif
#if !defined (BrsDummyInterrupt168)
# define BrsDummyInterrupt168 BrsDummyInterrupt(168)
#endif
#if !defined (BrsDummyInterrupt172)
# define BrsDummyInterrupt172 BrsDummyInterrupt(172)
#endif
#if !defined (BrsDummyInterrupt176)
# define BrsDummyInterrupt176 BrsDummyInterrupt(176)
#endif
#if !defined (BrsDummyInterrupt180)
# define BrsDummyInterrupt180 BrsDummyInterrupt(180)
#endif
#if !defined (BrsDummyInterrupt184)
# define BrsDummyInterrupt184 BrsDummyInterrupt(184)
#endif
#if !defined (BrsDummyInterrupt188)
# define BrsDummyInterrupt188 BrsDummyInterrupt(188)
#endif
#if !defined (BrsDummyInterrupt192)
# define BrsDummyInterrupt192 BrsDummyInterrupt(192)
#endif
#if !defined (BrsDummyInterrupt196)
# define BrsDummyInterrupt196 BrsDummyInterrupt(196)
#endif
#if !defined (BrsDummyInterrupt200)
# define BrsDummyInterrupt200 BrsDummyInterrupt(200)
#endif
#if !defined (BrsDummyInterrupt204)
# define BrsDummyInterrupt204 BrsDummyInterrupt(204)
#endif
#if !defined (BrsDummyInterrupt208)
# define BrsDummyInterrupt208 BrsDummyInterrupt(208)
#endif
#if !defined (BrsDummyInterrupt212)
# define BrsDummyInterrupt212 BrsDummyInterrupt(212)
#endif
#if !defined (BrsDummyInterrupt216)
# define BrsDummyInterrupt216 BrsDummyInterrupt(216)
#endif
#if !defined (BrsDummyInterrupt220)
# define BrsDummyInterrupt220 BrsDummyInterrupt(220)
#endif
#if !defined (BrsDummyInterrupt224)
# define BrsDummyInterrupt224 BrsDummyInterrupt(224)
#endif
#if !defined (BrsDummyInterrupt228)
# define BrsDummyInterrupt228 BrsDummyInterrupt(228)
#endif
#if !defined (BrsDummyInterrupt232)
# define BrsDummyInterrupt232 BrsDummyInterrupt(232)
#endif
#if !defined (BrsDummyInterrupt236)
# define BrsDummyInterrupt236 BrsDummyInterrupt(236)
#endif
#if !defined (BrsDummyInterrupt240)
# define BrsDummyInterrupt240 BrsDummyInterrupt(240)
#endif
#if !defined (BrsDummyInterrupt244)
# define BrsDummyInterrupt244 BrsDummyInterrupt(244)
#endif
#if !defined (BrsDummyInterrupt248)
# define BrsDummyInterrupt248 BrsDummyInterrupt(248)
#endif
#if !defined (BrsDummyInterrupt252)
# define BrsDummyInterrupt252 BrsDummyInterrupt(252)
#endif
#if !defined (BrsDummyInterrupt256)
# define BrsDummyInterrupt256 BrsDummyInterrupt(256)
#endif
#if !defined (BrsDummyInterrupt260)
# define BrsDummyInterrupt260 BrsDummyInterrupt(260)
#endif
#if !defined (BrsDummyInterrupt264)
# define BrsDummyInterrupt264 BrsDummyInterrupt(264)
#endif
#if !defined (BrsDummyInterrupt268)
# define BrsDummyInterrupt268 BrsDummyInterrupt(268)
#endif
#if !defined (BrsDummyInterrupt272)
# define BrsDummyInterrupt272 BrsDummyInterrupt(272)
#endif
#if !defined (BrsDummyInterrupt276)
# define BrsDummyInterrupt276 BrsDummyInterrupt(276)
#endif
#if !defined (BrsDummyInterrupt280)
# define BrsDummyInterrupt280 BrsDummyInterrupt(280)
#endif
#if !defined (BrsDummyInterrupt284)
# define BrsDummyInterrupt284 BrsDummyInterrupt(284)
#endif
#if !defined (BrsDummyInterrupt288)
# define BrsDummyInterrupt288 BrsDummyInterrupt(288)
#endif
#if !defined (BrsDummyInterrupt292)
# define BrsDummyInterrupt292 BrsDummyInterrupt(292)
#endif
#if !defined (BrsDummyInterrupt296)
# define BrsDummyInterrupt296 BrsDummyInterrupt(296)
#endif
#if !defined (BrsDummyInterrupt300)
# define BrsDummyInterrupt300 BrsDummyInterrupt(300)
#endif
#if !defined (BrsDummyInterrupt304)
# define BrsDummyInterrupt304 BrsDummyInterrupt(304)
#endif
#if !defined (BrsDummyInterrupt308)
# define BrsDummyInterrupt308 BrsDummyInterrupt(308)
#endif
#if !defined (BrsDummyInterrupt312)
# define BrsDummyInterrupt312 BrsDummyInterrupt(312)
#endif
#if !defined (BrsDummyInterrupt316)
# define BrsDummyInterrupt316 BrsDummyInterrupt(316)
#endif
#if !defined (BrsDummyInterrupt320)
# define BrsDummyInterrupt320 BrsDummyInterrupt(320)
#endif
#if !defined (BrsDummyInterrupt324)
# define BrsDummyInterrupt324 BrsDummyInterrupt(324)
#endif
#if !defined (BrsDummyInterrupt328)
# define BrsDummyInterrupt328 BrsDummyInterrupt(328)
#endif
#if !defined (BrsDummyInterrupt332)
# define BrsDummyInterrupt332 BrsDummyInterrupt(332)
#endif
#if !defined (BrsDummyInterrupt336)
# define BrsDummyInterrupt336 BrsDummyInterrupt(336)
#endif
#if !defined (BrsDummyInterrupt340)
# define BrsDummyInterrupt340 BrsDummyInterrupt(340)
#endif
#if !defined (BrsDummyInterrupt344)
# define BrsDummyInterrupt344 BrsDummyInterrupt(344)
#endif
#if !defined (BrsDummyInterrupt348)
# define BrsDummyInterrupt348 BrsDummyInterrupt(348)
#endif
#if !defined (BrsDummyInterrupt352)
# define BrsDummyInterrupt352 BrsDummyInterrupt(352)
#endif
#if !defined (BrsDummyInterrupt356)
# define BrsDummyInterrupt356 BrsDummyInterrupt(356)
#endif
#if !defined (BrsDummyInterrupt360)
# define BrsDummyInterrupt360 BrsDummyInterrupt(360)
#endif
#if !defined (BrsDummyInterrupt364)
# define BrsDummyInterrupt364 BrsDummyInterrupt(364)
#endif
#if !defined (BrsDummyInterrupt368)
# define BrsDummyInterrupt368 BrsDummyInterrupt(368)
#endif
#if !defined (BrsDummyInterrupt372)
# define BrsDummyInterrupt372 BrsDummyInterrupt(372)
#endif
#if !defined (BrsDummyInterrupt376)
# define BrsDummyInterrupt376 BrsDummyInterrupt(376)
#endif
#if !defined (BrsDummyInterrupt380)
# define BrsDummyInterrupt380 BrsDummyInterrupt(380)
#endif
#if !defined (BrsDummyInterrupt384)
# define BrsDummyInterrupt384 BrsDummyInterrupt(384)
#endif
#if !defined (BrsDummyInterrupt388)
# define BrsDummyInterrupt388 BrsDummyInterrupt(388)
#endif
#if !defined (BrsDummyInterrupt392)
# define BrsDummyInterrupt392 BrsDummyInterrupt(392)
#endif
#if !defined (BrsDummyInterrupt396)
# define BrsDummyInterrupt396 BrsDummyInterrupt(396)
#endif
#if !defined (BrsDummyInterrupt400)
# define BrsDummyInterrupt400 BrsDummyInterrupt(400)
#endif
#if !defined (BrsDummyInterrupt404)
# define BrsDummyInterrupt404 BrsDummyInterrupt(404)
#endif
#if !defined (BrsDummyInterrupt408)
# define BrsDummyInterrupt408 BrsDummyInterrupt(408)
#endif
#if !defined (BrsDummyInterrupt412)
# define BrsDummyInterrupt412 BrsDummyInterrupt(412)
#endif
#if !defined (BrsDummyInterrupt416)
# define BrsDummyInterrupt416 BrsDummyInterrupt(416)
#endif
#if !defined (BrsDummyInterrupt420)
# define BrsDummyInterrupt420 BrsDummyInterrupt(420)
#endif
#if !defined (BrsDummyInterrupt424)
# define BrsDummyInterrupt424 BrsDummyInterrupt(424)
#endif
#if !defined (BrsDummyInterrupt428)
# define BrsDummyInterrupt428 BrsDummyInterrupt(428)
#endif
#if !defined (BrsDummyInterrupt432)
# define BrsDummyInterrupt432 BrsDummyInterrupt(432)
#endif
#if !defined (BrsDummyInterrupt436)
# define BrsDummyInterrupt436 BrsDummyInterrupt(436)
#endif
#if !defined (BrsDummyInterrupt440)
# define BrsDummyInterrupt440 BrsDummyInterrupt(440)
#endif
#if !defined (BrsDummyInterrupt444)
# define BrsDummyInterrupt444 BrsDummyInterrupt(444)
#endif
#if !defined (BrsDummyInterrupt448)
# define BrsDummyInterrupt448 BrsDummyInterrupt(448)
#endif
#if !defined (BrsDummyInterrupt452)
# define BrsDummyInterrupt452 BrsDummyInterrupt(452)
#endif
#if !defined (BrsDummyInterrupt456)
# define BrsDummyInterrupt456 BrsDummyInterrupt(456)
#endif
#if !defined (BrsDummyInterrupt460)
# define BrsDummyInterrupt460 BrsDummyInterrupt(460)
#endif
#if !defined (BrsDummyInterrupt464)
# define BrsDummyInterrupt464 BrsDummyInterrupt(464)
#endif
#if !defined (BrsDummyInterrupt468)
# define BrsDummyInterrupt468 BrsDummyInterrupt(468)
#endif
#if !defined (BrsDummyInterrupt472)
# define BrsDummyInterrupt472 BrsDummyInterrupt(472)
#endif
#if !defined (BrsDummyInterrupt476)
# define BrsDummyInterrupt476 BrsDummyInterrupt(476)
#endif
#if !defined (BrsDummyInterrupt480)
# define BrsDummyInterrupt480 BrsDummyInterrupt(480)
#endif
#if !defined (BrsDummyInterrupt484)
# define BrsDummyInterrupt484 BrsDummyInterrupt(484)
#endif
#if !defined (BrsDummyInterrupt488)
# define BrsDummyInterrupt488 BrsDummyInterrupt(488)
#endif
#if !defined (BrsDummyInterrupt492)
# define BrsDummyInterrupt492 BrsDummyInterrupt(492)
#endif
#if !defined (BrsDummyInterrupt496)
# define BrsDummyInterrupt496 BrsDummyInterrupt(496)
#endif
#if !defined (BrsDummyInterrupt500)
# define BrsDummyInterrupt500 BrsDummyInterrupt(500)
#endif
#if !defined (BrsDummyInterrupt504)
# define BrsDummyInterrupt504 BrsDummyInterrupt(504)
#endif
#if !defined (BrsDummyInterrupt508)
# define BrsDummyInterrupt508 BrsDummyInterrupt(508)
#endif
#if !defined (BrsDummyInterrupt512)
# define BrsDummyInterrupt512 BrsDummyInterrupt(512)
#endif
#if !defined (BrsDummyInterrupt516)
# define BrsDummyInterrupt516 BrsDummyInterrupt(516)
#endif
#if !defined (BrsDummyInterrupt520)
# define BrsDummyInterrupt520 BrsDummyInterrupt(520)
#endif
#if !defined (BrsDummyInterrupt524)
# define BrsDummyInterrupt524 BrsDummyInterrupt(524)
#endif
#if !defined (BrsDummyInterrupt528)
# define BrsDummyInterrupt528 BrsDummyInterrupt(528)
#endif
#if !defined (BrsDummyInterrupt532)
# define BrsDummyInterrupt532 BrsDummyInterrupt(532)
#endif
#if !defined (BrsDummyInterrupt536)
# define BrsDummyInterrupt536 BrsDummyInterrupt(536)
#endif
#if !defined (BrsDummyInterrupt540)
# define BrsDummyInterrupt540 BrsDummyInterrupt(540)
#endif
#if !defined (BrsDummyInterrupt544)
# define BrsDummyInterrupt544 BrsDummyInterrupt(544)
#endif
#if !defined (BrsDummyInterrupt548)
# define BrsDummyInterrupt548 BrsDummyInterrupt(548)
#endif
#if !defined (BrsDummyInterrupt552)
# define BrsDummyInterrupt552 BrsDummyInterrupt(552)
#endif
#if !defined (BrsDummyInterrupt556)
# define BrsDummyInterrupt556 BrsDummyInterrupt(556)
#endif
#if !defined (BrsDummyInterrupt560)
# define BrsDummyInterrupt560 BrsDummyInterrupt(560)
#endif
#if !defined (BrsDummyInterrupt564)
# define BrsDummyInterrupt564 BrsDummyInterrupt(564)
#endif
#if !defined (BrsDummyInterrupt568)
# define BrsDummyInterrupt568 BrsDummyInterrupt(568)
#endif
#if !defined (BrsDummyInterrupt572)
# define BrsDummyInterrupt572 BrsDummyInterrupt(572)
#endif
#if !defined (BrsDummyInterrupt576)
# define BrsDummyInterrupt576 BrsDummyInterrupt(576)
#endif
#if !defined (BrsDummyInterrupt580)
# define BrsDummyInterrupt580 BrsDummyInterrupt(580)
#endif
#if !defined (BrsDummyInterrupt584)
# define BrsDummyInterrupt584 BrsDummyInterrupt(584)
#endif
#if !defined (BrsDummyInterrupt588)
# define BrsDummyInterrupt588 BrsDummyInterrupt(588)
#endif
#if !defined (BrsDummyInterrupt592)
# define BrsDummyInterrupt592 BrsDummyInterrupt(592)
#endif
#if !defined (BrsDummyInterrupt596)
# define BrsDummyInterrupt596 BrsDummyInterrupt(596)
#endif
#if !defined (BrsDummyInterrupt600)
# define BrsDummyInterrupt600 BrsDummyInterrupt(600)
#endif
#if !defined (BrsDummyInterrupt604)
# define BrsDummyInterrupt604 BrsDummyInterrupt(604)
#endif
#if !defined (BrsDummyInterrupt608)
# define BrsDummyInterrupt608 BrsDummyInterrupt(608)
#endif
#if !defined (BrsDummyInterrupt612)
# define BrsDummyInterrupt612 BrsDummyInterrupt(612)
#endif
#if !defined (BrsDummyInterrupt616)
# define BrsDummyInterrupt616 BrsDummyInterrupt(616)
#endif
#if !defined (BrsDummyInterrupt620)
# define BrsDummyInterrupt620 BrsDummyInterrupt(620)
#endif
#if !defined (BrsDummyInterrupt624)
# define BrsDummyInterrupt624 BrsDummyInterrupt(624)
#endif
#if !defined (BrsDummyInterrupt628)
# define BrsDummyInterrupt628 BrsDummyInterrupt(628)
#endif
#if !defined (BrsDummyInterrupt632)
# define BrsDummyInterrupt632 BrsDummyInterrupt(632)
#endif
#if !defined (BrsDummyInterrupt636)
# define BrsDummyInterrupt636 BrsDummyInterrupt(636)
#endif
#if !defined (BrsDummyInterrupt640)
# define BrsDummyInterrupt640 BrsDummyInterrupt(640)
#endif
#if !defined (BrsDummyInterrupt644)
# define BrsDummyInterrupt644 BrsDummyInterrupt(644)
#endif
#if !defined (BrsDummyInterrupt648)
# define BrsDummyInterrupt648 BrsDummyInterrupt(648)
#endif
#if !defined (BrsDummyInterrupt652)
# define BrsDummyInterrupt652 BrsDummyInterrupt(652)
#endif
#if !defined (BrsDummyInterrupt656)
# define BrsDummyInterrupt656 BrsDummyInterrupt(656)
#endif
#if !defined (BrsDummyInterrupt660)
# define BrsDummyInterrupt660 BrsDummyInterrupt(660)
#endif
#if !defined (BrsDummyInterrupt664)
# define BrsDummyInterrupt664 BrsDummyInterrupt(664)
#endif
#if !defined (BrsDummyInterrupt668)
# define BrsDummyInterrupt668 BrsDummyInterrupt(668)
#endif
#if !defined (BrsDummyInterrupt672)
# define BrsDummyInterrupt672 BrsDummyInterrupt(672)
#endif
#if !defined (BrsDummyInterrupt676)
# define BrsDummyInterrupt676 BrsDummyInterrupt(676)
#endif
#if !defined (BrsDummyInterrupt680)
# define BrsDummyInterrupt680 BrsDummyInterrupt(680)
#endif
#if !defined (BrsDummyInterrupt684)
# define BrsDummyInterrupt684 BrsDummyInterrupt(684)
#endif
#if !defined (BrsDummyInterrupt688)
# define BrsDummyInterrupt688 BrsDummyInterrupt(688)
#endif
#if !defined (BrsDummyInterrupt692)
# define BrsDummyInterrupt692 BrsDummyInterrupt(692)
#endif
#if !defined (BrsDummyInterrupt696)
# define BrsDummyInterrupt696 BrsDummyInterrupt(696)
#endif
#if !defined (BrsDummyInterrupt700)
# define BrsDummyInterrupt700 BrsDummyInterrupt(700)
#endif
#if !defined (BrsDummyInterrupt704)
# define BrsDummyInterrupt704 BrsDummyInterrupt(704)
#endif
#if !defined (BrsDummyInterrupt708)
# define BrsDummyInterrupt708 BrsDummyInterrupt(708)
#endif
#if !defined (BrsDummyInterrupt712)
# define BrsDummyInterrupt712 BrsDummyInterrupt(712)
#endif
#if !defined (BrsDummyInterrupt716)
# define BrsDummyInterrupt716 BrsDummyInterrupt(716)
#endif
#if !defined (BrsDummyInterrupt720)
# define BrsDummyInterrupt720 BrsDummyInterrupt(720)
#endif
#if !defined (BrsDummyInterrupt724)
# define BrsDummyInterrupt724 BrsDummyInterrupt(724)
#endif
#if !defined (BrsDummyInterrupt728)
# define BrsDummyInterrupt728 BrsDummyInterrupt(728)
#endif
#if !defined (BrsDummyInterrupt732)
# define BrsDummyInterrupt732 BrsDummyInterrupt(732)
#endif
#if !defined (BrsDummyInterrupt736)
# define BrsDummyInterrupt736 BrsDummyInterrupt(736)
#endif
#if !defined (BrsDummyInterrupt740)
# define BrsDummyInterrupt740 BrsDummyInterrupt(740)
#endif
#if !defined (BrsDummyInterrupt744)
# define BrsDummyInterrupt744 BrsDummyInterrupt(744)
#endif
#if !defined (BrsDummyInterrupt748)
# define BrsDummyInterrupt748 BrsDummyInterrupt(748)
#endif
#if !defined (BrsDummyInterrupt752)
# define BrsDummyInterrupt752 BrsDummyInterrupt(752)
#endif
#if !defined (BrsDummyInterrupt756)
# define BrsDummyInterrupt756 BrsDummyInterrupt(756)
#endif
#if !defined (BrsDummyInterrupt760)
# define BrsDummyInterrupt760 BrsDummyInterrupt(760)
#endif
#if !defined (BrsDummyInterrupt764)
# define BrsDummyInterrupt764 BrsDummyInterrupt(764)
#endif
#if !defined (BrsDummyInterrupt768)
# define BrsDummyInterrupt768 BrsDummyInterrupt(768)
#endif
#if !defined (BrsDummyInterrupt772)
# define BrsDummyInterrupt772 BrsDummyInterrupt(772)
#endif
#if !defined (BrsDummyInterrupt776)
# define BrsDummyInterrupt776 BrsDummyInterrupt(776)
#endif
#if !defined (BrsDummyInterrupt780)
# define BrsDummyInterrupt780 BrsDummyInterrupt(780)
#endif
#if !defined (BrsDummyInterrupt784)
# define BrsDummyInterrupt784 BrsDummyInterrupt(784)
#endif
#if !defined (BrsDummyInterrupt788)
# define BrsDummyInterrupt788 BrsDummyInterrupt(788)
#endif
#if !defined (BrsDummyInterrupt792)
# define BrsDummyInterrupt792 BrsDummyInterrupt(792)
#endif
#if !defined (BrsDummyInterrupt796)
# define BrsDummyInterrupt796 BrsDummyInterrupt(796)
#endif
#if !defined (BrsDummyInterrupt800)
# define BrsDummyInterrupt800 BrsDummyInterrupt(800)
#endif
#if !defined (BrsDummyInterrupt804)
# define BrsDummyInterrupt804 BrsDummyInterrupt(804)
#endif
#if !defined (BrsDummyInterrupt808)
# define BrsDummyInterrupt808 BrsDummyInterrupt(808)
#endif
#if !defined (BrsDummyInterrupt812)
# define BrsDummyInterrupt812 BrsDummyInterrupt(812)
#endif
#if !defined (BrsDummyInterrupt816)
# define BrsDummyInterrupt816 BrsDummyInterrupt(816)
#endif
#if !defined (BrsDummyInterrupt820)
# define BrsDummyInterrupt820 BrsDummyInterrupt(820)
#endif
#if !defined (BrsDummyInterrupt824)
# define BrsDummyInterrupt824 BrsDummyInterrupt(824)
#endif
#if !defined (BrsDummyInterrupt828)
# define BrsDummyInterrupt828 BrsDummyInterrupt(828)
#endif
#if !defined (BrsDummyInterrupt832)
# define BrsDummyInterrupt832 BrsDummyInterrupt(832)
#endif
#if !defined (BrsDummyInterrupt836)
# define BrsDummyInterrupt836 BrsDummyInterrupt(836)
#endif
#if !defined (BrsDummyInterrupt840)
# define BrsDummyInterrupt840 BrsDummyInterrupt(840)
#endif
#if !defined (BrsDummyInterrupt844)
# define BrsDummyInterrupt844 BrsDummyInterrupt(844)
#endif
#if !defined (BrsDummyInterrupt848)
# define BrsDummyInterrupt848 BrsDummyInterrupt(848)
#endif
#if !defined (BrsDummyInterrupt852)
# define BrsDummyInterrupt852 BrsDummyInterrupt(852)
#endif
#if !defined (BrsDummyInterrupt856)
# define BrsDummyInterrupt856 BrsDummyInterrupt(856)
#endif
#if !defined (BrsDummyInterrupt860)
# define BrsDummyInterrupt860 BrsDummyInterrupt(860)
#endif
#if !defined (BrsDummyInterrupt864)
# define BrsDummyInterrupt864 BrsDummyInterrupt(864)
#endif
#if !defined (BrsDummyInterrupt868)
# define BrsDummyInterrupt868 BrsDummyInterrupt(868)
#endif
#if !defined (BrsDummyInterrupt872)
# define BrsDummyInterrupt872 BrsDummyInterrupt(872)
#endif
#if !defined (BrsDummyInterrupt876)
# define BrsDummyInterrupt876 BrsDummyInterrupt(876)
#endif
#if !defined (BrsDummyInterrupt880)
# define BrsDummyInterrupt880 BrsDummyInterrupt(880)
#endif
#if !defined (BrsDummyInterrupt884)
# define BrsDummyInterrupt884 BrsDummyInterrupt(884)
#endif
#if !defined (BrsDummyInterrupt888)
# define BrsDummyInterrupt888 BrsDummyInterrupt(888)
#endif
#if !defined (BrsDummyInterrupt892)
# define BrsDummyInterrupt892 BrsDummyInterrupt(892)
#endif
#if !defined (BrsDummyInterrupt896)
# define BrsDummyInterrupt896 BrsDummyInterrupt(896)
#endif
#if !defined (BrsDummyInterrupt900)
# define BrsDummyInterrupt900 BrsDummyInterrupt(900)
#endif
#if !defined (BrsDummyInterrupt904)
# define BrsDummyInterrupt904 BrsDummyInterrupt(904)
#endif
#if !defined (BrsDummyInterrupt908)
# define BrsDummyInterrupt908 BrsDummyInterrupt(908)
#endif
#if !defined (BrsDummyInterrupt912)
# define BrsDummyInterrupt912 BrsDummyInterrupt(912)
#endif
#if !defined (BrsDummyInterrupt916)
# define BrsDummyInterrupt916 BrsDummyInterrupt(916)
#endif
#if !defined (BrsDummyInterrupt920)
# define BrsDummyInterrupt920 BrsDummyInterrupt(920)
#endif
#if !defined (BrsDummyInterrupt924)
# define BrsDummyInterrupt924 BrsDummyInterrupt(924)
#endif
#if !defined (BrsDummyInterrupt928)
# define BrsDummyInterrupt928 BrsDummyInterrupt(928)
#endif
#if !defined (BrsDummyInterrupt932)
# define BrsDummyInterrupt932 BrsDummyInterrupt(932)
#endif
#if !defined (BrsDummyInterrupt936)
# define BrsDummyInterrupt936 BrsDummyInterrupt(936)
#endif
#if !defined (BrsDummyInterrupt940)
# define BrsDummyInterrupt940 BrsDummyInterrupt(940)
#endif
#if !defined (BrsDummyInterrupt944)
# define BrsDummyInterrupt944 BrsDummyInterrupt(944)
#endif
#if !defined (BrsDummyInterrupt948)
# define BrsDummyInterrupt948 BrsDummyInterrupt(948)
#endif
#if !defined (BrsDummyInterrupt952)
# define BrsDummyInterrupt952 BrsDummyInterrupt(952)
#endif
#if !defined (BrsDummyInterrupt956)
# define BrsDummyInterrupt956 BrsDummyInterrupt(956)
#endif
#if !defined (BrsDummyInterrupt960)
# define BrsDummyInterrupt960 BrsDummyInterrupt(960)
#endif
#if !defined (BrsDummyInterrupt964)
# define BrsDummyInterrupt964 BrsDummyInterrupt(964)
#endif
#if !defined (BrsDummyInterrupt968)
# define BrsDummyInterrupt968 BrsDummyInterrupt(968)
#endif
#if !defined (BrsDummyInterrupt972)
# define BrsDummyInterrupt972 BrsDummyInterrupt(972)
#endif
#if !defined (BrsDummyInterrupt976)
# define BrsDummyInterrupt976 BrsDummyInterrupt(976)
#endif
#if !defined (BrsDummyInterrupt980)
# define BrsDummyInterrupt980 BrsDummyInterrupt(980)
#endif
#if !defined (BrsDummyInterrupt984)
# define BrsDummyInterrupt984 BrsDummyInterrupt(984)
#endif
#if !defined (BrsDummyInterrupt988)
# define BrsDummyInterrupt988 BrsDummyInterrupt(988)
#endif
#if !defined (BrsDummyInterrupt992)
# define BrsDummyInterrupt992 BrsDummyInterrupt(992)
#endif
#if !defined (BrsDummyInterrupt996)
# define BrsDummyInterrupt996 BrsDummyInterrupt(996)
#endif
#if !defined (BrsDummyInterrupt1000)
# define BrsDummyInterrupt1000 BrsDummyInterrupt(1000)
#endif
#if !defined (BrsDummyInterrupt1004)
# define BrsDummyInterrupt1004 BrsDummyInterrupt(1004)
#endif
#if !defined (BrsDummyInterrupt1008)
# define BrsDummyInterrupt1008 BrsDummyInterrupt(1008)
#endif
#if !defined (BrsDummyInterrupt1012)
# define BrsDummyInterrupt1012 BrsDummyInterrupt(1012)
#endif
#if !defined (BrsDummyInterrupt1016)
# define BrsDummyInterrupt1016 BrsDummyInterrupt(1016)
#endif
#if !defined (BrsDummyInterrupt1020)
# define BrsDummyInterrupt1020 BrsDummyInterrupt(1020)
#endif
#if !defined (BrsDummyInterrupt1024)
# define BrsDummyInterrupt1024 BrsDummyInterrupt(1024)
#endif
#if !defined (BrsDummyInterrupt1028)
# define BrsDummyInterrupt1028 BrsDummyInterrupt(1028)
#endif
#if !defined (BrsDummyInterrupt1032)
# define BrsDummyInterrupt1032 BrsDummyInterrupt(1032)
#endif
#if !defined (BrsDummyInterrupt1036)
# define BrsDummyInterrupt1036 BrsDummyInterrupt(1036)
#endif
#if !defined (BrsDummyInterrupt1040)
# define BrsDummyInterrupt1040 BrsDummyInterrupt(1040)
#endif
#if !defined (BrsDummyInterrupt1044)
# define BrsDummyInterrupt1044 BrsDummyInterrupt(1044)
#endif
#if !defined (BrsDummyInterrupt1048)
# define BrsDummyInterrupt1048 BrsDummyInterrupt(1048)
#endif
#if !defined (BrsDummyInterrupt1052)
# define BrsDummyInterrupt1052 BrsDummyInterrupt(1052)
#endif
#if !defined (BrsDummyInterrupt1056)
# define BrsDummyInterrupt1056 BrsDummyInterrupt(1056)
#endif
#if !defined (BrsDummyInterrupt1060)
# define BrsDummyInterrupt1060 BrsDummyInterrupt(1060)
#endif
#if !defined (BrsDummyInterrupt1064)
# define BrsDummyInterrupt1064 BrsDummyInterrupt(1064)
#endif
#if !defined (BrsDummyInterrupt1068)
# define BrsDummyInterrupt1068 BrsDummyInterrupt(1068)
#endif
#if !defined (BrsDummyInterrupt1072)
# define BrsDummyInterrupt1072 BrsDummyInterrupt(1072)
#endif
#if !defined (BrsDummyInterrupt1076)
# define BrsDummyInterrupt1076 BrsDummyInterrupt(1076)
#endif
#if !defined (BrsDummyInterrupt1080)
# define BrsDummyInterrupt1080 BrsDummyInterrupt(1080)
#endif
#if !defined (BrsDummyInterrupt1084)
# define BrsDummyInterrupt1084 BrsDummyInterrupt(1084)
#endif
#if !defined (BrsDummyInterrupt1088)
# define BrsDummyInterrupt1088 BrsDummyInterrupt(1088)
#endif
#if !defined (BrsDummyInterrupt1092)
# define BrsDummyInterrupt1092 BrsDummyInterrupt(1092)
#endif
#if !defined (BrsDummyInterrupt1096)
# define BrsDummyInterrupt1096 BrsDummyInterrupt(1096)
#endif
#if !defined (BrsDummyInterrupt1100)
# define BrsDummyInterrupt1100 BrsDummyInterrupt(1100)
#endif
#if !defined (BrsDummyInterrupt1104)
# define BrsDummyInterrupt1104 BrsDummyInterrupt(1104)
#endif
#if !defined (BrsDummyInterrupt1108)
# define BrsDummyInterrupt1108 BrsDummyInterrupt(1108)
#endif
#if !defined (BrsDummyInterrupt1112)
# define BrsDummyInterrupt1112 BrsDummyInterrupt(1112)
#endif
#if !defined (BrsDummyInterrupt1116)
# define BrsDummyInterrupt1116 BrsDummyInterrupt(1116)
#endif
#if !defined (BrsDummyInterrupt1120)
# define BrsDummyInterrupt1120 BrsDummyInterrupt(1120)
#endif
#if !defined (BrsDummyInterrupt1124)
# define BrsDummyInterrupt1124 BrsDummyInterrupt(1124)
#endif
#if !defined (BrsDummyInterrupt1128)
# define BrsDummyInterrupt1128 BrsDummyInterrupt(1128)
#endif
#if !defined (BrsDummyInterrupt1132)
# define BrsDummyInterrupt1132 BrsDummyInterrupt(1132)
#endif
#if !defined (BrsDummyInterrupt1136)
# define BrsDummyInterrupt1136 BrsDummyInterrupt(1136)
#endif
#if !defined (BrsDummyInterrupt1140)
# define BrsDummyInterrupt1140 BrsDummyInterrupt(1140)
#endif
#if !defined (BrsDummyInterrupt1144)
# define BrsDummyInterrupt1144 BrsDummyInterrupt(1144)
#endif
#if !defined (BrsDummyInterrupt1148)
# define BrsDummyInterrupt1148 BrsDummyInterrupt(1148)
#endif
#if !defined (BrsDummyInterrupt1152)
# define BrsDummyInterrupt1152 BrsDummyInterrupt(1152)
#endif
#if !defined (BrsDummyInterrupt1156)
# define BrsDummyInterrupt1156 BrsDummyInterrupt(1156)
#endif
#if !defined (BrsDummyInterrupt1160)
# define BrsDummyInterrupt1160 BrsDummyInterrupt(1160)
#endif
#if !defined (BrsDummyInterrupt1164)
# define BrsDummyInterrupt1164 BrsDummyInterrupt(1164)
#endif
#if !defined (BrsDummyInterrupt1168)
# define BrsDummyInterrupt1168 BrsDummyInterrupt(1168)
#endif
#if !defined (BrsDummyInterrupt1172)
# define BrsDummyInterrupt1172 BrsDummyInterrupt(1172)
#endif
#if !defined (BrsDummyInterrupt1176)
# define BrsDummyInterrupt1176 BrsDummyInterrupt(1176)
#endif
#if !defined (BrsDummyInterrupt1180)
# define BrsDummyInterrupt1180 BrsDummyInterrupt(1180)
#endif
#if !defined (BrsDummyInterrupt1184)
# define BrsDummyInterrupt1184 BrsDummyInterrupt(1184)
#endif
#if !defined (BrsDummyInterrupt1188)
# define BrsDummyInterrupt1188 BrsDummyInterrupt(1188)
#endif
#if !defined (BrsDummyInterrupt1192)
# define BrsDummyInterrupt1192 BrsDummyInterrupt(1192)
#endif
#if !defined (BrsDummyInterrupt1196)
# define BrsDummyInterrupt1196 BrsDummyInterrupt(1196)
#endif
#if !defined (BrsDummyInterrupt1200)
# define BrsDummyInterrupt1200 BrsDummyInterrupt(1200)
#endif
#if !defined (BrsDummyInterrupt1204)
# define BrsDummyInterrupt1204 BrsDummyInterrupt(1204)
#endif
#if !defined (BrsDummyInterrupt1208)
# define BrsDummyInterrupt1208 BrsDummyInterrupt(1208)
#endif
#if !defined (BrsDummyInterrupt1212)
# define BrsDummyInterrupt1212 BrsDummyInterrupt(1212)
#endif
#if !defined (BrsDummyInterrupt1216)
# define BrsDummyInterrupt1216 BrsDummyInterrupt(1216)
#endif
#if !defined (BrsDummyInterrupt1220)
# define BrsDummyInterrupt1220 BrsDummyInterrupt(1220)
#endif
#if !defined (BrsDummyInterrupt1224)
# define BrsDummyInterrupt1224 BrsDummyInterrupt(1224)
#endif
#if !defined (BrsDummyInterrupt1228)
# define BrsDummyInterrupt1228 BrsDummyInterrupt(1228)
#endif
#if !defined (BrsDummyInterrupt1232)
# define BrsDummyInterrupt1232 BrsDummyInterrupt(1232)
#endif
#if !defined (BrsDummyInterrupt1236)
# define BrsDummyInterrupt1236 BrsDummyInterrupt(1236)
#endif
#if !defined (BrsDummyInterrupt1240)
# define BrsDummyInterrupt1240 BrsDummyInterrupt(1240)
#endif
#if !defined (BrsDummyInterrupt1244)
# define BrsDummyInterrupt1244 BrsDummyInterrupt(1244)
#endif
#if !defined (BrsDummyInterrupt1248)
# define BrsDummyInterrupt1248 BrsDummyInterrupt(1248)
#endif
#if !defined (BrsDummyInterrupt1252)
# define BrsDummyInterrupt1252 BrsDummyInterrupt(1252)
#endif
#if !defined (BrsDummyInterrupt1256)
# define BrsDummyInterrupt1256 BrsDummyInterrupt(1256)
#endif
#if !defined (BrsDummyInterrupt1260)
# define BrsDummyInterrupt1260 BrsDummyInterrupt(1260)
#endif
#if !defined (BrsDummyInterrupt1264)
# define BrsDummyInterrupt1264 BrsDummyInterrupt(1264)
#endif
#if !defined (BrsDummyInterrupt1268)
# define BrsDummyInterrupt1268 BrsDummyInterrupt(1268)
#endif
#if !defined (BrsDummyInterrupt1272)
# define BrsDummyInterrupt1272 BrsDummyInterrupt(1272)
#endif
#if !defined (BrsDummyInterrupt1276)
# define BrsDummyInterrupt1276 BrsDummyInterrupt(1276)
#endif
#if !defined (BrsDummyInterrupt1280)
# define BrsDummyInterrupt1280 BrsDummyInterrupt(1280)
#endif
#if !defined (BrsDummyInterrupt1284)
# define BrsDummyInterrupt1284 BrsDummyInterrupt(1284)
#endif
#if !defined (BrsDummyInterrupt1288)
# define BrsDummyInterrupt1288 BrsDummyInterrupt(1288)
#endif
#if !defined (BrsDummyInterrupt1292)
# define BrsDummyInterrupt1292 BrsDummyInterrupt(1292)
#endif
#if !defined (BrsDummyInterrupt1296)
# define BrsDummyInterrupt1296 BrsDummyInterrupt(1296)
#endif
#if !defined (BrsDummyInterrupt1300)
# define BrsDummyInterrupt1300 BrsDummyInterrupt(1300)
#endif
#if !defined (BrsDummyInterrupt1304)
# define BrsDummyInterrupt1304 BrsDummyInterrupt(1304)
#endif
#if !defined (BrsDummyInterrupt1308)
# define BrsDummyInterrupt1308 BrsDummyInterrupt(1308)
#endif
#if !defined (BrsDummyInterrupt1312)
# define BrsDummyInterrupt1312 BrsDummyInterrupt(1312)
#endif
#if !defined (BrsDummyInterrupt1316)
# define BrsDummyInterrupt1316 BrsDummyInterrupt(1316)
#endif
#if !defined (BrsDummyInterrupt1320)
# define BrsDummyInterrupt1320 BrsDummyInterrupt(1320)
#endif
#if !defined (BrsDummyInterrupt1324)
# define BrsDummyInterrupt1324 BrsDummyInterrupt(1324)
#endif
#if !defined (BrsDummyInterrupt1328)
# define BrsDummyInterrupt1328 BrsDummyInterrupt(1328)
#endif
#if !defined (BrsDummyInterrupt1332)
# define BrsDummyInterrupt1332 BrsDummyInterrupt(1332)
#endif
#if !defined (BrsDummyInterrupt1336)
# define BrsDummyInterrupt1336 BrsDummyInterrupt(1336)
#endif
#if !defined (BrsDummyInterrupt1340)
# define BrsDummyInterrupt1340 BrsDummyInterrupt(1340)
#endif
#if !defined (BrsDummyInterrupt1344)
# define BrsDummyInterrupt1344 BrsDummyInterrupt(1344)
#endif
#if !defined (BrsDummyInterrupt1348)
# define BrsDummyInterrupt1348 BrsDummyInterrupt(1348)
#endif
#if !defined (BrsDummyInterrupt1352)
# define BrsDummyInterrupt1352 BrsDummyInterrupt(1352)
#endif
#if !defined (BrsDummyInterrupt1356)
# define BrsDummyInterrupt1356 BrsDummyInterrupt(1356)
#endif
#if !defined (BrsDummyInterrupt1360)
# define BrsDummyInterrupt1360 BrsDummyInterrupt(1360)
#endif
#if !defined (BrsDummyInterrupt1364)
# define BrsDummyInterrupt1364 BrsDummyInterrupt(1364)
#endif
#if !defined (BrsDummyInterrupt1368)
# define BrsDummyInterrupt1368 BrsDummyInterrupt(1368)
#endif
#if !defined (BrsDummyInterrupt1372)
# define BrsDummyInterrupt1372 BrsDummyInterrupt(1372)
#endif
#if !defined (BrsDummyInterrupt1376)
# define BrsDummyInterrupt1376 BrsDummyInterrupt(1376)
#endif
#if !defined (BrsDummyInterrupt1380)
# define BrsDummyInterrupt1380 BrsDummyInterrupt(1380)
#endif
#if !defined (BrsDummyInterrupt1384)
# define BrsDummyInterrupt1384 BrsDummyInterrupt(1384)
#endif
#if !defined (BrsDummyInterrupt1388)
# define BrsDummyInterrupt1388 BrsDummyInterrupt(1388)
#endif
#if !defined (BrsDummyInterrupt1392)
# define BrsDummyInterrupt1392 BrsDummyInterrupt(1392)
#endif
#if !defined (BrsDummyInterrupt1396)
# define BrsDummyInterrupt1396 BrsDummyInterrupt(1396)
#endif
#if !defined (BrsDummyInterrupt1400)
# define BrsDummyInterrupt1400 BrsDummyInterrupt(1400)
#endif
#if !defined (BrsDummyInterrupt1404)
# define BrsDummyInterrupt1404 BrsDummyInterrupt(1404)
#endif
#if !defined (BrsDummyInterrupt1408)
# define BrsDummyInterrupt1408 BrsDummyInterrupt(1408)
#endif
#if !defined (BrsDummyInterrupt1412)
# define BrsDummyInterrupt1412 BrsDummyInterrupt(1412)
#endif
#if !defined (BrsDummyInterrupt1416)
# define BrsDummyInterrupt1416 BrsDummyInterrupt(1416)
#endif
#if !defined (BrsDummyInterrupt1420)
# define BrsDummyInterrupt1420 BrsDummyInterrupt(1420)
#endif
#if !defined (BrsDummyInterrupt1424)
# define BrsDummyInterrupt1424 BrsDummyInterrupt(1424)
#endif
#if !defined (BrsDummyInterrupt1428)
# define BrsDummyInterrupt1428 BrsDummyInterrupt(1428)
#endif
#if !defined (BrsDummyInterrupt1432)
# define BrsDummyInterrupt1432 BrsDummyInterrupt(1432)
#endif
#if !defined (BrsDummyInterrupt1436)
# define BrsDummyInterrupt1436 BrsDummyInterrupt(1436)
#endif
#if !defined (BrsDummyInterrupt1440)
# define BrsDummyInterrupt1440 BrsDummyInterrupt(1440)
#endif
#if !defined (BrsDummyInterrupt1444)
# define BrsDummyInterrupt1444 BrsDummyInterrupt(1444)
#endif
#if !defined (BrsDummyInterrupt1448)
# define BrsDummyInterrupt1448 BrsDummyInterrupt(1448)
#endif
#if !defined (BrsDummyInterrupt1452)
# define BrsDummyInterrupt1452 BrsDummyInterrupt(1452)
#endif
#if !defined (BrsDummyInterrupt1456)
# define BrsDummyInterrupt1456 BrsDummyInterrupt(1456)
#endif
#if !defined (BrsDummyInterrupt1460)
# define BrsDummyInterrupt1460 BrsDummyInterrupt(1460)
#endif
#if !defined (BrsDummyInterrupt1464)
# define BrsDummyInterrupt1464 BrsDummyInterrupt(1464)
#endif
#if !defined (BrsDummyInterrupt1468)
# define BrsDummyInterrupt1468 BrsDummyInterrupt(1468)
#endif
#if !defined (BrsDummyInterrupt1472)
# define BrsDummyInterrupt1472 BrsDummyInterrupt(1472)
#endif
#if !defined (BrsDummyInterrupt1476)
# define BrsDummyInterrupt1476 BrsDummyInterrupt(1476)
#endif
#if !defined (BrsDummyInterrupt1480)
# define BrsDummyInterrupt1480 BrsDummyInterrupt(1480)
#endif
#if !defined (BrsDummyInterrupt1484)
# define BrsDummyInterrupt1484 BrsDummyInterrupt(1484)
#endif
#if !defined (BrsDummyInterrupt1488)
# define BrsDummyInterrupt1488 BrsDummyInterrupt(1488)
#endif
#if !defined (BrsDummyInterrupt1492)
# define BrsDummyInterrupt1492 BrsDummyInterrupt(1492)
#endif
#if !defined (BrsDummyInterrupt1496)
# define BrsDummyInterrupt1496 BrsDummyInterrupt(1496)
#endif
#if !defined (BrsDummyInterrupt1500)
# define BrsDummyInterrupt1500 BrsDummyInterrupt(1500)
#endif
#if !defined (BrsDummyInterrupt1504)
# define BrsDummyInterrupt1504 BrsDummyInterrupt(1504)
#endif
#if !defined (BrsDummyInterrupt1508)
# define BrsDummyInterrupt1508 BrsDummyInterrupt(1508)
#endif
#if !defined (BrsDummyInterrupt1512)
# define BrsDummyInterrupt1512 BrsDummyInterrupt(1512)
#endif
#if !defined (BrsDummyInterrupt1516)
# define BrsDummyInterrupt1516 BrsDummyInterrupt(1516)
#endif
#if !defined (BrsDummyInterrupt1520)
# define BrsDummyInterrupt1520 BrsDummyInterrupt(1520)
#endif
#if !defined (BrsDummyInterrupt1524)
# define BrsDummyInterrupt1524 BrsDummyInterrupt(1524)
#endif
#if !defined (BrsDummyInterrupt1528)
# define BrsDummyInterrupt1528 BrsDummyInterrupt(1528)
#endif
#if !defined (BrsDummyInterrupt1532)
# define BrsDummyInterrupt1532 BrsDummyInterrupt(1532)
#endif
#if !defined (BrsDummyInterrupt1536)
# define BrsDummyInterrupt1536 BrsDummyInterrupt(1536)
#endif
#if !defined (BrsDummyInterrupt1540)
# define BrsDummyInterrupt1540 BrsDummyInterrupt(1540)
#endif
#if !defined (BrsDummyInterrupt1544)
# define BrsDummyInterrupt1544 BrsDummyInterrupt(1544)
#endif
#if !defined (BrsDummyInterrupt1548)
# define BrsDummyInterrupt1548 BrsDummyInterrupt(1548)
#endif
#if !defined (BrsDummyInterrupt1552)
# define BrsDummyInterrupt1552 BrsDummyInterrupt(1552)
#endif
#if !defined (BrsDummyInterrupt1556)
# define BrsDummyInterrupt1556 BrsDummyInterrupt(1556)
#endif
#if !defined (BrsDummyInterrupt1560)
# define BrsDummyInterrupt1560 BrsDummyInterrupt(1560)
#endif
#if !defined (BrsDummyInterrupt1564)
# define BrsDummyInterrupt1564 BrsDummyInterrupt(1564)
#endif
#if !defined (BrsDummyInterrupt1568)
# define BrsDummyInterrupt1568 BrsDummyInterrupt(1568)
#endif
#if !defined (BrsDummyInterrupt1572)
# define BrsDummyInterrupt1572 BrsDummyInterrupt(1572)
#endif
#if !defined (BrsDummyInterrupt1576)
# define BrsDummyInterrupt1576 BrsDummyInterrupt(1576)
#endif
#if !defined (BrsDummyInterrupt1580)
# define BrsDummyInterrupt1580 BrsDummyInterrupt(1580)
#endif
#if !defined (BrsDummyInterrupt1584)
# define BrsDummyInterrupt1584 BrsDummyInterrupt(1584)
#endif
#if !defined (BrsDummyInterrupt1588)
# define BrsDummyInterrupt1588 BrsDummyInterrupt(1588)
#endif
#if !defined (BrsDummyInterrupt1592)
# define BrsDummyInterrupt1592 BrsDummyInterrupt(1592)
#endif
#if !defined (BrsDummyInterrupt1596)
# define BrsDummyInterrupt1596 BrsDummyInterrupt(1596)
#endif
#if !defined (BrsDummyInterrupt1600)
# define BrsDummyInterrupt1600 BrsDummyInterrupt(1600)
#endif
#if !defined (BrsDummyInterrupt1604)
# define BrsDummyInterrupt1604 BrsDummyInterrupt(1604)
#endif
#if !defined (BrsDummyInterrupt1608)
# define BrsDummyInterrupt1608 BrsDummyInterrupt(1608)
#endif
#if !defined (BrsDummyInterrupt1612)
# define BrsDummyInterrupt1612 BrsDummyInterrupt(1612)
#endif
#if !defined (BrsDummyInterrupt1616)
# define BrsDummyInterrupt1616 BrsDummyInterrupt(1616)
#endif
#if !defined (BrsDummyInterrupt1620)
# define BrsDummyInterrupt1620 BrsDummyInterrupt(1620)
#endif
#if !defined (BrsDummyInterrupt1624)
# define BrsDummyInterrupt1624 BrsDummyInterrupt(1624)
#endif
#if !defined (BrsDummyInterrupt1628)
# define BrsDummyInterrupt1628 BrsDummyInterrupt(1628)
#endif
#if !defined (BrsDummyInterrupt1632)
# define BrsDummyInterrupt1632 BrsDummyInterrupt(1632)
#endif
#if !defined (BrsDummyInterrupt1636)
# define BrsDummyInterrupt1636 BrsDummyInterrupt(1636)
#endif
#if !defined (BrsDummyInterrupt1640)
# define BrsDummyInterrupt1640 BrsDummyInterrupt(1640)
#endif
#if !defined (BrsDummyInterrupt1644)
# define BrsDummyInterrupt1644 BrsDummyInterrupt(1644)
#endif
#if !defined (BrsDummyInterrupt1648)
# define BrsDummyInterrupt1648 BrsDummyInterrupt(1648)
#endif
#if !defined (BrsDummyInterrupt1652)
# define BrsDummyInterrupt1652 BrsDummyInterrupt(1652)
#endif
#if !defined (BrsDummyInterrupt1656)
# define BrsDummyInterrupt1656 BrsDummyInterrupt(1656)
#endif
#if !defined (BrsDummyInterrupt1660)
# define BrsDummyInterrupt1660 BrsDummyInterrupt(1660)
#endif
#if !defined (BrsDummyInterrupt1664)
# define BrsDummyInterrupt1664 BrsDummyInterrupt(1664)
#endif
#if !defined (BrsDummyInterrupt1668)
# define BrsDummyInterrupt1668 BrsDummyInterrupt(1668)
#endif
#if !defined (BrsDummyInterrupt1672)
# define BrsDummyInterrupt1672 BrsDummyInterrupt(1672)
#endif
#if !defined (BrsDummyInterrupt1676)
# define BrsDummyInterrupt1676 BrsDummyInterrupt(1676)
#endif
#if !defined (BrsDummyInterrupt1680)
# define BrsDummyInterrupt1680 BrsDummyInterrupt(1680)
#endif
#if !defined (BrsDummyInterrupt1684)
# define BrsDummyInterrupt1684 BrsDummyInterrupt(1684)
#endif
#if !defined (BrsDummyInterrupt1688)
# define BrsDummyInterrupt1688 BrsDummyInterrupt(1688)
#endif
#if !defined (BrsDummyInterrupt1692)
# define BrsDummyInterrupt1692 BrsDummyInterrupt(1692)
#endif
#if !defined (BrsDummyInterrupt1696)
# define BrsDummyInterrupt1696 BrsDummyInterrupt(1696)
#endif
#if !defined (BrsDummyInterrupt1700)
# define BrsDummyInterrupt1700 BrsDummyInterrupt(1700)
#endif
#if !defined (BrsDummyInterrupt1704)
# define BrsDummyInterrupt1704 BrsDummyInterrupt(1704)
#endif
#if !defined (BrsDummyInterrupt1708)
# define BrsDummyInterrupt1708 BrsDummyInterrupt(1708)
#endif
#if !defined (BrsDummyInterrupt1712)
# define BrsDummyInterrupt1712 BrsDummyInterrupt(1712)
#endif
#if !defined (BrsDummyInterrupt1716)
# define BrsDummyInterrupt1716 BrsDummyInterrupt(1716)
#endif
#if !defined (BrsDummyInterrupt1720)
# define BrsDummyInterrupt1720 BrsDummyInterrupt(1720)
#endif
#if !defined (BrsDummyInterrupt1724)
# define BrsDummyInterrupt1724 BrsDummyInterrupt(1724)
#endif
#if !defined (BrsDummyInterrupt1728)
# define BrsDummyInterrupt1728 BrsDummyInterrupt(1728)
#endif
#if !defined (BrsDummyInterrupt1732)
# define BrsDummyInterrupt1732 BrsDummyInterrupt(1732)
#endif
#if !defined (BrsDummyInterrupt1736)
# define BrsDummyInterrupt1736 BrsDummyInterrupt(1736)
#endif
#if !defined (BrsDummyInterrupt1740)
# define BrsDummyInterrupt1740 BrsDummyInterrupt(1740)
#endif
#if !defined (BrsDummyInterrupt1744)
# define BrsDummyInterrupt1744 BrsDummyInterrupt(1744)
#endif
#if !defined (BrsDummyInterrupt1748)
# define BrsDummyInterrupt1748 BrsDummyInterrupt(1748)
#endif
#if !defined (BrsDummyInterrupt1752)
# define BrsDummyInterrupt1752 BrsDummyInterrupt(1752)
#endif
#if !defined (BrsDummyInterrupt1756)
# define BrsDummyInterrupt1756 BrsDummyInterrupt(1756)
#endif
#if !defined (BrsDummyInterrupt1760)
# define BrsDummyInterrupt1760 BrsDummyInterrupt(1760)
#endif
#if !defined (BrsDummyInterrupt1764)
# define BrsDummyInterrupt1764 BrsDummyInterrupt(1764)
#endif
#if !defined (BrsDummyInterrupt1768)
# define BrsDummyInterrupt1768 BrsDummyInterrupt(1768)
#endif
#if !defined (BrsDummyInterrupt1772)
# define BrsDummyInterrupt1772 BrsDummyInterrupt(1772)
#endif
#if !defined (BrsDummyInterrupt1776)
# define BrsDummyInterrupt1776 BrsDummyInterrupt(1776)
#endif
#if !defined (BrsDummyInterrupt1780)
# define BrsDummyInterrupt1780 BrsDummyInterrupt(1780)
#endif
#if !defined (BrsDummyInterrupt1784)
# define BrsDummyInterrupt1784 BrsDummyInterrupt(1784)
#endif
#if !defined (BrsDummyInterrupt1788)
# define BrsDummyInterrupt1788 BrsDummyInterrupt(1788)
#endif
#if !defined (BrsDummyInterrupt1792)
# define BrsDummyInterrupt1792 BrsDummyInterrupt(1792)
#endif
#if !defined (BrsDummyInterrupt1796)
# define BrsDummyInterrupt1796 BrsDummyInterrupt(1796)
#endif
#if !defined (BrsDummyInterrupt1800)
# define BrsDummyInterrupt1800 BrsDummyInterrupt(1800)
#endif
#if !defined (BrsDummyInterrupt1804)
# define BrsDummyInterrupt1804 BrsDummyInterrupt(1804)
#endif
#if !defined (BrsDummyInterrupt1808)
# define BrsDummyInterrupt1808 BrsDummyInterrupt(1808)
#endif
#if !defined (BrsDummyInterrupt1812)
# define BrsDummyInterrupt1812 BrsDummyInterrupt(1812)
#endif
#if !defined (BrsDummyInterrupt1816)
# define BrsDummyInterrupt1816 BrsDummyInterrupt(1816)
#endif
#if !defined (BrsDummyInterrupt1820)
# define BrsDummyInterrupt1820 BrsDummyInterrupt(1820)
#endif
#if !defined (BrsDummyInterrupt1824)
# define BrsDummyInterrupt1824 BrsDummyInterrupt(1824)
#endif
#if !defined (BrsDummyInterrupt1828)
# define BrsDummyInterrupt1828 BrsDummyInterrupt(1828)
#endif
#if !defined (BrsDummyInterrupt1832)
# define BrsDummyInterrupt1832 BrsDummyInterrupt(1832)
#endif
#if !defined (BrsDummyInterrupt1836)
# define BrsDummyInterrupt1836 BrsDummyInterrupt(1836)
#endif
#if !defined (BrsDummyInterrupt1840)
# define BrsDummyInterrupt1840 BrsDummyInterrupt(1840)
#endif
#if !defined (BrsDummyInterrupt1844)
# define BrsDummyInterrupt1844 BrsDummyInterrupt(1844)
#endif
#if !defined (BrsDummyInterrupt1848)
# define BrsDummyInterrupt1848 BrsDummyInterrupt(1848)
#endif
#if !defined (BrsDummyInterrupt1852)
# define BrsDummyInterrupt1852 BrsDummyInterrupt(1852)
#endif
#if !defined (BrsDummyInterrupt1856)
# define BrsDummyInterrupt1856 BrsDummyInterrupt(1856)
#endif
#if !defined (BrsDummyInterrupt1860)
# define BrsDummyInterrupt1860 BrsDummyInterrupt(1860)
#endif
#if !defined (BrsDummyInterrupt1864)
# define BrsDummyInterrupt1864 BrsDummyInterrupt(1864)
#endif
#if !defined (BrsDummyInterrupt1868)
# define BrsDummyInterrupt1868 BrsDummyInterrupt(1868)
#endif
#if !defined (BrsDummyInterrupt1872)
# define BrsDummyInterrupt1872 BrsDummyInterrupt(1872)
#endif
#if !defined (BrsDummyInterrupt1876)
# define BrsDummyInterrupt1876 BrsDummyInterrupt(1876)
#endif
#if !defined (BrsDummyInterrupt1880)
# define BrsDummyInterrupt1880 BrsDummyInterrupt(1880)
#endif
#if !defined (BrsDummyInterrupt1884)
# define BrsDummyInterrupt1884 BrsDummyInterrupt(1884)
#endif
#if !defined (BrsDummyInterrupt1888)
# define BrsDummyInterrupt1888 BrsDummyInterrupt(1888)
#endif
#if !defined (BrsDummyInterrupt1892)
# define BrsDummyInterrupt1892 BrsDummyInterrupt(1892)
#endif
#if !defined (BrsDummyInterrupt1896)
# define BrsDummyInterrupt1896 BrsDummyInterrupt(1896)
#endif
#if !defined (BrsDummyInterrupt1900)
# define BrsDummyInterrupt1900 BrsDummyInterrupt(1900)
#endif
#if !defined (BrsDummyInterrupt1904)
# define BrsDummyInterrupt1904 BrsDummyInterrupt(1904)
#endif
#if !defined (BrsDummyInterrupt1908)
# define BrsDummyInterrupt1908 BrsDummyInterrupt(1908)
#endif
#if !defined (BrsDummyInterrupt1912)
# define BrsDummyInterrupt1912 BrsDummyInterrupt(1912)
#endif
#if !defined (BrsDummyInterrupt1916)
# define BrsDummyInterrupt1916 BrsDummyInterrupt(1916)
#endif
#if !defined (BrsDummyInterrupt1920)
# define BrsDummyInterrupt1920 BrsDummyInterrupt(1920)
#endif
#if !defined (BrsDummyInterrupt1924)
# define BrsDummyInterrupt1924 BrsDummyInterrupt(1924)
#endif
#if !defined (BrsDummyInterrupt1928)
# define BrsDummyInterrupt1928 BrsDummyInterrupt(1928)
#endif
#if !defined (BrsDummyInterrupt1932)
# define BrsDummyInterrupt1932 BrsDummyInterrupt(1932)
#endif
#if !defined (BrsDummyInterrupt1936)
# define BrsDummyInterrupt1936 BrsDummyInterrupt(1936)
#endif
#if !defined (BrsDummyInterrupt1940)
# define BrsDummyInterrupt1940 BrsDummyInterrupt(1940)
#endif
#if !defined (BrsDummyInterrupt1944)
# define BrsDummyInterrupt1944 BrsDummyInterrupt(1944)
#endif
#if !defined (BrsDummyInterrupt1948)
# define BrsDummyInterrupt1948 BrsDummyInterrupt(1948)
#endif
#if !defined (BrsDummyInterrupt1952)
# define BrsDummyInterrupt1952 BrsDummyInterrupt(1952)
#endif
#if !defined (BrsDummyInterrupt1956)
# define BrsDummyInterrupt1956 BrsDummyInterrupt(1956)
#endif
#if !defined (BrsDummyInterrupt1960)
# define BrsDummyInterrupt1960 BrsDummyInterrupt(1960)
#endif
#if !defined (BrsDummyInterrupt1964)
# define BrsDummyInterrupt1964 BrsDummyInterrupt(1964)
#endif
#if !defined (BrsDummyInterrupt1968)
# define BrsDummyInterrupt1968 BrsDummyInterrupt(1968)
#endif
#if !defined (BrsDummyInterrupt1972)
# define BrsDummyInterrupt1972 BrsDummyInterrupt(1972)
#endif
#if !defined (BrsDummyInterrupt1976)
# define BrsDummyInterrupt1976 BrsDummyInterrupt(1976)
#endif
#if !defined (BrsDummyInterrupt1980)
# define BrsDummyInterrupt1980 BrsDummyInterrupt(1980)
#endif
#if !defined (BrsDummyInterrupt1984)
# define BrsDummyInterrupt1984 BrsDummyInterrupt(1984)
#endif
#if !defined (BrsDummyInterrupt1988)
# define BrsDummyInterrupt1988 BrsDummyInterrupt(1988)
#endif
#if !defined (BrsDummyInterrupt1992)
# define BrsDummyInterrupt1992 BrsDummyInterrupt(1992)
#endif
#if !defined (BrsDummyInterrupt1996)
# define BrsDummyInterrupt1996 BrsDummyInterrupt(1996)
#endif
#if !defined (BrsDummyInterrupt2000)
# define BrsDummyInterrupt2000 BrsDummyInterrupt(2000)
#endif
#if !defined (BrsDummyInterrupt2004)
# define BrsDummyInterrupt2004 BrsDummyInterrupt(2004)
#endif
#if !defined (BrsDummyInterrupt2008)
# define BrsDummyInterrupt2008 BrsDummyInterrupt(2008)
#endif
#if !defined (BrsDummyInterrupt2012)
# define BrsDummyInterrupt2012 BrsDummyInterrupt(2012)
#endif
#if !defined (BrsDummyInterrupt2016)
# define BrsDummyInterrupt2016 BrsDummyInterrupt(2016)
#endif
#if !defined (BrsDummyInterrupt2020)
# define BrsDummyInterrupt2020 BrsDummyInterrupt(2020)
#endif
#if !defined (BrsDummyInterrupt2024)
# define BrsDummyInterrupt2024 BrsDummyInterrupt(2024)
#endif
#if !defined (BrsDummyInterrupt2028)
# define BrsDummyInterrupt2028 BrsDummyInterrupt(2028)
#endif
#if !defined (BrsDummyInterrupt2032)
# define BrsDummyInterrupt2032 BrsDummyInterrupt(2032)
#endif
#if !defined (BrsDummyInterrupt2036)
# define BrsDummyInterrupt2036 BrsDummyInterrupt(2036)
#endif
#if !defined (BrsDummyInterrupt2040)
# define BrsDummyInterrupt2040 BrsDummyInterrupt(2040)
#endif
#if !defined (BrsDummyInterrupt2044)
# define BrsDummyInterrupt2044 BrsDummyInterrupt(2044)
#endif
#if !defined (BrsDummyInterrupt2048)
# define BrsDummyInterrupt2048 BrsDummyInterrupt(2048)
#endif
#if !defined (BrsDummyInterrupt2052)
# define BrsDummyInterrupt2052 BrsDummyInterrupt(2052)
#endif
#if !defined (BrsDummyInterrupt2056)
# define BrsDummyInterrupt2056 BrsDummyInterrupt(2056)
#endif
#if !defined (BrsDummyInterrupt2060)
# define BrsDummyInterrupt2060 BrsDummyInterrupt(2060)
#endif
#if !defined (BrsDummyInterrupt2064)
# define BrsDummyInterrupt2064 BrsDummyInterrupt(2064)
#endif
#if !defined (BrsDummyInterrupt2068)
# define BrsDummyInterrupt2068 BrsDummyInterrupt(2068)
#endif
#if !defined (BrsDummyInterrupt2072)
# define BrsDummyInterrupt2072 BrsDummyInterrupt(2072)
#endif
#if !defined (BrsDummyInterrupt2076)
# define BrsDummyInterrupt2076 BrsDummyInterrupt(2076)
#endif
#if !defined (BrsDummyInterrupt2080)
# define BrsDummyInterrupt2080 BrsDummyInterrupt(2080)
#endif
#if !defined (BrsDummyInterrupt2084)
# define BrsDummyInterrupt2084 BrsDummyInterrupt(2084)
#endif
#if !defined (BrsDummyInterrupt2088)
# define BrsDummyInterrupt2088 BrsDummyInterrupt(2088)
#endif
#if !defined (BrsDummyInterrupt2092)
# define BrsDummyInterrupt2092 BrsDummyInterrupt(2092)
#endif
#if !defined (BrsDummyInterrupt2096)
# define BrsDummyInterrupt2096 BrsDummyInterrupt(2096)
#endif
#if !defined (BrsDummyInterrupt2100)
# define BrsDummyInterrupt2100 BrsDummyInterrupt(2100)
#endif
#if !defined (BrsDummyInterrupt2104)
# define BrsDummyInterrupt2104 BrsDummyInterrupt(2104)
#endif
#if !defined (BrsDummyInterrupt2108)
# define BrsDummyInterrupt2108 BrsDummyInterrupt(2108)
#endif
#if !defined (BrsDummyInterrupt2112)
# define BrsDummyInterrupt2112 BrsDummyInterrupt(2112)
#endif
#if !defined (BrsDummyInterrupt2116)
# define BrsDummyInterrupt2116 BrsDummyInterrupt(2116)
#endif
#if !defined (BrsDummyInterrupt2120)
# define BrsDummyInterrupt2120 BrsDummyInterrupt(2120)
#endif
#if !defined (BrsDummyInterrupt2124)
# define BrsDummyInterrupt2124 BrsDummyInterrupt(2124)
#endif
#if !defined (BrsDummyInterrupt2128)
# define BrsDummyInterrupt2128 BrsDummyInterrupt(2128)
#endif
#if !defined (BrsDummyInterrupt2132)
# define BrsDummyInterrupt2132 BrsDummyInterrupt(2132)
#endif
#if !defined (BrsDummyInterrupt2136)
# define BrsDummyInterrupt2136 BrsDummyInterrupt(2136)
#endif
#if !defined (BrsDummyInterrupt2140)
# define BrsDummyInterrupt2140 BrsDummyInterrupt(2140)
#endif
#if !defined (BrsDummyInterrupt2144)
# define BrsDummyInterrupt2144 BrsDummyInterrupt(2144)
#endif
#if !defined (BrsDummyInterrupt2148)
# define BrsDummyInterrupt2148 BrsDummyInterrupt(2148)
#endif
#if !defined (BrsDummyInterrupt2152)
# define BrsDummyInterrupt2152 BrsDummyInterrupt(2152)
#endif
#if !defined (BrsDummyInterrupt2156)
# define BrsDummyInterrupt2156 BrsDummyInterrupt(2156)
#endif
#if !defined (BrsDummyInterrupt2160)
# define BrsDummyInterrupt2160 BrsDummyInterrupt(2160)
#endif
#if !defined (BrsDummyInterrupt2164)
# define BrsDummyInterrupt2164 BrsDummyInterrupt(2164)
#endif
#if !defined (BrsDummyInterrupt2168)
# define BrsDummyInterrupt2168 BrsDummyInterrupt(2168)
#endif
#if !defined (BrsDummyInterrupt2172)
# define BrsDummyInterrupt2172 BrsDummyInterrupt(2172)
#endif
#if !defined (BrsDummyInterrupt2176)
# define BrsDummyInterrupt2176 BrsDummyInterrupt(2176)
#endif
#if !defined (BrsDummyInterrupt2180)
# define BrsDummyInterrupt2180 BrsDummyInterrupt(2180)
#endif
#if !defined (BrsDummyInterrupt2184)
# define BrsDummyInterrupt2184 BrsDummyInterrupt(2184)
#endif
#if !defined (BrsDummyInterrupt2188)
# define BrsDummyInterrupt2188 BrsDummyInterrupt(2188)
#endif
#if !defined (BrsDummyInterrupt2192)
# define BrsDummyInterrupt2192 BrsDummyInterrupt(2192)
#endif
#if !defined (BrsDummyInterrupt2196)
# define BrsDummyInterrupt2196 BrsDummyInterrupt(2196)
#endif
#if !defined (BrsDummyInterrupt2200)
# define BrsDummyInterrupt2200 BrsDummyInterrupt(2200)
#endif
#if !defined (BrsDummyInterrupt2204)
# define BrsDummyInterrupt2204 BrsDummyInterrupt(2204)
#endif
#if !defined (BrsDummyInterrupt2208)
# define BrsDummyInterrupt2208 BrsDummyInterrupt(2208)
#endif
#if !defined (BrsDummyInterrupt2212)
# define BrsDummyInterrupt2212 BrsDummyInterrupt(2212)
#endif
#if !defined (BrsDummyInterrupt2216)
# define BrsDummyInterrupt2216 BrsDummyInterrupt(2216)
#endif
#if !defined (BrsDummyInterrupt2220)
# define BrsDummyInterrupt2220 BrsDummyInterrupt(2220)
#endif
#if !defined (BrsDummyInterrupt2224)
# define BrsDummyInterrupt2224 BrsDummyInterrupt(2224)
#endif
#if !defined (BrsDummyInterrupt2228)
# define BrsDummyInterrupt2228 BrsDummyInterrupt(2228)
#endif
#if !defined (BrsDummyInterrupt2232)
# define BrsDummyInterrupt2232 BrsDummyInterrupt(2232)
#endif
#if !defined (BrsDummyInterrupt2236)
# define BrsDummyInterrupt2236 BrsDummyInterrupt(2236)
#endif
#if !defined (BrsDummyInterrupt2240)
# define BrsDummyInterrupt2240 BrsDummyInterrupt(2240)
#endif
#if !defined (BrsDummyInterrupt2244)
# define BrsDummyInterrupt2244 BrsDummyInterrupt(2244)
#endif
#if !defined (BrsDummyInterrupt2248)
# define BrsDummyInterrupt2248 BrsDummyInterrupt(2248)
#endif
#if !defined (BrsDummyInterrupt2252)
# define BrsDummyInterrupt2252 BrsDummyInterrupt(2252)
#endif
#if !defined (BrsDummyInterrupt2256)
# define BrsDummyInterrupt2256 BrsDummyInterrupt(2256)
#endif
#if !defined (BrsDummyInterrupt2260)
# define BrsDummyInterrupt2260 BrsDummyInterrupt(2260)
#endif
#if !defined (BrsDummyInterrupt2264)
# define BrsDummyInterrupt2264 BrsDummyInterrupt(2264)
#endif
#if !defined (BrsDummyInterrupt2268)
# define BrsDummyInterrupt2268 BrsDummyInterrupt(2268)
#endif
#if !defined (BrsDummyInterrupt2272)
# define BrsDummyInterrupt2272 BrsDummyInterrupt(2272)
#endif
#if !defined (BrsDummyInterrupt2276)
# define BrsDummyInterrupt2276 BrsDummyInterrupt(2276)
#endif
#if !defined (BrsDummyInterrupt2280)
# define BrsDummyInterrupt2280 BrsDummyInterrupt(2280)
#endif
#if !defined (BrsDummyInterrupt2284)
# define BrsDummyInterrupt2284 BrsDummyInterrupt(2284)
#endif
#if !defined (BrsDummyInterrupt2288)
# define BrsDummyInterrupt2288 BrsDummyInterrupt(2288)
#endif
#if !defined (BrsDummyInterrupt2292)
# define BrsDummyInterrupt2292 BrsDummyInterrupt(2292)
#endif
#if !defined (BrsDummyInterrupt2296)
# define BrsDummyInterrupt2296 BrsDummyInterrupt(2296)
#endif
#if !defined (BrsDummyInterrupt2300)
# define BrsDummyInterrupt2300 BrsDummyInterrupt(2300)
#endif
#if !defined (BrsDummyInterrupt2304)
# define BrsDummyInterrupt2304 BrsDummyInterrupt(2304)
#endif
#if !defined (BrsDummyInterrupt2308)
# define BrsDummyInterrupt2308 BrsDummyInterrupt(2308)
#endif
#if !defined (BrsDummyInterrupt2312)
# define BrsDummyInterrupt2312 BrsDummyInterrupt(2312)
#endif
#if !defined (BrsDummyInterrupt2316)
# define BrsDummyInterrupt2316 BrsDummyInterrupt(2316)
#endif
#if !defined (BrsDummyInterrupt2320)
# define BrsDummyInterrupt2320 BrsDummyInterrupt(2320)
#endif
#if !defined (BrsDummyInterrupt2324)
# define BrsDummyInterrupt2324 BrsDummyInterrupt(2324)
#endif
#if !defined (BrsDummyInterrupt2328)
# define BrsDummyInterrupt2328 BrsDummyInterrupt(2328)
#endif
#if !defined (BrsDummyInterrupt2332)
# define BrsDummyInterrupt2332 BrsDummyInterrupt(2332)
#endif
#if !defined (BrsDummyInterrupt2336)
# define BrsDummyInterrupt2336 BrsDummyInterrupt(2336)
#endif
#if !defined (BrsDummyInterrupt2340)
# define BrsDummyInterrupt2340 BrsDummyInterrupt(2340)
#endif
#if !defined (BrsDummyInterrupt2344)
# define BrsDummyInterrupt2344 BrsDummyInterrupt(2344)
#endif
#if !defined (BrsDummyInterrupt2348)
# define BrsDummyInterrupt2348 BrsDummyInterrupt(2348)
#endif
#if !defined (BrsDummyInterrupt2352)
# define BrsDummyInterrupt2352 BrsDummyInterrupt(2352)
#endif
#if !defined (BrsDummyInterrupt2356)
# define BrsDummyInterrupt2356 BrsDummyInterrupt(2356)
#endif
#if !defined (BrsDummyInterrupt2360)
# define BrsDummyInterrupt2360 BrsDummyInterrupt(2360)
#endif
#if !defined (BrsDummyInterrupt2364)
# define BrsDummyInterrupt2364 BrsDummyInterrupt(2364)
#endif
#if !defined (BrsDummyInterrupt2368)
# define BrsDummyInterrupt2368 BrsDummyInterrupt(2368)
#endif
#if !defined (BrsDummyInterrupt2372)
# define BrsDummyInterrupt2372 BrsDummyInterrupt(2372)
#endif
#if !defined (BrsDummyInterrupt2376)
# define BrsDummyInterrupt2376 BrsDummyInterrupt(2376)
#endif
#if !defined (BrsDummyInterrupt2380)
# define BrsDummyInterrupt2380 BrsDummyInterrupt(2380)
#endif
#if !defined (BrsDummyInterrupt2384)
# define BrsDummyInterrupt2384 BrsDummyInterrupt(2384)
#endif
#if !defined (BrsDummyInterrupt2388)
# define BrsDummyInterrupt2388 BrsDummyInterrupt(2388)
#endif
#if !defined (BrsDummyInterrupt2392)
# define BrsDummyInterrupt2392 BrsDummyInterrupt(2392)
#endif
#if !defined (BrsDummyInterrupt2396)
# define BrsDummyInterrupt2396 BrsDummyInterrupt(2396)
#endif
#if !defined (BrsDummyInterrupt2400)
# define BrsDummyInterrupt2400 BrsDummyInterrupt(2400)
#endif
#if !defined (BrsDummyInterrupt2404)
# define BrsDummyInterrupt2404 BrsDummyInterrupt(2404)
#endif
#if !defined (BrsDummyInterrupt2408)
# define BrsDummyInterrupt2408 BrsDummyInterrupt(2408)
#endif
#if !defined (BrsDummyInterrupt2412)
# define BrsDummyInterrupt2412 BrsDummyInterrupt(2412)
#endif
#if !defined (BrsDummyInterrupt2416)
# define BrsDummyInterrupt2416 BrsDummyInterrupt(2416)
#endif
#if !defined (BrsDummyInterrupt2420)
# define BrsDummyInterrupt2420 BrsDummyInterrupt(2420)
#endif
#if !defined (BrsDummyInterrupt2424)
# define BrsDummyInterrupt2424 BrsDummyInterrupt(2424)
#endif
#if !defined (BrsDummyInterrupt2428)
# define BrsDummyInterrupt2428 BrsDummyInterrupt(2428)
#endif
#if !defined (BrsDummyInterrupt2432)
# define BrsDummyInterrupt2432 BrsDummyInterrupt(2432)
#endif
#if !defined (BrsDummyInterrupt2436)
# define BrsDummyInterrupt2436 BrsDummyInterrupt(2436)
#endif
#if !defined (BrsDummyInterrupt2440)
# define BrsDummyInterrupt2440 BrsDummyInterrupt(2440)
#endif
#if !defined (BrsDummyInterrupt2444)
# define BrsDummyInterrupt2444 BrsDummyInterrupt(2444)
#endif
#if !defined (BrsDummyInterrupt2448)
# define BrsDummyInterrupt2448 BrsDummyInterrupt(2448)
#endif
#if !defined (BrsDummyInterrupt2452)
# define BrsDummyInterrupt2452 BrsDummyInterrupt(2452)
#endif
#if !defined (BrsDummyInterrupt2456)
# define BrsDummyInterrupt2456 BrsDummyInterrupt(2456)
#endif
#if !defined (BrsDummyInterrupt2460)
# define BrsDummyInterrupt2460 BrsDummyInterrupt(2460)
#endif
#if !defined (BrsDummyInterrupt2464)
# define BrsDummyInterrupt2464 BrsDummyInterrupt(2464)
#endif
#if !defined (BrsDummyInterrupt2468)
# define BrsDummyInterrupt2468 BrsDummyInterrupt(2468)
#endif
#if !defined (BrsDummyInterrupt2472)
# define BrsDummyInterrupt2472 BrsDummyInterrupt(2472)
#endif
#if !defined (BrsDummyInterrupt2476)
# define BrsDummyInterrupt2476 BrsDummyInterrupt(2476)
#endif
#if !defined (BrsDummyInterrupt2480)
# define BrsDummyInterrupt2480 BrsDummyInterrupt(2480)
#endif
#if !defined (BrsDummyInterrupt2484)
# define BrsDummyInterrupt2484 BrsDummyInterrupt(2484)
#endif
#if !defined (BrsDummyInterrupt2488)
# define BrsDummyInterrupt2488 BrsDummyInterrupt(2488)
#endif
#if !defined (BrsDummyInterrupt2492)
# define BrsDummyInterrupt2492 BrsDummyInterrupt(2492)
#endif
#if !defined (BrsDummyInterrupt2496)
# define BrsDummyInterrupt2496 BrsDummyInterrupt(2496)
#endif
#if !defined (BrsDummyInterrupt2500)
# define BrsDummyInterrupt2500 BrsDummyInterrupt(2500)
#endif
#if !defined (BrsDummyInterrupt2504)
# define BrsDummyInterrupt2504 BrsDummyInterrupt(2504)
#endif
#if !defined (BrsDummyInterrupt2508)
# define BrsDummyInterrupt2508 BrsDummyInterrupt(2508)
#endif
#if !defined (BrsDummyInterrupt2512)
# define BrsDummyInterrupt2512 BrsDummyInterrupt(2512)
#endif
#if !defined (BrsDummyInterrupt2516)
# define BrsDummyInterrupt2516 BrsDummyInterrupt(2516)
#endif
#if !defined (BrsDummyInterrupt2520)
# define BrsDummyInterrupt2520 BrsDummyInterrupt(2520)
#endif
#if !defined (BrsDummyInterrupt2524)
# define BrsDummyInterrupt2524 BrsDummyInterrupt(2524)
#endif
#if !defined (BrsDummyInterrupt2528)
# define BrsDummyInterrupt2528 BrsDummyInterrupt(2528)
#endif
#if !defined (BrsDummyInterrupt2532)
# define BrsDummyInterrupt2532 BrsDummyInterrupt(2532)
#endif
#if !defined (BrsDummyInterrupt2536)
# define BrsDummyInterrupt2536 BrsDummyInterrupt(2536)
#endif
#if !defined (BrsDummyInterrupt2540)
# define BrsDummyInterrupt2540 BrsDummyInterrupt(2540)
#endif
#if !defined (BrsDummyInterrupt2544)
# define BrsDummyInterrupt2544 BrsDummyInterrupt(2544)
#endif
#if !defined (BrsDummyInterrupt2548)
# define BrsDummyInterrupt2548 BrsDummyInterrupt(2548)
#endif
#if !defined (BrsDummyInterrupt2552)
# define BrsDummyInterrupt2552 BrsDummyInterrupt(2552)
#endif
#if !defined (BrsDummyInterrupt2556)
# define BrsDummyInterrupt2556 BrsDummyInterrupt(2556)
#endif
#if !defined (BrsDummyInterrupt2560)
# define BrsDummyInterrupt2560 BrsDummyInterrupt(2560)
#endif
#if !defined (BrsDummyInterrupt2564)
# define BrsDummyInterrupt2564 BrsDummyInterrupt(2564)
#endif
#if !defined (BrsDummyInterrupt2568)
# define BrsDummyInterrupt2568 BrsDummyInterrupt(2568)
#endif
#if !defined (BrsDummyInterrupt2572)
# define BrsDummyInterrupt2572 BrsDummyInterrupt(2572)
#endif
#if !defined (BrsDummyInterrupt2576)
# define BrsDummyInterrupt2576 BrsDummyInterrupt(2576)
#endif
#if !defined (BrsDummyInterrupt2580)
# define BrsDummyInterrupt2580 BrsDummyInterrupt(2580)
#endif
#if !defined (BrsDummyInterrupt2584)
# define BrsDummyInterrupt2584 BrsDummyInterrupt(2584)
#endif
#if !defined (BrsDummyInterrupt2588)
# define BrsDummyInterrupt2588 BrsDummyInterrupt(2588)
#endif
#if !defined (BrsDummyInterrupt2592)
# define BrsDummyInterrupt2592 BrsDummyInterrupt(2592)
#endif
#if !defined (BrsDummyInterrupt2596)
# define BrsDummyInterrupt2596 BrsDummyInterrupt(2596)
#endif
#if !defined (BrsDummyInterrupt2600)
# define BrsDummyInterrupt2600 BrsDummyInterrupt(2600)
#endif
#if !defined (BrsDummyInterrupt2604)
# define BrsDummyInterrupt2604 BrsDummyInterrupt(2604)
#endif
#if !defined (BrsDummyInterrupt2608)
# define BrsDummyInterrupt2608 BrsDummyInterrupt(2608)
#endif
#if !defined (BrsDummyInterrupt2612)
# define BrsDummyInterrupt2612 BrsDummyInterrupt(2612)
#endif
#if !defined (BrsDummyInterrupt2616)
# define BrsDummyInterrupt2616 BrsDummyInterrupt(2616)
#endif
#if !defined (BrsDummyInterrupt2620)
# define BrsDummyInterrupt2620 BrsDummyInterrupt(2620)
#endif
#if !defined (BrsDummyInterrupt2624)
# define BrsDummyInterrupt2624 BrsDummyInterrupt(2624)
#endif
#if !defined (BrsDummyInterrupt2628)
# define BrsDummyInterrupt2628 BrsDummyInterrupt(2628)
#endif
#if !defined (BrsDummyInterrupt2632)
# define BrsDummyInterrupt2632 BrsDummyInterrupt(2632)
#endif
#if !defined (BrsDummyInterrupt2636)
# define BrsDummyInterrupt2636 BrsDummyInterrupt(2636)
#endif
#if !defined (BrsDummyInterrupt2640)
# define BrsDummyInterrupt2640 BrsDummyInterrupt(2640)
#endif
#if !defined (BrsDummyInterrupt2644)
# define BrsDummyInterrupt2644 BrsDummyInterrupt(2644)
#endif
#if !defined (BrsDummyInterrupt2648)
# define BrsDummyInterrupt2648 BrsDummyInterrupt(2648)
#endif
#if !defined (BrsDummyInterrupt2652)
# define BrsDummyInterrupt2652 BrsDummyInterrupt(2652)
#endif
#if !defined (BrsDummyInterrupt2656)
# define BrsDummyInterrupt2656 BrsDummyInterrupt(2656)
#endif
#if !defined (BrsDummyInterrupt2660)
# define BrsDummyInterrupt2660 BrsDummyInterrupt(2660)
#endif
#if !defined (BrsDummyInterrupt2664)
# define BrsDummyInterrupt2664 BrsDummyInterrupt(2664)
#endif
#if !defined (BrsDummyInterrupt2668)
# define BrsDummyInterrupt2668 BrsDummyInterrupt(2668)
#endif
#if !defined (BrsDummyInterrupt2672)
# define BrsDummyInterrupt2672 BrsDummyInterrupt(2672)
#endif
#if !defined (BrsDummyInterrupt2676)
# define BrsDummyInterrupt2676 BrsDummyInterrupt(2676)
#endif
#if !defined (BrsDummyInterrupt2680)
# define BrsDummyInterrupt2680 BrsDummyInterrupt(2680)
#endif
#if !defined (BrsDummyInterrupt2684)
# define BrsDummyInterrupt2684 BrsDummyInterrupt(2684)
#endif
#if !defined (BrsDummyInterrupt2688)
# define BrsDummyInterrupt2688 BrsDummyInterrupt(2688)
#endif
#if !defined (BrsDummyInterrupt2692)
# define BrsDummyInterrupt2692 BrsDummyInterrupt(2692)
#endif
#if !defined (BrsDummyInterrupt2696)
# define BrsDummyInterrupt2696 BrsDummyInterrupt(2696)
#endif
#if !defined (BrsDummyInterrupt2700)
# define BrsDummyInterrupt2700 BrsDummyInterrupt(2700)
#endif
#if !defined (BrsDummyInterrupt2704)
# define BrsDummyInterrupt2704 BrsDummyInterrupt(2704)
#endif
#if !defined (BrsDummyInterrupt2708)
# define BrsDummyInterrupt2708 BrsDummyInterrupt(2708)
#endif
#if !defined (BrsDummyInterrupt2712)
# define BrsDummyInterrupt2712 BrsDummyInterrupt(2712)
#endif
#if !defined (BrsDummyInterrupt2716)
# define BrsDummyInterrupt2716 BrsDummyInterrupt(2716)
#endif
#if !defined (BrsDummyInterrupt2720)
# define BrsDummyInterrupt2720 BrsDummyInterrupt(2720)
#endif
#if !defined (BrsDummyInterrupt2724)
# define BrsDummyInterrupt2724 BrsDummyInterrupt(2724)
#endif
#if !defined (BrsDummyInterrupt2728)
# define BrsDummyInterrupt2728 BrsDummyInterrupt(2728)
#endif
#if !defined (BrsDummyInterrupt2732)
# define BrsDummyInterrupt2732 BrsDummyInterrupt(2732)
#endif
#if !defined (BrsDummyInterrupt2736)
# define BrsDummyInterrupt2736 BrsDummyInterrupt(2736)
#endif
#if !defined (BrsDummyInterrupt2740)
# define BrsDummyInterrupt2740 BrsDummyInterrupt(2740)
#endif
#if !defined (BrsDummyInterrupt2744)
# define BrsDummyInterrupt2744 BrsDummyInterrupt(2744)
#endif
#if !defined (BrsDummyInterrupt2748)
# define BrsDummyInterrupt2748 BrsDummyInterrupt(2748)
#endif
#if !defined (BrsDummyInterrupt2752)
# define BrsDummyInterrupt2752 BrsDummyInterrupt(2752)
#endif
#if !defined (BrsDummyInterrupt2756)
# define BrsDummyInterrupt2756 BrsDummyInterrupt(2756)
#endif
#if !defined (BrsDummyInterrupt2760)
# define BrsDummyInterrupt2760 BrsDummyInterrupt(2760)
#endif
#if !defined (BrsDummyInterrupt2764)
# define BrsDummyInterrupt2764 BrsDummyInterrupt(2764)
#endif
#if !defined (BrsDummyInterrupt2768)
# define BrsDummyInterrupt2768 BrsDummyInterrupt(2768)
#endif
#if !defined (BrsDummyInterrupt2772)
# define BrsDummyInterrupt2772 BrsDummyInterrupt(2772)
#endif
#if !defined (BrsDummyInterrupt2776)
# define BrsDummyInterrupt2776 BrsDummyInterrupt(2776)
#endif
#if !defined (BrsDummyInterrupt2780)
# define BrsDummyInterrupt2780 BrsDummyInterrupt(2780)
#endif
#if !defined (BrsDummyInterrupt2784)
# define BrsDummyInterrupt2784 BrsDummyInterrupt(2784)
#endif
#if !defined (BrsDummyInterrupt2788)
# define BrsDummyInterrupt2788 BrsDummyInterrupt(2788)
#endif
#if !defined (BrsDummyInterrupt2792)
# define BrsDummyInterrupt2792 BrsDummyInterrupt(2792)
#endif
#if !defined (BrsDummyInterrupt2796)
# define BrsDummyInterrupt2796 BrsDummyInterrupt(2796)
#endif
#if !defined (BrsDummyInterrupt2800)
# define BrsDummyInterrupt2800 BrsDummyInterrupt(2800)
#endif
#if !defined (BrsDummyInterrupt2804)
# define BrsDummyInterrupt2804 BrsDummyInterrupt(2804)
#endif
#if !defined (BrsDummyInterrupt2808)
# define BrsDummyInterrupt2808 BrsDummyInterrupt(2808)
#endif
#if !defined (BrsDummyInterrupt2812)
# define BrsDummyInterrupt2812 BrsDummyInterrupt(2812)
#endif
#if !defined (BrsDummyInterrupt2816)
# define BrsDummyInterrupt2816 BrsDummyInterrupt(2816)
#endif
#if !defined (BrsDummyInterrupt2820)
# define BrsDummyInterrupt2820 BrsDummyInterrupt(2820)
#endif
#if !defined (BrsDummyInterrupt2824)
# define BrsDummyInterrupt2824 BrsDummyInterrupt(2824)
#endif
#if !defined (BrsDummyInterrupt2828)
# define BrsDummyInterrupt2828 BrsDummyInterrupt(2828)
#endif
#if !defined (BrsDummyInterrupt2832)
# define BrsDummyInterrupt2832 BrsDummyInterrupt(2832)
#endif
#if !defined (BrsDummyInterrupt2836)
# define BrsDummyInterrupt2836 BrsDummyInterrupt(2836)
#endif
#if !defined (BrsDummyInterrupt2840)
# define BrsDummyInterrupt2840 BrsDummyInterrupt(2840)
#endif
#if !defined (BrsDummyInterrupt2844)
# define BrsDummyInterrupt2844 BrsDummyInterrupt(2844)
#endif
#if !defined (BrsDummyInterrupt2848)
# define BrsDummyInterrupt2848 BrsDummyInterrupt(2848)
#endif
#if !defined (BrsDummyInterrupt2852)
# define BrsDummyInterrupt2852 BrsDummyInterrupt(2852)
#endif
#if !defined (BrsDummyInterrupt2856)
# define BrsDummyInterrupt2856 BrsDummyInterrupt(2856)
#endif
#if !defined (BrsDummyInterrupt2860)
# define BrsDummyInterrupt2860 BrsDummyInterrupt(2860)
#endif
#if !defined (BrsDummyInterrupt2864)
# define BrsDummyInterrupt2864 BrsDummyInterrupt(2864)
#endif
#if !defined (BrsDummyInterrupt2868)
# define BrsDummyInterrupt2868 BrsDummyInterrupt(2868)
#endif
#if !defined (BrsDummyInterrupt2872)
# define BrsDummyInterrupt2872 BrsDummyInterrupt(2872)
#endif
#if !defined (BrsDummyInterrupt2876)
# define BrsDummyInterrupt2876 BrsDummyInterrupt(2876)
#endif
#if !defined (BrsDummyInterrupt2880)
# define BrsDummyInterrupt2880 BrsDummyInterrupt(2880)
#endif
#if !defined (BrsDummyInterrupt2884)
# define BrsDummyInterrupt2884 BrsDummyInterrupt(2884)
#endif
#if !defined (BrsDummyInterrupt2888)
# define BrsDummyInterrupt2888 BrsDummyInterrupt(2888)
#endif
#if !defined (BrsDummyInterrupt2892)
# define BrsDummyInterrupt2892 BrsDummyInterrupt(2892)
#endif
#if !defined (BrsDummyInterrupt2896)
# define BrsDummyInterrupt2896 BrsDummyInterrupt(2896)
#endif
#if !defined (BrsDummyInterrupt2900)
# define BrsDummyInterrupt2900 BrsDummyInterrupt(2900)
#endif
#if !defined (BrsDummyInterrupt2904)
# define BrsDummyInterrupt2904 BrsDummyInterrupt(2904)
#endif
#if !defined (BrsDummyInterrupt2908)
# define BrsDummyInterrupt2908 BrsDummyInterrupt(2908)
#endif
#if !defined (BrsDummyInterrupt2912)
# define BrsDummyInterrupt2912 BrsDummyInterrupt(2912)
#endif
#if !defined (BrsDummyInterrupt2916)
# define BrsDummyInterrupt2916 BrsDummyInterrupt(2916)
#endif
#if !defined (BrsDummyInterrupt2920)
# define BrsDummyInterrupt2920 BrsDummyInterrupt(2920)
#endif
#if !defined (BrsDummyInterrupt2924)
# define BrsDummyInterrupt2924 BrsDummyInterrupt(2924)
#endif
#if !defined (BrsDummyInterrupt2928)
# define BrsDummyInterrupt2928 BrsDummyInterrupt(2928)
#endif
#if !defined (BrsDummyInterrupt2932)
# define BrsDummyInterrupt2932 BrsDummyInterrupt(2932)
#endif
#if !defined (BrsDummyInterrupt2936)
# define BrsDummyInterrupt2936 BrsDummyInterrupt(2936)
#endif
#if !defined (BrsDummyInterrupt2940)
# define BrsDummyInterrupt2940 BrsDummyInterrupt(2940)
#endif
#if !defined (BrsDummyInterrupt2944)
# define BrsDummyInterrupt2944 BrsDummyInterrupt(2944)
#endif
#if !defined (BrsDummyInterrupt2948)
# define BrsDummyInterrupt2948 BrsDummyInterrupt(2948)
#endif
#if !defined (BrsDummyInterrupt2952)
# define BrsDummyInterrupt2952 BrsDummyInterrupt(2952)
#endif
#if !defined (BrsDummyInterrupt2956)
# define BrsDummyInterrupt2956 BrsDummyInterrupt(2956)
#endif
#if !defined (BrsDummyInterrupt2960)
# define BrsDummyInterrupt2960 BrsDummyInterrupt(2960)
#endif
#if !defined (BrsDummyInterrupt2964)
# define BrsDummyInterrupt2964 BrsDummyInterrupt(2964)
#endif
#if !defined (BrsDummyInterrupt2968)
# define BrsDummyInterrupt2968 BrsDummyInterrupt(2968)
#endif
#if !defined (BrsDummyInterrupt2972)
# define BrsDummyInterrupt2972 BrsDummyInterrupt(2972)
#endif
#if !defined (BrsDummyInterrupt2976)
# define BrsDummyInterrupt2976 BrsDummyInterrupt(2976)
#endif
#if !defined (BrsDummyInterrupt2980)
# define BrsDummyInterrupt2980 BrsDummyInterrupt(2980)
#endif
#if !defined (BrsDummyInterrupt2984)
# define BrsDummyInterrupt2984 BrsDummyInterrupt(2984)
#endif
#if !defined (BrsDummyInterrupt2988)
# define BrsDummyInterrupt2988 BrsDummyInterrupt(2988)
#endif
#if !defined (BrsDummyInterrupt2992)
# define BrsDummyInterrupt2992 BrsDummyInterrupt(2992)
#endif
#if !defined (BrsDummyInterrupt2996)
# define BrsDummyInterrupt2996 BrsDummyInterrupt(2996)
#endif
#if !defined (BrsDummyInterrupt3000)
# define BrsDummyInterrupt3000 BrsDummyInterrupt(3000)
#endif
#if !defined (BrsDummyInterrupt3004)
# define BrsDummyInterrupt3004 BrsDummyInterrupt(3004)
#endif
#if !defined (BrsDummyInterrupt3008)
# define BrsDummyInterrupt3008 BrsDummyInterrupt(3008)
#endif
#if !defined (BrsDummyInterrupt3012)
# define BrsDummyInterrupt3012 BrsDummyInterrupt(3012)
#endif
#if !defined (BrsDummyInterrupt3016)
# define BrsDummyInterrupt3016 BrsDummyInterrupt(3016)
#endif
#if !defined (BrsDummyInterrupt3020)
# define BrsDummyInterrupt3020 BrsDummyInterrupt(3020)
#endif
#if !defined (BrsDummyInterrupt3024)
# define BrsDummyInterrupt3024 BrsDummyInterrupt(3024)
#endif
#if !defined (BrsDummyInterrupt3028)
# define BrsDummyInterrupt3028 BrsDummyInterrupt(3028)
#endif
#if !defined (BrsDummyInterrupt3032)
# define BrsDummyInterrupt3032 BrsDummyInterrupt(3032)
#endif
#if !defined (BrsDummyInterrupt3036)
# define BrsDummyInterrupt3036 BrsDummyInterrupt(3036)
#endif
#if !defined (BrsDummyInterrupt3040)
# define BrsDummyInterrupt3040 BrsDummyInterrupt(3040)
#endif
#if !defined (BrsDummyInterrupt3044)
# define BrsDummyInterrupt3044 BrsDummyInterrupt(3044)
#endif
#if !defined (BrsDummyInterrupt3048)
# define BrsDummyInterrupt3048 BrsDummyInterrupt(3048)
#endif
#if !defined (BrsDummyInterrupt3052)
# define BrsDummyInterrupt3052 BrsDummyInterrupt(3052)
#endif
#if !defined (BrsDummyInterrupt3056)
# define BrsDummyInterrupt3056 BrsDummyInterrupt(3056)
#endif
#if !defined (BrsDummyInterrupt3060)
# define BrsDummyInterrupt3060 BrsDummyInterrupt(3060)
#endif
#if !defined (BrsDummyInterrupt3064)
# define BrsDummyInterrupt3064 BrsDummyInterrupt(3064)
#endif
#if !defined (BrsDummyInterrupt3068)
# define BrsDummyInterrupt3068 BrsDummyInterrupt(3068)
#endif
#if !defined (BrsDummyInterrupt3072)
# define BrsDummyInterrupt3072 BrsDummyInterrupt(3072)
#endif
#if !defined (BrsDummyInterrupt3076)
# define BrsDummyInterrupt3076 BrsDummyInterrupt(3076)
#endif
#if !defined (BrsDummyInterrupt3080)
# define BrsDummyInterrupt3080 BrsDummyInterrupt(3080)
#endif
#if !defined (BrsDummyInterrupt3084)
# define BrsDummyInterrupt3084 BrsDummyInterrupt(3084)
#endif
#if !defined (BrsDummyInterrupt3088)
# define BrsDummyInterrupt3088 BrsDummyInterrupt(3088)
#endif
#if !defined (BrsDummyInterrupt3092)
# define BrsDummyInterrupt3092 BrsDummyInterrupt(3092)
#endif
#if !defined (BrsDummyInterrupt3096)
# define BrsDummyInterrupt3096 BrsDummyInterrupt(3096)
#endif
#if !defined (BrsDummyInterrupt3100)
# define BrsDummyInterrupt3100 BrsDummyInterrupt(3100)
#endif
#if !defined (BrsDummyInterrupt3104)
# define BrsDummyInterrupt3104 BrsDummyInterrupt(3104)
#endif
#if !defined (BrsDummyInterrupt3108)
# define BrsDummyInterrupt3108 BrsDummyInterrupt(3108)
#endif
#if !defined (BrsDummyInterrupt3112)
# define BrsDummyInterrupt3112 BrsDummyInterrupt(3112)
#endif
#if !defined (BrsDummyInterrupt3116)
# define BrsDummyInterrupt3116 BrsDummyInterrupt(3116)
#endif
#if !defined (BrsDummyInterrupt3120)
# define BrsDummyInterrupt3120 BrsDummyInterrupt(3120)
#endif
#if !defined (BrsDummyInterrupt3124)
# define BrsDummyInterrupt3124 BrsDummyInterrupt(3124)
#endif
#if !defined (BrsDummyInterrupt3128)
# define BrsDummyInterrupt3128 BrsDummyInterrupt(3128)
#endif
#if !defined (BrsDummyInterrupt3132)
# define BrsDummyInterrupt3132 BrsDummyInterrupt(3132)
#endif
#if !defined (BrsDummyInterrupt3136)
# define BrsDummyInterrupt3136 BrsDummyInterrupt(3136)
#endif
#if !defined (BrsDummyInterrupt3140)
# define BrsDummyInterrupt3140 BrsDummyInterrupt(3140)
#endif
#if !defined (BrsDummyInterrupt3144)
# define BrsDummyInterrupt3144 BrsDummyInterrupt(3144)
#endif
#if !defined (BrsDummyInterrupt3148)
# define BrsDummyInterrupt3148 BrsDummyInterrupt(3148)
#endif
#if !defined (BrsDummyInterrupt3152)
# define BrsDummyInterrupt3152 BrsDummyInterrupt(3152)
#endif
#if !defined (BrsDummyInterrupt3156)
# define BrsDummyInterrupt3156 BrsDummyInterrupt(3156)
#endif
#if !defined (BrsDummyInterrupt3160)
# define BrsDummyInterrupt3160 BrsDummyInterrupt(3160)
#endif
#if !defined (BrsDummyInterrupt3164)
# define BrsDummyInterrupt3164 BrsDummyInterrupt(3164)
#endif
#if !defined (BrsDummyInterrupt3168)
# define BrsDummyInterrupt3168 BrsDummyInterrupt(3168)
#endif
#if !defined (BrsDummyInterrupt3172)
# define BrsDummyInterrupt3172 BrsDummyInterrupt(3172)
#endif
#if !defined (BrsDummyInterrupt3176)
# define BrsDummyInterrupt3176 BrsDummyInterrupt(3176)
#endif
#if !defined (BrsDummyInterrupt3180)
# define BrsDummyInterrupt3180 BrsDummyInterrupt(3180)
#endif
#if !defined (BrsDummyInterrupt3184)
# define BrsDummyInterrupt3184 BrsDummyInterrupt(3184)
#endif
#if !defined (BrsDummyInterrupt3188)
# define BrsDummyInterrupt3188 BrsDummyInterrupt(3188)
#endif
#if !defined (BrsDummyInterrupt3192)
# define BrsDummyInterrupt3192 BrsDummyInterrupt(3192)
#endif
#if !defined (BrsDummyInterrupt3196)
# define BrsDummyInterrupt3196 BrsDummyInterrupt(3196)
#endif
#if !defined (BrsDummyInterrupt3200)
# define BrsDummyInterrupt3200 BrsDummyInterrupt(3200)
#endif
#if !defined (BrsDummyInterrupt3204)
# define BrsDummyInterrupt3204 BrsDummyInterrupt(3204)
#endif
#if !defined (BrsDummyInterrupt3208)
# define BrsDummyInterrupt3208 BrsDummyInterrupt(3208)
#endif
#if !defined (BrsDummyInterrupt3212)
# define BrsDummyInterrupt3212 BrsDummyInterrupt(3212)
#endif
#if !defined (BrsDummyInterrupt3216)
# define BrsDummyInterrupt3216 BrsDummyInterrupt(3216)
#endif
#if !defined (BrsDummyInterrupt3220)
# define BrsDummyInterrupt3220 BrsDummyInterrupt(3220)
#endif
#if !defined (BrsDummyInterrupt3224)
# define BrsDummyInterrupt3224 BrsDummyInterrupt(3224)
#endif
#if !defined (BrsDummyInterrupt3228)
# define BrsDummyInterrupt3228 BrsDummyInterrupt(3228)
#endif
#if !defined (BrsDummyInterrupt3232)
# define BrsDummyInterrupt3232 BrsDummyInterrupt(3232)
#endif
#if !defined (BrsDummyInterrupt3236)
# define BrsDummyInterrupt3236 BrsDummyInterrupt(3236)
#endif
#if !defined (BrsDummyInterrupt3240)
# define BrsDummyInterrupt3240 BrsDummyInterrupt(3240)
#endif
#if !defined (BrsDummyInterrupt3244)
# define BrsDummyInterrupt3244 BrsDummyInterrupt(3244)
#endif
#if !defined (BrsDummyInterrupt3248)
# define BrsDummyInterrupt3248 BrsDummyInterrupt(3248)
#endif
#if !defined (BrsDummyInterrupt3252)
# define BrsDummyInterrupt3252 BrsDummyInterrupt(3252)
#endif
#if !defined (BrsDummyInterrupt3256)
# define BrsDummyInterrupt3256 BrsDummyInterrupt(3256)
#endif
#if !defined (BrsDummyInterrupt3260)
# define BrsDummyInterrupt3260 BrsDummyInterrupt(3260)
#endif
#if !defined (BrsDummyInterrupt3264)
# define BrsDummyInterrupt3264 BrsDummyInterrupt(3264)
#endif
#if !defined (BrsDummyInterrupt3268)
# define BrsDummyInterrupt3268 BrsDummyInterrupt(3268)
#endif
#if !defined (BrsDummyInterrupt3272)
# define BrsDummyInterrupt3272 BrsDummyInterrupt(3272)
#endif
#if !defined (BrsDummyInterrupt3276)
# define BrsDummyInterrupt3276 BrsDummyInterrupt(3276)
#endif
#if !defined (BrsDummyInterrupt3280)
# define BrsDummyInterrupt3280 BrsDummyInterrupt(3280)
#endif
#if !defined (BrsDummyInterrupt3284)
# define BrsDummyInterrupt3284 BrsDummyInterrupt(3284)
#endif
#if !defined (BrsDummyInterrupt3288)
# define BrsDummyInterrupt3288 BrsDummyInterrupt(3288)
#endif
#if !defined (BrsDummyInterrupt3292)
# define BrsDummyInterrupt3292 BrsDummyInterrupt(3292)
#endif
#if !defined (BrsDummyInterrupt3296)
# define BrsDummyInterrupt3296 BrsDummyInterrupt(3296)
#endif
#if !defined (BrsDummyInterrupt3300)
# define BrsDummyInterrupt3300 BrsDummyInterrupt(3300)
#endif
#if !defined (BrsDummyInterrupt3304)
# define BrsDummyInterrupt3304 BrsDummyInterrupt(3304)
#endif
#if !defined (BrsDummyInterrupt3308)
# define BrsDummyInterrupt3308 BrsDummyInterrupt(3308)
#endif
#if !defined (BrsDummyInterrupt3312)
# define BrsDummyInterrupt3312 BrsDummyInterrupt(3312)
#endif
#if !defined (BrsDummyInterrupt3316)
# define BrsDummyInterrupt3316 BrsDummyInterrupt(3316)
#endif
#if !defined (BrsDummyInterrupt3320)
# define BrsDummyInterrupt3320 BrsDummyInterrupt(3320)
#endif
#if !defined (BrsDummyInterrupt3324)
# define BrsDummyInterrupt3324 BrsDummyInterrupt(3324)
#endif
#if !defined (BrsDummyInterrupt3328)
# define BrsDummyInterrupt3328 BrsDummyInterrupt(3328)
#endif
#if !defined (BrsDummyInterrupt3332)
# define BrsDummyInterrupt3332 BrsDummyInterrupt(3332)
#endif
#if !defined (BrsDummyInterrupt3336)
# define BrsDummyInterrupt3336 BrsDummyInterrupt(3336)
#endif
#if !defined (BrsDummyInterrupt3340)
# define BrsDummyInterrupt3340 BrsDummyInterrupt(3340)
#endif
#if !defined (BrsDummyInterrupt3344)
# define BrsDummyInterrupt3344 BrsDummyInterrupt(3344)
#endif
#if !defined (BrsDummyInterrupt3348)
# define BrsDummyInterrupt3348 BrsDummyInterrupt(3348)
#endif
#if !defined (BrsDummyInterrupt3352)
# define BrsDummyInterrupt3352 BrsDummyInterrupt(3352)
#endif
#if !defined (BrsDummyInterrupt3356)
# define BrsDummyInterrupt3356 BrsDummyInterrupt(3356)
#endif

/*****************************************************************************************/
/* populate interrupt vector table                                                       */
/*****************************************************************************************/
#if defined (BRS_COMP_GHS) 

___asm(.extern __usr_init)

# if defined (BRS_COMP_GHS)
___asm(.align 4)
__as1(.section .intvect_CoreExceptions,.text)
# endif

___asm(;/* interrupt vectors */)
___asm(;/* beginning of the standard interrupt vector table */)

___asm(.globl Vector_0x00)
___asm(Vector_0x00:)
    BRS_ISR_BASE_ENTRY(__usr_init)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x10)
___asm(Vector_0x10:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt16)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x20)
___asm(Vector_0x20:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt32)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x30)
___asm(Vector_0x30:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt48)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x40)
___asm(Vector_0x40:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt64)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x50)
___asm(Vector_0x50:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt80)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x60)
___asm(Vector_0x60:)
    ___asm(.word 0xffffffff ;/* jr _BrsDummyInterrupt */)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x70)
___asm(Vector_0x70:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt112)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x80)
___asm(Vector_0x80:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt128)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x90)
___asm(Vector_0x90:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt144)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0xA0)
___asm(Vector_0xA0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt160)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0xB0)
___asm(Vector_0xB0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt176)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0xC0)
___asm(Vector_0xC0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt192)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0xD0)
___asm(Vector_0xD0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt208)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0xE0)
___asm(Vector_0xE0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt224)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0xF0)
___asm(Vector_0xF0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt240)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x100)
___asm(Vector_0x100:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt256)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x110)
___asm(Vector_0x110:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt272)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x120)
___asm(Vector_0x120:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt288)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x130)
___asm(Vector_0x130:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt304)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x140)
___asm(Vector_0x140:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt320)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x150)
___asm(Vector_0x150:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt336)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x160)
___asm(Vector_0x160:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt352)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x170)
___asm(Vector_0x170:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt368)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x180)
___asm(Vector_0x180:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt384)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x190)
___asm(Vector_0x190:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt400)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x1A0)
___asm(Vector_0x1A0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt416)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x1B0)
___asm(Vector_0x1B0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt432)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x1C0)
___asm(Vector_0x1C0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt448)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x1D0)
___asm(Vector_0x1D0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt464)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x1E0)
___asm(Vector_0x1E0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt480)
    BRS_ISR_ALIGNMENT

___asm(.globl Vector_0x1F0)
___asm(Vector_0x1F0:)
    BRS_ISR_BASE_ENTRY(BrsDummyInterrupt496)
    BRS_ISR_ALIGNMENT

___asm(;/* beginning of the expanded specifications interrupt vector table */ )

___asm(;/* in expand specification, each interrupt channel has a table which reads exception handler */)
___asm(;/* address, and the handler address is extracted by referring to the table. Following equation */)
___asm(;/* calculates the table reference position. INTBP register is a register in the CPU core. */)

___asm(;/* Exception handler address read position */)
___asm(;/*            = INTBP register + channel no. *4bytes */)

#if defined (BRS_COMP_GHS)
___asm(.align 4)
__as1(.section .intvect_ExtExceptions,.text)
#endif

___asm(.globl Vector_0x200)
___asm(Vector_0x200:)
    BRS_ISR_ENTRY(BrsDummyInterrupt512)

___asm(.globl Vector_0x204)
___asm(Vector_0x204:)
	BRS_ISR_ENTRY(BrsDummyInterrupt516)

___asm(.globl Vector_0x208)
___asm(Vector_0x208:)
	BRS_ISR_ENTRY(BrsDummyInterrupt520)

___asm(.globl Vector_0x20C)
___asm(Vector_0x20C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt524)

___asm(.globl Vector_0x210)
___asm(Vector_0x210:)
	BRS_ISR_ENTRY(BrsDummyInterrupt528)

___asm(.globl Vector_0x214)
___asm(Vector_0x214:)
	BRS_ISR_ENTRY(BrsDummyInterrupt532)

___asm(.globl Vector_0x218)
___asm(Vector_0x218:)
	BRS_ISR_ENTRY(BrsDummyInterrupt536)

___asm(.globl Vector_0x21C)
___asm(Vector_0x21C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt540)

___asm(.globl Vector_0x220)
___asm(Vector_0x220:)
	BRS_ISR_ENTRY(BrsDummyInterrupt544)

___asm(.globl Vector_0x224)
___asm(Vector_0x224:)
	BRS_ISR_ENTRY(BrsDummyInterrupt548)

___asm(.globl Vector_0x228)
___asm(Vector_0x228:)
	BRS_ISR_ENTRY(BrsDummyInterrupt552)

___asm(.globl Vector_0x22C)
___asm(Vector_0x22C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt556)

___asm(.globl Vector_0x230)
___asm(Vector_0x230:)
	BRS_ISR_ENTRY(BrsDummyInterrupt560)

___asm(.globl Vector_0x234)
___asm(Vector_0x234:)
	BRS_ISR_ENTRY(BrsDummyInterrupt564)

___asm(.globl Vector_0x238)
___asm(Vector_0x238:)
	BRS_ISR_ENTRY(BrsDummyInterrupt568)

___asm(.globl Vector_0x23C)
___asm(Vector_0x23C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt572)

___asm(.globl Vector_0x240)
___asm(Vector_0x240:)
	BRS_ISR_ENTRY(BrsDummyInterrupt576)

___asm(.globl Vector_0x244)
___asm(Vector_0x244:)
	BRS_ISR_ENTRY(BrsDummyInterrupt580)

___asm(.globl Vector_0x248)
___asm(Vector_0x248:)
	BRS_ISR_ENTRY(BrsDummyInterrupt584)

___asm(.globl Vector_0x24C)
___asm(Vector_0x24C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt588)

___asm(.globl Vector_0x250)
___asm(Vector_0x250:)
	BRS_ISR_ENTRY(BrsDummyInterrupt592)

___asm(.globl Vector_0x254)
___asm(Vector_0x254:)
	BRS_ISR_ENTRY(BrsDummyInterrupt596)

___asm(.globl Vector_0x258)
___asm(Vector_0x258:)
	BRS_ISR_ENTRY(BrsDummyInterrupt600)

___asm(.globl Vector_0x25C)
___asm(Vector_0x25C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt604)

___asm(.globl Vector_0x260)
___asm(Vector_0x260:)
	BRS_ISR_ENTRY(BrsDummyInterrupt608)

___asm(.globl Vector_0x264)
___asm(Vector_0x264:)
	BRS_ISR_ENTRY(BrsDummyInterrupt612)

___asm(.globl Vector_0x268)
___asm(Vector_0x268:)
	BRS_ISR_ENTRY(BrsDummyInterrupt616)

___asm(.globl Vector_0x26C)
___asm(Vector_0x26C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt620)

___asm(.globl Vector_0x270)
___asm(Vector_0x270:)
	BRS_ISR_ENTRY(BrsDummyInterrupt624)

___asm(.globl Vector_0x274)
___asm(Vector_0x274:)
	BRS_ISR_ENTRY(BrsDummyInterrupt628)

___asm(.globl Vector_0x278)
___asm(Vector_0x278:)
	BRS_ISR_ENTRY(BrsDummyInterrupt632)

___asm(.globl Vector_0x27C)
___asm(Vector_0x27C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt636)

___asm(.globl Vector_0x280)
___asm(Vector_0x280:)
	BRS_ISR_ENTRY(BrsDummyInterrupt640)

___asm(.globl Vector_0x284)
___asm(Vector_0x284:)
	BRS_ISR_ENTRY(BrsDummyInterrupt644)

___asm(.globl Vector_0x288)
___asm(Vector_0x288:)
	BRS_ISR_ENTRY(BrsDummyInterrupt648)

___asm(.globl Vector_0x28C)
___asm(Vector_0x28C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt652)

___asm(.globl Vector_0x290)
___asm(Vector_0x290:)
	BRS_ISR_ENTRY(BrsDummyInterrupt656)

___asm(.globl Vector_0x294)
___asm(Vector_0x294:)
	BRS_ISR_ENTRY(BrsDummyInterrupt660)

___asm(.globl Vector_0x298)
___asm(Vector_0x298:)
	BRS_ISR_ENTRY(BrsDummyInterrupt664)

___asm(.globl Vector_0x29C)
___asm(Vector_0x29C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt668)

___asm(.globl Vector_0x2A0)
___asm(Vector_0x2A0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt672)

___asm(.globl Vector_0x2A4)
___asm(Vector_0x2A4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt676)

___asm(.globl Vector_0x2A8)
___asm(Vector_0x2A8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt680)

___asm(.globl Vector_0x2AC)
___asm(Vector_0x2AC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt684)

___asm(.globl Vector_0x2B0)
___asm(Vector_0x2B0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt688)

___asm(.globl Vector_0x2B4)
___asm(Vector_0x2B4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt692)

___asm(.globl Vector_0x2B8)
___asm(Vector_0x2B8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt696)

___asm(.globl Vector_0x2BC)
___asm(Vector_0x2BC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt700)

___asm(.globl Vector_0x2C0)
___asm(Vector_0x2C0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt704)

___asm(.globl Vector_0x2C4)
___asm(Vector_0x2C4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt708)

___asm(.globl Vector_0x2C8)
___asm(Vector_0x2C8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt712)

___asm(.globl Vector_0x2CC)
___asm(Vector_0x2CC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt716)

___asm(.globl Vector_0x2D0)
___asm(Vector_0x2D0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt720)

___asm(.globl Vector_0x2D4)
___asm(Vector_0x2D4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt724)

___asm(.globl Vector_0x2D8)
___asm(Vector_0x2D8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt728)

___asm(.globl Vector_0x2DC)
___asm(Vector_0x2DC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt732)

___asm(.globl Vector_0x2E0)
___asm(Vector_0x2E0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt736)

___asm(.globl Vector_0x2E4)
___asm(Vector_0x2E4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt740)

___asm(.globl Vector_0x2E8)
___asm(Vector_0x2E8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt744)

___asm(.globl Vector_0x2EC)
___asm(Vector_0x2EC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt748)

___asm(.globl Vector_0x2F0)
___asm(Vector_0x2F0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt752)

___asm(.globl Vector_0x2F4)
___asm(Vector_0x2F4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt756)

___asm(.globl Vector_0x2F8)
___asm(Vector_0x2F8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt760)

___asm(.globl Vector_0x2FC)
___asm(Vector_0x2FC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt764)

___asm(.globl Vector_0x300)
___asm(Vector_0x300:)
	BRS_ISR_ENTRY(BrsDummyInterrupt768)

___asm(.globl Vector_0x304)
___asm(Vector_0x304:)
	BRS_ISR_ENTRY(BrsDummyInterrupt772)

___asm(.globl Vector_0x308)
___asm(Vector_0x308:)
	BRS_ISR_ENTRY(BrsDummyInterrupt776)

___asm(.globl Vector_0x30C)
___asm(Vector_0x30C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt780)

___asm(.globl Vector_0x310)
___asm(Vector_0x310:)
	BRS_ISR_ENTRY(BrsDummyInterrupt784)

___asm(.globl Vector_0x314)
___asm(Vector_0x314:)
	BRS_ISR_ENTRY(BrsDummyInterrupt788)

___asm(.globl Vector_0x318)
___asm(Vector_0x318:)
	BRS_ISR_ENTRY(BrsDummyInterrupt792)

___asm(.globl Vector_0x31C)
___asm(Vector_0x31C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt796)

___asm(.globl Vector_0x320)
___asm(Vector_0x320:)
	BRS_ISR_ENTRY(BrsDummyInterrupt800)

___asm(.globl Vector_0x324)
___asm(Vector_0x324:)
	BRS_ISR_ENTRY(BrsDummyInterrupt804)

___asm(.globl Vector_0x328)
___asm(Vector_0x328:)
	BRS_ISR_ENTRY(BrsDummyInterrupt808)

___asm(.globl Vector_0x32C)
___asm(Vector_0x32C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt812)

___asm(.globl Vector_0x330)
___asm(Vector_0x330:)
	BRS_ISR_ENTRY(BrsDummyInterrupt816)

___asm(.globl Vector_0x334)
___asm(Vector_0x334:)
	BRS_ISR_ENTRY(BrsDummyInterrupt820)

___asm(.globl Vector_0x338)
___asm(Vector_0x338:)
	BRS_ISR_ENTRY(BrsDummyInterrupt824)

___asm(.globl Vector_0x33C)
___asm(Vector_0x33C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt828)

___asm(.globl Vector_0x340)
___asm(Vector_0x340:)
	BRS_ISR_ENTRY(BrsDummyInterrupt832)

___asm(.globl Vector_0x344)
___asm(Vector_0x344:)
	BRS_ISR_ENTRY(BrsDummyInterrupt836)

___asm(.globl Vector_0x348)
___asm(Vector_0x348:)
	BRS_ISR_ENTRY(BrsDummyInterrupt840)

___asm(.globl Vector_0x34C)
___asm(Vector_0x34C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt844)

___asm(.globl Vector_0x350)
___asm(Vector_0x350:)
	BRS_ISR_ENTRY(BrsDummyInterrupt848)

___asm(.globl Vector_0x354)
___asm(Vector_0x354:)
	BRS_ISR_ENTRY(BrsDummyInterrupt852)

___asm(.globl Vector_0x358)
___asm(Vector_0x358:)
	BRS_ISR_ENTRY(BrsDummyInterrupt856)

___asm(.globl Vector_0x35C)
___asm(Vector_0x35C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt860)

___asm(.globl Vector_0x360)
___asm(Vector_0x360:)
	BRS_ISR_ENTRY(BrsDummyInterrupt864)

___asm(.globl Vector_0x364)
___asm(Vector_0x364:)
	BRS_ISR_ENTRY(BrsDummyInterrupt868)

___asm(.globl Vector_0x368)
___asm(Vector_0x368:)
	BRS_ISR_ENTRY(BrsDummyInterrupt872)

___asm(.globl Vector_0x36C)
___asm(Vector_0x36C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt876)

___asm(.globl Vector_0x370)
___asm(Vector_0x370:)
	BRS_ISR_ENTRY(BrsDummyInterrupt880)

___asm(.globl Vector_0x374)
___asm(Vector_0x374:)
	BRS_ISR_ENTRY(BrsDummyInterrupt884)

___asm(.globl Vector_0x378)
___asm(Vector_0x378:)
	BRS_ISR_ENTRY(BrsDummyInterrupt888)

___asm(.globl Vector_0x37C)
___asm(Vector_0x37C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt892)

___asm(.globl Vector_0x380)
___asm(Vector_0x380:)
	BRS_ISR_ENTRY(BrsDummyInterrupt896)

___asm(.globl Vector_0x384)
___asm(Vector_0x384:)
	BRS_ISR_ENTRY(BrsDummyInterrupt900)

___asm(.globl Vector_0x388)
___asm(Vector_0x388:)
	BRS_ISR_ENTRY(BrsDummyInterrupt904)

___asm(.globl Vector_0x38C)
___asm(Vector_0x38C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt908)

___asm(.globl Vector_0x390)
___asm(Vector_0x390:)
	BRS_ISR_ENTRY(BrsDummyInterrupt912)

___asm(.globl Vector_0x394)
___asm(Vector_0x394:)
	BRS_ISR_ENTRY(BrsDummyInterrupt916)

___asm(.globl Vector_0x398)
___asm(Vector_0x398:)
	BRS_ISR_ENTRY(BrsDummyInterrupt920)

___asm(.globl Vector_0x39C)
___asm(Vector_0x39C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt924)

___asm(.globl Vector_0x3A0)
___asm(Vector_0x3A0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt928)

___asm(.globl Vector_0x3A4)
___asm(Vector_0x3A4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt932)

___asm(.globl Vector_0x3A8)
___asm(Vector_0x3A8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt936)

___asm(.globl Vector_0x3AC)
___asm(Vector_0x3AC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt940)

___asm(.globl Vector_0x3B0)
___asm(Vector_0x3B0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt944)

___asm(.globl Vector_0x3B4)
___asm(Vector_0x3B4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt948)

___asm(.globl Vector_0x3B8)
___asm(Vector_0x3B8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt952)

___asm(.globl Vector_0x3BC)
___asm(Vector_0x3BC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt956)

___asm(.globl Vector_0x3C0)
___asm(Vector_0x3C0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt960)

___asm(.globl Vector_0x3C4)
___asm(Vector_0x3C4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt964)

___asm(.globl Vector_0x3C8)
___asm(Vector_0x3C8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt968)

___asm(.globl Vector_0x3CC)
___asm(Vector_0x3CC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt972)

___asm(.globl Vector_0x3D0)
___asm(Vector_0x3D0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt976)

___asm(.globl Vector_0x3D4)
___asm(Vector_0x3D4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt980)

___asm(.globl Vector_0x3D8)
___asm(Vector_0x3D8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt984)

___asm(.globl Vector_0x3DC)
___asm(Vector_0x3DC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt988)

___asm(.globl Vector_0x3E0)
___asm(Vector_0x3E0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt992)

___asm(.globl Vector_0x3E4)
___asm(Vector_0x3E4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt996)

___asm(.globl Vector_0x3E8)
___asm(Vector_0x3E8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1000)

___asm(.globl Vector_0x3EC)
___asm(Vector_0x3EC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1004)

___asm(.globl Vector_0x3F0)
___asm(Vector_0x3F0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1008)

___asm(.globl Vector_0x3F4)
___asm(Vector_0x3F4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1012)

___asm(.globl Vector_0x3F8)
___asm(Vector_0x3F8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1016)

___asm(.globl Vector_0x3FC)
___asm(Vector_0x3FC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1020)

___asm(.globl Vector_0x400)
___asm(Vector_0x400:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1024)

___asm(.globl Vector_0x404)
___asm(Vector_0x404:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1028)

___asm(.globl Vector_0x408)
___asm(Vector_0x408:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1032)

___asm(.globl Vector_0x40C)
___asm(Vector_0x40C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1036)

___asm(.globl Vector_0x410)
___asm(Vector_0x410:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1040)

___asm(.globl Vector_0x414)
___asm(Vector_0x414:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1044)

___asm(.globl Vector_0x418)
___asm(Vector_0x418:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1048)

___asm(.globl Vector_0x41C)
___asm(Vector_0x41C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1052)

___asm(.globl Vector_0x420)
___asm(Vector_0x420:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1056)

___asm(.globl Vector_0x424)
___asm(Vector_0x424:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1060)

___asm(.globl Vector_0x428)
___asm(Vector_0x428:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1064)

___asm(.globl Vector_0x42C)
___asm(Vector_0x42C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1068)

___asm(.globl Vector_0x430)
___asm(Vector_0x430:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1072)

___asm(.globl Vector_0x434)
___asm(Vector_0x434:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1076)

___asm(.globl Vector_0x438)
___asm(Vector_0x438:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1080)

___asm(.globl Vector_0x43C)
___asm(Vector_0x43C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1084)

___asm(.globl Vector_0x440)
___asm(Vector_0x440:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1088)

___asm(.globl Vector_0x444)
___asm(Vector_0x444:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1092)

___asm(.globl Vector_0x448)
___asm(Vector_0x448:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1096)

___asm(.globl Vector_0x44C)
___asm(Vector_0x44C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1100)

___asm(.globl Vector_0x450)
___asm(Vector_0x450:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1104)

___asm(.globl Vector_0x454)
___asm(Vector_0x454:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1108)

___asm(.globl Vector_0x458)
___asm(Vector_0x458:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1112)

___asm(.globl Vector_0x45C)
___asm(Vector_0x45C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1116)

___asm(.globl Vector_0x460)
___asm(Vector_0x460:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1120)

___asm(.globl Vector_0x464)
___asm(Vector_0x464:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1124)

___asm(.globl Vector_0x468)
___asm(Vector_0x468:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1128)

___asm(.globl Vector_0x46C)
___asm(Vector_0x46C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1132)

___asm(.globl Vector_0x470)
___asm(Vector_0x470:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1136)

___asm(.globl Vector_0x474)
___asm(Vector_0x474:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1140)

___asm(.globl Vector_0x478)
___asm(Vector_0x478:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1144)

___asm(.globl Vector_0x47C)
___asm(Vector_0x47C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1148)

___asm(.globl Vector_0x480)
___asm(Vector_0x480:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1152)

___asm(.globl Vector_0x484)
___asm(Vector_0x484:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1156)

___asm(.globl Vector_0x488)
___asm(Vector_0x488:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1160)

___asm(.globl Vector_0x48C)
___asm(Vector_0x48C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1164)

___asm(.globl Vector_0x490)
___asm(Vector_0x490:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1168)

___asm(.globl Vector_0x494)
___asm(Vector_0x494:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1172)

___asm(.globl Vector_0x498)
___asm(Vector_0x498:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1176)

___asm(.globl Vector_0x49C)
___asm(Vector_0x49C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1180)

___asm(.globl Vector_0x4A0)
___asm(Vector_0x4A0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1184)

___asm(.globl Vector_0x4A4)
___asm(Vector_0x4A4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1188)

___asm(.globl Vector_0x4A8)
___asm(Vector_0x4A8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1192)

___asm(.globl Vector_0x4AC)
___asm(Vector_0x4AC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1196)

___asm(.globl Vector_0x4B0)
___asm(Vector_0x4B0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1200)

___asm(.globl Vector_0x4B4)
___asm(Vector_0x4B4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1204)

___asm(.globl Vector_0x4B8)
___asm(Vector_0x4B8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1208)

___asm(.globl Vector_0x4BC)
___asm(Vector_0x4BC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1212)

___asm(.globl Vector_0x4C0)
___asm(Vector_0x4C0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1216)

___asm(.globl Vector_0x4C4)
___asm(Vector_0x4C4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1220)

___asm(.globl Vector_0x4C8)
___asm(Vector_0x4C8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1224)

___asm(.globl Vector_0x4CC)
___asm(Vector_0x4CC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1228)

___asm(.globl Vector_0x4D0)
___asm(Vector_0x4D0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1232)

___asm(.globl Vector_0x4D4)
___asm(Vector_0x4D4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1236)

___asm(.globl Vector_0x4D8)
___asm(Vector_0x4D8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1240)

___asm(.globl Vector_0x4DC)
___asm(Vector_0x4DC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1244)

___asm(.globl Vector_0x4E0)
___asm(Vector_0x4E0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1248)

___asm(.globl Vector_0x4E4)
___asm(Vector_0x4E4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1252)

___asm(.globl Vector_0x4E8)
___asm(Vector_0x4E8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1256)

___asm(.globl Vector_0x4EC)
___asm(Vector_0x4EC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1260)

___asm(.globl Vector_0x4F0)
___asm(Vector_0x4F0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1264)

___asm(.globl Vector_0x4F4)
___asm(Vector_0x4F4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1268)

___asm(.globl Vector_0x4F8)
___asm(Vector_0x4F8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1272)

___asm(.globl Vector_0x4FC)
___asm(Vector_0x4FC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1276)

___asm(.globl Vector_0x500)
___asm(Vector_0x500:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1280)

___asm(.globl Vector_0x504)
___asm(Vector_0x504:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1284)

___asm(.globl Vector_0x508)
___asm(Vector_0x508:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1288)

___asm(.globl Vector_0x50C)
___asm(Vector_0x50C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1292)

___asm(.globl Vector_0x510)
___asm(Vector_0x510:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1296)

___asm(.globl Vector_0x514)
___asm(Vector_0x514:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1300)

___asm(.globl Vector_0x518)
___asm(Vector_0x518:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1304)

___asm(.globl Vector_0x51C)
___asm(Vector_0x51C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1308)

___asm(.globl Vector_0x520)
___asm(Vector_0x520:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1312)

___asm(.globl Vector_0x524)
___asm(Vector_0x524:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1316)

___asm(.globl Vector_0x528)
___asm(Vector_0x528:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1320)

___asm(.globl Vector_0x52C)
___asm(Vector_0x52C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1324)

___asm(.globl Vector_0x530)
___asm(Vector_0x530:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1328)

___asm(.globl Vector_0x534)
___asm(Vector_0x534:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1332)

___asm(.globl Vector_0x538)
___asm(Vector_0x538:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1336)

___asm(.globl Vector_0x53C)
___asm(Vector_0x53C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1340)

___asm(.globl Vector_0x540)
___asm(Vector_0x540:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1344)

___asm(.globl Vector_0x544)
___asm(Vector_0x544:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1348)

___asm(.globl Vector_0x548)
___asm(Vector_0x548:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1352)

___asm(.globl Vector_0x54C)
___asm(Vector_0x54C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1356)

___asm(.globl Vector_0x550)
___asm(Vector_0x550:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1360)

___asm(.globl Vector_0x554)
___asm(Vector_0x554:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1364)

___asm(.globl Vector_0x558)
___asm(Vector_0x558:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1368)

___asm(.globl Vector_0x55C)
___asm(Vector_0x55C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1372)

___asm(.globl Vector_0x560)
___asm(Vector_0x560:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1376)

___asm(.globl Vector_0x564)
___asm(Vector_0x564:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1380)

___asm(.globl Vector_0x568)
___asm(Vector_0x568:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1384)

___asm(.globl Vector_0x56C)
___asm(Vector_0x56C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1388)

___asm(.globl Vector_0x570)
___asm(Vector_0x570:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1392)

___asm(.globl Vector_0x574)
___asm(Vector_0x574:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1396)

___asm(.globl Vector_0x578)
___asm(Vector_0x578:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1400)

___asm(.globl Vector_0x57C)
___asm(Vector_0x57C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1404)

___asm(.globl Vector_0x580)
___asm(Vector_0x580:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1408)

___asm(.globl Vector_0x584)
___asm(Vector_0x584:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1412)

___asm(.globl Vector_0x588)
___asm(Vector_0x588:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1416)

___asm(.globl Vector_0x58C)
___asm(Vector_0x58C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1420)

___asm(.globl Vector_0x590)
___asm(Vector_0x590:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1424)

___asm(.globl Vector_0x594)
___asm(Vector_0x594:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1428)

___asm(.globl Vector_0x598)
___asm(Vector_0x598:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1432)

___asm(.globl Vector_0x59C)
___asm(Vector_0x59C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1436)

___asm(.globl Vector_0x5A0)
___asm(Vector_0x5A0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1440)

___asm(.globl Vector_0x5A4)
___asm(Vector_0x5A4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1444)

___asm(.globl Vector_0x5A8)
___asm(Vector_0x5A8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1448)

___asm(.globl Vector_0x5AC)
___asm(Vector_0x5AC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1452)

___asm(.globl Vector_0x5B0)
___asm(Vector_0x5B0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1456)

___asm(.globl Vector_0x5B4)
___asm(Vector_0x5B4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1460)

___asm(.globl Vector_0x5B8)
___asm(Vector_0x5B8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1464)

___asm(.globl Vector_0x5BC)
___asm(Vector_0x5BC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1468)

___asm(.globl Vector_0x5C0)
___asm(Vector_0x5C0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1472)

___asm(.globl Vector_0x5C4)
___asm(Vector_0x5C4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1476)

___asm(.globl Vector_0x5C8)
___asm(Vector_0x5C8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1480)

___asm(.globl Vector_0x5CC)
___asm(Vector_0x5CC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1484)

___asm(.globl Vector_0x5D0)
___asm(Vector_0x5D0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1488)

___asm(.globl Vector_0x5D4)
___asm(Vector_0x5D4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1492)

___asm(.globl Vector_0x5D8)
___asm(Vector_0x5D8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1496)

___asm(.globl Vector_0x5DC)
___asm(Vector_0x5DC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1500)

___asm(.globl Vector_0x5E0)
___asm(Vector_0x5E0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1504)

___asm(.globl Vector_0x5E4)
___asm(Vector_0x5E4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1508)

___asm(.globl Vector_0x5E8)
___asm(Vector_0x5E8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1512)

___asm(.globl Vector_0x5EC)
___asm(Vector_0x5EC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1516)

___asm(.globl Vector_0x5F0)
___asm(Vector_0x5F0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1520)

___asm(.globl Vector_0x5F4)
___asm(Vector_0x5F4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1524)

___asm(.globl Vector_0x5F8)
___asm(Vector_0x5F8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1528)

___asm(.globl Vector_0x5FC)
___asm(Vector_0x5FC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1532)

___asm(.globl Vector_0x600)
___asm(Vector_0x600:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1536)

___asm(.globl Vector_0x604)
___asm(Vector_0x604:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1540)

___asm(.globl Vector_0x608)
___asm(Vector_0x608:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1544)

___asm(.globl Vector_0x60C)
___asm(Vector_0x60C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1548)

___asm(.globl Vector_0x610)
___asm(Vector_0x610:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1552)

___asm(.globl Vector_0x614)
___asm(Vector_0x614:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1556)

___asm(.globl Vector_0x618)
___asm(Vector_0x618:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1560)

___asm(.globl Vector_0x61C)
___asm(Vector_0x61C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1564)

___asm(.globl Vector_0x620)
___asm(Vector_0x620:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1568)

___asm(.globl Vector_0x624)
___asm(Vector_0x624:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1572)

___asm(.globl Vector_0x628)
___asm(Vector_0x628:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1576)

___asm(.globl Vector_0x62C)
___asm(Vector_0x62C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1580)

___asm(.globl Vector_0x630)
___asm(Vector_0x630:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1584)

___asm(.globl Vector_0x634)
___asm(Vector_0x634:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1588)

___asm(.globl Vector_0x638)
___asm(Vector_0x638:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1592)

___asm(.globl Vector_0x63C)
___asm(Vector_0x63C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1596)

___asm(.globl Vector_0x640)
___asm(Vector_0x640:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1600)

___asm(.globl Vector_0x644)
___asm(Vector_0x644:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1604)

___asm(.globl Vector_0x648)
___asm(Vector_0x648:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1608)

___asm(.globl Vector_0x64C)
___asm(Vector_0x64C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1612)

___asm(.globl Vector_0x650)
___asm(Vector_0x650:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1616)

___asm(.globl Vector_0x654)
___asm(Vector_0x654:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1620)

___asm(.globl Vector_0x658)
___asm(Vector_0x658:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1624)

___asm(.globl Vector_0x65C)
___asm(Vector_0x65C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1628)

___asm(.globl Vector_0x660)
___asm(Vector_0x660:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1632)

___asm(.globl Vector_0x664)
___asm(Vector_0x664:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1636)

___asm(.globl Vector_0x668)
___asm(Vector_0x668:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1640)

___asm(.globl Vector_0x66C)
___asm(Vector_0x66C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1644)

___asm(.globl Vector_0x670)
___asm(Vector_0x670:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1648)

___asm(.globl Vector_0x674)
___asm(Vector_0x674:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1652)

___asm(.globl Vector_0x678)
___asm(Vector_0x678:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1656)

___asm(.globl Vector_0x67C)
___asm(Vector_0x67C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1660)

___asm(.globl Vector_0x680)
___asm(Vector_0x680:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1664)

___asm(.globl Vector_0x684)
___asm(Vector_0x684:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1668)

___asm(.globl Vector_0x688)
___asm(Vector_0x688:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1672)

___asm(.globl Vector_0x68C)
___asm(Vector_0x68C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1676)

___asm(.globl Vector_0x690)
___asm(Vector_0x690:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1680)

___asm(.globl Vector_0x694)
___asm(Vector_0x694:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1684)

___asm(.globl Vector_0x698)
___asm(Vector_0x698:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1688)

___asm(.globl Vector_0x69C)
___asm(Vector_0x69C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1692)

___asm(.globl Vector_0x6A0)
___asm(Vector_0x6A0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1696)

___asm(.globl Vector_0x6A4)
___asm(Vector_0x6A4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1700)

___asm(.globl Vector_0x6A8)
___asm(Vector_0x6A8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1704)

___asm(.globl Vector_0x6AC)
___asm(Vector_0x6AC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1708)

___asm(.globl Vector_0x6B0)
___asm(Vector_0x6B0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1712)

___asm(.globl Vector_0x6B4)
___asm(Vector_0x6B4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1716)

___asm(.globl Vector_0x6B8)
___asm(Vector_0x6B8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1720)

___asm(.globl Vector_0x6BC)
___asm(Vector_0x6BC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1724)

___asm(.globl Vector_0x6C0)
___asm(Vector_0x6C0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1728)

___asm(.globl Vector_0x6C4)
___asm(Vector_0x6C4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1732)

___asm(.globl Vector_0x6C8)
___asm(Vector_0x6C8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1736)

___asm(.globl Vector_0x6CC)
___asm(Vector_0x6CC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1740)

___asm(.globl Vector_0x6D0)
___asm(Vector_0x6D0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1744)

___asm(.globl Vector_0x6D4)
___asm(Vector_0x6D4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1748)

___asm(.globl Vector_0x6D8)
___asm(Vector_0x6D8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1752)

___asm(.globl Vector_0x6DC)
___asm(Vector_0x6DC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1756)

___asm(.globl Vector_0x6E0)
___asm(Vector_0x6E0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1760)

___asm(.globl Vector_0x6E4)
___asm(Vector_0x6E4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1764)

___asm(.globl Vector_0x6E8)
___asm(Vector_0x6E8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1768)

___asm(.globl Vector_0x6EC)
___asm(Vector_0x6EC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1772)

___asm(.globl Vector_0x6F0)
___asm(Vector_0x6F0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1776)

___asm(.globl Vector_0x6F4)
___asm(Vector_0x6F4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1780)

___asm(.globl Vector_0x6F8)
___asm(Vector_0x6F8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1784)

___asm(.globl Vector_0x6FC)
___asm(Vector_0x6FC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1788)

___asm(.globl Vector_0x700)
___asm(Vector_0x700:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1792)

___asm(.globl Vector_0x704)
___asm(Vector_0x704:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1796)

___asm(.globl Vector_0x708)
___asm(Vector_0x708:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1800)

___asm(.globl Vector_0x70C)
___asm(Vector_0x70C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1804)

___asm(.globl Vector_0x710)
___asm(Vector_0x710:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1808)

___asm(.globl Vector_0x714)
___asm(Vector_0x714:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1812)

___asm(.globl Vector_0x718)
___asm(Vector_0x718:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1816)

___asm(.globl Vector_0x71C)
___asm(Vector_0x71C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1820)

___asm(.globl Vector_0x720)
___asm(Vector_0x720:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1824)

___asm(.globl Vector_0x724)
___asm(Vector_0x724:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1828)

___asm(.globl Vector_0x728)
___asm(Vector_0x728:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1832)

___asm(.globl Vector_0x72C)
___asm(Vector_0x72C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1836)

___asm(.globl Vector_0x730)
___asm(Vector_0x730:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1840)

___asm(.globl Vector_0x734)
___asm(Vector_0x734:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1844)

___asm(.globl Vector_0x738)
___asm(Vector_0x738:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1848)

___asm(.globl Vector_0x73C)
___asm(Vector_0x73C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1852)

___asm(.globl Vector_0x740)
___asm(Vector_0x740:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1856)

___asm(.globl Vector_0x744)
___asm(Vector_0x744:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1860)

___asm(.globl Vector_0x748)
___asm(Vector_0x748:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1864)

___asm(.globl Vector_0x74C)
___asm(Vector_0x74C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1868)

___asm(.globl Vector_0x750)
___asm(Vector_0x750:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1872)

___asm(.globl Vector_0x754)
___asm(Vector_0x754:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1876)

___asm(.globl Vector_0x758)
___asm(Vector_0x758:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1880)

___asm(.globl Vector_0x75C)
___asm(Vector_0x75C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1884)

___asm(.globl Vector_0x760)
___asm(Vector_0x760:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1888)

___asm(.globl Vector_0x764)
___asm(Vector_0x764:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1892)

___asm(.globl Vector_0x768)
___asm(Vector_0x768:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1896)

___asm(.globl Vector_0x76C)
___asm(Vector_0x76C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1900)

___asm(.globl Vector_0x770)
___asm(Vector_0x770:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1904)

___asm(.globl Vector_0x774)
___asm(Vector_0x774:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1908)

___asm(.globl Vector_0x778)
___asm(Vector_0x778:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1912)

___asm(.globl Vector_0x77C)
___asm(Vector_0x77C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1916)

___asm(.globl Vector_0x780)
___asm(Vector_0x780:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1920)

___asm(.globl Vector_0x784)
___asm(Vector_0x784:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1924)

___asm(.globl Vector_0x788)
___asm(Vector_0x788:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1928)

___asm(.globl Vector_0x78C)
___asm(Vector_0x78C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1932)

___asm(.globl Vector_0x790)
___asm(Vector_0x790:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1936)

___asm(.globl Vector_0x794)
___asm(Vector_0x794:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1940)

___asm(.globl Vector_0x798)
___asm(Vector_0x798:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1944)

___asm(.globl Vector_0x79C)
___asm(Vector_0x79C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1948)

___asm(.globl Vector_0x7A0)
___asm(Vector_0x7A0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1952)

___asm(.globl Vector_0x7A4)
___asm(Vector_0x7A4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1956)

___asm(.globl Vector_0x7A8)
___asm(Vector_0x7A8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1960)

___asm(.globl Vector_0x7AC)
___asm(Vector_0x7AC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1964)

___asm(.globl Vector_0x7B0)
___asm(Vector_0x7B0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1968)

___asm(.globl Vector_0x7B4)
___asm(Vector_0x7B4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1972)

___asm(.globl Vector_0x7B8)
___asm(Vector_0x7B8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1976)

___asm(.globl Vector_0x7BC)
___asm(Vector_0x7BC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1980)

___asm(.globl Vector_0x7C0)
___asm(Vector_0x7C0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1984)

___asm(.globl Vector_0x7C4)
___asm(Vector_0x7C4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1988)

___asm(.globl Vector_0x7C8)
___asm(Vector_0x7C8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1992)

___asm(.globl Vector_0x7CC)
___asm(Vector_0x7CC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt1996)

___asm(.globl Vector_0x7D0)
___asm(Vector_0x7D0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2000)

___asm(.globl Vector_0x7D4)
___asm(Vector_0x7D4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2004)

___asm(.globl Vector_0x7D8)
___asm(Vector_0x7D8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2008)

___asm(.globl Vector_0x7DC)
___asm(Vector_0x7DC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2012)

___asm(.globl Vector_0x7E0)
___asm(Vector_0x7E0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2016)

___asm(.globl Vector_0x7E4)
___asm(Vector_0x7E4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2020)

___asm(.globl Vector_0x7E8)
___asm(Vector_0x7E8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2024)

___asm(.globl Vector_0x7EC)
___asm(Vector_0x7EC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2028)

___asm(.globl Vector_0x7F0)
___asm(Vector_0x7F0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2032)

___asm(.globl Vector_0x7F4)
___asm(Vector_0x7F4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2036)

___asm(.globl Vector_0x7F8)
___asm(Vector_0x7F8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2040)

___asm(.globl Vector_0x7FC)
___asm(Vector_0x7FC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2044)

___asm(.globl Vector_0x800)
___asm(Vector_0x800:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2048)

___asm(.globl Vector_0x804)
___asm(Vector_0x804:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2052)

___asm(.globl Vector_0x808)
___asm(Vector_0x808:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2056)

___asm(.globl Vector_0x80C)
___asm(Vector_0x80C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2060)

___asm(.globl Vector_0x810)
___asm(Vector_0x810:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2064)

___asm(.globl Vector_0x814)
___asm(Vector_0x814:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2068)

___asm(.globl Vector_0x818)
___asm(Vector_0x818:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2072)

___asm(.globl Vector_0x81C)
___asm(Vector_0x81C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2076)

___asm(.globl Vector_0x820)
___asm(Vector_0x820:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2080)

___asm(.globl Vector_0x824)
___asm(Vector_0x824:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2084)

___asm(.globl Vector_0x828)
___asm(Vector_0x828:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2088)

___asm(.globl Vector_0x82C)
___asm(Vector_0x82C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2092)

___asm(.globl Vector_0x830)
___asm(Vector_0x830:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2096)

___asm(.globl Vector_0x834)
___asm(Vector_0x834:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2100)

___asm(.globl Vector_0x838)
___asm(Vector_0x838:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2104)

___asm(.globl Vector_0x83C)
___asm(Vector_0x83C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2108)

___asm(.globl Vector_0x840)
___asm(Vector_0x840:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2112)

___asm(.globl Vector_0x844)
___asm(Vector_0x844:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2116)

___asm(.globl Vector_0x848)
___asm(Vector_0x848:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2120)

___asm(.globl Vector_0x84C)
___asm(Vector_0x84C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2124)

___asm(.globl Vector_0x850)
___asm(Vector_0x850:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2128)

___asm(.globl Vector_0x854)
___asm(Vector_0x854:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2132)

___asm(.globl Vector_0x858)
___asm(Vector_0x858:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2136)

___asm(.globl Vector_0x85C)
___asm(Vector_0x85C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2140)

___asm(.globl Vector_0x860)
___asm(Vector_0x860:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2144)

___asm(.globl Vector_0x864)
___asm(Vector_0x864:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2148)

___asm(.globl Vector_0x868)
___asm(Vector_0x868:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2152)

___asm(.globl Vector_0x86C)
___asm(Vector_0x86C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2156)

___asm(.globl Vector_0x870)
___asm(Vector_0x870:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2160)

___asm(.globl Vector_0x874)
___asm(Vector_0x874:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2164)

___asm(.globl Vector_0x878)
___asm(Vector_0x878:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2168)

___asm(.globl Vector_0x87C)
___asm(Vector_0x87C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2172)

___asm(.globl Vector_0x880)
___asm(Vector_0x880:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2176)

___asm(.globl Vector_0x884)
___asm(Vector_0x884:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2180)

___asm(.globl Vector_0x888)
___asm(Vector_0x888:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2184)

___asm(.globl Vector_0x88C)
___asm(Vector_0x88C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2188)

___asm(.globl Vector_0x890)
___asm(Vector_0x890:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2192)

___asm(.globl Vector_0x894)
___asm(Vector_0x894:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2196)

___asm(.globl Vector_0x898)
___asm(Vector_0x898:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2200)

___asm(.globl Vector_0x89C)
___asm(Vector_0x89C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2204)

___asm(.globl Vector_0x8A0)
___asm(Vector_0x8A0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2208)

___asm(.globl Vector_0x8A4)
___asm(Vector_0x8A4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2212)

___asm(.globl Vector_0x8A8)
___asm(Vector_0x8A8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2216)

___asm(.globl Vector_0x8AC)
___asm(Vector_0x8AC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2220)

___asm(.globl Vector_0x8B0)
___asm(Vector_0x8B0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2224)

___asm(.globl Vector_0x8B4)
___asm(Vector_0x8B4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2228)

___asm(.globl Vector_0x8B8)
___asm(Vector_0x8B8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2232)

___asm(.globl Vector_0x8BC)
___asm(Vector_0x8BC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2236)

___asm(.globl Vector_0x8C0)
___asm(Vector_0x8C0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2240)

___asm(.globl Vector_0x8C4)
___asm(Vector_0x8C4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2244)

___asm(.globl Vector_0x8C8)
___asm(Vector_0x8C8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2248)

___asm(.globl Vector_0x8CC)
___asm(Vector_0x8CC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2252)

___asm(.globl Vector_0x8D0)
___asm(Vector_0x8D0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2256)

___asm(.globl Vector_0x8D4)
___asm(Vector_0x8D4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2260)

___asm(.globl Vector_0x8D8)
___asm(Vector_0x8D8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2264)

___asm(.globl Vector_0x8DC)
___asm(Vector_0x8DC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2268)

___asm(.globl Vector_0x8E0)
___asm(Vector_0x8E0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2272)

___asm(.globl Vector_0x8E4)
___asm(Vector_0x8E4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2276)

___asm(.globl Vector_0x8E8)
___asm(Vector_0x8E8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2280)

___asm(.globl Vector_0x8EC)
___asm(Vector_0x8EC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2284)

___asm(.globl Vector_0x8F0)
___asm(Vector_0x8F0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2288)

___asm(.globl Vector_0x8F4)
___asm(Vector_0x8F4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2292)

___asm(.globl Vector_0x8F8)
___asm(Vector_0x8F8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2296)

___asm(.globl Vector_0x8FC)
___asm(Vector_0x8FC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2300)

___asm(.globl Vector_0x900)
___asm(Vector_0x900:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2304)

___asm(.globl Vector_0x904)
___asm(Vector_0x904:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2308)

___asm(.globl Vector_0x908)
___asm(Vector_0x908:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2312)

___asm(.globl Vector_0x90C)
___asm(Vector_0x90C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2316)

___asm(.globl Vector_0x910)
___asm(Vector_0x910:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2320)

___asm(.globl Vector_0x914)
___asm(Vector_0x914:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2324)

___asm(.globl Vector_0x918)
___asm(Vector_0x918:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2328)

___asm(.globl Vector_0x91C)
___asm(Vector_0x91C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2332)

___asm(.globl Vector_0x920)
___asm(Vector_0x920:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2336)

___asm(.globl Vector_0x924)
___asm(Vector_0x924:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2340)

___asm(.globl Vector_0x928)
___asm(Vector_0x928:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2344)

___asm(.globl Vector_0x92C)
___asm(Vector_0x92C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2348)

___asm(.globl Vector_0x930)
___asm(Vector_0x930:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2352)

___asm(.globl Vector_0x934)
___asm(Vector_0x934:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2356)

___asm(.globl Vector_0x938)
___asm(Vector_0x938:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2360)

___asm(.globl Vector_0x93C)
___asm(Vector_0x93C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2364)

___asm(.globl Vector_0x940)
___asm(Vector_0x940:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2368)

___asm(.globl Vector_0x944)
___asm(Vector_0x944:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2372)

___asm(.globl Vector_0x948)
___asm(Vector_0x948:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2376)

___asm(.globl Vector_0x94C)
___asm(Vector_0x94C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2380)

___asm(.globl Vector_0x950)
___asm(Vector_0x950:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2384)

___asm(.globl Vector_0x954)
___asm(Vector_0x954:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2388)

___asm(.globl Vector_0x958)
___asm(Vector_0x958:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2392)

___asm(.globl Vector_0x95C)
___asm(Vector_0x95C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2396)

___asm(.globl Vector_0x960)
___asm(Vector_0x960:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2400)

___asm(.globl Vector_0x964)
___asm(Vector_0x964:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2404)

___asm(.globl Vector_0x968)
___asm(Vector_0x968:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2408)

___asm(.globl Vector_0x96C)
___asm(Vector_0x96C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2412)

___asm(.globl Vector_0x970)
___asm(Vector_0x970:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2416)

___asm(.globl Vector_0x974)
___asm(Vector_0x974:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2420)

___asm(.globl Vector_0x978)
___asm(Vector_0x978:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2424)

___asm(.globl Vector_0x97C)
___asm(Vector_0x97C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2428)

___asm(.globl Vector_0x980)
___asm(Vector_0x980:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2432)

___asm(.globl Vector_0x984)
___asm(Vector_0x984:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2436)

___asm(.globl Vector_0x988)
___asm(Vector_0x988:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2440)

___asm(.globl Vector_0x98C)
___asm(Vector_0x98C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2444)

___asm(.globl Vector_0x990)
___asm(Vector_0x990:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2448)

___asm(.globl Vector_0x994)
___asm(Vector_0x994:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2452)

___asm(.globl Vector_0x998)
___asm(Vector_0x998:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2456)

___asm(.globl Vector_0x99C)
___asm(Vector_0x99C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2460)

___asm(.globl Vector_0x9A0)
___asm(Vector_0x9A0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2464)

___asm(.globl Vector_0x9A4)
___asm(Vector_0x9A4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2468)

___asm(.globl Vector_0x9A8)
___asm(Vector_0x9A8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2472)

___asm(.globl Vector_0x9AC)
___asm(Vector_0x9AC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2476)

___asm(.globl Vector_0x9B0)
___asm(Vector_0x9B0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2480)

___asm(.globl Vector_0x9B4)
___asm(Vector_0x9B4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2484)

___asm(.globl Vector_0x9B8)
___asm(Vector_0x9B8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2488)

___asm(.globl Vector_0x9BC)
___asm(Vector_0x9BC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2492)

___asm(.globl Vector_0x9C0)
___asm(Vector_0x9C0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2496)

___asm(.globl Vector_0x9C4)
___asm(Vector_0x9C4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2500)

___asm(.globl Vector_0x9C8)
___asm(Vector_0x9C8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2504)

___asm(.globl Vector_0x9CC)
___asm(Vector_0x9CC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2508)

___asm(.globl Vector_0x9D0)
___asm(Vector_0x9D0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2512)

___asm(.globl Vector_0x9D4)
___asm(Vector_0x9D4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2516)

___asm(.globl Vector_0x9D8)
___asm(Vector_0x9D8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2520)

___asm(.globl Vector_0x9DC)
___asm(Vector_0x9DC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2524)

___asm(.globl Vector_0x9E0)
___asm(Vector_0x9E0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2528)

___asm(.globl Vector_0x9E4)
___asm(Vector_0x9E4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2532)

___asm(.globl Vector_0x9E8)
___asm(Vector_0x9E8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2536)

___asm(.globl Vector_0x9EC)
___asm(Vector_0x9EC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2540)

___asm(.globl Vector_0x9F0)
___asm(Vector_0x9F0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2544)

___asm(.globl Vector_0x9F4)
___asm(Vector_0x9F4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2548)

___asm(.globl Vector_0x9F8)
___asm(Vector_0x9F8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2552)

___asm(.globl Vector_0x9FC)
___asm(Vector_0x9FC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2556)

___asm(.globl Vector_0xA00)
___asm(Vector_0xA00:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2560)

___asm(.globl Vector_0xA04)
___asm(Vector_0xA04:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2564)

___asm(.globl Vector_0xA08)
___asm(Vector_0xA08:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2568)

___asm(.globl Vector_0xA0C)
___asm(Vector_0xA0C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2572)

___asm(.globl Vector_0xA10)
___asm(Vector_0xA10:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2576)

___asm(.globl Vector_0xA14)
___asm(Vector_0xA14:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2580)

___asm(.globl Vector_0xA18)
___asm(Vector_0xA18:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2584)

___asm(.globl Vector_0xA1C)
___asm(Vector_0xA1C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2588)

___asm(.globl Vector_0xA20)
___asm(Vector_0xA20:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2592)

___asm(.globl Vector_0xA24)
___asm(Vector_0xA24:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2596)

___asm(.globl Vector_0xA28)
___asm(Vector_0xA28:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2600)

___asm(.globl Vector_0xA2C)
___asm(Vector_0xA2C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2604)

___asm(.globl Vector_0xA30)
___asm(Vector_0xA30:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2608)

___asm(.globl Vector_0xA34)
___asm(Vector_0xA34:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2612)

___asm(.globl Vector_0xA38)
___asm(Vector_0xA38:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2616)

___asm(.globl Vector_0xA3C)
___asm(Vector_0xA3C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2620)

___asm(.globl Vector_0xA40)
___asm(Vector_0xA40:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2624)

___asm(.globl Vector_0xA44)
___asm(Vector_0xA44:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2628)

___asm(.globl Vector_0xA48)
___asm(Vector_0xA48:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2632)

___asm(.globl Vector_0xA4C)
___asm(Vector_0xA4C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2636)

___asm(.globl Vector_0xA50)
___asm(Vector_0xA50:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2640)

___asm(.globl Vector_0xA54)
___asm(Vector_0xA54:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2644)

___asm(.globl Vector_0xA58)
___asm(Vector_0xA58:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2648)

___asm(.globl Vector_0xA5C)
___asm(Vector_0xA5C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2652)

___asm(.globl Vector_0xA60)
___asm(Vector_0xA60:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2656)

___asm(.globl Vector_0xA64)
___asm(Vector_0xA64:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2660)

___asm(.globl Vector_0xA68)
___asm(Vector_0xA68:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2664)

___asm(.globl Vector_0xA6C)
___asm(Vector_0xA6C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2668)

___asm(.globl Vector_0xA70)
___asm(Vector_0xA70:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2672)

___asm(.globl Vector_0xA74)
___asm(Vector_0xA74:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2676)

___asm(.globl Vector_0xA78)
___asm(Vector_0xA78:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2680)

___asm(.globl Vector_0xA7C)
___asm(Vector_0xA7C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2684)

___asm(.globl Vector_0xA80)
___asm(Vector_0xA80:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2688)

___asm(.globl Vector_0xA84)
___asm(Vector_0xA84:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2692)

___asm(.globl Vector_0xA88)
___asm(Vector_0xA88:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2696)

___asm(.globl Vector_0xA8C)
___asm(Vector_0xA8C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2700)

___asm(.globl Vector_0xA90)
___asm(Vector_0xA90:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2704)

___asm(.globl Vector_0xA94)
___asm(Vector_0xA94:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2708)

___asm(.globl Vector_0xA98)
___asm(Vector_0xA98:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2712)

___asm(.globl Vector_0xA9C)
___asm(Vector_0xA9C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2716)

___asm(.globl Vector_0xAA0)
___asm(Vector_0xAA0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2720)

___asm(.globl Vector_0xAA4)
___asm(Vector_0xAA4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2724)

___asm(.globl Vector_0xAA8)
___asm(Vector_0xAA8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2728)

___asm(.globl Vector_0xAAC)
___asm(Vector_0xAAC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2732)

___asm(.globl Vector_0xAB0)
___asm(Vector_0xAB0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2736)

___asm(.globl Vector_0xAB4)
___asm(Vector_0xAB4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2740)

___asm(.globl Vector_0xAB8)
___asm(Vector_0xAB8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2744)

___asm(.globl Vector_0xABC)
___asm(Vector_0xABC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2748)

___asm(.globl Vector_0xAC0)
___asm(Vector_0xAC0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2752)

___asm(.globl Vector_0xAC4)
___asm(Vector_0xAC4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2756)

___asm(.globl Vector_0xAC8)
___asm(Vector_0xAC8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2760)

___asm(.globl Vector_0xACC)
___asm(Vector_0xACC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2764)

___asm(.globl Vector_0xAD0)
___asm(Vector_0xAD0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2768)

___asm(.globl Vector_0xAD4)
___asm(Vector_0xAD4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2772)

___asm(.globl Vector_0xAD8)
___asm(Vector_0xAD8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2776)

___asm(.globl Vector_0xADC)
___asm(Vector_0xADC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2780)

___asm(.globl Vector_0xAE0)
___asm(Vector_0xAE0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2784)

___asm(.globl Vector_0xAE4)
___asm(Vector_0xAE4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2788)

___asm(.globl Vector_0xAE8)
___asm(Vector_0xAE8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2792)

___asm(.globl Vector_0xAEC)
___asm(Vector_0xAEC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2796)

___asm(.globl Vector_0xAF0)
___asm(Vector_0xAF0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2800)

___asm(.globl Vector_0xAF4)
___asm(Vector_0xAF4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2804)

___asm(.globl Vector_0xAF8)
___asm(Vector_0xAF8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2808)

___asm(.globl Vector_0xAFC)
___asm(Vector_0xAFC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2812)

___asm(.globl Vector_0xB00)
___asm(Vector_0xB00:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2816)

___asm(.globl Vector_0xB04)
___asm(Vector_0xB04:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2820)

___asm(.globl Vector_0xB08)
___asm(Vector_0xB08:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2824)

___asm(.globl Vector_0xB0C)
___asm(Vector_0xB0C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2828)

___asm(.globl Vector_0xB10)
___asm(Vector_0xB10:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2832)

___asm(.globl Vector_0xB14)
___asm(Vector_0xB14:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2836)

___asm(.globl Vector_0xB18)
___asm(Vector_0xB18:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2840)

___asm(.globl Vector_0xB1C)
___asm(Vector_0xB1C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2844)

___asm(.globl Vector_0xB20)
___asm(Vector_0xB20:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2848)

___asm(.globl Vector_0xB24)
___asm(Vector_0xB24:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2852)

___asm(.globl Vector_0xB28)
___asm(Vector_0xB28:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2856)

___asm(.globl Vector_0xB2C)
___asm(Vector_0xB2C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2860)

___asm(.globl Vector_0xB30)
___asm(Vector_0xB30:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2864)

___asm(.globl Vector_0xB34)
___asm(Vector_0xB34:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2868)

___asm(.globl Vector_0xB38)
___asm(Vector_0xB38:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2872)

___asm(.globl Vector_0xB3C)
___asm(Vector_0xB3C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2876)

___asm(.globl Vector_0xB40)
___asm(Vector_0xB40:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2880)

___asm(.globl Vector_0xB44)
___asm(Vector_0xB44:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2884)

___asm(.globl Vector_0xB48)
___asm(Vector_0xB48:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2888)

___asm(.globl Vector_0xB4C)
___asm(Vector_0xB4C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2892)

___asm(.globl Vector_0xB50)
___asm(Vector_0xB50:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2896)

___asm(.globl Vector_0xB54)
___asm(Vector_0xB54:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2900)

___asm(.globl Vector_0xB58)
___asm(Vector_0xB58:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2904)

___asm(.globl Vector_0xB5C)
___asm(Vector_0xB5C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2908)

___asm(.globl Vector_0xB60)
___asm(Vector_0xB60:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2912)

___asm(.globl Vector_0xB64)
___asm(Vector_0xB64:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2916)

___asm(.globl Vector_0xB68)
___asm(Vector_0xB68:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2920)

___asm(.globl Vector_0xB6C)
___asm(Vector_0xB6C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2924)

___asm(.globl Vector_0xB70)
___asm(Vector_0xB70:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2928)

___asm(.globl Vector_0xB74)
___asm(Vector_0xB74:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2932)

___asm(.globl Vector_0xB78)
___asm(Vector_0xB78:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2936)

___asm(.globl Vector_0xB7C)
___asm(Vector_0xB7C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2940)

___asm(.globl Vector_0xB80)
___asm(Vector_0xB80:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2944)

___asm(.globl Vector_0xB84)
___asm(Vector_0xB84:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2948)

___asm(.globl Vector_0xB88)
___asm(Vector_0xB88:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2952)

___asm(.globl Vector_0xB8C)
___asm(Vector_0xB8C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2956)

___asm(.globl Vector_0xB90)
___asm(Vector_0xB90:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2960)

___asm(.globl Vector_0xB94)
___asm(Vector_0xB94:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2964)

___asm(.globl Vector_0xB98)
___asm(Vector_0xB98:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2968)

___asm(.globl Vector_0xB9C)
___asm(Vector_0xB9C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2972)

___asm(.globl Vector_0xBA0)
___asm(Vector_0xBA0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2976)

___asm(.globl Vector_0xBA4)
___asm(Vector_0xBA4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2980)

___asm(.globl Vector_0xBA8)
___asm(Vector_0xBA8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2984)

___asm(.globl Vector_0xBAC)
___asm(Vector_0xBAC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2988)

___asm(.globl Vector_0xBB0)
___asm(Vector_0xBB0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2992)

___asm(.globl Vector_0xBB4)
___asm(Vector_0xBB4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt2996)

___asm(.globl Vector_0xBB8)
___asm(Vector_0xBB8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3000)

___asm(.globl Vector_0xBBC)
___asm(Vector_0xBBC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3004)

___asm(.globl Vector_0xBC0)
___asm(Vector_0xBC0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3008)

___asm(.globl Vector_0xBC4)
___asm(Vector_0xBC4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3012)

___asm(.globl Vector_0xBC8)
___asm(Vector_0xBC8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3016)

___asm(.globl Vector_0xBCC)
___asm(Vector_0xBCC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3020)

___asm(.globl Vector_0xBD0)
___asm(Vector_0xBD0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3024)

___asm(.globl Vector_0xBD4)
___asm(Vector_0xBD4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3028)

___asm(.globl Vector_0xBD8)
___asm(Vector_0xBD8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3032)

___asm(.globl Vector_0xBDC)
___asm(Vector_0xBDC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3036)

___asm(.globl Vector_0xBE0)
___asm(Vector_0xBE0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3040)

___asm(.globl Vector_0xBE4)
___asm(Vector_0xBE4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3044)

___asm(.globl Vector_0xBE8)
___asm(Vector_0xBE8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3048)

___asm(.globl Vector_0xBEC)
___asm(Vector_0xBEC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3052)

___asm(.globl Vector_0xBF0)
___asm(Vector_0xBF0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3056)

___asm(.globl Vector_0xBF4)
___asm(Vector_0xBF4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3060)

___asm(.globl Vector_0xBF8)
___asm(Vector_0xBF8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3064)

___asm(.globl Vector_0xBFC)
___asm(Vector_0xBFC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3068)

___asm(.globl Vector_0xC00)
___asm(Vector_0xC00:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3072)

___asm(.globl Vector_0xC04)
___asm(Vector_0xC04:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3076)

___asm(.globl Vector_0xC08)
___asm(Vector_0xC08:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3080)

___asm(.globl Vector_0xC0C)
___asm(Vector_0xC0C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3084)

___asm(.globl Vector_0xC10)
___asm(Vector_0xC10:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3088)

___asm(.globl Vector_0xC14)
___asm(Vector_0xC14:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3092)

___asm(.globl Vector_0xC18)
___asm(Vector_0xC18:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3096)

___asm(.globl Vector_0xC1C)
___asm(Vector_0xC1C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3100)

___asm(.globl Vector_0xC20)
___asm(Vector_0xC20:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3104)

___asm(.globl Vector_0xC24)
___asm(Vector_0xC24:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3108)

___asm(.globl Vector_0xC28)
___asm(Vector_0xC28:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3112)

___asm(.globl Vector_0xC2C)
___asm(Vector_0xC2C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3116)

___asm(.globl Vector_0xC30)
___asm(Vector_0xC30:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3120)

___asm(.globl Vector_0xC34)
___asm(Vector_0xC34:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3124)

___asm(.globl Vector_0xC38)
___asm(Vector_0xC38:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3128)

___asm(.globl Vector_0xC3C)
___asm(Vector_0xC3C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3132)

___asm(.globl Vector_0xC40)
___asm(Vector_0xC40:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3136)

___asm(.globl Vector_0xC44)
___asm(Vector_0xC44:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3140)

___asm(.globl Vector_0xC48)
___asm(Vector_0xC48:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3144)

___asm(.globl Vector_0xC4C)
___asm(Vector_0xC4C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3148)

___asm(.globl Vector_0xC50)
___asm(Vector_0xC50:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3152)

___asm(.globl Vector_0xC54)
___asm(Vector_0xC54:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3156)

___asm(.globl Vector_0xC58)
___asm(Vector_0xC58:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3160)

___asm(.globl Vector_0xC5C)
___asm(Vector_0xC5C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3164)

___asm(.globl Vector_0xC60)
___asm(Vector_0xC60:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3168)

___asm(.globl Vector_0xC64)
___asm(Vector_0xC64:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3172)

___asm(.globl Vector_0xC68)
___asm(Vector_0xC68:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3176)

___asm(.globl Vector_0xC6C)
___asm(Vector_0xC6C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3180)

___asm(.globl Vector_0xC70)
___asm(Vector_0xC70:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3184)

___asm(.globl Vector_0xC74)
___asm(Vector_0xC74:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3188)

___asm(.globl Vector_0xC78)
___asm(Vector_0xC78:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3192)

___asm(.globl Vector_0xC7C)
___asm(Vector_0xC7C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3196)

___asm(.globl Vector_0xC80)
___asm(Vector_0xC80:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3200)

___asm(.globl Vector_0xC84)
___asm(Vector_0xC84:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3204)

___asm(.globl Vector_0xC88)
___asm(Vector_0xC88:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3208)

___asm(.globl Vector_0xC8C)
___asm(Vector_0xC8C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3212)

___asm(.globl Vector_0xC90)
___asm(Vector_0xC90:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3216)

___asm(.globl Vector_0xC94)
___asm(Vector_0xC94:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3220)

___asm(.globl Vector_0xC98)
___asm(Vector_0xC98:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3224)

___asm(.globl Vector_0xC9C)
___asm(Vector_0xC9C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3228)

___asm(.globl Vector_0xCA0)
___asm(Vector_0xCA0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3232)

___asm(.globl Vector_0xCA4)
___asm(Vector_0xCA4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3236)

___asm(.globl Vector_0xCA8)
___asm(Vector_0xCA8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3240)

___asm(.globl Vector_0xCAC)
___asm(Vector_0xCAC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3244)

___asm(.globl Vector_0xCB0)
___asm(Vector_0xCB0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3248)

___asm(.globl Vector_0xCB4)
___asm(Vector_0xCB4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3252)

___asm(.globl Vector_0xCB8)
___asm(Vector_0xCB8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3256)

___asm(.globl Vector_0xCBC)
___asm(Vector_0xCBC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3260)

___asm(.globl Vector_0xCC0)
___asm(Vector_0xCC0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3264)

___asm(.globl Vector_0xCC4)
___asm(Vector_0xCC4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3268)

___asm(.globl Vector_0xCC8)
___asm(Vector_0xCC8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3272)

___asm(.globl Vector_0xCCC)
___asm(Vector_0xCCC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3276)

___asm(.globl Vector_0xCD0)
___asm(Vector_0xCD0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3280)

___asm(.globl Vector_0xCD4)
___asm(Vector_0xCD4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3284)

___asm(.globl Vector_0xCD8)
___asm(Vector_0xCD8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3288)

___asm(.globl Vector_0xCDC)
___asm(Vector_0xCDC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3292)

___asm(.globl Vector_0xCE0)
___asm(Vector_0xCE0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3296)

___asm(.globl Vector_0xCE4)
___asm(Vector_0xCE4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3300)

___asm(.globl Vector_0xCE8)
___asm(Vector_0xCE8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3304)

___asm(.globl Vector_0xCEC)
___asm(Vector_0xCEC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3308)

___asm(.globl Vector_0xCF0)
___asm(Vector_0xCF0:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3312)

___asm(.globl Vector_0xCF4)
___asm(Vector_0xCF4:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3316)

___asm(.globl Vector_0xCF8)
___asm(Vector_0xCF8:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3320)

___asm(.globl Vector_0xCFC)
___asm(Vector_0xCFC:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3324)

___asm(.globl Vector_0xD00)
___asm(Vector_0xD00:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3328)

___asm(.globl Vector_0xD04)
___asm(Vector_0xD04:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3332)

___asm(.globl Vector_0xD08)
___asm(Vector_0xD08:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3336)

___asm(.globl Vector_0xD0C)
___asm(Vector_0xD0C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3340)

___asm(.globl Vector_0xD10)
___asm(Vector_0xD10:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3344)

___asm(.globl Vector_0xD14)
___asm(Vector_0xD14:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3348)

___asm(.globl Vector_0xD18)
___asm(Vector_0xD18:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3352)

___asm(.globl Vector_0xD1C)
___asm(Vector_0xD1C:)
	BRS_ISR_ENTRY(BrsDummyInterrupt3356)

#endif /* BRS_COMP_GHS || BRS_COMP_DIAB */

#endif /*BRS_OS_USECASE_BRS*/
