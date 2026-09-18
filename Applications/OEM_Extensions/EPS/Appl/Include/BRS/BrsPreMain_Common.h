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
  \file  File:  BrsPreMain_Common.h
      Project:  Vector Basic Runtime System
       Module:  BrsHw for Platform Renesas RH850

  \brief Description:  This header file contains additional information, needed by BrsPreMain-functionality.

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
  01.00.02  2017-06-27  vismkk  Fixed problem with ECC errors during RAM initialization (when 32-bit word RAM is
                                accessed in 8-or 16-bit units - Usage Note 37.3 within manual)
**********************************************************************************************************************/

#ifndef _BRSPREMAIN_COMMON_H_
#define _BRSPREMAIN_COMMON_H_

/***********************************************************************************************************************
 *  ZeroMemory()
 **********************************************************************************************************************/
/*! \brief      Initializes memory with zero
 *  \details    --no details--
 *
 * \param[in,out]  start      Pointer to the first byte
 * \param[in]      end        Pointer to the last  byte
 *
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *
 *  \pre         Supervisor/privilaged mode
 ***********************************************************************************************************************/
static void ZeroMemory(uint32* start, const uint32* end)
{
  while(start <= end)
  {
    *start = 0;
    start++;
  }
}

#endif /*_BRSPREMAIN_COMMON_H_*/
