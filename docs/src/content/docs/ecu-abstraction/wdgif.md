---
title: "Watchdog Interface"
description: "Watchdog Interface — Abstracts internal/external watchdogs for WdgM.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Abstracts internal/external watchdogs for WdgM.

Source: [`BSW/WdgIf`](../../../../../BSW/WdgIf) — 1 C files, 3 headers.

## Key files

| File | Lines |
|---|---:|
| [`WdgIf.c`](../../../../../BSW/WdgIf/WdgIf.c) | 928 |
| [`WdgIf_Cfg.h`](../../../../../BSW/WdgIf/WdgIf_Cfg.h) | 220 |
| [`WdgIf.h`](../../../../../BSW/WdgIf/WdgIf.h) | 216 |
| [`WdgIf_Types.h`](../../../../../BSW/WdgIf/WdgIf_Types.h) | 81 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `WdgIf_GetVersionInfo()`
- `WdgIf_SetMode()`
- `WdgIf_SetTriggerCondition()`
- `WdgIf_SetTriggerWindow()`

Typical usage:

```c
/* Watchdog Interface is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
WdgIf_GetVersionInfo(&WdgIf_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`WdgIf_Cfg_Features.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/WdgIf_Cfg_Features.h)
- [`WdgIf_Lcfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/WdgIf_Lcfg.c)
- [`WdgIf_Lcfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/WdgIf_Lcfg.h)
- [`WdgIf_MemMap.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/WdgIf_MemMap.h)

## Dependencies

`MemMap.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-wdgif/)
- Sources in the repository: [`BSW/WdgIf`](../../../../../BSW/WdgIf)
- BSWMD artefacts: [`BSWMD/WdgIf`](../../../../../BSWMD/WdgIf)

[Back to top](#_top)
