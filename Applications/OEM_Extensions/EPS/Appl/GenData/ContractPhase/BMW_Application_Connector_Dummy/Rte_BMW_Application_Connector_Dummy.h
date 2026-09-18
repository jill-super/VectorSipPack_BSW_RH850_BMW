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
 *          File:  Rte_BMW_Application_Connector_Dummy.h
 *        Config:  D:/usr/usage/Delivery/CBD17x/CBD1700369/D04/external/Applications/OEM_Extensions/EPS/EPS.dpa
 *     SW-C Type:  BMW_Application_Connector_Dummy
 *  Generated at:  Tue Dec 19 13:12:22 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <BMW_Application_Connector_Dummy> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BMW_APPLICATION_CONNECTOR_DUMMY_H
# define _RTE_BMW_APPLICATION_CONNECTOR_DUMMY_H

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

# include "Rte_BMW_Application_Connector_Dummy_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_BMW_Application_Connector_Dummy
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_BMW_Application_Connector_Dummy, RTE_CONST, RTE_CONST) Rte_Inst_BMW_Application_Connector_Dummy; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_BMW_Application_Connector_Dummy, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_MILE_KM_MILE_KM (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_MILE_KM_MILE_KM(P2VAR(MILE_KM, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_1_NO_VECH_1(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_1_NO_VECH_1(P2VAR(NO_VECH_1, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_2_NO_VECH_2(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_2_NO_VECH_2(P2VAR(NO_VECH_2, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_3_NO_VECH_3(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_3_NO_VECH_3(P2VAR(NO_VECH_3, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_4_NO_VECH_4(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_4_NO_VECH_4(P2VAR(NO_VECH_4, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_5_NO_VECH_5(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_5_NO_VECH_5(P2VAR(NO_VECH_5, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_6_NO_VECH_6(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_6_NO_VECH_6(P2VAR(NO_VECH_6, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_7_NO_VECH_7(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_7_NO_VECH_7(P2VAR(NO_VECH_7, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_BMW_Application_Connector_Dummy_sigGroup_CON_VEH_sigGroup_CON_VEH(P2VAR(sigGroup_CON_VEH, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_BMW_Application_Connector_Dummy_ComVin_ComVin(P2CONST(Vin_ComVinType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Mode_BMW_Application_Connector_Dummy_DlogFirstStartMode_DlogFirstStartMode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_MILE_KM_MILE_KM Rte_Read_BMW_Application_Connector_Dummy_MILE_KM_MILE_KM
# define Rte_Read_NO_VECH_1_NO_VECH_1 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_1_NO_VECH_1
# define Rte_Read_NO_VECH_2_NO_VECH_2 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_2_NO_VECH_2
# define Rte_Read_NO_VECH_3_NO_VECH_3 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_3_NO_VECH_3
# define Rte_Read_NO_VECH_4_NO_VECH_4 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_4_NO_VECH_4
# define Rte_Read_NO_VECH_5_NO_VECH_5 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_5_NO_VECH_5
# define Rte_Read_NO_VECH_6_NO_VECH_6 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_6_NO_VECH_6
# define Rte_Read_NO_VECH_7_NO_VECH_7 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_7_NO_VECH_7
# define Rte_Read_sigGroup_CON_VEH_sigGroup_CON_VEH Rte_Read_BMW_Application_Connector_Dummy_sigGroup_CON_VEH_sigGroup_CON_VEH


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_ComVin_ComVin Rte_Write_BMW_Application_Connector_Dummy_ComVin_ComVin


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_DlogFirstStartMode_DlogFirstStartMode Rte_Mode_BMW_Application_Connector_Dummy_DlogFirstStartMode_DlogFirstStartMode




# define BMW_Application_Connector_Dummy_START_SEC_CODE
# include "BMW_Application_Connector_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: BMW_Vin_Rx_Wrapper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <NO_VECH_7> of PortPrototype <NO_VECH_7>
 *   - triggered on DataReceiveErrorEvent for DataElementPrototype <NO_VECH_7> of PortPrototype <NO_VECH_7>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_NO_VECH_1_NO_VECH_1(uint8 *data)
 *     Argument data: uint8* is of type NO_VECH_1
 *   Std_ReturnType Rte_Read_NO_VECH_2_NO_VECH_2(uint8 *data)
 *     Argument data: uint8* is of type NO_VECH_2
 *   Std_ReturnType Rte_Read_NO_VECH_3_NO_VECH_3(uint8 *data)
 *     Argument data: uint8* is of type NO_VECH_3
 *   Std_ReturnType Rte_Read_NO_VECH_4_NO_VECH_4(uint8 *data)
 *     Argument data: uint8* is of type NO_VECH_4
 *   Std_ReturnType Rte_Read_NO_VECH_5_NO_VECH_5(uint8 *data)
 *     Argument data: uint8* is of type NO_VECH_5
 *   Std_ReturnType Rte_Read_NO_VECH_6_NO_VECH_6(uint8 *data)
 *     Argument data: uint8* is of type NO_VECH_6
 *   Std_ReturnType Rte_Read_NO_VECH_7_NO_VECH_7(uint8 *data)
 *     Argument data: uint8* is of type NO_VECH_7
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ComVin_ComVin(const Vin_ComVinType *data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_BMW_Vin_Rx_Wrapper BMW_Vin_Rx_Wrapper
FUNC(void, BMW_Application_Connector_Dummy_CODE) BMW_Vin_Rx_Wrapper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_DemDataElementClass_FUwBn_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_DemDataElementClass_FUwBn>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_sigGroup_CON_VEH_sigGroup_CON_VEH(sigGroup_CON_VEH *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_DemDataElementClass_FUwBn_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DemDataElementClass_FUwBn_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_DemDataElementClass_FUwBn_ReadData CSDataServices_DemDataElementClass_FUwBn_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_FUwBn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_FUwBn_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_DemDataElementClass_FUwTn_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_DemDataElementClass_FUwTn>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_sigGroup_CON_VEH_sigGroup_CON_VEH(sigGroup_CON_VEH *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_DemDataElementClass_FUwTn_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_3
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DemDataElementClass_FUwTn_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_DemDataElementClass_FUwTn_ReadData CSDataServices_DemDataElementClass_FUwTn_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_FUwTn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_FUwTn_ReadData(P2VAR(DataArrayType_uint8_3, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CSDataServices_DemDataElementClass_KmStand_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <CSDataServices_DemDataElementClass_KmStand>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MILE_KM_MILE_KM(MILE_KM *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType CSDataServices_DemDataElementClass_KmStand_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_3
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_CSDataServices_DemDataElementClass_KmStand_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_CSDataServices_DemDataElementClass_KmStand_ReadData CSDataServices_DemDataElementClass_KmStand_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_KmStand_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_KmStand_ReadData(P2VAR(DataArrayType_uint8_3, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DcmDspDid_SensorLesen_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DcmDspDid_SensorLesen_1_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DcmDspDid_SensorLesen_1>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DcmDspDid_SensorLesen_1_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_1_ReadData DataServices_Data_DcmDspDid_SensorLesen_1_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DcmDspDid_SensorLesen_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DcmDspDid_SensorLesen_2_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DcmDspDid_SensorLesen_2>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DcmDspDid_SensorLesen_2_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_2_ReadData DataServices_Data_DcmDspDid_SensorLesen_2_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_Data_DcmDspDid_SensorLesen_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_Data_DcmDspDid_SensorLesen_3_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_Data_DcmDspDid_SensorLesen_3>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_Data_DcmDspDid_SensorLesen_3_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data4ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_3_ReadData DataServices_Data_DcmDspDid_SensorLesen_3_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DcmDspData_MileKmEeprom>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DcmDspData_MileKmEeprom_DCM_E_PENDING
 *   RTE_E_DataServices_DcmDspData_MileKmEeprom_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DcmDspData_MileKmEeprom_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DcmDspData_MileKmEeprom>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MILE_KM_MILE_KM(MILE_KM *data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DcmDspData_MileKmEeprom_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DcmDspData_MileKmEeprom_DCM_E_PENDING
 *   RTE_E_DataServices_DcmDspData_MileKmEeprom_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_DcmDspData_MileKmEeprom_ReadData DataServices_DcmDspData_MileKmEeprom_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_MileKmEeprom_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_MileKmEeprom_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DcmDspData_Sekundaererfehlerspeicher>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_DCM_E_PENDING
 *   RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DcmDspData_Sekundaererfehlerspeicher>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data8192ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_DCM_E_PENDING
 *   RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DcmDspData_SensorenAnzahlLesen>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_DCM_E_PENDING
 *   RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DcmDspData_SensorenAnzahlLesen_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DcmDspData_SensorenAnzahlLesen>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data1ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_DCM_E_PENDING
 *   RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_DcmDspData_SensorenAnzahlLesen_ReadData DataServices_DcmDspData_SensorenAnzahlLesen_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ConditionCheckRead> of PortPrototype <DataServices_DcmDspData_SystemSupplierIdentifier>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType *ErrorCode)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_DCM_E_PENDING
 *   RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DataServices_DcmDspData_SystemSupplierIdentifier_ReadData
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadData> of PortPrototype <DataServices_DcmDspData_SystemSupplierIdentifier>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(Dcm_OpStatusType OpStatus, uint8 *Data)
 *     Argument Data: uint8* is of type Dcm_Data3ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_DCM_E_PENDING
 *   RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DataServices_DcmDspData_SystemSupplierIdentifier_ReadData DataServices_DcmDspData_SystemSupplierIdentifier_ReadData
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Dlog_FirstStart_Dummy
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <DLOG_FIRSTSTART> of ModeDeclarationGroupPrototype <DlogFirstStartMode> of PortPrototype <DlogFirstStartMode>
 *   - triggered on entering of Mode <DLOG_NORMALSTART> of ModeDeclarationGroupPrototype <DlogFirstStartMode> of PortPrototype <DlogFirstStartMode>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   uint8 Rte_Mode_DlogFirstStartMode_DlogFirstStartMode(void)
 *   Modes of Rte_ModeType_DlogFirstStartMDG:
 *   - RTE_MODE_DlogFirstStartMDG_DLOG_FIRSTSTART
 *   - RTE_MODE_DlogFirstStartMDG_DLOG_NORMALSTART
 *   - RTE_MODE_DlogFirstStartMDG_DLOG_UNINIT
 *   - RTE_TRANSITION_DlogFirstStartMDG
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Dlog_FirstStart_Dummy Dlog_FirstStart_Dummy
FUNC(void, BMW_Application_Connector_Dummy_CODE) Dlog_FirstStart_Dummy(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define BMW_Application_Connector_Dummy_STOP_SEC_CODE
# include "BMW_Application_Connector_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_CSDataServices_DemDataElementClass_FUwBn_E_NOT_OK (1U)

# define RTE_E_CSDataServices_DemDataElementClass_FUwTn_E_NOT_OK (1U)

# define RTE_E_CSDataServices_DemDataElementClass_KmStand_E_NOT_OK (1U)

# define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_DCM_E_PENDING (10U)

# define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_E_NOT_OK (1U)

# define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_DCM_E_PENDING (10U)

# define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_E_NOT_OK (1U)

# define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_DCM_E_PENDING (10U)

# define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_E_NOT_OK (1U)

# define RTE_E_DataServices_DcmDspData_MileKmEeprom_DCM_E_PENDING (10U)

# define RTE_E_DataServices_DcmDspData_MileKmEeprom_E_NOT_OK (1U)

# define RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_DCM_E_PENDING (10U)

# define RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_E_NOT_OK (1U)

# define RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_DCM_E_PENDING (10U)

# define RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_E_NOT_OK (1U)

# define RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_DCM_E_PENDING (10U)

# define RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BMW_APPLICATION_CONNECTOR_DUMMY_H */
