---
title: "I-PDU Multiplexer"
description: "I-PDU Multiplexer — Multiplexed I-PDUs (static/dynamic parts) for FlexRay frames.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Multiplexed I-PDUs (static/dynamic parts) for FlexRay frames.

Source: [`BSW/IpduM`](../../../../../BSW/IpduM) — 1 C files, 2 headers.

## Key files

| File | Lines |
|---|---:|
| [`IpduM.c`](../../../../../BSW/IpduM/IpduM.c) | 3309 |
| [`IpduM.h`](../../../../../BSW/IpduM/IpduM.h) | 322 |
| [`IpduM_Cbk.h`](../../../../../BSW/IpduM/IpduM_Cbk.h) | 132 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `IpduM_Init()`
- `IpduM_GetVersionInfo()`
- `IpduM_InitMemory()`
- `IpduM_RxIndication()`
- `IpduM_Transmit()`
- `IpduM_TriggerTransmit()`
- `IpduM_TxConfirmation()`

Typical usage:

```c
/* I-PDU Multiplexer is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
IpduM_Init(&IpduM_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`IpduM_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/IpduM_Cfg.h)
- [`IpduM_Lcfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/IpduM_Lcfg.c)
- [`IpduM_Lcfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/IpduM_Lcfg.h)
- [`IpduM_PBcfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/IpduM_PBcfg.c)
- [`IpduM_PBcfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/IpduM_PBcfg.h)
- [`IpduM.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/RteAnalyzer/Source/IpduM.c)

## Dependencies

`MemMap.h`, `vstdlib.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-ipdum/)
- Sources in the repository: [`BSW/IpduM`](../../../../../BSW/IpduM)
- BSWMD artefacts: [`BSWMD/IpduM`](../../../../../BSWMD/IpduM)

[Back to top](#_top)
