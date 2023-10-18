/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "distanceLastBG_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::distanceLastBG/ */
void distanceLastBG_xdebugSupport_Pkg(
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* msg/ */
  ReceivedMessage_T_Common_Types_Pkg *msg,
  outC_distanceLastBG_xdebugSupport_Pkg *outC)
{
  /* distance/ */
  static kcg_float64 distance_partial;
  /* BG_ID/ */
  static NID_BG BG_ID_partial;
  /* BGLocation/ */
  static L_internal_Type_Obu_BasicTypes_Pkg BGLocation_partial;
  /* distance/ */
  static kcg_float64 _1_distance_partial;
  /* BG_ID/ */
  static NID_BG _2_BG_ID_partial;
  /* BGLocation/ */
  static L_internal_Type_Obu_BasicTypes_Pkg _3_BGLocation_partial;
  /* BGLocation/ */
  static L_internal_Type_Obu_BasicTypes_Pkg last_BGLocation;
  /* BG_ID/ */
  static NID_BG last_BG_ID;
  /* distance/ */
  static kcg_float64 last_distance;

  last_BGLocation = outC->BGLocation;
  last_BG_ID = outC->BG_ID;
  last_distance = outC->distance;
  outC->_L6 = msrc_Eurobalise_Common_Types_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, msg);
  outC->_L4 = outC->_L1.source;
  outC->_L5 = outC->_L4 == outC->_L6;
  outC->_L2 = outC->_L1.valid;
  outC->_L7 = outC->_L2 & outC->_L5;
  outC->BGPassed = outC->_L7;
  outC->IfBlock1_clock = outC->BGPassed;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L2_then_IfBlock1, msg);
    kcg_copy_BG_Header_T_BG_Types_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->_L2_then_IfBlock1.BG_Common_Header);
    outC->_L4_then_IfBlock1 = outC->_L3_then_IfBlock1.nid_bg;
    BG_ID_partial = outC->_L4_then_IfBlock1;
    outC->BG_ID = BG_ID_partial;
  }
  else {
    outC->_L1_else_IfBlock1 = last_BG_ID;
    _2_BG_ID_partial = outC->_L1_else_IfBlock1;
    outC->BG_ID = _2_BG_ID_partial;
  }
  outC->_L8 = outC->BG_ID;
  outC->lastBG = outC->_L8;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L9_then_IfBlock1 = kcg_lit_float64(0.0);
    distance_partial = outC->_L9_then_IfBlock1;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L6_then_IfBlock1, odometry);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L7_then_IfBlock1,
      &outC->_L6_then_IfBlock1.odo);
    outC->_L8_then_IfBlock1 = outC->_L7_then_IfBlock1.o_nominal;
    BGLocation_partial = outC->_L8_then_IfBlock1;
    outC->distance = distance_partial;
    outC->BGLocation = BGLocation_partial;
  }
  else {
    _3_BGLocation_partial = last_BGLocation;
    outC->_L10_else_IfBlock1 = kcg_lit_float64(100.0);
    outC->_L3_else_IfBlock1 = _3_BGLocation_partial;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L6_else_IfBlock1, odometry);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L5_else_IfBlock1,
      &outC->_L6_else_IfBlock1.odo);
    outC->_L4_else_IfBlock1 = outC->_L5_else_IfBlock1.o_nominal;
    outC->_L7_else_IfBlock1 = outC->_L4_else_IfBlock1 - outC->_L3_else_IfBlock1;
    outC->_L8_else_IfBlock1 = /* IfBlock1:else:_L8= */(kcg_float64)
        outC->_L7_else_IfBlock1;
    outC->_L9_else_IfBlock1 = outC->_L8_else_IfBlock1 / outC->_L10_else_IfBlock1;
    _1_distance_partial = outC->_L9_else_IfBlock1;
    outC->distance = _1_distance_partial;
    outC->BGLocation = _3_BGLocation_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void distanceLastBG_init_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
  outC->_L6 = msrc_undefined_Common_Types_Pkg;
  outC->_L5 = kcg_true;
  outC->_L4 = msrc_undefined_Common_Types_Pkg;
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radioMetadata.nid_em = kcg_true;
  outC->_L1.radioMetadata.q_scale = kcg_true;
  outC->_L1.radioMetadata.d_sr = kcg_true;
  outC->_L1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radioMetadata.d_ref = kcg_true;
  outC->_L1.radioMetadata.q_dir = kcg_true;
  outC->_L1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radioMetadata.m_version = kcg_true;
  outC->_L1.BG_Common_Header.valid = kcg_true;
  outC->_L1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L1.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->BGPassed = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.valid = kcg_true;
  outC->_L6_else_IfBlock1.timestamp = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.odo.o_nominal = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.odo.o_min = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.odo.o_max = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.speed.v_lower = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.speed.v_upper = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.acceleration = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_else_IfBlock1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_else_IfBlock1.o_nominal = kcg_lit_int64(0);
  outC->_L5_else_IfBlock1.o_min = kcg_lit_int64(0);
  outC->_L5_else_IfBlock1.o_max = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L9_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L10_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L2_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L2_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L2_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L2_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L2_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L2_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L2_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L2_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L2_then_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L2_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L2_then_IfBlock1.packets.PacketHeaders[idx2].nid_packet =
      kcg_lit_int64(0);
    outC->_L2_then_IfBlock1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L2_then_IfBlock1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L2_then_IfBlock1.packets.PacketHeaders[idx2].startAddress =
      kcg_lit_int64(0);
    outC->_L2_then_IfBlock1.packets.PacketHeaders[idx2].endAddress =
      kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L2_then_IfBlock1.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L2_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L2_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.valid = kcg_true;
  outC->_L3_then_IfBlock1.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_then_IfBlock1.q_media = Q_MEDIA_Balise;
  outC->_L3_then_IfBlock1.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3_then_IfBlock1.m_mcount = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.nid_c = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.nid_bg = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L3_then_IfBlock1.bgPosition.valid = kcg_true;
  outC->_L3_then_IfBlock1.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L3_then_IfBlock1.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_then_IfBlock1.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.q_nvlocacc = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L3_then_IfBlock1.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L3_then_IfBlock1.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L4_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.valid = kcg_true;
  outC->_L6_then_IfBlock1.timestamp = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.odo.o_nominal = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.odo.o_min = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.odo.o_max = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.speed.v_lower = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.speed.v_upper = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.acceleration = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_then_IfBlock1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_then_IfBlock1.o_nominal = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.o_min = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.o_max = kcg_lit_int64(0);
  outC->_L8_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->lastBG = kcg_lit_int64(0);
  outC->distance = kcg_lit_float64(0.0);
  outC->BG_ID = kcg_lit_int64(0);
  outC->BGLocation = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void distanceLastBG_reset_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC)
{
  outC->distance = kcg_lit_float64(0.0);
  outC->BG_ID = kcg_lit_int64(0);
  outC->BGLocation = kcg_lit_int64(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** distanceLastBG_xdebugSupport_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

