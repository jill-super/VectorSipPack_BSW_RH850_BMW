
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
  \file  File:  BrsHw.c
      Project:  Vector Basic Runtime System
       Module:  BrsHw for Platform Renesas RH850
     Template:  This file is reviewed according to zBrs_Template@root[2.01.00]

  \brief Description:  This is the hardware specific code file for Vector Basic Runtime System (BRS).
                       This file supports: see BrsHw_DerivativeList.h

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
  David Feuerstein              visdfe        Vector Informatik GmbH
  Timo Müller                   vistir        Vector Informatik GmbH
  Stefan Schorer                vissns        Vector Informatik GmbH
  Emanuel Schnierle             visese        Vector Informatik GmbH
  Nguyen Le                     vislnn        Vector Informatik GmbH
  Viet Duc Nguyen               visvnn        Vector Informatik GmbH
  Amelie Gebhardt               visage        Vector Informatik GmbH
  Johannes Kempf                viskj         Vector Informatik GmbH
  Wolfgang Lienhart             viswlt        Vector Informatik GmbH
  Nika Hamidi                   visnhi        Vector Informatik GmbH
  Sascha Mauser                 vismaa        Vector Informatik GmbH
  Manuel Rettig                 visrgm        Vector Informatik GmbH
  Sherif Elsabbahy              vissey        Vector Informatik GmbH
  Fabio Campaniello             vitmfco       Vector Italy s.r.l
  Anja Unnasch                  visuna        Vector Informatik GmbH
  Ali Omar                      visaor        Vector Informatik GmbH
  Michael Kock                  vismkk        Vector Informatik GmbH
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
 ----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Description
  --------  ----------  ------  ---------------------------------------------------------------------------------------
  01.00.00  2012-07-09  visljn  First Version
  01.01.00  2013-07-25  visfsn  Removed F1X, corrected Port configuration for F1L, removed Version Check
  01.02.00  2013-08-12  visfsn  Added BrsHw_EnableHwAccess() API, added CAN Interrupt initialization,
                                changed Port configuration for default Evalboard
  01.03.00  2013-08-14  visljn  Added support for DiabData compiler
  01.04.00  2013-08-20  vistkr  Use V_ switches, reworks for DrvCan
  01.05.00  2013-10-16  vistkr  Support wakeup for DrvCan
  01.06.00  2013-09-20  visabc  P1X added
  01.07.00  2013-11-11  visljn  R1M added
  01.08.00  2013-11-27  visfsn  Corrected FlexRay support on P1X
  01.09.00  2014-05-20  vistkr  Added support for IAR compiler, extend PLL config for F1L
  01.09.01  2014-05-27  visbwa  Removed empty Transceiver support
  01.09.02  2014-06-02  visbwa  bugfix for interrupt table with IAR compiler
  02.00.00  2014-07-30  visbwa  Complete rework of zBrs_Rh850, according to styleguide Vector_BrsHw_2.0
  02.00.01  2014-08-19  visbwa  Added legal wording within header information
                                Bugfix for UseCase with DrvMcu but w/o OS (defines for TimerClk)
                                Removed include of BrsOsek.h (no Osek OS for RH850 available)
                                Changed include order of BrsHw.h and v_cfg.h (already inside BrsHw.h)
                                Corrected PLL_GROUP settings and CLKFIX defines of 701408 (D1M)
  02.00.02  2014-08-27  visljn  GHS linker labels for SDA optimization added
  02.00.03  2014-09-02  visdfe  Added Data and Const Section linker section for Mcal Fls Driver for GHS
                                Changed Lin header include in BrsHw.c for MSR4 Support
  02.00.04  2014-09-29  vistir  Introduced BRSHW_ENABLE_CAN_WAKEUP, BRS_DERIVATIVE_GROUP_D1L, PROT_WRITE3,
                                ExtIsr for BRSHW_PORT_GROUP_B1
  02.00.05  2014-09-30  visbwa  Introduced BrsHw_IsrDef.h
  02.00.06  2015-01-09  visbwa  Removed BrsHwHardwareInitPowerOn(), several cosmetic adoptions
  02.00.07  2015-01-19  vistir  Platform F1M and VEBN01283 added
  02.00.08  2015-01-21  vistir  Platform P1H added
            2015-01-26  visbwa  Review. Fixing of BRSHW_PLL_GROUP_D and BRSHW_TIMER_GROUP_C,
                                added support for VEBN01326
  02.00.09  2015-02-25  visbwa  little fix within if-clauses of BRSHW_PORT_GROUP_B2
  02.00.10  2015-03-23  visbwa  Added support for derivatives with max-frequency=160MHz,
                                fixes RSCAN-registers within BRSHW_CLOCK_GROUP_A1
  02.00.11  2015-04-21  vissns  Added support for VEN001176 - F1L
  02.00.12  2015-05-08  visese  Added usage of FSGD0BPROT0 for BRSHW_INTERRUPT_TABLE_GROUP_D
  02.00.13  2015-07-23  visbwa  fixed Digital Noise Elimination for external interrupts of BRSHW_PORT_GROUP_B
  02.00.14  2015-08-05  vistir  Added support for VEN001220 - E1M
  02.00.15  2015-08-26  vislnn  Added support for derivative group F1K
  02.00.16  2015-09-15  visvnn  Added LED support for VEBN01459 (F1M 701552)
  02.00.17  2015-10-21  visvnn  Fixed support of CAN WakeUp in polling mode
  02.00.18  2015-11-04  visvnn  Added support for VEN001243 - E1x-FCC2 and GROUP_E1FCC
                                Fixed PLL0 divider 0A and PLL1 divider 1A for BRSHW_PLL_GROUP_C
  02.00.19  2015-11-30  visvnn  Introduced BRSHW_LIN_USE_THREE_INT_SOURCES, added support for VEN001265 (P1H 701372),
                                added OPBT1-check (OptionByte1) for BRSHW_PLL_GROUP_D
  02.00.20  2015-12-01  visfsn  Fixed PllInit of D1x, added support for Mango-D1x-Boards and Ethernet
  02.00.21  2015-12-02  visbwa  Introdued abstarction for LIN_USE_THREE_INT_SOURCES/SIO_USE_THREE_INT_SOURCES
  02.00.22  2015-12-08  visbwa  Moved BRSHW_ENABLE_CAN_WAKEUP_FILTER/CAN_WAKEUP_ISR from BrsHw.h to BrsHw_IsrDef.h
  02.00.23  2015-12-09  visage  Added support for VEBN01553
  02.00.24  2015-12-10  visvnn  Added define BRSHW_PROTECTION_GROUP_A for P1H derivatives
                                Added Power Down Modes Register
                                Added BrsHwPreInitPowerOn() function
  02.00.25  2015-01-04  viskj   Fixed support for VEN001265
  02.00.26  2016-01-12  visage  Added support for BRS_OSC_CLK == 20MHz
  02.00.27  2016-01-20  visbwa  Added include of Fr.h (necessary for FR_CHANNEL_x_USED usage)
  02.00.28  2016-01-27  visbwa  Moved PBUS Guard PBG0B setting for INTERRUPT_TABLE_GROUP_D into BrsHwPreInitPowerOn().
  02.00.29  2016-02-02  visjhr  Corrected derivate settings for F1K (wrong InterruptTableGroup, Core, ...), added
                                F1K derivative 701587 (176pin, 2MB, premium)
  02.00.30  2016-04-20  viswlt  Added support for Oscillator clock 12MHz within BRSHW_PLL_GROUP_A,
                                added support for EVA_BOARD pin configuartion DEFAULT (BrsHwEvaBoardInitPowerOn())
  02.01.00  2016-06-14  visbwa  Adapted code structure to actual Brs_Template 2.00.01,
                                fixed Ethernet Port settings and PDSC-address for BRSHW_PORT_GROUP_A
                                fixed Ethernet Port settings for VEN001265 and Eth-ISR config for TABLE_GROUP_G
  02.01.01  2016-06-15  visbwa  Added Pll-initialization for BRSHW_CPU_MAX_FREQUENCY = 200,
                                complete rework of BRSHW_PLL_GROUP_A2 (PLL0 + PLL1)
  02.01.02  2016-06-30  viskj   Fixed alive LED blinking for MANGO Board
                        visbwa  Added empty BrsHwSoftwareResetECU(), diff according to Brs_Template 2.00.02
  02.01.03  2016-06-30  visnhi  Added Max Frequency 120 MHz for PLL group A3
  02.01.04  2016-07-05  visbwa  Replaced internal function BrsHwTime10NOP() by macro BRSHWNOP10(), fixed encapsulation
  02.01.05  2016-07-13  visbwa  Fixed enabling of Eth-ISRs
  02.02.00  2016-08-29  visbwa  First version for TCM support
  02.02.01  2016-09-23  visbwa  Added support for OS_USECASE MULTICORE_OS
  02.02.02  2016-10-28  vismaa  Added Eth-ISR for INTERRUPT_TABLE_GROUP_C, capsuled ETNBXCCLK for BRSHW_CLOCK_GROUP_A1
  02.02.03  2016-12.01  vismaa  Added LED support for HSR_715 (F1H 701502)
  02.02.04  2017-01-20  vismaa  Added support for 701378 (P1M_E)
  02.02.05  2017-02-20  visbwa  Changed "#error:" by proper syntax "#error"
  02.03.00  2016-11-02  visrgm  Modified for use of ports header
            2017-03-08  visbwa  Review according to Brs_Template 2.01.00, finalization of BrsHw_Ports.h concept,
                                removed call of BrsHwConfigureInterruptsAtPowerOn() within UseCase OsGen7
  02.03.01  2017-03-08  vissey  Moved PIN configuration for alive LED support to BrsHw_Ports.h and usage of
                                BrsHwPort_SetLevel() to toggle LED, added Trcv-EN pin mechanism for CAN0/CAN1
  02.03.02  2017-03-09  vitmfco Updated writing procedure to write-protected register within BrsHwInitPortConfig()
  02.03.03  2017-03-10  visuna  Fixed BRSHW_PLL_GROUP_B1 clock source selection
  02.03.04  2017-04-28  visaor  Fixed BrsHwInitPortAlternative()
  02.03.05  2017-04-28  visbwa  Fixed NR-value calculation for BRSHW_PLL_GROUP_A2 within BrsHwPllInitPowerOn()
  02.04.00  2017-04-28  vismkk  Enabled DummyInterrupt for OsGen7 UseCase (exception handling during startup)
  02.04.01  2017-05-07  vishan  Added missing PORT registers for BRSHW_PORT_GROUP_C
  02.04.02  2017-06-06  vishan  Fixed BrsHwInitPortAlternative(),
                                added workaround to disable protected open drain on P0_0 for Portgroup_A
**********************************************************************************************************************/

/**********************************************************************************************************************
*  SAMPLE CODE ONLY
*  -------------------------------------------------------------------------------------------------------------------
*  This implementation is sample code and only intended to illustrate an example of a possible BSW implementation.
*  The implementation may not be complete and is not provided for use in production
*  without any modifications. If this sample code is used in any way, the customer shall test
*  this implementation as well as any of its modifications with diligent care.
*********************************************************************************************************************/

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
# if !defined (FR_CHANNEL_A_USED) && !defined (FR_CHANNEL_B_USED)
  #error: "Could not detect DrvFr channel configuration automatically. Please define here manually, which channel is used within your configuration."
  /*#define FR_CHANNEL_A_USED STD_ON*/
  /*#define FR_CHANNEL_B_USED STD_ON*/
# endif
#endif

#if defined (VGEN_ENABLE_DRVETH__BASEASR)
  #include "Eth.h"
#endif

#if defined (BRS_OS_USECASE_OSGEN7)
/*
 * Description: The BrsMain header provides all the necessary interfaces to
 *              the BRS main file (BrsMainExceptionHandler, gbBrsMainIsrMilliSecondFlag).
 *              This file is part of the BRS.
 */
  #include "BrsMain.h"
#endif

#if !defined (VGEN_ENABLE_DRVPORT)
  #include "BrsHw_Ports.h"
#endif

/**********************************************************************************************************************
  VERSION CHECK
**********************************************************************************************************************/
#if (BRSHW_VERSION != 0x0204u)
  #error "Header and source file are inconsistent!"
#endif
#if (BRSHW_BUGFIX_VERSION != 0x02u)
  #error "Different versions of bugfix in Header and Source used!"
#endif

/**********************************************************************************************************************
  CONFIGURATION CHECK
**********************************************************************************************************************/
#if defined (BRS_COMP_GHS)     
#else
  #error "Unknown compiler specified!"
#endif

/**********************************************************************************************************************
  DEFINITION + MACROS
**********************************************************************************************************************/
  #define BRSHWNOP10() ___asm(nop);___asm(nop);___asm(nop);___asm(nop);___asm(nop);___asm(nop);___asm(nop);___asm(nop);___asm(nop);___asm(nop)

#if defined (BRSHW_PROTECTION_GROUP_A)
  #define PROTCMD0    BRSHW_IOS(uint32 , 0xFFF80000)  /* Protection command register 0 */
  #define PROTCMD1    BRSHW_IOS(uint32 , 0xFFF88000)  /* Protection command register 1 */
  #define PROTCMDD1   BRSHW_IOS(uint32 , 0xFFF87000)  /* Protection command register 2*/
  #define PROTCMDMRST BRSHW_IOS(uint32 , 0xFFF8F480)  /* MRSTC protection command register*/

#elif defined (BRSHW_PROTECTION_GROUP_B)
  #define PROTCMD1    BRSHW_IOS(uint32 , 0xFFF8B000)  /* PROTCMD1=PROT1PHCMD Protect 1 command register */

#elif defined (BRSHW_PROTECTION_GROUP_NONE)

#else
  #error "Unknown BRSHW_PROTECTION_GROUP configured. Check BrsHw_DerivativeList.h for your Derivative."
#endif

/*** MACROS ***/
/* Protected write macro to access protected registers */
#define PROT_WRITEX(reg,val) (reg)=(uint32)(val);     /* write value */          \
                             (reg)=(uint32)(~(val));  /* write inversed value */ \
                             (reg)=(uint32)(val);     /* write value */

/* PROTCMD0 -> PLLEk, CKSC_0n */
#define PROT_WRITE0(reg,val) PROTCMD0=0xa5;  /* write to protected register */   \
                             PROT_WRITEX(reg,val)

/* PROTCMD1 -> CKSC_1 */
#define PROT_WRITE1(reg,val) PROTCMD1=0xa5;  /* write to protected register */   \
                             PROT_WRITEX(reg,val)

/* PROTCMD2 -> MOSCE, SOSCE, ROSCE, CKSC_An, PSC0-2, SWRESA */
#define PROT_WRITE2(reg,val) PROTCMD2=0xa5;  /* write to protected register */   \
                             PROT_WRITEX(reg,val)

/* PROTCMDD1 -> e.g. PLL2, CLKJIT, CLKFIX, PLLFIXCLK, C_ISO_XCCLK, RSCANPCLK,
                C_ISO_RSCAN, C_ISO_RSCANXIN, C_ISO_TAUB01, C_ISO_TAUJ, C_ISO_OSTM,
                C_ISO_RLIN, PLL0PIXCLK, PLL2INCLK, PLL2CLK */
#define PROT_WRITE3(reg,val) PROTCMDD1=0xa5;  /* write to protected register */ \
                             PROT_WRITEX(reg,val)

/* PROTCMDMRST1 -> MRSTC protection command register */
#define PROT_WRITE4(reg,val) PROTCMDMRST=0xa5;  /* write to protected register */ \
                             PROT_WRITEX(reg,val)

/* MSR/CBD abstraction for DrvCan interrupt handling */
#if defined (VGEN_ENABLE_CAN_DRV)
# if defined (VGEN_ENABLE_IF_ASRIFCAN)
#  if (CAN_INTLOCK == CAN_APPL)
#   define C_INT_BY_APPL
#  endif
# else
#  if defined (C_ENABLE_OSEK_CAN_INTCTRL)
#   define C_INT_BY_APPL
#  endif
# endif
#endif

/**********************************************************************************************************************
  GLOBAL VARIABLES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL CONST VARIABLES
**********************************************************************************************************************/
/*
 * Description: These constants are used to propagate the Versions over
 *              module boundaries.The version numbers are BCD coded. E.g. a sub
 *              version of 23 is coded with 0x23, a bug fix version of 9 is
 *              coded 0x09.
 */
uint8 const kBrsHwMainVersion   = (uint8)(BRSHW_VERSION >> 8);
uint8 const kBrsHwSubVersion    = (uint8)(BRSHW_VERSION & 0xFF);
uint8 const kBrsHwBugfixVersion = (uint8)(BRSHW_BUGFIX_VERSION);

/**********************************************************************************************************************
  LOCAL VARIABLES AND LOCAL HW REGISTERS
**********************************************************************************************************************/
/*
 * Description: This counter is used to count the number of nested calls to
 *              disable and restore the state of the global INT enable bit.
 *              Please note: This variable is used only in this file.
 * Values     : 0 if no BrsHwDisableInterrupt is called and INT is allowed by the
 *              BRS. Value > 0 if INT is locked by the BRS interrupt control API.
 */
static uint8 bBrsHwIntDiCounter;

/*
 * Description: This variable is used to store the state of the PSW register at
 *              the first call of BrsHwDisableInterrupt till the last nested call
 *              of BrsHwRestoreInterrupt.
 *              Please note: This variable is used only in this file. Due to it
 *              is also access in assembler context, it must not be "static" to
 *              prevent the compiler changing the name in a local label.
 * Values     : All values of the ConditionCodeRegister
 */
volatile uint32 bBrsHwRegisterPSW;

/**********************************************************************************************************************
  CONTROLLER CONFIGURATION REGISTERS
**********************************************************************************************************************/

/*******************************************************************************
  PLL registers
********************************************************************************/
#if defined (BRSHW_PLL_GROUP_A) || defined (BRSHW_PLL_GROUP_A1) || defined (BRSHW_PLL_GROUP_A2) || defined (BRSHW_PLL_GROUP_A3)
  #define PLL_BASE_ADDRESS   0xFFF89000

  #define PLLE0      BRSHW_IOS(uint32,   PLL_BASE_ADDRESS         ) /* PLL0E / PLLE enable register */
  #define PLLS0      BRSHW_IOS(uint32,   PLL_BASE_ADDRESS + 0x04  ) /* PLL0S / PLLS status register */
  #define PLLC0      BRSHW_IOS(uint32,   PLL_BASE_ADDRESS + 0x08  ) /* PLL0C / PLLC control register */

  #if defined (BRSHW_PLL_GROUP_A1) || defined (BRSHW_PLL_GROUP_A2)
    #define PLLE1    BRSHW_IOS(uint32,   PLL_BASE_ADDRESS + 0x100  ) /* PLL1E enable register */
    #define PLLS1    BRSHW_IOS(uint32,   PLL_BASE_ADDRESS + 0x104  ) /* PLL1S status register */
    #define PLLC1    BRSHW_IOS(uint32,   PLL_BASE_ADDRESS + 0x108  ) /* PLL1C control register */
  #endif /*BRSHW_PLL_GROUP_A1 || BRSHW_PLL_GROUP_A2*/
  #if defined (BRSHW_PLL_GROUP_A2)
    #define PLL1CLK   480
    #define PLLFIXCLK PLL1CLK
  #endif /*BRSHW_PLL_GROUP_A2*/

#elif defined (BRSHW_PLL_GROUP_B)
  #if !(BRS_TIMEBASE_CLOCK==160)
    #error "The selected CPU frequency is not supported for your derivative (please choose 160 MHz)."
  #endif
  #if !(BRS_OSC_CLK==16)
    #error "The selected clock frequency of main oscillator is not support (supported: 16 MHz only)."
  #endif
  /** Clock frequencies **/
  #define CLK_HSB 80  /* RS-CAN, FlexRay, CSIH, CSIG, RLIN3, RSENT, PSI5, SCI3, WDTA, TAUD, TAUJ, TSG3, TPBA, TAPA, ENCA, OSTM, ECM, DCRA, PIC (BRS_TIMEBASE_CLOCK/2) */
  /** TIMER clock **/
  #define BRSHW_TIMER_CLK  CLK_HSB  /* 80 MHz */

#elif defined (BRSHW_PLL_GROUP_B1)
  #if !(BRS_TIMEBASE_CLOCK==80)
    #error "The selected CPU frequency is not supported for your derivative (please choose 80 MHz)."
  #endif
  #if !(BRS_OSC_CLK==16)
    #error "The selected clock frequency of main oscillator is not support (supported: 16 MHz only)."
  #endif
  /** Clock frequencies **/
  #define CLK_HSB 40  /* RS-CAN, FlexRay, CSIH, CSIG, RLIN3, RSENT, PSI5, SCI3, WDTA, TAUD, TAUJ, TSG3, TPBA, TAPA, ENCA, OSTM, ECM, DCRA, PIC (BRS_TIMEBASE_CLOCK/2) */
  /** TIMER clock **/
  #define BRSHW_TIMER_CLK  CLK_HSB  /* 40 MHz */

#elif defined (BRSHW_PLL_GROUP_C)
  #if !((BRS_TIMEBASE_CLOCK == BRSHW_CPU_MAX_FREQUENCY) || (BRS_TIMEBASE_CLOCK == BRSHW_CPU_MAX_FREQUENCY/2) || (BRS_TIMEBASE_CLOCK == BRSHW_CPU_MAX_FREQUENCY/4))
    #error "The selected CPU frequency is not supported for your derivative (please choose BRSHW_CPU_MAX_FREQUENCY devided by 1, 2 or 4 )."
  #endif
  #if !(BRS_OSC_CLK == 20)
    #error "The selected clock frequency of main oscillator is not support (supported: 20 MHz only)."
  #endif
  /** Clock frequencies **/
  #define CLKC_LSB 40  /* Unmodulated low speed peripheral clock (CAN, LIN, ATU-IV, APA, WDTA, OSTM, SCI, AD) */
  #define CLKC_HSB 80  /* Unmodulated high speed peripheral clock (TAUD, TAUJ, TSG3, TAPA, TPBA, PIC1A, PIC2B, ENCA, EMU2) */
  /** TIMER clock **/
  #if defined (BRSHW_TIMER_GROUP_B)
    #define BRSHW_TIMER_CLK  CLKC_LSB   /* Timer clock is 40 MHz */
  #else
    #define BRSHW_TIMER_CLK  CLKC_HSB   /* Timer clock is 80 MHz */
  #endif

  #define PLL0CLKS   BRSHW_IOS(uint32, 0xFFF88004) /* PLL0 status register    */
  #define PLL0CLKC1  BRSHW_IOS(uint32, 0xFFF88200) /* PLL0 control register 1 */

#elif defined (BRSHW_PLL_GROUP_D)
  /* reading the register from chip */
  /* reading of this register was not possible with v1 version of this chip */
  #define OPBT1     BRSHW_IOS(uint32, 0xFFCD0034) /* Option Byte 1 */

  /* Check for incompatible settings with v1 Chip */
# if (BRS_TIMEBASE_CLOCK!=240) || (BRS_OSC_CLK!=16)
  #error "BrsHw was verified successful with Oscillator=16MHz and Cpu-Frequency=240MHz only. Renesas verified, that other frequencies cause errors on v1 Versions of this chip."
# endif

/* Configuration of System Clock Divider */
# if (BRS_TIMEBASE_CLOCK==240)
  #define BRSHW_CLKD0DIV 0x01  /* CLK_CPU=240MHz, CLK_HSB=80MHz (STM Timer), CLK_LSB=40MHz */
  #define BRSHW_TIMER_CLK  80  /* Timer clock is 80 MHz */
  #define BRSHW_CLKD1DIV 0x01  /* CLKP_C=160MHz, CLKP_H1=80MHz, CLKP_H2=80MHz (MCAN), CLKP_L=40MHz (LIN) */
# elif (BRS_TIMEBASE_CLOCK==160)
  #define BRSHW_CLKD0DIV 0x02  /* CLK_CPU=160MHz, CLK_HSB=80MHz (STM Timer), CLK_LSB=40MHz */
  #define BRSHW_TIMER_CLK  80  /* Timer clock is 80 MHz */
  #define BRSHW_CLKD1DIV 0x02  /* CLKP_C=80MHz,  CLKP_H1=80MHz, CLKP_H2=80MHz (MCAN), CLKP_L=40MHz (LIN) */
# elif (BRS_TIMEBASE_CLOCK==80)
  #define BRSHW_CLKD0DIV 0x04  /* CLK_CPU=80MHz,  CLK_HSB=40MHz (STM Timer), CLK_LSB=40MHz */
  #define BRSHW_TIMER_CLK  40  /* Timer clock is 40 MHz */
  #define BRSHW_CLKD1DIV 0x04  /* CLKP_C=40MHz,  CLKP_H1=40MHz, CLKP_H2=40MHz (MCAN), CLKP_L=40MHz (LIN) */
# else
  #error "The selected CPU clock is not yet supported by this BrsHw implemention. For assumed OPBT1.PLL0FREQ=2, 240,160 or 80 MHz are supported."
# endif

#else
  #error "Unknown BRSHW_PLL_GROUP configured. Check BrsHw_DerivativeList.h for your Derivative."
#endif /*BRSHW_PLL_GROUP_x*/

