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
 *          File:  Rte_BMW_Application_Connector_Dummy_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <BMW_Application_Connector_Dummy>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BMW_APPLICATION_CONNECTOR_DUMMY_TYPE_H
# define _RTE_BMW_APPLICATION_CONNECTOR_DUMMY_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  define InvalidValue_MILE_KM (16777215U)

#  ifndef CTR_BS_PRTNT_KeineKommunikation
#   define CTR_BS_PRTNT_KeineKommunikation (0U)
#  endif

#  ifndef CTR_BS_PRTNT_Kom_Parken_BN_niO
#   define CTR_BS_PRTNT_Kom_Parken_BN_niO (1U)
#  endif

#  ifndef CTR_BS_PRTNT_Kom_Parken_BN_iO
#   define CTR_BS_PRTNT_Kom_Parken_BN_iO (2U)
#  endif

#  ifndef CTR_BS_PRTNT_Kom_Standfunktionen_Kunde_nicht_im_FZG
#   define CTR_BS_PRTNT_Kom_Standfunktionen_Kunde_nicht_im_FZG (3U)
#  endif

#  ifndef CTR_BS_PRTNT_reserviert
#   define CTR_BS_PRTNT_reserviert (4U)
#  endif

#  ifndef CTR_BS_PRTNT_Kom_Wohnen
#   define CTR_BS_PRTNT_Kom_Wohnen (5U)
#  endif

#  ifndef CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_6
#   define CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_6 (6U)
#  endif

#  ifndef CTR_BS_PRTNT_Kom_Pruefen_Analyse_Diagnose
#   define CTR_BS_PRTNT_Kom_Pruefen_Analyse_Diagnose (7U)
#  endif

#  ifndef CTR_BS_PRTNT_Kom_Fahrbereitschaft_herstellen
#   define CTR_BS_PRTNT_Kom_Fahrbereitschaft_herstellen (8U)
#  endif

#  ifndef CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_9
#   define CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_9 (9U)
#  endif

#  ifndef CTR_BS_PRTNT_Kom_Fahren
#   define CTR_BS_PRTNT_Kom_Fahren (10U)
#  endif

#  ifndef CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_11
#   define CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_11 (11U)
#  endif

#  ifndef CTR_BS_PRTNT_Kom_Fahrbereitschaft_beenden
#   define CTR_BS_PRTNT_Kom_Fahrbereitschaft_beenden (12U)
#  endif

#  ifndef CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_13
#   define CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_13 (13U)
#  endif

#  ifndef CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_14
#   define CTR_BS_PRTNT_reserviert_bne_95F305A59796464C872A83A9688DA49E_14 (14U)
#  endif

#  ifndef CTR_BS_PRTNT_Signal_unbefuellt
#   define CTR_BS_PRTNT_Signal_unbefuellt (15U)
#  endif

#  ifndef FKTN_PRTNT_KonfigurationAus
#   define FKTN_PRTNT_KonfigurationAus (0U)
#  endif

#  ifndef KonfigurationAus_BflMask
#   define KonfigurationAus_BflMask 2147483649U
#  endif

#  ifndef FKTN_PRTNT_KonfigurationEin
#   define FKTN_PRTNT_KonfigurationEin (1U)
#  endif

#  ifndef KonfigurationEin_BflMask
#   define KonfigurationEin_BflMask 2147483649U
#  endif

#  ifndef FKTN_PRTNT_EthernetInfrastrukturAus
#   define FKTN_PRTNT_EthernetInfrastrukturAus (0U)
#  endif

#  ifndef EthernetInfrastrukturAus_BflMask
#   define EthernetInfrastrukturAus_BflMask 2147483650U
#  endif

#  ifndef FKTN_PRTNT_EthernetInfrastrukturEin
#   define FKTN_PRTNT_EthernetInfrastrukturEin (2U)
#  endif

#  ifndef EthernetInfrastrukturEin_BflMask
#   define EthernetInfrastrukturEin_BflMask 2147483650U
#  endif

#  ifndef FKTN_PRTNT_KlimabetriebAus
#   define FKTN_PRTNT_KlimabetriebAus (0U)
#  endif

#  ifndef KlimabetriebAus_BflMask
#   define KlimabetriebAus_BflMask 2147483904U
#  endif

#  ifndef FKTN_PRTNT_KlimabetriebEin
#   define FKTN_PRTNT_KlimabetriebEin (256U)
#  endif

