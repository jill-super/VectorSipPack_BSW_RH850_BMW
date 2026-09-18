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
 *            Module: Com
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Lcfg.c
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


/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/
/* PRQA S 0342 EOF */ /* MD_Com_0342 */
/* PRQA S 0612 EOF */ /* MD_Com_0612 */
/* PRQA S 0639 EOF */ /* MD_MSR_1.1_639 */
/* PRQA S 0850 EOF */ /* MD_MSR_19.8 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 2006 EOF */ /* MD_MSR_14.7 */
/* PRQA S 3109 EOF */ /* MD_MSR_14.3 */
/* PRQA S 3453 EOF */ /* MD_CSL_3453 */
/* PRQA S 3458 EOF */ /* MD_MSR_19.4 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#define V_IL_ASRCOMCFG5_LCFG_SOURCE

#include "Com.h"

#include "Com_Lcfg.h"


#include "SchM_Com.h"

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
  Com_ConstValueArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueArrayBased
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_ConstValueArrayBasedType, COM_CONST) Com_ConstValueArrayBased[1] = {
  /* Index     ConstValueArrayBased      Referable Keys */
  /*     0 */                 0x00U   /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_0e9104a324b24ea4ab0595d4878193dc_1_cbcf7330InitValue, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_6456fd4fa0c84cd99253c9be9203970d_4_cbcf7330InitValue, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_7b4a826f73e44b58ab36a6e9a35d27ee_1_cbcf7330InitValue, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_a9cb3e40f2dc48a7b222fabc1b1c23d7_1_cbcf7330InitValue, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b1a3e7f0af954749a8dd6e6cd1539759_1_cbcf7330InitValue, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b7c79d0102c449d0aed961fad16e1b7c_1_cbcf7330InitValue, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_eb6a3d2fe3114adda5fddf46f965e4e9_1_cbcf7330InitValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt16
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_ConstValueUInt16Type, COM_CONST) Com_ConstValueUInt16[5] = {
  /* Index     ConstValueUInt16      Referable Keys */
  /*     0 */           0xFFFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_4fc18042a3ed4ed3935aa3b3038bf544_5_828cc38eInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_accb41f44683494d8bbe73645993b2b8_9_828cc38eInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3366770fef6a4623aee662f9f9c4c3c2_2_4c5ede1dInvValue, /ActiveEcuC/Com/ComConfig/sn_809234ffb6e24e4eb85479b73d250d21_49_761b4cd9ec7e47aeb030258f54c21bfc_46_434514f6_OutInvValue] */
  /*     1 */           0x000FU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_b8a0fa3e4cf64a1ab5fc745baa78e585_2_9b458801InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_c18c5dd3b39e4668a8f82c337e371f6f_6_9b458801InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_03f1be64196c4e708bef357e7333ae22_1_4c5ede1dInvValue] */
  /*     2 */           0x0FFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_2ff2d3a958b44ed3bf7b9b844a310c8a_5_9b458801InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_99fd6a6f88664f46a45dae1eac3e4bb9_5_828cc38eInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_f65da775f9284544b6d9e8ec17402794_5_d3120462InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_222481f9d4fd4d26baca286fbee3bf96_3_e213077eInvValue, /ActiveEcuC/Com/ComConfig/sn_0c0ed9ed2c324b648cea19ccfdcf4017_2_e716efb46a29429ebef5b7d5737ff0c0_2_3b1b8e1fInvValue] */
  /*     3 */           0x00FFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_197c766bc806474bab8b0adb6b45f8af_5_9b458801InvValue] */
  /*     4 */           0x0000U   /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_1d92c110be454e9fa86cf52886346abe_6_676acd3bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_1d92c110be454e9fa86cf52886346abe_6_676acd3bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_4b53f7b0fac04e8faf5f3bd3a6602934_8_676acd3bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_4b53f7b0fac04e8faf5f3bd3a6602934_8_676acd3bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_4a3b2166543f48339c6f727a404b1680_7_0136c679InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_4a3b2166543f48339c6f727a404b1680_7_0136c679RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_96e79e323c194994bc5c88fd2c606a13_8_0136c679InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_96e79e323c194994bc5c88fd2c606a13_8_0136c679RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_cc92814877d54dd6ae1dd209c4865a32_8_0136c679InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_cc92814877d54dd6ae1dd209c4865a32_8_0136c679RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_f56acda22c2442ff85a725fcb0ae86c5_7_0136c679InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_f56acda22c2442ff85a725fcb0ae86c5_7_0136c679RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_3ff1e0a352104d0a9c0d95219caf3334_3_aae17425InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_3ff1e0a352104d0a9c0d95219caf3334_3_aae17425RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_f6eac96cf628429bb0c9b3d36d80d166_3_425260efInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_f6eac96cf628429bb0c9b3d36d80d166_3_425260efRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_2ba2c3f5c45f4aa083a493868834ad5f_3_b1b7a1e4InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_2ba2c3f5c45f4aa083a493868834ad5f_3_b1b7a1e4RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_a941ebecb6a441e187826da1c487d2c2_3_2b4fea7bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_a941ebecb6a441e187826da1c487d2c2_3_2b4fea7bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_dcf5f5dfbfc44ee8a71982dfd4598bc5_6_2b4fea7bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_dcf5f5dfbfc44ee8a71982dfd4598bc5_6_2b4fea7bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_c6825405b1e44ee0b8f81e84185f7380_5_8650906fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_c6825405b1e44ee0b8f81e84185f7380_5_8650906fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_3e35ac63fc494d0fb399c763aeb7057b_24_e92786ce091d4130a2deaffa00e99dac_12_a08a0405InitValue, /ActiveEcuC/Com/ComConfig/sn_3e35ac63fc494d0fb399c763aeb7057b_24_e92786ce091d4130a2deaffa00e99dac_12_a08a0405RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_55e086fa3cb3405c9e0849033f661450_11_389ce921618246489b7062f81bb683c4_4_e39ca898InitValue, /ActiveEcuC/Com/ComConfig/sn_55e086fa3cb3405c9e0849033f661450_11_389ce921618246489b7062f81bb683c4_4_e39ca898RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_809234ffb6e24e4eb85479b73d250d21_49_761b4cd9ec7e47aeb030258f54c21bfc_46_434514f6_InInitValue, /ActiveEcuC/Com/ComConfig/sn_809234ffb6e24e4eb85479b73d250d21_49_761b4cd9ec7e47aeb030258f54c21bfc_46_434514f6_InRxDataTimeoutSubstitutionValue] */
};
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt32
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt32
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT32)
*/ 
#define COM_START_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_ConstValueUInt32Type, COM_CONST) Com_ConstValueUInt32[4] = {
  /* Index     ConstValueUInt32      Referable Keys */
  /*     0 */      0x0FFFFFFFUL,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_36_63_fbd12829InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_36_63_fbd12829RxDataTimeoutSubstitutionValue] */
  /*     1 */      0x000FFFFFUL,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_12_31_fbd12829InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_12_31_fbd12829RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_32_51_b1b7a1e4InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_32_51_b1b7a1e4RxDataTimeoutSubstitutionValue] */
  /*     2 */      0xFFFFFFFFUL,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_32_63_48f5d03eInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_32_63_48f5d03eRxDataTimeoutSubstitutionValue] */
  /*     3 */      0x00000000UL   /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_5b1908a90ce1499db5d60fe77e5bdbfc_10_aa0b865fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_5b1908a90ce1499db5d60fe77e5bdbfc_10_aa0b865fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_2ff2dc8921534b0db2b87c288a2967c1_2_fb35a62bInitValue, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_2ff2dc8921534b0db2b87c288a2967c1_2_fb35a62bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_c199b38f0c704ce58dde1ab6957e021b_2_fb35a62bInitValue, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_c199b38f0c704ce58dde1ab6957e021b_2_fb35a62bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_209e4b614ee044c4bbf1020e8ad2a6e0_10_d2a8dd49e0f74a499b91350a40cf3a4b_5_605eb7caInitValue, /ActiveEcuC/Com/ComConfig/sn_209e4b614ee044c4bbf1020e8ad2a6e0_10_d2a8dd49e0f74a499b91350a40cf3a4b_5_605eb7caRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_acb3c9a426bf4887ba724efd428ad5a4_3_ad2096213c0c47a78c10b4a8c5667464_7_7e6a2fc7InitValue, /ActiveEcuC/Com/ComConfig/sn_acb3c9a426bf4887ba724efd428ad5a4_3_ad2096213c0c47a78c10b4a8c5667464_7_7e6a2fc7RxDataTimeoutSubstitutionValue] */
};
#define COM_STOP_SEC_CONST_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt64
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt64
  \brief  Optimized array of commonly used values like initial or invalid values. (UINT64)
*/ 
#define COM_START_SEC_CONST_64BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_ConstValueUInt64Type, COM_CONST) Com_ConstValueUInt64[2] = {
  /* Index     ConstValueUInt64           Referable Keys */
  /*     0 */  0x0000000000000000ULL,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_FAHRGESTELLNUMMER_grpMap_facbc46e/sn_ff5ad01b69a64f2fa3482d8ab369f18a_3_40470204da694c16804ac00662f4d060_1_8382b89aInitValue, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_FAHRGESTELLNUMMER_grpMap_facbc46e/sn_ff5ad01b69a64f2fa3482d8ab369f18a_3_40470204da694c16804ac00662f4d060_1_8382b89aRxDataTimeoutSubstitutionValue] */
  /*     1 */  0x000000FFFFFFFFFFULL   /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_1bc03a0847a24be4b9edb43144f45870_1_333ec78aInvValue] */
};
#define COM_STOP_SEC_CONST_64BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueUInt8
  \brief  Optimized array of commonly used values like initial or invalid values. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_ConstValueUInt8Type, COM_CONST) Com_ConstValueUInt8[7] = {
  /* Index     ConstValueUInt8      Referable Keys */
  /*     0 */            0x3FU,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_27f4ba17468e41e3b3968930b1409f81_3_0f13a3f0InvValue, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_3d6bee37a7644cd595111347b1ab806d_3_0f13a3f0InvValue, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_426c8a72d1bb4a46ad11235b0f09bdc6_3_0f13a3f0InvValue, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_7607fe5e22044ec8b524b790117d1144_2_0f13a3f0InvValue, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_82ff67f6b9334982a57ad12edde7bc16_2_0f13a3f0InvValue, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_a019edbda7904702959e9dc445570356_3_0f13a3f0InvValue, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_bc5db64191594d34b6307cf590b732aa_3_0f13a3f0InvValue, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e4264132e02e49db9ec8e2776b5fcdc1_3_0f13a3f0InvValue, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e7a993bdb77e422285430840510dadf4_3_0f13a3f0InvValue, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e84002878a3d4f3a8c86fbd58c15f81a_3_0f13a3f0InvValue] */
  /*     1 */            0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/CON_VEH_dummy_56_63_aa0b865fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/CON_VEH_dummy_56_63_aa0b865fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_f726c286e26b4226a9ab68faaaa0268d_4_52335c52InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_8fcd25d281bf43f7836594d2433bdf22_11_2f274d97InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_cab340b35df54638b5e0037eab93598a_8_2f274d97InvValue, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_4e0d346165d34c65a7be51a612d26692_5_333ec78aInvValue, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_7502fc35ca3a49b8aec4c3e56a6cec59_2_333ec78aInvValue, /ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_6c1ea235872142cfbe3d872d17caa2ae_3_f361cf54InvValue, /ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_c06c9dcca09a433db7ff26cc5c43b9ad_5_f361cf54InvValue] */
  /*     2 */            0x03U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_7184c8825a7a44dd9a0b76c751498b8c_6_828cc38eInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_7f90cd4f694b47ba8781390120dcbc0a_3_828cc38eInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_7f3167446bf24e01ba2f382d6ae4ce13_2_4c5ede1dInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_d9a5c75d3be94893aa6dba0ca6c42810_2_4c5ede1dInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_9a6a7a66988546f2a7d23dc165ed871a_3_e213077eInvValue] */
  /*     3 */            0x00U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_3cec4cbf6b9349a88cfd5b60e201d60d_1_676acd3bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_3cec4cbf6b9349a88cfd5b60e201d60d_1_676acd3bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_d9ef5705d16b4542a9b87a1f657a1821_13_676acd3bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_d9ef5705d16b4542a9b87a1f657a1821_13_676acd3bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_ec8233ebea8b4ff38f6cf06a75f47ec9_2_676acd3bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_ec8233ebea8b4ff38f6cf06a75f47ec9_2_676acd3bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_0caaaf0e787848339bc25a94575449c2_13_0136c679InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_0caaaf0e787848339bc25a94575449c2_13_0136c679RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_689ab022c9664232a25b9bf47fac730d_1_0136c679InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_689ab022c9664232a25b9bf47fac730d_1_0136c679RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_768ce7ec1493408a84f5de8246b34d32_13_0136c679InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_768ce7ec1493408a84f5de8246b34d32_13_0136c679RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_77005174aa4742b0a646ec42e5086ea4_14_0136c679InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_77005174aa4742b0a646ec42e5086ea4_14_0136c679RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_7ba9ac40e06b4b4cb875d606bdea3bf4_14_0136c679InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_7ba9ac40e06b4b4cb875d606bdea3bf4_14_0136c679RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_a501b58ff3634c35a48eb475f1576ef4_2_0136c679InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_a501b58ff3634c35a48eb475f1576ef4_2_0136c679RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_27cab225247945149cedbf8a6572a041_6_aa0b865fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_27cab225247945149cedbf8a6572a041_6_aa0b865fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_31158b9d716b4ee985e36b830c254e3a_6_aa0b865fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_31158b9d716b4ee985e36b830c254e3a_6_aa0b865fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_3e3eaebd055944cc9a1ff983552ec9bf_2_aa0b865fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_3e3eaebd055944cc9a1ff983552ec9bf_2_aa0b865fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_eaad471b16e343ebb9a64a56b77d99cf_3_aa0b865fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_eaad471b16e343ebb9a64a56b77d99cf_3_aa0b865fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_fea9eeb6b9064310b5e2c102c7429d64_2_aa0b865fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_fea9eeb6b9064310b5e2c102c7429d64_2_aa0b865fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_14e56c6abcd843b5a26d720ba0d8db8b_2_323657ecInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_14e56c6abcd843b5a26d720ba0d8db8b_2_323657ecRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_432289a519914516a899afcf71d1d116_5_323657ecInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_432289a519914516a899afcf71d1d116_5_323657ecRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_44fe0b2f15ac4ee1815b4114ef80ab03_3_323657ecInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_44fe0b2f15ac4ee1815b4114ef80ab03_3_323657ecRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_4b239780c76c4895af8a924c1735888d_1_323657ecInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_4b239780c76c4895af8a924c1735888d_1_323657ecRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_549b4cfdad08471bb65ffaa1f7e128c8_4_323657ecInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_549b4cfdad08471bb65ffaa1f7e128c8_4_323657ecRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_713c359a278f4f88a03967667e018042_5_323657ecInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_713c359a278f4f88a03967667e018042_5_323657ecRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_80b961ffa4074a35943c73f682505d16_1_323657ecInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_80b961ffa4074a35943c73f682505d16_1_323657ecRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_bdb3f81fb35a4393983b8eef64f811fa_4_323657ecInitValue, 
              /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_bdb3f81fb35a4393983b8eef64f811fa_4_323657ecRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_cb39eb125cc14ed0af249d5d67f8bd8b_2_323657ecInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_cb39eb125cc14ed0af249d5d67f8bd8b_2_323657ecRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_4fe42e10027d41f4938110561ac34b34_1_48f5d03eInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_4fe42e10027d41f4938110561ac34b34_1_48f5d03eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_6c68bd74160c499e80ce3b99e28d446f_2_48f5d03eInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_6c68bd74160c499e80ce3b99e28d446f_2_48f5d03eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_711dcfdb594d48dea88be956bcd8940b_1_48f5d03eInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_711dcfdb594d48dea88be956bcd8940b_1_48f5d03eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_a72bbe97541440a48948afb1eb76d645_1_48f5d03eInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_a72bbe97541440a48948afb1eb76d645_1_48f5d03eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_c59bf536b4cc4ad8bd11209a76829f85_1_48f5d03eInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_c59bf536b4cc4ad8bd11209a76829f85_1_48f5d03eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_05a1cc95f1f243009d0e0e5041123079_3_aae17425InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_05a1cc95f1f243009d0e0e5041123079_3_aae17425RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_2fc2cc0e152644629cc3240b5c954053_8_aae17425InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_2fc2cc0e152644629cc3240b5c954053_8_aae17425RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_4f6b0f607df24896b0faa952446b326c_3_aae17425InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_4f6b0f607df24896b0faa952446b326c_3_aae17425RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_9f5b4c46afdb4c73b63aa906d0ef32e2_2_aae17425InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_9f5b4c46afdb4c73b63aa906d0ef32e2_2_aae17425RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_301b3a8e3bed4861b26f50db718b7694_2_fbd12829InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_301b3a8e3bed4861b26f50db718b7694_2_fbd12829RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_807fb1a14891422faa61d2a17c3da182_2_fbd12829InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_807fb1a14891422faa61d2a17c3da182_2_fbd12829RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_85d7b190f15d4a06b4b7635543b8f0b4_1_fbd12829InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_85d7b190f15d4a06b4b7635543b8f0b4_1_fbd12829RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_01dc732302854f9daf379339aec3bf41_4_425260efInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_01dc732302854f9daf379339aec3bf41_4_425260efRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_0d32674ea9b948a48e2f9146dc8d0383_3_425260efInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_0d32674ea9b948a48e2f9146dc8d0383_3_425260efRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_197556b4d9a045cb9282d0bc6431da4b_2_425260efInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_197556b4d9a045cb9282d0bc6431da4b_2_425260efRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_2c4be44656a74ad1973ec6f292be1b63_2_425260efInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_2c4be44656a74ad1973ec6f292be1b63_2_425260efRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_4f1cb301ca9544d4a46d651e9536efd1_4_425260efInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_4f1cb301ca9544d4a46d651e9536efd1_4_425260efRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_70d4f068b0c04cd9a2e782d5ca0eb678_1_425260efInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_70d4f068b0c04cd9a2e782d5ca0eb678_1_425260efRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_b7dbfdc1e82d4733afb19fcf9e269188_4_425260efInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_b7dbfdc1e82d4733afb19fcf9e269188_4_425260efRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_c094059b7c4b4be182a54415fff82701_5_425260efInitValue, 
              /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_c094059b7c4b4be182a54415fff82701_5_425260efRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_3c6da90ea4cd420aa202db115effcb23_1_b1b7a1e4InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_3c6da90ea4cd420aa202db115effcb23_1_b1b7a1e4RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_6cf29af14ea3476d8815dad896433c2d_1_b1b7a1e4InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_6cf29af14ea3476d8815dad896433c2d_1_b1b7a1e4RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_77c76ee3a9664c3c8c1378b7670411bc_4_b1b7a1e4InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_77c76ee3a9664c3c8c1378b7670411bc_4_b1b7a1e4RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_ab42396d28584920a6849c6bc0a7cc61_3_b1b7a1e4InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_ab42396d28584920a6849c6bc0a7cc61_3_b1b7a1e4RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_f16d3d92b66746088f0af6e7df5b55bc_1_b1b7a1e4InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_f16d3d92b66746088f0af6e7df5b55bc_1_b1b7a1e4RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_29337f740ab54247baf7c3db99524333_14_2b4fea7bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_29337f740ab54247baf7c3db99524333_14_2b4fea7bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_ad0347b6319e42198d41356e86be4f37_1_2b4fea7bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_ad0347b6319e42198d41356e86be4f37_1_2b4fea7bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_f9901bb3bb2044b6b25a6dfbc223991d_2_2b4fea7bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_f9901bb3bb2044b6b25a6dfbc223991d_2_2b4fea7bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0adb5aa0864a48ecbd0facf7a8348e78_9_8650906fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0adb5aa0864a48ecbd0facf7a8348e78_9_8650906fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0e547cbdd62a48f49df4be80e94fa743_11_8650906fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0e547cbdd62a48f49df4be80e94fa743_11_8650906fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_10a739af18c04017a5fa1d5deaaa5b11_2_8650906fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_10a739af18c04017a5fa1d5deaaa5b11_2_8650906fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_405a168a7cd7415d97d9faebd997c5ce_2_8650906fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_405a168a7cd7415d97d9faebd997c5ce_2_8650906fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_60da722cb98148d7ac583057f3e43e4e_1_8650906fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_60da722cb98148d7ac583057f3e43e4e_1_8650906fRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_9a19746025ce47f3b7cd9c9e81e8631b_6_fb35a62bInitValue, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_9a19746025ce47f3b7cd9c9e81e8631b_6_fb35a62bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_04b89dc3c26d4ca08465c4eec950ef56_8_1ef5db97b1344b9b93faeb7438eb9f92_3_3bc7fd4aInitValue, /ActiveEcuC/Com/ComConfig/sn_04b89dc3c26d4ca08465c4eec950ef56_8_1ef5db97b1344b9b93faeb7438eb9f92_3_3bc7fd4aRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_04b89dc3c26d4ca08465c4eec950ef56_8_5c4106f5d9894a4e97dd9baa72070138_2_3bc7fd4aInitValue, /ActiveEcuC/Com/ComConfig/sn_04b89dc3c26d4ca08465c4eec950ef56_8_5c4106f5d9894a4e97dd9baa72070138_2_3bc7fd4aRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_085b67cff4b142a59fb46d892b9938f0_15_91a4644db3794ecd81aa7b3ba03f0ae0_3_6c696df6InitValue, /ActiveEcuC/Com/ComConfig/sn_085b67cff4b142a59fb46d892b9938f0_15_91a4644db3794ecd81aa7b3ba03f0ae0_3_6c696df6RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_085b67cff4b142a59fb46d892b9938f0_15_fdd79fd1376744b592ab1dd909dcc64c_5_6c696df6InitValue, /ActiveEcuC/Com/ComConfig/sn_085b67cff4b142a59fb46d892b9938f0_15_fdd79fd1376744b592ab1dd909dcc64c_5_6c696df6RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_47c848be64324d52af177d4eda36b369_12_27e33d21d6a8482f85f2064fac78c9e8_4_8f561bceInitValue, /ActiveEcuC/Com/ComConfig/sn_47c848be64324d52af177d4eda36b369_12_27e33d21d6a8482f85f2064fac78c9e8_4_8f561bceRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_47c848be64324d52af177d4eda36b369_12_d340d69f4388438e9ec7442ceae02261_3_8f561bceInitValue, /ActiveEcuC/Com/ComConfig/sn_47c848be64324d52af177d4eda36b369_12_d340d69f4388438e9ec7442ceae02261_3_8f561bceRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_677e18af96434b57a7947ca5849af5e4_4_db6644741d2e4213ad1bbd931a41dee0_3_a1887d97InitValue, /ActiveEcuC/Com/ComConfig/sn_677e18af96434b57a7947ca5849af5e4_4_db6644741d2e4213ad1bbd931a41dee0_3_a1887d97RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_19b3ebba571d40978c473fbc372b3866_1_36f7a929InitValue, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_19b3ebba571d40978c473fbc372b3866_1_36f7a929RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_42056696541e44238d7385d322aa3305_4_36f7a929InitValue, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_42056696541e44238d7385d322aa3305_4_36f7a929RxDataTimeoutSubstitutionValue, 
              /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_663c7f2797d74e12bbabeb2d22f7ba12_3_36f7a929InitValue, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_663c7f2797d74e12bbabeb2d22f7ba12_3_36f7a929RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_9c391600986c4bfcac5985aa50535648_4_36f7a929InitValue, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_9c391600986c4bfcac5985aa50535648_4_36f7a929RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_a49f1a757dbb42f99b42ad072723479a_2_36f7a929InitValue, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_a49f1a757dbb42f99b42ad072723479a_2_36f7a929RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_fb20730d9415410f9e3bc21bb71c92b8_2_36f7a929InitValue, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_fb20730d9415410f9e3bc21bb71c92b8_2_36f7a929RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_21fe3f3f6c7244818f57f1c3c8c46f0f_1_262fad9bInitValue, /ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_21fe3f3f6c7244818f57f1c3c8c46f0f_1_262fad9bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_84e2267531a54593b0ba6603319c899d_1_262fad9bInitValue, /ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_84e2267531a54593b0ba6603319c899d_1_262fad9bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_c8ce6b50abf248f0b72cde93f56ad0ff_1_262fad9bInitValue, /ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_c8ce6b50abf248f0b72cde93f56ad0ff_1_262fad9bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_d0ea1fc2c1ca4e2295bae82b1e156e9a_18_710f3e866b434077b7dd882156cb74d0_10_231d7192InitValue, /ActiveEcuC/Com/ComConfig/sn_d0ea1fc2c1ca4e2295bae82b1e156e9a_18_710f3e866b434077b7dd882156cb74d0_10_231d7192RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_d8833aa6063240d791b5384f59f75d9a_13_35c5d363e5eb40db9e554c7d4cab4463_5_afa1da25InitValue, /ActiveEcuC/Com/ComConfig/sn_d8833aa6063240d791b5384f59f75d9a_13_35c5d363e5eb40db9e554c7d4cab4463_5_afa1da25RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sn_eb2aaf9fde954786857e30879fbebab8_4_32a695e8944f440980b86e5c6a1148d5_1_e1b92573InitValue, /ActiveEcuC/Com/ComConfig/sn_eb2aaf9fde954786857e30879fbebab8_4_32a695e8944f440980b86e5c6a1148d5_1_e1b92573RxDataTimeoutSubstitutionValue] */
  /*     4 */            0x0FU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/ACLNY_MASSCNTR_dummy_12_15_676acd3bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/ACLNY_MASSCNTR_dummy_12_15_676acd3bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_2de5d882792e4739a95de3e1c7b8ccad_10_828cc38eInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_bc95b5ba2eae48218eb9877ea08559a2_2_828cc38eInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/AVL_RPM_WHL_dummy_12_15_0136c679InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/AVL_RPM_WHL_dummy_12_15_0136c679RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_5d9506af077e4dd09e190f5d484d7305_9_d3120462InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_aaebf3e364fa4b0da7de252527de9449_3_d3120462InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3a077345b6d34d0386d92666711189a4_2_4c5ede1dInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_9051b95afb204671aff526a500db42b7_1_4c5ede1dInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_11ec244fdbd64e57b309defc17cb2624_2_52335c52InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_6d1119ef97ee4f5b8a1d4c39b8ee4a4b_2_52335c52InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_9d997c8fa7874a73b4c82edfa1c465ee_1_52335c52InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/ENERG_DGR_DRDY_dummy_12_15_323657ecInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/ENERG_DGR_DRDY_dummy_12_15_323657ecRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_28_31_48f5d03eInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_28_31_48f5d03eRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_296a2827f3ac4a3cb35d9abfed66395a_2_2f274d97InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_754efa353cf340fcb5ebf6a252677ba9_1_2f274d97InvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_386a693e6a3e40caa81d96e20ae491f1_1_e213077eInvValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/TAR_QTA_STRMOM_DV_dummy_12_15_425260efInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/TAR_QTA_STRMOM_DV_dummy_12_15_425260efRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_12_15_b1b7a1e4InitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_12_15_b1b7a1e4RxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/VYAW_VEH_dummy_12_15_2b4fea7bInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/VYAW_VEH_dummy_12_15_2b4fea7bRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_b829418ae8544fc7a495975b5e034ae1_1_0f13a3f0InvValue, /ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_44efad82ff2147cdb10b6291c8cbea3f_3_f361cf54InvValue, /ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_5c6ec9e5beec46c09ef86c7818a9cbf6_3_f361cf54InvValue] */
  /*     5 */            0xF7U,  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_ID2_a6936a2fInitValue, /ActiveEcuC/Com/ComConfig/SECU_RESP_ID2_a6936a2fRxDataTimeoutSubstitutionValue] */
  /*     6 */            0x01U   /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_ID2_434514f6_InInitValue, /ActiveEcuC/Com/ComConfig/ANFRAGE_ID2_434514f6_InRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/V_VEH_dummy_39_39_8650906fInitValue, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/V_VEH_dummy_39_39_8650906fRxDataTimeoutSubstitutionValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_PduGrpVector
