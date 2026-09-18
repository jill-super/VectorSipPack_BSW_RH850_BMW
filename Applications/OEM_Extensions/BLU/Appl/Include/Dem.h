/* Stub */
#if !defined (DEM_H)
#define DEM_H

#include "Std_Types.h"


/* AUTOSAR Software Specification Version Information - decimal encoding */
#define DEM_AR_RELEASE_MAJOR_VERSION             (4U)
#define DEM_AR_RELEASE_MINOR_VERSION             (0U)
#define DEM_AR_RELEASE_REVISION_VERSION          (0U)
typedef uint16 Dem_EventIdType;
/*
typedef uint8                                    Dem_DTCStatusMaskType;
*/
#if !defined (DEM_DTC_KIND_ALL_DTCS)
# define DEM_DTC_KIND_ALL_DTCS                   ((Dem_DTCKindType)(0x00U))
#endif
#if !defined (DEM_DTC_KIND_EMISSION_REL_DTCS)
# define DEM_DTC_KIND_EMISSION_REL_DTCS          ((Dem_DTCKindType)(0x01U))
#endif
/*
typedef uint8                                    Dem_DTCOriginType;
*/
#if !defined (DEM_DTC_ORIGIN_PRIMARY_MEMORY)
# define DEM_DTC_ORIGIN_PRIMARY_MEMORY           ((Dem_DTCOriginType)(0x01U))
#endif
#if !defined (DEM_DTC_ORIGIN_MIRROR_MEMORY)
# define DEM_DTC_ORIGIN_MIRROR_MEMORY            ((Dem_DTCOriginType)(0x02U))
#endif
#if !defined (DEM_DTC_ORIGIN_PERMANENT_MEMORY)
# define DEM_DTC_ORIGIN_PERMANENT_MEMORY         ((Dem_DTCOriginType)(0x03U))
#endif
#if !defined (DEM_DTC_ORIGIN_SECONDARY_MEMORY)
# define DEM_DTC_ORIGIN_SECONDARY_MEMORY         ((Dem_DTCOriginType)(0x04U))
#endif
/*
typedef uint8                                    Dem_DTCFormatType;
*/
#if !defined (DEM_DTC_FORMAT_OBD)
# define DEM_DTC_FORMAT_OBD                      ((Dem_DTCFormatType)(0x00U))
#endif
#if !defined (DEM_DTC_FORMAT_UDS)
# define DEM_DTC_FORMAT_UDS                      ((Dem_DTCFormatType)(0x01U))
#endif
#define DEM_DTC_GROUP_EMISSION_REL_DTCS          ((Dem_DTCGroupType)(0x00000000U))
#define DEM_DTC_GROUP_ALL_DTCS                   ((Dem_DTCGroupType)(0x00FFFFFFU))

