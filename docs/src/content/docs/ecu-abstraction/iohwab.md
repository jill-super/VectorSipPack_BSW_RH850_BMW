---
title: "I/O Hardware Abstraction"
description: "I/O Hardware Abstraction — Signal-level I/O abstraction between MCAL and RTE/SWCs.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Signal-level I/O abstraction between MCAL and RTE/SWCs.

Source: [`BSW/IoHwAb`](../../../../../BSW/IoHwAb) — 0 C files, 1 headers.

## Key files

| File | Lines |
|---|---:|
| [`IoHwAb.h`](../../../../../BSW/IoHwAb/IoHwAb.h) | 124 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `IoHwAb_Init()`
- `IoHwAb_GetVersionInfo()`

Typical usage:

```c
/* I/O Hardware Abstraction is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
IoHwAb_Init(&IoHwAb_Config); /* generated in GenData */
```

## Configuration

_No generated `GenData` files matched this module prefix in `Applications/`._

## Dependencies

_No external intra-SIP includes detected (self-contained or config-driven)._

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-iohwab/)
- Sources in the repository: [`BSW/IoHwAb`](../../../../../BSW/IoHwAb)
- BSWMD artefacts: [`BSWMD/IoHwAb`](../../../../../BSWMD/IoHwAb)

[Back to top](#_top)
