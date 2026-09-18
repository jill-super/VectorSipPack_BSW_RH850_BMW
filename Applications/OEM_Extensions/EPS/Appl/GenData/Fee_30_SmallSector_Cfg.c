#define FEE_30_SMALLSECTOR_IMPLEMENTATION_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Fee_30_SmallSector.h"
#include "NvM_Cbk.h"

/**********************************************************************************************************************
 *  VERSION CHECK
 *********************************************************************************************************************/
 
#if (   (FEE_30_SMALLSECTOR_CFG_MAJOR_VERSION != (2u)) \
     || (FEE_30_SMALLSECTOR_CFG_MINOR_VERSION != (0u)))
# error "Version numbers of Fee_30_SmallSector_Cfg.c and Fee_30_SmallSector_Cfg.h are inconsistent!"
#endif

/**********************************************************************************************************************
 *  LOCAL DATA
 *********************************************************************************************************************/

#define FEE_30_SMALLSECTOR_START_SEC_CONST_8BIT
#include "MemMap.h"    /* PRQA S 5087 */ /* MD_MSR_19.1 */

CONST(uint8, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_DatasetSelectionBits = (4U);

#define FEE_30_SMALLSECTOR_STOP_SEC_CONST_8BIT
#include "MemMap.h"   /* PRQA S 5087 */ /* MD_MSR_19.1 */

#define FEE_30_SMALLSECTOR_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* PRQA S 686 PARTITIONLIST */ /* MD_FEE_30_SMALLSECTOR_9.2 */
CONST(Fee_30_SmallSector_PartitionConfigType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_PartitionConfigList[FEE_30_SMALLSECTOR_NUMBER_OF_PARTITIONS] = 
{
   /*  FEEPARTITIONCONFIGURATION_APPL  */ {
     /*  Partition Start Address  */ 0x00000200UL, 
     /*  Partition Address Alignment  */ 0x0040U, 
     /*  Partition Write Alignment  */ 0x0004U, 
     /*  Partition Read Alignment  */ 0x0001U, 
     /*  FLS Device Index  */ 0x0000U, 
     /*  FLS API Reference  */ &Fee_30_SmallSector_FlsApi0, 
     /*  FLS Erase Value  */ 0xFFU, 
     /*  FLS Blank Check API Enabled  */ TRUE, 
    {
       /*  FeeBlockConfiguration  */ 0x0010U, 
       /*  FeeDemPrimaryDataBlock0  */ 0x0020U, 
       /*  FeeDemPrimaryDataBlock1  */ 0x00B0U, 
       /*  FeeDemAdminDataBlock  */ 0x0090U, 
       /*  FeeDemStatusDataBlock  */ 0x00A0U, 
       /*  FeeDemPrimaryDataBlock2  */ 0x0030U, 
       /*  FeeDemPrimaryDataBlock3  */ 0x0040U, 
       /*  FeeDemPrimaryDataBlock4  */ 0x0050U, 
       /*  FeeDemPrimaryDataBlock5  */ 0x0060U, 
       /*  FeeDemPrimaryDataBlock6  */ 0x0070U, 
       /*  FeeDemPrimaryDataBlock7  */ 0x0080U, 
       /*  FeeNVM_BLOCK_DCM_ROE  */ 0x00C0U, 
       /*  FeeTestStampDefaults  */ 0x00D0U, 
       /*  FeeOmcDependencyNVMData  */ 0x0140U, 
       /*  FeeDemSecondaryDataBlock0  */ 0x0150U, 
       /*  FeeDemSecondaryDataBlock1  */ 0x0160U, 
       /*  FeeDemSecondaryDataBlock2  */ 0x0170U, 
       /*  FeeDLOG_SVK_BACKUP_0  */ 0x0180U, 
       /*  FeeDLOG_SVK_BACKUP_1  */ 0x0190U, 
       /*  FeeDLOG_SVK_BACKUP_2  */ 0x01A0U, 
       /*  FeeNVM_BLOCK_DARH_DiagnoseMasterEnable  */ 0x01B0U, 
       /*  Fee_BLOCK_DARH  */ 0x01C0U, 
       /*  FeeNVM_BLOCK_DLOG_SvkEntry  */ 0x01D0U
    }
  }, 
   /*  FEEPARTITIONCONFIGURATION_BTLD  */ {
     /*  Partition Start Address  */ 0x00000000UL, 
     /*  Partition Address Alignment  */ 0x0040U, 
     /*  Partition Write Alignment  */ 0x0004U, 
     /*  Partition Read Alignment  */ 0x0001U, 
     /*  FLS Device Index  */ 0x0000U, 
     /*  FLS API Reference  */ &Fee_30_SmallSector_FlsApi0, 
     /*  FLS Erase Value  */ 0xFFU, 
     /*  FLS Blank Check API Enabled  */ TRUE, 
    {
       /*  FeeNVM_BLOCK_BOOT_SVK_HISTORY  */ 0x0100U, 
       /*  FeeNVM_BLOCK_DLOG_SVK_PLANT  */ 0x00F0U, 
       /*  FeeNVM_BLOCK_DLOG_SVK_SYS_SUPP  */ 0x00E0U, 
       /*  FeeNVM_BLOCK_BOOT_PROG_STATUS  */ 0x0110U, 
       /*  FeeNVM_BLOCK_BOOT_PROG_DATA  */ 0x0120U, 
       /*  FeeNVM_BLOCK_BOOT_PROG_COUNTER  */ 0x0130U
    }
  }
};
/* PRQA L: PARTITIONLIST */

/* BlockConfigList is sorted by BlockNumbers in ascending order */
CONST(Fee_30_SmallSector_BlockConfigType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_BlockConfigList[FEE_30_SMALLSECTOR_NUMBER_OF_BLOCKS] =
{
  {
     /*  Block Start Address  */ 0x00000000UL, 
     /*  Data Length  */ 0x0004U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x02U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000080UL, 
     /*  Data Length  */ 0x0020U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000001C0UL, 
     /*  Data Length  */ 0x0020U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000200UL, 
     /*  Data Length  */ 0x0020U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000240UL, 
     /*  Data Length  */ 0x0020U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000280UL, 
     /*  Data Length  */ 0x0020U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000002C0UL, 
     /*  Data Length  */ 0x0020U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000300UL, 
     /*  Data Length  */ 0x0020U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000100UL, 
     /*  Data Length  */ 0x000CU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000140UL, 
     /*  Data Length  */ 0x0030U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000000C0UL, 
     /*  Data Length  */ 0x0020U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000340UL, 
     /*  Data Length  */ 0x0006U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000380UL, 
     /*  Data Length  */ 0x0003U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000000C0UL, 
     /*  Data Length  */ 0x0029U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000040UL, 
     /*  Data Length  */ 0x0039U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000000UL, 
     /*  Data Length  */ 0x0004U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000100UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000140UL, 
     /*  Data Length  */ 0x0015U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000180UL, 
     /*  Data Length  */ 0x0004U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000003C0UL, 
     /*  Data Length  */ 0x0002U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000400UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000440UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000480UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000004C0UL, 
     /*  Data Length  */ 0x0029U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000500UL, 
     /*  Data Length  */ 0x0029U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000540UL, 
     /*  Data Length  */ 0x0029U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000580UL, 
     /*  Data Length  */ 0x0001U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x000005C0UL, 
     /*  Data Length  */ 0x001EU, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x01U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }, 
  {
     /*  Block Start Address  */ 0x00000600UL, 
     /*  Data Length  */ 0x0061U, 
     /*  Number Of Instances  */ 0x01U, 
     /*  Number Of Datasets  */ 0x05U, 
     /*  Immediate Data Block  */ FALSE, 
     /*  Data Verification Enabled  */ FALSE
  }
};
/* FLS API pointer table */
CONST(Fee_30_SmallSector_FlsApiType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_FlsApi0 = 
{
   /*  Read Service  */ Fls_Read, 
   /*  Write Service  */ Fls_Write, 
   /*  Compare Service  */ Fls_Compare, 
   /*  Erase Service  */ Fls_Erase, 
   /*  Blank Check Service  */ Fls_BlankCheck, 
   /*  Get Status Service  */ Fls_GetStatus, 
   /*  Get Job Result Service  */ Fls_GetJobResult
};
 

/**** NvM Callback Assignments ****/
CONST(Fee_30_SmallSector_CbkJobEndNotificationType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_CbkJobEndNotification =
    NvM_JobEndNotification;
CONST(Fee_30_SmallSector_CbkJobErrorNotificationType, FEE_30_SMALLSECTOR_PRIVATE_CONST) Fee_30_SmallSector_CbkJobErrorNotification =
    NvM_JobErrorNotification;

#define FEE_30_SMALLSECTOR_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"	/* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Justification for module-specific MISRA deviations:
 MD_FEE_30_SMALLSECTOR_9.2: rule 9.2
      Reason:     Array size of Fee_30_SmallSector_PartitionConfigType.BlockNumberList depends on maximum number of blocks in one partition.             
      Risk:       No risk. Partitions with fewer blocks and thus BlockNumberLists with fewer initializers are implicitly 
                  initialized to zero.
      Prevention: Program flow has been verified by component tests and review.
*/

/**********************************************************************************************************************
 *  END OF FILE: Fee_30_SmallSector_Cfg.c
 *********************************************************************************************************************/

