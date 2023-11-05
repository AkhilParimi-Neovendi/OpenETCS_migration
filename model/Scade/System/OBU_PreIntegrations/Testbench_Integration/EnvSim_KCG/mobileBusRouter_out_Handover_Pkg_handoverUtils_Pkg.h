/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg_H_
#define _mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "mergeMsgToBus_RCM_Utils_Pkg_encoders.h"
#include "extractPositionReportFromBus_RCM_Utils_Pkg_encoders.h"
#include "genMsgToBus_RCM_Utils_Pkg_encoders.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* msgBus_2_RBC_1/ */ msgBus_2_RBC_1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* msgBus_2_RBC_2/ */ msgBus_2_RBC_2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_genMsgToBus_RCM_Utils_Pkg_encoders /* IfBlock1:then:_L22=(RCM_Utils_Pkg::encoders::genMsgToBus#3)/ */ Context_genMsgToBus_3;
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders /* IfBlock1:else:_L306=(RCM_Utils_Pkg::encoders::mergeMsgToBus#5)/ */ Context_mergeMsgToBus_5;
  outC_genMsgToBus_RCM_Utils_Pkg_encoders /* IfBlock1:else:_L108=(RCM_Utils_Pkg::encoders::genMsgToBus#2)/ */ Context_genMsgToBus_2;
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders /* IfBlock1:else:_L311=(RCM_Utils_Pkg::encoders::mergeMsgToBus#7)/ */ Context_mergeMsgToBus_7;
  outC_genMsgToBus_RCM_Utils_Pkg_encoders /* IfBlock1:else:_L100=(RCM_Utils_Pkg::encoders::genMsgToBus#1)/ */ Context_genMsgToBus_1;
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders /* IfBlock1:else:_L304=(RCM_Utils_Pkg::encoders::mergeMsgToBus#4)/ */ Context_mergeMsgToBus_4;
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders /* IfBlock1:else:_L297=(RCM_Utils_Pkg::encoders::mergeMsgToBus#1)/ */ Context_mergeMsgToBus_1;
  outC_extractPositionReportFromBus_RCM_Utils_Pkg_encoders /* IfBlock1:else:_L294=(RCM_Utils_Pkg::encoders::extractPositionReportFromBus#1)/ */ Context_extractPositionReportFromBus_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:then:_L30/ */ _L30_then_IfBlock1;
  M_VERSION /* IfBlock1:then:_L29/ */ _L29_then_IfBlock1;
  P003_TM_TrainToTrack /* IfBlock1:then:_L28/ */ _L28_then_IfBlock1;
  NID_ENGINE /* IfBlock1:then:_L27/ */ _L27_then_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:then:_L26/ */ _L26_then_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L25/ */ _L25_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L24/ */ _L24_then_IfBlock1;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L23/ */ _L23_then_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L312/ */ _L312_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L311/ */ _L311_else_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L308/ */ _L308_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L307/ */ _L307_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L306/ */ _L306_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L305/ */ _L305_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L304/ */ _L304_else_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L299/ */ _L299_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L297/ */ _L297_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L298/ */ _L298_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L296/ */ _L296_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L294/ */ _L294_else_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:else:_L295/ */ _L295_else_IfBlock1;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L114/ */ _L114_else_IfBlock1;
  T_TRAIN /* IfBlock1:else:_L112/ */ _L112_else_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L113/ */ _L113_else_IfBlock1;
  M_VERSION /* IfBlock1:else:_L109/ */ _L109_else_IfBlock1;
  NID_ENGINE /* IfBlock1:else:_L110/ */ _L110_else_IfBlock1;
  P003_TM_TrainToTrack /* IfBlock1:else:_L111/ */ _L111_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L108/ */ _L108_else_IfBlock1;
  M_VERSION /* IfBlock1:else:_L107/ */ _L107_else_IfBlock1;
  P003_TM_TrainToTrack /* IfBlock1:else:_L106/ */ _L106_else_IfBlock1;
  NID_ENGINE /* IfBlock1:else:_L105/ */ _L105_else_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L104/ */ _L104_else_IfBlock1;
  T_TRAIN /* IfBlock1:else:_L103/ */ _L103_else_IfBlock1;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* IfBlock1:else:_L102/ */ _L102_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L100/ */ _L100_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L86/ */ _L86_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L85/ */ _L85_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L84/ */ _L84_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L83/ */ _L83_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L82/ */ _L82_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L81/ */ _L81_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L80/ */ _L80_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L79/ */ _L79_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L78/ */ _L78_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L77/ */ _L77_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L76/ */ _L76_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L75/ */ _L75_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L74/ */ _L74_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L73/ */ _L73_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L72/ */ _L72_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:_L71/ */ _L71_else_IfBlock1;
} outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out/ */
extern void mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
  /* morcMsgTriggersToRBC_1/ */
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_1,
  /* morcMsgTriggersToRBC_2/ */
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_2,
  /* useInformationFromAcceptingRBC/ */
  kcg_bool useInformationFromAcceptingRBC,
  /* handingOverRBC_is_RBC_1/ */
  kcg_bool handingOverRBC_is_RBC_1,
  /* sendPositionReport_2_acceptingRBC/ */
  kcg_bool sendPositionReport_2_acceptingRBC,
  /* sendPositionReport_2_handingOverRBC/ */
  kcg_bool sendPositionReport_2_handingOverRBC,
  /* sendPositionReport_2_RBC_1/ */
  kcg_bool sendPositionReport_2_RBC_1,
  /* sendPositionReport_2_RBC_2/ */
  kcg_bool sendPositionReport_2_RBC_2,
  /* sendTrainData_2_acceptingRBC/ */
  kcg_bool sendTrainData_2_acceptingRBC,
  /* t_train/ */
  T_TRAIN t_train,
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* msgBusToRBC_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBusToRBC_in,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* nid_engine/ */
  NID_ENGINE nid_engine,
  /* onboardPhoneNumbers_b/ */
  P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* m_version/ */
  M_VERSION m_version,
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mobileBusRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mobileBusRouter_out_init_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

