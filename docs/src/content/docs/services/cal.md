---
title: "Cryptographic Abstraction Library (Cal)"
description: "Cryptographic Abstraction Library (Cal) — Crypto abstraction: hash, MAC generation/verification, signatures, symmetric encrypt/decrypt.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Crypto abstraction: hash, MAC generation/verification, signatures, symmetric encrypt/decrypt.

Source: [`BSW/Cal`](../../../../../BSW/Cal) — 13 C files, 2 headers.

## Key files

| File | Lines |
|---|---:|
| [`Cal_Types.h`](../../../../../BSW/Cal/Cal_Types.h) | 547 |
| [`Cal.h`](../../../../../BSW/Cal/Cal.h) | 419 |
| [`Cal_KeyExchange.c`](../../../../../BSW/Cal/Cal_KeyExchange.c) | 381 |
| [`Cal_Random.c`](../../../../../BSW/Cal/Cal_Random.c) | 339 |
| [`Cal_SymDecrypt.c`](../../../../../BSW/Cal/Cal_SymDecrypt.c) | 331 |
| [`Cal_SymEncrypt.c`](../../../../../BSW/Cal/Cal_SymEncrypt.c) | 331 |
| [`Cal_KeyDerive.c`](../../../../../BSW/Cal/Cal_KeyDerive.c) | 313 |
| [`Cal_SymBlockEncrypt.c`](../../../../../BSW/Cal/Cal_SymBlockEncrypt.c) | 311 |
| [`Cal_SymBlockDecrypt.c`](../../../../../BSW/Cal/Cal_SymBlockDecrypt.c) | 310 |
| [`Cal_MacGenerate.c`](../../../../../BSW/Cal/Cal_MacGenerate.c) | 306 |
| [`Cal_MacVerify.c`](../../../../../BSW/Cal/Cal_MacVerify.c) | 300 |
| [`Cal_SignatureVerify.c`](../../../../../BSW/Cal/Cal_SignatureVerify.c) | 300 |
| [`Cal_SymKeyExtract.c`](../../../../../BSW/Cal/Cal_SymKeyExtract.c) | 297 |
| [`Cal_Hash.c`](../../../../../BSW/Cal/Cal_Hash.c) | 296 |
| [`Cal.c`](../../../../../BSW/Cal/Cal.c) | 146 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Cal_GetVersionInfo()`
- `Cal_HashFinish()`
- `Cal_HashStart()`
- `Cal_HashUpdate()`
- `Cal_KeyDeriveFinish()`
- `Cal_KeyDeriveStart()`
- `Cal_KeyDeriveUpdate()`
- `Cal_KeyExchangeCalcPubVal()`
- `Cal_KeyExchangeCalcSecretFinish()`
- `Cal_KeyExchangeCalcSecretStart()`
- `Cal_KeyExchangeCalcSecretUpdate()`
- `Cal_MacGenerateFinish()`

Typical usage:

```c
/* Cryptographic Abstraction Library (Cal) is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Cal_GetVersionInfo(&Cal_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`Cal_Cfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Cal_Cfg.c)
- [`Cal_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Cal_Cfg.h)

## Dependencies

`MemMap.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-cal/)
- Sources in the repository: [`BSW/Cal`](../../../../../BSW/Cal)
- BSWMD artefacts: [`BSWMD/Cal`](../../../../../BSWMD/Cal)

[Back to top](#_top)
