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
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <BMW_Application_Connector_Dummy>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BMW_APPLICATION_CONNECTOR_DUMMY_H
# define _RTE_BMW_APPLICATION_CONNECTOR_DUMMY_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_BMW_Application_Connector_Dummy_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  define RTE_START_SEC_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* RTE Helper-Functions */
FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint16_least num);
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint16_least num);

#  define RTE_STOP_SEC_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_MILE_KM_MILE_KM (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_MILE_KM_MILE_KM Rte_Read_BMW_Application_Connector_Dummy_MILE_KM_MILE_KM
#  define Rte_Read_BMW_Application_Connector_Dummy_MILE_KM_MILE_KM(data) (*(data) = 0U, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_NO_VECH_1_NO_VECH_1 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_1_NO_VECH_1
#  define Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_1_NO_VECH_1(data) ( \
    Rte_MemCpy(data, Rte_NO_VECH_InitValue, sizeof(NO_VECH_1)) \
    ,((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_NO_VECH_2_NO_VECH_2 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_2_NO_VECH_2
#  define Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_2_NO_VECH_2(data) ( \
    Rte_MemCpy(data, Rte_NO_VECH_InitValue, sizeof(NO_VECH_2)) \
    ,((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_NO_VECH_3_NO_VECH_3 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_3_NO_VECH_3
#  define Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_3_NO_VECH_3(data) ( \
    Rte_MemCpy(data, Rte_NO_VECH_InitValue, sizeof(NO_VECH_3)) \
    ,((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_NO_VECH_4_NO_VECH_4 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_4_NO_VECH_4
#  define Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_4_NO_VECH_4(data) ( \
    Rte_MemCpy(data, Rte_NO_VECH_InitValue, sizeof(NO_VECH_4)) \
    ,((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_NO_VECH_5_NO_VECH_5 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_5_NO_VECH_5
#  define Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_5_NO_VECH_5(data) ( \
    Rte_MemCpy(data, Rte_NO_VECH_InitValue, sizeof(NO_VECH_5)) \
    ,((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_NO_VECH_6_NO_VECH_6 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_6_NO_VECH_6
#  define Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_6_NO_VECH_6(data) ( \
    Rte_MemCpy(data, Rte_NO_VECH_InitValue, sizeof(NO_VECH_6)) \
    ,((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_NO_VECH_7_NO_VECH_7 Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_7_NO_VECH_7
#  define Rte_Read_BMW_Application_Connector_Dummy_NO_VECH_7_NO_VECH_7(data) ( \
    Rte_MemCpy(data, Rte_NO_VECH_InitValue, sizeof(NO_VECH_7)) \
    ,((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_sigGroup_CON_VEH_sigGroup_CON_VEH Rte_Read_BMW_Application_Connector_Dummy_sigGroup_CON_VEH_sigGroup_CON_VEH
#  define Rte_Read_BMW_Application_Connector_Dummy_sigGroup_CON_VEH_sigGroup_CON_VEH(data) (*(data) = Rte_C_sigGroup_CON_VEH_0, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_ComVin_ComVin Rte_Write_BMW_Application_Connector_Dummy_ComVin_ComVin
#  define Rte_Write_BMW_Application_Connector_Dummy_ComVin_ComVin(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_DlogFirstStartMode_DlogFirstStartMode() (RTE_MODE_DlogFirstStartMDG_DLOG_UNINIT) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define BMW_Application_Connector_Dummy_START_SEC_CODE
# include "BMW_Application_Connector_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_BMW_Vin_Rx_Wrapper BMW_Vin_Rx_Wrapper
#  define RTE_RUNNABLE_CSDataServices_DemDataElementClass_FUwBn_ReadData CSDataServices_DemDataElementClass_FUwBn_ReadData
#  define RTE_RUNNABLE_CSDataServices_DemDataElementClass_FUwTn_ReadData CSDataServices_DemDataElementClass_FUwTn_ReadData
#  define RTE_RUNNABLE_CSDataServices_DemDataElementClass_KmStand_ReadData CSDataServices_DemDataElementClass_KmStand_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_1_ReadData DataServices_Data_DcmDspDid_SensorLesen_1_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_2_ReadData DataServices_Data_DcmDspDid_SensorLesen_2_ReadData
#  define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_Data_DcmDspDid_SensorLesen_3_ReadData DataServices_Data_DcmDspDid_SensorLesen_3_ReadData
#  define RTE_RUNNABLE_DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_DcmDspData_MileKmEeprom_ReadData DataServices_DcmDspData_MileKmEeprom_ReadData
#  define RTE_RUNNABLE_DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData
#  define RTE_RUNNABLE_DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_DcmDspData_SensorenAnzahlLesen_ReadData DataServices_DcmDspData_SensorenAnzahlLesen_ReadData
#  define RTE_RUNNABLE_DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_DcmDspData_SystemSupplierIdentifier_ReadData DataServices_DcmDspData_SystemSupplierIdentifier_ReadData
#  define RTE_RUNNABLE_Dlog_FirstStart_Dummy Dlog_FirstStart_Dummy
# endif

FUNC(void, BMW_Application_Connector_Dummy_CODE) BMW_Vin_Rx_Wrapper(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_FUwBn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_FUwBn_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_FUwTn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_FUwTn_ReadData(P2VAR(DataArrayType_uint8_3, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_KmStand_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_KmStand_ReadData(P2VAR(DataArrayType_uint8_3, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_MileKmEeprom_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_MileKmEeprom_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8192ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, BMW_Application_Connector_Dummy_CODE) Dlog_FirstStart_Dummy(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define BMW_Application_Connector_Dummy_STOP_SEC_CODE
# include "BMW_Application_Connector_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_CSDataServices_DemDataElementClass_FUwBn_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_FUwTn_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DemDataElementClass_KmStand_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_MileKmEeprom_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_MileKmEeprom_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BMW_APPLICATION_CONNECTOR_DUMMY_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
