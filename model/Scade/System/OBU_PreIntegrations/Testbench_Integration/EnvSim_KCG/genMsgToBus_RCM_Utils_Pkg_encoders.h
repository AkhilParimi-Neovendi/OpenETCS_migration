/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _genMsgToBus_RCM_Utils_Pkg_encoders_H_
#define _genMsgToBus_RCM_Utils_Pkg_encoders_H_

#include "kcg_types.h"
#include "Send_M155_TM_radio_messages.h"
#include "Send_M156_TM_radio_messages.h"
#include "Send_M159_TM_radio_messages.h"
#include "Send_M154_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* msgBus_out/ */ msgBus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M155_TM_radio_messages /* IfBlock1:then:_L11=(TM_radio_messages::Send_M155#1)/ */ Context_Send_M155_1;
  outC_Send_M156_TM_radio_messages /* IfBlock1:else:then:_L7=(TM_radio_messages::Send_M156#1)/ */ Context_Send_M156_1;
  outC_Send_M159_TM_radio_messages /* IfBlock1:else:else:then:_L17=(TM_radio_messages::Send_M159#2)/ */ Context_Send_M159_2;
  outC_Send_M154_TM_radio_messages /* IfBlock1:else:else:else:then:_L8=(TM_radio_messages::Send_M154#1)/ */ Context_Send_M154_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* @1/Me_output/ */ Me_output_Mean_1_int64;
  kcg_int64 /* @1/I2/ */ I2_Mean_1_int64;
  kcg_int64 /* @1/I1/ */ I1_Mean_1_int64;
  kcg_int64 /* @1/_L6/ */ _L6_Mean_1_int64;
  kcg_int64 /* @1/_L4/ */ _L4_Mean_1_int64;
  kcg_int64 /* @1/_L3/ */ _L3_Mean_1_int64;
  kcg_int64 /* @1/_L2/ */ _L2_Mean_1_int64;
  kcg_int64 /* @1/_L1/ */ _L1_Mean_1_int64;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  M_VERSION /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  M_155_T_TM_radio_messages /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  NID_ENGINE /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  NID_MESSAGE /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:else:then:_L30/ */ _L30_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:then:_L29/ */ _L29_then_else_else_IfBlock1;
  M_VERSION /* IfBlock1:else:else:then:_L28/ */ _L28_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:then:_L16/ */ _L16_then_else_else_IfBlock1;
  T_TRAIN /* IfBlock1:else:else:then:_L11/ */ _L11_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L10/ */ _L10_then_else_else_IfBlock1;
  NID_ENGINE /* IfBlock1:else:else:then:_L9/ */ _L9_then_else_else_IfBlock1;
  NID_MESSAGE /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  P003_TM_TrainToTrack /* IfBlock1:else:else:then:_L27/ */ _L27_then_else_else_IfBlock1;
  M_159_T_TM_radio_messages /* IfBlock1:else:else:then:_L25/ */ _L25_then_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:then:_L19/ */ _L19_then_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:then:_L17/ */ _L17_then_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:else:else:_L2/ */ _L2_else_else_else_else_IfBlock1;
  NID_ENGINE /* IfBlock1:else:else:else:then:_L4/ */ _L4_then_else_else_else_IfBlock1;
  T_TRAIN /* IfBlock1:else:else:else:then:_L2/ */ _L2_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L5/ */ _L5_then_else_else_else_IfBlock1;
  NID_MESSAGE /* IfBlock1:else:else:else:then:_L6/ */ _L6_then_else_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:else:then:_L7/ */ _L7_then_else_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:else:then:_L8/ */ _L8_then_else_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:else:then:_L10/ */ _L10_then_else_else_else_IfBlock1;
  M_VERSION /* IfBlock1:else:else:else:then:_L11/ */ _L11_then_else_else_else_IfBlock1;
  M_154_T_TM_radio_messages /* IfBlock1:else:else:else:then:_L12/ */ _L12_then_else_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:else:then:_L13/ */ _L13_then_else_else_else_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:else:else:then:_L14/ */ _L14_then_else_else_else_IfBlock1;
  NID_MESSAGE /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  T_TRAIN /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  NID_ENGINE /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  M_156_T_TM_radio_messages /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  M_VERSION /* IfBlock1:else:then:_L11/ */ _L11_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L12/ */ _L12_then_else_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:then:_L13/ */ _L13_then_else_IfBlock1;
  kcg_bool /* m159_sessionEstablished/ */ m159_sessionEstablished;
  kcg_bool /* m156_terminationOfACommunicationSession/ */ m156_terminationOfACommunicationSession;
  kcg_bool /* m155_initiationOfACommunicationSession/ */ m155_initiationOfACommunicationSession;
  kcg_bool /* m154_noCompatibleVersionSupported/ */ m154_noCompatibleVersionSupported;
  T_internal_Type_Obu_BasicTypes_Pkg /* t_train_global_l/ */ t_train_global_l;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  T_TRAIN /* _L9/ */ _L9;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
} outC_genMsgToBus_RCM_Utils_Pkg_encoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::encoders::genMsgToBus/ */
extern void genMsgToBus_RCM_Utils_Pkg_encoders(
  /* msgToTrackTriggers/ */
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *msgToTrackTriggers,
  /* t_train/ */
  T_TRAIN t_train,
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* msgBus_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBus_in,
  /* nid_engine/ */
  NID_ENGINE nid_engine,
  /* onboardPhoneNumbers_b/ */
  P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* m_version/ */
  M_VERSION m_version,
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void genMsgToBus_reset_RCM_Utils_Pkg_encoders(
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void genMsgToBus_init_RCM_Utils_Pkg_encoders(
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: RCM_Utils_Pkg::encoders::genMsgToBus/
  @1: (math::Mean#1)
*/

#endif /* _genMsgToBus_RCM_Utils_Pkg_encoders_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** genMsgToBus_RCM_Utils_Pkg_encoders.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