/*******************************************************************************
  Clock generator registers
********************************************************************************/
#if defined (BRSHW_CLOCK_GROUP_A) || defined (BRSHW_CLOCK_GROUP_A1) || defined (BRSHW_CLOCK_GROUP_A2)
  #define CLOCK_BASE_ADDRESS    0xFFF81000

  #define MOSCE      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x100)  /* MainOSC enable register */
  #define MOSCS      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x104)  /* MainOSC status register */
  #define MOSCC      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x108)  /* MainOSC control register */
  #define MOSCST     BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x10C)  /* MainOSC stabilization time register */

  #define SOSCE      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x200)  /* SubOSC enable register */
  #define SOSCS      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x204)  /* SubOSC status register */
  #define SOSCST     BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x20C)  /* SubOSC stabilization time register */

  #define ROSCE      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS        )  /* HS IntOSC enable register */
  #define ROSCS      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x04 )  /* HS IntOSC status register */

  /* Clock selector control register */
  #define CKSC_CPUCLKS_CTL   BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9000)  /* C_ISO_CPUCLK source clock selection register */
  #define CKSC_CPUCLKS_ACT   BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9008)  /* C_ISO_CPUCLK source clock active register */
  #define CKSC_CPUCLKD_CTL   BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9100)  /* C_ISO_CPUCLK clock divider register */
  #define CKSC_CPUCLKD_ACT   BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9108)  /* C_ISO_CPUCLK clock divider active register */

  #if defined (BRSHW_CLOCK_GROUP_A2)
    #define CKSC_PPLLCLKS_CTL   BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9010)  /* PPLLCLK source clock selection register */
    #define CKSC_PPLLCLKS_ACT   BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9018)  /* PPLLCLK source clock active register */
  #endif /*BRSHW_CLOCK_GROUP_A2*/

  #if defined (BRSHW_CLOCK_GROUP_A1)
    #define CKSC_IPPL0S_CTL      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x8200)  /* PLL0CLK clock control register */
    #define CKSC_IPPL0S_ACT      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x8208)  /* PLL0CLK clock active register */
    #define CKSC_IPPL1S_CTL      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x8300)  /* PLL1CLK clock control register */
    #define CKSC_IPPL1S_ACT      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x8308)  /* PLL1CLK clock active register */
    #define CKDV_ICLKJITD_CTL    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x43C0)  /* CLKJIT clock divider register */
    #define CKDV_ICLKJITD_STAT   BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x43C4)  /* CLKJIT clock divider status register */
    #define CKSC_ICLKJITS_CTL    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4400)  /* CLKJIT source clock selection register */
    #define CKSC_ICLKJITS_ACT    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4408)  /* CLKJIT source clock active register */
    #define CKDV_ICLKFIXD_CTL    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4700)  /* CLKFIX clock divider register */
    #define CKDV_ICLKFIXD_STAT   BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4704)  /* CLKFIX clock divider status register */
    #define CKSC_ICLKFIXS_CTL    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4740)  /* CLKFIX source clock selection register */
    #define CKSC_ICLKFIXS_ACT    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4748)  /* CLKFIX source clock active register */
    #define CKSC_IRSCAND_CTL     BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4780)  /* C_ISO_RSCAN source clock divider register */
    #define CKSC_IRSCAND_ACT     BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4788)  /* C_ISO_RSCAN source clock active register */
    #define CKSC_IRSCANXINS_CTL  BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4800)  /* C_ISO_RSCANXIN clock selection register */
    #define CKSC_IRSCANXINS_ACT  BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4808)  /* C_ISO_RSCANXIN source clock active register */
    #define CKSC_IRLINS_CTL      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4500)  /* C_ISO_RLIN source clock selection register */
    #define CKSC_IRLINS_ACT      BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4508)  /* C_ISO_RLIN source clock active register */
    #define CKSC_IPCRSCANS_CTL   BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4140)  /* RSCANPCLK clock control register */
    #define CKSC_IPCRSCANS_ACT   BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4148)  /* RSCANPCLK clock active register */
    #define CKSC_ICLKFIXS_CTL    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4740)  /* CLKFIX source clock selection register */
    #define CKSC_ICLKFIXS_ACT    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4748)  /* CLKFIX source clock active register */
    #define CKSC_ITAUB01S_CTL    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4740)  /* C_ISO_TAUB01 source clock selection register */
    #define CKSC_ITAUB01S_ACT    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4748)  /* C_ISO_TAUB01 clock active register */
    #define CKSC_IXCCLKS_CTL     BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4180)  /* ETNBXCCLK clock control register */
    #define CKSC_IXCCLKS_ACT     BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4188)  /* ETNBXCCLK clock active register */
    #define CKSC_IXCETNBS_CTL    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x41C0)  /* ETNBXCCLK clock control register */
    #define CKSC_IXCETNBS_ACT    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x41C8)  /* ETNBXCCLK clock active register */
    #define CKSC_IPCETNBS_CTL    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4280)  /* ETNBPCLK clock control register */
    #define CKSC_IPCETNBS_ACT    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x4288)  /* ETNBPCLK clock active register */
    /** TIMER clock selection  **/
    #define CLKJIT  BRS_TIMEBASE_CLOCK/6  /* BRS_TIMEBASE_CLOCK/6 because of default value of CKDV_ICLKJITD_CTL = PLL0CLK/6 */
    #define CLKFIX  PLLFIXCLK/6           /* PLLFIXCLK/6 because of default value of CKDV_ICLKFIXD_CTL = PLLFIXCLK/6 */
    #define BRSHW_TIMER_CLK  CLKFIX/8     /* Source clock selection value for C_ISO_TAUB01 (default value) */

   /* Module reset control register */
   #define MRSTC                 BRSHW_IOS(uint32 , 0xFFF8F400) /* Module reset control register*/

  #else
    #define CKSC_ICANOSCD_CTL    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9A00)  /* C_ISO_CANOSC clock divider register */
    #define CKSC_ICANOSCD_ACT    BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9A08)  /* C_ISO_CANOSC clock divider active register */
    #define CKSC_ICANS_CTL       BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9900)  /* C_ISO_CAN source clock selection register */
    #define CKSC_ICANS_ACT       BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9908)  /* C_ISO_CAN source clock active register */
    #define CKSC_ILIND_CTL       BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9800)  /* C_ISO_LIN clock divider register */
    #define CKSC_ILIND_ACT       BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9808)  /* C_ISO_LIN clock divider active register */
    #define CKSC_ILINS_CTL       BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9400)  /* C_ISO_LIN source clock selection register */
    #define CKSC_ILINS_ACT       BRSHW_IOS(uint32, CLOCK_BASE_ADDRESS + 0x9408)  /* C_ISO_LIN source clock active register */
    /** TIMER clock selection  **/
    #define BRSHW_TIMER_CLK  BRS_TIMEBASE_CLOCK/2  /* Source Clock Setting for C_ISO_PERI1 (default value=CPUCLK/2) */
  #endif /*BRSHW_CLOCK_GROUP_A1*/

#elif defined (BRSHW_CLOCK_GROUP_B)
  #define CKSC0CTL            BRSHW_IOS(uint32, 0xFFF89080 )    /* Clock selection control register 0 */
  #define CKSC0STAT           BRSHW_IOS(uint32, 0xFFF89084 )    /* Clock selection status register 0 */
  #define CKSC0DIV            BRSHW_IOS(uint32, 0xFFF89180 )    /* Clock division control register 0 */
  #define CLKD0STAT           BRSHW_IOS(uint32, 0xFFF89184 )    /* Clock division status register 0 */
  #define CKSC1CTL            BRSHW_IOS(uint32, 0xFFF890C0 )    /* Clock selection control register 1 */
  #define CKSC1STAT           BRSHW_IOS(uint32, 0xFFF890C4 )    /* Clock selection status register 1 */
  #define CKSC1DIV            BRSHW_IOS(uint32, 0xFFF89188 )    /* Clock division control register 1 */
  #define CLKD1STAT           BRSHW_IOS(uint32, 0xFFF8918C )    /* Clock division status register 1 */

#elif defined (BRSHW_CLOCK_GROUP_B1)
  #define CKSC2CTL            BRSHW_IOS(uint32, 0xFFF89080 )    /* Clock selection control register 2 */
  #define CKSC2STAT           BRSHW_IOS(uint32, 0xFFF89088 )    /* Clock selection status register 2 */
  #define CLKD2DIV            BRSHW_IOS(uint32, 0xFFF88810 )    /* Clock division control register 2 */
  #define CLKD2STAT           BRSHW_IOS(uint32, 0xFFF88814 )    /* Clock division status register 2 */
  #define CKSC3CTL            BRSHW_IOS(uint32, 0xFFF890C0 )    /* Clock selection control register 3 */
  #define CKSC3STAT           BRSHW_IOS(uint32, 0xFFF890C8 )    /* Clock selection status register 3 */
  #define CLKD3DIV            BRSHW_IOS(uint32, 0xFFF88818 )    /* Clock division control register 3 */
  #define CLKD3STAT           BRSHW_IOS(uint32, 0xFFF8881C )    /* Clock division status register 3 */

#elif defined (BRSHW_CLOCK_GROUP_C)
  #define CKSC0CTL            BRSHW_IOS(uint32, 0xFFF89000 )    /* Clock 0 selection control register */
  #define CKSC0ACT            BRSHW_IOS(uint32, 0xFFF89008 )    /* Clock 0 selection active register */
  #define CLKD0DIV            BRSHW_IOS(uint32, 0xFFF88800 )    /* Clock 0 division register */
  #define CLKD0STAT           BRSHW_IOS(uint32, 0xFFF88804 )    /* Clock 0 division status register */
  #define CKSC1CTL            BRSHW_IOS(uint32, 0xFFF89040 )    /* Clock 1 selection control register */
  #define CKSC1ACT            BRSHW_IOS(uint32, 0xFFF89048 )    /* Clock 1 selection active register */

#elif defined (BRSHW_CLOCK_GROUP_D)
  #define CLKD0DIV   BRSHW_IOS(uint32, 0xFFF88800)  /*Clock divider 0 divisor register*/
  #define CLKD0STAT  BRSHW_IOS(uint32, 0xFFF88804)  /*Clock divider 0 status register*/
  #define CLKD1DIV   BRSHW_IOS(uint32, 0xFFF88808)  /*Clock divider 1 divisor register*/
  #define CLKD1STAT  BRSHW_IOS(uint32, 0xFFF8880C)  /*Clock divider 1 status register*/
  #define CKSC0C     BRSHW_IOS(uint32, 0xFFF89000)  /*Clock selector 0 control register*/
  #define CKSC0S     BRSHW_IOS(uint32, 0xFFF89008)  /*Clock selector 0 status register*/

#else
  #error "Unknown BRSHW_CLOCK_GROUP configured. Check BrsHw_DerivativeList.h for your Derivative."
#endif /*BRSHW_CLOCK_GROUP_x*/

/*******************************************************************************
  Interrupt registers
********************************************************************************/
#if defined (BRSHW_INTERRUPT_TABLE_GROUP_A)
  /* External Interrupt control register */
  #define ICP0            0xFFFF903A
  #define ICP1            0xFFFF903C
  #define ICP2            0xFFFF903E
  #define ICP3            0xFFFFA044
  #define ICP4            0xFFFFA046
  #define ICP5            0xFFFFA048

  /* Timer Interrupt control register */
  #define ICTAUD0I0       0xFFFF9000         /* TAUD0 channel 0 is used */
  #define BRS_TIMER_ICR   ICTAUD0I0

  /* RSCAN0 Interrupt control register */
  #define ICRCANGERR0     0xFFFF901C         /* ICRCANGERR  CAN global error interrupt */
  #define ICRCANGRECC0    0xFFFF901E         /* ICRCANGRECC CAN receive FIFO interrupt */

  #define ICRCAN0ERR      0xFFFF9020
  #define ICRCAN0REC      0xFFFF9022
  #define ICRCAN0TRX      0xFFFF9024
  #define ICPx_CAN0       ICP0

  #define ICRCAN1ERR      0xFFFFA0D2
  #define ICRCAN1REC      0xFFFFA0D4
  #define ICRCAN1TRX      0xFFFFA0D6
  #define ICPx_CAN1       ICP1

  #define ICRCAN2ERR      0xFFFFA1A2
  #define ICRCAN2REC      0xFFFFA1A4
  #define ICRCAN2TRX      0xFFFFA1A6
  #define ICPx_CAN2       ICP2

  #define ICRCAN3ERR      0xFFFFA1A8
  #define ICRCAN3REC      0xFFFFA1AA
  #define ICRCAN3TRX      0xFFFFA1AC
  #define ICPx_CAN3       ICP3

  #define ICRCAN4ERR      0xFFFFA210
  #define ICRCAN4REC      0xFFFFA212
  #define ICRCAN4TRX      0xFFFFA214
  #define ICPx_CAN4       ICP4

  #define ICRCAN5ERR      0xFFFFA22E
  #define ICRCAN5REC      0xFFFFA230
  #define ICRCAN5TRX      0xFFFFA232
  #define ICPx_CAN5       ICP5

  /* LIN Interrupt control register */
  #define ICRLIN20         0xFFFFA064
  #define ICRLIN21         0xFFFFA066
  #define ICRLIN22         0xFFFFA134
  #define ICRLIN23         0xFFFFA136
  #define ICRLIN24         0xFFFFA1B4
  #define ICRLIN25         0xFFFFA1B6
  #define ICRLIN26         0xFFFFA216
  #define ICRLIN27         0xFFFFA218
  #define ICRLIN28         0xFFFFA22A
  #define ICRLIN29         0xFFFFA22C

  #define ICRLIN30         0xFFFF9032
  #define ICRLIN30UR0      0xFFFF9034  /* transmission interrupt control register */
  #define ICRLIN30UR1      0xFFFF9036  /* reception interrupt control register */
  #define ICRLIN30UR2      0xFFFF9038  /* status interrupt control register */

  #define ICRLIN31         0xFFFFA0E0
  #define ICRLIN31UR0      0xFFFF90E2  /* transmission interrupt control register */
  #define ICRLIN31UR1      0xFFFF90E4  /* reception interrupt control register */
  #define ICRLIN31UR2      0xFFFF90E6  /* status interrupt control register */

  #define ICRLIN32         0xFFFFA138
  #define ICRLIN32UR0      0xFFFFA13A  /* transmission interrupt control register */
  #define ICRLIN32UR1      0xFFFFA13C  /* reception interrupt control register */
  #define ICRLIN32UR2      0xFFFFA13E  /* status interrupt control register */

  #define ICRLIN33         0xFFFFA1B8
  #define ICRLIN33UR0      0xFFFFA1BA  /* transmission interrupt control register */
  #define ICRLIN33UR1      0xFFFFA1BC  /* reception interrupt control register */
  #define ICRLIN33UR2      0xFFFFA1BE  /* status interrupt control register */

  #define ICRLIN34         0xFFFFA1C0
  #define ICRLIN34UR0      0xFFFFA1C2  /* transmission interrupt control register */
  #define ICRLIN34UR1      0xFFFFA1C4  /* reception interrupt control register */
  #define ICRLIN34UR2      0xFFFFA1C6  /* status interrupt control register */

  #define ICRLIN35         0xFFFFA1C8
  #define ICRLIN35UR0      0xFFFFA1CA  /* transmission interrupt control register */
  #define ICRLIN35UR1      0xFFFFA1CC  /* reception interrupt control register */
  #define ICRLIN35UR2      0xFFFFA1CE  /* status interrupt control register */

#elif defined (BRSHW_INTERRUPT_TABLE_GROUP_B)
  #define BRS_ICR_CH_AD(n) (0xFFFFB040 + ((n - 32)*2))   /* Calculates ICR Address with number of Interrupt Channel (n>=32) */

    /* External Interrupt control register */
  #define ICP0             BRS_ICR_CH_AD(32)   /* External interrupt 0 (INTP0) */
  #define ICP1             BRS_ICR_CH_AD(33)   /* External interrupt 1 (INTP1) */
  #define ICP2             BRS_ICR_CH_AD(34)   /* External interrupt 2 (INTP2) */
  #define ICP3             BRS_ICR_CH_AD(35)   /* External interrupt 3 (INTP3) */
  #define ICP4             BRS_ICR_CH_AD(36)   /* External interrupt 4 (INTP4) */
  #define ICP5             BRS_ICR_CH_AD(128)   /* Software interrupt 5 (INTP5) */
  #define ICP6             BRS_ICR_CH_AD(129)   /* Software interrupt 6 (INTP6) */
  #define ICP7             BRS_ICR_CH_AD(130)   /* Software interrupt 7 (INTP7) */
  #define ICP8             BRS_ICR_CH_AD(131)   /* Software interrupt 8 (INTP8) */
  #define ICP9             BRS_ICR_CH_AD(132)   /* Software interrupt 9 (INTP9) */
  #define ICP10            BRS_ICR_CH_AD(296)   /* External interrupt 10 (INTP10) */
  #define ICP11            BRS_ICR_CH_AD(297)   /* External interrupt 11 (INTP11) */
  #define ICP12            BRS_ICR_CH_AD(298)   /* External interrupt 12 (INTP12) */

  /* Timer Interrupt control register */
  #define ICTAUD0I0       BRS_ICR_CH_AD(141)
  #define BRS_TIMER_ICR   ICTAUD0I0            /* TAUD0 channel 0 is used */

  /* RSCAN0 Interrupt control register */
  #define ICRCANGERR0     BRS_ICR_CH_AD(189)   /* INTRCANGERR  CAN global error interrupt */
  #define ICRCANGRECC0    BRS_ICR_CH_AD(190)   /* INTRCANGRECC CAN receive FIFO interrupt */

  #define ICRCAN0ERR      BRS_ICR_CH_AD(183)   /* INTRCAN0ERR  */
  #define ICRCAN0REC      BRS_ICR_CH_AD(184)   /* INTRCAN0REC  */
  #define ICRCAN0TRX      BRS_ICR_CH_AD(185)   /* INTRCAN0TRX  */
  #define ICPx_CAN0       ICP5

  #define ICRCAN1ERR      BRS_ICR_CH_AD(186)   /* INTRCAN1ERR  */
  #define ICRCAN1REC      BRS_ICR_CH_AD(187)   /* INTRCAN1REC  */
  #define ICRCAN1TRX      BRS_ICR_CH_AD(188)   /* INTRCAN1TRX  */
  #define ICPx_CAN1       ICP6

  /* LIN Interrupt control register  */
  #define ICRLIN30UR0     BRS_ICR_CH_AD(116)  /* ICR / RLIN30 transmit interrupt (INTRLIN30UR0) */
  #define ICRLIN30UR1     BRS_ICR_CH_AD(115)  /* ICR / RLIN30 receive interrupt (INTRLIN30UR1) */
  #define ICRLIN30UR2     BRS_ICR_CH_AD(114)  /* ICR / RLIN30 error detection interrupt (INTRLIN30UR2) */

  #define ICRLIN31UR0     BRS_ICR_CH_AD(119)  /* ICR / RLIN31 transmit interrupt (INTRLIN31UR0) */
  #define ICRLIN31UR1     BRS_ICR_CH_AD(118)  /* ICR / RLIN31 receive interrupt (INTRLIN31UR1)*/
  #define ICRLIN31UR2     BRS_ICR_CH_AD(117)  /* ICR / RLIN31 error detection interrupt (INTRLIN31UR2) */

  /* FlexRay interrupt control register */
  #define ICFLX0LINE0     BRS_ICR_CH_AD(194)           /* Interrupt 0 */
  #define ICFLX0LINE1     BRS_ICR_CH_AD(195)           /* Interrupt 1 */
  #define ICFLX0TIM0      BRS_ICR_CH_AD(196)           /* Timer 0 interrupt */
  #define ICFLX0TIM1      BRS_ICR_CH_AD(197)           /* Timer 1 interrupt */
  #define ICFLX0TIM2      BRS_ICR_CH_AD(198)           /* Timer 2 interrupt */

#elif defined (BRSHW_INTERRUPT_TABLE_GROUP_C)
  /* External Interrupt control register */
  #define ICP0            0xFFFFB04A
  #define ICP1            0xFFFFB04C
  #define ICP2            0xFFFFB04E
  #define ICP3            0xFFFFB056
  #define ICP4            0xFFFFB058
  #define ICP5            0xFFFFB05A

  /* Timer Interrupt control register */
  #define ICTAUD0I0       0xFFFEEA10
  #define BRS_TIMER_ICR   ICTAUD0I0         /* TAUD0 channel 0 is used */

  /* RSCAN0 Interrupt control register */
  #define ICRCANGERR0     0xFFFEEA2C
  #define ICRCANGRECC0    0xFFFEEA2E

  #define ICRCAN0ERR      0xFFFEEA30
  #define ICRCAN0REC      0xFFFEEA32
  #define ICRCAN0TRX      0xFFFEEA34
  #define ICPx_CAN0       ICP0

  #define ICRCAN1ERR      0xFFFFB0E2
  #define ICRCAN1REC      0xFFFFB0E4
  #define ICRCAN1TRX      0xFFFFB0E6
  #define ICPx_CAN1       ICP1

  #define ICRCAN2ERR      0xFFFFB1B2
  #define ICRCAN2REC      0xFFFFB1B4
  #define ICRCAN2TRX      0xFFFFB1B6
  #define ICPx_CAN2       ICP2

  #define ICRCAN3ERR      0xFFFFB1B8
  #define ICRCAN3REC      0xFFFFB1BA
  #define ICRCAN3TRX      0xFFFFB1BC
  #define ICPx_CAN3       ICP3

  #define ICRCAN4ERR      0xFFFFB220
  #define ICRCAN4REC      0xFFFFB222
  #define ICRCAN4TRX      0xFFFFB224
  #define ICPx_CAN4       ICP4

  #define ICRCAN5ERR      0xFFFFB23E
  #define ICRCAN5REC      0xFFFFB240
  #define ICRCAN5TRX      0xFFFFB242
  #define ICPx_CAN5       ICP5

  /* RSCAN1 Interrupt control register */
  #define ICRCANGERR1     0xFFFFB27E
  #define ICRCANGRECC1    0xFFFFB280

  #define ICRCAN6ERR      0xFFFFB282
  #define ICRCAN6REC      0xFFFFB284
  #define ICRCAN6TRX      0xFFFFB286
  #define ICPx_CAN6       ICP6

  /* LIN Interrupt control register */
  #define ICRLIN20        0xFFFFB074
  #define ICRLIN21        0xFFFFB076
  #define ICRLIN22        0xFFFFB144
  #define ICRLIN23        0xFFFFB146
  #define ICRLIN24        0xFFFFB1C4
  #define ICRLIN25        0xFFFFB1C6
  #define ICRLIN26        0xFFFFB226
  #define ICRLIN27        0xFFFFB228
  #define ICRLIN28        0xFFFFB23A
  #define ICRLIN29        0xFFFFB23C
  #define ICRLIN210       0xFFFFB288
  #define ICRLIN211       0xFFFFB28A

  #define ICRLIN30        0xFFFFB042
  #define ICRLIN30UR0     0xFFFFB044  /* transmission interrupt control register */
  #define ICRLIN30UR1     0xFFFFB046  /* reception interrupt control register */
  #define ICRLIN30UR2     0xFFFFB048  /* status interrupt control register */

  #define ICRLIN31        0xFFFFB0F0
  #define ICRLIN31UR0     0xFFFFB0F2  /* transmission interrupt control register */
  #define ICRLIN31UR1     0xFFFFB0F4  /* reception interrupt control register */
  #define ICRLIN31UR2     0xFFFFB0F6  /* status interrupt control register */

  #define ICRLIN32        0xFFFFB148
  #define ICRLIN32UR0     0xFFFFB14A  /* transmission interrupt control register */
  #define ICRLIN32UR1     0xFFFFB14C  /* reception interrupt control register */
  #define ICRLIN32UR2     0xFFFFB14E  /* status interrupt control register */

  #define ICRLIN33        0xFFFFB1C8
  #define ICRLIN33UR0     0xFFFFB1CA  /* transmission interrupt control register */
  #define ICRLIN33UR1     0xFFFFB1CC  /* reception interrupt control register */
  #define ICRLIN33UR2     0xFFFFB1CE  /* status interrupt control register */

  #define ICRLIN34        0xFFFFB1D0
  #define ICRLIN34UR0     0xFFFFB1D2  /* transmission interrupt control register */
  #define ICRLIN34UR1     0xFFFFB1D4  /* reception interrupt control register */
  #define ICRLIN34UR2     0xFFFFB1D6  /* status interrupt control register */

  #define ICRLIN35        0xFFFFB1D8
  #define ICRLIN35UR0     0xFFFFB1DA  /* transmission interrupt control register */
  #define ICRLIN35UR1     0xFFFFB1DC  /* reception interrupt control register */
  #define ICRLIN35UR2     0xFFFFB1DE  /* status interrupt control register */

  /* FlexRay interrupt control register */
  #define ICFLX0LINE0     0xFFFFB166  /* Interrupt 0 */
  #define ICFLX0LINE1     0xFFFFB168  /* Interrupt 1 */
  #define ICFLX0TIM0      0xFFFFB16A  /* Timer 0 interrupt */
  #define ICFLX0TIM1      0xFFFFB16C  /* Timer 1 interrupt */
  #define ICFLX0TIM2      0xFFFFB16E  /* Timer 2 interrupt */

  /* Ethernet interrupt control register */
  #define ICETNB0DATA     0xFFFFB276  /* ETNB data related interrupt */

