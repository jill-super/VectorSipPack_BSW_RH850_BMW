---
title: "E2E Transformer"
description: "E2E Transformer — E2E transformer (E2EXf) for RTE-level protection.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

E2E transformer (E2EXf) for RTE-level protection.

Source: [`BSW/E2eXf`](../../../../../BSW/E2eXf) — 1 C files, 1 headers.

## Key files

| File | Lines |
|---|---:|
| [`E2EXf.c`](../../../../../BSW/E2eXf/E2EXf.c) | 1742 |
| [`E2EXf.h`](../../../../../BSW/E2eXf/E2EXf.h) | 573 |


## Public API

_No `Init`/`GetVersionInfo`/`MainFunction` anchors detected by static scan (16 `FUNC()` declarations present — see headers). Consult the header files and Technical Reference below._

Typical usage:

```c
/* E2E Transformer is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
```

## Configuration

_No generated `GenData` files matched this module prefix in `Applications/`._

## Dependencies

`MemMap.h`, `E2EXf.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-e2exf/)
- Sources in the repository: [`BSW/E2eXf`](../../../../../BSW/E2eXf)
- BSWMD artefacts: [`BSWMD/E2eXf`](../../../../../BSWMD/E2eXf)

[Back to top](#_top)
