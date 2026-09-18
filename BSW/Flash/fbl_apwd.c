/* Include Files */

#include "v_cfg.h"
#include "v_def.h"
#include "fbl_def.h"
#include "fbl_wd.h"
#include "Std_Types.h"

#define WD_FBL_TRIGGER_START_SEC_CODE
#include "MemMap.h"
/******************************************************************************
* Name         :  FblLookForWatchdog
* Called by    :  Flash_If
* Preconditions:  None
* Parameters   :  None
* Return code  :  FBL_WD_TRIGGERED, FBL_NO_TRIGGER
* Description  :  Polling of watchdog during longer operations
******************************************************************************/
void V_API_NEAR FblLookForWatchdog(void)
{
  /* WdgIf_SetTriggerCondition(0,0); */ /* code has to be located in RAM */
  //return FBL_WD_TRIGGERED;
}
#define WD_FBL_TRIGGER_STOP_SEC_CODE
#include "MemMap.h"
