/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Dem
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Dem_Lcfg.c
 *   Generation Time: 2018-01-02 16:37:34
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1700369_D04
 *      Tool Version: DaVinci Configurator (beta) 5.16.31 SP1
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/



/* configuration, interrupt handling implementations differ from the
 * source identification define used here. The naming
 * schemes for those files can be taken from this list:
 *
 * Dem.c:         DEM_SOURCE
 * Dem_Lcfg.c:    DEM_LCFG_SOURCE
 * Dem_PBcfg.c:   DEM_PBCFG_SOURCE */
#define DEM_LCFG_SOURCE


/**********************************************************************************************************************
  MISRA JUSTIFICATIONS
**********************************************************************************************************************/

/* PRQA S 0810 EOF */ /* MD_MSR_1.1_810 */                                      /* #include "..." causes nesting to exceed 8 levels - program is non-conforming. -- caused by #include'd files. */
/* PRQA S 0828 EOF */ /* MD_MSR_1.1_828 */                                      /* Maximum '#if...' nesting exceeds 8 levels - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */                                      /* Number of macro definitions exceeds 1024 - program is non-conforming -- caused by #include'd files. */
/* PRQA S 0779 EOF */ /* MD_DEM_5.1 */                                          /* Identifier does not differ in 32 significant characters -- caused by Autosar algorithm for unique symbolic names. */
/* PRQA S 0612 EOF */ /* MD_DEM_1.1_612 */                                      /* The size of an object exceeds 32767 bytes - program is non-conforming -- caused by large user configration. */


/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

