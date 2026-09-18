/**
*  \file
*
*  \brief       BMW Module Blu
*
*  MemMap file for module BluSample.
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2017
*
*  \version     5.0.1
*
*  \remarks     ---
*
*/

/*
#error "This file must be integrated and adapted to the memory layout of your project. \
        Please refer to the integration manual."
*/
#if 0
/*-------------------------------------------
   START Sections
--------------------------------------------*/

#elif defined (BluSample_START_SEC_CODE)
  #undef BluSample_START_SEC_CODE
   /*@@@visbch: Mapping to global section in MemMap.h*/
  #define START_SEC_CODE                            /* mapped to default code section */
  #ifdef CHK_BluSample_SEC_STARTED
    #error "Blu section not closed"
  #endif
  #define CHK_BluSample_SEC_STARTED
  #define CHK_BluSample_SEC_CODE_STARTED

#elif defined (BluSample_START_SEC_VAR_INIT_32)
  #undef BluSample_START_SEC_VAR_INIT_32
   /*@@@visbch: Mapping to global section in MemMap.h*/
  #define START_SEC_VAR_INIT_32
  #ifdef CHK_BluSample_SEC_STARTED
    #error "Blu section not closed"
  #endif
  #define CHK_BluSample_SEC_STARTED
  #define CHK_BluSample_SEC_VAR_INIT_32_STARTED

/*-------------------------------------------
   STOP Sections
--------------------------------------------*/

#elif defined (BluSample_STOP_SEC_CODE)
  #undef BluSample_STOP_SEC_CODE
   /*@@@visbch: Mapping to global section in MemMap.h*/
  #define STOP_SEC_CODE                             /* default code stop section */
  #ifndef CHK_BluSample_SEC_CODE_STARTED
    #error "Blu_SEC_CODE not opened"
  #endif
  #undef CHK_BluSample_SEC_STARTED
  #undef CHK_BluSample_SEC_CODE_STARTED

#elif defined (BluSample_STOP_SEC_VAR_INIT_32)
  #undef BluSample_STOP_SEC_VAR_INIT_32
   /*@@@visbch: Mapping to global section in MemMap.h*/
  #define STOP_SEC_VAR
  #ifndef CHK_BluSample_SEC_VAR_INIT_32_STARTED
    #error "Blu_SEC_VAR_INIT_32 not opened"
  #endif
  #undef CHK_BluSample_SEC_STARTED
  #undef CHK_BluSample_SEC_VAR_INIT_32_STARTED

#else
  #error "Error: section does not exist in BluSample_MemMap.h"
#endif
/*BMW - End*/

/*@@@visbch: Mapping of BluClassic sections to Vector default sections; mapping to OS sections is done within MemMap.h*/
#include "MemMap.h"
