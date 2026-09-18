---
title: "FlexRay State Manager"
description: "FlexRay State Manager — FlexRay cluster/node state machine (startup, wakeup, halt).."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

FlexRay cluster/node state machine (startup, wakeup, halt).

Source: [`BSW/FrSM`](../../../../../BSW/FrSM) — 1 C files, 2 headers.

## Key files

| File | Lines |
|---|---:|
| [`FrSM.c`](../../../../../BSW/FrSM/FrSM.c) | 2296 |
| [`FrSM.h`](../../../../../BSW/FrSM/FrSM.h) | 326 |
| [`FrSM_Types.h`](../../../../../BSW/FrSM/FrSM_Types.h) | 88 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `FrSM_Init()`
- `FrSM_GetVersionInfo()`
- `FrSM_AllSlots()`
- `FrSM_GetCurrentComMode()`
- `FrSM_InitMemory()`
- `FrSM_RequestComMode()`
- `FrSM_SetEcuPassive()`

Typical usage:

```c
/* FlexRay State Manager is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
FrSM_Init(&FrSM_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`FrSM_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrSM_Cfg.h)
- [`FrSM_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrSM_Lcfg.c)
- [`FrSM.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/RteAnalyzer/Source/FrSM.c)
- [`FrSM_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/FrSM_Cfg.h)
- [`FrSM_Lcfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/FrSM_Lcfg.c)
- [`FrSM.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/RteAnalyzer/Source/FrSM.c)

## Dependencies

`MemMap.h`, `ComM.h`, `ComM_BusSM.h`, `FrIf.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-frsm/)
- Sources in the repository: [`BSW/FrSM`](../../../../../BSW/FrSM)
- BSWMD artefacts: [`BSWMD/FrSM`](../../../../../BSWMD/FrSM)

[Back to top](#_top)
