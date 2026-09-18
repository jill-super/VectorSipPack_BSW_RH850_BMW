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
  \file  File:  BrsPreMain_c0.c
      Project:  Vector Basic Runtime System
       Module:  BrsHw for Platform RH850

  \brief Description:  This file contains the BrsPreMain-functionality for Core0.

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
  Michael Kock                  vismkk        Vector Informatik GmbH
  Benjamin Walter               visbwa        Vector Informatik GmbH
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
 ----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Description
  --------  ----------  ------  ---------------------------------------------------------------------------------------
  01.00.00  2017-05-09  vismkk  Initial version for RH850
  01.00.01  2017-05-17  visbwa  Added revision history, removed unnecessary include of Std_Types.h
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
#include "BrsHw.h"

#include "BrsPreMain_Common.h"
#include "BrsLinkerSections.h"
#if defined(BRS_DERIVATIVE_GROUP_F1H)
# include "BrsPreMain_RH850_F1H.h"
#endif

/**********************************************************************************************************************
  GLOBAL VARIABLES
**********************************************************************************************************************/
/* Greenhills startup code. */
extern void _start(void);

/**********************************************************************************************************************
  FUNCTION DEFINITIONS
**********************************************************************************************************************/

/*****************************************************************************/
/**
 * @brief      Derivative specific pre initialization before main
 * @pre        Supervisor/privilaged mode, zero init stack and initialized stack pointer.
 * @param[in]  -
 * @param[out] -
 * @return     -
 * @context    Function is called from Core0 StartUpCode
 */
/*****************************************************************************/
void PreMain_c0(void)
{
  /* Disable PEGuards */
#if defined(BRS_DERIVATIVE_GROUP_F1H)
  InitPEGuard();
#endif

#if defined(BRSHW_PREINIT_AVAILABLE)
  BrsHwPreInitPowerOn();
#endif

  /* Zero init all data memory. (Stacks must be zero init before calling PreMain) */  
  ZeroMemory(_Local_RAM_DATA_Core0_Section_StartAddr, _Local_RAM_DATA_Core0_Section_EndAddr);

#if defined(BRS_DERIVATIVE_GROUP_F1H)
  ZeroMemory(_Local_RAM_DATA_Core1_Section_StartAddr, _Local_RAM_DATA_Core1_Section_EndAddr);
#endif
  
  ZeroMemory(_Global_RAM_1_Section_StartAddr, _Global_RAM_1_Section_EndAddr);

  /* Call GHS startup code. */
  _start();
}