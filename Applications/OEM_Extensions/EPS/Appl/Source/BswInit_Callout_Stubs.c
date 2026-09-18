
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
  \file  File:  BswInit_Callout_Stubs.c
      Project:  Vector Basic Runtime System for MICROSAR4
       Module:  BrsAsrInit

  \brief Description:  Vector Basic Runtime System for AUTOSAR 4 projects
                       - Module source for initialization Callouts, out of BswInit.c

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
  Sascha Friedmann              vissfn        Vector Informatik GmbH
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
 ----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Description
  --------  ----------  ------  ---------------------------------------------------------------------------------------
  00.01.00  2016-01-14  visbwa  Initial creation
  00.02.00  2016-03-16  visbwa  Added UserDefined ExclusiveArea handling for CAN channels, 
                                according to AN-ISC-8-1149_ErrorHook_E_OS_DISABLED_INT.pdf
  00.02.01  2016-03-23  visbwa  Enhanced VTT support
  00.02.02  2016-04-25  visbwa  Changed memory mapping of variable BrsAsrApplCanInterruptLock
  00.02.03  2016-05-25  visbwa  Introduced first Os_CoreGen7 support
  00.03.00  2016-06-22  vissfn  Fixed DrvCan exclusive areas interrupt enabling for nested calls
  00.03.01  2016-06-24  visbwa  Fixed declaration of BrsAsrApplCanInterruptLockCtr
  00.03.02  2016-10-19  visbwa  Added BrsHw usage for usecase w/o MCAL,
                                added MultiCore and OSGen7 support within BswInit_PreInitPowerOn()
  01.00.00  2016-10-27  visbwa  BswInit_Callout_Stubs.h and version check introduced,
                                added support of BrsHw timer handling for usecase w/o MCAL,
                                renamed InitializeOne and InitializeTwo functions
  01.00.01  2017-01-19  visbwa  Cleaned BswInit_InitializeTwo() for UseCase OsGen7
  01.00.02  2017-01-23  visbwa  Reverted BSWINIT_CALLOUT_STUBS_PATCH_VERSION to 0, as BswInit.c is checking this
                                (check will be changed with next release of Vita module, no check of patch version)
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
#include "BswInit_Callout_Stubs.h"

#include "Os.h"

/*#include "BrsHw.h"*/

/**********************************************************************************************************************
  VERSION CHECK
**********************************************************************************************************************/
#if ((BSWINIT_CALLOUT_STUBS_MAJOR_VERSION != 1U) || \
     (BSWINIT_CALLOUT_STUBS_MINOR_VERSION != 0U) || \
     (BSWINIT_CALLOUT_STUBS_PATCH_VERSION != 0U))
  #error "Vendor specific version numbers of BswInit_Callout_Stubs.c and BswInit_Callout_Stubs.h are inconsistent"
#endif

/**********************************************************************************************************************
  GLOBAL VARIABLES
**********************************************************************************************************************/
#define START_SEC_VAR_ZERO_INIT_16BIT
#include "MemMap.h"
/**
 * \var wBrsMainCallCounter1ms
 *      Counter for calls of the function BrsAsrMainCyclic1ms
 */
static uint16 wBrsMainCallCounter1ms;
static uint16 my_counter = 0;
#define STOP_SEC_VAR 
#include "MemMap.h"
/**********************************************************************************************************************
  GLOBAL CONST VARIABLES
**********************************************************************************************************************/

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

/***********************************************************************************************************************
 *  BswInit_PreInitPowerOn
 **********************************************************************************************************************/
/*! \brief      Can be used for any HW-related initialization, that is not covered by ASR-modules. 
 *  \param[in]  -
 *  \param[out] -
 *  \return     -
 *  \context    Function is called from main-function, placed within BswInit.c,
 *              previous to any other call.
 **********************************************************************************************************************/
void BswInit_PreInitPowerOn(void)
{
  Os_InitMemory();
  Os_Init();

  /*BrsHwDisableInterruptAtPowerOn();*/
/*#if defined (BRSHW_PREINIT_AVAILABLE)
  BrsHwPreInitPowerOn();
#endif*/

}

/***********************************************************************************************************************
 *  BswInit_InitializeOne
 **********************************************************************************************************************/
/*! \brief      Can be used for additional necessary initialization calls (e.g. OS).
 *  \param[in]  -
 *  \param[out] -
 *  \return     -
 *  \context    Function is called from main-function, placed within BswInit.c,
 *              after call of BswInit_PreInitPowerOn().
 **********************************************************************************************************************/
void BswInit_InitializeOne(void)
{
}

/***********************************************************************************************************************
 *  BswInit_InitializeTwo
 **********************************************************************************************************************/
/*! \brief      Can be used for additional necessary initialization calls (e.g. OS).
 *  \param[in]  -
 *  \param[out] -
 *  \return     -
 *  \context    Function is called from main-function, placed within BswInit.c,
 *              previous to call of EcuM_Init().
 **********************************************************************************************************************/
void BswInit_InitializeTwo(void)
{
}

/***********************************************************************************************************************
 *  Additional UserCode can be placed here
 **********************************************************************************************************************/

void BrsAsrMainCyclic10ms(void)
{

  wBrsMainCallCounter1ms++;

  if (wBrsMainCallCounter1ms == 50)
  {
    wBrsMainCallCounter1ms = 0;
    my_counter++;
  }
}

/* Stubs for empty Tasks */
/*
TASK(Default_BSW_Sync_Task)
{
	TerminateTask();
}
*/
TASK(Default_Appl_Init_Task)
{
	TerminateTask();
}
TASK(Default_Appl_Task)
{
	TerminateTask();
}
