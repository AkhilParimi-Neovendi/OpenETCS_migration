/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "distanceLastMSG_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::distanceLastMSG/ */
void distanceLastMSG_xdebugSupport_Pkg(
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* msg/ */
  ReceivedMessage_T_Common_Types_Pkg *msg,
  /* showGeneral/ */
  kcg_bool showGeneral,
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  static kcg_int64 op_call;
  /* distance/ */
  static kcg_float64 distance_partial;
  /* MSG_ID/ */
  static NID_BG MSG_ID_partial;
  /* MSGLocation/ */
  static L_internal_Type_Obu_BasicTypes_Pkg MSGLocation_partial;
  /* LRBG/ */
  static NID_LRBG LRBG_partial;
  /* distance/ */
  static kcg_float64 _1_distance_partial;
  /* MSG_ID/ */
  static NID_BG _2_MSG_ID_partial;
  /* MSGLocation/ */
  static L_internal_Type_Obu_BasicTypes_Pkg _3_MSGLocation_partial;
  /* LRBG/ */
  static NID_LRBG _4_LRBG_partial;
  /* LRBG/ */
  static NID_LRBG last_LRBG;
  /* MSGLocation/ */
  static L_internal_Type_Obu_BasicTypes_Pkg last_MSGLocation;
  /* MSG_ID/ */
  static NID_BG last_MSG_ID;
  /* distance/ */
  static kcg_float64 last_distance;
  /* showGeneral/ */
  static kcg_bool last_showGeneral;

  last_showGeneral = outC->mem_showGeneral;
  outC->mem_showGeneral = showGeneral;
  outC->_L13 = cm24_General_Message_Id_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, msg);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L10,
    &outC->_L1.Radio_Common_Header);
  outC->_L12 = outC->_L10.nid_message;
  outC->_L11 = outC->_L12 == outC->_L13;
  outC->every = outC->_L11;
  if (outC->every) {
    /* _L16=(xdebugSupport_Pkg::countPacketsMsg#1)/ */
    countPacketsMsg_xdebugSupport_Pkg(
      &outC->_L1,
      &outC->Context_countPacketsMsg_1);
    op_call = outC->Context_countPacketsMsg_1.count;
  }
  last_LRBG = outC->LRBG;
  last_MSGLocation = outC->MSGLocation;
  last_MSG_ID = outC->MSG_ID;
  last_distance = outC->distance;
  outC->_L18 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  if (outC->every) {
    outC->_L16 = op_call;
  }
  else {
    outC->_L16 = outC->_L20;
  }
  outC->_L17 = outC->_L16 > outC->_L18;
  outC->_L9 = showGeneral;
  outC->_L14 = outC->_L11 & outC->_L9;
  outC->_L15 = !outC->_L11;
  outC->_L19 = outC->_L15 | outC->_L14 | outC->_L17;
  outC->_L6 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L4 = outC->_L1.source;
  outC->_L5 = outC->_L4 == outC->_L6;
  outC->_L2 = outC->_L1.valid;
  outC->_L7 = outC->_L2 & outC->_L5 & outC->_L19;
  outC->MSGReceived = outC->_L7;
  outC->IfBlock1_clock = outC->MSGReceived;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L2_then_IfBlock1, msg);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->_L2_then_IfBlock1.Radio_Common_Header);
    outC->_L10_then_IfBlock1 = outC->_L3_then_IfBlock1.nid_lrbg;
    LRBG_partial = outC->_L10_then_IfBlock1;
    outC->LRBG = LRBG_partial;
  }
  else {
    outC->_L11_else_IfBlock1 = last_LRBG;
    _4_LRBG_partial = outC->_L11_else_IfBlock1;
    outC->LRBG = _4_LRBG_partial;
  }
  outC->_L21 = outC->LRBG;
  outC->lastLRBG = outC->_L21;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = outC->_L3_then_IfBlock1.nid_message;
    MSG_ID_partial = outC->_L4_then_IfBlock1;
    outC->MSG_ID = MSG_ID_partial;
  }
  else {
    outC->_L1_else_IfBlock1 = last_MSG_ID;
    _2_MSG_ID_partial = outC->_L1_else_IfBlock1;
    outC->MSG_ID = _2_MSG_ID_partial;
  }
  outC->_L8 = outC->MSG_ID;
  outC->lastMSG = outC->_L8;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L9_then_IfBlock1 = kcg_lit_float64(0.0);
    distance_partial = outC->_L9_then_IfBlock1;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L6_then_IfBlock1, odometry);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L7_then_IfBlock1,
      &outC->_L6_then_IfBlock1.odo);
    outC->_L8_then_IfBlock1 = outC->_L7_then_IfBlock1.o_nominal;
    MSGLocation_partial = outC->_L8_then_IfBlock1;
    outC->distance = distance_partial;
    outC->MSGLocation = MSGLocation_partial;
  }
  else {
    _3_MSGLocation_partial = last_MSGLocation;
    outC->_L16_else_IfBlock1 = kcg_lit_float64(0.0);
    outC->_L10_else_IfBlock1 = kcg_lit_float64(100.0);
    outC->_L3_else_IfBlock1 = _3_MSGLocation_partial;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L6_else_IfBlock1, odometry);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L5_else_IfBlock1,
      &outC->_L6_else_IfBlock1.odo);
    outC->_L4_else_IfBlock1 = outC->_L5_else_IfBlock1.o_nominal;
    outC->_L7_else_IfBlock1 = outC->_L4_else_IfBlock1 - outC->_L3_else_IfBlock1;
    outC->_L8_else_IfBlock1 = /* IfBlock1:else:_L8= */(kcg_float64)
        outC->_L7_else_IfBlock1;
    outC->_L9_else_IfBlock1 = outC->_L8_else_IfBlock1 / outC->_L10_else_IfBlock1;
    outC->_L14_else_IfBlock1 = kcg_lit_int64(0);
    outC->_L12_else_IfBlock1 = _2_MSG_ID_partial;
    outC->_L13_else_IfBlock1 = outC->_L12_else_IfBlock1 > outC->_L14_else_IfBlock1;
    /* IfBlock1:else:_L15= */
    if (outC->_L13_else_IfBlock1) {
      outC->_L15_else_IfBlock1 = outC->_L9_else_IfBlock1;
    }
    else {
      outC->_L15_else_IfBlock1 = outC->_L16_else_IfBlock1;
    }
    _1_distance_partial = outC->_L15_else_IfBlock1;
    outC->distance = _1_distance_partial;
    outC->MSGLocation = _3_MSGLocation_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void distanceLastMSG_init_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L10.radioDevice = kcg_lit_int64(0);
  outC->_L10.receivedSystemTime = kcg_lit_int64(0);
  outC->_L10.nid_message = kcg_lit_int64(0);
  outC->_L10.t_train = kcg_lit_int64(0);
  outC->_L10.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L10.nid_lrbg = kcg_lit_int64(0);
  outC->_L10.t_train_reference = kcg_lit_int64(0);
  outC->_L10.nid_em = kcg_lit_int64(0);
  outC->_L10.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.d_sr = kcg_lit_int64(0);
  outC->_L10.t_sh_rqst = kcg_lit_int64(0);
  outC->_L10.d_ref = kcg_lit_int64(0);
  outC->_L10.q_dir = Q_DIR_Reverse;
  outC->_L10.d_emergencystop = kcg_lit_int64(0);
  outC->_L10.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11 = kcg_true;
  outC->_L9 = kcg_true;
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
  outC->MSGReceived = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->every = kcg_true;
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
  outC->_L11_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L12_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L13_else_IfBlock1 = kcg_true;
  outC->_L14_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L15_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L16_else_IfBlock1 = kcg_lit_float64(0.0);
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
  outC->_L3_then_IfBlock1.radioDevice = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.receivedSystemTime = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.nid_message = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.t_train = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L3_then_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.t_train_reference = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.nid_em = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_then_IfBlock1.d_sr = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.t_sh_rqst = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.d_ref = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L3_then_IfBlock1.d_emergencystop = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
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
  outC->_L10_then_IfBlock1 = kcg_lit_int64(0);
  outC->lastLRBG = kcg_lit_int64(0);
  outC->lastMSG = kcg_lit_int64(0);
  /* _L16=(xdebugSupport_Pkg::countPacketsMsg#1)/ */
  countPacketsMsg_init_xdebugSupport_Pkg(&outC->Context_countPacketsMsg_1);
  outC->distance = kcg_lit_float64(0.0);
  outC->MSG_ID = kcg_lit_int64(0);
  outC->MSGLocation = kcg_lit_int64(0);
  outC->LRBG = kcg_lit_int64(0);
  outC->mem_showGeneral = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void distanceLastMSG_reset_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  /* _L16=(xdebugSupport_Pkg::countPacketsMsg#1)/ */
  countPacketsMsg_reset_xdebugSupport_Pkg(&outC->Context_countPacketsMsg_1);
  outC->distance = kcg_lit_float64(0.0);
  outC->MSG_ID = kcg_lit_int64(0);
  outC->MSGLocation = kcg_lit_int64(0);
  outC->LRBG = kcg_lit_int64(0);
  outC->mem_showGeneral = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_distanceLastMSG_xdebugSupport_Pkg(
  SV_distanceLastMSG_xdebugSupport_Pkg *SV,
  outC_distanceLastMSG_xdebugSupport_Pkg *outC)
{
  SV->Context_distance = outC->distance;
  SV->Context_LRBG = outC->LRBG;
  SV->Context_MSGLocation = outC->MSGLocation;
  SV->Context_MSG_ID = outC->MSG_ID;
  SV->Context_mem_showGeneral = outC->mem_showGeneral;
}

void kcg_load_SV_distanceLastMSG_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC,
  SV_distanceLastMSG_xdebugSupport_Pkg *SV)
{
  outC->distance = SV->Context_distance;
  outC->LRBG = SV->Context_LRBG;
  outC->MSGLocation = SV->Context_MSGLocation;
  outC->MSG_ID = SV->Context_MSG_ID;
  outC->mem_showGeneral = SV->Context_mem_showGeneral;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** distanceLastMSG_xdebugSupport_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

