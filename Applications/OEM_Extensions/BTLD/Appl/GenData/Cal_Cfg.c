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
 *            Module: Cal
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: Renesas RH850 P1M R7F701363EAFP
 *    License Scope : The usage is restricted to CBD1700369_D04
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Cal_Cfg.c
 *   Generation Time: 2018-01-04 11:34:40
 *           Project: BTLD - Version 1.0
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

#define CAL_CFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Cal_Types.h"

/* Include of configured services */
#include "Cpl_MD5.h" 
#include "Cpl_SHA.h" 
#include "Cpl_SSG.h" 
#include "Cpl_SigBMWVrfy.h" 


/**********************************************************************************************************************
 *  GLOBAL CONSTANTS
 *********************************************************************************************************************/

#define CAL_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(Cal_HashConfigType, CAL_CONST) Cal_HashConfig[2] = 
{
  {
    0U /*  Id  */ , 
    Cpl_MD5Start /*  Start  */ , 
    Cpl_MD5Update /*  Update  */ , 
    Cpl_MD5Finish /*  Finish  */ , 
    &CplMD5Config /*  Init  */ 
  }, 
  {
    1U /*  Id  */ , 
    Cpl_SHAStart /*  Start  */ , 
    Cpl_SHAUpdate /*  Update  */ , 
    Cpl_SHAFinish /*  Finish  */ , 
    &CplSHAConfig /*  Init  */ 
  }
}; /* PRQA S 3408 */ /* MD_CAL_8.8 */

CONST(Cal_RandomGenerateConfigType, CAL_CONST) Cal_RandomGenerateConfig[1] = 
{
  {
    2U /*  Id  */ , 
    Cpl_SSG /*  Function  */ , 
    &CplSSGConfig_RandomGenerate /*  Init  */ 
  }
}; /* PRQA S 3408 */ /* MD_CAL_8.8 */

CONST(Cal_RandomSeedConfigType, CAL_CONST) Cal_RandomSeedConfig[1] = 
{
  {
    3U /*  Id  */ , 
    Cpl_SSGStart /*  Start  */ , 
    Cpl_SSGUpdate /*  Update  */ , 
    Cpl_SSGFinish /*  Finish  */ , 
    &CplSSGConfig_RandomSeed /*  Init  */ 
  }
}; /* PRQA S 3408 */ /* MD_CAL_8.8 */

CONST(Cal_SignatureVerifyConfigType, CAL_CONST) Cal_SignatureVerifyConfig[2] = 
{
  {
    4U /*  Id  */ , 
    Cpl_SigBMWVrfyStart /*  Start  */ , 
    Cpl_SigBMWVrfyUpdate /*  Update  */ , 
    Cpl_SigBMWVrfyFinish /*  Finish  */ , 
    &CplSigBMWVrfyConfig_MD5 /*  Init  */ 
  }, 
  {
    5U /*  Id  */ , 
    Cpl_SigBMWVrfyStart /*  Start  */ , 
    Cpl_SigBMWVrfyUpdate /*  Update  */ , 
    Cpl_SigBMWVrfyFinish /*  Finish  */ , 
    &CplSigBMWVrfyConfig_SHA /*  Init  */ 
  }
}; /* PRQA S 3408 */ /* MD_CAL_8.8 */


#define CAL_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

