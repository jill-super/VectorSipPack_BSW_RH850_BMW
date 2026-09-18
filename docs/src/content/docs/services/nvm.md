---
title: "NVRAM Manager"
description: "NVRAM Manager — Block-based NV data management: redundancy, callbacks, implicit/explicit synchronisation.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Block-based NV data management: redundancy, callbacks, implicit/explicit synchronisation.

Source: [`BSW/NvM`](../../../../../BSW/NvM) — 6 C files, 8 headers.

## Key files

| File | Lines |
|---|---:|
| [`NvM_Act.c`](../../../../../BSW/NvM/NvM_Act.c) | 2663 |
| [`NvM.c`](../../../../../BSW/NvM/NvM.c) | 2189 |
| [`NvM_JobProc.c`](../../../../../BSW/NvM/NvM_JobProc.c) | 1444 |
| [`NvM_Qry.c`](../../../../../BSW/NvM/NvM_Qry.c) | 967 |
| [`NvM_Crc.c`](../../../../../BSW/NvM/NvM_Crc.c) | 827 |
| [`NvM_Queue.c`](../../../../../BSW/NvM/NvM_Queue.c) | 756 |
| [`NvM.h`](../../../../../BSW/NvM/NvM.h) | 701 |
| [`NvM_JobProc.h`](../../../../../BSW/NvM/NvM_JobProc.h) | 353 |
| [`NvM_Crc.h`](../../../../../BSW/NvM/NvM_Crc.h) | 270 |
| [`NvM_Queue.h`](../../../../../BSW/NvM/NvM_Queue.h) | 190 |
| [`NvM_Types.h`](../../../../../BSW/NvM/NvM_Types.h) | 157 |
| [`NvM_Act.h`](../../../../../BSW/NvM/NvM_Act.h) | 144 |
| [`NvM_Qry.h`](../../../../../BSW/NvM/NvM_Qry.h) | 122 |
| [`NvM_Cbk.h`](../../../../../BSW/NvM/NvM_Cbk.h) | 79 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `NvM_Init()`
- `NvM_GetVersionInfo()`
- `NvM_MainFunction()`
- `NvM_ActFinishCfgIdCheck()`
- `NvM_ActGetHighPrioJob()`
- `NvM_ActGetNormalPrioJob()`
- `NvM_ActQueueFreeLastJob()`
- `NvM_CancelJobs()`
- `NvM_CancelRequest()`
- `NvM_CancelWriteAll()`
- `NvM_CrcGetQueuedBlockId()`
- `NvM_CrcJob_Compare()`

Typical usage:

```c
/* NVRAM Manager is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
NvM_Init(&NvM_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`NvM_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/RteAnalyzer/Source/NvM_Cfg.h)
- [`NvM_MemMap.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Components/NvM_MemMap.h)
- [`NvM_Cfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/NvM_Cfg.c)
- [`NvM_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/NvM_Cfg.h)
- [`NvM_PrivateCfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/NvM_PrivateCfg.h)
- [`NvM.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/RteAnalyzer/Source/NvM.c)
- [`NvM_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/RteAnalyzer/Source/NvM_Cfg.h)

## Dependencies

`MemMap.h`, `Std_Types.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-nvm/)
- Sources in the repository: [`BSW/NvM`](../../../../../BSW/NvM)
- BSWMD artefacts: [`BSWMD/NvM`](../../../../../BSWMD/NvM)

[Back to top](#_top)
