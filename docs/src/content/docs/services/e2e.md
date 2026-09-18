---
title: "End-to-End Protection Library"
description: "End-to-End Protection Library — E2E profiles (P01/P02/P04/P05/P06/P11/P22/…) for safety-related communication.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

E2E profiles (P01/P02/P04/P05/P06/P11/P22/…) for safety-related communication.

Source: [`BSW/E2E`](../../../../../BSW/E2E) — 4 C files, 4 headers.

## Key files

| File | Lines |
|---|---:|
| [`E2E_P01.c`](../../../../../BSW/E2E/E2E_P01.c) | 765 |
| [`E2E_P05.c`](../../../../../BSW/E2E/E2E_P05.c) | 519 |
| [`E2E_SM.c`](../../../../../BSW/E2E/E2E_SM.c) | 514 |
| [`E2E_P01.h`](../../../../../BSW/E2E/E2E_P01.h) | 208 |
| [`E2E_P05.h`](../../../../../BSW/E2E/E2E_P05.h) | 188 |
| [`E2E_SM.h`](../../../../../BSW/E2E/E2E_SM.h) | 154 |
| [`E2E.c`](../../../../../BSW/E2E/E2E.c) | 124 |
| [`E2E.h`](../../../../../BSW/E2E/E2E.h) | 95 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `E2E_GetVersionInfo()`
- `E2E_AR_RELEASE_MAJOR_VERSION()`
- `E2E_AR_RELEASE_MINOR_VERSION()`
- `E2E_AR_RELEASE_REVISION_VERSION()`
- `E2E_MODULE_ID()`
- `E2E_P01Check()`
- `E2E_P01CheckInit()`
- `E2E_P01MapStatusToSM()`
- `E2E_P01Protect()`
- `E2E_P01ProtectInit()`
- `E2E_P05Check()`
- `E2E_P05CheckInit()`

Typical usage:

```c
/* End-to-End Protection Library is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
E2E_GetVersionInfo(&E2E_Config); /* generated in GenData */
```

## Configuration

_No generated `GenData` files matched this module prefix in `Applications/`._

## Dependencies

`MemMap.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-e2e/)
- Sources in the repository: [`BSW/E2E`](../../../../../BSW/E2E)
- BSWMD artefacts: _none shipped for this module (see [`BSWMD/`](../../../../../BSWMD))._

[Back to top](#_top)
