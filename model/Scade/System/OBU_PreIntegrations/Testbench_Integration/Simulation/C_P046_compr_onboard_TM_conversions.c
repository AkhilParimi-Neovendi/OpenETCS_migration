/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P046_compr_onboard/ */
void C_P046_compr_onboard_TM_conversions(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P046_compr_onboard_TM_conversions *outC)
{
  static kcg_bool noname_CAST_Int_to_N_ITER_1;
  static kcg_bool _1_noname_CAST_Int_to_N_ITER_1;
  static kcg_bool noname_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  static Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  static Q_DIR _2_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  static kcg_bool _3_error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  static kcg_bool _4_error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  static Q_DIR _5_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  static kcg_bool _6_error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  static Q_DIR _7_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  static kcg_bool _8_error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  static Q_DIR _9_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @2/error/ */
  static kcg_bool _10_error_partial_CAST_Int_to_Q_DIR_1;
  /* @2/q_dir/ */
  static Q_DIR _11_q_dir_partial_CAST_Int_to_Q_DIR_1;
  static kcg_bool noname_CAST_Int_to_NID_PACKET_1;
  static kcg_bool _12_noname_CAST_Int_to_NID_PACKET_1;
  static MetadataElement_T_Common_Types_Pkg noname;
  static kcg_int32 _13_noname;

  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int32_4(&outC->_L29, (array_int32_4 *) &outC->_L9[0]);
  outC->_L37 = outC->_L29[3];
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = outC->_L37;
  outC->_L1_CAST_Int_to_N_ITER_1 = outC->n_iter_int_CAST_Int_to_N_ITER_1;
  outC->_L10_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 <
    outC->_L11_CAST_Int_to_N_ITER_1;
  noname_CAST_Int_to_N_ITER_1 = outC->_L10_CAST_Int_to_N_ITER_1;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int32(31);
  outC->_L12_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 >
    outC->_L9_CAST_Int_to_N_ITER_1;
  _1_noname_CAST_Int_to_N_ITER_1 = outC->_L12_CAST_Int_to_N_ITER_1;
  outC->n_iter_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1;
  outC->_L35 = outC->_L29[1];
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L35;
  outC->_L12_CAST_Int_to_Q_DIR_1 = outC->q_dir_int_CAST_Int_to_Q_DIR_1;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = outC->_L12_CAST_Int_to_Q_DIR_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1 =
    outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* @2/IfBlock1: */
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
    /* @2/IfBlock1:else: */
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
      /* @2/IfBlock1:else:else: */
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
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L34 = outC->_L29[0];
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = outC->_L34;
  outC->_L1_CAST_Int_to_NID_PACKET_1 =
    outC->nid_packet_int_CAST_Int_to_NID_PACKET_1;
  outC->_L4_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 <
    outC->_L5_CAST_Int_to_NID_PACKET_1;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(256);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 >
    outC->_L3_CAST_Int_to_NID_PACKET_1;
  noname_CAST_Int_to_NID_PACKET_1 = outC->_L2_CAST_Int_to_NID_PACKET_1;
  _12_noname_CAST_Int_to_NID_PACKET_1 = outC->_L4_CAST_Int_to_NID_PACKET_1;
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1;
  outC->_L36 = outC->_L29[2];
  _13_noname = outC->_L36;
  outC->_L21 = kcg_lit_int32(46);
  outC->_L12 = outC->nid_packet_CAST_Int_to_NID_PACKET_1;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  kcg_copy_P046_sections_array_flat_T_TM(
    &outC->_L13,
    (P046_sections_array_flat_T_TM *) &outC->_L9[4]);
  outC->_L11 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L7 = outC->n_iter_CAST_Int_to_N_ITER_1;
  /* _L5=(TM_lib_internal::C_P046_unflatten_sections#1)/ */
  C_P046_unflatten_sections_TM_lib_internal(
    outC->_L22,
    outC->_L7,
    &outC->_L13,
    &outC->Context_C_P046_unflatten_sections_1);
  kcg_copy_P046_OBU_sectionlist_enum_T_TM(
    &outC->_L5,
    &outC->Context_C_P046_unflatten_sections_1.sections);
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.n_iter = outC->_L7;
  kcg_copy_P046_OBU_sectionlist_enum_T_TM(&outC->_L10.sections, &outC->_L5);
  kcg_copy_P046_OBU_T_TM(&outC->P046_onboard, &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P046_compr_onboard_init_TM_conversions(
  outC_C_P046_compr_onboard_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L34 = kcg_lit_int32(0);
  outC->_L35 = kcg_lit_int32(0);
  outC->_L36 = kcg_lit_int32(0);
  outC->_L37 = kcg_lit_int32(0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L29[idx] = kcg_lit_int32(0);
  }
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20.nid_packet = kcg_lit_int32(0);
  outC->_L20.q_dir = Q_DIR_Reverse;
  outC->_L20.valid = kcg_true;
  outC->_L20.startAddress = kcg_lit_int32(0);
  outC->_L20.endAddress = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L5[idx1].valid = kcg_true;
    outC->_L5[idx1].m_leveltr = M_LEVELTR_Level_0;
    outC->_L5[idx1].nid_ntc = kcg_lit_int32(0);
  }
  outC->_L7 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L9[idx2] = kcg_lit_int32(0);
  }
  outC->_L10.valid = kcg_true;
  outC->_L10.q_dir = Q_DIR_Reverse;
  outC->_L10.n_iter = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L10.sections[idx3].valid = kcg_true;
    outC->_L10.sections[idx3].m_leveltr = M_LEVELTR_Level_0;
    outC->_L10.sections[idx3].nid_ntc = kcg_lit_int32(0);
  }
  outC->_L11 = Q_DIR_Reverse;
  outC->_L12 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 66; idx4++) {
    outC->_L13[idx4] = kcg_lit_int32(0);
  }
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
  outC->_L1_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->_L12_CAST_Int_to_N_ITER_1 = kcg_true;
  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->_L10_CAST_Int_to_N_ITER_1 = kcg_true;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->n_iter_CAST_Int_to_N_ITER_1 = kcg_lit_int32(0);
  outC->P046_onboard.valid = kcg_true;
  outC->P046_onboard.q_dir = Q_DIR_Reverse;
  outC->P046_onboard.n_iter = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->P046_onboard.sections[idx5].valid = kcg_true;
    outC->P046_onboard.sections[idx5].m_leveltr = M_LEVELTR_Level_0;
    outC->P046_onboard.sections[idx5].nid_ntc = kcg_lit_int32(0);
  }
  /* _L5=(TM_lib_internal::C_P046_unflatten_sections#1)/ */
  C_P046_unflatten_sections_init_TM_lib_internal(
    &outC->Context_C_P046_unflatten_sections_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P046_compr_onboard_reset_TM_conversions(
  outC_C_P046_compr_onboard_TM_conversions *outC)
{
  /* _L5=(TM_lib_internal::C_P046_unflatten_sections#1)/ */
  C_P046_unflatten_sections_reset_TM_lib_internal(
    &outC->Context_C_P046_unflatten_sections_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_conversions::C_P046_compr_onboard/
  @2: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P046_compr_onboard_TM_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

