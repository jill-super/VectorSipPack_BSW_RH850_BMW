---
title: "Communication Manager"
description: "Communication Manager — Coordinates BusSM network state machines and user channel requests.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Coordinates BusSM network state machines and user channel requests.

Source: [`BSW/ComM`](../../../../../BSW/ComM) — 1 C files, 6 headers.

## Key files

| File | Lines |
|---|---:|
| [`ComM.c`](../../../../../BSW/ComM/ComM.c) | 6677 |
| [`ComM.h`](../../../../../BSW/ComM/ComM.h) | 654 |
| [`ComM_Nm.h`](../../../../../BSW/ComM/ComM_Nm.h) | 168 |
| [`ComM_EcuMBswM.h`](../../../../../BSW/ComM/ComM_EcuMBswM.h) | 123 |
| [`ComM_Dcm.h`](../../../../../BSW/ComM/ComM_Dcm.h) | 104 |
| [`ComM_Types.h`](../../../../../BSW/ComM/ComM_Types.h) | 94 |
| [`ComM_BusSM.h`](../../../../../BSW/ComM/ComM_BusSM.h) | 90 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `ComM_Init()`
- `ComM_GetVersionInfo()`
- `ComM_MainFunction()`
- `ComM_BusSM_ModeIndication()`
- `ComM_CommunicationAllowed()`
- `ComM_DCM_ActiveDiagnostic()`
- `ComM_DCM_InactiveDiagnostic()`
- `ComM_DeInit()`
- `ComM_EcuM_PNCWakeUpIndication()`
- `ComM_EcuM_WakeUpIndication()`
- `ComM_GetCurrentComMode()`
- `ComM_GetDcmRequestStatus()`

Typical usage:

```c
/* Communication Manager is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
ComM_Init(&ComM_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`ComM_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_Cfg.h)
- [`ComM_GenTypes.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_GenTypes.h)
- [`ComM_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_Lcfg.c)
- [`ComM_Lcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_Lcfg.h)
- [`ComM_PBcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_PBcfg.c)
- [`ComM_PBcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_PBcfg.h)
- [`ComM_Private_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_Private_Cfg.h)
- [`ComM_MemMap.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Components/ComM_MemMap.h)
- [`ComM.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/RteAnalyzer/Source/ComM.c)
- [`ComM_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/ComM_Cfg.h)

## Dependencies

`MemMap.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-comm/)
- Sources in the repository: [`BSW/ComM`](../../../../../BSW/ComM)
- BSWMD artefacts: [`BSWMD/ComM`](../../../../../BSWMD/ComM)

[Back to top](#_top)
