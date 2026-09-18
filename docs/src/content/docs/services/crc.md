---
title: "CRC Library"
description: "CRC Library — CRC-8/16/32 routines used by E2E, NvM and safety paths.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

CRC-8/16/32 routines used by E2E, NvM and safety paths.

Source: [`BSW/Crc`](../../../../../BSW/Crc) — 1 C files, 1 headers.

## Key files

| File | Lines |
|---|---:|
| [`Crc.c`](../../../../../BSW/Crc/Crc.c) | 1099 |
| [`Crc.h`](../../../../../BSW/Crc/Crc.h) | 271 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Crc_GetVersionInfo()`
- `Crc_CalculateCRC16()`
- `Crc_CalculateCRC32()`
- `Crc_CalculateCRC32P4()`
- `Crc_CalculateCRC64()`
- `Crc_CalculateCRC8()`
- `Crc_CalculateCRC8H2F()`

Typical usage:

```c
/* CRC Library is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Crc_GetVersionInfo(&Crc_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`Crc_Cfg.h`](../../../../../Applications/OEM_Extensions/BM/Appl/GenData/Crc_Cfg.h)
- [`Crc_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Crc_Cfg.h)
- [`Crc_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Crc_Cfg.h)

## Dependencies

`MemMap.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-crc/)
- Sources in the repository: [`BSW/Crc`](../../../../../BSW/Crc)
- BSWMD artefacts: [`BSWMD/Crc`](../../../../../BSWMD/Crc)

[Back to top](#_top)
