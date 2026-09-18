#include "Blu.h"
#include "Dem.h"
#include "Mcu.h"

int main (void)
{
   Mcu_Init(McuModuleConfiguration);

   /* call Mcu_InitClock with first configured setting */
   Mcu_InitClock((Mcu_ClockType)1);

   /* wait for PLL if one is set */
   while (MCU_PLL_LOCKED != Mcu_GetPllStatus());
   Mcu_DistributePllClock();

   Blu_Main();

   return 0;
}

/* Dummmy */
void Dem_ReportErrorStatus(Dem_EventIdType EventId, unsigned char EventStatus)
{
   (void)EventId;
   (void)EventStatus;
}
