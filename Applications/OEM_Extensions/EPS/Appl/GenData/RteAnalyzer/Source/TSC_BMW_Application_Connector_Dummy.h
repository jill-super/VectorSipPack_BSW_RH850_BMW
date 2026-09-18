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
 *          File:  TSC_BMW_Application_Connector_Dummy.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_1_NO_VECH_1(uint8 *data);
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_2_NO_VECH_2(uint8 *data);
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_3_NO_VECH_3(uint8 *data);
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_4_NO_VECH_4(uint8 *data);
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_5_NO_VECH_5(uint8 *data);
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_6_NO_VECH_6(uint8 *data);
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_7_NO_VECH_7(uint8 *data);
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Read_sigGroup_CON_VEH_sigGroup_CON_VEH(sigGroup_CON_VEH *data);
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Read_sigGroup_CON_VEH_sigGroup_CON_VEH(sigGroup_CON_VEH *data);
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Read_MILE_KM_MILE_KM(MILE_KM *data);
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Read_MILE_KM_MILE_KM(MILE_KM *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_BMW_Application_Connector_Dummy_Rte_Write_ComVin_ComVin(const Vin_ComVinType *data);

/** Mode switches */
uint8 TSC_BMW_Application_Connector_Dummy_Rte_Mode_DlogFirstStartMode_DlogFirstStartMode(void);




