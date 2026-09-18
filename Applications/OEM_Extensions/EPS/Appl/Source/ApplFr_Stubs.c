#include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */


#include "SchM_Fr.h"
#include "SchM_FrIf.h"
#include "SchM_FrSM.h"
#include "SchM_FrTp.h"
#include "FrIf.h"
#include "FrIf_Priv.h"
#include "FrSM.h"
#include "FrTp.h"
#include "Det.h"

void ApplFr_ISR_CycleStart(void)
{

}

void ApplFr_ISR_Timer0(void)
{


	/* Execute Flexray job lists ISR context on Flexray Timer Interrupt */
	FrIf_JobListExec_0();


}

void ApplFr_DetFilter(void)
{
  uint8 Det_Array_ID = 0;

  /* FlexRay JobList out of Sync */
  detGlobalFilter[Det_Array_ID].mModuleId=61;
  detGlobalFilter[Det_Array_ID].mInstanceId=0;
  detGlobalFilter[Det_Array_ID].mApiId=50;
  detGlobalFilter[Det_Array_ID].mErrorId=9;
  Det_Array_ID++;

  detStatus.globalFilterActive=1;
}
