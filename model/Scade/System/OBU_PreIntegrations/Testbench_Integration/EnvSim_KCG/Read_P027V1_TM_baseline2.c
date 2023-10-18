/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_TM_baseline2.h"

/* TM_baseline2::Read_P027V1/ */
void Read_P027V1_TM_baseline2(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P027V1_TM_baseline2 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_int64 noname_C_P027V1_compr_onboard_body_1;
  static MetadataElement_T_Common_Types_Pkg _4_noname_C_P027V1_compr_onboard_body_1;
  /* @2/q_dir/ */
  static Q_DIR q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @2/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @2/q_dir/ */
  static Q_DIR _5_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @2/error/ */
  static kcg_bool _6_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @2/q_dir/ */
  static Q_DIR _7_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @2/error/ */
  static kcg_bool _8_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @2/q_dir/ */
  static Q_DIR _9_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @2/error/ */
  static kcg_bool _10_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @2/error/ */
  static kcg_bool _11_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @2/q_dir/ */
  static Q_DIR _12_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @2/error/ */
  static kcg_bool _13_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @2/q_dir/ */
  static Q_DIR _14_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  static kcg_bool noname_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  /* @3/q_scale/ */
  static Q_SCALE q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/error/ */
  static kcg_bool error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/q_scale/ */
  static Q_SCALE _15_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/error/ */
  static kcg_bool _16_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/q_scale/ */
  static Q_SCALE _17_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/error/ */
  static kcg_bool _18_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/q_scale/ */
  static Q_SCALE _19_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/error/ */
  static kcg_bool _20_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/error/ */
  static kcg_bool _21_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/q_scale/ */
  static Q_SCALE _22_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/error/ */
  static kcg_bool _23_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/q_scale/ */
  static Q_SCALE _24_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  static kcg_bool noname_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  static kcg_bool noname_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  static kcg_bool _25_noname_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  static kcg_int64 noname;

  outC->_L5_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    kcg_lit_int64(0);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L169, Message_IN);
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_TM_lib_internal(
    &outC->_L169,
    NID_META_P027V1_body_TM_baseline2,
    kcg_true,
    kcg_true,
    &outC->Context_RECV_ReadPackets_1);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L5,
    &outC->Context_RECV_ReadPackets_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_RECV_ReadPackets_1.Metadata);
  outC->_L186 = outC->Context_RECV_ReadPackets_1.received;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->PacketData_C_P027V1_compr_onboard_body_1,
    &outC->_L5);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L9_C_P027V1_compr_onboard_body_1,
    &outC->PacketData_C_P027V1_compr_onboard_body_1);
  outC->_L18_C_P027V1_compr_onboard_body_1 =
    outC->_L9_C_P027V1_compr_onboard_body_1[0];
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    outC->_L18_C_P027V1_compr_onboard_body_1;
  outC->_L1_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    outC->nid_packet_int_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  outC->_L4_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    outC->_L1_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 <
    outC->_L5_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  outC->_L3_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    kcg_lit_int64(256);
  outC->_L2_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    outC->_L1_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 >
    outC->_L3_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  _25_noname_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    outC->_L2_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  noname_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    outC->_L4_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  outC->nid_packet_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    outC->_L1_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  kcg_copy_array_int64_5(
    &outC->_L6_C_P027V1_compr_onboard_body_1,
    (array_int64_5 *) &outC->_L9_C_P027V1_compr_onboard_body_1[1]);
  outC->_L16_C_P027V1_compr_onboard_body_1 =
    outC->_L6_C_P027V1_compr_onboard_body_1[2];
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
    outC->_L16_C_P027V1_compr_onboard_body_1;
  outC->_L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
    outC->q_scale_int_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  outC->q_scale_in_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
    outC->_L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
    outC->q_scale_in_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 ==
    INT_Q_SCALE_10cm_TM_conversions;
  /* @3/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1) {
    outC->_L3_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_IfBlock1 =
      kcg_false;
    error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
      outC->_L3_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_IfBlock1;
    outC->error_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
      error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  }
  else {
    outC->else_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_IfBlock1 =
      outC->q_scale_in_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 ==
      INT_Q_SCALE_1m_TM_conversions;
    /* @3/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_IfBlock1) {
      outC->_L3_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1 =
        kcg_false;
      _23_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
        outC->_L3_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1;
      _16_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
        _23_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_IfBlock1 =
        outC->q_scale_in_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      /* @3/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1 =
          kcg_false;
        _18_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
          outC->_L4_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1;
        _21_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
          _18_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1 =
          kcg_true;
        _20_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
          outC->_L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1;
        _21_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
          _20_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
      }
      _16_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
        _21_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
    }
    outC->error_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
      _16_error_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  }
  outC->_L4_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
    outC->error_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  noname_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
    outC->_L4_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* @3/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1) {
    outC->_L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_IfBlock1 =
      ENUM_Q_SCALE_10cm_TM_conversions;
    q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
      outC->_L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_IfBlock1;
    outC->q_scale_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
      q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  }
  else {
    /* @3/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_IfBlock1) {
      outC->_L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1 =
        ENUM_Q_SCALE_1m_TM_conversions;
      _24_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
        outC->_L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1;
      _15_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
        _24_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
    }
    else {
      /* @3/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_IfBlock1) {
        outC->_L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1 =
          ENUM_Q_SCALE_10m_TM_conversions;
        _17_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
          outC->_L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1;
        _22_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
          _17_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
      }
      else {
        outC->_L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1 =
          ENUM_Q_SCALE_10cm_TM_conversions;
        _19_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
          outC->_L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1;
        _22_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
          _19_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
      }
      _15_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
        _22_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
    }
    outC->q_scale_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
      _15_q_scale_partial_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  }
  outC->_L14_C_P027V1_compr_onboard_body_1 =
    outC->_L6_C_P027V1_compr_onboard_body_1[0];
  outC->q_dir_int_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
    outC->_L14_C_P027V1_compr_onboard_body_1;
  outC->_L12_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
    outC->q_dir_int_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
    outC->_L12_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
    outC->q_dir_in_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  /* @2/IfBlock1: */
  if (outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1) {
    outC->_L5_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_IfBlock1 =
      kcg_false;
    error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
      outC->_L5_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_IfBlock1;
    outC->_L4_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_IfBlock1 =
      ENUM_Q_DIR_nominal_TM_conversions;
    q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
      outC->_L4_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_IfBlock1;
    outC->q_dir_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
      q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
    outC->error_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
      error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  }
  else {
    outC->else_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_IfBlock1 =
      outC->q_dir_in_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    /* @2/IfBlock1:else: */
    if (outC->else_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_IfBlock1) {
      outC->_L5_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1 =
        kcg_false;
      _13_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
        outC->_L5_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1;
      outC->_L3_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1 =
        ENUM_Q_DIR_reverse_TM_conversions;
      _14_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
        outC->_L3_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1;
      _5_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
        _14_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
      _6_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
        _13_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
    }
    else {
      outC->else_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_IfBlock1 =
        outC->q_dir_in_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 ==
        INT_Q_DIR_both_TM_conversions;
      /* @2/IfBlock1:else:else: */
      if (outC->else_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_IfBlock1) {
        outC->_L4_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1 =
          kcg_false;
        _8_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
          outC->_L4_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1;
        outC->_L2_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        _7_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1;
        _12_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
          _7_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
        _11_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
          _8_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
      }
      else {
        outC->_L2_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1 =
          ENUM_Q_DIR_both_TM_conversions;
        outC->_L1_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1 =
          kcg_true;
        _10_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
          outC->_L1_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1;
        _9_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
          outC->_L2_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1;
        _12_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
          _9_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
        _11_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
          _10_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
      }
      _5_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
        _12_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
      _6_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
        _11_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
    }
    outC->q_dir_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
      _5_q_dir_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
    outC->error_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
      _6_error_partial_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  }
  outC->_L13_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
    outC->error_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  noname_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
    outC->_L13_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  outC->_L30_C_P027V1_compr_onboard_body_1 =
    outC->q_dir_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  outC->_L29_C_P027V1_compr_onboard_body_1 =
    outC->q_scale_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  outC->_L28_C_P027V1_compr_onboard_body_1 =
    outC->nid_packet_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  outC->_L24_C_P027V1_compr_onboard_body_1 =
    outC->_L6_C_P027V1_compr_onboard_body_1[4];
  outC->meta_qdiff_C_P027V1_compr_onboard_body_1 =
    outC->_L24_C_P027V1_compr_onboard_body_1;
  outC->_L25_C_P027V1_compr_onboard_body_1 =
    outC->_L6_C_P027V1_compr_onboard_body_1[3];
  outC->n_iter_sections_C_P027V1_compr_onboard_body_1 =
    outC->_L25_C_P027V1_compr_onboard_body_1;
  outC->_L15_C_P027V1_compr_onboard_body_1 =
    outC->_L6_C_P027V1_compr_onboard_body_1[1];
  noname_C_P027V1_compr_onboard_body_1 = outC->_L15_C_P027V1_compr_onboard_body_1;
  outC->_L21_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(27);
  outC->_L22_C_P027V1_compr_onboard_body_1 =
    outC->_L28_C_P027V1_compr_onboard_body_1 ==
    outC->_L21_C_P027V1_compr_onboard_body_1;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->Metadata_Element_C_P027V1_compr_onboard_body_1,
    &outC->_L30);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L20_C_P027V1_compr_onboard_body_1,
    &outC->Metadata_Element_C_P027V1_compr_onboard_body_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_4_noname_C_P027V1_compr_onboard_body_1,
    &outC->_L20_C_P027V1_compr_onboard_body_1);
  outC->_L10_C_P027V1_compr_onboard_body_1.valid =
    outC->_L22_C_P027V1_compr_onboard_body_1;
  outC->_L10_C_P027V1_compr_onboard_body_1.q_dir =
    outC->_L30_C_P027V1_compr_onboard_body_1;
  outC->_L10_C_P027V1_compr_onboard_body_1.q_scale =
    outC->_L29_C_P027V1_compr_onboard_body_1;
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(
    &outC->P027V1_OBU_body_C_P027V1_compr_onboard_body_1,
    &outC->_L10_C_P027V1_compr_onboard_body_1);
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(
    &outC->_L166,
    &outC->P027V1_OBU_body_C_P027V1_compr_onboard_body_1);
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(
    &outC->body_C_P027V1_merge_body_sections_1,
    &outC->_L166);
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(
    &outC->_L68_C_P027V1_merge_body_sections_1,
    &outC->body_C_P027V1_merge_body_sections_1);
  outC->_L69_C_P027V1_merge_body_sections_1 =
    outC->_L68_C_P027V1_merge_body_sections_1.valid;
  outC->_L70_C_P027V1_merge_body_sections_1 =
    outC->_L68_C_P027V1_merge_body_sections_1.q_dir;
  outC->_L71_C_P027V1_merge_body_sections_1 =
    outC->_L68_C_P027V1_merge_body_sections_1.q_scale;
  /* _L172/ */
  for (idx = 0; idx < 33; idx++) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L172[idx], &outC->_L169);
  }
  outC->_L167 = outC->n_iter_sections_C_P027V1_compr_onboard_body_1;
  /* _L170/ */
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L170[idx1] = outC->_L167;
  }
  outC->_L168 = outC->meta_qdiff_C_P027V1_compr_onboard_body_1;
  /* _L171/ */
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L171[idx2] = outC->_L168;
  }
  outC->_L185 = kcg_true;
  /* _L184= */
  if (outC->_L185) {
    /* _L184= */
    for (idx3 = 0; idx3 < 33; idx3++) {
      /* _L184=(TM_baseline2::Read_P027V1_sections#1)/ */
      Read_P027V1_sections_TM_baseline2(
        /* _L184= */(kcg_int64) idx3,
        &outC->_L172[idx3],
        outC->_L170[idx3],
        outC->_L171[idx3],
        &outC->Context_Read_P027V1_sections_1[idx3]);
      kcg_copy_P027V1_section_enum_T_TM_baseline2(
        &outC->_L182[idx3],
        &outC->Context_Read_P027V1_sections_1[idx3].P027V1_OBU_section_out);
      outC->_L184 = /* _L184= */(kcg_int64) (idx3 + 1);
      /* _L184= */
      if (!outC->Context_Read_P027V1_sections_1[idx3].cont) {
        break;
      }
    }
  }
  else {
    outC->_L184 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L184= */
  for (idx3 = /* _L184= */(kcg_size) outC->_L184; idx3 < 33; idx3++) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L182[idx3],
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027V1_section_enum_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */

  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
    &outC->sections_C_P027V1_merge_body_sections_1,
    &outC->_L182);
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
    &outC->_L1_C_P027V1_merge_body_sections_1,
    &outC->sections_C_P027V1_merge_body_sections_1);
  outC->_L75_C_P027V1_merge_body_sections_1.valid =
    outC->_L69_C_P027V1_merge_body_sections_1;
  outC->_L75_C_P027V1_merge_body_sections_1.q_dir =
    outC->_L70_C_P027V1_merge_body_sections_1;
  outC->_L75_C_P027V1_merge_body_sections_1.q_scale =
    outC->_L71_C_P027V1_merge_body_sections_1;
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
    &outC->_L75_C_P027V1_merge_body_sections_1.sections,
    &outC->_L1_C_P027V1_merge_body_sections_1);
  kcg_copy_P027V1_OBU_T_TM_baseline2(
    &outC->P027V1_out_C_P027V1_merge_body_sections_1,
    &outC->_L75_C_P027V1_merge_body_sections_1);
  outC->received = outC->_L186;
  noname = outC->_L184;
  kcg_copy_P027V1_OBU_T_TM_baseline2(
    &outC->_L178,
    &outC->P027V1_out_C_P027V1_merge_body_sections_1);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->P027V1_out, &outC->_L178);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P027V1_init_TM_baseline2(outC_Read_P027V1_TM_baseline2 *outC)
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
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;

  outC->_L186 = kcg_true;
  outC->_L185 = kcg_true;
  outC->_L184 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L182[idx2].valid = kcg_true;
    outC->_L182[idx2].d_static = kcg_lit_int64(0);
    outC->_L182[idx2].v_static = kcg_lit_int64(0);
    outC->_L182[idx2].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L182[idx2].n_iter = kcg_lit_int64(0);
    for (idx1 = 0; idx1 < 32; idx1++) {
      outC->_L182[idx2].SECTIONS_q_diff[idx1].valid = kcg_true;
      outC->_L182[idx2].SECTIONS_q_diff[idx1].nc_diff = kcg_lit_int64(0);
      outC->_L182[idx2].SECTIONS_q_diff[idx1].v_diff = kcg_lit_int64(0);
    }
  }
  outC->_L178.valid = kcg_true;
  outC->_L178.q_dir = Q_DIR_Reverse;
  outC->_L178.q_scale = Q_SCALE_10_cm_scale;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L178.sections[idx4].valid = kcg_true;
    outC->_L178.sections[idx4].d_static = kcg_lit_int64(0);
    outC->_L178.sections[idx4].v_static = kcg_lit_int64(0);
    outC->_L178.sections[idx4].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L178.sections[idx4].n_iter = kcg_lit_int64(0);
    for (idx3 = 0; idx3 < 32; idx3++) {
      outC->_L178.sections[idx4].SECTIONS_q_diff[idx3].valid = kcg_true;
      outC->_L178.sections[idx4].SECTIONS_q_diff[idx3].nc_diff = kcg_lit_int64(0);
      outC->_L178.sections[idx4].SECTIONS_q_diff[idx3].v_diff = kcg_lit_int64(0);
    }
  }
  for (idx7 = 0; idx7 < 33; idx7++) {
    for (idx5 = 0; idx5 < 30; idx5++) {
      outC->_L172[idx7].PacketHeaders[idx5].nid_packet = kcg_lit_int64(0);
      outC->_L172[idx7].PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
      outC->_L172[idx7].PacketHeaders[idx5].valid = kcg_true;
      outC->_L172[idx7].PacketHeaders[idx5].startAddress = kcg_lit_int64(0);
      outC->_L172[idx7].PacketHeaders[idx5].endAddress = kcg_lit_int64(0);
    }
    for (idx6 = 0; idx6 < 500; idx6++) {
      outC->_L172[idx7].PacketData[idx6] = kcg_lit_int64(0);
    }
  }
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L171[idx8] = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L170[idx9] = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L169.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->_L169.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L169.PacketHeaders[idx10].valid = kcg_true;
    outC->_L169.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->_L169.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L169.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->_L167 = kcg_lit_int64(0);
  outC->_L168 = kcg_lit_int64(0);
  outC->_L166.valid = kcg_true;
  outC->_L166.q_dir = Q_DIR_Reverse;
  outC->_L166.q_scale = Q_SCALE_10_cm_scale;
  outC->_L30.nid_packet = kcg_lit_int64(0);
  outC->_L30.q_dir = Q_DIR_Reverse;
  outC->_L30.valid = kcg_true;
  outC->_L30.startAddress = kcg_lit_int64(0);
  outC->_L30.endAddress = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->_L5[idx12] = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L1_C_P027V1_merge_body_sections_1[idx14].valid = kcg_true;
    outC->_L1_C_P027V1_merge_body_sections_1[idx14].d_static = kcg_lit_int64(0);
    outC->_L1_C_P027V1_merge_body_sections_1[idx14].v_static = kcg_lit_int64(0);
    outC->_L1_C_P027V1_merge_body_sections_1[idx14].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L1_C_P027V1_merge_body_sections_1[idx14].n_iter = kcg_lit_int64(0);
    for (idx13 = 0; idx13 < 32; idx13++) {
      outC->_L1_C_P027V1_merge_body_sections_1[idx14].SECTIONS_q_diff[idx13].valid =
        kcg_true;
      outC->_L1_C_P027V1_merge_body_sections_1[idx14].SECTIONS_q_diff[idx13].nc_diff =
        kcg_lit_int64(0);
      outC->_L1_C_P027V1_merge_body_sections_1[idx14].SECTIONS_q_diff[idx13].v_diff =
        kcg_lit_int64(0);
    }
  }
  outC->_L68_C_P027V1_merge_body_sections_1.valid = kcg_true;
  outC->_L68_C_P027V1_merge_body_sections_1.q_dir = Q_DIR_Reverse;
  outC->_L68_C_P027V1_merge_body_sections_1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L71_C_P027V1_merge_body_sections_1 = Q_SCALE_10_cm_scale;
  outC->_L70_C_P027V1_merge_body_sections_1 = Q_DIR_Reverse;
  outC->_L69_C_P027V1_merge_body_sections_1 = kcg_true;
  outC->_L75_C_P027V1_merge_body_sections_1.valid = kcg_true;
  outC->_L75_C_P027V1_merge_body_sections_1.q_dir = Q_DIR_Reverse;
  outC->_L75_C_P027V1_merge_body_sections_1.q_scale = Q_SCALE_10_cm_scale;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->_L75_C_P027V1_merge_body_sections_1.sections[idx16].valid = kcg_true;
    outC->_L75_C_P027V1_merge_body_sections_1.sections[idx16].d_static =
      kcg_lit_int64(0);
    outC->_L75_C_P027V1_merge_body_sections_1.sections[idx16].v_static =
      kcg_lit_int64(0);
    outC->_L75_C_P027V1_merge_body_sections_1.sections[idx16].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L75_C_P027V1_merge_body_sections_1.sections[idx16].n_iter =
      kcg_lit_int64(0);
    for (idx15 = 0; idx15 < 32; idx15++) {
      outC->_L75_C_P027V1_merge_body_sections_1.sections[idx16].SECTIONS_q_diff[idx15].valid =
        kcg_true;
      outC->_L75_C_P027V1_merge_body_sections_1.sections[idx16].SECTIONS_q_diff[idx15].nc_diff =
        kcg_lit_int64(0);
      outC->_L75_C_P027V1_merge_body_sections_1.sections[idx16].SECTIONS_q_diff[idx15].v_diff =
        kcg_lit_int64(0);
    }
  }
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->sections_C_P027V1_merge_body_sections_1[idx18].valid = kcg_true;
    outC->sections_C_P027V1_merge_body_sections_1[idx18].d_static =
      kcg_lit_int64(0);
    outC->sections_C_P027V1_merge_body_sections_1[idx18].v_static =
      kcg_lit_int64(0);
    outC->sections_C_P027V1_merge_body_sections_1[idx18].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->sections_C_P027V1_merge_body_sections_1[idx18].n_iter = kcg_lit_int64(0);
    for (idx17 = 0; idx17 < 32; idx17++) {
      outC->sections_C_P027V1_merge_body_sections_1[idx18].SECTIONS_q_diff[idx17].valid =
        kcg_true;
      outC->sections_C_P027V1_merge_body_sections_1[idx18].SECTIONS_q_diff[idx17].nc_diff =
        kcg_lit_int64(0);
      outC->sections_C_P027V1_merge_body_sections_1[idx18].SECTIONS_q_diff[idx17].v_diff =
        kcg_lit_int64(0);
    }
  }
  outC->body_C_P027V1_merge_body_sections_1.valid = kcg_true;
  outC->body_C_P027V1_merge_body_sections_1.q_dir = Q_DIR_Reverse;
  outC->body_C_P027V1_merge_body_sections_1.q_scale = Q_SCALE_10_cm_scale;
  outC->P027V1_out_C_P027V1_merge_body_sections_1.valid = kcg_true;
  outC->P027V1_out_C_P027V1_merge_body_sections_1.q_dir = Q_DIR_Reverse;
  outC->P027V1_out_C_P027V1_merge_body_sections_1.q_scale = Q_SCALE_10_cm_scale;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->P027V1_out_C_P027V1_merge_body_sections_1.sections[idx20].valid =
      kcg_true;
    outC->P027V1_out_C_P027V1_merge_body_sections_1.sections[idx20].d_static =
      kcg_lit_int64(0);
    outC->P027V1_out_C_P027V1_merge_body_sections_1.sections[idx20].v_static =
      kcg_lit_int64(0);
    outC->P027V1_out_C_P027V1_merge_body_sections_1.sections[idx20].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->P027V1_out_C_P027V1_merge_body_sections_1.sections[idx20].n_iter =
      kcg_lit_int64(0);
    for (idx19 = 0; idx19 < 32; idx19++) {
      outC->P027V1_out_C_P027V1_merge_body_sections_1.sections[idx20].SECTIONS_q_diff[idx19].valid =
        kcg_true;
      outC->P027V1_out_C_P027V1_merge_body_sections_1.sections[idx20].SECTIONS_q_diff[idx19].nc_diff =
        kcg_lit_int64(0);
      outC->P027V1_out_C_P027V1_merge_body_sections_1.sections[idx20].SECTIONS_q_diff[idx19].v_diff =
        kcg_lit_int64(0);
    }
  }
  outC->nid_packet_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    kcg_lit_int64(0);
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    kcg_lit_int64(0);
  outC->_L2_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 = kcg_true;
  outC->_L3_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    kcg_lit_int64(0);
  outC->_L4_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 = kcg_true;
  outC->_L5_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    kcg_lit_int64(0);
  outC->_L1_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1 =
    kcg_lit_int64(0);
  outC->q_scale_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
    Q_SCALE_10_cm_scale;
  outC->q_scale_int_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
    kcg_lit_int64(0);
  outC->_L4_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 = kcg_true;
  outC->_L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(
      0);
  outC->error_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 = kcg_true;
  outC->q_scale_in_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
    kcg_lit_int64(0);
  outC->IfBlock1_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1 =
    kcg_true;
  outC->_L3_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1 =
    kcg_true;
  outC->_L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1 =
    Q_SCALE_10_cm_scale;
  outC->else_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_IfBlock1 =
    kcg_true;
  outC->_L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1 =
    Q_SCALE_10_cm_scale;
  outC->_L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1 =
    Q_SCALE_10_cm_scale;
  outC->_L4_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1 =
    kcg_true;
  outC->else_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_IfBlock1 =
    kcg_true;
  outC->_L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_IfBlock1 =
    Q_SCALE_10_cm_scale;
  outC->_L3_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_IfBlock1 =
    kcg_true;
  outC->q_dir_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 = Q_DIR_Reverse;
  outC->q_dir_int_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
    kcg_lit_int64(0);
  outC->_L12_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(0);
  outC->_L13_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 = kcg_true;
  outC->q_dir_in_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
    kcg_lit_int64(0);
  outC->error_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 = kcg_true;
  outC->IfBlock1_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1 =
    kcg_true;
  outC->_L5_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1 =
    kcg_true;
  outC->_L3_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1 =
    Q_DIR_Reverse;
  outC->else_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_IfBlock1 =
    kcg_true;
  outC->_L2_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1 =
    Q_DIR_Reverse;
  outC->_L1_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1 =
    kcg_true;
  outC->_L2_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1 =
    Q_DIR_Reverse;
  outC->_L4_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1 =
    kcg_true;
  outC->else_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_IfBlock1 =
    kcg_true;
  outC->_L4_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_IfBlock1 =
    Q_DIR_Reverse;
  outC->_L5_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_IfBlock1 =
    kcg_true;
  outC->_L14_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(0);
  outC->_L15_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(0);
  outC->_L16_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(0);
  outC->_L10_C_P027V1_compr_onboard_body_1.valid = kcg_true;
  outC->_L10_C_P027V1_compr_onboard_body_1.q_dir = Q_DIR_Reverse;
  outC->_L10_C_P027V1_compr_onboard_body_1.q_scale = Q_SCALE_10_cm_scale;
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L9_C_P027V1_compr_onboard_body_1[idx21] = kcg_lit_int64(0);
  }
  for (idx22 = 0; idx22 < 5; idx22++) {
    outC->_L6_C_P027V1_compr_onboard_body_1[idx22] = kcg_lit_int64(0);
  }
  outC->_L18_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(0);
  outC->_L20_C_P027V1_compr_onboard_body_1.nid_packet = kcg_lit_int64(0);
  outC->_L20_C_P027V1_compr_onboard_body_1.q_dir = Q_DIR_Reverse;
  outC->_L20_C_P027V1_compr_onboard_body_1.valid = kcg_true;
  outC->_L20_C_P027V1_compr_onboard_body_1.startAddress = kcg_lit_int64(0);
  outC->_L20_C_P027V1_compr_onboard_body_1.endAddress = kcg_lit_int64(0);
  outC->_L21_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(0);
  outC->_L22_C_P027V1_compr_onboard_body_1 = kcg_true;
  outC->_L25_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(0);
  outC->_L24_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(0);
  outC->_L30_C_P027V1_compr_onboard_body_1 = Q_DIR_Reverse;
  outC->_L29_C_P027V1_compr_onboard_body_1 = Q_SCALE_10_cm_scale;
  outC->_L28_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->PacketData_C_P027V1_compr_onboard_body_1[idx23] = kcg_lit_int64(0);
  }
  outC->Metadata_Element_C_P027V1_compr_onboard_body_1.nid_packet =
    kcg_lit_int64(0);
  outC->Metadata_Element_C_P027V1_compr_onboard_body_1.q_dir = Q_DIR_Reverse;
  outC->Metadata_Element_C_P027V1_compr_onboard_body_1.valid = kcg_true;
  outC->Metadata_Element_C_P027V1_compr_onboard_body_1.startAddress =
    kcg_lit_int64(0);
  outC->Metadata_Element_C_P027V1_compr_onboard_body_1.endAddress =
    kcg_lit_int64(0);
  outC->n_iter_sections_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(0);
  outC->meta_qdiff_C_P027V1_compr_onboard_body_1 = kcg_lit_int64(0);
  outC->P027V1_OBU_body_C_P027V1_compr_onboard_body_1.valid = kcg_true;
  outC->P027V1_OBU_body_C_P027V1_compr_onboard_body_1.q_dir = Q_DIR_Reverse;
  outC->P027V1_OBU_body_C_P027V1_compr_onboard_body_1.q_scale =
    Q_SCALE_10_cm_scale;
  outC->P027V1_out.valid = kcg_true;
  outC->P027V1_out.q_dir = Q_DIR_Reverse;
  outC->P027V1_out.q_scale = Q_SCALE_10_cm_scale;
  for (idx25 = 0; idx25 < 33; idx25++) {
    outC->P027V1_out.sections[idx25].valid = kcg_true;
    outC->P027V1_out.sections[idx25].d_static = kcg_lit_int64(0);
    outC->P027V1_out.sections[idx25].v_static = kcg_lit_int64(0);
    outC->P027V1_out.sections[idx25].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->P027V1_out.sections[idx25].n_iter = kcg_lit_int64(0);
    for (idx24 = 0; idx24 < 32; idx24++) {
      outC->P027V1_out.sections[idx25].SECTIONS_q_diff[idx24].valid = kcg_true;
      outC->P027V1_out.sections[idx25].SECTIONS_q_diff[idx24].nc_diff =
        kcg_lit_int64(0);
      outC->P027V1_out.sections[idx25].SECTIONS_q_diff[idx24].v_diff =
        kcg_lit_int64(0);
    }
  }
  outC->received = kcg_true;
  for (idx = 0; idx < 33; idx++) {
    /* _L184=(TM_baseline2::Read_P027V1_sections#1)/ */
    Read_P027V1_sections_init_TM_baseline2(
      &outC->Context_Read_P027V1_sections_1[idx]);
  }
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_init_TM_lib_internal(&outC->Context_RECV_ReadPackets_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P027V1_reset_TM_baseline2(outC_Read_P027V1_TM_baseline2 *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 33; idx++) {
    /* _L184=(TM_baseline2::Read_P027V1_sections#1)/ */
    Read_P027V1_sections_reset_TM_baseline2(
      &outC->Context_Read_P027V1_sections_1[idx]);
  }
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_RECV_ReadPackets_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TM_baseline2::Read_P027V1/
  @1: (TM_conversions_baseline2::C_P027V1_compr_onboard_body#1)
  @3: @1/(TM_conversions::CAST_Int_to_Q_SCALE#1)
  @2: @1/(TM_conversions::CAST_Int_to_Q_DIR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P027V1_TM_baseline2.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

