/**********************************************************************************************************************
  COPYRIGHT
-----------------------------------------------------------------------------------------------------------------------
  Copyright (c) by Vector Informatik GmbH.                                                  All rights reserved.
 
                This software is copyright protected and proprietary to Vector Informatik GmbH.
                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
                All other rights remain with Vector Informatik GmbH.
-----------------------------------------------------------------------------------------------------------------------
  FILE DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
         File:  Wdg_Stub.c
    Component:  Wdg Dummy
       Module:  -
    Generator:  -

  Description:  Wdg dummy implementation
**********************************************************************************************************************/

/* Include Files */
#include "Wdg_Stub.h"

#define WD_STUB_TRIGGER_START_SEC_CODE
#include "MemMap.h"
/******************************************************************************
* Name         :  Wdg_Stub_Trigger
* Called by    :  Flash_If, Application
* Preconditions:  None
* Parameters   :  None
* Return code  :  FBL_WD_TRIGGERED, FBL_NO_TRIGGER
* Description  :  Polling of watchdog during longer operations
******************************************************************************/
FUNC(uint8,WDG_CODE) Wdg_Stub_Trigger(void)
{
  /* WdgIf_SetTriggerCondition(0,0); */  /* Code has to be located in RAM */
  return 0x03;
}
#define WD_STUB_TRIGGER_STOP_SEC_CODE
#include "MemMap.h"
