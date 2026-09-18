---
title: "Default Error Tracer"
description: "Default Error Tracer — Development error reporting hook for BSW modules.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Development error reporting hook for BSW modules.

Source: [`BSW/Det`](../../../../../BSW/Det) — 1 C files, 1 headers.

## Key files

| File | Lines |
|---|---:|
| [`Det.c`](../../../../../BSW/Det/Det.c) | 969 |
| [`Det.h`](../../../../../BSW/Det/Det.h) | 358 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Det_Init()`
- `Det_GetVersionInfo()`
- `Det_InitMemory()`
- `Det_ReportError()`
- `Det_ReportRuntimeError()`
- `Det_ReportTransientFault()`
- `Det_Start()`

Typical usage:

```c
/* Default Error Tracer is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Det_Init(&Det_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`Det_MemMap.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Components/Det_MemMap.h)
- [`Det_Cfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Det_Cfg.c)
- [`Det_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Det_Cfg.h)
- [`Det.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/RteAnalyzer/Source/Det.c)
- [`Det_MemMap.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Components/Det_MemMap.h)
- [`Det_Cfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Det_Cfg.c)
- [`Det_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Det_Cfg.h)
- [`Det.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/RteAnalyzer/Source/Det.c)

## Dependencies

`Compiler.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-det/)
- Sources in the repository: [`BSW/Det`](../../../../../BSW/Det)
- BSWMD artefacts: [`BSWMD/Det`](../../../../../BSWMD/Det)

[Back to top](#_top)
