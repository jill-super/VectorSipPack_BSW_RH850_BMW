---
title: "Common Headers"
description: "Common Headers — Std_Types, Platform_Types, Compiler and MemMap headers shared by the whole SIP.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Std_Types, Platform_Types, Compiler and MemMap headers shared by the whole SIP.

Source: [`BSW/_Common`](../../../../../BSW/_Common) — 0 C files, 8 headers.

## Key files

| File | Lines |
|---|---:|
| [`_MemMap.h`](../../../../../BSW/_Common/_MemMap.h) | 5641 |
| [`MemMap_Common.h`](../../../../../BSW/_Common/MemMap_Common.h) | 2622 |
| [`_Compiler_Cfg.h`](../../../../../BSW/_Common/_Compiler_Cfg.h) | 1448 |
| [`Fr_GeneralTypes.h`](../../../../../BSW/_Common/Fr_GeneralTypes.h) | 296 |
| [`ComStack_Types.h`](../../../../../BSW/_Common/ComStack_Types.h) | 246 |
| [`Compiler.h`](../../../../../BSW/_Common/Compiler.h) | 203 |
| [`Platform_Types.h`](../../../../../BSW/_Common/Platform_Types.h) | 155 |
| [`Std_Types.h`](../../../../../BSW/_Common/Std_Types.h) | 153 |


## Public API

_No `Init`/`GetVersionInfo`/`MainFunction` anchors detected by static scan (1 `FUNC()` declarations present — see headers). Consult the header files and Technical Reference below._

Typical usage:

```c
/* Common Headers is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
```

## Configuration

_No generated `GenData` files matched this module prefix in `Applications/`._

## Dependencies

_No external intra-SIP includes detected (self-contained or config-driven)._

## Further reading

- Sources in the repository: [`BSW/_Common`](../../../../../BSW/_Common)
- BSWMD artefacts: _none shipped for this module (see [`BSWMD/`](../../../../../BSWMD))._

[Back to top](#_top)
