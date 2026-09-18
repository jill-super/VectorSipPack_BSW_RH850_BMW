---
title: "Crypto Service Manager"
description: "Crypto Service Manager — Asynchronous crypto job interface for SecOC, Dcm and applications.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Asynchronous crypto job interface for SecOC, Dcm and applications.

Source: [`BSW/Csm`](../../../../../BSW/Csm) — 1 C files, 3 headers.

## Key files

| File | Lines |
|---|---:|
| [`Csm.c`](../../../../../BSW/Csm/Csm.c) | 2340 |
| [`Csm.h`](../../../../../BSW/Csm/Csm.h) | 925 |
| [`Csm_Types.h`](../../../../../BSW/Csm/Csm_Types.h) | 424 |
| [`Csm_Cbk.h`](../../../../../BSW/Csm/Csm_Cbk.h) | 65 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Csm_Init()`
- `Csm_GetVersionInfo()`
- `Csm_MainFunction()`
- `Csm_AEADDecrypt()`
- `Csm_AEADEncrypt()`
- `Csm_CallbackNotification()`
- `Csm_CancelJob()`
- `Csm_CertificateParse()`
- `Csm_CertificateVerify()`
- `Csm_Decrypt()`
- `Csm_Encrypt()`
- `Csm_Hash()`

Typical usage:

```c
/* Crypto Service Manager is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Csm_Init(&Csm_Config); /* generated in GenData */
```

## Configuration

_No generated `GenData` files matched this module prefix in `Applications/`._

## Dependencies

`MemMap.h`, `CryIf.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-csm/)
- Sources in the repository: [`BSW/Csm`](../../../../../BSW/Csm)
- BSWMD artefacts: [`BSWMD/Csm`](../../../../../BSWMD/Csm)

[Back to top](#_top)
