/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */
#ifndef _SendRadioPackets_LRBG_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC_H_
#define _SendRadioPackets_LRBG_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC_H_

#include "kcg_types.h"
#include "Send_P015_MessageLibBaseline2.h"
#include "Send_P005_MessageLibBaseline2.h"
#include "Send_P027V1_MessageLibBaseline2.h"
#include "Send_P021_MessageLibBaseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* Radio_packets_out/ */ Radio_packets_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_P005_MessageLibBaseline2 /* _L4=(MessageLibBaseline2::Send_P005#3)/ */ Context_Send_P005_3;
  outC_Send_P027V1_MessageLibBaseline2 /* _L3=(MessageLibBaseline2::Send_P027V1#2)/ */ Context_Send_P027V1_2;
  outC_Send_P021_MessageLibBaseline2 /* _L2=(MessageLibBaseline2::Send_P021#2)/ */ Context_Send_P021_2;
  outC_Send_P015_MessageLibBaseline2 /* _L11=(MessageLibBaseline2::Send_P015#2)/ */ Context_Send_P015_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* _L2/ */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* _L3/ */ _L3;
  CompressedPackets_T_Common_Types_Pkg /* _L4/ */ _L4;
  CompressedPackets_T_Common_Types_Pkg /* _L11/ */ _L11;
  CompressedPackets_T_Common_Types_Pkg /* _L32/ */ _L32;
} outC_SendRadioPackets_LRBG_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::SendRadioPackets_LRBG_371_D_00105_2_M003/ */
extern void SendRadioPackets_LRBG_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  /* Radio_packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_SendRadioPackets_LRBG_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SendRadioPackets_LRBG_371_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  outC_SendRadioPackets_LRBG_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SendRadioPackets_LRBG_371_init_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  outC_SendRadioPackets_LRBG_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SendRadioPackets_LRBG_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SendRadioPackets_LRBG_371_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

