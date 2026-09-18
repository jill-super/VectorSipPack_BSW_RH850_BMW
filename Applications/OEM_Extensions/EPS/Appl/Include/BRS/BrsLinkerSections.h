
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
  \file  File:  BrsLinkerSections.h
      Project:  Vector Basic Runtime System
       Module:  BrsHw for Platform Renesas RH850

  \brief Description:  This header file contains the information about linker sections, defined by Linkerscript and
                       used by BrsPreMain/StartUp Code.

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

#ifndef _BRSLINKERSECTIONS_H_
# define _BRSLINKERSECTIONS_H_

/***********************************************************************************************************************
 *  Derivative family independent linker sections
 **********************************************************************************************************************/

extern uint32 _Local_RAM_Core0_Section_StartAddr[];

extern uint32 _Local_RAM_DATA_Core0_Section_StartAddr[];
extern uint32 _Local_RAM_DATA_Core0_Section_EndAddr[];

extern uint32 _Global_RAM_1_Section_StartAddr[];
extern uint32 _Global_RAM_1_Section_EndAddr[];

 /***********************************************************************************************************************
 *  Linker sections for F1H derivatives
 **********************************************************************************************************************/
# if defined(BRS_DERIVATIVE_GROUP_F1H)
extern uint32 _Local_RAM_Core1_Section_StartAddr[];

extern uint32 _Local_RAM_DATA_Core1_Section_StartAddr[];
extern uint32 _Local_RAM_DATA_Core1_Section_EndAddr[];
# endif

#endif /*_BRSLINKERSECTIONS_H_*/
