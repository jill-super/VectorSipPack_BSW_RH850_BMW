/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/*BMW - Start*/
/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/

/* Violation of MISRA rule 19.6, Reason: #undef is necessary
 * according to memory abstraction */
/* PRQA S 0841 EOF */

/* Violation of MISRA rule 19.15, Reason: File must be included repeatedly
 * according to memory abstraction */
/* PRQA S 0883 EOF */

#if 0

#elif defined (Dlog_START_SEC_CODE)
   #undef     Dlog_START_SEC_CODE
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    START_SEC_CODE
#elif defined (Dlog_STOP_SEC_CODE)
   #undef     Dlog_STOP_SEC_CODE
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    STOP_SEC_CODE

#elif defined (Dlog_START_SEC_VAR_INIT_8)
   #undef     Dlog_START_SEC_VAR_INIT_8
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    START_SEC_VAR_INIT_8BIT
#elif defined (Dlog_STOP_SEC_VAR_INIT_8)
   #undef     Dlog_STOP_SEC_VAR_INIT_8
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    STOP_SEC_VAR

#elif defined (Dlog_START_SEC_VAR_INIT_16)
   #undef     Dlog_START_SEC_VAR_INIT_16
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    START_SEC_VAR_INIT_16BIT
#elif defined (Dlog_STOP_SEC_VAR_INIT_16)
   #undef     Dlog_STOP_SEC_VAR_INIT_16
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    STOP_SEC_VAR

#elif defined (Dlog_START_SEC_VAR_NO_INIT_8)
   #undef     Dlog_START_SEC_VAR_NO_INIT_8
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    START_SEC_VAR_NOINIT_8BIT
#elif defined (Dlog_STOP_SEC_VAR_NO_INIT_8)
   #undef     Dlog_STOP_SEC_VAR_NO_INIT_8
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    STOP_SEC_VAR

#elif defined (Dlog_START_SEC_VAR_INIT_UNSPECIFIED)
   #undef      Dlog_START_SEC_VAR_INIT_UNSPECIFIED
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define     START_SEC_VAR_INIT_UNSPECIFIED
#elif defined (Dlog_STOP_SEC_VAR_INIT_UNSPECIFIED)
   #undef      Dlog_STOP_SEC_VAR_INIT_UNSPECIFIED
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define     STOP_SEC_VAR

#elif defined (Dlog_START_SEC_VAR_NO_INIT_UNSPECIFIED)
   #undef      Dlog_START_SEC_VAR_NO_INIT_UNSPECIFIED
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (Dlog_STOP_SEC_VAR_NO_INIT_UNSPECIFIED)
   #undef      Dlog_STOP_SEC_VAR_NO_INIT_UNSPECIFIED
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define STOP_SEC_VAR

#elif defined (Dlog_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED)
   #undef      Dlog_START_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#elif defined (Dlog_STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED)
   #undef      Dlog_STOP_SEC_VAR_POWER_ON_CLEARED_UNSPECIFIED
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define STOP_SEC_VAR

#elif defined (Dlog_START_SEC_VAR_CLEARED_16)
   #undef     Dlog_START_SEC_VAR_CLEARED_16
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    START_SEC_VAR_ZERO_INIT_16BIT
#elif defined (Dlog_STOP_SEC_VAR_CLEARED_16)
   #undef     Dlog_STOP_SEC_VAR_CLEARED_16
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    STOP_SEC_VAR

#elif defined (Dlog_START_SEC_CONST_16)
   #undef     Dlog_START_SEC_CONST_16
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    START_SEC_CONST_16BIT
#elif defined (Dlog_STOP_SEC_CONST_16)
   #undef     Dlog_STOP_SEC_CONST_16
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    STOP_SEC_CONST

#elif defined (Dlog_START_SEC_CONST_32)
   #undef     Dlog_START_SEC_CONST_32
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    START_SEC_CONST_32BIT
#elif defined (Dlog_STOP_SEC_CONST_32)
   #undef     Dlog_STOP_SEC_CONST_32
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define    STOP_SEC_CONST

