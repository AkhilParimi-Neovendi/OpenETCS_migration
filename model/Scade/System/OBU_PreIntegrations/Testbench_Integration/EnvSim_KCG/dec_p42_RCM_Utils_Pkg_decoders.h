/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _dec_p42_RCM_Utils_Pkg_decoders_H_
#define _dec_p42_RCM_Utils_Pkg_decoders_H_

#include "kcg_types.h"
#include "Read_P042_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* p42_sessionManagement/ */ p42_sessionManagement;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P042_TM /* _L28=(TM::Read_P042#1)/ */ Context_Read_P042_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L17/ */ _L17;
  MsgSource_T_Common_Types_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L26/ */ _L26;
  CompressedPackets_T_Common_Types_Pkg /* _L27/ */ _L27;
  P42_SessionManagement_T_Packet_Types_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  Q_SLEEPSESSION /* _L43/ */ _L43;
  NID_RADIO /* _L42/ */ _L42;
  NID_RBC /* _L41/ */ _L41;
  NID_C /* _L40/ */ _L40;
  Q_RBC /* _L39/ */ _L39;
  Q_DIR /* _L38/ */ _L38;
  kcg_bool /* _L37/ */ _L37;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L85/ */ _L85;
  RBC_Id_T_Common_Types_Pkg /* _L86/ */ _L86;
} outC_dec_p42_RCM_Utils_Pkg_decoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::decoders::dec_p42/ */
extern void dec_p42_RCM_Utils_Pkg_decoders(
  /* msg_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  outC_dec_p42_RCM_Utils_Pkg_decoders *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void dec_p42_reset_RCM_Utils_Pkg_decoders(
  outC_dec_p42_RCM_Utils_Pkg_decoders *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void dec_p42_init_RCM_Utils_Pkg_decoders(
  outC_dec_p42_RCM_Utils_Pkg_decoders *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _dec_p42_RCM_Utils_Pkg_decoders_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** dec_p42_RCM_Utils_Pkg_decoders.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