#elif defined (BRSHW_INTERRUPT_TABLE_GROUP_D)
  #define BRS_ICR_CH_AD1(n) (0xFFFEEA00 + (n *2))       /* Calculates ICR Address with number of Interrupt Channel (n=0 to 32) */
  #define BRS_ICR_CH_AD2(n) (0xFFFFB040 + ((n - 32)*2)) /* Calculates ICR Address with number of Interrupt Channel (n>=32) */

  #define BRS_ICR_CH_AD(n) ( n <= 31 ? BRS_ICR_CH_AD1(n) : BRS_ICR_CH_AD2(n) ) /* if n <= 31  use BRS_ICR_CH_AD1 else use BRS_ICR_CH_AD2*/

  #define FSGD0BPROT0 0xFFC4C000 /* PBG0B protection register to access INTC2 registers */

  /* External Interrupt control register */
  #define ICP0             BRS_ICR_CH_AD(6)   /* External interrupt 0  (INTP0)  */
  #define ICP1             BRS_ICR_CH_AD(7)   /* External interrupt 1  (INTP1)  */
  #define ICP2             BRS_ICR_CH_AD(8)   /* External interrupt 2  (INTP2)  */
  #define ICP3             BRS_ICR_CH_AD(9)   /* External interrupt 3  (INTP3)  */
  #define ICP4             BRS_ICR_CH_AD(10)  /* External interrupt 4  (INTP4)  */
  #define ICP5             BRS_ICR_CH_AD(11)  /* External interrupt 5  (INTP5)  */
  #define ICP6             BRS_ICR_CH_AD(12)  /* External interrupt 6  (INTP6)  */
  #define ICP7             BRS_ICR_CH_AD(13)  /* External interrupt 7  (INTP7)  */
  #define ICP8             BRS_ICR_CH_AD(14)  /* External interrupt 8  (INTP8)  */
  #define ICP9             BRS_ICR_CH_AD(15)  /* External interrupt 9  (INTP9)  */
  #define ICP10            BRS_ICR_CH_AD(16)  /* External interrupt 10 (INTP10) */

  /* Timer Interrupt control register */
  #define ICTAUB0I0       BRS_ICR_CH_AD(17)
  #define BRS_TIMER_ICR   ICTAUB0I0           /* TAUB0 channel 0 is used */

  /* RSCAN0 Interrupt control register */
  #define ICRCANGERR0     BRS_ICR_CH_AD(69)   /* INTRCANGERR  CAN global error interrupt */
  #define ICRCANGRECC0    BRS_ICR_CH_AD(70)   /* INTRCANGRECC CAN receive FIFO interrupt */

  #define ICRCAN0ERR      BRS_ICR_CH_AD(71)   /* INTRCAN0ERR */
  #define ICRCAN0REC      BRS_ICR_CH_AD(72)   /* INTRCAN0REC */
  #define ICRCAN0TRX      BRS_ICR_CH_AD(73)   /* INTRCAN0TRX */
  #define ICPx_CAN0       ICP6

  #define ICRCAN1ERR      BRS_ICR_CH_AD(118)  /* INTRCAN1ERR */
  #define ICRCAN1REC      BRS_ICR_CH_AD(119)  /* INTRCAN1REC */
  #define ICRCAN1TRX      BRS_ICR_CH_AD(120)  /* INTRCAN1TRX */
  #define ICPx_CAN1       ICP8

  #define ICRCAN2ERR      BRS_ICR_CH_AD(180)  /* INTRCAN2ERR */
  #define ICRCAN2REC      BRS_ICR_CH_AD(181)  /* INTRCAN2REC */
  #define ICRCAN2TRX      BRS_ICR_CH_AD(182)  /* INTRCAN2TRX */
  #define ICPx_CAN2       ICP10

  /* LIN Interrupt control register  */
  #define ICRLIN30UR0     BRS_ICR_CH_AD(83)  /* ICR / RLIN30 transmit interrupt (INTRLIN30UR0) */
  #define ICRLIN30UR1     BRS_ICR_CH_AD(82)  /* ICR / RLIN30 Reception complete interrupt (INTRLIN30UR1) */
  #define ICRLIN30UR2     BRS_ICR_CH_AD(81)  /* ICR / RLIN30 Status interrupt (INTRLIN30UR2) */
  #define ICRLIN30        ICRLIN30UR0        /* for single ISR */

  #define ICRLIN31UR0     BRS_ICR_CH_AD(86)  /* ICR / RLIN31 transmit interrupt (INTRLIN31UR0) */
  #define ICRLIN31UR1     BRS_ICR_CH_AD(85)  /* ICR / RLIN31 Reception complete interrupt (INTRLIN31UR1)*/
  #define ICRLIN31UR2     BRS_ICR_CH_AD(84)  /* ICR / RLIN31 Status interrupt (INTRLIN31UR2) */
  #define ICRLIN31        ICRLIN31UR0        /* for single ISR */

  #define ICRLIN32UR0     BRS_ICR_CH_AD(217)  /* ICR / RLIN32 transmit interrupt (INTRLIN32UR0) */
  #define ICRLIN32UR1     BRS_ICR_CH_AD(216)  /* ICR / RLIN32 Reception complete interrupt (INTRLIN32UR1)*/
  #define ICRLIN32UR2     BRS_ICR_CH_AD(215)  /* ICR / RLIN32 Status interrupt (INTRLIN32UR2) */
  #define ICRLIN32        ICRLIN32UR0         /* for single ISR */

  #define ICRLIN33UR0     BRS_ICR_CH_AD(220)  /* ICR / RLIN33 transmit interrupt (INTRLIN33UR0) */
  #define ICRLIN33UR1     BRS_ICR_CH_AD(219)  /* ICR / RLIN33 Reception complete interrupt (INTRLIN33UR1)*/
  #define ICRLIN33UR2     BRS_ICR_CH_AD(218)  /* ICR / RLIN33 Status interrupt (INTRLIN33UR2) */
  #define ICRLIN33        ICRLIN33UR0         /* for single ISR */

/* Ethernet interrupt control register */
  #define ICETNB0DATA     BRS_ICR_CH_AD(244)  /* ETNB data related interrupt */

#elif defined (BRSHW_INTERRUPT_TABLE_GROUP_E)
  #define BRS_ICR_CH_AD1(n) (0xFFFEEA00 + (n *2))        /* Calculates ICR Address with number of Interrupt Channel (n=0 to 32) */
  #define BRS_ICR_CH_AD2(n) (0xFFFFB040 + ((n - 32)*2))  /* Calculates ICR Address with number of Interrupt Channel (n>=32) */

  #define BRS_ICR_CH_AD(n) ( n <= 31 ? BRS_ICR_CH_AD1(n) : BRS_ICR_CH_AD2(n) )     /* if n <= 31  use BRS_ICR_CH_AD1 else use BRS_ICR_CH_AD2*/

  /* External Interrupt control register */
  #define IRQ0             BRS_ICR_CH_AD(9)   /* External interrupt 0 */
  #define IRQ1             BRS_ICR_CH_AD(10)  /* External interrupt 1 */
  #define IRQ2             BRS_ICR_CH_AD(11)  /* External interrupt 2 */
  #define IRQ3             BRS_ICR_CH_AD(12)  /* External interrupt 3 */
  #define IRQ4             BRS_ICR_CH_AD(13)  /* External interrupt 4 */
  #define IRQ5             BRS_ICR_CH_AD(14)  /* External interrupt 5 */
  #define IRQ6             BRS_ICR_CH_AD(15)  /* External interrupt 6 */
  #define IRQ7             BRS_ICR_CH_AD(16)  /* External interrupt 6 */

  /* Timer Interrupt control register */
  #define OVIC0           BRS_ICR_CH_AD(78)
  #define BRS_TIMER_ICR   OVIC0  /* TCNTC0 overflow Interrupt */

  /* RSCAN0 Interrupt control register */
  #define ICRCANGERR0     BRS_ICR_CH_AD(413)
  #define ICRCANGRECC0    BRS_ICR_CH_AD(412)

  #define ICRCAN0ERR      BRS_ICR_CH_AD(415)
  #define ICRCAN0TRX      BRS_ICR_CH_AD(416)
  #define ICPx_CAN0       IRQ0

  #define ICRCAN1ERR      BRS_ICR_CH_AD(418)
  #define ICRCAN1TRX      BRS_ICR_CH_AD(419)
  #define ICPx_CAN1       IRQ1

  #define ICRCAN2ERR      BRS_ICR_CH_AD(421)
  #define ICRCAN2TRX      BRS_ICR_CH_AD(422)
  #define ICPx_CAN2       IRQ2

  #define ICRCAN3ERR      BRS_ICR_CH_AD(424)
  #define ICRCAN3TRX      BRS_ICR_CH_AD(425)
  #define ICPx_CAN3       IRQ3

  /* LIN Interrupt control register */
  #define ICRLIN20        BRS_ICR_CH_AD(429)

  /* FlexRay interrupt control register */
  #define ICFLX0LINE0     BRS_ICR_CH_AD(401)  /* Interrupt 0 */
  #define ICFLX0LINE1     BRS_ICR_CH_AD(402)  /* Interrupt 1 */
  #define ICFLX0TIM0      BRS_ICR_CH_AD(403)  /* Timer 0 interrupt */
  #define ICFLX0TIM1      BRS_ICR_CH_AD(404)  /* Timer 1 interrupt */
  #define ICFLX0TIM2      BRS_ICR_CH_AD(405)  /* Timer 2 interrupt */

#elif defined (BRSHW_INTERRUPT_TABLE_GROUP_F)
  #define BRS_ICR_CH_AD1(n) (0xFFFEEA00 + (n *2))        /* Calculates ICR Address with number of Interrupt Channel (n=0 to 32) */
  #define BRS_ICR_CH_AD2(n) (0xFFFFB040 + ((n - 32)*2))  /* Calculates ICR Address with number of Interrupt Channel (n>=32) */

  #define BRS_ICR_CH_AD(n) ( n <= 31 ? BRS_ICR_CH_AD1(n) : BRS_ICR_CH_AD2(n) )     /* if n <= 31  use BRS_ICR_CH_AD1 else use BRS_ICR_CH_AD2*/

  /* External Interrupt control register */
  #define IRQ0             BRS_ICR_CH_AD(9)   /* External interrupt 0 */
  #define IRQ1             BRS_ICR_CH_AD(10)  /* External interrupt 1 */
  #define IRQ2             BRS_ICR_CH_AD(11)  /* External interrupt 2 */
  #define IRQ3             BRS_ICR_CH_AD(12)  /* External interrupt 3 */
  #define IRQ4             BRS_ICR_CH_AD(13)  /* External interrupt 4 */
  #define IRQ5             BRS_ICR_CH_AD(14)  /* External interrupt 5 */
  #define IRQ6             BRS_ICR_CH_AD(15)  /* External interrupt 6 */
  #define IRQ7             BRS_ICR_CH_AD(16)  /* External interrupt 7 */

  /* Timer Interrupt control register */
  #define ICTAUD0I0       BRS_ICR_CH_AD(82)
  #define BRS_TIMER_ICR   ICTAUD0I0            /* ICTAUD0I0 Interrupt */

  /* RSCAN0 Interrupt control register */
  #define ICRCANGERR0     BRS_ICR_CH_AD(186)
  #define ICRCANGRECC0    BRS_ICR_CH_AD(187)

  #define ICRCAN0ERR      BRS_ICR_CH_AD(189)
  #define ICRCAN0TRX      BRS_ICR_CH_AD(190)
  #define ICPx_CAN0

  #define ICRCAN1ERR      BRS_ICR_CH_AD(192)
  #define ICRCAN1TRX      BRS_ICR_CH_AD(193)
  #define ICPx_CAN1

  #define ICRCAN2ERR      BRS_ICR_CH_AD(195)
  #define ICRCAN2TRX      BRS_ICR_CH_AD(196)
  #define ICPx_CAN2

  #define ICRCAN3ERR      BRS_ICR_CH_AD(198)
  #define ICRCAN3TRX      BRS_ICR_CH_AD(199)
  #define ICPx_CAN3

  /* LIN Interrupt control register */
  #define ICRLIN20        BRS_ICR_CH_AD(200)
  #define ICRLIN21        BRS_ICR_CH_AD(201)
  #define ICRLIN22        BRS_ICR_CH_AD(202)

#elif defined (BRSHW_INTERRUPT_TABLE_GROUP_G)
  /*Timer Interrupt Control Register*/
  #define INTSTM00        0xFFFFB052
  #define BRS_TIMER_ICR   INTSTM00   /* System Timer 0 Interrupt */

  /*External Interrupts*/
  #define INTP0      0xFFFFB040  /*External Interrupt 0*/
  #define INTP1      0xFFFFB042  /*External Interrupt 1*/
  #define INTP2      0xFFFFB044  /*External Interrupt 2*/
  #define INTP3      0xFFFFB046  /*External Interrupt 3*/
  #define INTP4      0xFFFFB048  /*External Interrupt 4*/
  #define INTP5      0xFFFFB100  /*External Interrupt 5*/
  #define INTP6      0xFFFFB102  /*External Interrupt 6*/
  #define INTP7      0xFFFFB104  /*External Interrupt 7*/
  #define INTP8      0xFFFFB106  /*External Interrupt 8*/
  #define INTP9      0xFFFFB108  /*External Interrupt 9*/
  #define INTP10     0xFFFFB10A  /*External Interrupt 10*/
  #define INTP11     0xFFFFB10C  /*External Interrupt 11*/

  /*Filter control register for external interrupts*/
  #define FCLA0CTL0  0xFFC34000 /*Filter control register 0*/
  #define FCLA0CTL1  0xFFC34004 /*Filter control register 1*/
  #define FCLA0CTL2  0xFFC34008 /*Filter control register 2*/
  #define FCLA0CTL3  0xFFC3400C /*Filter control register 3*/

  /*CAN Interrupts*/
  /*MTTCAN0*/
  #define INTMTTCANI0  0xFFFFB158  /*Interrupt0 for MTTCAN0*/
  #define INTMTTCANI1  0xFFFFB15A  /*Interrupt1 for MTTCAN0*/
  #define INTMTTCANFE  0xFFFFB15C  /*Filter event for MTTCAN0*/
  #define ICPx_CAN0    INTP0

  /*MCAN0*/
  #define INTMCAN0I0   0xFFFFB15E  /*Interrupt0 for MCAN0*/
  #define INTMCAN0I1   0xFFFFB160  /*Interrupt1 for MCAN0*/
  #define INTMCAN0FE   0xFFFFB162  /*Filter event for MCAN0*/
  #define ICPx_CAN1    INTP1

  /*MCAN1*/
  #define INTMCAN1I0   0xFFFFB164  /*Interrupt0 for MCAN1*/
  #define INTMCAN1I1   0xFFFFB166  /*Interrupt1 for MCAN1*/
  #define INTMCAN1FE   0xFFFFB168  /*Filter event for MCAN1*/
  #define ICPx_CAN2    INTP2

  /*MCAN2*/
  #define INTMCAN2I0   0xFFFFB16A  /*Interrupt0 for MCAN2*/
  #define INTMCAN2I1   0xFFFFB16C  /*Interrupt1 for MCAN2*/
  #define INTMCAN2FE   0xFFFFB16E  /*Filter event for MCAN2*/
  #define ICPx_CAN3    INTP3

  /*LIN Interrupts*/
  #define ICRLIN30UR0  0xFFFFB0D0  /*RLIN3_0 interrupt 0 transfer*/
  #define ICRLIN30UR1  0xFFFFB0CE  /*RLIN3_0 interrupt 1 receive*/
  #define ICRLIN30UR2  0xFFFFB0CC  /*RLIN3_0 interrupt 2 status*/

  #define ICRLIN31UR0  0xFFFFB0D6  /*RLIN3_1 interrupt 0 transfer*/
  #define ICRLIN31UR1  0xFFFFB0D4  /*RLIN3_1 interrupt 1 receive*/
  #define ICRLIN31UR2  0xFFFFB0D2  /*RLIN3_1 interrupt 2 status*/

  #define ICRLIN32UR0  0xFFFFB0DC  /*RLIN3_2 interrupt 0 transfer*/
  #define ICRLIN32UR1  0xFFFFB0DA  /*RLIN3_2 interrupt 1 receive*/
  #define ICRLIN32UR2  0xFFFFB0D8  /*RLIN3_2 interrupt 2 status*/

  #define ICRLIN33UR0  0xFFFFB0E2  /*RLIN3_3 interrupt 0 transfer*/
  #define ICRLIN33UR1  0xFFFFB0E0  /*RLIN3_3 interrupt 1 receive*/
  #define ICRLIN33UR2  0xFFFFB0DE  /*RLIN3_3 interrupt 2 status*/

  /*FlexRay Interrupts*/
  #define ICFLX0LINE0      0xFFFFB174   /*Universal interrupt chA for FLXA0*/
  #define ICFLX0LINE1      0xFFFFB176   /*Universal interrupt chB for FLXA0*/

  /*Ethernet Interrupts*/
  #define INTETNA0    0xFFFFB170  /*Ethernet interrupt for ETNA0*/
  #define INTETNA1    0xFFFFB172  /*Ethernet interrupt for ETNA1*/

#else
  #error "Unknown BRSHW_INTERRUPT_TABLE_GROUP configured. Check BrsHw_DerivativeList.h for your Derivative."
#endif /*BRSHW_INTERRUPT_TABLE_GROUP_x*/

/*******************************************************************************
  Port registers
********************************************************************************/
#if defined (BRSHW_PORT_GROUP_A)
  #define PORT_BASE_ADDRESS  0xFFC10000

  #define P(n)        BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0000 + (0x4*n))  /* Port register -Pn */
  #define PSR(n)      BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x0100 + (0x4*n))
  #define PPR(n)      BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0200 + (0x4*n))
  #define PM(n)       BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0300 + (0x4*n))  /* Port mode register - PMn */
  #define PMC(n)      BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0400 + (0x4*n))  /* Port mode control register - PMCn */
  #define PFC(n)      BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0500 + (0x4*n))  /* Port function control register - PFCn */
  #define PFCE(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0600 + (0x4*n))  /* Port  function control enhancing register - PFCEn */
  #define PNOT(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0700 + (0x4*n))
  #define PMSR(n)     BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x0800 + (0x4*n))
  #define PMCSR(n)    BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x0900 + (0x4*n))
  #define PFCAE(n)    BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0A00 + (0x4*n))
  #define PIBC(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x4000 + (0x4*n))  /* Port IP control register - PIPCn */
  #define PBDC(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x4100 + (0x4*n))
  #define PU(n)       BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x4300 + (0x4*n))
  #define PIPC(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x4200 + (0x4*n))
  #define PODC(n)     BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x4500 + (0x4*n))
  #define PDSC(n)     BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x4600 + (0x4*n))
  #define PIS(n)      BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x4700 + (0x4*n))
  #define PPROTS(n)   BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x4B00 + (0x4*n))
  #define PPCMD(n)    BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x4C00 + (0x4*n))

  /* Filter control register for external interrupts - used for wakeup */
  #define FCLA0CTL(n) BRSHW_IOS(uint8,  0xFFC34020 + (0x4*n))

#elif defined (BRSHW_PORT_GROUP_B) || defined (BRSHW_PORT_GROUP_B1) || defined (BRSHW_PORT_GROUP_B2)
  #define PORT_BASE_ADDRESS  0xFFC10000

  #define P(n)        BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0000 + (0x40*n))  /* Port register -Pn */
  #define PSR(n)      BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x0004 + (0x40*n))
  #define PNOT(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0008 + (0x40*n))
  #define PPR(n)      BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x000C + (0x40*n))
  #define PM(n)       BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0010 + (0x40*n))  /* Port mode register - PMn */
  #define PMC(n)      BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0014 + (0x40*n))  /* Port mode control register - PMCn */
  #define PFC(n)      BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0018 + (0x40*n))  /* Port function control register - PFCn */
  #define PFCE(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x001C + (0x40*n))  /* Port  function control enhancing register - PFCEn */
  #define PMSR(n)     BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x0020 + (0x40*n))
  #define PMCSR(n)    BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x0024 + (0x40*n))
  #define PFCAE(n)    BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x0028 + (0x40*n))
  #define PIBC(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x4000 + (0x40*n))  /* Port IP control register - PIPCn */
  #define PBDC(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x4004 + (0x40*n))
  #define PU(n)       BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x400C + (0x40*n))
  #define PODC(n)     BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x4014 + (0x40*n))
  #define PISA(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x402C + (0x40*n))
  #define PPROTS(n)   BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x4034 + (0x40*n))
  #define PPCMD(n)    BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x4030 + (0x40*n))
  #define PDSC(n)     BRSHW_IOS(uint32, PORT_BASE_ADDRESS + 0x4018 + (0x40*n))  /* Port Drive Strength Control Register */
  #define PIPC(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x4008 + (0x40*n))  /* Port IP Control Register */
  #define PD(n)       BRSHW_IOS(uint16, PORT_BASE_ADDRESS + 0x4010 + (0x40*n))  /* Port Pull-down option Register */
  
# if defined (BRSHW_PORT_GROUP_B)
  /*Digital Noise Elimination for external interrupts - used for wakeup */
  #define DNFAnEN(n)  BRSHW_IOS(uint8,  0xFFC30004 + (0x100*n)) /* Enable Register */
  #define FCLA1CTL(n) BRSHW_IOS(uint8,  0xFFC34020 + (0x4*n))   /* Filter control register */
# endif

# if defined (BRSHW_PORT_GROUP_B1)
  /* Filter control register for external interrupts - used for wakeup */
  #define EXINTCTL  BRSHW_IOS(uint16,  0xFFC00010);
# endif

# if defined (BRSHW_PORT_GROUP_B2)
  /*Not implemented yet*/
# endif /*BRSHW_PORT_GROUP_B2*/

#elif defined (BRSHW_PORT_GROUP_C)
  #define PORTU0_BASE_ADDRESS  0xFF618000    /* Port group number n == 0 */
  #define PORTUn_BASE_ADDRESS  0xFF610000    /* Port group number n > 0 */
  #define PORTU0_PROT_BASE_ADDRESS  0xFFC18000    /* Port group number n == 0 */
  #define PORTUn_PROT_BASE_ADDRESS  0xFFC10000    /* Port group number n > 0 */

  #define PORT_BASE_ADDRESS(n)      (n == 0 ? PORTU0_BASE_ADDRESS : PORTUn_BASE_ADDRESS)   /* if n==0 use PORTU0_BASE_ADDRESS else use PORTUn_BASE_ADDRESS*/
  #define PORT_PROT_BASE_ADDRESS(n) (n == 0 ? PORTU0_PROT_BASE_ADDRESS : PORTUn_PROT_BASE_ADDRESS)

  #define P(n)        BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x0000 + (0x40*n))  /* Port register -Pn */
  #define PSR(n)      BRSHW_IOS(uint32, PORT_BASE_ADDRESS(n) + 0x0004 + (0x40*n))
  #define PNOT(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x0008 + (0x40*n))
  #define PPR(n)      BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x000C + (0x40*n))
  #define PM(n)       BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x0010 + (0x40*n))  /* Port mode register - PMn */
  #define PMC(n)      BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x0014 + (0x40*n))  /* Port mode control register - PMCn */
  #define PFC(n)      BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x0018 + (0x40*n))  /* Port function control register - PFCn */
  #define PFCE(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x001C + (0x40*n))  /* Port  function control enhancing register - PFCEn */
  #define PMSR(n)     BRSHW_IOS(uint32, PORT_BASE_ADDRESS(n) + 0x0020 + (0x40*n))
  #define PMCSR(n)    BRSHW_IOS(uint32, PORT_BASE_ADDRESS(n) + 0x0024 + (0x40*n))
  #define PFCAE(n)    BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x0028 + (0x40*n))
  #define PIBC(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x4000 + (0x40*n))
  #define PBDC(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x4004 + (0x40*n))
  #define PIPC(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x4008 + (0x40*n))  /* Port IP control register - PIPCn */
  #define PU(n)       BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x400C + (0x40*n))
  #define PODC(n)     BRSHW_IOS(uint32, PORT_BASE_ADDRESS(n) + 0x4014 + (0x40*n))
  #define PDSC(n)     BRSHW_IOS(uint32, PORT_BASE_ADDRESS(n) + 0x4018 + (0x40*n))
  #define PISA(n)     BRSHW_IOS(uint16, PORT_BASE_ADDRESS(n) + 0x4024 + (0x40*n))
  #define PPCMD(n)    BRSHW_IOS(uint8,  PORT_PROT_BASE_ADDRESS(n) + 0x402C + (0x40 * n))
  #define PPROTS(n)   BRSHW_IOS(uint8,  PORT_PROT_BASE_ADDRESS(n) + 0x4034 + (0x40 * n))  

  /* Filter control register for external interrupts - used for wakeup */
  #define FCLA0CTL(n) BRSHW_IOS(uint8,  0xFFC34000 + (0x4*n))  /* INTP0 - INTP6 */
  #define FCLA1CTL(n) BRSHW_IOS(uint8,  0xFFC34100 + (0x4*n))  /* INTP7 - INTP10 */

