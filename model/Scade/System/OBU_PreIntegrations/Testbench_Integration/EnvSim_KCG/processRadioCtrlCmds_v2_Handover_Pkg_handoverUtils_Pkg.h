/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg_H_
#define _processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* sessionCmds_2_MoRC/ */ sessionCmds_2_MoRC;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L177/ */ _L177;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L214/ */ _L214;
  kcg_bool /* _L215/ */ _L215;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L216/ */ _L216;
  kcg_bool /* _L217/ */ _L217;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L218/ */ _L218;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L219/ */ _L219;
  morcStatus_T_RCM_Session_Types_Pkg /* _L220/ */ _L220;
  kcg_int64 /* _L221/ */ _L221;
} outC_processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::processRadioCtrlCmds_v2/ */
extern void processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
  /* p45_radioNetworkRegistrationOrder_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_in,
  /* p42_establishOrTerminateSessionCmd_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p42_establishOrTerminateSessionCmd_in,
  /* additionalSessionCmdsFromTrack_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_in,
  /* morcStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus,
  /* mobileDeviceNo/ */
  kcg_int64 mobileDeviceNo,
  outC_processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void processRadioCtrlCmds_v2_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void processRadioCtrlCmds_v2_init_Handover_Pkg_handoverUtils_Pkg(
  outC_processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

