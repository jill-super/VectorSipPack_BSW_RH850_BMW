/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2017 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/*!        \file  Cry_30_Rh850Icus.h
 *        \brief  This header file implements the CRY API for the SHE.
 *
 *      \details  -
 *********************************************************************************************************************/

/* Hardware Interface (DrvCry_Rh850Icus) */
/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Tobias Finke                  vistof        Vector Informatik GmbH
 *  Markus Schneider              vismss        Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2015-05-22  vistof  ESCAN00083124 Creation
 *  01.00.01  2015-05-26  vismss  ESCAN00083152 Fixed miscellaneous warnings
 *  01.01.00  2015-08-07  vistof  ESCAN00084354 Fixed AES enc/dec and CMAC gen/ver when using a key slot.
 *                                              Fixed wrong byte order when reading and writing from/to ICU.
 *  01.02.00  2015-08-25  vistof  ESCAN00084771 Changed SFR access from bit-fields to mask operations
 *                                              MISRA compliance and improved robustness.
 *                                              Fixed compiler errors in asynchronous configuration.
 *                                              Added state machine for SHE Services.
 *                                              Added additional checks for KeyExtract when provisioning is enabled
 *  01.02.01  2015-10-26  vistof  ESCAN00086069 Added check before issuing cancel command to prevent blocking of ECU
 *                                ESCAN00086070 Fixed missing defines for CRY state machine
 *                                ESCAN00086090 Fixed wrong handling of MAC truncation in CmacAes128Gen and CmacAes128VGen
 *  01.02.02  2016-01-11  vistof  ESCAN00087382 Fixed issue with request for random numbers smaller than 16 bytes
 *  01.03.00  2016-06-06  vistof  ESCAN00089849 Fixed Support for 20 key slots in ICUSD and ICUSE
 *                                ESCAN00090321 Config option for variable base address of ICUS
 *                                ESCAN00090323 Configurable interpretation of the KeyID
 *                                ESCAN00090499 Use CMD_MAC_VERIFY instead of CMD_MAC_GENERATE in mac verification  primitive
 *                                ESCAN00090500 Added support for mac length in bit for MacVerify
 *  01.03.01  2016-06-24  vistof  ESCAN00090651 Fixed buffer overflow in Cry_30_Rh850Icus_KeyExtract when CsmSymKeyExtractMaxKeySize
 *                                              is smaller than 48 bytes and CRY_30_RH850ICUS_KEYWRAPSYM_FOR_PROVISION is STD_OFF
 *  01.03.02  2016-07-31  vistof  ESCAN00091252 Added Timeout-API
 *  02.00.00  2016-10-21  vistof  ESCAN00092458 FEAT-1995: Support CRY(HW) and CRY(SW) in the same SIP
 *                                ESCAN00091625 Fixed ECC-Error on P1M because variable located in wrong memory section
 *                                ESCAN00091642 MacVerification causes the ECU to block on P1M derivatives
 *  02.00.01  2017-01-19  vistof  ESCAN00091479 Added support for FHVE on derivatives like P1M
 *            2017-02-16  vistof  ESCAN00094040 Fixed wrong software check for correct AuthID
 *  02.01.00  2017-04-06  vistof  ESCAN00094663 SafeBsw release
 *                                ESCAN00091091 Added Callouts for Data Flash Synchronisation
 *                                ESCAN00094664 Added Callouts to handle FACI interface commands
 *                                ESCAN00094665 Added Callouts to provide internal ICUS errors to the application
 *                                ESCAN00094666 Fixed state handling of random generate in async configuration
 *  02.01.01  2017-04-12  vistof  ESCAN00094747 Removed unnecessary includes
 *                                ESCAN00094748 Descriptions for SafeBsw are missing
 *                                ESCAN00094753 Disable not used helper functions
 *  02.02.00  2017-05-03  vistof  ESCAN00095666 Adaption to base component
 *                                ESCAN00095667 Fixed Second keyslot not usable in RAW configuration
 *                                ESCAN00095668 Timeout location callout provides wrong information
 *  02.02.01  2017-07-14  vistof  ESCAN00095896 Fixed Compiler Error: Wrong define for memclass in FUNC() macro of Cry_30_Rh850Icus_RngSeedFinishInternal
 *  02.03.00  2017-10-11  vistof  STORYC-2777   SafeBsw Release
 *  02.03.01  2017-10-16  vistof  ESCAN00097054 Fixed Compiler error: New memory section opened before closing the former one.
 *                                ESCAN00097090 Fixed Compiler error: Typo in compiler abstraction causes undefined macro
 *********************************************************************************************************************/