#  ifndef KlimabetriebEin_BflMask
#   define KlimabetriebEin_BflMask 2147483904U
#  endif

#  ifndef FKTN_PRTNT_EntertainmentbetriebAus
#   define FKTN_PRTNT_EntertainmentbetriebAus (0U)
#  endif

#  ifndef EntertainmentbetriebAus_BflMask
#   define EntertainmentbetriebAus_BflMask 2147484160U
#  endif

#  ifndef FKTN_PRTNT_EntertainmentbetriebEin
#   define FKTN_PRTNT_EntertainmentbetriebEin (512U)
#  endif

#  ifndef EntertainmentbetriebEin_BflMask
#   define EntertainmentbetriebEin_BflMask 2147484160U
#  endif

#  ifndef FKTN_PRTNT_Externe_KommunikationAus
#   define FKTN_PRTNT_Externe_KommunikationAus (0U)
#  endif

#  ifndef Externe_KommunikationAus_BflMask
#   define Externe_KommunikationAus_BflMask 2147484672U
#  endif

#  ifndef FKTN_PRTNT_Externe_KommunikationEin
#   define FKTN_PRTNT_Externe_KommunikationEin (1024U)
#  endif

#  ifndef Externe_KommunikationEin_BflMask
#   define Externe_KommunikationEin_BflMask 2147484672U
#  endif

#  ifndef FKTN_PRTNT_Entertainmentbetrieb_Fond_aus
#   define FKTN_PRTNT_Entertainmentbetrieb_Fond_aus (0U)
#  endif

#  ifndef Entertainmentbetrieb_Fond_aus_BflMask
#   define Entertainmentbetrieb_Fond_aus_BflMask 2147485696U
#  endif

#  ifndef FKTN_PRTNT_Entertainmentbetrieb_Fond_ein
#   define FKTN_PRTNT_Entertainmentbetrieb_Fond_ein (2048U)
#  endif

#  ifndef Entertainmentbetrieb_Fond_ein_BflMask
#   define Entertainmentbetrieb_Fond_ein_BflMask 2147485696U
#  endif

#  ifndef FKTN_PRTNT_Assistenz_Parken_highAus
#   define FKTN_PRTNT_Assistenz_Parken_highAus (0U)
#  endif

#  ifndef Assistenz_Parken_highAus_BflMask
#   define Assistenz_Parken_highAus_BflMask 2147487744U
#  endif

#  ifndef FKTN_PRTNT_Assistenz_Parken_highEin
#   define FKTN_PRTNT_Assistenz_Parken_highEin (4096U)
#  endif

#  ifndef Assistenz_Parken_highEin_BflMask
#   define Assistenz_Parken_highEin_BflMask 2147487744U
#  endif

#  ifndef FKTN_PRTNT_LadenAus
#   define FKTN_PRTNT_LadenAus (0U)
#  endif

#  ifndef LadenAus_BflMask
#   define LadenAus_BflMask 2147516416U
#  endif

#  ifndef FKTN_PRTNT_LadenEin
#   define FKTN_PRTNT_LadenEin (32768U)
#  endif

#  ifndef LadenEin_BflMask
#   define LadenEin_BflMask 2147516416U
#  endif

#  ifndef FKTN_PRTNT_FahrzeugInfrastrukturAus
#   define FKTN_PRTNT_FahrzeugInfrastrukturAus (0U)
#  endif

#  ifndef FahrzeugInfrastrukturAus_BflMask
#   define FahrzeugInfrastrukturAus_BflMask 2147549184U
#  endif

#  ifndef FKTN_PRTNT_FahrzeugInfrastrukturEin
#   define FKTN_PRTNT_FahrzeugInfrastrukturEin (65536U)
#  endif

#  ifndef FahrzeugInfrastrukturEin_BflMask
#   define FahrzeugInfrastrukturEin_BflMask 2147549184U
#  endif

#  ifndef FKTN_PRTNT_Licht_aus
#   define FKTN_PRTNT_Licht_aus (0U)
#  endif

#  ifndef Licht_aus_BflMask
#   define Licht_aus_BflMask 2148007936U
#  endif

#  ifndef FKTN_PRTNT_Licht_ein
#   define FKTN_PRTNT_Licht_ein (524288U)
#  endif

#  ifndef Licht_ein_BflMask
#   define Licht_ein_BflMask 2148007936U
#  endif

#  ifndef FKTN_PRTNT_Signal_unbefuellt
#   define FKTN_PRTNT_Signal_unbefuellt (4294967295U)
#  endif

