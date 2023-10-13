/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _collectRadioOutput_radioOutput_Pkg_H_
#define _collectRadioOutput_radioOutput_Pkg_H_

#include "kcg_types.h"
#include "patchMsgFlow_RadioSupport_Pkg.h"
#include "BufferOutput_TM_lib_internal.h"
#include "mapCMDToRTM_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrack_Message_T_TM_radio_messages /* toRBC/ */ toRBC;
  RadioManagement_T_API_RadioCommunication_Pkg /* API_RTM_management/ */ API_RTM_management;
  NID_RADIO /* outRadio/ */ outRadio;
  NID_MN /* outMN/ */ outMN;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RTMisActive/ */ RTMisActive;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_patchMsgFlow_RadioSupport_Pkg /* _L33=(RadioSupport_Pkg::patchMsgFlow#1)/ */ Context_patchMsgFlow_1;
  outC_BufferOutput_TM_lib_internal /* _L31=(TM_lib_internal::BufferOutput#1)/ */ Context_BufferOutput_1;
  outC_mapCMDToRTM_radioOutput_Pkg /* _L22=(radioOutput_Pkg::mapCMDToRTM#1)/ */ Context_mapCMDToRTM_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1/ */ _L1;
  M_VERSION /* _L19/ */ _L19;
  T_TRAIN /* _L20/ */ _L20;
  RadioManagement_T_API_RadioCommunication_Pkg /* _L22/ */ _L22;
  morcStatus_T_RCM_Session_Types_Pkg /* _L24/ */ _L24;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L25/ */ _L25;
  kcg_bool /* _L27/ */ _L27;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  M_TrainTrack_Message_T_TM_radio_messages /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  M_TrainTrack_Message_T_TM_radio_messages /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L35/ */ _L35;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L36/ */ _L36;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* _L37/ */ _L37;
  NID_MN /* _L38/ */ _L38;
  NID_RADIO /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L41/ */ _L41;
} outC_collectRadioOutput_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::collectRadioOutput/ */
extern void collectRadioOutput_radioOutput_Pkg(
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* insafeSessionEstablished/ */
  kcg_bool insafeSessionEstablished,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* mobileRadioStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *mobileRadioStatus,
  /* mobileConnectionCMD/ */
  mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* mobileRegistrationCMD/ */
  mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  /* inVersion/ */
  M_VERSION inVersion,
  /* inT_TRAIN/ */
  T_TRAIN inT_TRAIN,
  outC_collectRadioOutput_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void collectRadioOutput_reset_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void collectRadioOutput_init_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RTMisActive/ */ Context_RTMisActive;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_mapCMDToRTM_radioOutput_Pkg Context_mapCMDToRTM_1;
  SV_BufferOutput_TM_lib_internal Context_BufferOutput_1;
} SV_collectRadioOutput_radioOutput_Pkg;

extern void kcg_save_SV_collectRadioOutput_radioOutput_Pkg(
  SV_collectRadioOutput_radioOutput_Pkg *SV,
  outC_collectRadioOutput_radioOutput_Pkg *outC);
extern void kcg_load_SV_collectRadioOutput_radioOutput_Pkg(
  outC_collectRadioOutput_radioOutput_Pkg *outC,
  SV_collectRadioOutput_radioOutput_Pkg *SV);



#endif /* _collectRadioOutput_radioOutput_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** collectRadioOutput_radioOutput_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

