/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _mergeMsgToBus_RCM_Utils_Pkg_encoders_H_
#define _mergeMsgToBus_RCM_Utils_Pkg_encoders_H_

#include "kcg_types.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* messageBus_out/ */ messageBus_out;
  kcg_int32 /* t_train_assigned/ */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _120_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergeMessageToBus_TM_TrainTrack_Bus /* _L1=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */ Context_MergeMessageToBus_1;
  outC_CheckSpace_TM_TrainTrack_Bus /* _L4=(TM_TrainTrack_Bus::CheckSpace#1)/ */ Context_CheckSpace_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:notRequested:<1> */ tr_1_clock_notRequested_SM1;
  kcg_bool /* SM1:requested:<1> */ tr_1_clock_requested_SM1;
  kcg_bool every;
  _120_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* sMergeMsg/ */ sMergeMsg;
  _120_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  _121_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _121_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_int32 /* _L2/ */ _L2;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1/ */ _L1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L3/ */ _L3;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  M_TrainTrack_Message_T_TM_radio_messages /* _L6/ */ _L6;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L9/ */ _L9;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L12/ */ _L12;
} outC_mergeMsgToBus_RCM_Utils_Pkg_encoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::encoders::mergeMsgToBus/ */
extern void mergeMsgToBus_RCM_Utils_Pkg_encoders(
  /* request/ */
  kcg_bool request,
  /* messageAvailable/ */
  kcg_bool messageAvailable,
  /* message/ */
  M_TrainTrack_Message_T_TM_radio_messages *message,
  /* messageBus_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *messageBus_in,
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mergeMsgToBus_init_RCM_Utils_Pkg_encoders(
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SM1: */ Context_SM1_reset_nxt;
  kcg_bool /* SM1: */ Context_SM1_reset_act;
  _120_SSM_ST_SM1 /* SM1: */ Context_SM1_state_nxt;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_mergeMsgToBus_RCM_Utils_Pkg_encoders;

extern void kcg_save_SV_mergeMsgToBus_RCM_Utils_Pkg_encoders(
  SV_mergeMsgToBus_RCM_Utils_Pkg_encoders *SV,
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC);
extern void kcg_load_SV_mergeMsgToBus_RCM_Utils_Pkg_encoders(
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC,
  SV_mergeMsgToBus_RCM_Utils_Pkg_encoders *SV);



#endif /* _mergeMsgToBus_RCM_Utils_Pkg_encoders_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mergeMsgToBus_RCM_Utils_Pkg_encoders.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

