/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW MyDcm_Callbacks.c
*
*  This file contains the implementation of the BMW MyDcm_Callbacks
*  for usage in the BMW AUTOSAR Core Example.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               [yes]
*
*  \copyright   BMW AG 2016
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

#include "Dcm.h"
#include "Prog_Internal.h"
#include "Dcm_Cfg.h"
#include "Dlog_BootMode.h"
#include "MyBootMode.h"


#define DCM_START_SEC_CODE
#include "MemMap.h"
FUNC(Std_ReturnType, DCM_CODE) Dcm_SetProgConditions
(
  P2VAR(Dcm_ProgConditionsType, AUTOMATIC, DCM_APPL_DATA) myProgConditions
)
{
  Dlog_BootModeRequestBootloader(DLOG_BMUSER_PROG,TRUE);
  MyBootModeSet(myProgConditions);
  return E_OK;
}


FUNC(Dcm_EcuStartModeType, DCM_CODE) Dcm_GetProgConditions(P2VAR(Dcm_ProgConditionsType, AUTOMATIC, DCM_APPL_DATA) progConditions)
{
    Dcm_EcuStartModeType rc = DCM_COLD_START;
    uint8 i;

    MyBootDcmStatusGet(progConditions);

    for (i=0; i<sizeof(Dcm_ProgConditionsType); i++)
    {
        if (((uint8*)progConditions)[i] != MYBOOTSTATUS_DCM_STATUS_INVALID) /* PRQA S 0310 *//* generated API */
        {
            if ((progConditions->SubFuncId == 0x02) && (progConditions->ReprogrammingRequest == 0x01u))
            {
                Prog_ActiveSubSession = PROG_BOOT_LOCKED;
                rc =  DCM_WARM_START;
                break;
            }
        }
    }

    return rc;
}

FUNC(void, DCM_CALLOUT_CODE) Dcm_Confirmation(Dcm_IdContextType idContext, PduIdType dcmRxPduId, Dcm_ConfirmationStatusType status)
{
}

#define DCM_STOP_SEC_CODE
#include "MemMap.h"
