
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
  \file  File:  BrsStartup_c0.c
      Project:  Vector Basic Runtime System
       Module:  BrsHw for Platform RH850

  \brief Description:  This file contains the StartUpCode for Core0 in UseCase OsGen7 and GHS compiler.

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
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
 ----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Description
  --------  ----------  ------  ---------------------------------------------------------------------------------------
  01.00.00  2017-04-28  vismkk  Rework of startup to comply with OsGen7 with GHS startup requirements
  01.00.01  2017-05-09  vismkk  Fixed FPU Function Registers initialization
  01.00.02  2017-06-26  vismkk  Fixed exit condition of stack initialization
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

#if defined (BRS_COMP_IAR) || defined (BRS_COMP_RENESAS)
/* for IAR, use cstartup from compiler package */
/* for Renesas, use cstart.asm and vecttbl.asm from compiler package (or use the sample within BRS) */
# error "This file is currently not used for IAR/Renesas compiler!"
# error "The file is already placed into ASM_SOURCES within Makefile"
#endif

___asm(;/* =========================================================================== */)
___asm(;/* Minimal reset vector at entry address (e. g. 0x0)                           */)
___asm(;/* =========================================================================== */)

    __as1(.section ".bcode0", "ax")
   ___asm(.align 16)
   ___asm(jr32   _RESET_CORE0)
   ___asm(nop)
   ___asm(nop)
   ___asm(nop)
   ___asm(.align 16)
   ___asm(jr32  _BrsHwDummyInterrupt)
   ___asm(nop)
   ___asm(nop)
   ___asm(nop)

___asm(;/* =========================================================================== */)
___asm(;/* Definition of external functions                                            */)
___asm(;/* =========================================================================== */)

___asm(;/* =========================================================================== */)
___asm(;/* --usr_init (_RESET)                                                         */)
___asm(;/*                                                                             */)
___asm(;/* Description: Detect the CPU Core by reading the HTCFG0 register and call    */)
___asm(;/*              the core specific startup routine.                             */)
___asm(;/*              CPU1 (PE1): 0x00018000                                         */)
___asm(;/*              CPU2 (PE2): 0x00028000                                         */)
___asm(;/*                                                                             */)
___asm(;/*                                                                             */)
___asm(;/* =========================================================================== */)
___asm(.section ".text")
___asm(;/* reset */)
___asm(.globl __usr_init)
___asm(.weak __usr_init_c1; /* Set __usr_init_c1 to 0 if it cannot be located in any module */)
___asm(;/* _RESET: */)
___asm(__usr_init:)
 __as2(stsr  0, r11, 2)
 __as1(shr   17, r11)
___asm(bz   __usr_init_c0)
___asm(jr32  __usr_init_c1)
___asm(;/* =========================================================================== */)
___asm(;/*                                                                             */)
___asm(;/* Description: Initialize stack pointer, SDA data pointer and text pointer.   */)
___asm(;/*              Configure INTBP and EBASE address.                             */)
___asm(;/*                                                                             */)
___asm(;/* =========================================================================== */)
___asm(.globl __usr_init_c0)
___asm(__usr_init_c0:)

___asm(;/* General Purpose Registers */)
___asm(.section ".startup")
__as1(mov r0, r1)
__as1(mov r0, r2)
__as1(mov r0, r3)
__as1(mov r0, r4)
__as1(mov r0, r5)
__as1(mov r0, r6)
__as1(mov r0, r7)
__as1(mov r0, r8)
__as1(mov r0, r9)
__as1(mov r0, r10)
__as1(mov r0, r11)
__as1(mov r0, r12)
__as1(mov r0, r13)
__as1(mov r0, r14)
__as1(mov r0, r15)
__as1(mov r0, r16)
__as1(mov r0, r17)
__as1(mov r0, r18)
__as1(mov r0, r19)
__as1(mov r0, r20)
__as1(mov r0, r21)
__as1(mov r0, r22)
__as1(mov r0, r23)
__as1(mov r0, r24)
__as1(mov r0, r25)
__as1(mov r0, r26)
__as1(mov r0, r27)
__as1(mov r0, r28)
__as1(mov r0, r29)
__as1(mov r0, r30)
__as1(mov r0, r31)

___asm(; /*  Basic System Registers */ )
__as1(ldsr r0, EIPC)
__as1(ldsr r0, FEPC)
__as1(ldsr r0, CTPC)
__as1(ldsr r0, CTBP)
__as1(ldsr r0, EIWR)
__as1(ldsr r0, FEWR)
__as2(ldsr r0, EBASE, 1)
__as2(ldsr r0, INTBP, 1)
__as2(ldsr r0, SCCFG, 1)
__as2(ldsr r0, SCBP, 1)
__as2(ldsr r0, MEA, 2)
__as2(ldsr r0, ASID, 2)
__as2(ldsr r0, MEI, 2)

___asm(; /*  Setup initial core exception table */ )
 __as1(mov   __BRS_Default_CoreExceptionTable_StartAddr, r11)
 __as1(ldsr   r11, EBASE)
 __as1(mov 0x00008020, r6; /* Disable interrupts and PSW.EBV bit to 1. */)
 __as1(ldsr r6, PSW ;)
 
