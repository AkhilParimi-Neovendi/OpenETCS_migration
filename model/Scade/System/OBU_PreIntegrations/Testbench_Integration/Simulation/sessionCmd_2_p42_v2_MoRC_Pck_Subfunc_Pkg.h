/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* p42_SessionManagement/ */ p42_SessionManagement;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  sessionCmd_T_RCM_Session_Types_Pkg /* _L1/ */ _L1;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L11/ */ _L11;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L10/ */ _L10;
  RBC_Id_T_Common_Types_Pkg /* _L9/ */ _L9;
  NID_RADIO /* _L8/ */ _L8;
  NID_RBC /* _L7/ */ _L7;
  NID_C /* _L6/ */ _L6;
  Q_RBC /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L22/ */ _L22;
  Q_SLEEPSESSION /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  Q_SLEEPSESSION /* _L25/ */ _L25;
  Q_SLEEPSESSION /* _L26/ */ _L26;
  MsgSource_T_Common_Types_Pkg /* _L27/ */ _L27;
  MsgSource_T_Common_Types_Pkg /* _L28/ */ _L28;
  MsgSource_T_Common_Types_Pkg /* _L29/ */ _L29;
  Q_DIR /* _L30/ */ _L30;
  Q_DIR /* _L32/ */ _L32;
  Q_DIR /* _L33/ */ _L33;
} outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::sessionCmd_2_p42_v2/ */
extern void sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg(
  /* sessionCmd/ */
  sessionCmd_T_RCM_Session_Types_Pkg *sessionCmd,
  outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg *outC);

extern void sessionCmd_2_p42_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void sessionCmd_2_p42_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sessionCmd_2_p42_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

