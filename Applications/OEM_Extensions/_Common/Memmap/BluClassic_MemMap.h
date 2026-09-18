/**
*  \file
*
*  \brief       BMW Module Blu
*
*  This file is a sample for the memory mapping header file of the BMW AUTOSAR Core
*  module "BluClassic".
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.0.1
*
*  \remarks     This file contains all memory mapping macros of the module "BluClassic".
*
*/


/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 19.6, Reason: #undef is necessary according to memory abstraction
   PRQA S 0841 EOF

   MISRA-C:2004 Rule 19.15, Reason: File must be included repeatedly according to
   memory abstraction
   PRQA S 0883 EOF */

/*
#error "This file must be integrated and adapted to the memory layout of your project. \
        Please refer to the integration manual."
*/
#if 0
/*-------------------------------------------
   START Sections
--------------------------------------------*/
#elif defined (BluClassic_START_SEC_CODE)
  #undef BluClassic_START_SEC_CODE
   /*@@@visbch: Mapping to global section in MemMap.h*/
  #define START_SEC_CODE                            /* mapped to default code section */
  #ifdef CHK_BluClassic_SEC_STARTED
    #error "Blu section not closed"
  #endif
  #define CHK_BluClassic_SEC_STARTED
  #define CHK_BluClassic_SEC_CODE_STARTED

#elif defined (BluClassic_START_SEC_CONST_SWEFLASHSTATUSCHECKSUM)
  #undef BluClassic_START_SEC_CONST_SWEFLASHSTATUSCHECKSUM
   /*@@@visbch: Mapping to global section in MemMap.h*/
  #define START_SEC_CONST_8BIT
//  #pragma ghs section rodata"BLUSWESTATUSCHECKSUM"

  #ifdef CHK_BluClassic_SEC_CONST_SWEFLASHSTATUSCHECKSUM
    #error "BluClassic_SEC_CONST_SWEFLASHSTATUSCHECKSUM already open"
  #endif
  #define CHK_BluClassic_SEC_CONST_SWEFLASHSTATUSCHECKSUM


#elif defined (BluClassic_START_SEC_CONST_SWEFLASHSTATUSVALIDFLAG)
  #undef BluClassic_START_SEC_CONST_SWEFLASHSTATUSVALIDFLAG
  /*@@@visbch: Mapping to global section in MemMap.h*/
  #define START_SEC_CONST_16BIT
  #pragma ghs startdata
  #pragma ghs section rodata="BLUSTAT"

  #ifdef CHK_BluClassic_SEC_CONST_SWEFLASHSTATUSVALIDFLAG
    #error "BluClassic_SEC_CONST_SWEFLASHSTATUSVALIDFLAG already open"
  #endif
  #define CHK_BluClassic_SEC_CONST_SWEFLASHSTATUSVALIDFLAG



#elif defined (BluClassic_START_SEC_CONST_SWETABLE)
  #undef BluClassic_START_SEC_CONST_SWETABLE
  /*@@@visbch: Mapping to global section in MemMap.h*/
  #ifdef CHK_BluClassic_SEC_CONST_SWETABLE
    #error "BluClassic_SEC_CONST_SWETABLE already open"
  #endif
  #define CHK_BluClassic_SEC_CONST_SWETABLE

  #define START_SEC_CONST_UNSPECIFIED

  #pragma ghs startdata
  #pragma ghs section rodata="SWE1DESC"
 



#elif defined (BluClassic_START_SEC_CONST_UNSPECIFIED)
  #undef BluClassic_START_SEC_CONST_UNSPECIFIED
  /*@@@visbch: Mapping to global section in MemMap.h*/
  #define START_SEC_CONST_UNSPECIFIED
  #ifdef CHK_BluClassic_SEC_CONST_UNSPECIFIED
    #error "BluClassic_SEC_CONST_UNSPECIFIED already open"
  #endif
  #define CHK_BluClassic_SEC_CONST_UNSPECIFIED




#elif defined (BluClassic_START_SEC_VAR_FLASHBUFFER)
  #undef BluClassic_START_SEC_VAR_FLASHBUFFER
  /*@@@visbch: Mapping to global section in MemMap.h*/
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
  #ifdef CHK_BluClassic_SEC_VAR_FLASHBUFFER
    #error "BluClassic_SEC_VAR_FLASHBUFFER already open"
  #endif
  #define CHK_BluClassic_SEC_VAR_FLASHBUFFER


#elif defined (BluClassic_START_SEC_VAR_NO_INIT_8)
  #undef BluClassic_START_SEC_VAR_NO_INIT_8
  /*@@@visbch: Mapping to global section in MemMap.h*/
  #define START_SEC_VAR_NOINIT_8BIT
  #ifdef CHK_BluClassic_SEC_VAR_NO_INIT_8
    #error "BluClassic_SEC_VAR_NO_INIT_8 already open"
  #endif
  #define CHK_BluClassic_SEC_VAR_NO_INIT_8


#elif defined (BluClassic_START_SEC_VAR_NO_INIT_UNSPECIFIED)
  #undef BluClassic_START_SEC_VAR_NO_INIT_UNSPECIFIED
  /*@@@visbch: Mapping to global section in MemMap.h*/
  #define START_SEC_VAR_NOINIT_UNSPECIFIED
  #ifdef CHK_BluClassic_SEC_VAR_NO_INIT_UNSPECIFIED
    #error "BluClassic_SEC_VAR_NO_INIT_UNSPECIFIED already open"
  #endif
  #define CHK_BluClassic_SEC_VAR_NO_INIT_UNSPECIFIED

