/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P065_tracksim_compr_TM_conversions.h"

/* TM_conversions::C_P065_tracksim_compr/ */
void C_P065_tracksim_compr_TM_conversions(
  /* P065_from_track/ */
  P065_trackside_int_T_TM *P065_from_track,
  outC_C_P065_tracksim_compr_TM_conversions *outC)
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

  kcg_copy_P065_trackside_int_T_TM(&outC->_L1, P065_from_track);
  outC->_L395 = outC->_L1.Q_DIR;
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L395;
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
  outC->_L393 = outC->_L1.NID_TSR;
  /* _L401=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L395,
    outC->_L393,
    kcg_lit_int32(65),
    INT_M_VERSION_2_0_TM,
    &outC->Context_T_Build_Metadata_Packet_ID_1);
  outC->_L401 = outC->Context_T_Build_Metadata_Packet_ID_1.nid_packet_meta;
  outC->_L388 = DIM_MaxElementsPacket065_TM;
  outC->_L336 = kcg_lit_int32(0);
  /* _L209/ */
  for (idx = 0; idx < 491; idx++) {
    outC->_L209[idx] = outC->_L336;
  }
  outC->_L394 = outC->_L1.L_PACKET;
  outC->_L400 = outC->_L1.Q_SCALE;
  outC->_L399 = outC->_L1.D_TSR;
  outC->_L398 = outC->_L1.L_TSR;
  outC->_L397 = outC->_L1.Q_FRONT;
  outC->_L396 = outC->_L1.V_TSR;
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L395;
  outC->_L373[2] = outC->_L394;
  outC->_L373[3] = outC->_L400;
  outC->_L373[4] = outC->_L393;
  outC->_L373[5] = outC->_L399;
  outC->_L373[6] = outC->_L398;
  outC->_L373[7] = outC->_L397;
  outC->_L373[8] = outC->_L396;
  kcg_copy_array_int32_9(&outC->_L383[0], &outC->_L373);
  kcg_copy_array_int32_491(&outC->_L383[9], &outC->_L209);
  outC->_L356 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L214 = outC->_L1.valid;
  outC->_L213 = kcg_lit_int32(1);
  outC->_L212 = outC->_L388 - outC->_L213;
  outC->_L206 = kcg_lit_int32(0);
  outC->_L204.nid_packet = outC->_L401;
  outC->_L204.q_dir = outC->_L356;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P065_compressed,
    &outC->_L383);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P065_tracksim_compr_init_TM_conversions(
  outC_C_P065_tracksim_compr_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L401 = kcg_lit_int32(0);
  outC->_L400 = kcg_lit_int32(0);
  outC->_L396 = kcg_lit_int32(0);
  outC->_L397 = kcg_lit_int32(0);
  outC->_L398 = kcg_lit_int32(0);
  outC->_L399 = kcg_lit_int32(0);
  outC->_L393 = kcg_lit_int32(0);
  outC->_L394 = kcg_lit_int32(0);
  outC->_L395 = kcg_lit_int32(0);
  outC->_L388 = kcg_lit_int32(0);
  outC->_L387 = kcg_lit_int32(0);
  for (idx = 0; idx < 500; idx++) {
    outC->_L383[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L373[idx1] = kcg_lit_int32(0);
  }
  outC->_L356 = Q_DIR_Reverse;
  outC->_L214 = kcg_true;
  outC->_L336 = kcg_lit_int32(0);
  outC->_L213 = kcg_lit_int32(0);
  outC->_L212 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 491; idx2++) {
    outC->_L209[idx2] = kcg_lit_int32(0);
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
  outC->_L1.NID_TSR = kcg_lit_int32(0);
  outC->_L1.D_TSR = kcg_lit_int32(0);
  outC->_L1.L_TSR = kcg_lit_int32(0);
  outC->_L1.Q_FRONT = kcg_lit_int32(0);
  outC->_L1.V_TSR = kcg_lit_int32(0);
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
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->P065_compressed[idx3] = kcg_lit_int32(0);
  }
  outC->Header.nid_packet = kcg_lit_int32(0);
  outC->Header.q_dir = Q_DIR_Reverse;
  outC->Header.valid = kcg_true;
  outC->Header.startAddress = kcg_lit_int32(0);
  outC->Header.endAddress = kcg_lit_int32(0);
  /* _L401=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_init_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P065_tracksim_compr_reset_TM_conversions(
  outC_C_P065_tracksim_compr_TM_conversions *outC)
{
  /* _L401=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */
  T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
    &outC->Context_T_Build_Metadata_Packet_ID_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_conversions::C_P065_tracksim_compr/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P065_tracksim_compr_TM_conversions.c
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

