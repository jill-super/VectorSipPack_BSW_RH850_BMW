---
title: "XCP on FlexRay"
description: "XCP on FlexRay — Measurement/calibration protocol mapped onto FlexRay.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Measurement/calibration protocol mapped onto FlexRay.

Source: [`BSW/FrXcp`](../../../../../BSW/FrXcp) — 1 C files, 3 headers.

## Key files

| File | Lines |
|---|---:|
| [`FrXcp.c`](../../../../../BSW/FrXcp/FrXcp.c) | 1820 |
| [`FrXcp.h`](../../../../../BSW/FrXcp/FrXcp.h) | 331 |
| [`FrXcp_Types.h`](../../../../../BSW/FrXcp/FrXcp_Types.h) | 212 |
| [`FrXcp_Cbk.h`](../../../../../BSW/FrXcp/FrXcp_Cbk.h) | 183 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `FrXcp_Init()`
- `FrXcp_GetVersionInfo()`
- `FrXcp_DaqResumeClear()`
- `FrXcp_DaqResumeStore()`
- `FrXcp_InitMemory()`
- `FrXcp_InterruptDisableRx()`
- `FrXcp_InterruptDisableTx()`
- `FrXcp_InterruptEnableRx()`
- `FrXcp_InterruptEnableTx()`
- `FrXcp_IsPostbuild()`
- `FrXcp_MainFunctionRx()`
- `FrXcp_MainFunctionTx()`

Typical usage:

```c
/* XCP on FlexRay is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
FrXcp_Init(&FrXcp_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`FrXcp_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrXcp_Cfg.h)
- [`FrXcp_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrXcp_Lcfg.c)
- [`FrXcp_Lcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrXcp_Lcfg.h)
- [`FrXcp_PBcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrXcp_PBcfg.c)
- [`FrXcp_PBcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrXcp_PBcfg.h)
- [`FrXcp_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/FrXcp_Cfg.h)
- [`FrXcp_Lcfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/FrXcp_Lcfg.c)
- [`FrXcp_Lcfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/FrXcp_Lcfg.h)
- [`FrXcp_PBcfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/FrXcp_PBcfg.c)
- [`FrXcp_PBcfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/FrXcp_PBcfg.h)

## Dependencies

`MemMap.h`, `Det.h`, `FrIf.h`, `SchM_Xcp.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-frxcp/)
- Sources in the repository: [`BSW/FrXcp`](../../../../../BSW/FrXcp)
- BSWMD artefacts: _none shipped for this module (see [`BSWMD/`](../../../../../BSWMD))._

[Back to top](#_top)
