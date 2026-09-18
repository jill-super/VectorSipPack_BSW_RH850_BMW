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


//#if (BAC4_SWPART!=BAC4_SWPART_Blu)

/*------------------------------------------------------------------------------
                      MISRA-Deviations
-------------------------------------------------------------------------------*/

/* Violation of MISRA rule 19.1, Reason: Including StbMB_MemMap.h is necessary throughout
   the file according to memory abstraction, see PRQA: 5087 */


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "MyBootMode.h"            /* Own header file                        */
#include "Std_Types.h"               /* AUTOSAR Standard Types                 */
#include "string.h"


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      Global Variables
-------------------------------------------------------------------------------*/

#define MYBOOTMODE_START_SEC_VAR_NOINIT_BOOT_STATUS
#include "MyBootMode_MemMap.h" 

VAR(MyBootStatusType, MyBoot_VAR) MyBootStatus;

#define MYBOOTMODE_STOP_SEC_VAR_NOINIT_BOOT_STATUS
#include "MyBootMode_MemMap.h" 


/*------------------------------------------------------------------------------
                      Global Constants
-------------------------------------------------------------------------------*/
/* empty */

/*------------------------------------------------------------------------------
                      Local Data Types
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Variables
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Constants
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Functions Prototypes
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Local Functions
-------------------------------------------------------------------------------*/

/* empty */


/*------------------------------------------------------------------------------
                      Global Functions
-------------------------------------------------------------------------------*/

#define MyBootMode_START_SEC_CODE
#include "MyBootMode_MemMap.h" /* PRQA S 5087 */



/*----------------------------------------------------------------------------*/
/**
 * This function copy the Dcm status from global structure
 * to the parameter DcmStatus
 *
 * \param[out] pDcmStatus Pointer to where the result shall be copied
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(void, MyBootMode_CODE) MyBootDcmStatusGet
             (
                P2VAR ( Dcm_ProgConditionsType, AUTOMATIC, MyBootMode_VAR )  pDcmStatus
             )
{
   /* Get Dcm status */
   *pDcmStatus = MyBootStatus.DcmStatus;
} /* end of function MyBootDcmStatusGet */


/*----------------------------------------------------------------------------*/
/**
 * This function saves thep DcmStatus in the MyBootStatus
 * that will be stored permanently later.
 *
 * \param[in] pDcmStatus  pointer to new dcm status
 *
 */
/*----------------------------------------------------------------------------*/
FUNC(void, MyBootMode_CODE) MyBootModeSet
             (
                P2CONST ( Dcm_ProgConditionsType, AUTOMATIC, MyBootMode_VAR )  pDcmStatus
             )
{

  /* Set Dcm status */
  MyBootStatus.DcmStatus = *pDcmStatus;

} /* end of function Srv_BootModeSet */



#define MyBootMode_STOP_SEC_CODE
#include "MyBootMode_MemMap.h" /* PRQA S 5087 */

//#endif  /* #if (BAC4_SWPART!=BAC4_SWPART_Blu) */

/*--- End of file ------------------------------------------------------------*/
