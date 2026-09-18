---
title: "SIP delivery & version"
description: "Delivery CBD1700369_D04 metadata and how versions are checked."
sidebar:
  order: 2
---

## Version check

`BSW/SipVersionCheck/v_ver.h` pins the delivery at compile time:

```c
#define _VECTOR_SIP_VERSION 0x1906u
#define _VECTOR_SIP_RELEASE_VERSION 0x14u
#define _VECTOR_SIP_BUILD_VERSION 0x04u
```

## License

- Customer: **Nexteer Automotive Corporation**
- Program: **MSR BAC 4.x (MSR_Bmw_SLP4)**
- Derivative: **Renesas RH850 P1M R7F701363EAFP**
- Full license parameters: [`SipLicense.lic`](../../../../../SipLicense.lic)
- Beta disclaimer: [`BetaDisclaimer.txt`](../../../../../BetaDisclaimer.txt)

## Delivery documents

- [Delivery information](../../general/delivery-information/) — ProductInformation, BTLD readme, issue report
- [Safety manual](../../general/safety-manual/)
- [Release notes](../../general/release-notes/)

[Back to top](#_top)