#elif defined (Dlog_START_SEC_CONST_UNSPECIFIED)
   #undef      Dlog_START_SEC_CONST_UNSPECIFIED
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define START_SEC_CONST_UNSPECIFIED
#elif defined (Dlog_STOP_SEC_CONST_UNSPECIFIED)
   #undef      Dlog_STOP_SEC_CONST_UNSPECIFIED
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define STOP_SEC_CONST

/* -------------------------------------------------------------------------- */
/*             APPL (Application)                                             */
/* -------------------------------------------------------------------------- */
/* special section for SWE1 description table */
#elif defined (APPL_START_SEC_CONST_SWE1_DESCRIPTION_TABLE)
   #undef      APPL_START_SEC_CONST_SWE1_DESCRIPTION_TABLE

  #define MEMMAP_DIRECT
  #pragma ghs startdata
  #pragma ghs section rodata="SWE1DESC"
  
#elif defined (APPL_STOP_SEC_CONST_SWE1_DESCRIPTION_TABLE)
   #undef      APPL_STOP_SEC_CONST_SWE1_DESCRIPTION_TABLE
   /*@@@visbch: Mapping to global section in MemMap.h*/
  #define MEMMAP_DIRECT
  #pragma ghs section rodata=default
  #pragma ghs enddata
  
  

/* special section for SWE1 flash status */
#elif defined (APPL_START_SEC_CONST_SWE1_FLASH_STATUS)
   #undef      APPL_START_SEC_CONST_SWE1_FLASH_STATUS
  #define MEMMAP_DIRECT
  #pragma ghs startdata
  #pragma ghs section rodata="SWE1STAT"

#elif defined (APPL_STOP_SEC_CONST_SWE1_FLASH_STATUS)
   #undef      APPL_STOP_SEC_CONST_SWE1_FLASH_STATUS
  #define MEMMAP_DIRECT
  #pragma ghs section rodata=default
  #pragma ghs enddata



/* special section for SWE1 signature */
#elif defined (APPL_START_SEC_CONST_SWE1_SIGNATURE)
   #undef      APPL_START_SEC_CONST_SWE1_SIGNATURE
  #define MEMMAP_DIRECT
  #pragma ghs startdata
  #pragma ghs section rodata="SWE1SIGNATURE"

#elif defined (APPL_STOP_SEC_CONST_SWE1_SIGNATURE)
   #undef      APPL_STOP_SEC_CONST_SWE1_SIGNATURE
  #define MEMMAP_DIRECT
  #pragma ghs section rodata=default
  #pragma ghs enddata

/* -------------------------------------------------------------------------- */
/*             BL (Bootloader)                                                */
/* -------------------------------------------------------------------------- */
#elif defined (Dlog_START_SEC_CONST_SHARED_SWE_DATA)
   #undef      Dlog_START_SEC_CONST_SHARED_SWE_DATA
  #define MEMMAP_DIRECT
  #pragma ghs startdata
  #pragma ghs section rodata="SHAREDSWEDATA"

#elif defined (Dlog_STOP_SEC_CONST_SHARED_SWE_DATA)
   #undef      Dlog_STOP_SEC_CONST_SHARED_SWE_DATA
  #define MEMMAP_DIRECT
  #pragma ghs section rodata=default
  #pragma ghs enddata

#elif defined (Dlog_START_SEC_CONST_SHARED_MEMSEGTBL_DATA)
   #undef      Dlog_START_SEC_CONST_SHARED_MEMSEGTBL_DATA
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define START_SEC_CONST_UNSPECIFIED
   
#elif defined (Dlog_STOP_SEC_CONST_SHARED_MEMSEGTBL_DATA)
   #undef      Dlog_STOP_SEC_CONST_SHARED_MEMSEGTBL_DATA
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define STOP_SEC_CONST


