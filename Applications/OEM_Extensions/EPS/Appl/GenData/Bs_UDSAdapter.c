/**
 * \file
 *
 * \brief       BS UDS Adapter.
 *
 * \project     BMW Platform Software
 *
 * \copyright   BMW AG 2016 - 2017
 *
 * \version     5.3.0
 *
 */

#include "Bs_UDSAdapter.h"
#include "Bs_CertDiag.h"
#include "Bs_Lcs.h"
#include "Bs_SecEcuMode.h"
#include "Bs_SfaDiag.h"
#include "Rte_Bs.h"
#include "BUtil_UDSAdapterHelper.h"




#define Bs_START_SEC_VAR_NO_INIT_8
#include "Bs_MemMap.h"  /* PRQA S 5087 */

static uint8 Bs_UDSAdapterContextBuffer[256];

#define Bs_STOP_SEC_VAR_NO_INIT_8
#include "Bs_MemMap.h"  /* PRQA S 5087 */

#define Bs_START_SEC_VAR_INIT_UNSPECIFIED
#include "Bs_MemMap.h"  /* PRQA S 5087 */

static BUtil_UDS_ContextType Bs_UDSAdapterContext = {Bs_UDSAdapterContextBuffer, 256, BUTIL_UDS_IDLE, 0, 0, 0, 0};

#define Bs_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Bs_MemMap.h"  /* PRQA S 5087 */



Std_ReturnType Bs_UDSRoutineControlStartCertManAdue(
    const uint8* DataIn,
    Dcm_OpStatusType OpStatus,
    uint8* DataOut,
    uint16* CurrentDataLength,
    Dcm_NegativeResponseCodeType* ErrorCode) {
  return BUtil_UDS_RoutineControlStart(&Bs_UDSAdapterContext, Bs_RoutineControlCertManAdue_Start, DataIn, OpStatus, DataOut, CurrentDataLength, ErrorCode);
}

void Bs_UDS_RoutineControlCertManAdue_Start_ResultOk(uint8* responseData, size_t resDataLength) {
  BUtil_UDS_ResultOk(&Bs_UDSAdapterContext, responseData, resDataLength);
}
void Bs_UDS_RoutineControlCertManAdue_Start_ResultError(UDS_ErrorCodeType errorCode) {
  BUtil_UDS_ResultError(&Bs_UDSAdapterContext, errorCode);
}


static UDS_ReturnType Bs_RoutineControlCertManStartCheck_Start_Out(const uint8* requestData, size_t reqDataLength,
    uint8* responseData, size_t* resDataLength, UDS_ErrorCodeType* errorCode) {
  (void)requestData;
  (void)reqDataLength;
  return Bs_RoutineControlCertManStartCheck_Start(responseData, resDataLength, errorCode);
}

Std_ReturnType Bs_UDSRoutineControlStartCertManStartCheck(
    Dcm_OpStatusType OpStatus,
    uint8* DataOut,
    uint16* CurrentDataLength,
    Dcm_NegativeResponseCodeType* ErrorCode) {
  return BUtil_UDS_RoutineControlStart(&Bs_UDSAdapterContext, Bs_RoutineControlCertManStartCheck_Start_Out, NULL, OpStatus, DataOut, CurrentDataLength, ErrorCode);
}

void Bs_UDS_RoutineControlCertManStartCheck_Start_ResultOk(uint8* responseData, size_t resDataLength) {
  BUtil_UDS_ResultOk(&Bs_UDSAdapterContext, responseData, resDataLength);
}
void Bs_UDS_RoutineControlCertManStartCheck_Start_ResultError(UDS_ErrorCodeType errorCode) {
  BUtil_UDS_ResultError(&Bs_UDSAdapterContext, errorCode);
}


static UDS_ReturnType Bs_RoutineControlCertManReadStatus_Start_Out(const uint8* requestData, size_t reqDataLength,
    uint8* responseData, size_t* resDataLength, UDS_ErrorCodeType* errorCode) {
  (void)requestData;
  (void)reqDataLength;
  return Bs_RoutineControlCertManReadStatus_Start(responseData, resDataLength, errorCode);
}

Std_ReturnType Bs_UDSRoutineControlStartCertManReadStatus(
    Dcm_OpStatusType OpStatus,
    uint8* DataOut,
    uint16* CurrentDataLength,
    Dcm_NegativeResponseCodeType* ErrorCode) {
  return BUtil_UDS_RoutineControlStart(&Bs_UDSAdapterContext, Bs_RoutineControlCertManReadStatus_Start_Out, NULL, OpStatus, DataOut, CurrentDataLength, ErrorCode);
}

