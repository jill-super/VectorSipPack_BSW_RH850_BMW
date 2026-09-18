/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2010 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  flash.h
 *    Component:  -
 *       Module:  -
 *    Generator:  - 
 *
 *    This file is a stub to enable BAC application to be linked. During Bootloader development this file has to by
 *    replaced by the "real" one.
 *********************************************************************************************************************/

/*******************************************************************************
**                      Author Identity                                       **
********************************************************************************
**                                                                            **
** Initials     Name                       Company                            **
** --------     -------------------------  ---------------------------------- **
**   visget     Matthias Gette             Vector Informatik GmbH             **
*******************************************************************************/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/

/*
 * V1.0.0: 02.07.2010, visget: Initial version
 */

#ifndef FLASH_H
#define FLASH_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Std_Types.h"         /* standard core data types                    */
#include "fbl_inc.h"
#include "flashdrv.h"          /* HIS flash driver specific definitions       */
#include "flashrom.h"          /* HIS flash driver                            */


/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/
#define LOADER_VERSION_MAJOR     0x03        /* loader major version number   */
#define LOADER_VERSION_MINOR     0x00        /* loader minor version number   */
#define LOADER_VERSION_PATCH     0x00        /* loader patch level number     */

#define FLASH_NOK                0x01u       /* status: operation failed      */
#define FLASH_OK                 0x00u       /* status: operation succeeded   */


/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/
typedef uint8  flashStatus_t;               /* runtime return status type     */
typedef uint8  flashKey_t;                  /* flash driver encryption key    */
                                            /* type                           */
typedef uint32 flashAddress_t;              /* target address type            */
typedef uint32 flashMemoryLength_t;         /* memory length type             */


#if defined( BTLD ) || defined ( BLU )
/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/
extern tFlashParam  FlashCurrentParam;

/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/
extern void FlashInitMemory(void);

extern flashStatus_t FlashInit(flashKey_t encodingKey);

extern flashStatus_t FlashDeInit(void);

extern flashStatus_t FlashErase
(
   flashAddress_t      memoryStartAddress,
   flashMemoryLength_t memoryLength
);

extern flashStatus_t FlashWrite
(
   uint8 *             sourceDataPtr,
   flashAddress_t      memoryStartAddress,
   flashMemoryLength_t memoryLength
);

#ifdef BLU
/* polling mode in BLU */
#define Fls_GlobalSuspend()
#define Fls_GlobalRestore()
#else
/* use OSEK to disable/restore interrupts */
#define Fls_GlobalSuspend()   VStdSuspendAllInterrupts()
#define Fls_GlobalRestore()   VStdResumeAllInterrupts()
#endif

/*******************************************************************************
**                      Callback Function Prototypes                          **
*******************************************************************************/
#define FLASH_START_SEC_CODE_CALLBACKS
#include "MemMap.h"                         /* all callback functions must be */
                                            /* in this section so they will   */
                                            /* be loaded in RAM               */
extern void  HIStriggerWatchdog(void);

#define FLASH_STOP_SEC_CODE_CALLBACKS
#include "MemMap.h"

#endif /* BTLD */

#endif /* FLASH_H */

/*** End of file **************************************************************/
