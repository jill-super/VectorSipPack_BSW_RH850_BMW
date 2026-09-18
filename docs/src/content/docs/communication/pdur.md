---
title: "PDU Router"
description: "PDU Router — Routes I-PDUs between interfaces (FrIf), transport (FrTp) and upper layers.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Routes I-PDUs between interfaces (FrIf), transport (FrTp) and upper layers.

Source: [`BSW/PduR`](../../../../../BSW/PduR) — 1 C files, 1 headers.

## Key files

| File | Lines |
|---|---:|
| [`PduR.c`](../../../../../BSW/PduR/PduR.c) | 8166 |
| [`PduR.h`](../../../../../BSW/PduR/PduR.h) | 2758 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `PduR_Init()`
- `PduR_GetVersionInfo()`
- `PduR_Bm_AssignAssociatedBuffer2DestinationInstance()`
- `PduR_Bm_GetData()`
- `PduR_Bm_PutData()`
- `PduR_Bm_ReadData()`
- `PduR_Bm_ResetTxBuffer()`
- `PduR_CancelReceive()`
- `PduR_CancelTransmit()`
- `PduR_ChangeParameter()`
- `PduR_Det_ReportError()`
- `PduR_DisableRouting()`

Typical usage:

```c
/* PDU Router is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
PduR_Init(&PduR_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`PduR_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/PduR_Cfg.h)
- [`PduR_Dcm.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/PduR_Dcm.h)
- [`PduR_FrTp.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/PduR_FrTp.h)
- [`PduR_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/PduR_Lcfg.c)
- [`PduR_Lcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/PduR_Lcfg.h)
- [`PduR_PBcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/PduR_PBcfg.c)
- [`PduR_PBcfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/PduR_PBcfg.h)
- [`PduR_Types.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/PduR_Types.h)
- [`PduR.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/RteAnalyzer/Source/PduR.c)
- [`PduR_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/PduR_Cfg.h)

## Dependencies

`MemMap.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-pdur/)
- Sources in the repository: [`BSW/PduR`](../../../../../BSW/PduR)
- BSWMD artefacts: [`BSWMD/PduR`](../../../../../BSWMD/PduR)

[Back to top](#_top)
