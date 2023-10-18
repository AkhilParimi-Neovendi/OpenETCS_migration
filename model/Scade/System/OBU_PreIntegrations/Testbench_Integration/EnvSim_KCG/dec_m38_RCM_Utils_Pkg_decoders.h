/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _dec_m38_RCM_Utils_Pkg_decoders_H_
#define _dec_m38_RCM_Utils_Pkg_decoders_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* m38_initiationOfComSession/ */ m38_initiationOfComSession;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L17/ */ _L17;
  MsgSource_T_Common_Types_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L72/ */ _L72;
  MsgSource_T_Common_Types_Pkg /* _L71/ */ _L71;
  MsgSource_T_Common_Types_Pkg /* _L70/ */ _L70;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L67/ */ _L67;
  NID_MESSAGE /* _L73/ */ _L73;
  NID_MESSAGE /* _L74/ */ _L74;
  kcg_bool /* _L75/ */ _L75;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L76/ */ _L76;
  RBC_Id_T_Common_Types_Pkg /* _L77/ */ _L77;
} outC_dec_m38_RCM_Utils_Pkg_decoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::decoders::dec_m38/ */
extern void dec_m38_RCM_Utils_Pkg_decoders(
  /* msg_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  outC_dec_m38_RCM_Utils_Pkg_decoders *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void dec_m38_reset_RCM_Utils_Pkg_decoders(
  outC_dec_m38_RCM_Utils_Pkg_decoders *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void dec_m38_init_RCM_Utils_Pkg_decoders(
  outC_dec_m38_RCM_Utils_Pkg_decoders *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _dec_m38_RCM_Utils_Pkg_decoders_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** dec_m38_RCM_Utils_Pkg_decoders.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