**********************************************************************************************************************/
/** 
  \var    Com_PduGrpVector
  \brief  Contains an I-PDU-Group vector for each I-PDU, mapping the I-PDU to the corresponding I-PDU-Groups.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_PduGrpVectorType, COM_CONST) Com_PduGrpVector[13] = {
  /* Index     PduGrpVector      Referable Keys */
  /*     0 */         0x80U,  /* [/ActiveEcuC/Com/ComConfig/ERRM_BN_U_23008def] */
  /*     1 */         0x40U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*     2 */         0x20U,  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  /*     3 */         0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*     4 */         0x01U,  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def, /ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*     5 */         0x00U,  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  /*     6 */         0x08U,  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*     7 */         0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  /*     8 */         0x04U,  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/A_TEMP_23008def, /ActiveEcuC/Com/ComConfig/FZZSTD_23008def, /ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def, /ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def, /ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*     9 */         0x00U,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*    10 */         0x10U,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/CTR_DIAG_OBD_DRDY_23008def, /ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def, /ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    11 */         0x00U,  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def, /ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def, /ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*    12 */         0x02U   /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def, /ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def, /ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def, /ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def, /ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def, /ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def, /ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def, /ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU.
  \details
  Element                                      Description
  InitValueUsed                                TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64
  IsGroupSignal                            
  RxSigBufferArrayBasedBufferUsed              TRUE, if the 0:n relation has 1 relation pointing to Com_RxSigBufferArrayBased
  TmpBufferUsed                                TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TmpRxShdBufferUInt8,Com_TmpRxShdBufferUInt16,Com_TmpRxShdBufferUInt32,Com_TmpRxShdBufferUInt64,Com_TmpRxShdBufferSInt8,Com_TmpRxShdBufferSInt16,Com_TmpRxShdBufferSInt32,Com_TmpRxShdBufferSInt64
  ApplType                                     Application data type.
  BitLength                                    Bit length of the signal or group signal.
  BitPosition                                  Little endian bit position of the signal or group signal within the I-PDU.
  BufferIdx                                    the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64
  BusAcc                                       BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                                   Byte length of the signal or group signal.
  ConstValueArrayBasedInitValueEndIdx          the end index of the 0:n relation pointing to Com_ConstValueArrayBased
  ConstValueArrayBasedInitValueStartIdx        the start index of the 0:n relation pointing to Com_ConstValueArrayBased
  RxDataTimeoutSubstitutionValueIdx            the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64
  RxPduInfoIdx                                 the index of the 1:1 relation pointing to Com_RxPduInfo
  RxSigBufferArrayBasedBufferLength            the number of relations pointing to Com_RxSigBufferArrayBased
  RxSigBufferArrayBasedBufferStartIdx          the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  RxSigBufferArrayBasedShdBufferEndIdx         the end index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  RxSigBufferArrayBasedShdBufferStartIdx       the start index of the 0:n relation pointing to Com_RxSigBufferArrayBased
  ShdBufferIdx                                 the index of the 0:1 relation pointing to Com_RxSigBufferUInt8,Com_RxSigBufferUInt16,Com_RxSigBufferUInt32,Com_RxSigBufferUInt64,Com_RxSigBufferZeroBit,Com_RxSigBufferSInt8,Com_RxSigBufferSInt16,Com_RxSigBufferSInt32,Com_RxSigBufferSInt64
  StartByteInPduPosition                       Start Byte position of the signal or group signal within the I-PDU.
  TmpBufferIdx                                 the index of the 0:1 relation pointing to Com_TmpRxShdBufferUInt8,Com_TmpRxShdBufferUInt16,Com_TmpRxShdBufferUInt32,Com_TmpRxShdBufferUInt64,Com_TmpRxShdBufferSInt8,Com_TmpRxShdBufferSInt16,Com_TmpRxShdBufferSInt32,Com_TmpRxShdBufferSInt64
  TmpRxShdBufferArrayBasedTmpBufferEndIdx      the end index of the 0:n relation pointing to Com_TmpRxShdBufferArrayBased
  TmpRxShdBufferArrayBasedTmpBufferStartIdx    the start index of the 0:n relation pointing to Com_TmpRxShdBufferArrayBased
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[119] = {
    /* Index    InitValueUsed  IsGroupSignal  RxSigBufferArrayBasedBufferUsed  TmpBufferUsed  ApplType                            BitLength  BitPosition  BufferIdx                       BusAcc                                ByteLength  ConstValueArrayBasedInitValueEndIdx                       ConstValueArrayBasedInitValueStartIdx                       RxDataTimeoutSubstitutionValueIdx                       RxPduInfoIdx  RxSigBufferArrayBasedBufferLength  RxSigBufferArrayBasedBufferStartIdx                       RxSigBufferArrayBasedShdBufferEndIdx                       RxSigBufferArrayBasedShdBufferStartIdx                       ShdBufferIdx                       StartByteInPduPosition  TmpBufferIdx                       TmpRxShdBufferArrayBasedTmpBufferEndIdx                       TmpRxShdBufferArrayBasedTmpBufferStartIdx                             Referable Keys */
  { /*     0 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         12U,                             0U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           0U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                1U,                     1U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/ACLNY_MASSCNTR_dummy_12_15_676acd3b, /ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  { /*     1 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                             2U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     6U,           1U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_ID2_434514f6_In, /ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  { /*     2 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         12U,                             3U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           2U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                4U,                     1U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/AVL_RPM_WHL_dummy_12_15_0136c679, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  { /*     3 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         56U,                             5U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     1U,           4U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                6U,                     7U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/CON_VEH_dummy_56_63_aa0b865f, /ActiveEcuC/Com/ComConfig/CON_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  { /*     4 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         12U,                             7U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           8U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                8U,                     1U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/ENERG_DGR_DRDY_dummy_12_15_323657ec, /ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  { /*     5 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         28U,                             9U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           9U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               10U,                     3U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_28_31_48f5d03e, /ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  { /*     6 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       32U,         32U,                             0U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     2U,           9U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                1U,                     4U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_32_63_48f5d03e, /ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  { /*     7 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                            11U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     5U,          17U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_ID2_a6936a2f, /ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  { /*     8 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       20U,         12U,                             2U,   COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     1U,          23U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                3U,                     1U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_12_31_fbd12829, /ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72] */
  { /*     9 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       28U,         36U,                             4U,   COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     0U,          23U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                5U,                     4U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_36_63_fbd12829, /ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72] */
  { /*    10 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         12U,                            12U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          24U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               13U,                     1U,                                7U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/TAR_QTA_STRMOM_DV_dummy_12_15_425260ef, /ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  { /*    11 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         12U,                            14U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          25U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               15U,                     1U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_12_15_b1b7a1e4, /ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  { /*    12 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       20U,         32U,                             6U,   COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     1U,          25U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                7U,                     4U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_32_51_b1b7a1e4, /ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  { /*    13 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         12U,                            16U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          26U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               17U,                     1U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/VYAW_VEH_dummy_12_15_2b4fea7b, /ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  { /*    14 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        1U,         39U,                            18U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     6U,          27U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               19U,                     4U,                                4U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/V_VEH_dummy_39_39_8650906f, /ActiveEcuC/Com/ComConfig/V_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  { /*    15 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         56U,                            20U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          24U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               21U,                     7U,                                4U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_0d32674ea9b948a48e2f9146dc8d0383_3_425260ef, /ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  { /*    16 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                            22U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          24U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               23U,                     0U,                                5U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_2c4be44656a74ad1973ec6f292be1b63_2_425260ef, /ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  { /*    17 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         28U,                            24U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          24U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               25U,                     3U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_4f1cb301ca9544d4a46d651e9536efd1_4_425260ef, /ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  { /*    18 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         48U,                            26U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          24U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               27U,                     6U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_01dc732302854f9daf379339aec3bf41_4_425260ef, /ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  { /*    19 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         60U,                            28U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          24U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               29U,                     7U,                                6U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_70d4f068b0c04cd9a2e782d5ca0eb678_1_425260ef, /ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  { /*    20 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                            30U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          24U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               31U,                     1U,                                3U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_197556b4d9a045cb9282d0bc6431da4b_2_425260ef, /ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  { /*    21 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         32U,                            32U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          24U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               33U,                     4U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_b7dbfdc1e82d4733afb19fcf9e269188_4_425260ef, /ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  { /*    22 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         40U,                            34U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          24U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               35U,                     5U,                                8U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_c094059b7c4b4be182a54415fff82701_5_425260ef, /ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  { /*    23 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         16U,                             0U,   COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          24U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                1U,                     2U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_f6eac96cf628429bb0c9b3d36d80d166_3_425260ef, /ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  { /*    24 */          TRUE,         FALSE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         16U,                             2U,   COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          21U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_3e35ac63fc494d0fb399c763aeb7057b_24_e92786ce091d4130a2deaffa00e99dac_12_a08a0405, /ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  { /*    25 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         16U,                            36U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          19U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_9c391600986c4bfcac5985aa50535648_4_36f7a929, /ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    26 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         34U,                            37U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          19U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     4U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_19b3ebba571d40978c473fbc372b3866_1_36f7a929, /ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    27 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         24U,                            38U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          19U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     3U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_663c7f2797d74e12bbabeb2d22f7ba12_3_36f7a929, /ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    28 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         20U,                            39U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          19U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_42056696541e44238d7385d322aa3305_4_36f7a929, /ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    29 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         32U,                            40U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          19U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     4U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_a49f1a757dbb42f99b42ad072723479a_2_36f7a929, /ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    30 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                            41U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          19U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     1U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_fb20730d9415410f9e3bc21bb71c92b8_2_36f7a929, /ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    31 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         36U,                            42U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           6U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     4U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_21fe3f3f6c7244818f57f1c3c8c46f0f_1_262fad9b, /ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  { /*    32 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         54U,                            43U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           6U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     6U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_84e2267531a54593b0ba6603319c899d_1_262fad9b, /ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  { /*    33 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         56U,                            44U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           6U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     7U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_c8ce6b50abf248f0b72cde93f56ad0ff_1_262fad9b, /ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  { /*    34 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         16U,                            45U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          22U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_04b89dc3c26d4ca08465c4eec950ef56_8_1ef5db97b1344b9b93faeb7438eb9f92_3_3bc7fd4a, /ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  { /*    35 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                            46U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          22U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     1U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_04b89dc3c26d4ca08465c4eec950ef56_8_5c4106f5d9894a4e97dd9baa72070138_2_3bc7fd4a, /ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  { /*    36 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         44U,                            47U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          26U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               48U,                     5U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_29337f740ab54247baf7c3db99524333_14_2b4fea7b, /ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  { /*    37 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         32U,                             3U,   COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          26U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                4U,                     4U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_a941ebecb6a441e187826da1c487d2c2_3_2b4fea7b, /ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  { /*    38 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                            49U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          26U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               50U,                     1U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_ad0347b6319e42198d41356e86be4f37_1_2b4fea7b, /ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  { /*    39 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         16U,                             5U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          26U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                6U,                     2U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_dcf5f5dfbfc44ee8a71982dfd4598bc5_6_2b4fea7b, /ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  { /*    40 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                            51U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          26U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               52U,                     0U,                                3U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_f9901bb3bb2044b6b25a6dfbc223991d_2_2b4fea7b, /ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  { /*    41 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         56U,                            53U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           8U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               54U,                     7U,                                9U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_4b239780c76c4895af8a924c1735888d_1_323657ec, /ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  { /*    42 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         48U,                            55U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           8U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               56U,                     6U,                                4U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_14e56c6abcd843b5a26d720ba0d8db8b_2_323657ec, /ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  { /*    43 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                            57U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           8U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               58U,                     0U,                                8U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_44fe0b2f15ac4ee1815b4114ef80ab03_3_323657ec, /ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  { /*    44 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         52U,                            59U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           8U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               60U,                     6U,                                7U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_80b961ffa4074a35943c73f682505d16_1_323657ec, /ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  { /*    45 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         16U,                            61U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           8U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               62U,                     2U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_549b4cfdad08471bb65ffaa1f7e128c8_4_323657ec, /ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  { /*    46 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         24U,                            63U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           8U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               64U,                     3U,                                5U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_713c359a278f4f88a03967667e018042_5_323657ec, /ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  { /*    47 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         32U,                            65U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           8U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               66U,                     4U,                                6U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_432289a519914516a899afcf71d1d116_5_323657ec, /ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  { /*    48 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         40U,                            67U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           8U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               68U,                     5U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_bdb3f81fb35a4393983b8eef64f811fa_4_323657ec, /ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  { /*    49 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                            69U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           8U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               70U,                     1U,                                3U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_cb39eb125cc14ed0af249d5d67f8bd8b_2_323657ec, /ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
    /* Index    InitValueUsed  IsGroupSignal  RxSigBufferArrayBasedBufferUsed  TmpBufferUsed  ApplType                            BitLength  BitPosition  BufferIdx                       BusAcc                                ByteLength  ConstValueArrayBasedInitValueEndIdx                       ConstValueArrayBasedInitValueStartIdx                       RxDataTimeoutSubstitutionValueIdx                       RxPduInfoIdx  RxSigBufferArrayBasedBufferLength  RxSigBufferArrayBasedBufferStartIdx                       RxSigBufferArrayBasedShdBufferEndIdx                       RxSigBufferArrayBasedShdBufferStartIdx                       ShdBufferIdx                       StartByteInPduPosition  TmpBufferIdx                       TmpRxShdBufferArrayBasedTmpBufferEndIdx                       TmpRxShdBufferArrayBasedTmpBufferStartIdx                             Referable Keys */
  { /*    50 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         16U,                            71U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          12U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_47c848be64324d52af177d4eda36b369_12_27e33d21d6a8482f85f2064fac78c9e8_4_8f561bce, /ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  { /*    51 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         56U,                            72U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          12U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     7U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_47c848be64324d52af177d4eda36b369_12_d340d69f4388438e9ec7442ceae02261_3_8f561bce, /ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  { /*    52 */          TRUE,         FALSE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         36U,                             7U,   COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          18U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     4U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_55e086fa3cb3405c9e0849033f661450_11_389ce921618246489b7062f81bb683c4_4_e39ca898, /ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  { /*    53 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         56U,                            73U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          20U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     7U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_085b67cff4b142a59fb46d892b9938f0_15_91a4644db3794ecd81aa7b3ba03f0ae0_3_6c696df6, /ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  { /*    54 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,         40U,                            74U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          20U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     5U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_085b67cff4b142a59fb46d892b9938f0_15_fdd79fd1376744b592ab1dd909dcc64c_5_6c696df6, /ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  { /*    55 */          TRUE,         FALSE,                           FALSE,         FALSE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       24U,          0U,                             8U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          13U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_209e4b614ee044c4bbf1020e8ad2a6e0_10_d2a8dd49e0f74a499b91350a40cf3a4b_5_605eb7ca, /ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  { /*    56 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        6U,          0U,                            75U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          10U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_677e18af96434b57a7947ca5849af5e4_4_db6644741d2e4213ad1bbd931a41dee0_3_a1887d97, /ActiveEcuC/Com/ComConfig/ERRM_BN_U_23008def] */
  { /*    57 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         12U,                            76U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          14U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               77U,                     1U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_2fc2cc0e152644629cc3240b5c954053_8_aae17425, /ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468] */
  { /*    58 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         24U,                             8U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          14U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                9U,                     3U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_3ff1e0a352104d0a9c0d95219caf3334_3_aae17425, /ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468] */
  { /*    59 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                            78U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          14U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               79U,                     0U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_4f6b0f607df24896b0faa952446b326c_3_aae17425, /ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468] */
  { /*    60 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                            80U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          14U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               81U,                     1U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_9f5b4c46afdb4c73b63aa906d0ef32e2_2_aae17425, /ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468] */
  { /*    61 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         16U,                            82U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          14U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               83U,                     2U,                                3U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_05a1cc95f1f243009d0e0e5041123079_3_aae17425, /ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468] */
  { /*    62 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         16U,                            84U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           9U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               85U,                     2U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_4fe42e10027d41f4938110561ac34b34_1_48f5d03e, /ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  { /*    63 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         24U,                            86U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           9U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               87U,                     3U,                                3U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_6c68bd74160c499e80ce3b99e28d446f_2_48f5d03e, /ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  { /*    64 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         12U,                            88U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           9U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               89U,                     1U,                                5U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_711dcfdb594d48dea88be956bcd8940b_1_48f5d03e, /ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  { /*    65 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                            90U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           9U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               91U,                     1U,                                4U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_a72bbe97541440a48948afb1eb76d645_1_48f5d03e, /ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  { /*    66 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                            92U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           9U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               93U,                     0U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_c59bf536b4cc4ad8bd11209a76829f85_1_48f5d03e, /ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  { /*    67 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       24U,         16U,                             9U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          17U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               10U,                     2U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_2ff2dc8921534b0db2b87c288a2967c1_2_fb35a62b, /ActiveEcuC/Com/ComConfig/SECU_RESP_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f] */
  { /*    68 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          8U,                            94U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          17U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               95U,                     1U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_9a19746025ce47f3b7cd9c9e81e8631b_6_fb35a62b, /ActiveEcuC/Com/ComConfig/SECU_RESP_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f] */
  { /*    69 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       24U,         40U,                            11U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         3U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          17U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               12U,                     5U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_c199b38f0c704ce58dde1ab6957e021b_2_fb35a62b, /ActiveEcuC/Com/ComConfig/SECU_RESP_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f] */
  { /*    70 */         FALSE,          TRUE,                            TRUE,         FALSE, COM_UINT8_N_APPLTYPEOFRXACCESSINFO,        8U,         40U, COM_NO_BUFFERIDXOFRXACCESSINFO, COM_ARRAY_BASED_BUSACCOFRXACCESSINFO,         1U,                                                       1U,                                                         0U, COM_NO_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO,          11U,                                1U,                                                       0U,                                                        2U,                                                          1U, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     5U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO,                                                           1U,                                                             0U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_0e9104a324b24ea4ab0595d4878193dc_1_cbcf7330, /ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  { /*    71 */         FALSE,          TRUE,                            TRUE,         FALSE, COM_UINT8_N_APPLTYPEOFRXACCESSINFO,        8U,         16U, COM_NO_BUFFERIDXOFRXACCESSINFO, COM_ARRAY_BASED_BUSACCOFRXACCESSINFO,         1U,                                                       1U,                                                         0U, COM_NO_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO,          11U,                                1U,                                                       2U,                                                        4U,                                                          3U, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     2U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO,                                                           6U,                                                             5U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_7b4a826f73e44b58ab36a6e9a35d27ee_1_cbcf7330, /ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  { /*    72 */         FALSE,          TRUE,                            TRUE,         FALSE, COM_UINT8_N_APPLTYPEOFRXACCESSINFO,        8U,         48U, COM_NO_BUFFERIDXOFRXACCESSINFO, COM_ARRAY_BASED_BUSACCOFRXACCESSINFO,         1U,                                                       1U,                                                         0U, COM_NO_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO,          11U,                                1U,                                                       4U,                                                        6U,                                                          5U, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     6U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO,                                                           5U,                                                             4U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_6456fd4fa0c84cd99253c9be9203970d_4_cbcf7330, /ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  { /*    73 */         FALSE,          TRUE,                            TRUE,         FALSE, COM_UINT8_N_APPLTYPEOFRXACCESSINFO,        8U,          0U, COM_NO_BUFFERIDXOFRXACCESSINFO, COM_ARRAY_BASED_BUSACCOFRXACCESSINFO,         1U,                                                       1U,                                                         0U, COM_NO_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO,          11U,                                1U,                                                       6U,                                                        8U,                                                          7U, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO,                                                           4U,                                                             3U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_a9cb3e40f2dc48a7b222fabc1b1c23d7_1_cbcf7330, /ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  { /*    74 */         FALSE,          TRUE,                            TRUE,         FALSE, COM_UINT8_N_APPLTYPEOFRXACCESSINFO,        8U,         32U, COM_NO_BUFFERIDXOFRXACCESSINFO, COM_ARRAY_BASED_BUSACCOFRXACCESSINFO,         1U,                                                       1U,                                                         0U, COM_NO_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO,          11U,                                1U,                                                       8U,                                                       10U,                                                          9U, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     4U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO,                                                           2U,                                                             1U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b1a3e7f0af954749a8dd6e6cd1539759_1_cbcf7330, /ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  { /*    75 */         FALSE,          TRUE,                            TRUE,         FALSE, COM_UINT8_N_APPLTYPEOFRXACCESSINFO,        8U,          8U, COM_NO_BUFFERIDXOFRXACCESSINFO, COM_ARRAY_BASED_BUSACCOFRXACCESSINFO,         1U,                                                       1U,                                                         0U, COM_NO_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO,          11U,                                1U,                                                      10U,                                                       12U,                                                         11U, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     1U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO,                                                           3U,                                                             2U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b7c79d0102c449d0aed961fad16e1b7c_1_cbcf7330, /ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  { /*    76 */         FALSE,          TRUE,                            TRUE,         FALSE, COM_UINT8_N_APPLTYPEOFRXACCESSINFO,        8U,         24U, COM_NO_BUFFERIDXOFRXACCESSINFO, COM_ARRAY_BASED_BUSACCOFRXACCESSINFO,         1U,                                                       1U,                                                         0U, COM_NO_RXDATATIMEOUTSUBSTITUTIONVALUEIDXOFRXACCESSINFO,          11U,                                1U,                                                      12U,                                                       14U,                                                         13U, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     3U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO,                                                           7U,                                                             6U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_eb6a3d2fe3114adda5fddf46f965e4e9_1_cbcf7330, /ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  { /*    77 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         32U,                            96U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          23U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               97U,                     4U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_85d7b190f15d4a06b4b7635543b8f0b4_1_fbd12829, /ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72] */
  { /*    78 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                            98U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          23U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               99U,                     1U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_301b3a8e3bed4861b26f50db718b7694_2_fbd12829, /ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72] */
  { /*    79 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                           100U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          23U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              101U,                     0U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_807fb1a14891422faa61d2a17c3da182_2_fbd12829, /ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72] */
  { /*    80 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         32U,                            10U,   COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           0U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               11U,                     4U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_1d92c110be454e9fa86cf52886346abe_6_676acd3b, /ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  { /*    81 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                           102U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           0U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              103U,                     1U,                                3U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_3cec4cbf6b9349a88cfd5b60e201d60d_1_676acd3b, /ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  { /*    82 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         16U,                            12U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           0U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               13U,                     2U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_4b53f7b0fac04e8faf5f3bd3a6602934_8_676acd3b, /ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  { /*    83 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         44U,                           104U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           0U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              105U,                     5U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_d9ef5705d16b4542a9b87a1f657a1821_13_676acd3b, /ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  { /*    84 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                           106U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           0U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              107U,                     0U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_ec8233ebea8b4ff38f6cf06a75f47ec9_2_676acd3b, /ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  { /*    85 */          TRUE,         FALSE,                           FALSE,         FALSE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,          8U,                            14U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           1U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     1U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_809234ffb6e24e4eb85479b73d250d21_49_761b4cd9ec7e47aeb030258f54c21bfc_46_434514f6_In, /ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  { /*    86 */          TRUE,         FALSE,                           FALSE,         FALSE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       32U,          0U,                            13U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          15U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_acb3c9a426bf4887ba724efd428ad5a4_3_ad2096213c0c47a78c10b4a8c5667464_7_7e6a2fc7, /ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def] */
  { /*    87 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         32U,                           108U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          27U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              109U,                     4U,                                5U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0adb5aa0864a48ecbd0facf7a8348e78_9_8650906f, /ActiveEcuC/Com/ComConfig/V_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  { /*    88 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        3U,         36U,                           110U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          27U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              111U,                     4U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0e547cbdd62a48f49df4be80e94fa743_11_8650906f, /ActiveEcuC/Com/ComConfig/V_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  { /*    89 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                           112U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          27U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              113U,                     0U,                                3U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_10a739af18c04017a5fa1d5deaaa5b11_2_8650906f, /ActiveEcuC/Com/ComConfig/V_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  { /*    90 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                           114U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          27U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              115U,                     1U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_60da722cb98148d7ac583057f3e43e4e_1_8650906f, /ActiveEcuC/Com/ComConfig/V_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  { /*    91 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         12U,                           116U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          27U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              117U,                     1U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_405a168a7cd7415d97d9faebd997c5ce_2_8650906f, /ActiveEcuC/Com/ComConfig/V_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  { /*    92 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         16U,                            15U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          27U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               16U,                     2U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_c6825405b1e44ee0b8f81e84185f7380_5_8650906f, /ActiveEcuC/Com/ComConfig/V_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  { /*    93 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         80U,                           118U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           2U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              119U,                    10U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_0caaaf0e787848339bc25a94575449c2_13_0136c679, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  { /*    94 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         16U,                            17U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           2U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               18U,                     2U,                                3U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_4a3b2166543f48339c6f727a404b1680_7_0136c679, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  { /*    95 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         92U,                           120U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           2U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              121U,                    11U,                                6U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_7ba9ac40e06b4b4cb875d606bdea3bf4_14_0136c679, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  { /*    96 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         64U,                            19U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           2U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               20U,                     8U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_96e79e323c194994bc5c88fd2c606a13_8_0136c679, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  { /*    97 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                           122U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           2U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              123U,                     1U,                                5U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_689ab022c9664232a25b9bf47fac730d_1_0136c679, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  { /*    98 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         84U,                           124U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           2U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              125U,                    10U,                                4U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_768ce7ec1493408a84f5de8246b34d32_13_0136c679, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  { /*    99 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         88U,                           126U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           2U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              127U,                    11U,                                3U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_77005174aa4742b0a646ec42e5086ea4_14_0136c679, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
    /* Index    InitValueUsed  IsGroupSignal  RxSigBufferArrayBasedBufferUsed  TmpBufferUsed  ApplType                            BitLength  BitPosition  BufferIdx                       BusAcc                                ByteLength  ConstValueArrayBasedInitValueEndIdx                       ConstValueArrayBasedInitValueStartIdx                       RxDataTimeoutSubstitutionValueIdx                       RxPduInfoIdx  RxSigBufferArrayBasedBufferLength  RxSigBufferArrayBasedBufferStartIdx                       RxSigBufferArrayBasedShdBufferEndIdx                       RxSigBufferArrayBasedShdBufferStartIdx                       ShdBufferIdx                       StartByteInPduPosition  TmpBufferIdx                       TmpRxShdBufferArrayBasedTmpBufferEndIdx                       TmpRxShdBufferArrayBasedTmpBufferStartIdx                             Referable Keys */
  { /*   100 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                           128U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           2U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              129U,                     0U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_a501b58ff3634c35a48eb475f1576ef4_2_0136c679, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  { /*   101 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         48U,                            21U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           2U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               22U,                     6U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_cc92814877d54dd6ae1dd209c4865a32_8_0136c679, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  { /*   102 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         32U,                            23U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         2U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,           2U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               24U,                     4U,                                2U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_f56acda22c2442ff85a725fcb0ae86c5_7_0136c679, /ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  { /*   103 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                           130U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           3U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_d0ea1fc2c1ca4e2295bae82b1e156e9a_18_710f3e866b434077b7dd882156cb74d0_10_231d7192, /ActiveEcuC/Com/ComConfig/A_TEMP_23008def] */
  { /*   104 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT16_APPLTYPEOFRXACCESSINFO,       12U,         16U,                            25U,   COM_NBITNBYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     4U,          25U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               26U,                     2U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_2ba2c3f5c45f4aa083a493868834ad5f_3_b1b7a1e4, /ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  { /*   105 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                           131U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          25U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              132U,                     0U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_3c6da90ea4cd420aa202db115effcb23_1_b1b7a1e4, /ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  { /*   106 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                           133U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          25U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              134U,                     1U,                                4U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_6cf29af14ea3476d8815dad896433c2d_1_b1b7a1e4, /ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  { /*   107 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         28U,                           135U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          25U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              136U,                     3U,                                5U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_77c76ee3a9664c3c8c1378b7670411bc_4_b1b7a1e4, /ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  { /*   108 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,         56U,                           137U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          25U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              138U,                     7U,                                3U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_ab42396d28584920a6849c6bc0a7cc61_3_b1b7a1e4, /ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  { /*   109 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         52U,                           139U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,          25U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              140U,                     6U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_f16d3d92b66746088f0af6e7df5b55bc_1_b1b7a1e4, /ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  { /*   110 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        6U,          0U,                           141U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           7U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_d8833aa6063240d791b5384f59f75d9a_13_35c5d363e5eb40db9e554c7d4cab4463_5_afa1da25, /ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  { /*   111 */          TRUE,         FALSE,                           FALSE,         FALSE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        2U,          2U,                           142U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           5U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_SHDBUFFERIDXOFRXACCESSINFO,                     0U, COM_NO_TMPBUFFERIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_eb2aaf9fde954786857e30879fbebab8_4_32a695e8944f440980b86e5c6a1148d5_1_e1b92573, /ActiveEcuC/Com/ComConfig/CTR_DIAG_OBD_DRDY_23008def] */
  { /*   112 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,          8U,                           143U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           4U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              144U,                     1U,                                5U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_3e3eaebd055944cc9a1ff983552ec9bf_2_aa0b865f, /ActiveEcuC/Com/ComConfig/CON_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  { /*   113 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT32_APPLTYPEOFRXACCESSINFO,       32U,         16U,                            14U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         4U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           4U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                               15U,                     2U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_5b1908a90ce1499db5d60fe77e5bdbfc_10_aa0b865f, /ActiveEcuC/Com/ComConfig/CON_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  { /*   114 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         12U,                           145U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           4U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              146U,                     1U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_27cab225247945149cedbf8a6572a041_6_aa0b865f, /ActiveEcuC/Com/ComConfig/CON_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  { /*   115 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         48U,                           147U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           4U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              148U,                     6U,                                4U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_31158b9d716b4ee985e36b830c254e3a_6_aa0b865f, /ActiveEcuC/Com/ComConfig/CON_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  { /*   116 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        4U,         52U,                           149U,        COM_NBIT_BUSACCOFRXACCESSINFO,         0U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           4U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              150U,                     6U,                                1U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_eaad471b16e343ebb9a64a56b77d99cf_3_aa0b865f, /ActiveEcuC/Com/ComConfig/CON_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  { /*   117 */          TRUE,          TRUE,                           FALSE,          TRUE,   COM_UINT8_APPLTYPEOFRXACCESSINFO,        8U,          0U,                           151U,        COM_BYTE_BUSACCOFRXACCESSINFO,         1U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     3U,           4U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                              152U,                     0U,                                3U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_fea9eeb6b9064310b5e2c102c7429d64_2_aa0b865f, /ActiveEcuC/Com/ComConfig/CON_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  { /*   118 */          TRUE,          TRUE,                           FALSE,          TRUE,  COM_UINT64_APPLTYPEOFRXACCESSINFO,       64U,          0U,                             0U,       COM_NBYTE_BUSACCOFRXACCESSINFO,         8U, COM_NO_CONSTVALUEARRAYBASEDINITVALUEENDIDXOFRXACCESSINFO, COM_NO_CONSTVALUEARRAYBASEDINITVALUESTARTIDXOFRXACCESSINFO,                                                     0U,          16U,                                0U, COM_NO_RXSIGBUFFERARRAYBASEDBUFFERSTARTIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERENDIDXOFRXACCESSINFO, COM_NO_RXSIGBUFFERARRAYBASEDSHDBUFFERSTARTIDXOFRXACCESSINFO,                                1U,                     0U,                                0U, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERENDIDXOFRXACCESSINFO, COM_NO_TMPRXSHDBUFFERARRAYBASEDTMPBUFFERSTARTIDXOFRXACCESSINFO }   /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_FAHRGESTELLNUMMER_grpMap_facbc46e/sn_ff5ad01b69a64f2fa3482d8ab369f18a_3_40470204da694c16804ac00662f4d060_1_8382b89a, /ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_FAHRGESTELLNUMMER_grpMap_facbc46e] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfoGrpSigInd
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfoGrpSigInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxAccessInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxAccessInfoGrpSigIndType, COM_CONST) Com_RxAccessInfoGrpSigInd[93] = {
  /* Index     RxAccessInfoGrpSigInd      Referable Keys */
  /*     0 */                     0U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  /*     1 */                    80U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  /*     2 */                    81U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  /*     3 */                    82U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  /*     4 */                    83U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  /*     5 */                    84U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  /*     6 */                     2U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  /*     7 */                    93U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  /*     8 */                    94U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  /*     9 */                    95U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  /*    10 */                    96U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  /*    11 */                    97U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  /*    12 */                    98U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  /*    13 */                    99U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  /*    14 */                   100U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  /*    15 */                   101U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  /*    16 */                   102U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  /*    17 */                     3U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  /*    18 */                   112U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  /*    19 */                   113U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  /*    20 */                   114U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  /*    21 */                   115U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  /*    22 */                   116U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  /*    23 */                   117U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  /*    24 */                     4U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  /*    25 */                    41U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  /*    26 */                    42U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  /*    27 */                    43U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  /*    28 */                    44U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  /*    29 */                    45U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  /*    30 */                    46U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  /*    31 */                    47U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  /*    32 */                    48U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  /*    33 */                    49U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  /*    34 */                     5U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  /*    35 */                     6U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  /*    36 */                    62U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  /*    37 */                    63U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  /*    38 */                    64U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  /*    39 */                    65U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  /*    40 */                    66U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  /*    41 */                    57U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468] */
  /*    42 */                    58U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468] */
  /*    43 */                    59U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468] */
  /*    44 */                    60U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468] */
  /*    45 */                    61U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468] */
  /*    46 */                     8U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72] */
  /*    47 */                     9U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72] */
  /*    48 */                    77U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72] */
  /*    49 */                    78U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72] */
  /* Index     RxAccessInfoGrpSigInd      Referable Keys */
  /*    50 */                    79U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72] */
  /*    51 */                    10U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  /*    52 */                    15U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  /*    53 */                    16U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  /*    54 */                    17U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  /*    55 */                    18U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  /*    56 */                    19U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  /*    57 */                    20U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  /*    58 */                    21U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  /*    59 */                    22U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  /*    60 */                    23U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  /*    61 */                    11U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  /*    62 */                    12U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  /*    63 */                   104U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  /*    64 */                   105U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  /*    65 */                   106U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  /*    66 */                   107U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  /*    67 */                   108U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  /*    68 */                   109U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  /*    69 */                    13U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  /*    70 */                    36U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  /*    71 */                    37U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  /*    72 */                    38U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  /*    73 */                    39U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  /*    74 */                    40U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  /*    75 */                    14U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  /*    76 */                    87U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  /*    77 */                    88U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  /*    78 */                    89U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  /*    79 */                    90U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  /*    80 */                    91U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  /*    81 */                    92U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  /*    82 */                    70U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  /*    83 */                    71U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  /*    84 */                    72U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  /*    85 */                    73U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  /*    86 */                    74U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  /*    87 */                    75U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  /*    88 */                    76U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  /*    89 */                   118U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_FAHRGESTELLNUMMER_grpMap_facbc46e] */
  /*    90 */                    67U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f] */
  /*    91 */                    68U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f] */
  /*    92 */                    69U   /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxAccessInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxAccessInfoIndType, COM_CONST) Com_RxAccessInfoInd[119] = {
  /* Index     RxAccessInfoInd      Referable Keys */
  /*     0 */               0U,  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     1 */              80U,  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     2 */              81U,  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     3 */              82U,  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     4 */              83U,  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     5 */              84U,  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     6 */               1U,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*     7 */              85U,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*     8 */               2U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*     9 */              93U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    10 */              94U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    11 */              95U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    12 */              96U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    13 */              97U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    14 */              98U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    15 */              99U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    16 */             100U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    17 */             101U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    18 */             102U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    19 */             103U,  /* [/ActiveEcuC/Com/ComConfig/A_TEMP_23008def] */
  /*    20 */               3U,  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    21 */             112U,  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    22 */             113U,  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    23 */             114U,  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    24 */             115U,  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    25 */             116U,  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    26 */             117U,  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    27 */             111U,  /* [/ActiveEcuC/Com/ComConfig/CTR_DIAG_OBD_DRDY_23008def] */
  /*    28 */              31U,  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*    29 */              32U,  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*    30 */              33U,  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*    31 */             110U,  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  /*    32 */               4U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    33 */              41U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    34 */              42U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    35 */              43U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    36 */              44U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    37 */              45U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    38 */              46U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    39 */              47U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    40 */              48U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    41 */              49U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    42 */               5U,  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    43 */               6U,  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    44 */              62U,  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    45 */              63U,  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    46 */              64U,  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    47 */              65U,  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    48 */              66U,  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    49 */              56U,  /* [/ActiveEcuC/Com/ComConfig/ERRM_BN_U_23008def] */
  /* Index     RxAccessInfoInd      Referable Keys */
  /*    50 */              70U,  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    51 */              71U,  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    52 */              72U,  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    53 */              73U,  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    54 */              74U,  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    55 */              75U,  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    56 */              76U,  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    57 */              50U,  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  /*    58 */              51U,  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  /*    59 */              55U,  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  /*    60 */              57U,  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*    61 */              58U,  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*    62 */              59U,  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*    63 */              60U,  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*    64 */              61U,  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*    65 */              86U,  /* [/ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def] */
  /*    66 */             118U,  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def] */
  /*    67 */               7U,  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*    68 */              67U,  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*    69 */              68U,  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*    70 */              69U,  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*    71 */              52U,  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  /*    72 */              25U,  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*    73 */              26U,  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*    74 */              27U,  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*    75 */              28U,  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*    76 */              29U,  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*    77 */              30U,  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*    78 */              53U,  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*    79 */              54U,  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*    80 */              24U,  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  /*    81 */              34U,  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  /*    82 */              35U,  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  /*    83 */               8U,  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*    84 */               9U,  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*    85 */              77U,  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*    86 */              78U,  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*    87 */              79U,  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*    88 */              10U,  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    89 */              15U,  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    90 */              16U,  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    91 */              17U,  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    92 */              18U,  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    93 */              19U,  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    94 */              20U,  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    95 */              21U,  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    96 */              22U,  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    97 */              23U,  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    98 */              11U,  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*    99 */              12U,  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /* Index     RxAccessInfoInd      Referable Keys */
  /*   100 */             104U,  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   101 */             105U,  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   102 */             106U,  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   103 */             107U,  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   104 */             108U,  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   105 */             109U,  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   106 */              13U,  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   107 */              36U,  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   108 */              37U,  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   109 */              38U,  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   110 */              39U,  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   111 */              40U,  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   112 */              14U,  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
  /*   113 */              87U,  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
  /*   114 */              88U,  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
  /*   115 */              89U,  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
  /*   116 */              90U,  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
  /*   117 */              91U,  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
  /*   118 */              92U   /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Rx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorEndIdx      the end index of the 0:n relation pointing to Com_PduGrpVector
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxPduGrpInfoType, COM_CONST) Com_RxPduGrpInfo[28] = {
    /* Index    PduGrpVectorEndIdx  PduGrpVectorStartIdx */
  { /*     0 */                13U,                  11U },
  { /*     1 */                 5U,                   4U },
  { /*     2 */                13U,                  12U },
  { /*     3 */                 9U,                   8U },
  { /*     4 */                 7U,                   6U },
  { /*     5 */                11U,                  10U },
  { /*     6 */                11U,                  10U },
  { /*     7 */                 3U,                   2U },
  { /*     8 */                 2U,                   1U },
  { /*     9 */                11U,                  10U },
  { /*    10 */                 1U,                   0U },
  { /*    11 */                13U,                  12U },
  { /*    12 */                 9U,                   8U },
  { /*    13 */                 9U,                   8U },
  { /*    14 */                13U,                  12U },
  { /*    15 */                 9U,                   8U },
  { /*    16 */                13U,                  12U },
  { /*    17 */                 9U,                   8U },
  { /*    18 */                13U,                  11U },
  { /*    19 */                 5U,                   3U },
  { /*    20 */                13U,                  11U },
  { /*    21 */                13U,                  12U },
  { /*    22 */                13U,                  12U },
  { /*    23 */                13U,                  12U },
  { /*    24 */                13U,                  12U },
  { /*    25 */                13U,                  12U },
  { /*    26 */                13U,                  12U },
  { /*    27 */                13U,                  12U }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxPduInfo
  \brief  Contains all relevant common information for Rx I-PDUs.
  \details
  Element                    Description
  RxAccessInfoIndUsed        TRUE, if the 0:n relation has 1 relation pointing to Com_RxAccessInfoInd
  RxAccessInfoIndEndIdx      the end index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxAccessInfoIndStartIdx    the start index of the 0:n relation pointing to Com_RxAccessInfoInd
  RxDefPduBufferEndIdx       the end index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxDefPduBufferStartIdx     the start index of the 0:n relation pointing to Com_RxDefPduBuffer
  RxSigGrpInfoIndEndIdx      the end index of the 0:n relation pointing to Com_RxSigGrpInfoInd
  RxSigGrpInfoIndStartIdx    the start index of the 0:n relation pointing to Com_RxSigGrpInfoInd
  RxSigInfoEndIdx            the end index of the 0:n relation pointing to Com_RxSigInfo
  RxSigInfoStartIdx          the start index of the 0:n relation pointing to Com_RxSigInfo
  Type                       Defines whether rx Pdu is a NORMAL or TP IPdu.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxPduInfoType, COM_CONST) Com_RxPduInfo[28] = {
    /* Index    RxAccessInfoIndUsed  RxAccessInfoIndEndIdx  RxAccessInfoIndStartIdx  RxDefPduBufferEndIdx  RxDefPduBufferStartIdx  RxSigGrpInfoIndEndIdx                    RxSigGrpInfoIndStartIdx                    RxSigInfoEndIdx                    RxSigInfoStartIdx                    Type                              Referable Keys */
  { /*     0 */                TRUE,                    6U,                      0U,                   6U,                     0U,                                      1U,                                        0U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup_7933cc8b] */
  { /*     1 */                TRUE,                    8U,                      6U,                  14U,                     6U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                2U,                                  0U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup2_7933cc8b] */
  { /*     2 */                TRUE,                   19U,                      8U,                  26U,                    14U,                                      2U,                                        1U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  { /*     3 */                TRUE,                   20U,                     19U,                  28U,                    26U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                3U,                                  2U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/A_TEMP_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup4_7933cc8b] */
  { /*     4 */                TRUE,                   27U,                     20U,                  36U,                    28U,                                      3U,                                        2U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup5_7933cc8b] */
  { /*     5 */                TRUE,                   28U,                     27U,                  38U,                    36U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                4U,                                  3U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/CTR_DIAG_OBD_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup6_7933cc8b] */
  { /*     6 */                TRUE,                   31U,                     28U,                  46U,                    38U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                7U,                                  4U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup6_7933cc8b] */
  { /*     7 */                TRUE,                   32U,                     31U,                  53U,                    46U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                8U,                                  7U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup7_7933cc8b] */
  { /*     8 */                TRUE,                   42U,                     32U,                  61U,                    53U,                                      4U,                                        3U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup8_7933cc8b] */
  { /*     9 */                TRUE,                   49U,                     42U,                  69U,                    61U,                                      5U,                                        4U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup6_7933cc8b] */
  { /*    10 */                TRUE,                   50U,                     49U,                  71U,                    69U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                                9U,                                  8U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ERRM_BN_U_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup9_7933cc8b] */
  { /*    11 */                TRUE,                   57U,                     50U,                  78U,                    71U,                                      6U,                                        5U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  { /*    12 */                TRUE,                   59U,                     57U,                  86U,                    78U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               11U,                                  9U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup4_7933cc8b] */
  { /*    13 */                TRUE,                   60U,                     59U,                  94U,                    86U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               12U,                                 11U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup4_7933cc8b] */
  { /*    14 */                TRUE,                   65U,                     60U,                  99U,                    94U,                                      7U,                                        6U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  { /*    15 */                TRUE,                   66U,                     65U,                 105U,                    99U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               13U,                                 12U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup4_7933cc8b] */
  { /*    16 */                TRUE,                   67U,                     66U,                 113U,                   105U,                                      8U,                                        7U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  { /*    17 */                TRUE,                   71U,                     67U,                 121U,                   113U,                                      9U,                                        8U,                               14U,                                 13U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup4_7933cc8b] */
  { /*    18 */                TRUE,                   72U,                     71U,                 129U,                   121U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               15U,                                 14U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup_7933cc8b] */
  { /*    19 */                TRUE,                   78U,                     72U,                 137U,                   129U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               21U,                                 15U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup10_7933cc8b] */
  { /*    20 */                TRUE,                   80U,                     78U,                 145U,                   137U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               23U,                                 21U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup_7933cc8b] */
  { /*    21 */                TRUE,                   81U,                     80U,                 153U,                   145U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               24U,                                 23U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  { /*    22 */                TRUE,                   83U,                     81U,                 161U,                   153U, COM_NO_RXSIGGRPINFOINDENDIDXOFRXPDUINFO, COM_NO_RXSIGGRPINFOINDSTARTIDXOFRXPDUINFO,                               26U,                                 24U, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  { /*    23 */                TRUE,                   88U,                     83U,                 169U,                   161U,                                     10U,                                        9U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  { /*    24 */                TRUE,                   98U,                     88U,                 177U,                   169U,                                     11U,                                       10U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  { /*    25 */                TRUE,                  106U,                     98U,                 185U,                   177U,                                     12U,                                       11U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  { /*    26 */                TRUE,                  112U,                    106U,                 191U,                   185U,                                     13U,                                       12U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  { /*    27 */                TRUE,                  119U,                    112U,                 196U,                   191U,                                     14U,                                       13U, COM_NO_RXSIGINFOENDIDXOFRXPDUINFO, COM_NO_RXSIGINFOSTARTIDXOFRXPDUINFO, COM_NORMAL_TYPEOFRXPDUINFO }   /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigGrpInfo
  \brief  Contains all relevant information for Rx signal groups.
  \details
  Element                          Description
  ShdBufferRequired            
  RxAccessInfoGrpSigIndEndIdx      the end index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd
  RxAccessInfoGrpSigIndStartIdx    the start index of the 0:n relation pointing to Com_RxAccessInfoGrpSigInd
  RxPduInfoIdx                     the index of the 1:1 relation pointing to Com_RxPduInfo
  SignalProcessing             
  StartBytePosition                Least significant byte position of first group signal within the ComIPdu.
  ValidDlc                         Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxSigGrpInfoType, COM_CONST) Com_RxSigGrpInfo[14] = {
    /* Index    ShdBufferRequired  RxAccessInfoGrpSigIndEndIdx  RxAccessInfoGrpSigIndStartIdx  RxPduInfoIdx  SignalProcessing                             StartBytePosition  ValidDlc        Referable Keys */
  { /*     0 */              TRUE,                          6U,                            0U,           0U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       6U },  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed] */
  { /*     1 */              TRUE,                         17U,                            6U,           2U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,      12U },  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e] */
  { /*     2 */              TRUE,                         24U,                           17U,           4U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       8U },  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9] */
  { /*     3 */              TRUE,                         34U,                           24U,           8U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       8U },  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f] */
  { /*     4 */              TRUE,                         41U,                           34U,           9U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       8U },  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4] */
  { /*     5 */              TRUE,                         46U,                           41U,          14U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       5U },  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468] */
  { /*     6 */              TRUE,                         51U,                           46U,          23U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       8U },  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72] */
  { /*     7 */              TRUE,                         61U,                           51U,          24U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       8U },  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf] */
  { /*     8 */              TRUE,                         69U,                           61U,          25U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       8U },  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca] */
  { /*     9 */              TRUE,                         75U,                           69U,          26U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       6U },  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356] */
  { /*    10 */              TRUE,                         82U,                           75U,          27U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       5U },  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2] */
  { /*    11 */              TRUE,                         89U,                           82U,          11U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       7U },  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243] */
  { /*    12 */              TRUE,                         90U,                           89U,          16U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               0UL,       8U },  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_FAHRGESTELLNUMMER_grpMap_facbc46e] */
  { /*    13 */              TRUE,                         93U,                           90U,          17U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGGRPINFO,               1UL,       8U }   /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigGrpInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_RxSigGrpInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_RxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxSigGrpInfoIndType, COM_CONST) Com_RxSigGrpInfoInd[14] = {
  /* Index     RxSigGrpInfoInd      Referable Keys */
  /*     0 */               0U,  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     1 */               1U,  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*     2 */               2U,  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*     3 */               3U,  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*     4 */               4U,  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*     5 */              11U,  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*     6 */               5U,  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*     7 */              12U,  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def] */
  /*     8 */              13U,  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*     9 */               6U,  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*    10 */               7U,  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    11 */               8U,  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*    12 */               9U,  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*    13 */              10U   /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigInfo
  \brief  Contains all relevant information for Rx signals.
  \details
  Element             Description
  RxAccessInfoIdx     the index of the 1:1 relation pointing to Com_RxAccessInfo
  SignalProcessing
  ValidDlc            Minimum length of PDU required to completely receive the signal or signal group.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxSigInfoType, COM_CONST) Com_RxSigInfo[26] = {
    /* Index    RxAccessInfoIdx  SignalProcessing                          ValidDlc        Referable Keys */
  { /*     0 */              1U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  { /*     1 */             85U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  { /*     2 */            103U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/A_TEMP_23008def] */
  { /*     3 */            111U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/CTR_DIAG_OBD_DRDY_23008def] */
  { /*     4 */             31U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  { /*     5 */             32U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       7U },  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  { /*     6 */             33U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  { /*     7 */            110U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  { /*     8 */             56U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/ERRM_BN_U_23008def] */
  { /*     9 */             50U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  { /*    10 */             51U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  { /*    11 */             55U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  { /*    12 */             86U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def] */
  { /*    13 */              7U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       1U },  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  { /*    14 */             52U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  { /*    15 */             26U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    16 */             28U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    17 */             27U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    18 */             25U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    19 */             29U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       5U },  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    20 */             30U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U },  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  { /*    21 */             53U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       8U },  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  { /*    22 */             54U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       6U },  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  { /*    23 */             24U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       4U },  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  { /*    24 */             34U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       3U },  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  { /*    25 */             35U, COM_DEFERRED_SIGNALPROCESSINGOFRXSIGINFO,       2U }   /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxFilterInitValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_TxFilterInitValueUInt16
  \brief  Contains the initial values used for initialization of the old value to evaluate the filter algorithm. (UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxFilterInitValueUInt16Type, COM_CONST) Com_TxFilterInitValueUInt16[3] = {
  /* Index     TxFilterInitValueUInt16      Referable Keys */
  /*     0 */                  0x0000U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_03f1be64196c4e708bef357e7333ae22_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     1 */                  0x0000U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3366770fef6a4623aee662f9f9c4c3c2_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     2 */                  0x0000U   /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_dbd0108a94f54fd190c31739eefdc4ca_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
};
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxFilterInitValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_TxFilterInitValueUInt8
  \brief  Contains the initial values used for initialization of the old value to evaluate the filter algorithm. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxFilterInitValueUInt8Type, COM_CONST) Com_TxFilterInitValueUInt8[20] = {
  /* Index     TxFilterInitValueUInt8      Referable Keys */
  /*     0 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_4b5d00d65aef4a05b869d24584abb8c4_1_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*     1 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_8fcd25d281bf43f7836594d2433bdf22_11_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*     2 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_296a2827f3ac4a3cb35d9abfed66395a_2_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*     3 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_754efa353cf340fcb5ebf6a252677ba9_1_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*     4 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_cab340b35df54638b5e0037eab93598a_8_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*     5 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3a077345b6d34d0386d92666711189a4_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     6 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_7f3167446bf24e01ba2f382d6ae4ce13_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     7 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_9051b95afb204671aff526a500db42b7_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     8 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_d9a5c75d3be94893aa6dba0ca6c42810_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     9 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_3d6bee37a7644cd595111347b1ab806d_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    10 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_27f4ba17468e41e3b3968930b1409f81_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    11 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_82ff67f6b9334982a57ad12edde7bc16_2_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    12 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_426c8a72d1bb4a46ad11235b0f09bdc6_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    13 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_7607fe5e22044ec8b524b790117d1144_2_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    14 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_a019edbda7904702959e9dc445570356_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    15 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_b829418ae8544fc7a495975b5e034ae1_1_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    16 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_bc5db64191594d34b6307cf590b732aa_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    17 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e7a993bdb77e422285430840510dadf4_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    18 */                   0x00U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e4264132e02e49db9ec8e2776b5fcdc1_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    19 */                   0x00U   /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e84002878a3d4f3a8c86fbd58c15f81a_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxModeInfo
  \brief  Contains all relevant information for transmission mode handling.
  \details
  Element                                Description
  TxModeTrueUsed                         TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_TxModeTrue
  MinimumDelay                           Minimum delay factor of the Tx I-PDU.
  TxModeTrueIdx                          the index of the 0:1 relation pointing to Com_TxModeTrue
  TxSigInfoFilterInitValueIndEndIdx      the end index of the 0:n relation pointing to Com_TxSigInfoFilterInitValueInd
  TxSigInfoFilterInitValueIndStartIdx    the start index of the 0:n relation pointing to Com_TxSigInfoFilterInitValueInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxModeInfoType, COM_CONST) Com_TxModeInfo[14] = {
    /* Index    TxModeTrueUsed  MinimumDelay  TxModeTrueIdx  TxSigInfoFilterInitValueIndEndIdx                     TxSigInfoFilterInitValueIndStartIdx                           Referable Keys */
  { /*     0 */           TRUE,         101U,            7U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  { /*     1 */           TRUE,           0U,            6U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def] */
  { /*     2 */           TRUE,           0U,            6U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def] */
  { /*     3 */           TRUE,           0U,            6U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def] */
  { /*     4 */           TRUE,           0U,            5U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  { /*     5 */           TRUE,           0U,            4U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  { /*     6 */           TRUE,          13U,            3U,                                                   7U,                                                     0U },  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  { /*     7 */           TRUE,           0U,            6U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  { /*     8 */           TRUE,           0U,            6U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  { /*     9 */           TRUE,           0U,            2U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  { /*    10 */           TRUE,          11U,            7U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO },  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  { /*    11 */           TRUE,          33U,            7U,                                                  18U,                                                     7U },  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  { /*    12 */           TRUE,          11U,            1U,                                                  23U,                                                    18U },  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  { /*    13 */           TRUE,         101U,            0U, COM_NO_TXSIGINFOFILTERINITVALUEINDENDIDXOFTXMODEINFO, COM_NO_TXSIGINFOFILTERINITVALUEINDSTARTIDXOFTXMODEINFO }   /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxModeTrue
**********************************************************************************************************************/
/** 
  \var    Com_TxModeTrue
  \brief  Contains all relevant information for transmission mode true.
  \details
  Element       Description
  TimePeriod    Cycle time factor.
  Direct        TRUE if transmission mode contains a direct part.
  RepCnt        Repetition count for replication of transmission requests plus one initial transmit.
  RepPeriod     Repetition period factor for replication of transmission requests.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxModeTrueType, COM_CONST) Com_TxModeTrue[8] = {
    /* Index    TimePeriod  Direct  RepCnt  RepPeriod        Referable Keys */
  { /*     0 */      1000U,   TRUE,     3U,      100U },  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  { /*     1 */       100U,   TRUE,     0U,        0U },  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  { /*     2 */       200U,  FALSE,     0U,        0U },  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  { /*     3 */        64U,   TRUE,     0U,        0U },  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  { /*     4 */         1U,  FALSE,     0U,        0U },  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  { /*     5 */         4U,  FALSE,     0U,        0U },  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  { /*     6 */         2U,  FALSE,     0U,        0U },  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  { /*     7 */         0U,   TRUE,     0U,        0U }   /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpInfo
  \brief  Contains all I-PDU-Group relevant information for Tx I-PDUs.
  \details
  Element                 Description
  PduGrpVectorStartIdx    the start index of the 0:n relation pointing to Com_PduGrpVector
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxPduGrpInfoType, COM_CONST) Com_TxPduGrpInfo[14] = {
    /* Index    PduGrpVectorStartIdx */
  { /*     0 */                   9U },
  { /*     1 */                   7U },
  { /*     2 */                   7U },
  { /*     3 */                   7U },
  { /*     4 */                   7U },
  { /*     5 */                   7U },
  { /*     6 */                   7U },
  { /*     7 */                   7U },
  { /*     8 */                   7U },
  { /*     9 */                   7U },
  { /*    10 */                   5U },
  { /*    11 */                   7U },
  { /*    12 */                   7U },
  { /*    13 */                   7U }
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInfo
  \brief  Contains all relevant information for Tx I-PDUs.
  \details
  Element                    Description
  TxPduInitValueUsed         TRUE, if the 0:n relation has 1 relation pointing to Com_TxPduInitValue
  ExternalId                 External ID used to call PduR_ComTransmit().
  MetaDataLength             Length of MetaData.
  TxBufferLength             the number of relations pointing to Com_TxBuffer
  TxPduInitValueEndIdx       the end index of the 0:n relation pointing to Com_TxPduInitValue
  TxPduInitValueStartIdx     the start index of the 0:n relation pointing to Com_TxPduInitValue
  TxSigGrpInfoIndEndIdx      the end index of the 0:n relation pointing to Com_TxSigGrpInfoInd
  TxSigGrpInfoIndStartIdx    the start index of the 0:n relation pointing to Com_TxSigGrpInfoInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxPduInfoType, COM_CONST) Com_TxPduInfo[14] = {
    /* Index    TxPduInitValueUsed  ExternalId                                                                    MetaDataLength  TxBufferLength  TxPduInitValueEndIdx  TxPduInitValueStartIdx  TxSigGrpInfoIndEndIdx                    TxSigGrpInfoIndStartIdx                          Referable Keys */
  { /*     0 */               TRUE,                                 PduRConf_PduRSrcPdu_SRC_ANFRAGE_434514f6_Out,             0U,             8U,                   8U,                     0U, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  { /*     1 */               TRUE,             PduRConf_PduRSrcPdu_SRC_Fr_pduTr_AVL_FORC_GRD_A_FlexRay_7d601c47,             0U,             5U,                  13U,                     8U,                                      1U,                                        0U },  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  { /*     2 */               TRUE,               PduRConf_PduRSrcPdu_SRC_Fr_pduTr_AVL_PO_EPS_A_FlexRay_7d601c47,             0U,             8U,                  21U,                    13U,                                      2U,                                        1U },  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  { /*     3 */               TRUE,         PduRConf_PduRSrcPdu_SRC_Fr_pduTr_AVL_STMOM_DV_ACT_A_FlexRay_7d601c47,             0U,             4U,                  25U,                    21U,                                      3U,                                        2U },  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  { /*     4 */               TRUE,   PduRConf_PduRSrcPdu_SRC_Fr_pduTr_DBG_EPS_BS_MOD_58_BYTE_A_FlexRay_7d601c47,             0U,            58U,                  83U,                    25U, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  { /*     5 */               TRUE, PduRConf_PduRSrcPdu_SRC_Fr_pduTr_DBG_EPS_MOD_EXT_120_BYTE_A_FlexRay_7d601c47,             0U,            58U,                 141U,                    83U, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  { /*     6 */               TRUE,              PduRConf_PduRSrcPdu_SRC_Fr_pduTr_DISP_CC_EPS_A_FlexRay_7d601c47,             0U,             5U,                 146U,                   141U,                                      4U,                                        3U },  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  { /*     7 */               TRUE,                   PduRConf_PduRSrcPdu_SRC_Fr_pduTr_DT_EST_A_FlexRay_7d601c47,             0U,            16U,                 162U,                   146U,                                      5U,                                        4U },  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  { /*     8 */               TRUE,              PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ENGTORQ_EPS_A_FlexRay_7d601c47,             0U,             8U,                 170U,                   162U, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  { /*     9 */               TRUE,              PduRConf_PduRSrcPdu_SRC_Fr_pduTr_RQ_STG_EFAN_A_FlexRay_7d601c47,             0U,             8U,                 178U,                   170U, COM_NO_TXSIGGRPINFOINDENDIDXOFTXPDUINFO, COM_NO_TXSIGGRPINFOINDSTARTIDXOFTXPDUINFO },  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  { /*    10 */               TRUE,                PduRConf_PduRSrcPdu_SRC_Fr_pduTr_SECU_CHAL_A_FlexRay_7d601c47,             0U,             8U,                 186U,                   178U,                                      6U,                                        5U },  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  { /*    11 */               TRUE,       PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ST_DIAG_OBD_3_DRDY_A_FlexRay_7d601c47,             0U,             8U,                 194U,                   186U,                                      7U,                                        6U },  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  { /*    12 */               TRUE,                   PduRConf_PduRSrcPdu_SRC_Fr_pduTr_ST_EST_A_FlexRay_7d601c47,             0U,             5U,                 199U,                   194U,                                      8U,                                        7U },  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  { /*    13 */               TRUE,                   PduRConf_PduRSrcPdu_SRC_Fr_pduTr_SU_EPS_A_FlexRay_7d601c47,             0U,             8U,                 207U,                   199U,                                      9U,                                        8U }   /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[207] = {
  /* Index     TxPduInitValue      Referable Keys */
  /*     0 */           0x01U,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     1 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     2 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     3 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     4 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     5 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     6 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     7 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     8 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def] */
  /*     9 */           0xF0U,  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def] */
  /*    10 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def] */
  /*    11 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def] */
  /*    12 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def] */
  /*    13 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def] */
  /*    14 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def] */
  /*    15 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def] */
  /*    16 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def] */
  /*    17 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def] */
  /*    18 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def] */
  /*    19 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def] */
  /*    20 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def] */
  /*    21 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def] */
  /*    22 */           0xF0U,  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def] */
  /*    23 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def] */
  /*    24 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def] */
  /*    25 */           0x01U,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    26 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    27 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    28 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    29 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    30 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    31 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    32 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    33 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    34 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    35 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    36 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    37 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    38 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    39 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    40 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    41 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    42 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    43 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    44 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    45 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    46 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    47 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    48 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    49 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /* Index     TxPduInitValue      Referable Keys */
  /*    50 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    51 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    52 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    53 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    54 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    55 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    56 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    57 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    58 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    59 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    60 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    61 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    62 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    63 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    64 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    65 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    66 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    67 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    68 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    69 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    70 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    71 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    72 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    73 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    74 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    75 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    76 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    77 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    78 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    79 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    80 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    81 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    82 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    83 */           0x02U,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    84 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    85 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    86 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    87 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    88 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    89 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    90 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    91 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    92 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    93 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    94 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    95 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    96 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    97 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    98 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    99 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /* Index     TxPduInitValue      Referable Keys */
  /*   100 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   101 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   102 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   103 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   104 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   105 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   106 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   107 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   108 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   109 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   110 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   111 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   112 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   113 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   114 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   115 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   116 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   117 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   118 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   119 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   120 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   121 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   122 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   123 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   124 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   125 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   126 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   127 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   128 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   129 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   130 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   131 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   132 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   133 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   134 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   135 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   136 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   137 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   138 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   139 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   140 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   141 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*   142 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*   143 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*   144 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*   145 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*   146 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   147 */           0xF0U,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   148 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   149 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /* Index     TxPduInitValue      Referable Keys */
  /*   150 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   151 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   152 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   153 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   154 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   155 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   156 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   157 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   158 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   159 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   160 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   161 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*   162 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   163 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   164 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   165 */           0xF0U,  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   166 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   167 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   168 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   169 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   170 */           0x15U,  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   171 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   172 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   173 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   174 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   175 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   176 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   177 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   178 */           0xF8U,  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  /*   179 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  /*   180 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  /*   181 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  /*   182 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  /*   183 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  /*   184 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  /*   185 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  /*   186 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*   187 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*   188 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*   189 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*   190 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*   191 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*   192 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*   193 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*   194 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*   195 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*   196 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*   197 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*   198 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*   199 */           0x00U,  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  /* Index     TxPduInitValue      Referable Keys */
  /*   200 */           0xC0U,  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  /*   201 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  /*   202 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  /*   203 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  /*   204 */           0xFFU,  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  /*   205 */           0x0FU,  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  /*   206 */           0x00U   /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpInfo
  \brief  Contains all relevant information for Tx Signal Groups.
  \details
  Element                           Description
  TxBufferEndIdx                    the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferStartIdx                  the start index of the 0:n relation pointing to Com_TxBuffer
  TxSigGrpMaskUsed                  TRUE, if the 0:n relation has 1 relation pointing to Com_TxSigGrpMask
  PduOffset                         Byte offset relative to the PDU the signal group is starting.
  TxBufferSigGrpInTxIPDUEndIdx      the end index of the 1:n relation pointing to Com_TxBuffer
  TxBufferSigGrpInTxIPDUStartIdx    the start index of the 1:n relation pointing to Com_TxBuffer
  TxPduInfoIdx                      the index of the 1:1 relation pointing to Com_TxPduInfo
  TxSigGrpMaskStartIdx              the start index of the 0:n relation pointing to Com_TxSigGrpMask
  TxSigInfoInvValueIndEndIdx        the end index of the 0:n relation pointing to Com_TxSigInfoInvValueInd
  TxSigInfoInvValueIndStartIdx      the start index of the 0:n relation pointing to Com_TxSigInfoInvValueInd
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxSigGrpInfoType, COM_CONST) Com_TxSigGrpInfo[9] = {
    /* Index    TxBufferEndIdx  TxBufferStartIdx  TxSigGrpMaskUsed  PduOffset  TxBufferSigGrpInTxIPDUEndIdx  TxBufferSigGrpInTxIPDUStartIdx  TxPduInfoIdx  TxSigGrpMaskStartIdx  TxSigInfoInvValueIndEndIdx  TxSigInfoInvValueIndStartIdx        Referable Keys */
  { /*     0 */           212U,             207U,             TRUE,        0U,                          13U,                             8U,           1U,                   0U,                         4U,                           0U },  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/AVL_FORC_GRD_dummy_12_15_9b458801, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_b8a0fa3e4cf64a1ab5fc745baa78e585_2_9b458801, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_197c766bc806474bab8b0adb6b45f8af_5_9b458801, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_2ff2d3a958b44ed3bf7b9b844a310c8a_5_9b458801, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_3c4236203a2749bcbb2aed6382953164_2_9b458801, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_c18c5dd3b39e4668a8f82c337e371f6f_6_9b458801] */
  { /*     1 */           220U,             212U,             TRUE,        0U,                          21U,                            13U,           2U,                   0U,                        11U,                           4U },  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_bc95b5ba2eae48218eb9877ea08559a2_2_828cc38e, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_4fc18042a3ed4ed3935aa3b3038bf544_5_828cc38e, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_99fd6a6f88664f46a45dae1eac3e4bb9_5_828cc38e, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_c5c4fc12c19449dca31982abd0f99bbb_2_828cc38e, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_2de5d882792e4739a95de3e1c7b8ccad_10_828cc38e, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_accb41f44683494d8bbe73645993b2b8_9_828cc38e, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_7184c8825a7a44dd9a0b76c751498b8c_6_828cc38e, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_7f90cd4f694b47ba8781390120dcbc0a_3_828cc38e] */
  { /*     2 */           224U,             220U,             TRUE,        0U,                          25U,                            21U,           3U,                   0U,                        14U,                          11U },  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/AVL_STMOM_DV_ACT_dummy_12_15_d3120462, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_aaebf3e364fa4b0da7de252527de9449_3_d3120462, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_5d9506af077e4dd09e190f5d484d7305_9_d3120462, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_7c6cdad248d54f7cbe6f830bb0fcf68d_3_d3120462, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_f65da775f9284544b6d9e8ec17402794_5_d3120462] */
  { /*     3 */           229U,             224U,             TRUE,        0U,                         146U,                           141U,           6U,                   0U,                        20U,                          14U },  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_d9a5c75d3be94893aa6dba0ca6c42810_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_dbd0108a94f54fd190c31739eefdc4ca_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_9051b95afb204671aff526a500db42b7_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_03f1be64196c4e708bef357e7333ae22_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3366770fef6a4623aee662f9f9c4c3c2_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3a077345b6d34d0386d92666711189a4_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_7f3167446bf24e01ba2f382d6ae4ce13_2_4c5ede1d] */
  { /*     4 */           245U,             229U,             TRUE,        0U,                         162U,                           146U,           7U,                   0U,                        24U,                          20U },  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_64_95_52335c52, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_9fa32cadfaed4d9d8f9ace3694433c0d_2_52335c52, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_16_47_52335c52, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_9d997c8fa7874a73b4c82edfa1c465ee_1_52335c52, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_6d1119ef97ee4f5b8a1d4c39b8ee4a4b_2_52335c52, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_f726c286e26b4226a9ab68faaaa0268d_4_52335c52, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_11ec244fdbd64e57b309defc17cb2624_2_52335c52, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_12_15_52335c52, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_96_127_52335c52] */
  { /*     5 */           250U,             245U,             TRUE,        0U,                         199U,                           194U,          12U,                   0U,                        28U,                          24U },  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/ST_EST_dummy_16_23_2f274d97, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_754efa353cf340fcb5ebf6a252677ba9_1_2f274d97, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_4b5d00d65aef4a05b869d24584abb8c4_1_2f274d97, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_8fcd25d281bf43f7836594d2433bdf22_11_2f274d97, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_cab340b35df54638b5e0037eab93598a_8_2f274d97, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_296a2827f3ac4a3cb35d9abfed66395a_2_2f274d97] */
  { /*     6 */           258U,             250U,             TRUE,        0U,                         207U,                           199U,          13U,                   0U,                        31U,                          28U },  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_9a6a7a66988546f2a7d23dc165ed871a_3_e213077e, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_386a693e6a3e40caa81d96e20ae491f1_1_e213077e, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_64d37827c64341ab93bbfe7c6e1f91a0_1_e213077e, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_222481f9d4fd4d26baca286fbee3bf96_3_e213077e, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/SU_EPS_dummy_14_19_e213077e, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/SU_EPS_dummy_20_51_e213077e] */
  { /*     7 */           265U,             258U,             TRUE,        1U,                         186U,                           179U,          10U,                   0U,                        34U,                          31U },  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_1bc03a0847a24be4b9edb43144f45870_1_333ec78a, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_7502fc35ca3a49b8aec4c3e56a6cec59_2_333ec78a, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_4e0d346165d34c65a7be51a612d26692_5_333ec78a] */
  { /*     8 */           273U,             265U,             TRUE,        0U,                         194U,                           186U,          11U,                   0U,                        45U,                          34U }   /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e4264132e02e49db9ec8e2776b5fcdc1_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_bc5db64191594d34b6307cf590b732aa_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e7a993bdb77e422285430840510dadf4_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_82ff67f6b9334982a57ad12edde7bc16_2_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_a019edbda7904702959e9dc445570356_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_27f4ba17468e41e3b3968930b1409f81_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e84002878a3d4f3a8c86fbd58c15f81a_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_b829418ae8544fc7a495975b5e034ae1_1_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_3d6bee37a7644cd595111347b1ab806d_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_426c8a72d1bb4a46ad11235b0f09bdc6_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_7607fe5e22044ec8b524b790117d1144_2_0f13a3f0] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpInfoInd
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpInfoInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_TxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxSigGrpInfoIndType, COM_CONST) Com_TxSigGrpInfoInd[9] = {
  /* Index     TxSigGrpInfoInd      Referable Keys */
  /*     0 */               0U,  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def] */
  /*     1 */               1U,  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def] */
  /*     2 */               2U,  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def] */
  /*     3 */               3U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     4 */               4U,  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  /*     5 */               7U,  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  /*     6 */               8U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*     7 */               5U,  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*     8 */               6U   /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigGrpMask
**********************************************************************************************************************/
/** 
  \var    Com_TxSigGrpMask
  \brief  Signal group mask needed to copy interlaced signal groups to the Tx PDU buffer.
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxSigGrpMaskType, COM_CONST) Com_TxSigGrpMask[16] = {
  /* Index     TxSigGrpMask      Referable Keys */
  /*     0 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb] */
  /*     1 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb] */
  /*     2 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb] */
  /*     3 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb] */
  /*     4 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4] */
  /*     5 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a] */
  /*     6 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a] */
  /*     7 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5] */
  /*     8 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7] */
  /*     9 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7] */
  /*    10 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7] */
  /*    11 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7] */
  /*    12 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7] */
  /*    13 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7] */
  /*    14 */         0xFFU,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7] */
  /*    15 */         0xFFU   /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals and group signals.
  \details
  Element                   Description
  TxBufferEndIdx            the end index of the 0:n relation pointing to Com_TxBuffer
  TxBufferStartIdx          the start index of the 0:n relation pointing to Com_TxBuffer
  OnChangeUsed              TRUE, if the 0:1 relation has minimum 1 relation pointing to Com_FilterInfo_UInt8,Com_FilterInfo_SInt8,Com_FilterInfo_UInt16,Com_FilterInfo_SInt16,Com_FilterInfo_UInt32,Com_FilterInfo_SInt32,Com_FilterInfo_UInt64,Com_FilterInfo_SInt64,Com_FilterInfo_UInt8_N
  ApplType                  Application data type.
  BitLength                 Bit length of the signal or group signal.
  BitPosition               Little endian bit position of the signal or group signal within the I-PDU.
  BusAcc                    BUS access algorithm for signal or group signal packing / un-packing.
  ByteLength                Byte length of the signal or group signal.
  FilterInitValueIdx        the index of the 0:1 relation pointing to Com_TxFilterInitValueUInt8,Com_TxFilterInitValueUInt16,Com_TxFilterInitValueUInt32,Com_TxFilterInitValueUInt64,Com_TxFilterInitValueSInt8,Com_TxFilterInitValueSInt16,Com_TxFilterInitValueSInt32,Com_TxFilterInitValueSInt64
  InvValueIdx               the index of the 0:1 relation pointing to Com_ConstValueUInt8,Com_ConstValueUInt16,Com_ConstValueUInt32,Com_ConstValueUInt64,Com_ConstValueSInt8,Com_ConstValueSInt16,Com_ConstValueSInt32,Com_ConstValueSInt64
  OnChangeIdx               the index of the 0:1 relation pointing to Com_FilterInfo_UInt8,Com_FilterInfo_SInt8,Com_FilterInfo_UInt16,Com_FilterInfo_SInt16,Com_FilterInfo_UInt32,Com_FilterInfo_SInt32,Com_FilterInfo_UInt64,Com_FilterInfo_SInt64,Com_FilterInfo_UInt8_N
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
  TxPduInfoIdx              the index of the 1:1 relation pointing to Com_TxPduInfo
  TxSigGrpInfoIdx           the index of the 0:1 relation pointing to Com_TxSigGrpInfo
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[74] = {
    /* Index    TxBufferEndIdx  TxBufferStartIdx  OnChangeUsed  ApplType                        BitLength  BitPosition  BusAcc                           ByteLength  FilterInitValueIdx                    InvValueIdx                    OnChangeIdx                    StartByteInPduPosition  TxPduInfoIdx  TxSigGrpInfoIdx                          Referable Keys */
  { /*     0 */             1U,               0U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          0U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,           0U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_ID2_434514f6_Out, /ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  { /*     1 */           209U,             208U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         12U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           1U,                                0U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/AVL_FORC_GRD_dummy_12_15_9b458801, /ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def] */
  { /*     2 */           222U,             221U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         12U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           3U,                                2U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/AVL_STMOM_DV_ACT_dummy_12_15_d3120462, /ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def] */
  { /*     3 */            26U,              25U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          0U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,           4U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_CHOV_DBG_MOD_EPS_1182661c, /ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  { /*     4 */            84U,              83U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          0U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,           5U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_CHOV_DBG_MOD_EPS_8a0e8110, /ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  { /*     5 */           231U,             230U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         12U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           7U,                                4U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_12_15_52335c52, /ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  { /*     6 */           235U,             231U,        FALSE, COM_UINT32_APPLTYPEOFTXSIGINFO,       32U,         16U,     COM_NBYTE_BUSACCOFTXSIGINFO,         4U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,           7U,                                4U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_16_47_52335c52, /ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  { /*     7 */           241U,             237U,        FALSE, COM_UINT32_APPLTYPEOFTXSIGINFO,       32U,         64U,     COM_NBYTE_BUSACCOFTXSIGINFO,         4U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     8U,           7U,                                4U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_64_95_52335c52, /ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  { /*     8 */           245U,             241U,        FALSE, COM_UINT32_APPLTYPEOFTXSIGINFO,       32U,         96U,     COM_NBYTE_BUSACCOFTXSIGINFO,         4U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                    12U,           7U,                                4U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_96_127_52335c52, /ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  { /*     9 */           171U,             170U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          0U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,           9U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_ID2_f361cf54, /ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  { /*    10 */           179U,             178U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          0U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,          10U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_ID2_2a1be51a, /ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def] */
  { /*    11 */           248U,             247U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         16U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,          12U,                                5U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/ST_EST_dummy_16_23_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  { /*    12 */           253U,             251U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,         14U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,          13U,                                6U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/SU_EPS_dummy_14_19_e213077e, /ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  { /*    13 */           257U,             252U,        FALSE, COM_UINT32_APPLTYPEOFTXSIGINFO,       32U,         20U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         4U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,          13U,                                6U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/SU_EPS_dummy_20_51_e213077e, /ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  { /*    14 */           166U,             164U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       12U,         16U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            2U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,           8U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_0c0ed9ed2c324b648cea19ccfdcf4017_2_e716efb46a29429ebef5b7d5737ff0c0_2_3b1b8e1f, /ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  { /*    15 */           246U,             245U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          0U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U,                                   0U, COM_NO_INVVALUEIDXOFTXSIGINFO,                            0U,                     0U,          12U,                                5U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_4b5d00d65aef4a05b869d24584abb8c4_1_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/ST_EST_23008defTxFilterInitValue] */
  { /*    16 */           250U,             249U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         32U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U,                                   1U,                            1U,                            0U,                     4U,          12U,                                5U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_8fcd25d281bf43f7836594d2433bdf22_11_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4InvValue, /ActiveEcuC/Com/ComConfig/ST_EST_23008defTxFilterInitValue] */
  { /*    17 */           247U,             246U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         12U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                   2U,                            4U,                            0U,                     1U,          12U,                                5U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_296a2827f3ac4a3cb35d9abfed66395a_2_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4InvValue, /ActiveEcuC/Com/ComConfig/ST_EST_23008defTxFilterInitValue] */
  { /*    18 */           247U,             246U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,          8U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                   3U,                            4U,                            0U,                     1U,          12U,                                5U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_754efa353cf340fcb5ebf6a252677ba9_1_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4InvValue, /ActiveEcuC/Com/ComConfig/ST_EST_23008defTxFilterInitValue] */
  { /*    19 */           249U,             248U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         24U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U,                                   4U,                            1U,                            0U,                     3U,          12U,                                5U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_cab340b35df54638b5e0037eab93598a_8_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4InvValue, /ActiveEcuC/Com/ComConfig/ST_EST_23008defTxFilterInitValue] */
  { /*    20 */            85U,              84U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          8U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           5U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_1d8c8b7c4f314df494349db3e54a099c_3_0751acece3ed45e28561953fa2cf0d8a_2_8a0e8110, /ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  { /*    21 */           224U,             223U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         28U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            4U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     3U,           3U,                                2U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_5d9506af077e4dd09e190f5d484d7305_9_d3120462, /ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fbInvValue] */
  { /*    22 */           221U,             220U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          0U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,           3U,                                2U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_7c6cdad248d54f7cbe6f830bb0fcf68d_3_d3120462, /ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def] */
  { /*    23 */           222U,             221U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,          8U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            4U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           3U,                                2U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_aaebf3e364fa4b0da7de252527de9449_3_d3120462, /ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fbInvValue] */
  { /*    24 */           224U,             222U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       12U,         16U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            2U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,           3U,                                2U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_f65da775f9284544b6d9e8ec17402794_5_d3120462, /ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fbInvValue] */
  { /*    25 */           173U,             172U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         20U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            4U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,           9U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_5c6ec9e5beec46c09ef86c7818a9cbf6_3_f361cf54, /ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  { /*    26 */           174U,             173U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         24U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            1U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     3U,           9U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_6c1ea235872142cfbe3d872d17caa2ae_3_f361cf54, /ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  { /*    27 */           173U,             172U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         16U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            4U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,           9U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_44efad82ff2147cdb10b6291c8cbea3f_3_f361cf54, /ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  { /*    28 */           172U,             171U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          8U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            1U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           9U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_c06c9dcca09a433db7ff26cc5c43b9ad_5_f361cf54, /ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  { /*    29 */            27U,              26U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          8U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           4U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_03a68de7c576470bbe5c65893688a981_2_1d95be4f9b5642d8ad66a452046dc075_2_1182661c, /ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  { /*    30 */           211U,             209U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       12U,         16U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            2U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,           1U,                                0U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_2ff2d3a958b44ed3bf7b9b844a310c8a_5_9b458801, /ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3InvValue] */
  { /*    31 */           208U,             207U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,        8U,          0U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,           1U,                                0U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_3c4236203a2749bcbb2aed6382953164_2_9b458801, /ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def] */
  { /*    32 */           212U,             211U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,        8U,         32U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            3U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     4U,           1U,                                0U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_197c766bc806474bab8b0adb6b45f8af_5_9b458801, /ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3InvValue] */
  { /*    33 */           209U,             208U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,        4U,          8U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            1U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           1U,                                0U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_b8a0fa3e4cf64a1ab5fc745baa78e585_2_9b458801, /ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3InvValue] */
  { /*    34 */           211U,             210U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,        4U,         28U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            1U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     3U,           1U,                                0U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_c18c5dd3b39e4668a8f82c337e371f6f_6_9b458801, /ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3InvValue] */
  { /*    35 */           265U,             260U,        FALSE, COM_UINT64_APPLTYPEOFTXSIGINFO,       40U,         24U,     COM_NBYTE_BUSACCOFTXSIGINFO,         5U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            1U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     3U,          10U,                                7U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_1bc03a0847a24be4b9edb43144f45870_1_333ec78a, /ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aInvValue] */
  { /*    36 */           259U,             258U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          8U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            1U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,          10U,                                7U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_4e0d346165d34c65a7be51a612d26692_5_333ec78a, /ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aInvValue] */
  { /*    37 */           260U,             259U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         16U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            1U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,          10U,                                7U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_7502fc35ca3a49b8aec4c3e56a6cec59_2_333ec78a, /ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aInvValue] */
  { /*    38 */           229U,             228U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         34U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                   5U,                            4U,                            0U,                     4U,           6U,                                3U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3a077345b6d34d0386d92666711189a4_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  { /*    39 */           229U,             228U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,         38U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                   6U,                            2U,                            0U,                     4U,           6U,                                3U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_7f3167446bf24e01ba2f382d6ae4ce13_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  { /*    40 */           226U,             225U,         TRUE, COM_UINT16_APPLTYPEOFTXSIGINFO,        4U,          8U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                   0U,                            1U,                            0U,                     1U,           6U,                                3U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_03f1be64196c4e708bef357e7333ae22_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  { /*    41 */           226U,             225U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         12U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                   7U,                            4U,                            0U,                     1U,           6U,                                3U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_9051b95afb204671aff526a500db42b7_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  { /*    42 */           228U,             226U,         TRUE, COM_UINT16_APPLTYPEOFTXSIGINFO,       16U,         16U,     COM_NBYTE_BUSACCOFTXSIGINFO,         2U,                                   1U,                            0U,                            0U,                     2U,           6U,                                3U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3366770fef6a4623aee662f9f9c4c3c2_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  { /*    43 */           229U,             228U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,         32U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                   8U,                            2U,                            0U,                     4U,           6U,                                3U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_d9a5c75d3be94893aa6dba0ca6c42810_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  { /*    44 */           225U,             224U,         TRUE, COM_UINT16_APPLTYPEOFTXSIGINFO,        8U,          0U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U,                                   2U, COM_NO_INVVALUEIDXOFTXSIGINFO,                            0U,                     0U,           6U,                                3U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_dbd0108a94f54fd190c31739eefdc4ca_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  { /*    45 */           269U,             267U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,         22U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         0U,                                   9U,                            0U,                            0U,                     2U,          11U,                                8U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_3d6bee37a7644cd595111347b1ab806d_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  { /*    46 */           273U,             272U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,         58U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                  10U,                            0U,                            0U,                     7U,          11U,                                8U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_27f4ba17468e41e3b3968930b1409f81_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  { /*    47 */           267U,             265U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,          4U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         0U,                                  11U,                            0U,                            0U,                     0U,          11U,                                8U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_82ff67f6b9334982a57ad12edde7bc16_2_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  { /*    48 */           272U,             270U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,         46U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         0U,                                  12U,                            0U,                            0U,                     5U,          11U,                                8U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_426c8a72d1bb4a46ad11235b0f09bdc6_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  { /*    49 */           267U,             266U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,         10U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                  13U,                            0U,                            0U,                     1U,          11U,                                8U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_7607fe5e22044ec8b524b790117d1144_2_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
    /* Index    TxBufferEndIdx  TxBufferStartIdx  OnChangeUsed  ApplType                        BitLength  BitPosition  BusAcc                           ByteLength  FilterInitValueIdx                    InvValueIdx                    OnChangeIdx                    StartByteInPduPosition  TxPduInfoIdx  TxSigGrpInfoIdx                          Referable Keys */
  { /*    50 */           273U,             271U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,         52U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         0U,                                  14U,                            0U,                            0U,                     6U,          11U,                                8U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_a019edbda7904702959e9dc445570356_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  { /*    51 */           266U,             265U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,          0U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                  15U,                            4U,                            0U,                     0U,          11U,                                8U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_b829418ae8544fc7a495975b5e034ae1_1_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  { /*    52 */           271U,             270U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,         40U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                  16U,                            0U,                            0U,                     5U,          11U,                                8U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_bc5db64191594d34b6307cf590b732aa_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  { /*    53 */           270U,             269U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,         34U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                  17U,                            0U,                            0U,                     4U,          11U,                                8U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e7a993bdb77e422285430840510dadf4_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  { /*    54 */           268U,             267U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,         16U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U,                                  18U,                            0U,                            0U,                     2U,          11U,                                8U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e4264132e02e49db9ec8e2776b5fcdc1_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  { /*    55 */           270U,             268U,         TRUE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        6U,         28U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         0U,                                  19U,                            0U,                            0U,                     3U,          11U,                                8U },  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e84002878a3d4f3a8c86fbd58c15f81a_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  { /*    56 */             3U,               1U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       16U,          8U,     COM_NBYTE_BUSACCOFTXSIGINFO,         2U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            0U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           0U, COM_NO_TXSIGGRPINFOIDXOFTXSIGINFO },  /* [/ActiveEcuC/Com/ComConfig/sn_809234ffb6e24e4eb85479b73d250d21_49_761b4cd9ec7e47aeb030258f54c21bfc_46_434514f6_Out, /ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  { /*    57 */           214U,             213U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         12U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            4U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           2U,                                1U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_2de5d882792e4739a95de3e1c7b8ccad_10_828cc38e, /ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  { /*    58 */           218U,             216U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       16U,         32U,     COM_NBYTE_BUSACCOFTXSIGINFO,         2U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            0U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     4U,           2U,                                1U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_4fc18042a3ed4ed3935aa3b3038bf544_5_828cc38e, /ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  { /*    59 */           220U,             219U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,         62U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            2U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     7U,           2U,                                1U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_7f90cd4f694b47ba8781390120dcbc0a_3_828cc38e, /ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  { /*    60 */           220U,             218U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       12U,         48U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            2U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     6U,           2U,                                1U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_99fd6a6f88664f46a45dae1eac3e4bb9_5_828cc38e, /ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  { /*    61 */           220U,             219U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,         60U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            2U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     7U,           2U,                                1U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_7184c8825a7a44dd9a0b76c751498b8c_6_828cc38e, /ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  { /*    62 */           216U,             214U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       16U,         16U,     COM_NBYTE_BUSACCOFTXSIGINFO,         2U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            0U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     2U,           2U,                                1U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_accb41f44683494d8bbe73645993b2b8_9_828cc38e, /ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  { /*    63 */           214U,             213U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,          8U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            4U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           2U,                                1U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_bc95b5ba2eae48218eb9877ea08559a2_2_828cc38e, /ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  { /*    64 */           213U,             212U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          0U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,           2U,                                1U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_c5c4fc12c19449dca31982abd0f99bbb_2_828cc38e, /ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def] */
  { /*    65 */           252U,             251U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        2U,         12U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            2U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,          13U,                                6U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_9a6a7a66988546f2a7d23dc165ed871a_3_e213077e, /ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004InvValue] */
  { /*    66 */           258U,             257U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         56U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     7U,          13U,                                6U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_64d37827c64341ab93bbfe7c6e1f91a0_1_e213077e, /ActiveEcuC/Com/ComConfig/SU_EPS_23008def] */
  { /*    67 */           257U,             256U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         52U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            4U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     6U,          13U,                                6U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_386a693e6a3e40caa81d96e20ae491f1_1_e213077e, /ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004InvValue] */
  { /*    68 */           252U,             250U,        FALSE, COM_UINT16_APPLTYPEOFTXSIGINFO,       12U,          0U, COM_NBITNBYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            2U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,          13U,                                6U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_222481f9d4fd4d26baca286fbee3bf96_3_e213077e, /ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004InvValue] */
  { /*    69 */           237U,             236U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         56U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            4U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     7U,           7U,                                4U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_6d1119ef97ee4f5b8a1d4c39b8ee4a4b_2_52335c52, /ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7InvValue] */
  { /*    70 */           237U,             236U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,         60U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            4U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     7U,           7U,                                4U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_9d997c8fa7874a73b4c82edfa1c465ee_1_52335c52, /ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7InvValue] */
  { /*    71 */           230U,             229U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,          0U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO, COM_NO_INVVALUEIDXOFTXSIGINFO, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     0U,           7U,                                4U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_9fa32cadfaed4d9d8f9ace3694433c0d_2_52335c52, /ActiveEcuC/Com/ComConfig/DT_EST_23008def] */
  { /*    72 */           231U,             230U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        4U,          8U,      COM_NBIT_BUSACCOFTXSIGINFO,         0U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            4U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     1U,           7U,                                4U },  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_11ec244fdbd64e57b309defc17cb2624_2_52335c52, /ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7InvValue] */
  { /*    73 */           236U,             235U,        FALSE,  COM_UINT8_APPLTYPEOFTXSIGINFO,        8U,         48U,      COM_BYTE_BUSACCOFTXSIGINFO,         1U, COM_NO_FILTERINITVALUEIDXOFTXSIGINFO,                            1U, COM_NO_ONCHANGEIDXOFTXSIGINFO,                     6U,           7U,                                4U }   /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_f726c286e26b4226a9ab68faaaa0268d_4_52335c52, /ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7InvValue] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfoFilterInitValueInd
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfoFilterInitValueInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_TxSigInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxSigInfoFilterInitValueIndType, COM_CONST) Com_TxSigInfoFilterInitValueInd[23] = {
  /* Index     TxSigInfoFilterInitValueInd      Referable Keys */
  /*     0 */                          38U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  /*     1 */                          39U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  /*     2 */                          40U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  /*     3 */                          41U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  /*     4 */                          42U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  /*     5 */                          43U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  /*     6 */                          44U,  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008defTxFilterInitValue] */
  /*     7 */                          45U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  /*     8 */                          46U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  /*     9 */                          47U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  /*    10 */                          48U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  /*    11 */                          49U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  /*    12 */                          50U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  /*    13 */                          51U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  /*    14 */                          52U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  /*    15 */                          53U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  /*    16 */                          54U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  /*    17 */                          55U,  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008defTxFilterInitValue] */
  /*    18 */                          15U,  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008defTxFilterInitValue] */
  /*    19 */                          16U,  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008defTxFilterInitValue] */
  /*    20 */                          17U,  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008defTxFilterInitValue] */
  /*    21 */                          18U,  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008defTxFilterInitValue] */
  /*    22 */                          19U   /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008defTxFilterInitValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfoInvValueInd
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfoInvValueInd
  \brief  the indexes of the 1:1 sorted relation pointing to Com_TxSigInfo
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxSigInfoInvValueIndType, COM_CONST) Com_TxSigInfoInvValueInd[45] = {
  /* Index     TxSigInfoInvValueInd      Referable Keys */
  /*     0 */                   30U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3InvValue] */
  /*     1 */                   32U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3InvValue] */
  /*     2 */                   33U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3InvValue] */
  /*     3 */                   34U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3InvValue] */
  /*     4 */                   57U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  /*     5 */                   58U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  /*     6 */                   59U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  /*     7 */                   60U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  /*     8 */                   61U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  /*     9 */                   62U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  /*    10 */                   63U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacInvValue] */
  /*    11 */                   21U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fbInvValue] */
  /*    12 */                   23U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fbInvValue] */
  /*    13 */                   24U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fbInvValue] */
  /*    14 */                   38U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue] */
  /*    15 */                   39U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue] */
  /*    16 */                   40U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue] */
  /*    17 */                   41U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue] */
  /*    18 */                   42U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue] */
  /*    19 */                   43U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33InvValue] */
  /*    20 */                   69U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7InvValue] */
  /*    21 */                   70U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7InvValue] */
  /*    22 */                   72U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7InvValue] */
  /*    23 */                   73U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7InvValue] */
  /*    24 */                   16U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4InvValue] */
  /*    25 */                   17U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4InvValue] */
  /*    26 */                   18U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4InvValue] */
  /*    27 */                   19U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4InvValue] */
  /*    28 */                   65U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004InvValue] */
  /*    29 */                   67U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004InvValue] */
  /*    30 */                   68U,  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004InvValue] */
  /*    31 */                   35U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aInvValue] */
  /*    32 */                   36U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aInvValue] */
  /*    33 */                   37U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aInvValue] */
  /*    34 */                   45U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue] */
  /*    35 */                   46U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue] */
  /*    36 */                   47U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue] */
  /*    37 */                   48U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue] */
  /*    38 */                   49U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue] */
  /*    39 */                   50U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue] */
  /*    40 */                   51U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue] */
  /*    41 */                   52U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue] */
  /*    42 */                   53U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue] */
  /*    43 */                   54U,  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue] */
  /*    44 */                   55U   /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5InvValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_CurrentTxModeType, COM_VAR_NOINIT) Com_CurrentTxMode[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_CycleTimeCntType, COM_VAR_NOINIT) Com_CycleTimeCnt[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_CyclicSendRequestType, COM_VAR_NOINIT) Com_CyclicSendRequest[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_DelayTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_DelayTimeCnt
  \brief  Current counter value of minimum delay counter.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_DelayTimeCntType, COM_VAR_NOINIT) Com_DelayTimeCnt[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_GatewayProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_GatewayProcessingISRLockCounterType, COM_VAR_NOINIT) Com_GatewayProcessingISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx().
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_HandleRxPduDeferredUType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/A_TEMP_23008def] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/CTR_DIAG_OBD_DRDY_23008def] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/ERRM_BN_U_23008def] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleTxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleTxPduDeferred
  \brief  Flag array used for deferred Tx confirmation handling.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_HandleTxPduDeferredType, COM_VAR_NOINIT) Com_HandleTxPduDeferred[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized = FALSE;
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCnt
  \brief  Current repetition counter value for replication of transmission requests plus one initial transmit.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RepCntType, COM_VAR_NOINIT) Com_RepCnt[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCycleCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCycleCnt
  \brief  Current counter value of repetition period for replication of transmission requests.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RepCycleCntType, COM_VAR_NOINIT) Com_RepCycleCnt[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_RxDeadlineMonitoringISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxDefPduBufferUType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/A_TEMP_23008def] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/A_TEMP_23008def] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/CTR_DIAG_OBD_DRDY_23008def] */
  /*    37 */  /* [/ActiveEcuC/Com/ComConfig/CTR_DIAG_OBD_DRDY_23008def] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*    41 */  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*    42 */  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*    43 */  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*    44 */  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*    45 */  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def] */
  /*    46 */  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  /*    49 */  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  /* Index        Referable Keys  */
  /*    50 */  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def] */
  /*    53 */  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    54 */  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    55 */  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    56 */  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    57 */  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    58 */  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    59 */  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    60 */  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def] */
  /*    61 */  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    62 */  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    63 */  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    64 */  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    65 */  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    66 */  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    67 */  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    68 */  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/ERRM_BN_U_23008def] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/ERRM_BN_U_23008def] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    73 */  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    74 */  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    75 */  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    76 */  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    77 */  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def] */
  /*    78 */  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  /*    81 */  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  /*    82 */  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  /*    83 */  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  /*    84 */  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  /*    85 */  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def] */
  /*    86 */  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  /*    87 */  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  /*    88 */  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  /*    89 */  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  /*    90 */  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  /*    91 */  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  /*    92 */  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  /*    93 */  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def] */
  /*    94 */  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*    95 */  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*    97 */  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*    98 */  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def] */
  /*    99 */  /* [/ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def] */
  /* Index        Referable Keys  */
  /*   100 */  /* [/ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def] */
  /*   101 */  /* [/ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def] */
  /*   102 */  /* [/ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def] */
  /*   105 */  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def] */
  /*   106 */  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def] */
  /*   107 */  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def] */
  /*   108 */  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def] */
  /*   109 */  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def] */
  /*   110 */  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def] */
  /*   111 */  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def] */
  /*   112 */  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def] */
  /*   113 */  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*   114 */  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*   115 */  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*   116 */  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*   117 */  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*   118 */  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*   119 */  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*   120 */  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def] */
  /*   121 */  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  /*   122 */  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  /*   123 */  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  /*   124 */  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  /*   125 */  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  /*   126 */  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  /*   127 */  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  /*   128 */  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def] */
  /*   129 */  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*   130 */  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*   131 */  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*   132 */  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*   133 */  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*   134 */  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*   135 */  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*   136 */  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def] */
  /*   137 */  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*   138 */  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*   139 */  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*   140 */  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*   141 */  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*   142 */  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*   143 */  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*   144 */  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def] */
  /*   145 */  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  /*   146 */  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  /*   147 */  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  /*   148 */  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  /*   149 */  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  /* Index        Referable Keys  */
  /*   150 */  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  /*   151 */  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  /*   152 */  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def] */
  /*   153 */  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  /*   154 */  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  /*   155 */  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  /*   156 */  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  /*   157 */  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  /*   158 */  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  /*   159 */  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  /*   160 */  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def] */
  /*   161 */  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*   162 */  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*   163 */  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*   164 */  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*   165 */  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*   166 */  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*   167 */  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*   168 */  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def] */
  /*   169 */  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*   170 */  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*   171 */  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*   172 */  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*   173 */  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*   174 */  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*   175 */  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*   176 */  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def] */
  /*   177 */  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   178 */  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   179 */  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   180 */  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   181 */  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   182 */  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   183 */  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   184 */  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def] */
  /*   185 */  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   186 */  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   187 */  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   188 */  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   189 */  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   190 */  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def] */
  /*   191 */  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
  /*   192 */  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
  /*   193 */  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
  /*   194 */  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */
  /*   195 */  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDeferredProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxDeferredProcessingISRLockCounterType, COM_VAR_NOINIT) Com_RxDeferredProcessingISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDlMonDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxDlMonDivisorCounterType, COM_VAR_NOINIT) Com_RxDlMonDivisorCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_RxIPduGroupISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[28];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ACLNY_MASSCNTR_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_In, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_RPM_WHL_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/A_TEMP_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup4_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/CON_VEH_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup5_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/CTR_DIAG_OBD_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup6_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/CTR_VIB_STW_DISP_EXMI_SP2015_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup6_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DIAG_OBD_ENG_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup7_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENERG_DGR_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup8_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/ENSU_SFY_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup6_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/ERRM_BN_U_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup9_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/FZZSTD_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup4_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/KILOMETERSTAND_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup4_7933cc8b] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/OFFS_QUAD_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/RELATIVZEIT_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup4_7933cc8b] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/SECU_FAHRGESTELLNUMMER_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup4_7933cc8b] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/STEA_OFFS_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup_7933cc8b] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/ST_CENG_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup10_7933cc8b] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/ST_ENERG_GEN_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup_7933cc8b] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/ST_STAB_DSC_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/SU_CLE_DRDY_DXP_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/TAR_ESTP_VIRT_FTAX_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/TAR_QTA_STRMOM_DV_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/TAR_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/VYAW_VEH_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/V_VEH_23008def, /ActiveEcuC/Com/ComConfig/EPS_IN_PduGroup3_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferArrayBased
  \brief  Rx Signal and Group Signal Buffer. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxSigBufferArrayBasedType, COM_VAR_NOINIT) Com_RxSigBufferArrayBased[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_0e9104a324b24ea4ab0595d4878193dc_1_cbcf7330] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_0e9104a324b24ea4ab0595d4878193dc_1_cbcf7330_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_0e9104a324b24ea4ab0595d4878193dc_1_cbcf7330_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_7b4a826f73e44b58ab36a6e9a35d27ee_1_cbcf7330] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_7b4a826f73e44b58ab36a6e9a35d27ee_1_cbcf7330_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_7b4a826f73e44b58ab36a6e9a35d27ee_1_cbcf7330_RxSignalBufferRouting] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_6456fd4fa0c84cd99253c9be9203970d_4_cbcf7330] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_6456fd4fa0c84cd99253c9be9203970d_4_cbcf7330_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_6456fd4fa0c84cd99253c9be9203970d_4_cbcf7330_RxSignalBufferRouting] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_a9cb3e40f2dc48a7b222fabc1b1c23d7_1_cbcf7330] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_a9cb3e40f2dc48a7b222fabc1b1c23d7_1_cbcf7330_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_a9cb3e40f2dc48a7b222fabc1b1c23d7_1_cbcf7330_RxSignalBufferRouting] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b1a3e7f0af954749a8dd6e6cd1539759_1_cbcf7330] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b1a3e7f0af954749a8dd6e6cd1539759_1_cbcf7330_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b1a3e7f0af954749a8dd6e6cd1539759_1_cbcf7330_RxSignalBufferRouting] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b7c79d0102c449d0aed961fad16e1b7c_1_cbcf7330] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b7c79d0102c449d0aed961fad16e1b7c_1_cbcf7330_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b7c79d0102c449d0aed961fad16e1b7c_1_cbcf7330_RxSignalBufferRouting] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_eb6a3d2fe3114adda5fddf46f965e4e9_1_cbcf7330] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_eb6a3d2fe3114adda5fddf46f965e4e9_1_cbcf7330_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_eb6a3d2fe3114adda5fddf46f965e4e9_1_cbcf7330_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt16
  \brief  Rx Signal and Group Signal Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxSigBufferUInt16Type, COM_VAR_NOINIT) Com_RxSigBufferUInt16[27];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_f6eac96cf628429bb0c9b3d36d80d166_3_425260ef] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_f6eac96cf628429bb0c9b3d36d80d166_3_425260ef_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_f6eac96cf628429bb0c9b3d36d80d166_3_425260ef_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/sn_3e35ac63fc494d0fb399c763aeb7057b_24_e92786ce091d4130a2deaffa00e99dac_12_a08a0405, /ActiveEcuC/Com/ComConfig/sn_3e35ac63fc494d0fb399c763aeb7057b_24_e92786ce091d4130a2deaffa00e99dac_12_a08a0405_RxSignalBufferRouting] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_a941ebecb6a441e187826da1c487d2c2_3_2b4fea7b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_a941ebecb6a441e187826da1c487d2c2_3_2b4fea7b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_a941ebecb6a441e187826da1c487d2c2_3_2b4fea7b_RxSignalBufferRouting] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_dcf5f5dfbfc44ee8a71982dfd4598bc5_6_2b4fea7b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_dcf5f5dfbfc44ee8a71982dfd4598bc5_6_2b4fea7b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_dcf5f5dfbfc44ee8a71982dfd4598bc5_6_2b4fea7b_RxSignalBufferRouting] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/sn_55e086fa3cb3405c9e0849033f661450_11_389ce921618246489b7062f81bb683c4_4_e39ca898, /ActiveEcuC/Com/ComConfig/sn_55e086fa3cb3405c9e0849033f661450_11_389ce921618246489b7062f81bb683c4_4_e39ca898_RxSignalBufferRouting] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_3ff1e0a352104d0a9c0d95219caf3334_3_aae17425] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_3ff1e0a352104d0a9c0d95219caf3334_3_aae17425_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_3ff1e0a352104d0a9c0d95219caf3334_3_aae17425_RxSignalBufferRouting] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_1d92c110be454e9fa86cf52886346abe_6_676acd3b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_1d92c110be454e9fa86cf52886346abe_6_676acd3b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_1d92c110be454e9fa86cf52886346abe_6_676acd3b_RxSignalBufferRouting] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_4b53f7b0fac04e8faf5f3bd3a6602934_8_676acd3b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_4b53f7b0fac04e8faf5f3bd3a6602934_8_676acd3b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_4b53f7b0fac04e8faf5f3bd3a6602934_8_676acd3b_RxSignalBufferRouting] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/sn_809234ffb6e24e4eb85479b73d250d21_49_761b4cd9ec7e47aeb030258f54c21bfc_46_434514f6_In, /ActiveEcuC/Com/ComConfig/sn_809234ffb6e24e4eb85479b73d250d21_49_761b4cd9ec7e47aeb030258f54c21bfc_46_434514f6_In_RxSignalBufferRouting] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_c6825405b1e44ee0b8f81e84185f7380_5_8650906f] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_c6825405b1e44ee0b8f81e84185f7380_5_8650906f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_c6825405b1e44ee0b8f81e84185f7380_5_8650906f_RxSignalBufferRouting] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_4a3b2166543f48339c6f727a404b1680_7_0136c679] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_4a3b2166543f48339c6f727a404b1680_7_0136c679_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_4a3b2166543f48339c6f727a404b1680_7_0136c679_RxSignalBufferRouting] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_96e79e323c194994bc5c88fd2c606a13_8_0136c679] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_96e79e323c194994bc5c88fd2c606a13_8_0136c679_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_96e79e323c194994bc5c88fd2c606a13_8_0136c679_RxSignalBufferRouting] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_cc92814877d54dd6ae1dd209c4865a32_8_0136c679] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_cc92814877d54dd6ae1dd209c4865a32_8_0136c679_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_cc92814877d54dd6ae1dd209c4865a32_8_0136c679_RxSignalBufferRouting] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_f56acda22c2442ff85a725fcb0ae86c5_7_0136c679] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_f56acda22c2442ff85a725fcb0ae86c5_7_0136c679_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_f56acda22c2442ff85a725fcb0ae86c5_7_0136c679_RxSignalBufferRouting] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_2ba2c3f5c45f4aa083a493868834ad5f_3_b1b7a1e4] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_2ba2c3f5c45f4aa083a493868834ad5f_3_b1b7a1e4_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_2ba2c3f5c45f4aa083a493868834ad5f_3_b1b7a1e4_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt32
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt32
  \brief  Rx Signal and Group Signal Buffer. (UINT32)
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxSigBufferUInt32Type, COM_VAR_NOINIT) Com_RxSigBufferUInt32[16];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_32_63_48f5d03e] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_32_63_48f5d03e_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_32_63_48f5d03e_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_12_31_fbd12829] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_12_31_fbd12829_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_12_31_fbd12829_RxSignalBufferRouting] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_36_63_fbd12829] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_36_63_fbd12829_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_36_63_fbd12829_RxSignalBufferRouting] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_32_51_b1b7a1e4] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_32_51_b1b7a1e4_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_32_51_b1b7a1e4_RxSignalBufferRouting] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/sn_209e4b614ee044c4bbf1020e8ad2a6e0_10_d2a8dd49e0f74a499b91350a40cf3a4b_5_605eb7ca, /ActiveEcuC/Com/ComConfig/sn_209e4b614ee044c4bbf1020e8ad2a6e0_10_d2a8dd49e0f74a499b91350a40cf3a4b_5_605eb7ca_RxSignalBufferRouting] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_2ff2dc8921534b0db2b87c288a2967c1_2_fb35a62b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_2ff2dc8921534b0db2b87c288a2967c1_2_fb35a62b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_2ff2dc8921534b0db2b87c288a2967c1_2_fb35a62b_RxSignalBufferRouting] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_c199b38f0c704ce58dde1ab6957e021b_2_fb35a62b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_c199b38f0c704ce58dde1ab6957e021b_2_fb35a62b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_c199b38f0c704ce58dde1ab6957e021b_2_fb35a62b_RxSignalBufferRouting] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/sn_acb3c9a426bf4887ba724efd428ad5a4_3_ad2096213c0c47a78c10b4a8c5667464_7_7e6a2fc7, /ActiveEcuC/Com/ComConfig/sn_acb3c9a426bf4887ba724efd428ad5a4_3_ad2096213c0c47a78c10b4a8c5667464_7_7e6a2fc7_RxSignalBufferRouting] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_5b1908a90ce1499db5d60fe77e5bdbfc_10_aa0b865f] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_5b1908a90ce1499db5d60fe77e5bdbfc_10_aa0b865f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_5b1908a90ce1499db5d60fe77e5bdbfc_10_aa0b865f_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt64
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt64
  \brief  Rx Signal and Group Signal Buffer. (UINT64)