#elif defined (BRSHW_PORT_GROUP_D)
  #define PORT_BASE1_ADDRESS  0xFF610000
  #define PORT_BASE2_ADDRESS  0xFFC10000

  #define P(n)        BRSHW_IOS(uint16, PORT_BASE1_ADDRESS + 0x0000 + (0x40 * n))
  #define PSR(n)      BRSHW_IOS(uint32, PORT_BASE1_ADDRESS + 0x0004 + (0x40 * n))
  #define PNOT(n)     BRSHW_IOS(uint16, PORT_BASE1_ADDRESS + 0x0008 + (0x40 * n))
  #define PPR(n)      BRSHW_IOS(uint16, PORT_BASE1_ADDRESS + 0x000C + (0x40 * n))
  #define PM(n)       BRSHW_IOS(uint16, PORT_BASE1_ADDRESS + 0x0010 + (0x40 * n))
  #define PMC(n)      BRSHW_IOS(uint16, PORT_BASE1_ADDRESS + 0x0014 + (0x40 * n))
  #define PFC(n)      BRSHW_IOS(uint16, PORT_BASE1_ADDRESS + 0x0018 + (0x40 * n))
  #define PFCE(n)     BRSHW_IOS(uint16, PORT_BASE1_ADDRESS + 0x001C + (0x00 * n))
  #define PMSR(n)     BRSHW_IOS(uint32, PORT_BASE1_ADDRESS + 0x0020 + (0x40 * n))
  #define PMCSR(n)    BRSHW_IOS(uint32, PORT_BASE1_ADDRESS + 0x0024 + (0x40 * n))
  #define PFCAE(n)    BRSHW_IOS(uint16, PORT_BASE1_ADDRESS + 0x0028 + (0x40 * n))
  #define PINV(n)     BRSHW_IOS(uint32, PORT_BASE1_ADDRESS + 0x0030 + (0x40 * n))
  #define PIBC(n)     BRSHW_IOS(uint16, PORT_BASE2_ADDRESS + 0x4000 + (0x40 * n))
  #define PBDC(n)     BRSHW_IOS(uint16, PORT_BASE2_ADDRESS + 0x4004 + (0x40 * n))
  #define PIPC(n)     BRSHW_IOS(uint16, PORT_BASE2_ADDRESS + 0x4008 + (0x40 * n))
  #define PU(n)       BRSHW_IOS(uint16, PORT_BASE2_ADDRESS + 0x400C + (0x40 * n))
  #define PD(n)       BRSHW_IOS(uint16, PORT_BASE2_ADDRESS + 0x4010 + (0x40 * n))
  #define PDSC(n)     BRSHW_IOS(uint32, PORT_BASE2_ADDRESS + 0x4018 + (0x40 * n))
  #define PUCC(n)     BRSHW_IOS(uint32, PORT_BASE2_ADDRESS + 0x4028 + (0x40 * n))
  #define PPCMD(n)    BRSHW_IOS(uint8,  PORT_BASE2_ADDRESS + 0x402C + (0x40 * n))
  #define PPROTS(n)   BRSHW_IOS(uint8,  PORT_BASE2_ADDRESS + 0x4034 + (0x40 * n))
  #define PCR(n,m)    BRSHW_IOS(uint32, PORT_BASE1_ADDRESS + 0x2000 + (0x40 * n) + (0x04 * m))

  /* External Interrupt Control Register (EXINTCTL) - used for wakeup */
  #define EXINTCTL         BRSHW_IOS(uint16, 0xFFC00010)

#else
  #error "Unknown BRSHW_PORT_GROUP configed. Check BrsHw_DerivativeList.h for your Derivative."
#endif /* BRSHW_PORT_GROUP_x */

/*******************************************************************************
  Power Down Modes Register
********************************************************************************/
#if defined (BRSHW_POWER_DOWN_MODES)
  #define MSR_LM2  0xFFF86210 /*ICUMC*/
  #define MSR_LM3  0xFFF81710 /*MCAN/MTTCAN*/
  #define MSR_LM4  0xFFF81810 /*FlexRay*/
  #define MSR_LM5  0xFFF81910 /*GTM*/
  #define MSR_LM6  0xFFF81A10 /*Ethernet*/
  #define MSR_LM7  0xFFF81B10 /*SENT*/
  #define MSR_LM8  0xFFF81C10 /*HS-USRT*/
  #define MSR_LM10 0xFFF81E10 /*CSIH*/
  #define MSR_LM11 0xFFF81F10 /*RLIN3*/
  #define MSR_LM12 0xFFF82010 /*ADCTL*/
#endif /*BRSHW_POWER_DOWN_MODES*/

/**********************************************************************************************************************
  LOCAL VARIABLES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL CONST VARIABLES
**********************************************************************************************************************/

/**********************************************************************************************************************
  PROTOTYPES OF LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  FUNCTION DEFINITIONS
**********************************************************************************************************************/

/*****************************************************************************/
/**
 * @brief      This function has to be used to initialize controller specific
*              stuff that is not related to one of the other InitPowerOn
*              functions (e.g. code that is always mandatory, also if MCAL
*              and/or OS is used). This function is called from BrsCbd/BrsAsr
*              immediately after BrsHwDisableInterruptAtPowerOn() during
*              initialization (if BRSHW_PREINIT_AVAILABLE is set in BrsHw.h).
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from init@BrsMain
 */
/*****************************************************************************/
void BrsHwPreInitPowerOn(void)
{
#if defined (BRSHW_POWER_DOWN_MODES)
# if defined (VGEN_ENABLE_CAN_DRV)
  BRSHW_IOS(uint32, MSR_LM3) = 0x00;  /*MCAN/MTTCAN Register*/
# endif

# if defined (VGEN_ENABLE_DRVETH__BASEASR)
  BRSHW_IOS(uint32, MSR_LM6) = 0x00;  /*Ethernet Register*/
# endif

# if defined (VGEN_ENABLE_LIN_DRV)
  BRSHW_IOS(uint32, MSR_LM11) = 0x00;  /*RLIN3 Register*/
# endif

# if defined (VGEN_ENABLE_DRVFR__BASEASR)
  BRSHW_IOS(uint32, MSR_LM4) = 0x00;  /*FlexRay Register*/
# endif

  #error "If you need addiditional peripherals, you can deactivate their power-down modes here." */
  /* BRSHW_IOS(uint32, MSR_LM2)  = 0x00;  ICUMC Register*/
  /* BRSHW_IOS(uint32, MSR_LM5)  = 0x00;  GTM Register*/
  /* BRSHW_IOS(uint32, MSR_LM7)  = 0x00;  SENT Register*/
  /* BRSHW_IOS(uint32, MSR_LM8)  = 0x00;  HS-USRT Register*/
  /* BRSHW_IOS(uint32, MSR_LM10) = 0x00;  CSIH Register*/
  /* BRSHW_IOS(uint32, MSR_LM12) = 0x00;  ADCTL Register*/
#endif /*BRSHW_POWER_DOWN_MODES*/

#if defined (BRSHW_INTERRUPT_TABLE_GROUP_D)
  /* The INTC2 registers are not accessible per default as they are protected by the PBUS Guard PBG0B.
     Before accessing any of these registers, the PBG0B protection register FSGD0BPROT0 has to be set to 0x07FFFFFF */
  BRSHW_IOS(uint32, FSGD0BPROT0) = 0x07FFFFFF;
#endif
}

/*****************************************************************************/
/**
 * @brief      This function has to be used to initialize the Watchdog.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain or EcuM at power on initialization
 */
/*****************************************************************************/
void BrsHwWatchdogInitPowerOn(void)
{
  /* Nothing to be done here, internal Watchdog already switched off via OptionBytes */
}

/*****************************************************************************/
/**
 * @brief      This function has to be used to initialize the PLL.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain or EcuM at power on initialization
 */
/*****************************************************************************/
void BrsHwPllInitPowerOn(void)
{
#if !defined (VGEN_ENABLE_DRVMCU)

# if (BRS_TIMEBASE_CLOCK > BRSHW_CPU_MAX_FREQUENCY)
  #error "The selected derivative does not support frequencies above BRSHW_CPU_MAX_FREQUENCY (please find the defined value inside BrsHw_DerivativeList.h)."
# endif

# if defined (BRSHW_PLL_GROUP_A) || defined (BRSHW_PLL_GROUP_A1) || defined (BRSHW_PLL_GROUP_A2) || defined (BRSHW_PLL_GROUP_A3)

#  if defined (BRSHW_PLL_GROUP_A3)
#   if !((BRS_OSC_CLK==16) || (BRS_OSC_CLK==20) || (BRS_OSC_CLK==24))
  #error "The selected clock frequency of main oscillator is not supported (PLL_GROUP_A3 supports: 16, 20 and 24 MHz)."
#   endif

#  elif defined (BRSHW_PLL_GROUP_A2)
#   if !((BRS_OSC_CLK==8) || (BRS_OSC_CLK==12) || (BRS_OSC_CLK==16))
  #error "The selected clock frequency of main oscillator is not supported (PLL_GROUP_A2 supports: 8, 12 and 16 MHz)."
#   endif

#  else /*BRSHW_PLL_GROUP_Ax*/
#   if !((BRS_OSC_CLK==8) || (BRS_OSC_CLK==12) || (BRS_OSC_CLK==16) || (BRS_OSC_CLK==20))
  #error "The selected clock frequency of main oscillator is not supported (supported: 8, 12, 16 and 20 MHz)."
#   endif
#  endif /*else BRSHW_PLL_GROUP_Ax*/

  PROT_WRITE0(MOSCE, 0x02);       /* stop MainOsc */
  while((MOSCS & 0x04) == 0x04);  /* wait for main osc to shutdown */

#  if defined (BRSHW_PLL_GROUP_A3)
#   if (BRS_OSC_CLK == 16)
  MOSCC = 0x02;                   /* Set MainOsc gain (MOSC frequency = 16MHz) */
#   elif (BRS_OSC_CLK == 20)
  MOSCC = 0x01;                   /* Set MainOsc gain (MOSC frequency = 20MHz) */
#   elif (BRS_OSC_CLK == 24)
  MOSCC = 0x00;                   /* Set MainOsc gain (MOSC frequency = 24MHz) */
#   endif

#  elif defined (BRSHW_PLL_GROUP_A2)
#   if (BRS_OSC_CLK == 8)
  MOSCC = 0x05;                   /* Set MainOsc gain (8MHz) (and set mandatory Bit2 to '1') */
#   elif (BRS_OSC_CLK == 12) || (BRS_OSC_CLK == 16)
  MOSCC = 0x04;                   /* Set MainOsc gain (8MHz < MOSC frequency <= 16MHz) (and set mandatory Bit2 to '1') */
#   endif

#  else /*BRSHW_PLL_GROUP_Ax*/
#   if (BRS_OSC_CLK == 8)
  MOSCC = 0x03;                   /* Set MainOsc gain (8MHz) */
#   elif (BRS_OSC_CLK == 12) || (BRS_OSC_CLK == 16)
  MOSCC = 0x02;                   /* Set MainOsc gain (8MHz < MOSC frequency <= 16MHz) */
#   elif (BRS_OSC_CLK == 20)
  MOSCC = 0x01;                   /* Set MainOsc gain (16MHz < MOSC frequency <= 20MHz) */
#   endif
#  endif /*else BRSHW_PLL_GROUP_Ax*/

#  if defined (BRSHW_PLL_GROUP_A2) || defined (BRSHW_PLL_GROUP_A3)
  MOSCST = 0x1FFFF;               /* Set MainOsc stabilization time to max value */
#  else
  MOSCST = 0xFFFF;                /* Set MainOsc stabilization time to max value */
#  endif

  PROT_WRITE0(MOSCE, 0x01);       /* start MainOsc */
  while((MOSCS & 0x04) != 0x04);  /* Wait for stable MainOsc*/

  PROT_WRITE1(PLLE0, 0x02);       /* stop PLL */
  while((PLLS0 & 0x04) == 0x04);  /* wait for PLL to shutdown */

#  if defined (BRSHW_PLL_GROUP_A3)
#   if (BRSHW_CPU_MAX_FREQUENCY == 80 || BRSHW_CPU_MAX_FREQUENCY == 120)
#    if (BRS_TIMEBASE_CLOCK == 80 || BRS_TIMEBASE_CLOCK == 120)
#     if (BRS_OSC_CLK == 16)
  #define M_DIVIDER  1 /* Mr Value =  2 */
  #define NR_VALUE  59 /* Nr Value = 60 */
#     elif (BRS_OSC_CLK == 20)
  #define M_DIVIDER  1 /* Mr Value =  2 */
  #define NR_VALUE  47 /* Nr Value = 48 */
#     elif (BRS_OSC_CLK == 24)
  #define M_DIVIDER  1 /* Mr Value =  2 */
  #define NR_VALUE  39 /* Nr Value = 40 */
#     endif
#    else
  #error "The selected CPU frequency is not yet supported (please choose 80 MHz or 120 MHz)."
#    endif
#   else /*BRSHW_CPU_MAX_FREQUENCY == 80*/
  #error "The max CPU frequency of the selected derivative is not yet verified."
#   endif

#  else /*BRSHW_PLL_GROUP_A3*/
#   if ((BRS_OSC_CLK == 8) || (BRS_OSC_CLK == 12))
  #define M_DIVIDER 0x0 /* Mr Value = 1 */
#   elif ((BRS_OSC_CLK == 16) || (BRS_OSC_CLK == 20))
  #define M_DIVIDER 0x1 /* Mr Value = 2 */
#   endif

#   if ((BRSHW_CPU_MAX_FREQUENCY == 80) || (BRSHW_CPU_MAX_FREQUENCY == 96))
#    if ((BRS_TIMEBASE_CLOCK >= 60) && (BRS_TIMEBASE_CLOCK <= 80))
  #define P_DIVIDER 0x2                          /* Par Value = 4*/
#     if ((BRS_OSC_CLK == 8) || (BRS_OSC_CLK == 16))
  #define NR_VALUE ((BRS_TIMEBASE_CLOCK/2) - 1)  /* Division ratio Nr */
#     elif (BRS_OSC_CLK == 12)
  #define NR_VALUE ((BRS_TIMEBASE_CLOCK/4) +6)  /* Division ratio Nr */
#     elif (BRS_OSC_CLK == 20)
  #define NR_VALUE ((BRS_TIMEBASE_CLOCK*2/5) -1) /* Division ratio Nr */
#     endif
#    elif ((BRS_TIMEBASE_CLOCK >= 30) && (BRS_TIMEBASE_CLOCK <= 60))
  #define P_DIVIDER 0x4                          /* Par Value = 8*/
#     if ((BRS_OSC_CLK == 8) || (BRS_OSC_CLK == 12) || (BRS_OSC_CLK == 16))
  #define NR_VALUE (BRS_TIMEBASE_CLOCK - 1)      /* Division ratio Nr */
#     elif (BRS_OSC_CLK == 20)
  #define NR_VALUE (BRS_TIMEBASE_CLOCK*4/5)      /* Division ratio Nr */
#     else
  #error "The selected clock frequency of main oscillator is not yet supported for your derivative"
#     endif
#    else
  #error "The selected CPU frequency is not yet supported (please choose min >30..80 MHz)."
#    endif

#   elif (BRSHW_CPU_MAX_FREQUENCY == 120)
#    if ((BRS_TIMEBASE_CLOCK >= 80) && (BRS_TIMEBASE_CLOCK <= 120))
  #define P_DIVIDER 0x2                          /* Par Value = 4*/
#     if ((BRS_OSC_CLK == 8) || (BRS_OSC_CLK == 16))
  #define NR_VALUE ((BRS_TIMEBASE_CLOCK/2) - 1)  /* Division ratio Nr */
#     elif (BRS_OSC_CLK == 20)
  #define NR_VALUE ((BRS_TIMEBASE_CLOCK*2/5) -1) /* Division ratio Nr */
#     endif

#    elif ((BRS_TIMEBASE_CLOCK >= 40) && (BRS_TIMEBASE_CLOCK < 80))
  #define P_DIVIDER 0x3                          /* Par Value = 8*/
#     if ((BRS_OSC_CLK == 8) || (BRS_OSC_CLK == 16))
  #define NR_VALUE (BRS_TIMEBASE_CLOCK - 1)      /* Division ratio Nr */
#     elif (BRS_OSC_CLK == 20)
  #define NR_VALUE ((BRS_TIMEBASE_CLOCK*4/5) -1) /* Division ratio Nr */
#     else
  #error "The selected clock frequency of main oscillator is not yet supported for your derivative"
#     endif
#    else
  #error "The selected CPU frequency is not yet supported (please choose min 40..120 MHz)."
#    endif

#   elif ((BRSHW_CPU_MAX_FREQUENCY == 240) || (BRSHW_CPU_MAX_FREQUENCY == 200) || (BRSHW_CPU_MAX_FREQUENCY == 160))
#    if ((BRS_TIMEBASE_CLOCK > 160) && (BRS_TIMEBASE_CLOCK <= 320))
  #define P_DIVIDER 0x1                          /* Par Value = 2*/
#     if ((BRS_OSC_CLK == 8) || (BRS_OSC_CLK == 16))
  #define NR_VALUE ((BRS_TIMEBASE_CLOCK/4) - 1)  /* Division ratio Nr */
#     elif (BRS_OSC_CLK == 20)
  #define NR_VALUE ((BRS_TIMEBASE_CLOCK/5) - 1)  /* Division ratio Nr */
#     else
  #error "The selected clock frequency of main oscillator is not yet supported for your derivative"
#     endif
#    elif ((BRS_TIMEBASE_CLOCK > 80) && (BRS_TIMEBASE_CLOCK <= 160))
  #define P_DIVIDER 0x2                          /* Par Value = 4*/
#     if ((BRS_OSC_CLK == 8) || (BRS_OSC_CLK == 16))
  #define NR_VALUE ((BRS_TIMEBASE_CLOCK/2) -1)   /* Division ratio Nr */
#     elif (BRS_OSC_CLK == 20)
  #define NR_VALUE ((BRS_TIMEBASE_CLOCK*2/5) -1) /* Division ratio Nr */
#     else
  #error "The selected clock frequency of main oscillator is not yet supported for your derivative"
#     endif
#    elif ((BRS_TIMEBASE_CLOCK > 40) && (BRS_TIMEBASE_CLOCK <= 80))
  #define P_DIVIDER 0x3                          /* Par Value = 8*/
#     if ((BRS_OSC_CLK == 8) || (BRS_OSC_CLK == 16))
  #define NR_VALUE (BRS_TIMEBASE_CLOCK -1)       /* Division ratio Nr */
#     elif (BRS_OSC_CLK == 20)
  #define NR_VALUE ((BRS_TIMEBASE_CLOCK*4/5) -1) /* Division ratio Nr */
#     else
  #error "The selected clock frequency of main oscillator is not yet supported for your derivative"
#     endif
#    else
  #error "The selected CPU frequency is not yet supported (please choose min >40 .. 240 MHz)."
#    endif

#   else
  #error "The max CPU frequency of the selected derivative is not yet verified."
#   endif
#  endif /*else BRSHW_PLL_GROUP_A3*/

  /**********************************************************************************
   *                              PLL config                                        *
   **********************************************************************************/
#  if defined (BRSHW_PLL_GROUP_A3)
  /* VCO = 480MHz */
  /* 480MHz = XOsc * "Division ratio Nr" / (Mr-Value * Pr-Value) */
  /* for CPPL: Pr is derived from CKSC_CPUCLKD_CTL.CPUCLKDPLL[1:0] -> {4, 5, 6}, default: 6 */
  /* for PPPL: Pr is 6 */

  PLLC0 =
    (0x1                  << 16U) |
    (((M_DIVIDER) & 0x03) << 11U) |
    (0x3                  <<  8U) |
    ((NR_VALUE) & 0x3F);

  PROT_WRITE1(PLLE0, 0x01);  /* start PLL */
  while((PLLS0 & 0x04) != 0x04);  /* Wait for stabilized PLL */

#  elif defined (BRSHW_PLL_GROUP_A2)
  /* Freq_VCO = PLLclk * Pr-Value */
  /* FVV is to set the PLL0 VCO output frequency range:
       000b 320 MHz < fPLL0VCOOUT <= 360 MHz
       001b 360 MHz < fPLL0VCOOUT <= 400 MHz
       010b 400 MHz < fPLL0VCOOUT <= 440 MHz
       011b 440 MHz < fPLL0VCOOUT <= 480 MHz
       100b 480 MHz < fPLL0VCOOUT <= 520 MHz
       101b 520 MHz < fPLL0VCOOUT <= 560 MHz
       110b 560 MHz < fPLL0VCOOUT <= 600 MHz
       111b 600 MHz < fPLL0VCOOUT <= 640 MHz */
#   if ((BRS_TIMEBASE_CLOCK > 180) && (BRS_TIMEBASE_CLOCK <= 200))
  #define FVV_VCOOUT_RANGE 0x1  /* Pr-Value = 2, VCO = 361-400MHz */
#   elif ((BRS_TIMEBASE_CLOCK > 160) && (BRS_TIMEBASE_CLOCK <= 180))
  #define FVV_VCOOUT_RANGE 0x0  /* Pr-Value = 2, VCO = 321-360MHz */
#   elif ((BRS_TIMEBASE_CLOCK > 150) && (BRS_TIMEBASE_CLOCK <= 160))
  #define FVV_VCOOUT_RANGE 0x7  /* Pr-Value = 4, VCO = 601-640MHz */
#   elif ((BRS_TIMEBASE_CLOCK > 140) && (BRS_TIMEBASE_CLOCK <= 150))
  #define FVV_VCOOUT_RANGE 0x6  /* Pr-Value = 4, VCO = 561-600MHz */
#   elif ((BRS_TIMEBASE_CLOCK > 130) && (BRS_TIMEBASE_CLOCK <= 140))
  #define FVV_VCOOUT_RANGE 0x5  /* Pr-Value = 4, VCO = 521-560MHz */
#   elif ((BRS_TIMEBASE_CLOCK > 120) && (BRS_TIMEBASE_CLOCK <= 130))
  #define FVV_VCOOUT_RANGE 0x4  /* Pr-Value = 4, VCO = 481-520MHz */
#   elif ((BRS_TIMEBASE_CLOCK > 110) && (BRS_TIMEBASE_CLOCK <= 120))
  #define FVV_VCOOUT_RANGE 0x3  /* Pr-Value = 4, VCO = 441-480MHz */
#   elif ((BRS_TIMEBASE_CLOCK > 100) && (BRS_TIMEBASE_CLOCK <= 110))
  #define FVV_VCOOUT_RANGE 0x2  /* Pr-Value = 4, VCO = 401-440MHz */
#   elif ((BRS_TIMEBASE_CLOCK > 90) && (BRS_TIMEBASE_CLOCK <= 100))
  #define FVV_VCOOUT_RANGE 0x1  /* Pr-Value = 4, VCO = 361-400MHz */
#   elif ((BRS_TIMEBASE_CLOCK > 80) && (BRS_TIMEBASE_CLOCK <= 90))
  #define FVV_VCOOUT_RANGE 0x0  /* Pr-Value = 4, VCO = 321-360MHz */
#   else
  #error "The selected CPU frequency is not yet supported (please choose min >80 .. 200 MHz)."
#   endif

  PLLC0 =
    (FVV_VCOOUT_RANGE <<29U) | /* Bit 29-31 */
    (M_DIVIDER <<11U) |        /* Bit 11-12 */
    (P_DIVIDER << 8U) |        /* Bit 8-10  */
    (NR_VALUE);                /* Bit 0-5   */

  PROT_WRITE1(PLLE0, 0x01);  /* start PLL */
  while((PLLS0 & 0x04) != 0x04); /* Wait for stabilized PLL */

  /* PLL1CLK = 480 MHz fix */
  /* 480MHz = XOsc * "Division ratio Nr" / (Mr-Value * Pr-Value) */
#   if (BRSHW_CPU_MAX_FREQUENCY == 240) /* D1M2 Derivatives */
  #define P_DIVIDER_PLL1 0x1                  /* Pr-Value = 2, PLL1clk = 266-533MHz */
  #define FVV_VCOOUT_RANGE_PLL1 0x3           /* Freq_VCO = PLLclk * Pr-Value ==> 480*2=960MHz */
  #define NR_VALUE_PLL1 ((960/BRS_OSC_CLK)-1) /* Nr-Value = (960MHz/Osc-clock)-1 (to cut Osc-clock from PLL equation) */
#   else
  #define P_DIVIDER_PLL1 0x0                  /* Pr-Value = 1, PLL1clk = 240-480MHz */
  #define FVV_VCOOUT_RANGE_PLL1 0x0           /* no FVV, write initioal value */
  #define NR_VALUE_PLL1 ((480/BRS_OSC_CLK)-1) /* Nr-Value = (480MHz/Osc-clock)-1 (to cut Osc-clock from PLL equation) */
#   endif

  PROT_WRITE1(PLLE1, 0x02);  /* stop PLL */
  while((PLLS1 & 0x04) == 0x04);  /* wait for PLL to shutdown */

  PLLC1 =
    (FVV_VCOOUT_RANGE_PLL1 << 29U) |  /* FVV; PLL1 VCO output frequency fPLL1VCOOUT=960 MHz*/
    (0x0 << 11U) |                    /* Mr Divider set to 1 */
    (P_DIVIDER_PLL1 << 8U) |          /* Bit 8-10  */
    (NR_VALUE_PLL1);                  /* Bit 0-5   */

  PROT_WRITE1(PLLE1, 0x01);  /* start PLL */
  while((PLLS1 & 0x04) != 0x04); /* Wait for stabilized PLL */

#  else /*BRSHW_PLL_GROUP_Ax*/
  /** PLL0CLK = BRS_TIMEBASE_CLOCK **/
  PLLC0 =
    (M_DIVIDER <<11U) |  /* Bit 11-12 */
    (P_DIVIDER << 8U) |  /* Bit 8-10  */
    (NR_VALUE);          /* Bit 0-5   */

  PROT_WRITE1(PLLE0, 0x01);  /* start PLL */
  while((PLLS0 & 0x04) != 0x04); /* Wait for stabilized PLL */

  /** PLL1 **/
#   if defined (BRSHW_PLL_GROUP_A1)
  /* PLL1CLK = BRS_TIMEBASE_CLOCK */
  PROT_WRITE1(PLLE1, 0x02);  /* stop PLL */

  PLLC1 =
    (M_DIVIDER <<11U) |  /* Bit 11-12 */
    (P_DIVIDER << 8U) |  /* Bit 8-10  */
    (NR_VALUE);          /* Bit 0-5   */

  PROT_WRITE1(PLLE1, 0x01);  /* start PLL */
  while((PLLS1 & 0x04) != 0x04); /* Wait for stabilized PLL */
#   endif /*BRSHW_PLL_GROUP_A1*/
#  endif /*else BRSHW_PLL_GROUP_Ax*/

  /**********************************************************************************
   *                         Clock selection config                                 *
   **********************************************************************************/

#  if defined (BRSHW_CLOCK_GROUP_A2)
  /* Peripherals use PPLCLK by default on F1K */
  /* Config PPLLCLK -> PPLLOUT */
  PROT_WRITE1(CKSC_PPLLCLKS_CTL, 0x03);
  while(CKSC_PPLLCLKS_ACT!=0x03);

  /* Set CPU clock divider to 1 and CPUCLKDPLL = 6 (Pr for PLL) */
  PROT_WRITE1(CKSC_CPUCLKD_CTL, 0x01);
  while(CKSC_CPUCLKD_ACT!=0x01);

  /* Config CPU clock -> CPLLOUT */
  PROT_WRITE1(CKSC_CPUCLKS_CTL, 0x03);
  while(CKSC_CPUCLKS_ACT!=0x03);

  /* Config C_ISO_CANOSC clock -> MainOSC/1 */
  PROT_WRITE1(CKSC_ICANOSCD_CTL, 0x01);
  while(CKSC_ICANOSCD_ACT!=0x01);
#  endif /*BRSHW_CLOCK_GROUP_A2*/

  /** PLL activation / CLKJIT, CLKFIX configuration **/
#  if defined (BRSHW_CLOCK_GROUP_A1)
  /* Activate PLL0CLK */
  PROT_WRITE1(CKSC_IPPL0S_CTL, 0x01);
  while(CKSC_IPPL0S_ACT!=0x01);

  /* Activate PLL1CLK */
  PROT_WRITE1(CKSC_IPPL1S_CTL, 0x01);
  while(CKSC_IPPL1S_ACT!=0x01);

  /* Configure CLKJIT */
  PROT_WRITE3(CKSC_ICLKJITS_CTL, 0x01);  /* Select CKDV_ICLKJITD_CTL as source clock for CLKJIT */
  while(CKSC_ICLKJITS_ACT!=0x01);

  /* Configure CLKFIX */
  PROT_WRITE3(CKSC_ICLKFIXS_CTL, 0x01);  /* Select CKDV_ICLKFIXD_CTL as source clock for CLKFIX */
  while(CKSC_ICLKFIXS_ACT!=0x01);
#  endif /*BRSHW_CLOCK_GROUP_A1*/

#  if defined (BRSHW_CLOCK_GROUP_A) || defined (BRSHW_CLOCK_GROUP_A1)
  /** CPU clock selection **/
  /* Set CPU clock divider to 1 */
  PROT_WRITE1(CKSC_CPUCLKD_CTL, 0x01);
  while(CKSC_CPUCLKD_ACT!=0x01);

  /* PLL -> CPU clock */
  PROT_WRITE1(CKSC_CPUCLKS_CTL, 0x03);
  while(CKSC_CPUCLKS_ACT!=0x03);

  /** CAN clock selection  **/
  /* Clock selection evaluated for F1L only*/
#   if defined (VGEN_ENABLE_CAN_DRV)
#    if defined (BRSHW_CLOCK_GROUP_A1)
  /* PLLFIXCLK /30 -> RSCANPCLK */
  PROT_WRITE3(CKSC_IRSCAND_CTL, 0x01);
  while(CKSC_IRSCAND_ACT!=0x01);

  /* Activate RSCANPCLK clock */
  PROT_WRITE3(CKSC_IPCRSCANS_CTL, 0x01);
  while(CKSC_IPCRSCANS_ACT!=0x01);

  /* MainOsc -> RSCANXIN */
  PROT_WRITE3(CKSC_IRSCANXINS_CTL, 0x01);
  while(CKSC_IRSCANXINS_ACT!=0x01);
#    else
  /* Set CAN oscillator clock divider to 1 */
  PROT_WRITE1(CKSC_ICANOSCD_CTL, 0x01);
  while(CKSC_ICANOSCD_ACT!=0x01);

  /* F1L: CPU clock    -> CAN clock*/
  /* F1H: CPU clock /2 -> CAN clock*/
  /* F1M: CPU clock /2 -> CAN clock*/
  PROT_WRITE1(CKSC_ICANS_CTL, 0x03);
  while(CKSC_ICANS_ACT!=0x03);
#    endif
#   endif /*VGEN_ENABLE_CAN_DRV*/

  /** LIN clock selection  **/
#   if defined (VGEN_ENABLE_LIN_DRV)
#    if defined (BRSHW_CLOCK_GROUP_A1)
  /* PLLFIXCLK /10 -> RLIN */
  PROT_WRITE3(CKSC_IRLINS_CTL, 0x01);
  while( CKSC_IRLINS_ACT!=0x01);
#    else
  /* Set LIN clock divider to 1 */
  PROT_WRITE1(CKSC_ILIND_CTL, 0x01);
  while(CKSC_ILIND_ACT!=0x01);

  /* CPU clock /2 -> LIN clock*/
  PROT_WRITE1(CKSC_ILINS_CTL, 0x01);
  while(CKSC_ILINS_ACT!=0x01);
#    endif
#   endif /*VGEN_ENABLE_LIN_DRV*/

  /** ETH clock selection  **/
#   if defined (VGEN_ENABLE_DRVETH__BASEASR)
#     if defined (BRSHW_CLOCK_GROUP_A1)
   /* Manual:
     Before activating C_ISO_XCCLK by XCCLKSSTP = 1,
     the XC0 cross-connect software reset must be released (MRSTC.XC0RES = 1)
     and
     the Ethernet AVB MAC (ETNB0) software reset must be released (MRSTC.ETNB0RES = 1)
     and
     the Ethernet AVB MAC (ETNB0) PBUS clock ETNBPCLK must be activated by CKSC_IPCETNBS_CTL.IPCETNBSSTP = 1. */
  PROT_WRITE4(MRSTC, 0x4); /* Release ETNB0 reset */

  /* Activate ETNBPCLK clock */
  PROT_WRITE3(CKSC_IPCETNBS_CTL, 0x01);
  while(CKSC_IPCETNBS_ACT!=0x01);

  PROT_WRITE4(MRSTC, 0x2004); /* Release XC0 reset */
  /* Activate C_ISO_XCCLK clock */
  PROT_WRITE3(CKSC_IXCCLKS_CTL, 0x01);
  while(CKSC_IXCCLKS_ACT  !=0x01);

  /* Activate ETNBXCCLK clock */
  PROT_WRITE3(CKSC_IXCETNBS_CTL, 0x01);
  while(CKSC_IXCETNBS_ACT !=0x01);
#    endif /*BRSHW_CLOCK_GROUP_A1*/
#   endif /*VGEN_ENABLE_DRVETH__BASEASR*/
#  endif /*BRSHW_CLOCK_GROUP_A*/
# endif /*BRSHW_PLL_GROUP_A*/

# if defined (BRSHW_PLL_GROUP_B)
  PROT_WRITE1(CKSC0CTL, 0x02);  /* MainOSC is Selected as the PLL input clock --> MainOSC is Selected for External clock out (EXTCLK0O) */
  while(CKSC0STAT!=0x03);

  /* PLL -> CPU clock */
  PROT_WRITE1(CKSC0DIV, 0x03);
  while(CLKD0STAT!=0x03);
# endif /*BRSHW_PLL_GROUP_B*/

# if defined (BRSHW_PLL_GROUP_B1)
  /* Clock Select for EXTCLK0o */
  /* 0x03 = Main OSC           */
  /* 0x04 = CLK_LSB            */
  /* 0x05 = CLK_CPU            */
  /* 0x06 = CLK_IOSC           */
  CKSC2CTL = 0x03;  /* MainOSC is Selected as the PLL input clock --> MainOSC is Selected for  External clock out (EXTCLK0O) */
  while(CKSC2STAT!=0x03);

  /* Division for EXTCLK0o */
  /* 0 = externatl clock stopped */
  /* 1 = divider 1               */
  /* 2 = divider 2               */
  /* .                           */
  /* .                           */
  /* 1023 = divider 1023         */ 

  /* PLL -> CPU clock --> DIV 3 for EXTCLK0o (EXTCLK0o have to be less than 20MHz )*/
  /* Check BrsHwPortInitPowerOn */
  CLKD2DIV = 0x04;
  while(CLKD2STAT!=0x03);
/*# error "check the CLK_LSB Clock at EXTCLK0o if its possible" */
# endif /*BRSHW_PLL_GROUP_B1*/

# if defined (BRSHW_PLL_GROUP_C)
  /*PLL0 divider 0A*/
  while(PLL0CLKS!=0x07);        /* PLL0 stable and operating */

  PROT_WRITE1(CKSC0CTL, 0x23);  /* Selects the PLL0 clock. */

#  if (BRSHW_CPU_MAX_FREQUENCY==320)
  /*Wait at least 140 cycles, until the clock gets stable*/
  BrsHwTime100NOP();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
#  elif (BRSHW_CPU_MAX_FREQUENCY==240)
  /*Wait at least 105 cycles, until the clock gets stable*/
  BrsHwTime100NOP();
  BRSHWNOP10();
#  elif (BRSHW_CPU_MAX_FREQUENCY==160)
  /*Wait at least 70 cycles, until the clock gets stable*/
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
#  else
  #error "this specific maximun frequencies is not yet support"
#  endif

  while(CKSC0ACT!=0x23);        /* PLL0 clock is selected (PLL0: CLK_CPU, CLK_HSB, CLK_LSB)*/

  /* Change of Divider 0A */
# if (BRS_TIMEBASE_CLOCK == BRSHW_CPU_MAX_FREQUENCY/4)
  PROT_WRITE1(CLKD0DIV, 0x04);  /* This register specifies a frequency division ratio of divider 0A (1/4) */
# elif (BRS_TIMEBASE_CLOCK == BRSHW_CPU_MAX_FREQUENCY/2)
  PROT_WRITE1(CLKD0DIV, 0x02);  /* This register specifies a frequency division ratio of divider 0A (1/2) */
# elif (BRS_TIMEBASE_CLOCK == BRSHW_CPU_MAX_FREQUENCY)
  PROT_WRITE1(CLKD0DIV, 0x01);  /* This register specifies a frequency division ratio of divider 0A (1/1) */
# else
  #error "Other Cpu-Frequency as PLL0 with division 1/1, 1/2, 1/4 are not possible for this derivative"
# endif

  PROT_WRITE1(CKSC1CTL, 0x24);  /* Selects 1/1 clock of PLL1 */

#  if (BRSHW_CPU_MAX_FREQUENCY==320)
  /*Wait at least 140 cycles, until the clock gets stable*/
  BrsHwTime100NOP();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
#  elif (BRSHW_CPU_MAX_FREQUENCY==240)
  /*Wait at least 105 cycles, until the clock gets stable*/
  BrsHwTime100NOP();
  BRSHWNOP10();
#  elif (BRSHW_CPU_MAX_FREQUENCY==160)
  /*Wait at least 70 cycles, until the clock gets stable*/
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
#  else
  #error "this specific maximun frequencies is not yet support"
#  endif

  while(CLKD0STAT!=0x1);  /* Divider 0A is running at the division ratio specified in CLKD0DIV */

  while(CKSC1ACT!=0x24);  /* PLL1/1 is selected (PLL1: CLKC_HSB, CLKC_LSB) */

# endif /*BRSHW_PLL_GROUP_C*/

# if defined (BRSHW_PLL_GROUP_D)
#  if !( (BRS_OSC_CLK==16) || (BRS_OSC_CLK==20) || (BRS_OSC_CLK==24))
  #error "The selected clock frequency of main oscillator is not supported (supported: 16, 20 and 24 MHz)."
#  endif
  /* reading the base_address register OPBT1 from chip */
  /* reading of this register is not possible with v1 version of this chip */
  uint32 OptionByte1 = OPBT1;
  /* Bitmask PLL0FREQ  */
  uint32 PLL0FREQ = OptionByte1 & 0xC0000000;
  /* Bitmask PLL0NDIV */
  uint32 PLL0NDIV = OptionByte1 & 0x000007F8;
  /* Bitmask PLL0MDIV */
  uint32 PLL0MDIV = OptionByte1 & 0x00003800;
  /* CLKOUT = ((BRS_OSC_CLK * PLL0NDIV) / PLL0MDIV) */
  uint32 CLKOUT;
  /* estimated value for CLKOUT, depending on CPU_CLK */
  uint32 estimatedCLKOUT;

  /* Bit shifting */
  PLL0FREQ =  PLL0FREQ >> 30;
  PLL0NDIV = (PLL0NDIV >> 3)  + 0x1;
  PLL0MDIV = (PLL0MDIV >> 11) + 0x1;

#  if (BRS_TIMEBASE_CLOCK == 240)
  estimatedCLKOUT = 480;
  if (PLL0FREQ != 0x2)
#  elif (BRS_TIMEBASE_CLOCK == 160)
  estimatedCLKOUT = 320;
  if (PLL0FREQ != 0x1)
#  elif (BRS_TIMEBASE_CLOCK == 120)
  estimatedCLKOUT = 480;
  if (PLL0FREQ != 0x0)
#  else
  #error "The selected CPU frequency is not yet supported"
#  endif
  {
    while(1)
    {
      /* OPBT1 (Optionbyte1) of your chip does not fit to your makefile.config settings. Please check and/or reprogram Optionbyte1. */
    }
  }

#  if (BRS_OSC_CLK == 16)
  CLKOUT = ((BRS_OSC_CLK * PLL0NDIV) / PLL0MDIV);

#  elif (BRS_OSC_CLK == 20)
  CLKOUT = ((BRS_OSC_CLK * PLL0NDIV) / PLL0MDIV);
#  elif (BRS_OSC_CLK == 24)
  CLKOUT = ((BRS_OSC_CLK * PLL0NDIV) / PLL0MDIV);
#  else
  #error "The selected clock frequency of main oscillator is not yet supported"
#  endif
  if(CLKOUT != estimatedCLKOUT)
  {
    while(1)
    {
      /* OPBT1 (Optionbyte1) of your chip does not fit to your makefile.config settings. Please check and/or reprogram Optionbyte1. */
    }
  }

  CKSC0C = 0x01;       /* Configure PLL as source clock for system and peripheral clock */
  while(CKSC0S!=0x01); /* PLL clock is selected */

  /* Configuration of System Clock Divider */
  CLKD0DIV=BRSHW_CLKD0DIV; /* CLK_CPU, CLK_HSB (STM Timer), CLK_LSB */
  while(CLKD0STAT!=0x03);  /* Clock divider 0 is running at the division ratio specified in CLKD0DIV (SYNC and ACTIVE) */

  /* Configuration of Peripheral Clock Divider */
  CLKD1DIV=BRSHW_CLKD1DIV; /* CLKP_C, CLKP_H1, CLKP_H2 (MCAN), CLKP_L (LIN) */
  while(CLKD1STAT!=0x03);  /* Clock divider 0 is running at the division ratio specified in CLKD1DIV (SYNC and ACTIVE) */
# endif /*BRSHW_PLL_GROUP_D*/

#endif /*!VGEN_ENABLE_DRVMCU*/
}

