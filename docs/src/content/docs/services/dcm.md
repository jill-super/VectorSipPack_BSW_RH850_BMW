---
title: "Diagnostic Communication Manager"
description: "Diagnostic Communication Manager — UDS diagnostics over FlexRay (via FrTp): sessions, services, security access.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

UDS diagnostics over FlexRay (via FrTp): sessions, services, security access.

Source: [`BSW/Dcm`](../../../../../BSW/Dcm) — 2 C files, 12 headers.

## Key files

| File | Lines |
|---|---:|
| [`Dcm.c`](../../../../../BSW/Dcm/Dcm.c) | 41040 |
| [`Dcm_CoreInt.h`](../../../../../BSW/Dcm/Dcm_CoreInt.h) | 3105 |
| [`Dcm_Core.h`](../../../../../BSW/Dcm/Dcm_Core.h) | 1354 |
| [`Dcm_Ext.c`](../../../../../BSW/Dcm/Dcm_Ext.c) | 714 |
| [`Dcm_CoreTypes.h`](../../../../../BSW/Dcm/Dcm_CoreTypes.h) | 595 |
| [`Dcm_CoreCbk.h`](../../../../../BSW/Dcm/Dcm_CoreCbk.h) | 402 |
| [`Dcm.h`](../../../../../BSW/Dcm/Dcm.h) | 375 |
| [`Dcm_ExtInt.h`](../../../../../BSW/Dcm/Dcm_ExtInt.h) | 140 |
| [`Dcm_Ext.h`](../../../../../BSW/Dcm/Dcm_Ext.h) | 125 |
| [`Dcm_ExtTypes.h`](../../../../../BSW/Dcm/Dcm_ExtTypes.h) | 66 |
| [`Dcm_Types.h`](../../../../../BSW/Dcm/Dcm_Types.h) | 50 |
| [`Dcm_Cbk.h`](../../../../../BSW/Dcm/Dcm_Cbk.h) | 48 |
| [`Dcm_Int.h`](../../../../../BSW/Dcm/Dcm_Int.h) | 47 |
| [`Dcm_ExtCbk.h`](../../../../../BSW/Dcm/Dcm_ExtCbk.h) | 45 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Dcm_Init()`
- `Dcm_GetVersionInfo()`
- `Dcm_MainFunction()`
- `Dcm_ActivateEvent()`
- `Dcm_ComM_FullComModeEntered()`
- `Dcm_ComM_NoComModeEntered()`
- `Dcm_ComM_SilentComModeEntered()`
- `Dcm_Confirmation()`
- `Dcm_CopyRxData()`
- `Dcm_CopyTxData()`
- `Dcm_DeInit()`
- `Dcm_DebugApiCheckRte()`

Typical usage:

```c
/* Diagnostic Communication Manager is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Dcm_Init(&Dcm_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`Dcm_MemMap.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Components/Dcm_MemMap.h)
- [`Dcm_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dcm_Cfg.h)
- [`Dcm_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dcm_Lcfg.c)
- [`Dcm_Lcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dcm_Lcfg.h)
- [`Dcm_PBcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dcm_PBcfg.c)
- [`Dcm_PBcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Dcm_PBcfg.h)
- [`Dcm.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/RteAnalyzer/Source/Dcm.c)
- [`Dcm_MemMap.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Components/Dcm_MemMap.h)
- [`Dcm_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Dcm_Cfg.h)
- [`Dcm_Lcfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Dcm_Lcfg.c)

## Dependencies

`MemMap.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-dcm/)
- Sources in the repository: [`BSW/Dcm`](../../../../../BSW/Dcm)
- BSWMD artefacts: [`BSWMD/Dcm`](../../../../../BSWMD/Dcm)

[Back to top](#_top)
