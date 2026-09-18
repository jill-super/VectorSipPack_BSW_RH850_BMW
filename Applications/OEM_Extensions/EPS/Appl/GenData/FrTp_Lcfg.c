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
 *            Module: FrTp
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: FrTp_Lcfg.c
 *   Generation Time: 2018-01-02 16:37:31
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

#define TP_ISO10681_LCFG_SOURCE
#define FRTP_LCFG_SOURCE

#include "PduR_FrTp.h" /* for PduR symbolic name value defines and callback functions */
#include "FrIf.h" /* for FrIf symbolic name value defines */
#include "FrTp_Lcfg.h"
#include "FrTp_Common.h"
 
#include "Det.h"
 

/* -----------------------------------------------------------------------------
    &&&~ Linktime configuration definitions
 ----------------------------------------------------------------------------- */





#define FRTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* Channel-administration data */
/* PRQA S 3408 1 */ /* MD_FrTp_3408 */
VAR(FrTp_RxStateType, FRTP_VAR_NOINIT) FrTp_RxState[28];
/* PRQA S 3408 1 */ /* MD_FrTp_3408 */
VAR(FrTp_TxStateType, FRTP_VAR_NOINIT) FrTp_TxState[14];


/* All other runtime data */
/* Connection- and FrIfTxPdu-administration data */
/* PRQA S 3408 2 */ /* MD_FrTp_3408 */
VAR(FrTp_ConnStateType, FRTP_VAR_NOINIT) FrTp_ConnState[28];
/* PRQA S 3408 2 */ /* MD_FrTp_3408 */
VAR(uint8, FRTP_VAR_NOINIT) FrTp_RxFrIfPending[1];
/* PRQA S 3408 2 */ /* MD_FrTp_3408 */
VAR(uint8, FRTP_VAR_NOINIT) FrTp_TxFrIfPending[1];
/* Admin data for transmission using the "Trigger-Transmit"-functionality */
/* PRQA S 3408 2 */ /* MD_FrTp_3408 */
 VAR(FrTp_DecoupPduAdminType, FRTP_VAR_NOINIT) FrTp_DecoupPduAdminData[1];

/* Admin data for Tx-Pdu-Pools */
/* PRQA S 3408 2 */ /* MD_FrTp_3408 */
VAR(FrTp_TxPduPoolDataType, FRTP_VAR_NOINIT) FrTp_PoolData[1];
/* Buffer to assemble FrTp-frames and parts of them */
VAR(uint32, FRTP_VAR_NOINIT) FrTp_FrIfTxBuf[8U];


#define FRTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define FRTP_START_SEC_VAR_NOINIT_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ FrTp_RxBuf_Ch
 ----------------------------------------------------------------------------- */

