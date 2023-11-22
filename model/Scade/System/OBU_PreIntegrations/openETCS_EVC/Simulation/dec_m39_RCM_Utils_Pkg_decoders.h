/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _dec_m39_RCM_Utils_Pkg_decoders_H_
#define _dec_m39_RCM_Utils_Pkg_decoders_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* m39_acknowledgementOfTerminationOfACommunicationSession/ */ m39_acknowledgementOfTerminationOfACommunicationSession;
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
  kcg_bool /* _L75/ */ _L75;
  NID_MESSAGE /* _L76/ */ _L76;
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L77/ */ _L77;
  RBC_Id_T_Common_Types_Pkg /* _L78/ */ _L78;
  NID_LRBG /* _L79/ */ _L79;
} outC_dec_m39_RCM_Utils_Pkg_decoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::decoders::dec_m39/ */
extern void dec_m39_RCM_Utils_Pkg_decoders(
  /* msg_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  outC_dec_m39_RCM_Utils_Pkg_decoders *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void dec_m39_reset_RCM_Utils_Pkg_decoders(
  outC_dec_m39_RCM_Utils_Pkg_decoders *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void dec_m39_init_RCM_Utils_Pkg_decoders(
  outC_dec_m39_RCM_Utils_Pkg_decoders *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _dec_m39_RCM_Utils_Pkg_decoders_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** dec_m39_RCM_Utils_Pkg_decoders.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

