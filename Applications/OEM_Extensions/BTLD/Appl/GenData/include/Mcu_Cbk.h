/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* Module       = Mcu_Cbk.h                                                   */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2013-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file contains Prototype Declarations for MCU callback Notification    */
/* Functions.                                                                 */
/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT                                 */
/*                                                                            */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        P1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  26-Aug-2013 : Initial version
 * V1.1.0:  21-Apr-2014 : Following changes are made:
 *                        1. Copyright information is updated.
 * V1.1.1:  15-Sep-2014 : As per CR 008 and mantis #19850, following change is
 *                        made:
 *                        2. Changes are made at all relevant places
 *                           accordingly to append U or UL after numeric values.
 * V1.1.2. 04-Dec-2015    1. Call back notifications McuEcmInitialNotification
 *                           are added for the implementation of
 *                           EAAR_PN0079_FSR_0102.
 * 1.1.3   29-Feb-2016 : Following changes are done as part of P1M
 *                       V4.01.00 release activity.
 *                       1. As per ticket ARDAAAE-1180, command line
 *                          option -f is added for file version display
 *                       2. Copyright Info is updated.
 * 1.1.4  29-Apr-2016  : Following changes are done as part of P1M
 *                       V4.01.01 release activity.
 *                       1. Call back notifications for
 *                          McuWVErrorNotification is added and file
 *                          inclusion is updated
 *                       2. Perl_File_Version_Hash is updated with latest
 *                          file version.
 */
/******************************************************************************/

/*******************************************************************************
**                       Generation Tool Version                              **
*******************************************************************************/
/*
 * TOOL VERSION:    1.1.5
 */
/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/

/*
 * INPUT FILE:    D:\usr\usage\Delivery\CBD17x\CBD1700369\D04\external\ThirdParty\Mcal_Rh850P1x\Supply\AUTOSAR_RH850_P1x_MCAL_Ver4.02.01.D\X1X\P1x\modules\mcu\generator\R403_mcu_P1x_BSWMDT.arxml
 *                D:\TEMP\DaVinci\Cfg-3931012\Generation\Cfg_Gen-1512723940593-0\AutosarFiles_ValGen-1512724983141-0\ExtGen_DrvMcu_ECUC_7121228914320388758.arxml
 * GENERATED ON:   8 Dec 2017 - 10:23:13
 */

#ifndef MCU_CBK_H
#define MCU_CBK_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Dem.h"
/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* AUTOSAR release version information */
#define MCU_CBK_AR_RELEASE_MAJOR_VERSION  4U
#define MCU_CBK_AR_RELEASE_MINOR_VERSION  0U
#define MCU_CBK_AR_RELEASE_REVISION_VERSION  3U

/* File version information */
#define MCU_CBK_C_SW_MAJOR_VERSION  1U
#define MCU_CBK_C_SW_MINOR_VERSION  0U


/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/


#define MCU_START_SEC_APPL_CODE
#include "MemMap.h"



#define MCU_STOP_SEC_APPL_CODE
#include "MemMap.h"

#endif /* MCU_CBK_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
