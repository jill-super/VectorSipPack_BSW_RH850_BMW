/**
*  \file
*
*  \brief       BMW Module Bm
*
*  User specific file for module Bm.
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2016 - 2017
*
*  \version     5.0.2
*
*  \remarks     ---
*
*/

/*------------------------------------------------------------------------------
|                                                                              |
| DISCLAIMER:                                                                  |
| As the program is not fully tested and qualified for series production       |
| use, the user shall not be entitled to use the program in connection         |
| with any series production. BMW provides the user with the program only      |
| as sample application (for testing purposes).                                |
|                                                                              |
------------------------------------------------------------------------------*/
/*
#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in series production software"
#endif
*/

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <string.h>
#include "BUtil/PlatformTypes.h"                /* Standard Types              */
#include "BluSample_Version.h"
#include "BluClassic_Cfg.h"
#include "Blu.h"
#include "Blu_UserAdapter.h"
#include "Blu_HardwareAdapter.h"
#include "Mcu.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!BluSample_CHECK_VERSION(5, 0, 2))
#error "Version of Bm_UserAdapter.c does not match the version of the module!"
#endif


/*------------------------------------------------------------------------------
                      Local Variables
-------------------------------------------------------------------------------*/

#define Blu_START_SEC_VAR_INIT_32
#include "Blu_MemMap.h"

/**
 * \brief Number of flash segment entries of the Blu SWE
 */

static uint32 Blu_BluSweSegmentNumber[BLU_BLUSWE_ENTRY_NUMBER]      = BLU_BLUSWE_SEGMENT_NUMBER;

/**
 * \brief Addresses of the Blu SWE flash segments
 */

static uint32 Blu_BluSweSegmentAddr[BLU_BLUSWE_ENTRY_NUMBER]        = BLU_BLUSWE_SEGMENT_ADDRESSES;

/**
 * \brief Length of the Blu SWE flash segments
 */

static uint32 Blu_BluSweSegmentLength[BLU_BLUSWE_ENTRY_NUMBER]      = BLU_BLUSWE_SEGMENT_LENGTH;

#define Blu_STOP_SEC_VAR_INIT_32
#include "Blu_MemMap.h"


/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

#define Blu_START_SEC_CODE
#include "Blu_MemMap.h"

#if (BLU_USER_WATCHDOG_TRIGGER == STD_ON)

/**
 * \brief Triggering the Watchdog
 *
 * Function triggers the Watchdog.
 *
 * \remarks none
 */

void Blu_WatchdogTrigger(void) {
  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */


  /* --- User code end ----------------------------------------------------- */
} /* end of function Blu_StateFctUserFunctionOne */

#endif


/**
 * \brief Copying data to buffer
 *
 * Function copies n bytes from source address to target address.
 *
 * \param[in]  srcAddress     source address
 * \param[in]  destAddress    target address
 * \param[in]  length         number of data that should be copied
 *
 * \remarks none
 */

void Blu_UserFillBuffer(const uint8* srcAddress, uint8* destAddress, uint32 length) {
  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  memcpy(destAddress, srcAddress, length);

  /* --- User code end ----------------------------------------------------- */
} /* end of function Blu_UserFillBuffer */



/**
 * \brief Comparing buffers
 *
 * Function compares n bytes of two buffers.
 *
 * \param[in]  srcAddress     source address
 * \param[in]  destAddress    target address
 * \param[in]  length         number of data that should be copied from source to target address
 *
 * \remarks none
 */

Blu_StateType Blu_UserCompareBuffer(
    const uint8* srcAddress , const uint8* destAddress, uint32 length) {
  Blu_StateType retVal;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  if(memcmp(srcAddress, destAddress, length) == 0) {
    retVal = BLU_STATE_OK;
  } else {
    retVal = BLU_STATE_FAILED;
  }

  /* --- User code end ----------------------------------------------------- */

  return (retVal);
} /* end of function Blu_UserCompareBuffer */



/**
 * \brief      Erase and reset
 *
 * This function erases the Blu SWE(s) and resets the CPU. If the segment must
 * that is used for the Blu, this function shall copy the routines for erase
 * and reset to the RAM. After starting, the routines may never return to the
 * flash before the reset has taken place. The function must be implemented by
 * the user. If the function fails, the variable Blu_State shall be set to
 * BLU_STATE_FAILED.
 *
 * \retval     BLU_STATE_OK      Execution of function is ok
 * \retval     BLU_STATE_FAILED  Execution of function is failed
 *
 * \remarks    The flash driver must be initialized.
 */