*/ 
#define COM_START_SEC_VAR_NOINIT_64BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxSigBufferUInt64Type, COM_VAR_NOINIT) Com_RxSigBufferUInt64[2];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_FAHRGESTELLNUMMER_grpMap_facbc46e/sn_ff5ad01b69a64f2fa3482d8ab369f18a_3_40470204da694c16804ac00662f4d060_1_8382b89a] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_FAHRGESTELLNUMMER_grpMap_facbc46e/sn_ff5ad01b69a64f2fa3482d8ab369f18a_3_40470204da694c16804ac00662f4d060_1_8382b89a_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_FAHRGESTELLNUMMER_grpMap_facbc46e/sn_ff5ad01b69a64f2fa3482d8ab369f18a_3_40470204da694c16804ac00662f4d060_1_8382b89a_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_64BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferUInt8
  \brief  Rx Signal and Group Signal Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxSigBufferUInt8Type, COM_VAR_NOINIT) Com_RxSigBufferUInt8[153];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/ACLNY_MASSCNTR_dummy_12_15_676acd3b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/ACLNY_MASSCNTR_dummy_12_15_676acd3b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/ACLNY_MASSCNTR_dummy_12_15_676acd3b_RxSignalBufferRouting] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_ID2_434514f6_In, /ActiveEcuC/Com/ComConfig/ANFRAGE_ID2_434514f6_In_RxSignalBufferRouting] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/AVL_RPM_WHL_dummy_12_15_0136c679] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/AVL_RPM_WHL_dummy_12_15_0136c679_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/AVL_RPM_WHL_dummy_12_15_0136c679_RxSignalBufferRouting] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/CON_VEH_dummy_56_63_aa0b865f] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/CON_VEH_dummy_56_63_aa0b865f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/CON_VEH_dummy_56_63_aa0b865f_RxSignalBufferRouting] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/ENERG_DGR_DRDY_dummy_12_15_323657ec] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/ENERG_DGR_DRDY_dummy_12_15_323657ec_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/ENERG_DGR_DRDY_dummy_12_15_323657ec_RxSignalBufferRouting] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_28_31_48f5d03e] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_28_31_48f5d03e_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_28_31_48f5d03e_RxSignalBufferRouting] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/SECU_RESP_ID2_a6936a2f, /ActiveEcuC/Com/ComConfig/SECU_RESP_ID2_a6936a2f_RxSignalBufferRouting] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/TAR_QTA_STRMOM_DV_dummy_12_15_425260ef] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/TAR_QTA_STRMOM_DV_dummy_12_15_425260ef_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/TAR_QTA_STRMOM_DV_dummy_12_15_425260ef_RxSignalBufferRouting] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_12_15_b1b7a1e4] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_12_15_b1b7a1e4_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_12_15_b1b7a1e4_RxSignalBufferRouting] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/VYAW_VEH_dummy_12_15_2b4fea7b] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/VYAW_VEH_dummy_12_15_2b4fea7b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/VYAW_VEH_dummy_12_15_2b4fea7b_RxSignalBufferRouting] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/V_VEH_dummy_39_39_8650906f] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/V_VEH_dummy_39_39_8650906f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/V_VEH_dummy_39_39_8650906f_RxSignalBufferRouting] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_0d32674ea9b948a48e2f9146dc8d0383_3_425260ef] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_0d32674ea9b948a48e2f9146dc8d0383_3_425260ef_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_0d32674ea9b948a48e2f9146dc8d0383_3_425260ef_RxSignalBufferRouting] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_2c4be44656a74ad1973ec6f292be1b63_2_425260ef] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_2c4be44656a74ad1973ec6f292be1b63_2_425260ef_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_2c4be44656a74ad1973ec6f292be1b63_2_425260ef_RxSignalBufferRouting] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_4f1cb301ca9544d4a46d651e9536efd1_4_425260ef] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_4f1cb301ca9544d4a46d651e9536efd1_4_425260ef_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_4f1cb301ca9544d4a46d651e9536efd1_4_425260ef_RxSignalBufferRouting] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_01dc732302854f9daf379339aec3bf41_4_425260ef] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_01dc732302854f9daf379339aec3bf41_4_425260ef_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_01dc732302854f9daf379339aec3bf41_4_425260ef_RxSignalBufferRouting] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_70d4f068b0c04cd9a2e782d5ca0eb678_1_425260ef] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_70d4f068b0c04cd9a2e782d5ca0eb678_1_425260ef_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_70d4f068b0c04cd9a2e782d5ca0eb678_1_425260ef_RxSignalBufferRouting] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_197556b4d9a045cb9282d0bc6431da4b_2_425260ef] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_197556b4d9a045cb9282d0bc6431da4b_2_425260ef_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_197556b4d9a045cb9282d0bc6431da4b_2_425260ef_RxSignalBufferRouting] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_b7dbfdc1e82d4733afb19fcf9e269188_4_425260ef] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_b7dbfdc1e82d4733afb19fcf9e269188_4_425260ef_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_b7dbfdc1e82d4733afb19fcf9e269188_4_425260ef_RxSignalBufferRouting] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_c094059b7c4b4be182a54415fff82701_5_425260ef] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_c094059b7c4b4be182a54415fff82701_5_425260ef_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_c094059b7c4b4be182a54415fff82701_5_425260ef_RxSignalBufferRouting] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_9c391600986c4bfcac5985aa50535648_4_36f7a929, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_9c391600986c4bfcac5985aa50535648_4_36f7a929_RxSignalBufferRouting] */
  /*    37 */  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_19b3ebba571d40978c473fbc372b3866_1_36f7a929, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_19b3ebba571d40978c473fbc372b3866_1_36f7a929_RxSignalBufferRouting] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_663c7f2797d74e12bbabeb2d22f7ba12_3_36f7a929, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_663c7f2797d74e12bbabeb2d22f7ba12_3_36f7a929_RxSignalBufferRouting] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_42056696541e44238d7385d322aa3305_4_36f7a929, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_42056696541e44238d7385d322aa3305_4_36f7a929_RxSignalBufferRouting] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_a49f1a757dbb42f99b42ad072723479a_2_36f7a929, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_a49f1a757dbb42f99b42ad072723479a_2_36f7a929_RxSignalBufferRouting] */
  /*    41 */  /* [/ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_fb20730d9415410f9e3bc21bb71c92b8_2_36f7a929, /ActiveEcuC/Com/ComConfig/sn_6e55c14d93c64aaa86e33b57aac2ae43_9_fb20730d9415410f9e3bc21bb71c92b8_2_36f7a929_RxSignalBufferRouting] */
  /*    42 */  /* [/ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_21fe3f3f6c7244818f57f1c3c8c46f0f_1_262fad9b, /ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_21fe3f3f6c7244818f57f1c3c8c46f0f_1_262fad9b_RxSignalBufferRouting] */
  /*    43 */  /* [/ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_84e2267531a54593b0ba6603319c899d_1_262fad9b, /ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_84e2267531a54593b0ba6603319c899d_1_262fad9b_RxSignalBufferRouting] */
  /*    44 */  /* [/ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_c8ce6b50abf248f0b72cde93f56ad0ff_1_262fad9b, /ActiveEcuC/Com/ComConfig/sn_8e1fc510f7a3427998068160382540c0_4_c8ce6b50abf248f0b72cde93f56ad0ff_1_262fad9b_RxSignalBufferRouting] */
  /*    45 */  /* [/ActiveEcuC/Com/ComConfig/sn_04b89dc3c26d4ca08465c4eec950ef56_8_1ef5db97b1344b9b93faeb7438eb9f92_3_3bc7fd4a, /ActiveEcuC/Com/ComConfig/sn_04b89dc3c26d4ca08465c4eec950ef56_8_1ef5db97b1344b9b93faeb7438eb9f92_3_3bc7fd4a_RxSignalBufferRouting] */
  /*    46 */  /* [/ActiveEcuC/Com/ComConfig/sn_04b89dc3c26d4ca08465c4eec950ef56_8_5c4106f5d9894a4e97dd9baa72070138_2_3bc7fd4a, /ActiveEcuC/Com/ComConfig/sn_04b89dc3c26d4ca08465c4eec950ef56_8_5c4106f5d9894a4e97dd9baa72070138_2_3bc7fd4a_RxSignalBufferRouting] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_29337f740ab54247baf7c3db99524333_14_2b4fea7b] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_29337f740ab54247baf7c3db99524333_14_2b4fea7b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_29337f740ab54247baf7c3db99524333_14_2b4fea7b_RxSignalBufferRouting] */
  /*    49 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_ad0347b6319e42198d41356e86be4f37_1_2b4fea7b] */
  /* Index        Referable Keys  */
  /*    50 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_ad0347b6319e42198d41356e86be4f37_1_2b4fea7b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_ad0347b6319e42198d41356e86be4f37_1_2b4fea7b_RxSignalBufferRouting] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_f9901bb3bb2044b6b25a6dfbc223991d_2_2b4fea7b] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_f9901bb3bb2044b6b25a6dfbc223991d_2_2b4fea7b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_f9901bb3bb2044b6b25a6dfbc223991d_2_2b4fea7b_RxSignalBufferRouting] */
  /*    53 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_4b239780c76c4895af8a924c1735888d_1_323657ec] */
  /*    54 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_4b239780c76c4895af8a924c1735888d_1_323657ec_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_4b239780c76c4895af8a924c1735888d_1_323657ec_RxSignalBufferRouting] */
  /*    55 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_14e56c6abcd843b5a26d720ba0d8db8b_2_323657ec] */
  /*    56 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_14e56c6abcd843b5a26d720ba0d8db8b_2_323657ec_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_14e56c6abcd843b5a26d720ba0d8db8b_2_323657ec_RxSignalBufferRouting] */
  /*    57 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_44fe0b2f15ac4ee1815b4114ef80ab03_3_323657ec] */
  /*    58 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_44fe0b2f15ac4ee1815b4114ef80ab03_3_323657ec_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_44fe0b2f15ac4ee1815b4114ef80ab03_3_323657ec_RxSignalBufferRouting] */
  /*    59 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_80b961ffa4074a35943c73f682505d16_1_323657ec] */
  /*    60 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_80b961ffa4074a35943c73f682505d16_1_323657ec_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_80b961ffa4074a35943c73f682505d16_1_323657ec_RxSignalBufferRouting] */
  /*    61 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_549b4cfdad08471bb65ffaa1f7e128c8_4_323657ec] */
  /*    62 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_549b4cfdad08471bb65ffaa1f7e128c8_4_323657ec_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_549b4cfdad08471bb65ffaa1f7e128c8_4_323657ec_RxSignalBufferRouting] */
  /*    63 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_713c359a278f4f88a03967667e018042_5_323657ec] */
  /*    64 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_713c359a278f4f88a03967667e018042_5_323657ec_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_713c359a278f4f88a03967667e018042_5_323657ec_RxSignalBufferRouting] */
  /*    65 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_432289a519914516a899afcf71d1d116_5_323657ec] */
  /*    66 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_432289a519914516a899afcf71d1d116_5_323657ec_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_432289a519914516a899afcf71d1d116_5_323657ec_RxSignalBufferRouting] */
  /*    67 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_bdb3f81fb35a4393983b8eef64f811fa_4_323657ec] */
  /*    68 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_bdb3f81fb35a4393983b8eef64f811fa_4_323657ec_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_bdb3f81fb35a4393983b8eef64f811fa_4_323657ec_RxSignalBufferRouting] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_cb39eb125cc14ed0af249d5d67f8bd8b_2_323657ec] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_cb39eb125cc14ed0af249d5d67f8bd8b_2_323657ec_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_cb39eb125cc14ed0af249d5d67f8bd8b_2_323657ec_RxSignalBufferRouting] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/sn_47c848be64324d52af177d4eda36b369_12_27e33d21d6a8482f85f2064fac78c9e8_4_8f561bce, /ActiveEcuC/Com/ComConfig/sn_47c848be64324d52af177d4eda36b369_12_27e33d21d6a8482f85f2064fac78c9e8_4_8f561bce_RxSignalBufferRouting] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/sn_47c848be64324d52af177d4eda36b369_12_d340d69f4388438e9ec7442ceae02261_3_8f561bce, /ActiveEcuC/Com/ComConfig/sn_47c848be64324d52af177d4eda36b369_12_d340d69f4388438e9ec7442ceae02261_3_8f561bce_RxSignalBufferRouting] */
  /*    73 */  /* [/ActiveEcuC/Com/ComConfig/sn_085b67cff4b142a59fb46d892b9938f0_15_91a4644db3794ecd81aa7b3ba03f0ae0_3_6c696df6, /ActiveEcuC/Com/ComConfig/sn_085b67cff4b142a59fb46d892b9938f0_15_91a4644db3794ecd81aa7b3ba03f0ae0_3_6c696df6_RxSignalBufferRouting] */
  /*    74 */  /* [/ActiveEcuC/Com/ComConfig/sn_085b67cff4b142a59fb46d892b9938f0_15_fdd79fd1376744b592ab1dd909dcc64c_5_6c696df6, /ActiveEcuC/Com/ComConfig/sn_085b67cff4b142a59fb46d892b9938f0_15_fdd79fd1376744b592ab1dd909dcc64c_5_6c696df6_RxSignalBufferRouting] */
  /*    75 */  /* [/ActiveEcuC/Com/ComConfig/sn_677e18af96434b57a7947ca5849af5e4_4_db6644741d2e4213ad1bbd931a41dee0_3_a1887d97, /ActiveEcuC/Com/ComConfig/sn_677e18af96434b57a7947ca5849af5e4_4_db6644741d2e4213ad1bbd931a41dee0_3_a1887d97_RxSignalBufferRouting] */
  /*    76 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_2fc2cc0e152644629cc3240b5c954053_8_aae17425] */
  /*    77 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_2fc2cc0e152644629cc3240b5c954053_8_aae17425_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_2fc2cc0e152644629cc3240b5c954053_8_aae17425_RxSignalBufferRouting] */
  /*    78 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_4f6b0f607df24896b0faa952446b326c_3_aae17425] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_4f6b0f607df24896b0faa952446b326c_3_aae17425_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_4f6b0f607df24896b0faa952446b326c_3_aae17425_RxSignalBufferRouting] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_9f5b4c46afdb4c73b63aa906d0ef32e2_2_aae17425] */
  /*    81 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_9f5b4c46afdb4c73b63aa906d0ef32e2_2_aae17425_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_9f5b4c46afdb4c73b63aa906d0ef32e2_2_aae17425_RxSignalBufferRouting] */
  /*    82 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_05a1cc95f1f243009d0e0e5041123079_3_aae17425] */
  /*    83 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_05a1cc95f1f243009d0e0e5041123079_3_aae17425_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_05a1cc95f1f243009d0e0e5041123079_3_aae17425_RxSignalBufferRouting] */
  /*    84 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_4fe42e10027d41f4938110561ac34b34_1_48f5d03e] */
  /*    85 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_4fe42e10027d41f4938110561ac34b34_1_48f5d03e_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_4fe42e10027d41f4938110561ac34b34_1_48f5d03e_RxSignalBufferRouting] */
  /*    86 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_6c68bd74160c499e80ce3b99e28d446f_2_48f5d03e] */
  /*    87 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_6c68bd74160c499e80ce3b99e28d446f_2_48f5d03e_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_6c68bd74160c499e80ce3b99e28d446f_2_48f5d03e_RxSignalBufferRouting] */
  /*    88 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_711dcfdb594d48dea88be956bcd8940b_1_48f5d03e] */
  /*    89 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_711dcfdb594d48dea88be956bcd8940b_1_48f5d03e_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_711dcfdb594d48dea88be956bcd8940b_1_48f5d03e_RxSignalBufferRouting] */
  /*    90 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_a72bbe97541440a48948afb1eb76d645_1_48f5d03e] */
  /*    91 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_a72bbe97541440a48948afb1eb76d645_1_48f5d03e_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_a72bbe97541440a48948afb1eb76d645_1_48f5d03e_RxSignalBufferRouting] */
  /*    92 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_c59bf536b4cc4ad8bd11209a76829f85_1_48f5d03e] */
  /*    93 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_c59bf536b4cc4ad8bd11209a76829f85_1_48f5d03e_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_c59bf536b4cc4ad8bd11209a76829f85_1_48f5d03e_RxSignalBufferRouting] */
  /*    94 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_9a19746025ce47f3b7cd9c9e81e8631b_6_fb35a62b] */
  /*    95 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_9a19746025ce47f3b7cd9c9e81e8631b_6_fb35a62b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_9a19746025ce47f3b7cd9c9e81e8631b_6_fb35a62b_RxSignalBufferRouting] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_85d7b190f15d4a06b4b7635543b8f0b4_1_fbd12829] */
  /*    97 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_85d7b190f15d4a06b4b7635543b8f0b4_1_fbd12829_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_85d7b190f15d4a06b4b7635543b8f0b4_1_fbd12829_RxSignalBufferRouting] */
  /*    98 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_301b3a8e3bed4861b26f50db718b7694_2_fbd12829] */
  /*    99 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_301b3a8e3bed4861b26f50db718b7694_2_fbd12829_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_301b3a8e3bed4861b26f50db718b7694_2_fbd12829_RxSignalBufferRouting] */
  /* Index        Referable Keys  */
  /*   100 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_807fb1a14891422faa61d2a17c3da182_2_fbd12829] */
  /*   101 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_807fb1a14891422faa61d2a17c3da182_2_fbd12829_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_807fb1a14891422faa61d2a17c3da182_2_fbd12829_RxSignalBufferRouting] */
  /*   102 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_3cec4cbf6b9349a88cfd5b60e201d60d_1_676acd3b] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_3cec4cbf6b9349a88cfd5b60e201d60d_1_676acd3b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_3cec4cbf6b9349a88cfd5b60e201d60d_1_676acd3b_RxSignalBufferRouting] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_d9ef5705d16b4542a9b87a1f657a1821_13_676acd3b] */
  /*   105 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_d9ef5705d16b4542a9b87a1f657a1821_13_676acd3b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_d9ef5705d16b4542a9b87a1f657a1821_13_676acd3b_RxSignalBufferRouting] */
  /*   106 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_ec8233ebea8b4ff38f6cf06a75f47ec9_2_676acd3b] */
  /*   107 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_ec8233ebea8b4ff38f6cf06a75f47ec9_2_676acd3b_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_ec8233ebea8b4ff38f6cf06a75f47ec9_2_676acd3b_RxSignalBufferRouting] */
  /*   108 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0adb5aa0864a48ecbd0facf7a8348e78_9_8650906f] */
  /*   109 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0adb5aa0864a48ecbd0facf7a8348e78_9_8650906f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0adb5aa0864a48ecbd0facf7a8348e78_9_8650906f_RxSignalBufferRouting] */
  /*   110 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0e547cbdd62a48f49df4be80e94fa743_11_8650906f] */
  /*   111 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0e547cbdd62a48f49df4be80e94fa743_11_8650906f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0e547cbdd62a48f49df4be80e94fa743_11_8650906f_RxSignalBufferRouting] */
  /*   112 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_10a739af18c04017a5fa1d5deaaa5b11_2_8650906f] */
  /*   113 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_10a739af18c04017a5fa1d5deaaa5b11_2_8650906f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_10a739af18c04017a5fa1d5deaaa5b11_2_8650906f_RxSignalBufferRouting] */
  /*   114 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_60da722cb98148d7ac583057f3e43e4e_1_8650906f] */
  /*   115 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_60da722cb98148d7ac583057f3e43e4e_1_8650906f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_60da722cb98148d7ac583057f3e43e4e_1_8650906f_RxSignalBufferRouting] */
  /*   116 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_405a168a7cd7415d97d9faebd997c5ce_2_8650906f] */
  /*   117 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_405a168a7cd7415d97d9faebd997c5ce_2_8650906f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_405a168a7cd7415d97d9faebd997c5ce_2_8650906f_RxSignalBufferRouting] */
  /*   118 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_0caaaf0e787848339bc25a94575449c2_13_0136c679] */
  /*   119 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_0caaaf0e787848339bc25a94575449c2_13_0136c679_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_0caaaf0e787848339bc25a94575449c2_13_0136c679_RxSignalBufferRouting] */
  /*   120 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_7ba9ac40e06b4b4cb875d606bdea3bf4_14_0136c679] */
  /*   121 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_7ba9ac40e06b4b4cb875d606bdea3bf4_14_0136c679_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_7ba9ac40e06b4b4cb875d606bdea3bf4_14_0136c679_RxSignalBufferRouting] */
  /*   122 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_689ab022c9664232a25b9bf47fac730d_1_0136c679] */
  /*   123 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_689ab022c9664232a25b9bf47fac730d_1_0136c679_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_689ab022c9664232a25b9bf47fac730d_1_0136c679_RxSignalBufferRouting] */
  /*   124 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_768ce7ec1493408a84f5de8246b34d32_13_0136c679] */
  /*   125 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_768ce7ec1493408a84f5de8246b34d32_13_0136c679_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_768ce7ec1493408a84f5de8246b34d32_13_0136c679_RxSignalBufferRouting] */
  /*   126 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_77005174aa4742b0a646ec42e5086ea4_14_0136c679] */
  /*   127 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_77005174aa4742b0a646ec42e5086ea4_14_0136c679_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_77005174aa4742b0a646ec42e5086ea4_14_0136c679_RxSignalBufferRouting] */
  /*   128 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_a501b58ff3634c35a48eb475f1576ef4_2_0136c679] */
  /*   129 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_a501b58ff3634c35a48eb475f1576ef4_2_0136c679_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_a501b58ff3634c35a48eb475f1576ef4_2_0136c679_RxSignalBufferRouting] */
  /*   130 */  /* [/ActiveEcuC/Com/ComConfig/sn_d0ea1fc2c1ca4e2295bae82b1e156e9a_18_710f3e866b434077b7dd882156cb74d0_10_231d7192, /ActiveEcuC/Com/ComConfig/sn_d0ea1fc2c1ca4e2295bae82b1e156e9a_18_710f3e866b434077b7dd882156cb74d0_10_231d7192_RxSignalBufferRouting] */
  /*   131 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_3c6da90ea4cd420aa202db115effcb23_1_b1b7a1e4] */
  /*   132 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_3c6da90ea4cd420aa202db115effcb23_1_b1b7a1e4_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_3c6da90ea4cd420aa202db115effcb23_1_b1b7a1e4_RxSignalBufferRouting] */
  /*   133 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_6cf29af14ea3476d8815dad896433c2d_1_b1b7a1e4] */
  /*   134 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_6cf29af14ea3476d8815dad896433c2d_1_b1b7a1e4_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_6cf29af14ea3476d8815dad896433c2d_1_b1b7a1e4_RxSignalBufferRouting] */
  /*   135 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_77c76ee3a9664c3c8c1378b7670411bc_4_b1b7a1e4] */
  /*   136 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_77c76ee3a9664c3c8c1378b7670411bc_4_b1b7a1e4_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_77c76ee3a9664c3c8c1378b7670411bc_4_b1b7a1e4_RxSignalBufferRouting] */
  /*   137 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_ab42396d28584920a6849c6bc0a7cc61_3_b1b7a1e4] */
  /*   138 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_ab42396d28584920a6849c6bc0a7cc61_3_b1b7a1e4_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_ab42396d28584920a6849c6bc0a7cc61_3_b1b7a1e4_RxSignalBufferRouting] */
  /*   139 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_f16d3d92b66746088f0af6e7df5b55bc_1_b1b7a1e4] */
  /*   140 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_f16d3d92b66746088f0af6e7df5b55bc_1_b1b7a1e4_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_f16d3d92b66746088f0af6e7df5b55bc_1_b1b7a1e4_RxSignalBufferRouting] */
  /*   141 */  /* [/ActiveEcuC/Com/ComConfig/sn_d8833aa6063240d791b5384f59f75d9a_13_35c5d363e5eb40db9e554c7d4cab4463_5_afa1da25, /ActiveEcuC/Com/ComConfig/sn_d8833aa6063240d791b5384f59f75d9a_13_35c5d363e5eb40db9e554c7d4cab4463_5_afa1da25_RxSignalBufferRouting] */
  /*   142 */  /* [/ActiveEcuC/Com/ComConfig/sn_eb2aaf9fde954786857e30879fbebab8_4_32a695e8944f440980b86e5c6a1148d5_1_e1b92573, /ActiveEcuC/Com/ComConfig/sn_eb2aaf9fde954786857e30879fbebab8_4_32a695e8944f440980b86e5c6a1148d5_1_e1b92573_RxSignalBufferRouting] */
  /*   143 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_3e3eaebd055944cc9a1ff983552ec9bf_2_aa0b865f] */
  /*   144 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_3e3eaebd055944cc9a1ff983552ec9bf_2_aa0b865f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_3e3eaebd055944cc9a1ff983552ec9bf_2_aa0b865f_RxSignalBufferRouting] */
  /*   145 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_27cab225247945149cedbf8a6572a041_6_aa0b865f] */
  /*   146 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_27cab225247945149cedbf8a6572a041_6_aa0b865f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_27cab225247945149cedbf8a6572a041_6_aa0b865f_RxSignalBufferRouting] */
  /*   147 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_31158b9d716b4ee985e36b830c254e3a_6_aa0b865f] */
  /*   148 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_31158b9d716b4ee985e36b830c254e3a_6_aa0b865f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_31158b9d716b4ee985e36b830c254e3a_6_aa0b865f_RxSignalBufferRouting] */
  /*   149 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_eaad471b16e343ebb9a64a56b77d99cf_3_aa0b865f] */
  /* Index        Referable Keys  */
  /*   150 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_eaad471b16e343ebb9a64a56b77d99cf_3_aa0b865f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_eaad471b16e343ebb9a64a56b77d99cf_3_aa0b865f_RxSignalBufferRouting] */
  /*   151 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_fea9eeb6b9064310b5e2c102c7429d64_2_aa0b865f] */
  /*   152 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_fea9eeb6b9064310b5e2c102c7429d64_2_aa0b865f_RxGroupSignalShadowBuffer, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_fea9eeb6b9064310b5e2c102c7429d64_2_aa0b865f_RxSignalBufferRouting] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_SigGrpEventFlag
**********************************************************************************************************************/
/** 
  \var    Com_SigGrpEventFlag
  \brief  Flag is set if a group signal write access caused a triggered event.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_SigGrpEventFlagType, COM_VAR_NOINIT) Com_SigGrpEventFlag[9];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxBuffer
  \brief  Temporary buffer for Rx UINT8_N and UINT8_DYN signals.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TmpRxBufferType, COM_VAR_NOINIT) Com_TmpRxBuffer[8];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferArrayBased
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferArrayBased
  \brief  Temporary Rx Group Signal Shadow Buffer. (UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TmpRxShdBufferArrayBasedUType, COM_VAR_NOINIT) Com_TmpRxShdBufferArrayBased;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_0e9104a324b24ea4ab0595d4878193dc_1_cbcf7330] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b1a3e7f0af954749a8dd6e6cd1539759_1_cbcf7330] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_b7c79d0102c449d0aed961fad16e1b7c_1_cbcf7330] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_a9cb3e40f2dc48a7b222fabc1b1c23d7_1_cbcf7330] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_6456fd4fa0c84cd99253c9be9203970d_4_cbcf7330] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_7b4a826f73e44b58ab36a6e9a35d27ee_1_cbcf7330] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_FAHRGESTELLNUMMER_grpMap_77f31243/sn_9007d271e9154737bbd9f3c54ab3098b_12_eb6a3d2fe3114adda5fddf46f965e4e9_1_cbcf7330] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt16
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt16
  \brief  Temporary Rx Group Signal Shadow Buffer. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TmpRxShdBufferUInt16Type, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt16[4];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_4b53f7b0fac04e8faf5f3bd3a6602934_8_676acd3b, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_cc92814877d54dd6ae1dd209c4865a32_8_0136c679, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_3ff1e0a352104d0a9c0d95219caf3334_3_aae17425, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_f6eac96cf628429bb0c9b3d36d80d166_3_425260ef, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_2ba2c3f5c45f4aa083a493868834ad5f_3_b1b7a1e4, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_dcf5f5dfbfc44ee8a71982dfd4598bc5_6_2b4fea7b, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_c6825405b1e44ee0b8f81e84185f7380_5_8650906f] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_1d92c110be454e9fa86cf52886346abe_6_676acd3b, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_96e79e323c194994bc5c88fd2c606a13_8_0136c679, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_a941ebecb6a441e187826da1c487d2c2_3_2b4fea7b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_f56acda22c2442ff85a725fcb0ae86c5_7_0136c679] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_4a3b2166543f48339c6f727a404b1680_7_0136c679] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt32
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt32
  \brief  Temporary Rx Group Signal Shadow Buffer. (UINT32)
*/ 
#define COM_START_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TmpRxShdBufferUInt32Type, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt32[2];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_5b1908a90ce1499db5d60fe77e5bdbfc_10_aa0b865f, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_32_63_48f5d03e, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_2ff2dc8921534b0db2b87c288a2967c1_2_fb35a62b, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_12_31_fbd12829, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_32_51_b1b7a1e4] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_c199b38f0c704ce58dde1ab6957e021b_2_fb35a62b, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/TAR_ESTP_VIRT_FTAX_dummy_36_63_fbd12829] */

