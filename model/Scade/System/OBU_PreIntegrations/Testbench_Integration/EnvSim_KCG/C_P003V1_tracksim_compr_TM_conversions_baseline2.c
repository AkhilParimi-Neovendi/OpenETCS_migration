/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_tracksim_compr_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ */
void C_P003V1_tracksim_compr_TM_conversions_baseline2(
  /* P003V1_from_track/ */
  P003V1_trackside_int_T_TM_baseline2 *P003V1_from_track,
  outC_C_P003V1_tracksim_compr_TM_conversions_baseline2 *outC)
{
  static kcg_size idx;
  static kcg_bool noname_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _1_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _2_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  static kcg_bool _3_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  static Q_DIR _4_q_dir_partial_CAST_Int_to_Q_DIR_1;
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

  kcg_copy_P003V1_trackside_int_T_TM_baseline2(&outC->_L1, P003V1_from_track);
  outC->_L215 = outC->_L1.Q_DIR;
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L215;
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
  outC->_L387 = outC->_L1.NID_PACKET;
  /* _L412=(TM_lib_internal::T_Build_Metadata_Packet_ID#2)/ */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    kcg_lit_int32(0),
    kcg_lit_int32(3),
    INT_M_VERSION_1_0_TM,
    &outC->Context_T_Build_Metadata_Packet_ID_2);
  outC->_L412 = outC->Context_T_Build_Metadata_Packet_ID_2.nid_packet_meta;
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
    &outC->_L365,
    &outC->_L1.SECTIONS);
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
    &outC->sections,
    &outC->_L365);
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
    &outC->_L408,
    &outC->sections);
  outC->_L388 = outC->_L1.V_NVSHUNT;
  outC->_L389 = outC->_L1.V_NVSTFF;
  outC->_L390 = outC->_L1.V_NVONSIGHT;
  outC->_L391 = outC->_L1.V_NVUNFIT;
  outC->_L392 = outC->_L1.V_NVREL;
  outC->_L393 = outC->_L1.D_NVROLL;
  outC->_L394 = outC->_L1.Q_NVSRBKTRG;
  outC->_L409 = outC->_L1.Q_NVEMRRLS;
  outC->_L395 = outC->_L1.V_NVALLOWOVTRP;
  outC->_L396 = outC->_L1.V_NVSUPOVTRP;
  outC->_L397 = outC->_L1.D_NVOVTRP;
  outC->_L398 = outC->_L1.T_NVOVTRP;
  outC->_L399 = outC->_L1.D_NVPOTRP;
  outC->_L400 = outC->_L1.M_NVCONTACT;
  outC->_L401 = outC->_L1.T_NVCONTACT;
  outC->_L402 = outC->_L1.M_NVDERUN;
  outC->_L403 = outC->_L1.D_NVSTFF;
  outC->_L404 = outC->_L1.Q_NVDRIVER_ADHES;
  outC->_L407[0] = outC->_L388;
  outC->_L407[1] = outC->_L389;
  outC->_L407[2] = outC->_L390;
  outC->_L407[3] = outC->_L391;
  outC->_L407[4] = outC->_L392;
  outC->_L407[5] = outC->_L393;
  outC->_L407[6] = outC->_L394;
  outC->_L407[7] = outC->_L409;
  outC->_L407[8] = outC->_L395;
  outC->_L407[9] = outC->_L396;
  outC->_L407[10] = outC->_L397;
  outC->_L407[11] = outC->_L398;
  outC->_L407[12] = outC->_L399;
  outC->_L407[13] = outC->_L400;
  outC->_L407[14] = outC->_L401;
  outC->_L407[15] = outC->_L402;
  outC->_L407[16] = outC->_L403;
  outC->_L407[17] = outC->_L404;
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L218 = outC->_L1.D_VALIDNV;
  outC->_L366 = outC->_L1.N_ITER;
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  outC->_L373[4] = outC->_L218;
  outC->_L373[5] = outC->_L366;
  kcg_copy_array_int32_6(&outC->_L381[0], &outC->_L373);
  kcg_copy_array_int32_18(&outC->_L381[6], &outC->_L407);
  kcg_copy_array_int32_24(&outC->_L384[0], &outC->_L381);
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
    &outC->_L384[24],
    &outC->_L408);
  outC->_L336 = kcg_lit_int32(0);
  /* _L209/ */
  for (idx = 0; idx < 444; idx++) {
    outC->_L209[idx] = outC->_L336;
  }
  kcg_copy_array_int32_56(&outC->_L383[0], &outC->_L384);
  kcg_copy_array_int32_444(&outC->_L383[56], &outC->_L209);
  /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */
  T_DeterminePacketSizeInt_TM_lib_internal(
    outC->_L366,
    kcg_lit_int32(6) + kcg_lit_int32(17),
    kcg_lit_int32(1),
    &outC->Context_T_DeterminePacketSizeInt_1);
  outC->_L379 = outC->Context_T_DeterminePacketSizeInt_1.p_size;
  outC->p_size = outC->_L379;
  outC->_L378 = outC->p_size;
  outC->_L356 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L214 = outC->_L1.valid;
  outC->_L213 = kcg_lit_int32(1);
  outC->_L212 = outC->_L378 - outC->_L213;
  outC->_L206 = kcg_lit_int32(0);
  outC->_L204.nid_packet = outC->_L412;
  outC->_L204.q_dir = outC->_L356;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P003V1_compressed,
    &outC->_L383);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P003V1_tracksim_compr_init_TM_conversions_baseline2(
  outC_C_P003V1_tracksim_compr_TM_conversions_baseline2 *outC)
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

  outC->_L412 = kcg_lit_int32(0);
  outC->_L409 = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L408[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 18; idx1++) {
    outC->_L407[idx1] = kcg_lit_int32(0);
  }
  outC->_L404 = kcg_lit_int32(0);
  outC->_L403 = kcg_lit_int32(0);
  outC->_L402 = kcg_lit_int32(0);
  outC->_L401 = kcg_lit_int32(0);
  outC->_L400 = kcg_lit_int32(0);
  outC->_L399 = kcg_lit_int32(0);
  outC->_L398 = kcg_lit_int32(0);
  outC->_L397 = kcg_lit_int32(0);
  outC->_L396 = kcg_lit_int32(0);
  outC->_L395 = kcg_lit_int32(0);
  outC->_L394 = kcg_lit_int32(0);
  outC->_L393 = kcg_lit_int32(0);
  outC->_L392 = kcg_lit_int32(0);
  outC->_L391 = kcg_lit_int32(0);
  outC->_L390 = kcg_lit_int32(0);
  outC->_L389 = kcg_lit_int32(0);
  outC->_L388 = kcg_lit_int32(0);
  outC->_L387 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 56; idx2++) {
    outC->_L384[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L383[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 24; idx4++) {
    outC->_L381[idx4] = kcg_lit_int32(0);
  }
  outC->_L379 = kcg_lit_int32(0);
  outC->_L378 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 6; idx5++) {
    outC->_L373[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L365[idx6] = kcg_lit_int32(0);
  }
  outC->_L366 = kcg_lit_int32(0);
  outC->_L356 = Q_DIR_Reverse;
  outC->_L214 = kcg_true;
  outC->_L215 = kcg_lit_int32(0);
  outC->_L216 = kcg_lit_int32(0);
  outC->_L217 = kcg_lit_int32(0);
  outC->_L218 = kcg_lit_int32(0);
  outC->_L336 = kcg_lit_int32(0);
  outC->_L213 = kcg_lit_int32(0);
  outC->_L212 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 444; idx7++) {
    outC->_L209[idx7] = kcg_lit_int32(0);
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
  outC->_L1.D_VALIDNV = kcg_lit_int32(0);
  outC->_L1.N_ITER = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L1.SECTIONS[idx8] = kcg_lit_int32(0);
  }
  outC->_L1.V_NVSHUNT = kcg_lit_int32(0);
  outC->_L1.V_NVSTFF = kcg_lit_int32(0);
  outC->_L1.V_NVONSIGHT = kcg_lit_int32(0);
  outC->_L1.V_NVUNFIT = kcg_lit_int32(0);
  outC->_L1.V_NVREL = kcg_lit_int32(0);
  outC->_L1.D_NVROLL = kcg_lit_int32(0);
  outC->_L1.Q_NVSRBKTRG = kcg_lit_int32(0);
  outC->_L1.Q_NVEMRRLS = kcg_lit_int32(0);
  outC->_L1.V_NVALLOWOVTRP = kcg_lit_int32(0);
  outC->_L1.V_NVSUPOVTRP = kcg_lit_int32(0);
  outC->_L1.D_NVOVTRP = kcg_lit_int32(0);
  outC->_L1.T_NVOVTRP = kcg_lit_int32(0);
  outC->_L1.D_NVPOTRP = kcg_lit_int32(0);
  outC->_L1.M_NVCONTACT = kcg_lit_int32(0);
  outC->_L1.T_NVCONTACT = kcg_lit_int32(0);
  outC->_L1.M_NVDERUN = kcg_lit_int32(0);
  outC->_L1.D_NVSTFF = kcg_lit_int32(0);
  outC->_L1.Q_NVDRIVER_ADHES = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->sections[idx9] = kcg_lit_int32(0);
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
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->P003V1_compressed[idx10] = kcg_lit_int32(0);
  }
  outC->Header.nid_packet = kcg_lit_int32(0);
  outC->Header.q_dir = Q_DIR_Reverse;
  outC->Header.valid = kcg_true;
  outC->Header.startAddress = kcg_lit_int32(0);
  outC->Header.endAddress = kcg_lit_int32(0);
  /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */
  T_DeterminePacketSizeInt_init_TM_lib_internal(
    &outC->Context_T_DeterminePacketSizeInt_1);
  /* _L412=(TM_lib_internal::T_Build_Metadata_Packet_ID#2)/ */
  T_Build_Metadata_Packet_ID_init_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_2);
}
#endif /* KCG_USER_DEFINED_INIT */


void C_P003V1_tracksim_compr_reset_TM_conversions_baseline2(
  outC_C_P003V1_tracksim_compr_TM_conversions_baseline2 *outC)
{
  /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */
  T_DeterminePacketSizeInt_reset_TM_lib_internal(
    &outC->Context_T_DeterminePacketSizeInt_1);
  /* _L412=(TM_lib_internal::T_Build_Metadata_Packet_ID#2)/ */
  T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_2);
}

/*
  Expanded instances for: TM_conversions_baseline2::C_P003V1_tracksim_compr/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_tracksim_compr_TM_conversions_baseline2.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

