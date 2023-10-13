/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _checkGeneralMessage_trainData_pkg_H_
#define _checkGeneralMessage_trainData_pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* genMessageReceived/ */ genMessageReceived;
  kcg_bool /* ackRequested/ */ ackRequested;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* GeneralMsgReceived/ */ GeneralMsgReceived;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  MsgSource_T_Common_Types_Pkg /* _L3/ */ _L3;
  MsgSource_T_Common_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L7/ */ _L7;
  ReceivedMessage_T_Common_Types_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  NID_MESSAGE /* _L10/ */ _L10;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L19/ */ _L19;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L21/ */ _L21;
  M_ACK /* _L20/ */ _L20;
  M_ACK /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  NID_MESSAGE /* _L26/ */ _L26;
  ReceivedMessage_T_Common_Types_Pkg /* _L22/ */ _L22;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L30/ */ _L30;
} outC_checkGeneralMessage_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::checkGeneralMessage/ */
extern void checkGeneralMessage_trainData_pkg(
  /* trackMessages/ */
  ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  outC_checkGeneralMessage_trainData_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkGeneralMessage_reset_trainData_pkg(
  outC_checkGeneralMessage_trainData_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkGeneralMessage_init_trainData_pkg(
  outC_checkGeneralMessage_trainData_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* GeneralMsgReceived/ */ Context_GeneralMsgReceived;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_checkGeneralMessage_trainData_pkg;

extern void kcg_save_SV_checkGeneralMessage_trainData_pkg(
  SV_checkGeneralMessage_trainData_pkg *SV,
  outC_checkGeneralMessage_trainData_pkg *outC);
extern void kcg_load_SV_checkGeneralMessage_trainData_pkg(
  outC_checkGeneralMessage_trainData_pkg *outC,
  SV_checkGeneralMessage_trainData_pkg *SV);



#endif /* _checkGeneralMessage_trainData_pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkGeneralMessage_trainData_pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