Blu_StateType Blu_StateFctEraseAndReset(void) {
  uint32 segmentAddress, segmentLength, entryNumber, segmentNumber;
  Blu_StateType Blu_State = BLU_STATE_FINISHED;

  for (entryNumber = 0; (Blu_State != BLU_STATE_FAILED) && (entryNumber < BLU_BLUSWE_ENTRY_NUMBER); entryNumber++) {
    segmentAddress = Blu_BluSweSegmentAddr[entryNumber];
    segmentLength = Blu_BluSweSegmentLength[entryNumber];
    for (segmentNumber = 0;
         (Blu_State != BLU_STATE_FAILED) && (segmentNumber < Blu_BluSweSegmentNumber[entryNumber]); segmentNumber++) {
      Blu_WatchdogTrigger();

      if (Blu_Hardware_FlashErase((uint32)segmentAddress, (uint32)segmentLength) == FALSE) {
        Blu_State = BLU_STATE_FAILED;
      } else {
        segmentAddress += segmentLength;
      }
    }
  }

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

   (void)Blu_Hardware_FlashDeInit();
  
   /* Reset */
   Mcu_PerformReset();

   /* Wait until reset is executed */
   while(1);

  /* --- User code end ----------------------------------------------------- */

  return (Blu_State);
} /* end of function Blu_StateFctEraseAndReset */


#if (BLU_USER_FUNCTION_ONE == STD_ON)

/**
 * \brief User specific function 1
 *
 * This function is called after the flash driver is initialized, but before
 * the old Bootmanger will be erased. The function  must be implemented by the
 * user, if it is needed. In this case the config switch BluUserFunctionOneEnable
 * shall be set. If it is not set, the function can be removed. If the function
 * fails, the variable Blu_State shall be set to BLU_STATE_FAILED.
 *
 * \retval     BLU_STATE_OK      Execution of function is ok
 * \retval     BLU_STATE_FAILED  Execution of function is failed
 *
 * \remarks    none
 */

Blu_StateType Blu_StateFctUserFunctionOne(void) {
  Blu_StateType retVal;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  retVal = BLU_STATE_OK;

  /* --- User code end ----------------------------------------------------- */

  return (retVal);
} /* end of function Blu_StateFctUserFunctionOne */

#endif


#if (BLU_USER_FUNCTION_TWO == STD_ON)

/**
 * \brief User specific function 2
 *
 * This function is called after the new Bootmanger is programmed, but before
 * the old Bootloader will be erased. The function  must be implemented by the
 * user, if it is needed. In this case the config switch BluUserFunctionTwoEnable
 * shall be set. If it is not set, the function can be removed. If the function
 * fails, the variable Blu_State shall be set to BLU_STATE_FAILED.
 *
 * \retval     BLU_STATE_OK      Execution of function is ok
 * \retval     BLU_STATE_FAILED  Execution of function is failed
 *
 * \remarks    none
 */

Blu_StateType Blu_StateFctUserFunctionTwo(void) {
  Blu_StateType retVal;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  retVal = BLU_STATE_OK;

  /* --- User code end ----------------------------------------------------- */

  return (retVal);
} /* end of function Blu_StateFctUserFunctionOne */

#endif


#if (BLU_USER_FUNCTION_THREE == STD_ON)

/**
 * \brief User specific function 3
 *
 * This function is called after the new Bootmanager and Bootloader are verified,
 * but before the identification of the Blu will be erased. The function  must
 * be implemented by the user, if it is needed. In this case the config switch
 * BluUserFunctionThreeEnable shall be set. If it is not set, the function can
 * be removed. If the function fails, the variable Blu_State shall be set to
 * BLU_STATE_FAILED.
 *
 * \retval     BLU_STATE_OK      Execution of function is ok
 * \retval     BLU_STATE_FAILED  Execution of function is failed
 *
 * \remarks    none
 */

Blu_StateType Blu_StateFctUserFunctionThree(void) {
  Blu_StateType retVal;

  /* --- User code start --------------------------------------------------- */
  /* A user specific code can be implementeted at this location. Please      */
  /* notice the implementation hints in the UserGuide.                       */
  /* The implementeted example code is for testing and must be removed       */
  /* for production code !!!                                                 */
  /* ----------------------------------------------------------------------- */

  retVal = BLU_STATE_OK;

  /* --- User code end ----------------------------------------------------- */

  return (retVal);
} /* end of function Blu_StateFctUserFunctionOne */

#endif


#define Blu_STOP_SEC_CODE
#include "Blu_MemMap.h"
