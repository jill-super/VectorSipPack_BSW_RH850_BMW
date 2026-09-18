
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
      Project:  Vector Basic Runtime System for BM
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
  01.00.00  2015-04-22  visfr   -             Initial version for BM
  01.01.00  2016-01-21  visfr   -             Added register set up and reset reason check incl. RAM initalization
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "v_cfg.h"

#define IRAM_START  0xFEDE0000
#define IRAM_END    0xFEDFFFFF

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

--===========================================================================--
-- Initialize CPU register to avoid Compare Unit Mismatch Error
--===========================================================================--
  mov     r0,     r1
  mov     r0,     r2
  mov     r0,     r3
  mov     r0,     r4
  mov     r0,     r5
  mov     r0,     r6
  mov     r0,     r7
  mov     r0,     r8
  mov     r0,     r9
  mov     r0,     r10
  mov     r0,     r11
  mov     r0,     r12
  mov     r0,     r13
  mov     r0,     r14
  mov     r0,     r15
  mov     r0,     r16
  mov     r0,     r17
  mov     r0,     r18
  mov     r0,     r19
  mov     r0,     r20
  mov     r0,     r21
  mov     r0,     r22
  mov     r0,     r23
  mov     r0,     r24
  mov     r0,     r25
  mov     r0,     r26
  mov     r0,     r27
  mov     r0,     r28
  mov     r0,     r29
  mov     r0,     r30
  mov     r0,     r31

--===========================================================================--
-- Initialisation of some SYSTEM PARAMETERS for GHS
--===========================================================================--
  -- Initialization of the global pointer
  movhi	hi(___ghsbegin_sdabase),zero,gp
  movea	lo(___ghsbegin_sdabase),gp,gp

  -- Initialization of the text pointer
  movhi	hi(___ghsbegin_robase),zero,tp
  movea	lo(___ghsbegin_robase),tp,tp

  -- Initialization of the stack pointer
  movhi	hi(___ghsend_stack-4),zero,sp
  movea	lo(___ghsend_stack-4),sp,sp
  mov -4,r1
  and r1,sp

--===========================================================================--
-- Initialisation of the interrupt and exception interrupt base pointer
--===========================================================================--
  -- Initialization of the interrupt base pointer (ISRs not used in BM)
  mov 0x00000200u,r1
  ldsr r1,intbp,1

  -- Initialization of the exception handler base pointer
  movhi	hi(XVector),zero,r1
  movea	lo(XVector),r1,r1
  ldsr r1,ebase,1  

--===========================================================================--
-- Check for reset reasons
--===========================================================================--
  -- Determine whether VCC detects the transition of the power from off to on (POF)
  ld.w      -480240[r0], r18
  andi      0x1, r18, r19
  bz        clear_iRAM_done

  -- Cold start detected, clear corresponding flag (POFC)
  -- ld.w      -480236[r0], r18
  -- addi      0x200, r0, r17
  -- or        r17, r18
  st.w      r18, -480236[r0]

  -- Clear RAM with value of 0
  mov     IRAM_START, r6                          -- r6 = Start address
  mov     (IRAM_END +1 - IRAM_START) >> 2, r7     -- r7 = Word(32-Bit) count
clear_iRAM:
  st.w    r0, 0[r6]                               -- store 0 to address which is in r6
  add     4, r6                                   -- increment address
  loop    r7, clear_iRAM                          -- loop until all bytes written

clear_iRAM_done:

--===========================================================================--
-- End of startup code
--===========================================================================--
  -- Jump to the initialisation functions of the library
  -- and from there to main()
  jr __start


--===========================================================================--
-- Exception interrupt vector redirection table
--===========================================================================--
.align 4
.section ".intvect",.text
.globl ExceptionVector_0x00
ExceptionVector_0x00:
  jr __usr_init
  nops 6

.globl ExceptionVector_0x10
ExceptionVector_0x10:
  stsr ebase,r23
  jmp 0x10[r23]
  nops 3

.globl ExceptionVector_0x20
ExceptionVector_0x20:
  stsr ebase,r23
  jmp 0x20[r23]
  nops 3

.globl ExceptionVector_0x30
ExceptionVector_0x30:
  stsr ebase,r23
  jmp 0x30[r23]
  nops 3

.globl ExceptionVector_0x40
ExceptionVector_0x40:
  stsr ebase,r23
  jmp 0x40[r23]
  nops 3

