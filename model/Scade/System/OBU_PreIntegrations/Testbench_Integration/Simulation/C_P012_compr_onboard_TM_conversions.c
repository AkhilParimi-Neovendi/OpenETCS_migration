/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P012_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P012_compr_onboard/ */
void C_P012_compr_onboard_TM_conversions(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P012_compr_onboard_TM_conversions *outC)
{
  static kcg_bool noname_CAST_Int_to_NID_PACKET_1;
  static kcg_bool _1_noname_CAST_Int_to_NID_PACKET_1;
  static kcg_bool noname_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  static Q_SCALE q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  static Q_SCALE _2_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  static kcg_bool _3_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  static kcg_bool _4_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  static Q_SCALE _5_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  static kcg_bool _6_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  static Q_SCALE _7_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  static kcg_bool _8_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  static Q_SCALE _9_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/error/ */
  static kcg_bool _10_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @2/q_scale/ */
  static Q_SCALE _11_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  static kcg_bool noname_CAST_Int_to_N_ITER_1;
  static kcg_bool _12_noname_CAST_Int_to_N_ITER_1;
  static kcg_bool noname_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR _13_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool _14_error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool _15_error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR _16_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool _17_error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR _18_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool _19_error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR _20_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @4/error/ */
  static kcg_bool _21_error_partial_CAST_Int_to_Q_DIR_1;
  /* @4/q_dir/ */
  static Q_DIR _22_q_dir_partial_CAST_Int_to_Q_DIR_1;
  static MetadataElement_T_Common_Types_Pkg noname;
  static kcg_int64 _23_noname;

  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L93, PacketData);
  kcg_copy_array_int64_7(&outC->_L125, (array_int64_7 *) &outC->_L93[0]);
  outC->_L96 = outC->_L125[0];
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = outC->_L96;
  outC->_L1_CAST_Int_to_NID_PACKET_1 =
    outC->nid_packet_int_CAST_Int_to_NID_PACKET_1;
  outC->_L4_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 <
    outC->_L5_CAST_Int_to_NID_PACKET_1;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(256);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 >
    outC->_L3_CAST_Int_to_NID_PACKET_1;
  noname_CAST_Int_to_NID_PACKET_1 = outC->_L2_CAST_Int_to_NID_PACKET_1;
  _1_noname_CAST_Int_to_NID_PACKET_1 = outC->_L4_CAST_Int_to_NID_PACKET_1;
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1;
  outC->_L99 = outC->_L125[3];
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1 = outC->_L99;
  outC->_L2_CAST_Int_to_Q_SCALE_1 = outC->q_scale_int_CAST_Int_to_Q_SCALE_1;
  outC->q_scale_in_CAST_Int_to_Q_SCALE_1 = outC->_L2_CAST_Int_to_Q_SCALE_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1 =
    outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* @2/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_false;
    _10_error_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->error_CAST_Int_to_Q_SCALE_1 = _10_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    outC->else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 =
      outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_1m_TM_conversions;
    /* @2/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _8_error_partial_CAST_Int_to_Q_SCALE_1 = error_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1 =
        outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10m_TM_conversions;
      /* @2/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 = kcg_false;
        _6_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _3_error_partial_CAST_Int_to_Q_SCALE_1 = _6_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 = kcg_true;
        _4_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _3_error_partial_CAST_Int_to_Q_SCALE_1 = _4_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      _8_error_partial_CAST_Int_to_Q_SCALE_1 = _3_error_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->error_CAST_Int_to_Q_SCALE_1 = _8_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L4_CAST_Int_to_Q_SCALE_1 = outC->error_CAST_Int_to_Q_SCALE_1;
  noname_CAST_Int_to_Q_SCALE_1 = outC->_L4_CAST_Int_to_Q_SCALE_1;
  /* @2/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1 =
      ENUM_Q_SCALE_10cm_TM_conversions;
    _11_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _11_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    /* @2/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 =
        ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _9_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      /* @2/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 =
          ENUM_Q_SCALE_10m_TM_conversions;
        _7_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _2_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _7_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 =
          ENUM_Q_SCALE_10cm_TM_conversions;
        _5_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _2_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _5_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      _9_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        _2_q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _9_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->_L139 = outC->_L93[22];
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = outC->_L139;
  outC->_L1_CAST_Int_to_N_ITER_1 = outC->n_iter_int_CAST_Int_to_N_ITER_1;
  outC->_L10_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 <
    outC->_L11_CAST_Int_to_N_ITER_1;
  noname_CAST_Int_to_N_ITER_1 = outC->_L10_CAST_Int_to_N_ITER_1;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int64(31);
  outC->_L12_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 >
    outC->_L9_CAST_Int_to_N_ITER_1;
  _12_noname_CAST_Int_to_N_ITER_1 = outC->_L12_CAST_Int_to_N_ITER_1;
  outC->n_iter_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1;
  outC->_L97 = outC->_L125[1];
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L97;
  outC->_L12_CAST_Int_to_Q_DIR_1 = outC->q_dir_int_CAST_Int_to_Q_DIR_1;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = outC->_L12_CAST_Int_to_Q_DIR_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1 =
    outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* @4/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1) {
    outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_false;
    _21_error_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _22_q_dir_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _22_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _21_error_partial_CAST_Int_to_Q_DIR_1;
  }
  else {
    outC->else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 =
      outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_reverse_TM_conversions;
    /* @4/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_DIR_1_IfBlock1) {
      outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 =
        ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      _20_q_dir_partial_CAST_Int_to_Q_DIR_1 = q_dir_partial_CAST_Int_to_Q_DIR_1;
      _19_error_partial_CAST_Int_to_Q_DIR_1 = error_partial_CAST_Int_to_Q_DIR_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1 =
        outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_both_TM_conversions;
      /* @4/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = kcg_false;
        _17_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        _18_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        _13_q_dir_partial_CAST_Int_to_Q_DIR_1 = _18_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _14_error_partial_CAST_Int_to_Q_DIR_1 = _17_error_partial_CAST_Int_to_Q_DIR_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = kcg_true;
        _15_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _16_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _13_q_dir_partial_CAST_Int_to_Q_DIR_1 = _16_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _14_error_partial_CAST_Int_to_Q_DIR_1 = _15_error_partial_CAST_Int_to_Q_DIR_1;
      }
      _20_q_dir_partial_CAST_Int_to_Q_DIR_1 = _13_q_dir_partial_CAST_Int_to_Q_DIR_1;
      _19_error_partial_CAST_Int_to_Q_DIR_1 = _14_error_partial_CAST_Int_to_Q_DIR_1;
    }
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _20_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _19_error_partial_CAST_Int_to_Q_DIR_1;
  }
  outC->_L13_CAST_Int_to_Q_DIR_1 = outC->error_CAST_Int_to_Q_DIR_1;
  noname_CAST_Int_to_Q_DIR_1 = outC->_L13_CAST_Int_to_Q_DIR_1;
  outC->_L100 = outC->_L125[4];
  /* _L145=(TM_conversions::CAST_Int_to_V_MAIN#1)/ */
  CAST_Int_to_V_MAIN_TM_conversions(
    outC->_L100,
    &outC->Context_CAST_Int_to_V_MAIN_1);
  outC->_L145 = outC->Context_CAST_Int_to_V_MAIN_1.v_main;
  kcg_copy_array_int64_128(&outC->_L144, (array_int64_128 *) &outC->_L93[23]);
  kcg_copy_array_int64_15(&outC->_L138, (array_int64_15 *) &outC->_L93[7]);
  outC->_L106 = outC->_L138[2];
  /* _L143=(TM_conversions::CAST_Int_to_T_SECTIONTIMER#1)/ */
  CAST_Int_to_T_SECTIONTIMER_TM_conversions(
    outC->_L106,
    &outC->Context_CAST_Int_to_T_SECTIONTIMER_1);
  outC->_L143 = outC->Context_CAST_Int_to_T_SECTIONTIMER_1.t_sectiontimer;
  outC->_L128 = outC->nid_packet_CAST_Int_to_NID_PACKET_1;
  outC->_L124 = kcg_lit_int64(12);
  outC->_L132 = outC->_L124 == outC->_L128;
  outC->nid_packet_ok = outC->_L132;
  outC->_L140 = outC->nid_packet_ok;
  outC->_L135 = outC->n_iter_CAST_Int_to_N_ITER_1;
  /* _L102=(TM_lib_internal::C_P012_unflatten_sections#1)/ */
  C_P012_unflatten_sections_TM_lib_internal(
    outC->_L140,
    outC->_L135,
    &outC->_L144,
    &outC->Context_C_P012_unflatten_sections_1);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(
    &outC->_L102,
    &outC->Context_C_P012_unflatten_sections_1.sections);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->sections, &outC->_L102);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L141, &outC->sections);
  outC->_L107 = outC->_L138[3];
  /* _L137=(TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC#1)/ */
  CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions(
    outC->_L107,
    &outC->Context_CAST_Int_to_D_SECTIONTIMERSTOPLOC_1);
  outC->_L137 =
    outC->Context_CAST_Int_to_D_SECTIONTIMERSTOPLOC_1.d_sectiontimerstoploc;
  outC->_L136 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L115 = outC->_L138[11];
  /* _L134=(TM_conversions::CAST_Int_to_D_STARTOL#1)/ */
  CAST_Int_to_D_STARTOL_TM_conversions(
    outC->_L115,
    &outC->Context_CAST_Int_to_D_STARTOL_1);
  outC->_L134 = outC->Context_CAST_Int_to_D_STARTOL_1.d_startol;
  outC->_L110 = outC->_L138[6];
  /* _L133=(TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC#1)/ */
  CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions(
    outC->_L110,
    &outC->Context_CAST_Int_to_D_ENDTIMERSTARTLOC_1);
  outC->_L133 = outC->Context_CAST_Int_to_D_ENDTIMERSTARTLOC_1.d_endtimerstartloc;
  outC->n_iter = outC->_L135;
  outC->_L142 = outC->_L138[14];
  /* _L131=(TM_conversions::CAST_Int_to_V_RELEASEOL#1)/ */
  CAST_Int_to_V_RELEASEOL_TM_conversions(
    outC->_L142,
    &outC->Context_CAST_Int_to_V_RELEASEOL_1);
  outC->_L131 = outC->Context_CAST_Int_to_V_RELEASEOL_1.v_releaseol;
  outC->_L130 = outC->q_scale_CAST_Int_to_Q_SCALE_1;
  outC->_L104 = outC->_L138[0];
  /* _L129=(TM_conversions::CAST_Int_to_L_ENDSECTION#1)/ */
  CAST_Int_to_L_ENDSECTION_TM_conversions(
    outC->_L104,
    &outC->Context_CAST_Int_to_L_ENDSECTION_1);
  outC->_L129 = outC->Context_CAST_Int_to_L_ENDSECTION_1.l_endsection;
  outC->_L98 = outC->_L125[2];
  _23_noname = outC->_L98;
  outC->_L113 = outC->_L138[9];
  /* _L127=(TM_conversions::CAST_Int_to_V_RELEASEDP#1)/ */
  CAST_Int_to_V_RELEASEDP_TM_conversions(
    outC->_L113,
    &outC->Context_CAST_Int_to_V_RELEASEDP_1);
  outC->_L127 = outC->Context_CAST_Int_to_V_RELEASEDP_1.v_releasedp;
  outC->_L108 = outC->_L138[4];
  /* _L126=(TM_conversions::CAST_Int_to_Q_ENDTIMER#1)/ */
  CAST_Int_to_Q_ENDTIMER_TM_conversions(
    outC->_L108,
    &outC->Context_CAST_Int_to_Q_ENDTIMER_1);
  outC->_L126 = outC->Context_CAST_Int_to_Q_ENDTIMER_1.q_endtimer;
  outC->_L116 = outC->_L138[12];
  /* _L123=(TM_conversions::CAST_Int_to_T_OL#1)/ */
  CAST_Int_to_T_OL_TM_conversions(
    outC->_L116,
    &outC->Context_CAST_Int_to_T_OL_1);
  outC->_L123 = outC->Context_CAST_Int_to_T_OL_1.t_ol;
  outC->_L101 = outC->_L125[5];
  /* _L92=(TM_conversions::CAST_Int_to_V_LOA#1)/ */
  CAST_Int_to_V_LOA_TM_conversions(
    outC->_L101,
    &outC->Context_CAST_Int_to_V_LOA_1);
  outC->_L92 = outC->Context_CAST_Int_to_V_LOA_1.v_loa;
  outC->_L146 = outC->_L125[6];
  /* _L121=(TM_conversions::CAST_Int_to_T_LOA#1)/ */
  CAST_Int_to_T_LOA_TM_conversions(
    outC->_L146,
    &outC->Context_CAST_Int_to_T_LOA_1);
  outC->_L121 = outC->Context_CAST_Int_to_T_LOA_1.t_loa;
  outC->_L95 = outC->n_iter;
  outC->_L105 = outC->_L138[1];
  /* _L118=(TM_conversions::CAST_Int_to_Q_SECTIONTIMER#1)/ */
  CAST_Int_to_Q_SECTIONTIMER_TM_conversions(
    outC->_L105,
    &outC->Context_CAST_Int_to_Q_SECTIONTIMER_1);
  outC->_L118 = outC->Context_CAST_Int_to_Q_SECTIONTIMER_1.q_sectiontimer;
  outC->_L109 = outC->_L138[5];
  /* _L94=(TM_conversions::CAST_Int_to_T_ENDTIMER#1)/ */
  CAST_Int_to_T_ENDTIMER_TM_conversions(
    outC->_L109,
    &outC->Context_CAST_Int_to_T_ENDTIMER_1);
  outC->_L94 = outC->Context_CAST_Int_to_T_ENDTIMER_1.t_endtimer;
  outC->_L111 = outC->_L138[7];
  /* _L119=(TM_conversions::CAST_Int_to_Q_DANGERPOINT#1)/ */
  CAST_Int_to_Q_DANGERPOINT_TM_conversions(
    outC->_L111,
    &outC->Context_CAST_Int_to_Q_DANGERPOINT_1);
  outC->_L119 = outC->Context_CAST_Int_to_Q_DANGERPOINT_1.q_dangerpoint;
  outC->_L112 = outC->_L138[8];
  /* _L90=(TM_conversions::CAST_Int_to_D_DP#1)/ */
  CAST_Int_to_D_DP_TM_conversions(
    outC->_L112,
    &outC->Context_CAST_Int_to_D_DP_1);
  outC->_L90 = outC->Context_CAST_Int_to_D_DP_1.d_dp;
  outC->_L114 = outC->_L138[10];
  /* _L103=(TM_conversions::CAST_Int_to_Q_OVERLAP#1)/ */
  CAST_Int_to_Q_OVERLAP_TM_conversions(
    outC->_L114,
    &outC->Context_CAST_Int_to_Q_OVERLAP_1);
  outC->_L103 = outC->Context_CAST_Int_to_Q_OVERLAP_1.q_overlap;
  outC->_L117 = outC->_L138[13];
  /* _L91=(TM_conversions::CAST_Int_to_D_OL#1)/ */
  CAST_Int_to_D_OL_TM_conversions(
    outC->_L117,
    &outC->Context_CAST_Int_to_D_OL_1);
  outC->_L91 = outC->Context_CAST_Int_to_D_OL_1.d_ol;
  outC->_L122.valid = outC->_L132;
  outC->_L122.q_dir = outC->_L136;
  outC->_L122.q_scale = outC->_L130;
  outC->_L122.v_main = outC->_L145;
  outC->_L122.v_loa = outC->_L92;
  outC->_L122.t_loa = outC->_L121;
  outC->_L122.n_iter = outC->_L95;
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L122.sections, &outC->_L141);
  outC->_L122.l_endsection = outC->_L129;
  outC->_L122.q_sectiontimer = outC->_L118;
  outC->_L122.t_sectiontimer = outC->_L143;
  outC->_L122.d_sectiontimerstoploc = outC->_L137;
  outC->_L122.q_endtimer = outC->_L126;
  outC->_L122.t_endtimer = outC->_L94;
  outC->_L122.d_endtimerstartloc = outC->_L133;
  outC->_L122.q_dangerpoint = outC->_L119;
  outC->_L122.d_dp = outC->_L90;
  outC->_L122.v_releasedp = outC->_L127;
  outC->_L122.q_overlap = outC->_L103;
  outC->_L122.d_startol = outC->_L134;
  outC->_L122.t_ol = outC->_L123;
  outC->_L122.d_ol = outC->_L91;
  outC->_L122.v_releaseol = outC->_L131;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L89, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L89);
  kcg_copy_P012_OBU_T_TM(&outC->P012_onboard, &outC->_L122);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P012_compr_onboard_init_TM_conversions(
  outC_C_P012_compr_onboard_TM_conversions *outC)
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

  outC->_L146 = kcg_lit_int64(0);
  outC->_L145 = kcg_lit_int64(0);
  for (idx = 0; idx < 128; idx++) {
    outC->_L144[idx] = kcg_lit_int64(0);
  }
  outC->_L143 = kcg_lit_int64(0);
  outC->_L142 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L141[idx1].valid = kcg_true;
    outC->_L141[idx1].l_section = kcg_lit_int64(0);
    outC->_L141[idx1].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L141[idx1].t_sectiontimer = kcg_lit_int64(0);
    outC->_L141[idx1].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L140 = kcg_true;
  outC->_L89.nid_packet = kcg_lit_int64(0);
  outC->_L89.q_dir = Q_DIR_Reverse;
  outC->_L89.valid = kcg_true;
  outC->_L89.startAddress = kcg_lit_int64(0);
  outC->_L89.endAddress = kcg_lit_int64(0);
  outC->_L90 = kcg_lit_int64(0);
  outC->_L91 = kcg_lit_int64(0);
  outC->_L92 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L93[idx2] = kcg_lit_int64(0);
  }
  outC->_L94 = kcg_lit_int64(0);
  outC->_L95 = kcg_lit_int64(0);
  outC->_L101 = kcg_lit_int64(0);
  outC->_L100 = kcg_lit_int64(0);
  outC->_L99 = kcg_lit_int64(0);
  outC->_L98 = kcg_lit_int64(0);
  outC->_L97 = kcg_lit_int64(0);
  outC->_L96 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L102[idx3].valid = kcg_true;
    outC->_L102[idx3].l_section = kcg_lit_int64(0);
    outC->_L102[idx3].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L102[idx3].t_sectiontimer = kcg_lit_int64(0);
    outC->_L102[idx3].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L103 = Q_OVERLAP_No_overlap_information;
  outC->_L117 = kcg_lit_int64(0);
  outC->_L116 = kcg_lit_int64(0);
  outC->_L115 = kcg_lit_int64(0);
  outC->_L114 = kcg_lit_int64(0);
  outC->_L113 = kcg_lit_int64(0);
  outC->_L112 = kcg_lit_int64(0);
  outC->_L111 = kcg_lit_int64(0);
  outC->_L110 = kcg_lit_int64(0);
  outC->_L109 = kcg_lit_int64(0);
  outC->_L108 = kcg_lit_int64(0);
  outC->_L107 = kcg_lit_int64(0);
  outC->_L106 = kcg_lit_int64(0);
  outC->_L105 = kcg_lit_int64(0);
  outC->_L104 = kcg_lit_int64(0);
  outC->_L118 = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L119 = Q_DANGERPOINT_No_danger_point_information;
  outC->_L121 = kcg_lit_int64(0);
  outC->_L122.valid = kcg_true;
  outC->_L122.q_dir = Q_DIR_Reverse;
  outC->_L122.q_scale = Q_SCALE_10_cm_scale;
  outC->_L122.v_main = kcg_lit_int64(0);
  outC->_L122.v_loa = kcg_lit_int64(0);
  outC->_L122.t_loa = kcg_lit_int64(0);
  outC->_L122.n_iter = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L122.sections[idx4].valid = kcg_true;
    outC->_L122.sections[idx4].l_section = kcg_lit_int64(0);
    outC->_L122.sections[idx4].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L122.sections[idx4].t_sectiontimer = kcg_lit_int64(0);
    outC->_L122.sections[idx4].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L122.l_endsection = kcg_lit_int64(0);
  outC->_L122.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L122.t_sectiontimer = kcg_lit_int64(0);
  outC->_L122.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->_L122.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L122.t_endtimer = kcg_lit_int64(0);
  outC->_L122.d_endtimerstartloc = kcg_lit_int64(0);
  outC->_L122.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L122.d_dp = kcg_lit_int64(0);
  outC->_L122.v_releasedp = kcg_lit_int64(0);
  outC->_L122.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L122.d_startol = kcg_lit_int64(0);
  outC->_L122.t_ol = kcg_lit_int64(0);
  outC->_L122.d_ol = kcg_lit_int64(0);
  outC->_L122.v_releaseol = kcg_lit_int64(0);
  outC->_L123 = kcg_lit_int64(0);
  outC->_L124 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L125[idx5] = kcg_lit_int64(0);
  }
  outC->_L126 = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L127 = kcg_lit_int64(0);
  outC->_L128 = kcg_lit_int64(0);
  outC->_L129 = kcg_lit_int64(0);
  outC->_L130 = Q_SCALE_10_cm_scale;
  outC->_L131 = kcg_lit_int64(0);
  outC->_L132 = kcg_true;
  outC->_L133 = kcg_lit_int64(0);
  outC->_L134 = kcg_lit_int64(0);
  outC->_L135 = kcg_lit_int64(0);
  outC->_L136 = Q_DIR_Reverse;
  outC->_L137 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 15; idx6++) {
    outC->_L138[idx6] = kcg_lit_int64(0);
  }
  outC->_L139 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->sections[idx7].valid = kcg_true;
    outC->sections[idx7].l_section = kcg_lit_int64(0);
    outC->sections[idx7].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->sections[idx7].t_sectiontimer = kcg_lit_int64(0);
    outC->sections[idx7].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->nid_packet_ok = kcg_true;
  outC->n_iter = kcg_lit_int64(0);
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
  outC->_L1_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L4_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->P012_onboard.valid = kcg_true;
  outC->P012_onboard.q_dir = Q_DIR_Reverse;
  outC->P012_onboard.q_scale = Q_SCALE_10_cm_scale;
  outC->P012_onboard.v_main = kcg_lit_int64(0);
  outC->P012_onboard.v_loa = kcg_lit_int64(0);
  outC->P012_onboard.t_loa = kcg_lit_int64(0);
  outC->P012_onboard.n_iter = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->P012_onboard.sections[idx8].valid = kcg_true;
    outC->P012_onboard.sections[idx8].l_section = kcg_lit_int64(0);
    outC->P012_onboard.sections[idx8].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->P012_onboard.sections[idx8].t_sectiontimer = kcg_lit_int64(0);
    outC->P012_onboard.sections[idx8].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->P012_onboard.l_endsection = kcg_lit_int64(0);
  outC->P012_onboard.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->P012_onboard.t_sectiontimer = kcg_lit_int64(0);
  outC->P012_onboard.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->P012_onboard.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->P012_onboard.t_endtimer = kcg_lit_int64(0);
  outC->P012_onboard.d_endtimerstartloc = kcg_lit_int64(0);
  outC->P012_onboard.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->P012_onboard.d_dp = kcg_lit_int64(0);
  outC->P012_onboard.v_releasedp = kcg_lit_int64(0);
  outC->P012_onboard.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->P012_onboard.d_startol = kcg_lit_int64(0);
  outC->P012_onboard.t_ol = kcg_lit_int64(0);
  outC->P012_onboard.d_ol = kcg_lit_int64(0);
  outC->P012_onboard.v_releaseol = kcg_lit_int64(0);
  /* _L91=(TM_conversions::CAST_Int_to_D_OL#1)/ */
  CAST_Int_to_D_OL_init_TM_conversions(&outC->Context_CAST_Int_to_D_OL_1);
  /* _L103=(TM_conversions::CAST_Int_to_Q_OVERLAP#1)/ */
  CAST_Int_to_Q_OVERLAP_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_OVERLAP_1);
  /* _L90=(TM_conversions::CAST_Int_to_D_DP#1)/ */
  CAST_Int_to_D_DP_init_TM_conversions(&outC->Context_CAST_Int_to_D_DP_1);
  /* _L119=(TM_conversions::CAST_Int_to_Q_DANGERPOINT#1)/ */
  CAST_Int_to_Q_DANGERPOINT_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_DANGERPOINT_1);
  /* _L94=(TM_conversions::CAST_Int_to_T_ENDTIMER#1)/ */
  CAST_Int_to_T_ENDTIMER_init_TM_conversions(
    &outC->Context_CAST_Int_to_T_ENDTIMER_1);
  /* _L118=(TM_conversions::CAST_Int_to_Q_SECTIONTIMER#1)/ */
  CAST_Int_to_Q_SECTIONTIMER_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_SECTIONTIMER_1);
  /* _L121=(TM_conversions::CAST_Int_to_T_LOA#1)/ */
  CAST_Int_to_T_LOA_init_TM_conversions(&outC->Context_CAST_Int_to_T_LOA_1);
  /* _L92=(TM_conversions::CAST_Int_to_V_LOA#1)/ */
  CAST_Int_to_V_LOA_init_TM_conversions(&outC->Context_CAST_Int_to_V_LOA_1);
  /* _L123=(TM_conversions::CAST_Int_to_T_OL#1)/ */
  CAST_Int_to_T_OL_init_TM_conversions(&outC->Context_CAST_Int_to_T_OL_1);
  /* _L126=(TM_conversions::CAST_Int_to_Q_ENDTIMER#1)/ */
  CAST_Int_to_Q_ENDTIMER_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_ENDTIMER_1);
  /* _L127=(TM_conversions::CAST_Int_to_V_RELEASEDP#1)/ */
  CAST_Int_to_V_RELEASEDP_init_TM_conversions(
    &outC->Context_CAST_Int_to_V_RELEASEDP_1);
  /* _L129=(TM_conversions::CAST_Int_to_L_ENDSECTION#1)/ */
  CAST_Int_to_L_ENDSECTION_init_TM_conversions(
    &outC->Context_CAST_Int_to_L_ENDSECTION_1);
  /* _L131=(TM_conversions::CAST_Int_to_V_RELEASEOL#1)/ */
  CAST_Int_to_V_RELEASEOL_init_TM_conversions(
    &outC->Context_CAST_Int_to_V_RELEASEOL_1);
  /* _L133=(TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC#1)/ */
  CAST_Int_to_D_ENDTIMERSTARTLOC_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_ENDTIMERSTARTLOC_1);
  /* _L134=(TM_conversions::CAST_Int_to_D_STARTOL#1)/ */
  CAST_Int_to_D_STARTOL_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_STARTOL_1);
  /* _L137=(TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC#1)/ */
  CAST_Int_to_D_SECTIONTIMERSTOPLOC_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_SECTIONTIMERSTOPLOC_1);
  /* _L102=(TM_lib_internal::C_P012_unflatten_sections#1)/ */
  C_P012_unflatten_sections_init_TM_lib_internal(
    &outC->Context_C_P012_unflatten_sections_1);
  /* _L143=(TM_conversions::CAST_Int_to_T_SECTIONTIMER#1)/ */
  CAST_Int_to_T_SECTIONTIMER_init_TM_conversions(
    &outC->Context_CAST_Int_to_T_SECTIONTIMER_1);
  /* _L145=(TM_conversions::CAST_Int_to_V_MAIN#1)/ */
  CAST_Int_to_V_MAIN_init_TM_conversions(&outC->Context_CAST_Int_to_V_MAIN_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P012_compr_onboard_reset_TM_conversions(
  outC_C_P012_compr_onboard_TM_conversions *outC)
{
  /* _L91=(TM_conversions::CAST_Int_to_D_OL#1)/ */
  CAST_Int_to_D_OL_reset_TM_conversions(&outC->Context_CAST_Int_to_D_OL_1);
  /* _L103=(TM_conversions::CAST_Int_to_Q_OVERLAP#1)/ */
  CAST_Int_to_Q_OVERLAP_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_OVERLAP_1);
  /* _L90=(TM_conversions::CAST_Int_to_D_DP#1)/ */
  CAST_Int_to_D_DP_reset_TM_conversions(&outC->Context_CAST_Int_to_D_DP_1);
  /* _L119=(TM_conversions::CAST_Int_to_Q_DANGERPOINT#1)/ */
  CAST_Int_to_Q_DANGERPOINT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_DANGERPOINT_1);
  /* _L94=(TM_conversions::CAST_Int_to_T_ENDTIMER#1)/ */
  CAST_Int_to_T_ENDTIMER_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_ENDTIMER_1);
  /* _L118=(TM_conversions::CAST_Int_to_Q_SECTIONTIMER#1)/ */
  CAST_Int_to_Q_SECTIONTIMER_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_SECTIONTIMER_1);
  /* _L121=(TM_conversions::CAST_Int_to_T_LOA#1)/ */
  CAST_Int_to_T_LOA_reset_TM_conversions(&outC->Context_CAST_Int_to_T_LOA_1);
  /* _L92=(TM_conversions::CAST_Int_to_V_LOA#1)/ */
  CAST_Int_to_V_LOA_reset_TM_conversions(&outC->Context_CAST_Int_to_V_LOA_1);
  /* _L123=(TM_conversions::CAST_Int_to_T_OL#1)/ */
  CAST_Int_to_T_OL_reset_TM_conversions(&outC->Context_CAST_Int_to_T_OL_1);
  /* _L126=(TM_conversions::CAST_Int_to_Q_ENDTIMER#1)/ */
  CAST_Int_to_Q_ENDTIMER_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_ENDTIMER_1);
  /* _L127=(TM_conversions::CAST_Int_to_V_RELEASEDP#1)/ */
  CAST_Int_to_V_RELEASEDP_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_RELEASEDP_1);
  /* _L129=(TM_conversions::CAST_Int_to_L_ENDSECTION#1)/ */
  CAST_Int_to_L_ENDSECTION_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_ENDSECTION_1);
  /* _L131=(TM_conversions::CAST_Int_to_V_RELEASEOL#1)/ */
  CAST_Int_to_V_RELEASEOL_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_RELEASEOL_1);
  /* _L133=(TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC#1)/ */
  CAST_Int_to_D_ENDTIMERSTARTLOC_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_ENDTIMERSTARTLOC_1);
  /* _L134=(TM_conversions::CAST_Int_to_D_STARTOL#1)/ */
  CAST_Int_to_D_STARTOL_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_STARTOL_1);
  /* _L137=(TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC#1)/ */
  CAST_Int_to_D_SECTIONTIMERSTOPLOC_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_SECTIONTIMERSTOPLOC_1);
  /* _L102=(TM_lib_internal::C_P012_unflatten_sections#1)/ */
  C_P012_unflatten_sections_reset_TM_lib_internal(
    &outC->Context_C_P012_unflatten_sections_1);
  /* _L143=(TM_conversions::CAST_Int_to_T_SECTIONTIMER#1)/ */
  CAST_Int_to_T_SECTIONTIMER_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_SECTIONTIMER_1);
  /* _L145=(TM_conversions::CAST_Int_to_V_MAIN#1)/ */
  CAST_Int_to_V_MAIN_reset_TM_conversions(&outC->Context_CAST_Int_to_V_MAIN_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_conversions::C_P012_compr_onboard/
  @2: (TM_conversions::CAST_Int_to_Q_SCALE#1)
  @4: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P012_compr_onboard_TM_conversions.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

