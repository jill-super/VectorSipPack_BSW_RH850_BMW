---
title: "FlexRay_020.asc"
description: "Delivery log/trace: FlexRay_020.asc."
---

> Original file: [`Doc/DeliveryInformation/DiagSystemTest/FlexRay_020.asc`](../../../../../../Doc/DeliveryInformation/DiagSystemTest/FlexRay_020.asc). Traces and logs are kept verbatim (excerpt).

```text
date Mon Jan 29 04:57:15.001 pm 2018
base hex timestamps absolute
no internal events logged
// version 10.0.1
// 0.000000 Systemtest ISO14229 V1.63 18.08.2015
// 11.869087 Systemtest ISO14229 V1.63
// 11.869087 Start Test ECU ID=30 EPS-ZF02
// 11.869087 Systemtest ISO14229 V1.63 18.08.2015
// 11.869087
// 11.869087 ECU-Name : EPS-ZF02
// 11.869087
// 11.869087 ECU-Address : 0x30
// 11.869087 Response-Time : 50 ms
// 11.869087 Reset-Time : 4000 ms
// 11.869087 Session-Timeout : 5000 ms
// 11.869087
// 11.869087 LH-Version : 255: SAP-Nr.: 10000790-000-12 (SP2018)
// 11.869087 (Version of LH Diagnosis ZB SAP-Nr.10000790)
// 11.869087 ECU tested as 35up-ECU
// 11.869087
// 11.869087 TX-Slot (GW->ECU) : 147
// 11.869087 RX-Slot (ECU->GW) : 183
// 11.869087
// 11.869087
// 11.869087 Tested on FlexRay
// 11.869087 FlexRay-Settings:
// 11.869087
// 11.869087 Testeraddress : 0xF9
// 11.869087 Seperation Cycles : 0
// 11.869087 Bandwith Control : 16
// 11.869087 Broadcast Slot : 0xD2
// 11.869087
// 11.869087 DTC-Settings:
// 11.869087
// 11.869087 Number of Comp.DTC-Ranges: 1
// 11.869087
// 11.869087 1. Comp.DTC-Range : 0x02FF7D - 0x02FF7D
// 11.869087 Tested Component-DTCs: 2ff7d
// 11.869087
// 11.869087 NW.DTC-Range : 0xE84BFF - 0xE84BFF
// 11.869087 Tested Network-DTCs: e84bff
// 11.869087
// 11.869087 Test directly on CAN
// 11.869087
// 11.869087 ProgSess will not be tested
// 11.869087
// 11.869087 Selected Tests
// 11.869087 : 1
// 11.869087 : 0987654321
// 11.869087 TG 1.1 : 1111111111
// 11.869087 TG 2 : 1111
// 11.869087 TG 3.1 : 1110111
// 11.869087 TG 3.2 : 11
// 11.869087 TG 3.3 : 1111111
// 11.869087 TG 3.4 : 1111
// 11.869087 TG 3.5 : 11111
// 11.869087 TG 3.6 : 111
// 11.869087 TG 3.7 : 111
// 11.869087 TG 3.8 : 1111
// 11.869087 TG 3.9 : 11111
// 11.869087 TG 3.10 : 111
// 11.869087 Stopping ROE persistant via TAS
 11.924238 Fr RMSG 0 12 1 1 d2 b Tx 0 304802 5 20 67c x 14 14 00 f0 00 f9 40 0a 00 0a 31 01 0f 0b df 00 03 86 40 02 ff 00 0 0 0
// 12.969087 rel. LS: 0
// 12.969087 Stopping ROE persistant directly
 12.974215 Fr RMSG 0 12 1 1 d2 1d Tx 0 304802 5 20 440 x 8 8 02 df f0 00 03 86 c0 02 0 0 0
// 14.969087 rel. LS: 0
// 14.969087 *** No Systime received for 5000ms
// 14.969087 Systime at start of test: 0 (0x00000000)
// 14.969087 local time of computer: Mon Jan 29 16:57:32 2018
// 14.969087 Testing Loopback...
 15.023768 Fr RMSG 0 12 1 1 93 37 Tx 0 304802 5 20 47a x 10 10 00 30 00 f9 40 06 00 06 31 01 03 03 01 02 ff 00 0 0 0
// 15.039031 Loopback supported. Using Loopback for Tests 1.1.1 to 2.4
 15.039031 Fr RMSG 0 0 1 1 b7 3a Rx 0 300002 5 20 5f9 x 20 20 00 f9 00 30 40 06 00 06 71 01 03 03 01 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0 0 0
//
```

[Back to top](#_top)
