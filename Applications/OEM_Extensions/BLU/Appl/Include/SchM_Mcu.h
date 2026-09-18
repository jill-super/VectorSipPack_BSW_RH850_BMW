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
 *          File:  SchM_Mcu.h
 *        Config:  BTLD.dpa
 *   ECU-Project:  EcuInstance
 *
 *     Generator:  MICROSAR RTE Generator Version 4.10.0
 *                 RTE Core Version 1.10.0
 *       License:  License CBD1600224 for HELLA KGaA Hueck & Co. valid until 2017-09-30
 *
 *   Description:  Header of BSW Scheduler for BSW Module <Mcu>
 *********************************************************************************************************************/
#ifndef SCHM_MCU_H
# define SCHM_MCU_H

# ifdef __cplusplus
extern "C" {
# endif  /* __cplusplus */

# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define SchM_Enter_Mcu_MCU_REGISTER_PROTECTION()
#define SchM_Exit_Mcu_MCU_REGISTER_PROTECTION()
#define SchM_Enter_Mcu_PWR_MODE_PSC_PROTECTION()
#define SchM_Exit_Mcu_PWR_MODE_PSC_PROTECTION()
#define SchM_Enter_Mcu_VARIABLE_PROTECTION()
#define SchM_Exit_Mcu_VARIABLE_PROTECTION()

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif  /* __cplusplus */

#endif /* SCHM_MCU_H */