/* special section for boot SWE description table */
#elif defined (BL_START_SEC_CONST_BOOTSWE_DESCRIPTION_TABLE)
   #undef      BL_START_SEC_CONST_BOOTSWE_DESCRIPTION_TABLE
  #define MEMMAP_DIRECT
  #pragma ghs startdata
  #pragma ghs section rodata="BOOTSWEDESC"

#elif defined (BL_STOP_SEC_CONST_BOOTSWE_DESCRIPTION_TABLE)
   #undef      BL_STOP_SEC_CONST_BOOTSWE_DESCRIPTION_TABLE
  #define MEMMAP_DIRECT
  #pragma ghs section rodata=default
  #pragma ghs enddata

  
/* special section for boot SWE data */
#elif defined (Dlog_START_SEC_CONST_BOOT_SWE_DATA)
   #undef      Dlog_START_SEC_CONST_BOOT_SWE_DATA
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define START_SEC_CONST_UNSPECIFIED
   
#elif defined (Dlog_STOP_SEC_CONST_BOOT_SWE_DATA)
   #undef      Dlog_STOP_SEC_CONST_BOOT_SWE_DATA
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define STOP_SEC_CONST

   
/* special section for boot SWE flash status */
#elif defined (BL_START_SEC_CONST_BOOTSWE_FLASH_STATUS)
   #undef      BL_START_SEC_CONST_BOOTSWE_FLASH_STATUS
  #define MEMMAP_DIRECT
  #pragma ghs startdata
  #pragma ghs section rodata="BOOTSWESTAT"

#elif defined (BL_STOP_SEC_CONST_BOOTSWE_FLASH_STATUS)
   #undef      BL_STOP_SEC_CONST_BOOTSWE_FLASH_STATUS
  #define MEMMAP_DIRECT
  #pragma ghs section rodata=default
  #pragma ghs enddata

/* special section for boot SWE signature */
#elif defined (BL_START_SEC_CONST_BOOTSWE_SIGNATURE)
   #undef      BL_START_SEC_CONST_BOOTSWE_SIGNATURE
  #define MEMMAP_DIRECT
  #pragma ghs startdata
  #pragma ghs section rodata="BOOTSWESIGNATURE"

#elif defined (BL_STOP_SEC_CONST_BOOTSWE_SIGNATURE)
   #undef      BL_STOP_SEC_CONST_BOOTSWE_SIGNATURE
  #define MEMMAP_DIRECT
  #pragma ghs section rodata=default
  #pragma ghs enddata
  
/* -------------------------------------------------------------------------- */
/*             BM (BootManager)                                               */
/* -------------------------------------------------------------------------- */

/* special section for hardware description table */
#elif defined (Dlog_START_SEC_CONST_BM_HW_DESCRIPTION_TABLE)
   #undef      Dlog_START_SEC_CONST_BM_HW_DESCRIPTION_TABLE
  #define MEMMAP_DIRECT
  #pragma ghs startdata
   #pragma ghs section rodata="HWEDESC"

#elif defined (Dlog_STOP_SEC_CONST_BM_HW_DESCRIPTION_TABLE)
   #undef      Dlog_STOP_SEC_CONST_BM_HW_DESCRIPTION_TABLE
  #define MEMMAP_DIRECT
   #pragma ghs section rodata=default
  #pragma ghs enddata

/* special section for const data that is shared between bootmanager, application and bootloader */
#elif defined (Dlog_START_SEC_CONST_SHARED_BM_DATA)
   #undef      Dlog_START_SEC_CONST_SHARED_BM_DATA

	#define MEMMAP_DIRECT
#pragma ghs startdata
#pragma ghs section rodata="COMMONBM"

#elif defined (Dlog_STOP_SEC_CONST_SHARED_BM_DATA)
   #undef      Dlog_STOP_SEC_CONST_SHARED_BM_DATA
