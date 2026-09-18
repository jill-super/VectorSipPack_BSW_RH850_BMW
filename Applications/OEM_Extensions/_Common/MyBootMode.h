/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       Services for get and set the bootmode.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               [no]
*
*  \copyright   BMW AG 2017
*
*  \version     5.0.0
*
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

/*----------------------------------------------------------------------------*/


#ifndef MYBOOTMODE_BOOTMODE_H
#define MYBOOTMODE_BOOTMODE_H

/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* Violation of MISRA rule 19.1, Reason: Including StbMB_MemMap.h is necessary throughout
   the file according to memory abstraction, see PRQA: 5087 */


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/


#include <Std_Types.h>                      /* AUTOSAR Standard Types         */
#include <Dcm_Types.h>                      /* Dcm_ProgConditionsType */
/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

#define   MYBOOTSTATUS_DCM_STATUS_INVALID               0xFF




/*------------------------------------------------------------------------------
                      Data Types
-------------------------------------------------------------------------------*/


/** Type for boot status */
typedef struct
{

   Dcm_ProgConditionsType    DcmStatus;         /**< Status for Dcm startup */

} MyBootStatusType;



/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/

/* Note: This area shall only contain one variable, because the linking
 *       processes for BM, BL and Appl may link this on different addresses
 *       otherwise.
 */

#define MYBOOTMODE_START_SEC_VAR_NOINIT_BOOT_STATUS
#include "MyBootMode_MemMap.h" /* PRQA S 5087 */

/** contains boot status information */
extern VAR(MyBootStatusType, MyBoot_VAR) MyBootStatus;

#define MYBOOTMODE_STOP_SEC_VAR_NOINIT_BOOT_STATUS
#include "MyBootMode_MemMap.h" /* PRQA S 5087 */


/*------------------------------------------------------------------------------
                      Global Constants
-------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
                      Global Function Declarations
-------------------------------------------------------------------------------*/

#define MyBootStatus_START_SEC_CODE
#include "MyBootMode_MemMap.h" /* PRQA S 5087 */

/*Extern Declaration for MyBootDcmStatusGet */
extern FUNC(void, MyBootMode_CODE) MyBootDcmStatusGet
             (
                P2VAR ( Dcm_ProgConditionsType, AUTOMATIC, MyBootMode_VAR )  pDcmStatus
             )
;

extern FUNC(void, MyBootMode_CODE) MyBootModeSet
             (
                P2CONST ( Dcm_ProgConditionsType, AUTOMATIC, MyBootMode_VAR )  pDcmStatus
             );


#define MyBootStatus_STOP_SEC_CODE
#include "MyBootMode_MemMap.h" /* PRQA S 5087 */

#endif /* MYBOOTMODE_BOOTMODE_H */

/*--- End of file ------------------------------------------------------------*/