/* Channel-wise Rx-buffers */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel0Type;
VAR(FrTp_RxBuf_Channel0Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel0; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel1Type;
VAR(FrTp_RxBuf_Channel1Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel1; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel2Type;
VAR(FrTp_RxBuf_Channel2Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel2; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel3Type;
VAR(FrTp_RxBuf_Channel3Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel3; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel4Type;
VAR(FrTp_RxBuf_Channel4Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel4; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel5Type;
VAR(FrTp_RxBuf_Channel5Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel5; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel6Type;
VAR(FrTp_RxBuf_Channel6Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel6; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel7Type;
VAR(FrTp_RxBuf_Channel7Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel7; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel8Type;
VAR(FrTp_RxBuf_Channel8Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel8; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel9Type;
VAR(FrTp_RxBuf_Channel9Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel9; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel10Type;
VAR(FrTp_RxBuf_Channel10Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel10; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel11Type;
VAR(FrTp_RxBuf_Channel11Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel11; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel12Type;
VAR(FrTp_RxBuf_Channel12Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel12; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel13Type;
VAR(FrTp_RxBuf_Channel13Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel13; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel14Type;
VAR(FrTp_RxBuf_Channel14Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel14; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel15Type;
VAR(FrTp_RxBuf_Channel15Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel15; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel16Type;
VAR(FrTp_RxBuf_Channel16Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel16; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel17Type;
VAR(FrTp_RxBuf_Channel17Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel17; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel18Type;
VAR(FrTp_RxBuf_Channel18Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel18; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel19Type;
VAR(FrTp_RxBuf_Channel19Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel19; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel20Type;
VAR(FrTp_RxBuf_Channel20Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel20; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel21Type;
VAR(FrTp_RxBuf_Channel21Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel21; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel22Type;
VAR(FrTp_RxBuf_Channel22Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel22; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel23Type;
VAR(FrTp_RxBuf_Channel23Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel23; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel24Type;
VAR(FrTp_RxBuf_Channel24Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel24; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel25Type;
VAR(FrTp_RxBuf_Channel25Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel25; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel26Type;
VAR(FrTp_RxBuf_Channel26Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel26; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
    VAR(uint32, FRTP_VAR_NOINIT) w32[63U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[127U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[254U];
} FrTp_RxBuf_Channel27Type;
VAR(FrTp_RxBuf_Channel27Type, FRTP_VAR_NOINIT) FrTp_RxBuf_Channel27; /* PRQA S 3408, 0759 */ /* MD_FrTp_3408, MD_MSR_18.4 */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_TxBuf_Ch
 ----------------------------------------------------------------------------- */

/* Channel-wise Tx-buffers */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel0Type;
VAR(FrTp_TxBuf_Channel0Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel0; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel1Type;
VAR(FrTp_TxBuf_Channel1Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel1; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel2Type;
VAR(FrTp_TxBuf_Channel2Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel2; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel3Type;
VAR(FrTp_TxBuf_Channel3Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel3; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel4Type;
VAR(FrTp_TxBuf_Channel4Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel4; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel5Type;
VAR(FrTp_TxBuf_Channel5Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel5; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel6Type;
VAR(FrTp_TxBuf_Channel6Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel6; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel7Type;
VAR(FrTp_TxBuf_Channel7Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel7; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel8Type;
VAR(FrTp_TxBuf_Channel8Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel8; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel9Type;
VAR(FrTp_TxBuf_Channel9Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel9; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel10Type;
VAR(FrTp_TxBuf_Channel10Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel10; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel11Type;
VAR(FrTp_TxBuf_Channel11Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel11; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel12Type;
VAR(FrTp_TxBuf_Channel12Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel12; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */
/* PRQA S 0750 7 */ /* MD_MSR_18.4 */
/* PRQA S 3448 6 */ /* MD_FrTp_3448 */
typedef union
{
  VAR(uint16, FRTP_VAR_NOINIT) w32[8U];
    VAR(uint16, FRTP_VAR_NOINIT) w16[16U];
    VAR(uint8, FRTP_VAR_NOINIT)  b8[32U];
} FrTp_TxBuf_Channel13Type;
VAR(FrTp_TxBuf_Channel13Type, FRTP_VAR_NOINIT) FrTp_TxBuf_Channel13; /* PRQA S 0759, 3408 */ /* MD_MSR_18.4, MD_FrTp_3408 */


#define FRTP_STOP_SEC_VAR_NOINIT_16BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"





#define FRTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


/* All other runtime data */ /* PRQA S 3408 5 */ /* MD_FrTp_3408 */
VAR(uint8, FRTP_VAR_NOINIT) FrTp_RxCurrRoundRobChan; /*!< Counter variable to store the index of the rx-state-machine that is to be operated next during the round-robin-process. */
VAR(uint8, FRTP_VAR_NOINIT) FrTp_TxCurrRoundRobChan; /*!< Counter variable to store the index of the tx-state-machine that is to be operated next during the round-robin-process. */
VAR(uint16_least, FRTP_VAR_NOINIT) FrTp_RxSm_MaxIterations; /*!< Max. number of iterations in the round-robin-while-loop according to the number of rx-state-machines and tx-pdus used by these state-machines. */
VAR(uint16_least, FRTP_VAR_NOINIT) FrTp_TxSm_MaxIterations; /*!< Max. number of iterations in the round-robin-while-loop according to the number of tx-state-machines and tx-pdus used by these state-machines. */

#define FRTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define FRTP_START_SEC_VAR_ZERO_INIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* Flag to check initialization */
/* PRQA S 3408 2 */ /* MD_FrTp_3408 */
VAR(uint8, FRTP_VAR_ZERO_INIT) FrTp_InitState = 0u; /*!< Flag to store the initialization state of the FrTp, during runtime. */


#define FRTP_STOP_SEC_VAR_ZERO_INIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ Tp_Iso10681_PB_Config_Source_LinktimeConfig
 ----------------------------------------------------------------------------- */
 
 /* ----------------------------------------------------------------------------
     &&&~ Tp_Iso10681_Variant_Independent_Data
 ----------------------------------------------------------------------------- */
 

#define FRTP_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ FrTp_TxBuf
 ----------------------------------------------------------------------------- */

/* PRQA S 3408 4 */ /* MD_FrTp_3408 */
/* PRQA S 0310 DIFF_PTR_TYPE_CAST_FOR_TX_BUFFERS */ /* MD_FrTp_0310 */
CONSTP2VAR(uint8, FRTP_CONST, FRTP_VAR_NOINIT) FrTp_TxBuf[14] =  
{
  FrTp_TxBuf_Channel0.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 0  */ , 
  FrTp_TxBuf_Channel1.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 1  */ , 
  FrTp_TxBuf_Channel2.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 2  */ , 
  FrTp_TxBuf_Channel3.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 3  */ , 
  FrTp_TxBuf_Channel4.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 4  */ , 
  FrTp_TxBuf_Channel5.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 5  */ , 
  FrTp_TxBuf_Channel6.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 6  */ , 
  FrTp_TxBuf_Channel7.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 7  */ , 
  FrTp_TxBuf_Channel8.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 8  */ , 
  FrTp_TxBuf_Channel9.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 9  */ , 
  FrTp_TxBuf_Channel10.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 10  */ , 
  FrTp_TxBuf_Channel11.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 11  */ , 
  FrTp_TxBuf_Channel12.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 12  */ , 
  FrTp_TxBuf_Channel13.b8 /*  !< Pointer to buffer to store tx-pdus in, used for tx-state-machine No.: 13  */ 
}; /*!< Array to access the state-machine-individual buffers by using the state-machines index-value. */
/* PRQA L:NO_CAST_FOR_TX_BUFFERS */
/* PRQA L:DIFF_PTR_TYPE_CAST_FOR_TX_BUFFERS */ 

/* -----------------------------------------------------------------------------
    &&&~ FrTp_RxBuf
 ----------------------------------------------------------------------------- */

/* PRQA S 3408 4 */ /* MD_FrTp_3408 */
/* PRQA S 0310 DIFF_PTR_TYPE_CAST_FOR_RX_BUFFERS */ /* MD_FrTp_0310 */
CONSTP2VAR(uint8, FRTP_CONST, FRTP_VAR_NOINIT) FrTp_RxBuf[28] = 
{
  FrTp_RxBuf_Channel0.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 0  */ , 
  FrTp_RxBuf_Channel1.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 1  */ , 
  FrTp_RxBuf_Channel2.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 2  */ , 
  FrTp_RxBuf_Channel3.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 3  */ , 
  FrTp_RxBuf_Channel4.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 4  */ , 
  FrTp_RxBuf_Channel5.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 5  */ , 
  FrTp_RxBuf_Channel6.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 6  */ , 
  FrTp_RxBuf_Channel7.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 7  */ , 
  FrTp_RxBuf_Channel8.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 8  */ , 
  FrTp_RxBuf_Channel9.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 9  */ , 
  FrTp_RxBuf_Channel10.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 10  */ , 
  FrTp_RxBuf_Channel11.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 11  */ , 
  FrTp_RxBuf_Channel12.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 12  */ , 
  FrTp_RxBuf_Channel13.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 13  */ , 
  FrTp_RxBuf_Channel14.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 14  */ , 
  FrTp_RxBuf_Channel15.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 15  */ , 
  FrTp_RxBuf_Channel16.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 16  */ , 
  FrTp_RxBuf_Channel17.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 17  */ , 
  FrTp_RxBuf_Channel18.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 18  */ , 
  FrTp_RxBuf_Channel19.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 19  */ , 
  FrTp_RxBuf_Channel20.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 20  */ , 
  FrTp_RxBuf_Channel21.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 21  */ , 
  FrTp_RxBuf_Channel22.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 22  */ , 
  FrTp_RxBuf_Channel23.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 23  */ , 
  FrTp_RxBuf_Channel24.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 24  */ , 
  FrTp_RxBuf_Channel25.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 25  */ , 
  FrTp_RxBuf_Channel26.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 26  */ , 
  FrTp_RxBuf_Channel27.b8 /*  !< Pointer to buffer to store rx-pdus in, used for rx-state-machine No.: 27  */ 
}; /*!< Array to access the state-machine-individual buffers by using the state-machines index-value. */
/* PRQA L:NO_CAST_FOR_RX_BUFFERS */
/* PRQA L:DIFF_PTR_TYPE_CAST_FOR_RX_BUFFERS */ 

 /* ----------------------------------------------------------------------------
     &&&~ Tp_Iso10681_Variant_Dependent_Data
 ----------------------------------------------------------------------------- */


/* -----------------------------------------------------------------------------
    &&&~ FrTp_PoolsOfTxPdus
 ----------------------------------------------------------------------------- */
/* PRQA S 3408 2 */ /* MD_FrTp_3408 */
STATIC CONST(uint8, FRTP_CONST) FrTp_P2P_Pdu0_Variant0_TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp[1] = 
{
  0 /*  TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ 
}; /*!< Array of offsets of the TxPduPools containing the FrTpTxPdu: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp (). */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_FrIfTxPdus
 ----------------------------------------------------------------------------- */

/* PRQA S 3408, 0781 2 */ /* MD_FrTp_3408, MD_FrTp_0781 */
CONST(FrTp_TxPduInfoType, FRTP_CONST) FrTp_FrIfTxPdus[] = 
{
  {
    FrTp_P2P_Pdu0_Variant0_TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp /*  uint8* PoolOffsetsPtr  */ , 
    FrIfConf_FrIfTxPdu_FrIfTxPdu_TL_ECU_TRNSM_FR_32 /*  PduIdType FRTP_PDUID  */ , 
    0 /*  uint8 FrTp_DecoupPduAdminDataOffset  */ , 
    32 /*  uint8 Length  */ , 
    1 /*  uint8 NumPools  */ 
  } /*  TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ 
}; /*!< Initializer list of the global, aggregated list of all FrTpTxPdus used by the FrTp. */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_ConnsOfRxPdus
 ----------------------------------------------------------------------------- */
/* PRQA S 3408 2 */ /* MD_FrTp_3408 */
STATIC CONST(uint8, FRTP_CONST) FrTp_P2C_Pdu0_Variant0_RxPduPool_TL_GW_FR[28] = 
{
  22 /*  TL_BRC_FR_32_TxF8_0xDFTN_0x00F8_248_TN_0x0030_48  */ , 
  16 /*  TL_BRC_FR_32_TxF2_0xDFTN_0x00F2_242_TN_0x0030_48  */ , 
  17 /*  TL_BRC_FR_32_TxF3_0xDFTN_0x00F3_243_TN_0x0030_48  */ , 
  18 /*  TL_BRC_FR_32_TxF4_0xDFTN_0x00F4_244_TN_0x0030_48  */ , 
  19 /*  TL_BRC_FR_32_TxF5_0xDFTN_0x00F5_245_TN_0x0030_48  */ , 
  20 /*  TL_BRC_FR_32_TxF6_0xDFTN_0x00F6_246_TN_0x0030_48  */ , 
  21 /*  TL_BRC_FR_32_TxF7_0xDFTN_0x00F7_247_TN_0x0030_48  */ , 
  15 /*  TL_BRC_FR_32_TxF1_0xDFTN_0x00F1_241_TN_0x0030_48  */ , 
  23 /*  TL_BRC_FR_32_TxF9_0xDFTN_0x00F9_249_TN_0x0030_48  */ , 
  24 /*  TL_BRC_FR_32_TxFA_0xDFTN_0x00FA_250_TN_0x0030_48  */ , 
  25 /*  TL_BRC_FR_32_TxFB_0xDFTN_0x00FB_251_TN_0x0030_48  */ , 
  26 /*  TL_BRC_FR_32_TxFC_0xDFTN_0x00FC_252_TN_0x0030_48  */ , 
  27 /*  TL_BRC_FR_32_TxFD_0xDFTN_0x00FD_253_TN_0x0030_48  */ , 
  14 /*  TL_BRC_FR_32_TxF0_0xDFTN_0x00F0_240_TN_0x0030_48  */ , 
  0 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF0TN_0x00F0_240_TN_0x0030_48  */ , 
  1 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF1TN_0x00F1_241_TN_0x0030_48  */ , 
  2 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF2TN_0x00F2_242_TN_0x0030_48  */ , 
  3 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF3TN_0x00F3_243_TN_0x0030_48  */ , 
  4 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF4TN_0x00F4_244_TN_0x0030_48  */ , 
  5 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF5TN_0x00F5_245_TN_0x0030_48  */ , 
  6 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF6TN_0x00F6_246_TN_0x0030_48  */ , 
  7 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF7TN_0x00F7_247_TN_0x0030_48  */ , 
  8 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF8TN_0x00F8_248_TN_0x0030_48  */ , 
  9 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF9TN_0x00F9_249_TN_0x0030_48  */ , 
  10 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFATN_0x00FA_250_TN_0x0030_48  */ , 
  11 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFBTN_0x00FB_251_TN_0x0030_48  */ , 
  12 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFCTN_0x00FC_252_TN_0x0030_48  */ , 
  13 /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFDTN_0x00FD_253_TN_0x0030_48  */ 
}; /*!< Array of offsets of the FrTpConnections that reference FrTpRxPduPools that contain the FrTpRxPdu: RxPduPool_TL_GW_FR (). */
/* PRQA S 3408 2 */ /* MD_FrTp_3408 */
STATIC CONST(uint8, FRTP_CONST) FrTp_P2C_Pdu1_Variant0_FrTpRxPdu_TL_BRC_FR_32_Tp[14] = 
{
  22 /*  TL_BRC_FR_32_TxF8_0xDFTN_0x00F8_248_TN_0x0030_48  */ , 
  16 /*  TL_BRC_FR_32_TxF2_0xDFTN_0x00F2_242_TN_0x0030_48  */ , 
  17 /*  TL_BRC_FR_32_TxF3_0xDFTN_0x00F3_243_TN_0x0030_48  */ , 
  18 /*  TL_BRC_FR_32_TxF4_0xDFTN_0x00F4_244_TN_0x0030_48  */ , 
  19 /*  TL_BRC_FR_32_TxF5_0xDFTN_0x00F5_245_TN_0x0030_48  */ , 
  20 /*  TL_BRC_FR_32_TxF6_0xDFTN_0x00F6_246_TN_0x0030_48  */ , 
  21 /*  TL_BRC_FR_32_TxF7_0xDFTN_0x00F7_247_TN_0x0030_48  */ , 
  15 /*  TL_BRC_FR_32_TxF1_0xDFTN_0x00F1_241_TN_0x0030_48  */ , 
  23 /*  TL_BRC_FR_32_TxF9_0xDFTN_0x00F9_249_TN_0x0030_48  */ , 
  24 /*  TL_BRC_FR_32_TxFA_0xDFTN_0x00FA_250_TN_0x0030_48  */ , 
  25 /*  TL_BRC_FR_32_TxFB_0xDFTN_0x00FB_251_TN_0x0030_48  */ , 
  26 /*  TL_BRC_FR_32_TxFC_0xDFTN_0x00FC_252_TN_0x0030_48  */ , 
  27 /*  TL_BRC_FR_32_TxFD_0xDFTN_0x00FD_253_TN_0x0030_48  */ , 
  14 /*  TL_BRC_FR_32_TxF0_0xDFTN_0x00F0_240_TN_0x0030_48  */ 
}; /*!< Array of offsets of the FrTpConnections that reference FrTpRxPduPools that contain the FrTpRxPdu: FrTpRxPdu_TL_BRC_FR_32_Tp (). */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_FrIfRxPdus
 ----------------------------------------------------------------------------- */

/* PRQA S 3408, 0781 2 */ /* MD_FrTp_3408, MD_FrTp_0781 */
CONST(FrTp_RxPduInfoType, FRTP_CONST) FrTp_FrIfRxPdus[] = 
{
  {
    FrTp_P2C_Pdu0_Variant0_RxPduPool_TL_GW_FR /*  uint8* ConnOffsetsPtr  */ , 
    28 /*  uint8 NumConns  */ , 
    254 /*  uint8 Length  */ 
  } /*  RxPduPool_TL_GW_FR  */ , 
  {
    FrTp_P2C_Pdu1_Variant0_FrTpRxPdu_TL_BRC_FR_32_Tp /*  uint8* ConnOffsetsPtr  */ , 
    14 /*  uint8 NumConns  */ , 
    32 /*  uint8 Length  */ 
  } /*  FrTpRxPdu_TL_BRC_FR_32_Tp  */ 
}; /*!< Initializer list of the global, aggregated list of all FrTpRxPdus used by the FrTp. */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_RxPduPools
 ----------------------------------------------------------------------------- */

/* PRQA S 3408, 0781 2 */ /* MD_FrTp_3408, MD_FrTp_0781 */ 
CONST(FrTp_RxPduPoolType, FRTP_CONST) FrTp_RxPduPools[2] = 
{
  {
    32 /*  uint8 MinPduLen  */ 
   /*  RxPduPool_TL_BRC_FR_32_Tp  */ }, 
  {
    254 /*  uint8 MinPduLen  */ 
   /*  RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ }
}; /*!< Initializer list of all configured FrTpRxPduPools. */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_TxPduPoolOffsets
 ----------------------------------------------------------------------------- */
/* PRQA S 3408 2 */ /* MD_FrTp_3408  */ /* Array of offsets of the TxPdus of pool TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp () */
STATIC CONST(uint8, FRTP_CONST)TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp[]=
{
  0 /*  TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp (TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp)  */ 
}; /*!< Offsets in the global list of FrTpTxPdus for each configured FrTpTxPduPool. */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_TxPduPools
 ----------------------------------------------------------------------------- */

/* PRQA S 3408, 0781 2 */ /* MD_FrTp_3408, MD_FrTp_0781 */
CONST(FrTp_TxPduPoolType, FRTP_CONST) FrTp_TxPduPools[1] = 
{
  {
    TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp /*   uint8* PduOffsetsPtr  */ , 
    1 /*  uint8 NumPdus  */ , 
    32 /*  uint8 MinPduLen  */ 
   /*  TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ }
}; /*!< Initializer list of all configured FrTpTxPduPools. */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_RxPduSnv2RxPduIdx
 ----------------------------------------------------------------------------- */
 /* PRQA S 3408, 0781 2 */ /* MD_FrTp_3408, MD_FrTp_0781 */
CONST(PduIdType, FRTP_CONST) FrTp_RxPduSnv2RxPduIdx[3] =
{
  0U /*  RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp (0U), RxPduPool_TL_GW_FR  */ , 
  1U /*  FrTpRxPdu_TL_BRC_FR_32_Tp (1U), FrTpRxPdu_TL_BRC_FR_32_Tp  */ , 
  0U /*  RxPduPool_TL_GW_FR (2U), RxPduPool_TL_GW_FR  */ 
}; /*!< Map from the SNV of a FrTpRxPdu to the internal idx. of that FrTpRxPdu. */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_TxPduSnv2TxPduIdx
 ----------------------------------------------------------------------------- */
 /* PRQA S 3408, 0781 2 */ /* MD_FrTp_3408, MD_FrTp_0781 */
CONST(PduIdType, FRTP_CONST) FrTp_TxPduSnv2TxPduIdx[1] =
{
  0U /*  TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp (0U), TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ 
}; /*!< Map from the SNV of a FrTpTxPdu to the internal idx. of that FrTpTxPdu. */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_RxSduSnv2ConnIdx
 ----------------------------------------------------------------------------- */
 /* PRQA S 3408, 0781 2 */ /* MD_FrTp_3408, MD_FrTp_0781 */
CONST(PduIdType, FRTP_CONST) FrTp_RxSduSnv2ConnIdx[28] =
{
  14U /*  TL_BRC_FR_32_TxF0_0xDFTN_0x00F0_240_TN_0x0030_48 (0U), TL_BRC_FR_32_TxF0_0xDFTN_0x00F0_240_TN_0x0030_48  */ , 
  15U /*  TL_BRC_FR_32_TxF1_0xDFTN_0x00F1_241_TN_0x0030_48 (1U), TL_BRC_FR_32_TxF1_0xDFTN_0x00F1_241_TN_0x0030_48  */ , 
  16U /*  TL_BRC_FR_32_TxF2_0xDFTN_0x00F2_242_TN_0x0030_48 (2U), TL_BRC_FR_32_TxF2_0xDFTN_0x00F2_242_TN_0x0030_48  */ , 
  17U /*  TL_BRC_FR_32_TxF3_0xDFTN_0x00F3_243_TN_0x0030_48 (3U), TL_BRC_FR_32_TxF3_0xDFTN_0x00F3_243_TN_0x0030_48  */ , 
  18U /*  TL_BRC_FR_32_TxF4_0xDFTN_0x00F4_244_TN_0x0030_48 (4U), TL_BRC_FR_32_TxF4_0xDFTN_0x00F4_244_TN_0x0030_48  */ , 
  19U /*  TL_BRC_FR_32_TxF5_0xDFTN_0x00F5_245_TN_0x0030_48 (5U), TL_BRC_FR_32_TxF5_0xDFTN_0x00F5_245_TN_0x0030_48  */ , 
  20U /*  TL_BRC_FR_32_TxF6_0xDFTN_0x00F6_246_TN_0x0030_48 (6U), TL_BRC_FR_32_TxF6_0xDFTN_0x00F6_246_TN_0x0030_48  */ , 
  21U /*  TL_BRC_FR_32_TxF7_0xDFTN_0x00F7_247_TN_0x0030_48 (7U), TL_BRC_FR_32_TxF7_0xDFTN_0x00F7_247_TN_0x0030_48  */ , 
  22U /*  TL_BRC_FR_32_TxF8_0xDFTN_0x00F8_248_TN_0x0030_48 (8U), TL_BRC_FR_32_TxF8_0xDFTN_0x00F8_248_TN_0x0030_48  */ , 
  23U /*  TL_BRC_FR_32_TxF9_0xDFTN_0x00F9_249_TN_0x0030_48 (9U), TL_BRC_FR_32_TxF9_0xDFTN_0x00F9_249_TN_0x0030_48  */ , 
  24U /*  TL_BRC_FR_32_TxFA_0xDFTN_0x00FA_250_TN_0x0030_48 (10U), TL_BRC_FR_32_TxFA_0xDFTN_0x00FA_250_TN_0x0030_48  */ , 
  25U /*  TL_BRC_FR_32_TxFB_0xDFTN_0x00FB_251_TN_0x0030_48 (11U), TL_BRC_FR_32_TxFB_0xDFTN_0x00FB_251_TN_0x0030_48  */ , 
  26U /*  TL_BRC_FR_32_TxFC_0xDFTN_0x00FC_252_TN_0x0030_48 (12U), TL_BRC_FR_32_TxFC_0xDFTN_0x00FC_252_TN_0x0030_48  */ , 
  27U /*  TL_BRC_FR_32_TxFD_0xDFTN_0x00FD_253_TN_0x0030_48 (13U), TL_BRC_FR_32_TxFD_0xDFTN_0x00FD_253_TN_0x0030_48  */ , 
  0U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF0TN_0x00F0_240_TN_0x0030_48 (14U), TL_MST_GW_TRNSM_FR_254_00980001_TxF0TN_0x00F0_240_TN_0x0030_48  */ , 
  1U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF1TN_0x00F1_241_TN_0x0030_48 (15U), TL_MST_GW_TRNSM_FR_254_00980001_TxF1TN_0x00F1_241_TN_0x0030_48  */ , 
  2U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF2TN_0x00F2_242_TN_0x0030_48 (16U), TL_MST_GW_TRNSM_FR_254_00980001_TxF2TN_0x00F2_242_TN_0x0030_48  */ , 
  3U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF3TN_0x00F3_243_TN_0x0030_48 (17U), TL_MST_GW_TRNSM_FR_254_00980001_TxF3TN_0x00F3_243_TN_0x0030_48  */ , 
  4U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF4TN_0x00F4_244_TN_0x0030_48 (18U), TL_MST_GW_TRNSM_FR_254_00980001_TxF4TN_0x00F4_244_TN_0x0030_48  */ , 
  5U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF5TN_0x00F5_245_TN_0x0030_48 (19U), TL_MST_GW_TRNSM_FR_254_00980001_TxF5TN_0x00F5_245_TN_0x0030_48  */ , 
  6U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF6TN_0x00F6_246_TN_0x0030_48 (20U), TL_MST_GW_TRNSM_FR_254_00980001_TxF6TN_0x00F6_246_TN_0x0030_48  */ , 
  7U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF7TN_0x00F7_247_TN_0x0030_48 (21U), TL_MST_GW_TRNSM_FR_254_00980001_TxF7TN_0x00F7_247_TN_0x0030_48  */ , 
  8U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF8TN_0x00F8_248_TN_0x0030_48 (22U), TL_MST_GW_TRNSM_FR_254_00980001_TxF8TN_0x00F8_248_TN_0x0030_48  */ , 
  9U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF9TN_0x00F9_249_TN_0x0030_48 (23U), TL_MST_GW_TRNSM_FR_254_00980001_TxF9TN_0x00F9_249_TN_0x0030_48  */ , 
  10U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFATN_0x00FA_250_TN_0x0030_48 (24U), TL_MST_GW_TRNSM_FR_254_00980001_TxFATN_0x00FA_250_TN_0x0030_48  */ , 
  11U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFBTN_0x00FB_251_TN_0x0030_48 (25U), TL_MST_GW_TRNSM_FR_254_00980001_TxFBTN_0x00FB_251_TN_0x0030_48  */ , 
  12U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFCTN_0x00FC_252_TN_0x0030_48 (26U), TL_MST_GW_TRNSM_FR_254_00980001_TxFCTN_0x00FC_252_TN_0x0030_48  */ , 
  13U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFDTN_0x00FD_253_TN_0x0030_48 (27U), TL_MST_GW_TRNSM_FR_254_00980001_TxFDTN_0x00FD_253_TN_0x0030_48  */ 
}; /*!< Map from the SNV of a FrTpRxSdu to the internal idx. of the related FrTpConnection. */

/* -----------------------------------------------------------------------------
    &&&~ FrTp_TxSduSnv2ConnIdx
 ----------------------------------------------------------------------------- */
 /* PRQA S 3408, 0781 2 */ /* MD_FrTp_3408, MD_FrTp_0781 */
CONST(PduIdType, FRTP_CONST) FrTp_TxSduSnv2ConnIdx[14] =
{
  0U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF0TN_0x00F0_240_TN_0x0030_48 (0U), TL_MST_GW_TRNSM_FR_254_00980001_TxF0TN_0x00F0_240_TN_0x0030_48  */ , 
  1U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF1TN_0x00F1_241_TN_0x0030_48 (1U), TL_MST_GW_TRNSM_FR_254_00980001_TxF1TN_0x00F1_241_TN_0x0030_48  */ , 
  2U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF2TN_0x00F2_242_TN_0x0030_48 (2U), TL_MST_GW_TRNSM_FR_254_00980001_TxF2TN_0x00F2_242_TN_0x0030_48  */ , 
  3U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF3TN_0x00F3_243_TN_0x0030_48 (3U), TL_MST_GW_TRNSM_FR_254_00980001_TxF3TN_0x00F3_243_TN_0x0030_48  */ , 
  4U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF4TN_0x00F4_244_TN_0x0030_48 (4U), TL_MST_GW_TRNSM_FR_254_00980001_TxF4TN_0x00F4_244_TN_0x0030_48  */ , 
  5U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF5TN_0x00F5_245_TN_0x0030_48 (5U), TL_MST_GW_TRNSM_FR_254_00980001_TxF5TN_0x00F5_245_TN_0x0030_48  */ , 
  6U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF6TN_0x00F6_246_TN_0x0030_48 (6U), TL_MST_GW_TRNSM_FR_254_00980001_TxF6TN_0x00F6_246_TN_0x0030_48  */ , 
  7U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF7TN_0x00F7_247_TN_0x0030_48 (7U), TL_MST_GW_TRNSM_FR_254_00980001_TxF7TN_0x00F7_247_TN_0x0030_48  */ , 
  8U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF8TN_0x00F8_248_TN_0x0030_48 (8U), TL_MST_GW_TRNSM_FR_254_00980001_TxF8TN_0x00F8_248_TN_0x0030_48  */ , 
  9U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF9TN_0x00F9_249_TN_0x0030_48 (9U), TL_MST_GW_TRNSM_FR_254_00980001_TxF9TN_0x00F9_249_TN_0x0030_48  */ , 
  10U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFATN_0x00FA_250_TN_0x0030_48 (10U), TL_MST_GW_TRNSM_FR_254_00980001_TxFATN_0x00FA_250_TN_0x0030_48  */ , 
  11U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFBTN_0x00FB_251_TN_0x0030_48 (11U), TL_MST_GW_TRNSM_FR_254_00980001_TxFBTN_0x00FB_251_TN_0x0030_48  */ , 
  12U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFCTN_0x00FC_252_TN_0x0030_48 (12U), TL_MST_GW_TRNSM_FR_254_00980001_TxFCTN_0x00FC_252_TN_0x0030_48  */ , 
  13U /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFDTN_0x00FD_253_TN_0x0030_48 (13U), TL_MST_GW_TRNSM_FR_254_00980001_TxFDTN_0x00FD_253_TN_0x0030_48  */ 
}; /*!< Map from the SNV of a FrTpTxSdu to the internal idx. of the related FrTpConnection. */

 
/* -----------------------------------------------------------------------------
    &&&~ FrTp_ConnCtrl
 ----------------------------------------------------------------------------- */

/* PRQA S 3408 2 */ /* MD_FrTp_3408 */
/* PRQA S 3408 2 */ /* MD_FrTp_3408 */
STATIC CONST(FrTp_ConnCtrlType, FRTP_CONST) TPCC =
{
  30U /*  TimeoutAs  */ , 
  30U /*  TimeoutAr  */ , 
  100U /*  TimeoutBs  */ , 
  120U /*  TimeoutCr  */ , 
  10U /*  TimeBr  */ , 
  10U /*  TimeCs  */ , 
  4096 /*  MaxBfs  */ , 
  0 /*  MaxWft  */ , 
  8 /*  BandwidthCtrl  */ 
}; /*!< Initializer list of all FrTpConnection controls (i.e. parameter-sets) used by the FrTp. */
 

/* -----------------------------------------------------------------------------
    &&&~ FrTp_ConnCfg
 ----------------------------------------------------------------------------- */

/* PRQA S 3408, 0781 2 */ /* MD_FrTp_3408, MD_FrTp_0781 */
CONST(FrTp_ConnCfgType, FRTP_CONST) FrTp_ConnCfg[] = 
{
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00F0U /*  uint16 RemoteAddress = 240U  */ , 
    0 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_028 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_028)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_014 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_014)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF0TN_0x00F0_240_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00F1U /*  uint16 RemoteAddress = 241U  */ , 
    1 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_029 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_029)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_015 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_015)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF1TN_0x00F1_241_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00F2U /*  uint16 RemoteAddress = 242U  */ , 
    2 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_030 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_030)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_016 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_016)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF2TN_0x00F2_242_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00F3U /*  uint16 RemoteAddress = 243U  */ , 
    3 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_031 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_031)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_017 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_017)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF3TN_0x00F3_243_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00F4U /*  uint16 RemoteAddress = 244U  */ , 
    4 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_032 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_032)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_018 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_018)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF4TN_0x00F4_244_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00F5U /*  uint16 RemoteAddress = 245U  */ , 
    5 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_033 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_033)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_019 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_019)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF5TN_0x00F5_245_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00F6U /*  uint16 RemoteAddress = 246U  */ , 
    6 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_034 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_034)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_020 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_020)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF6TN_0x00F6_246_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00F7U /*  uint16 RemoteAddress = 247U  */ , 
    7 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_035 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_035)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_021 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_021)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF7TN_0x00F7_247_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00F8U /*  uint16 RemoteAddress = 248U  */ , 
    8 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_036 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_036)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_022 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_022)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF8TN_0x00F8_248_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00F9U /*  uint16 RemoteAddress = 249U  */ , 
    9 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_037 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_037)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_023 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_023)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxF9TN_0x00F9_249_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00FAU /*  uint16 RemoteAddress = 250U  */ , 
    10 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_038 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_038)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_024 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_024)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFATN_0x00FA_250_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00FBU /*  uint16 RemoteAddress = 251U  */ , 
    11 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_039 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_039)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_025 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_025)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFBTN_0x00FB_251_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00FCU /*  uint16 RemoteAddress = 252U  */ , 
    12 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_040 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_040)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_026 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_026)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFCTN_0x00FC_252_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x0030U /*  uint16 LocalAddress = 48U  */ , 
    0x00FDU /*  uint16 RemoteAddress = 253U  */ , 
    13 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_041 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_041)  */ , 
    PduRConf_PduRDestPdu_PduRDestPdu_027 /*  uint8 FrTpSduTxId (Referenced by PduRDestPdu_027)  */ , 
    1U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_MST_GW_TRNSM_FR_254_00980001_Tp  */ , 
    0U /*  uint8 TxPduPoolOffset to pool: TxPduPool_TL_ECU_TRNSM_FR_32_00BC0001_Tp  */ , 
    0U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_MST_GW_TRNSM_FR_254_00980001_TxFDTN_0x00FD_253_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00F0U /*  uint16 RemoteAddress = 240U  */ , 
    14 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxF0_0xDFTN_0x00F0_240_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00F1U /*  uint16 RemoteAddress = 241U  */ , 
    15 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_001 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_001)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxF1_0xDFTN_0x00F1_241_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00F2U /*  uint16 RemoteAddress = 242U  */ , 
    16 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_002 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_002)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxF2_0xDFTN_0x00F2_242_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00F3U /*  uint16 RemoteAddress = 243U  */ , 
    17 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_003 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_003)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxF3_0xDFTN_0x00F3_243_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00F4U /*  uint16 RemoteAddress = 244U  */ , 
    18 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_004 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_004)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxF4_0xDFTN_0x00F4_244_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00F5U /*  uint16 RemoteAddress = 245U  */ , 
    19 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_005 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_005)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxF5_0xDFTN_0x00F5_245_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00F6U /*  uint16 RemoteAddress = 246U  */ , 
    20 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_006 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_006)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxF6_0xDFTN_0x00F6_246_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00F7U /*  uint16 RemoteAddress = 247U  */ , 
    21 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_007 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_007)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxF7_0xDFTN_0x00F7_247_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00F8U /*  uint16 RemoteAddress = 248U  */ , 
    22 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_008 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_008)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxF8_0xDFTN_0x00F8_248_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00F9U /*  uint16 RemoteAddress = 249U  */ , 
    23 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_009 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_009)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxF9_0xDFTN_0x00F9_249_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00FAU /*  uint16 RemoteAddress = 250U  */ , 
    24 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_010 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_010)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxFA_0xDFTN_0x00FA_250_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00FBU /*  uint16 RemoteAddress = 251U  */ , 
    25 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_011 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_011)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxFB_0xDFTN_0x00FB_251_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00FCU /*  uint16 RemoteAddress = 252U  */ , 
    26 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_012 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_012)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxFC_0xDFTN_0x00FC_252_TN_0x0030_48  */ , 
  {
    &TPCC /*  FrTp_ConnCtrlType* ConnCtrlPtr  */ , 
    0x00DFU /*  uint16 LocalAddress = 223U  */ , 
    0x00FDU /*  uint16 RemoteAddress = 253U  */ , 
    27 /*  PduIdType ConnIdx   */ , 
    PduRConf_PduRSrcPdu_PduRSrcPdu_013 /*  uint8 FrTpSduRxId (Referenced by PduRSrcPdu_013)  */ , 
    0xFFU /*  No PdurDestPduRef found: Connection will not be able to transmit TP-data!  */ , 
    0U /*  uint8 RxPduPoolOffset to pool: RxPduPool_TL_BRC_FR_32_Tp  */ , 
    1U /*  uint8 TxPduPoolOffset to pool: no TxPduPool configured!  */ , 
    1U /*  uint8 MultRec   */ , 
    0U /*  uint8 FrTpBandwidthLimitation   */ 
  } /*  TL_BRC_FR_32_TxFD_0xDFTN_0x00FD_253_TN_0x0030_48  */ 
}; /*!< Initializer list of all FrTpConnections used by the FrTp. */




#define FRTP_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"



#define FRTP_START_SEC_CONST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ Variable to satisfy FrTp_Init
 ----------------------------------------------------------------------------- */

/* PRQA S 3408 5 */ /* MD_FrTp_3408 */
CONST(uint8, FRTP_CONST) FrTp_Config = 0; /*!< Variable to satisfy FrTp_Init() for non-postbuild usage of the FrTp. */
/* PRQA S 5087 6 */ /* MD_MSR_19.1 */


#define FRTP_STOP_SEC_CONST_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"





/* end Fileversion check */