#define MEMMAP_DIRECT
#pragma ghs section rodata=default
#pragma ghs enddata

/* special section for swe status that is shared between bootmanager and bootloader */
#elif defined (Dlog_START_SEC_VAR_SHARED_SWESTATUS)
    #undef      Dlog_START_SEC_VAR_SHARED_SWESTATUS
    #define MEMMAP_DIRECT
    #pragma ghs startdata
    #pragma ghs section bss="DLOG_SWESTATUS"

#elif defined (Dlog_STOP_SEC_VAR_SHARED_SWESTATUS)
    #undef      Dlog_STOP_SEC_VAR_SHARED_SWESTATUS
    #define MEMMAP_DIRECT
    #pragma ghs section bss=default
    #pragma ghs enddata
    
    
/* special section for swe status that is shared between bootmanager and bootloader */
#elif defined (Dlog_START_SEC_VAR_SHARED_SWEINFOS)
    #undef      Dlog_START_SEC_VAR_SHARED_SWEINFOS
    #define MEMMAP_DIRECT
    #pragma ghs startdata
    #pragma ghs section bss="DLOG_SWEINFOS"

#elif defined (Dlog_STOP_SEC_VAR_SHARED_SWEINFOS)
    #undef      Dlog_STOP_SEC_VAR_SHARED_SWEINFOS
    #define MEMMAP_DIRECT
    #pragma ghs section bss=default
    #pragma ghs enddata

   
/* special section for swe status that is shared between bootmanager and bootloader */
#elif defined (Dlog_START_SEC_VAR_SHARED_DATA)
    #undef      Dlog_START_SEC_VAR_SHARED_DATA
    #define MEMMAP_DIRECT
    #pragma ghs startdata
    #pragma ghs section bss="DLOG_SWEDATA"

#elif defined (Dlog_STOP_SEC_VAR_SHARED_DATA)
    #undef      Dlog_STOP_SEC_VAR_SHARED_DATA
    #define MEMMAP_DIRECT
    #pragma ghs section bss=default
    #pragma ghs enddata

   
/* special section for boot status that is shared between bootmanager, application and bootloader */
#elif defined (Dlog_START_SEC_VAR_NOINIT_SHARED_BOOT_STATUS)
    #undef      Dlog_START_SEC_VAR_NOINIT_SHARED_BOOT_STATUS
    #define MEMMAP_DIRECT
    #pragma ghs startdata
    #pragma ghs section bss="BOOTSTATUS"
    
#elif defined (Dlog_STOP_SEC_VAR_NOINIT_SHARED_BOOT_STATUS)
    #undef      Dlog_STOP_SEC_VAR_NOINIT_SHARED_BOOT_STATUS
    #define MEMMAP_DIRECT
    #pragma ghs section data=default
    #pragma ghs enddata
   

/* -------------------------------------------------------------------------- */
/*             Data Logistic (Application and Bootloader)                     */
/* -------------------------------------------------------------------------- */
/* special section for SVK history memory, progstatus */
#elif defined (Dlog_START_SEC_VAR_SAVED_ZONE_UNSPECIFIED)
   #undef      Dlog_START_SEC_VAR_SAVED_ZONE_UNSPECIFIED
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define START_SEC_VAR_NOINIT_UNSPECIFIED
#elif defined (Dlog_STOP_SEC_VAR_SAVED_ZONE_UNSPECIFIED)
   #undef      Dlog_STOP_SEC_VAR_SAVED_ZONE_UNSPECIFIED
   /*@@@visbch: Mapping to global section in MemMap.h*/
   #define STOP_SEC_VAR

/* -----------------[End of the section switch]------------------------------ */

#else
  #error "Error: section does not exist in Dlog_MemMap.h"
#endif
/*BMW - End*/

/*@@@visbch: Mapping of Dlog sections to Vector default sections; mapping to OS sections is done within MemMap.h*/
#include "MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

