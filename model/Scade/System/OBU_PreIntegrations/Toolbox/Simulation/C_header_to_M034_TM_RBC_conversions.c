/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M034_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_header_to_M034/ */
void C_header_to_M034_TM_RBC_conversions(
  /* header_in/ */
  M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  outC_C_header_to_M034_TM_RBC_conversions *outC)
{
  kcg_bool noname_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  Q_SCALE q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  kcg_bool error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  Q_SCALE _1_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  kcg_bool _2_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  kcg_bool _3_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  Q_SCALE _4_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  kcg_bool _5_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  Q_SCALE _6_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  kcg_bool _7_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  Q_SCALE _8_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  kcg_bool _9_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  Q_SCALE _10_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  kcg_bool noname_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  kcg_bool error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  Q_DIR _11_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  kcg_bool _12_error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  kcg_bool _13_error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  Q_DIR _14_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  kcg_bool _15_error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  Q_DIR _16_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  kcg_bool _17_error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  Q_DIR _18_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  kcg_bool _19_error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  Q_DIR _20_q_dir_partial_CAST_Int_to_Q_DIR_1;
  kcg_int64 noname;

  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L1, header_in);
  outC->_L8 = outC->_L1.field3;
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1 = outC->_L8;
  outC->_L2_CAST_Int_to_Q_SCALE_1 = outC->q_scale_int_CAST_Int_to_Q_SCALE_1;
  outC->q_scale_in_CAST_Int_to_Q_SCALE_1 = outC->_L2_CAST_Int_to_Q_SCALE_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1 =
    outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* @1/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_4__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_false;
    _9_error_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_4__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->error_CAST_Int_to_Q_SCALE_1 = _9_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    outC->_1_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 =
      outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_1m_TM_conversions;
    /* @1/IfBlock1:else: */
    if (outC->_1_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _7_error_partial_CAST_Int_to_Q_SCALE_1 = error_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1 =
        outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10m_TM_conversions;
      /* @1/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 = kcg_false;
        _5_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _2_error_partial_CAST_Int_to_Q_SCALE_1 = _5_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 = kcg_true;
        _3_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _2_error_partial_CAST_Int_to_Q_SCALE_1 = _3_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      _7_error_partial_CAST_Int_to_Q_SCALE_1 = _2_error_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->error_CAST_Int_to_Q_SCALE_1 = _7_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L4_CAST_Int_to_Q_SCALE_1 = outC->error_CAST_Int_to_Q_SCALE_1;
  noname_CAST_Int_to_Q_SCALE_1 = outC->_L4_CAST_Int_to_Q_SCALE_1;
  /* @1/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1 =
      ENUM_Q_SCALE_10cm_TM_conversions;
    _10_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _10_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    /* @1/IfBlock1:else: */
    if (outC->_1_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 =
        ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _8_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      /* @1/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_3__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 =
          ENUM_Q_SCALE_10m_TM_conversions;
        _6_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_3__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _1_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _6_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 =
          ENUM_Q_SCALE_10cm_TM_conversions;
        _4_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _1_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _4_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      _8_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        _1_q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _8_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L10 = outC->_L1.field5;
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L10;
  outC->_L12_CAST_Int_to_Q_DIR_1 = outC->q_dir_int_CAST_Int_to_Q_DIR_1;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = outC->_L12_CAST_Int_to_Q_DIR_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1 =
    outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* @2/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1) {
    outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_false;
    _19_error_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _20_q_dir_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _20_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _19_error_partial_CAST_Int_to_Q_DIR_1;
  }
  else {
    outC->_2_else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 =
      outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_reverse_TM_conversions;
    /* @2/IfBlock1:else: */
    if (outC->_2_else_clock_CAST_Int_to_Q_DIR_1_IfBlock1) {
      outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 =
        ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      _18_q_dir_partial_CAST_Int_to_Q_DIR_1 = q_dir_partial_CAST_Int_to_Q_DIR_1;
      _17_error_partial_CAST_Int_to_Q_DIR_1 = error_partial_CAST_Int_to_Q_DIR_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1 =
        outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_both_TM_conversions;
      /* @2/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = kcg_false;
        _15_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        _16_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        _11_q_dir_partial_CAST_Int_to_Q_DIR_1 = _16_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _12_error_partial_CAST_Int_to_Q_DIR_1 = _15_error_partial_CAST_Int_to_Q_DIR_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = kcg_true;
        _13_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _14_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _11_q_dir_partial_CAST_Int_to_Q_DIR_1 = _14_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _12_error_partial_CAST_Int_to_Q_DIR_1 = _13_error_partial_CAST_Int_to_Q_DIR_1;
      }
      _18_q_dir_partial_CAST_Int_to_Q_DIR_1 = _11_q_dir_partial_CAST_Int_to_Q_DIR_1;
      _17_error_partial_CAST_Int_to_Q_DIR_1 = _12_error_partial_CAST_Int_to_Q_DIR_1;
    }
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _18_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _17_error_partial_CAST_Int_to_Q_DIR_1;
  }
  outC->_L13_CAST_Int_to_Q_DIR_1 = outC->error_CAST_Int_to_Q_DIR_1;
  noname_CAST_Int_to_Q_DIR_1 = outC->_L13_CAST_Int_to_Q_DIR_1;
  outC->_L5 = outC->_L1.t_train;
  /* _L37=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_TM_conversions(
    outC->_L5,
    &outC->Context_CAST_Int_to_T_TRAIN_1);
  outC->_L37 = outC->Context_CAST_Int_to_T_TRAIN_1.t_train;
  outC->_L4 = outC->_L1.l_message;
  /* _L36=(TM_conversions::CAST_Int_to_L_MESSAGE#1)/ */
  CAST_Int_to_L_MESSAGE_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_Int_to_L_MESSAGE_1);
  outC->_L36 = outC->Context_CAST_Int_to_L_MESSAGE_1.l_message;
  outC->_L3 = outC->_L1.nid_message;
  /* _L35=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  outC->_L35 = outC->Context_CAST_Int_to_NID_MESSAGE_1.nid_message;
  outC->_L11 = outC->_L1.field6;
  /* _L33=(TM_conversions::CAST_Int_to_D_TAFDISPLAY#1)/ */
  CAST_Int_to_D_TAFDISPLAY_TM_conversions(
    outC->_L11,
    &outC->Context_CAST_Int_to_D_TAFDISPLAY_1);
  outC->_L33 = outC->Context_CAST_Int_to_D_TAFDISPLAY_1.d_tafdisplay;
  outC->_L12 = outC->_L1.field7;
  /* _L32=(TM_conversions::CAST_Int_to_L_TAFDISPLAY#1)/ */
  CAST_Int_to_L_TAFDISPLAY_TM_conversions(
    outC->_L12,
    &outC->Context_CAST_Int_to_L_TAFDISPLAY_1);
  outC->_L32 = outC->Context_CAST_Int_to_L_TAFDISPLAY_1.l_tafdisplay;
  outC->_L31 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L9 = outC->_L1.field4;
  /* _L30=(TM_conversions::CAST_Int_to_D_REF#1)/ */
  CAST_Int_to_D_REF_TM_conversions(
    outC->_L9,
    &outC->Context_CAST_Int_to_D_REF_1);
  outC->_L30 = outC->Context_CAST_Int_to_D_REF_1.d_ref;
  outC->_L29 = outC->q_scale_CAST_Int_to_Q_SCALE_1;
  outC->_L13 = outC->_L1.field8;
  noname = outC->_L13;
  outC->_L7 = outC->_L1.field2;
  /* _L28=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_TM_conversions(
    outC->_L7,
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  outC->_L28 = outC->Context_CAST_Int_to_NID_LRBG_1.NID_LRBG_out;
  outC->_L6 = outC->_L1.field1;
  /* _L27=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_TM_conversions(
    outC->_L6,
    &outC->Context_CAST_Int_to_M_ACK_1);
  outC->_L27 = outC->Context_CAST_Int_to_M_ACK_1.m_ack;
  outC->_L2 = outC->_L1.valid;
  outC->_L26.valid = outC->_L2;
  outC->_L26.nid_message = outC->_L35;
  outC->_L26.l_message = outC->_L36;
  outC->_L26.t_train = outC->_L37;
  outC->_L26.m_ack = outC->_L27;
  outC->_L26.nid_lrbg = outC->_L28;
  outC->_L26.q_scale = outC->_L29;
  outC->_L26.d_ref = outC->_L30;
  outC->_L26.q_dir = outC->_L31;
  outC->_L26.d_tafdisplay = outC->_L33;
  outC->_L26.l_tafdisplay = outC->_L32;
  kcg_copy_M_034_T_TM_radio_messages(&outC->message_out, &outC->_L26);
}

#ifndef KCG_USER_DEFINED_INIT
void C_header_to_M034_init_TM_RBC_conversions(
  outC_C_header_to_M034_TM_RBC_conversions *outC)
{
  outC->_L35 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L31 = Q_DIR_Reverse;
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29 = Q_SCALE_10_cm_scale;
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = M_ACK_No_acknowledgement_required;
  outC->_L26.valid = kcg_true;
  outC->_L26.nid_message = kcg_lit_int64(0);
  outC->_L26.l_message = kcg_lit_int64(0);
  outC->_L26.t_train = kcg_lit_int64(0);
  outC->_L26.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L26.nid_lrbg = kcg_lit_int64(0);
  outC->_L26.q_scale = Q_SCALE_10_cm_scale;
  outC->_L26.d_ref = kcg_lit_int64(0);
  outC->_L26.q_dir = Q_DIR_Reverse;
  outC->_L26.d_tafdisplay = kcg_lit_int64(0);
  outC->_L26.l_tafdisplay = kcg_lit_int64(0);
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_message = kcg_lit_int64(0);
  outC->_L1.l_message = kcg_lit_int64(0);
  outC->_L1.t_train = kcg_lit_int64(0);
  outC->_L1.field1 = kcg_lit_int64(0);
  outC->_L1.field2 = kcg_lit_int64(0);
  outC->_L1.field3 = kcg_lit_int64(0);
  outC->_L1.field4 = kcg_lit_int64(0);
  outC->_L1.field5 = kcg_lit_int64(0);
  outC->_L1.field6 = kcg_lit_int64(0);
  outC->_L1.field7 = kcg_lit_int64(0);
  outC->_L1.field8 = kcg_lit_int64(0);
  outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_true;
  outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = Q_DIR_Reverse;
  outC->_2_else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 = kcg_true;
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
  outC->_4__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = Q_SCALE_10_cm_scale;
  outC->_1_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 = kcg_true;
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
  outC->message_out.valid = kcg_true;
  outC->message_out.nid_message = kcg_lit_int64(0);
  outC->message_out.l_message = kcg_lit_int64(0);
  outC->message_out.t_train = kcg_lit_int64(0);
  outC->message_out.m_ack = M_ACK_No_acknowledgement_required;
  outC->message_out.nid_lrbg = kcg_lit_int64(0);
  outC->message_out.q_scale = Q_SCALE_10_cm_scale;
  outC->message_out.d_ref = kcg_lit_int64(0);
  outC->message_out.q_dir = Q_DIR_Reverse;
  outC->message_out.d_tafdisplay = kcg_lit_int64(0);
  outC->message_out.l_tafdisplay = kcg_lit_int64(0);
  /* _L27=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_init_TM_conversions(&outC->Context_CAST_Int_to_M_ACK_1);
  /* _L28=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  /* _L30=(TM_conversions::CAST_Int_to_D_REF#1)/ */
  CAST_Int_to_D_REF_init_TM_conversions(&outC->Context_CAST_Int_to_D_REF_1);
  /* _L32=(TM_conversions::CAST_Int_to_L_TAFDISPLAY#1)/ */
  CAST_Int_to_L_TAFDISPLAY_init_TM_conversions(
    &outC->Context_CAST_Int_to_L_TAFDISPLAY_1);
  /* _L33=(TM_conversions::CAST_Int_to_D_TAFDISPLAY#1)/ */
  CAST_Int_to_D_TAFDISPLAY_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_TAFDISPLAY_1);
  /* _L35=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  /* _L36=(TM_conversions::CAST_Int_to_L_MESSAGE#1)/ */
  CAST_Int_to_L_MESSAGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_L_MESSAGE_1);
  /* _L37=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_init_TM_conversions(&outC->Context_CAST_Int_to_T_TRAIN_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_header_to_M034_reset_TM_RBC_conversions(
  outC_C_header_to_M034_TM_RBC_conversions *outC)
{
  /* _L27=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_reset_TM_conversions(&outC->Context_CAST_Int_to_M_ACK_1);
  /* _L28=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  /* _L30=(TM_conversions::CAST_Int_to_D_REF#1)/ */
  CAST_Int_to_D_REF_reset_TM_conversions(&outC->Context_CAST_Int_to_D_REF_1);
  /* _L32=(TM_conversions::CAST_Int_to_L_TAFDISPLAY#1)/ */
  CAST_Int_to_L_TAFDISPLAY_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_TAFDISPLAY_1);
  /* _L33=(TM_conversions::CAST_Int_to_D_TAFDISPLAY#1)/ */
  CAST_Int_to_D_TAFDISPLAY_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_TAFDISPLAY_1);
  /* _L35=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  /* _L36=(TM_conversions::CAST_Int_to_L_MESSAGE#1)/ */
  CAST_Int_to_L_MESSAGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_MESSAGE_1);
  /* _L37=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_TRAIN_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_RBC_conversions::C_header_to_M034/
  @1: (TM_conversions::CAST_Int_to_Q_SCALE#1)
  @2: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_header_to_M034_TM_RBC_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

