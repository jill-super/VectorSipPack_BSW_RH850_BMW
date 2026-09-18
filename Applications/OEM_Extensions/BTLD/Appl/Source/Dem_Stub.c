#include "Std_Types.h"
#include "Dem.h"

FUNC(Std_ReturnType, DEM_CODE) Dem_DisableDTCSetting(uint8  ClientId )
{
	(void)ClientId;
	return E_OK;
}

FUNC(Std_ReturnType, DEM_CODE) Dem_EnableDTCSetting(uint8  ClientId )
{
	(void)ClientId;
	return E_OK;
}

/* DEM Callbacks */
FUNC(void, DEM_CODE) Dem_ReportErrorStatus(Dem_EventIdType EventId, unsigned char EventStatus)
{
   (void)EventId;
   (void)EventStatus;
}


void
Dem_MainFunction(
  void
  )
{

}
void
Dem_MasterMainFunction(
  void
  )
{

}
void
Dem_SatelliteMainFunction(
  void
  )
{

}
