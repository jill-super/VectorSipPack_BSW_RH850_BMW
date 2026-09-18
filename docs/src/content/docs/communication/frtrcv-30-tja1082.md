---
title: "FlexRay Transceiver Driver"
description: "FlexRay Transceiver Driver — Driver for the NXP TJA1082 FlexRay transceiver.."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

Driver for the NXP TJA1082 FlexRay transceiver.

Source: [`BSW/FrTrcv_30_Tja1082`](../../../../../BSW/FrTrcv_30_Tja1082) — 1 C files, 2 headers.

## Key files

| File | Lines |
|---|---:|
| [`FrTrcv_30_Tja1082.c`](../../../../../BSW/FrTrcv_30_Tja1082/FrTrcv_30_Tja1082.c) | 932 |
| [`FrTrcv_30_Tja1082.h`](../../../../../BSW/FrTrcv_30_Tja1082/FrTrcv_30_Tja1082.h) | 429 |
| [`FrTrcv_30_Tja1082_Cbk.h`](../../../../../BSW/FrTrcv_30_Tja1082/FrTrcv_30_Tja1082_Cbk.h) | 113 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `FrTrcv_30_Tja1082_CheckWakeupByTransceiver()`
- `FrTrcv_30_Tja1082_ClearTransceiverWakeup()`
- `FrTrcv_30_Tja1082_DisableTransceiverBranch()`
- `FrTrcv_30_Tja1082_EnableTransceiverBranch()`
- `FrTrcv_30_Tja1082_GetTransceiverError()`
- `FrTrcv_30_Tja1082_GetTransceiverMode()`
- `FrTrcv_30_Tja1082_GetTransceiverWUReason()`
- `FrTrcv_30_Tja1082_GetVersionInfo()`
- `FrTrcv_30_Tja1082_Init()`
- `FrTrcv_30_Tja1082_InitMemory()`
- `FrTrcv_30_Tja1082_MainFunction()`
- `FrTrcv_30_Tja1082_SetTransceiverMode()`

Typical usage:

```c
/* FlexRay Transceiver Driver is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
FrTrcv_30_Tja1082_CheckWakeupByTransceiver(&FrTrcv_Config); /* generated in GenData */
```

## Configuration

_No generated `GenData` files matched this module prefix in `Applications/`._

## Dependencies

`MemMap.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-frtrcv-tja1082/)
- Sources in the repository: [`BSW/FrTrcv_30_Tja1082`](../../../../../BSW/FrTrcv_30_Tja1082)
- BSWMD artefacts: [`BSWMD/FrTrcv_30_Tja1082`](../../../../../BSWMD/FrTrcv_30_Tja1082)

[Back to top](#_top)
