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
 *          File:  Rte_DataHandleType.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header file containing Data Handle type declarations for component data structures
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DATA_HANDLE_TYPE_H
# define _RTE_DATA_HANDLE_TYPE_H


/**********************************************************************************************************************
 * Type definitions for implicit access to S/R communication
 *********************************************************************************************************************/
/* Types for Data Handles section */

typedef struct
{
  Bs_LifeCycleRequestType value;
} Rte_DE_Bs_LifeCycleRequestType;

typedef struct
{
  Darh_LifeCycleRequestType value;
} Rte_DE_Darh_LifeCycleRequestType;

typedef struct
{
  Dlog_LifeCycleRequestType value;
} Rte_DE_Dlog_LifeCycleRequestType;

typedef struct
{
  IntegrationSample_EcuRunStateModeRequestType value;
} Rte_DE_IntegrationSample_EcuRunStateModeRequestType;

typedef struct
{
  Omc_LifeCycleRequestType value;
} Rte_DE_Omc_LifeCycleRequestType;

typedef struct
{
  StdDiag_LifeCycleRequestType value;
} Rte_DE_StdDiag_LifeCycleRequestType;

typedef struct
{
  SysTime_LifeCycleRequestType value;
} Rte_DE_SysTime_LifeCycleRequestType;

#endif /* _RTE_DATA_HANDLE_TYPE_H */