void Bs_UDS_RoutineControlCertManReadStatus_Start_ResultOk(uint8* responseData, size_t resDataLength) {
  BUtil_UDS_ResultOk(&Bs_UDSAdapterContext, responseData, resDataLength);
}
void Bs_UDS_RoutineControlCertManReadStatus_Start_ResultError(UDS_ErrorCodeType errorCode) {
  BUtil_UDS_ResultError(&Bs_UDSAdapterContext, errorCode);
}



static UDS_ReturnType Bs_RoutineControlSfaDiscoverFeatureIds_Start_Out(const uint8* requestData, size_t reqDataLength,
    uint8* responseData, size_t* resDataLength, UDS_ErrorCodeType* errorCode) {
  (void)requestData;
  (void)reqDataLength;
  return Bs_RoutineControlSfaDiscoverFeatureIds_Start(responseData, resDataLength, errorCode);
}

Std_ReturnType Bs_UDSRoutineControlStartSfaDiscoverFeatureIds(
    Dcm_OpStatusType OpStatus,
    uint8* DataOut,
    uint16* CurrentDataLength,
    Dcm_NegativeResponseCodeType* ErrorCode) {
  return BUtil_UDS_RoutineControlStart(&Bs_UDSAdapterContext, Bs_RoutineControlSfaDiscoverFeatureIds_Start_Out, NULL, OpStatus, DataOut, CurrentDataLength, ErrorCode);
}

void Bs_UDS_RoutineControlSfaDiscoverFeatureIds_Start_ResultOk(uint8* responseData, size_t resDataLength) {
  BUtil_UDS_ResultOk(&Bs_UDSAdapterContext, responseData, resDataLength);
}
void Bs_UDS_RoutineControlSfaDiscoverFeatureIds_Start_ResultError(UDS_ErrorCodeType errorCode) {
  BUtil_UDS_ResultError(&Bs_UDSAdapterContext, errorCode);
}


Std_ReturnType Bs_UDSRoutineControlStartSfaReadStatus(
    const uint8* DataIn,
    Dcm_OpStatusType OpStatus,
    uint8* DataOut,
    uint16* CurrentDataLength,
    Dcm_NegativeResponseCodeType* ErrorCode) {
  return BUtil_UDS_RoutineControlStart(&Bs_UDSAdapterContext, Bs_RoutineControlSfaReadStatus_Start, DataIn, OpStatus, DataOut, CurrentDataLength, ErrorCode);
}

void Bs_UDS_RoutineControlSfaReadStatus_Start_ResultOk(uint8* responseData, size_t resDataLength) {
  BUtil_UDS_ResultOk(&Bs_UDSAdapterContext, responseData, resDataLength);
}
void Bs_UDS_RoutineControlSfaReadStatus_Start_ResultError(UDS_ErrorCodeType errorCode) {
  BUtil_UDS_ResultError(&Bs_UDSAdapterContext, errorCode);
}


static UDS_ReturnType Bs_RoutineControlSfaWriteToken_Start_In(const uint8* requestData, size_t reqDataLength,
    uint8* responseData, size_t* resDataLength, UDS_ErrorCodeType* errorCode) {
  *resDataLength = 0;
  (void)responseData;
  return Bs_RoutineControlSfaWriteToken_Start(requestData, reqDataLength, errorCode);
}

Std_ReturnType Bs_UDSRoutineControlStartSfaWriteToken(
    const uint8* DataIn,
    Dcm_OpStatusType OpStatus,
    uint16 CurrentDataLength,
    Dcm_NegativeResponseCodeType* ErrorCode) {
  return BUtil_UDS_RoutineControlStart(&Bs_UDSAdapterContext, Bs_RoutineControlSfaWriteToken_Start_In, DataIn, OpStatus, NULL, &CurrentDataLength, ErrorCode);
}

void Bs_UDS_RoutineControlSfaWriteToken_Start_ResultOk(void) {
  BUtil_UDS_ResultOk(&Bs_UDSAdapterContext, NULL, 0);
}
void Bs_UDS_RoutineControlSfaWriteToken_Start_ResultError(UDS_ErrorCodeType errorCode) {
  BUtil_UDS_ResultError(&Bs_UDSAdapterContext, errorCode);
}


static UDS_ReturnType Bs_RoutineControlSfaClearFeature_Start_In(const uint8* requestData, size_t reqDataLength,
    uint8* responseData, size_t* resDataLength, UDS_ErrorCodeType* errorCode) {
  *resDataLength = 0;
  (void)responseData;
  return Bs_RoutineControlSfaClearFeature_Start(requestData, reqDataLength, errorCode);
}

