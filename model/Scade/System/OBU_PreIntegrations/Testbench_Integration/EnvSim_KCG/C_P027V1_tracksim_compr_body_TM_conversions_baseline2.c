/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_body_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ */
void C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
  /* P027V1_from_track/ */
  P027V1_trackside_int_T_TM_baseline2 *P027V1_from_track,
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_bool noname_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _2_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _3_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _4_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _5_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _6_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _7_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _8_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _9_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _10_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _11_q_dir_partial_CAST_Int_to_Q_DIR_1;

  kcg_copy_P027V1_trackside_int_T_TM_baseline2(&outC->_L1, P027V1_from_track);
  outC->_L215 = outC->_L1.Q_DIR;
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L215;
  outC->_L12_CAST_Int_to_Q_DIR_1 = outC->q_dir_int_CAST_Int_to_Q_DIR_1;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = outC->_L12_CAST_Int_to_Q_DIR_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1 =
    outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* @1/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1) {
    outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_false;
    _10_error_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _11_q_dir_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _11_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _10_error_partial_CAST_Int_to_Q_DIR_1;
  }
  else {
    outC->else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 =
      outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_reverse_TM_conversions;
    /* @1/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_DIR_1_IfBlock1) {
      outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 =
        ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      _9_q_dir_partial_CAST_Int_to_Q_DIR_1 = q_dir_partial_CAST_Int_to_Q_DIR_1;
      _8_error_partial_CAST_Int_to_Q_DIR_1 = error_partial_CAST_Int_to_Q_DIR_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1 =
        outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_both_TM_conversions;
      /* @1/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = kcg_false;
        _6_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        _7_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        _2_q_dir_partial_CAST_Int_to_Q_DIR_1 = _7_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _3_error_partial_CAST_Int_to_Q_DIR_1 = _6_error_partial_CAST_Int_to_Q_DIR_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = kcg_true;
        _4_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _5_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _2_q_dir_partial_CAST_Int_to_Q_DIR_1 = _5_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _3_error_partial_CAST_Int_to_Q_DIR_1 = _4_error_partial_CAST_Int_to_Q_DIR_1;
      }
      _9_q_dir_partial_CAST_Int_to_Q_DIR_1 = _2_q_dir_partial_CAST_Int_to_Q_DIR_1;
      _8_error_partial_CAST_Int_to_Q_DIR_1 = _3_error_partial_CAST_Int_to_Q_DIR_1;
    }
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _9_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _8_error_partial_CAST_Int_to_Q_DIR_1;
  }
  outC->_L13_CAST_Int_to_Q_DIR_1 = outC->error_CAST_Int_to_Q_DIR_1;
  noname_CAST_Int_to_Q_DIR_1 = outC->_L13_CAST_Int_to_Q_DIR_1;
  outC->l_qdir = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L406 = outC->l_qdir;
  outC->q_dir = outC->_L406;
  outC->_L387 = outC->_L1.NID_PACKET;
  /* _L405=(TM_lib_internal::T_Build_Metadata_Packet_ID#3)/ */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    kcg_lit_int32(100),
    kcg_lit_int32(27),
    INT_M_VERSION_1_0_TM,
    &outC->Context_T_Build_Metadata_Packet_ID_3);
  outC->_L405 = outC->Context_T_Build_Metadata_Packet_ID_3.nid_packet_meta;
  outC->meta_first_section = outC->_L405;
  /* _L403=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    kcg_lit_int32(0),
    kcg_lit_int32(27),
    INT_M_VERSION_1_0_TM,
    &outC->Context_T_Build_Metadata_Packet_ID_1);
  outC->_L403 = outC->Context_T_Build_Metadata_Packet_ID_1.nid_packet_meta;
  outC->_L368 = outC->_L1.N_ITER_k;
  outC->n_iter_k = outC->_L368;
  outC->_L400 = outC->n_iter_k;
  outC->n_iter_k_out = outC->_L400;
  outC->_L396 = kcg_lit_int32(6);
  kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(
    &outC->_L367,
    &outC->_L1.SECTIONS_SSP);
  outC->_L218 = outC->_L1.D_STATIC;
  outC->_L219 = outC->_L1.V_STATIC;
  outC->_L371 = outC->_L1.Q_FRONT;
  outC->_L370 = outC->_L1.N_ITER_n;
  kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
    &outC->_L369,
    &outC->_L1.SECTIONS_q_diff);
  outC->_L394.D_STATIC = outC->_L218;
  outC->_L394.V_STATIC = outC->_L219;
  outC->_L394.Q_FRONT = outC->_L371;
  outC->_L394.N_ITER = outC->_L370;
  kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2(
    &outC->_L394.SECTIONS_q_diff,
    &outC->_L369);
  /* _L386/ */
  for (idx = 0; idx < 1; idx++) {
    kcg_copy_P027V1_section_int_T_TM_baseline2(&outC->_L386[idx], &outC->_L394);
  }
  kcg_copy_P027V1_section_int_T_TM_baseline2(&outC->_L385[0], &outC->_L386[0]);
  kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(
    &outC->_L385[1],
    &outC->_L367);
  kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2(
    &outC->P027V1_sections,
    &outC->_L385);
  outC->_L391 = outC->n_iter_k;
  outC->_L336 = kcg_lit_int32(0);
  /* _L209/ */
  for (idx1 = 0; idx1 < 494; idx1++) {
    outC->_L209[idx1] = outC->_L336;
  }
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  outC->_L373[4] = outC->_L391;
  outC->_L373[5] = outC->_L405;
  kcg_copy_array_int32_6(&outC->_L383[0], &outC->_L373);
  kcg_copy_array_int32_494(&outC->_L383[6], &outC->_L209);
  outC->_L214 = outC->_L1.valid;
  outC->_L213 = kcg_lit_int32(1);
  outC->_L212 = outC->_L396 - outC->_L213;
  outC->_L206 = kcg_lit_int32(0);
  outC->_L204.nid_packet = outC->_L403;
  outC->_L204.q_dir = outC->l_qdir;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P027V1_body_compressed,
    &outC->_L383);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P027V1_tracksim_compr_body_init_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 *outC)
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

  outC->_L406 = Q_DIR_Reverse;
  outC->_L405 = kcg_lit_int32(0);
  outC->_L403 = kcg_lit_int32(0);
  outC->_L400 = kcg_lit_int32(0);
  outC->_L396 = kcg_lit_int32(0);
  outC->_L394.D_STATIC = kcg_lit_int32(0);
  outC->_L394.V_STATIC = kcg_lit_int32(0);
  outC->_L394.Q_FRONT = kcg_lit_int32(0);
  outC->_L394.N_ITER = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L394.SECTIONS_q_diff[idx].NC_DIFF = kcg_lit_int32(0);
    outC->_L394.SECTIONS_q_diff[idx].V_DIFF = kcg_lit_int32(0);
  }
  outC->_L391 = kcg_lit_int32(0);
  outC->_L387 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L385[idx2].D_STATIC = kcg_lit_int32(0);
    outC->_L385[idx2].V_STATIC = kcg_lit_int32(0);
    outC->_L385[idx2].Q_FRONT = kcg_lit_int32(0);
    outC->_L385[idx2].N_ITER = kcg_lit_int32(0);
    for (idx1 = 0; idx1 < 32; idx1++) {
      outC->_L385[idx2].SECTIONS_q_diff[idx1].NC_DIFF = kcg_lit_int32(0);
      outC->_L385[idx2].SECTIONS_q_diff[idx1].V_DIFF = kcg_lit_int32(0);
    }
  }
  for (idx4 = 0; idx4 < 1; idx4++) {
    outC->_L386[idx4].D_STATIC = kcg_lit_int32(0);
    outC->_L386[idx4].V_STATIC = kcg_lit_int32(0);
    outC->_L386[idx4].Q_FRONT = kcg_lit_int32(0);
    outC->_L386[idx4].N_ITER = kcg_lit_int32(0);
    for (idx3 = 0; idx3 < 32; idx3++) {
      outC->_L386[idx4].SECTIONS_q_diff[idx3].NC_DIFF = kcg_lit_int32(0);
      outC->_L386[idx4].SECTIONS_q_diff[idx3].V_DIFF = kcg_lit_int32(0);
    }
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L383[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 6; idx6++) {
    outC->_L373[idx6] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L367[idx8].D_STATIC = kcg_lit_int32(0);
    outC->_L367[idx8].V_STATIC = kcg_lit_int32(0);
    outC->_L367[idx8].Q_FRONT = kcg_lit_int32(0);
    outC->_L367[idx8].N_ITER = kcg_lit_int32(0);
    for (idx7 = 0; idx7 < 32; idx7++) {
      outC->_L367[idx8].SECTIONS_q_diff[idx7].NC_DIFF = kcg_lit_int32(0);
      outC->_L367[idx8].SECTIONS_q_diff[idx7].V_DIFF = kcg_lit_int32(0);
    }
  }
  outC->_L368 = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L369[idx9].NC_DIFF = kcg_lit_int32(0);
    outC->_L369[idx9].V_DIFF = kcg_lit_int32(0);
  }
  outC->_L370 = kcg_lit_int32(0);
  outC->_L371 = kcg_lit_int32(0);
  outC->_L214 = kcg_true;
  outC->_L215 = kcg_lit_int32(0);
  outC->_L216 = kcg_lit_int32(0);
  outC->_L217 = kcg_lit_int32(0);
  outC->_L218 = kcg_lit_int32(0);
  outC->_L219 = kcg_lit_int32(0);
  outC->_L336 = kcg_lit_int32(0);
  outC->_L213 = kcg_lit_int32(0);
  outC->_L212 = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 494; idx10++) {
    outC->_L209[idx10] = kcg_lit_int32(0);
  }
  outC->_L206 = kcg_lit_int32(0);
  outC->_L204.nid_packet = kcg_lit_int32(0);
  outC->_L204.q_dir = Q_DIR_Reverse;
  outC->_L204.valid = kcg_true;
  outC->_L204.startAddress = kcg_lit_int32(0);
  outC->_L204.endAddress = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.Q_DIR = kcg_lit_int32(0);
  outC->_L1.L_PACKET = kcg_lit_int32(0);
  outC->_L1.Q_SCALE = kcg_lit_int32(0);
  outC->_L1.D_STATIC = kcg_lit_int32(0);
  outC->_L1.V_STATIC = kcg_lit_int32(0);
  outC->_L1.Q_FRONT = kcg_lit_int32(0);
  outC->_L1.N_ITER_n = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 32; idx11++) {
    outC->_L1.SECTIONS_q_diff[idx11].NC_DIFF = kcg_lit_int32(0);
    outC->_L1.SECTIONS_q_diff[idx11].V_DIFF = kcg_lit_int32(0);
  }
  outC->_L1.N_ITER_k = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 32; idx13++) {
    outC->_L1.SECTIONS_SSP[idx13].D_STATIC = kcg_lit_int32(0);
    outC->_L1.SECTIONS_SSP[idx13].V_STATIC = kcg_lit_int32(0);
    outC->_L1.SECTIONS_SSP[idx13].Q_FRONT = kcg_lit_int32(0);
    outC->_L1.SECTIONS_SSP[idx13].N_ITER = kcg_lit_int32(0);
    for (idx12 = 0; idx12 < 32; idx12++) {
      outC->_L1.SECTIONS_SSP[idx13].SECTIONS_q_diff[idx12].NC_DIFF = kcg_lit_int32(0);
      outC->_L1.SECTIONS_SSP[idx13].SECTIONS_q_diff[idx12].V_DIFF = kcg_lit_int32(0);
    }
  }
  outC->l_qdir = Q_DIR_Reverse;
  outC->n_iter_k = kcg_lit_int32(0);
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
  outC->q_dir = Q_DIR_Reverse;
  outC->meta_first_section = kcg_lit_int32(0);
  outC->n_iter_k_out = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->P027V1_sections[idx15].D_STATIC = kcg_lit_int32(0);
    outC->P027V1_sections[idx15].V_STATIC = kcg_lit_int32(0);
    outC->P027V1_sections[idx15].Q_FRONT = kcg_lit_int32(0);
    outC->P027V1_sections[idx15].N_ITER = kcg_lit_int32(0);
    for (idx14 = 0; idx14 < 32; idx14++) {
      outC->P027V1_sections[idx15].SECTIONS_q_diff[idx14].NC_DIFF = kcg_lit_int32(0);
      outC->P027V1_sections[idx15].SECTIONS_q_diff[idx14].V_DIFF = kcg_lit_int32(0);
    }
  }
  for (idx16 = 0; idx16 < 500; idx16++) {
    outC->P027V1_body_compressed[idx16] = kcg_lit_int32(0);
  }
  outC->Header.nid_packet = kcg_lit_int32(0);
  outC->Header.q_dir = Q_DIR_Reverse;
  outC->Header.valid = kcg_true;
  outC->Header.startAddress = kcg_lit_int32(0);
  outC->Header.endAddress = kcg_lit_int32(0);
  /* _L403=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_init_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_1);
  /* _L405=(TM_lib_internal::T_Build_Metadata_Packet_ID#3)/ */
  T_Build_Metadata_Packet_ID_init_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_3);
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P027V1_tracksim_compr_body_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 *outC)
{
  /* _L403=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_1);
  /* _L405=(TM_lib_internal::T_Build_Metadata_Packet_ID#3)/ */
  T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_3);
}

/*
  Expanded instances for: TM_conversions_baseline2::C_P027V1_tracksim_compr_body/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_tracksim_compr_body_TM_conversions_baseline2.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

