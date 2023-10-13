/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InformationFilter_InformationFilter_Pkg.h"

/* InformationFilter_Pkg::InformationFilter/ */
void InformationFilter_InformationFilter_Pkg(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* inModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  /* inSupervisingDevice/ */
  kcg_int64 inSupervisingDevice,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* inActiveCab/ */
  kcg_bool inActiveCab,
  /* inTrainDataValid/ */
  kcg_bool inTrainDataValid,
  /* inMorcStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *inMorcStatus,
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  static kcg_bool op_call;
  static ReceivedMessage_T_Common_Types_Pkg _1_op_call;
  static ReceivedMessage_T_Common_Types_Pkg _2_op_call;
  /* bufferHasPriority/ */
  static kcg_bool bufferHasPriority_partial;
  /* SM1: */
  static _138_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _139_SSM_TR_SM1 SM1_fired_partial;
  /* bufferHasPriority/ */
  static kcg_bool _3_bufferHasPriority_partial;
  /* SM1: */
  static _138_SSM_ST_SM1 _4_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _5_SM1_reset_nxt_partial;
  /* SM1: */
  static _139_SSM_TR_SM1 _6_SM1_fired_partial;
  /* bufferHasPriority/ */
  static kcg_bool _7_bufferHasPriority_partial;
  /* SM1: */
  static _138_SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  static _139_SSM_TR_SM1 _10_SM1_fired_partial;
  /* SM1: */
  static _138_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _139_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:State1:<1> */
  static kcg_bool tr_1_guard_State1_SM1;
  /* SM1: */
  static _138_SSM_ST_SM1 _11_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _12_SM1_reset_act_partial;
  /* SM1: */
  static _139_SSM_TR_SM1 _13_SM1_fired_strong_partial;
  /* SM1:State2:<1> */
  static kcg_bool tr_1_guard_State2_SM1;
  /* SM1: */
  static _138_SSM_ST_SM1 _14_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _15_SM1_reset_act_partial;
  /* SM1: */
  static _139_SSM_TR_SM1 _16_SM1_fired_strong_partial;
  /* SM1:State3:<1> */
  static kcg_bool tr_1_guard_State3_SM1;
  static kcg_bool noname;
  static kcg_bool _17_noname;
  /* currBuffersize/ */
  static kcg_int64 last_currBuffersize;
  /* bufferHasPriority/ */
  static kcg_bool last_bufferHasPriority;
  /* storeInBuffer/ */
  static kcg_bool last_storeInBuffer;
  /* bufferMsg/ */
  static ReceivedMessage_T_Common_Types_Pkg last_bufferMsg;
  /* inSupervisingDevice/ */
  static kcg_int64 last_inSupervisingDevice;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  last_inSupervisingDevice = outC->mem_inSupervisingDevice;
  outC->mem_inSupervisingDevice = inSupervisingDevice;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L110,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->Init_MemoryBasic_1_struct,
    &outC->_L110);
  kcg_copy_struct_493015(
    &outC->_L7_MemoryBasic_1_struct,
    &outC->Init_MemoryBasic_1_struct);
  /* @1/_L6= */
  if (outC->init) {
    kcg_copy_struct_493015(
      &outC->_L6_MemoryBasic_1_struct,
      &outC->_L7_MemoryBasic_1_struct);
  }
  else {
    kcg_copy_struct_493015(
      &outC->_L6_MemoryBasic_1_struct,
      &outC->_L4_MemoryBasic_1_struct);
  }
  last_bufferHasPriority = outC->bufferHasPriority;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  last_currBuffersize = outC->currBuffersize;
  switch (outC->SM1_state_sel) {
    case SSM_st_State3_SM1 :
      tr_1_guard_State3_SM1 = last_currBuffersize == kcg_lit_int64(0);
      if (tr_1_guard_State3_SM1) {
        _14_SM1_state_act_partial = SSM_st_State2_SM1;
      }
      else {
        _14_SM1_state_act_partial = SSM_st_State3_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L145, inModeLevel);
  outC->_L159 = outC->_L145.newLevel;
  outC->_L147 = last_inSupervisingDevice;
  outC->_L144 = inSupervisingDevice;
  outC->_L148 = outC->_L144 != outC->_L147;
  outC->_L112 = outC->_L148 | outC->_L159;
  outC->releaseBuffer = outC->_L112;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State3_SM1 :
      outC->SM1_state_act = _14_SM1_state_act_partial;
      break;
    case SSM_st_State2_SM1 :
      tr_1_guard_State2_SM1 = outC->releaseBuffer & (last_currBuffersize >
          kcg_lit_int64(0));
      if (tr_1_guard_State2_SM1) {
        _11_SM1_state_act_partial = SSM_st_State3_SM1;
      }
      else {
        _11_SM1_state_act_partial = SSM_st_State2_SM1;
      }
      outC->SM1_state_act = _11_SM1_state_act_partial;
      break;
    case _145_SSM_st_State1_SM1 :
      tr_1_guard_State1_SM1 = kcg_true;
      if (tr_1_guard_State1_SM1) {
        SM1_state_act_partial = SSM_st_State2_SM1;
      }
      else {
        SM1_state_act_partial = _145_SSM_st_State1_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State3_SM1 :
      outC->_L1_State3_SM1 = kcg_true;
      _7_bufferHasPriority_partial = outC->_L1_State3_SM1;
      outC->bufferHasPriority = _7_bufferHasPriority_partial;
      break;
    case SSM_st_State2_SM1 :
      outC->_L2_State2_SM1 = kcg_false;
      _3_bufferHasPriority_partial = outC->_L2_State2_SM1;
      outC->bufferHasPriority = _3_bufferHasPriority_partial;
      break;
    case _145_SSM_st_State1_SM1 :
      bufferHasPriority_partial = last_bufferHasPriority;
      outC->bufferHasPriority = bufferHasPriority_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L127 = outC->bufferHasPriority;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L109, inMessage);
  outC->_L111 = outC->_L109.valid;
  outC->_L126 = outC->_L111 & outC->_L127;
  outC->Write_MemoryBasic_1_struct = outC->_L126;
  outC->_L5_MemoryBasic_1_struct = outC->Write_MemoryBasic_1_struct;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->BM_Input_MemoryBasic_1_struct,
    &outC->_L109);
  kcg_copy_struct_493015(
    &outC->_L2_MemoryBasic_1_struct,
    &outC->BM_Input_MemoryBasic_1_struct);
  /* @1/_L4= */
  if (outC->_L5_MemoryBasic_1_struct) {
    kcg_copy_struct_493015(
      &outC->_L4_MemoryBasic_1_struct,
      &outC->_L2_MemoryBasic_1_struct);
  }
  else {
    kcg_copy_struct_493015(
      &outC->_L4_MemoryBasic_1_struct,
      &outC->_L6_MemoryBasic_1_struct);
  }
  kcg_copy_struct_493015(
    &outC->Memorized_MemoryBasic_1_struct,
    &outC->_L4_MemoryBasic_1_struct);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L108,
    &outC->Memorized_MemoryBasic_1_struct);
  outC->_L131 = !kcg_comp_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L108,
      &outC->_L110);
  /* _L128= */
  if (outC->_L131) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L128, &outC->_L108);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L128, &outC->_L109);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L124,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&last_bufferMsg, &outC->bufferMsg);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L103, &last_bufferMsg);
  last_storeInBuffer = outC->storeInBuffer;
  outC->_L104 = last_storeInBuffer;
  outC->_L121 = outC->_L103.valid;
  outC->_L122 = outC->_L121 & outC->_L104;
  /* _L123= */
  if (outC->_L122) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L123, &outC->_L103);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L123, &outC->_L124);
  }
  outC->_L125 = outC->bufferHasPriority;
  outC->_L137 = sp_terminated_RCM_Session_Types_Pkg;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L152, inMorcStatus);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->morcRadioStatus,
    &outC->_L152);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L132,
    &outC->morcRadioStatus);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L133,
    &outC->_L132.session);
  outC->_L134 = outC->_L133.phase;
  outC->_L136 = outC->_L134 == outC->_L137;
  outC->cond4_8_5_4c = outC->_L136;
  outC->_L138 = outC->cond4_8_5_4c;
  outC->_L106 = kcg_false;
  outC->cond4_8_5_4b = outC->_L106;
  outC->_L141 = outC->cond4_8_5_4b;
  outC->cond4_8_5_4a = outC->_L106;
  outC->_L140 = outC->cond4_8_5_4a;
  outC->_L105 = outC->_L140 | outC->_L141 | outC->_L138;
  /* _L100=(InformationFilter_Pkg::TransitionBuffer#1)/ */
  TransitionBuffer_InformationFilter_Pkg(
    &outC->_L123,
    outC->_L125,
    outC->_L105,
    &outC->Context_TransitionBuffer_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L100,
    &outC->Context_TransitionBuffer_1.Out);
  outC->_L119 = outC->Context_TransitionBuffer_1.outStacksize;
  outC->_L118 = outC->bufferHasPriority;
  /* _L99= */
  if (outC->_L118) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L99, &outC->_L100);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L99, &outC->_L128);
  }
  outC->_L96 = outC->_L99.valid;
  outC->every = outC->_L96;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L5, inModeLevel);
  outC->_L157 = outC->_L5.level;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L154, inMessage);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&outC->_L72, inFilterEvents);
  /* _L153=(InformationFilter_Pkg::flagsForLevelChange#1)/ */
  flagsForLevelChange_InformationFilter_Pkg(
    &outC->_L5,
    &outC->_L154,
    &outC->_L72,
    &outC->Context_flagsForLevelChange_1);
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(
    &outC->_L153,
    &outC->Context_flagsForLevelChange_1.outFilterEvents);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L161,
    &outC->Context_flagsForLevelChange_1.IF_toML);
  outC->_L18 = inSupervisingDevice;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L155, inModeLevel);
  outC->_L156 = outC->_L155.Mode;
  if (outC->every) {
    /* _L95=(InformationFilter_Pkg::FilterSequence)/ */
    FilterSequence_InformationFilter_Pkg(
      &outC->_L99,
      outC->_L157,
      &outC->_L153,
      outC->_L18,
      outC->_L156,
      &outC->Context_FilterSequence);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_2_op_call,
      &outC->Context_FilterSequence.outMessage);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_1_op_call,
      &outC->Context_FilterSequence.bufferMessage);
    op_call = outC->Context_FilterSequence.storeInBuffer;
  }
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->IF_toML,
    &outC->_L161);
  outC->currBuffersize = outC->_L119;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State3_SM1 :
      if (tr_1_guard_State3_SM1) {
        _16_SM1_fired_strong_partial = SSM_TR_State3_State2_1_State3_SM1;
      }
      else {
        _16_SM1_fired_strong_partial = _146_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _16_SM1_fired_strong_partial;
      break;
    case SSM_st_State2_SM1 :
      if (tr_1_guard_State2_SM1) {
        _13_SM1_fired_strong_partial = SSM_TR_State2_State3_1_State2_SM1;
      }
      else {
        _13_SM1_fired_strong_partial = _146_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _13_SM1_fired_strong_partial;
      break;
    case _145_SSM_st_State1_SM1 :
      if (tr_1_guard_State1_SM1) {
        SM1_fired_strong_partial = SSM_TR_State1_State2_1_State1_SM1;
      }
      else {
        SM1_fired_strong_partial = _146_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State3_SM1 :
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_State3_SM1;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      break;
    case SSM_st_State2_SM1 :
      _6_SM1_fired_partial = outC->SM1_fired_strong;
      _5_SM1_reset_nxt_partial = kcg_false;
      _4_SM1_state_nxt_partial = SSM_st_State2_SM1;
      outC->SM1_state_nxt = _4_SM1_state_nxt_partial;
      break;
    case _145_SSM_st_State1_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = _145_SSM_st_State1_SM1;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_State3_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_State2_SM1 :
      outC->SM1_reset_nxt = _5_SM1_reset_nxt_partial;
      outC->SM1_fired = _6_SM1_fired_partial;
      break;
    case _145_SSM_st_State1_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_State3_SM1 :
      _15_SM1_reset_act_partial = tr_1_guard_State3_SM1;
      break;
    case SSM_st_State2_SM1 :
      _12_SM1_reset_act_partial = tr_1_guard_State2_SM1;
      break;
    case _145_SSM_st_State1_SM1 :
      SM1_reset_act_partial = tr_1_guard_State1_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_State3_SM1 :
      outC->SM1_reset_act = _15_SM1_reset_act_partial;
      break;
    case SSM_st_State2_SM1 :
      outC->SM1_reset_act = _12_SM1_reset_act_partial;
      break;
    case _145_SSM_st_State1_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L97 = kcg_false;
  if (outC->every) {
    outC->_L92 = op_call;
  }
  else {
    outC->_L92 = outC->_L97;
  }
  outC->storeInBuffer = outC->_L92;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L60,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  if (outC->every) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L93, &_1_op_call);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L93, &outC->_L60);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->bufferMsg, &outC->_L93);
  if (outC->every) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L95, &_2_op_call);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L95, &outC->_L60);
  }
  /* _L98= */
  if (outC->_L96) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L98, &outC->_L95);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L98, &outC->_L99);
  }
  outC->_L33 = inTrainDataValid;
  _17_noname = outC->_L33;
  outC->_L32 = inActiveCab;
  noname = outC->_L32;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &outC->_L98);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void InformationFilter_init_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC)
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
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;

  outC->_L161.P12_received = kcg_true;
  outC->_L161.P15_received = kcg_true;
  outC->_L161.P21_received = kcg_true;
  outC->_L161.P27_received = kcg_true;
  outC->_L159 = kcg_true;
  outC->_L157 = M_LEVEL_Level_0;
  outC->_L156 = M_MODE_Full_Supervision;
  outC->_L155.compatibleModeAndLevel = kcg_true;
  outC->_L155.level = M_LEVEL_Level_0;
  outC->_L155.newLevel = kcg_true;
  outC->_L155.Mode = M_MODE_Full_Supervision;
  outC->_L155.newMode = kcg_true;
  outC->_L154.valid = kcg_true;
  outC->_L154.source = msrc_undefined_Common_Types_Pkg;
  outC->_L154.radioMetadata.t_train_reference = kcg_true;
  outC->_L154.radioMetadata.nid_em = kcg_true;
  outC->_L154.radioMetadata.q_scale = kcg_true;
  outC->_L154.radioMetadata.d_sr = kcg_true;
  outC->_L154.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L154.radioMetadata.d_ref = kcg_true;
  outC->_L154.radioMetadata.q_dir = kcg_true;
  outC->_L154.radioMetadata.d_emergencystop = kcg_true;
  outC->_L154.radioMetadata.m_version = kcg_true;
  outC->_L154.BG_Common_Header.valid = kcg_true;
  outC->_L154.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L154.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L154.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L154.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L154.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L154.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L154.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L154.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L154.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L154.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L154.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L154.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L154.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L154.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L154.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L154.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L154.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L154.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L154.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L154.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L154.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L154.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L154.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L154.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L154.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L154.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L154.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L154.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L154.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L154.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L154.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L154.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L154.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L154.sendingRBC.valid = kcg_true;
  outC->_L154.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L154.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L154.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L153.pendingL1Transition = kcg_true;
  outC->_L153.pendingL12L3Transition = kcg_true;
  outC->_L153.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L153.emergencyStopAccepted = kcg_true;
  outC->_L153.lastAckTextMessageId = kcg_lit_int64(0);
  outC->_L153.pendingNTCTransition = kcg_true;
  outC->_L153.SPPAndGradientOnBoard = kcg_true;
  outC->_L153.MACoverNotFullLength = kcg_true;
  outC->_L132.registration.valid = kcg_true;
  outC->_L132.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L132.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L132.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L132.registration.nid_mn = kcg_lit_int64(0);
  outC->_L132.connection.valid = kcg_true;
  outC->_L132.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L132.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L132.connection.nid_radio = kcg_lit_int64(0);
  outC->_L132.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L132.connection.connectionLost = kcg_true;
  outC->_L132.connection.isInRadioHole = kcg_true;
  outC->_L132.session.valid = kcg_true;
  outC->_L132.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L132.session.nid_c = kcg_lit_int64(0);
  outC->_L132.session.nid_rbc = kcg_lit_int64(0);
  outC->_L132.session.nid_radio = kcg_lit_int64(0);
  outC->_L152.registration.valid = kcg_true;
  outC->_L152.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L152.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L152.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L152.registration.nid_mn = kcg_lit_int64(0);
  outC->_L152.connection.valid = kcg_true;
  outC->_L152.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->_L152.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L152.connection.nid_radio = kcg_lit_int64(0);
  outC->_L152.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L152.connection.connectionLost = kcg_true;
  outC->_L152.connection.isInRadioHole = kcg_true;
  outC->_L152.session.valid = kcg_true;
  outC->_L152.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L152.session.nid_c = kcg_lit_int64(0);
  outC->_L152.session.nid_rbc = kcg_lit_int64(0);
  outC->_L152.session.nid_radio = kcg_lit_int64(0);
  outC->_L148 = kcg_true;
  outC->_L147 = kcg_lit_int64(0);
  outC->_L145.compatibleModeAndLevel = kcg_true;
  outC->_L145.level = M_LEVEL_Level_0;
  outC->_L145.newLevel = kcg_true;
  outC->_L145.Mode = M_MODE_Full_Supervision;
  outC->_L145.newMode = kcg_true;
  outC->_L144 = kcg_lit_int64(0);
  outC->_L141 = kcg_true;
  outC->_L140 = kcg_true;
  outC->_L138 = kcg_true;
  outC->_L137 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L136 = kcg_true;
  outC->_L134 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L133.valid = kcg_true;
  outC->_L133.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L133.nid_c = kcg_lit_int64(0);
  outC->_L133.nid_rbc = kcg_lit_int64(0);
  outC->_L133.nid_radio = kcg_lit_int64(0);
  outC->_L131 = kcg_true;
  outC->_L128.valid = kcg_true;
  outC->_L128.source = msrc_undefined_Common_Types_Pkg;
  outC->_L128.radioMetadata.t_train_reference = kcg_true;
  outC->_L128.radioMetadata.nid_em = kcg_true;
  outC->_L128.radioMetadata.q_scale = kcg_true;
  outC->_L128.radioMetadata.d_sr = kcg_true;
  outC->_L128.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L128.radioMetadata.d_ref = kcg_true;
  outC->_L128.radioMetadata.q_dir = kcg_true;
  outC->_L128.radioMetadata.d_emergencystop = kcg_true;
  outC->_L128.radioMetadata.m_version = kcg_true;
  outC->_L128.BG_Common_Header.valid = kcg_true;
  outC->_L128.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L128.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L128.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L128.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L128.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L128.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L128.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L128.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L128.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L128.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L128.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L128.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L128.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L128.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L128.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L128.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L128.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L128.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L128.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L128.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L128.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L128.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L128.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L128.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L128.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L128.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L128.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L128.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L128.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L128.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L128.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L128.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L128.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L128.sendingRBC.valid = kcg_true;
  outC->_L128.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L128.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L128.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L127 = kcg_true;
  outC->_L126 = kcg_true;
  outC->_L125 = kcg_true;
  outC->_L124.valid = kcg_true;
  outC->_L124.source = msrc_undefined_Common_Types_Pkg;
  outC->_L124.radioMetadata.t_train_reference = kcg_true;
  outC->_L124.radioMetadata.nid_em = kcg_true;
  outC->_L124.radioMetadata.q_scale = kcg_true;
  outC->_L124.radioMetadata.d_sr = kcg_true;
  outC->_L124.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L124.radioMetadata.d_ref = kcg_true;
  outC->_L124.radioMetadata.q_dir = kcg_true;
  outC->_L124.radioMetadata.d_emergencystop = kcg_true;
  outC->_L124.radioMetadata.m_version = kcg_true;
  outC->_L124.BG_Common_Header.valid = kcg_true;
  outC->_L124.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L124.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L124.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L124.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L124.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L124.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L124.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L124.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L124.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L124.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L124.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L124.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L124.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L124.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L124.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L124.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L124.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L124.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L124.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L124.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L124.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L124.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L124.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L124.sendingRBC.valid = kcg_true;
  outC->_L124.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L124.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L124.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L123.valid = kcg_true;
  outC->_L123.source = msrc_undefined_Common_Types_Pkg;
  outC->_L123.radioMetadata.t_train_reference = kcg_true;
  outC->_L123.radioMetadata.nid_em = kcg_true;
  outC->_L123.radioMetadata.q_scale = kcg_true;
  outC->_L123.radioMetadata.d_sr = kcg_true;
  outC->_L123.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L123.radioMetadata.d_ref = kcg_true;
  outC->_L123.radioMetadata.q_dir = kcg_true;
  outC->_L123.radioMetadata.d_emergencystop = kcg_true;
  outC->_L123.radioMetadata.m_version = kcg_true;
  outC->_L123.BG_Common_Header.valid = kcg_true;
  outC->_L123.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L123.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L123.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L123.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L123.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L123.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L123.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L123.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L123.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L123.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L123.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L123.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L123.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L123.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L123.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L123.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L123.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L123.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L123.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L123.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L123.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L123.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L123.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L123.sendingRBC.valid = kcg_true;
  outC->_L123.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L123.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L123.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L122 = kcg_true;
  outC->_L121 = kcg_true;
  outC->_L119 = kcg_lit_int64(0);
  outC->_L118 = kcg_true;
  outC->_L112 = kcg_true;
  outC->_L111 = kcg_true;
  outC->_L110.valid = kcg_true;
  outC->_L110.source = msrc_undefined_Common_Types_Pkg;
  outC->_L110.radioMetadata.t_train_reference = kcg_true;
  outC->_L110.radioMetadata.nid_em = kcg_true;
  outC->_L110.radioMetadata.q_scale = kcg_true;
  outC->_L110.radioMetadata.d_sr = kcg_true;
  outC->_L110.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L110.radioMetadata.d_ref = kcg_true;
  outC->_L110.radioMetadata.q_dir = kcg_true;
  outC->_L110.radioMetadata.d_emergencystop = kcg_true;
  outC->_L110.radioMetadata.m_version = kcg_true;
  outC->_L110.BG_Common_Header.valid = kcg_true;
  outC->_L110.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L110.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L110.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L110.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L110.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L110.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L110.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L110.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L110.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L110.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L110.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L110.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L110.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L110.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L110.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L110.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L110.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L110.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L110.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L110.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L110.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L110.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L110.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L110.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L110.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L110.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L110.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L110.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L110.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L110.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L110.packets.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L110.packets.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L110.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L110.sendingRBC.valid = kcg_true;
  outC->_L110.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L110.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L110.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L109.valid = kcg_true;
  outC->_L109.source = msrc_undefined_Common_Types_Pkg;
  outC->_L109.radioMetadata.t_train_reference = kcg_true;
  outC->_L109.radioMetadata.nid_em = kcg_true;
  outC->_L109.radioMetadata.q_scale = kcg_true;
  outC->_L109.radioMetadata.d_sr = kcg_true;
  outC->_L109.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L109.radioMetadata.d_ref = kcg_true;
  outC->_L109.radioMetadata.q_dir = kcg_true;
  outC->_L109.radioMetadata.d_emergencystop = kcg_true;
  outC->_L109.radioMetadata.m_version = kcg_true;
  outC->_L109.BG_Common_Header.valid = kcg_true;
  outC->_L109.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L109.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L109.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L109.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L109.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L109.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L109.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L109.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L109.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L109.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L109.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L109.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L109.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L109.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L109.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L109.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L109.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L109.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L109.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L109.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L109.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L109.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L109.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L109.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L109.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L109.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L109.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L109.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->_L109.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L109.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L109.packets.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->_L109.packets.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L109.packets.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->_L109.sendingRBC.valid = kcg_true;
  outC->_L109.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L109.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L109.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L108.valid = kcg_true;
  outC->_L108.source = msrc_undefined_Common_Types_Pkg;
  outC->_L108.radioMetadata.t_train_reference = kcg_true;
  outC->_L108.radioMetadata.nid_em = kcg_true;
  outC->_L108.radioMetadata.q_scale = kcg_true;
  outC->_L108.radioMetadata.d_sr = kcg_true;
  outC->_L108.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L108.radioMetadata.d_ref = kcg_true;
  outC->_L108.radioMetadata.q_dir = kcg_true;
  outC->_L108.radioMetadata.d_emergencystop = kcg_true;
  outC->_L108.radioMetadata.m_version = kcg_true;
  outC->_L108.BG_Common_Header.valid = kcg_true;
  outC->_L108.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L108.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L108.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L108.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L108.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L108.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L108.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L108.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L108.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L108.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L108.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L108.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L108.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L108.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L108.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L108.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L108.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L108.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L108.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L108.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L108.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L108.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L108.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L108.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L108.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L108.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L108.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L108.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int64(0);
    outC->_L108.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L108.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L108.packets.PacketHeaders[idx12].startAddress = kcg_lit_int64(0);
    outC->_L108.packets.PacketHeaders[idx12].endAddress = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L108.packets.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->_L108.sendingRBC.valid = kcg_true;
  outC->_L108.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L108.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L108.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L106 = kcg_true;
  outC->_L105 = kcg_true;
  outC->_L104 = kcg_true;
  outC->_L103.valid = kcg_true;
  outC->_L103.source = msrc_undefined_Common_Types_Pkg;
  outC->_L103.radioMetadata.t_train_reference = kcg_true;
  outC->_L103.radioMetadata.nid_em = kcg_true;
  outC->_L103.radioMetadata.q_scale = kcg_true;
  outC->_L103.radioMetadata.d_sr = kcg_true;
  outC->_L103.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L103.radioMetadata.d_ref = kcg_true;
  outC->_L103.radioMetadata.q_dir = kcg_true;
  outC->_L103.radioMetadata.d_emergencystop = kcg_true;
  outC->_L103.radioMetadata.m_version = kcg_true;
  outC->_L103.BG_Common_Header.valid = kcg_true;
  outC->_L103.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L103.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L103.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L103.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L103.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L103.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L103.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L103.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L103.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L103.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L103.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L103.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L103.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L103.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L103.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L103.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L103.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L103.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L103.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L103.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L103.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L103.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L103.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L103.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L103.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L103.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L103.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L103.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->_L103.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L103.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L103.packets.PacketHeaders[idx14].startAddress = kcg_lit_int64(0);
    outC->_L103.packets.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L103.packets.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->_L103.sendingRBC.valid = kcg_true;
  outC->_L103.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L103.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L103.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L100.valid = kcg_true;
  outC->_L100.source = msrc_undefined_Common_Types_Pkg;
  outC->_L100.radioMetadata.t_train_reference = kcg_true;
  outC->_L100.radioMetadata.nid_em = kcg_true;
  outC->_L100.radioMetadata.q_scale = kcg_true;
  outC->_L100.radioMetadata.d_sr = kcg_true;
  outC->_L100.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L100.radioMetadata.d_ref = kcg_true;
  outC->_L100.radioMetadata.q_dir = kcg_true;
  outC->_L100.radioMetadata.d_emergencystop = kcg_true;
  outC->_L100.radioMetadata.m_version = kcg_true;
  outC->_L100.BG_Common_Header.valid = kcg_true;
  outC->_L100.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L100.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L100.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L100.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L100.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L100.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L100.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L100.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L100.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L100.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L100.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L100.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L100.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L100.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L100.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L100.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L100.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L100.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L100.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L100.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L100.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L100.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L100.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L100.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L100.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L100.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L100.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L100.packets.PacketHeaders[idx16].nid_packet = kcg_lit_int64(0);
    outC->_L100.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L100.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L100.packets.PacketHeaders[idx16].startAddress = kcg_lit_int64(0);
    outC->_L100.packets.PacketHeaders[idx16].endAddress = kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L100.packets.PacketData[idx17] = kcg_lit_int64(0);
  }
  outC->_L100.sendingRBC.valid = kcg_true;
  outC->_L100.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L100.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L100.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L99.valid = kcg_true;
  outC->_L99.source = msrc_undefined_Common_Types_Pkg;
  outC->_L99.radioMetadata.t_train_reference = kcg_true;
  outC->_L99.radioMetadata.nid_em = kcg_true;
  outC->_L99.radioMetadata.q_scale = kcg_true;
  outC->_L99.radioMetadata.d_sr = kcg_true;
  outC->_L99.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L99.radioMetadata.d_ref = kcg_true;
  outC->_L99.radioMetadata.q_dir = kcg_true;
  outC->_L99.radioMetadata.d_emergencystop = kcg_true;
  outC->_L99.radioMetadata.m_version = kcg_true;
  outC->_L99.BG_Common_Header.valid = kcg_true;
  outC->_L99.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L99.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L99.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L99.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L99.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L99.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L99.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L99.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L99.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L99.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L99.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L99.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L99.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L99.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L99.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L99.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L99.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L99.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L99.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L99.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L99.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L99.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L99.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L99.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L99.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L99.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L99.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L99.packets.PacketHeaders[idx18].nid_packet = kcg_lit_int64(0);
    outC->_L99.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L99.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->_L99.packets.PacketHeaders[idx18].startAddress = kcg_lit_int64(0);
    outC->_L99.packets.PacketHeaders[idx18].endAddress = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L99.packets.PacketData[idx19] = kcg_lit_int64(0);
  }
  outC->_L99.sendingRBC.valid = kcg_true;
  outC->_L99.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L99.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L99.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L98.valid = kcg_true;
  outC->_L98.source = msrc_undefined_Common_Types_Pkg;
  outC->_L98.radioMetadata.t_train_reference = kcg_true;
  outC->_L98.radioMetadata.nid_em = kcg_true;
  outC->_L98.radioMetadata.q_scale = kcg_true;
  outC->_L98.radioMetadata.d_sr = kcg_true;
  outC->_L98.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L98.radioMetadata.d_ref = kcg_true;
  outC->_L98.radioMetadata.q_dir = kcg_true;
  outC->_L98.radioMetadata.d_emergencystop = kcg_true;
  outC->_L98.radioMetadata.m_version = kcg_true;
  outC->_L98.BG_Common_Header.valid = kcg_true;
  outC->_L98.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L98.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L98.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L98.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L98.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L98.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L98.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L98.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L98.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L98.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L98.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L98.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L98.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L98.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L98.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L98.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L98.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L98.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L98.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L98.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L98.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L98.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L98.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L98.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L98.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L98.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L98.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L98.packets.PacketHeaders[idx20].nid_packet = kcg_lit_int64(0);
    outC->_L98.packets.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L98.packets.PacketHeaders[idx20].valid = kcg_true;
    outC->_L98.packets.PacketHeaders[idx20].startAddress = kcg_lit_int64(0);
    outC->_L98.packets.PacketHeaders[idx20].endAddress = kcg_lit_int64(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L98.packets.PacketData[idx21] = kcg_lit_int64(0);
  }
  outC->_L98.sendingRBC.valid = kcg_true;
  outC->_L98.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L98.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L98.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L97 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L92 = kcg_true;
  outC->_L93.valid = kcg_true;
  outC->_L93.source = msrc_undefined_Common_Types_Pkg;
  outC->_L93.radioMetadata.t_train_reference = kcg_true;
  outC->_L93.radioMetadata.nid_em = kcg_true;
  outC->_L93.radioMetadata.q_scale = kcg_true;
  outC->_L93.radioMetadata.d_sr = kcg_true;
  outC->_L93.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L93.radioMetadata.d_ref = kcg_true;
  outC->_L93.radioMetadata.q_dir = kcg_true;
  outC->_L93.radioMetadata.d_emergencystop = kcg_true;
  outC->_L93.radioMetadata.m_version = kcg_true;
  outC->_L93.BG_Common_Header.valid = kcg_true;
  outC->_L93.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L93.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L93.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L93.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L93.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L93.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L93.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L93.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L93.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L93.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L93.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L93.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L93.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L93.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L93.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L93.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L93.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L93.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L93.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L93.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L93.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L93.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L93.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L93.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L93.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L93.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L93.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L93.packets.PacketHeaders[idx22].nid_packet = kcg_lit_int64(0);
    outC->_L93.packets.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L93.packets.PacketHeaders[idx22].valid = kcg_true;
    outC->_L93.packets.PacketHeaders[idx22].startAddress = kcg_lit_int64(0);
    outC->_L93.packets.PacketHeaders[idx22].endAddress = kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L93.packets.PacketData[idx23] = kcg_lit_int64(0);
  }
  outC->_L93.sendingRBC.valid = kcg_true;
  outC->_L93.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L93.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L93.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L95.valid = kcg_true;
  outC->_L95.source = msrc_undefined_Common_Types_Pkg;
  outC->_L95.radioMetadata.t_train_reference = kcg_true;
  outC->_L95.radioMetadata.nid_em = kcg_true;
  outC->_L95.radioMetadata.q_scale = kcg_true;
  outC->_L95.radioMetadata.d_sr = kcg_true;
  outC->_L95.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L95.radioMetadata.d_ref = kcg_true;
  outC->_L95.radioMetadata.q_dir = kcg_true;
  outC->_L95.radioMetadata.d_emergencystop = kcg_true;
  outC->_L95.radioMetadata.m_version = kcg_true;
  outC->_L95.BG_Common_Header.valid = kcg_true;
  outC->_L95.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L95.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L95.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L95.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L95.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L95.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L95.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L95.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L95.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L95.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L95.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L95.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L95.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L95.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L95.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L95.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L95.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L95.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L95.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L95.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L95.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L95.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L95.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L95.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L95.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L95.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L95.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L95.packets.PacketHeaders[idx24].nid_packet = kcg_lit_int64(0);
    outC->_L95.packets.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L95.packets.PacketHeaders[idx24].valid = kcg_true;
    outC->_L95.packets.PacketHeaders[idx24].startAddress = kcg_lit_int64(0);
    outC->_L95.packets.PacketHeaders[idx24].endAddress = kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L95.packets.PacketData[idx25] = kcg_lit_int64(0);
  }
  outC->_L95.sendingRBC.valid = kcg_true;
  outC->_L95.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L95.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L95.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L72.pendingL1Transition = kcg_true;
  outC->_L72.pendingL12L3Transition = kcg_true;
  outC->_L72.pendingAckOfTrainDataFromRBC = kcg_true;
  outC->_L72.emergencyStopAccepted = kcg_true;
  outC->_L72.lastAckTextMessageId = kcg_lit_int64(0);
  outC->_L72.pendingNTCTransition = kcg_true;
  outC->_L72.SPPAndGradientOnBoard = kcg_true;
  outC->_L72.MACoverNotFullLength = kcg_true;
  outC->_L60.valid = kcg_true;
  outC->_L60.source = msrc_undefined_Common_Types_Pkg;
  outC->_L60.radioMetadata.t_train_reference = kcg_true;
  outC->_L60.radioMetadata.nid_em = kcg_true;
  outC->_L60.radioMetadata.q_scale = kcg_true;
  outC->_L60.radioMetadata.d_sr = kcg_true;
  outC->_L60.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L60.radioMetadata.d_ref = kcg_true;
  outC->_L60.radioMetadata.q_dir = kcg_true;
  outC->_L60.radioMetadata.d_emergencystop = kcg_true;
  outC->_L60.radioMetadata.m_version = kcg_true;
  outC->_L60.BG_Common_Header.valid = kcg_true;
  outC->_L60.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L60.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L60.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L60.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L60.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L60.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L60.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L60.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L60.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L60.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L60.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L60.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L60.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L60.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L60.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L60.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L60.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L60.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L60.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L60.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L60.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L60.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L60.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L60.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L60.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L60.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L60.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L60.packets.PacketHeaders[idx26].nid_packet = kcg_lit_int64(0);
    outC->_L60.packets.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L60.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->_L60.packets.PacketHeaders[idx26].startAddress = kcg_lit_int64(0);
    outC->_L60.packets.PacketHeaders[idx26].endAddress = kcg_lit_int64(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L60.packets.PacketData[idx27] = kcg_lit_int64(0);
  }
  outC->_L60.sendingRBC.valid = kcg_true;
  outC->_L60.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L60.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L60.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L18 = kcg_lit_int64(0);
  outC->_L5.compatibleModeAndLevel = kcg_true;
  outC->_L5.level = M_LEVEL_Level_0;
  outC->_L5.newLevel = kcg_true;
  outC->_L5.Mode = M_MODE_Full_Supervision;
  outC->_L5.newMode = kcg_true;
  outC->cond4_8_5_4a = kcg_true;
  outC->cond4_8_5_4b = kcg_true;
  outC->cond4_8_5_4c = kcg_true;
  outC->morcRadioStatus.registration.valid = kcg_true;
  outC->morcRadioStatus.registration.mobileDeviceNo = kcg_lit_int64(0);
  outC->morcRadioStatus.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->morcRadioStatus.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->morcRadioStatus.registration.nid_mn = kcg_lit_int64(0);
  outC->morcRadioStatus.connection.valid = kcg_true;
  outC->morcRadioStatus.connection.mobileDeviceNo = kcg_lit_int64(0);
  outC->morcRadioStatus.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->morcRadioStatus.connection.nid_radio = kcg_lit_int64(0);
  outC->morcRadioStatus.connection.settingUpConnectionHasFailed = kcg_true;
  outC->morcRadioStatus.connection.connectionLost = kcg_true;
  outC->morcRadioStatus.connection.isInRadioHole = kcg_true;
  outC->morcRadioStatus.session.valid = kcg_true;
  outC->morcRadioStatus.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->morcRadioStatus.session.nid_c = kcg_lit_int64(0);
  outC->morcRadioStatus.session.nid_rbc = kcg_lit_int64(0);
  outC->morcRadioStatus.session.nid_radio = kcg_lit_int64(0);
  outC->releaseBuffer = kcg_true;
  outC->SM1_fired = _146_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _146_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = _145_SSM_st_State1_SM1;
  outC->SM1_state_sel = _145_SSM_st_State1_SM1;
  outC->every = kcg_true;
  outC->_L1_State3_SM1 = kcg_true;
  outC->_L2_State2_SM1 = kcg_true;
  outC->_L2_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L2_MemoryBasic_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2_MemoryBasic_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->_L2_MemoryBasic_1_struct.radioMetadata.nid_em = kcg_true;
  outC->_L2_MemoryBasic_1_struct.radioMetadata.q_scale = kcg_true;
  outC->_L2_MemoryBasic_1_struct.radioMetadata.d_sr = kcg_true;
  outC->_L2_MemoryBasic_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_MemoryBasic_1_struct.radioMetadata.d_ref = kcg_true;
  outC->_L2_MemoryBasic_1_struct.radioMetadata.q_dir = kcg_true;
  outC->_L2_MemoryBasic_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2_MemoryBasic_1_struct.radioMetadata.m_version = kcg_true;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.valid = kcg_true;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_MemoryBasic_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L2_MemoryBasic_1_struct.packets.PacketHeaders[idx28].nid_packet =
      kcg_lit_int64(0);
    outC->_L2_MemoryBasic_1_struct.packets.PacketHeaders[idx28].q_dir =
      Q_DIR_Reverse;
    outC->_L2_MemoryBasic_1_struct.packets.PacketHeaders[idx28].valid = kcg_true;
    outC->_L2_MemoryBasic_1_struct.packets.PacketHeaders[idx28].startAddress =
      kcg_lit_int64(0);
    outC->_L2_MemoryBasic_1_struct.packets.PacketHeaders[idx28].endAddress =
      kcg_lit_int64(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L2_MemoryBasic_1_struct.packets.PacketData[idx29] = kcg_lit_int64(0);
  }
  outC->_L2_MemoryBasic_1_struct.sendingRBC.valid = kcg_true;
  outC->_L2_MemoryBasic_1_struct.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L2_MemoryBasic_1_struct.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L5_MemoryBasic_1_struct = kcg_true;
  outC->_L6_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L6_MemoryBasic_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L6_MemoryBasic_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->_L6_MemoryBasic_1_struct.radioMetadata.nid_em = kcg_true;
  outC->_L6_MemoryBasic_1_struct.radioMetadata.q_scale = kcg_true;
  outC->_L6_MemoryBasic_1_struct.radioMetadata.d_sr = kcg_true;
  outC->_L6_MemoryBasic_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L6_MemoryBasic_1_struct.radioMetadata.d_ref = kcg_true;
  outC->_L6_MemoryBasic_1_struct.radioMetadata.q_dir = kcg_true;
  outC->_L6_MemoryBasic_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->_L6_MemoryBasic_1_struct.radioMetadata.m_version = kcg_true;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.valid = kcg_true;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L6_MemoryBasic_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L6_MemoryBasic_1_struct.packets.PacketHeaders[idx30].nid_packet =
      kcg_lit_int64(0);
    outC->_L6_MemoryBasic_1_struct.packets.PacketHeaders[idx30].q_dir =
      Q_DIR_Reverse;
    outC->_L6_MemoryBasic_1_struct.packets.PacketHeaders[idx30].valid = kcg_true;
    outC->_L6_MemoryBasic_1_struct.packets.PacketHeaders[idx30].startAddress =
      kcg_lit_int64(0);
    outC->_L6_MemoryBasic_1_struct.packets.PacketHeaders[idx30].endAddress =
      kcg_lit_int64(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->_L6_MemoryBasic_1_struct.packets.PacketData[idx31] = kcg_lit_int64(0);
  }
  outC->_L6_MemoryBasic_1_struct.sendingRBC.valid = kcg_true;
  outC->_L6_MemoryBasic_1_struct.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L6_MemoryBasic_1_struct.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L7_MemoryBasic_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L7_MemoryBasic_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->_L7_MemoryBasic_1_struct.radioMetadata.nid_em = kcg_true;
  outC->_L7_MemoryBasic_1_struct.radioMetadata.q_scale = kcg_true;
  outC->_L7_MemoryBasic_1_struct.radioMetadata.d_sr = kcg_true;
  outC->_L7_MemoryBasic_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L7_MemoryBasic_1_struct.radioMetadata.d_ref = kcg_true;
  outC->_L7_MemoryBasic_1_struct.radioMetadata.q_dir = kcg_true;
  outC->_L7_MemoryBasic_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->_L7_MemoryBasic_1_struct.radioMetadata.m_version = kcg_true;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.valid = kcg_true;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7_MemoryBasic_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->_L7_MemoryBasic_1_struct.packets.PacketHeaders[idx32].nid_packet =
      kcg_lit_int64(0);
    outC->_L7_MemoryBasic_1_struct.packets.PacketHeaders[idx32].q_dir =
      Q_DIR_Reverse;
    outC->_L7_MemoryBasic_1_struct.packets.PacketHeaders[idx32].valid = kcg_true;
    outC->_L7_MemoryBasic_1_struct.packets.PacketHeaders[idx32].startAddress =
      kcg_lit_int64(0);
    outC->_L7_MemoryBasic_1_struct.packets.PacketHeaders[idx32].endAddress =
      kcg_lit_int64(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->_L7_MemoryBasic_1_struct.packets.PacketData[idx33] = kcg_lit_int64(0);
  }
  outC->_L7_MemoryBasic_1_struct.sendingRBC.valid = kcg_true;
  outC->_L7_MemoryBasic_1_struct.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L7_MemoryBasic_1_struct.sendingRBC.device_id = kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.valid = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->BM_Input_MemoryBasic_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.radioMetadata.nid_em = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.radioMetadata.q_scale = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.radioMetadata.d_sr = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.radioMetadata.d_ref = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.radioMetadata.q_dir = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.radioMetadata.m_version = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.valid = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.m_mcount = kcg_lit_int64(
      0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->BM_Input_MemoryBasic_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.t_train =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.nid_em =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.d_ref = kcg_lit_int64(
      0);
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->BM_Input_MemoryBasic_1_struct.packets.PacketHeaders[idx34].nid_packet =
      kcg_lit_int64(0);
    outC->BM_Input_MemoryBasic_1_struct.packets.PacketHeaders[idx34].q_dir =
      Q_DIR_Reverse;
    outC->BM_Input_MemoryBasic_1_struct.packets.PacketHeaders[idx34].valid =
      kcg_true;
    outC->BM_Input_MemoryBasic_1_struct.packets.PacketHeaders[idx34].startAddress =
      kcg_lit_int64(0);
    outC->BM_Input_MemoryBasic_1_struct.packets.PacketHeaders[idx34].endAddress =
      kcg_lit_int64(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->BM_Input_MemoryBasic_1_struct.packets.PacketData[idx35] =
      kcg_lit_int64(0);
  }
  outC->BM_Input_MemoryBasic_1_struct.sendingRBC.valid = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->BM_Input_MemoryBasic_1_struct.sendingRBC.device_id = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.valid = kcg_true;
  outC->Init_MemoryBasic_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->Init_MemoryBasic_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->Init_MemoryBasic_1_struct.radioMetadata.nid_em = kcg_true;
  outC->Init_MemoryBasic_1_struct.radioMetadata.q_scale = kcg_true;
  outC->Init_MemoryBasic_1_struct.radioMetadata.d_sr = kcg_true;
  outC->Init_MemoryBasic_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->Init_MemoryBasic_1_struct.radioMetadata.d_ref = kcg_true;
  outC->Init_MemoryBasic_1_struct.radioMetadata.q_dir = kcg_true;
  outC->Init_MemoryBasic_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->Init_MemoryBasic_1_struct.radioMetadata.m_version = kcg_true;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.valid = kcg_true;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Init_MemoryBasic_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(
      0);
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->Init_MemoryBasic_1_struct.packets.PacketHeaders[idx36].nid_packet =
      kcg_lit_int64(0);
    outC->Init_MemoryBasic_1_struct.packets.PacketHeaders[idx36].q_dir =
      Q_DIR_Reverse;
    outC->Init_MemoryBasic_1_struct.packets.PacketHeaders[idx36].valid = kcg_true;
    outC->Init_MemoryBasic_1_struct.packets.PacketHeaders[idx36].startAddress =
      kcg_lit_int64(0);
    outC->Init_MemoryBasic_1_struct.packets.PacketHeaders[idx36].endAddress =
      kcg_lit_int64(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->Init_MemoryBasic_1_struct.packets.PacketData[idx37] = kcg_lit_int64(0);
  }
  outC->Init_MemoryBasic_1_struct.sendingRBC.valid = kcg_true;
  outC->Init_MemoryBasic_1_struct.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->Init_MemoryBasic_1_struct.sendingRBC.device_id = kcg_lit_int64(0);
  outC->Write_MemoryBasic_1_struct = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.valid = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->Memorized_MemoryBasic_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.radioMetadata.nid_em = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.radioMetadata.q_scale = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.radioMetadata.d_sr = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.radioMetadata.d_ref = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.radioMetadata.q_dir = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.radioMetadata.m_version = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.valid = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.m_mcount =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Memorized_MemoryBasic_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.t_train =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.nid_em =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.d_sr = kcg_lit_int64(
      0);
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.d_ref =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx38 = 0; idx38 < 30; idx38++) {
    outC->Memorized_MemoryBasic_1_struct.packets.PacketHeaders[idx38].nid_packet =
      kcg_lit_int64(0);
    outC->Memorized_MemoryBasic_1_struct.packets.PacketHeaders[idx38].q_dir =
      Q_DIR_Reverse;
    outC->Memorized_MemoryBasic_1_struct.packets.PacketHeaders[idx38].valid =
      kcg_true;
    outC->Memorized_MemoryBasic_1_struct.packets.PacketHeaders[idx38].startAddress =
      kcg_lit_int64(0);
    outC->Memorized_MemoryBasic_1_struct.packets.PacketHeaders[idx38].endAddress =
      kcg_lit_int64(0);
  }
  for (idx39 = 0; idx39 < 500; idx39++) {
    outC->Memorized_MemoryBasic_1_struct.packets.PacketData[idx39] =
      kcg_lit_int64(0);
  }
  outC->Memorized_MemoryBasic_1_struct.sendingRBC.valid = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->Memorized_MemoryBasic_1_struct.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L4_MemoryBasic_1_struct.source = msrc_undefined_Common_Types_Pkg;
  outC->_L4_MemoryBasic_1_struct.radioMetadata.t_train_reference = kcg_true;
  outC->_L4_MemoryBasic_1_struct.radioMetadata.nid_em = kcg_true;
  outC->_L4_MemoryBasic_1_struct.radioMetadata.q_scale = kcg_true;
  outC->_L4_MemoryBasic_1_struct.radioMetadata.d_sr = kcg_true;
  outC->_L4_MemoryBasic_1_struct.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L4_MemoryBasic_1_struct.radioMetadata.d_ref = kcg_true;
  outC->_L4_MemoryBasic_1_struct.radioMetadata.q_dir = kcg_true;
  outC->_L4_MemoryBasic_1_struct.radioMetadata.d_emergencystop = kcg_true;
  outC->_L4_MemoryBasic_1_struct.radioMetadata.m_version = kcg_true;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.valid = kcg_true;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L4_MemoryBasic_1_struct.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->_L4_MemoryBasic_1_struct.packets.PacketHeaders[idx40].nid_packet =
      kcg_lit_int64(0);
    outC->_L4_MemoryBasic_1_struct.packets.PacketHeaders[idx40].q_dir =
      Q_DIR_Reverse;
    outC->_L4_MemoryBasic_1_struct.packets.PacketHeaders[idx40].valid = kcg_true;
    outC->_L4_MemoryBasic_1_struct.packets.PacketHeaders[idx40].startAddress =
      kcg_lit_int64(0);
    outC->_L4_MemoryBasic_1_struct.packets.PacketHeaders[idx40].endAddress =
      kcg_lit_int64(0);
  }
  for (idx41 = 0; idx41 < 500; idx41++) {
    outC->_L4_MemoryBasic_1_struct.packets.PacketData[idx41] = kcg_lit_int64(0);
  }
  outC->_L4_MemoryBasic_1_struct.sendingRBC.valid = kcg_true;
  outC->_L4_MemoryBasic_1_struct.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L4_MemoryBasic_1_struct.sendingRBC.device_id = kcg_lit_int64(0);
  outC->init = kcg_true;
  outC->IF_toML.P12_received = kcg_true;
  outC->IF_toML.P15_received = kcg_true;
  outC->IF_toML.P21_received = kcg_true;
  outC->IF_toML.P27_received = kcg_true;
  outC->outMessage.valid = kcg_true;
  outC->outMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outMessage.radioMetadata.nid_em = kcg_true;
  outC->outMessage.radioMetadata.q_scale = kcg_true;
  outC->outMessage.radioMetadata.d_sr = kcg_true;
  outC->outMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outMessage.radioMetadata.d_ref = kcg_true;
  outC->outMessage.radioMetadata.q_dir = kcg_true;
  outC->outMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outMessage.radioMetadata.m_version = kcg_true;
  outC->outMessage.BG_Common_Header.valid = kcg_true;
  outC->outMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outMessage.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outMessage.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->outMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outMessage.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->outMessage.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outMessage.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outMessage.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx42 = 0; idx42 < 30; idx42++) {
    outC->outMessage.packets.PacketHeaders[idx42].nid_packet = kcg_lit_int64(0);
    outC->outMessage.packets.PacketHeaders[idx42].q_dir = Q_DIR_Reverse;
    outC->outMessage.packets.PacketHeaders[idx42].valid = kcg_true;
    outC->outMessage.packets.PacketHeaders[idx42].startAddress = kcg_lit_int64(0);
    outC->outMessage.packets.PacketHeaders[idx42].endAddress = kcg_lit_int64(0);
  }
  for (idx43 = 0; idx43 < 500; idx43++) {
    outC->outMessage.packets.PacketData[idx43] = kcg_lit_int64(0);
  }
  outC->outMessage.sendingRBC.valid = kcg_true;
  outC->outMessage.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->outMessage.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->outMessage.sendingRBC.device_id = kcg_lit_int64(0);
  /* _L95=(InformationFilter_Pkg::FilterSequence)/ */
  FilterSequence_init_InformationFilter_Pkg(&outC->Context_FilterSequence);
  /* _L153=(InformationFilter_Pkg::flagsForLevelChange#1)/ */
  flagsForLevelChange_init_InformationFilter_Pkg(
    &outC->Context_flagsForLevelChange_1);
  /* _L100=(InformationFilter_Pkg::TransitionBuffer#1)/ */
  TransitionBuffer_init_InformationFilter_Pkg(
    &outC->Context_TransitionBuffer_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->storeInBuffer = kcg_false;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->bufferMsg,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  outC->currBuffersize = kcg_lit_int64(0);
  outC->SM1_state_nxt = _145_SSM_st_State1_SM1;
  outC->bufferHasPriority = kcg_false;
  outC->mem_inSupervisingDevice = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L95=(InformationFilter_Pkg::FilterSequence)/ */
  FilterSequence_reset_InformationFilter_Pkg(&outC->Context_FilterSequence);
  /* _L153=(InformationFilter_Pkg::flagsForLevelChange#1)/ */
  flagsForLevelChange_reset_InformationFilter_Pkg(
    &outC->Context_flagsForLevelChange_1);
  /* _L100=(InformationFilter_Pkg::TransitionBuffer#1)/ */
  TransitionBuffer_reset_InformationFilter_Pkg(
    &outC->Context_TransitionBuffer_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->storeInBuffer = kcg_false;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->bufferMsg,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  outC->currBuffersize = kcg_lit_int64(0);
  outC->SM1_state_nxt = _145_SSM_st_State1_SM1;
  outC->bufferHasPriority = kcg_false;
  outC->mem_inSupervisingDevice = kcg_lit_int64(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_InformationFilter_InformationFilter_Pkg(
  SV_InformationFilter_InformationFilter_Pkg *SV,
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  kcg_save_SV_TransitionBuffer_InformationFilter_Pkg(
    &SV->Context_TransitionBuffer_1,
    &outC->Context_TransitionBuffer_1);
  kcg_save_SV_flagsForLevelChange_InformationFilter_Pkg(
    &SV->Context_flagsForLevelChange_1,
    &outC->Context_flagsForLevelChange_1);
  SV->Context_currBuffersize = outC->currBuffersize;
  SV->Context_bufferHasPriority = outC->bufferHasPriority;
  SV->Context_storeInBuffer = outC->storeInBuffer;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &SV->Context_bufferMsg,
    &outC->bufferMsg);
  SV->Context_SM1_reset_nxt = outC->SM1_reset_nxt;
  SV->Context_SM1_reset_act = outC->SM1_reset_act;
  SV->Context_SM1_state_nxt = outC->SM1_state_nxt;
  kcg_copy_struct_493015(
    &SV->Context__L4_MemoryBasic_1,
    &outC->_L4_MemoryBasic_1_struct);
  SV->Context_init = outC->init;
  SV->Context_mem_inSupervisingDevice = outC->mem_inSupervisingDevice;
}

void kcg_load_SV_InformationFilter_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC,
  SV_InformationFilter_InformationFilter_Pkg *SV)
{
  kcg_load_SV_TransitionBuffer_InformationFilter_Pkg(
    &outC->Context_TransitionBuffer_1,
    &SV->Context_TransitionBuffer_1);
  kcg_load_SV_flagsForLevelChange_InformationFilter_Pkg(
    &outC->Context_flagsForLevelChange_1,
    &SV->Context_flagsForLevelChange_1);
  outC->currBuffersize = SV->Context_currBuffersize;
  outC->bufferHasPriority = SV->Context_bufferHasPriority;
  outC->storeInBuffer = SV->Context_storeInBuffer;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->bufferMsg,
    &SV->Context_bufferMsg);
  outC->SM1_reset_nxt = SV->Context_SM1_reset_nxt;
  outC->SM1_reset_act = SV->Context_SM1_reset_act;
  outC->SM1_state_nxt = SV->Context_SM1_state_nxt;
  kcg_copy_struct_493015(
    &outC->_L4_MemoryBasic_1_struct,
    &SV->Context__L4_MemoryBasic_1);
  outC->init = SV->Context_init;
  outC->mem_inSupervisingDevice = SV->Context_mem_inSupervisingDevice;
}

/*
  Expanded instances for: InformationFilter_Pkg::InformationFilter/
  @1: (linear::MemoryBasic#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InformationFilter_InformationFilter_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

