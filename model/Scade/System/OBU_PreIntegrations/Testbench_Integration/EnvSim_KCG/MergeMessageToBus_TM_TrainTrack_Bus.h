/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _MergeMessageToBus_TM_TrainTrack_Bus_H_
#define _MergeMessageToBus_TM_TrainTrack_Bus_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* MessageBus_out/ */ MessageBus_out;
  kcg_int64 /* t_train_assigned/ */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  M_TrainTrack_Message_T_TM_radio_messages /* _L7/ */ _L7;
  M_TrainTrack_Message_T_TM_radio_messages /* _L12/ */ _L12;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_int64 /* _L15/ */ _L15;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L16/ */ _L16;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L17/ */ _L17;
} outC_MergeMessageToBus_TM_TrainTrack_Bus;

/* ===========  node initialization and cycle functions  =========== */
/* TM_TrainTrack_Bus::MergeMessageToBus/ */
extern void MergeMessageToBus_TM_TrainTrack_Bus(
  /* Message_in/ */
  M_TrainTrack_Message_T_TM_radio_messages *Message_in,
  /* slots_used/ */
  kcg_int64 slots_used,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  outC_MergeMessageToBus_TM_TrainTrack_Bus *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MergeMessageToBus_reset_TM_TrainTrack_Bus(
  outC_MergeMessageToBus_TM_TrainTrack_Bus *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MergeMessageToBus_init_TM_TrainTrack_Bus(
  outC_MergeMessageToBus_TM_TrainTrack_Bus *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MergeMessageToBus_TM_TrainTrack_Bus_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeMessageToBus_TM_TrainTrack_Bus.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

