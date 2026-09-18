---
title: "Vector SIP"
description: "The Software Integration Package: delivery CBD1700369_D04 (SIP 19.06.14)."
sidebar:
  order: 1
---

:::note[What is the SIP?]
The **Software Integration Package (SIP)** is Vector's delivery unit: a consistent, versioned set of MICROSAR BSW modules, DaVinci configuration, generators and documentation. In this repository **the SIP is the `BSW/`, `BSWMD/`, `Doc/`, `DaVinciConfigurator/` and `Generators/` trees**; the BMW applications under `Applications/` are custom code built *on top of* the SIP.
:::

| Property | Value |
|---|---|
| Delivery ID | `CBD1700369_D04` |
| SIP version | `19.06.14` (see `BSW/SipVersionCheck/v_ver.h`) |
| Customer program | MSR BAC 4.x (MSR_Bmw_SLP4), Renesas RH850 P1M R7F701363EAFP |
| Toolchain | Green Hills MULTI 6.1.6 (V2015.1.7) |
| License file | [`SipLicense.lic`](../../../../../SipLicense.lic) |

## SIP contents

| Tree | Role |
|---|---|
| `BSW/` | The SIP modules themselves — one page per module under [SIP modules](./modules/) |
| `BSWMD/` | Module descriptions (ARXML) for DaVinci/RTE |
| `Doc/` | All Vector PDFs, converted under [SIP documents](./general/) and [General documents](../general/) |
| `DaVinciConfigurator/`, `Generators/` | Configuration and code-generation tooling |
| `ThirdParty/` | Renesas MCAL integrated via the Vector helper |

## Custom vs. Vector code

- **Vector SIP**: every page under [SIP modules](./modules/) (MICROSAR, proprietary — do not hand-edit).
- **BMW custom**: [Application Software](../asw/) and [Integration Files](../asw/integration-files/).
- **Third-party**: [MCAL integration](../mcal/mcal-rh850p1x/) and [Make Support](../tools/make-support/).

[Back to top](#_top)
