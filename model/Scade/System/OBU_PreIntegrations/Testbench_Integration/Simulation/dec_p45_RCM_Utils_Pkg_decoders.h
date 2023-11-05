/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _dec_p45_RCM_Utils_Pkg_decoders_H_
#define _dec_p45_RCM_Utils_Pkg_decoders_H_

#include "kcg_types.h"
#include "Read_P045_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg /* p45_radioNetworkRegistration/ */ p45_radioNetworkRegistration;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P045_TM /* _L68=(TM::Read_P045#1)/ */ Context_Read_P045_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L17/ */ _L17;
  CompressedPackets_T_Common_Types_Pkg /* _L27/ */ _L27;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L69/ */ _L69;
  kcg_bool /* _L68/ */ _L68;
  NID_MN /* _L75/ */ _L75;
  Q_DIR /* _L74/ */ _L74;
  kcg_bool /* _L73/ */ _L73;
  kcg_bool /* _L77/ */ _L77;
  p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg /* _L78/ */ _L78;
  RBC_Id_T_Common_Types_Pkg /* _L79/ */ _L79;
  MsgSource_T_Common_Types_Pkg /* _L80/ */ _L80;
} outC_dec_p45_RCM_Utils_Pkg_decoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::decoders::dec_p45/ */
extern void dec_p45_RCM_Utils_Pkg_decoders(
  /* msg_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  outC_dec_p45_RCM_Utils_Pkg_decoders *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void dec_p45_reset_RCM_Utils_Pkg_decoders(
  outC_dec_p45_RCM_Utils_Pkg_decoders *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void dec_p45_init_RCM_Utils_Pkg_decoders(
  outC_dec_p45_RCM_Utils_Pkg_decoders *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _dec_p45_RCM_Utils_Pkg_decoders_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** dec_p45_RCM_Utils_Pkg_decoders.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