#if !defined (VGEN_ENABLE_DRVPORT)
/*******************************************************************************
  Port Pin initialization helper functions for usage of BrsHw_Ports.h
********************************************************************************/

/*****************************************************************************/
/**
 * @brief      This function sets port alternative mode registers.
 * @pre        Port pin configuartions available within BrsHw_Ports.h and
 *             no DrvPort used for port pin initialization.
 * @param[in]  p - brsHw_Port_PortType, to be initialized.
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwInitPortInput() and
 *             BrsHwInitPortOutput() locally.
 */
/*****************************************************************************/
void BrsHwInitPortAlternative(brsHw_Port_PortType p)
{
# if defined (BRSHW_PORT_GROUP_A)
  /* workaround for disabling the protected open drain on P0_0 (at least for some F1x derivatives) */
  if ((p.portGroup == BRSHW_PORT_PORTGROUP_0) && (p.portNumber == BRSHW_PORT_PORTNUMBER_0))
  {
    /* procedure to write to protected register */
    PPCMD(p.portGroup) = 0xA5;
    /* procedure: write, write inverse, write */
    BRSHWNOP10();
    PODC(p.portGroup) &= ~(1 << p.portNumber);
    BRSHWNOP10();
    PODC(p.portGroup) ^= ~(1 << p.portNumber);
    BRSHWNOP10();
    PODC(p.portGroup) &= ~(1 << p.portNumber);
    if (PPROTS(p.portGroup) == 1)
      while(1); /* An error occured during access on protected register. Pleasee check the pin configuration */  /* write to protected register */
  }
# endif /*BRSHW_PORT_GROUP_A*/

  if (p.portAlternative == BRSHW_PORT_ALT_0)
  {
    PMC(p.portGroup) &= ~(1 << p.portNumber); /* Enable port mode function */
  }
  else
  {
    /* Disables the input buffer */
    PIBC(p.portGroup) &=  ~(1 << p.portNumber);
    /* clear port alternative bits */
    PFCAE(p.portGroup) &= ~(1 << p.portNumber);
    PFCE(p.portGroup) &= ~(1 << p.portNumber);
    PFC(p.portGroup) &= ~(1 << p.portNumber);
    /* portAlternative value can be translated to a (PFCAE, PFCE, PFC) binary
       composition by substraction with 1:
            PFCAE | PFCE | PFC
    ALT_1 ->  0       0     0  ; 000b = 1-1
    ALT_2 ->  0       0     1  ; 001b = 2-1
    ALT_3 ->  0       1     0  ; 010b = 3-1
    ALT_4 ->  0       1     1  ; 011b = 4-1
    ALT_5 ->  1       0     0  ; 100b = 5-1
    ALT_6 ->  1       0     1  ; 101b = 6-1
    ALT_7 ->  1       1     0  ; 110b = 7-1	*/

    /* set PFCAE - substract by 1 and look at alternative BIT2 */
    if (((p.portAlternative - 1) & 0x4) == 0x4)
    {
      PFCAE(p.portGroup) |= (1 << p.portNumber);
    }
    /* set PFCE  - substract by 1 and look at alternative BIT1 */
    if (((p.portAlternative - 1) & 0x2) == 0x2)
    {
      PFCE(p.portGroup) |= (1 << p.portNumber);
    }
    /* set PFC   - substract by 1 and look at alternative BIT0 */
    if (((p.portAlternative - 1) & 0x1) == 0x1)
    {
      PFC(p.portGroup) |= (1 << p.portNumber);
    }
    PMC(p.portGroup) |= (1 << p.portNumber); /* Enable alternative port function */
  }
}

/*****************************************************************************/
/**
 * @brief      This function configures a port pin as input pin.
 * @pre        Port pin configuartions available within BrsHw_Ports.h and
 *             no DrvPort used for port pin initialization.
 * @param[in]  p - brsHw_Port_PortType, to be initialized.
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn() and
 *             BrsHwEvaBoardInitPowerOn() locally.
 */
/*****************************************************************************/
void BrsHwInitPortInput(brsHw_Port_PortType p)
{
  PM(p.portGroup)    |=  (1 << p.portNumber); /* Set Pin as input */
  BrsHwInitPortAlternative(p);
  PIBC(p.portGroup)  |=  (1 << p.portNumber); /* Enables the input buffer */
}

/*****************************************************************************/
/**
 * @brief      This function configures a port pin as output pin.
 * @pre        Port pin configuartions available within BrsHw_Ports.h and
 *             no DrvPort used for port pin initialization.
 * @param[in]  p - brsHw_Port_PortType, to be initialized.
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn() and
 *             BrsHwEvaBoardInitPowerOn() locally.
 */
/*****************************************************************************/
void BrsHwInitPortOutput(brsHw_Port_PortType p)
{
  PM(p.portGroup) &= ~(1 << p.portNumber); /* Clear pin as output */
  BrsHwInitPortAlternative(p);
}

/*****************************************************************************/
/**
 * @brief      This function configures the port pin configuration registers
 *             (pull-up, drive strength, open drain, protection)
 * @pre        Port pin configuartions available within BrsHw_Ports.h and
 *             no DrvPort used for port pin initialization.
 * @param[in]  p - brsHw_Port_PortType, to be initialized,
 *             n - brsHw_Port_ConfType, for port pin configuration
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn() and
 *             BrsHwEvaBoardInitPowerOn() locally.
 */
/*****************************************************************************/
void BrsHwInitPortConfig(brsHw_Port_PortType p, brsHw_Port_ConfType n)
{
  if (n.PortPullUp == PORT_PULL_UP_ENABLED)
  {
    PU(p.portGroup) |= (1 << p.portNumber);
  }
  else
  {
    PU(p.portGroup) &= ~(1 << p.portNumber);
  }

  if (n.PortIPControl == PORT_IP_CONTROL_ENABLED)
  {
    PIPC(p.portGroup)  |= (1 << p.portNumber);
  }
  else
  {
    PIPC(p.portGroup)  &= ~(1 << p.portNumber);
  }

  if (n.PortDriveStrength == PORT_DRIVE_STRENGTH_CONTROL_ENABLED)
  {
    if (n.PortProtectionCMD == PORT_PROTECTION_COMMAND_ENABLED)
    {
      PPCMD(p.portGroup) = 0xA5;
      BRSHWNOP10();
      PDSC(p.portGroup) |= (1 << p.portNumber);
      BRSHWNOP10();
      PDSC(p.portGroup) ^= ~(1 << p.portNumber);
      BRSHWNOP10();
      PDSC(p.portGroup) |= (1 << p.portNumber);
      if (PPROTS(p.portGroup) == 1)
        while(1); /* An error occured during access on protected register. Pleasee check the pin configuration */
    }
    else
    {
      PDSC(p.portGroup) |= (1 << p.portNumber);
    }
  }
  else
  {
    if (n.PortProtectionCMD == PORT_PROTECTION_COMMAND_ENABLED)
    {
      PPCMD(p.portGroup) = 0xA5;
      BRSHWNOP10();
      PDSC(p.portGroup) &= ~(1 << p.portNumber);
      BRSHWNOP10();
      PDSC(p.portGroup) ^= ~(1 << p.portNumber);
      BRSHWNOP10();
      PDSC(p.portGroup) &= ~(1 << p.portNumber);
      if (PPROTS(p.portGroup) == 1)
        while(1); /* An error occured during access on protected register. Pleasee check the pin configuration */
    }
    else
    {
      PDSC(p.portGroup) &= ~(1 << p.portNumber);
    }
  }
    
  if (n.PortBidirectionalMode == PORT_BIDIRECTIONAL_MODE_ENABLED)
  {
    PBDC(p.portGroup) |= (1 << p.portNumber);
  }
  else
  {
    PBDC(p.portGroup) &= ~(1 << p.portNumber);
  }
}

/*****************************************************************************/
/**
 * @brief      This function sets the output level of a port pin.
 * @pre        Port pin configuartions available within BrsHw_Ports.h,
 *             no DrvPort used for port pin initialization and
 *             transferred port pin has to be initialized as output pin with
 *             GPIO functionality.
 * @param[in]  p     - brsHw_Port_PortType, to be set,
 *             Level - level, port pin has to be set to (0 or 1).
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwPortInitPowerOn(),
 *             BrsHwEvaBoardInitPowerOn(), BrsHw_WriteDio_TCM_SDA_OUT() and
 *             BrsHw_WriteDio_TCM_CLK_OUT() locally.
 */
/*****************************************************************************/
void BrsHwPort_SetLevel(brsHw_Port_PortType p, uint8 Level)
{
  if (Level != 0x00)
  {
    P(p.portGroup) |= (1 << p.portNumber); /* set port-pin-level to high */
  }
  else
  {
    P(p.portGroup) &= ~(1 << p.portNumber); /* set port-pin-level to low */
  }
}

/*****************************************************************************/
/**
 * @brief      This function reads the input level of a port pin.
 * @pre        Port pin configuartions available within BrsHw_Ports.h,
 *             no DrvPort used for port pin initialization and
 *             transferred port pin has to be initialized as input pin with
 *             GPIO functionality.
 * @param[in]  p - brsHw_Port_PortType, to be read.
 * @param[out] -
 * @return     Level, read from port pin (0 or 1).
 * @context    Function is called from BrsHw_WriteDio_TCM_SDA_OUT() and
 *             BrsHw_WriteDio_TCM_CLK_OUT() locally.
 */
/*****************************************************************************/
uint8 BrsHwPort_GetLevel(brsHw_Port_PortType p)
{
  uint32 temp;
  uint8 retvalue;
  temp = PPR(p.portGroup);
  temp &= (1 << p.portNumber);

  if(temp != 0x00000000)
  {
    retvalue = (uint8)1;
  }
  else
  {
    retvalue = (uint8)0;
  }

  return retvalue;
}

# if defined (BRS_ENABLE_TCM_SUPPORT)
/*******************************************************************************
  TCM Write Functions
********************************************************************************/
void BrsHw_WriteDio_TCM_SDA_OUT(uint8 Level)
{
  BrsHwPort_SetLevel(BRSHW_PORT_TCM_SDA_OUT, Level);
}

void BrsHw_WriteDio_TCM_CLK_OUT(uint8 Level)
{
  BrsHwPort_SetLevel(BRSHW_PORT_TCM_CLK_OUT, Level);
}

/*******************************************************************************
  TCM Read Functions
********************************************************************************/
uint8 BrsHw_ReadDio_TCM_SDA_IN(void)
{
  return BrsHwPort_GetLevel(BRSHW_PORT_TCM_SDA_IN);
}

uint8 BrsHw_ReadDio_TCM_CLK_IN(void)
{
  return BrsHwPort_GetLevel(BRSHW_PORT_TCM_CLK_IN);
}
# endif /*BRS_ENABLE_TCM_SUPPORT*/
#endif /*!VGEN_ENABLE_DRVPORT*/

/*****************************************************************************/
/**
 * @brief      This function has to be used to initialize the used ports.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain or EcuM at power on initialization
 */
