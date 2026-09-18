---
title: "FlexRay Interface"
description: "FlexRay Interface — Hardware-independent FlexRay abstraction: job lists, LPDU Tx/Rx, timers.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Hardware-independent FlexRay abstraction: job lists, LPDU Tx/Rx, timers.

Source: [`BSW/FrIf`](../../../../../BSW/FrIf) — 6 C files, 4 headers.

## Key files

| File | Lines |
|---|---:|
| [`FrIf.c`](../../../../../BSW/FrIf/FrIf.c) | 3294 |
| [`FrIf.h`](../../../../../BSW/FrIf/FrIf.h) | 1889 |
| [`FrIf_Tx.c`](../../../../../BSW/FrIf/FrIf_Tx.c) | 1071 |
| [`FrIf_Rx.c`](../../../../../BSW/FrIf/FrIf_Rx.c) | 596 |
| [`FrIf_Trcv.c`](../../../../../BSW/FrIf/FrIf_Trcv.c) | 593 |
| [`FrIf_Priv.h`](../../../../../BSW/FrIf/FrIf_Priv.h) | 466 |
| [`FrIf_AbsTimer.c`](../../../../../BSW/FrIf/FrIf_AbsTimer.c) | 400 |
| [`FrIf_Ext.h`](../../../../../BSW/FrIf/FrIf_Ext.h) | 147 |
| [`FrIf_Time.c`](../../../../../BSW/FrIf/FrIf_Time.c) | 119 |
| [`FrIf_Cbk.h`](../../../../../BSW/FrIf/FrIf_Cbk.h) | 92 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `FrIf_Init()`
- `FrIf_GetVersionInfo()`
- `FrIf_MainFunction()`
- `FrIf_AbortCommunication()`
- `FrIf_AckAbsoluteTimerIRQ()`
- `FrIf_AllSlots()`
- `FrIf_AllowColdstart()`
- `FrIf_CancelAbsoluteTimer()`
- `FrIf_CancelTransmit()`
- `FrIf_CheckWakeupByTransceiver()`
- `FrIf_ClearBit()`
- `FrIf_ClearTransceiverWakeup()`

Typical usage:

```c
/* FlexRay Interface is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
FrIf_Init(&FrIf_Config); /* generated in GenData */
```

## Configuration

DaVinci-generated files (`Applications/*/Appl/GenData`):

- [`FrIf_Cfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_Cfg.h)
- [`FrIf_LCfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_LCfg.c)
- [`FrIf_LCfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_LCfg.h)
- [`FrIf_PBCfg.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_PBCfg.c)
- [`FrIf_PBCfg.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_PBCfg.h)
- [`FrIf_Types.h`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/FrIf_Types.h)
- [`FrIf.c`](../../../../../Applications/OEM_Extensions/BTLD/Appl/GenData/RteAnalyzer/Source/FrIf.c)
- [`FrIf_Cfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/FrIf_Cfg.h)
- [`FrIf_LCfg.c`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/FrIf_LCfg.c)
- [`FrIf_LCfg.h`](../../../../../Applications/OEM_Extensions/EPS/Appl/GenData/FrIf_LCfg.h)

## Dependencies

`MemMap.h`, `vstdlib.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-frif/)
- Sources in the repository: [`BSW/FrIf`](../../../../../BSW/FrIf)
- BSWMD artefacts: [`BSWMD/FrIf`](../../../../../BSWMD/FrIf)

[Back to top](#_top)
