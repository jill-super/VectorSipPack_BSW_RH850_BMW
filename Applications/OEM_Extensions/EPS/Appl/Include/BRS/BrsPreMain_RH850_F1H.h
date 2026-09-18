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
  \file  File:  BrsPreMain_RH850_F1H.h
      Project:  Vector Basic Runtime System
       Module:  BrsHw for Platform Renesas RH850

  \brief Description:  This header file contains additional, derivative family specific information,
                       needed by BrsPreMain-functionality.

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
  01.00.01  2017-05-17  visbwa  Added revision history,
                                removed unnecessary includes of Std_Types.h and BrsLinkerSections.h
**********************************************************************************************************************/

#ifndef _BRSPREMAIN_RH850_F1H_H_
#define _BRSPREMAIN_RH850_F1H_H_

/* PE GUARD Registers */
#define CPU_PEGSP      *((volatile uint16*)0xFFFEE60CUL)
#define CPU_PEGG0MK    *((volatile uint32*)0xFFFEE680UL)
#define CPU_PEGG0BA    *((volatile uint32*)0xFFFEE684UL)
#define CPU_PEGG1MK    *((volatile uint32*)0xFFFEE690UL)
#define CPU_PEGG1BA    *((volatile uint32*)0xFFFEE694UL)
#define CPU_PEGG2MK    *((volatile uint32*)0xFFFEE6A0UL)
#define CPU_PEGG2BA    *((volatile uint32*)0xFFFEE6A4UL)
#define CPU_PEGG3MK    *((volatile uint32*)0xFFFEE6B0UL)
#define CPU_PEGG3BA    *((volatile uint32*)0xFFFEE6B4UL)

/***********************************************************************************************************************
 *  InitPEGuard()
 **********************************************************************************************************************/
/*! \brief      Initializes PEGuards for cross core local ram read/write access
 *  \details    -
 *
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *
 *  \pre         Supervisor/privilaged mode
 *  \pre         Derivative F1H
 ***********************************************************************************************************************/
static void InitPEGuard(void)
{
  CPU_PEGSP   = (uint16)0x0001;     /* enable access via SPID */
  CPU_PEGG0MK = (uint32)0x0003F000; /* first write to mask register because this clears PEGG0BA.GnEN; Support local memory up to 256k */
  CPU_PEGG0BA = (((uint32)(_Local_RAM_Core1_Section_StartAddr) & 0xFFFF0000) | 0x4077); /* allow core 0 R/W and external master to access local RAM 1 */
  CPU_PEGG1MK = (uint32)0x0003F000; /* first write to mask register because this clears PEGG1BA.GnEN; Support local memory up to 256k */
  CPU_PEGG1BA = (((uint32)(_Local_RAM_Core0_Section_StartAddr) & 0xFFFF0000) | 0x4077); /* allow core 1 R/W and external master to access local RAM 0 */
}

#endif /*_BRSPREMAIN_RH850_F1H_H_*/
