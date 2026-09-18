---
title: "FlexRay Driver"
description: "FlexRay Driver — RH850 FlexRay controller driver: message buffers, interrupts, synchronisation.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

RH850 FlexRay controller driver: message buffers, interrupts, synchronisation.

Source: [`BSW/Fr`](../../../../../BSW/Fr) — 3 C files, 4 headers.

## Key files

| File | Lines |
|---|---:|
| [`Fr.c`](../../../../../BSW/Fr/Fr.c) | 4559 |
| [`Fr.h`](../../../../../BSW/Fr/Fr.h) | 1869 |
| [`Fr_ERay.h`](../../../../../BSW/Fr/Fr_ERay.h) | 1644 |
| [`Fr_Timer.c`](../../../../../BSW/Fr/Fr_Timer.c) | 525 |
| [`Fr_Irq.c`](../../../../../BSW/Fr/Fr_Irq.c) | 263 |
| [`Fr_Priv.h`](../../../../../BSW/Fr/Fr_Priv.h) | 162 |
| [`Fr_Ext.h`](../../../../../BSW/Fr/Fr_Ext.h) | 125 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `Fr_Init()`
- `Fr_GetVersionInfo()`
- `Fr_AbortCommunication()`
- `Fr_AckAbsoluteTimerIRQ()`
- `Fr_AllSlots()`
- `Fr_AllowColdstart()`
- `Fr_CancelAbsoluteTimer()`
- `Fr_CancelTxLPdu()`
- `Fr_CheckTxLPduStatus()`
- `Fr_ControllerInit()`
- `Fr_DemReportErrorStatus()`
- `Fr_DisableAbsoluteTimerIRQ()`

Typical usage:

```c
/* FlexRay Driver is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
Fr_Init(&Fr_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`FrIf_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_Cfg.h)
- [`FrIf_LCfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_LCfg.c)
- [`FrIf_LCfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_LCfg.h)
- [`FrIf_PBCfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_PBCfg.c)
- [`FrIf_PBCfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_PBCfg.h)
- [`FrIf_Types.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_Types.h)
- [`FrSM_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrSM_Cfg.h)
- [`FrSM_Lcfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrSM_Lcfg.c)
- [`FrTp_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrTp_Cfg.h)
- [`FrTp_GlobCfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrTp_GlobCfg.h)

## Dependencies

`MemMap.h`, `Std_Types.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-fr/)
- Sources in the repository: [`BSW/Fr`](../../../../../BSW/Fr)
- BSWMD artefacts: [`BSWMD/Fr`](../../../../../BSWMD/Fr)

[Back to top](#_top)
