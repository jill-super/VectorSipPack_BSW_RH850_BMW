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
 *          File:  Rte_Dummy.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Dummy>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DUMMY_H
# define _RTE_DUMMY_H

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

# include "Rte_Dummy_Type.h"
# include "Rte_DataHandleType.h"


# define Dummy_START_SEC_CODE
# include "Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_DcmDspData_MileKmEeprom_ReadData DataServices_DcmDspData_MileKmEeprom_ReadData
#  define RTE_RUNNABLE_DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_DcmDspData_SensorenAnzahlLesen_ReadData DataServices_DcmDspData_SensorenAnzahlLesen_ReadData
#  define RTE_RUNNABLE_DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead
#  define RTE_RUNNABLE_DataServices_DcmDspData_SystemSupplierIdentifier_ReadData DataServices_DcmDspData_SystemSupplierIdentifier_ReadData
# endif

FUNC(Std_ReturnType, Dummy_CODE) DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_VAR_NOINIT) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Dummy_CODE) DataServices_DcmDspData_MileKmEeprom_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Dummy_CODE) DataServices_DcmDspData_MileKmEeprom_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_VAR_NOINIT) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, Dummy_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_VAR_NOINIT) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Dummy_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Dummy_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_VAR_NOINIT) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, Dummy_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_VAR_NOINIT) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Dummy_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_VAR_NOINIT) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, Dummy_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_VAR_NOINIT) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define Dummy_STOP_SEC_CODE
# include "Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DataServices_DcmDspData_MileKmEeprom_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_MileKmEeprom_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DUMMY_H */