/* Base Component (DrvCry__baseAsr) */
/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Tobias Finke                  vistof        Vector Informatik GmbH
 *  Stefan Rombach                visros        Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2017-05-11  vistof                Initial Creation, based on existing Cry implementations
 *  01.00.01  2017-07-12  vistof  ESCAN00095851 Wrong define for memclass in FUNC() macro of Cry_30_Rh850Icus_RngSeedFinishInternal
 *  02.01.00  2017-10-11  vistof  STORYC-2773   Added Self Test for CMAC Verification
 *  02.01.01  2017-10-16  vistof  ESCAN00097050 Fixed Compiler error: New memory section opened before closing the former one.
 *********************************************************************************************************************/

#if !defined (CRY_30_RH850ICUS_H)
# define CRY_30_RH850ICUS_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/

# include "Cry_30_Rh850Icus_Cfg.h"

# if ( CRY_30_RH850ICUS_AESENCRYPT128CONFIG == STD_ON )
#  include "Cry_30_Rh850Icus_AesEncrypt128.h"
# endif

# if ( CRY_30_RH850ICUS_AESDECRYPT128CONFIG == STD_ON )
#  include "Cry_30_Rh850Icus_AesDecrypt128.h"
# endif

# if ( CRY_30_RH850ICUS_CMACAES128GENCONFIG == STD_ON )
#  include "Cry_30_Rh850Icus_CmacAes128Gen.h"
# endif

# if ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON )
#  include "Cry_30_Rh850Icus_CmacAes128Ver.h"
# endif

# if ( CRY_30_RH850ICUS_RNGCONFIG == STD_ON )
#  include "Cry_30_Rh850Icus_Rng.h"
# endif

# if ( CRY_30_RH850ICUS_KEYEXTRACTCONFIG == STD_ON )
#  include "Cry_30_Rh850Icus_KeyExtract.h"
# endif
# if ( CRY_30_RH850ICUS_KEYWRAPSYMCONFIG == STD_ON )
#  include "Cry_30_Rh850Icus_KeyWrapSym.h"
# endif

# if ( (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON) )
#  include "Cry_30_Rh850Icus_Callouts.h"
# endif

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Version - BCD coded version number - Main- and Sub-Version - Release-Version */
# define CRY_30_RH850ICUS_VERSION                         (0x0203u)
# define CRY_30_RH850ICUS_RELEASE_VERSION                 (0x01u)

/* Vendor and module identification */
# define CRY_30_RH850ICUS_VENDOR_ID                       (30u)
# define CRY_30_RH850ICUS_MODULE_ID                       (255u)
# define CRY_30_RH850ICUS_INSTANCE_ID                     (0u)

/* AUTOSAR Software Specification Version Information */
# define CRY_30_RH850ICUS_AR_RELEASE_MAJOR_VERSION        (0x04)
# define CRY_30_RH850ICUS_AR_RELEASE_MINOR_VERSION        (0x00)
# define CRY_30_RH850ICUS_AR_RELEASE_REVISION_VERSION     (0x03)

/* Component Version Information */
/* No u suffix is used for shift operator because some compilers may have problems */
# define CRY_30_RH850ICUS_SW_MAJOR_VERSION                (CRY_30_RH850ICUS_VERSION >> 8)
# define CRY_30_RH850ICUS_SW_MINOR_VERSION                (CRY_30_RH850ICUS_VERSION & 0x00FFu)
# define CRY_30_RH850ICUS_SW_PATCH_VERSION                (CRY_30_RH850ICUS_RELEASE_VERSION)

/* State machine job status */
# define CRY_30_RH850ICUS_STATE_IDLE                      (0x01u)
# define CRY_30_RH850ICUS_STATE_PENDING_START             (0x02u)
# define CRY_30_RH850ICUS_STATE_START                     (0x03u)
# define CRY_30_RH850ICUS_STATE_PENDING_UPDATE            (0x04u)
# define CRY_30_RH850ICUS_STATE_UPDATE                    (0x05u)
# define CRY_30_RH850ICUS_STATE_PENDING_FINISH            (0x06u)

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