#  ifndef Signal_unbefuellt_BflMask
#   define Signal_unbefuellt_BflMask 4294967295U
#  endif

#  ifndef Signal_unbefuellt_BflPn
#   define Signal_unbefuellt_BflPn 0U
#  endif

#  ifndef Signal_unbefuellt_BflLn
#   define Signal_unbefuellt_BflLn 32U
#  endif

#  ifndef DCM_E_POSITIVERESPONSE
#   define DCM_E_POSITIVERESPONSE (0U)
#  endif

#  ifndef DCM_E_GENERALREJECT
#   define DCM_E_GENERALREJECT (16U)
#  endif

#  ifndef DCM_E_SERVICENOTSUPPORTED
#   define DCM_E_SERVICENOTSUPPORTED (17U)
#  endif

#  ifndef DCM_E_SUBFUNCTIONNOTSUPPORTED
#   define DCM_E_SUBFUNCTIONNOTSUPPORTED (18U)
#  endif

#  ifndef DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT
#   define DCM_E_INCORRECTMESSAGELENGTHORINVALIDFORMAT (19U)
#  endif

#  ifndef DCM_E_RESPONSETOOLONG
#   define DCM_E_RESPONSETOOLONG (20U)
#  endif

#  ifndef DCM_E_BUSYREPEATREQUEST
#   define DCM_E_BUSYREPEATREQUEST (33U)
#  endif

#  ifndef DCM_E_CONDITIONSNOTCORRECT
#   define DCM_E_CONDITIONSNOTCORRECT (34U)
#  endif

#  ifndef DCM_E_REQUESTSEQUENCEERROR
#   define DCM_E_REQUESTSEQUENCEERROR (36U)
#  endif

#  ifndef DCM_E_NORESPONSEFROMSUBNETCOMPONENT
#   define DCM_E_NORESPONSEFROMSUBNETCOMPONENT (37U)
#  endif

#  ifndef DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION
#   define DCM_E_FAILUREPREVENTSEXECUTIONOFREQUESTEDACTION (38U)
#  endif

#  ifndef DCM_E_REQUESTOUTOFRANGE
#   define DCM_E_REQUESTOUTOFRANGE (49U)
#  endif

#  ifndef DCM_E_SECURITYACCESSDENIED
#   define DCM_E_SECURITYACCESSDENIED (51U)
#  endif

#  ifndef DCM_E_INVALIDKEY
#   define DCM_E_INVALIDKEY (53U)
#  endif

#  ifndef DCM_E_EXCEEDNUMBEROFATTEMPTS
#   define DCM_E_EXCEEDNUMBEROFATTEMPTS (54U)
#  endif

#  ifndef DCM_E_REQUIREDTIMEDELAYNOTEXPIRED
#   define DCM_E_REQUIREDTIMEDELAYNOTEXPIRED (55U)
#  endif

#  ifndef DCM_E_UPLOADDOWNLOADNOTACCEPTED
#   define DCM_E_UPLOADDOWNLOADNOTACCEPTED (112U)
#  endif

#  ifndef DCM_E_TRANSFERDATASUSPENDED
#   define DCM_E_TRANSFERDATASUSPENDED (113U)
#  endif

#  ifndef DCM_E_GENERALPROGRAMMINGFAILURE
#   define DCM_E_GENERALPROGRAMMINGFAILURE (114U)
#  endif

#  ifndef DCM_E_WRONGBLOCKSEQUENCECOUNTER
#   define DCM_E_WRONGBLOCKSEQUENCECOUNTER (115U)
#  endif

#  ifndef DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING
#   define DCM_E_REQUESTCORRECTLYRECEIVEDRESPONSEPENDING (120U)
#  endif

#  ifndef DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION
#   define DCM_E_SUBFUNCTIONNOTSUPPORTEDINACTIVESESSION (126U)
#  endif

#  ifndef DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION
#   define DCM_E_SERVICENOTSUPPORTEDINACTIVESESSION (127U)
#  endif

#  ifndef DCM_E_RPMTOOHIGH
#   define DCM_E_RPMTOOHIGH (129U)
#  endif

#  ifndef DCM_E_RPMTOOLOW
#   define DCM_E_RPMTOOLOW (130U)
#  endif

#  ifndef DCM_E_ENGINEISRUNNING
#   define DCM_E_ENGINEISRUNNING (131U)
#  endif

