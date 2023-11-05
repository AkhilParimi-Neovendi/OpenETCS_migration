/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P057_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P057_compr_onboard/ */
void C_P057_compr_onboard_TM_conversions(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P057_compr_onboard_TM_conversions *outC)
{
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
  static kcg_bool noname_CAST_Int_to_NID_PACKET_1;
  static kcg_bool _11_noname_CAST_Int_to_NID_PACKET_1;
  static MetadataElement_T_Common_Types_Pkg noname;
  static kcg_int32 _12_noname;

  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int32_6(&outC->_L34, (array_int32_6 *) &outC->_L9[0]);
  outC->_L42 = outC->_L34[1];
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L42;
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
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L41 = outC->_L34[0];
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = outC->_L41;
  outC->_L1_CAST_Int_to_NID_PACKET_1 =
    outC->nid_packet_int_CAST_Int_to_NID_PACKET_1;
  outC->_L4_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 <
    outC->_L5_CAST_Int_to_NID_PACKET_1;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(256);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 >
    outC->_L3_CAST_Int_to_NID_PACKET_1;
  noname_CAST_Int_to_NID_PACKET_1 = outC->_L2_CAST_Int_to_NID_PACKET_1;
  _11_noname_CAST_Int_to_NID_PACKET_1 = outC->_L4_CAST_Int_to_NID_PACKET_1;
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1;
  outC->_L43 = outC->_L34[2];
  _12_noname = outC->_L43;
  outC->_L44 = outC->_L34[3];
  outC->_L45 = outC->_L34[4];
  outC->_L46 = outC->_L34[5];
  /* _L29=(TM_conversions::CAST_Int_to_T_CYCRQST#1)/ */
  CAST_Int_to_T_CYCRQST_TM_conversions(
    outC->_L46,
    &outC->Context_CAST_Int_to_T_CYCRQST_1);
  outC->_L29 = outC->Context_CAST_Int_to_T_CYCRQST_1.t_cycloc;
  /* _L27=(TM_conversions::CAST_Int_to_T_TIMEOUTRQST#1)/ */
  CAST_Int_to_T_TIMEOUTRQST_TM_conversions(
    outC->_L45,
    &outC->Context_CAST_Int_to_T_TIMEOUTRQST_1);
  outC->_L27 = outC->Context_CAST_Int_to_T_TIMEOUTRQST_1.t_timeoutrqst;
  outC->_L21 = kcg_lit_int32(57);
  outC->_L12 = outC->nid_packet_CAST_Int_to_NID_PACKET_1;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  outC->_L11 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  /* _L4=(TM_conversions::CAST_Int_to_T_MAR#1)/ */
  CAST_Int_to_T_MAR_TM_conversions(
    outC->_L44,
    &outC->Context_CAST_Int_to_T_MAR_1);
  outC->_L4 = outC->Context_CAST_Int_to_T_MAR_1.t_mar;
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.t_mar = outC->_L4;
  outC->_L10.t_timeoutrqst = outC->_L27;
  outC->_L10.t_cycrqst = outC->_L29;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->P057_onboard,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P057_compr_onboard_init_TM_conversions(
  outC_C_P057_compr_onboard_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L41 = kcg_lit_int32(0);
  outC->_L42 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(0);
  outC->_L44 = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(0);
  outC->_L46 = kcg_lit_int32(0);
  for (idx = 0; idx < 6; idx++) {
    outC->_L34[idx] = kcg_lit_int32(0);
  }
  outC->_L29 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20.nid_packet = kcg_lit_int32(0);
  outC->_L20.q_dir = Q_DIR_Reverse;
  outC->_L20.valid = kcg_true;
  outC->_L20.startAddress = kcg_lit_int32(0);
  outC->_L20.endAddress = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L9[idx1] = kcg_lit_int32(0);
  }
  outC->_L10.valid = kcg_true;
  outC->_L10.q_dir = Q_DIR_Reverse;
  outC->_L10.t_mar = kcg_lit_int32(0);
  outC->_L10.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L10.t_cycrqst = kcg_lit_int32(0);
  outC->_L11 = Q_DIR_Reverse;
  outC->_L12 = kcg_lit_int32(0);
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
  outC->P057_onboard.valid = kcg_true;
  outC->P057_onboard.q_dir = Q_DIR_Reverse;
  outC->P057_onboard.t_mar = kcg_lit_int32(0);
  outC->P057_onboard.t_timeoutrqst = kcg_lit_int32(0);
  outC->P057_onboard.t_cycrqst = kcg_lit_int32(0);
  /* _L4=(TM_conversions::CAST_Int_to_T_MAR#1)/ */
  CAST_Int_to_T_MAR_init_TM_conversions(&outC->Context_CAST_Int_to_T_MAR_1);
  /* _L27=(TM_conversions::CAST_Int_to_T_TIMEOUTRQST#1)/ */
  CAST_Int_to_T_TIMEOUTRQST_init_TM_conversions(
    &outC->Context_CAST_Int_to_T_TIMEOUTRQST_1);
  /* _L29=(TM_conversions::CAST_Int_to_T_CYCRQST#1)/ */
  CAST_Int_to_T_CYCRQST_init_TM_conversions(
    &outC->Context_CAST_Int_to_T_CYCRQST_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P057_compr_onboard_reset_TM_conversions(
  outC_C_P057_compr_onboard_TM_conversions *outC)
{
  /* _L4=(TM_conversions::CAST_Int_to_T_MAR#1)/ */
  CAST_Int_to_T_MAR_reset_TM_conversions(&outC->Context_CAST_Int_to_T_MAR_1);
  /* _L27=(TM_conversions::CAST_Int_to_T_TIMEOUTRQST#1)/ */
  CAST_Int_to_T_TIMEOUTRQST_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_TIMEOUTRQST_1);
  /* _L29=(TM_conversions::CAST_Int_to_T_CYCRQST#1)/ */
  CAST_Int_to_T_CYCRQST_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_CYCRQST_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_conversions::C_P057_compr_onboard/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P057_compr_onboard_TM_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

