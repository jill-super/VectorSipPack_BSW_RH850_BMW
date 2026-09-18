/*----------------------------------------------------------------------------*/
/**
*  \file
*
*  \brief       BMW stub NvM.h
*
*  This file contains the implementation of the BMW stub NvM
*  for usage in the BMW AUTOSAR Core Example.
*
*  \project     BMW AUTOSAR Core
*
*  \par         To be changed by user:
*               [yes]
*
*  \copyright   BMW AG 2014
*
*  \remarks
*  DISCLAIMER:
*  As the program is not fully tested and qualified for series production
*  use, the user shall not be entitled to use the program in connection
*  with any series production. BMW provides the user with the program only
*  as sample application (for testing purposes).
*
*/
/*----------------------------------------------------------------------------*/

#ifndef NVM_H
#define NVM_H

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif

#include "Fee_30_SmallSector.h"

#define NVM_BLOCK_BOOT_PROG_COUNTER       FeeConf_FeeBlockConfiguration_FeeNVM_BLOCK_BOOT_PROG_COUNTER
#define NVM_BLOCK_BOOT_PROG_DATA          FeeConf_FeeBlockConfiguration_FeeNVM_BLOCK_BOOT_PROG_DATA
#define NVM_BLOCK_BOOT_PROG_STATUS        FeeConf_FeeBlockConfiguration_FeeNVM_BLOCK_BOOT_PROG_STATUS
#define NVM_BLOCK_BOOT_SVK_HISTORY        FeeConf_FeeBlockConfiguration_FeeNVM_BLOCK_BOOT_SVK_HISTORY
#define NVM_BLOCK_DLOG_SVK_BACKUP_01      FeeConf_FeeBlockConfiguration_FeeNVM_BLOCK_DLOG_SVK_BACKUP_01
#define NVM_BLOCK_DLOG_SVK_BACKUP_02      FeeConf_FeeBlockConfiguration_FeeNVM_BLOCK_DLOG_SVK_BACKUP_02
#define NVM_BLOCK_DLOG_SVK_BACKUP_03      FeeConf_FeeBlockConfiguration_FeeNVM_BLOCK_DLOG_SVK_BACKUP_03
#define NVM_BLOCK_DLOG_SVK_SYS_SUPP       FeeConf_FeeBlockConfiguration_FeeNVM_BLOCK_DLOG_SVK_SYS_SUPP
#define NVM_BLOCK_DLOG_SVK_PLANT          FeeConf_FeeBlockConfiguration_FeeNVM_BLOCK_DLOG_SVK_PLANT

#ifndef NVM_REQ_OK
   #define NVM_REQ_OK               (0u)  /* The last asynchronous request has been finished successfully */
#endif
#ifndef NVM_REQ_NOT_OK
   #define NVM_REQ_NOT_OK           (1u)  /* The last asynchronous request has been finished unsuccessfully */
#endif
#ifndef NVM_REQ_PENDING
   #define NVM_REQ_PENDING          (2u)  /* An asynchronous request is currently being processed */
#endif
#ifndef NVM_REQ_INTEGRITY_FAILED
   #define NVM_REQ_INTEGRITY_FAILED (3u)  /* Result of the last NvM_ReadBlock or NvM_ReadAll is an integrity failure */
#endif
#ifndef NVM_REQ_BLOCK_SKIPPED
   #define NVM_REQ_BLOCK_SKIPPED    (4u)  /* The referenced block was skipped during a multi block request */
#endif
#ifndef NVM_REQ_NV_INVALIDATED
   #define NVM_REQ_NV_INVALIDATED   (5u)  /* The NV block is invalidated. */
#endif
#ifndef NVM_REQ_CANCELED
   #define NVM_REQ_CANCELED        (6u)  /* A WriteAll was cancelled */
#endif
#ifndef NVM_REQ_REDUNDANCY_FAILED
   #define NVM_REQ_REDUNDANCY_FAILED  (7u) /* A redundant block lost its redundancy */
#endif
#ifndef NVM_REQ_RESTORED_FROM_ROM
   #define NVM_REQ_RESTORED_FROM_ROM  (8u) /* Default data from ROM are restored */
#endif

/* Required by Prog */
#define NVM_BLOCK_OMC_DATA                FeeConf_FeeBlockConfiguration_FeeNVM_BLOCK_OMC_DATA
   
#endif /* NVM_H */