#include "Dem.h"
#include "Os.h"
#if (DEM_CFG_USE_NVM == STD_ON)
# include "NvM.h"                                                               /* get: symbolic names for NvM block IDs */
#endif
#if (DEM_CFG_SUPPORT_J1939 == STD_ON)
# include "J1939Nm.h"                                                           /* get: symbolic names for J1939Nm node IDs */
#endif
#if (DEM_CFG_USE_RTE == STD_ON)
/* DEM used with RTE */
# include "Rte_DemMaster_0.h"
#endif
#include "Dem_AdditionalIncludeCfg.h"                                           /* additional, configuration defined files */

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Dem_Cfg_CallbackClearEventAllowed
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_ClearEventAllowedFPtrType, DEM_CONST) Dem_Cfg_CallbackClearEventAllowed[3] = {
  /* Index     CallbackClearEventAllowed                                    Referable Keys */
  /*     0 */ NULL_PTR                                                ,  /* [#NoCallbackEventDataChangedConfigured] */
  /*     1 */ Rte_Call_CBClrEvt_CodingEventNotCoded_ClearEventAllowed ,  /* [CodingEventNotCoded] */
  /*     2 */ Rte_Call_CBClrEvt_VsmEventOpmode_ClearEventAllowed         /* [VsmEventOpmode] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_CycleIdTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_CycleIdTable
  \details
  Element         Description
  UsedForAging    DemOperationCycle is target of any DemEventParameter/DemEventClass/DemAgingCycleRef
  OpCycleType     DemOperationCycleType of the DemOperationCycle: [DEM_CFG_OPCYC_IGNITION, DEM_CFG_OPCYC_OBD_DCY, DEM_CFG_OPCYC_OTHER, DEM_CFG_OPCYC_POWER, DEM_CFG_OPCYC_TIME, DEM_CFG_OPCYC_WARMUP, DEM_CFG_OPCYC_IGNITION_HYBRID, DEM_CFG_OPCYC_AGING]
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_CycleIdTableType, DEM_CONST) Dem_Cfg_CycleIdTable[2] = {
    /* Index    UsedForAging  OpCycleType                  Comment */
  { /*     0 */         TRUE, DEM_CFG_OPCYC_POWER   },  /* [DemConf_DemOperationCycle_NON_OBD] */
  { /*     1 */        FALSE, DEM_CFG_OPCYC_OBD_DCY }   /* [DemConf_DemOperationCycle_ODB] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTable
  \details
  Element                                Description
  IdNumber                           
  CollectionSize                     
  DataElementTableCol2ElmtIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  DataElementTableCol2ElmtIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataElementTableCol2ElmtInd
  MaskedBits                             contains bitcoded the boolean data of Dem_Cfg_DataElementTableCol2ElmtIndUsedOfDataCollectionTable, Dem_Cfg_UpdateOfDataCollectionTable
  StorageKind                        
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableType, DEM_CONST) Dem_Cfg_DataCollectionTable[20] = {
    /* Index    IdNumber  CollectionSize  DataElementTableCol2ElmtIndEndIdx                                  DataElementTableCol2ElmtIndStartIdx                                  MaskedBits  StorageKind                       Referable Keys */
  { /*     0 */  0x0000U,             0U, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDENDIDXOFDATACOLLECTIONTABLE, DEM_CFG_NO_DATAELEMENTTABLECOL2ELMTINDSTARTIDXOFDATACOLLECTIONTABLE,      0x00U, DEM_CFG_EREC_TYPE_GLOBAL   },  /* [#NoDataCollectionConfigured] */
  { /*     1 */  0x0001U,             1U,                                                                1U,                                                                  0U,      0x03U, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrDemExtendedDataRecordClass_ConditionByte, Ext:DemExtendedDataClass_Healing, Ext:DemExtendedDataClass_NoHealing] */
  { /*     2 */  0x0003U,             1U,                                                                2U,                                                                  1U,      0x03U, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrDemExtendedDataRecordClass_HealingCounter, Ext:DemExtendedDataClass_Healing] */
  { /*     3 */  0x0002U,             1U,                                                                3U,                                                                  2U,      0x03U, DEM_CFG_EREC_TYPE_INTERNAL },  /* [#EdrDemExtendedDataRecordClass_OccurrenceCounter, Ext:DemExtendedDataClass_Healing, Ext:DemExtendedDataClass_NoHealing] */
  { /*     4 */  0x17C0U,             1U,                                                                4U,                                                                  3U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_DuplicateIpAddress, Ffm:DemFreezeFrameClass_7febc690] */
  { /*     5 */  0x175FU,             1U,                                                                5U,                                                                  4U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_EthArpDiscardType, Ffm:DemFreezeFrameClass_95fb4a10] */
  { /*     6 */  0x175EU,             1U,                                                                6U,                                                                  5U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_EthDiscardedArpEntry, Ffm:DemFreezeFrameClass_95fb4a10] */
  { /*     7 */  0x175DU,             1U,                                                                7U,                                                                  6U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_EthDroppedFrameStatus, Ffm:DemFreezeFrameClass_ebef81bb] */
  { /*     8 */  0x17C1U,             6U,                                                                8U,                                                                  7U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_EthSourceMacOfDuplicateIpAddress, Ffm:DemFreezeFrameClass_7febc690] */
  { /*     9 */  0x1750U,             1U,                                                                9U,                                                                  8U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_FUwBn, Ffm:DemFreezeFrameClass_711871ef, Ffm:DemFreezeFrameClass_7febc690, Ffm:DemFreezeFrameClass_8ef63883, Ffm:DemFreezeFrameClass_95fb4a10, Ffm:DemFreezeFrameClass_9ec24f64, Ffm:DemFreezeFrameClass_ebef819c, Ffm:DemFreezeFrameClass_ebef819f, Ffm:DemFreezeFrameClass_ebef81bb, Ffm:DemFreezeFrameClass_ebef81bf] */
  { /*    10 */  0x1751U,             3U,                                                               10U,                                                                  9U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_FUwTn, Ffm:DemFreezeFrameClass_711871ef, Ffm:DemFreezeFrameClass_7febc690, Ffm:DemFreezeFrameClass_8ef63883, Ffm:DemFreezeFrameClass_95fb4a10, Ffm:DemFreezeFrameClass_9ec24f64, Ffm:DemFreezeFrameClass_ebef819c, Ffm:DemFreezeFrameClass_ebef819f, Ffm:DemFreezeFrameClass_ebef81bb, Ffm:DemFreezeFrameClass_ebef81bf] */
  { /*    11 */  0x1761U,            18U,                                                               11U,                                                                 10U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_FileManipulated, Ffm:DemFreezeFrameClass_ebef81bf] */
  { /*    12 */  0x1700U,             3U,                                                               12U,                                                                 11U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_KmStand, Ffm:DemFreezeFrameClass_711871ef, Ffm:DemFreezeFrameClass_7febc690, Ffm:DemFreezeFrameClass_8ef63883, Ffm:DemFreezeFrameClass_95fb4a10, Ffm:DemFreezeFrameClass_9ec24f64, Ffm:DemFreezeFrameClass_ebef819c, Ffm:DemFreezeFrameClass_ebef819f, Ffm:DemFreezeFrameClass_ebef81bb, Ffm:DemFreezeFrameClass_ebef81bf] */
  { /*    13 */  0x1753U,             1U,                                                               13U,                                                                 12U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_Port0CrcErrorCount, Ffm:DemFreezeFrameClass_ebef819c] */
  { /*    14 */  0x1756U,             1U,                                                               14U,                                                                 13U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_Port0LowSignalQualityStatus, Ffm:DemFreezeFrameClass_ebef819f] */
  { /*    15 */  0x0055U,             2U,                                                               15U,                                                                 14U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_StartApplication] */
  { /*    16 */  0x1742U,             1U,                                                               16U,                                                                 15U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_SwtFehlerwert, Ffm:DemFreezeFrameClass_8ef63883, Ffm:DemFreezeFrameClass_9ec24f64] */
  { /*    17 */  0x1744U,             4U,                                                               17U,                                                                 16U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_SwtSwid, Ffm:DemFreezeFrameClass_9ec24f64] */
  { /*    18 */  0x1743U,             7U,                                                               18U,                                                                 17U,      0x02U, DEM_CFG_EREC_TYPE_USER     },  /* [#DidDemDidClass_SwtVin, Ffm:DemFreezeFrameClass_9ec24f64] */
  { /*    19 */  0x1701U,             4U,                                                               19U,                                                                 18U,      0x02U, DEM_CFG_EREC_TYPE_USER     }   /* [#DidDemDidClass_Systemzeit, Ffm:DemFreezeFrameClass_711871ef, Ffm:DemFreezeFrameClass_7febc690, Ffm:DemFreezeFrameClass_8ef63883, Ffm:DemFreezeFrameClass_95fb4a10, Ffm:DemFreezeFrameClass_9ec24f64, Ffm:DemFreezeFrameClass_ebef819c, Ffm:DemFreezeFrameClass_ebef819f, Ffm:DemFreezeFrameClass_ebef81bb, Ffm:DemFreezeFrameClass_ebef81bf] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTableEdr2CollInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTableEdr2CollInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataCollectionTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableEdr2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableEdr2CollInd[5] = {
  /* Index     DataCollectionTableEdr2CollInd      Referable Keys */
  /*     0 */                              1U,  /* [Ext:DemExtendedDataClass_Healing] */
  /*     1 */                              3U,  /* [Ext:DemExtendedDataClass_Healing] */
  /*     2 */                              2U,  /* [Ext:DemExtendedDataClass_Healing] */
  /*     3 */                              1U,  /* [Ext:DemExtendedDataClass_NoHealing] */
  /*     4 */                              3U   /* [Ext:DemExtendedDataClass_NoHealing] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataCollectionTableFfm2CollInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataCollectionTableFfm2CollInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataCollectionTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataCollectionTableFfm2CollIndType, DEM_CONST) Dem_Cfg_DataCollectionTableFfm2CollInd[48] = {
  /* Index     DataCollectionTableFfm2CollInd      Referable Keys */
  /*     0 */                              9U,  /* [Ffm:DemFreezeFrameClass_711871ef] */
  /*     1 */                             10U,  /* [Ffm:DemFreezeFrameClass_711871ef] */
  /*     2 */                             12U,  /* [Ffm:DemFreezeFrameClass_711871ef] */
  /*     3 */                             19U,  /* [Ffm:DemFreezeFrameClass_711871ef] */
  /*     4 */                              4U,  /* [Ffm:DemFreezeFrameClass_7febc690] */
  /*     5 */                              8U,  /* [Ffm:DemFreezeFrameClass_7febc690] */
  /*     6 */                              9U,  /* [Ffm:DemFreezeFrameClass_7febc690] */
  /*     7 */                             10U,  /* [Ffm:DemFreezeFrameClass_7febc690] */
  /*     8 */                             12U,  /* [Ffm:DemFreezeFrameClass_7febc690] */
  /*     9 */                             19U,  /* [Ffm:DemFreezeFrameClass_7febc690] */
  /*    10 */                              9U,  /* [Ffm:DemFreezeFrameClass_8ef63883] */
  /*    11 */                             10U,  /* [Ffm:DemFreezeFrameClass_8ef63883] */
  /*    12 */                             12U,  /* [Ffm:DemFreezeFrameClass_8ef63883] */
  /*    13 */                             16U,  /* [Ffm:DemFreezeFrameClass_8ef63883] */
  /*    14 */                             19U,  /* [Ffm:DemFreezeFrameClass_8ef63883] */
  /*    15 */                              5U,  /* [Ffm:DemFreezeFrameClass_95fb4a10] */
  /*    16 */                              6U,  /* [Ffm:DemFreezeFrameClass_95fb4a10] */
  /*    17 */                              9U,  /* [Ffm:DemFreezeFrameClass_95fb4a10] */
  /*    18 */                             10U,  /* [Ffm:DemFreezeFrameClass_95fb4a10] */
  /*    19 */                             12U,  /* [Ffm:DemFreezeFrameClass_95fb4a10] */
  /*    20 */                             19U,  /* [Ffm:DemFreezeFrameClass_95fb4a10] */
  /*    21 */                              9U,  /* [Ffm:DemFreezeFrameClass_9ec24f64] */
  /*    22 */                             10U,  /* [Ffm:DemFreezeFrameClass_9ec24f64] */
  /*    23 */                             12U,  /* [Ffm:DemFreezeFrameClass_9ec24f64] */
  /*    24 */                             16U,  /* [Ffm:DemFreezeFrameClass_9ec24f64] */
  /*    25 */                             17U,  /* [Ffm:DemFreezeFrameClass_9ec24f64] */
  /*    26 */                             18U,  /* [Ffm:DemFreezeFrameClass_9ec24f64] */
  /*    27 */                             19U,  /* [Ffm:DemFreezeFrameClass_9ec24f64] */
  /*    28 */                              9U,  /* [Ffm:DemFreezeFrameClass_ebef819c] */
  /*    29 */                             10U,  /* [Ffm:DemFreezeFrameClass_ebef819c] */
  /*    30 */                             12U,  /* [Ffm:DemFreezeFrameClass_ebef819c] */
  /*    31 */                             13U,  /* [Ffm:DemFreezeFrameClass_ebef819c] */
  /*    32 */                             19U,  /* [Ffm:DemFreezeFrameClass_ebef819c] */
  /*    33 */                              9U,  /* [Ffm:DemFreezeFrameClass_ebef819f] */
  /*    34 */                             10U,  /* [Ffm:DemFreezeFrameClass_ebef819f] */
  /*    35 */                             12U,  /* [Ffm:DemFreezeFrameClass_ebef819f] */
  /*    36 */                             14U,  /* [Ffm:DemFreezeFrameClass_ebef819f] */
  /*    37 */                             19U,  /* [Ffm:DemFreezeFrameClass_ebef819f] */
  /*    38 */                              7U,  /* [Ffm:DemFreezeFrameClass_ebef81bb] */
  /*    39 */                              9U,  /* [Ffm:DemFreezeFrameClass_ebef81bb] */
  /*    40 */                             10U,  /* [Ffm:DemFreezeFrameClass_ebef81bb] */
  /*    41 */                             12U,  /* [Ffm:DemFreezeFrameClass_ebef81bb] */
  /*    42 */                             19U,  /* [Ffm:DemFreezeFrameClass_ebef81bb] */
  /*    43 */                              9U,  /* [Ffm:DemFreezeFrameClass_ebef81bf] */
  /*    44 */                             10U,  /* [Ffm:DemFreezeFrameClass_ebef81bf] */
  /*    45 */                             11U,  /* [Ffm:DemFreezeFrameClass_ebef81bf] */
  /*    46 */                             12U,  /* [Ffm:DemFreezeFrameClass_ebef81bf] */
  /*    47 */                             19U   /* [Ffm:DemFreezeFrameClass_ebef81bf] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTable
  \details
  Element         Description
  ElementKind     DataElement kind, returned by Dem_Cfg_DataCallbackType()
  ElementSize     Size of data element in Byte.
  ReadDataFunc    C-function for getting the data. Its signature depends on ElementKind: With value(s) DEM_CFG_DATA_FROM_CBK_WITH_EVENTID use: Std_ReturnType (*)(uint8* Buffer, uint16 EventId); - and use: Std_ReturnType (*)(uint8* Buffer); with the other values DEM_CFG_DATA_FROM_CBK, DEM_CFG_DATA_FROM_SR_PORT_BOOLEAN, DEM_CFG_DATA_FROM_SR_PORT_SINT16, DEM_CFG_DATA_FROM_SR_PORT_SINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT32, DEM_CFG_DATA_FROM_SR_PORT_SINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_SINT8, DEM_CFG_DATA_FROM_SR_PORT_SINT8_N, DEM_CFG_DATA_FROM_SR_PORT_UINT16, DEM_CFG_DATA_FROM_SR_PORT_UINT16_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT32, DEM_CFG_DATA_FROM_SR_PORT_UINT32_INTEL, DEM_CFG_DATA_FROM_SR_PORT_UINT8, DEM_CFG_DATA_FROM_SR_PORT_UINT8_N.
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableType, DEM_CONST) Dem_Cfg_DataElementTable[20] = {
    /* Index    ElementKind                  ElementSize  ReadDataFunc                                                                                                                                         Referable Keys */
  { /*     0 */ DEM_CFG_DATAELEMENT_INVALID,          0U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                          },  /* [#NoDataElementConfigured] */
  { /*     1 */ DEM_CFG_DATA_FROM_OCCCTR   ,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                          },  /* [#DemDataElementClass_OccurrenceCounter, EdrDemExtendedDataRecordClass_OccurrenceCounter] */
  { /*     2 */ DEM_CFG_DATA_FROM_AGINGCTR ,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                          },  /* [#DemDataElementClass_DuplicateIpAddress, DidDemDidClass_DuplicateIpAddress] */
  { /*     3 */ DEM_CFG_DATA_FROM_OVFLIND  ,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                          },  /* [#DemDataElementClass_ConditionByte, EdrDemExtendedDataRecordClass_ConditionByte] */
  { /*     4 */ DEM_CFG_DATA_FROM_AGINGCTR ,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ NULL_PTR                                                                          },  /* [#DemDataElementClass_HealingCounter, EdrDemExtendedDataRecordClass_HealingCounter] */
  { /*     5 */ DEM_CFG_DATA_FROM_CBK      ,          4U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_Systemzeit_ReadData                       },  /* [#DemDataElementClass_Systemzeit, DidDemDidClass_Systemzeit] */
  { /*     6 */ DEM_CFG_DATA_FROM_CBK      ,          3U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_KmStand_ReadData                          },  /* [#DemDataElementClass_KmStand] */
  { /*     7 */ DEM_CFG_DATA_FROM_CBK      ,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_EthDiscardedArpEntry_ReadData             },  /* [#DemDataElementClass_EthDiscardedArpEntry, DidDemDidClass_EthDiscardedArpEntry] */
  { /*     8 */ DEM_CFG_DATA_FROM_CBK      ,          7U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_SwtVin_ReadData                           },  /* [#DemDataElementClass_SwtVin, DidDemDidClass_SwtVin] */
  { /*     9 */ DEM_CFG_DATA_FROM_CBK      ,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_FUwBn_ReadData                            },  /* [#DemDataElementClass_FUwBn, DidDemDidClass_FUwBn] */
  { /*    10 */ DEM_CFG_DATA_FROM_CBK      ,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_Port0LowSignalQualityStatus_ReadData      },  /* [#DemDataElementClass_Port0LowSignalQualityStatus, DidDemDidClass_Port0LowSignalQualityStatus] */
  { /*    11 */ DEM_CFG_DATA_FROM_CBK      ,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_Port0CrcErrorCount_ReadData               },  /* [#DemDataElementClass_Port0CrcErrorCount, DidDemDidClass_Port0CrcErrorCount] */
  { /*    12 */ DEM_CFG_DATA_FROM_CBK      ,          6U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_EthSourceMacOfDuplicateIpAddress_ReadData },  /* [#DemDataElementClass_EthSourceMacOfDuplicateIpAddress, DidDemDidClass_EthSourceMacOfDuplicateIpAddress] */
  { /*    13 */ DEM_CFG_DATA_FROM_CBK      ,         18U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_FileManipulated_ReadData                  },  /* [#DemDataElementClass_FileManipulated, DidDemDidClass_FileManipulated] */
  { /*    14 */ DEM_CFG_DATA_FROM_CBK      ,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_SwtFehlerwert_ReadData                    },  /* [#DemDataElementClass_SwtFehlerwert, DidDemDidClass_SwtFehlerwert] */
  { /*    15 */ DEM_CFG_DATA_FROM_CBK      ,          3U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_FUwTn_ReadData                            },  /* [#DemDataElementClass_FUwTn, DidDemDidClass_FUwTn, DidDemDidClass_KmStand] */
  { /*    16 */ DEM_CFG_DATA_FROM_CBK      ,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_EthDroppedFrameStatus_ReadData            },  /* [#DemDataElementClass_EthDroppedFrameStatus, DidDemDidClass_EthDroppedFrameStatus] */
  { /*    17 */ DEM_CFG_DATA_FROM_CBK      ,          1U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_EthArpDiscardType_ReadData                },  /* [#DemDataElementClass_EthArpDiscardType, DidDemDidClass_EthArpDiscardType] */
  { /*    18 */ DEM_CFG_DATA_FROM_CBK      ,          4U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_SwtSwid_ReadData                          },  /* [#DemDataElementClass_SwtSwid, DidDemDidClass_SwtSwid] */
  { /*    19 */ DEM_CFG_DATA_FROM_CBK      ,          2U,  (Dem_ReadDataFPtrType) /* PRQA S 0313 */ /* MD_DEM_11.1 */ Rte_Call_CBReadData_DemDataElementClass_StartApplication_ReadData                 }   /* [#DemDataElementClass_StartApplication, DidDemDidClass_StartApplication] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DataElementTableCol2ElmtInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DataElementTableCol2ElmtInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_DataElementTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DataElementTableCol2ElmtIndType, DEM_CONST) Dem_Cfg_DataElementTableCol2ElmtInd[19] = {
  /* Index     DataElementTableCol2ElmtInd      Referable Keys */
  /*     0 */                           3U,  /* [EdrDemExtendedDataRecordClass_ConditionByte] */
  /*     1 */                           4U,  /* [EdrDemExtendedDataRecordClass_HealingCounter] */
  /*     2 */                           1U,  /* [EdrDemExtendedDataRecordClass_OccurrenceCounter] */
  /*     3 */                           2U,  /* [DidDemDidClass_DuplicateIpAddress] */
  /*     4 */                          17U,  /* [DidDemDidClass_EthArpDiscardType] */
  /*     5 */                           7U,  /* [DidDemDidClass_EthDiscardedArpEntry] */
  /*     6 */                          16U,  /* [DidDemDidClass_EthDroppedFrameStatus] */
  /*     7 */                          12U,  /* [DidDemDidClass_EthSourceMacOfDuplicateIpAddress] */
  /*     8 */                           9U,  /* [DidDemDidClass_FUwBn] */
  /*     9 */                          15U,  /* [DidDemDidClass_FUwTn] */
  /*    10 */                          13U,  /* [DidDemDidClass_FileManipulated] */
  /*    11 */                          15U,  /* [DidDemDidClass_KmStand] */
  /*    12 */                          11U,  /* [DidDemDidClass_Port0CrcErrorCount] */
  /*    13 */                          10U,  /* [DidDemDidClass_Port0LowSignalQualityStatus] */
  /*    14 */                          19U,  /* [DidDemDidClass_StartApplication] */
  /*    15 */                          14U,  /* [DidDemDidClass_SwtFehlerwert] */
  /*    16 */                          18U,  /* [DidDemDidClass_SwtSwid] */
  /*    17 */                           8U,  /* [DidDemDidClass_SwtVin] */
  /*    18 */                           5U   /* [DidDemDidClass_Systemzeit] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DebounceTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DebounceTable
  \details
  Element                   Description
  DecrementStepSize         (-1) * DemDebounceCounterDecrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  FailedThreshold           DemDebounceCounterFailedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  IncrementStepSize         DemDebounceCounterIncrementStepSize of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  PassedThreshold           DemDebounceCounterPassedThreshold of the DemEventParameter/DemEventClass/DemDebounceAlgorithmClass/DemDebounceCounterBased
  EventDebounceAlgorithm    Used DemEventParameter/DemEventClass/DemDebounceAlgorithmClass
  MaskedBits                contains bitcoded the boolean data of Dem_Cfg_DebounceContinuousOfDebounceTable, Dem_Cfg_EventDebounceBehaviorOfDebounceTable, Dem_Cfg_JumpDownOfDebounceTable, Dem_Cfg_JumpUpOfDebounceTable, Dem_Cfg_StorageOfDebounceTable
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DebounceTableType, DEM_CONST) Dem_Cfg_DebounceTable[2] = {
    /* Index    DecrementStepSize  FailedThreshold  IncrementStepSize  PassedThreshold  EventDebounceAlgorithm                                                      MaskedBits        Referable Keys */
  { /*     0 */                -1,             127,                 1,            -128, DEM_CFG_DEM_CFG_DEBOUNCETYPE_COUNTER_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x06U },  /* [CansmEBusACanOff, CansmEBusB2CanOff, CansmEBusBodyCanOff, CansmEBusFaCanOff, CansmEBusIukCanOff, CansmEBusKCanOff, CansmEBusLeCanOff, CansmEBusLpCanOff, CansmEBusZsgCanOff, CantrcvEBusACanError, CantrcvEBusB2CanError, CantrcvEBusBodyCanError, CantrcvEBusFaCanError, CantrcvEBusIukError, CantrcvEBusKCanError, CantrcvEBusLeCanError, CantrcvEBusLpCanError, CantrcvEBusZsgCanError, CbsReplacementValue, CodingEventInvalidData, CodingEventNotCoded, CodingEventSignatureError, CodingEventTransactionFailed, CodingEventUnqualifiedData, CodingEventWrongVehicle, DemEventParameter_FlsConfigSet_FLS_E_COMPARE_FAILED, DemEventParameter_FlsConfigSet_FLS_E_ECC_FAILED, DemEventParameter_FlsConfigSet_FLS_E_ERASE_FAILED, DemEventParameter_FlsConfigSet_FLS_E_HW_FAILED, DemEventParameter_FlsConfigSet_FLS_E_INT_FAILED, DemEventParameter_FlsConfigSet_FLS_E_READ_DED_FAILED, DemEventParameter_FlsConfigSet_FLS_E_READ_FAILED, DemEventParameter_FlsConfigSet_FLS_E_UNEXPECTED_FLASH_ID, DemEventParameter_FlsConfigSet_FLS_E_VRFY_FAILED, DemEventParameter_FlsConfigSet_FLS_E_WRITE_FAILED, DemEventParameter_FlsConfigSet_MCU_E_CLOCK_FAILED, DemEventParameter_FlsConfigSet_MCU_E_HW_FAILED, DemEventParameter_FlsConfigSet_MCU_E_STARTUP_FAILED, DmTestAppl, DmTestCom, Dtc000030, Dtc000031, Dtc000032, Dtc000033, Dtc000034, DtcCd0601, DtcCd0605, DtcCd0606, DtcCd0607, EthSignalQualityLow, FrifEAcsChA, FrifENitChA, FrsmEClusterStartup, FrsmEClusterSyncLoss, FrtrcvEFrBuserrorTrcv0, FrtrcvEFrErrnTrcv0, FrtrcvEFrErrnTrcv1, FrtrcvEFrErrnTrcv2, FrtrcvEFrErrnTrcv3, FrtrcvEFrErrnTrcv4, FrtrcvEFrErrnTrcv5, FrtrcvEFrErrnTrcv6, FrtrcvEFrErrnTrcv7, LIN_E_TIMEOUT, NVM_E_HARDWARE, Overvoltage, PiaEIoError, SwtExternalCheckFailure, SwtInternalCheckFailure, UDPNM_E_TCPIP_TRANSMIT_ERROR, Undervoltage, VsmEventOpmode] */
  { /*     1 */                 0,               0,                 0,               0, DEM_CFG_DEM_CFG_DEBOUNCETYPE_INVALID_EVENTDEBOUNCEALGORITHMOFDEBOUNCETABLE,      0x00U }   /* [#EVENT_INVALID] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DtcTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DtcTable
  \details
  Element           Description
  UdsDtc        
  FunctionalUnit
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_DtcTableType, DEM_CONST) Dem_Cfg_DtcTable[4] = {
    /* Index    UdsDtc        FunctionalUnit        Referable Keys */
  { /*     0 */ 0x00FFFFFFUL,           255U },  /* [#NoUdsDtcConfigured, #NoObdDtcConfigured, #NoJ1939DtcConfigured] */
  { /*     1 */ 0x0002FF7DUL,             0U },  /* [DTC_2FF7D_DM_TEST_APPL] */
  { /*     2 */ 0x00E84BFFUL,             0U },  /* [DTC_E84BFF_DM_TEST_COM] */
  { /*     3 */ 0x00023000UL,             0U }   /* [DTC_23000_VSM_EVENT_OPMODE] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupTableInd
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupTableInd
  \brief  the indexes of the 1:1 sorted relation pointing to Dem_Cfg_EnableConditionGroupTable
*/ 
#define DEM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EnableConditionGroupTableIndType, DEM_CONST) Dem_Cfg_EnableConditionGroupTableInd[10] = {
  /* Index     EnableConditionGroupTableInd      Referable Keys */
  /*     0 */                            0U,  /* [__Internal_ControlDtcSetting] */
  /*     1 */                            3U,  /* [__Internal_ControlDtcSetting] */
  /*     2 */                            2U,  /* [__Internal_ControlDtcSetting] */
  /*     3 */                            1U,  /* [__Internal_ControlDtcSetting] */
  /*     4 */                            2U,  /* [DemEnableCondition_Omc] */
  /*     5 */                            3U,  /* [DemEnableCondition_StdDiag] */
  /*     6 */                            2U,  /* [DemEnableCondition_StdDiag] */
  /*     7 */                            1U,  /* [DemEnableCondition_StdDiag] */
  /*     8 */                            2U,  /* [DemEnableCondition_Stm] */
  /*     9 */                            1U   /* [DemEnableCondition_Stm] */
};
#define DEM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionTable
  \brief  Map each EnableCondition(Id) to the referring EnableConditionGroups - this is reverse direction of the AUTOSAR configuration model.
  \details
  Element                                 Description
  EnableConditionGroupTableIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_EnableConditionGroupTableInd
  EnableConditionGroupTableIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_EnableConditionGroupTableInd
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EnableConditionTableType, DEM_CONST) Dem_Cfg_EnableConditionTable[4] = {
    /* Index    EnableConditionGroupTableIndEndIdx  EnableConditionGroupTableIndStartIdx */
  { /*     0 */                                 4U,                                   0U },
  { /*     1 */                                 5U,                                   4U },
  { /*     2 */                                 8U,                                   5U },
  { /*     3 */                                10U,                                   8U }
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventTable
  \details
  Element                         Description
  AgingCycleId                    DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemAgingCycleRef
  CallbackClearEventAllowedIdx    the index of the 0:1 relation pointing to Dem_Cfg_CallbackClearEventAllowed
  DtcTableIdx                     the index of the 1:1 relation pointing to Dem_Cfg_DtcTable
  EventKind                       DemEventKind of the DemEventParameter
  ExtendedDataTableIdx            the index of the 1:1 relation pointing to Dem_Cfg_ExtendedDataTable
  FreezeFrameNumTableEndIdx       the end index of the 0:n relation pointing to Dem_Cfg_FreezeFrameNumTable
  FreezeFrameNumTableStartIdx     the start index of the 0:n relation pointing to Dem_Cfg_FreezeFrameNumTable
  MaskedBits                      contains bitcoded the boolean data of Dem_Cfg_AgingAllowedOfEventTable, Dem_Cfg_CallbackClearEventAllowedUsedOfEventTable, Dem_Cfg_EventLatchTFOfEventTable, Dem_Cfg_FreezeFrameNumTableUsedOfEventTable
  OperationCycleId                DemOperationCycle (ID) referenced by DemEventParameter/DemEventClass/DemOperationCycleRef
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_EventTableType, DEM_CONST) Dem_Cfg_EventTable[73] = {
    /* Index    AgingCycleId                       CallbackClearEventAllowedIdx  DtcTableIdx  EventKind                                         ExtendedDataTableIdx  FreezeFrameNumTableEndIdx                         FreezeFrameNumTableStartIdx                         MaskedBits  OperationCycleId                         Referable Keys */
  { /*     0 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [#EVENT_INVALID, Satellite#0] */
  { /*     1 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CansmEBusACanOff, Satellite#0] */
  { /*     2 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CansmEBusB2CanOff, Satellite#0] */
  { /*     3 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CansmEBusBodyCanOff, Satellite#0] */
  { /*     4 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CansmEBusFaCanOff, Satellite#0] */
  { /*     5 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CansmEBusIukCanOff, Satellite#0] */
  { /*     6 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CansmEBusKCanOff, Satellite#0] */
  { /*     7 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CansmEBusLeCanOff, Satellite#0] */
  { /*     8 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CansmEBusLpCanOff, Satellite#0] */
  { /*     9 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CansmEBusZsgCanOff, Satellite#0] */
  { /*    10 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CantrcvEBusACanError, Satellite#0] */
  { /*    11 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CantrcvEBusB2CanError, Satellite#0] */
  { /*    12 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CantrcvEBusBodyCanError, Satellite#0] */
  { /*    13 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CantrcvEBusFaCanError, Satellite#0] */
  { /*    14 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CantrcvEBusIukError, Satellite#0] */
  { /*    15 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CantrcvEBusKCanError, Satellite#0] */
  { /*    16 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CantrcvEBusLeCanError, Satellite#0] */
  { /*    17 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CantrcvEBusLpCanError, Satellite#0] */
  { /*    18 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CantrcvEBusZsgCanError, Satellite#0] */
  { /*    19 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CbsReplacementValue, Satellite#0] */
  { /*    20 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CodingEventInvalidData, Satellite#0] */
  { /*    21 */ /*no AgingCycle*/ 2U             ,                           1U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CodingEventNotCoded, Satellite#0] */
  { /*    22 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CodingEventSignatureError, Satellite#0] */
  { /*    23 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CodingEventTransactionFailed, Satellite#0] */
  { /*    24 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CodingEventUnqualifiedData, Satellite#0] */
  { /*    25 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [CodingEventWrongVehicle, Satellite#0] */
  { /*    26 */ DemConf_DemOperationCycle_NON_OBD,                           0U,          1U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   2U,                                               2U,                                                 0U,      0x05U, DemConf_DemOperationCycle_ODB     },  /* [DmTestAppl, Satellite#0] */
  { /*    27 */ DemConf_DemOperationCycle_NON_OBD,                           0U,          2U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   2U,                                               2U,                                                 0U,      0x05U, DemConf_DemOperationCycle_ODB     },  /* [DmTestCom, Satellite#0] */
  { /*    28 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [Dtc000030, Satellite#0] */
  { /*    29 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [Dtc000031, Satellite#0] */
  { /*    30 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [Dtc000032, Satellite#0] */
  { /*    31 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [Dtc000033, Satellite#0] */
  { /*    32 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [Dtc000034, Satellite#0] */
  { /*    33 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DtcCd0601, Satellite#0] */
  { /*    34 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DtcCd0605, Satellite#0] */
  { /*    35 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DtcCd0606, Satellite#0] */
  { /*    36 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DtcCd0607, Satellite#0] */
  { /*    37 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [EthSignalQualityLow, Satellite#0] */
  { /*    38 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrifEAcsChA, Satellite#0] */
  { /*    39 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrifENitChA, Satellite#0] */
  { /*    40 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrsmEClusterStartup, Satellite#0] */
  { /*    41 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrsmEClusterSyncLoss, Satellite#0] */
  { /*    42 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrtrcvEFrBuserrorTrcv0, Satellite#0] */
  { /*    43 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrtrcvEFrErrnTrcv0, Satellite#0] */
  { /*    44 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrtrcvEFrErrnTrcv1, Satellite#0] */
  { /*    45 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrtrcvEFrErrnTrcv2, Satellite#0] */
  { /*    46 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrtrcvEFrErrnTrcv3, Satellite#0] */
  { /*    47 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrtrcvEFrErrnTrcv4, Satellite#0] */
  { /*    48 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrtrcvEFrErrnTrcv5, Satellite#0] */
  { /*    49 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrtrcvEFrErrnTrcv6, Satellite#0] */
    /* Index    AgingCycleId                       CallbackClearEventAllowedIdx  DtcTableIdx  EventKind                                         ExtendedDataTableIdx  FreezeFrameNumTableEndIdx                         FreezeFrameNumTableStartIdx                         MaskedBits  OperationCycleId                         Referable Keys */
  { /*    50 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [FrtrcvEFrErrnTrcv7, Satellite#0] */
  { /*    51 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [LIN_E_TIMEOUT, Satellite#0] */
  { /*    52 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [NVM_E_HARDWARE, Satellite#0] */
  { /*    53 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [Overvoltage, Satellite#0] */
  { /*    54 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [PiaEIoError, Satellite#0] */
  { /*    55 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [SwtExternalCheckFailure, Satellite#0] */
  { /*    56 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [SwtInternalCheckFailure, Satellite#0] */
  { /*    57 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [UDPNM_E_TCPIP_TRANSMIT_ERROR, Satellite#0] */
  { /*    58 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [Undervoltage, Satellite#0] */
  { /*    59 */ DemConf_DemOperationCycle_NON_OBD,                           2U,          3U, DEM_CFG_DEM_EVENT_KIND_SWC_EVENTKINDOFEVENTTABLE,                   2U,                                               2U,                                                 0U,      0x05U, DemConf_DemOperationCycle_NON_OBD },  /* [VsmEventOpmode, Satellite#0] */
  { /*    60 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_FLS_E_COMPARE_FAILED, Satellite#0] */
  { /*    61 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_MCU_E_CLOCK_FAILED, Satellite#0] */
  { /*    62 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_MCU_E_HW_FAILED, Satellite#0] */
  { /*    63 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_MCU_E_STARTUP_FAILED, Satellite#0] */
  { /*    64 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_FLS_E_ERASE_FAILED, Satellite#0] */
  { /*    65 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_FLS_E_ECC_FAILED, Satellite#0] */
  { /*    66 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_FLS_E_VRFY_FAILED, Satellite#0] */
  { /*    67 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_FLS_E_INT_FAILED, Satellite#0] */
  { /*    68 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_FLS_E_READ_FAILED, Satellite#0] */
  { /*    69 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_FLS_E_WRITE_FAILED, Satellite#0] */
  { /*    70 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_FLS_E_READ_DED_FAILED, Satellite#0] */
  { /*    71 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     },  /* [DemEventParameter_FlsConfigSet_FLS_E_UNEXPECTED_FLASH_ID, Satellite#0] */
  { /*    72 */ /*no AgingCycle*/ 2U             ,                           0U,          0U, DEM_CFG_DEM_EVENT_KIND_BSW_EVENTKINDOFEVENTTABLE,                   0U, DEM_CFG_NO_FREEZEFRAMENUMTABLEENDIDXOFEVENTTABLE, DEM_CFG_NO_FREEZEFRAMENUMTABLESTARTIDXOFEVENTTABLE,      0x04U, DemConf_DemOperationCycle_ODB     }   /* [DemEventParameter_FlsConfigSet_FLS_E_HW_FAILED, Satellite#0] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ExtendedDataTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ExtendedDataTable
  \details
  Element                                   Description
  DataCollectionTableEdr2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
  DataCollectionTableEdr2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableEdr2CollInd
  MaxRecordSize                         
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_ExtendedDataTableType, DEM_CONST) Dem_Cfg_ExtendedDataTable[3] = {
    /* Index    DataCollectionTableEdr2CollIndEndIdx                                DataCollectionTableEdr2CollIndStartIdx                                MaxRecordSize        Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDENDIDXOFEXTENDEDDATATABLE, DEM_CFG_NO_DATACOLLECTIONTABLEEDR2COLLINDSTARTIDXOFEXTENDEDDATATABLE,            0U },  /* [#NoExtendedDataRecordConfigured, #EVENT_INVALID, CansmEBusACanOff, CansmEBusB2CanOff, CansmEBusBodyCanOff, CansmEBusFaCanOff, CansmEBusIukCanOff, CansmEBusKCanOff, CansmEBusLeCanOff, CansmEBusLpCanOff, CansmEBusZsgCanOff, CantrcvEBusACanError, CantrcvEBusB2CanError, CantrcvEBusBodyCanError, CantrcvEBusFaCanError, CantrcvEBusIukError, CantrcvEBusKCanError, CantrcvEBusLeCanError, CantrcvEBusLpCanError, CantrcvEBusZsgCanError, CbsReplacementValue, CodingEventInvalidData, CodingEventNotCoded, CodingEventSignatureError, CodingEventTransactionFailed, CodingEventUnqualifiedData, CodingEventWrongVehicle, Dtc000030, Dtc000031, Dtc000032, Dtc000033, Dtc000034, DtcCd0601, DtcCd0605, DtcCd0606, DtcCd0607, EthSignalQualityLow, FrifEAcsChA, FrifENitChA, FrsmEClusterStartup, FrsmEClusterSyncLoss, FrtrcvEFrBuserrorTrcv0, FrtrcvEFrErrnTrcv0, FrtrcvEFrErrnTrcv1, FrtrcvEFrErrnTrcv2, FrtrcvEFrErrnTrcv3, FrtrcvEFrErrnTrcv4, FrtrcvEFrErrnTrcv5, FrtrcvEFrErrnTrcv6, FrtrcvEFrErrnTrcv7, LIN_E_TIMEOUT, NVM_E_HARDWARE, Overvoltage, PiaEIoError, SwtExternalCheckFailure, SwtInternalCheckFailure, UDPNM_E_TCPIP_TRANSMIT_ERROR, Undervoltage, DemEventParameter_FlsConfigSet_FLS_E_COMPARE_FAILED, DemEventParameter_FlsConfigSet_MCU_E_CLOCK_FAILED, DemEventParameter_FlsConfigSet_MCU_E_HW_FAILED, DemEventParameter_FlsConfigSet_MCU_E_STARTUP_FAILED, DemEventParameter_FlsConfigSet_FLS_E_ERASE_FAILED, DemEventParameter_FlsConfigSet_FLS_E_ECC_FAILED, DemEventParameter_FlsConfigSet_FLS_E_VRFY_FAILED, DemEventParameter_FlsConfigSet_FLS_E_INT_FAILED, DemEventParameter_FlsConfigSet_FLS_E_READ_FAILED, DemEventParameter_FlsConfigSet_FLS_E_WRITE_FAILED, DemEventParameter_FlsConfigSet_FLS_E_READ_DED_FAILED, DemEventParameter_FlsConfigSet_FLS_E_UNEXPECTED_FLASH_ID, DemEventParameter_FlsConfigSet_FLS_E_HW_FAILED] */
  { /*     1 */                                                                 3U,                                                                   0U,            1U },  /* [#DemExtendedDataClass_Healing] */
  { /*     2 */                                                                 5U,                                                                   3U,            1U }   /* [#DemExtendedDataClass_NoHealing, DmTestAppl, DmTestCom, VsmEventOpmode] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameNumTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameNumTable
  \details
  Element     Description
  FFUpdate
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_FreezeFrameNumTableType, DEM_CONST) Dem_Cfg_FreezeFrameNumTable[2] = {
    /* Index    FFUpdate        Referable Keys */
  { /*     0 */    FALSE },  /* [calcFFRecNumClass_02, DmTestAppl, DmTestCom, VsmEventOpmode] */
  { /*     1 */     TRUE }   /* [calcFFRecNumClass_02, DmTestAppl, DmTestCom, VsmEventOpmode] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameTable
  \details
  Element                                   Description
  DataCollectionTableFfm2CollIndEndIdx      the end index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  DataCollectionTableFfm2CollIndStartIdx    the start index of the 0:n relation pointing to Dem_Cfg_DataCollectionTableFfm2CollInd
  RecordSize                                Summarized size of did data that is stored in Dem_Cfg_PrimaryEntryType.SnapshotData[][] (i.e. typically without size of dids containing internal data elements).
  RecordSizeUds                             Summarized size of did data, did numbers and snapshot header (i.e. dynamical payload size of the uds response message).
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_FreezeFrameTableType, DEM_CONST) Dem_Cfg_FreezeFrameTable[10] = {
    /* Index    DataCollectionTableFfm2CollIndEndIdx                               DataCollectionTableFfm2CollIndStartIdx                               RecordSize  RecordSizeUds        Referable Keys */
  { /*     0 */ DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDENDIDXOFFREEZEFRAMETABLE, DEM_CFG_NO_DATACOLLECTIONTABLEFFM2COLLINDSTARTIDXOFFREEZEFRAMETABLE,         0U,            0U },  /* [#NoFreezeFrameConfigured, #EVENT_INVALID, CansmEBusACanOff, CansmEBusB2CanOff, CansmEBusBodyCanOff, CansmEBusFaCanOff, CansmEBusIukCanOff, CansmEBusKCanOff, CansmEBusLeCanOff, CansmEBusLpCanOff, CansmEBusZsgCanOff, CantrcvEBusACanError, CantrcvEBusB2CanError, CantrcvEBusBodyCanError, CantrcvEBusFaCanError, CantrcvEBusIukError, CantrcvEBusKCanError, CantrcvEBusLeCanError, CantrcvEBusLpCanError, CantrcvEBusZsgCanError, CbsReplacementValue, CodingEventInvalidData, CodingEventNotCoded, CodingEventSignatureError, CodingEventTransactionFailed, CodingEventUnqualifiedData, CodingEventWrongVehicle, Dtc000030, Dtc000031, Dtc000032, Dtc000033, Dtc000034, DtcCd0601, DtcCd0605, DtcCd0606, DtcCd0607, EthSignalQualityLow, FrifEAcsChA, FrifENitChA, FrsmEClusterStartup, FrsmEClusterSyncLoss, FrtrcvEFrBuserrorTrcv0, FrtrcvEFrErrnTrcv0, FrtrcvEFrErrnTrcv1, FrtrcvEFrErrnTrcv2, FrtrcvEFrErrnTrcv3, FrtrcvEFrErrnTrcv4, FrtrcvEFrErrnTrcv5, FrtrcvEFrErrnTrcv6, FrtrcvEFrErrnTrcv7, LIN_E_TIMEOUT, NVM_E_HARDWARE, Overvoltage, PiaEIoError, SwtExternalCheckFailure, SwtInternalCheckFailure, UDPNM_E_TCPIP_TRANSMIT_ERROR, Undervoltage, DemEventParameter_FlsConfigSet_FLS_E_COMPARE_FAILED, DemEventParameter_FlsConfigSet_MCU_E_CLOCK_FAILED, DemEventParameter_FlsConfigSet_MCU_E_HW_FAILED, DemEventParameter_FlsConfigSet_MCU_E_STARTUP_FAILED, DemEventParameter_FlsConfigSet_FLS_E_ERASE_FAILED, DemEventParameter_FlsConfigSet_FLS_E_ECC_FAILED, DemEventParameter_FlsConfigSet_FLS_E_VRFY_FAILED, DemEventParameter_FlsConfigSet_FLS_E_INT_FAILED, DemEventParameter_FlsConfigSet_FLS_E_READ_FAILED, DemEventParameter_FlsConfigSet_FLS_E_WRITE_FAILED, DemEventParameter_FlsConfigSet_FLS_E_READ_DED_FAILED, DemEventParameter_FlsConfigSet_FLS_E_UNEXPECTED_FLASH_ID, DemEventParameter_FlsConfigSet_FLS_E_HW_FAILED] */
  { /*     1 */                                                                4U,                                                                  0U,        11U,           21U },  /* [#DemFreezeFrameClass_711871ef, DmTestAppl, DmTestCom, VsmEventOpmode] */
  { /*     2 */                                                               10U,                                                                  4U,        17U,           32U },  /* [#DemFreezeFrameClass_7febc690] */
  { /*     3 */                                                               15U,                                                                 10U,        12U,           24U },  /* [#DemFreezeFrameClass_8ef63883] */
  { /*     4 */                                                               21U,                                                                 15U,        13U,           27U },  /* [#DemFreezeFrameClass_95fb4a10] */
  { /*     5 */                                                               28U,                                                                 21U,        23U,           39U },  /* [#DemFreezeFrameClass_9ec24f64] */
  { /*     6 */                                                               33U,                                                                 28U,        12U,           24U },  /* [#DemFreezeFrameClass_ebef819c] */
  { /*     7 */                                                               38U,                                                                 33U,        12U,           24U },  /* [#DemFreezeFrameClass_ebef819f] */
  { /*     8 */                                                               43U,                                                                 38U,        12U,           24U },  /* [#DemFreezeFrameClass_ebef81bb] */
  { /*     9 */                                                               48U,                                                                 43U,        29U,           41U }   /* [#DemFreezeFrameClass_ebef81bf] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryBlockId
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryBlockId
  \brief  The array contains these items: Admin, Status, 8 * Primary, 3 * Secondary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_MemoryBlockIdType, DEM_CONST) Dem_Cfg_MemoryBlockId[13] = {
  /* Index     MemoryBlockId                                                            Referable Keys */
  /*     0 */ NvMConf_NvMBlockDescriptor_DemAdminDataBlock /*NvMBlockId=2*/       ,  /* [Dem_AdminData] */
  /*     1 */ NvMConf_NvMBlockDescriptor_DemStatusDataBlock /*NvMBlockId=19*/     ,  /* [Dem_StatusData] */
  /*     2 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock0 /*NvMBlockId=6*/    ,  /* [Dem_PrimaryEntry0] */
  /*     3 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock1 /*NvMBlockId=7*/    ,  /* [Dem_PrimaryEntry1] */
  /*     4 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock2 /*NvMBlockId=8*/    ,  /* [Dem_PrimaryEntry2] */
  /*     5 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock3 /*NvMBlockId=9*/    ,  /* [Dem_PrimaryEntry3] */
  /*     6 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock4 /*NvMBlockId=12*/   ,  /* [Dem_PrimaryEntry4] */
  /*     7 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock5 /*NvMBlockId=14*/   ,  /* [Dem_PrimaryEntry5] */
  /*     8 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock6 /*NvMBlockId=15*/   ,  /* [Dem_PrimaryEntry6] */
  /*     9 */ NvMConf_NvMBlockDescriptor_DemPrimaryDataBlock7 /*NvMBlockId=17*/   ,  /* [Dem_PrimaryEntry7] */
  /*    10 */ NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock0 /*NvMBlockId=20*/ ,  /* [Dem_SecondaryEntry0] */
  /*    11 */ NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock1 /*NvMBlockId=22*/ ,  /* [Dem_SecondaryEntry1] */
  /*    12 */ NvMConf_NvMBlockDescriptor_DemSecondaryDataBlock2 /*NvMBlockId=23*/    /* [Dem_SecondaryEntry2] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataPtr
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataPtr
  \brief  The array contains these items: Admin, Status, 8 * Primary, 3 * Secondary
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_NvDataPtrType, DEM_CONST) Dem_Cfg_MemoryDataPtr[13] = {
  /* Index     MemoryDataPtr                                                                                    Referable Keys */
  /*     0 */ (Dem_NvDataPtrType) &Dem_Cfg_GetAdminData()          /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_AdminData] */
  /*     1 */ (Dem_NvDataPtrType) &Dem_Cfg_GetStatusData()         /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_StatusData] */
  /*     2 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()     /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry0] */
  /*     3 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()     /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry1] */
  /*     4 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_2()     /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry2] */
  /*     5 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_3()     /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry3] */
  /*     6 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_4()     /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry4] */
  /*     7 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_5()     /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry5] */
  /*     8 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_6()     /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry6] */
  /*     9 */ (Dem_NvDataPtrType) &Dem_Cfg_GetPrimaryEntry_7()     /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry7] */
  /*    10 */ (Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_0()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry0] */
  /*    11 */ (Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_1()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry1] */
  /*    12 */ (Dem_NvDataPtrType) &Dem_Cfg_GetSecondaryEntry_2()   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_SecondaryEntry2] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryDataSize
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryDataSize
  \brief  The array contains these items: Admin, Status, 8 * Primary, 3 * Secondary
*/ 
#define DEM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_MemoryDataSizeType, DEM_CONST) Dem_Cfg_MemoryDataSize[13] = {
  /* Index     MemoryDataSize                                                          Referable Keys */
  /*     0 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetAdminData())        ,  /* [Dem_AdminData] */
  /*     1 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetStatusData())       ,  /* [Dem_StatusData] */
  /*     2 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_0())   ,  /* [Dem_PrimaryEntry0] */
  /*     3 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_1())   ,  /* [Dem_PrimaryEntry1] */
  /*     4 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_2())   ,  /* [Dem_PrimaryEntry2] */
  /*     5 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_3())   ,  /* [Dem_PrimaryEntry3] */
  /*     6 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_4())   ,  /* [Dem_PrimaryEntry4] */
  /*     7 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_5())   ,  /* [Dem_PrimaryEntry5] */
  /*     8 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_6())   ,  /* [Dem_PrimaryEntry6] */
  /*     9 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetPrimaryEntry_7())   ,  /* [Dem_PrimaryEntry7] */
  /*    10 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_0()) ,  /* [Dem_SecondaryEntry0] */
  /*    11 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_1()) ,  /* [Dem_SecondaryEntry1] */
  /*    12 */ (Dem_Cfg_MemoryDataSizeType) sizeof(Dem_Cfg_GetSecondaryEntry_2())    /* [Dem_SecondaryEntry2] */
};
#define DEM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntry
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryEntry
  \brief  The array contains these items: 8 * Primary, 3 * Secondary, 2 * ReadoutBuffer; size = DEM_CFG_GLOBAL_PRIMARY_SIZE + DEM_CFG_GLOBAL_SECONDARY_SIZE + DEM_CFG_NUMBER_OF_READOUTBUFFERS
*/ 
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_SharedDataPtrType, DEM_CONST) Dem_Cfg_MemoryEntry[13] = {
  /* Index     MemoryEntry                                                                                             Referable Keys */
  /*     0 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_0()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry0] */
  /*     1 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_1()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry1] */
  /*     2 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_2()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry2] */
  /*     3 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_3()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry3] */
  /*     4 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_4()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry4] */
  /*     5 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_5()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry5] */
  /*     6 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_6()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry6] */
  /*     7 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetPrimaryEntry_7()        /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_PrimaryEntry7] */
  /*     8 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetSecondaryEntry_0()      /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry0] */
  /*     9 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetSecondaryEntry_1()      /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry1] */
  /*    10 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetSecondaryEntry_2()      /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_SecondaryEntry2] */
  /*    11 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetReadoutBuffer(0).Data   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */,  /* [Dem_Cfg_ReadoutBuffer[0].Data] */
  /*    12 */ (Dem_SharedDataPtrType) &Dem_Cfg_GetReadoutBuffer(1).Data   /* PRQA S 0310 */ /* MD_DEM_11.4_nvm */   /* [Dem_Cfg_ReadoutBuffer[1].Data] */
};
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_PrimaryEntryType, DEM_CONST) Dem_Cfg_MemoryEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_TimeSeriesEntryInit
**********************************************************************************************************************/
#define DEM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Dem_Cfg_TimeSeriesEntryType, DEM_CONST) Dem_Cfg_TimeSeriesEntryInit = { 0 };
#define DEM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_AdminData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_AdminDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_AdminData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ClearDTCTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ClearDTCTable
  \brief  size = DEM_CFG_NUMBER_OF_CLEARDTCS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_ClearDTC_DataType, DEM_VAR_NOINIT) Dem_Cfg_ClearDTCTable[2];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_CommitBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_CommitBufferType, DEM_VAR_NOINIT) Dem_Cfg_CommitBuffer;  /* PRQA S 0759 */ /* MD_MSR_18.4 */
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_DTCSelectorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_DTCSelectorTable
  \brief  size = DEM_CFG_NUMBER_OF_DTCSELECTORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_DTCSelector_DataType, DEM_VAR_NOINIT) Dem_Cfg_DTCSelectorTable[2];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupCounter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupCounter
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionGroupCounterType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupCounter[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */
  /*     1 */  /* [#DEM_CONDITION_GROUP_ComErrorLock, __Internal_ControlDtcSetting, DemEnableCondition_StdDiag, DemEnableCondition_Stm] */
  /*     2 */  /* [#DEM_CONDITION_GROUP_ComErrorLockFlAsTr, __Internal_ControlDtcSetting, DemEnableCondition_Omc, DemEnableCondition_StdDiag, DemEnableCondition_Stm] */
  /*     3 */  /* [#DEM_CONDITION_GROUP_DefaultErrorLock, __Internal_ControlDtcSetting, DemEnableCondition_StdDiag] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionGroupState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionGroupState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition group number. Table value: count of conditions in state 'enable'.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EnableConditionGroupStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionGroupState[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [##NoEnableConditionGroupConfigured, __Internal_ControlDtcSetting] */
  /*     1 */  /* [#DEM_CONDITION_GROUP_ComErrorLock, __Internal_ControlDtcSetting, DemEnableCondition_StdDiag, DemEnableCondition_Stm] */
  /*     2 */  /* [#DEM_CONDITION_GROUP_ComErrorLockFlAsTr, __Internal_ControlDtcSetting, DemEnableCondition_Omc, DemEnableCondition_StdDiag, DemEnableCondition_Stm] */
  /*     3 */  /* [#DEM_CONDITION_GROUP_DefaultErrorLock, __Internal_ControlDtcSetting, DemEnableCondition_StdDiag] */

#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EnableConditionState
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EnableConditionState
  \brief  (DEM_CFG_SUPPORT_ENABLE_CONDITIONS == STD_ON) or there are internal EnableConditions. Table index: Condition ID. Table value: current condition state '0' disable, '1' enable.
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_EnableConditionStateType, DEM_VAR_NOINIT) Dem_Cfg_EnableConditionState[4];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventDebounceValue
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventDebounceValue
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_EventDebounceValueType, DEM_VAR_NOINIT) Dem_Cfg_EventDebounceValue[73];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#0] */
  /*     1 */  /* [CansmEBusACanOff, Satellite#0] */
  /*     2 */  /* [CansmEBusB2CanOff, Satellite#0] */
  /*     3 */  /* [CansmEBusBodyCanOff, Satellite#0] */
  /*     4 */  /* [CansmEBusFaCanOff, Satellite#0] */
  /*     5 */  /* [CansmEBusIukCanOff, Satellite#0] */
  /*     6 */  /* [CansmEBusKCanOff, Satellite#0] */
  /*     7 */  /* [CansmEBusLeCanOff, Satellite#0] */
  /*     8 */  /* [CansmEBusLpCanOff, Satellite#0] */
  /*     9 */  /* [CansmEBusZsgCanOff, Satellite#0] */
  /*    10 */  /* [CantrcvEBusACanError, Satellite#0] */
  /*    11 */  /* [CantrcvEBusB2CanError, Satellite#0] */
  /*    12 */  /* [CantrcvEBusBodyCanError, Satellite#0] */
  /*    13 */  /* [CantrcvEBusFaCanError, Satellite#0] */
  /*    14 */  /* [CantrcvEBusIukError, Satellite#0] */
  /*    15 */  /* [CantrcvEBusKCanError, Satellite#0] */
  /*    16 */  /* [CantrcvEBusLeCanError, Satellite#0] */
  /*    17 */  /* [CantrcvEBusLpCanError, Satellite#0] */
  /*    18 */  /* [CantrcvEBusZsgCanError, Satellite#0] */
  /*    19 */  /* [CbsReplacementValue, Satellite#0] */
  /*    20 */  /* [CodingEventInvalidData, Satellite#0] */
  /*    21 */  /* [CodingEventNotCoded, Satellite#0] */
  /*    22 */  /* [CodingEventSignatureError, Satellite#0] */
  /*    23 */  /* [CodingEventTransactionFailed, Satellite#0] */
  /*    24 */  /* [CodingEventUnqualifiedData, Satellite#0] */
  /*    25 */  /* [CodingEventWrongVehicle, Satellite#0] */
  /*    26 */  /* [DmTestAppl, Satellite#0] */
  /*    27 */  /* [DmTestCom, Satellite#0] */
  /*    28 */  /* [Dtc000030, Satellite#0] */
  /*    29 */  /* [Dtc000031, Satellite#0] */
  /*    30 */  /* [Dtc000032, Satellite#0] */
  /*    31 */  /* [Dtc000033, Satellite#0] */
  /*    32 */  /* [Dtc000034, Satellite#0] */
  /*    33 */  /* [DtcCd0601, Satellite#0] */
  /*    34 */  /* [DtcCd0605, Satellite#0] */
  /*    35 */  /* [DtcCd0606, Satellite#0] */
  /*    36 */  /* [DtcCd0607, Satellite#0] */
  /*    37 */  /* [EthSignalQualityLow, Satellite#0] */
  /*    38 */  /* [FrifEAcsChA, Satellite#0] */
  /*    39 */  /* [FrifENitChA, Satellite#0] */
  /*    40 */  /* [FrsmEClusterStartup, Satellite#0] */
  /*    41 */  /* [FrsmEClusterSyncLoss, Satellite#0] */
  /*    42 */  /* [FrtrcvEFrBuserrorTrcv0, Satellite#0] */
  /*    43 */  /* [FrtrcvEFrErrnTrcv0, Satellite#0] */
  /*    44 */  /* [FrtrcvEFrErrnTrcv1, Satellite#0] */
  /*    45 */  /* [FrtrcvEFrErrnTrcv2, Satellite#0] */
  /*    46 */  /* [FrtrcvEFrErrnTrcv3, Satellite#0] */
  /*    47 */  /* [FrtrcvEFrErrnTrcv4, Satellite#0] */
  /*    48 */  /* [FrtrcvEFrErrnTrcv5, Satellite#0] */
  /*    49 */  /* [FrtrcvEFrErrnTrcv6, Satellite#0] */
  /* Index        Referable Keys  */
  /*    50 */  /* [FrtrcvEFrErrnTrcv7, Satellite#0] */
  /*    51 */  /* [LIN_E_TIMEOUT, Satellite#0] */
  /*    52 */  /* [NVM_E_HARDWARE, Satellite#0] */
  /*    53 */  /* [Overvoltage, Satellite#0] */
  /*    54 */  /* [PiaEIoError, Satellite#0] */
  /*    55 */  /* [SwtExternalCheckFailure, Satellite#0] */
  /*    56 */  /* [SwtInternalCheckFailure, Satellite#0] */
  /*    57 */  /* [UDPNM_E_TCPIP_TRANSMIT_ERROR, Satellite#0] */
  /*    58 */  /* [Undervoltage, Satellite#0] */
  /*    59 */  /* [VsmEventOpmode, Satellite#0] */
  /*    60 */  /* [DemEventParameter_FlsConfigSet_FLS_E_COMPARE_FAILED, Satellite#0] */
  /*    61 */  /* [DemEventParameter_FlsConfigSet_MCU_E_CLOCK_FAILED, Satellite#0] */
  /*    62 */  /* [DemEventParameter_FlsConfigSet_MCU_E_HW_FAILED, Satellite#0] */
  /*    63 */  /* [DemEventParameter_FlsConfigSet_MCU_E_STARTUP_FAILED, Satellite#0] */
  /*    64 */  /* [DemEventParameter_FlsConfigSet_FLS_E_ERASE_FAILED, Satellite#0] */
  /*    65 */  /* [DemEventParameter_FlsConfigSet_FLS_E_ECC_FAILED, Satellite#0] */
  /*    66 */  /* [DemEventParameter_FlsConfigSet_FLS_E_VRFY_FAILED, Satellite#0] */
  /*    67 */  /* [DemEventParameter_FlsConfigSet_FLS_E_INT_FAILED, Satellite#0] */
  /*    68 */  /* [DemEventParameter_FlsConfigSet_FLS_E_READ_FAILED, Satellite#0] */
  /*    69 */  /* [DemEventParameter_FlsConfigSet_FLS_E_WRITE_FAILED, Satellite#0] */
  /*    70 */  /* [DemEventParameter_FlsConfigSet_FLS_E_READ_DED_FAILED, Satellite#0] */
  /*    71 */  /* [DemEventParameter_FlsConfigSet_FLS_E_UNEXPECTED_FLASH_ID, Satellite#0] */
  /*    72 */  /* [DemEventParameter_FlsConfigSet_FLS_E_HW_FAILED, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventInternalStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventInternalStatus
  \brief  size = DEM_G_NUMBER_OF_EVENTS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Event_InternalStatusType, DEM_VAR_NOINIT) Dem_Cfg_EventInternalStatus[73];
  /* Index        Referable Keys  */
  /*     0 */  /* [#EVENT_INVALID, Satellite#0] */
  /*     1 */  /* [CansmEBusACanOff, Satellite#0] */
  /*     2 */  /* [CansmEBusB2CanOff, Satellite#0] */
  /*     3 */  /* [CansmEBusBodyCanOff, Satellite#0] */
  /*     4 */  /* [CansmEBusFaCanOff, Satellite#0] */
  /*     5 */  /* [CansmEBusIukCanOff, Satellite#0] */
  /*     6 */  /* [CansmEBusKCanOff, Satellite#0] */
  /*     7 */  /* [CansmEBusLeCanOff, Satellite#0] */
  /*     8 */  /* [CansmEBusLpCanOff, Satellite#0] */
  /*     9 */  /* [CansmEBusZsgCanOff, Satellite#0] */
  /*    10 */  /* [CantrcvEBusACanError, Satellite#0] */
  /*    11 */  /* [CantrcvEBusB2CanError, Satellite#0] */
  /*    12 */  /* [CantrcvEBusBodyCanError, Satellite#0] */
  /*    13 */  /* [CantrcvEBusFaCanError, Satellite#0] */
  /*    14 */  /* [CantrcvEBusIukError, Satellite#0] */
  /*    15 */  /* [CantrcvEBusKCanError, Satellite#0] */
  /*    16 */  /* [CantrcvEBusLeCanError, Satellite#0] */
  /*    17 */  /* [CantrcvEBusLpCanError, Satellite#0] */
  /*    18 */  /* [CantrcvEBusZsgCanError, Satellite#0] */
  /*    19 */  /* [CbsReplacementValue, Satellite#0] */
  /*    20 */  /* [CodingEventInvalidData, Satellite#0] */
  /*    21 */  /* [CodingEventNotCoded, Satellite#0] */
  /*    22 */  /* [CodingEventSignatureError, Satellite#0] */
  /*    23 */  /* [CodingEventTransactionFailed, Satellite#0] */
  /*    24 */  /* [CodingEventUnqualifiedData, Satellite#0] */
  /*    25 */  /* [CodingEventWrongVehicle, Satellite#0] */
  /*    26 */  /* [DmTestAppl, Satellite#0] */
  /*    27 */  /* [DmTestCom, Satellite#0] */
  /*    28 */  /* [Dtc000030, Satellite#0] */
  /*    29 */  /* [Dtc000031, Satellite#0] */
  /*    30 */  /* [Dtc000032, Satellite#0] */
  /*    31 */  /* [Dtc000033, Satellite#0] */
  /*    32 */  /* [Dtc000034, Satellite#0] */
  /*    33 */  /* [DtcCd0601, Satellite#0] */
  /*    34 */  /* [DtcCd0605, Satellite#0] */
  /*    35 */  /* [DtcCd0606, Satellite#0] */
  /*    36 */  /* [DtcCd0607, Satellite#0] */
  /*    37 */  /* [EthSignalQualityLow, Satellite#0] */
  /*    38 */  /* [FrifEAcsChA, Satellite#0] */
  /*    39 */  /* [FrifENitChA, Satellite#0] */
  /*    40 */  /* [FrsmEClusterStartup, Satellite#0] */
  /*    41 */  /* [FrsmEClusterSyncLoss, Satellite#0] */
  /*    42 */  /* [FrtrcvEFrBuserrorTrcv0, Satellite#0] */
  /*    43 */  /* [FrtrcvEFrErrnTrcv0, Satellite#0] */
  /*    44 */  /* [FrtrcvEFrErrnTrcv1, Satellite#0] */
  /*    45 */  /* [FrtrcvEFrErrnTrcv2, Satellite#0] */
  /*    46 */  /* [FrtrcvEFrErrnTrcv3, Satellite#0] */
  /*    47 */  /* [FrtrcvEFrErrnTrcv4, Satellite#0] */
  /*    48 */  /* [FrtrcvEFrErrnTrcv5, Satellite#0] */
  /*    49 */  /* [FrtrcvEFrErrnTrcv6, Satellite#0] */
  /* Index        Referable Keys  */
  /*    50 */  /* [FrtrcvEFrErrnTrcv7, Satellite#0] */
  /*    51 */  /* [LIN_E_TIMEOUT, Satellite#0] */
  /*    52 */  /* [NVM_E_HARDWARE, Satellite#0] */
  /*    53 */  /* [Overvoltage, Satellite#0] */
  /*    54 */  /* [PiaEIoError, Satellite#0] */
  /*    55 */  /* [SwtExternalCheckFailure, Satellite#0] */
  /*    56 */  /* [SwtInternalCheckFailure, Satellite#0] */
  /*    57 */  /* [UDPNM_E_TCPIP_TRANSMIT_ERROR, Satellite#0] */
  /*    58 */  /* [Undervoltage, Satellite#0] */
  /*    59 */  /* [VsmEventOpmode, Satellite#0] */
  /*    60 */  /* [DemEventParameter_FlsConfigSet_FLS_E_COMPARE_FAILED, Satellite#0] */
  /*    61 */  /* [DemEventParameter_FlsConfigSet_MCU_E_CLOCK_FAILED, Satellite#0] */
  /*    62 */  /* [DemEventParameter_FlsConfigSet_MCU_E_HW_FAILED, Satellite#0] */
  /*    63 */  /* [DemEventParameter_FlsConfigSet_MCU_E_STARTUP_FAILED, Satellite#0] */
  /*    64 */  /* [DemEventParameter_FlsConfigSet_FLS_E_ERASE_FAILED, Satellite#0] */
  /*    65 */  /* [DemEventParameter_FlsConfigSet_FLS_E_ECC_FAILED, Satellite#0] */
  /*    66 */  /* [DemEventParameter_FlsConfigSet_FLS_E_VRFY_FAILED, Satellite#0] */
  /*    67 */  /* [DemEventParameter_FlsConfigSet_FLS_E_INT_FAILED, Satellite#0] */
  /*    68 */  /* [DemEventParameter_FlsConfigSet_FLS_E_READ_FAILED, Satellite#0] */
  /*    69 */  /* [DemEventParameter_FlsConfigSet_FLS_E_WRITE_FAILED, Satellite#0] */
  /*    70 */  /* [DemEventParameter_FlsConfigSet_FLS_E_READ_DED_FAILED, Satellite#0] */
  /*    71 */  /* [DemEventParameter_FlsConfigSet_FLS_E_UNEXPECTED_FLASH_ID, Satellite#0] */
  /*    72 */  /* [DemEventParameter_FlsConfigSet_FLS_E_HW_FAILED, Satellite#0] */

#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_EventQueue
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_EventQueue
  \brief  size = DEM_CFG_BSW_ERROR_BUFFER_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_EventQueueType, DEM_VAR_NOINIT) Dem_Cfg_EventQueue[10];
#define DEM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterInfoTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterInfoTable
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_FilterData_InfoType, DEM_VAR_NOINIT) Dem_Cfg_FilterInfoTable[2];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FilterReportedEvents
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FilterReportedEvents
  \brief  size = ceiling( DEM_G_NUMBER_OF_EVENTS / 8 )
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_FilterReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_FilterReportedEvents[10];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_FreezeFrameIteratorTable
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_FreezeFrameIteratorTable
  \brief  size = DEM_CFG_NUMBER_OF_FREEZEFRAMEITERATORS
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_FreezeFrameIterator_FilterType, DEM_VAR_NOINIT) Dem_Cfg_FreezeFrameIteratorTable[2];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryCommitNumber
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryCommitNumber
  \brief  The array contains these items: Admin, Status, 8 * Primary, 3 * Secondary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
volatile VAR(Dem_Cfg_MemoryCommitNumberType, DEM_VAR_NOINIT) Dem_Cfg_MemoryCommitNumber[13];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_MemoryStatus
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_MemoryStatus
  \brief  The array contains these items: Admin, Status, 8 * Primary, 3 * Secondary
*/ 
#define DEM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryStatusType, DEM_VAR_NOINIT) Dem_Cfg_MemoryStatus[13];
#define DEM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_PrimaryChronology
  \brief  size = DEM_CFG_GLOBAL_PRIMARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_PrimaryChronology[8];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_3
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_3;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_4
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_4;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_5
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_5;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_6
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_6;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_PrimaryEntry_7
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_PrimaryEntry_7;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReadoutBuffer
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_ReadoutBufferEntryType, DEM_VAR_NOINIT) Dem_Cfg_ReadoutBuffer[2];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_ReportedEventsOfFilter
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_ReportedEventsOfFilter
  \brief  size = DEM_CFG_NUMBER_OF_FILTER
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_ReportedEventsType, DEM_VAR_NOINIT) Dem_Cfg_ReportedEventsOfFilter[2];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SatelliteInfo0
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_SatelliteInfo0
  \brief  Buffer for satellite data on OsApplication "0"
*/ 
#define DEM_START_SEC_0_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_SatelliteInfoType0, DEM_VAR_NOINIT) Dem_Cfg_SatelliteInfo0;
#define DEM_STOP_SEC_0_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryChronology
**********************************************************************************************************************/
/** 
  \var    Dem_Cfg_SecondaryChronology
  \brief  size = DEM_CFG_GLOBAL_SECONDARY_SIZE
*/ 
#define DEM_START_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_MemoryIndexType, DEM_VAR_NOINIT) Dem_Cfg_SecondaryChronology[3];
#define DEM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_0
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_0;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_1
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_1;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_SecondaryEntry_2
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_PrimaryEntryType, DEM_NVM_DATA_NOINIT) Dem_Cfg_SecondaryEntry_2;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Dem_Cfg_StatusData
**********************************************************************************************************************/
#define DEM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Dem_Cfg_StatusDataType, DEM_NVM_DATA_NOINIT) Dem_Cfg_StatusData;
#define DEM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/



/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/



/**********************************************************************************************************************
  END OF FILE: Dem_Lcfg.c     [Bmw (Vector), VARIANT-PRE-COMPILE, 11.06.02.92975]
**********************************************************************************************************************/

