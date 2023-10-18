/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _checkSessionCmd_Handover_Pkg_handoverUtils_Pkg_H_
#define _checkSessionCmd_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "Read_P042_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  msgFromTrack_T_RCM_MsgTypes_Pkg /* p42_sessionCmd_out/ */ p42_sessionCmd_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P042_TM /* _L43=(TM::Read_P042#1)/ */ Context_Read_P042_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  morcStatus_T_RCM_Session_Types_Pkg /* _L5/ */ _L5;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  NID_RADIO /* _L11/ */ _L11;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L17/ */ _L17;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L21/ */ _L21;
  Q_RBC /* _L22/ */ _L22;
  Q_RBC /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  Q_RBC /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  NID_RADIO /* _L31/ */ _L31;
  NID_C /* _L32/ */ _L32;
  NID_C /* _L33/ */ _L33;
  NID_RBC /* _L34/ */ _L34;
  NID_RBC /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L43/ */ _L43;
  P42_SessionManagement_T_Packet_Types_Pkg /* _L44/ */ _L44;
  CompressedPackets_T_Common_Types_Pkg /* _L42/ */ _L42;
  kcg_bool /* _L45/ */ _L45;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L46/ */ _L46;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L47/ */ _L47;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L48/ */ _L48;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L49/ */ _L49;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L50/ */ _L50;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L51/ */ _L51;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L52/ */ _L52;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L53/ */ _L53;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L54/ */ _L54;
} outC_checkSessionCmd_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::checkSessionCmd/ */
extern void checkSessionCmd_Handover_Pkg_handoverUtils_Pkg(
  /* p42_sessionCmd_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_in,
  /* currentMoRCStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *currentMoRCStatus,
  outC_checkSessionCmd_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkSessionCmd_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_checkSessionCmd_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkSessionCmd_init_Handover_Pkg_handoverUtils_Pkg(
  outC_checkSessionCmd_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _checkSessionCmd_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkSessionCmd_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

