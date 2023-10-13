/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M002_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_header_to_M002/ */
void C_header_to_M002_TM_RBC_conversions(
  /* header_in/ */
  M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  outC_C_header_to_M002_TM_RBC_conversions *outC)
{
  static kcg_bool noname_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE _1_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool _2_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool _3_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE _4_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool _5_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE _6_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool _7_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE _8_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool _9_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE _10_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  static kcg_int64 noname;
  static kcg_int64 _11_noname;
  static kcg_int64 _12_noname;
  static kcg_int64 _13_noname;

  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L1, header_in);
  outC->_L8 = outC->_L1.field3;
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1 = outC->_L8;
  outC->_L2_CAST_Int_to_Q_SCALE_1 = outC->q_scale_int_CAST_Int_to_Q_SCALE_1;
  outC->q_scale_in_CAST_Int_to_Q_SCALE_1 = outC->_L2_CAST_Int_to_Q_SCALE_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1 =
    outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* @1/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_false;
    _9_error_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->error_CAST_Int_to_Q_SCALE_1 = _9_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    outC->else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 =
      outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_1m_TM_conversions;
    /* @1/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
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
    if (outC->else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
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
        outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 =
          ENUM_Q_SCALE_10m_TM_conversions;
        _6_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
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
  outC->_L5 = outC->_L1.t_train;
  /* _L34=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_TM_conversions(
    outC->_L5,
    &outC->Context_CAST_Int_to_T_TRAIN_1);
  outC->_L34 = outC->Context_CAST_Int_to_T_TRAIN_1.t_train;
  outC->_L4 = outC->_L1.l_message;
  /* _L33=(TM_conversions::CAST_Int_to_L_MESSAGE#1)/ */
  CAST_Int_to_L_MESSAGE_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_Int_to_L_MESSAGE_1);
  outC->_L33 = outC->Context_CAST_Int_to_L_MESSAGE_1.l_message;
  outC->_L3 = outC->_L1.nid_message;
  /* _L32=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  outC->_L32 = outC->Context_CAST_Int_to_NID_MESSAGE_1.nid_message;
  outC->_L13 = outC->_L1.field8;
  _13_noname = outC->_L13;
  outC->_L12 = outC->_L1.field7;
  _12_noname = outC->_L12;
  outC->_L11 = outC->_L1.field6;
  _11_noname = outC->_L11;
  outC->_L10 = outC->_L1.field5;
  noname = outC->_L10;
  outC->_L9 = outC->_L1.field4;
  /* _L30=(TM_conversions::CAST_Int_to_D_SR#1)/ */
  CAST_Int_to_D_SR_TM_conversions(outC->_L9, &outC->Context_CAST_Int_to_D_SR_1);
  outC->_L30 = outC->Context_CAST_Int_to_D_SR_1.d_sr;
  outC->_L29 = outC->q_scale_CAST_Int_to_Q_SCALE_1;
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
  outC->_L26.nid_message = outC->_L32;
  outC->_L26.l_message = outC->_L33;
  outC->_L26.t_train = outC->_L34;
  outC->_L26.m_ack = outC->_L27;
  outC->_L26.nid_lrbg = outC->_L28;
  outC->_L26.q_scale = outC->_L29;
  outC->_L26.d_sr = outC->_L30;
  kcg_copy_M_002_T_TM_radio_messages(&outC->message_out, &outC->_L26);
}

#ifndef KCG_USER_DEFINED_INIT
void C_header_to_M002_init_TM_RBC_conversions(
  outC_C_header_to_M002_TM_RBC_conversions *outC)
{
  outC->_L34 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
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
  outC->_L26.d_sr = kcg_lit_int64(0);
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
  outC->_L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = Q_SCALE_10_cm_scale;
  outC->else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 = kcg_true;
  outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 = kcg_true;
  outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 = Q_SCALE_10_cm_scale;
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
  outC->message_out.d_sr = kcg_lit_int64(0);
  /* _L27=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_init_TM_conversions(&outC->Context_CAST_Int_to_M_ACK_1);
  /* _L28=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  /* _L30=(TM_conversions::CAST_Int_to_D_SR#1)/ */
  CAST_Int_to_D_SR_init_TM_conversions(&outC->Context_CAST_Int_to_D_SR_1);
  /* _L32=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  /* _L33=(TM_conversions::CAST_Int_to_L_MESSAGE#1)/ */
  CAST_Int_to_L_MESSAGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_L_MESSAGE_1);
  /* _L34=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_init_TM_conversions(&outC->Context_CAST_Int_to_T_TRAIN_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_header_to_M002_reset_TM_RBC_conversions(
  outC_C_header_to_M002_TM_RBC_conversions *outC)
{
  /* _L27=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_reset_TM_conversions(&outC->Context_CAST_Int_to_M_ACK_1);
  /* _L28=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  /* _L30=(TM_conversions::CAST_Int_to_D_SR#1)/ */
  CAST_Int_to_D_SR_reset_TM_conversions(&outC->Context_CAST_Int_to_D_SR_1);
  /* _L32=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  /* _L33=(TM_conversions::CAST_Int_to_L_MESSAGE#1)/ */
  CAST_Int_to_L_MESSAGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_MESSAGE_1);
  /* _L34=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_TRAIN_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_RBC_conversions::C_header_to_M002/
  @1: (TM_conversions::CAST_Int_to_Q_SCALE#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_header_to_M002_TM_RBC_conversions.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

