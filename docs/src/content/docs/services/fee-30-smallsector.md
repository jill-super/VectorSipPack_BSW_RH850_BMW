---
title: "Flash EEPROM Emulation"
description: "Flash EEPROM Emulation — FEE with small-sector support on RH850 data flash for NvM persistence.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

FEE with small-sector support on RH850 data flash for NvM persistence.

Source: [`BSW/Fee_30_SmallSector`](../../../../../BSW/Fee_30_SmallSector) — 13 C files, 14 headers.

## Key files

| File | Lines |
|---|---:|
| [`Fee_30_SmallSector.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector.c) | 1614 |
| [`Fee_30_SmallSector_InstanceHandler.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_InstanceHandler.c) | 1300 |
| [`Fee_30_SmallSector_Layer2_WriteInstance.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_Layer2_WriteInstance.c) | 920 |
| [`Fee_30_SmallSector_Layer2_InstanceFinder.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_Layer2_InstanceFinder.c) | 756 |
| [`Fee_30_SmallSector_InstanceHandler.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_InstanceHandler.h) | 701 |
| [`Fee_30_SmallSector_Layer3_ReadManagementBytes.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_Layer3_ReadManagementBytes.c) | 672 |
| [`Fee_30_SmallSector_Layer1_Write.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_Layer1_Write.c) | 550 |
| [`Fee_30_SmallSector_DatasetHandler.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_DatasetHandler.c) | 540 |
| [`Fee_30_SmallSector_Layer2_DatasetEraser.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_Layer2_DatasetEraser.c) | 493 |
| [`Fee_30_SmallSector.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector.h) | 396 |
| [`Fee_30_SmallSector_Layer1_Read.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_Layer1_Read.c) | 383 |
| [`Fee_30_SmallSector_DatasetHandler.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_DatasetHandler.h) | 279 |
| [`Fee_30_SmallSector_TaskManager.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_TaskManager.c) | 274 |
| [`Fee_30_SmallSector_PartitionHandler.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_PartitionHandler.c) | 271 |
| [`Fee_30_SmallSector_FlsCoordinator.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_FlsCoordinator.c) | 270 |
| [`Fee_30_SmallSector_BlockHandler.c`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_BlockHandler.c) | 203 |
| [`Fee_30_SmallSector_FlsCoordinator.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_FlsCoordinator.h) | 182 |
| [`Fee_30_SmallSector_BlockHandler.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_BlockHandler.h) | 180 |
| [`Fee_30_SmallSector_PartitionHandler.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_PartitionHandler.h) | 165 |
| [`Fee_30_SmallSector_Layer2_InstanceFinder.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_Layer2_InstanceFinder.h) | 162 |
| [`Fee_30_SmallSector_Layer1_Write.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_Layer1_Write.h) | 156 |
| [`Fee_30_SmallSector_TaskManager.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_TaskManager.h) | 137 |
| [`Fee_30_SmallSector_Layer2_WriteInstance.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_Layer2_WriteInstance.h) | 134 |
| [`Fee_30_SmallSector_Layer2_DatasetEraser.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_Layer2_DatasetEraser.h) | 133 |
| [`Fee_30_SmallSector_Layer1_Read.h`](../../../../../BSW/Fee_30_SmallSector/Fee_30_SmallSector_Layer1_Read.h) | 133 |

_2 further C/H files in [`BSW/Fee_30_SmallSector`](../../../../../BSW/Fee_30_SmallSector)._ 


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Fee_30_SmallSector_30_SmallSector_Dh_GetDataLength()`
- `Fee_30_SmallSector_30_SmallSector_Dh_Init()`
- `Fee_30_SmallSector_30_SmallSector_Dh_IsLastInstance()`
- `Fee_30_SmallSector_AlignValue()`
- `Fee_30_SmallSector_Bh_GetBlockIndex()`
- `Fee_30_SmallSector_Bh_GetBlockStartAddress()`
- `Fee_30_SmallSector_Bh_GetDataLength()`
- `Fee_30_SmallSector_Bh_GetDatasetIndex()`
- `Fee_30_SmallSector_Bh_GetNrOfDatasets()`
- `Fee_30_SmallSector_Bh_GetNrOfInstances()`
- `Fee_30_SmallSector_Bh_HasVerificationEnabled()`
- `Fee_30_SmallSector_Bh_Init()`

Typical usage:

```c
/* Flash EEPROM Emulation is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Fee_30_SmallSector_30_SmallSector_Dh_GetDataLength(&Fee_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`Fee_30_SmallSector_Cfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Fee_30_SmallSector_Cfg.c)
- [`Fee_30_SmallSector_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Fee_30_SmallSector_Cfg.h)
- [`Fee_30_SmallSector.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/RteAnalyzer/Source/Fee_30_SmallSector.c)
- [`Fee_30_SmallSector_Cfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Fee_30_SmallSector_Cfg.c)
- [`Fee_30_SmallSector_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Fee_30_SmallSector_Cfg.h)
- [`Fee_30_SmallSector.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/RteAnalyzer/Source/Fee_30_SmallSector.c)

## Dependencies

`MemMap.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-fee-30-smallsector/)
- Sources in the repository: [`BSW/Fee_30_SmallSector`](../../../../../BSW/Fee_30_SmallSector)
- BSWMD artefacts: [`BSWMD/Fee_30_SmallSector`](../../../../../BSWMD/Fee_30_SmallSector)

[Back to top](#_top)
