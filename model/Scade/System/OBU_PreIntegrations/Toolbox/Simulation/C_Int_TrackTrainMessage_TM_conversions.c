/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_Int_TrackTrainMessage_TM_conversions.h"

/* TM_conversions::C_Int_TrackTrainMessage/ */
void C_Int_TrackTrainMessage_TM_conversions(
  /* Message_In/ */
  Radio_TrackTrain_Header_T_TM *Message_In,
  outC_C_Int_TrackTrainMessage_TM_conversions *outC)
{
  kcg_bool noname_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR _1_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool _2_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool _3_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR _4_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool _5_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR _6_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool _7_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR _8_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool _9_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR _10_q_dir_partial_CAST_Int_to_Q_DIR_1;
  kcg_bool noname_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  Q_SCALE q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  kcg_bool error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  Q_SCALE _11_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  kcg_bool _12_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  kcg_bool _13_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  Q_SCALE _14_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  kcg_bool _15_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  Q_SCALE _16_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  kcg_bool _17_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  Q_SCALE _18_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  kcg_bool _19_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  Q_SCALE _20_q_scale_partial_CAST_Int_to_Q_SCALE_1;

  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L28, Message_In);
  outC->_L23 = outC->_L28.q_dir;
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L23;
  outC->_L12_CAST_Int_to_Q_DIR_1 = outC->q_dir_int_CAST_Int_to_Q_DIR_1;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = outC->_L12_CAST_Int_to_Q_DIR_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1 =
    outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* @1/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1) {
    outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_false;
    _9_error_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _10_q_dir_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _10_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _9_error_partial_CAST_Int_to_Q_DIR_1;
  }
  else {
    outC->_1_else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 =
      outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_reverse_TM_conversions;
    /* @1/IfBlock1:else: */
    if (outC->_1_else_clock_CAST_Int_to_Q_DIR_1_IfBlock1) {
      outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 =
        ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      _8_q_dir_partial_CAST_Int_to_Q_DIR_1 = q_dir_partial_CAST_Int_to_Q_DIR_1;
      _7_error_partial_CAST_Int_to_Q_DIR_1 = error_partial_CAST_Int_to_Q_DIR_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1 =
        outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_both_TM_conversions;
      /* @1/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = kcg_false;
        _5_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        _6_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        _1_q_dir_partial_CAST_Int_to_Q_DIR_1 = _6_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _2_error_partial_CAST_Int_to_Q_DIR_1 = _5_error_partial_CAST_Int_to_Q_DIR_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = kcg_true;
        _3_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _4_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _1_q_dir_partial_CAST_Int_to_Q_DIR_1 = _4_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _2_error_partial_CAST_Int_to_Q_DIR_1 = _3_error_partial_CAST_Int_to_Q_DIR_1;
      }
      _8_q_dir_partial_CAST_Int_to_Q_DIR_1 = _1_q_dir_partial_CAST_Int_to_Q_DIR_1;
      _7_error_partial_CAST_Int_to_Q_DIR_1 = _2_error_partial_CAST_Int_to_Q_DIR_1;
    }
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _8_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _7_error_partial_CAST_Int_to_Q_DIR_1;
  }
  outC->_L13_CAST_Int_to_Q_DIR_1 = outC->error_CAST_Int_to_Q_DIR_1;
  noname_CAST_Int_to_Q_DIR_1 = outC->_L13_CAST_Int_to_Q_DIR_1;
  outC->_L19 = outC->_L28.q_scale;
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1 = outC->_L19;
  outC->_L2_CAST_Int_to_Q_SCALE_1 = outC->q_scale_int_CAST_Int_to_Q_SCALE_1;
  outC->q_scale_in_CAST_Int_to_Q_SCALE_1 = outC->_L2_CAST_Int_to_Q_SCALE_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1 =
    outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* @2/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_4__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_false;
    _19_error_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_4__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->error_CAST_Int_to_Q_SCALE_1 = _19_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    outC->_2_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 =
      outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_1m_TM_conversions;
    /* @2/IfBlock1:else: */
    if (outC->_2_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _17_error_partial_CAST_Int_to_Q_SCALE_1 = error_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1 =
        outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10m_TM_conversions;
      /* @2/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 = kcg_false;
        _15_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _12_error_partial_CAST_Int_to_Q_SCALE_1 =
          _15_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 = kcg_true;
        _13_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _12_error_partial_CAST_Int_to_Q_SCALE_1 =
          _13_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      _17_error_partial_CAST_Int_to_Q_SCALE_1 =
        _12_error_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->error_CAST_Int_to_Q_SCALE_1 = _17_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L4_CAST_Int_to_Q_SCALE_1 = outC->error_CAST_Int_to_Q_SCALE_1;
  noname_CAST_Int_to_Q_SCALE_1 = outC->_L4_CAST_Int_to_Q_SCALE_1;
  /* @2/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1 =
      ENUM_Q_SCALE_10cm_TM_conversions;
    _20_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _20_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    /* @2/IfBlock1:else: */
    if (outC->_2_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 =
        ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _18_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      /* @2/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_3__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 =
          ENUM_Q_SCALE_10m_TM_conversions;
        _16_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_3__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _11_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _16_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 =
          ENUM_Q_SCALE_10cm_TM_conversions;
        _14_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _11_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _14_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      _18_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        _11_q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _18_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L31 = outC->q_scale_CAST_Int_to_Q_SCALE_1;
  outC->_L11 = outC->_L28.radioDevice;
  outC->_L12 = outC->_L28.receivedSystemTime;
  outC->_L13 = outC->_L28.nid_message;
  /* _L3=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_TM_conversions(
    outC->_L13,
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  outC->_L3 = outC->Context_CAST_Int_to_NID_MESSAGE_1.nid_message;
  outC->_L14 = outC->_L28.t_train;
  /* _L8=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_TM_conversions(
    outC->_L14,
    &outC->Context_CAST_Int_to_T_TRAIN_1);
  outC->_L8 = outC->Context_CAST_Int_to_T_TRAIN_1.t_train;
  outC->_L15 = outC->_L28.m_ack;
  /* _L4=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_TM_conversions(
    outC->_L15,
    &outC->Context_CAST_Int_to_M_ACK_1);
  outC->_L4 = outC->Context_CAST_Int_to_M_ACK_1.m_ack;
  outC->_L16 = outC->_L28.nid_lrbg;
  /* _L27=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_TM_conversions(
    outC->_L16,
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  outC->_L27 = outC->Context_CAST_Int_to_NID_LRBG_1.NID_LRBG_out;
  outC->_L17 = outC->_L28.t_train_reference;
  /* _L29=(TM_conversions::CAST_Int_to_T_TRAIN#2)/ */
  CAST_Int_to_T_TRAIN_TM_conversions(
    outC->_L17,
    &outC->Context_CAST_Int_to_T_TRAIN_2);
  outC->_L29 = outC->Context_CAST_Int_to_T_TRAIN_2.t_train;
  outC->_L18 = outC->_L28.nid_em;
  /* _L5=(TM_conversions::CAST_Int_to_NID_EM#1)/ */
  CAST_Int_to_NID_EM_TM_conversions(
    outC->_L18,
    &outC->Context_CAST_Int_to_NID_EM_1);
  outC->_L5 = outC->Context_CAST_Int_to_NID_EM_1.nid_em;
  outC->_L20 = outC->_L28.d_sr;
  /* _L2=(TM_conversions::CAST_Int_to_D_SR#1)/ */
  CAST_Int_to_D_SR_TM_conversions(
    outC->_L20,
    &outC->Context_CAST_Int_to_D_SR_1);
  outC->_L2 = outC->Context_CAST_Int_to_D_SR_1.d_sr;
  outC->_L21 = outC->_L28.t_sh_rqst;
  /* _L9=(TM_conversions::CAST_Int_to_T_TRAIN#3)/ */
  CAST_Int_to_T_TRAIN_TM_conversions(
    outC->_L21,
    &outC->Context_CAST_Int_to_T_TRAIN_3);
  outC->_L9 = outC->Context_CAST_Int_to_T_TRAIN_3.t_train;
  outC->_L22 = outC->_L28.d_ref;
  /* _L26=(TM_conversions::CAST_Int_to_D_REF#1)/ */
  CAST_Int_to_D_REF_TM_conversions(
    outC->_L22,
    &outC->Context_CAST_Int_to_D_REF_1);
  outC->_L26 = outC->Context_CAST_Int_to_D_REF_1.d_ref;
  outC->_L6 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L24 = outC->_L28.d_emergencystop;
  /* _L10=(TM_conversions::CAST_Int_to_D_EMERGENCYSTOP#1)/ */
  CAST_Int_to_D_EMERGENCYSTOP_TM_conversions(
    outC->_L24,
    &outC->Context_CAST_Int_to_D_EMERGENCYSTOP_1);
  outC->_L10 = outC->Context_CAST_Int_to_D_EMERGENCYSTOP_1.d_emergencystop;
  outC->_L25 = outC->_L28.m_version;
  /* _L7=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_TM_conversions(
    outC->_L25,
    &outC->Context_CAST_Int_to_M_VERSION_1);
  outC->_L7 = outC->Context_CAST_Int_to_M_VERSION_1.m_version;
  outC->_L30.radioDevice = outC->_L11;
  outC->_L30.receivedSystemTime = outC->_L12;
  outC->_L30.nid_message = outC->_L3;
  outC->_L30.t_train = outC->_L8;
  outC->_L30.m_ack = outC->_L4;
  outC->_L30.nid_lrbg = outC->_L27;
  outC->_L30.t_train_reference = outC->_L29;
  outC->_L30.nid_em = outC->_L5;
  outC->_L30.q_scale = outC->_L31;
  outC->_L30.d_sr = outC->_L2;
  outC->_L30.t_sh_rqst = outC->_L9;
  outC->_L30.d_ref = outC->_L26;
  outC->_L30.q_dir = outC->_L6;
  outC->_L30.d_emergencystop = outC->_L10;
  outC->_L30.m_version = outC->_L7;
  kcg_copy__5_Radio_TrackTrain_Header_T_TM_transitional(
    &outC->Message_Out,
    &outC->_L30);
}

#ifndef KCG_USER_DEFINED_INIT
void C_Int_TrackTrainMessage_init_TM_conversions(
  outC_C_Int_TrackTrainMessage_TM_conversions *outC)
{
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = M_ACK_No_acknowledgement_required;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = Q_DIR_Reverse;
  outC->_L7 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L28.radioDevice = kcg_lit_int64(0);
  outC->_L28.receivedSystemTime = kcg_lit_int64(0);
  outC->_L28.nid_message = kcg_lit_int64(0);
  outC->_L28.t_train = kcg_lit_int64(0);
  outC->_L28.m_ack = kcg_lit_int64(0);
  outC->_L28.nid_lrbg = kcg_lit_int64(0);
  outC->_L28.t_train_reference = kcg_lit_int64(0);
  outC->_L28.nid_em = kcg_lit_int64(0);
  outC->_L28.q_scale = kcg_lit_int64(0);
  outC->_L28.d_sr = kcg_lit_int64(0);
  outC->_L28.t_sh_rqst = kcg_lit_int64(0);
  outC->_L28.d_ref = kcg_lit_int64(0);
  outC->_L28.q_dir = kcg_lit_int64(0);
  outC->_L28.d_emergencystop = kcg_lit_int64(0);
  outC->_L28.m_version = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L30.radioDevice = kcg_lit_int64(0);
  outC->_L30.receivedSystemTime = kcg_lit_int64(0);
  outC->_L30.nid_message = kcg_lit_int64(0);
  outC->_L30.t_train = kcg_lit_int64(0);
  outC->_L30.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L30.nid_lrbg = kcg_lit_int64(0);
  outC->_L30.t_train_reference = kcg_lit_int64(0);
  outC->_L30.nid_em = kcg_lit_int64(0);
  outC->_L30.q_scale = Q_SCALE_10_cm_scale;
  outC->_L30.d_sr = kcg_lit_int64(0);
  outC->_L30.t_sh_rqst = kcg_lit_int64(0);
  outC->_L30.d_ref = kcg_lit_int64(0);
  outC->_L30.q_dir = Q_DIR_Reverse;
  outC->_L30.d_emergencystop = kcg_lit_int64(0);
  outC->_L30.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L31 = Q_SCALE_10_cm_scale;
  outC->_4__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = Q_SCALE_10_cm_scale;
  outC->_2_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 = kcg_true;
  outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 = kcg_true;
  outC->_3__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 =
    Q_SCALE_10_cm_scale;
  outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 = Q_SCALE_10_cm_scale;
  outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1 = kcg_true;
  outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 = Q_SCALE_10_cm_scale;
  outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 = kcg_true;
  outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1 = kcg_true;
  outC->q_scale_in_CAST_Int_to_Q_SCALE_1 = kcg_lit_int64(0);
  outC->error_CAST_Int_to_Q_SCALE_1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_SCALE_1 = kcg_lit_int64(0);
  outC->_L4_CAST_Int_to_Q_SCALE_1 = kcg_true;
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1 = kcg_lit_int64(0);
  outC->q_scale_CAST_Int_to_Q_SCALE_1 = Q_SCALE_10_cm_scale;
  outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_true;
  outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = Q_DIR_Reverse;
  outC->_1_else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 = kcg_true;
  outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = Q_DIR_Reverse;
  outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = Q_DIR_Reverse;
  outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1 = kcg_true;
  outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 = Q_DIR_Reverse;
  outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 = kcg_true;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1 = kcg_true;
  outC->error_CAST_Int_to_Q_DIR_1 = kcg_true;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = kcg_lit_int64(0);
  outC->_L13_CAST_Int_to_Q_DIR_1 = kcg_true;
  outC->_L12_CAST_Int_to_Q_DIR_1 = kcg_lit_int64(0);
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = kcg_lit_int64(0);
  outC->q_dir_CAST_Int_to_Q_DIR_1 = Q_DIR_Reverse;
  outC->Message_Out.radioDevice = kcg_lit_int64(0);
  outC->Message_Out.receivedSystemTime = kcg_lit_int64(0);
  outC->Message_Out.nid_message = kcg_lit_int64(0);
  outC->Message_Out.t_train = kcg_lit_int64(0);
  outC->Message_Out.m_ack = M_ACK_No_acknowledgement_required;
  outC->Message_Out.nid_lrbg = kcg_lit_int64(0);
  outC->Message_Out.t_train_reference = kcg_lit_int64(0);
  outC->Message_Out.nid_em = kcg_lit_int64(0);
  outC->Message_Out.q_scale = Q_SCALE_10_cm_scale;
  outC->Message_Out.d_sr = kcg_lit_int64(0);
  outC->Message_Out.t_sh_rqst = kcg_lit_int64(0);
  outC->Message_Out.d_ref = kcg_lit_int64(0);
  outC->Message_Out.q_dir = Q_DIR_Reverse;
  outC->Message_Out.d_emergencystop = kcg_lit_int64(0);
  outC->Message_Out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  /* _L7=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_1);
  /* _L10=(TM_conversions::CAST_Int_to_D_EMERGENCYSTOP#1)/ */
  CAST_Int_to_D_EMERGENCYSTOP_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_EMERGENCYSTOP_1);
  /* _L26=(TM_conversions::CAST_Int_to_D_REF#1)/ */
  CAST_Int_to_D_REF_init_TM_conversions(&outC->Context_CAST_Int_to_D_REF_1);
  /* _L9=(TM_conversions::CAST_Int_to_T_TRAIN#3)/ */
  CAST_Int_to_T_TRAIN_init_TM_conversions(&outC->Context_CAST_Int_to_T_TRAIN_3);
  /* _L2=(TM_conversions::CAST_Int_to_D_SR#1)/ */
  CAST_Int_to_D_SR_init_TM_conversions(&outC->Context_CAST_Int_to_D_SR_1);
  /* _L5=(TM_conversions::CAST_Int_to_NID_EM#1)/ */
  CAST_Int_to_NID_EM_init_TM_conversions(&outC->Context_CAST_Int_to_NID_EM_1);
  /* _L29=(TM_conversions::CAST_Int_to_T_TRAIN#2)/ */
  CAST_Int_to_T_TRAIN_init_TM_conversions(&outC->Context_CAST_Int_to_T_TRAIN_2);
  /* _L27=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  /* _L4=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_init_TM_conversions(&outC->Context_CAST_Int_to_M_ACK_1);
  /* _L8=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_init_TM_conversions(&outC->Context_CAST_Int_to_T_TRAIN_1);
  /* _L3=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_Int_TrackTrainMessage_reset_TM_conversions(
  outC_C_Int_TrackTrainMessage_TM_conversions *outC)
{
  /* _L7=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */
  CAST_Int_to_M_VERSION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_VERSION_1);
  /* _L10=(TM_conversions::CAST_Int_to_D_EMERGENCYSTOP#1)/ */
  CAST_Int_to_D_EMERGENCYSTOP_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_EMERGENCYSTOP_1);
  /* _L26=(TM_conversions::CAST_Int_to_D_REF#1)/ */
  CAST_Int_to_D_REF_reset_TM_conversions(&outC->Context_CAST_Int_to_D_REF_1);
  /* _L9=(TM_conversions::CAST_Int_to_T_TRAIN#3)/ */
  CAST_Int_to_T_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_TRAIN_3);
  /* _L2=(TM_conversions::CAST_Int_to_D_SR#1)/ */
  CAST_Int_to_D_SR_reset_TM_conversions(&outC->Context_CAST_Int_to_D_SR_1);
  /* _L5=(TM_conversions::CAST_Int_to_NID_EM#1)/ */
  CAST_Int_to_NID_EM_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_EM_1);
  /* _L29=(TM_conversions::CAST_Int_to_T_TRAIN#2)/ */
  CAST_Int_to_T_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_TRAIN_2);
  /* _L27=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  /* _L4=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_reset_TM_conversions(&outC->Context_CAST_Int_to_M_ACK_1);
  /* _L8=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_TRAIN_1);
  /* _L3=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_conversions::C_Int_TrackTrainMessage/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
  @2: (TM_conversions::CAST_Int_to_Q_SCALE#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_Int_TrackTrainMessage_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

