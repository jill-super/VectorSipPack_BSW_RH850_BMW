/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  BMW_Application_Connector_Dummy.c
 *        Config:  EPS.dpa
 *     SW-C Type:  BMW_Application_Connector_Dummy
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <BMW_Application_Connector_Dummy>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * Dcm_NegativeResponseCodeType
 *   
 *
 * Dcm_OpStatusType
 *   
 *
 *
 * Mode Declaration Groups:
 * ========================
 * WdgM_Mode
 *   
 *
 *
 * Runnable Entities:
 * ==================
 * BMW_Vin_Rx_Wrapper
 *   
 *
 *********************************************************************************************************************/

#include "Rte_BMW_Application_Connector_Dummy.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_BMW_Application_Connector_Dummy.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void BMW_Application_Connector_Dummy_TestDefines(void);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * ALIV_CON_VEH: Integer in interval [0...255]
 * CON_VEH_dummy_56_63: Integer in interval [0...255]
 * CRC_CON_VEH: Integer in interval [0...255]
 * MILE_KM: Integer in interval [0...16777214]
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * CTR_BS_PRTNT: Enumeration of integer in interval [0...255] with enumerators
 *   CTR_BS_PRTNT_KeineKommunikation (0U)
 *   CTR_BS_PRTNT_Kom_Parken_BN_niO (1U)
 *   CTR_BS_PRTNT_Kom_Parken_BN_iO (2U)
 *   CTR_BS_PRTNT_Kom_Standfunktionen_Kunde_nicht_im_FZG (3U)
 *   CTR_BS_PRTNT_reserviert (4U)
 *   CTR_BS_PRTNT_Kom_Wohnen (5U)
 *   CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_6 (6U)
 *   CTR_BS_PRTNT_Kom_Pruefen_Analyse_Diagnose (7U)
 *   CTR_BS_PRTNT_Kom_Fahrbereitschaft_herstellen (8U)
 *   CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_9 (9U)
 *   CTR_BS_PRTNT_Kom_Fahren (10U)
 *   CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_11 (11U)
 *   CTR_BS_PRTNT_Kom_Fahrbereitschaft_beenden (12U)
 *   CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_13 (13U)
 *   CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_14 (14U)
 *   CTR_BS_PRTNT_Signal_unbefuellt (15U)
 * CTR_FKTN_PRTNT: Enumeration of integer in interval [0...4294967295] with enumerators
 *   FKTN_PRTNT_KonfigurationAus (0U)
 *   KonfigurationAus_BflMask 2147483649U (0b10000000000000000000000000000001)
 *   FKTN_PRTNT_KonfigurationEin (1U)
 *   KonfigurationEin_BflMask 2147483649U (0b10000000000000000000000000000001)
 *   FKTN_PRTNT_EthernetInfrastrukturAus (0U)
 *   EthernetInfrastrukturAus_BflMask 2147483650U (0b10000000000000000000000000000010)
 *   FKTN_PRTNT_EthernetInfrastrukturEin (2U)
 *   EthernetInfrastrukturEin_BflMask 2147483650U (0b10000000000000000000000000000010)
 *   FKTN_PRTNT_KlimabetriebAus (0U)
 *   KlimabetriebAus_BflMask 2147483904U (0b10000000000000000000000100000000)
 *   FKTN_PRTNT_KlimabetriebEin (256U)
 *   KlimabetriebEin_BflMask 2147483904U (0b10000000000000000000000100000000)
 *   FKTN_PRTNT_EntertainmentbetriebAus (0U)
 *   EntertainmentbetriebAus_BflMask 2147484160U (0b10000000000000000000001000000000)
 *   FKTN_PRTNT_EntertainmentbetriebEin (512U)
 *   EntertainmentbetriebEin_BflMask 2147484160U (0b10000000000000000000001000000000)
 *   FKTN_PRTNT_Externe_KommunikationAus (0U)
 *   Externe_KommunikationAus_BflMask 2147484672U (0b10000000000000000000010000000000)
 *   FKTN_PRTNT_Externe_KommunikationEin (1024U)
 *   Externe_KommunikationEin_BflMask 2147484672U (0b10000000000000000000010000000000)
 *   FKTN_PRTNT_Entertainmentbetrieb_Fond_aus (0U)
 *   Entertainmentbetrieb_Fond_aus_BflMask 2147485696U (0b10000000000000000000100000000000)
 *   FKTN_PRTNT_Entertainmentbetrieb_Fond_ein (2048U)
 *   Entertainmentbetrieb_Fond_ein_BflMask 2147485696U (0b10000000000000000000100000000000)
 *   FKTN_PRTNT_Assistenz_Parken_highAus (0U)
 *   Assistenz_Parken_highAus_BflMask 2147487744U (0b10000000000000000001000000000000)
 *   FKTN_PRTNT_Assistenz_Parken_highEin (4096U)
 *   Assistenz_Parken_highEin_BflMask 2147487744U (0b10000000000000000001000000000000)
 *   FKTN_PRTNT_LadenAus (0U)
 *   LadenAus_BflMask 2147516416U (0b10000000000000001000000000000000)
 *   FKTN_PRTNT_LadenEin (32768U)
 *   LadenEin_BflMask 2147516416U (0b10000000000000001000000000000000)
 *   FKTN_PRTNT_FahrzeugInfrastrukturAus (0U)
 *   FahrzeugInfrastrukturAus_BflMask 2147549184U (0b10000000000000010000000000000000)
 *   FKTN_PRTNT_FahrzeugInfrastrukturEin (65536U)
 *   FahrzeugInfrastrukturEin_BflMask 2147549184U (0b10000000000000010000000000000000)
 *   FKTN_PRTNT_Licht_aus (0U)
 *   Licht_aus_BflMask 2148007936U (0b10000000000010000000000000000000)
 *   FKTN_PRTNT_Licht_ein (524288U)
 *   Licht_ein_BflMask 2148007936U (0b10000000000010000000000000000000)
 *   FKTN_PRTNT_Signal_unbefuellt (4294967295U)
 *   Signal_unbefuellt_BflMask 4294967295U (0b11111111111111111111111111111111)
 *   Signal_unbefuellt_BflPn 0
 *   Signal_unbefuellt_BflLn 32
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_E_POSITIVERESPONSE (0U)
 *   DCM_E_GENERALREJECT (16U)
 *   DCM_E_SERVICENOTSUPPORTED (17U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
 *   DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
 *   DCM_E_RESPONSETOOLONG (20U)
 *   DCM_E_BUSYREPEATREQUEST (33U)
 *   DCM_E_CONDITIONSNOTCORRECT (34U)
 *   DCM_E_REQUESTSEQUENCEERROR (36U)
 *   DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
 *   DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
 *   DCM_E_REQUESTOUTOFRANGE (49U)
 *   DCM_E_SECURITYACCESSDENIED (51U)
 *   DCM_E_INVALIDKEY (53U)
 *   DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
 *   DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
 *   DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
 *   DCM_E_TRANSFERDATASUSPENDED (113U)
 *   DCM_E_GENERALPROGRAMMINGFAILURE (114U)
 *   DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
 *   DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
 *   DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
 *   DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
 *   DCM_E_RPMTOOHIGH (129U)
 *   DCM_E_RPMTOOLOW (130U)
 *   DCM_E_ENGINEISRUNNING (131U)
 *   DCM_E_ENGINEISNOTRUNNING (132U)
 *   DCM_E_ENGINERUNTIMETOOLOW (133U)
 *   DCM_E_TEMPERATURETOOHIGH (134U)
 *   DCM_E_TEMPERATURETOOLOW (135U)
 *   DCM_E_VEHICLESPEEDTOOHIGH (136U)
 *   DCM_E_VEHICLESPEEDTOOLOW (137U)
 *   DCM_E_THROTTLE_PEDALTOOHIGH (138U)
 *   DCM_E_THROTTLE_PEDALTOOLOW (139U)
 *   DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
 *   DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
 *   DCM_E_BRAKESWITCH_NOTCLOSED (143U)
 *   DCM_E_SHIFTERLEVERNOTINPARK (144U)
 *   DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
 *   DCM_E_VOLTAGETOOHIGH (146U)
 *   DCM_E_VOLTAGETOOLOW (147U)
 *   DCM_E_VMSCNC_0 (240U)
 *   DCM_E_VMSCNC_1 (241U)
 *   DCM_E_VMSCNC_2 (242U)
 *   DCM_E_VMSCNC_3 (243U)
 *   DCM_E_VMSCNC_4 (244U)
 *   DCM_E_VMSCNC_5 (245U)
 *   DCM_E_VMSCNC_6 (246U)
 *   DCM_E_VMSCNC_7 (247U)
 *   DCM_E_VMSCNC_8 (248U)
 *   DCM_E_VMSCNC_9 (249U)
 *   DCM_E_VMSCNC_A (250U)
 *   DCM_E_VMSCNC_B (251U)
 *   DCM_E_VMSCNC_C (252U)
 *   DCM_E_VMSCNC_D (253U)
 *   DCM_E_VMSCNC_E (254U)
 * Dcm_OpStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DCM_INITIAL (0U)
 *   DCM_PENDING (1U)
 *   DCM_CANCEL (2U)
 *   DCM_FORCE_RCRRP_OK (3U)
 *   DCM_FORCE_RCRRP_NOT_OK (64U)
 * QU_ST_CON_VEH: Enumeration of integer in interval [0...255] with enumerators
 *   QU_ST_CON_VEH_SignalwertGueltig (2U)
 *   QU_ST_CON_VEH_SignalwertEingeschraenktGueltig (3U)
 *   QU_ST_CON_VEH_ReserviertFuerDieNichtUmgesetzteKennung_Fehler_ (6U)
 *   QU_ST_CON_VEH_Wert_nicht_verfuegbar (14U)
 *   QU_ST_CON_VEH_SignalUnbefuellt (15U)
 * ST_CON_VEH: Enumeration of integer in interval [0...255] with enumerators
 *   ST_CON_VEH_reserviert (0U)
 *   ST_CON_VEH_Parken_BN_niO (1U)
 *   ST_CON_VEH_Parken_BN_iO (2U)
 *   ST_CON_VEH_Standfunktionen_Kunde_nicht_im_FZG (3U)
 *   ST_CON_VEH_Wohnen (5U)
 *   ST_CON_VEH_Pruefen_Analyse_Diagnose (7U)
 *   ST_CON_VEH_Fahrbereitschaft_herstellen (8U)
 *   ST_CON_VEH_Fahren (10U)
 *   ST_CON_VEH_Fahrbereitschaft_beenden (12U)
 *   ST_CON_VEH_reserviert_bne_E673DEE4F91F432391662F6004C0175A_13 (13U)
 *   ST_CON_VEH_reserviert_bne_E673DEE4F91F432391662F6004C0175A_14 (14U)
 *   ST_CON_VEH_Signal_unbefuellt (15U)
 *
 * Array Types:
 * ============
 * DataArrayType_uint8_1: Array with 1 element(s) of type uint8
 * DataArrayType_uint8_3: Array with 3 element(s) of type uint8
 * Dcm_Data1ByteType: Array with 1 element(s) of type uint8
 * Dcm_Data3ByteType: Array with 3 element(s) of type uint8
 * Dcm_Data8192ByteType: Array with 8192 element(s) of type uint8
 * Dcm_Data8ByteType: Array with 8 element(s) of type uint8
 * NO_VECH_1: Array with 1 element(s) of type uint8
 * NO_VECH_2: Array with 1 element(s) of type uint8
 * NO_VECH_3: Array with 1 element(s) of type uint8
 * NO_VECH_4: Array with 1 element(s) of type uint8
 * NO_VECH_5: Array with 1 element(s) of type uint8
 * NO_VECH_6: Array with 1 element(s) of type uint8
 * NO_VECH_7: Array with 1 element(s) of type uint8
 *
 * Record Types:
 * =============
 * Vin_ComVinType: Record with elements
 *   Vin1 of type uint8
 *   Vin2 of type uint8
 *   Vin3 of type uint8
 *   Vin4 of type uint8
 *   Vin5 of type uint8
 *   Vin6 of type uint8
 *   Vin7 of type uint8
 * sigGroup_CON_VEH: Record with elements
 *   ST_CON_VEH of type ST_CON_VEH
 *   CTR_FKTN_PRTNT of type CTR_FKTN_PRTNT
 *   CRC_CON_VEH of type CRC_CON_VEH
 *   CON_VEH_dummy_56_63 of type CON_VEH_dummy_56_63
 *   CTR_BS_PRTNT of type CTR_BS_PRTNT
 *   ALIV_CON_VEH of type ALIV_CON_VEH
 *   QU_ST_CON_VEH of type QU_ST_CON_VEH
 *
 *********************************************************************************************************************/


#define BMW_Application_Connector_Dummy_START_SEC_CODE
#include "BMW_Application_Connector_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: BMW_Vin_Rx_Wrapper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BMW_Application_Connector_Dummy_CODE) BMW_Vin_Rx_Wrapper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BMW_Vin_Rx_Wrapper
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  NO_VECH_1 Read_NO_VECH_1_NO_VECH_1;
  NO_VECH_2 Read_NO_VECH_2_NO_VECH_2;
  NO_VECH_3 Read_NO_VECH_3_NO_VECH_3;
  NO_VECH_4 Read_NO_VECH_4_NO_VECH_4;
  NO_VECH_5 Read_NO_VECH_5_NO_VECH_5;
  NO_VECH_6 Read_NO_VECH_6_NO_VECH_6;
  NO_VECH_7 Read_NO_VECH_7_NO_VECH_7;

  Vin_ComVinType Write_ComVin_ComVin;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_1_NO_VECH_1(Read_NO_VECH_1_NO_VECH_1);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_2_NO_VECH_2(Read_NO_VECH_2_NO_VECH_2);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_3_NO_VECH_3(Read_NO_VECH_3_NO_VECH_3);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_4_NO_VECH_4(Read_NO_VECH_4_NO_VECH_4);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_5_NO_VECH_5(Read_NO_VECH_5_NO_VECH_5);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_6_NO_VECH_6(Read_NO_VECH_6_NO_VECH_6);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Read_NO_VECH_7_NO_VECH_7(Read_NO_VECH_7_NO_VECH_7);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  (void)memset(&Write_ComVin_ComVin, 0, sizeof(Write_ComVin_ComVin));
  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Write_ComVin_ComVin(&Write_ComVin_ComVin);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  BMW_Application_Connector_Dummy_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_DemDataElementClass_FUwBn_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_FUwBn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_DemDataElementClass_FUwBn_ReadData (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  sigGroup_CON_VEH Read_sigGroup_CON_VEH_sigGroup_CON_VEH;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Read_sigGroup_CON_VEH_sigGroup_CON_VEH(&Read_sigGroup_CON_VEH_sigGroup_CON_VEH);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_DemDataElementClass_FUwTn_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_FUwTn_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_DemDataElementClass_FUwTn_ReadData (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  sigGroup_CON_VEH Read_sigGroup_CON_VEH_sigGroup_CON_VEH;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Read_sigGroup_CON_VEH_sigGroup_CON_VEH(&Read_sigGroup_CON_VEH_sigGroup_CON_VEH);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_DemDataElementClass_KmStand_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) CSDataServices_DemDataElementClass_KmStand_ReadData(P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CSDataServices_DemDataElementClass_KmStand_ReadData (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  MILE_KM Read_MILE_KM_MILE_KM;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Read_MILE_KM_MILE_KM(&Read_MILE_KM_MILE_KM);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_1_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
 *     Argument Data: uint8* is of type Dcm_Data8ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_1_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_1_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_Data_DcmDspDid_SensorLesen_1_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_2_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
 *     Argument Data: uint8* is of type Dcm_Data8ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_2_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_2_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_Data_DcmDspDid_SensorLesen_2_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_3_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
 *     Argument Data: uint8* is of type Dcm_Data8ByteType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_DCM_E_PENDING
 *   RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_3_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_Data_DcmDspDid_SensorLesen_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_Data_DcmDspDid_SensorLesen_3_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_Data_DcmDspDid_SensorLesen_3_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_MileKmEeprom_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_DcmDspData_MileKmEeprom_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_MileKmEeprom_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_MileKmEeprom_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_MileKmEeprom_ReadData (returns application error)
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  MILE_KM Read_MILE_KM_MILE_KM;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_BMW_Application_Connector_Dummy_Rte_Read_MILE_KM_MILE_KM(&Read_MILE_KM_MILE_KM);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  return RTE_E_DataServices_DcmDspData_MileKmEeprom_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_Sekundaererfehlerspeicher_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_Sekundaererfehlerspeicher_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_DcmDspData_Sekundaererfehlerspeicher_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_SensorenAnzahlLesen_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_SensorenAnzahlLesen_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SensorenAnzahlLesen_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_SensorenAnzahlLesen_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_DcmDspData_SensorenAnzahlLesen_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) ErrorCode) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_SystemSupplierIdentifier_ConditionCheckRead (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_SystemSupplierIdentifier_ReadData_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, BMW_Application_Connector_Dummy_CODE) DataServices_DcmDspData_SystemSupplierIdentifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_BMW_APPLICATION_CONNECTOR_DUMMY_APPL_VAR) Data) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DataServices_DcmDspData_SystemSupplierIdentifier_ReadData (returns application error)
 *********************************************************************************************************************/

  return RTE_E_DataServices_DcmDspData_SystemSupplierIdentifier_E_NOT_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Dlog_FirstStart_Dummy_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, BMW_Application_Connector_Dummy_CODE) Dlog_FirstStart_Dummy(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dlog_FirstStart_Dummy
 *********************************************************************************************************************/

  Rte_ModeType_DlogFirstStartMDG DlogFirstStartMode_DlogFirstStartMode;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  DlogFirstStartMode_DlogFirstStartMode = TSC_BMW_Application_Connector_Dummy_Rte_Mode_DlogFirstStartMode_DlogFirstStartMode();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define BMW_Application_Connector_Dummy_STOP_SEC_CODE
#include "BMW_Application_Connector_Dummy_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void BMW_Application_Connector_Dummy_TestDefines(void)
{
  /* Primitive Types */

  MILE_KM Test_MILE_KM_IV_1 = InvalidValue_MILE_KM;

  /* Enumeration Data Types */

  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_1 = CTR_BS_PRTNT_KeineKommunikation;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_2 = CTR_BS_PRTNT_Kom_Parken_BN_niO;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_3 = CTR_BS_PRTNT_Kom_Parken_BN_iO;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_4 = CTR_BS_PRTNT_Kom_Standfunktionen_Kunde_nicht_im_FZG;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_5 = CTR_BS_PRTNT_reserviert;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_6 = CTR_BS_PRTNT_Kom_Wohnen;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_7 = CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_6;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_8 = CTR_BS_PRTNT_Kom_Pruefen_Analyse_Diagnose;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_9 = CTR_BS_PRTNT_Kom_Fahrbereitschaft_herstellen;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_10 = CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_9;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_11 = CTR_BS_PRTNT_Kom_Fahren;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_12 = CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_11;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_13 = CTR_BS_PRTNT_Kom_Fahrbereitschaft_beenden;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_14 = CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_13;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_15 = CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_14;
  CTR_BS_PRTNT Test_CTR_BS_PRTNT_V_16 = CTR_BS_PRTNT_Signal_unbefuellt;

  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_1 = FKTN_PRTNT_KonfigurationAus;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_1_BflMask = KonfigurationAus_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_2 = FKTN_PRTNT_KonfigurationEin;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_2_BflMask = KonfigurationEin_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_3 = FKTN_PRTNT_EthernetInfrastrukturAus;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_3_BflMask = EthernetInfrastrukturAus_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_4 = FKTN_PRTNT_EthernetInfrastrukturEin;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_4_BflMask = EthernetInfrastrukturEin_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_5 = FKTN_PRTNT_KlimabetriebAus;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_5_BflMask = KlimabetriebAus_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_6 = FKTN_PRTNT_KlimabetriebEin;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_6_BflMask = KlimabetriebEin_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_7 = FKTN_PRTNT_EntertainmentbetriebAus;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_7_BflMask = EntertainmentbetriebAus_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_8 = FKTN_PRTNT_EntertainmentbetriebEin;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_8_BflMask = EntertainmentbetriebEin_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_9 = FKTN_PRTNT_Externe_KommunikationAus;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_9_BflMask = Externe_KommunikationAus_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_10 = FKTN_PRTNT_Externe_KommunikationEin;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_10_BflMask = Externe_KommunikationEin_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_11 = FKTN_PRTNT_Entertainmentbetrieb_Fond_aus;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_11_BflMask = Entertainmentbetrieb_Fond_aus_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_12 = FKTN_PRTNT_Entertainmentbetrieb_Fond_ein;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_12_BflMask = Entertainmentbetrieb_Fond_ein_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_13 = FKTN_PRTNT_Assistenz_Parken_highAus;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_13_BflMask = Assistenz_Parken_highAus_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_14 = FKTN_PRTNT_Assistenz_Parken_highEin;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_14_BflMask = Assistenz_Parken_highEin_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_15 = FKTN_PRTNT_LadenAus;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_15_BflMask = LadenAus_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_16 = FKTN_PRTNT_LadenEin;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_16_BflMask = LadenEin_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_17 = FKTN_PRTNT_FahrzeugInfrastrukturAus;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_17_BflMask = FahrzeugInfrastrukturAus_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_18 = FKTN_PRTNT_FahrzeugInfrastrukturEin;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_18_BflMask = FahrzeugInfrastrukturEin_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_19 = FKTN_PRTNT_Licht_aus;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_19_BflMask = Licht_aus_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_20 = FKTN_PRTNT_Licht_ein;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_20_BflMask = Licht_ein_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_21 = FKTN_PRTNT_Signal_unbefuellt;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_21_BflMask = Signal_unbefuellt_BflMask;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_21_BflPn = Signal_unbefuellt_BflPn;
  CTR_FKTN_PRTNT Test_CTR_FKTN_PRTNT_V_21_BflLn = Signal_unbefuellt_BflLn;

  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_1 = DCM_E_POSITIVERESPONSE;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_2 = DCM_E_GENERALREJECT;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_3 = DCM_E_SERVICENOTSUPPORTED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_4 = DCM_E_SUBFUNCTIONNOTSUPPORTED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_5 = DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_6 = DCM_E_RESPONSETOOLONG;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_7 = DCM_E_BUSYREPEATREQUEST;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_8 = DCM_E_CONDITIONSNOTCORRECT;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_9 = DCM_E_REQUESTSEQUENCEERROR;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_10 = DCM_E_NORESPONSEFROMSUBNETCOMPONENT;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_11 = DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_12 = DCM_E_REQUESTOUTOFRANGE;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_13 = DCM_E_SECURITYACCESSDENIED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_14 = DCM_E_INVALIDKEY;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_15 = DCM_E_EXCEEDNUMBEROFATTEMPTS;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_16 = DCM_E_REQUIREDTIMEDELAYNOTEXPIRED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_17 = DCM_E_UPLOADDOWNLOADNOTACCEPTED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_18 = DCM_E_TRANSFERDATASUSPENDED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_19 = DCM_E_GENERALPROGRAMMINGFAILURE;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_20 = DCM_E_WRONGBLOCKSEQUENCECOUNTER;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_21 = DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_22 = DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_23 = DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_24 = DCM_E_RPMTOOHIGH;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_25 = DCM_E_RPMTOOLOW;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_26 = DCM_E_ENGINEISRUNNING;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_27 = DCM_E_ENGINEISNOTRUNNING;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_28 = DCM_E_ENGINERUNTIMETOOLOW;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_29 = DCM_E_TEMPERATURETOOHIGH;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_30 = DCM_E_TEMPERATURETOOLOW;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_31 = DCM_E_VEHICLESPEEDTOOHIGH;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_32 = DCM_E_VEHICLESPEEDTOOLOW;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_33 = DCM_E_THROTTLE_PEDALTOOHIGH;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_34 = DCM_E_THROTTLE_PEDALTOOLOW;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_35 = DCM_E_TRANSMISSIONRANGENOTINNEUTRAL;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_36 = DCM_E_TRANSMISSIONRANGENOTINGEAR;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_37 = DCM_E_BRAKESWITCH_NOTCLOSED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_38 = DCM_E_SHIFTERLEVERNOTINPARK;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_39 = DCM_E_TORQUECONVERTERCLUTCHLOCKED;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_40 = DCM_E_VOLTAGETOOHIGH;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_41 = DCM_E_VOLTAGETOOLOW;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_42 = DCM_E_VMSCNC_0;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_43 = DCM_E_VMSCNC_1;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_44 = DCM_E_VMSCNC_2;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_45 = DCM_E_VMSCNC_3;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_46 = DCM_E_VMSCNC_4;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_47 = DCM_E_VMSCNC_5;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_48 = DCM_E_VMSCNC_6;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_49 = DCM_E_VMSCNC_7;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_50 = DCM_E_VMSCNC_8;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_51 = DCM_E_VMSCNC_9;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_52 = DCM_E_VMSCNC_A;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_53 = DCM_E_VMSCNC_B;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_54 = DCM_E_VMSCNC_C;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_55 = DCM_E_VMSCNC_D;
  Dcm_NegativeResponseCodeType Test_Dcm_NegativeResponseCodeType_V_56 = DCM_E_VMSCNC_E;

  Dcm_OpStatusType Test_Dcm_OpStatusType_V_1 = DCM_INITIAL;
  Dcm_OpStatusType Test_Dcm_OpStatusType_V_2 = DCM_PENDING;
  Dcm_OpStatusType Test_Dcm_OpStatusType_V_3 = DCM_CANCEL;
  Dcm_OpStatusType Test_Dcm_OpStatusType_V_4 = DCM_FORCE_RCRRP_OK;
  Dcm_OpStatusType Test_Dcm_OpStatusType_V_5 = DCM_FORCE_RCRRP_NOT_OK;

  QU_ST_CON_VEH Test_QU_ST_CON_VEH_V_1 = QU_ST_CON_VEH_SignalwertGueltig;
  QU_ST_CON_VEH Test_QU_ST_CON_VEH_V_2 = QU_ST_CON_VEH_SignalwertEingeschraenktGueltig;
  QU_ST_CON_VEH Test_QU_ST_CON_VEH_V_3 = QU_ST_CON_VEH_ReserviertFuerDieNichtUmgesetzteKennung_Fehler_;
  QU_ST_CON_VEH Test_QU_ST_CON_VEH_V_4 = QU_ST_CON_VEH_Wert_nicht_verfuegbar;
  QU_ST_CON_VEH Test_QU_ST_CON_VEH_V_5 = QU_ST_CON_VEH_SignalUnbefuellt;

  ST_CON_VEH Test_ST_CON_VEH_V_1 = ST_CON_VEH_reserviert;
  ST_CON_VEH Test_ST_CON_VEH_V_2 = ST_CON_VEH_Parken_BN_niO;
  ST_CON_VEH Test_ST_CON_VEH_V_3 = ST_CON_VEH_Parken_BN_iO;
  ST_CON_VEH Test_ST_CON_VEH_V_4 = ST_CON_VEH_Standfunktionen_Kunde_nicht_im_FZG;
  ST_CON_VEH Test_ST_CON_VEH_V_5 = ST_CON_VEH_Wohnen;
  ST_CON_VEH Test_ST_CON_VEH_V_6 = ST_CON_VEH_Pruefen_Analyse_Diagnose;
  ST_CON_VEH Test_ST_CON_VEH_V_7 = ST_CON_VEH_Fahrbereitschaft_herstellen;
  ST_CON_VEH Test_ST_CON_VEH_V_8 = ST_CON_VEH_Fahren;
  ST_CON_VEH Test_ST_CON_VEH_V_9 = ST_CON_VEH_Fahrbereitschaft_beenden;
  ST_CON_VEH Test_ST_CON_VEH_V_10 = ST_CON_VEH_reserviert_bne_E673DEE4F91F432391662F6004C0175A_13;
  ST_CON_VEH Test_ST_CON_VEH_V_11 = ST_CON_VEH_reserviert_bne_E673DEE4F91F432391662F6004C0175A_14;
  ST_CON_VEH Test_ST_CON_VEH_V_12 = ST_CON_VEH_Signal_unbefuellt;

  /* Modes */

  uint8 Test_DlogFirstStartMDG_MV_1 = RTE_MODE_DlogFirstStartMDG_DLOG_FIRSTSTART;
  uint8 Test_DlogFirstStartMDG_MV_2 = RTE_MODE_DlogFirstStartMDG_DLOG_NORMALSTART;
  uint8 Test_DlogFirstStartMDG_MV_3 = RTE_MODE_DlogFirstStartMDG_DLOG_UNINIT;
  uint8 Test_DlogFirstStartMDG_TV = RTE_TRANSITION_DlogFirstStartMDG;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
