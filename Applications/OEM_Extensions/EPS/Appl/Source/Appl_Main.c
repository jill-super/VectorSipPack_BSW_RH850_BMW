/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW Appl_Main.c
*
*  This file contains the implementation of the BMW Appl_Main
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

#include "Appl_Main.h"
#include "Std_Types.h"     /* AUTOSAR standard types */
#include "Os.h"
#include "BswM.h"

#include "NvM.h"
#include "MemIf.h"
#include "Fls.h"
#include "Fee_30_SmallSector.h"

#include "EcuM.h"

#include "string.h"

#include "Dlog.h"
#include "Dlog_HweTable.h"
#include "Dlog_SweStatus.h"

#include "Det.h"           /* for calling Det in ErrorHook() */ 








/*******************************************************************************
**                                                                            **
** FUNC-NAME     : Appl_WaitMemDriverReady                                    **
**                                                                            **
** DESCRIPTION   : Performs a synchronous wait until memory driver has        **
**                 finished the last job                                      **
**                                                                            **
** PRECONDITIONS : ---                                                        **
**                                                                            **
** GLOBAL DATA   : ---                                                        **
**                                                                            **
** PARAMETER     : ---                                                        **
**                                                                            **
** RETURN        : ---                                                        **
**                                                                            **
** REMARKS       : This function is blocking! Do not call this function       **
**                 within the context of a high priority task!!!              **
**                                                                            **
*******************************************************************************/
FUNC (MemIf_JobResultType, TEMPLATE_CODE) Appl_WaitMemDriverReady(void)
{
   /*
    * Wait until NV job has finished
    */
   do                                                          /* process job */
   {
      Fee_30_SmallSector_MainFunction();                                                      \
      Fls_MainFunction();                                                      \
   } while ( MEMIF_IDLE != MemIf_GetStatus(0) );

   return MemIf_GetJobResult(0);
} /* WaitMemDriverReady                                                       */





/*==================[User functions]=========================================*/
/*
FUNC(void, TEMPLATE_CODE) Dcm_BAC4_EcuReset_Execute(void)
{

    EcuM_SelectShutdownTarget(ECUM_STATE_RESET, EcuMConf_EcuMResetMode_ECUM_RESET_PROGRAMMING);
    EcuM_GoDown(ECUM_STATE_RESET);

}
*/




