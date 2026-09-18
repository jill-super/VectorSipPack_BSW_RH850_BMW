---
title: "Crypto Interface"
description: "Crypto Interface — Multiplexes crypto jobs from Csm to the underlying crypto drivers.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Multiplexes crypto jobs from Csm to the underlying crypto drivers.

Source: [`BSW/CryIf`](../../../../../BSW/CryIf) — 1 C files, 2 headers.

## Key files

| File | Lines |
|---|---:|
| [`CryIf.c`](../../../../../BSW/CryIf/CryIf.c) | 1158 |
| [`CryIf.h`](../../../../../BSW/CryIf/CryIf.h) | 492 |
| [`CryIf_Cbk.h`](../../../../../BSW/CryIf/CryIf_Cbk.h) | 64 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `CryIf_Init()`
- `CryIf_GetVersionInfo()`
- `CryIf_CallbackNotification()`
- `CryIf_CancelJob()`
- `CryIf_CertificateParse()`
- `CryIf_CertificateVerify()`
- `CryIf_InitMemory()`
- `CryIf_KeyCopy()`
- `CryIf_KeyDerive()`
- `CryIf_KeyElementCopy()`
- `CryIf_KeyElementGet()`
- `CryIf_KeyElementSet()`

Typical usage:

```c
/* Crypto Interface is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
CryIf_Init(&CryIf_Config); /* generated in GenData */
```

## Configuration

_No generated `GenData` files matched this module prefix in `Applications/`._

## Dependencies

`MemMap.h`, `Csm_Cbk.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-cryif/)
- Sources in the repository: [`BSW/CryIf`](../../../../../BSW/CryIf)
- BSWMD artefacts: [`BSWMD/CryIf`](../../../../../BSWMD/CryIf)

[Back to top](#_top)
