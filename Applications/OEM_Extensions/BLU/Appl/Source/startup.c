
/**********************************************************************************************************************
  COPYRIGHT
-----------------------------------------------------------------------------------------------------------------------
  \par      copyright
  \verbatim
  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.

                This software is copyright protected and proprietary to Vector Informatik GmbH.
                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
                All other rights remain with Vector Informatik GmbH.
  \endverbatim
-----------------------------------------------------------------------------------------------------------------------
  FILE DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
  \file  File:  startup.c
      Project:  Vector Basic Runtime System for BLU
       Module:  Startup for Platform RH850
    Generator:  -

  \brief Description:  This file consists of the Startup Code.
**********************************************************************************************************************/

/**********************************************************************************************************************
  AUTHOR IDENTITY
-----------------------------------------------------------------------------------------------------------------------
  Name                          Initials      Company
-----------------------------------------------------------------------------------------------------------------------
  Markus Feninger               visfr         Vector Informatik GmbH
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
 ----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Change Id     Description
 ----------------------------------------------------------------------------------------------------------------------
  01.00.00  2015-04-23  visfr   -             Initial version for BLU
  01.01.00  2016-01-26  visfr   -             Updated interrupt and exception handling
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "v_cfg.h"

#pragma asm
--------------------------------------------------------------------------
--------------- Definition of external functions -------------------------
--------------------------------------------------------------------------
.globl __usr_init
.extern __start

-- macro to generate count nop instructions
.macro nops count
.rept count
nop
.endr
.endm

--------------------------------------------------------------------------
.section ".Startup",.text
--------------------------------------------------------------------------
--------------- Basic Initialisation of the controller -------------------
--------------------------------------------------------------------------
__usr_init:
  -- Initialization of the global pointer
  movhi hi(___ghsbegin_sdabase),zero,gp
  movea lo(___ghsbegin_sdabase),gp,gp

  -- Initialization of the text pointer
  movhi hi(___ghsbegin_robase),zero,tp
  movea lo(___ghsbegin_robase),tp,tp

  -- Initialization of the stack pointer and align it
  movhi hi(___ghsend_stack-4),zero,sp
  movea lo(___ghsend_stack-4),sp,sp
  mov -4,r1
  and r1,sp

  -- Initialization of the interrupt base pointer (ISRs not used in BLU)
  movhi	hi(IVector),zero,r1
  movea	lo(IVector),r1,r1
  ldsr r1,intbp,1
  
  -- Initialization of the exception handler base pointer
  movhi	hi(XVector),zero,r1
  movea	lo(XVector),r1,r1
  ldsr r1,ebase,1  

  -- set PSW.EBV bit to 1 to use EBASE as exception vector base address
  stsr 5,r1,0
  mov 0x8000,r2
  or r2,r1
  ldsr r1,5,0

  -- Jump to the initialisation functions of the library
  -- and from there to main()
  jr __start

--===========================================================================--
-- Exception interrupt vector table of BLU (Redirect everything to reset)
--===========================================================================--
.align 4
.section ".ExceptionVectorTable",.text

.globl XVector
XVector:
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6
  jr __usr_init
  nops 6

--===========================================================================--
-- Interrupt vector table of BLU (Redirect everything to reset)
--===========================================================================--
-- Interrupts normally not used in BLU
.align 4
.section ".IntVectorTable",.text

.globl IVector
IVector:
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init
  .word __usr_init

#pragma endasm
