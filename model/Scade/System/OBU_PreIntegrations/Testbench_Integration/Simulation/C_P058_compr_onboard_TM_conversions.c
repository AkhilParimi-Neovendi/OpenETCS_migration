/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P058_compr_onboard/ */
void C_P058_compr_onboard_TM_conversions(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P058_compr_onboard_TM_conversions *outC)
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
  static kcg_bool noname_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR _12_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool _13_error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool _14_error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR _15_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool _16_error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR _17_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool _18_error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR _19_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool _20_error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR _21_q_dir_partial_CAST_Int_to_Q_DIR_1;
  static kcg_bool noname_CAST_Int_to_NID_PACKET_1;
  static kcg_bool _22_noname_CAST_Int_to_NID_PACKET_1;
  static MetadataElement_T_Common_Types_Pkg noname;
  static kcg_int64 _23_noname;

  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int64_8(&outC->_L1, (array_int64_8 *) &outC->_L9[0]);
  outC->_L34 = outC->_L1[3];
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1 = outC->_L34;
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
  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->_L38 = outC->_L1[7];
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = outC->_L38;
  outC->_L1_CAST_Int_to_N_ITER_1 = outC->n_iter_int_CAST_Int_to_N_ITER_1;
  outC->_L10_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 <
    outC->_L11_CAST_Int_to_N_ITER_1;
  noname_CAST_Int_to_N_ITER_1 = outC->_L10_CAST_Int_to_N_ITER_1;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int64(31);
  outC->_L12_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 >
    outC->_L9_CAST_Int_to_N_ITER_1;
  _11_noname_CAST_Int_to_N_ITER_1 = outC->_L12_CAST_Int_to_N_ITER_1;
  outC->n_iter_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1;
  outC->_L32 = outC->_L1[1];
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L32;
  outC->_L12_CAST_Int_to_Q_DIR_1 = outC->q_dir_int_CAST_Int_to_Q_DIR_1;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = outC->_L12_CAST_Int_to_Q_DIR_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1 =
    outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* @3/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1) {
    outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_false;
    _20_error_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _21_q_dir_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _21_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _20_error_partial_CAST_Int_to_Q_DIR_1;
  }
  else {
    outC->else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 =
      outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_reverse_TM_conversions;
    /* @3/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_DIR_1_IfBlock1) {
      outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 =
        ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      _19_q_dir_partial_CAST_Int_to_Q_DIR_1 = q_dir_partial_CAST_Int_to_Q_DIR_1;
      _18_error_partial_CAST_Int_to_Q_DIR_1 = error_partial_CAST_Int_to_Q_DIR_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1 =
        outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_both_TM_conversions;
      /* @3/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = kcg_false;
        _16_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        _17_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        _12_q_dir_partial_CAST_Int_to_Q_DIR_1 = _17_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _13_error_partial_CAST_Int_to_Q_DIR_1 = _16_error_partial_CAST_Int_to_Q_DIR_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = kcg_true;
        _14_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _15_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _12_q_dir_partial_CAST_Int_to_Q_DIR_1 = _15_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _13_error_partial_CAST_Int_to_Q_DIR_1 = _14_error_partial_CAST_Int_to_Q_DIR_1;
      }
      _19_q_dir_partial_CAST_Int_to_Q_DIR_1 = _12_q_dir_partial_CAST_Int_to_Q_DIR_1;
      _18_error_partial_CAST_Int_to_Q_DIR_1 = _13_error_partial_CAST_Int_to_Q_DIR_1;
    }
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _19_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _18_error_partial_CAST_Int_to_Q_DIR_1;
  }
  outC->_L13_CAST_Int_to_Q_DIR_1 = outC->error_CAST_Int_to_Q_DIR_1;
  noname_CAST_Int_to_Q_DIR_1 = outC->_L13_CAST_Int_to_Q_DIR_1;
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L31 = outC->_L1[0];
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = outC->_L31;
  outC->_L1_CAST_Int_to_NID_PACKET_1 =
    outC->nid_packet_int_CAST_Int_to_NID_PACKET_1;
  outC->_L4_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 <
    outC->_L5_CAST_Int_to_NID_PACKET_1;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(256);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 >
    outC->_L3_CAST_Int_to_NID_PACKET_1;
  noname_CAST_Int_to_NID_PACKET_1 = outC->_L2_CAST_Int_to_NID_PACKET_1;
  _22_noname_CAST_Int_to_NID_PACKET_1 = outC->_L4_CAST_Int_to_NID_PACKET_1;
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1;
  outC->_L33 = outC->_L1[2];
  _23_noname = outC->_L33;
  outC->_L37 = outC->_L1[6];
  /* _L41=(TM_conversions::CAST_Int_to_M_LOC#1)/ */
  CAST_Int_to_M_LOC_TM_conversions(
    outC->_L37,
    &outC->Context_CAST_Int_to_M_LOC_1);
  outC->_L41 = outC->Context_CAST_Int_to_M_LOC_1.m_loc;
  outC->_L36 = outC->_L1[5];
  /* _L40=(TM_conversions::CAST_Int_to_D_CYCLOC#2)/ */
  CAST_Int_to_D_CYCLOC_TM_conversions(
    outC->_L36,
    &outC->Context_CAST_Int_to_D_CYCLOC_2);
  outC->_L40 = outC->Context_CAST_Int_to_D_CYCLOC_2.d_cycloc;
  outC->_L35 = outC->_L1[4];
  /* _L39=(TM_conversions::CAST_Int_to_T_CYCLOC#1)/ */
  CAST_Int_to_T_CYCLOC_TM_conversions(
    outC->_L35,
    &outC->Context_CAST_Int_to_T_CYCLOC_1);
  outC->_L39 = outC->Context_CAST_Int_to_T_CYCLOC_1.t_cycloc;
  outC->_L21 = kcg_lit_int64(58);
  outC->_L12 = outC->nid_packet_CAST_Int_to_NID_PACKET_1;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  kcg_copy_array_int64_64(&outC->_L13, (array_int64_64 *) &outC->_L9[8]);
  outC->_L11 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L4 = outC->q_scale_CAST_Int_to_Q_SCALE_1;
  outC->_L7 = outC->n_iter_CAST_Int_to_N_ITER_1;
  /* _L5=(TM_lib_internal::C_P058_unflatten_sections#1)/ */
  C_P058_unflatten_sections_TM_lib_internal(
    outC->_L22,
    outC->_L7,
    &outC->_L13,
    &outC->Context_C_P058_unflatten_sections_1);
  kcg_copy_P058_OBU_sectionlist_enum_T_TM(
    &outC->_L5,
    &outC->Context_C_P058_unflatten_sections_1.sections);
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.q_scale = outC->_L4;
  outC->_L10.t_cycloc = outC->_L39;
  outC->_L10.d_cycloc = outC->_L40;
  outC->_L10.m_loc = outC->_L41;
  outC->_L10.n_iter = outC->_L7;
  kcg_copy_P058_OBU_sectionlist_enum_T_TM(&outC->_L10.sections, &outC->_L5);
  kcg_copy_P058_OBU_T_TM(&outC->P058_onboard, &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P058_compr_onboard_init_TM_conversions(
  outC_C_P058_compr_onboard_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L41 = M_LOC_Now;
  outC->_L40 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L34 = kcg_lit_int64(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20.nid_packet = kcg_lit_int64(0);
  outC->_L20.q_dir = Q_DIR_Reverse;
  outC->_L20.valid = kcg_true;
  outC->_L20.startAddress = kcg_lit_int64(0);
  outC->_L20.endAddress = kcg_lit_int64(0);
  for (idx = 0; idx < 8; idx++) {
    outC->_L1[idx] = kcg_lit_int64(0);
  }
  outC->_L4 = Q_SCALE_10_cm_scale;
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L5[idx1].valid = kcg_true;
    outC->_L5[idx1].d_loc = kcg_lit_int64(0);
    outC->_L5[idx1].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L7 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L9[idx2] = kcg_lit_int64(0);
  }
  outC->_L10.valid = kcg_true;
  outC->_L10.q_dir = Q_DIR_Reverse;
  outC->_L10.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.t_cycloc = kcg_lit_int64(0);
  outC->_L10.d_cycloc = kcg_lit_int64(0);
  outC->_L10.m_loc = M_LOC_Now;
  outC->_L10.n_iter = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L10.sections[idx3].valid = kcg_true;
    outC->_L10.sections[idx3].d_loc = kcg_lit_int64(0);
    outC->_L10.sections[idx3].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L11 = Q_DIR_Reverse;
  outC->_L12 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 64; idx4++) {
    outC->_L13[idx4] = kcg_lit_int64(0);
  }
  outC->_L1_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L4_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
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
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = kcg_lit_int64(0);
  outC->_L13_CAST_Int_to_Q_DIR_1 = kcg_true;
  outC->_L12_CAST_Int_to_Q_DIR_1 = kcg_lit_int64(0);
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = kcg_lit_int64(0);
  outC->q_dir_CAST_Int_to_Q_DIR_1 = Q_DIR_Reverse;
  outC->_L1_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->_L12_CAST_Int_to_N_ITER_1 = kcg_true;
  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->_L10_CAST_Int_to_N_ITER_1 = kcg_true;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->n_iter_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
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
  outC->P058_onboard.valid = kcg_true;
  outC->P058_onboard.q_dir = Q_DIR_Reverse;
  outC->P058_onboard.q_scale = Q_SCALE_10_cm_scale;
  outC->P058_onboard.t_cycloc = kcg_lit_int64(0);
  outC->P058_onboard.d_cycloc = kcg_lit_int64(0);
  outC->P058_onboard.m_loc = M_LOC_Now;
  outC->P058_onboard.n_iter = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->P058_onboard.sections[idx5].valid = kcg_true;
    outC->P058_onboard.sections[idx5].d_loc = kcg_lit_int64(0);
    outC->P058_onboard.sections[idx5].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  /* _L5=(TM_lib_internal::C_P058_unflatten_sections#1)/ */
  C_P058_unflatten_sections_init_TM_lib_internal(
    &outC->Context_C_P058_unflatten_sections_1);
  /* _L39=(TM_conversions::CAST_Int_to_T_CYCLOC#1)/ */
  CAST_Int_to_T_CYCLOC_init_TM_conversions(
    &outC->Context_CAST_Int_to_T_CYCLOC_1);
  /* _L40=(TM_conversions::CAST_Int_to_D_CYCLOC#2)/ */
  CAST_Int_to_D_CYCLOC_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_CYCLOC_2);
  /* _L41=(TM_conversions::CAST_Int_to_M_LOC#1)/ */
  CAST_Int_to_M_LOC_init_TM_conversions(&outC->Context_CAST_Int_to_M_LOC_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P058_compr_onboard_reset_TM_conversions(
  outC_C_P058_compr_onboard_TM_conversions *outC)
{
  /* _L5=(TM_lib_internal::C_P058_unflatten_sections#1)/ */
  C_P058_unflatten_sections_reset_TM_lib_internal(
    &outC->Context_C_P058_unflatten_sections_1);
  /* _L39=(TM_conversions::CAST_Int_to_T_CYCLOC#1)/ */
  CAST_Int_to_T_CYCLOC_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_CYCLOC_1);
  /* _L40=(TM_conversions::CAST_Int_to_D_CYCLOC#2)/ */
  CAST_Int_to_D_CYCLOC_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_CYCLOC_2);
  /* _L41=(TM_conversions::CAST_Int_to_M_LOC#1)/ */
  CAST_Int_to_M_LOC_reset_TM_conversions(&outC->Context_CAST_Int_to_M_LOC_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_conversions::C_P058_compr_onboard/
  @1: (TM_conversions::CAST_Int_to_Q_SCALE#1)
  @3: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P058_compr_onboard_TM_conversions.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