#  ifndef DCM_E_ENGINEISNOTRUNNING
#   define DCM_E_ENGINEISNOTRUNNING (132U)
#  endif

#  ifndef DCM_E_ENGINERUNTIMETOOLOW
#   define DCM_E_ENGINERUNTIMETOOLOW (133U)
#  endif

#  ifndef DCM_E_TEMPERATURETOOHIGH
#   define DCM_E_TEMPERATURETOOHIGH (134U)
#  endif

#  ifndef DCM_E_TEMPERATURETOOLOW
#   define DCM_E_TEMPERATURETOOLOW (135U)
#  endif

#  ifndef DCM_E_VEHICLESPEEDTOOHIGH
#   define DCM_E_VEHICLESPEEDTOOHIGH (136U)
#  endif

#  ifndef DCM_E_VEHICLESPEEDTOOLOW
#   define DCM_E_VEHICLESPEEDTOOLOW (137U)
#  endif

#  ifndef DCM_E_THROTTLE_PEDALTOOHIGH
#   define DCM_E_THROTTLE_PEDALTOOHIGH (138U)
#  endif

#  ifndef DCM_E_THROTTLE_PEDALTOOLOW
#   define DCM_E_THROTTLE_PEDALTOOLOW (139U)
#  endif

#  ifndef DCM_E_TRANSMISSIONRANGENOTINNEUTRAL
#   define DCM_E_TRANSMISSIONRANGENOTINNEUTRAL (140U)
#  endif

#  ifndef DCM_E_TRANSMISSIONRANGENOTINGEAR
#   define DCM_E_TRANSMISSIONRANGENOTINGEAR (141U)
#  endif

#  ifndef DCM_E_BRAKESWITCH_NOTCLOSED
#   define DCM_E_BRAKESWITCH_NOTCLOSED (143U)
#  endif

#  ifndef DCM_E_SHIFTERLEVERNOTINPARK
#   define DCM_E_SHIFTERLEVERNOTINPARK (144U)
#  endif

#  ifndef DCM_E_TORQUECONVERTERCLUTCHLOCKED
#   define DCM_E_TORQUECONVERTERCLUTCHLOCKED (145U)
#  endif

#  ifndef DCM_E_VOLTAGETOOHIGH
#   define DCM_E_VOLTAGETOOHIGH (146U)
#  endif

#  ifndef DCM_E_VOLTAGETOOLOW
#   define DCM_E_VOLTAGETOOLOW (147U)
#  endif

#  ifndef DCM_E_VMSCNC_0
#   define DCM_E_VMSCNC_0 (240U)
#  endif

#  ifndef DCM_E_VMSCNC_1
#   define DCM_E_VMSCNC_1 (241U)
#  endif

#  ifndef DCM_E_VMSCNC_2
#   define DCM_E_VMSCNC_2 (242U)
#  endif

#  ifndef DCM_E_VMSCNC_3
#   define DCM_E_VMSCNC_3 (243U)
#  endif

#  ifndef DCM_E_VMSCNC_4
#   define DCM_E_VMSCNC_4 (244U)
#  endif

#  ifndef DCM_E_VMSCNC_5
#   define DCM_E_VMSCNC_5 (245U)
#  endif

#  ifndef DCM_E_VMSCNC_6
#   define DCM_E_VMSCNC_6 (246U)
#  endif

#  ifndef DCM_E_VMSCNC_7
#   define DCM_E_VMSCNC_7 (247U)
#  endif

#  ifndef DCM_E_VMSCNC_8
#   define DCM_E_VMSCNC_8 (248U)
#  endif

#  ifndef DCM_E_VMSCNC_9
#   define DCM_E_VMSCNC_9 (249U)
#  endif

#  ifndef DCM_E_VMSCNC_A
#   define DCM_E_VMSCNC_A (250U)
#  endif

#  ifndef DCM_E_VMSCNC_B
#   define DCM_E_VMSCNC_B (251U)
#  endif

#  ifndef DCM_E_VMSCNC_C
#   define DCM_E_VMSCNC_C (252U)
#  endif

#  ifndef DCM_E_VMSCNC_D
#   define DCM_E_VMSCNC_D (253U)
#  endif

#  ifndef DCM_E_VMSCNC_E
#   define DCM_E_VMSCNC_E (254U)
#  endif

#  ifndef DCM_INITIAL
#   define DCM_INITIAL (0U)
#  endif

#  ifndef DCM_PENDING
#   define DCM_PENDING (1U)
#  endif

