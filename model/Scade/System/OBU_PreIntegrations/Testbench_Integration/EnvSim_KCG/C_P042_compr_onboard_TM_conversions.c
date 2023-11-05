/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P042_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P042_compr_onboard/ */
void C_P042_compr_onboard_TM_conversions(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P042_compr_onboard_TM_conversions *outC)
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

  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  outC->_L24 = outC->_L9[1];
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L24;
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
  outC->_L23 = outC->_L9[0];
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = outC->_L23;
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
  outC->_L32 = outC->_L9[7];
  /* _L33=(TM_conversions::CAST_Int_to_Q_SLEEPSESSION#1)/ */
  CAST_Int_to_Q_SLEEPSESSION_TM_conversions(
    outC->_L32,
    &outC->Context_CAST_Int_to_Q_SLEEPSESSION_1);
  outC->_L33 = outC->Context_CAST_Int_to_Q_SLEEPSESSION_1.q_sleepsession;
  outC->_L30 = outC->_L9[6];
  /* _L31=(TM_conversions::CAST_Int_to_NID_RADIO#1)/ */
  CAST_Int_to_NID_RADIO_TM_conversions(
    outC->_L30,
    &outC->Context_CAST_Int_to_NID_RADIO_1);
  outC->_L31 = outC->Context_CAST_Int_to_NID_RADIO_1.nid_radio;
  outC->_L28 = outC->_L9[5];
  /* _L29=(TM_conversions::CAST_Int_to_NID_RBC#1)/ */
  CAST_Int_to_NID_RBC_TM_conversions(
    outC->_L28,
    &outC->Context_CAST_Int_to_NID_RBC_1);
  outC->_L29 = outC->Context_CAST_Int_to_NID_RBC_1.nid_rbc;
  outC->_L26 = outC->_L9[4];
  /* _L27=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_TM_conversions(
    outC->_L26,
    &outC->Context_CAST_Int_to_NID_C_1);
  outC->_L27 = outC->Context_CAST_Int_to_NID_C_1.nid_c;
  outC->_L25 = outC->_L9[3];
  outC->_L21 = kcg_lit_int32(42);
  outC->_L12 = outC->nid_packet_CAST_Int_to_NID_PACKET_1;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  outC->_L11 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  /* _L4=(TM_conversions::CAST_Int_to_Q_RBC#1)/ */
  CAST_Int_to_Q_RBC_TM_conversions(
    outC->_L25,
    &outC->Context_CAST_Int_to_Q_RBC_1);
  outC->_L4 = outC->Context_CAST_Int_to_Q_RBC_1.q_rbc;
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.q_rbc = outC->_L4;
  outC->_L10.nid_c = outC->_L27;
  outC->_L10.nid_rbc = outC->_L29;
  outC->_L10.nid_radio = outC->_L31;
  outC->_L10.q_sleepsession = outC->_L33;
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->P131_onboard,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P042_compr_onboard_init_TM_conversions(
  outC_C_P042_compr_onboard_TM_conversions *outC)
{
  static kcg_size idx;

  outC->_L33 = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L32 = kcg_lit_int32(0);
  outC->_L31 = kcg_lit_int32(0);
  outC->_L30 = kcg_lit_int32(0);
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20.nid_packet = kcg_lit_int32(0);
  outC->_L20.q_dir = Q_DIR_Reverse;
  outC->_L20.valid = kcg_true;
  outC->_L20.startAddress = kcg_lit_int32(0);
  outC->_L20.endAddress = kcg_lit_int32(0);
  outC->_L4 = Q_RBC_Terminate_communication_session;
  for (idx = 0; idx < 500; idx++) {
    outC->_L9[idx] = kcg_lit_int32(0);
  }
  outC->_L10.valid = kcg_true;
  outC->_L10.q_dir = Q_DIR_Reverse;
  outC->_L10.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L10.nid_c = kcg_lit_int32(0);
  outC->_L10.nid_rbc = kcg_lit_int32(0);
  outC->_L10.nid_radio = kcg_lit_int32(0);
  outC->_L10.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
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
  outC->P131_onboard.valid = kcg_true;
  outC->P131_onboard.q_dir = Q_DIR_Reverse;
  outC->P131_onboard.q_rbc = Q_RBC_Terminate_communication_session;
  outC->P131_onboard.nid_c = kcg_lit_int32(0);
  outC->P131_onboard.nid_rbc = kcg_lit_int32(0);
  outC->P131_onboard.nid_radio = kcg_lit_int32(0);
  outC->P131_onboard.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  /* _L4=(TM_conversions::CAST_Int_to_Q_RBC#1)/ */
  CAST_Int_to_Q_RBC_init_TM_conversions(&outC->Context_CAST_Int_to_Q_RBC_1);
  /* _L27=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_init_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
  /* _L29=(TM_conversions::CAST_Int_to_NID_RBC#1)/ */
  CAST_Int_to_NID_RBC_init_TM_conversions(&outC->Context_CAST_Int_to_NID_RBC_1);
  /* _L31=(TM_conversions::CAST_Int_to_NID_RADIO#1)/ */
  CAST_Int_to_NID_RADIO_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_RADIO_1);
  /* _L33=(TM_conversions::CAST_Int_to_Q_SLEEPSESSION#1)/ */
  CAST_Int_to_Q_SLEEPSESSION_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_SLEEPSESSION_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P042_compr_onboard_reset_TM_conversions(
  outC_C_P042_compr_onboard_TM_conversions *outC)
{
  /* _L4=(TM_conversions::CAST_Int_to_Q_RBC#1)/ */
  CAST_Int_to_Q_RBC_reset_TM_conversions(&outC->Context_CAST_Int_to_Q_RBC_1);
  /* _L27=(TM_conversions::CAST_Int_to_NID_C#1)/ */
  CAST_Int_to_NID_C_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_C_1);
  /* _L29=(TM_conversions::CAST_Int_to_NID_RBC#1)/ */
  CAST_Int_to_NID_RBC_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_RBC_1);
  /* _L31=(TM_conversions::CAST_Int_to_NID_RADIO#1)/ */
  CAST_Int_to_NID_RADIO_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_RADIO_1);
  /* _L33=(TM_conversions::CAST_Int_to_Q_SLEEPSESSION#1)/ */
  CAST_Int_to_Q_SLEEPSESSION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_SLEEPSESSION_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_conversions::C_P042_compr_onboard/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P042_compr_onboard_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

