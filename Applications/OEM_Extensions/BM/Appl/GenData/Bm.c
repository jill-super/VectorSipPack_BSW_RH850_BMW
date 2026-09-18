/**
*  \file
*
*  \brief       BMW Module Bm
*
*  Dispatcher for starting BLU, Bootloader or Application
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2016 - 2017
*
*  \version     5.1.1
*
*  \remarks     ---
*
*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:00:08.553974
*
------------------------------------------------------------------------------*/



/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* MISRA-C:2004 Rule 19.1: including Bm_MemMap.h is necessary throughout the
   file according to memory abstraction, see PRQA: 5087 */


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "Bm.h"                              /* Bm header file                 */
#include "BUtil/PlatformTypes.h"             /* Standard Types                 */
#include "Bm_Version.h"                      /* Own version header file        */
#include "Bm_DlogAdapter.h"
#include "Bm_TargetAdapter.h"
#include "Bm_UserAdapter.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!Bm_CHECK_VERSION(5,1,1))
   #error "Version of Bm.c does not match the version of the module!"
#endif

#define BM_SWE_ID_BTLD 0u


/*------------------------------------------------------------------------------
                      Local Data Types
-------------------------------------------------------------------------------*/

/**
 * \brief State definition for statemachine of function Bm_CheckBootStatus
 */
typedef enum {
  BM_STATE_BLU_CHECK,
  BM_STATE_BTLD_CHECK,
  BM_STATE_APPL_CHECK,
  BM_STATE_ERROR,
  BM_STATE_BTLD_START,
  BM_STATE_FINISHED
} Bm_StateType;


/*------------------------------------------------------------------------------
                      Local Functions Prototypes
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define Bm_START_SEC_CODE
#include "Bm_MemMap.h"

static void Bm_CheckBootStatus ( Bm_DispatchFlagType *Bm_DispatchFlag );


/*------------------------------------------------------------------------------
                      Local Functions
-------------------------------------------------------------------------------*/

/**
 * \brief State machine for the startup checks
 *
 * The function checks if one of the SWE's is valid. Depending on the result the
 * variable Bm_DispatchFlag is set as follows:
 * - BLU is valid -> BLU is started
 * - Bootloader is valid and BootMode is set -> Bootloader is started
 * - Bootloader and all Application SWEs are valid -> Application is started
 * - only Bootloader is valid -> Bootloader is started
 * - If none of the conditions is valid the variable is set to an error value
 *
 * \global none
 *
 * \param[out] Bm_DispatchFlag  Used as a return value to signal if BLU, Bootloader,
 *                              Application or nothing is available:
 *                              BM_START_MODE_BOOTLOADER : Bootloader is available
 *                              BM_START_MODE_APPLICATION: Application is available
 *                              BM_START_MODE_BLU:         BLU is available
 *                              BM_START_MODE_ERROR:       Nothing is available
 *
 * \remarks none
 *
 * \lhref FL72, FL73, FL74, FL75, FL76, FL78, FL79, FL81, FL104, FL433, FL434
 */

