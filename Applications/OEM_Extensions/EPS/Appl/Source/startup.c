
/**********************************************************************************************************************
  COPYRIGHT
-----------------------------------------------------------------------------------------------------------------------
  \par      copyright
  \verbatim
  Copyright (c) 2015 by Vector Informatik GmbH.                                                  All rights reserved.

                This software is copyright protected and proprietary to Vector Informatik GmbH.
                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
                All other rights remain with Vector Informatik GmbH.
  \endverbatim
-----------------------------------------------------------------------------------------------------------------------
  FILE DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
  \file  File:  startup.c
      Project:  Vector Basic Runtime System
       Module:  BrsHw for Platform RH850
    Generator:  -

  \brief Description:  This file consists of the Startup Code.
**********************************************************************************************************************/

/**********************************************************************************************************************
  AUTHOR IDENTITY
-----------------------------------------------------------------------------------------------------------------------
  Name                          Initials      Company
-----------------------------------------------------------------------------------------------------------------------
  Jan Lutterbeck                visljn        Vector Informatik GmbH
  Torsten Kercher               vistkr        Vector Informatik GmbH
  Alexander Becker              visabc        Vector Informatik GmbH
  Benjamin Walter               visbwa        Vector Informatik GmbH
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
 ----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Description
 ----------------------------------------------------------------------------------------------------------------------
  01.00.00  2012-07-12  visljn  Initial version for RH850
  01.03.00  2013-08-14  visljn  Support for GHS and DiabData compiler
  01.04.00  2013-08-20  vistkr  Use V_ switches
  01.05.00  2013-09-20  visabc  P1X added
  01.06.00  2013-11-11  visljn  R1M added
  01.07.00  2014-01-21  visljn  Cleanup
  01.08.00  2014-05-20  vistkr  Added support for IAR compiler
  02.00.00  2014-07-30  visbwa  Complete rework of zBrs_Rh850, according to styleguide Vector_BrsHw_2.0
  02.00.01  2014-07-30  visbwa  Removed useless include of v_cfg.h
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
/*
 * Description: The BrsHw header provides all the necessary interfaces to
 *              the microcontroller hardware features like ports, timers, LEDs, ...
 *              This file is part of the BRS.
 */

/* #include "BrsHw.h" */
#include "Compiler.h"


#if defined (BRS_COMP_IAR)
/* for IAR, use cstartup from compiler package */
# error "This file is currently not used for IAR compiler!"
# error "The file is already placed into ASM_SOURCES within Makefile"
#endif
___asm(;/* =========================================================================== */)
___asm(;/* Definition of external functions                                            */)
___asm(;/* =========================================================================== */)

___asm(;/* reset */)
___asm(.globl __usr_init)

#if defined (BRS_COMP_GHS)
___asm(.section ".Startup")
#elif defined (BRS_COMP_DIAB)
___asm(.align 2)
___asm(.section .text)
#endif

___asm(;/* =========================================================================== */)
___asm(;/* _RESET                                                                      */)
___asm(;/*                                                                             */)
___asm(;/* Description: Initialize stack pointer, SDA data pointer and text pointer.   */)
___asm(;/*              Configure INTBP and EBASE address.                             */)
___asm(;/*                                                                             */)
___asm(;/* =========================================================================== */)

___asm(;/* _RESET: */)
___asm(__usr_init:)

___asm(;/* =========================================================================== */)
___asm(;/* == COMPILER SPECIFIC INIT                                            ====== */)
___asm(;/* =========================================================================== */)
#if defined (BRS_COMP_GHS)
  ___asm(;/* Initialisation of the global pointer */)
  __as2(movhi hi(___ghsbegin_sdabase), zero, gp)
  __as2(movea lo(___ghsbegin_sdabase), gp, gp)

  ___asm(;/* Initialisation of the text pointer */)
  __as2(movhi hi(___ghsbegin_robase), zero, tp)
  __as2(movea lo(___ghsbegin_robase), tp, tp)

  ___asm(;/* Initialisation of the stack pointer */)
  __as2(movhi hi(___ghsend_stack-4), zero, sp)
  __as2(movea lo(___ghsend_stack-4), sp, sp)
  __as1(mov   -4, r1)
  __as1(and   r1, sp)
#elif defined (BRS_COMP_DIAB)
  ___asm(;/* Initialisation of the stack pointer */)
  __as2(movhi __SP_INIT@ha,r0,r10 ;/* Initialize stack pointer - value defined in linker command file*/)
  __as2(movea __SP_INIT@l,r10,sp)
  __as2(addi -16,sp,sp)
  __as1(st.w r0,0[sp])

  ___asm(;/* Initialisation of the global pointer */)
  __as2(movhi _SDA_BASE_@ha,r0,gp  ;/* Initialize SDA (short data access for RAM) base register - value provided by linker*/)
  __as2(movea _SDA_BASE_@l,gp,gp )

  ___asm(;/* Initialisation of the text pointer */)
  __as2(movhi _SDA2_BASE_@ha,r0,tp ;/* Initialize SDA2 (short data access for ROM) base register - value provided by linker*/)
  __as2(movea _SDA2_BASE_@l,tp,tp)
#endif

  ___asm(;/* Set INTBP base address for interrupt handler table */)
  __as1(mov   BRS_INT_INTBP, r6;/* exception handler base address*/)
  __as2(ldsr  r6, 4, 1;/* INTBP*/)
  __as2(stsr  4, r6, 1;/* INTBP*/)

  ___asm(;/* Set EBASE register value */)
  __as1(mov   BRS_INT_EBASE, r6)
  __as2(ldsr  r6,3,1)
  __as2(stsr  3, r6, 1)
  __as1(mov   zero, r6)

  ___asm(;/* set PSW.EBV bit to 1 to use EBASE as exception vector base address */)
  __as2(stsr  5, r1, 0)
  __as1(mov   0x8000, r2)
  __as1(or    r2, r1)
  __as2(ldsr  r1, 5, 0)
  
#if defined (BRS_COMP_GHS)
  ___asm(;/* Jump to the Initialisation functions of the GHS "crt.o" library ! */)
  ___asm(jr __start)
#elif defined (BRS_COMP_DIAB)
  __as1(jarl ___init_main, r31; /* Finish initialization */)
#endif

___asm(;/*-------------------------------------------------------------------------------*/)
