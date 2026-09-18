---
title: "Secure Onboard Communication"
description: "Secure Onboard Communication — PDU authentication with freshness management (uses Csm/Cry).."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Vector%20MICROSAR-blue)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Vector MICROSAR]
This module is **Vector-provided** (proprietary MICROSAR code, DaVinci-generated where applicable). Do not edit by hand — configure it in DaVinci Configurator and regenerate. See the [SIP overview](../../sip/).
:::

## Purpose

PDU authentication with freshness management (uses Csm/Cry).

Source: [`BSW/SecOC`](../../../../../BSW/SecOC) — 1 C files, 1 headers.

## Key files

| File | Lines |
|---|---:|
| [`SecOC.c`](../../../../../BSW/SecOC/SecOC.c) | 2897 |
| [`SecOC.h`](../../../../../BSW/SecOC/SecOC.h) | 440 |


## Public API

Anchors found in the headers (see the Technical Reference for signatures):

- `SecOC_Init()`
- `SecOC_GetVersionInfo()`
- `SecOC_AssociateKey()`
- `SecOC_Authenticate_CopyAuthenticatorToSecuredPdu()`
- `SecOC_Authenticate_IncrementAndCheckBuildAttempts()`
- `SecOC_CancelTransmit()`
- `SecOC_CopyRxData()`
- `SecOC_CopyTxData()`
- `SecOC_DeInit()`
- `SecOC_FreshnessValueRead()`
- `SecOC_FreshnessValueWrite()`
- `SecOC_InitMemory()`

Typical usage:

```c
/* Secure Onboard Communication is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
SecOC_Init(&SecOC_Config); /* generated in GenData */
```

## Configuration

_No generated `GenData` files matched this module prefix in `Applications/`._

## Dependencies

`MemMap.h`, `vstdlib.h`, `Csm.h`

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-secoc/)
- Sources in the repository: [`BSW/SecOC`](../../../../../BSW/SecOC)
- BSWMD artefacts: [`BSWMD/SecOC`](../../../../../BSWMD/SecOC)

[Back to top](#_top)
