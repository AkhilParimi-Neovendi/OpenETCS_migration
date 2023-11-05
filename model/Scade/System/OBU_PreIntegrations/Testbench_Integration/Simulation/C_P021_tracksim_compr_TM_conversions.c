/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P021_tracksim_compr/ */
void C_P021_tracksim_compr_TM_conversions(
  /* P021_from_track/ */
  P021_trackside_int_T_TM *P021_from_track,
  outC_C_P021_tracksim_compr_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_bool noname_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _3_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _4_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _5_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _6_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _7_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _8_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _9_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _10_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _11_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _12_q_dir_partial_CAST_Int_to_Q_DIR_1;

  kcg_copy_P021_trackside_int_T_TM(&outC->_L1, P021_from_track);
  outC->_L215 = outC->_L1.Q_DIR;
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L215;
  outC->_L12_CAST_Int_to_Q_DIR_1 = outC->q_dir_int_CAST_Int_to_Q_DIR_1;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = outC->_L12_CAST_Int_to_Q_DIR_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1 =
    outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* @1/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1) {
    outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_false;
    _11_error_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _12_q_dir_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _12_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _11_error_partial_CAST_Int_to_Q_DIR_1;
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
      _10_q_dir_partial_CAST_Int_to_Q_DIR_1 = q_dir_partial_CAST_Int_to_Q_DIR_1;
      _9_error_partial_CAST_Int_to_Q_DIR_1 = error_partial_CAST_Int_to_Q_DIR_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1 =
        outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_both_TM_conversions;
      /* @1/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = kcg_false;
        _7_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        _8_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        _3_q_dir_partial_CAST_Int_to_Q_DIR_1 = _8_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _4_error_partial_CAST_Int_to_Q_DIR_1 = _7_error_partial_CAST_Int_to_Q_DIR_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = kcg_true;
        _5_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _6_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _3_q_dir_partial_CAST_Int_to_Q_DIR_1 = _6_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _4_error_partial_CAST_Int_to_Q_DIR_1 = _5_error_partial_CAST_Int_to_Q_DIR_1;
      }
      _10_q_dir_partial_CAST_Int_to_Q_DIR_1 = _3_q_dir_partial_CAST_Int_to_Q_DIR_1;
      _9_error_partial_CAST_Int_to_Q_DIR_1 = _4_error_partial_CAST_Int_to_Q_DIR_1;
    }
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _10_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _9_error_partial_CAST_Int_to_Q_DIR_1;
  }
  outC->_L13_CAST_Int_to_Q_DIR_1 = outC->error_CAST_Int_to_Q_DIR_1;
  noname_CAST_Int_to_Q_DIR_1 = outC->_L13_CAST_Int_to_Q_DIR_1;
  outC->_L387 = outC->_L1.NID_PACKET;
  /* _L388=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    kcg_lit_int32(0),
    kcg_lit_int32(21),
    INT_M_VERSION_2_0_TM,
    &outC->Context_T_Build_Metadata_Packet_ID_1);
  outC->_L388 = outC->Context_T_Build_Metadata_Packet_ID_1.nid_packet_meta;
  outC->_L218 = outC->_L1.D_GRADIENT;
  outC->_L219 = outC->_L1.Q_GDIR;
  outC->_L371 = outC->_L1.G_A;
  outC->_L375.D_GRADIENT = outC->_L218;
  outC->_L375.Q_GDIR = outC->_L219;
  outC->_L375.G_A = outC->_L371;
  /* _L386/ */
  for (idx = 0; idx < 1; idx++) {
    kcg_copy_P021_section_int_T_TM(&outC->_L386[idx], &outC->_L375);
  }
  kcg_copy_P021_trackide_sectionlist_T_TM(&outC->_L369, &outC->_L1.SECTIONS);
  kcg_copy_P021_section_int_T_TM(&outC->_L385[0], &outC->_L386[0]);
  kcg_copy_P021_trackide_sectionlist_T_TM(&outC->_L385[1], &outC->_L369);
  /* _L380=(TM_lib_internal::C_P021_flatten_sections#1)/ */
  C_P021_flatten_sections_TM_lib_internal(
    &outC->_L385,
    &outC->Context_C_P021_flatten_sections_1);
  kcg_copy_P021_sections_array_flat_T_TM(
    &outC->_L380,
    &outC->Context_C_P021_flatten_sections_1.Flattened);
  outC->_L370 = outC->_L1.N_ITER;
  /* _L376/ */
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L376[idx1] = outC->_L370;
  }
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  kcg_copy_array_int32_4(&outC->_L381[0], &outC->_L373);
  outC->_L381[4] = outC->_L376[0];
  kcg_copy_array_int32_5(&outC->_L384[0], &outC->_L381);
  kcg_copy_P021_sections_array_flat_T_TM(&outC->_L384[5], &outC->_L380);
  outC->_L336 = kcg_lit_int32(0);
  /* _L209/ */
  for (idx2 = 0; idx2 < 396; idx2++) {
    outC->_L209[idx2] = outC->_L336;
  }
  kcg_copy_array_int32_104(&outC->_L383[0], &outC->_L384);
  kcg_copy_array_int32_396(&outC->_L383[104], &outC->_L209);
  /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */
  T_DeterminePacketSizeInt_TM_lib_internal(
    outC->_L370,
    kcg_lit_int32(4) + kcg_lit_int32(1) + kcg_lit_int32(3),
    kcg_lit_int32(3),
    &outC->Context_T_DeterminePacketSizeInt_1);
  outC->_L379 = outC->Context_T_DeterminePacketSizeInt_1.p_size;
  outC->p_size = outC->_L379;
  outC->_L378 = outC->p_size;
  outC->_L356 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L214 = outC->_L1.valid;
  outC->_L213 = kcg_lit_int32(1);
  outC->_L212 = outC->_L378 - outC->_L213;
  outC->_L206 = kcg_lit_int32(0);
  outC->_L204.nid_packet = outC->_L388;
  outC->_L204.q_dir = outC->_L356;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P005_compressed,
    &outC->_L383);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P021_tracksim_compr_init_TM_conversions(
  outC_C_P021_tracksim_compr_TM_conversions *outC)
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

  outC->_L388 = kcg_lit_int32(0);
  for (idx = 0; idx < 1; idx++) {
    outC->_L386[idx].D_GRADIENT = kcg_lit_int32(0);
    outC->_L386[idx].Q_GDIR = kcg_lit_int32(0);
    outC->_L386[idx].G_A = kcg_lit_int32(0);
  }
  outC->_L387 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L385[idx1].D_GRADIENT = kcg_lit_int32(0);
    outC->_L385[idx1].Q_GDIR = kcg_lit_int32(0);
    outC->_L385[idx1].G_A = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 104; idx2++) {
    outC->_L384[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L383[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L381[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 99; idx5++) {
    outC->_L380[idx5] = kcg_lit_int32(0);
  }
  outC->_L379 = kcg_lit_int32(0);
  outC->_L378 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 1; idx6++) {
    outC->_L376[idx6] = kcg_lit_int32(0);
  }
  outC->_L375.D_GRADIENT = kcg_lit_int32(0);
  outC->_L375.Q_GDIR = kcg_lit_int32(0);
  outC->_L375.G_A = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L373[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L369[idx8].D_GRADIENT = kcg_lit_int32(0);
    outC->_L369[idx8].Q_GDIR = kcg_lit_int32(0);
    outC->_L369[idx8].G_A = kcg_lit_int32(0);
  }
  outC->_L370 = kcg_lit_int32(0);
  outC->_L371 = kcg_lit_int32(0);
  outC->_L356 = Q_DIR_Reverse;
  outC->_L214 = kcg_true;
  outC->_L215 = kcg_lit_int32(0);
  outC->_L216 = kcg_lit_int32(0);
  outC->_L217 = kcg_lit_int32(0);
  outC->_L218 = kcg_lit_int32(0);
  outC->_L219 = kcg_lit_int32(0);
  outC->_L336 = kcg_lit_int32(0);
  outC->_L213 = kcg_lit_int32(0);
  outC->_L212 = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 396; idx9++) {
    outC->_L209[idx9] = kcg_lit_int32(0);
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
  outC->_L1.D_GRADIENT = kcg_lit_int32(0);
  outC->_L1.Q_GDIR = kcg_lit_int32(0);
  outC->_L1.G_A = kcg_lit_int32(0);
  outC->_L1.N_ITER = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L1.SECTIONS[idx10].D_GRADIENT = kcg_lit_int32(0);
    outC->_L1.SECTIONS[idx10].Q_GDIR = kcg_lit_int32(0);
    outC->_L1.SECTIONS[idx10].G_A = kcg_lit_int32(0);
  }
  outC->p_size = kcg_lit_int32(0);
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
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->P005_compressed[idx11] = kcg_lit_int32(0);
  }
  outC->Header.nid_packet = kcg_lit_int32(0);
  outC->Header.q_dir = Q_DIR_Reverse;
  outC->Header.valid = kcg_true;
  outC->Header.startAddress = kcg_lit_int32(0);
  outC->Header.endAddress = kcg_lit_int32(0);
  /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */
  T_DeterminePacketSizeInt_init_TM_lib_internal(
    &outC->Context_T_DeterminePacketSizeInt_1);
  /* _L380=(TM_lib_internal::C_P021_flatten_sections#1)/ */
  C_P021_flatten_sections_init_TM_lib_internal(
    &outC->Context_C_P021_flatten_sections_1);
  /* _L388=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_init_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P021_tracksim_compr_reset_TM_conversions(
  outC_C_P021_tracksim_compr_TM_conversions *outC)
{
  /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */
  T_DeterminePacketSizeInt_reset_TM_lib_internal(
    &outC->Context_T_DeterminePacketSizeInt_1);
  /* _L380=(TM_lib_internal::C_P021_flatten_sections#1)/ */
  C_P021_flatten_sections_reset_TM_lib_internal(
    &outC->Context_C_P021_flatten_sections_1);
  /* _L388=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_1);
}

/*
  Expanded instances for: TM_conversions::C_P021_tracksim_compr/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P021_tracksim_compr_TM_conversions.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

