/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _Send_P042_no_merge_TM_specific_send_H_
#define _Send_P042_no_merge_TM_specific_send_H_

#include "kcg_types.h"
#include "C_P042_onboard_legacy_to_int_TM_conversions.h"
#include "Write_P042_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* RadioPacketsOut/ */ RadioPacketsOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_P042_TM_trackside /* _L1=(TM_trackside::Write_P042#1)/ */ Context_Write_P042_1;
  outC_C_P042_onboard_legacy_to_int_TM_conversions /* _L5=(TM_conversions::C_P042_onboard_legacy_to_int#1)/ */ Context_C_P042_onboard_legacy_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  P42_SessionManagement_T_Packet_Types_Pkg /* _L3/ */ _L3;
  P042_trackside_int_T_TM /* _L5/ */ _L5;
  CompressedPackets_T_Common_Types_Pkg /* _L6/ */ _L6;
} outC_Send_P042_no_merge_TM_specific_send;

/* ===========  node initialization and cycle functions  =========== */
/* TM_specific_send::Send_P042_no_merge/ */
extern void Send_P042_no_merge_TM_specific_send(
  /* Packet42/ */
  P42_SessionManagement_T_Packet_Types_Pkg *Packet42,
  outC_Send_P042_no_merge_TM_specific_send *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Send_P042_no_merge_reset_TM_specific_send(
  outC_Send_P042_no_merge_TM_specific_send *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Send_P042_no_merge_init_TM_specific_send(
  outC_Send_P042_no_merge_TM_specific_send *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Send_P042_no_merge_TM_specific_send_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_P042_no_merge_TM_specific_send.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

