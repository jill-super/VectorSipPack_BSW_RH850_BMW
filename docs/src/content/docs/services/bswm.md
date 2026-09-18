---
title: "BSW Mode Manager"
description: "BSW Mode Manager — Arbitrates mode requests (communication, ECU state) and executes action lists.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Arbitrates mode requests (communication, ECU state) and executes action lists.

Source: [`BSW/BswM`](../../../../../BSW/BswM) — 1 C files, 17 headers.

## Key files

| File | Lines |
|---|---:|
| [`BswM.c`](../../../../../BSW/BswM/BswM.c) | 3876 |
| [`BswM.h`](../../../../../BSW/BswM/BswM.h) | 345 |
| [`BswM_PduR.h`](../../../../../BSW/BswM/BswM_PduR.h) | 167 |
| [`BswM_Sd.h`](../../../../../BSW/BswM/BswM_Sd.h) | 127 |
| [`BswM_LinSM.h`](../../../../../BSW/BswM/BswM_LinSM.h) | 124 |
| [`BswM_ComM.h`](../../../../../BSW/BswM/BswM_ComM.h) | 123 |
| [`BswM_EcuM.h`](../../../../../BSW/BswM/BswM_EcuM.h) | 119 |
| [`BswM_NvM.h`](../../../../../BSW/BswM/BswM_NvM.h) | 105 |
| [`BswM_Dcm.h`](../../../../../BSW/BswM/BswM_Dcm.h) | 102 |
| [`BswM_Nm.h`](../../../../../BSW/BswM/BswM_Nm.h) | 93 |
| [`BswM_LinTp.h`](../../../../../BSW/BswM/BswM_LinTp.h) | 91 |
| [`BswM_J1939Nm.h`](../../../../../BSW/BswM/BswM_J1939Nm.h) | 91 |
| [`BswM_J1939Dcm.h`](../../../../../BSW/BswM/BswM_J1939Dcm.h) | 89 |
| [`BswM_CanSM.h`](../../../../../BSW/BswM/BswM_CanSM.h) | 89 |
| [`BswM_EthSM.h`](../../../../../BSW/BswM/BswM_EthSM.h) | 89 |
| [`BswM_FrSM.h`](../../../../../BSW/BswM/BswM_FrSM.h) | 89 |
| [`BswM_EthIf.h`](../../../../../BSW/BswM/BswM_EthIf.h) | 88 |
| [`BswM_WdgM.h`](../../../../../BSW/BswM/BswM_WdgM.h) | 88 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `BswM_Init()`
- `BswM_GetVersionInfo()`
- `BswM_MainFunction()`
- `BswM_CanSM_CurrentState()`
- `BswM_ComM_CurrentMode()`
- `BswM_ComM_CurrentPNCMode()`
- `BswM_ComM_InitiateReset()`
- `BswM_Dcm_ApplicationUpdated()`
- `BswM_Dcm_CommunicationMode_CurrentState()`
- `BswM_Deinit()`
- `BswM_EcuM_CurrentState()`
- `BswM_EcuM_CurrentWakeup()`

Typical usage:

```c
/* BSW Mode Manager is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
BswM_Init(&BswM_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`BswM_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/BswM_Cfg.h)
- [`BswM_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/BswM_Lcfg.c)
- [`BswM_PBcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/BswM_PBcfg.c)
- [`BswM_Private_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/BswM_Private_Cfg.h)
- [`BswM_MemMap.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Components/BswM_MemMap.h)
- [`BswM.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/RteAnalyzer/Source/BswM.c)
- [`BswM_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/BswM_Cfg.h)
- [`BswM_Lcfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/BswM_Lcfg.c)
- [`BswM_PBcfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/BswM_PBcfg.c)
- [`BswM_Private_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/BswM_Private_Cfg.h)

## Dependencies

`MemMap.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-bswm/)
- Sources in the repository: [`BSW/BswM`](../../../../../BSW/BswM)
- BSWMD artefacts: [`BSWMD/BswM`](../../../../../BSWMD/BswM)

[Back to top](#_top)