static void Bm_CheckBootStatus ( Bm_DispatchFlagType *Bm_DispatchFlag )
{
  uint8 sweNumberBlu;
  Bm_SweValidStatusType validState;
  Bm_CheckProgDepStatusType depValue;

  /* State-variable for the local statemachine */
  Bm_StateType Bm_CheckBootState;

  /* First State of statemachine */
  Bm_CheckBootState = BM_STATE_BLU_CHECK;

  Bm_Dlog_SweGetIdOfBlu(&sweNumberBlu);
   /* Local statemachine */
  do {
    switch (Bm_CheckBootState) {
      /* --- State BM_STATE_CHECK_BLU --- */
      case BM_STATE_BLU_CHECK:
        /* Check if configured SWE contains a valid BLU */
        Bm_Dlog_SweGetValidState(sweNumberBlu, &validState);
        Bm_Dlog_GetDependencyFlag(&depValue);
        if ((validState == BM_SWE_STATE_VALID_BTLD) &&
            (depValue == BM_CPD_STATUS_CONSISTENT_APPL)) {
          /* A valid BLU is detected */
          /* Set the starte mode */
          *Bm_DispatchFlag = (Bm_DispatchFlagType)BM_START_MODE_BLU;

          /* Next State -> Finish the statemachine */
          Bm_CheckBootState = BM_STATE_FINISHED;
        } else {
          /* No valid BLU is detected */
          /* Next State -> Check for BTLD */
          Bm_CheckBootState = BM_STATE_BTLD_CHECK;
        }
        break;

        /* --- State BM_STATE_BTLD_CHECK --- */
      case BM_STATE_BTLD_CHECK:
        /* Check if SWE BTLD contains a valid BTLD */
        Bm_Dlog_SweGetValidState(BM_SWE_ID_BTLD, &validState);
        if (validState == BM_SWE_STATE_VALID_BTLD) {
          /* A valid BTLD is detected */

          /* Check if BootMode is set to bootloader, because the bootmode is set before
             the reset by the application or bootloader. */
          if (Bm_Dlog_IsBootloader() == TRUE) {
            /* Next State -> Start BTLD */
            Bm_CheckBootState = BM_STATE_BTLD_START;
          } else {
            /* No bootmode */
            /* Next State -> Check for Application */
            Bm_CheckBootState = BM_STATE_APPL_CHECK;
          }
        } else {
          /* No valid BTLD is detected */
          /* Next State -> Error */
          Bm_CheckBootState = BM_STATE_ERROR;
        }
        break;

        /* --- State BM_STATE_APPL_CHECK --- */
      case BM_STATE_APPL_CHECK:
        /* Check if all SWEs are valid and consistent */
        Bm_Dlog_GetDependencyFlag(&depValue);
        if (depValue == BM_CPD_STATUS_CONSISTENT_APPL) {
          /* Set the starte mode */
          *Bm_DispatchFlag = (Bm_DispatchFlagType)BM_START_MODE_APPLICATION;

          /* Next State -> Finish the statemachine */
          Bm_CheckBootState = BM_STATE_FINISHED;
        } else {
          /* One or more SWEs are invalid */
          /* Next State -> Start Bootloader */
          Bm_CheckBootState = BM_STATE_BTLD_START;
        }
        break;

        /* --- State BM_STATE_APPL_CHECK --- */
      case BM_STATE_BTLD_START:
        /* Set the starte mode */
        *Bm_DispatchFlag = (Bm_DispatchFlagType)BM_START_MODE_BOOTLOADER;

        /* Next State -> Finish the statemachine */
        Bm_CheckBootState = BM_STATE_FINISHED;

        break;

        /* --- State BM_STATE_ERROR --- */
      case BM_STATE_ERROR:
      default:
        /* Set the starte mode */
        *Bm_DispatchFlag = (Bm_DispatchFlagType)BM_START_MODE_ERROR;

        /* Next State -> Finish the statemachine */
        Bm_CheckBootState = BM_STATE_FINISHED;
        break;
    }
  } while (Bm_CheckBootState != BM_STATE_FINISHED);
} /* end of function Bm_CheckBootStatus */

/* PRQA S 5087 2 */
#define Bm_STOP_SEC_CODE
#include "Bm_MemMap.h"


/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

/* PRQA S 5087 2 */
#define Bm_START_SEC_CODE
#include "Bm_MemMap.h"

/**
 * \brief Mainfunction of the Bootmanager
 *
 * The function initializes the Hardware, the CPU and the ECC- and CRC-Check. After
 * getting the dispatch information by calling the function BM_CheckBootStatus(),
 * the BLU or Bootloader or Application is started. If there is no startable SWE
 * the function returns to the startup code.
 */

void Bm_Main ( void )
{
  /* The variable indicates whether the application or the bootloader must be started */
  Bm_DispatchFlagType DispatchFlag;

   /* Basic initialisation of Hardware */
  Bm_UserHardwareBasicInit();

  /* Check and init the bootmode */
  Bm_Dlog_BootModeInit();

  /* Initialize ECC/CRC error flags of all SWEs in RAM */
  Bm_Dlog_InitErrorFlagsOfAllSwe();

  /* Check for valid SWEs and set MMU */
  Bm_Dlog_InitSweTable();

  /* BM_CheckBootStatus() checks the conditions if Blu, Bootloader or Application must
     be started and sets the 'DispatchFlag' accordingly. */
  Bm_CheckBootStatus( &DispatchFlag );

  /* Set BootMode back to normal (for next startup) */
  Bm_Dlog_BootModeSetToNormal();

  switch ( DispatchFlag )
  {
    /* Start bootloader -> jump to the bootloader C-startup-code.
       NOTE: Program execution should never return from this function call. */
    case BM_START_MODE_BOOTLOADER:
      Bm_StartupBootloader();
      break;

    /* Start BLU -> jump to the BLU C-startup-code.
       NOTE: - Program execution should never return from this function call.
             - If BM_SWE_ID_BLU is equal to SWE_ID_OF_APPL_SWE1 the BLU is
               started in the same SWE as the Application
             - If BM_SWE_ID_BLU is different to SWE_ID_OF_APPL_SWE1 the BLU
               is started in another SWE than the application */
     case BM_START_MODE_BLU:
       Bm_StartupBlu();
       break;

    /* Start application -> jump to the application C-startup-code.
       NOTE: Program execution should never return from this function call. */
    case BM_START_MODE_APPLICATION:
      Bm_StartupApplication();
      break;

    /* Error: No valid BTLD or BLU or Application was found */
    case BM_START_MODE_ERROR:
    default:
      /* Return to startup code -> waiting for watchdog reset */
      break;
  }
  /* Metric Violation: The limit of called functions is exceeded because there are some
     functions for initializing of different functionality */
  /* PRQA S 5203 1 */
} /* end of function Bm_Main */

/* PRQA S 5087 2 */
#define Bm_STOP_SEC_CODE
#include "Bm_MemMap.h"
