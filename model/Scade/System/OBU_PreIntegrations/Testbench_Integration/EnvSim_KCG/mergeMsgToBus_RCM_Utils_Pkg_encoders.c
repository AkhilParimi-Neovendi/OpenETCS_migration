/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeMsgToBus_RCM_Utils_Pkg_encoders.h"

/* RCM_Utils_Pkg::encoders::mergeMsgToBus/ */
void mergeMsgToBus_RCM_Utils_Pkg_encoders(
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
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  static kcg_int32 op_call;
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _1_op_call;
  /* SM1: */
  static _104_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _105_SSM_TR_SM1 SM1_fired_partial;
  /* SM1: */
  static _104_SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  static _105_SSM_TR_SM1 _4_SM1_fired_partial;
  /* SM1: */
  static _104_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _105_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:notRequested:<2> */
  static kcg_bool tr_2_guard_notRequested_SM1;
  /* SM1:notRequested:<1> */
  static kcg_bool tr_1_guard_notRequested_SM1;
  /* SM1: */
  static _104_SSM_ST_SM1 _5_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _6_SM1_reset_act_partial;
  /* SM1: */
  static _105_SSM_TR_SM1 _7_SM1_fired_strong_partial;
  /* SM1:requested:<1> */
  static kcg_bool tr_1_guard_requested_SM1;
  static kcg_bool noname;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_requested_SM1 :
      tr_1_guard_requested_SM1 = messageAvailable;
      outC->tr_1_clock_requested_SM1 = tr_1_guard_requested_SM1;
      /* SM1:requested:<1> */
      if (outC->tr_1_clock_requested_SM1) {
        outC->sMergeMsg = kcg_true;
      }
      else {
        outC->sMergeMsg = kcg_false;
      }
      break;
    case SSM_st_notRequested_SM1 :
      tr_1_guard_notRequested_SM1 = request & messageAvailable;
      outC->tr_1_clock_notRequested_SM1 = tr_1_guard_notRequested_SM1;
      /* SM1:notRequested:<1> */
      if (outC->tr_1_clock_notRequested_SM1) {
        outC->sMergeMsg = kcg_true;
      }
      else {
        outC->sMergeMsg = kcg_false;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L9 = outC->sMergeMsg;
  outC->every = outC->_L9;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L6, message);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L3, messageBus_in);
  /* _L4=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_TM_TrainTrack_Bus(&outC->_L3, &outC->Context_CheckSpace_1);
  outC->_L4 = outC->Context_CheckSpace_1.Busy;
  outC->_L5 = outC->Context_CheckSpace_1.SlotsUsed;
  outC->_L7 = t_train_global;
  if (outC->every) {
    /* _L1=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
    MergeMessageToBus_TM_TrainTrack_Bus(
      &outC->_L6,
      outC->_L5,
      &outC->_L3,
      outC->_L7,
      &outC->Context_MergeMessageToBus_1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_1_op_call,
      &outC->Context_MergeMessageToBus_1.MessageBus_out);
    op_call = outC->Context_MergeMessageToBus_1.t_train_assigned;
  }
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L12, messageBus_in);
  if (outC->every) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L1, &_1_op_call);
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L1, &outC->_L12);
  }
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->messageBus_out,
    &outC->_L1);
  if (outC->every) {
    outC->_L2 = op_call;
  }
  else {
    outC->_L2 = outC->_L7;
  }
  outC->t_train_assigned = outC->_L2;
  noname = outC->_L4;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_requested_SM1 :
      if (tr_1_guard_requested_SM1) {
        _5_SM1_state_act_partial = SSM_st_notRequested_SM1;
      }
      else {
        _5_SM1_state_act_partial = SSM_st_requested_SM1;
      }
      outC->SM1_state_act = _5_SM1_state_act_partial;
      if (tr_1_guard_requested_SM1) {
        _7_SM1_fired_strong_partial = SSM_TR_requested_notRequested_1_requested_SM1;
      }
      else {
        _7_SM1_fired_strong_partial = _153_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _7_SM1_fired_strong_partial;
      break;
    case SSM_st_notRequested_SM1 :
      tr_2_guard_notRequested_SM1 = request;
      if (tr_1_guard_notRequested_SM1) {
        SM1_state_act_partial = SSM_st_notRequested_SM1;
      }
      else if (tr_2_guard_notRequested_SM1) {
        SM1_state_act_partial = SSM_st_requested_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_notRequested_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_notRequested_SM1) {
        SM1_fired_strong_partial = SSM_TR_notRequested_notRequested_1_notRequested_SM1;
      }
      else if (tr_2_guard_notRequested_SM1) {
        SM1_fired_strong_partial = SSM_TR_notRequested_requested_2_notRequested_SM1;
      }
      else {
        SM1_fired_strong_partial = _153_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_requested_SM1 :
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_requested_SM1;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_notRequested_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_notRequested_SM1;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_requested_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_notRequested_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_requested_SM1 :
      _6_SM1_reset_act_partial = tr_1_guard_requested_SM1;
      break;
    case SSM_st_notRequested_SM1 :
      if (tr_1_guard_notRequested_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_2_guard_notRequested_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_requested_SM1 :
      outC->SM1_reset_act = _6_SM1_reset_act_partial;
      break;
    case SSM_st_notRequested_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void mergeMsgToBus_init_RCM_Utils_Pkg_encoders(
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;

  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L12[idx1].Message.valid = kcg_true;
    outC->_L12[idx1].Message.nid_message = kcg_lit_int32(0);
    outC->_L12[idx1].Message.l_message = kcg_lit_int32(0);
    outC->_L12[idx1].Message.t_train = kcg_lit_int32(0);
    outC->_L12[idx1].Message.nid_engine = kcg_lit_int32(0);
    outC->_L12[idx1].Message.field1 = kcg_lit_int32(0);
    outC->_L12[idx1].Message.field2 = kcg_lit_int32(0);
    outC->_L12[idx1].Message.field3 = kcg_lit_int32(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L12[idx1].OptionalPackets[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L9 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6.Message.valid = kcg_true;
  outC->_L6.Message.nid_message = kcg_lit_int32(0);
  outC->_L6.Message.l_message = kcg_lit_int32(0);
  outC->_L6.Message.t_train = kcg_lit_int32(0);
  outC->_L6.Message.nid_engine = kcg_lit_int32(0);
  outC->_L6.Message.field1 = kcg_lit_int32(0);
  outC->_L6.Message.field2 = kcg_lit_int32(0);
  outC->_L6.Message.field3 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L6.OptionalPackets[idx2] = kcg_lit_int32(0);
  }
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L3[idx4].Message.valid = kcg_true;
    outC->_L3[idx4].Message.nid_message = kcg_lit_int32(0);
    outC->_L3[idx4].Message.l_message = kcg_lit_int32(0);
    outC->_L3[idx4].Message.t_train = kcg_lit_int32(0);
    outC->_L3[idx4].Message.nid_engine = kcg_lit_int32(0);
    outC->_L3[idx4].Message.field1 = kcg_lit_int32(0);
    outC->_L3[idx4].Message.field2 = kcg_lit_int32(0);
    outC->_L3[idx4].Message.field3 = kcg_lit_int32(0);
    for (idx3 = 0; idx3 < 50; idx3++) {
      outC->_L3[idx4].OptionalPackets[idx3] = kcg_lit_int32(0);
    }
  }
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L1[idx6].Message.valid = kcg_true;
    outC->_L1[idx6].Message.nid_message = kcg_lit_int32(0);
    outC->_L1[idx6].Message.l_message = kcg_lit_int32(0);
    outC->_L1[idx6].Message.t_train = kcg_lit_int32(0);
    outC->_L1[idx6].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1[idx6].Message.field1 = kcg_lit_int32(0);
    outC->_L1[idx6].Message.field2 = kcg_lit_int32(0);
    outC->_L1[idx6].Message.field3 = kcg_lit_int32(0);
    for (idx5 = 0; idx5 < 50; idx5++) {
      outC->_L1[idx6].OptionalPackets[idx5] = kcg_lit_int32(0);
    }
  }
  outC->_L2 = kcg_lit_int32(0);
  outC->SM1_fired = _153_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _153_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_notRequested_SM1;
  outC->SM1_state_sel = SSM_st_notRequested_SM1;
  outC->sMergeMsg = kcg_true;
  outC->every = kcg_true;
  outC->tr_1_clock_requested_SM1 = kcg_true;
  outC->tr_1_clock_notRequested_SM1 = kcg_true;
  outC->t_train_assigned = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->messageBus_out[idx8].Message.valid = kcg_true;
    outC->messageBus_out[idx8].Message.nid_message = kcg_lit_int32(0);
    outC->messageBus_out[idx8].Message.l_message = kcg_lit_int32(0);
    outC->messageBus_out[idx8].Message.t_train = kcg_lit_int32(0);
    outC->messageBus_out[idx8].Message.nid_engine = kcg_lit_int32(0);
    outC->messageBus_out[idx8].Message.field1 = kcg_lit_int32(0);
    outC->messageBus_out[idx8].Message.field2 = kcg_lit_int32(0);
    outC->messageBus_out[idx8].Message.field3 = kcg_lit_int32(0);
    for (idx7 = 0; idx7 < 50; idx7++) {
      outC->messageBus_out[idx8].OptionalPackets[idx7] = kcg_lit_int32(0);
    }
  }
  /* _L1=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_init_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L4=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_init_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_notRequested_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC)
{
  /* _L1=(TM_TrainTrack_Bus::MergeMessageToBus#1)/ */
  MergeMessageToBus_reset_TM_TrainTrack_Bus(&outC->Context_MergeMessageToBus_1);
  /* _L4=(TM_TrainTrack_Bus::CheckSpace#1)/ */
  CheckSpace_reset_TM_TrainTrack_Bus(&outC->Context_CheckSpace_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_notRequested_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mergeMsgToBus_RCM_Utils_Pkg_encoders.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

