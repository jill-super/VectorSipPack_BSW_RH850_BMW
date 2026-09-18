---
title: "AUTOSAR COM"
description: "AUTOSAR COM — Signal/PDU communication: packing, filtering, notifications, gateway support.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Signal/PDU communication: packing, filtering, notifications, gateway support.

Source: [`BSW/Com`](../../../../../BSW/Com) — 1 C files, 1 headers.

## Key files

| File | Lines |
|---|---:|
| [`Com.c`](../../../../../BSW/Com/Com.c) | 16427 |
| [`Com.h`](../../../../../BSW/Com/Com.h) | 1246 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Com_Init()`
- `Com_GetVersionInfo()`
- `Com_ClearIpduGroupVector()`
- `Com_DeInit()`
- `Com_DisableReceptionDM()`
- `Com_EnableReceptionDM()`
- `Com_GetConfigurationId()`
- `Com_GetStatus()`
- `Com_GetTxModeFalseIdxOfTxModeInfo()`
- `Com_GetTxModeTrueIdxOfTxModeInfo()`
- `Com_GwTout_Event()`
- `Com_InitMemory()`

Typical usage:

```c
/* AUTOSAR COM is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Com_Init(&Com_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`ComStack_Cfg.h`](../../../../../Applications/OEM_Extensions/BLU/Appl/GenData/ComStack_Cfg.h)
- [`ComStack_Cfg.h`](../../../../../Applications/OEM_Extensions/BM/Appl/GenData/ComStack_Cfg.h)
- [`ComM_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_Cfg.h)
- [`ComM_GenTypes.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_GenTypes.h)
- [`ComM_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_Lcfg.c)
- [`ComM_Lcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_Lcfg.h)
- [`ComM_PBcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_PBcfg.c)
- [`ComM_PBcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_PBcfg.h)
- [`ComM_Private_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComM_Private_Cfg.h)
- [`ComStack_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/ComStack_Cfg.h)

## Dependencies

`MemMap.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-com/)
- Sources in the repository: [`BSW/Com`](../../../../../BSW/Com)
- BSWMD artefacts: [`BSWMD/Com`](../../../../../BSWMD/Com)

[Back to top](#_top)
