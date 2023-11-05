/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _No_Radio_Packets_RadioLib_H_
#define _No_Radio_Packets_RadioLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* Radio_packets_out/ */ Radio_packets_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* _L30/ */ _L30;
} outC_No_Radio_Packets_RadioLib;

/* ===========  node initialization and cycle functions  =========== */
/* RadioLib::No_Radio_Packets/ */
extern void No_Radio_Packets_RadioLib(
  /* Radio_packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_No_Radio_Packets_RadioLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void No_Radio_Packets_reset_RadioLib(
  outC_No_Radio_Packets_RadioLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void No_Radio_Packets_init_RadioLib(
  outC_No_Radio_Packets_RadioLib *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _No_Radio_Packets_RadioLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** No_Radio_Packets_RadioLib.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

