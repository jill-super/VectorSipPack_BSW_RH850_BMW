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
 *          File:  Os_Cfg.h
 *        Config:  BTLD.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Os definitions
 *********************************************************************************************************************/

#ifndef _OS_CFG_H_
# define _OS_CFG_H_

/* Os definitions */

/* Tasks */
# define Default_BSW_Async_Task (0U)

/* Alarms */
# define Rte_Al_TE2_Default_BSW_Async_Task_0_10ms (0U)
# define Rte_Al_TE2_Default_BSW_Async_Task_0_20ms (1U)
# define Rte_Al_TE2_Default_BSW_Async_Task_0_5ms (2U)

/* Events */
# define Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_10ms (0x01)
# define Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_20ms (0x04)
# define Rte_Ev_Cyclic2_Default_BSW_Async_Task_0_5ms (0x02)

/* Spinlocks */

/* Resources */

/* ScheduleTables */

/* Cores */

/* Trusted Functions */


#endif /* _OS_CFG_H_ */