#define COM_STOP_SEC_VAR_NOINIT_32BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt64
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt64
  \brief  Temporary Rx Group Signal Shadow Buffer. (UINT64)
*/ 
#define COM_START_SEC_VAR_NOINIT_64BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TmpRxShdBufferUInt64UType, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt64;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_FAHRGESTELLNUMMER_grpMap_facbc46e/sn_ff5ad01b69a64f2fa3482d8ab369f18a_3_40470204da694c16804ac00662f4d060_1_8382b89a] */

#define COM_STOP_SEC_VAR_NOINIT_64BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TmpRxShdBufferUInt8
**********************************************************************************************************************/
/** 
  \var    Com_TmpRxShdBufferUInt8
  \brief  Temporary Rx Group Signal Shadow Buffer. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TmpRxShdBufferUInt8Type, COM_VAR_NOINIT) Com_TmpRxShdBufferUInt8[10];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/ACLNY_MASSCNTR_dummy_12_15_676acd3b, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_a501b58ff3634c35a48eb475f1576ef4_2_0136c679, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_27cab225247945149cedbf8a6572a041_6_aa0b865f, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_549b4cfdad08471bb65ffaa1f7e128c8_4_323657ec, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/ENSU_SFY_dummy_28_31_48f5d03e, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_2fc2cc0e152644629cc3240b5c954053_8_aae17425, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_RESP_grpMap_a6936a2f/sn_7524fb1868df47f692f20496abf88623_7_9a19746025ce47f3b7cd9c9e81e8631b_6_fb35a62b, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_807fb1a14891422faa61d2a17c3da182_2_fbd12829, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_4f1cb301ca9544d4a46d651e9536efd1_4_425260ef, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_3c6da90ea4cd420aa202db115effcb23_1_b1b7a1e4, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/VYAW_VEH_dummy_12_15_2b4fea7b, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_405a168a7cd7415d97d9faebd997c5ce_2_8650906f] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_d9ef5705d16b4542a9b87a1f657a1821_13_676acd3b, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/AVL_RPM_WHL_dummy_12_15_0136c679, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_eaad471b16e343ebb9a64a56b77d99cf_3_aa0b865f, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_bdb3f81fb35a4393983b8eef64f811fa_4_323657ec, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_c59bf536b4cc4ad8bd11209a76829f85_1_48f5d03e, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_4f6b0f607df24896b0faa952446b326c_3_aae17425, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_85d7b190f15d4a06b4b7635543b8f0b4_1_fbd12829, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_01dc732302854f9daf379339aec3bf41_4_425260ef, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_f16d3d92b66746088f0af6e7df5b55bc_1_b1b7a1e4, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_ad0347b6319e42198d41356e86be4f37_1_2b4fea7b, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0e547cbdd62a48f49df4be80e94fa743_11_8650906f] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_ec8233ebea8b4ff38f6cf06a75f47ec9_2_676acd3b, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_0caaaf0e787848339bc25a94575449c2_13_0136c679, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/CON_VEH_dummy_56_63_aa0b865f, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/ENERG_DGR_DRDY_dummy_12_15_323657ec, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_4fe42e10027d41f4938110561ac34b34_1_48f5d03e, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_9f5b4c46afdb4c73b63aa906d0ef32e2_2_aae17425, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_ESTP_VIRT_FTAX_grpMap_37ba0a72/sn_12963b5f55914150b9f8aacada47bf44_5_301b3a8e3bed4861b26f50db718b7694_2_fbd12829, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_b7dbfdc1e82d4733afb19fcf9e269188_4_425260ef, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/TAR_STMOM_DV_ACT_dummy_12_15_b1b7a1e4, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_29337f740ab54247baf7c3db99524333_14_2b4fea7b, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_60da722cb98148d7ac583057f3e43e4e_1_8650906f] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ACLNY_MASSCNTR_grpMap_809f87ed/sn_060886cf9e88403f9df14c319aa0ae95_20_3cec4cbf6b9349a88cfd5b60e201d60d_1_676acd3b, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_77005174aa4742b0a646ec42e5086ea4_14_0136c679, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_fea9eeb6b9064310b5e2c102c7429d64_2_aa0b865f, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_cb39eb125cc14ed0af249d5d67f8bd8b_2_323657ec, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_6c68bd74160c499e80ce3b99e28d446f_2_48f5d03e, /ActiveEcuC/Com/ComConfig/e2eGrp_OFFS_QUAD_EPS_grpMap_432fe468/sn_2538d099b88d4657ae03c10c9544a047_14_05a1cc95f1f243009d0e0e5041123079_3_aae17425, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_197556b4d9a045cb9282d0bc6431da4b_2_425260ef, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_ab42396d28584920a6849c6bc0a7cc61_3_b1b7a1e4, /ActiveEcuC/Com/ComConfig/e2eGrp_VYAW_VEH_grpMap_72ad5356/sn_27f7c756a0e24349b8e230b415458184_21_f9901bb3bb2044b6b25a6dfbc223991d_2_2b4fea7b, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_10a739af18c04017a5fa1d5deaaa5b11_2_8650906f] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_768ce7ec1493408a84f5de8246b34d32_13_0136c679, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_31158b9d716b4ee985e36b830c254e3a_6_aa0b865f, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_14e56c6abcd843b5a26d720ba0d8db8b_2_323657ec, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_a72bbe97541440a48948afb1eb76d645_1_48f5d03e, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_0d32674ea9b948a48e2f9146dc8d0383_3_425260ef, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_6cf29af14ea3476d8815dad896433c2d_1_b1b7a1e4, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/V_VEH_dummy_39_39_8650906f] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_689ab022c9664232a25b9bf47fac730d_1_0136c679, /ActiveEcuC/Com/ComConfig/e2eGrp_CON_VEH_grpMap_125c48d9/sn_f39dc9b4f18c4462a3ca3222d270f882_11_3e3eaebd055944cc9a1ff983552ec9bf_2_aa0b865f, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_713c359a278f4f88a03967667e018042_5_323657ec, /ActiveEcuC/Com/ComConfig/e2eGrp_ENSU_SFY_grpMap_516886f4/sn_4145eaff72594a8e9989935517b189e9_2_711dcfdb594d48dea88be956bcd8940b_1_48f5d03e, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_2c4be44656a74ad1973ec6f292be1b63_2_425260ef, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_STMOM_DV_ACT_grpMap_b5764fca/sn_d81fd7307a29409f9d9a2c110d5f1a3d_9_77c76ee3a9664c3c8c1378b7670411bc_4_b1b7a1e4, /ActiveEcuC/Com/ComConfig/e2eGrp_V_VEH_grpMap_6a5236f2/sn_af83ce37179a45aca7ac57646532416b_18_0adb5aa0864a48ecbd0facf7a8348e78_9_8650906f] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_RPM_WHL_grpMap_9ee47a3e/sn_ca307c7178fd4cb8b1f0845b9598b7e4_18_7ba9ac40e06b4b4cb875d606bdea3bf4_14_0136c679, /ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_432289a519914516a899afcf71d1d116_5_323657ec, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_70d4f068b0c04cd9a2e782d5ca0eb678_1_425260ef] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_80b961ffa4074a35943c73f682505d16_1_323657ec, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/TAR_QTA_STRMOM_DV_dummy_12_15_425260ef] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_44fe0b2f15ac4ee1815b4114ef80ab03_3_323657ec, /ActiveEcuC/Com/ComConfig/e2eGrp_TAR_QTA_STRMOM_DV_grpMap_47595eaf/sn_2b4b9cfb3a644a13aeec78e06779be78_9_c094059b7c4b4be182a54415fff82701_5_425260ef] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ENERG_DGR_DRDY_grpMap_f9f50c8f/sn_39c3f0eb640a4f78a081a30d189b0df4_8_4b239780c76c4895af8a924c1735888d_1_323657ec] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TransmitRequestType, COM_VAR_NOINIT) Com_TransmitRequest[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxBuffer
  \brief  Shared uint8 buffer for Tx I-PDUs and ComSignalGroup shadow buffer.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxBufferType, COM_VAR_NOINIT) Com_TxBuffer[273];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/ANFRAGE_ID2_434514f6_Out] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/sn_809234ffb6e24e4eb85479b73d250d21_49_761b4cd9ec7e47aeb030258f54c21bfc_46_434514f6_Out] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/sn_809234ffb6e24e4eb85479b73d250d21_49_761b4cd9ec7e47aeb030258f54c21bfc_46_434514f6_Out] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3SigGrpInTxIPDU] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3SigGrpInTxIPDU] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3SigGrpInTxIPDU] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3SigGrpInTxIPDU] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3SigGrpInTxIPDU] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacSigGrpInTxIPDU] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacSigGrpInTxIPDU] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacSigGrpInTxIPDU] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacSigGrpInTxIPDU] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacSigGrpInTxIPDU] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacSigGrpInTxIPDU] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacSigGrpInTxIPDU] */
  /*    20 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaacSigGrpInTxIPDU] */
  /*    21 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fbSigGrpInTxIPDU] */
  /*    22 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fbSigGrpInTxIPDU] */
  /*    23 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fbSigGrpInTxIPDU] */
  /*    24 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fbSigGrpInTxIPDU] */
  /*    25 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_CHOV_DBG_MOD_EPS_1182661c] */
  /*    26 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/sn_03a68de7c576470bbe5c65893688a981_2_1d95be4f9b5642d8ad66a452046dc075_2_1182661c] */
  /*    27 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    28 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    29 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    30 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    31 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    32 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    33 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    34 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    35 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    36 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    37 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    38 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    39 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    40 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    41 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    42 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    43 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    44 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    45 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    46 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    47 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    48 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    49 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /* Index        Referable Keys  */
  /*    50 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    51 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    52 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    53 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    54 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    55 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    56 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    57 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    58 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    59 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    60 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    61 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    62 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    63 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    64 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    65 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    66 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    67 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    68 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    69 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    70 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    71 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    72 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    73 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    74 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    75 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    76 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    77 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    78 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    79 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    80 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    81 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    82 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def] */
  /*    83 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_CHOV_DBG_MOD_EPS_8a0e8110] */
  /*    84 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/sn_1d8c8b7c4f314df494349db3e54a099c_3_0751acece3ed45e28561953fa2cf0d8a_2_8a0e8110] */
  /*    85 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    86 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    87 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    88 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    89 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    90 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    91 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    92 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    93 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    94 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    95 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    96 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    97 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    98 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*    99 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /* Index        Referable Keys  */
  /*   100 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   101 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   102 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   103 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   104 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   105 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   106 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   107 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   108 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   109 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   110 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   111 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   112 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   113 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   114 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   115 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   116 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   117 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   118 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   119 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   120 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   121 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   122 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   123 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   124 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   125 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   126 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   127 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   128 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   129 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   130 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   131 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   132 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   133 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   134 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   135 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   136 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   137 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   138 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   139 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   140 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def] */
  /*   141 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33SigGrpInTxIPDU] */
  /*   142 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33SigGrpInTxIPDU] */
  /*   143 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33SigGrpInTxIPDU] */
  /*   144 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33SigGrpInTxIPDU] */
  /*   145 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33SigGrpInTxIPDU] */
  /*   146 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   147 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   148 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   149 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /* Index        Referable Keys  */
  /*   150 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   151 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   152 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   153 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   154 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   155 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   156 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   157 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   158 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   159 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   160 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   161 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7SigGrpInTxIPDU] */
  /*   162 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   163 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   164 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/sn_0c0ed9ed2c324b648cea19ccfdcf4017_2_e716efb46a29429ebef5b7d5737ff0c0_2_3b1b8e1f] */
  /*   165 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/sn_0c0ed9ed2c324b648cea19ccfdcf4017_2_e716efb46a29429ebef5b7d5737ff0c0_2_3b1b8e1f] */
  /*   166 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   167 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   168 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   169 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def] */
  /*   170 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_ID2_f361cf54] */
  /*   171 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_c06c9dcca09a433db7ff26cc5c43b9ad_5_f361cf54] */
  /*   172 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_5c6ec9e5beec46c09ef86c7818a9cbf6_3_f361cf54, /ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_44efad82ff2147cdb10b6291c8cbea3f_3_f361cf54] */
  /*   173 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/sn_2d91f731ef854e209f0a9d17b0596648_8_6c1ea235872142cfbe3d872d17caa2ae_3_f361cf54] */
  /*   174 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   175 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   176 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   177 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def] */
  /*   178 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/SECU_CHAL_ID2_2a1be51a] */
  /*   179 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aSigGrpInTxIPDU] */
  /*   180 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aSigGrpInTxIPDU] */
  /*   181 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aSigGrpInTxIPDU] */
  /*   182 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aSigGrpInTxIPDU] */
  /*   183 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aSigGrpInTxIPDU] */
  /*   184 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aSigGrpInTxIPDU] */
  /*   185 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51aSigGrpInTxIPDU] */
  /*   186 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5SigGrpInTxIPDU] */
  /*   187 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5SigGrpInTxIPDU] */
  /*   188 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5SigGrpInTxIPDU] */
  /*   189 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5SigGrpInTxIPDU] */
  /*   190 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5SigGrpInTxIPDU] */
  /*   191 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5SigGrpInTxIPDU] */
  /*   192 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5SigGrpInTxIPDU] */
  /*   193 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5SigGrpInTxIPDU] */
  /*   194 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4SigGrpInTxIPDU] */
  /*   195 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4SigGrpInTxIPDU] */
  /*   196 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4SigGrpInTxIPDU] */
  /*   197 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4SigGrpInTxIPDU] */
  /*   198 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4SigGrpInTxIPDU] */
  /*   199 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004SigGrpInTxIPDU] */
  /* Index        Referable Keys  */
  /*   200 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004SigGrpInTxIPDU] */
  /*   201 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004SigGrpInTxIPDU] */
  /*   202 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004SigGrpInTxIPDU] */
  /*   203 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004SigGrpInTxIPDU] */
  /*   204 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004SigGrpInTxIPDU] */
  /*   205 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004SigGrpInTxIPDU] */
  /*   206 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004SigGrpInTxIPDU] */
  /*   207 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_3c4236203a2749bcbb2aed6382953164_2_9b458801] */
  /*   208 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/AVL_FORC_GRD_dummy_12_15_9b458801, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_b8a0fa3e4cf64a1ab5fc745baa78e585_2_9b458801] */
  /*   209 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_2ff2d3a958b44ed3bf7b9b844a310c8a_5_9b458801] */
  /*   210 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_2ff2d3a958b44ed3bf7b9b844a310c8a_5_9b458801, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_c18c5dd3b39e4668a8f82c337e371f6f_6_9b458801] */
  /*   211 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_FORC_GRD_grpMap_4612dae3/sn_09e4bde6148d45f99746b23c44ef9b67_14_197c766bc806474bab8b0adb6b45f8af_5_9b458801] */
  /*   212 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_c5c4fc12c19449dca31982abd0f99bbb_2_828cc38e] */
  /*   213 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_bc95b5ba2eae48218eb9877ea08559a2_2_828cc38e, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_2de5d882792e4739a95de3e1c7b8ccad_10_828cc38e] */
  /*   214 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_accb41f44683494d8bbe73645993b2b8_9_828cc38e] */
  /*   215 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_accb41f44683494d8bbe73645993b2b8_9_828cc38e] */
  /*   216 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_4fc18042a3ed4ed3935aa3b3038bf544_5_828cc38e] */
  /*   217 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_4fc18042a3ed4ed3935aa3b3038bf544_5_828cc38e] */
  /*   218 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_99fd6a6f88664f46a45dae1eac3e4bb9_5_828cc38e] */
  /*   219 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_99fd6a6f88664f46a45dae1eac3e4bb9_5_828cc38e, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_7184c8825a7a44dd9a0b76c751498b8c_6_828cc38e, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_PO_EPS_grpMap_0e78aaac/sn_e0f63d36315c4773ba837e73d6faaadd_15_7f90cd4f694b47ba8781390120dcbc0a_3_828cc38e] */
  /*   220 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_7c6cdad248d54f7cbe6f830bb0fcf68d_3_d3120462] */
  /*   221 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/AVL_STMOM_DV_ACT_dummy_12_15_d3120462, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_aaebf3e364fa4b0da7de252527de9449_3_d3120462] */
  /*   222 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_f65da775f9284544b6d9e8ec17402794_5_d3120462] */
  /*   223 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_5d9506af077e4dd09e190f5d484d7305_9_d3120462, /ActiveEcuC/Com/ComConfig/e2eGrp_AVL_STMOM_DV_ACT_grpMap_5b4255fb/sn_1edf400c871b41dab29d318a6fc3ec64_13_f65da775f9284544b6d9e8ec17402794_5_d3120462] */
  /*   224 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_dbd0108a94f54fd190c31739eefdc4ca_1_4c5ede1d] */
  /*   225 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_9051b95afb204671aff526a500db42b7_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_03f1be64196c4e708bef357e7333ae22_1_4c5ede1d] */
  /*   226 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3366770fef6a4623aee662f9f9c4c3c2_2_4c5ede1d] */
  /*   227 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3366770fef6a4623aee662f9f9c4c3c2_2_4c5ede1d] */
  /*   228 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_d9a5c75d3be94893aa6dba0ca6c42810_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3a077345b6d34d0386d92666711189a4_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_7f3167446bf24e01ba2f382d6ae4ce13_2_4c5ede1d] */
  /*   229 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_9fa32cadfaed4d9d8f9ace3694433c0d_2_52335c52] */
  /*   230 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_11ec244fdbd64e57b309defc17cb2624_2_52335c52, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_12_15_52335c52] */
  /*   231 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_16_47_52335c52] */
  /*   232 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_16_47_52335c52] */
  /*   233 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_16_47_52335c52] */
  /*   234 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_16_47_52335c52] */
  /*   235 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_f726c286e26b4226a9ab68faaaa0268d_4_52335c52] */
  /*   236 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_9d997c8fa7874a73b4c82edfa1c465ee_1_52335c52, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/sn_f1c2ea448b5742e6a930415b5321c120_9_6d1119ef97ee4f5b8a1d4c39b8ee4a4b_2_52335c52] */
  /*   237 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_64_95_52335c52] */
  /*   238 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_64_95_52335c52] */
  /*   239 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_64_95_52335c52] */
  /*   240 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_64_95_52335c52] */
  /*   241 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_96_127_52335c52] */
  /*   242 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_96_127_52335c52] */
  /*   243 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_96_127_52335c52] */
  /*   244 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7, /ActiveEcuC/Com/ComConfig/e2eGrp_DT_EST_grpMap_002dadf7/DT_EST_dummy_96_127_52335c52] */
  /*   245 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_4b5d00d65aef4a05b869d24584abb8c4_1_2f274d97] */
  /*   246 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_754efa353cf340fcb5ebf6a252677ba9_1_2f274d97, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_296a2827f3ac4a3cb35d9abfed66395a_2_2f274d97] */
  /*   247 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/ST_EST_dummy_16_23_2f274d97] */
  /*   248 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_cab340b35df54638b5e0037eab93598a_8_2f274d97] */
  /*   249 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4, /ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_8fcd25d281bf43f7836594d2433bdf22_11_2f274d97] */
  /* Index        Referable Keys  */
  /*   250 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_222481f9d4fd4d26baca286fbee3bf96_3_e213077e] */
  /*   251 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_9a6a7a66988546f2a7d23dc165ed871a_3_e213077e, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_222481f9d4fd4d26baca286fbee3bf96_3_e213077e, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/SU_EPS_dummy_14_19_e213077e] */
  /*   252 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/SU_EPS_dummy_14_19_e213077e, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/SU_EPS_dummy_20_51_e213077e] */
  /*   253 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/SU_EPS_dummy_20_51_e213077e] */
  /*   254 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/SU_EPS_dummy_20_51_e213077e] */
  /*   255 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/SU_EPS_dummy_20_51_e213077e] */
  /*   256 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_386a693e6a3e40caa81d96e20ae491f1_1_e213077e, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/SU_EPS_dummy_20_51_e213077e] */
  /*   257 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004, /ActiveEcuC/Com/ComConfig/e2eGrp_SU_EPS_grpMap_96d77004/sn_ecced8165aea4835a2a17dc224344598_4_64d37827c64341ab93bbfe7c6e1f91a0_1_e213077e] */
  /*   258 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_4e0d346165d34c65a7be51a612d26692_5_333ec78a] */
  /*   259 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_7502fc35ca3a49b8aec4c3e56a6cec59_2_333ec78a] */
  /*   260 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_1bc03a0847a24be4b9edb43144f45870_1_333ec78a] */
  /*   261 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_1bc03a0847a24be4b9edb43144f45870_1_333ec78a] */
  /*   262 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_1bc03a0847a24be4b9edb43144f45870_1_333ec78a] */
  /*   263 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_1bc03a0847a24be4b9edb43144f45870_1_333ec78a] */
  /*   264 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a, /ActiveEcuC/Com/ComConfig/signalGrp_SECU_CHAL_grpMap_2a1be51a/sn_25b112f92e6a4ac19aba3c85121b531b_6_1bc03a0847a24be4b9edb43144f45870_1_333ec78a] */
  /*   265 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_82ff67f6b9334982a57ad12edde7bc16_2_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_b829418ae8544fc7a495975b5e034ae1_1_0f13a3f0] */
  /*   266 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_82ff67f6b9334982a57ad12edde7bc16_2_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_7607fe5e22044ec8b524b790117d1144_2_0f13a3f0] */
  /*   267 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e4264132e02e49db9ec8e2776b5fcdc1_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_3d6bee37a7644cd595111347b1ab806d_3_0f13a3f0] */
  /*   268 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e84002878a3d4f3a8c86fbd58c15f81a_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_3d6bee37a7644cd595111347b1ab806d_3_0f13a3f0] */
  /*   269 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e7a993bdb77e422285430840510dadf4_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e84002878a3d4f3a8c86fbd58c15f81a_3_0f13a3f0] */
  /*   270 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_bc5db64191594d34b6307cf590b732aa_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_426c8a72d1bb4a46ad11235b0f09bdc6_3_0f13a3f0] */
  /*   271 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_a019edbda7904702959e9dc445570356_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_426c8a72d1bb4a46ad11235b0f09bdc6_3_0f13a3f0] */
  /*   272 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_a019edbda7904702959e9dc445570356_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_27f4ba17468e41e3b3968930b1409f81_3_0f13a3f0] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCycleCounterDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxCycleCounterDivisorCounterType, COM_VAR_NOINIT) Com_TxCycleCounterDivisorCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCyclicProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxCyclicProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxCyclicProcessingISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDeadlineMonitoringISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxDeadlineMonitoringISRLockCounterType, COM_VAR_NOINIT) Com_TxDeadlineMonitoringISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDlMonDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxDlMonDivisorCounterType, COM_VAR_NOINIT) Com_TxDlMonDivisorCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxFilterOldValueUInt16
**********************************************************************************************************************/
/** 
  \var    Com_TxFilterOldValueUInt16
  \brief  This buffer holds the old signal values for filter MASKED_NEW_DIFFERS_MASKED_OLD and for transfer property TRIGGERED_ON_CHANGE_* evaluation. (UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxFilterOldValueUInt16Type, COM_VAR_NOINIT) Com_TxFilterOldValueUInt16[3];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_03f1be64196c4e708bef357e7333ae22_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3366770fef6a4623aee662f9f9c4c3c2_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_dbd0108a94f54fd190c31739eefdc4ca_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxFilterOldValueUInt8
**********************************************************************************************************************/
/** 
  \var    Com_TxFilterOldValueUInt8
  \brief  This buffer holds the old signal values for filter MASKED_NEW_DIFFERS_MASKED_OLD and for transfer property TRIGGERED_ON_CHANGE_* evaluation. (BOOLEAN, UINT8)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxFilterOldValueUInt8Type, COM_VAR_NOINIT) Com_TxFilterOldValueUInt8[20];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_4b5d00d65aef4a05b869d24584abb8c4_1_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_8fcd25d281bf43f7836594d2433bdf22_11_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_296a2827f3ac4a3cb35d9abfed66395a_2_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_754efa353cf340fcb5ebf6a252677ba9_1_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_ST_EST_grpMap_1efe9fd4/sn_0d521c7c53964f869478fa5c12f4ec50_14_cab340b35df54638b5e0037eab93598a_8_2f274d97, /ActiveEcuC/Com/ComConfig/ST_EST_23008def] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_3a077345b6d34d0386d92666711189a4_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_7f3167446bf24e01ba2f382d6ae4ce13_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_9051b95afb204671aff526a500db42b7_1_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/e2eGrp_DISP_CC_EPS_grpMap_d85bde33/sn_39a2ac19c7164f0385b879ca14e85e7b_2_d9a5c75d3be94893aa6dba0ca6c42810_2_4c5ede1d, /ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_3d6bee37a7644cd595111347b1ab806d_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_27f4ba17468e41e3b3968930b1409f81_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_82ff67f6b9334982a57ad12edde7bc16_2_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_426c8a72d1bb4a46ad11235b0f09bdc6_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_7607fe5e22044ec8b524b790117d1144_2_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    14 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_a019edbda7904702959e9dc445570356_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    15 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_b829418ae8544fc7a495975b5e034ae1_1_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    16 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_bc5db64191594d34b6307cf590b732aa_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    17 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e7a993bdb77e422285430840510dadf4_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    18 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e4264132e02e49db9ec8e2776b5fcdc1_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */
  /*    19 */  /* [/ActiveEcuC/Com/ComConfig/signalGrp_ST_DIAG_OBD_3_DRDY_grpMap_2d32eef5/sn_95dff1578f214757b23c8394af12aa48_4_e84002878a3d4f3a8c86fbd58c15f81a_3_0f13a3f0, /ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxIPduGroupISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxIPduGroupISRLockCounterType, COM_VAR_NOINIT) Com_TxIPduGroupISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxProcessingISRLockCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxProcessingISRLockCounterType, COM_VAR_NOINIT) Com_TxProcessingISRLockCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length.
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_WaitingForConfirmation
**********************************************************************************************************************/
/** 
  \var    Com_WaitingForConfirmation
  \brief  Flag array used for Tx error notification handling.
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_WaitingForConfirmationType, COM_VAR_NOINIT) Com_WaitingForConfirmation[14];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/ANFRAGE_434514f6_Out, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup_7933cc8b] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/AVL_FORC_GRD_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/AVL_PO_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/AVL_STMOM_DV_ACT_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_BS_MOD_58_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/DBG_EPS_MOD_EXT_120_BYTE_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     6 */  /* [/ActiveEcuC/Com/ComConfig/DISP_CC_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     7 */  /* [/ActiveEcuC/Com/ComConfig/DT_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     8 */  /* [/ActiveEcuC/Com/ComConfig/ENGTORQ_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*     9 */  /* [/ActiveEcuC/Com/ComConfig/RQ_STG_EFAN_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    10 */  /* [/ActiveEcuC/Com/ComConfig/SECU_CHAL_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup3_7933cc8b] */
  /*    11 */  /* [/ActiveEcuC/Com/ComConfig/ST_DIAG_OBD_3_DRDY_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    12 */  /* [/ActiveEcuC/Com/ComConfig/ST_EST_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */
  /*    13 */  /* [/ActiveEcuC/Com/ComConfig/SU_EPS_23008def, /ActiveEcuC/Com/ComConfig/EPS_OUT_PduGroup2_7933cc8b] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
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
  END OF FILE: Com_Lcfg.c
**********************************************************************************************************************/

