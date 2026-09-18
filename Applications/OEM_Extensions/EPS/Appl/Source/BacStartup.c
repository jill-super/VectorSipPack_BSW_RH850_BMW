/**********************************************************************************************************************
  FILE DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
  \file  File:  BacStartup.c
      Project:  Startup
       Module:  BAC Startup
    Generator:  -

  \brief Description:  BAC4 Startup - Modules initialization routines
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "VGenEnableSwitches.h"
#include "BacStartup.h"

#include "Fr.h"
#include "FrIf.h"
#include "FrTp.h"
#include "FrSm.h"

#include "ComM.h"
#include "Dcm.h"
#include "PduR.h"

#include "MemIf.h"
#include "Fee_30_SmallSector.h"
#include "Fls.h"

#include "BswM.h"
#include "Os.h"
#include "EcuM.h"

#include "Mcu.h"
#include "Port.h"
#include "Rte_Main.h"

#include "FreeTimer.h"
#include "Prog_Cfg.h"
#include "Prog_CheckMemory.h"

#include "Hw_user.h"


/**********************************************************************************************************************
  LOCAL CONSTANTS
**********************************************************************************************************************/

#define BAC_STARTUP_TCU_MAX_INT_LEVEL 0x0F

/* #define TEST_FREETIMER */

/**********************************************************************************************************************
  LOCAL VARIABLES
**********************************************************************************************************************/
#if defined ( TEST_FREETIMER )
  uint8                     FreeTimerTestState;
  FreeTimer_TimeInTicksType ticks;
  FreeTimer_TimeInMsType    msecs;
#endif

/**********************************************************************************************************************
  LOCAL FUNCTION DECLARATIONS
**********************************************************************************************************************/
MemIf_JobResultType Appl_WaitMemDriverReady(void);
extern void BacStartup_StartupHw(void);


#if defined( C_COMP_ANSI_CANOE )
void CANoeAPI_Main(void)
{
  EcuM_Init();
}
#else  /* C_COMP_ANSI_CANOE */
int main(void)
{
  /* This call is necessary to use OS APIs (e.g. to disable/enable interrupts) before StartOs() */
  Os_InitMemory();
  Os_Init();

  EcuM_Init();

  return 0;
}
#endif /* C_COMP_ANSI_CANOE */

TASK(InitTask)
{
  FreeTimer_Init();
#if defined ( TEST_FREETIMER )
  FreeTimerTestState = 0u;
#endif

  EcuM_StartupTwo();

  /* Check if security level does match */
  /*if (DCM_SEC_LEV_L9 != (dcmCfg_StateSecurityInfo[0]).value)
  {
    (void)Det_ReportError((uint16)(DCM_MODULE_ID),(uint8)0, (uint8)(0), (uint8)(DCM_E_INTERFACE_RETURN_VALUE));
  }*/

  TerminateTask();
}

TASK(Cpl_Task)
{
  Prog_CheckMemorySignatureCheck();
  TerminateTask();
}

TASK(ShutdownTask)
{
   EcuM_GoDown(0u);
   (void)TerminateTask();
}

/* Non-preemtive */
TASK(BackgroundTask)
{
  for (;;)
  {
    /* Only required for async operations, like Dlog_WriteNvmBlockAsync */
    if ( MEMIF_IDLE != MemIf_GetStatus(0) )
    {
       Fee_30_SmallSector_MainFunction();
       Fls_MainFunction();
    }
    Schedule();
  }
}


void BacStartup_StartupHw(void)
{

}

TASK(DcmDelayedTask)
{
  for (;;)
  {
    Schedule();
  }
}
