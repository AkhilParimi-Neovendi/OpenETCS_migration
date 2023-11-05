/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P015_tracksim_compr/ */
void C_P015_tracksim_compr_TM_conversions(
  /* P015_from_track/ */
  P015_trackside_int_T_TM *P015_from_track,
  outC_C_P015_tracksim_compr_TM_conversions *outC)
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

  kcg_copy_P015_trackside_int_T_TM(&outC->_L1, P015_from_track);
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
  outC->_L387 = outC->_L1.NID_PACKET;
  /* _L404=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    kcg_lit_int32(0),
    kcg_lit_int32(15),
    INT_M_VERSION_2_0_TM,
    &outC->Context_T_Build_Metadata_Packet_ID_1);
  outC->_L404 = outC->Context_T_Build_Metadata_Packet_ID_1.nid_packet_meta;
  outC->_L396 = outC->_L1.N_ITER;
  outC->n_iter = outC->_L396;
  outC->_L402 = outC->n_iter;
  /* _L403/ */
  for (idx = 0; idx < 1; idx++) {
    outC->_L403[idx] = outC->_L402;
  }
  outC->_L370 = outC->_L1.L_ENDSECTION;
  outC->_L369 = outC->_L1.Q_SECTIONTIMER;
  outC->_L405 = outC->_L1.T_SECTIONTIMER;
  outC->_L368 = outC->_L1.D_SECTIONTIMERSTOPLOC;
  outC->_L367 = outC->_L1.Q_ENDTIMER;
  outC->_L366 = outC->_L1.T_ENDTIMER;
  outC->_L365 = outC->_L1.D_ENDTIMERSTARTLOC;
  outC->_L395 = outC->_L1.Q_DANGERPOINT;
  outC->_L394 = outC->_L1.D_DP;
  outC->_L393 = outC->_L1.V_RELEASEDP;
  outC->_L392 = outC->_L1.Q_OVERLAP;
  outC->_L391 = outC->_L1.D_STARTOL;
  outC->_L390 = outC->_L1.T_OL;
  outC->_L389 = outC->_L1.D_OL;
  outC->_L388 = outC->_L1.V_RELEASEOL;
  outC->_L399[0] = outC->_L370;
  outC->_L399[1] = outC->_L369;
  outC->_L399[2] = outC->_L405;
  outC->_L399[3] = outC->_L368;
  outC->_L399[4] = outC->_L367;
  outC->_L399[5] = outC->_L366;
  outC->_L399[6] = outC->_L365;
  outC->_L399[7] = outC->_L395;
  outC->_L399[8] = outC->_L394;
  outC->_L399[9] = outC->_L393;
  outC->_L399[10] = outC->_L392;
  outC->_L399[11] = outC->_L391;
  outC->_L399[12] = outC->_L390;
  outC->_L399[13] = outC->_L389;
  outC->_L399[14] = outC->_L388;
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L218 = outC->_L1.V_LOA;
  outC->_L219 = outC->_L1.T_LOA;
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  outC->_L373[4] = outC->_L218;
  outC->_L373[5] = outC->_L219;
  kcg_copy_array_int32_6(&outC->_L381[0], &outC->_L373);
  kcg_copy_array_int32_15(&outC->_L381[6], &outC->_L399);
  kcg_copy_array_int32_21(&outC->_L400[0], &outC->_L381);
  outC->_L400[21] = outC->_L403[0];
  kcg_copy_P015_trackide_sectionlist_T_TM(&outC->_L371, &outC->_L1.SECTIONS);
  kcg_copy_P015_trackide_sectionlist_T_TM(&outC->sections, &outC->_L371);
  kcg_copy_P015_trackide_sectionlist_T_TM(&outC->_L398, &outC->sections);
  /* _L380=(TM_lib_internal::C_P015_flatten_sections#1)/ */
  C_P015_flatten_sections_TM_lib_internal(
    &outC->_L398,
    &outC->Context_C_P015_flatten_sections_1);
  kcg_copy_P015_sections_array_flat_T_TM(
    &outC->_L380,
    &outC->Context_C_P015_flatten_sections_1.Flattened);
  kcg_copy_array_int32_22(&outC->_L384[0], &outC->_L400);
  kcg_copy_P015_sections_array_flat_T_TM(&outC->_L384[22], &outC->_L380);
  outC->_L336 = kcg_lit_int32(0);
  /* _L209/ */
  for (idx1 = 0; idx1 < 350; idx1++) {
    outC->_L209[idx1] = outC->_L336;
  }
  kcg_copy_array_int32_150(&outC->_L383[0], &outC->_L384);
  kcg_copy_array_int32_350(&outC->_L383[150], &outC->_L209);
  /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */
  T_DeterminePacketSizeInt_TM_lib_internal(
    outC->_L396,
    kcg_lit_int32(6) + kcg_lit_int32(1) + kcg_lit_int32(15),
    kcg_lit_int32(4),
    &outC->Context_T_DeterminePacketSizeInt_1);
  outC->_L379 = outC->Context_T_DeterminePacketSizeInt_1.p_size;
  outC->p_size = outC->_L379;
  outC->_L378 = outC->p_size;
  outC->_L356 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L214 = outC->_L1.valid;
  outC->_L213 = kcg_lit_int32(1);
  outC->_L212 = outC->_L378 - outC->_L213;
  outC->_L206 = kcg_lit_int32(0);
  outC->_L204.nid_packet = outC->_L404;
  outC->_L204.q_dir = outC->_L356;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P015_compressed,
    &outC->_L383);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P015_tracksim_compr_init_TM_conversions(
  outC_C_P015_tracksim_compr_TM_conversions *outC)
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

  outC->_L405 = kcg_lit_int32(0);
  outC->_L404 = kcg_lit_int32(0);
  for (idx = 0; idx < 1; idx++) {
    outC->_L403[idx] = kcg_lit_int32(0);
  }
  outC->_L402 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 22; idx1++) {
    outC->_L400[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 15; idx2++) {
    outC->_L399[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L398[idx3].L_SECTION = kcg_lit_int32(0);
    outC->_L398[idx3].Q_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L398[idx3].T_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L398[idx3].D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
  }
  outC->_L396 = kcg_lit_int32(0);
  outC->_L388 = kcg_lit_int32(0);
  outC->_L389 = kcg_lit_int32(0);
  outC->_L390 = kcg_lit_int32(0);
  outC->_L391 = kcg_lit_int32(0);
  outC->_L392 = kcg_lit_int32(0);
  outC->_L393 = kcg_lit_int32(0);
  outC->_L394 = kcg_lit_int32(0);
  outC->_L395 = kcg_lit_int32(0);
  outC->_L387 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 150; idx4++) {
    outC->_L384[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L383[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 21; idx6++) {
    outC->_L381[idx6] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 128; idx7++) {
    outC->_L380[idx7] = kcg_lit_int32(0);
  }
  outC->_L379 = kcg_lit_int32(0);
  outC->_L378 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 6; idx8++) {
    outC->_L373[idx8] = kcg_lit_int32(0);
  }
  outC->_L365 = kcg_lit_int32(0);
  outC->_L366 = kcg_lit_int32(0);
  outC->_L367 = kcg_lit_int32(0);
  outC->_L368 = kcg_lit_int32(0);
  outC->_L369 = kcg_lit_int32(0);
  outC->_L370 = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L371[idx9].L_SECTION = kcg_lit_int32(0);
    outC->_L371[idx9].Q_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L371[idx9].T_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L371[idx9].D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
  }
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
  for (idx10 = 0; idx10 < 350; idx10++) {
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
  outC->_L1.V_LOA = kcg_lit_int32(0);
  outC->_L1.T_LOA = kcg_lit_int32(0);
  outC->_L1.N_ITER = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 32; idx11++) {
    outC->_L1.SECTIONS[idx11].L_SECTION = kcg_lit_int32(0);
    outC->_L1.SECTIONS[idx11].Q_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L1.SECTIONS[idx11].T_SECTIONTIMER = kcg_lit_int32(0);
    outC->_L1.SECTIONS[idx11].D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
  }
  outC->_L1.L_ENDSECTION = kcg_lit_int32(0);
  outC->_L1.Q_SECTIONTIMER = kcg_lit_int32(0);
  outC->_L1.T_SECTIONTIMER = kcg_lit_int32(0);
  outC->_L1.D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
  outC->_L1.Q_ENDTIMER = kcg_lit_int32(0);
  outC->_L1.T_ENDTIMER = kcg_lit_int32(0);
  outC->_L1.D_ENDTIMERSTARTLOC = kcg_lit_int32(0);
  outC->_L1.Q_DANGERPOINT = kcg_lit_int32(0);
  outC->_L1.D_DP = kcg_lit_int32(0);
  outC->_L1.V_RELEASEDP = kcg_lit_int32(0);
  outC->_L1.Q_OVERLAP = kcg_lit_int32(0);
  outC->_L1.D_STARTOL = kcg_lit_int32(0);
  outC->_L1.T_OL = kcg_lit_int32(0);
  outC->_L1.D_OL = kcg_lit_int32(0);
  outC->_L1.V_RELEASEOL = kcg_lit_int32(0);
  outC->n_iter = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 32; idx12++) {
    outC->sections[idx12].L_SECTION = kcg_lit_int32(0);
    outC->sections[idx12].Q_SECTIONTIMER = kcg_lit_int32(0);
    outC->sections[idx12].T_SECTIONTIMER = kcg_lit_int32(0);
    outC->sections[idx12].D_SECTIONTIMERSTOPLOC = kcg_lit_int32(0);
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
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->P015_compressed[idx13] = kcg_lit_int32(0);
  }
  outC->Header.nid_packet = kcg_lit_int32(0);
  outC->Header.q_dir = Q_DIR_Reverse;
  outC->Header.valid = kcg_true;
  outC->Header.startAddress = kcg_lit_int32(0);
  outC->Header.endAddress = kcg_lit_int32(0);
  /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */
  T_DeterminePacketSizeInt_init_TM_lib_internal(
    &outC->Context_T_DeterminePacketSizeInt_1);
  /* _L380=(TM_lib_internal::C_P015_flatten_sections#1)/ */
  C_P015_flatten_sections_init_TM_lib_internal(
    &outC->Context_C_P015_flatten_sections_1);
  /* _L404=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_init_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P015_tracksim_compr_reset_TM_conversions(
  outC_C_P015_tracksim_compr_TM_conversions *outC)
{
  /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */
  T_DeterminePacketSizeInt_reset_TM_lib_internal(
    &outC->Context_T_DeterminePacketSizeInt_1);
  /* _L380=(TM_lib_internal::C_P015_flatten_sections#1)/ */
  C_P015_flatten_sections_reset_TM_lib_internal(
    &outC->Context_C_P015_flatten_sections_1);
  /* _L404=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_1);
}

/*
  Expanded instances for: TM_conversions::C_P015_tracksim_compr/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P015_tracksim_compr_TM_conversions.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

