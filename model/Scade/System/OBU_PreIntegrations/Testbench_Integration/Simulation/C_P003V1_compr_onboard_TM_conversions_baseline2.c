/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_compr_onboard_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P003V1_compr_onboard/ */
void C_P003V1_compr_onboard_TM_conversions_baseline2(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 *outC)
{
  static kcg_bool noname_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE _1_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool _2_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool _3_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE _4_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool _5_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE _6_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool _7_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE _8_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/error/ */
  static kcg_bool _9_error_partial_CAST_Int_to_Q_SCALE_1;
  /* @1/q_scale/ */
  static Q_SCALE _10_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  static kcg_bool noname_CAST_Int_to_N_ITER_1;
  static kcg_bool _11_noname_CAST_Int_to_N_ITER_1;
  static kcg_bool noname_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR _12_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool _13_error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool _14_error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR _15_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool _16_error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR _17_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool _18_error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR _19_q_dir_partial_CAST_Int_to_Q_DIR_1;
  /* @3/error/ */
  static kcg_bool _20_error_partial_CAST_Int_to_Q_DIR_1;
  /* @3/q_dir/ */
  static Q_DIR _21_q_dir_partial_CAST_Int_to_Q_DIR_1;
  static kcg_bool noname_CAST_Int_to_NID_PACKET_1;
  static kcg_bool _22_noname_CAST_Int_to_NID_PACKET_1;
  static MetadataElement_T_Common_Types_Pkg noname;
  static kcg_int64 _23_noname;

  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int64_24(&outC->_L1, (array_int64_24 *) &outC->_L9[0]);
  outC->_L42 = outC->_L1[3];
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1 = outC->_L42;
  outC->_L2_CAST_Int_to_Q_SCALE_1 = outC->q_scale_int_CAST_Int_to_Q_SCALE_1;
  outC->q_scale_in_CAST_Int_to_Q_SCALE_1 = outC->_L2_CAST_Int_to_Q_SCALE_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1 =
    outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10cm_TM_conversions;
  /* @1/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1 = kcg_false;
    _9_error_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->error_CAST_Int_to_Q_SCALE_1 = _9_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    outC->else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1 =
      outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_1m_TM_conversions;
    /* @1/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _7_error_partial_CAST_Int_to_Q_SCALE_1 = error_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1 =
        outC->q_scale_in_CAST_Int_to_Q_SCALE_1 == INT_Q_SCALE_10m_TM_conversions;
      /* @1/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 = kcg_false;
        _5_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _2_error_partial_CAST_Int_to_Q_SCALE_1 = _5_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 = kcg_true;
        _3_error_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _2_error_partial_CAST_Int_to_Q_SCALE_1 = _3_error_partial_CAST_Int_to_Q_SCALE_1;
      }
      _7_error_partial_CAST_Int_to_Q_SCALE_1 = _2_error_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->error_CAST_Int_to_Q_SCALE_1 = _7_error_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L4_CAST_Int_to_Q_SCALE_1 = outC->error_CAST_Int_to_Q_SCALE_1;
  noname_CAST_Int_to_Q_SCALE_1 = outC->_L4_CAST_Int_to_Q_SCALE_1;
  /* @1/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1) {
    outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1 =
      ENUM_Q_SCALE_10cm_TM_conversions;
    _10_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
      outC->_L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _10_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  else {
    /* @1/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1) {
      outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1 =
        ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
      _8_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    else {
      /* @1/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1) {
        outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1 =
          ENUM_Q_SCALE_10m_TM_conversions;
        _6_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
        _1_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _6_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      else {
        outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1 =
          ENUM_Q_SCALE_10cm_TM_conversions;
        _4_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          outC->_L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
        _1_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
          _4_q_scale_partial_CAST_Int_to_Q_SCALE_1;
      }
      _8_q_scale_partial_CAST_Int_to_Q_SCALE_1 =
        _1_q_scale_partial_CAST_Int_to_Q_SCALE_1;
    }
    outC->q_scale_CAST_Int_to_Q_SCALE_1 = _8_q_scale_partial_CAST_Int_to_Q_SCALE_1;
  }
  outC->_L11_CAST_Int_to_N_ITER_1 = kcg_lit_int64(0);
  outC->_L40 = outC->_L1[5];
  outC->n_iter_int_CAST_Int_to_N_ITER_1 = outC->_L40;
  outC->_L1_CAST_Int_to_N_ITER_1 = outC->n_iter_int_CAST_Int_to_N_ITER_1;
  outC->_L10_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 <
    outC->_L11_CAST_Int_to_N_ITER_1;
  noname_CAST_Int_to_N_ITER_1 = outC->_L10_CAST_Int_to_N_ITER_1;
  outC->_L9_CAST_Int_to_N_ITER_1 = kcg_lit_int64(31);
  outC->_L12_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1 >
    outC->_L9_CAST_Int_to_N_ITER_1;
  _11_noname_CAST_Int_to_N_ITER_1 = outC->_L12_CAST_Int_to_N_ITER_1;
  outC->n_iter_CAST_Int_to_N_ITER_1 = outC->_L1_CAST_Int_to_N_ITER_1;
  outC->_L15 = outC->_L1[1];
  outC->q_dir_int_CAST_Int_to_Q_DIR_1 = outC->_L15;
  outC->_L12_CAST_Int_to_Q_DIR_1 = outC->q_dir_int_CAST_Int_to_Q_DIR_1;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1 = outC->_L12_CAST_Int_to_Q_DIR_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1 =
    outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_nomiinal_TM_conversions;
  /* @3/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1) {
    outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1 = kcg_false;
    _20_error_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _21_q_dir_partial_CAST_Int_to_Q_DIR_1 =
      outC->_L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _21_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _20_error_partial_CAST_Int_to_Q_DIR_1;
  }
  else {
    outC->else_clock_CAST_Int_to_Q_DIR_1_IfBlock1 =
      outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_reverse_TM_conversions;
    /* @3/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_DIR_1_IfBlock1) {
      outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 = kcg_false;
      error_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1 =
        ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_partial_CAST_Int_to_Q_DIR_1 =
        outC->_L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
      _19_q_dir_partial_CAST_Int_to_Q_DIR_1 = q_dir_partial_CAST_Int_to_Q_DIR_1;
      _18_error_partial_CAST_Int_to_Q_DIR_1 = error_partial_CAST_Int_to_Q_DIR_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1 =
        outC->q_dir_in_CAST_Int_to_Q_DIR_1 == INT_Q_DIR_both_TM_conversions;
      /* @3/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 = kcg_false;
        _16_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        _17_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
        _12_q_dir_partial_CAST_Int_to_Q_DIR_1 = _17_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _13_error_partial_CAST_Int_to_Q_DIR_1 = _16_error_partial_CAST_Int_to_Q_DIR_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1 = kcg_true;
        _14_error_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _15_q_dir_partial_CAST_Int_to_Q_DIR_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
        _12_q_dir_partial_CAST_Int_to_Q_DIR_1 = _15_q_dir_partial_CAST_Int_to_Q_DIR_1;
        _13_error_partial_CAST_Int_to_Q_DIR_1 = _14_error_partial_CAST_Int_to_Q_DIR_1;
      }
      _19_q_dir_partial_CAST_Int_to_Q_DIR_1 = _12_q_dir_partial_CAST_Int_to_Q_DIR_1;
      _18_error_partial_CAST_Int_to_Q_DIR_1 = _13_error_partial_CAST_Int_to_Q_DIR_1;
    }
    outC->q_dir_CAST_Int_to_Q_DIR_1 = _19_q_dir_partial_CAST_Int_to_Q_DIR_1;
    outC->error_CAST_Int_to_Q_DIR_1 = _18_error_partial_CAST_Int_to_Q_DIR_1;
  }
  outC->_L13_CAST_Int_to_Q_DIR_1 = outC->error_CAST_Int_to_Q_DIR_1;
  noname_CAST_Int_to_Q_DIR_1 = outC->_L13_CAST_Int_to_Q_DIR_1;
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L14 = outC->_L1[0];
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = outC->_L14;
  outC->_L1_CAST_Int_to_NID_PACKET_1 =
    outC->nid_packet_int_CAST_Int_to_NID_PACKET_1;
  outC->_L4_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 <
    outC->_L5_CAST_Int_to_NID_PACKET_1;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(256);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 >
    outC->_L3_CAST_Int_to_NID_PACKET_1;
  noname_CAST_Int_to_NID_PACKET_1 = outC->_L2_CAST_Int_to_NID_PACKET_1;
  _22_noname_CAST_Int_to_NID_PACKET_1 = outC->_L4_CAST_Int_to_NID_PACKET_1;
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1;
  outC->_L23 = outC->_L1[22];
  /* _L67=(TM_conversions::CAST_Int_to_D_NVSTFF#1)/ */
  CAST_Int_to_D_NVSTFF_TM_conversions(
    outC->_L23,
    &outC->Context_CAST_Int_to_D_NVSTFF_1);
  outC->_L67 = outC->Context_CAST_Int_to_D_NVSTFF_1.d_nvstff;
  outC->_L59 = outC->_L1[23];
  /* _L66=(TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES#1)/ */
  CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions(
    outC->_L59,
    &outC->Context_CAST_Int_to_Q_NVDRIVER_ADHES_1);
  outC->_L66 = outC->Context_CAST_Int_to_Q_NVDRIVER_ADHES_1.q_nvdriveradhes;
  outC->_L24 = outC->_L1[21];
  /* _L65=(TM_conversions::CAST_Int_to_M_NVDERUN#1)/ */
  CAST_Int_to_M_NVDERUN_TM_conversions(
    outC->_L24,
    &outC->Context_CAST_Int_to_M_NVDERUN_1);
  outC->_L65 = outC->Context_CAST_Int_to_M_NVDERUN_1.m_nvderun;
  outC->_L25 = outC->_L1[20];
  /* _L64=(TM_conversions::CAST_Int_to_T_NVCONTACT#1)/ */
  CAST_Int_to_T_NVCONTACT_TM_conversions(
    outC->_L25,
    &outC->Context_CAST_Int_to_T_NVCONTACT_1);
  outC->_L64 = outC->Context_CAST_Int_to_T_NVCONTACT_1.t_nvcontact;
  outC->_L26 = outC->_L1[19];
  /* _L63=(TM_conversions::CAST_Int_to_M_NVCONTACT#1)/ */
  CAST_Int_to_M_NVCONTACT_TM_conversions(
    outC->_L26,
    &outC->Context_CAST_Int_to_M_NVCONTACT_1);
  outC->_L63 = outC->Context_CAST_Int_to_M_NVCONTACT_1.m_nvcontact;
  outC->_L27 = outC->_L1[18];
  /* _L62=(TM_conversions::CAST_Int_to_D_NVPOTRP#2)/ */
  CAST_Int_to_D_NVPOTRP_TM_conversions(
    outC->_L27,
    &outC->Context_CAST_Int_to_D_NVPOTRP_2);
  outC->_L62 = outC->Context_CAST_Int_to_D_NVPOTRP_2.d_nvpotrp;
  outC->_L32 = outC->_L1[13];
  /* _L60=(TM_conversions::CAST_Int_to_Q_NVEMRRLS#1)/ */
  CAST_Int_to_Q_NVEMRRLS_TM_conversions(
    outC->_L32,
    &outC->Context_CAST_Int_to_Q_NVEMRRLS_1);
  outC->_L60 = outC->Context_CAST_Int_to_Q_NVEMRRLS_1.q_nvemrrls;
  outC->_L28 = outC->_L1[17];
  /* _L58=(TM_conversions::CAST_Int_to_T_NVOVTRP#1)/ */
  CAST_Int_to_T_NVOVTRP_TM_conversions(
    outC->_L28,
    &outC->Context_CAST_Int_to_T_NVOVTRP_1);
  outC->_L58 = outC->Context_CAST_Int_to_T_NVOVTRP_1.t_nvovtrp;
  outC->_L29 = outC->_L1[16];
  /* _L57=(TM_conversions::CAST_Int_to_D_NVOVTRP#1)/ */
  CAST_Int_to_D_NVOVTRP_TM_conversions(
    outC->_L29,
    &outC->Context_CAST_Int_to_D_NVOVTRP_1);
  outC->_L57 = outC->Context_CAST_Int_to_D_NVOVTRP_1.d_nvovtrp;
  outC->_L30 = outC->_L1[15];
  /* _L56=(TM_conversions::CAST_Int_to_V_NVSUPOVTRP#2)/ */
  CAST_Int_to_V_NVSUPOVTRP_TM_conversions(
    outC->_L30,
    &outC->Context_CAST_Int_to_V_NVSUPOVTRP_2);
  outC->_L56 = outC->Context_CAST_Int_to_V_NVSUPOVTRP_2.v_nvsupovtrp;
  outC->_L31 = outC->_L1[14];
  /* _L54=(TM_conversions::CAST_Int_to_V_NVALLOWOVTRP#1)/ */
  CAST_Int_to_V_NVALLOWOVTRP_TM_conversions(
    outC->_L31,
    &outC->Context_CAST_Int_to_V_NVALLOWOVTRP_1);
  outC->_L54 = outC->Context_CAST_Int_to_V_NVALLOWOVTRP_1.v_nvallowovtrp;
  outC->_L33 = outC->_L1[12];
  /* _L53=(TM_conversions::CAST_Int_to_Q_NVSBTSMPERM#1)/ */
  CAST_Int_to_Q_NVSBTSMPERM_TM_conversions(
    outC->_L33,
    &outC->Context_CAST_Int_to_Q_NVSBTSMPERM_1);
  outC->_L53 = outC->Context_CAST_Int_to_Q_NVSBTSMPERM_1.q_nvsbtsmperm;
  outC->_L34 = outC->_L1[11];
  /* _L52=(TM_conversions::CAST_Int_to_D_NVROLL#1)/ */
  CAST_Int_to_D_NVROLL_TM_conversions(
    outC->_L34,
    &outC->Context_CAST_Int_to_D_NVROLL_1);
  outC->_L52 = outC->Context_CAST_Int_to_D_NVROLL_1.d_nvroll;
  outC->_L35 = outC->_L1[10];
  /* _L51=(TM_conversions::CAST_Int_to_V_NVREL#1)/ */
  CAST_Int_to_V_NVREL_TM_conversions(
    outC->_L35,
    &outC->Context_CAST_Int_to_V_NVREL_1);
  outC->_L51 = outC->Context_CAST_Int_to_V_NVREL_1.v_nvrel;
  outC->_L36 = outC->_L1[9];
  /* _L50=(TM_conversions::CAST_Int_to_V_NVUNFIT#1)/ */
  CAST_Int_to_V_NVUNFIT_TM_conversions(
    outC->_L36,
    &outC->Context_CAST_Int_to_V_NVUNFIT_1);
  outC->_L50 = outC->Context_CAST_Int_to_V_NVUNFIT_1.v_nvunfit;
  outC->_L37 = outC->_L1[8];
  /* _L49=(TM_conversions::CAST_Int_to_V_NVONSIGHT#1)/ */
  CAST_Int_to_V_NVONSIGHT_TM_conversions(
    outC->_L37,
    &outC->Context_CAST_Int_to_V_NVONSIGHT_1);
  outC->_L49 = outC->Context_CAST_Int_to_V_NVONSIGHT_1.v_nvonsight;
  outC->_L38 = outC->_L1[7];
  /* _L48=(TM_conversions::CAST_Int_to_V_NVSTFF#1)/ */
  CAST_Int_to_V_NVSTFF_TM_conversions(
    outC->_L38,
    &outC->Context_CAST_Int_to_V_NVSTFF_1);
  outC->_L48 = outC->Context_CAST_Int_to_V_NVSTFF_1.v_nvstff;
  outC->_L39 = outC->_L1[6];
  /* _L47=(TM_conversions::CAST_Int_to_V_NVSHUNT#1)/ */
  CAST_Int_to_V_NVSHUNT_TM_conversions(
    outC->_L39,
    &outC->Context_CAST_Int_to_V_NVSHUNT_1);
  outC->_L47 = outC->Context_CAST_Int_to_V_NVSHUNT_1.v_nvshunt;
  outC->_L7 = outC->n_iter_CAST_Int_to_N_ITER_1;
  outC->n_iter = outC->_L7;
  outC->_L46 = outC->n_iter;
  outC->_L45 = outC->n_iter;
  outC->_L41 = outC->_L1[4];
  /* _L43=(TM_conversions::CAST_Int_to_D_VALIDNV#1)/ */
  CAST_Int_to_D_VALIDNV_TM_conversions(
    outC->_L41,
    &outC->Context_CAST_Int_to_D_VALIDNV_1);
  outC->_L43 = outC->Context_CAST_Int_to_D_VALIDNV_1.d_validnv;
  outC->_L16 = outC->_L1[2];
  _23_noname = outC->_L16;
  outC->_L21 = kcg_lit_int64(3);
  outC->_L12 = outC->nid_packet_CAST_Int_to_NID_PACKET_1;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  kcg_copy_array_int64_32(&outC->_L13, (array_int64_32 *) &outC->_L9[24]);
  outC->_L11 = outC->q_dir_CAST_Int_to_Q_DIR_1;
  outC->_L4 = outC->q_scale_CAST_Int_to_Q_SCALE_1;
  /* _L5=(TM_lib_internal::C_P003V1_unflatten_sections#1)/ */
  C_P003V1_unflatten_sections_TM_lib_internal(
    outC->_L22,
    outC->_L46,
    &outC->_L13,
    &outC->Context_C_P003V1_unflatten_sections_1);
  kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2(
    &outC->_L5,
    &outC->Context_C_P003V1_unflatten_sections_1.sections);
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.q_scale = outC->_L4;
  outC->_L10.d_validnv = outC->_L43;
  outC->_L10.n_iter = outC->_L45;
  kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2(
    &outC->_L10.SECTIONS,
    &outC->_L5);
  outC->_L10.v_nvshunt = outC->_L47;
  outC->_L10.v_nvstff = outC->_L48;
  outC->_L10.v_nvonsight = outC->_L49;
  outC->_L10.v_nvunfit = outC->_L50;
  outC->_L10.v_nvrel = outC->_L51;
  outC->_L10.d_nvroll = outC->_L52;
  outC->_L10.q_nvsbtsmperm = outC->_L53;
  outC->_L10.q_nvemrrls = outC->_L60;
  outC->_L10.v_nvallowovtrp = outC->_L54;
  outC->_L10.v_nvsopovtrp = outC->_L56;
  outC->_L10.d_nvovtrp = outC->_L57;
  outC->_L10.t_nvovtrp = outC->_L58;
  outC->_L10.d_nvpotrp = outC->_L62;
  outC->_L10.m_nvcontact = outC->_L63;
  outC->_L10.t_nvcontact = outC->_L64;
  outC->_L10.m_nvderun = outC->_L65;
  outC->_L10.d_nvstff = outC->_L67;
  outC->_L10.q_nvdriver_adhes = outC->_L66;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->P003V1_onboard, &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P003V1_compr_onboard_init_TM_conversions_baseline2(
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L67 = kcg_lit_int64(0);
  outC->_L66 = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L65 = M_NVDERUN_No;
  outC->_L64 = kcg_lit_int64(0);
  outC->_L63 = M_NVCONTACT_Train_trip;
  outC->_L62 = kcg_lit_int64(0);
  outC->_L60 = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L59 = kcg_lit_int64(0);
  outC->_L58 = kcg_lit_int64(0);
  outC->_L57 = kcg_lit_int64(0);
  outC->_L56 = kcg_lit_int64(0);
  outC->_L54 = kcg_lit_int64(0);
  outC->_L53 = Q_NVSBTSMPERM_No;
  outC->_L52 = kcg_lit_int64(0);
  outC->_L51 = kcg_lit_int64(0);
  outC->_L50 = kcg_lit_int64(0);
  outC->_L49 = kcg_lit_int64(0);
  outC->_L48 = kcg_lit_int64(0);
  outC->_L47 = kcg_lit_int64(0);
  outC->_L46 = kcg_lit_int64(0);
  outC->_L45 = kcg_lit_int64(0);
  outC->_L43 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L34 = kcg_lit_int64(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L40 = kcg_lit_int64(0);
  outC->_L41 = kcg_lit_int64(0);
  outC->_L42 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20.nid_packet = kcg_lit_int64(0);
  outC->_L20.q_dir = Q_DIR_Reverse;
  outC->_L20.valid = kcg_true;
  outC->_L20.startAddress = kcg_lit_int64(0);
  outC->_L20.endAddress = kcg_lit_int64(0);
  for (idx = 0; idx < 24; idx++) {
    outC->_L1[idx] = kcg_lit_int64(0);
  }
  outC->_L4 = Q_SCALE_10_cm_scale;
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L5[idx1].valid = kcg_true;
    outC->_L5[idx1].nid_c = kcg_lit_int64(0);
  }
  outC->_L7 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L9[idx2] = kcg_lit_int64(0);
  }
  outC->_L10.valid = kcg_true;
  outC->_L10.q_dir = Q_DIR_Reverse;
  outC->_L10.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.d_validnv = kcg_lit_int64(0);
  outC->_L10.n_iter = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L10.SECTIONS[idx3].valid = kcg_true;
    outC->_L10.SECTIONS[idx3].nid_c = kcg_lit_int64(0);
  }
  outC->_L10.v_nvshunt = kcg_lit_int64(0);
  outC->_L10.v_nvstff = kcg_lit_int64(0);
  outC->_L10.v_nvonsight = kcg_lit_int64(0);
  outC->_L10.v_nvunfit = kcg_lit_int64(0);
  outC->_L10.v_nvrel = kcg_lit_int64(0);
  outC->_L10.d_nvroll = kcg_lit_int64(0);
  outC->_L10.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L10.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L10.v_nvallowovtrp = kcg_lit_int64(0);
  outC->_L10.v_nvsopovtrp = kcg_lit_int64(0);
  outC->_L10.d_nvovtrp = kcg_lit_int64(0);
  outC->_L10.t_nvovtrp = kcg_lit_int64(0);
  outC->_L10.d_nvpotrp = kcg_lit_int64(0);
  outC->_L10.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L10.t_nvcontact = kcg_lit_int64(0);
  outC->_L10.m_nvderun = M_NVDERUN_No;
  outC->_L10.d_nvstff = kcg_lit_int64(0);
  outC->_L10.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L11 = Q_DIR_Reverse;
  outC->_L12 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L13[idx4] = kcg_lit_int64(0);
  }
  outC->n_iter = kcg_lit_int64(0);
  outC->_L1_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L4_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = kcg_lit_int64(0);
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
  outC->P003V1_onboard.valid = kcg_true;
  outC->P003V1_onboard.q_dir = Q_DIR_Reverse;
  outC->P003V1_onboard.q_scale = Q_SCALE_10_cm_scale;
  outC->P003V1_onboard.d_validnv = kcg_lit_int64(0);
  outC->P003V1_onboard.n_iter = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->P003V1_onboard.SECTIONS[idx5].valid = kcg_true;
    outC->P003V1_onboard.SECTIONS[idx5].nid_c = kcg_lit_int64(0);
  }
  outC->P003V1_onboard.v_nvshunt = kcg_lit_int64(0);
  outC->P003V1_onboard.v_nvstff = kcg_lit_int64(0);
  outC->P003V1_onboard.v_nvonsight = kcg_lit_int64(0);
  outC->P003V1_onboard.v_nvunfit = kcg_lit_int64(0);
  outC->P003V1_onboard.v_nvrel = kcg_lit_int64(0);
  outC->P003V1_onboard.d_nvroll = kcg_lit_int64(0);
  outC->P003V1_onboard.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->P003V1_onboard.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->P003V1_onboard.v_nvallowovtrp = kcg_lit_int64(0);
  outC->P003V1_onboard.v_nvsopovtrp = kcg_lit_int64(0);
  outC->P003V1_onboard.d_nvovtrp = kcg_lit_int64(0);
  outC->P003V1_onboard.t_nvovtrp = kcg_lit_int64(0);
  outC->P003V1_onboard.d_nvpotrp = kcg_lit_int64(0);
  outC->P003V1_onboard.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->P003V1_onboard.t_nvcontact = kcg_lit_int64(0);
  outC->P003V1_onboard.m_nvderun = M_NVDERUN_No;
  outC->P003V1_onboard.d_nvstff = kcg_lit_int64(0);
  outC->P003V1_onboard.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  /* _L5=(TM_lib_internal::C_P003V1_unflatten_sections#1)/ */
  C_P003V1_unflatten_sections_init_TM_lib_internal(
    &outC->Context_C_P003V1_unflatten_sections_1);
  /* _L43=(TM_conversions::CAST_Int_to_D_VALIDNV#1)/ */
  CAST_Int_to_D_VALIDNV_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_VALIDNV_1);
  /* _L47=(TM_conversions::CAST_Int_to_V_NVSHUNT#1)/ */
  CAST_Int_to_V_NVSHUNT_init_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVSHUNT_1);
  /* _L48=(TM_conversions::CAST_Int_to_V_NVSTFF#1)/ */
  CAST_Int_to_V_NVSTFF_init_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVSTFF_1);
  /* _L49=(TM_conversions::CAST_Int_to_V_NVONSIGHT#1)/ */
  CAST_Int_to_V_NVONSIGHT_init_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVONSIGHT_1);
  /* _L50=(TM_conversions::CAST_Int_to_V_NVUNFIT#1)/ */
  CAST_Int_to_V_NVUNFIT_init_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVUNFIT_1);
  /* _L51=(TM_conversions::CAST_Int_to_V_NVREL#1)/ */
  CAST_Int_to_V_NVREL_init_TM_conversions(&outC->Context_CAST_Int_to_V_NVREL_1);
  /* _L52=(TM_conversions::CAST_Int_to_D_NVROLL#1)/ */
  CAST_Int_to_D_NVROLL_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_NVROLL_1);
  /* _L53=(TM_conversions::CAST_Int_to_Q_NVSBTSMPERM#1)/ */
  CAST_Int_to_Q_NVSBTSMPERM_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_NVSBTSMPERM_1);
  /* _L54=(TM_conversions::CAST_Int_to_V_NVALLOWOVTRP#1)/ */
  CAST_Int_to_V_NVALLOWOVTRP_init_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVALLOWOVTRP_1);
  /* _L56=(TM_conversions::CAST_Int_to_V_NVSUPOVTRP#2)/ */
  CAST_Int_to_V_NVSUPOVTRP_init_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVSUPOVTRP_2);
  /* _L57=(TM_conversions::CAST_Int_to_D_NVOVTRP#1)/ */
  CAST_Int_to_D_NVOVTRP_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_NVOVTRP_1);
  /* _L58=(TM_conversions::CAST_Int_to_T_NVOVTRP#1)/ */
  CAST_Int_to_T_NVOVTRP_init_TM_conversions(
    &outC->Context_CAST_Int_to_T_NVOVTRP_1);
  /* _L60=(TM_conversions::CAST_Int_to_Q_NVEMRRLS#1)/ */
  CAST_Int_to_Q_NVEMRRLS_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_NVEMRRLS_1);
  /* _L62=(TM_conversions::CAST_Int_to_D_NVPOTRP#2)/ */
  CAST_Int_to_D_NVPOTRP_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_NVPOTRP_2);
  /* _L63=(TM_conversions::CAST_Int_to_M_NVCONTACT#1)/ */
  CAST_Int_to_M_NVCONTACT_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_NVCONTACT_1);
  /* _L64=(TM_conversions::CAST_Int_to_T_NVCONTACT#1)/ */
  CAST_Int_to_T_NVCONTACT_init_TM_conversions(
    &outC->Context_CAST_Int_to_T_NVCONTACT_1);
  /* _L65=(TM_conversions::CAST_Int_to_M_NVDERUN#1)/ */
  CAST_Int_to_M_NVDERUN_init_TM_conversions(
    &outC->Context_CAST_Int_to_M_NVDERUN_1);
  /* _L66=(TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES#1)/ */
  CAST_Int_to_Q_NVDRIVER_ADHES_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_NVDRIVER_ADHES_1);
  /* _L67=(TM_conversions::CAST_Int_to_D_NVSTFF#1)/ */
  CAST_Int_to_D_NVSTFF_init_TM_conversions(
    &outC->Context_CAST_Int_to_D_NVSTFF_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P003V1_compr_onboard_reset_TM_conversions_baseline2(
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 *outC)
{
  /* _L5=(TM_lib_internal::C_P003V1_unflatten_sections#1)/ */
  C_P003V1_unflatten_sections_reset_TM_lib_internal(
    &outC->Context_C_P003V1_unflatten_sections_1);
  /* _L43=(TM_conversions::CAST_Int_to_D_VALIDNV#1)/ */
  CAST_Int_to_D_VALIDNV_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_VALIDNV_1);
  /* _L47=(TM_conversions::CAST_Int_to_V_NVSHUNT#1)/ */
  CAST_Int_to_V_NVSHUNT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVSHUNT_1);
  /* _L48=(TM_conversions::CAST_Int_to_V_NVSTFF#1)/ */
  CAST_Int_to_V_NVSTFF_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVSTFF_1);
  /* _L49=(TM_conversions::CAST_Int_to_V_NVONSIGHT#1)/ */
  CAST_Int_to_V_NVONSIGHT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVONSIGHT_1);
  /* _L50=(TM_conversions::CAST_Int_to_V_NVUNFIT#1)/ */
  CAST_Int_to_V_NVUNFIT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVUNFIT_1);
  /* _L51=(TM_conversions::CAST_Int_to_V_NVREL#1)/ */
  CAST_Int_to_V_NVREL_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVREL_1);
  /* _L52=(TM_conversions::CAST_Int_to_D_NVROLL#1)/ */
  CAST_Int_to_D_NVROLL_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_NVROLL_1);
  /* _L53=(TM_conversions::CAST_Int_to_Q_NVSBTSMPERM#1)/ */
  CAST_Int_to_Q_NVSBTSMPERM_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_NVSBTSMPERM_1);
  /* _L54=(TM_conversions::CAST_Int_to_V_NVALLOWOVTRP#1)/ */
  CAST_Int_to_V_NVALLOWOVTRP_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVALLOWOVTRP_1);
  /* _L56=(TM_conversions::CAST_Int_to_V_NVSUPOVTRP#2)/ */
  CAST_Int_to_V_NVSUPOVTRP_reset_TM_conversions(
    &outC->Context_CAST_Int_to_V_NVSUPOVTRP_2);
  /* _L57=(TM_conversions::CAST_Int_to_D_NVOVTRP#1)/ */
  CAST_Int_to_D_NVOVTRP_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_NVOVTRP_1);
  /* _L58=(TM_conversions::CAST_Int_to_T_NVOVTRP#1)/ */
  CAST_Int_to_T_NVOVTRP_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_NVOVTRP_1);
  /* _L60=(TM_conversions::CAST_Int_to_Q_NVEMRRLS#1)/ */
  CAST_Int_to_Q_NVEMRRLS_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_NVEMRRLS_1);
  /* _L62=(TM_conversions::CAST_Int_to_D_NVPOTRP#2)/ */
  CAST_Int_to_D_NVPOTRP_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_NVPOTRP_2);
  /* _L63=(TM_conversions::CAST_Int_to_M_NVCONTACT#1)/ */
  CAST_Int_to_M_NVCONTACT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_NVCONTACT_1);
  /* _L64=(TM_conversions::CAST_Int_to_T_NVCONTACT#1)/ */
  CAST_Int_to_T_NVCONTACT_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_NVCONTACT_1);
  /* _L65=(TM_conversions::CAST_Int_to_M_NVDERUN#1)/ */
  CAST_Int_to_M_NVDERUN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_NVDERUN_1);
  /* _L66=(TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES#1)/ */
  CAST_Int_to_Q_NVDRIVER_ADHES_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_NVDRIVER_ADHES_1);
  /* _L67=(TM_conversions::CAST_Int_to_D_NVSTFF#1)/ */
  CAST_Int_to_D_NVSTFF_reset_TM_conversions(
    &outC->Context_CAST_Int_to_D_NVSTFF_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_conversions_baseline2::C_P003V1_compr_onboard/
  @1: (TM_conversions::CAST_Int_to_Q_SCALE#1)
  @3: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_compr_onboard_TM_conversions_baseline2.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