# define CRY_30_RH850ICUS_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
*  Cry_30_Rh850Icus_Init()
*********************************************************************************************************************/
/*! \brief       Initializes the Cry.
 *  \details     Initialize the enabled services and set the global service state to idle.
 *  \pre         Module is uninitialized.
 *  \pre         Cry_30_Rh850Icus_InitMemory has been called unless Cry_30_Rh850Icus_InitMemory is initialized
                 by start-up code.
 *  \context     ANY
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \trace       CREQ-121603
 *********************************************************************************************************************/
FUNC (void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_Init( void );

/**********************************************************************************************************************
*  Cry_30_Rh850Icus_InitMemory()
*********************************************************************************************************************/
/*! \brief       Power-up memory initialization.
 *  \details     Service to initialize module global variables at power up. This function initializes the
 *               variables in *_INIT_* sections. Used in case they are not initialized by the startup code.
 *  \pre         Module is uninitialized.
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \trace       CREQ-126158
 *********************************************************************************************************************/
FUNC (void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_InitMemory( void );

# if ( CRY_30_RH850ICUS_VERSION_INFO_API == STD_ON )
/**********************************************************************************************************************
*  Cry_30_Rh850Icus_GetVersionInfo()
*********************************************************************************************************************/
/*! \brief       Retrieves the version information of the Cry module.
 *  \details     Stores version information, i.e. Module Id, Vendor Id, Vendor specific version numbers to structure
                 pointed by cryVerInfoPtr.
 *  \param[out]  cryVerInfoPtr          Pointer where to store the version information of this module. Parameter
                                        must not be NULL.
 *  \pre         -
 *  \context     TASK
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \config      CRY_30_RH850ICUS_VERSION_INFO_API
 *  \trace       CREQ-121602
 *********************************************************************************************************************/
FUNC( void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_GetVersionInfo( P2VAR( Std_VersionInfoType, AUTOMATIC, CRY_30_RH850ICUS_APPL_VAR) cryVerInfoPtr);
# endif /* (CRY_30_RH850ICUS_VERSION_INFO_API == STD_ON) */


#if ( (CRY_30_RH850ICUS_SELF_TEST == STD_ON) && ( CRY_30_RH850ICUS_CMACAES128VERCONFIG == STD_ON ) )
/**********************************************************************************************************************
 * Cry_30_Rh850Icus_SelfTest()
 **********************************************************************************************************************/
/*! \brief          Perform a self test of the hardware.
 *  \details        Performs two CMAC verifications with one valid and one invalid test vector. 
 *  \return         CSM_E_OK      Self test was successful.
 *                  CSM_E_NOT_OK  Self test was not successful.
 *                  CSM_E_BUSY    Hardware was busy.
 *  \pre            None
 *  \context        TASK
 *  \reentrant      FALSE
 *  \synchronous    TRUE
 *  \trace          CREQ-139835
 *  \note           The function is called during init. If it fails, init of the driver will not succeed.
 *                  The function can be cyclically called to ensure correct hardware behaviour.
 *                  If a failure is detected the user is responsible to take appropriate measures.
 **********************************************************************************************************************/
FUNC(Csm_ReturnType, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_SelfTest(void);
#endif

# define CRY_30_RH850ICUS_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* CRY_30_RH850ICUS_H */


/**********************************************************************************************************************
*  EXCLUSIVE AREAS OF THE MODULE
*********************************************************************************************************************/
/*
 * \exclusivearea CRY_30_RH850ICUS_EXCLUSIVE_AREA
 * Ensures consistency while validating if the global state Cry_30_Rh850Icus_ServiceState is IDLE and setting it to
 * START. This area ensures that no other services can start a service to the same time.
 * \protects global state Cry_30_Rh850Icus_ServiceState, local primitive states Cry_30_Rh850Icus_<Primitive>_Status
 * \usedin Cry_30_Rh850Icus_<Primitive>Start(..), Cry_30_Rh850Icus_<Primitive>StartInternal(..),
 * Cry_30_Rh850Icus_RngGenerate(..), Cry_30_Rh850Icus_RngGenerateInternal(..), Cry_30_Rh850Icus_SelfTest(..)
 * \exclude Cry_30_Rh850Icus_<Primitive>Update, Cry_30_Rh850Icus_<Primitive>Finish
 * \length SHORT This exclusive area covers the check and setting of variables.
 * \endexclusivearea
 */


/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS.H
 *********************************************************************************************************************/