typedef uint8                                    Dem_ReturnControlDTCSettingType;
#define DEM_CONTROL_DTC_SETTING_OK               ((Dem_ReturnControlDTCSettingType)(0x00U))
#define DEM_CONTROL_DTC_SETTING_N_OK             ((Dem_ReturnControlDTCSettingType)(0x01U))
#define DEM_CONTROL_DTC_WRONG_DTCGROUP           ((Dem_ReturnControlDTCSettingType)(0x02U))
typedef uint8                                    Dem_FilterWithSeverityType;
#define DEM_FILTER_WITH_SEVERITY_YES             ((Dem_FilterWithSeverityType)(0x00U))
#define DEM_FILTER_WITH_SEVERITY_NO              ((Dem_FilterWithSeverityType)(0x01U))
typedef uint8                                    Dem_DTCSeverityType;
#define DEM_SEVERITY_NO_SEVERITY                 ((Dem_DTCSeverityType)(0x00U))
#define DEM_SEVERITY_MAINTENANCE_ONLY            ((Dem_DTCSeverityType)(0x20U))
#define DEM_SEVERITY_CHECK_AT_NEXT_HALT          ((Dem_DTCSeverityType)(0x40U))
#define DEM_SEVERITY_CHECK_IMMEDIATELY           ((Dem_DTCSeverityType)(0x80U))
typedef uint8                                    Dem_DTCRequestType;
#define DEM_FIRST_FAILED_DTC                     ((Dem_DTCRequestType)(0x01U))
#define DEM_MOST_RECENT_FAILED_DTC               ((Dem_DTCRequestType)(0x02U))
#define DEM_FIRST_DET_CONFIRMED_DTC              ((Dem_DTCRequestType)(0x03U))
#define DEM_MOST_REC_DET_CONFIRMED_DTC           ((Dem_DTCRequestType)(0x04U))
typedef uint8                                    Dem_ReturnClearDTCType;
#define DEM_CLEAR_OK                             ((Dem_ReturnClearDTCType)(0x00U))
#define DEM_CLEAR_WRONG_DTC                      ((Dem_ReturnClearDTCType)(0x01U))
#define DEM_CLEAR_WRONG_DTCORIGIN                ((Dem_ReturnClearDTCType)(0x02U))
#define DEM_CLEAR_FAILED                         ((Dem_ReturnClearDTCType)(0x03U))
#define DEM_CLEAR_PENDING                        ((Dem_ReturnClearDTCType)(0x04U))
typedef uint8                                    Dem_ReturnGetNextFilteredDTCType;
#define DEM_FILTERED_OK                          ((Dem_ReturnGetNextFilteredDTCType)(0x00U))
#define DEM_FILTERED_NO_MATCHING_ELEMENT         ((Dem_ReturnGetNextFilteredDTCType)(0x01U))
#define DEM_FILTERED_PENDING                     ((Dem_ReturnGetNextFilteredDTCType)(0x02U))
typedef uint8                                    Dem_ReturnGetExtendedDataRecordByDTCType;
#define DEM_RECORD_OK                            ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x00U))
#define DEM_RECORD_WRONG_DTC                     ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x01U))
#define DEM_RECORD_WRONG_DTCORIGIN               ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x02U))
#define DEM_RECORD_WRONG_NUMBER                  ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x03U))
#define DEM_RECORD_WRONG_BUFFERSIZE              ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x04U))
#define DEM_RECORD_PENDING                       ((Dem_ReturnGetExtendedDataRecordByDTCType)(0x05U))
typedef uint8                                    Dem_ReturnGetFreezeFrameDataByDTCType;
#define DEM_GET_FFDATABYDTC_OK                   ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x00U))
#define DEM_GET_FFDATABYDTC_WRONG_DTC            ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x01U))
#define DEM_GET_FFDATABYDTC_WRONG_DTCORIGIN      ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x02U))
#define DEM_GET_FFDATABYDTC_WRONG_RECORDNUMBER   ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x03U))
#define DEM_GET_FFDATABYDTC_WRONG_BUFFERSIZE     ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x04U))
#define DEM_GET_FFDATABYDTC_PENDING              ((Dem_ReturnGetFreezeFrameDataByDTCType)(0x05U))
typedef uint8                                    Dem_ReturnGetNumberOfFilteredDTCType;
#define DEM_NUMBER_OK                            ((Dem_ReturnGetNumberOfFilteredDTCType)(0x00U))
#define DEM_NUMBER_FAILED                        ((Dem_ReturnGetNumberOfFilteredDTCType)(0x01U))
#define DEM_NUMBER_PENDING                       ((Dem_ReturnGetNumberOfFilteredDTCType)(0x02U))
typedef uint8                                    Dem_ReturnGetSeverityOfDTCType;
#define DEM_GET_SEVERITYOFDTC_OK                 ((Dem_ReturnGetSeverityOfDTCType)(0x00U))
#define DEM_GET_SEVERITYOFDTC_WRONG_DTC          ((Dem_ReturnGetSeverityOfDTCType)(0x01U))
#define DEM_GET_SEVERITYOFDTC_NOSEVERITY         ((Dem_ReturnGetSeverityOfDTCType)(0x02U))
#define DEM_GET_SEVERITYOFDTC_PENDING            ((Dem_ReturnGetSeverityOfDTCType)(0x03U))
typedef uint8                                    Dem_ReturnGetFunctionalUnitOfDTCType;
#define DEM_GET_FUNCTIONALUNITOFDTC_OK           ((Dem_ReturnGetFunctionalUnitOfDTCType)(0x00U))
#define DEM_GET_FUNCTIONALUNITOFDTC_WRONG_DTC    ((Dem_ReturnGetFunctionalUnitOfDTCType)(0x01U))
typedef uint8                                    Dem_ReturnGetStatusOfDTCType;
#define DEM_STATUS_OK                            ((Dem_ReturnGetStatusOfDTCType)(0x00U))
#define DEM_STATUS_WRONG_DTC                     ((Dem_ReturnGetStatusOfDTCType)(0x01U))
#define DEM_STATUS_WRONG_DTCORIGIN               ((Dem_ReturnGetStatusOfDTCType)(0x02U))
#define DEM_STATUS_FAILED                        ((Dem_ReturnGetStatusOfDTCType)(0x03U))
#define DEM_STATUS_PENDING                       ((Dem_ReturnGetStatusOfDTCType)(0x04U))
typedef uint8                                    Dem_ReturnDisableDTCRecordUpdateType;
#define DEM_DISABLE_DTCRECUP_OK                  ((Dem_ReturnDisableDTCRecordUpdateType)(0x00U))
#define DEM_DISABLE_DTCRECUP_WRONG_DTC           ((Dem_ReturnDisableDTCRecordUpdateType)(0x01U))
#define DEM_DISABLE_DTCRECUP_WRONG_DTCORIGIN     ((Dem_ReturnDisableDTCRecordUpdateType)(0x02U))
#define DEM_DISABLE_DTCRECUP_PENDING             ((Dem_ReturnDisableDTCRecordUpdateType)(0x03U))
typedef uint8                                    Dem_ReturnSetFilterType;
#define DEM_FILTER_ACCEPTED                      ((Dem_ReturnSetFilterType)(0x00U))
#define DEM_WRONG_FILTER                         ((Dem_ReturnSetFilterType)(0x01U))
typedef uint8                                    Dem_FilterForFDCType;
#define DEM_FILTER_FOR_FDC_YES                   ((Dem_FilterForFDCType)(0x00U))
#define DEM_FILTER_FOR_FDC_NO                    ((Dem_FilterForFDCType)(0x01U))
typedef uint8                                    Dem_ReturnGetDTCByOccurrenceTimeType;
#define DEM_OCCURR_OK                            ((Dem_ReturnGetDTCByOccurrenceTimeType)(0x00U))
#define DEM_OCCURR_NOT_AVAILABLE                 ((Dem_ReturnGetDTCByOccurrenceTimeType)(0x01U))
typedef uint8                                    Dem_ReturnGetFreezeFrameDataByRecordType;
#define DEM_GET_FFBYRECORD_OK                    ((Dem_ReturnGetFreezeFrameDataByRecordType)(0x00U))
#define DEM_GET_FFBYRECORD_WRONG_RECORD          ((Dem_ReturnGetFreezeFrameDataByRecordType)(0x01U))
#define DEM_GET_FFBYRECORD_NO_DTC_FOR_RECORD     ((Dem_ReturnGetFreezeFrameDataByRecordType)(0x02U))
typedef uint8                                    Dem_DTCTranslationFormatType;
#define DEM_DTC_TRANSLATION_ISO15031_6           ((Dem_DTCTranslationFormatType)(0x00U))
#define DEM_DTC_TRANSLATION_ISO14229_1           ((Dem_DTCTranslationFormatType)(0x01U))
#define DEM_DTC_TRANSLATION_SAEJ1939_73          ((Dem_DTCTranslationFormatType)(0x02U))
#define DEM_DTC_TRANSLATION_ISO11992_4           ((Dem_DTCTranslationFormatType)(0x03U))
#define RTE_MODE_DcmControlDtcSetting_DISABLEDTCSETTING (0U)
#define RTE_MODE_DcmControlDtcSetting_ENABLEDTCSETTING  (1U)
#define RTE_TRANSITION_DcmControlDtcSetting             (2U)


