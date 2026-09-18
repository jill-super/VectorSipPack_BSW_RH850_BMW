/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Brs
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: BrsCfg.h
 *   Generation Time: 2017-06-22 14:23:19
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1700369_D00
 *      Tool Version: DaVinci Configurator (beta) 5.15.16 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

#ifndef _BRSCFG_H_
#define _BRSCFG_H_

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Std_Types.h"

/* necessary for VGEN_ENABLE switches */
#include "VGenEnableSwitches.h"

/* v_def.h maybe necessary, if you are using an old BrsHw implementation. A template for v_def.h is included within this BrsAsr4. */
/*#include "v_def.h"*/

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/
#define BASIC_RUNTIME_SYSTEM_TYPE_MSR4

/*******************************************************************************
 Standard BrsAsr configuration
*******************************************************************************/
/* Support of test generator framework */
/* Tgf Support is disabled (#define BRSASR_ENABLE_TGFSUPPORT) */

/* Use Autosar-OS conform Tasks; disable this, if no OS should be used */
#define BRSASR_ENABLE_OSSUPPORT

/* Support of OS emulation */
/* OS Emulation Support is disabled (#define BRSASR_ENABLE_OSEMULATION) */

/* Support of Multiple Configuration */
/* Multiple Configuration Support is disabled (#define BRSASR_ENABLE_MULTICONFIG) */

/* Use the functionality of a blinking live-LED for the used EvalBoard */
/* LED Support is disabled (#define BRS_ENABLE_SUPPORT_LEDS) */

/*******************************************************************************
 Additional BrsAsr support features
*******************************************************************************/
/* Switch to enable support of SafeContext OS */
/* SafeContext Support is disabled (#define BRSASR_ENABLE_SAFECTXSUPPORT) */

/* Switch to enable support of MCALs that can not be initialized in non-trusted OS-Application*/
/* MCAL trusted only Support is disabled (#define BRSASR_ENABLE_MCAL_TRUSTED_ONLY) */

/* Switch to enable support of MultiCore OS */
/* MultiCore OS Support is disabled (#define BRSASR_ENABLE_OS_MULTICORESUPPORT) */

/* Switch to enable support of SafeWatchdog Stack */
/* SafeWatchdog Support is disabled (#define BRSASR_ENABLE_SAFEWDGSUPPORT) */

/* Switch to enable support of MultiCore SafeWatchdog Stack */
/* SafeWatchdog Support is disabled (#define BRSASR_ENABLE_SAFEWDG_MULTICORESUPPORT) */

/* Switch to enable support of configuring additional pins for external wakeup functionality within BrsHw, if available */
/* External Wakeup Support is disabled (#define BRS_ENABLE_EXTERNAL_WAKEUP) */

/* Switch to enable support of Test-Control-Module */
/* Test-Control-Module Support is disabled (#define BRS_ENABLE_TCM_SUPPORT) */

/* Switch to enable support of HLP-Testsuite */
/* HLP-Testsuite Support is disabled (#define BRS_ENABLE_HLPTEST_SUPPORT) */

#endif /*_BRSCFG_H_*/

