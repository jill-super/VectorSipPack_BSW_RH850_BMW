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


#include "Prog_Cfg.h"



#include "DcmFbl_UploadServices.h"
#include "Flash.h"




/**********************************************************************************************************************
  LOCAL CONSTANTS
**********************************************************************************************************************/

#define BAC_STARTUP_TCU_MAX_INT_LEVEL 0x0F
/* #define TEST_FREETIMER */

/**********************************************************************************************************************
  LOCAL VARIABLES
**********************************************************************************************************************/
#if defined ( TEST_FREETIMER_1 )
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

  /* @@@vispma: Disable ECC notification signal generation */
  /* Disable SYSERR generation for ECC C-Flash errors */
  (*(volatile uint16*)(0xFFFF8C00ul)) = (*(volatile uint16*)0xFFFF8C00ul) & ((uint16)((0x0002u) ^ ((uint16)0xFFFFu)));
  /* Enable ECC detection and ECC correction */
  (*(volatile uint32*)(0xFFC62400ul))= 0x4000u;
  /* Disable ECC notification signal generation */
  (*(volatile uint32*)(0xFFC62404ul)) = 0x00u;
  /* Clear Error status before read */
  (*(volatile uint32*)(0xFFC62408ul))  = 0x01u;

  EcuM_Init();

  return 0;
}
#endif /* C_COMP_ANSI_CANOE */

TASK(InitTask)
{
  DcmFbl_Init();



  EcuM_StartupTwo();

  FlashInit((flashKey_t)0);


  /* Check if security level does match */
  /*if (DCM_SEC_LEV_L9 != (dcmCfg_StateSecurityInfo[0]).value)
  {
    (void)Det_ReportError((uint16)(DCM_MODULE_ID),(uint8)0, (uint8)(0), (uint8)(DCM_E_INTERFACE_RETURN_VALUE));
  }*/

  /*
  Hw_EraseFlash(0x168000, 0x8000);
  Hw_WriteFlash(0x5A5A, 0x16FCFF, 0x400);

  Hw_EraseFlash(0xF000, 0x8000);
  Hw_WriteFlash(0x5A5A, 0xF000, 0x400);
*/

  TerminateTask();
}


TASK(ShutdownTask)
{
   EcuM_GoDown(0u);
	//ShutdownOS(E_OK);
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
