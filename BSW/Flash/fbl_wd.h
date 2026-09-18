#ifndef __FBL_WD_H__
#define __FBL_WD_H__

#define FBL_WD_TRIGGERED 0x03

#define WD_FBL_TRIGGER_START_SEC_CODE
#include "MemMap.h"
void V_API_NEAR FblLookForWatchdog( void );
#define WD_FBL_TRIGGER_STOP_SEC_CODE
#include "MemMap.h"

#endif /* FBL_WD_H */

