/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _sendAcknowledgementRBC_trainData_pkg_H_
#define _sendAcknowledgementRBC_trainData_pkg_H_

#include "kcg_types.h"
#include "headerMsg146_ng_trainData_pkg.h"
#include "Send_M146_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainDataStatus_T_trainData_Types_pkg /* updatedStatus/ */ updatedStatus;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* outMessageBus/ */ outMessageBus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M146_TM_radio_messages /* _L24=(TM_radio_messages::Send_M146#1)/ */ Context_Send_M146_1;
  outC_headerMsg146_ng_trainData_pkg /* _L32=(trainData_pkg::headerMsg146_ng#2)/ */ Context_headerMsg146_ng_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_146_T_TM_radio_messages /* _L32/ */ _L32;
  M_VERSION /* _L29/ */ _L29;
  NID_ENGINE /* _L27/ */ _L27;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L24/ */ _L24;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L23/ */ _L23;
  T_TRAIN /* _L34/ */ _L34;
  T_TRAIN /* _L36/ */ _L36;
  T_TRAIN /* _L37/ */ _L37;
  kcg_int32 /* _L38/ */ _L38;
  trainDataStatus_T_trainData_Types_pkg /* _L43/ */ _L43;
  kcg_bool /* _L42/ */ _L42;
  trainDataStatus_T_trainData_Types_pkg /* _L41/ */ _L41;
  trainDataStatus_T_trainData_Types_pkg /* _L40/ */ _L40;
  kcg_bool /* _L39/ */ _L39;
} outC_sendAcknowledgementRBC_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::sendAcknowledgementRBC/ */
extern void sendAcknowledgementRBC_trainData_pkg(
  /* EVC_t_train/ */
  T_TRAIN EVC_t_train,
  /* nidEngine/ */
  NID_ENGINE nidEngine,
  /* RBC_timeStamp/ */
  T_TRAIN RBC_timeStamp,
  /* actualStatus/ */
  trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* inVersion/ */
  M_VERSION inVersion,
  outC_sendAcknowledgementRBC_trainData_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void sendAcknowledgementRBC_reset_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void sendAcknowledgementRBC_init_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_Send_M146_TM_radio_messages Context_Send_M146_1;
} SV_sendAcknowledgementRBC_trainData_pkg;

extern void kcg_save_SV_sendAcknowledgementRBC_trainData_pkg(
  SV_sendAcknowledgementRBC_trainData_pkg *SV,
  outC_sendAcknowledgementRBC_trainData_pkg *outC);
extern void kcg_load_SV_sendAcknowledgementRBC_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC,
  SV_sendAcknowledgementRBC_trainData_pkg *SV);



#endif /* _sendAcknowledgementRBC_trainData_pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendAcknowledgementRBC_trainData_pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

