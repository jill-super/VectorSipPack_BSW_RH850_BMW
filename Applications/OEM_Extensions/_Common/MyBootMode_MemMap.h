/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       MyBootMode_MemMap.h
*
*  This file contains the implementation of the BMW Sample code
*  for usage in the BMW AUTOSAR Core Example.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               [yes]
*
*  \copyright   BMW AG 2015
*
*  \remarks
*  DISCLAIMER:
*  As the program is not fully tested and qualified for series production
*  use, the user shall not be entitled to use the program in connection
*  with any series production. BMW provides the user with the program only
*  as sample application (for testing purposes).
*
*/
/*----------------------------------------------------------------------------*/

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

#if 0

#elif defined (MYBOOTMODE_START_SEC_VAR_NOINIT_BOOT_STATUS)
  #undef MYBOOTMODE_START_SEC_VAR_NOINIT_BOOT_STATUS
  #ifdef CHK_MYBOOTMODE_SEC_VAR_NOINIT_BOOT_STATUS
    #error "MYBOOTMODE_SEC_VAR_NOINIT_BOOT_STATUS already open"
  #endif
  #define CHK_MYBOOTMODE_SEC_VAR_NOINIT_BOOT_STATUS
#pragma ghs section sbss="BOOTSTATUSNOINIT"


#elif defined (MYBOOTMODE_STOP_SEC_VAR_NOINIT_BOOT_STATUS)
  #undef MYBOOTMODE_STOP_SEC_VAR_NOINIT_BOOT_STATUS
  #ifndef CHK_MYBOOTMODE_SEC_VAR_NOINIT_BOOT_STATUS
    #error "MYBOOTMODE_SEC_VAR_NOINIT_BOOT_STATUS not open"
  #endif
  #undef CHK_MYBOOTMODE_SEC_VAR_NOINIT_BOOT_STATUS
#pragma ghs section sbss=default


#elif defined (MyBootMode_START_SEC_CODE)
  #undef MyBootMode_START_SEC_CODE
  #ifdef CHK_MyBootMode_SEC_CODE
    #error "MyBootMode_SEC_CODE already open"
  #endif
  #define CHK_MyBootMode_SEC_CODE


#elif defined (MyBootMode_STOP_SEC_CODE)
  #undef MyBootMode_STOP_SEC_CODE
  #ifndef CHK_MyBootMode_SEC_CODE
    #error "MyBootMode_SEC_CODE not open"
  #endif
  #undef CHK_MyBootMode_SEC_CODE


#elif defined (MyBootStatus_START_SEC_CODE)
  #undef MyBootStatus_START_SEC_CODE
  #ifdef CHK_MyBootStatus_SEC_CODE
    #error "MyBootStatus_SEC_CODE already open"
  #endif
  #define CHK_MyBootStatus_SEC_CODE


#elif defined (MyBootStatus_STOP_SEC_CODE)
  #undef MyBootStatus_STOP_SEC_CODE
  #ifndef CHK_MyBootStatus_SEC_CODE
    #error "MyBootStatus_SEC_CODE not open"
  #endif
  #undef CHK_MyBootStatus_SEC_CODE


#else
  #error "error section does not exist in this MemMap.h"
#endif
