/*----------------------------------------------------------------------------*/
/**
 * \file
 *
 * \brief       Read NV-Memory into Mirror.
 *
 * \project     BMW AUTOSAR Core
 *
 * \par         To be changed by user:
 *              [no]
 *
 * \copyright   BMW AG 2015 - 2016
 *
 *  \version     5.3.1
 *
 */
/*----------------------------------------------------------------------------*/

#ifndef DLOG_NVM_H_
#define DLOG_NVM_H_


/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include <Std_Types.h>                      /* AUTOSAR Standard Types         */
#include "DlogClassic_Cfg.h"

#include <NvM.h>                                    /* Contains NVM_BLOCK_xxx */


/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/* check version of the module */
#if (!DlogClassic_CHECK_VERSION(5,3,1))
   #error "Version of Dlog_Nvm.c does not match the version of the module!"
#endif

   #define DLOG_NVM_BLOCK_PROG_DATA                  NVM_BLOCK_BOOT_PROG_DATA
   #define DLOG_NVM_BLOCK_SVK_HISTORY                NVM_BLOCK_BOOT_SVK_HISTORY
   #define DLOG_NVM_BLOCK_SVK_SYS_SUPP               NVM_BLOCK_DLOG_SVK_SYS_SUPP
   #define DLOG_NVM_BLOCK_SVK_PLANT                  NVM_BLOCK_DLOG_SVK_PLANT
   #define DLOG_NVM_BLOCK_SVK_BACKUP_01          NVM_BLOCK_DLOG_SVK_BACKUP_01
   #define DLOG_NVM_BLOCK_SVK_BACKUP_02          NVM_BLOCK_DLOG_SVK_BACKUP_02
   #define DLOG_NVM_BLOCK_SVK_BACKUP_03          NVM_BLOCK_DLOG_SVK_BACKUP_03

/*------------------------------------------------------------------------------
                      Data Types
-------------------------------------------------------------------------------*/

typedef void* Dlog_NvmMirrorPtr;

typedef enum {
   DLOG_NVM_OK,
   DLOG_NVM_NOT_OK,
   DLOG_NVM_PENDING
} Dlog_NvmBlockState;

typedef enum {
   DLOG_INITIAL,
   DLOG_PENDING
} Dlog_OpStatusType;


/*------------------------------------------------------------------------------
                      Global Function Declarations
-------------------------------------------------------------------------------*/

#define Dlog_START_SEC_CODE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */


void Dlog_InitNvmBlock
   (
         uint16 blockId,
         Dlog_NvmMirrorPtr mirror,
         uint16 size,
         Std_ReturnType (*InitFunction)(void)
   );

extern void Dlog_InitNvm( void );


extern Dlog_NvmBlockState Dlog_WriteNvmBlockAsync
   (
      uint16 blockId,
      Dlog_NvmMirrorPtr mirror, /* PRQA S 3673 *//* configuration dependent */
      Dlog_OpStatusType OpStatus
   );

extern Std_ReturnType Dlog_WriteNvmBlock
   (
      uint16 blockId,
      Dlog_NvmMirrorPtr mirror,
      boolean wait
   );

extern Dlog_NvmBlockState Dlog_GetNvmBlockState
      (
         uint16 blockId
      );

#define Dlog_STOP_SEC_CODE
#include "Dlog_MemMap.h"  /* PRQA S 5087 */

#endif /* DLOG_NVM_H_ */

