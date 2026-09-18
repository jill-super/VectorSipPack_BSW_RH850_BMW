---
title: "Crypto Driver (RH850 ICUS)"
description: "Crypto Driver (RH850 ICUS) — Hardware-accelerated AES, CMAC, RNG and key extraction on Renesas RH850 ICU-S.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Hardware-accelerated AES, CMAC, RNG and key extraction on Renesas RH850 ICU-S.

Source: [`BSW/Cry_30_Rh850Icus`](../../../../../BSW/Cry_30_Rh850Icus) — 11 C files, 12 headers.

## Key files

| File | Lines |
|---|---:|
| [`Cry_30_Rh850Icus_Hw.c`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_Hw.c) | 1690 |
| [`Cry_30_Rh850Icus_KeyExtract.c`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_KeyExtract.c) | 967 |
| [`Cry_30_Rh850Icus_Rng.c`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_Rng.c) | 848 |
| [`Cry_30_Rh850Icus_AesEncrypt128.c`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_AesEncrypt128.c) | 826 |
| [`Cry_30_Rh850Icus_AesDecrypt128.c`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_AesDecrypt128.c) | 825 |
| [`Cry_30_Rh850Icus_CmacAes128Ver.c`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_CmacAes128Ver.c) | 809 |
| [`Cry_30_Rh850Icus_CmacAes128Gen.c`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_CmacAes128Gen.c) | 738 |
| [`Cry_30_Rh850Icus_KeyWrapSym.c`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_KeyWrapSym.c) | 666 |
| [`Cry_30_Rh850Icus_Hw.h`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_Hw.h) | 508 |
| [`Cry_30_Rh850Icus.c`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus.c) | 483 |
| [`Cry_30_Rh850Icus_CommonUtil.c`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_CommonUtil.c) | 373 |
| [`Cry_30_Rh850Icus.h`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus.h) | 269 |
| [`_Cry_30_Rh850Icus_Callouts.c`](../../../../../BSW/Cry_30_Rh850Icus/_Cry_30_Rh850Icus_Callouts.c) | 238 |
| [`Cry_30_Rh850Icus_CommonUtil.h`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_CommonUtil.h) | 226 |
| [`Cry_30_Rh850Icus_Rng.h`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_Rng.h) | 214 |
| [`Cry_30_Rh850Icus_AesEncrypt128.h`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_AesEncrypt128.h) | 193 |
| [`Cry_30_Rh850Icus_AesDecrypt128.h`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_AesDecrypt128.h) | 193 |
| [`Cry_30_Rh850Icus_CmacAes128Gen.h`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_CmacAes128Gen.h) | 185 |
| [`Cry_30_Rh850Icus_CmacAes128Ver.h`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_CmacAes128Ver.h) | 184 |
| [`Cry_30_Rh850Icus_KeyExtract.h`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_KeyExtract.h) | 179 |
| [`Cry_30_Rh850Icus_KeyWrapSym.h`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_KeyWrapSym.h) | 173 |
| [`_Cry_30_Rh850Icus_Callouts.h`](../../../../../BSW/Cry_30_Rh850Icus/_Cry_30_Rh850Icus_Callouts.h) | 154 |
| [`Cry_30_Rh850Icus_Types.h`](../../../../../BSW/Cry_30_Rh850Icus/Cry_30_Rh850Icus_Types.h) | 122 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Cry_30_Rh850Icus_AesDecrypt128Finish()`
- `Cry_30_Rh850Icus_AesDecrypt128Init()`
- `Cry_30_Rh850Icus_AesDecrypt128MainFunction()`
- `Cry_30_Rh850Icus_AesDecrypt128Start()`
- `Cry_30_Rh850Icus_AesDecrypt128Update()`
- `Cry_30_Rh850Icus_AesEncrypt128Finish()`
- `Cry_30_Rh850Icus_AesEncrypt128Init()`
- `Cry_30_Rh850Icus_AesEncrypt128MainFunction()`
- `Cry_30_Rh850Icus_AesEncrypt128Start()`
- `Cry_30_Rh850Icus_AesEncrypt128Update()`
- `Cry_30_Rh850Icus_CancelCommand()`
- `Cry_30_Rh850Icus_CmacAes128GenFinish()`

Typical usage:

```c
/* Crypto Driver (RH850 ICUS) is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Cry_30_Rh850Icus_AesDecrypt128Finish(&Cry_Config); /* generated in GenData */
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

`MemMap.h`, `Csm_Cbk.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-cry-30-rh850icus/)
- Sources in the repository: [`BSW/Cry_30_Rh850Icus`](../../../../../BSW/Cry_30_Rh850Icus)
- BSWMD artefacts: [`BSWMD/Cry_30_Rh850Icus`](../../../../../BSWMD/Cry_30_Rh850Icus)

[Back to top](#_top)
