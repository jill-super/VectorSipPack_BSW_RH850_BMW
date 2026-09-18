/**
*  \file
*
*  \brief       SWE Table.
*
*  \project     BMW Platform Software
*
*  \copyright   BMW AG 2015 - 2017
*
*  \version     5.3.1
*
*/

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-01-22 11:02:29.863103
*
------------------------------------------------------------------------------*/

#ifndef DLOG_SWE_TABLE_H
#define DLOG_SWE_TABLE_H

/*------------------------------------------------------------------------------
                      Include Section
------------------------------------------------------------------------------*/

#include <Std_Types.h>
#include "DlogClassic_Cfg.h"
#include "Dlog_Data.h"


/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/

/* Violation of MISRA rule 19.1, Reason: Including Dlog_MemMap.h is necessary throughout
   the file according to memory abstraction, see PRQA: 5087 */


/*------------------------------------------------------------------------------
                      Macros
-------------------------------------------------------------------------------*/

/* check version of the module */
#if (!DlogClassic_CHECK_VERSION(5,3,1))
   #error "Version of Dlog_SweTable.h does not match the version of the module!"
#endif

/* --- configuration of signature data -------------------------------------- */
#define DLOG_SIGNATURE_LENGTH           260u                    /* ... in uint8  */

#define DLOG_PTR_TO_SWE_FLASH_STATUS \
        {                            \
           &Dlog_BootFlashStatus,    /**< Pointer to flash status of Boot */ \
           &Dlog_Swe1FlashStatus     /**< Pointer to flash status of Swe1 */ \
        }

#define DLOG_PTR_TO_SWE_TABLE \
        {                            \
           &Dlog_SweBootTable,        /**< Pointer to the BootTable */        \
           &Dlog_Swe1Table          /**< Pointer to the Swe1Table */       \
        }

#define DLOG_PTR_TO_SWE_SIGNATURE \
        {                            \
           &Dlog_BootSignature[0],       /**< Pointer to signature of Boot */ \
           &Dlog_Swe1Signature[0]          /**< Pointer to the Swe1Signature */       \
        }

#define DLOG_SWE_TO_GROUP_MAP \
        { \
          0,          /**< Swe0 Info */       \
          0,          /**< Swe1 Info */       \
        }


/**
 * SWE groups
 */
#define DLOG_NUMBEROFSWEGROUPS 1u
#define DLOG_SWE_GROUP_TABLE           \
        {                              \
           DLOG_SWEGROUP_ALLOBLIGATORY  \
        }



#define DLOG_SIG_TABLE_SIZE           2u

#define DLOG_SIG_ADR_TABLE         \
        {                          \
           0x00008000uL,           \
           0x00058000uL           \
        }

#define DLOG_SIG_LEN_TABLE         \
        {                          \
           0x0004f91cuL,           \
           0x000a791cuL           \
        }

#define DLOG_SWE_SIGNATURE_TABLE \
        {                        \
           0,           /**< Signature of Swe0 */ \
           1,           /**< Signature of Swe1 */ \
           2 \
        }

/* --- configuration of swe data -------------------------------------- */

#define DLOG_SWE_BLOCK_TABLE_SIZE        1u

#define DLOG_SWE_BLOCK_INDEX_TABLE         \
        {                          \
           9u           \
        }

#define DLOG_SWE_BLOCK_LEN_TABLE         \
        {                          \
           21u           \
        }

#define DLOG_SWE_BLOCK_TABLE \
        {                        \
           0,       /**< Blocks of Swe1 */  \
           1 \
        }


/*------------------------------------------------------------------------------
                      Data Types
-------------------------------------------------------------------------------*/

typedef struct
{
   /** --- logistic data ---------------------------------------------------- */
   uint8 SgbmId[DLOG_SGBM_ID_LENGTH];
   /** --- SWE development Information -------------------------------------- */
   uint8 SweDevInfo[DLOG_SWE_DEV_INFO_LENGTH+1];
} Dlog_SweHeaderType;

typedef struct
{
   /** CRC of valid-flag flash segment                                        */
   uint8 SweCrcCheckSum[DLOG_SWE_CRC_CHECKSUM_AREA_LENGTH];
   /** SWE valid-flag                                                         */
   uint8 SweValidFlag[DLOG_SWE_VALID_FLAG_AREA_LENGTH];
   /** SWE programming dependencies flag                                      */
   uint8 ProgDepFlag[DLOG_PROG_DEP_AREA_LENGTH];
} Dlog_SweFlashStatusType;


/*------------------------------------------------------------------------------
                      Global Variables
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      Boot-SWE
------------------------------------------------------------------------------*/
/* extern declaration of Boot.-SWE table                                      */
#define BL_START_SEC_CONST_BOOTSWE_DESCRIPTION_TABLE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
extern CONST(Dlog_SweHeaderType, Dlog_CONST) Dlog_SweBootTable;
#define BL_STOP_SEC_CONST_BOOTSWE_DESCRIPTION_TABLE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
/* -------------------------------------------------------------------------- */

/* extern declaration of Boot.-SWE flash status                               */
#define BL_START_SEC_CONST_BOOTSWE_FLASH_STATUS
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
extern CONST(Dlog_SweFlashStatusType, Dlog_CONST) Dlog_BootFlashStatus;
#define BL_STOP_SEC_CONST_BOOTSWE_FLASH_STATUS
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
/* -------------------------------------------------------------------------- */

/* extern declaration of Boot.-SWE signature                                  */
#define BL_START_SEC_CONST_BOOTSWE_SIGNATURE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
extern CONST(uint8, Dlog_CONST) Dlog_BootSignature[DLOG_SIGNATURE_LENGTH];
#define BL_STOP_SEC_CONST_BOOTSWE_SIGNATURE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
/* -------------------------------------------------------------------------- */

/*------------------------------------------------------------------------------
                      Appl.-SWE1
------------------------------------------------------------------------------*/
/* extern declaration of Appl.-SWE1 table                                     */
#define APPL_START_SEC_CONST_SWE1_DESCRIPTION_TABLE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
extern CONST(Dlog_SweHeaderType, Dlog_CONST) Dlog_Swe1Table;
#define APPL_STOP_SEC_CONST_SWE1_DESCRIPTION_TABLE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
/* -------------------------------------------------------------------------- */

/* extern declaration of Appl.-SWE1 flash status                              */
#define APPL_START_SEC_CONST_SWE1_FLASH_STATUS
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
extern CONST(Dlog_SweFlashStatusType, Dlog_CONST) Dlog_Swe1FlashStatus;
#define APPL_STOP_SEC_CONST_SWE1_FLASH_STATUS
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
/* -------------------------------------------------------------------------- */

/* extern declaration of Appl.-SWE1 signature                                */
#define APPL_START_SEC_CONST_SWE1_SIGNATURE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
extern CONST(uint8, Dlog_CONST) Dlog_Swe1Signature[DLOG_SIGNATURE_LENGTH];
#define APPL_STOP_SEC_CONST_SWE1_SIGNATURE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */
/* -------------------------------------------------------------------------- */


#endif /* #ifndef DLOG_SWE_TABLE_H */