#define DemConf_DemEventParameter_DemEventParameter  0x66u


#define DEM_EVENT_STATUS_PASSED         0x00u
#define DEM_EVENT_STATUS_FAILED         0x01u

#define FR_E_ACCESS                     0x30u
#define FR_23_E_ACCESS                  0x31u
#define FRSM_E_CLUSTER_STARTUP          0x32u



#define MCU_E_QUARTZ_FAILURE            0x04u
#define MCU_E_LCLOCK_0_FAILURE          0x05u
#define MCU_E_HCLOCK_0_FAILURE          0x06u
#define MCU_E_LOCK_0_FAILURE            0x07u
#define MCU_E_RCCLOCK_0_FAILURE         0x08u
#define MCU_E_LCLOCK_1_FAILURE          0x09u
#define MCU_E_HCLOCK_1_FAILURE          0x0au
#define MCU_E_RCCLOCK_1_FAILURE         0x0bu
#define MCU_E_LOCK_1_FAILURE            0x0cu
#define MCU_E_TIMEOUT_TRANSITION        0x0du
#define MCU_E_TIMEOUT_OSC_STABILITY     0x0eu
#define MCU_E_LOCK_FAILURE              0x12u

#define IPDUM_E_TRANSMIT_FAILED         0x50u
#define ECUM_E_RAM_CHECK_FAILED                0x40u
#define ECUM_E_ALL_RUN_REQUESTS_KILLED         0x41u
#define ECUM_E_CONFIGURATION_DATA_INCONSISTENT 0x42u
#define DUMMY                           0x63u
#define FEE_E_FREE_PAGES_AVAILABLE  0x66u
#define WDG_E_MODE_SWITCH_FAILED        0x70u
#define BSWM_E_ACTION_FAILED            0x80u
#define CAN_E_TIMEOUT                   0x90u
#define WDG_59_DRIVERA_E_DISABLE_REJECTED  0x71u
#define WDG_59_DRIVERA_E_MODE_FAILED       0x72u