/*****************************************************************************/
void BrsHwPortInitPowerOn(void)
{
#if !defined (VGEN_ENABLE_DRVPORT)

# if defined (BRS_ENABLE_TCM_SUPPORT)
  BrsHwInitPortOutput(BRSHW_PORT_TCM_CLK_OUT);
  BrsHwInitPortOutput(BRSHW_PORT_TCM_SDA_OUT);
  BrsHwInitPortInput(BRSHW_PORT_TCM_SDA_IN);
  BrsHwInitPortInput(BRSHW_PORT_TCM_CLK_IN);
#  if defined (BRSHW_USE_TCM_EXT_IRQ)
  BrsHwInitPortInput(BRSHW_PORT_TCM_INTA_IN);
  BrsHwInitPortInput(BRSHW_PORT_TCM_INTB_IN);
#  endif
# endif /*BRS_ENABLE_TCM_SUPPORT*/

# if defined (BRSHW_PORT_GROUP_B2)
  /* Flexray && LIN - incompatible configuration check */
#  if defined (VGEN_ENABLE_DRVFR__BASEASR) && defined (VGEN_ENABLE_LIN_DRV)
#   if ((defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_2) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN32_0) || defined (SIO_ENABLE_RLIN3_2)) && defined (VGEN_ENABLE_DRVFR__BASEASR))
#    if (FR_CHANNEL_A_USED == STD_ON)
  #error "No possibility to configure LIN on Port 7.5 (RLIN32TX) and Flexray on Port 7.5 (FLX1TXDA) simultaneously"
#    endif /*FR_CHANNEL_A_USED*/
#   endif
#  endif

  /* Flexray && Ethernet - incompatible configuration check */
#  if defined (VGEN_ENABLE_DRVFR__BASEASR) && defined (VGEN_ENABLE_DRVETH__BASEASR)
  #error "No possibility to configure FlexRay Modul 2 and Ethernet Modul 2 simultaneously"
  #error "No possibility to configure FlexRay Modul 1 and Ethernet Modul 1 simultaneously"
#  endif
# endif /*BRSHW_PORT_GROUP_B2*/

/*******************************************************************************
  CAN driver
********************************************************************************/
# if defined (VGEN_ENABLE_CAN_DRV)
#  if defined (kCanPhysToLogChannelIndex_0)
  BrsHwInitPortOutput(BRSHW_PORT_CAN0_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN0_RX);
#   if defined (BRSHW_PORT_CAN0_TRCV_EN)
  BrsHwInitPortInput(BRSHW_PORT_CAN0_EN);
#   endif

#   if defined (BRSHW_ENABLE_CAN_WAKEUP_FILTER)
#    if defined (BRSHW_PORT_GROUP_A)
  FCLA0CTL(0) = 0x02; /* configure filter control register for external wakeup / INTP0 / falling edge */
#    endif /*BRSHW_PORT_GROUP_A*/
#    if defined (BRSHW_PORT_GROUP_B)
  FCLA1CTL(5) = 0x02; /* configure filter control register for external wakeup / INTP5 / falling edge */
  DNFAnEN(2) |= (1 << 1); /* enable filter control register for external wakeup / INTP5 */
#    endif /*BRSHW_PORT_GROUP_B*/
#    if defined (BRSHW_PORT_GROUP_B1)
  EXINTCTL |= (1 << 5); /* configure External Interrupt control register for external wakeup */
  /* 5 correspond to INTP2 with falling edge detection*/
  /* INTP2 / Port 0_5 / falling edge */
  BrsHwInitPortInput(BRSHW_PORT_CAN0_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_B1*/
#    if defined (BRSHW_PORT_GROUP_B2)
  FCLA0CTL2 |= (1 << 1); /*INTP1, falling edge detection*/
  /* INTP1 / Port 4.12 / falling edge */
  BrsHwInitPortInput(BRSHW_PORT_CAN0_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_B2*/
#    if defined (BRSHW_PORT_GROUP_C)
  FCLA0CTL(7) = 0x02; /* configure filter control register for external wakeup / INTP6 / falling edge */
#    endif /*BRSHW_PORT_GROUP_C*/
#    if defined (BRSHW_PORT_GROUP_D)
  EXINTCTL |= (1 << 1); /* configure External Interrupt control register for external wakeup */
  /* IRQ0 / Port 2_0 */
  BrsHwInitPortInput(BRSHW_PORT_CAN0_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_D*/
#   endif /*BRSHW_ENABLE_CAN_WAKEUP_FILTER*/
#  endif /*kCanPhysToLogChannelIndex_0*/

#  if defined (kCanPhysToLogChannelIndex_1)
  BrsHwInitPortOutput(BRSHW_PORT_CAN1_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN1_RX);
#   if defined (BRSHW_PORT_CAN1_TRCV_EN)
  BrsHwInitPortInput(BRSHW_PORT_CAN1_EN);
#   endif

#   if defined (BRSHW_ENABLE_CAN_WAKEUP_FILTER)
#    if defined (BRSHW_PORT_GROUP_A)
  FCLA0CTL(1) = 0x02; /* configure filter control register for external wakeup / INTP1 / falling edge */
#    endif /*BRSHW_PORT_GROUP_A*/
#    if defined (BRSHW_PORT_GROUP_B)
  FCLA1CTL(6) = 0x02; /* configure filter control register for external wakeup / INTP6 / falling edge */
  DNFAnEN(2) |= (1 << 2); /* enable filter control register for external wakeup / INTP6 */
#    endif /*BRSHW_PORT_GROUP_B1*/
#    if defined (BRSHW_PORT_GROUP_B1)
  EXINTCTL |= (1 << 7); /* configure External Interrupt control register for external wakeup */
  /* 7 correspond to INTP3 with falling edge detection*/
  /* INTP3 / Port 0_6 / falling edge */
  BrsHwInitPortInput(BRSHW_PORT_CAN1_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_B1*/
#    if defined (BRSHW_PORT_GROUP_B2)
  FCLA0CTL3 |= (1 << 1); /*INTP2, falling edge detection*/
  /* INTP2 / Port 5.13 / falling edge */
  BrsHwInitPortInput(BRSHW_PORT_CAN1_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_B2*/
#    if defined (BRSHW_PORT_GROUP_C)
  FCLA1CTL(1) = 0x02; /* configure filter control register for external wakeup / INTP8 / falling edge */
#    endif /*BRSHW_PORT_GROUP_C*/
#    if defined (BRSHW_PORT_GROUP_D)
  EXINTCTL |= (1 << 3); /* configure External Interrupt control register for external wakeup */
  /* IRQ1 / Port 2_1 */
  BrsHwInitPortInput(BRSHW_PORT_CAN1_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_D*/
#   endif /*BRSHW_ENABLE_CAN_WAKEUP_FILTER*/
#  endif /*kCanPhysToLogChannelIndex_1*/

#  if defined (kCanPhysToLogChannelIndex_2)
  BrsHwInitPortOutput(BRSHW_PORT_CAN2_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN2_RX);
#   if defined (BRSHW_PORT_CAN2_TRCV_EN)
  BrsHwInitPortInput(BRSHW_PORT_CAN2_EN);
#   endif

#   if defined (BRSHW_ENABLE_CAN_WAKEUP_FILTER)
#    if defined (BRSHW_PORT_GROUP_A)
  FCLA0CTL(2) = 0x02; /* configure filter control register for external wakeup / INTP2 / falling edge */
#    endif /*BRSHW_PORT_GROUP_A*/
#    if defined (BRSHW_PORT_GROUP_B1)
  EXINTCTL |= (1 << 9); /* configure External Interrupt control register for external wakeup */
  /* 9 correspond to INTP4 with falling edge detection*/
  /* INTP4 / Port 0_7 / falling edge */
  BrsHwInitPortInput(BRSHW_PORT_CAN2_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_B1*/
#    if defined (BRSHW_PORT_GROUP_B2)
  FCLA0CTL4 |= (1 << 1); /*INTP3, falling edge detection*/
  /* INTP3 / Port 0.5 / falling edge */
  BrsHwInitPortInput(BRSHW_PORT_CAN2_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_B2*/
#    if defined (BRSHW_PORT_GROUP_C)
  FCLA1CTL(3) = 0x02; /* configure filter control register for external wakeup / INTP3 / falling edge */
#    endif /*BRSHW_PORT_GROUP_C*/
#    if defined (BRSHW_PORT_GROUP_D)
  EXINTCTL |= (1 << 5); /* configure External Interrupt control register for external wakeup */
  /* IRQ2 / Port 2_2 */
  BrsHwInitPortInput(BRSHW_PORT_CAN2_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_D*/
#   endif /*BRSHW_ENABLE_CAN_WAKEUP_FILTER*/
#  endif /*kCanPhysToLogChannelIndex_2*/

#  if defined (kCanPhysToLogChannelIndex_3)
  BrsHwInitPortOutput(BRSHW_PORT_CAN3_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN3_RX);
#   if defined (BRSHW_PORT_CAN3_TRCV_EN)
  BrsHwInitPortInput(BRSHW_PORT_CAN3_EN);
#   endif

#   if defined (BRSHW_ENABLE_CAN_WAKEUP_FILTER)
#    if defined (BRSHW_PORT_GROUP_A)
  FCLA0CTL(3) = 0x02; /* configure filter control register for external wakeup / INTP3 / falling edge */
#    endif /*BRSHW_PORT_GROUP_A*/
#    if defined (BRSHW_PORT_GROUP_B1)
  EXINTCTL |= (1 << 11); /* configure External Interrupt control register for external wakeup */
  /* 11 correspond to INTP5 with falling edge detection*/
  /* INTP5 / Port 0_8 / falling edge */
  BrsHwInitPortInput(BRSHW_PORT_CAN3_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_B1*/
#    if defined (BRSHW_PORT_GROUP_B2)
  FCLA0CTL5 |= (1 << 1); /*INTP4, falling edge detection*/
  /* INTP4 / Port 1.1 / falling edge */
  BrsHwInitPortInput(BRSHW_PORT_CAN3_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_B2*/
#    if defined (BRSHW_PORT_GROUP_D)
  EXINTCTL |= (1 << 7);  /* configure External Interrupt control register for external wakeup */
  /* IRQ3 / Port 2_3 */
  BrsHwInitPortInput(BRSHW_PORT_CAN3_WAKEUP);
#    endif /*BRSHW_PORT_GROUP_D*/
#   endif /*BRSHW_ENABLE_CAN_WAKEUP_FILTER*/
#  endif /*kCanPhysToLogChannelIndex_3*/

#  if defined (kCanPhysToLogChannelIndex_4)
  BrsHwInitPortOutput(BRSHW_PORT_CAN4_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN4_RX);
#   if defined (BRSHW_PORT_CAN4_TRCV_EN)
  BrsHwInitPortInput(BRSHW_PORT_CAN4_EN);
#   endif

#   if defined (BRSHW_ENABLE_CAN_WAKEUP_FILTER)
#    if defined (BRSHW_PORT_GROUP_A)
  FCLA0CTL(4) = 0x02; /* configure filter control register for external wakeup / INTP4 / falling edge */
#    endif /*BRSHW_PORT_GROUP_A*/
#   endif /*BRSHW_ENABLE_CAN_WAKEUP_FILTER*/
#  endif /*kCanPhysToLogChannelIndex_4*/

#  if defined (kCanPhysToLogChannelIndex_5)
  BrsHwInitPortOutput(BRSHW_PORT_CAN5_TX);
  BrsHwInitPortInput(BRSHW_PORT_CAN5_RX);
#   if defined (BRSHW_PORT_CAN5_TRCV_EN)
  BrsHwInitPortInput(BRSHW_PORT_CAN5_EN);
#   endif

#   if defined (BRSHW_ENABLE_CAN_WAKEUP_FILTER)
#    if defined (BRSHW_PORT_GROUP_A)
  FCLA0CTL(5) = 0x02; /* configure filter control register for external wakeup / INTP5 / falling edge */
#    endif /*BRSHW_PORT_GROUP_A*/
#   endif /*BRSHW_ENABLE_CAN_WAKEUP_FILTER*/
#  endif /*kCanPhysToLogChannelIndex_5*/
# endif /*VGEN_ENABLE_CAN_DRV*/

/*******************************************************************************
  LIN driver
********************************************************************************/
# if defined (VGEN_ENABLE_LIN_DRV)
#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_0) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN240_0) || defined (SIO_ENABLE_RLIN2_0)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_0_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN2_0_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_0_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_0_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_1) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN240_1) || defined (SIO_ENABLE_RLIN2_1)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_1_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN2_1_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_1_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_1_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_2) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN240_2) || defined (SIO_ENABLE_RLIN2_2)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_2_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN2_2_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_2_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_2_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_3) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN240_3) || defined (SIO_ENABLE_RLIN2_3)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_3_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN2_3_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_3_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_3_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_4) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN241_0) || defined (SIO_ENABLE_RLIN2_4)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_4_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN2_4_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_4_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_4_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_5) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN241_1) || defined (SIO_ENABLE_RLIN2_5)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_5_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN2_5_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_5_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_5_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_6) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN241_2) || defined (SIO_ENABLE_RLIN2_6)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_6_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN2_6_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_6_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_6_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_7) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN241_3) || defined (SIO_ENABLE_RLIN2_7)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_7_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN2_7_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_7_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_7_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_8) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN210_0) || defined (SIO_ENABLE_RLIN2_8)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_8_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN2_8_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_8_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_8_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_9) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN210_0) || defined (SIO_ENABLE_RLIN2_9)
  BrsHwInitPortOutput(BRSHW_PORT_LIN2_9_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN2_9_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_9_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN2_9_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_10) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN242_2) || defined (SIO_ENABLE_RLIN2_10)
  #error "Port config for your LIN channel not yet implemented"
#  endif
#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_11) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN242_3) || defined (SIO_ENABLE_RLIN2_11)
  #error "Port config for your LIN channel not yet implemented"
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_0) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN30_0) || defined (SIO_ENABLE_RLIN3_0)
  BrsHwInitPortOutput(BRSHW_PORT_LIN3_0_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN3_0_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_0_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_0_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_1) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN31_0) || defined (SIO_ENABLE_RLIN3_1)
  BrsHwInitPortOutput(BRSHW_PORT_LIN3_1_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN3_1_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_1_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_1_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_2) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN32_0) || defined (SIO_ENABLE_RLIN3_2)
  BrsHwInitPortOutput(BRSHW_PORT_LIN3_2_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN3_2_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_2_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_2_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_3) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN33_0) || defined (SIO_ENABLE_RLIN3_3)
  BrsHwInitPortOutput(BRSHW_PORT_LIN3_3_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN3_3_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_3_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_3_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_4) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN34_0) || defined (SIO_ENABLE_RLIN3_4)
  BrsHwInitPortOutput(BRSHW_PORT_LIN3_4_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN3_4_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_4_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_4_RX, BRSHW_PORT_CONF_LIN);
#  endif

#  if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_5) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN35_0) || defined (SIO_ENABLE_RLIN3_5)
  BrsHwInitPortOutput(BRSHW_PORT_LIN3_5_TX);
  BrsHwInitPortInput(BRSHW_PORT_LIN3_5_RX);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_5_TX, BRSHW_PORT_CONF_LIN);
  BrsHwInitPortConfig(BRSHW_PORT_LIN3_5_RX, BRSHW_PORT_CONF_LIN);
#  endif
# endif /*VGEN_ENABLE_LIN_DRV*/

/*******************************************************************************
  FLEXRAY driver
********************************************************************************/
# if defined(VGEN_ENABLE_DRVFR__BASEASR)
#  if (FR_CHANNEL_A_USED == STD_ON)
  BrsHwInitPortOutput(BRSHW_PORT_FLX0_A_TX);
  BrsHwInitPortOutput(BRSHW_PORT_FLX0_A_EN);
  BrsHwInitPortInput(BRSHW_PORT_FLX0_A_RX);
#  endif
#  if (FR_CHANNEL_B_USED == STD_ON)
  BrsHwInitPortOutput(BRSHW_PORT_FLX0_B_TX);
  BrsHwInitPortOutput(BRSHW_PORT_FLX0_B_EN);
  BrsHwInitPortInput(BRSHW_PORT_FLX0_B_RX);
#  endif
# endif /*VGEN_ENABLE_DRVFR__BASEASR*/

/*******************************************************************************
  ETHERNET driver
********************************************************************************/
# if defined (VGEN_ENABLE_DRVETH__BASEASR)
  /* Transmitter signals */
  BrsHwInitPortInput(BRSHW_PORT_ETH0TXCLK);
  BrsHwInitPortOutput(BRSHW_PORT_ETH0TXD0);
  BrsHwInitPortOutput(BRSHW_PORT_ETH0TXD1);
  BrsHwInitPortOutput(BRSHW_PORT_ETH0TXD2);
  BrsHwInitPortOutput(BRSHW_PORT_ETH0TXD3);
  BrsHwInitPortOutput(BRSHW_PORT_ETH0TXEN);
  BrsHwInitPortOutput(BRSHW_PORT_ETH0TXERR);
  BrsHwInitPortConfig(BRSHW_PORT_ETH0TXD0, BRSHW_PORT_CONF_ETH0TXD);
  BrsHwInitPortConfig(BRSHW_PORT_ETH0TXD1, BRSHW_PORT_CONF_ETH0TXD);
  BrsHwInitPortConfig(BRSHW_PORT_ETH0TXD2, BRSHW_PORT_CONF_ETH0TXD);
  BrsHwInitPortConfig(BRSHW_PORT_ETH0TXD3, BRSHW_PORT_CONF_ETH0TXD);
  BrsHwInitPortConfig(BRSHW_PORT_ETH0TXEN, BRSHW_PORT_CONF_ETH0TXEN);
  BrsHwInitPortConfig(BRSHW_PORT_ETH0TXERR, BRSHW_PORT_CONF_ETH0TXERR);
  /* Receiver signals */
  BrsHwInitPortInput(BRSHW_PORT_ETH0RXCLK);
  BrsHwInitPortInput(BRSHW_PORT_ETH0RXD0);
  BrsHwInitPortInput(BRSHW_PORT_ETH0RXD1);
  BrsHwInitPortInput(BRSHW_PORT_ETH0RXD2);
  BrsHwInitPortInput(BRSHW_PORT_ETH0RXD3);
  BrsHwInitPortInput(BRSHW_PORT_ETH0RXDV);
  BrsHwInitPortInput(BRSHW_PORT_ETH0RXERR);
  BrsHwInitPortInput(BRSHW_PORT_ETH0CRS);
  BrsHwInitPortInput(BRSHW_PORT_ETH0COL);
  /* Management signals */
  BrsHwInitPortInput(BRSHW_PORT_ETH0MDIO);
  BrsHwInitPortOutput(BRSHW_PORT_ETH0MDC);
  BrsHwInitPortConfig(BRSHW_PORT_ETH0MDIO, BRSHW_PORT_CONF_ETH0MDIO);
  BrsHwInitPortConfig(BRSHW_PORT_ETH0MDC, BRSHW_PORT_CONF_ETH0MDC);

#  if defined (BRSHW_PORT_ETH0_RESET)
  BrsHwInitPortOutput(BRSHW_PORT_ETH0RESET);
  /* wait for configuration of pin has been performed */
  BRSHWNOP10();
  /* Write a one to disable reset */
  BrsHwPort_SetLevel(BRSHW_PORT_ETH0RESET, (uint8)1);
#  endif

# endif /* VGEN_ENABLE_DRVETH__BASEASR */
#endif /*!VGEN_ENABLE_DRVPORT*/
}

/*****************************************************************************/
/**
 * @brief      This function has to be used to initialize misc features not
 *             covered by the three functions above.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain or EcuM at power on initialization
 */
/*****************************************************************************/
void BrsHwEvaBoardInitPowerOn(void)
{
#if defined (BRS_ENABLE_SUPPORT_LEDS)

# if !defined (VGEN_ENABLE_DRVPORT)
  BrsHwInitPortOutput(BRSHW_PORT_LED);

# else
  #error "Configure the valid PortPin for the LED within your DrvPort config and uncomment this error. Or disable BRS_ENABLE_SUPPORT_LEDS."
# endif /*!VGEN_ENABLE_DRVPORT*/

  /* Set one LED on EVB demo board to show the system is alive */
  BrsHwSetLed(BRSHW_LED_SYSTEM_OK, (uint8)1);
#endif /*BRS_ENABLE_SUPPORT_LEDS*/
}

/* BrsHwTimeBaseInitPowerOn() and BrsHwTimeBaseInterrupt() removed by Organi, because of ALM attributes of project */

/*****************************************************************************/
/**
 * @brief      Disable the global system interrupt and initialize the INT
 *             lock handler variables.
 * @pre        Must be the first function call in main@BrsMain
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain at power on initialization
 */
/*****************************************************************************/
void BrsHwDisableInterruptAtPowerOn(void)
{
  bBrsHwIntDiCounter = 0;
  ___asm(di);
}

/*****************************************************************************/
/**
 * @brief      Enable the global system interrupt the first time
 * @pre        Must be called after all initializations are done
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from main@BrsMain at power on initialization
 */
/*****************************************************************************/
void BrsHwEnableInterruptAtPowerOn(void)
{

  /* Configure used interrupts */
#if !defined (BRS_OS_USECASE_OSGEN7)
  BrsHwConfigureInterruptsAtPowerOn();
#else
  /* With OsGen7, OS-APIs have to be used for this */
  /*BrsHwConfigureInterruptsAtPowerOn();*/
#endif

  ___asm(ei);
}

#if !defined (BRS_OS_USECASE_OSGEN7)
/*****************************************************************************/
/**
 * @brief      This function has to be used to initialize the used interrupts.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsHwEnableInterruptAtPowerOn or EcuM-DriverInitThree
 */
/*****************************************************************************/
void BrsHwConfigureInterruptsAtPowerOn(void)
{
#if defined (VGEN_ENABLE_DRVFR__BASEASR)
  uint32 i;
#endif

  /* Interrupts are enabled by DrvCan by default */
#if defined (VGEN_ENABLE_CAN_DRV) && defined (C_INT_BY_APPL)

# if defined (BRSHW_INTERRUPT_TABLE_GROUP_G)
  /*Configure Interrupts for MCAN*/
#  if defined (kCanPhysToLogChannelIndex_0)
  BRSHW_IOS(uint16, INTMTTCANI0) = 0x42;  /* Interrupt0 for MTTCAN0,   TB=1, Prio=2 */
  BRSHW_IOS(uint16, INTMTTCANI1) = 0x42;  /* Interrupt1 for MTTCAN0,   TB=1, Prio=2 */
  BRSHW_IOS(uint16, INTMTTCANFE) = 0x42;  /* Filter event for MTTCAN0, TB=1, Prio=2 */
#   if defined (BRSHW_ENABLE_CAN_WAKEUP_ISR)
  BRSHW_IOS(uint16, ICPx_CAN0) = 0x42;  /* External interrupt INTP0; TB=1, Prio=2 */
#   endif
#  endif /*kCanPhysToLogChannelIndex_0*/

#  if defined (kCanPhysToLogChannelIndex_1)
  BRSHW_IOS(uint16, INTMCAN0I0) = 0x42;  /* Interrupt0 for MCAN0,   TB=1, Prio=2 */
  BRSHW_IOS(uint16, INTMCAN0I1) = 0x42;  /* Interrupt1 for MCAN0,   TB=1, Prio=2 */
  BRSHW_IOS(uint16, INTMCAN0FE) = 0x42;  /* Filter event for MCAN0, TB=1, Prio=2 */
#   if defined (BRSHW_ENABLE_CAN_WAKEUP_ISR)
  BRSHW_IOS(uint16, ICPx_CAN1) = 0x42;  /* External interrupt INTP1; TB=1, Prio=2 */
#   endif
#  endif /*kCanPhysToLogChannelIndex_1*/

#  if defined (kCanPhysToLogChannelIndex_2)
  BRSHW_IOS(uint16, INTMCAN1I0) = 0x42;  /* Interrupt0 for MCAN1,   TB=1, Prio=2 */
  BRSHW_IOS(uint16, INTMCAN1I1) = 0x42;  /* Interrupt1 for MCAN1,   TB=1, Prio=2 */
  BRSHW_IOS(uint16, INTMCAN1FE) = 0x42;  /* Filter event for MCAN1, TB=1, Prio=2 */
#   if defined (BRSHW_ENABLE_CAN_WAKEUP_ISR)
  BRSHW_IOS(uint16, ICPx_CAN2) = 0x42;  /* External interrupt INTP2; TB=1, Prio=2 */
#   endif
#  endif /*kCanPhysToLogChannelIndex_2*/

#  if defined (kCanPhysToLogChannelIndex_3)
  BRSHW_IOS(uint16, INTMCAN2I0) = 0x42;  /* Interrupt0 for MCAN1,   TB=1, Prio=2 */
  BRSHW_IOS(uint16, INTMCAN2I1) = 0x42;  /* Interrupt1 for MCAN1,   TB=1, Prio=2 */
  BRSHW_IOS(uint16, INTMCAN2FE) = 0x42;  /* Filter event for MCAN1, TB=1, Prio=2 */
#   if defined (BRSHW_ENABLE_CAN_WAKEUP_ISR)
  BRSHW_IOS(uint16, ICPx_CAN3) = 0x42;  /* External interrupt INTP3; TB=1, Prio=2 */
#   endif
#  endif /*kCanPhysToLogChannelIndex_3*/

# else /*BRSHW_INTERRUPT_TABLE_GROUP_G*/
#  if !defined (C_ENABLE_ERROR_POLLING) && defined (C_ENABLE_RX_BASICCAN_OBJECTS)
  BRSHW_IOS(uint16, ICRCANGERR0) = 0x42;   /* CAN global error interrupt; TB=1, Prio=2 (RSCAN0) */
#  endif
#  if (!defined (C_ENABLE_RX_BASICCAN_POLLING ) || defined (C_ENABLE_INDIVIDUAL_POLLING)) && defined (C_ENABLE_RX_BASICCAN_OBJECTS)
  BRSHW_IOS(uint16, ICRCANGRECC0) = 0x42;  /* CAN receive FIFO interrupt; TB=1, Prio=2 (RSCAN0) */
#  endif

#  if defined (kCanPhysToLogChannelIndex_0)
#   if !defined (C_ENABLE_ERROR_POLLING)
  BRSHW_IOS(uint16, ICRCAN0ERR) = 0x42;  /* CAN0 error interrupt; TB=1, Prio=2 */
#   endif
#   if !defined (C_ENABLE_TX_POLLING) || defined (C_ENABLE_INDIVIDUAL_POLLING)
  BRSHW_IOS(uint16, ICRCAN0TRX) = 0x42;  /* CAN0 transmit interrupt; TB=1, Prio=2 */
#   endif
  /* "CAN0 transmit/receive FIFO receive complete interrupt" not used by DrvCan */
#   if defined (BRSHW_ENABLE_CAN_WAKEUP_ISR)
  BRSHW_IOS(uint16, ICPx_CAN0) = 0x42;  /* External interrupt INTP0; TB=1, Prio=2 */
#   endif
#  endif /*kCanPhysToLogChannelIndex_0*/

#  if defined (kCanPhysToLogChannelIndex_1)
#   if !defined (C_ENABLE_ERROR_POLLING)
  BRSHW_IOS(uint16, ICRCAN1ERR) = 0x42;  /* CAN1 error interrupt; TB=1, Prio=2 */
#   endif
#   if !defined (C_ENABLE_TX_POLLING) || defined (C_ENABLE_INDIVIDUAL_POLLING)
  BRSHW_IOS(uint16, ICRCAN1TRX) = 0x42;  /* CAN1 transmit interrupt; TB=1, Prio=2 */
#   endif
  /* "CAN1 transmit/receive FIFO receive complete interrupt" not used by DrvCan */
#   if defined (BRSHW_ENABLE_CAN_WAKEUP_ISR)
  BRSHW_IOS(uint16, ICPx_CAN1) = 0x42;  /* External interrupt INTP1; TB=1, Prio=2 */
#   endif
#  endif /*kCanPhysToLogChannelIndex_1*/

#  if defined (kCanPhysToLogChannelIndex_2)
#   if !defined (C_ENABLE_ERROR_POLLING)
  BRSHW_IOS(uint16, ICRCAN2ERR) = 0x42;  /* CAN2 error interrupt; TB=1, Prio=2 */
#   endif
#   if !defined (C_ENABLE_TX_POLLING) || defined (C_ENABLE_INDIVIDUAL_POLLING)
  BRSHW_IOS(uint16, ICRCAN2TRX) = 0x42;  /* CAN2 transmit interrupt; TB=1, Prio=2 */
#   endif
  /* "CAN2 transmit/receive FIFO receive complete interrupt" not used by DrvCan */
#   if defined (BRSHW_ENABLE_CAN_WAKEUP_ISR)
  BRSHW_IOS(uint16, ICPx_CAN2) = 0x42;  /* External interrupt INTP2; TB=1, Prio=2 */
#   endif
#  endif /*kCanPhysToLogChannelIndex_2*/

#  if defined (kCanPhysToLogChannelIndex_3)
#   if !defined (C_ENABLE_ERROR_POLLING)
  BRSHW_IOS(uint16, ICRCAN3ERR) = 0x42;  /* CAN3 error interrupt; TB=1, Prio=2 */
#   endif
#   if !defined (C_ENABLE_TX_POLLING) || defined (C_ENABLE_INDIVIDUAL_POLLING)
  BRSHW_IOS(uint16, ICRCAN3TRX) = 0x42;  /* CAN3 transmit interrupt; TB=1, Prio=2 */
#   endif
  /* "CAN3 transmit/receive FIFO receive complete interrupt" not used by DrvCan */
#   if defined (BRSHW_ENABLE_CAN_WAKEUP_ISR)
  BRSHW_IOS(uint16, ICPx_CAN3) = 0x42;  /* External interrupt INTP3; TB=1, Prio=2 */
#   endif
#  endif /*kCanPhysToLogChannelIndex_3*/

#  if defined (kCanPhysToLogChannelIndex_4)
#   if !defined (C_ENABLE_ERROR_POLLING)
  BRSHW_IOS(uint16, ICRCAN4ERR) = 0x42;  /* CAN4 error interrupt; TB=1, Prio=2 */
#   endif
#   if !defined (C_ENABLE_TX_POLLING) || defined (C_ENABLE_INDIVIDUAL_POLLING)
  BRSHW_IOS(uint16, ICRCAN4TRX) = 0x42;  /* CAN4 transmit interrupt; TB=1, Prio=2 */
#   endif
  /* "CAN4 transmit/receive FIFO receive complete interrupt" not used by DrvCan */
#   if defined (BRSHW_ENABLE_CAN_WAKEUP_ISR)
  BRSHW_IOS(uint16, ICPx_CAN4) = 0x42;  /* External interrupt INTP4; TB=1, Prio=2 */
#   endif
#  endif /*kCanPhysToLogChannelIndex_4*/

#  if defined (kCanPhysToLogChannelIndex_5)
#   if !defined (C_ENABLE_ERROR_POLLING)
  BRSHW_IOS(uint16, ICRCAN5ERR) = 0x42;  /* CAN5 error interrupt; TB=1, Prio=2 */
#   endif
#   if !defined (C_ENABLE_TX_POLLING) || defined (C_ENABLE_INDIVIDUAL_POLLING)
  BRSHW_IOS(uint16, ICRCAN5TRX) = 0x42;  /* CAN5 transmit interrupt; TB=1, Prio=2 */
#   endif
  /* "CAN5 transmit/receive FIFO receive complete interrupt" not used by DrvCan */
#   if defined (BRSHW_ENABLE_CAN_WAKEUP_ISR)
  BRSHW_IOS(uint16, ICPx_CAN5) = 0x42;  /* External interrupt INTP5; TB=1, Prio=2 */
#   endif
#  endif /*kCanPhysToLogChannelIndex_5*/

#  if defined (kCanPhysToLogChannelIndex_6)
#   if !defined (C_ENABLE_ERROR_POLLING)
  BRSHW_IOS(uint16, ICRCAN6ERR) = 0x42;  /* CAN6 error interrupt; TB=1, Prio=2 */
#   endif
#   if !defined (C_ENABLE_TX_POLLING) || defined (C_ENABLE_INDIVIDUAL_POLLING)
  BRSHW_IOS(uint16, ICRCAN6TRX) = 0x42;  /* CAN6 transmit interrupt; TB=1, Prio=2 */
#   endif
  /* "CAN6 transmit/receive FIFO receive complete interrupt" not used by DrvCan */
#   if defined (BRSHW_ENABLE_CAN_WAKEUP_ISR)
  BRSHW_IOS(uint16, ICPx_CAN6) = 0x42;  /* External interrupt INTP6; TB=1, Prio=2 */
#   endif
#  endif /*kCanPhysToLogChannelIndex_6*/

# endif /*else BRSHW_INTERRUPT_TABLE_GROUP_G*/

#endif /*VGEN_ENABLE_CAN_DRV*/

#if defined (VGEN_ENABLE_LIN_DRV)

# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_0) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN240_0) || defined (SIO_ENABLE_RLIN2_0)
  BRSHW_IOS(uint16, ICRLIN20) = 0x43;  /* RLIN20 interrupt; TB=1, Prio=3 */
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_1) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN240_1) || defined (SIO_ENABLE_RLIN2_1)
  BRSHW_IOS(uint16, ICRLIN21) = 0x43;  /* RLIN21 interrupt; TB=1, Prio=3 */
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_2) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN240_2) || defined (SIO_ENABLE_RLIN2_2)
  BRSHW_IOS(uint16, ICRLIN22) = 0x43;  /* RLIN22 interrupt; TB=1, Prio=3 */
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_3) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN240_3) || defined (SIO_ENABLE_RLIN2_3)
  BRSHW_IOS(uint16, ICRLIN23) = 0x43;  /* RLIN23 interrupt; TB=1, Prio=3 */
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_4) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN241_0) || defined (SIO_ENABLE_RLIN2_4)
  BRSHW_IOS(uint16, ICRLIN24) = 0x43;  /* RLIN24 interrupt; TB=1, Prio=3 */
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_5) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN241_1) || defined (SIO_ENABLE_RLIN2_5)
  BRSHW_IOS(uint16, ICRLIN25) = 0x43;  /* RLIN25 interrupt; TB=1, Prio=3 */
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_6) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN241_2) || defined (SIO_ENABLE_RLIN2_6)
  BRSHW_IOS(uint16, ICRLIN26) = 0x43;  /* RLIN26 interrupt; TB=1, Prio=3 */
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_7) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN241_3) || defined (SIO_ENABLE_RLIN2_7)
  BRSHW_IOS(uint16, ICRLIN27) = 0x43;  /* RLIN27 interrupt; TB=1, Prio=3 */
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_8) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN210_0) || defined (SIO_ENABLE_RLIN2_8)
  BRSHW_IOS(uint16, ICRLIN28) = 0x43;  /* RLIN28 interrupt; TB=1, Prio=3 */
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_9) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN210_0) || defined (SIO_ENABLE_RLIN2_9)
  BRSHW_IOS(uint16, ICRLIN29) = 0x43;  /* RLIN29 interrupt; TB=1, Prio=3 */
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_10) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN242_2) || defined (SIO_ENABLE_RLIN2_10)
  BRSHW_IOS(uint16, ICRLIN210) = 0x43;  /* RLIN210 interrupt; TB=1, Prio=3 */
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN2_11) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN242_3) || defined (SIO_ENABLE_RLIN2_11)
  BRSHW_IOS(uint16, ICRLIN35) = 0x43;  /* RLIN35 interrupt; TB=1, Prio=3 */
