/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_DemWrapper.h
 *        Config:  D:/usr/usage/Delivery/CBD17x/CBD1700369/D04/external/Applications/OEM_Extensions/EPS/EPS.dpa
 *     SW-C Type:  DemWrapper
 *  Generated at:  Tue Dec 19 13:12:27 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DemWrapper> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DEMWRAPPER_H
# define _RTE_DEMWRAPPER_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_DemWrapper_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_DemWrapper
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_DemWrapper, RTE_CONST, RTE_CONST) Rte_Inst_DemWrapper; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_DemWrapper, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemWrapper_DemWrapper_ClearDTC_SelectDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemWrapper_DemWrapper_EvtInfo_DM_TEST_APPL_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) DTCOfEvent); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemWrapper_DemWrapper_EvtInfo_DM_TEST_COM_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) DTCOfEvent); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemWrapper_DemWrapper_GeneralDiagnosticInfo_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) DTCOfEvent); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemWrapper_DemWrapper_GeneralDiagnosticInfo_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) BufSize); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemWrapper_DemWrapper_GeneralDiagnosticInfo_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) BufSize); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_DemWrapper_ClearDTC_SelectDTC Rte_Call_DemWrapper_DemWrapper_ClearDTC_SelectDTC
# define Rte_Call_DemWrapper_EvtInfo_DM_TEST_APPL_GetDTCOfEvent Rte_Call_DemWrapper_DemWrapper_EvtInfo_DM_TEST_APPL_GetDTCOfEvent
# define Rte_Call_DemWrapper_EvtInfo_DM_TEST_COM_GetDTCOfEvent Rte_Call_DemWrapper_DemWrapper_EvtInfo_DM_TEST_COM_GetDTCOfEvent
# define Rte_Call_DemWrapper_GeneralDiagnosticInfo_GetDTCOfEvent Rte_Call_DemWrapper_DemWrapper_GeneralDiagnosticInfo_GetDTCOfEvent
# define Rte_Call_DemWrapper_GeneralDiagnosticInfo_GetEventFreezeFrameDataEx Rte_Call_DemWrapper_DemWrapper_GeneralDiagnosticInfo_GetEventFreezeFrameDataEx




# define DemWrapper_START_SEC_CODE
# include "DemWrapper_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DemWrapper_ApplicationDTCInfoPort_GetDTCOfEvent
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <DemWrapper_ApplicationDTCInfoPort>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DemWrapper_EvtInfo_DM_TEST_APPL_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE, RTE_E_DiagnosticInfo_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DemWrapper_ApplicationDTCInfoPort_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Darh_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE
 *   RTE_E_Darh_DiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DemWrapper_ApplicationDTCInfoPort_GetDTCOfEvent DemWrapper_ApplicationDTCInfoPort_GetDTCOfEvent
FUNC(Std_ReturnType, DemWrapper_CODE) DemWrapper_ApplicationDTCInfoPort_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) DTCOfEvent); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DemWrapper_CddIf_ClearDTC
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ClearDTC> of PortPrototype <DemWrapper_CddIf>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DemWrapper_ClearDTC_SelectDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ClearDTC_E_NOT_OK, RTE_E_ClearDTC_E_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DemWrapper_CddIf_ClearDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CddIf_DEM_CLEAR_BUSY
 *   RTE_E_CddIf_DEM_CLEAR_FAILED
 *   RTE_E_CddIf_DEM_CLEAR_MEMORY_ERROR
 *   RTE_E_CddIf_DEM_CLEAR_PENDING
 *   RTE_E_CddIf_DEM_CLEAR_WRONG_DTC
 *   RTE_E_CddIf_DEM_CLEAR_WRONG_DTCORIGIN
 *   RTE_E_CddIf_E_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DemWrapper_CddIf_ClearDTC DemWrapper_CddIf_ClearDTC
FUNC(Std_ReturnType, DemWrapper_CODE) DemWrapper_CddIf_ClearDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DemWrapper_Darh_GeneralDiagnosticInfo_GetDTCOfEvent
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <DemWrapper_Darh_GeneralDiagnosticInfo>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DemWrapper_GeneralDiagnosticInfo_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE, RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DemWrapper_Darh_GeneralDiagnosticInfo_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE
 *   RTE_E_Darh_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DemWrapper_Darh_GeneralDiagnosticInfo_GetDTCOfEvent DemWrapper_Darh_GeneralDiagnosticInfo_GetDTCOfEvent
