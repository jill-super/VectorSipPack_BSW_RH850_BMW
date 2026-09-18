---
title: "ECU State Manager"
description: "ECU State Manager — Startup/shutdown, sleep/wake and driver initialisation sequencing.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Startup/shutdown, sleep/wake and driver initialisation sequencing.

Source: [`BSW/EcuM`](../../../../../BSW/EcuM) — 1 C files, 3 headers.

## Key files

| File | Lines |
|---|---:|
| [`EcuM.c`](../../../../../BSW/EcuM/EcuM.c) | 5416 |
| [`EcuM.h`](../../../../../BSW/EcuM/EcuM.h) | 993 |
| [`EcuM_Cbk.h`](../../../../../BSW/EcuM/EcuM_Cbk.h) | 153 |
| [`EcuM_Error.h`](../../../../../BSW/EcuM/EcuM_Error.h) | 71 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `EcuM_Init()`
- `EcuM_GetVersionInfo()`
- `EcuM_MainFunction()`
- `EcuM_AbortWakeupAlarm()`
- `EcuM_AlarmCheckWakeup()`
- `EcuM_BswErrorHook()`
- `EcuM_CB_NfyNvMJobEnd()`
- `EcuM_CheckWakeup()`
- `EcuM_ClearValidatedWakeupEvent()`
- `EcuM_ClearWakeupEvent()`
- `EcuM_EndCheckWakeup()`
- `EcuM_GetBootTarget()`

Typical usage:

```c
/* ECU State Manager is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
EcuM_Init(&EcuM_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`EcuM_MemMap.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Components/EcuM_MemMap.h)
- [`EcuM_Cfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/EcuM_Cfg.c)
- [`EcuM_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/EcuM_Cfg.h)
- [`EcuM_Generated_Types.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/EcuM_Generated_Types.h)
- [`EcuM_Init_Cfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/EcuM_Init_Cfg.c)
- [`EcuM_Init_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/EcuM_Init_Cfg.h)
- [`EcuM_Init_PBcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/EcuM_Init_PBcfg.c)
- [`EcuM_Init_PBcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/EcuM_Init_PBcfg.h)
- [`EcuM_PBcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/EcuM_PBcfg.c)
- [`EcuM_PrivateCfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/EcuM_PrivateCfg.h)

## Dependencies

`MemMap.h`, `BswM.h`, `Rte_Main.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-ecum/)
- Sources in the repository: [`BSW/EcuM`](../../../../../BSW/EcuM)
- BSWMD artefacts: [`BSWMD/EcuM`](../../../../../BSWMD/EcuM)

[Back to top](#_top)