/*-------------------------------------------
   STOP Sections
--------------------------------------------*/
#elif defined (BluClassic_STOP_SEC_CODE)
  #undef BluClassic_STOP_SEC_CODE
   /*@@@visbch: Mapping to global section in MemMap.h*/
  #define STOP_SEC_CODE                             /* default code stop section */
  #ifndef CHK_BluClassic_SEC_CODE_STARTED
    #error "Blu_SEC_CODE not opened"
  #endif
  #undef CHK_BluClassic_SEC_STARTED
  #undef CHK_BluClassic_SEC_CODE_STARTED

#elif defined (BluClassic_STOP_SEC_CONST_SWEFLASHSTATUSCHECKSUM)
  #undef BluClassic_STOP_SEC_CONST_SWEFLASHSTATUSCHECKSUM
   /*@@@visbch: Mapping to global section in MemMap.h*/
  #ifndef CHK_BluClassic_SEC_CONST_SWEFLASHSTATUSCHECKSUM
    #error "BluClassic_SEC_CONST_SWEFLASHSTATUSCHECKSUM not open"
  #endif
  #undef CHK_BluClassic_SEC_CONST_SWEFLASHSTATUSCHECKSUM

  #define STOP_SEC_CONST                             /* default code stop section */



#elif defined (BluClassic_STOP_SEC_CONST_SWEFLASHSTATUSVALIDFLAG)
  #undef BluClassic_STOP_SEC_CONST_SWEFLASHSTATUSVALIDFLAG
   /*@@@visbch: Mapping to global section in MemMap.h*/
  #ifndef CHK_BluClassic_SEC_CONST_SWEFLASHSTATUSVALIDFLAG
    #error "BluClassic_SEC_CONST_SWEFLASHSTATUSVALIDFLAG not open"
  #endif
  #undef CHK_BluClassic_SEC_CONST_SWEFLASHSTATUSVALIDFLAG
  
  #pragma ghs section rodata=default
  #pragma ghs enddata
  #define STOP_SEC_CONST                             /* default code stop section */



#elif defined (BluClassic_STOP_SEC_CONST_SWETABLE)
  #undef BluClassic_STOP_SEC_CONST_SWETABLE
   /*@@@visbch: Mapping to global section in MemMap.h*/
  #ifndef CHK_BluClassic_SEC_CONST_SWETABLE
    #error "BluClassic_SEC_CONST_SWETABLE not open"
  #endif
  #undef CHK_BluClassic_SEC_CONST_SWETABLE
  #pragma ghs section rodata=default
  #pragma ghs enddata
  #define STOP_SEC_CONST                             /* default code stop section */



#elif defined (BluClassic_STOP_SEC_CONST_UNSPECIFIED)
  #undef BluClassic_STOP_SEC_CONST_UNSPECIFIED
  /*@@@visbch: Mapping to global section in MemMap.h*/
  #ifndef CHK_BluClassic_SEC_CONST_UNSPECIFIED
    #error "BluClassic_SEC_CONST_UNSPECIFIED not open"
  #endif
  #undef CHK_BluClassic_SEC_CONST_UNSPECIFIED


  #define STOP_SEC_CONST                             /* default code stop section */



#elif defined (BluClassic_STOP_SEC_VAR_FLASHBUFFER)
  #undef BluClassic_STOP_SEC_VAR_FLASHBUFFER
  /*@@@visbch: Mapping to global section in MemMap.h*/
  #define STOP_SEC_VAR                             /* default code stop section */
//  #pragma ghs section rodata=default
  #ifndef CHK_BluClassic_SEC_VAR_FLASHBUFFER
    #error "BluClassic_SEC_VAR_FLASHBUFFER not open"
  #endif
  #undef CHK_BluClassic_SEC_VAR_FLASHBUFFER


#elif defined (BluClassic_STOP_SEC_VAR_NO_INIT_8)
  #undef BluClassic_STOP_SEC_VAR_NO_INIT_8
  /*@@@visbch: Mapping to global section in MemMap.h*/
  #define STOP_SEC_VAR                             /* default code stop section */
//  #pragma ghs section rodata=default
  #ifndef CHK_BluClassic_SEC_VAR_NO_INIT_8
    #error "BluClassic_SEC_VAR_NO_INIT_8 not open"
  #endif
  #undef CHK_BluClassic_SEC_VAR_NO_INIT_8


#elif defined (BluClassic_STOP_SEC_VAR_NO_INIT_UNSPECIFIED)
  #undef BluClassic_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
  /*@@@visbch: Mapping to global section in MemMap.h*/
  #define STOP_SEC_VAR                             /* default code stop section */
//  #pragma ghs section rodata=default
  #ifndef CHK_BluClassic_SEC_VAR_NO_INIT_UNSPECIFIED
    #error "BluClassic_SEC_VAR_NO_INIT_UNSPECIFIED not open"
  #endif
  #undef CHK_BluClassic_SEC_VAR_NO_INIT_UNSPECIFIED


#else
  #error "Error: section does not exist in BluClassic_MemMap.h"
#endif
/*BMW - End*/

/*@@@visbch: Mapping of BluClassic sections to Vector default sections; mapping to OS sections is done within MemMap.h*/
#include "MemMap.h"

