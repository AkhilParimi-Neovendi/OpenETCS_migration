/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _dec_m32_RCM_Utils_Pkg_decoders_H_
#define _dec_m32_RCM_Utils_Pkg_decoders_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg /* m32_RBC_or_RIU_System_Version/ */ m32_RBC_or_RIU_System_Version;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L79/ */ _L79;
  kcg_bool /* _L77/ */ _L77;
  MsgSource_T_Common_Types_Pkg /* _L87/ */ _L87;
  kcg_bool /* _L92/ */ _L92;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L90/ */ _L90;
  MsgSource_T_Common_Types_Pkg /* _L89/ */ _L89;
  MsgSource_T_Common_Types_Pkg /* _L88/ */ _L88;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L93/ */ _L93;
  NID_MESSAGE /* _L109/ */ _L109;
  kcg_bool /* _L111/ */ _L111;
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg /* _L112/ */ _L112;
  NID_MESSAGE /* _L113/ */ _L113;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L114/ */ _L114;
  RBC_Id_T_Common_Types_Pkg /* _L115/ */ _L115;
  M_VERSION /* _L110/ */ _L110;
} outC_dec_m32_RCM_Utils_Pkg_decoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::decoders::dec_m32/ */
extern void dec_m32_RCM_Utils_Pkg_decoders(
  /* msg_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* systemVersionFromTracksideSupported/ */
  kcg_bool systemVersionFromTracksideSupported,
  outC_dec_m32_RCM_Utils_Pkg_decoders *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void dec_m32_reset_RCM_Utils_Pkg_decoders(
  outC_dec_m32_RCM_Utils_Pkg_decoders *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void dec_m32_init_RCM_Utils_Pkg_decoders(
  outC_dec_m32_RCM_Utils_Pkg_decoders *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _dec_m32_RCM_Utils_Pkg_decoders_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** dec_m32_RCM_Utils_Pkg_decoders.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

