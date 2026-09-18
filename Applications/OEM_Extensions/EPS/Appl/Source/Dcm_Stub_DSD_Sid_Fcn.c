
#include "Std_Types.h"
#include "Dcm.h"
#include "Mcu.h"

/* Stub-Implementation for DiagnosticService_0x11_0x42 */
FUNC(Std_ReturnType, DCM_CALLOUT_CODE) Dcm_DiagnosticService_0x11_0x42(Dcm_OpStatusType opStatus, Dcm_MsgContextPtrType pMsgContext)
{
    Dcm_ExternalSetNegResponse(pMsgContext, DCM_E_SUBFUNCTIONNOTSUPPORTED);
    return DCM_E_PROCESSINGDONE;
}