#define DemConf_DemEventParameter_AutoCreatedDemEvent_FlsConfigSet_FLS_E_COMPARE_FAILED            0xA0u
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FlsConfigSet_FLS_E_ERASE_FAILED              0xA1u
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FlsConfigSet_FLS_E_READ_FAILED               0xA2u
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FlsConfigSet_FLS_E_UNEXPECTED                0xA3u
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FlsConfigSet_FLS_E_WRITE_FAILED              0xA4u
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FlsConfigSet_FLS_E_UNEXPECTED_FLASH_ID       0xA5u
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FlsConfigSet_FLS_E_ECC_ERROR_DETECTION       0xA6u
#define DemConf_DemEventParameter_AutoCreatedDemEvent_FlsConfigSet_FLS_E_READ_FAILED_DED           0xA7u

#define DemConf_DemEventParameter_DemEventParameter_McuConfigSet_MCU_E_WRITE_TIMEOUT_FAILURE              0xB0u
#define DemConf_DemEventParameter_DemEventParameter_McuConfigSet_MCU_E_RESETCONTROLLER_STARTUP_FAILURE    0xB1u
#define DemConf_DemEventParameter_DemEventParameter_McuConfigSet_MCU_E_CLOCK_FAILED                       0xB2u

/*
#define DemConf_DemEventParameter_MCU_TIMEOUT_TRANSITION                                           0xB3u
#define DemConf_DemEventParameter_DemEventParameter_MCU_E_WRITE_TIMEOUT_FAILURE                    0xB4u
*/
#define DemConf_DemEventParameter_AutoCreatedDemEvent_CANSM_E_BUS_OFF 0x0A
#if !defined (DEM_EVENT_STATUS_PREFAILED)
# define DEM_EVENT_STATUS_PREFAILED              (0x03U)
#endif


#define DemEventParameter_Fls0    0x90u
#define DemEventParameter_Fls1    0x91u
#define DemEventParameter_Fls2    0x92u
#define DemEventParameter_Fls3    0x93u
#define DemEventParameter_Fls4    0x94u

#define DemConf_DemEventParameter_AutoCreatedDemEvent_SpiDriver_SPI_E_HARDWARE_ERROR               0x70u
#define DemConf_DemEventParameter_DemEventParameter_SPI_E_DATA_TX_TIMEOUT_FAILURE                  0x71u

FUNC(void, DEM_CODE) Dem_ReportErrorStatus(Dem_EventIdType EventId, unsigned char EventStatus);


#endif /* DEM_H */