.globl ExceptionVector_0x50
ExceptionVector_0x50:
  stsr ebase,r23
  jmp 0x50[r23]
  nops 3

.globl ExceptionVector_0x60
ExceptionVector_0x60:
  stsr ebase,r23
  jmp 0x60[r23]
  nops 3

.globl ExceptionVector_0x70
ExceptionVector_0x70:
  stsr ebase,r23
  jmp 0x70[r23]
  nops 3

.globl ExceptionVector_0x80
ExceptionVector_0x80:
  stsr ebase,r23
  jmp 0x80[r23]
  nops 3

.globl ExceptionVector_0x90
ExceptionVector_0x90:
  stsr ebase,r23
  jmp 0x90[r23]
  nops 3
   
.globl ExceptionVector_0xA0
ExceptionVector_0xA0:
  stsr ebase,r23
  jmp 0xA0[r23]
  nops 3

.globl ExceptionVector_0xB0
ExceptionVector_0xB0:
  stsr ebase,r23
  jmp 0xB0[r23]
  nops 3

.globl ExceptionVector_0xC0
ExceptionVector_0xC0:
  stsr ebase,r23
  jmp 0xC0[r23]
  nops 3

.globl ExceptionVector_0xD0
ExceptionVector_0xD0:
  stsr ebase,r23
  jmp 0xD0[r23]
  nops 3

.globl ExceptionVector_0xE0
ExceptionVector_0xE0:
  stsr ebase,r23
  jmp 0xE0[r23]
  nops 3

.globl ExceptionVector_0xF0
ExceptionVector_0xF0:
  stsr ebase,r23
  jmp 0xF0[r23]
  nops 3

.globl ExceptionVector_0x100
ExceptionVector_0x100:
  stsr ebase,r23
  jmp 0x100[r23]
  nops 3

.globl ExceptionVector_0x110
ExceptionVector_0x110:
  stsr ebase,r23
  jmp 0x110[r23]
  nops 3

.globl ExceptionVector_0x120
ExceptionVector_0x120:
  stsr ebase,r23
  jmp 0x120[r23]
  nops 3

.globl ExceptionVector_0x130
ExceptionVector_0x130:
  stsr ebase,r23
  jmp 0x130[r23]
  nops 3

.globl ExceptionVector_0x140
ExceptionVector_0x140:
  stsr ebase,r23
  jmp 0x140[r23]
  nops 3

.globl ExceptionVector_0x150
ExceptionVector_0x150:
  stsr ebase,r23
  jmp 0x150[r23]
  nops 3

.globl ExceptionVector_0x160
ExceptionVector_0x160:
  stsr ebase,r23
  jmp 0x160[r23]
  nops 3

.globl ExceptionVector_0x170
ExceptionVector_0x170:
  stsr ebase,r23
  jmp 0x170[r23]
  nops 3

.globl ExceptionVector_0x180
ExceptionVector_0x180:
  stsr ebase,r23
  jmp 0x180[r23]
  nops 3

.globl ExceptionVector_0x190
ExceptionVector_0x190:
  stsr ebase,r23
  jmp 0x190[r23]
  nops 3
   
.globl ExceptionVector_0xA0
ExceptionVector_0x1A0:
  stsr ebase,r23
  jmp 0x1A0[r23]
  nops 3

.globl ExceptionVector_0x1B0
ExceptionVector_0x1B0:
  stsr ebase,r23
  jmp 0x1B0[r23]
  nops 3

.globl ExceptionVector_0x1C0
ExceptionVector_0x1C0:
  stsr ebase,r23
  jmp 0x1C0[r23]
  nops 3

.globl ExceptionVector_0x1D0
ExceptionVector_0x1D0:
  stsr ebase,r23
  jmp 0x1D0[r23]
  nops 3

.globl ExceptionVector_0x1E0
ExceptionVector_0x1E0:
  stsr ebase,r23
  jmp 0x1E0[r23]
  nops 3

.globl ExceptionVector_0x1F0
ExceptionVector_0x1F0:
  stsr ebase,r23
  jmp 0x1F0[r23]
  nops 3
  
--===========================================================================--
-- Exception interrupt vector table of BM (Redirect everything to reset)
--===========================================================================--
.globl XVector
XVector:
  nops 8
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
-- Interrupt vector table
--===========================================================================--  
-- Interrupts not used in BM
-- .align 4
-- .section ".intvect",.text

#pragma endasm