# endif

# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_0) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN30_0) || defined (SIO_ENABLE_RLIN3_0)
#  if defined (BRSHW_LIN_USE_THREE_INT_SOURCES)
  BRSHW_IOS(uint16, ICRLIN30UR0) = 0x43;  /* RLIN30 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN30UR1) = 0x43;  /* RLIN30 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN30UR2) = 0x43;  /* RLIN30 interrupt; TB=1, Prio=3 */
#  else
  BRSHW_IOS(uint16, ICRLIN30) = 0x43;     /* RLIN30 interrupt; TB=1, Prio=3 */
#  endif
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_1) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN31_0) || defined (SIO_ENABLE_RLIN3_1)
#  if defined (BRSHW_LIN_USE_THREE_INT_SOURCES)
  BRSHW_IOS(uint16, ICRLIN31UR0) = 0x43;  /* RLIN31 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN31UR1) = 0x43;  /* RLIN31 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN31UR2) = 0x43;  /* RLIN31 interrupt; TB=1, Prio=3 */
#  else
  BRSHW_IOS(uint16, ICRLIN31) = 0x43;     /* RLIN31 interrupt; TB=1, Prio=3 */
#  endif
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_2) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN32_0) || defined (SIO_ENABLE_RLIN3_2)
#  if defined (BRSHW_LIN_USE_THREE_INT_SOURCES)
  BRSHW_IOS(uint16, ICRLIN32UR0) = 0x43;  /* RLIN32 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN32UR1) = 0x43;  /* RLIN32 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN32UR2) = 0x43;  /* RLIN32 interrupt; TB=1, Prio=3 */
#  else
  BRSHW_IOS(uint16, ICRLIN32) = 0x43;     /* RLIN32 interrupt; TB=1, Prio=3 */
#  endif
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_3) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN33_0) || defined (SIO_ENABLE_RLIN3_3)
#  if defined (BRSHW_LIN_USE_THREE_INT_SOURCES)
  BRSHW_IOS(uint16, ICRLIN33UR0) = 0x43;  /* RLIN33 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN33UR1) = 0x43;  /* RLIN33 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN33UR2) = 0x43;  /* RLIN33 interrupt; TB=1, Prio=3 */
#  else
  BRSHW_IOS(uint16, ICRLIN33) = 0x43;     /* RLIN33 interrupt; TB=1, Prio=3 */
#  endif
# endif

# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_4) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN34_0) || defined (SIO_ENABLE_RLIN3_4)
#  if defined (BRSHW_LIN_USE_THREE_INT_SOURCES)
  BRSHW_IOS(uint16, ICRLIN34UR0) = 0x43;  /* RLIN34 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN34UR1) = 0x43;  /* RLIN34 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN34UR2) = 0x43;  /* RLIN34 interrupt; TB=1, Prio=3 */
#  else
  BRSHW_IOS(uint16, ICRLIN34) = 0x43;     /* RLIN34 interrupt; TB=1, Prio=3 */
#  endif
# endif
# if defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN3_5) || defined (LIN_ENABLE_HARDWARE_INTERFACE_RLIN35_0) || defined (SIO_ENABLE_RLIN3_5)
#  if defined (BRSHW_LIN_USE_THREE_INT_SOURCES)
  BRSHW_IOS(uint16, ICRLIN35UR0) = 0x43;  /* RLIN35 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN35UR1) = 0x43;  /* RLIN35 interrupt; TB=1, Prio=3 */
  BRSHW_IOS(uint16, ICRLIN35UR2) = 0x43;  /* RLIN35 interrupt; TB=1, Prio=3 */
#  else
  BRSHW_IOS(uint16, ICRLIN35) = 0x43;     /* RLIN35 interrupt; TB=1, Prio=3 */
#  endif
# endif

#endif /*VGEN_ENABLE_LIN_DRV*/

#if defined (VGEN_ENABLE_DRVFR__BASEASR)
  /* Enable FlexRay Interrupts */
  for (i=ICFLX0LINE0; i<=ICFLX0TIM1; i=i+2)
  {
    BRSHW_IOS(uint16, i) = 0x42;  /* TB=1, Prio=2 */
  }
#endif /*VGEN_ENABLE_DRVFR__BASEASR*/

#if defined (VGEN_ENABLE_DRVETH__BASEASR)
# if defined (BRSHW_INTERRUPT_TABLE_GROUP_C) || defined (BRSHW_INTERRUPT_TABLE_GROUP_D)
  BRSHW_IOS(uint16, ICETNB0DATA) = 0x43;  /* Interrupt for ETNB0DATA; TB=1, Prio=3 */
# else
#  if (ETH_ENABLE_RX_INTERRUPT == STD_ON) || (ETH_ENABLE_TX_INTERRUPT == STD_ON)
  BRSHW_IOS(uint16, INTETNA0) = 0x43;
#   if (ETH_MAX_CTRLS_TOTAL > 1)
  BRSHW_IOS(uint16, INTETNA1) = 0x43;
#   endif
#  endif
# endif /*else BRSHW_INTERRUPT_TABLE_GROUP_D*/
#endif /*VGEN_ENABLE_DRVETH__BASEASR*/
}
#endif /*BRS_OS_USECASE_OSGEN7*/

unsigned int BrsHwReadPsw(void);

___asm(_BrsHwReadPsw:)
  /* -- Get PSW register */
  __as1(stsr 5,r10)
  /* -- Return to caller */
  ___asm(jmp    [lp])

/*****************************************************************************/
/**
 * @brief     Disables the global interrupt of the micro. This is done in a
 *            "save way" to allow also nested calls of BrsHwDisableInterrupt
 *            and BrsHwRestoreInterrupt. The first call of BrsHwDisableInterrupt
 *            stores the current state of the global INT flag and the last
 *            call to BrsHwRestoreInterrupt restores the state.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from All modules to disable the global interrupt
 */
/*****************************************************************************/
void BrsHwDisableInterrupt(void)
{
  unsigned int bLocalBrsHwRegisterPSW;

  /* No check for "overrun" of nested INT lock counter is performed, due to more
  *  than 255 nested calls to BrsHwDisableInterrupt are very unlikely. */
  if (bBrsHwIntDiCounter == 0)
  {
    /* Save PSW in canInterruptOldFlag and disable interrupts */
    bLocalBrsHwRegisterPSW = BrsHwReadPsw();
      ___asm(di);
    if((bLocalBrsHwRegisterPSW&0x20)==0)
    {
    }
    /* Save value of PSW in global variable */
    bBrsHwRegisterPSW=bLocalBrsHwRegisterPSW;
  }

  bBrsHwIntDiCounter++;
}
#if 0
/*****************************************************************************/
/**
 * @brief     Restores the state of the global interrupt of the micro. This
 *            is done in a "save way" to allow also nested calls of
 *            BrsHwDisableInterrupt and BrsHwRestoreInterrupt. The first call
 *            of BrsHwDisableInterrupt stores the current state of the global
 *            INT flag and the last call to BrsHwRestoreInterrupt restores the
 *            state.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from all modules to enable the global interrupt
 */
/*****************************************************************************/
void BrsHwRestoreInterrupt(void)
{
  /* Check for illegal call of BrsHwRestoreInterrupt. If this function is called
   *  too often, the INT lock works incorrect. */
  if (bBrsHwIntDiCounter == 0)
  {
    /* Check is only performed, if no OS is used */
  }

  bBrsHwIntDiCounter--;
  if (bBrsHwIntDiCounter == 0)
  {
    if((bBrsHwRegisterPSW&0x20)==0)
    {
       ___asm(ei);
    }
  }
}

/*****************************************************************************/
/**
 * @brief      restart ECU (issue a software reset or jump to startup code)
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from e.g. ECU state handling
 */
/*****************************************************************************/
void BrsHwSoftwareResetECU(void)
{
  BrsHwDisableInterrupt();

  /* implement code, necessary for a software reset, here */

  while (1)
  {
    /* Wait until watchdog reset occurs */
  }
}

#if defined (BRS_ENABLE_SUPPORT_LEDS)
/*****************************************************************************/
/**
 * @brief      A platform specific usage of LedNumber is used to toggle a LED.
*              Please note, that not every EVA hardware supports LEDs and due
*              to this do not use this feature for a general test case!
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from all modules to set or clear a LED
 */
/*****************************************************************************/
void BrsHwSetLed(
  /*
   *  Description        : Number of the LED to be handled
   *  Direction          : in
   *  Modified           : no
   *  Val. range / Coding: 0..7
   */
  uint8 LedNumber,
  /*
   *  Description        : New state of the LED
   *  Direction          : in
   *  Modified           : no
   *  Val. range / Coding: 0..1
   */
  uint8 NewState
)
{
#if defined (VGEN_ENABLE_DRVDIO)
  #error "Configure the valid DioChannel for the LED within your DrvDio config and set it as value for BrsHw_DioLED_Channel. Or disable BRS_ENABLE_SUPPORT_LEDS."
  Dio_ChannelType BrsHw_DioLED_Channel = DioConf_DioChannel_DioChannel_LED;

  Dio_WriteChannel(BrsHw_DioLED_Channel, NewState);

#else
  BrsHwPort_SetLevel(BRSHW_PORT_LED, NewState);
#endif
}
#endif /*BRS_ENABLE_SUPPORT_LEDS*/

/*****************************************************************************/
/**
 * @brief      This API is used for the BRS time measurement support to get a
 *             default time value for all measurements with this platform to
 *             be able to compare time measurements on different dates based
 *             on this time result.
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from TimeMeasurement
 */
/*****************************************************************************/
void BrsHwTime100NOP(void)
{
  BrsHwDisableInterrupt();

  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();
  BRSHWNOP10();

  BrsHwRestoreInterrupt();
}

# if defined (BRSASR_ENABLE_SAFECTXSUPPORT)
/*****************************************************************************/
/**
 * @brief      This API is used to enable hardware access in untrusted mode
 * @pre        -
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from BrsAsrInitBsw
 */
/*****************************************************************************/
void BrsHw_EnableHwAccess(void)
{
  /* Nothing to do for Rh850 yet */
}
# else
  /* BrsHw_EnableHwAccess() removed by Organi, because of ALM attributes of project */
# endif /*BRSASR_ENABLE_SAFECTXSUPPORT*/
#endif /* @@@vispma */
/**********************************************************************************************************************
  Interrupt handler function protoytpes
**********************************************************************************************************************/
#if defined (BRS_OS_USECASE_OSGEN7)
/*****************************************************************************/
/**
 * @brief      The dummy interrupt handler has to be used to fill up the
*              interrupt vector table and to catch illegal interrupts in the
*              BRS exception handler.
 * @pre        A wrong IRQ setting or an other malfunction has been occured
*              and an undefined interrupt has been triggered.
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called by unused entries in the interrupt vector table
 */
/*****************************************************************************/
# if defined(BRS_HW_ENABLE_SINGLE_DUMMY_INTERRUPT) || defined (BRS_OS_USECASE_OSGEN7)
BRS_ISR_KEYWORD void BrsHwDummyInterrupt(void)
{
  BrsMainExceptionHandler(kBrsInterruptHandlerNotInstalled, BRSERROR_MODULE_BRSHW, (unsigned short)(__LINE__));
}
# else
/*
 * Description: Define for Interrupt Service Routine for not expected interrupts.
 *              This define is used to shorten the implementation effort of all interrupt service
 *              routines, which may not happen during normal operation.
 */
#define BRS_DUMMY_INT(inta) \
  BRS_ISR_KEYWORD void BrsHwDummyInterrupt##inta(void) \
  { \
    BrsMainExceptionHandler(kBrsInterruptHandlerNotInstalled, BRSERROR_MODULE_BRSHW, (uint16)(__LINE__)); \
  }

