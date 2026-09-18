---
title: "Universal Measurement & Calibration (XCP)"
description: "Universal Measurement & Calibration (XCP) — XCP core: DAQ/STIM, calibration, seed-and-key hooks.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

XCP core: DAQ/STIM, calibration, seed-and-key hooks.

Source: [`BSW/Xcp`](../../../../../BSW/Xcp) — 2 C files, 4 headers.

## Key files

| File | Lines |
|---|---:|
| [`Xcp.c`](../../../../../BSW/Xcp/Xcp.c) | 7232 |
| [`_XcpAppl.c`](../../../../../BSW/Xcp/_XcpAppl.c) | 1188 |
| [`Xcp_Priv.h`](../../../../../BSW/Xcp/Xcp_Priv.h) | 1123 |
| [`Xcp.h`](../../../../../BSW/Xcp/Xcp.h) | 952 |
| [`_XcpAppl.h`](../../../../../BSW/Xcp/_XcpAppl.h) | 776 |
| [`Xcp_Types.h`](../../../../../BSW/Xcp/Xcp_Types.h) | 245 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Xcp_Init()`
- `Xcp_GetVersionInfo()`
- `Xcp_MainFunction()`
- `Xcp_CallTlFunction_1_Param()`
- `Xcp_CallTlFunction_2_Param()`
- `Xcp_CallTlFunction_3_Param()`
- `Xcp_Command()`
- `Xcp_Disconnect()`
- `Xcp_Event()`
- `Xcp_GetActiveTl()`
- `Xcp_GetSessionStatus()`
- `Xcp_GetVal16()`

Typical usage:

```c
/* Universal Measurement & Calibration (XCP) is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Xcp_Init(&Xcp_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`Xcp.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/RteAnalyzer/Source/Xcp.c)
- [`Xcp_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Xcp_Cfg.h)
- [`Xcp_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Xcp_Lcfg.c)
- [`Xcp_Lcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/Xcp_Lcfg.h)
- [`Xcp.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/RteAnalyzer/Source/Xcp.c)
- [`Xcp_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Xcp_Cfg.h)
- [`Xcp_Lcfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Xcp_Lcfg.c)
- [`Xcp_Lcfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/Xcp_Lcfg.h)

## Dependencies

`MemMap.h`, `VttCntrl_Base.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-xcp/)
- Sources in the repository: [`BSW/Xcp`](../../../../../BSW/Xcp)
- BSWMD artefacts: [`BSWMD/Xcp`](../../../../../BSWMD/Xcp)

[Back to top](#_top)