FUNC(Std_ReturnType, DemWrapper_CODE) DemWrapper_Darh_GeneralDiagnosticInfo_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) DTCOfEvent); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DemWrapper_Darh_GeneralDiagnosticInfo_GetEventFreezeFrameData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameData> of PortPrototype <DemWrapper_Darh_GeneralDiagnosticInfo>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DemWrapper_GeneralDiagnosticInfo_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, uint8 *DestBuffer, uint16 *BufSize)
 *     Argument DestBuffer: uint8* is of type Dem_MaxDataValueType
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GeneralDiagnosticInfo_DEM_BUFFER_TOO_SMALL, RTE_E_GeneralDiagnosticInfo_DEM_NO_SUCH_ELEMENT, RTE_E_GeneralDiagnosticInfo_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DemWrapper_Darh_GeneralDiagnosticInfo_GetEventFreezeFrameData(Dem_EventIdType EventId, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, uint8 *DestBuffer)
 *     Argument DestBuffer: uint8* is of type Dem_MaxDataValueType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_NODATAAVAILABLE
 *   RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_WRONG_DIDNUMBER
 *   RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_WRONG_RECORDNUMBER
 *   RTE_E_Darh_GeneralDiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DemWrapper_Darh_GeneralDiagnosticInfo_GetEventFreezeFrameData DemWrapper_Darh_GeneralDiagnosticInfo_GetEventFreezeFrameData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DemWrapper_CODE) DemWrapper_Darh_GeneralDiagnosticInfo_GetEventFreezeFrameData(Dem_EventIdType EventId, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) DestBuffer); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, DemWrapper_CODE) DemWrapper_Darh_GeneralDiagnosticInfo_GetEventFreezeFrameData(Dem_EventIdType EventId, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) DestBuffer); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DemWrapper_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DemWrapper_Init DemWrapper_Init
FUNC(void, DemWrapper_CODE) DemWrapper_Init(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DemWrapper_NetworkDTCInfoPort_GetDTCOfEvent
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <DemWrapper_NetworkDTCInfoPort>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DemWrapper_EvtInfo_DM_TEST_COM_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE, RTE_E_DiagnosticInfo_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DemWrapper_NetworkDTCInfoPort_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_Darh_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE
 *   RTE_E_Darh_DiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DemWrapper_NetworkDTCInfoPort_GetDTCOfEvent DemWrapper_NetworkDTCInfoPort_GetDTCOfEvent
FUNC(Std_ReturnType, DemWrapper_CODE) DemWrapper_NetworkDTCInfoPort_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEMWRAPPER_APPL_VAR) DTCOfEvent); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define DemWrapper_STOP_SEC_CODE
# include "DemWrapper_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_CddIf_DEM_CLEAR_BUSY (5U)

# define RTE_E_CddIf_DEM_CLEAR_FAILED (3U)

# define RTE_E_CddIf_DEM_CLEAR_MEMORY_ERROR (6U)

# define RTE_E_CddIf_DEM_CLEAR_PENDING (4U)

# define RTE_E_CddIf_DEM_CLEAR_WRONG_DTC (1U)

# define RTE_E_CddIf_DEM_CLEAR_WRONG_DTCORIGIN (2U)

# define RTE_E_CddIf_E_OK (0U)

# define RTE_E_ClearDTC_E_NOT_OK (1U)

# define RTE_E_ClearDTC_E_OK (0U)

# define RTE_E_Darh_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE (2U)

# define RTE_E_Darh_DiagnosticInfo_E_NOT_OK (1U)

# define RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_NODATAAVAILABLE (48U)

# define RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE (2U)

# define RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_WRONG_DIDNUMBER (50U)

# define RTE_E_Darh_GeneralDiagnosticInfo_DEM_E_WRONG_RECORDNUMBER (49U)

# define RTE_E_Darh_GeneralDiagnosticInfo_E_NOT_OK (1U)

# define RTE_E_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE (10U)

# define RTE_E_DiagnosticInfo_E_NOT_OK (1U)

# define RTE_E_GeneralDiagnosticInfo_DEM_BUFFER_TOO_SMALL (21U)

# define RTE_E_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE (10U)

# define RTE_E_GeneralDiagnosticInfo_DEM_NO_SUCH_ELEMENT (48U)

# define RTE_E_GeneralDiagnosticInfo_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DEMWRAPPER_H */
