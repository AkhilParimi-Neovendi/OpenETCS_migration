/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_
#define _SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_

#include "kcg_types.h"
#include "Send_P057_MessageLibBaseline2.h"
#include "Send_P058_MessageLibBaseline2.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* Radio_packets_out/ */ Radio_packets_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_P058_MessageLibBaseline2 /* _L2=(MessageLibBaseline2::Send_P058#1)/ */ Context_Send_P058_1;
  outC_Send_P057_MessageLibBaseline2 /* _L11=(MessageLibBaseline2::Send_P057#1)/ */ Context_Send_P057_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* _L2/ */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* _L11/ */ _L11;
  CompressedPackets_T_Common_Types_Pkg /* _L32/ */ _L32;
} outC_SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC;

/* ===========  node initialization and cycle functions  =========== */
/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024/ */
extern void SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* Radio_packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SendRadioPackets_LRBG_353_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SendRadioPackets_LRBG_353_init_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SendRadioPackets_LRBG_353_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

