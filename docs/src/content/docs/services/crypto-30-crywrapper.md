---
title: "Crypto Driver Wrapper"
description: "Crypto Driver Wrapper — AUTOSAR Crypto driver wrapping RH850 ICUS primitives, incl. key management.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

AUTOSAR Crypto driver wrapping RH850 ICUS primitives, incl. key management.

Source: [`BSW/Crypto_30_CryWrapper`](../../../../../BSW/Crypto_30_CryWrapper) — 6 C files, 6 headers.

## Key files

| File | Lines |
|---|---:|
| [`Crypto_30_CryWrapper_KeyManagement.c`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper_KeyManagement.c) | 1543 |
| [`Crypto_30_CryWrapper.c`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper.c) | 1376 |
| [`Crypto_30_CryWrapper_Hw.c`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper_Hw.c) | 937 |
| [`Crypto_30_CryWrapper_Cipher.c`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper_Cipher.c) | 894 |
| [`Crypto_30_CryWrapper_Mac.c`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper_Mac.c) | 523 |
| [`Crypto_30_CryWrapper_KeyManagement.h`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper_KeyManagement.h) | 521 |
| [`Crypto_30_CryWrapper_Hw.h`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper_Hw.h) | 506 |
| [`Crypto_30_CryWrapper_Services.h`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper_Services.h) | 298 |
| [`Crypto_30_CryWrapper.h`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper.h) | 294 |
| [`Crypto_30_CryWrapper_Random.c`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper_Random.c) | 223 |
| [`Crypto_30_CryWrapper_GeneratedTypes.h`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper_GeneratedTypes.h) | 197 |
| [`Crypto_30_CryWrapper_Custom.h`](../../../../../BSW/Crypto_30_CryWrapper/Crypto_30_CryWrapper_Custom.h) | 31 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Crypto_30_CryWrapper_CancelJob()`
- `Crypto_30_CryWrapper_CertificateParse()`
- `Crypto_30_CryWrapper_CertificateVerify()`
- `Crypto_30_CryWrapper_ClearKeyElementStateByMask()`
- `Crypto_30_CryWrapper_DispatchAeadDecrypt()`
- `Crypto_30_CryWrapper_DispatchAeadEncrypt()`
- `Crypto_30_CryWrapper_DispatchCipherDecrypt()`
- `Crypto_30_CryWrapper_DispatchCipherEncrypt()`
- `Crypto_30_CryWrapper_DispatchHash()`
- `Crypto_30_CryWrapper_DispatchMacGenerate()`
- `Crypto_30_CryWrapper_DispatchMacVerify()`
- `Crypto_30_CryWrapper_DispatchRandom()`

Typical usage:

```c
/* Crypto Driver Wrapper is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Crypto_30_CryWrapper_CancelJob(&Crypto_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`CryptoClassic_Version.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/CryptoClassic_Version.h)
- [`Crypto_CertificateManagement.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Crypto_CertificateManagement.c)
- [`Crypto_CertificateManagement.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Crypto_CertificateManagement.h)
- [`Crypto_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Crypto_Cfg.h)
- [`Crypto_JumpTable.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Crypto_JumpTable.c)
- [`Crypto_JumpTable.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Crypto_JumpTable.h)
- [`Crypto_Version.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Crypto_Version.h)
- [`CryptoClassic_Version.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/CryptoClassic_Version.h)
- [`Crypto_CertificateManagement.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Crypto_CertificateManagement.c)
- [`Crypto_CertificateManagement.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Crypto_CertificateManagement.h)

## Dependencies

`MemMap.h`, `CryIf_Cbk.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-crypto-30-crywrapper/)
- Sources in the repository: [`BSW/Crypto_30_CryWrapper`](../../../../../BSW/Crypto_30_CryWrapper)
- BSWMD artefacts: [`BSWMD/Crypto_30_CryWrapper`](../../../../../BSWMD/Crypto_30_CryWrapper)

[Back to top](#_top)
