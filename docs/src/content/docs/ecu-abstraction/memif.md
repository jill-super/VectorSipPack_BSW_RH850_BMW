---
title: "Memory Abstraction Interface"
description: "Memory Abstraction Interface — Abstracts FEE/EA devices behind a common API for NvM.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Abstracts FEE/EA devices behind a common API for NvM.

Source: [`BSW/MemIf`](../../../../../BSW/MemIf) — 1 C files, 2 headers.

## Key files

| File | Lines |
|---|---:|
| [`MemIf.c`](../../../../../BSW/MemIf/MemIf.c) | 568 |
| [`MemIf.h`](../../../../../BSW/MemIf/MemIf.h) | 294 |
| [`MemIf_Types.h`](../../../../../BSW/MemIf/MemIf_Types.h) | 131 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `MemIf_GetVersionInfo()`
- `MemIf_Cancel()`
- `MemIf_EraseImmediateBlock()`
- `MemIf_GetJobResult()`
- `MemIf_GetStatus()`
- `MemIf_InvalidateBlock()`
- `MemIf_Read()`
- `MemIf_SetMode()`
- `MemIf_Write()`

Typical usage:

```c
/* Memory Abstraction Interface is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
MemIf_GetVersionInfo(&MemIf_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`MemIf_Cfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/MemIf_Cfg.c)
- [`MemIf_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/MemIf_Cfg.h)
- [`MemIf_Cfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/MemIf_Cfg.c)
- [`MemIf_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/MemIf_Cfg.h)

## Dependencies

`MemMap.h`, `Std_Types.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-memif/)
- Sources in the repository: [`BSW/MemIf`](../../../../../BSW/MemIf)
- BSWMD artefacts: [`BSWMD/MemIf`](../../../../../BSWMD/MemIf)

[Back to top](#_top)
