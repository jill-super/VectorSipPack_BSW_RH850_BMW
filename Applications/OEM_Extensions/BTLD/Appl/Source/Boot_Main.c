/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW Boot_Main.c
*
*  This file contains the implementation of the BMW Boot_Main
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

#include "Boot_Main.h"
#include "MemIf.h"
#include "Os.h"
#include "Det.h"
#include "EcuM.h"
#include <FrIf.h>
#include <FrSM.h>
#include <Fr_GeneralTypes.h>
#include <ComM.h>
#include <ComM_EcuMBswM.h>
#include <PduR.h>
#include "Fls.h"
#include "Fee_30_SmallSector.h"
#include <Std_Types.h>     /* AUTOSAR standard types */


#define BOOTMAIN_START_SEC_CODE
#include "MemMap.h"

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
MemIf_JobResultType Appl_WaitMemDriverReady(void)
{
   /*
    * Wait until NV job has finished
    */
	do                                                          /* process job */
	{
		Fls_MainFunction();
		Fee_30_SmallSector_MainFunction();

	} while ( MEMIF_IDLE != MemIf_GetStatus(0) );

	return MemIf_GetJobResult(0);
} /* Appl_WaitMemDriverReady                                                  */


#define BOOTMAIN_STOP_SEC_CODE
#include "MemMap.h"