___asm(;/* Setup initial interrupt handler table */)
  __as1(mov   __BRS_Default_ExceptionTable_StartAddr, r6;/* exception handler base address*/)
  __as1(ldsr r6, INTBP;/* INTBP*/)

# if defined(__RH850G3M__) || defined(__RH850G3MH__)
___asm(; /* Hardware Thread Function Registers */)
 __as2(ldsr r0, TCSEL, 1)

___asm(; /* Virtualization Support Function Registers */)
 __as2(ldsr r0, HVCCFG, 1)
 __as2(ldsr r0, HVCBP, 1)
 __as2(ldsr r0, VCSEL, 1)
#endif
 
# if ( defined(__NoFloat__) || defined(__SoftwareFloat__) )
___asm(; /* No hardware floating point support according to GHS compiler options.*/)
___asm(; /* Skip FPU function register initialization.*/)
# else
___asm(; /* FPU Function Registers */)
 __as1(stsr PSW, r1; /* Enable access to FPU co processor */)
 __as1(mov  0x10000, r2)
 __as1(or   r2, r1)
 __as1(ldsr r1, PSW)
 __as1(ldsr r6, FPSR; /* Initial value after reset FPSR.FS=1 */ )
 __as1(ldsr r0, FPEPC)
 __as1(ldsr r0, FPST)
 __as1(ldsr r0, FPCC)
 __as1(ldsr r0, FPCFG)
 __as1(ldsr r0, FPEC)
# endif

___asm(; /* MPU Function registers */)
__as2(ldsr r0, MCA, 5)
__as2(ldsr r0, MCS, 5)
__as2(ldsr r0, MCR, 5)
__as2(ldsr r0, MPLA0, 6)
__as2(ldsr r0, MPUA0, 6)
__as2(ldsr r0, MPAT0, 6)
__as2(ldsr r0, MPLA1, 6)
__as2(ldsr r0, MPUA1, 6)
__as2(ldsr r0, MPAT1, 6)
__as2(ldsr r0, MPLA2, 6)
__as2(ldsr r0, MPUA2, 6)
__as2(ldsr r0, MPAT2, 6)
__as2(ldsr r0, MPLA3, 6)
__as2(ldsr r0, MPUA3, 6)
__as2(ldsr r0, MPAT3, 6)
__as2(ldsr r0, MPLA4, 6)
__as2(ldsr r0, MPUA4, 6)
__as2(ldsr r0, MPAT4, 6)
__as2(ldsr r0, MPLA5, 6)
__as2(ldsr r0, MPUA5, 6)
__as2(ldsr r0, MPAT5, 6)
__as2(ldsr r0, MPLA6, 6)
__as2(ldsr r0, MPUA6, 6)
__as2(ldsr r0, MPAT6, 6)
__as2(ldsr r0, MPLA7, 6)
__as2(ldsr r0, MPUA7, 6)
__as2(ldsr r0, MPAT7, 6)
__as2(ldsr r0, MPLA8, 7)
__as2(ldsr r0, MPUA8, 7)
__as2(ldsr r0, MPAT8, 7)
__as2(ldsr r0, MPLA9, 7)
__as2(ldsr r0, MPUA9, 7)
__as2(ldsr r0, MPAT9, 7)
__as2(ldsr r0, MPLA10, 7)
__as2(ldsr r0, MPUA10, 7)
__as2(ldsr r0, MPAT10, 7)
__as2(ldsr r0, MPLA11, 7)
__as2(ldsr r0, MPUA11, 7)
__as2(ldsr r0, MPAT11, 7)

# if defined(__RH850G3M__) || defined(__RH850G3MH__)
___asm(; /* Cache Operation Function Registers */)
__as2(ldsr r0, ICTAGL, 4)
__as2(ldsr r0, ICTAGH, 4)
__as2(ldsr r0, ICDATL, 4)
__as2(ldsr r0, ICDATH, 4)
__as2(ldsr r0, ICERR, 4)
# endif

  ___asm(;/* Initialisation of the global pointer */)
  __as1(mov   __gp, gp)

  ___asm(;/* Initialisation of the text pointer */)
  __as1(mov   __tp, tp)

___asm(;/* =========================================================================== */)
___asm(;/* == STACK INITIALIZATION                                              ====== */)
___asm(;/* == Zero init stack area to avoid ECC errors and initialize the stack ====== */)
___asm(;/* == pointer.                                                          ====== */)
___asm(;/* =========================================================================== */)
  ___asm(;/* Initialisation of the stack pointer */)
  __as1(mov __StartupStack_Core0, sp)

  __as1(mov  __Local_RAM_STACK_Core0_Section_StartAddr, r11 ; /* start address (provided by linker file */)
  __as1(mov  __Local_RAM_STACK_Core0_Section_EndAddr, r12 ; /* end address (provided by linker file */)

___asm(;/* Initialize RAM with zeros */)
  ___asm(_zero_init_stack:)
  __as1(st.w  r0, 0[r11])
  __as2(addi  4, r11, r11)
  __as1(cmp   r11, r12)
  ___asm(bh    _zero_init_stack)

  ___asm(;/* Jump to core specific PreMain function. */)
  ___asm(jr _PreMain_c0)

___asm(;/*-------------------------------------------------------------------------------*/)