#  ifndef DCM_CANCEL
#   define DCM_CANCEL (2U)
#  endif

#  ifndef DCM_FORCE_RCRRP_OK
#   define DCM_FORCE_RCRRP_OK (3U)
#  endif

#  ifndef DCM_FORCE_RCRRP_NOT_OK
#   define DCM_FORCE_RCRRP_NOT_OK (64U)
#  endif

#  ifndef QU_ST_CON_VEH_SignalwertGueltig
#   define QU_ST_CON_VEH_SignalwertGueltig (2U)
#  endif

#  ifndef QU_ST_CON_VEH_SignalwertEingeschraenktGueltig
#   define QU_ST_CON_VEH_SignalwertEingeschraenktGueltig (3U)
#  endif

#  ifndef QU_ST_CON_VEH_ReserviertFuerDieNichtUmgesetzteKennung_Fehler_
#   define QU_ST_CON_VEH_ReserviertFuerDieNichtUmgesetzteKennung_Fehler_ (6U)
#  endif

#  ifndef QU_ST_CON_VEH_Wert_nicht_verfuegbar
#   define QU_ST_CON_VEH_Wert_nicht_verfuegbar (14U)
#  endif

#  ifndef QU_ST_CON_VEH_SignalUnbefuellt
#   define QU_ST_CON_VEH_SignalUnbefuellt (15U)
#  endif

#  ifndef ST_CON_VEH_reserviert
#   define ST_CON_VEH_reserviert (0U)
#  endif

#  ifndef ST_CON_VEH_Parken_BN_niO
#   define ST_CON_VEH_Parken_BN_niO (1U)
#  endif

#  ifndef ST_CON_VEH_Parken_BN_iO
#   define ST_CON_VEH_Parken_BN_iO (2U)
#  endif

#  ifndef ST_CON_VEH_Standfunktionen_Kunde_nicht_im_FZG
#   define ST_CON_VEH_Standfunktionen_Kunde_nicht_im_FZG (3U)
#  endif

#  ifndef ST_CON_VEH_Wohnen
#   define ST_CON_VEH_Wohnen (5U)
#  endif

#  ifndef ST_CON_VEH_Pruefen_Analyse_Diagnose
#   define ST_CON_VEH_Pruefen_Analyse_Diagnose (7U)
#  endif

#  ifndef ST_CON_VEH_Fahrbereitschaft_herstellen
#   define ST_CON_VEH_Fahrbereitschaft_herstellen (8U)
#  endif

#  ifndef ST_CON_VEH_Fahren
#   define ST_CON_VEH_Fahren (10U)
#  endif

#  ifndef ST_CON_VEH_Fahrbereitschaft_beenden
#   define ST_CON_VEH_Fahrbereitschaft_beenden (12U)
#  endif

#  ifndef ST_CON_VEH_reserviert_bne_E673DEE4F91F432391662F6004C0175A_13
#   define ST_CON_VEH_reserviert_bne_E673DEE4F91F432391662F6004C0175A_13 (13U)
#  endif

#  ifndef ST_CON_VEH_reserviert_bne_E673DEE4F91F432391662F6004C0175A_14
#   define ST_CON_VEH_reserviert_bne_E673DEE4F91F432391662F6004C0175A_14 (14U)
#  endif

#  ifndef ST_CON_VEH_Signal_unbefuellt
#   define ST_CON_VEH_Signal_unbefuellt (15U)
#  endif

# endif /* RTE_CORE */


/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_DlogFirstStartMDG
#  define RTE_MODETYPE_DlogFirstStartMDG
typedef uint8 Rte_ModeType_DlogFirstStartMDG;
# endif

# ifndef RTE_MODE_DlogFirstStartMDG_DLOG_FIRSTSTART
#  define RTE_MODE_DlogFirstStartMDG_DLOG_FIRSTSTART (0U)
# endif
# ifndef RTE_MODE_DlogFirstStartMDG_DLOG_NORMALSTART
#  define RTE_MODE_DlogFirstStartMDG_DLOG_NORMALSTART (1U)
# endif
# ifndef RTE_MODE_DlogFirstStartMDG_DLOG_UNINIT
#  define RTE_MODE_DlogFirstStartMDG_DLOG_UNINIT (2U)
# endif
# ifndef RTE_TRANSITION_DlogFirstStartMDG
#  define RTE_TRANSITION_DlogFirstStartMDG (3U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BMW_APPLICATION_CONNECTOR_DUMMY_TYPE_H */
