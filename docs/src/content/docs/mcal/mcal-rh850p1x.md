---
title: "MCAL (Renesas RH850 P1x)"
description: "MCAL (Renesas RH850 P1x) — Build stub plus Vector integration for the third-party Renesas MCAL (see ThirdParty/).."
---

<div class="badge-row">

![origin](https://img.shields.io/badge/origin-Renesas_3rd--party-orange)

![C](https://img.shields.io/badge/language-C-blue) ![AUTOSAR](https://img.shields.io/badge/AUTOSAR-4.x-green)

</div>

:::note[Third-party]
This layer integrates the **Renesas MCAL** via Vector's integration helper (`ThirdParty/Mcal_Rh850P1x`). The actual driver sources are third-party; this repo holds the integration (`BSW/Mcal_Rh850P1x/mak`).
:::

## Purpose

Build stub plus Vector integration for the third-party Renesas MCAL (see ThirdParty/).

Source: [`BSW/Mcal_Rh850P1x`](../../../../../BSW/Mcal_Rh850P1x) — 0 C files, 0 headers.

## Key files

_Configuration/build-only module — no C sources in this delivery._

## Public API

_No `Init`/`GetVersionInfo`/`MainFunction` anchors detected by static scan. Consult the header files and Technical Reference below._

Typical usage:

```c
/* MCAL (Renesas RH850 P1x) is initialised by EcuM during startup,
   using DaVinci-generated post-build configuration. */
```

## Configuration

_No generated `GenData` files matched this module prefix in `Applications/`._

## Dependencies

_No external intra-SIP includes detected (self-contained or config-driven)._

## Further reading

- [Converted Technical Reference](../../general/technical-references/technical-reference-3rdparty-mcal-integration/)
- Sources in the repository: [`BSW/Mcal_Rh850P1x`](../../../../../BSW/Mcal_Rh850P1x)
- BSWMD artefacts: [`BSWMD/Mcal_Rh850P1x`](../../../../../BSWMD/Mcal_Rh850P1x)

[Back to top](#_top)
