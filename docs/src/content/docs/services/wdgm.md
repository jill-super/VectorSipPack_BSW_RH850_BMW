---
title: "Watchdog Manager"
description: "Watchdog Manager — Supervision of alive/logical/program-flow checkpoints, triggers via WdgIf.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Supervision of alive/logical/program-flow checkpoints, triggers via WdgIf.

Source: [`BSW/WdgM`](../../../../../BSW/WdgM) — 2 C files, 2 headers.

## Key files

| File | Lines |
|---|---:|
| [`WdgM.c`](../../../../../BSW/WdgM/WdgM.c) | 4563 |
| [`WdgM_Checkpoint.c`](../../../../../BSW/WdgM/WdgM_Checkpoint.c) | 1355 |
| [`WdgM_Cfg.h`](../../../../../BSW/WdgM/WdgM_Cfg.h) | 743 |
| [`WdgM.h`](../../../../../BSW/WdgM/WdgM.h) | 743 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `WdgM_Init()`
- `WdgM_GetVersionInfo()`
- `WdgM_MainFunction()`
- `WdgM_ActivateSupervisionEntity()`
- `WdgM_CheckpointReached()`
- `WdgM_DeInit()`
- `WdgM_DeactivateSupervisionEntity()`
- `WdgM_GetFirstExpiredSEID()`
- `WdgM_GetFirstExpiredSEViolation()`
- `WdgM_GetGlobalStatus()`
- `WdgM_GetLocalStatus()`
- `WdgM_GetMode()`

Typical usage:

```c
/* Watchdog Manager is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
WdgM_Init(&WdgM_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`WdgM_OsApplication_ASIL_MemMap.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Components/WdgM_OsApplication_ASIL_MemMap.h)
- [`WdgM.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/RteAnalyzer/Source/WdgM.c)
- [`WdgM_OsApplication_ASIL.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/RteAnalyzer/Source/WdgM_OsApplication_ASIL.c)
- [`WdgM_Cfg_Features.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/WdgM_Cfg_Features.h)
- [`WdgM_OsMemMap.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/WdgM_OsMemMap.h)
- [`WdgM_PBcfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/WdgM_PBcfg.c)
- [`WdgM_PBcfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/WdgM_PBcfg.h)
- [`WdgM_Rte_Includes.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/WdgM_Rte_Includes.h)

## Dependencies

`MemMap.h`, `WdgIf.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-wdgm/)
- Sources in the repository: [`BSW/WdgM`](../../../../../BSW/WdgM)
- BSWMD artefacts: [`BSWMD/WdgM`](../../../../../BSWMD/WdgM)

[Back to top](#_top)
