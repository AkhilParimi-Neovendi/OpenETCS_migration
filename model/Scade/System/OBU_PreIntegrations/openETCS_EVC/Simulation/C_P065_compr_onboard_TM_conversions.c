/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P065_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P065_compr_onboard/ */
void C_P065_compr_onboard_TM_conversions(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P065_compr_onboard_TM_conversions *outC)
{
  kcg_bool noname_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR _1_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool _2_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool _3_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR _4_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool _5_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR _6_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool _7_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR _8_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @1/error/ */
  kcg_bool _9_error_partial_CAST_Int_to_Q_DIR_1;
  /* @1/q_dir/ */
  Q_DIR _10_q_dir_partial_CAST_Int_to_Q_DIR_1;
  kcg_bool noname_CAST_Int_to_NID_PACKET_1;
  kcg_bool _11_noname_CAST_Int_to_NID_PACKET_1;
  kcg_bool noname_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE _12_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool _13_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool _14_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE _15_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool _16_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE _17_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool _18_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE _19_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/error/ */
  kcg_bool _20_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @3/q_scale/ */
  Q_SCALE _21_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  MetadataElement_T_Common_Types_Pkg noname;
  kcg_int32 _22_noname;

  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int32_9(&outC->_L46, (array_int32_9 *) &outC->_L9[0]);
  outC->_L35 = outC->_L46[1];
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L35;
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
    outC->_1_else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 =
      outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_reverse_TM_conversions;
    /* @1/IfBlock1:else: */
    if (outC->_1_else_clock_CAST_Int_to_Q_DIR_1_IfBlock1) {
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
  outC->_L34 = outC->_L46[0];
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = outC->_L34;
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
  outC->_L37 = outC->_L46[3];
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1 = outC->_L37;
  outC->_L2_CAST_Int_to_Q_SCALE_1 = outC->q_scale_int_CAST_Int_to_Q_SCALE_1;
  outC->q_scale_in_CAST_Int_to_Q_SCALE_1 = outC->_L2_CAST_Int_to_Q_SCALE_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1 =
    outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* @3/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_4__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_false;
    _20_error_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_4__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->error_CAST_Int_to_Q_SCALE_1 = _20_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    outC->_2_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 =
      outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_1m_TM_conversions;
    /* @3/IfBlock1:else: */
    if (outC->_2_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _18_error_partial_CAST_Int_to_Q_SCALE_1 = error_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1 =
        outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10m_TM_conversions;
      /* @3/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 = kcg_false;
        _16_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _13_error_partial_CAST_Int_to_Q_SCALE_1 =
          _16_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 = kcg_true;
        _14_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _13_error_partial_CAST_Int_to_Q_SCALE_1 =
          _14_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      _18_error_partial_CAST_Int_to_Q_SCALE_1 =
        _13_error_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->error_CAST_Int_to_Q_SCALE_1 = _18_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L4_CAST_Int_to_Q_SCALE_1 = outC->error_CAST_Int_to_Q_SCALE_1;
  noname_CAST_Int_to_Q_SCALE_1 = outC->_L4_CAST_Int_to_Q_SCALE_1;
  /* @3/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1 =
      ENUM_Q_SCALE_10cm_TM_conversions;
    _21_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _21_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    /* @3/IfBlock1:else: */
    if (outC->_2_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 =
        ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _19_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      /* @3/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_3__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 =
          ENUM_Q_SCALE_10m_TM_conversions;
        _17_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_3__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _12_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _17_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 =
          ENUM_Q_SCALE_10cm_TM_conversions;
        _15_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _12_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _15_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      _19_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        _12_q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _19_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L48 = outC->q_scale_CAST_Int_to_Q_SCALE_1;
  outC->_L47 = outC->_L46[8];
  /* _L45=(TM_conversions::CAST_Int_to_V_TSR#1)/ */
  CAST_Int_to_V_TSR_TM_conversions(
    outC->_L47,
    &outC->Context_CAST_Int_to_V_TSR_1);
  outC->_L45 = outC->Context_CAST_Int_to_V_TSR_1.v_tsr;
  outC->_L41 = outC->_L46[7];
  /* _L44=(TM_conversions::CAST_Int_to_Q_FRONT#1)/ */
  CAST_Int_to_Q_FRONT_TM_conversions(
    outC->_L41,
    &outC->Context_CAST_Int_to_Q_FRONT_1);
  outC->_L44 = outC->Context_CAST_Int_to_Q_FRONT_1.q_front;
  outC->_L40 = outC->_L46[6];
  /* _L43=(TM_conversions::CAST_Int_to_L_TSR#1)/ */
  CAST_Int_to_L_TSR_TM_conversions(
    outC->_L40,
    &outC->Context_CAST_Int_to_L_TSR_1);
  outC->_L43 = outC->Context_CAST_Int_to_L_TSR_1.l_tsr;
  outC->_L39 = outC->_L46[5];
  /* _L42=(TM_conversions::CAST_Int_to_NID_TSR#1)/ */
  CAST_Int_to_NID_TSR_TM_conversions(
    outC->_L39,
    &outC->Context_CAST_Int_to_NID_TSR_1);
  outC->_L42 = outC->Context_CAST_Int_to_NID_TSR_1.nid_tsr;
  outC->_L36 = outC->_L46[2];
  _22_noname = outC->_L36;
  outC->_L38 = outC->_L46[4];
  outC->_L21 = kcg_lit_int32(65);
  outC->_L12 = outC->nid_packet_CAST_Int_to_NID_PACKET_1;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  outC->_L11 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  /* _L4=(TM_conversions::CAST_Int_to_NID_MN#1)/ */
  CAST_Int_to_NID_MN_TM_conversions(
    outC->_L38,
    &outC->Context_CAST_Int_to_NID_MN_1);
  outC->_L4 = outC->Context_CAST_Int_to_NID_MN_1.nid_mn;
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.q_scale = outC->_L48;
  outC->_L10.nid_tsr = outC->_L4;
  outC->_L10.d_tsr = outC->_L42;
  outC->_L10.l_tsr = outC->_L43;
  outC->_L10.q_front = outC->_L44;
  outC->_L10.v_tsr = outC->_L45;
  kcg_copy_P065_OBU_T_TM(&outC->P065_onboard, &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P065_compr_onboard_init_TM_conversions(
  outC_C_P065_compr_onboard_TM_conversions *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L48 = Q_SCALE_10_cm_scale;
  outC->_L47 = kcg_lit_int32(0);
  for (idx = 0; idx < 9; idx++) {
    outC->_L46[idx] = kcg_lit_int32(0);
  }
  outC->_L45 = kcg_lit_int32(0);
  outC->_L44 =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->_L43 = kcg_lit_int32(0);
  outC->_L42 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L35 = kcg_lit_int32(0);
  outC->_L36 = kcg_lit_int32(0);
  outC->_L37 = kcg_lit_int32(0);
  outC->_L38 = kcg_lit_int32(0);
  outC->_L39 = kcg_lit_int32(0);
  outC->_L40 = kcg_lit_int32(0);
  outC->_L41 = kcg_lit_int32(0);
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
  outC->_L10.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.nid_tsr = kcg_lit_int32(0);
  outC->_L10.d_tsr = kcg_lit_int32(0);
  outC->_L10.l_tsr = kcg_lit_int32(0);
  outC->_L10.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->_L10.v_tsr = kcg_lit_int32(0);
  outC->_L11 = Q_DIR_Reverse;
  outC->_L12 = kcg_lit_int32(0);
  outC->_4__L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = Q_SCALE_10_cm_scale;
  outC->_2_else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 = kcg_true;
  outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 = kcg_true;
  outC->_3__L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 =
    Q_SCALE_10_cm_scale;
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
  outC->_L1_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L4_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_true;
  outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = Q_DIR_Reverse;
  outC->_1_else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 = kcg_true;
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
  outC->P065_onboard.valid = kcg_true;
  outC->P065_onboard.q_dir = Q_DIR_Reverse;
  outC->P065_onboard.q_scale = Q_SCALE_10_cm_scale;
  outC->P065_onboard.nid_tsr = kcg_lit_int32(0);
  outC->P065_onboard.d_tsr = kcg_lit_int32(0);
  outC->P065_onboard.l_tsr = kcg_lit_int32(0);
  outC->P065_onboard.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->P065_onboard.v_tsr = kcg_lit_int32(0);
  /* _L4=(TM_conversions::CAST_Int_to_NID_MN#1)/ */
  CAST_Int_to_NID_MN_init_TM_conversions(&outC->Context_CAST_Int_to_NID_MN_1);
  /* _L42=(TM_conversions::CAST_Int_to_NID_TSR#1)/ */
  CAST_Int_to_NID_TSR_init_TM_conversions(&outC->Context_CAST_Int_to_NID_TSR_1);
  /* _L43=(TM_conversions::CAST_Int_to_L_TSR#1)/ */
  CAST_Int_to_L_TSR_init_TM_conversions(&outC->Context_CAST_Int_to_L_TSR_1);
  /* _L44=(TM_conversions::CAST_Int_to_Q_FRONT#1)/ */
  CAST_Int_to_Q_FRONT_init_TM_conversions(&outC->Context_CAST_Int_to_Q_FRONT_1);
  /* _L45=(TM_conversions::CAST_Int_to_V_TSR#1)/ */
  CAST_Int_to_V_TSR_init_TM_conversions(&outC->Context_CAST_Int_to_V_TSR_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P065_compr_onboard_reset_TM_conversions(
  outC_C_P065_compr_onboard_TM_conversions *outC)
{
  /* _L4=(TM_conversions::CAST_Int_to_NID_MN#1)/ */
  CAST_Int_to_NID_MN_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_MN_1);
  /* _L42=(TM_conversions::CAST_Int_to_NID_TSR#1)/ */
  CAST_Int_to_NID_TSR_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_TSR_1);
  /* _L43=(TM_conversions::CAST_Int_to_L_TSR#1)/ */
  CAST_Int_to_L_TSR_reset_TM_conversions(&outC->Context_CAST_Int_to_L_TSR_1);
  /* _L44=(TM_conversions::CAST_Int_to_Q_FRONT#1)/ */
  CAST_Int_to_Q_FRONT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_FRONT_1);
  /* _L45=(TM_conversions::CAST_Int_to_V_TSR#1)/ */
  CAST_Int_to_V_TSR_reset_TM_conversions(&outC->Context_CAST_Int_to_V_TSR_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_conversions::C_P065_compr_onboard/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
  @3: (TM_conversions::CAST_Int_to_Q_SCALE#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P065_compr_onboard_TM_conversions.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

