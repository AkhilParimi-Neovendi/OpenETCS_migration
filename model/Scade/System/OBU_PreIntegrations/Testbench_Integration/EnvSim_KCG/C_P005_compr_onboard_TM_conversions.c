/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P005_compr_onboard/ */
void C_P005_compr_onboard_TM_conversions(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P005_compr_onboard_TM_conversions *outC)
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
  static kcg_bool noname_CAST_Int_to_N_ITER_1;
  static kcg_bool _11_noname_CAST_Int_to_N_ITER_1;
  static kcg_bool noname_CAST_Int_to_L_PACKET_1;
  static kcg_bool _12_noname_CAST_Int_to_L_PACKET_1;
  static kcg_bool noname_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR _13_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool _14_error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool _15_error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR _16_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool _17_error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR _18_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool _19_error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR _20_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool _21_error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR _22_q_dir_partial_CAST_Int_to_Q_DIR_1;
  static kcg_bool noname_CAST_Int_to_NID_PACKET_1;
  static kcg_bool _23_noname_CAST_Int_to_NID_PACKET_1;
  static MetadataElement_T_Common_Types_Pkg noname;

  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int32_3(&outC->_L6, (array_int32_3 *) &outC->_L9[1]);
  outC->_L16 = outC->_L6[2];
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1 = outC->_L16;
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
  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  kcg_copy_P044_other_data_TM_TrainToTrack(
    &outC->_L2,
    (P044_other_data_TM_TrainToTrack *) &outC->_L9[4]);
  outC->_L17 = outC->_L2[0];
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = outC->_L17;
  outC->_L1_CAST_Int_to_N_ITER_1 = outC->n_iter_int_CAST_Int_to_N_ITER_1;
  outC->_L10_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 <
    outC->_L11_CAST_Int_to_N_ITER_1;
  noname_CAST_Int_to_N_ITER_1 = outC->_L10_CAST_Int_to_N_ITER_1;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int32(31);
  outC->_L12_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 >
    outC->_L9_CAST_Int_to_N_ITER_1;
  _11_noname_CAST_Int_to_N_ITER_1 = outC->_L12_CAST_Int_to_N_ITER_1;
  outC->n_iter_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1;
  outC->_L13_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(8191);
  outC->_L12_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L15 = outC->_L6[1];
  outC->l_packet_int_CAST_Int_to_L_PACKET_1 = outC->_L15;
  outC->_L1_CAST_Int_to_L_PACKET_1 = outC->l_packet_int_CAST_Int_to_L_PACKET_1;
  outC->l_packet_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1;
  outC->_L9_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1 >
    outC->_L13_CAST_Int_to_L_PACKET_1;
  outC->_L8_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1 <
    outC->_L12_CAST_Int_to_L_PACKET_1;
  noname_CAST_Int_to_L_PACKET_1 = outC->_L8_CAST_Int_to_L_PACKET_1;
  _12_noname_CAST_Int_to_L_PACKET_1 = outC->_L9_CAST_Int_to_L_PACKET_1;
  outC->_L14 = outC->_L6[0];
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L14;
  outC->_L12_CAST_Int_to_Q_DIR_1 = outC->q_dir_int_CAST_Int_to_Q_DIR_1;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = outC->_L12_CAST_Int_to_Q_DIR_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1 =
    outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* @4/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1) {
    outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_false;
    _21_error_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _22_q_dir_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _22_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _21_error_partial_CAST_Int_to_Q_DIR_1;
  }
  else {
    outC->else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 =
      outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_reverse_TM_conversions;
    /* @4/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_DIR_1_IfBlock1) {
      outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 =
        ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      _20_q_dir_partial_CAST_Int_to_Q_DIR_1 = q_dir_partial_CAST_Int_to_Q_DIR_1;
      _19_error_partial_CAST_Int_to_Q_DIR_1 = error_partial_CAST_Int_to_Q_DIR_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1 =
        outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_both_TM_conversions;
      /* @4/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = kcg_false;
        _17_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        _18_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        _13_q_dir_partial_CAST_Int_to_Q_DIR_1 = _18_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _14_error_partial_CAST_Int_to_Q_DIR_1 = _17_error_partial_CAST_Int_to_Q_DIR_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = kcg_true;
        _15_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _16_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _13_q_dir_partial_CAST_Int_to_Q_DIR_1 = _16_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _14_error_partial_CAST_Int_to_Q_DIR_1 = _15_error_partial_CAST_Int_to_Q_DIR_1;
      }
      _20_q_dir_partial_CAST_Int_to_Q_DIR_1 = _13_q_dir_partial_CAST_Int_to_Q_DIR_1;
      _19_error_partial_CAST_Int_to_Q_DIR_1 = _14_error_partial_CAST_Int_to_Q_DIR_1;
    }
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _20_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _19_error_partial_CAST_Int_to_Q_DIR_1;
  }
  outC->_L13_CAST_Int_to_Q_DIR_1 = outC->error_CAST_Int_to_Q_DIR_1;
  noname_CAST_Int_to_Q_DIR_1 = outC->_L13_CAST_Int_to_Q_DIR_1;
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  kcg_copy_P044_other_data_TM_TrainToTrack(
    &outC->_L1,
    (P044_other_data_TM_TrainToTrack *) &outC->_L9[0]);
  outC->_L18 = outC->_L1[0];
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = outC->_L18;
  outC->_L1_CAST_Int_to_NID_PACKET_1 =
    outC->nid_packet_int_CAST_Int_to_NID_PACKET_1;
  outC->_L4_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 <
    outC->_L5_CAST_Int_to_NID_PACKET_1;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(256);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 >
    outC->_L3_CAST_Int_to_NID_PACKET_1;
  noname_CAST_Int_to_NID_PACKET_1 = outC->_L2_CAST_Int_to_NID_PACKET_1;
  _23_noname_CAST_Int_to_NID_PACKET_1 = outC->_L4_CAST_Int_to_NID_PACKET_1;
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1;
  outC->_L21 = kcg_lit_int32(5);
  outC->_L12 = outC->nid_packet_CAST_Int_to_NID_PACKET_1;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  kcg_copy_P005_sections_array_flat_T_TM(
    &outC->_L13,
    (P005_sections_array_flat_T_TM *) &outC->_L9[5]);
  outC->_L11 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L8 = outC->l_packet_CAST_Int_to_L_PACKET_1;
  outC->_L4 = outC->q_scale_CAST_Int_to_Q_SCALE_1;
  outC->_L7 = outC->n_iter_CAST_Int_to_N_ITER_1;
  /* _L5=(TM_lib_internal::C_P005_unflatten_sections#1)/ */
  C_P005_unflatten_sections_TM_lib_internal(
    outC->_L22,
    outC->_L7,
    &outC->_L13,
    &outC->Context_C_P005_unflatten_sections_1);
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(
    &outC->_L5,
    &outC->Context_C_P005_unflatten_sections_1.sections);
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.l_packet = outC->_L8;
  outC->_L10.q_scale = outC->_L4;
  outC->_L10.n_iter = outC->_L7;
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(&outC->_L10.sections, &outC->_L5);
  kcg_copy_P005_OBU_T_TM(&outC->P005_onboard, &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P005_compr_onboard_init_TM_conversions(
  outC_C_P005_compr_onboard_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20.nid_packet = kcg_lit_int32(0);
  outC->_L20.q_dir = Q_DIR_Reverse;
  outC->_L20.valid = kcg_true;
  outC->_L20.startAddress = kcg_lit_int32(0);
  outC->_L20.endAddress = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  for (idx = 0; idx < 1; idx++) {
    outC->_L1[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L2[idx1] = kcg_lit_int32(0);
  }
  outC->_L4 = Q_SCALE_10_cm_scale;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L5[idx2].valid = kcg_true;
    outC->_L5[idx2].d_link = kcg_lit_int32(0);
    outC->_L5[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5[idx2].nid_c = kcg_lit_int32(0);
    outC->_L5[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L5[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5[idx2].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L5[idx2].q_locacc = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->_L6[idx3] = kcg_lit_int32(0);
  }
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L9[idx4] = kcg_lit_int32(0);
  }
  outC->_L10.valid = kcg_true;
  outC->_L10.q_dir = Q_DIR_Reverse;
  outC->_L10.l_packet = kcg_lit_int32(0);
  outC->_L10.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.n_iter = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L10.sections[idx5].valid = kcg_true;
    outC->_L10.sections[idx5].d_link = kcg_lit_int32(0);
    outC->_L10.sections[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L10.sections[idx5].nid_c = kcg_lit_int32(0);
    outC->_L10.sections[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L10.sections[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L10.sections[idx5].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L10.sections[idx5].q_locacc = kcg_lit_int32(0);
  }
  outC->_L11 = Q_DIR_Reverse;
  outC->_L12 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 95; idx6++) {
    outC->_L13[idx6] = kcg_lit_int32(0);
  }
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L1_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L4_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_true;
  outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = Q_DIR_Reverse;
  outC->else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 = kcg_true;
  outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = Q_DIR_Reverse;
  outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = Q_DIR_Reverse;
  outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1 = kcg_true;
  outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 = Q_DIR_Reverse;
  outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 = kcg_true;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1 = kcg_true;
  outC->error_CAST_Int_to_Q_DIR_1 = kcg_true;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = kcg_lit_int32(0);
  outC->_L13_CAST_Int_to_Q_DIR_1 = kcg_true;
  outC->_L12_CAST_Int_to_Q_DIR_1 = kcg_lit_int32(0);
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = kcg_lit_int32(0);
  outC->q_dir_CAST_Int_to_Q_DIR_1 = Q_DIR_Reverse;
  outC->_L1_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L9_CAST_Int_to_L_PACKET_1 = kcg_true;
  outC->_L8_CAST_Int_to_L_PACKET_1 = kcg_true;
  outC->_L12_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L13_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->l_packet_int_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->l_packet_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L1_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->_L12_CAST_Int_to_N_ITER_1 = kcg_true;
  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->_L10_CAST_Int_to_N_ITER_1 = kcg_true;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->n_iter_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
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
  outC->q_scale_in_CAST_Int_to_Q_SCALE_1 = kcg_lit_int32(0);
  outC->error_CAST_Int_to_Q_SCALE_1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_SCALE_1 = kcg_lit_int32(0);
  outC->_L4_CAST_Int_to_Q_SCALE_1 = kcg_true;
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1 = kcg_lit_int32(0);
  outC->q_scale_CAST_Int_to_Q_SCALE_1 = Q_SCALE_10_cm_scale;
  outC->P005_onboard.valid = kcg_true;
  outC->P005_onboard.q_dir = Q_DIR_Reverse;
  outC->P005_onboard.l_packet = kcg_lit_int32(0);
  outC->P005_onboard.q_scale = Q_SCALE_10_cm_scale;
  outC->P005_onboard.n_iter = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->P005_onboard.sections[idx7].valid = kcg_true;
    outC->P005_onboard.sections[idx7].d_link = kcg_lit_int32(0);
    outC->P005_onboard.sections[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->P005_onboard.sections[idx7].nid_c = kcg_lit_int32(0);
    outC->P005_onboard.sections[idx7].nid_bg = kcg_lit_int32(0);
    outC->P005_onboard.sections[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->P005_onboard.sections[idx7].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->P005_onboard.sections[idx7].q_locacc = kcg_lit_int32(0);
  }
  /* _L5=(TM_lib_internal::C_P005_unflatten_sections#1)/ */
  C_P005_unflatten_sections_init_TM_lib_internal(
    &outC->Context_C_P005_unflatten_sections_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P005_compr_onboard_reset_TM_conversions(
  outC_C_P005_compr_onboard_TM_conversions *outC)
{
  /* _L5=(TM_lib_internal::C_P005_unflatten_sections#1)/ */
  C_P005_unflatten_sections_reset_TM_lib_internal(
    &outC->Context_C_P005_unflatten_sections_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_conversions::C_P005_compr_onboard/
  @1: (TM_conversions::CAST_Int_to_Q_SCALE#1)
  @4: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P005_compr_onboard_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

