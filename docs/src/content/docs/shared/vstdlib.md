---
title: "Vector Standard Library"
description: "Vector Standard Library — Optimised memory routines for BSW.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Optimised memory routines for BSW.

Source: [`BSW/VStdLib`](../../../../../BSW/VStdLib) — 1 C files, 2 headers.

## Key files

| File | Lines |
|---|---:|
| [`vstdlib.c`](../../../../../BSW/VStdLib/vstdlib.c) | 1610 |
| [`vstdlib.h`](../../../../../BSW/VStdLib/vstdlib.h) | 608 |
| [`_VStdLib_Cfg.h`](../../../../../BSW/VStdLib/_VStdLib_Cfg.h) | 216 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `VStdLib_GetVersionInfo()`
- `VStdLib_MemClr()`
- `VStdLib_MemClrLarge()`
- `VStdLib_MemClrMacro()`
- `VStdLib_MemCpy()`
- `VStdLib_MemCpy16()`
- `VStdLib_MemCpy16Large()`
- `VStdLib_MemCpy32()`
- `VStdLib_MemCpy32Large()`
- `VStdLib_MemCpyLarge()`
- `VStdLib_MemCpyLarge_s()`
- `VStdLib_MemCpyMacro()`

Typical usage:

```c
/* Vector Standard Library is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
VStdLib_GetVersionInfo(&VStdLib_Config); /* generated in GenData */
```

## Configuration

_No generated `GenData` files matched this module prefix in `Applications/`._

## Dependencies

`MemMap.h`, `vstdlib.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-vstdlib-genericasr/)
- Sources in the repository: [`BSW/VStdLib`](../../../../../BSW/VStdLib)
- BSWMD artefacts: _none shipped for this module (see [`BSWMD/`](../../../../../BSWMD))._

[Back to top](#_top)
