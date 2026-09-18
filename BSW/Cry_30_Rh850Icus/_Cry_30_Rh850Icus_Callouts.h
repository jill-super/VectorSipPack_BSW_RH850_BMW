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
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Cry_30_Rh850Icus_Callouts.h
 *    Component:  DrvCry_Rh850Icus
 *       Module:  MICROSAR Cryptographic library module (CRY)
 *    Generator:  -
 *
 *  Description:  This header file for the callouts of the Cry_30_Rh850Icus.
 *********************************************************************************************************************/


#if !defined (CRY_30_RH850ICUS_CALLOUTS_H)
# define CRY_30_RH850ICUS_CALLOUTS_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
# include "Std_Types.h"
# include "Cry_30_Rh850Icus_Cfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/

# if (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON)
/* BswM User ID of the Cry driver */
#  define CRY_30_RH850ICUS_BSWM_USER_ID    0
# endif

/* SHE Error codes */
# define CRY_30_RH850ICUS_SHE_ERC_NO_ERROR                   (0x00)
# define CRY_30_RH850ICUS_SHE_ERC_SEQUENCE_ERROR             (0x01)
# define CRY_30_RH850ICUS_SHE_ERC_BUSY                       (0x02)
# define CRY_30_RH850ICUS_SHE_ERC_KEY_NOT_AVAILABLE          (0x10)
# define CRY_30_RH850ICUS_SHE_ERC_KEY_INVALID                (0x11)
# define CRY_30_RH850ICUS_SHE_ERC_KEY_EMPTY                  (0x12)
# define CRY_30_RH850ICUS_SHE_ERC_NO_SECURE_BOOT             (0x20)
# define CRY_30_RH850ICUS_SHE_ERC_KEY_WRITE_PROTECTED        (0x30)
# define CRY_30_RH850ICUS_SHE_ERC_KEY_UPDATE_ERROR           (0x31)
# define CRY_30_RH850ICUS_SHE_ERC_MEMORY_FAILURE             (0x50)
# define CRY_30_RH850ICUS_SHE_ERC_RNG_SEED                   (0x40)
# define CRY_30_RH850ICUS_SHE_ERC_NO_DEBUGGING               (0x60)
# define CRY_30_RH850ICUS_SHE_ERC_GENERAL_ERROR              (0xFF)

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
# if (CRY_30_RH850ICUS_HARDWARE_ERROR_CODE == STD_ON)
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_HardwareErrorCode_Callout()
 *********************************************************************************************************************/
/*! \brief       Provides the error code of the hardware.
 *  \details     This callout can be used to convert the hardware error code to a platform independant value
 *               and pass it to e.g. the BswM.
 *  \param[in]   error  Hardware Error Code of the Hardware.
 *  \context     TASK
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
extern FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_HardwareErrorCode_Callout(uint32 error);

# endif
# if (CRY_30_RH850ICUS_DATA_FLASH_SYNCHRONISATION == STD_ON)
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashReadStart_Callout()
 *********************************************************************************************************************/
/*! \brief       Notification about the start of a read access to the data flash.
 *  \details     -
 *  \return      TRUE if read access is granted, otherwise FALSE
 *  \context     TASK
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
extern FUNC(boolean, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashReadStart_Callout(void);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashReadEnd_Callout()
 *********************************************************************************************************************/
/*! \brief       Notification about the end of a read access to the data flash.
 *  \details     -
 *  \context     TASK
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
extern FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashReadEnd_Callout(void);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashWriteStart_Callout()
 *********************************************************************************************************************/
/*! \brief       Notification about the start of a write access to the data flash.
 *  \details     -
 *  \return      TRUE if write access is granted, otherwise FALSE
 *  \context     TASK
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
extern FUNC(boolean, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashWriteStart_Callout(void);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashWriteEnd_Callout()
 *********************************************************************************************************************/
/*! \brief       Notification about the end of a write access to the data flash.
 *  \details     -
 *  \context     TASK
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
extern FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashWriteEnd_Callout(void);

# endif
# if (CRY_30_RH850ICUS_DATA_FLASH_CONTROL == STD_ON)
/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashSetReadMode_Callout()
 *********************************************************************************************************************/
/*! \brief       This Callout sets the flash sequencer into read mode if it is no already in read mode.
 *  \details     If a command which requires writing of key information is stopped by the CMD_CANCEL command,
 *               the flash sequencer may remain in dat flash P/E mode. Therfore it must be switched back to read mode.
 *  \context     TASK
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
extern FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashSetReadMode_Callout(void);

/**********************************************************************************************************************
 *  Cry_30_Rh850Icus_DataFlashReturnFromCommandLockedState_Callout()
 *********************************************************************************************************************/
/*! \brief       This Callout checks if the FACI is in command locked state.
 *               If this is the case, it shall return to normal mode.
 *  \details     -
 *  \context     TASK
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *********************************************************************************************************************/
extern FUNC(void, CRY_30_RH850ICUS_CODE) Cry_30_Rh850Icus_DataFlashReturnFromCommandLockedState_Callout(void);

# endif

#endif /* CRY_30_RH850ICUS_CALLOUTS_H */

/**********************************************************************************************************************
 *  END OF FILE: CRY_30_RH850ICUS_CALLOUTS.H
 *********************************************************************************************************************/

