/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P000_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P000/ */
void C_compr_P000_TM_TrainToTrack(
  /* P000_in/ */
  P000_TrainTrack_int_TM_TrainToTrack *P000_in,
  outC_C_compr_P000_TM_TrainToTrack *outC)
{
  kcg_bool noname_CAST_Int_to_NID_PACKET_1;
  kcg_bool _1_noname_CAST_Int_to_NID_PACKET_1;
  kcg_bool noname_CAST_Int_to_L_PACKET_1;
  kcg_bool _2_noname_CAST_Int_to_L_PACKET_1;
  kcg_bool noname_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE _3_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool _4_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool _5_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE _6_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool _7_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE _8_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool _9_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE _10_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool _11_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE _12_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  kcg_int64 noname;

  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  kcg_copy_P000_TrainTrack_int_TM_TrainToTrack(&outC->_L1, P000_in);
  outC->_L2 = outC->_L1[0];
  /* _L88=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_TM_TrainToTrack(
    outC->_L2,
    nid_meta_p000_TM_radio_messages,
    &outC->Context_Decode_NID_PACKET_1);
  outC->_L88 = outC->Context_Decode_NID_PACKET_1.Valid;
  /* _L90=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L2,
    &outC->Context_Filter_Variable_1);
  outC->_L90 = outC->Context_Filter_Variable_1.int_out;
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = outC->_L90;
  outC->_L1_CAST_Int_to_NID_PACKET_1 =
    outC->nid_packet_int_CAST_Int_to_NID_PACKET_1;
  outC->_L4_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 <
    outC->_L5_CAST_Int_to_NID_PACKET_1;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(256);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 >
    outC->_L3_CAST_Int_to_NID_PACKET_1;
  noname_CAST_Int_to_NID_PACKET_1 = outC->_L2_CAST_Int_to_NID_PACKET_1;
  _1_noname_CAST_Int_to_NID_PACKET_1 = outC->_L4_CAST_Int_to_NID_PACKET_1;
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1;
  outC->_L13_CAST_Int_to_L_PACKET_1 = kcg_lit_int64(8191);
  outC->_L12_CAST_Int_to_L_PACKET_1 = kcg_lit_int64(0);
  outC->_L3 = outC->_L1[1];
  /* _L91=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L3,
    &outC->Context_Filter_Variable_2);
  outC->_L91 = outC->Context_Filter_Variable_2.int_out;
  outC->l_packet_int_CAST_Int_to_L_PACKET_1 = outC->_L91;
  outC->_L1_CAST_Int_to_L_PACKET_1 = outC->l_packet_int_CAST_Int_to_L_PACKET_1;
  outC->l_packet_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1;
  outC->_L9_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1 >
    outC->_L13_CAST_Int_to_L_PACKET_1;
  outC->_L8_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1 <
    outC->_L12_CAST_Int_to_L_PACKET_1;
  noname_CAST_Int_to_L_PACKET_1 = outC->_L8_CAST_Int_to_L_PACKET_1;
  _2_noname_CAST_Int_to_L_PACKET_1 = outC->_L9_CAST_Int_to_L_PACKET_1;
  outC->_L4 = outC->_L1[2];
  /* _L92=(TM_TrainToTrack::Filter_Variable#4)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L4,
    &outC->Context_Filter_Variable_4);
  outC->_L92 = outC->Context_Filter_Variable_4.int_out;
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1 = outC->_L92;
  outC->_L2_CAST_Int_to_Q_SCALE_1 = outC->q_scale_int_CAST_Int_to_Q_SCALE_1;
  outC->q_scale_in_CAST_Int_to_Q_SCALE_1 = outC->_L2_CAST_Int_to_Q_SCALE_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1 =
    outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* @3/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_3__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_false;
    _11_error_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_3__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->error_CAST_Int_to_Q_SCALE_1 = _11_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    outC->_1_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 =
      outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_1m_TM_conversions;
    /* @3/IfBlock1:else: */
    if (outC->_1_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _9_error_partial_CAST_Int_to_Q_SCALE_1 = error_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1 =
        outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10m_TM_conversions;
      /* @3/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 = kcg_false;
        _7_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _4_error_partial_CAST_Int_to_Q_SCALE_1 = _7_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 = kcg_true;
        _5_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _4_error_partial_CAST_Int_to_Q_SCALE_1 = _5_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      _9_error_partial_CAST_Int_to_Q_SCALE_1 = _4_error_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->error_CAST_Int_to_Q_SCALE_1 = _9_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L4_CAST_Int_to_Q_SCALE_1 = outC->error_CAST_Int_to_Q_SCALE_1;
  noname_CAST_Int_to_Q_SCALE_1 = outC->_L4_CAST_Int_to_Q_SCALE_1;
  /* @3/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1 =
      ENUM_Q_SCALE_10cm_TM_conversions;
    _12_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _12_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    /* @3/IfBlock1:else: */
    if (outC->_1_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 =
        ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _10_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      /* @3/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_2__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 =
          ENUM_Q_SCALE_10m_TM_conversions;
        _8_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_2__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _3_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _8_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 =
          ENUM_Q_SCALE_10cm_TM_conversions;
        _6_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _3_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _6_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      _10_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        _3_q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _10_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L108 = outC->_L1[16];
  noname = outC->_L108;
  outC->_L6 = outC->_L1[4];
  /* _L105=(TM_TrainToTrack::Filter_Variable#17)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L6,
    &outC->Context_Filter_Variable_17);
  outC->_L105 = outC->Context_Filter_Variable_17.int_out;
  /* _L107=(TM_conversions::CAST_Int_to_D_LRBG#1)/ */
  CAST_Int_to_D_LRBG_TM_conversions(
    outC->_L105,
    &outC->Context_CAST_Int_to_D_LRBG_1);
  outC->_L107 = outC->Context_CAST_Int_to_D_LRBG_1.d_lrbg;
  outC->_L106 = outC->_L1[15];
  /* _L104=(TM_TrainToTrack::Filter_Variable#16)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L106,
    &outC->Context_Filter_Variable_16);
  outC->_L104 = outC->Context_Filter_Variable_16.int_out;
  outC->_L15 = outC->_L1[13];
  /* _L103=(TM_TrainToTrack::Filter_Variable#13)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L15,
    &outC->Context_Filter_Variable_13);
  outC->_L103 = outC->Context_Filter_Variable_13.int_out;
  outC->_L16 = outC->_L1[14];
  /* _L102=(TM_TrainToTrack::Filter_Variable#14)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L16,
    &outC->Context_Filter_Variable_14);
  outC->_L102 = outC->Context_Filter_Variable_14.int_out;
  outC->_L14 = outC->_L1[12];
  /* _L101=(TM_TrainToTrack::Filter_Variable#11)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L14,
    &outC->Context_Filter_Variable_11);
  outC->_L101 = outC->Context_Filter_Variable_11.int_out;
  outC->_L13 = outC->_L1[11];
  /* _L100=(TM_TrainToTrack::Filter_Variable#12)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L13,
    &outC->Context_Filter_Variable_12);
  outC->_L100 = outC->Context_Filter_Variable_12.int_out;
  outC->_L12 = outC->_L1[10];
  /* _L99=(TM_TrainToTrack::Filter_Variable#9)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L12,
    &outC->Context_Filter_Variable_9);
  outC->_L99 = outC->Context_Filter_Variable_9.int_out;
  outC->_L11 = outC->_L1[9];
  /* _L98=(TM_TrainToTrack::Filter_Variable#10)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L11,
    &outC->Context_Filter_Variable_10);
  outC->_L98 = outC->Context_Filter_Variable_10.int_out;
  outC->_L10 = outC->_L1[8];
  /* _L97=(TM_TrainToTrack::Filter_Variable#7)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L10,
    &outC->Context_Filter_Variable_7);
  outC->_L97 = outC->Context_Filter_Variable_7.int_out;
  outC->_L9 = outC->_L1[7];
  /* _L96=(TM_TrainToTrack::Filter_Variable#8)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L9,
    &outC->Context_Filter_Variable_8);
  outC->_L96 = outC->Context_Filter_Variable_8.int_out;
  outC->_L7 = outC->_L1[5];
  /* _L95=(TM_TrainToTrack::Filter_Variable#5)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L7,
    &outC->Context_Filter_Variable_5);
  outC->_L95 = outC->Context_Filter_Variable_5.int_out;
  outC->_L8 = outC->_L1[6];
  /* _L94=(TM_TrainToTrack::Filter_Variable#6)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L8,
    &outC->Context_Filter_Variable_6);
  outC->_L94 = outC->Context_Filter_Variable_6.int_out;
  outC->_L5 = outC->_L1[3];
  /* _L93=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L88,
    outC->_L5,
    &outC->Context_Filter_Variable_3);
  outC->_L93 = outC->Context_Filter_Variable_3.int_out;
  outC->_L69 = outC->nid_packet_CAST_Int_to_NID_PACKET_1;
  outC->_L70 = outC->l_packet_CAST_Int_to_L_PACKET_1;
  outC->_L71 = outC->q_scale_CAST_Int_to_Q_SCALE_1;
  /* _L72=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_TM_conversions(
    outC->_L93,
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  outC->_L72 = outC->Context_CAST_Int_to_NID_LRBG_1.NID_LRBG_out;
  /* _L74=(TM_conversions::CAST_Int_to_Q_DIRLRBG#1)/ */
  CAST_Int_to_Q_DIRLRBG_TM_conversions(
    outC->_L95,
    &outC->Context_CAST_Int_to_Q_DIRLRBG_1);
  outC->_L74 = outC->Context_CAST_Int_to_Q_DIRLRBG_1.q_dirlrbg;
  /* _L75=(TM_conversions::CAST_Int_to_Q_DRLRBG#1)/ */
  CAST_Int_to_Q_DRLRBG_TM_conversions(
    outC->_L94,
    &outC->Context_CAST_Int_to_Q_DRLRBG_1);
  outC->_L75 = outC->Context_CAST_Int_to_Q_DRLRBG_1.q_dlrbg;
  /* _L77=(TM_conversions::CAST_Int_to_L_DOUBTOVER#1)/ */
  CAST_Int_to_L_DOUBTOVER_TM_conversions(
    outC->_L96,
    &outC->Context_CAST_Int_to_L_DOUBTOVER_1);
  outC->_L77 = outC->Context_CAST_Int_to_L_DOUBTOVER_1.l_doubtover;
  /* _L78=(TM_conversions::CAST_Int_to_L_DOUBTUNDER#1)/ */
  CAST_Int_to_L_DOUBTUNDER_TM_conversions(
    outC->_L97,
    &outC->Context_CAST_Int_to_L_DOUBTUNDER_1);
  outC->_L78 = outC->Context_CAST_Int_to_L_DOUBTUNDER_1.l_doubtunder;
  /* _L79=(TM_conversions::CAST_Int_to_Q_LENGTH#1)/ */
  CAST_Int_to_Q_LENGTH_TM_conversions(
    outC->_L98,
    &outC->Context_CAST_Int_to_Q_LENGTH_1);
  outC->_L79 = outC->Context_CAST_Int_to_Q_LENGTH_1.q_length;
  /* _L80=(TM_conversions::CAST_Int_to_L_TRAININT#1)/ */
  CAST_Int_to_L_TRAININT_TM_conversions(
    outC->_L99,
    &outC->Context_CAST_Int_to_L_TRAININT_1);
  outC->_L80 = outC->Context_CAST_Int_to_L_TRAININT_1.l_trainint;
  /* _L81=(TM_conversions::CAST_Int_to_V_TRAIN#1)/ */
  CAST_Int_to_V_TRAIN_TM_conversions(
    outC->_L100,
    &outC->Context_CAST_Int_to_V_TRAIN_1);
  outC->_L81 = outC->Context_CAST_Int_to_V_TRAIN_1.v_train;
  /* _L82=(TM_conversions::CAST_Int_to_Q_DIRTRAIN#1)/ */
  CAST_Int_to_Q_DIRTRAIN_TM_conversions(
    outC->_L101,
    &outC->Context_CAST_Int_to_Q_DIRTRAIN_1);
  outC->_L82 = outC->Context_CAST_Int_to_Q_DIRTRAIN_1.q_dirtrain;
  /* _L83=(TM_conversions::CAST_Int_to_M_MODE#1)/ */
  CAST_Int_to_M_MODE_TM_conversions(
    outC->_L103,
    &outC->Context_CAST_Int_to_M_MODE_1);
  outC->_L83 = outC->Context_CAST_Int_to_M_MODE_1.m_mode;
  /* _L84=(TM_conversions::CAST_Int_to_M_LEVEL#1)/ */
  CAST_Int_to_M_LEVEL_TM_conversions(
    outC->_L102,
    &outC->Context_CAST_Int_to_M_LEVEL_1);
  outC->_L84 = outC->Context_CAST_Int_to_M_LEVEL_1.m_level;
  /* _L85=(TM_conversions::CAST_Int_to_NID_NTC#1)/ */
  CAST_Int_to_NID_NTC_TM_conversions(
    outC->_L104,
    &outC->Context_CAST_Int_to_NID_NTC_1);
  outC->_L85 = outC->Context_CAST_Int_to_NID_NTC_1.nid_ntc;
  outC->_L86.valid = outC->_L88;
  outC->_L86.nid_packet = outC->_L69;
  outC->_L86.l_packet = outC->_L70;
  outC->_L86.q_scale = outC->_L71;
  outC->_L86.nid_lrbg = outC->_L72;
  outC->_L86.d_lrbg = outC->_L107;
  outC->_L86.q_dirlrbg = outC->_L74;
  outC->_L86.q_dlrbg = outC->_L75;
  outC->_L86.l_doubtover = outC->_L77;
  outC->_L86.l_doubtunder = outC->_L78;
  outC->_L86.q_length = outC->_L79;
  outC->_L86.l_trainint = outC->_L80;
  outC->_L86.v_train = outC->_L81;
  outC->_L86.q_dirtrain = outC->_L82;
  outC->_L86.m_mode = outC->_L83;
  outC->_L86.m_level = outC->_L84;
  outC->_L86.nid_ntc = outC->_L85;
  kcg_copy_P000_TM_TrainToTrack(&outC->P000_out, &outC->_L86);
}

#ifndef KCG_USER_DEFINED_INIT
void C_compr_P000_init_TM_TrainToTrack(outC_C_compr_P000_TM_TrainToTrack *outC)
{
  kcg_size idx;

  outC->_L108 = kcg_lit_int64(0);
  outC->_L107 = kcg_lit_int64(0);
  outC->_L106 = kcg_lit_int64(0);
  outC->_L105 = kcg_lit_int64(0);
  outC->_L104 = kcg_lit_int64(0);
  outC->_L102 = kcg_lit_int64(0);
  outC->_L103 = kcg_lit_int64(0);
  outC->_L100 = kcg_lit_int64(0);
  outC->_L101 = kcg_lit_int64(0);
  outC->_L98 = kcg_lit_int64(0);
  outC->_L99 = kcg_lit_int64(0);
  outC->_L96 = kcg_lit_int64(0);
  outC->_L97 = kcg_lit_int64(0);
  outC->_L94 = kcg_lit_int64(0);
  outC->_L95 = kcg_lit_int64(0);
  outC->_L92 = kcg_lit_int64(0);
  outC->_L93 = kcg_lit_int64(0);
  outC->_L91 = kcg_lit_int64(0);
  outC->_L90 = kcg_lit_int64(0);
  outC->_L88 = kcg_true;
  outC->_L86.valid = kcg_true;
  outC->_L86.nid_packet = kcg_lit_int64(0);
  outC->_L86.l_packet = kcg_lit_int64(0);
  outC->_L86.q_scale = Q_SCALE_10_cm_scale;
  outC->_L86.nid_lrbg = kcg_lit_int64(0);
  outC->_L86.d_lrbg = kcg_lit_int64(0);
  outC->_L86.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L86.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L86.l_doubtover = kcg_lit_int64(0);
  outC->_L86.l_doubtunder = kcg_lit_int64(0);
  outC->_L86.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L86.l_trainint = kcg_lit_int64(0);
  outC->_L86.v_train = kcg_lit_int64(0);
  outC->_L86.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L86.m_mode = M_MODE_Full_Supervision;
  outC->_L86.m_level = M_LEVEL_Level_0;
  outC->_L86.nid_ntc = kcg_lit_int64(0);
  outC->_L85 = kcg_lit_int64(0);
  outC->_L84 = M_LEVEL_Level_0;
  outC->_L83 = M_MODE_Full_Supervision;
  outC->_L82 = Q_DIRTRAIN_Reverse;
  outC->_L81 = kcg_lit_int64(0);
  outC->_L80 = kcg_lit_int64(0);
  outC->_L79 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L78 = kcg_lit_int64(0);
  outC->_L77 = kcg_lit_int64(0);
  outC->_L75 = Q_DLRBG_Reverse;
  outC->_L74 = Q_DIRLRBG_Reverse;
  outC->_L72 = kcg_lit_int64(0);
  outC->_L71 = Q_SCALE_10_cm_scale;
  outC->_L70 = kcg_lit_int64(0);
  outC->_L69 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
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
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  for (idx = 0; idx < 17; idx++) {
    outC->_L1[idx] = kcg_lit_int64(0);
  }
  outC->_3__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = Q_SCALE_10_cm_scale;
  outC->_1_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 = kcg_true;
  outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 = kcg_true;
  outC->_2__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 =
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
  outC->_L1_CAST_Int_to_L_PACKET_1 = kcg_lit_int64(0);
  outC->_L9_CAST_Int_to_L_PACKET_1 = kcg_true;
  outC->_L8_CAST_Int_to_L_PACKET_1 = kcg_true;
  outC->_L12_CAST_Int_to_L_PACKET_1 = kcg_lit_int64(0);
  outC->_L13_CAST_Int_to_L_PACKET_1 = kcg_lit_int64(0);
  outC->l_packet_int_CAST_Int_to_L_PACKET_1 = kcg_lit_int64(0);
  outC->l_packet_CAST_Int_to_L_PACKET_1 = kcg_lit_int64(0);
  outC->_L1_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L4_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->P000_out.valid = kcg_true;
  outC->P000_out.nid_packet = kcg_lit_int64(0);
  outC->P000_out.l_packet = kcg_lit_int64(0);
  outC->P000_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P000_out.nid_lrbg = kcg_lit_int64(0);
  outC->P000_out.d_lrbg = kcg_lit_int64(0);
  outC->P000_out.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->P000_out.q_dlrbg = Q_DLRBG_Reverse;
  outC->P000_out.l_doubtover = kcg_lit_int64(0);
  outC->P000_out.l_doubtunder = kcg_lit_int64(0);
  outC->P000_out.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->P000_out.l_trainint = kcg_lit_int64(0);
  outC->P000_out.v_train = kcg_lit_int64(0);
  outC->P000_out.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->P000_out.m_mode = M_MODE_Full_Supervision;
  outC->P000_out.m_level = M_LEVEL_Level_0;
  outC->P000_out.nid_ntc = kcg_lit_int64(0);
  /* _L85=(TM_conversions::CAST_Int_to_NID_NTC#1)/ */
  CAST_Int_to_NID_NTC_init_TM_conversions(&outC->Context_CAST_Int_to_NID_NTC_1);
  /* _L84=(TM_conversions::CAST_Int_to_M_LEVEL#1)/ */
  CAST_Int_to_M_LEVEL_init_TM_conversions(&outC->Context_CAST_Int_to_M_LEVEL_1);
  /* _L83=(TM_conversions::CAST_Int_to_M_MODE#1)/ */
  CAST_Int_to_M_MODE_init_TM_conversions(&outC->Context_CAST_Int_to_M_MODE_1);
  /* _L82=(TM_conversions::CAST_Int_to_Q_DIRTRAIN#1)/ */
  CAST_Int_to_Q_DIRTRAIN_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_DIRTRAIN_1);
  /* _L81=(TM_conversions::CAST_Int_to_V_TRAIN#1)/ */
  CAST_Int_to_V_TRAIN_init_TM_conversions(&outC->Context_CAST_Int_to_V_TRAIN_1);
  /* _L80=(TM_conversions::CAST_Int_to_L_TRAININT#1)/ */
  CAST_Int_to_L_TRAININT_init_TM_conversions(
    &outC->Context_CAST_Int_to_L_TRAININT_1);
  /* _L79=(TM_conversions::CAST_Int_to_Q_LENGTH#1)/ */
  CAST_Int_to_Q_LENGTH_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_LENGTH_1);
  /* _L78=(TM_conversions::CAST_Int_to_L_DOUBTUNDER#1)/ */
  CAST_Int_to_L_DOUBTUNDER_init_TM_conversions(
    &outC->Context_CAST_Int_to_L_DOUBTUNDER_1);
  /* _L77=(TM_conversions::CAST_Int_to_L_DOUBTOVER#1)/ */
  CAST_Int_to_L_DOUBTOVER_init_TM_conversions(
    &outC->Context_CAST_Int_to_L_DOUBTOVER_1);
  /* _L75=(TM_conversions::CAST_Int_to_Q_DRLRBG#1)/ */
  CAST_Int_to_Q_DRLRBG_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_DRLRBG_1);
  /* _L74=(TM_conversions::CAST_Int_to_Q_DIRLRBG#1)/ */
  CAST_Int_to_Q_DIRLRBG_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_DIRLRBG_1);
  /* _L72=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  /* _L93=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_3);
  /* _L94=(TM_TrainToTrack::Filter_Variable#6)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_6);
  /* _L95=(TM_TrainToTrack::Filter_Variable#5)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_5);
  /* _L96=(TM_TrainToTrack::Filter_Variable#8)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_8);
  /* _L97=(TM_TrainToTrack::Filter_Variable#7)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_7);
  /* _L98=(TM_TrainToTrack::Filter_Variable#10)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_10);
  /* _L99=(TM_TrainToTrack::Filter_Variable#9)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_9);
  /* _L100=(TM_TrainToTrack::Filter_Variable#12)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_12);
  /* _L101=(TM_TrainToTrack::Filter_Variable#11)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_11);
  /* _L102=(TM_TrainToTrack::Filter_Variable#14)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_14);
  /* _L103=(TM_TrainToTrack::Filter_Variable#13)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_13);
  /* _L104=(TM_TrainToTrack::Filter_Variable#16)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_16);
  /* _L107=(TM_conversions::CAST_Int_to_D_LRBG#1)/ */
  CAST_Int_to_D_LRBG_init_TM_conversions(&outC->Context_CAST_Int_to_D_LRBG_1);
  /* _L105=(TM_TrainToTrack::Filter_Variable#17)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_17);
  /* _L92=(TM_TrainToTrack::Filter_Variable#4)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_4);
  /* _L91=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_2);
  /* _L90=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_1);
  /* _L88=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_init_TM_TrainToTrack(&outC->Context_Decode_NID_PACKET_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_compr_P000_reset_TM_TrainToTrack(outC_C_compr_P000_TM_TrainToTrack *outC)
{
  /* _L85=(TM_conversions::CAST_Int_to_NID_NTC#1)/ */
  CAST_Int_to_NID_NTC_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_NTC_1);
  /* _L84=(TM_conversions::CAST_Int_to_M_LEVEL#1)/ */
  CAST_Int_to_M_LEVEL_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_LEVEL_1);
  /* _L83=(TM_conversions::CAST_Int_to_M_MODE#1)/ */
  CAST_Int_to_M_MODE_reset_TM_conversions(&outC->Context_CAST_Int_to_M_MODE_1);
  /* _L82=(TM_conversions::CAST_Int_to_Q_DIRTRAIN#1)/ */
  CAST_Int_to_Q_DIRTRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_DIRTRAIN_1);
  /* _L81=(TM_conversions::CAST_Int_to_V_TRAIN#1)/ */
  CAST_Int_to_V_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_TRAIN_1);
  /* _L80=(TM_conversions::CAST_Int_to_L_TRAININT#1)/ */
  CAST_Int_to_L_TRAININT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_TRAININT_1);
  /* _L79=(TM_conversions::CAST_Int_to_Q_LENGTH#1)/ */
  CAST_Int_to_Q_LENGTH_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_LENGTH_1);
  /* _L78=(TM_conversions::CAST_Int_to_L_DOUBTUNDER#1)/ */
  CAST_Int_to_L_DOUBTUNDER_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_DOUBTUNDER_1);
  /* _L77=(TM_conversions::CAST_Int_to_L_DOUBTOVER#1)/ */
  CAST_Int_to_L_DOUBTOVER_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_DOUBTOVER_1);
  /* _L75=(TM_conversions::CAST_Int_to_Q_DRLRBG#1)/ */
  CAST_Int_to_Q_DRLRBG_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_DRLRBG_1);
  /* _L74=(TM_conversions::CAST_Int_to_Q_DIRLRBG#1)/ */
  CAST_Int_to_Q_DIRLRBG_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_DIRLRBG_1);
  /* _L72=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  /* _L93=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_3);
  /* _L94=(TM_TrainToTrack::Filter_Variable#6)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_6);
  /* _L95=(TM_TrainToTrack::Filter_Variable#5)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_5);
  /* _L96=(TM_TrainToTrack::Filter_Variable#8)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_8);
  /* _L97=(TM_TrainToTrack::Filter_Variable#7)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_7);
  /* _L98=(TM_TrainToTrack::Filter_Variable#10)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_10);
  /* _L99=(TM_TrainToTrack::Filter_Variable#9)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_9);
  /* _L100=(TM_TrainToTrack::Filter_Variable#12)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_12);
  /* _L101=(TM_TrainToTrack::Filter_Variable#11)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_11);
  /* _L102=(TM_TrainToTrack::Filter_Variable#14)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_14);
  /* _L103=(TM_TrainToTrack::Filter_Variable#13)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_13);
  /* _L104=(TM_TrainToTrack::Filter_Variable#16)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_16);
  /* _L107=(TM_conversions::CAST_Int_to_D_LRBG#1)/ */
  CAST_Int_to_D_LRBG_reset_TM_conversions(&outC->Context_CAST_Int_to_D_LRBG_1);
  /* _L105=(TM_TrainToTrack::Filter_Variable#17)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_17);
  /* _L92=(TM_TrainToTrack::Filter_Variable#4)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_4);
  /* _L91=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_2);
  /* _L90=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_1);
  /* _L88=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_reset_TM_TrainToTrack(&outC->Context_Decode_NID_PACKET_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_TrainToTrack::C_compr_P000/
  @3: (TM_conversions::CAST_Int_to_Q_SCALE#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_compr_P000_TM_TrainToTrack.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