BRS_DUMMY_INT(16)
BRS_DUMMY_INT(32)
BRS_DUMMY_INT(48)
BRS_DUMMY_INT(64)
BRS_DUMMY_INT(80)
BRS_DUMMY_INT(112)
BRS_DUMMY_INT(128)
BRS_DUMMY_INT(144)
BRS_DUMMY_INT(160)
BRS_DUMMY_INT(176)
BRS_DUMMY_INT(192)
BRS_DUMMY_INT(208)
BRS_DUMMY_INT(224)
BRS_DUMMY_INT(240)
BRS_DUMMY_INT(256)
BRS_DUMMY_INT(272)
BRS_DUMMY_INT(288)
BRS_DUMMY_INT(304)
BRS_DUMMY_INT(320)
BRS_DUMMY_INT(336)
BRS_DUMMY_INT(352)
BRS_DUMMY_INT(368)
BRS_DUMMY_INT(384)
BRS_DUMMY_INT(400)
BRS_DUMMY_INT(416)
BRS_DUMMY_INT(432)
BRS_DUMMY_INT(448)
BRS_DUMMY_INT(464)
BRS_DUMMY_INT(480)
BRS_DUMMY_INT(496)
BRS_DUMMY_INT(512)
BRS_DUMMY_INT(516)
BRS_DUMMY_INT(520)
BRS_DUMMY_INT(524)
BRS_DUMMY_INT(528)
BRS_DUMMY_INT(532)
BRS_DUMMY_INT(536)
BRS_DUMMY_INT(540)
BRS_DUMMY_INT(544)
BRS_DUMMY_INT(548)
BRS_DUMMY_INT(552)
BRS_DUMMY_INT(556)
BRS_DUMMY_INT(560)
BRS_DUMMY_INT(564)
BRS_DUMMY_INT(568)
BRS_DUMMY_INT(572)
BRS_DUMMY_INT(576)
BRS_DUMMY_INT(580)
BRS_DUMMY_INT(584)
BRS_DUMMY_INT(588)
BRS_DUMMY_INT(592)
BRS_DUMMY_INT(596)
BRS_DUMMY_INT(600)
BRS_DUMMY_INT(604)
BRS_DUMMY_INT(608)
BRS_DUMMY_INT(612)
BRS_DUMMY_INT(616)
BRS_DUMMY_INT(620)
BRS_DUMMY_INT(624)
BRS_DUMMY_INT(628)
BRS_DUMMY_INT(632)
BRS_DUMMY_INT(636)
BRS_DUMMY_INT(640)
BRS_DUMMY_INT(644)
BRS_DUMMY_INT(648)
BRS_DUMMY_INT(652)
BRS_DUMMY_INT(656)
BRS_DUMMY_INT(660)
BRS_DUMMY_INT(664)
BRS_DUMMY_INT(668)
BRS_DUMMY_INT(672)
BRS_DUMMY_INT(676)
BRS_DUMMY_INT(680)
BRS_DUMMY_INT(684)
BRS_DUMMY_INT(688)
BRS_DUMMY_INT(692)
BRS_DUMMY_INT(696)
BRS_DUMMY_INT(700)
BRS_DUMMY_INT(704)
BRS_DUMMY_INT(708)
BRS_DUMMY_INT(712)
BRS_DUMMY_INT(716)
BRS_DUMMY_INT(720)
BRS_DUMMY_INT(724)
BRS_DUMMY_INT(728)
BRS_DUMMY_INT(732)
BRS_DUMMY_INT(736)
BRS_DUMMY_INT(740)
BRS_DUMMY_INT(744)
BRS_DUMMY_INT(748)
BRS_DUMMY_INT(752)
BRS_DUMMY_INT(756)
BRS_DUMMY_INT(760)
BRS_DUMMY_INT(764)
BRS_DUMMY_INT(768)
BRS_DUMMY_INT(772)
BRS_DUMMY_INT(776)
BRS_DUMMY_INT(780)
BRS_DUMMY_INT(784)
BRS_DUMMY_INT(788)
BRS_DUMMY_INT(792)
BRS_DUMMY_INT(796)
BRS_DUMMY_INT(800)
BRS_DUMMY_INT(804)
BRS_DUMMY_INT(808)
BRS_DUMMY_INT(812)
BRS_DUMMY_INT(816)
BRS_DUMMY_INT(820)
BRS_DUMMY_INT(824)
BRS_DUMMY_INT(828)
BRS_DUMMY_INT(832)
BRS_DUMMY_INT(836)
BRS_DUMMY_INT(840)
BRS_DUMMY_INT(844)
BRS_DUMMY_INT(848)
BRS_DUMMY_INT(852)
BRS_DUMMY_INT(856)
BRS_DUMMY_INT(860)
BRS_DUMMY_INT(864)
BRS_DUMMY_INT(868)
BRS_DUMMY_INT(872)
BRS_DUMMY_INT(876)
BRS_DUMMY_INT(880)
BRS_DUMMY_INT(884)
BRS_DUMMY_INT(888)
BRS_DUMMY_INT(892)
BRS_DUMMY_INT(896)
BRS_DUMMY_INT(900)
BRS_DUMMY_INT(904)
BRS_DUMMY_INT(908)
BRS_DUMMY_INT(912)
BRS_DUMMY_INT(916)
BRS_DUMMY_INT(920)
BRS_DUMMY_INT(924)
BRS_DUMMY_INT(928)
BRS_DUMMY_INT(932)
BRS_DUMMY_INT(936)
BRS_DUMMY_INT(940)
BRS_DUMMY_INT(944)
BRS_DUMMY_INT(948)
BRS_DUMMY_INT(952)
BRS_DUMMY_INT(956)
BRS_DUMMY_INT(960)
BRS_DUMMY_INT(964)
BRS_DUMMY_INT(968)
BRS_DUMMY_INT(972)
BRS_DUMMY_INT(976)
BRS_DUMMY_INT(980)
BRS_DUMMY_INT(984)
BRS_DUMMY_INT(988)
BRS_DUMMY_INT(992)
BRS_DUMMY_INT(996)
BRS_DUMMY_INT(1000)
BRS_DUMMY_INT(1004)
BRS_DUMMY_INT(1008)
BRS_DUMMY_INT(1012)
BRS_DUMMY_INT(1016)
BRS_DUMMY_INT(1020)
BRS_DUMMY_INT(1024)
BRS_DUMMY_INT(1028)
BRS_DUMMY_INT(1032)
BRS_DUMMY_INT(1036)
BRS_DUMMY_INT(1040)
BRS_DUMMY_INT(1044)
BRS_DUMMY_INT(1048)
BRS_DUMMY_INT(1052)
BRS_DUMMY_INT(1056)
BRS_DUMMY_INT(1060)
BRS_DUMMY_INT(1064)
BRS_DUMMY_INT(1068)
BRS_DUMMY_INT(1072)
BRS_DUMMY_INT(1076)
BRS_DUMMY_INT(1080)
BRS_DUMMY_INT(1084)
BRS_DUMMY_INT(1088)
BRS_DUMMY_INT(1092)
BRS_DUMMY_INT(1096)
BRS_DUMMY_INT(1100)
BRS_DUMMY_INT(1104)
BRS_DUMMY_INT(1108)
BRS_DUMMY_INT(1112)
BRS_DUMMY_INT(1116)
BRS_DUMMY_INT(1120)
BRS_DUMMY_INT(1124)
BRS_DUMMY_INT(1128)
BRS_DUMMY_INT(1132)
BRS_DUMMY_INT(1136)
BRS_DUMMY_INT(1140)
BRS_DUMMY_INT(1144)
BRS_DUMMY_INT(1148)
BRS_DUMMY_INT(1152)
BRS_DUMMY_INT(1156)
BRS_DUMMY_INT(1160)
BRS_DUMMY_INT(1164)
BRS_DUMMY_INT(1168)
BRS_DUMMY_INT(1172)
BRS_DUMMY_INT(1176)
BRS_DUMMY_INT(1180)
BRS_DUMMY_INT(1184)
BRS_DUMMY_INT(1188)
BRS_DUMMY_INT(1192)
BRS_DUMMY_INT(1196)
BRS_DUMMY_INT(1200)
BRS_DUMMY_INT(1204)
BRS_DUMMY_INT(1208)
BRS_DUMMY_INT(1212)
BRS_DUMMY_INT(1216)
BRS_DUMMY_INT(1220)
BRS_DUMMY_INT(1224)
BRS_DUMMY_INT(1228)
BRS_DUMMY_INT(1232)
BRS_DUMMY_INT(1236)
BRS_DUMMY_INT(1240)
BRS_DUMMY_INT(1244)
BRS_DUMMY_INT(1248)
BRS_DUMMY_INT(1252)
BRS_DUMMY_INT(1256)
BRS_DUMMY_INT(1260)
BRS_DUMMY_INT(1264)
BRS_DUMMY_INT(1268)
BRS_DUMMY_INT(1272)
BRS_DUMMY_INT(1276)
BRS_DUMMY_INT(1280)
BRS_DUMMY_INT(1284)
BRS_DUMMY_INT(1288)
BRS_DUMMY_INT(1292)
BRS_DUMMY_INT(1296)
BRS_DUMMY_INT(1300)
BRS_DUMMY_INT(1304)
BRS_DUMMY_INT(1308)
BRS_DUMMY_INT(1312)
BRS_DUMMY_INT(1316)
BRS_DUMMY_INT(1320)
BRS_DUMMY_INT(1324)
BRS_DUMMY_INT(1328)
BRS_DUMMY_INT(1332)
BRS_DUMMY_INT(1336)
BRS_DUMMY_INT(1340)
BRS_DUMMY_INT(1344)
BRS_DUMMY_INT(1348)
BRS_DUMMY_INT(1352)
BRS_DUMMY_INT(1356)
BRS_DUMMY_INT(1360)
BRS_DUMMY_INT(1364)
BRS_DUMMY_INT(1368)
BRS_DUMMY_INT(1372)
BRS_DUMMY_INT(1376)
BRS_DUMMY_INT(1380)
BRS_DUMMY_INT(1384)
BRS_DUMMY_INT(1388)
BRS_DUMMY_INT(1392)
BRS_DUMMY_INT(1396)
BRS_DUMMY_INT(1400)
BRS_DUMMY_INT(1404)
BRS_DUMMY_INT(1408)
BRS_DUMMY_INT(1412)
BRS_DUMMY_INT(1416)
BRS_DUMMY_INT(1420)
BRS_DUMMY_INT(1424)
BRS_DUMMY_INT(1428)
BRS_DUMMY_INT(1432)
BRS_DUMMY_INT(1436)
BRS_DUMMY_INT(1440)
BRS_DUMMY_INT(1444)
BRS_DUMMY_INT(1448)
BRS_DUMMY_INT(1452)
BRS_DUMMY_INT(1456)
BRS_DUMMY_INT(1460)
BRS_DUMMY_INT(1464)
BRS_DUMMY_INT(1468)
BRS_DUMMY_INT(1472)
BRS_DUMMY_INT(1476)
BRS_DUMMY_INT(1480)
BRS_DUMMY_INT(1484)
BRS_DUMMY_INT(1488)
BRS_DUMMY_INT(1492)
BRS_DUMMY_INT(1496)
BRS_DUMMY_INT(1500)
BRS_DUMMY_INT(1504)
BRS_DUMMY_INT(1508)
BRS_DUMMY_INT(1512)
BRS_DUMMY_INT(1516)
BRS_DUMMY_INT(1520)
BRS_DUMMY_INT(1524)
BRS_DUMMY_INT(1528)
BRS_DUMMY_INT(1532)
BRS_DUMMY_INT(1536)
BRS_DUMMY_INT(1540)
BRS_DUMMY_INT(1544)
BRS_DUMMY_INT(1548)
BRS_DUMMY_INT(1552)
BRS_DUMMY_INT(1556)
BRS_DUMMY_INT(1560)
BRS_DUMMY_INT(1564)
BRS_DUMMY_INT(1568)
BRS_DUMMY_INT(1572)
BRS_DUMMY_INT(1576)
BRS_DUMMY_INT(1580)
BRS_DUMMY_INT(1584)
BRS_DUMMY_INT(1588)
BRS_DUMMY_INT(1592)
BRS_DUMMY_INT(1596)
BRS_DUMMY_INT(1600)
BRS_DUMMY_INT(1604)
BRS_DUMMY_INT(1608)
BRS_DUMMY_INT(1612)
BRS_DUMMY_INT(1616)
BRS_DUMMY_INT(1620)
BRS_DUMMY_INT(1624)
BRS_DUMMY_INT(1628)
BRS_DUMMY_INT(1632)
BRS_DUMMY_INT(1636)
BRS_DUMMY_INT(1640)
BRS_DUMMY_INT(1644)
BRS_DUMMY_INT(1648)
BRS_DUMMY_INT(1652)
BRS_DUMMY_INT(1656)
BRS_DUMMY_INT(1660)
BRS_DUMMY_INT(1664)
BRS_DUMMY_INT(1668)
BRS_DUMMY_INT(1672)
BRS_DUMMY_INT(1676)
BRS_DUMMY_INT(1680)
BRS_DUMMY_INT(1684)
BRS_DUMMY_INT(1688)
BRS_DUMMY_INT(1692)
BRS_DUMMY_INT(1696)
BRS_DUMMY_INT(1700)
BRS_DUMMY_INT(1704)
BRS_DUMMY_INT(1708)
BRS_DUMMY_INT(1712)
BRS_DUMMY_INT(1716)
BRS_DUMMY_INT(1720)
BRS_DUMMY_INT(1724)
BRS_DUMMY_INT(1728)
BRS_DUMMY_INT(1732)
BRS_DUMMY_INT(1736)
BRS_DUMMY_INT(1740)
BRS_DUMMY_INT(1744)
BRS_DUMMY_INT(1748)
BRS_DUMMY_INT(1752)
BRS_DUMMY_INT(1756)
BRS_DUMMY_INT(1760)
BRS_DUMMY_INT(1764)
BRS_DUMMY_INT(1768)
BRS_DUMMY_INT(1772)
BRS_DUMMY_INT(1776)
BRS_DUMMY_INT(1780)
BRS_DUMMY_INT(1784)
BRS_DUMMY_INT(1788)
BRS_DUMMY_INT(1792)
BRS_DUMMY_INT(1796)
BRS_DUMMY_INT(1800)
BRS_DUMMY_INT(1804)
BRS_DUMMY_INT(1808)
BRS_DUMMY_INT(1812)
BRS_DUMMY_INT(1816)
BRS_DUMMY_INT(1820)
BRS_DUMMY_INT(1824)
BRS_DUMMY_INT(1828)
BRS_DUMMY_INT(1832)
BRS_DUMMY_INT(1836)
BRS_DUMMY_INT(1840)
BRS_DUMMY_INT(1844)
BRS_DUMMY_INT(1848)
BRS_DUMMY_INT(1852)
BRS_DUMMY_INT(1856)
BRS_DUMMY_INT(1860)
BRS_DUMMY_INT(1864)
BRS_DUMMY_INT(1868)
BRS_DUMMY_INT(1872)
BRS_DUMMY_INT(1876)
BRS_DUMMY_INT(1880)
BRS_DUMMY_INT(1884)
BRS_DUMMY_INT(1888)
BRS_DUMMY_INT(1892)
BRS_DUMMY_INT(1896)
BRS_DUMMY_INT(1900)
BRS_DUMMY_INT(1904)
BRS_DUMMY_INT(1908)
BRS_DUMMY_INT(1912)
BRS_DUMMY_INT(1916)
BRS_DUMMY_INT(1920)
BRS_DUMMY_INT(1924)
BRS_DUMMY_INT(1928)
BRS_DUMMY_INT(1932)
BRS_DUMMY_INT(1936)
BRS_DUMMY_INT(1940)
BRS_DUMMY_INT(1944)
BRS_DUMMY_INT(1948)
BRS_DUMMY_INT(1952)
BRS_DUMMY_INT(1956)
BRS_DUMMY_INT(1960)
BRS_DUMMY_INT(1964)
BRS_DUMMY_INT(1968)
BRS_DUMMY_INT(1972)
BRS_DUMMY_INT(1976)
BRS_DUMMY_INT(1980)
BRS_DUMMY_INT(1984)
BRS_DUMMY_INT(1988)
BRS_DUMMY_INT(1992)
BRS_DUMMY_INT(1996)
BRS_DUMMY_INT(2000)
BRS_DUMMY_INT(2004)
BRS_DUMMY_INT(2008)
BRS_DUMMY_INT(2012)
BRS_DUMMY_INT(2016)
BRS_DUMMY_INT(2020)
BRS_DUMMY_INT(2024)
BRS_DUMMY_INT(2028)
BRS_DUMMY_INT(2032)
BRS_DUMMY_INT(2036)
BRS_DUMMY_INT(2040)
BRS_DUMMY_INT(2044)
BRS_DUMMY_INT(2048)
BRS_DUMMY_INT(2052)
BRS_DUMMY_INT(2056)
BRS_DUMMY_INT(2060)
BRS_DUMMY_INT(2064)
BRS_DUMMY_INT(2068)
BRS_DUMMY_INT(2072)
BRS_DUMMY_INT(2076)
BRS_DUMMY_INT(2080)
BRS_DUMMY_INT(2084)
BRS_DUMMY_INT(2088)
BRS_DUMMY_INT(2092)
BRS_DUMMY_INT(2096)
BRS_DUMMY_INT(2100)
BRS_DUMMY_INT(2104)
BRS_DUMMY_INT(2108)
BRS_DUMMY_INT(2112)
BRS_DUMMY_INT(2116)
BRS_DUMMY_INT(2120)
BRS_DUMMY_INT(2124)
BRS_DUMMY_INT(2128)
BRS_DUMMY_INT(2132)
BRS_DUMMY_INT(2136)
BRS_DUMMY_INT(2140)
BRS_DUMMY_INT(2144)
BRS_DUMMY_INT(2148)
BRS_DUMMY_INT(2152)
BRS_DUMMY_INT(2156)
BRS_DUMMY_INT(2160)
BRS_DUMMY_INT(2164)
BRS_DUMMY_INT(2168)
BRS_DUMMY_INT(2172)
BRS_DUMMY_INT(2176)
BRS_DUMMY_INT(2180)
BRS_DUMMY_INT(2184)
BRS_DUMMY_INT(2188)
BRS_DUMMY_INT(2192)
BRS_DUMMY_INT(2196)
BRS_DUMMY_INT(2200)
BRS_DUMMY_INT(2204)
BRS_DUMMY_INT(2208)
BRS_DUMMY_INT(2212)
BRS_DUMMY_INT(2216)
BRS_DUMMY_INT(2220)
BRS_DUMMY_INT(2224)
BRS_DUMMY_INT(2228)
BRS_DUMMY_INT(2232)
BRS_DUMMY_INT(2236)
BRS_DUMMY_INT(2240)
BRS_DUMMY_INT(2244)
BRS_DUMMY_INT(2248)
BRS_DUMMY_INT(2252)
BRS_DUMMY_INT(2256)
BRS_DUMMY_INT(2260)
BRS_DUMMY_INT(2264)
BRS_DUMMY_INT(2268)
BRS_DUMMY_INT(2272)
BRS_DUMMY_INT(2276)
BRS_DUMMY_INT(2280)
BRS_DUMMY_INT(2284)
BRS_DUMMY_INT(2288)
BRS_DUMMY_INT(2292)
BRS_DUMMY_INT(2296)
BRS_DUMMY_INT(2300)
BRS_DUMMY_INT(2304)
BRS_DUMMY_INT(2308)
BRS_DUMMY_INT(2312)
BRS_DUMMY_INT(2316)
BRS_DUMMY_INT(2320)
BRS_DUMMY_INT(2324)
BRS_DUMMY_INT(2328)
BRS_DUMMY_INT(2332)
BRS_DUMMY_INT(2336)
BRS_DUMMY_INT(2340)
BRS_DUMMY_INT(2344)
BRS_DUMMY_INT(2348)
BRS_DUMMY_INT(2352)
BRS_DUMMY_INT(2356)
BRS_DUMMY_INT(2360)
BRS_DUMMY_INT(2364)
BRS_DUMMY_INT(2368)
BRS_DUMMY_INT(2372)
BRS_DUMMY_INT(2376)
BRS_DUMMY_INT(2380)
BRS_DUMMY_INT(2384)
BRS_DUMMY_INT(2388)
BRS_DUMMY_INT(2392)
BRS_DUMMY_INT(2396)
BRS_DUMMY_INT(2400)
BRS_DUMMY_INT(2404)
BRS_DUMMY_INT(2408)
BRS_DUMMY_INT(2412)
BRS_DUMMY_INT(2416)
BRS_DUMMY_INT(2420)
BRS_DUMMY_INT(2424)
BRS_DUMMY_INT(2428)
BRS_DUMMY_INT(2432)
BRS_DUMMY_INT(2436)
BRS_DUMMY_INT(2440)
BRS_DUMMY_INT(2444)
BRS_DUMMY_INT(2448)
BRS_DUMMY_INT(2452)
BRS_DUMMY_INT(2456)
BRS_DUMMY_INT(2460)
BRS_DUMMY_INT(2464)
BRS_DUMMY_INT(2468)
BRS_DUMMY_INT(2472)
BRS_DUMMY_INT(2476)
BRS_DUMMY_INT(2480)
BRS_DUMMY_INT(2484)
BRS_DUMMY_INT(2488)
BRS_DUMMY_INT(2492)
BRS_DUMMY_INT(2496)
BRS_DUMMY_INT(2500)
BRS_DUMMY_INT(2504)
BRS_DUMMY_INT(2508)
BRS_DUMMY_INT(2512)
BRS_DUMMY_INT(2516)
BRS_DUMMY_INT(2520)
BRS_DUMMY_INT(2524)
BRS_DUMMY_INT(2528)
BRS_DUMMY_INT(2532)
BRS_DUMMY_INT(2536)
BRS_DUMMY_INT(2540)
BRS_DUMMY_INT(2544)
BRS_DUMMY_INT(2548)
BRS_DUMMY_INT(2552)
BRS_DUMMY_INT(2556)
BRS_DUMMY_INT(2560)
BRS_DUMMY_INT(2564)
BRS_DUMMY_INT(2568)
BRS_DUMMY_INT(2572)
BRS_DUMMY_INT(2576)
BRS_DUMMY_INT(2580)
BRS_DUMMY_INT(2584)
BRS_DUMMY_INT(2588)
BRS_DUMMY_INT(2592)
BRS_DUMMY_INT(2596)
BRS_DUMMY_INT(2600)
BRS_DUMMY_INT(2604)
BRS_DUMMY_INT(2608)
BRS_DUMMY_INT(2612)
BRS_DUMMY_INT(2616)
BRS_DUMMY_INT(2620)
BRS_DUMMY_INT(2624)
BRS_DUMMY_INT(2628)
BRS_DUMMY_INT(2632)
BRS_DUMMY_INT(2636)
BRS_DUMMY_INT(2640)
BRS_DUMMY_INT(2644)
BRS_DUMMY_INT(2648)
BRS_DUMMY_INT(2652)
BRS_DUMMY_INT(2656)
BRS_DUMMY_INT(2660)
BRS_DUMMY_INT(2664)
BRS_DUMMY_INT(2668)
BRS_DUMMY_INT(2672)
BRS_DUMMY_INT(2676)
BRS_DUMMY_INT(2680)
BRS_DUMMY_INT(2684)
BRS_DUMMY_INT(2688)
BRS_DUMMY_INT(2692)
BRS_DUMMY_INT(2696)
BRS_DUMMY_INT(2700)
BRS_DUMMY_INT(2704)
BRS_DUMMY_INT(2708)
BRS_DUMMY_INT(2712)
BRS_DUMMY_INT(2716)
BRS_DUMMY_INT(2720)
BRS_DUMMY_INT(2724)
BRS_DUMMY_INT(2728)
BRS_DUMMY_INT(2732)
BRS_DUMMY_INT(2736)
BRS_DUMMY_INT(2740)
BRS_DUMMY_INT(2744)
BRS_DUMMY_INT(2748)
BRS_DUMMY_INT(2752)
BRS_DUMMY_INT(2756)
BRS_DUMMY_INT(2760)
BRS_DUMMY_INT(2764)
BRS_DUMMY_INT(2768)
BRS_DUMMY_INT(2772)
BRS_DUMMY_INT(2776)
BRS_DUMMY_INT(2780)
BRS_DUMMY_INT(2784)
BRS_DUMMY_INT(2788)
BRS_DUMMY_INT(2792)
BRS_DUMMY_INT(2796)
BRS_DUMMY_INT(2800)
BRS_DUMMY_INT(2804)
BRS_DUMMY_INT(2808)
BRS_DUMMY_INT(2812)
BRS_DUMMY_INT(2816)
BRS_DUMMY_INT(2820)
BRS_DUMMY_INT(2824)
BRS_DUMMY_INT(2828)
BRS_DUMMY_INT(2832)
BRS_DUMMY_INT(2836)
BRS_DUMMY_INT(2840)
BRS_DUMMY_INT(2844)
BRS_DUMMY_INT(2848)
BRS_DUMMY_INT(2852)
BRS_DUMMY_INT(2856)
BRS_DUMMY_INT(2860)
BRS_DUMMY_INT(2864)
BRS_DUMMY_INT(2868)
BRS_DUMMY_INT(2872)
BRS_DUMMY_INT(2876)
BRS_DUMMY_INT(2880)
BRS_DUMMY_INT(2884)
BRS_DUMMY_INT(2888)
BRS_DUMMY_INT(2892)
BRS_DUMMY_INT(2896)
BRS_DUMMY_INT(2900)
BRS_DUMMY_INT(2904)
BRS_DUMMY_INT(2908)
BRS_DUMMY_INT(2912)
BRS_DUMMY_INT(2916)
BRS_DUMMY_INT(2920)
BRS_DUMMY_INT(2924)
BRS_DUMMY_INT(2928)
BRS_DUMMY_INT(2932)
BRS_DUMMY_INT(2936)
BRS_DUMMY_INT(2940)
BRS_DUMMY_INT(2944)
BRS_DUMMY_INT(2948)
BRS_DUMMY_INT(2952)
BRS_DUMMY_INT(2956)
BRS_DUMMY_INT(2960)
BRS_DUMMY_INT(2964)
BRS_DUMMY_INT(2968)
BRS_DUMMY_INT(2972)
BRS_DUMMY_INT(2976)
BRS_DUMMY_INT(2980)
BRS_DUMMY_INT(2984)
BRS_DUMMY_INT(2988)
BRS_DUMMY_INT(2992)
BRS_DUMMY_INT(2996)
BRS_DUMMY_INT(3000)
BRS_DUMMY_INT(3004)
BRS_DUMMY_INT(3008)
BRS_DUMMY_INT(3012)
BRS_DUMMY_INT(3016)
BRS_DUMMY_INT(3020)
BRS_DUMMY_INT(3024)
BRS_DUMMY_INT(3028)
BRS_DUMMY_INT(3032)
BRS_DUMMY_INT(3036)
BRS_DUMMY_INT(3040)
BRS_DUMMY_INT(3044)
BRS_DUMMY_INT(3048)
BRS_DUMMY_INT(3052)
BRS_DUMMY_INT(3056)
BRS_DUMMY_INT(3060)
BRS_DUMMY_INT(3064)
BRS_DUMMY_INT(3068)
BRS_DUMMY_INT(3072)
BRS_DUMMY_INT(3076)
BRS_DUMMY_INT(3080)
BRS_DUMMY_INT(3084)
BRS_DUMMY_INT(3088)
BRS_DUMMY_INT(3092)
BRS_DUMMY_INT(3096)
BRS_DUMMY_INT(3100)
BRS_DUMMY_INT(3104)
BRS_DUMMY_INT(3108)
BRS_DUMMY_INT(3112)
BRS_DUMMY_INT(3116)
BRS_DUMMY_INT(3120)
BRS_DUMMY_INT(3124)
BRS_DUMMY_INT(3128)
BRS_DUMMY_INT(3132)
BRS_DUMMY_INT(3136)
BRS_DUMMY_INT(3140)
BRS_DUMMY_INT(3144)
BRS_DUMMY_INT(3148)
BRS_DUMMY_INT(3152)
BRS_DUMMY_INT(3156)
BRS_DUMMY_INT(3160)
BRS_DUMMY_INT(3164)
BRS_DUMMY_INT(3168)
BRS_DUMMY_INT(3172)
BRS_DUMMY_INT(3176)
BRS_DUMMY_INT(3180)
BRS_DUMMY_INT(3184)
BRS_DUMMY_INT(3188)
BRS_DUMMY_INT(3192)
BRS_DUMMY_INT(3196)
BRS_DUMMY_INT(3200)
BRS_DUMMY_INT(3204)
BRS_DUMMY_INT(3208)
BRS_DUMMY_INT(3212)
BRS_DUMMY_INT(3216)
BRS_DUMMY_INT(3220)
BRS_DUMMY_INT(3224)
BRS_DUMMY_INT(3228)
BRS_DUMMY_INT(3232)
BRS_DUMMY_INT(3236)
BRS_DUMMY_INT(3240)
BRS_DUMMY_INT(3244)
BRS_DUMMY_INT(3248)
BRS_DUMMY_INT(3252)
BRS_DUMMY_INT(3256)
BRS_DUMMY_INT(3260)
BRS_DUMMY_INT(3264)
BRS_DUMMY_INT(3268)
BRS_DUMMY_INT(3272)
BRS_DUMMY_INT(3276)
BRS_DUMMY_INT(3280)
BRS_DUMMY_INT(3284)
BRS_DUMMY_INT(3288)
BRS_DUMMY_INT(3292)
BRS_DUMMY_INT(3296)
BRS_DUMMY_INT(3300)
BRS_DUMMY_INT(3304)
BRS_DUMMY_INT(3308)
BRS_DUMMY_INT(3312)
BRS_DUMMY_INT(3316)
BRS_DUMMY_INT(3320)
BRS_DUMMY_INT(3324)
BRS_DUMMY_INT(3328)
BRS_DUMMY_INT(3332)
BRS_DUMMY_INT(3336)
BRS_DUMMY_INT(3340)
BRS_DUMMY_INT(3344)
BRS_DUMMY_INT(3348)
BRS_DUMMY_INT(3352)
BRS_DUMMY_INT(3356)

# endif /*BRS_HW_ENABLE_SINGLE_DUMMY_INTERRUPT*/
#endif /*BRS_OS_USECASE_BRS*/