Std_ReturnType Bs_UDSRoutineControlStartSfaClearFeature(
    const uint8* DataIn,
    Dcm_OpStatusType OpStatus,
    uint16 CurrentDataLength,
    Dcm_NegativeResponseCodeType* ErrorCode) {
  return BUtil_UDS_RoutineControlStart(&Bs_UDSAdapterContext, Bs_RoutineControlSfaClearFeature_Start_In, DataIn, OpStatus, NULL, &CurrentDataLength, ErrorCode);
}

void Bs_UDS_RoutineControlSfaClearFeature_Start_ResultOk(void) {
  BUtil_UDS_ResultOk(&Bs_UDSAdapterContext, NULL, 0);
}
void Bs_UDS_RoutineControlSfaClearFeature_Start_ResultError(UDS_ErrorCodeType errorCode) {
  BUtil_UDS_ResultError(&Bs_UDSAdapterContext, errorCode);
}


static UDS_ReturnType Bs_RoutineControlSfaReadVersion_Start_Out(const uint8* requestData, size_t reqDataLength,
    uint8* responseData, size_t* resDataLength, UDS_ErrorCodeType* errorCode) {
  (void)requestData;
  (void)reqDataLength;
  return Bs_RoutineControlSfaReadVersion_Start(responseData, resDataLength, errorCode);
}

Std_ReturnType Bs_UDSRoutineControlStartSfaReadVersion(
    Dcm_OpStatusType OpStatus,
    uint8* DataOut,
    uint16* CurrentDataLength,
    Dcm_NegativeResponseCodeType* ErrorCode) {
  return BUtil_UDS_RoutineControlStart(&Bs_UDSAdapterContext, Bs_RoutineControlSfaReadVersion_Start_Out, NULL, OpStatus, DataOut, CurrentDataLength, ErrorCode);
}

void Bs_UDS_RoutineControlSfaReadVersion_Start_ResultOk(uint8* responseData, size_t resDataLength) {
  BUtil_UDS_ResultOk(&Bs_UDSAdapterContext, responseData, resDataLength);
}
void Bs_UDS_RoutineControlSfaReadVersion_Start_ResultError(UDS_ErrorCodeType errorCode) {
  BUtil_UDS_ResultError(&Bs_UDSAdapterContext, errorCode);
}



static UDS_ReturnType Bs_RoutineControlFieldMode_Start_NoP(const uint8* requestData, size_t reqDataLength,
                                          uint8* responseData, size_t* resDataLength, UDS_ErrorCodeType* errorCode) {
  *resDataLength = 0;
  (void)responseData;
  return Bs_RoutineControlFieldMode_Start(errorCode);
}

Std_ReturnType Bs_UDSRoutineControlStartFieldMode(
    Dcm_OpStatusType OpStatus,
    Dcm_NegativeResponseCodeType* ErrorCode) {
  uint16 CurrentDataLength = 0;
  return BUtil_UDS_RoutineControlStart(&Bs_UDSAdapterContext, Bs_RoutineControlFieldMode_Start_NoP, NULL, OpStatus, NULL, &CurrentDataLength, ErrorCode);
}


Std_ReturnType Bs_UDSConditionCheckReadLCS(
    Dcm_OpStatusType OpStatus,
    Dcm_NegativeResponseCodeType* ErrorCode) {
  return BUtil_UDS_ConditionCheckRead(&Bs_UDSAdapterContext, Bs_ReadDataLcs, OpStatus, ErrorCode);
}

Std_ReturnType Bs_UDSReadDataLengthLCS(
    Dcm_OpStatusType OpStatus,
    uint16* DataLength) {
  return BUtil_UDS_ReadDataLength(&Bs_UDSAdapterContext, OpStatus, DataLength);
}

Std_ReturnType Bs_UDSReadDataByIdentifierLCS(
    Dcm_OpStatusType OpStatus,
    uint8* DataOut) {
  return BUtil_UDS_ReadData(&Bs_UDSAdapterContext, OpStatus, DataOut);
}

void Bs_UDS_ReadDataLcs_ResultOk(uint8* responseData, size_t resDataLength) {
  BUtil_UDS_ResultOk(&Bs_UDSAdapterContext, responseData, resDataLength);
}
void Bs_UDS_ReadDataLcs_ResultError(UDS_ErrorCodeType errorCode) {
  BUtil_UDS_ResultError(&Bs_UDSAdapterContext, errorCode);
}

