/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg/ */
void Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
  /* reset/ */
  kcg_bool reset,
  /* API_TrackSide_Msg/ */
  API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  /* inActualOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
  /* outTrackMessage_for_check/ */
  static TrackSide_ForCheck_T_Common_Types_Pkg outTrackMessage_for_check_partial;
  /* outTrackMessage_for_check/ */
  static TrackSide_ForCheck_T_Common_Types_Pkg _1_outTrackMessage_for_check_partial;

  outC->_L1 = reset;
  outC->_L7 = !outC->_L1;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L2, API_TrackSide_Msg);
  outC->_L11 = outC->_L2.rtm_msg.present;
  outC->_L10 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L8 = outC->_L2.msg_type;
  outC->_L9 = outC->_L8 == outC->_L10;
  outC->_L5 = outC->_L2.valid;
  outC->_L6 = outC->_L5 & outC->_L9 & outC->_L11 & outC->_L7;
  outC->isRadioMsg = outC->_L6;
  outC->IfBlock1_clock = outC->isRadioMsg;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->_L1_then_IfBlock1,
      API_TrackSide_Msg);
    /* IfBlock1:then:_L2=(Receive_TrackSide_Msg_Pkg::Receive_RadioMsg#1)/ */
    Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
      &outC->_L1_then_IfBlock1,
      &outC->Context_Receive_RadioMsg_1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->Context_Receive_RadioMsg_1.outTrackMessage_for_check);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outTrackMessage_for_check_partial,
      &outC->_L2_then_IfBlock1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->outTrackMessage_for_check,
      &outTrackMessage_for_check_partial);
  }
  else {
    outC->_L3_else_IfBlock1 = reset;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &outC->_L1_else_IfBlock1,
      inActualOdometry);
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->_L4_else_IfBlock1,
      API_TrackSide_Msg);
    /* IfBlock1:else:_L22=(Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram#1)/ */
    Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
      outC->_L3_else_IfBlock1,
      &outC->_L1_else_IfBlock1,
      &outC->_L4_else_IfBlock1,
      &outC->Context_Receive_BaliseTelegram_1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L22_else_IfBlock1,
      &outC->Context_Receive_BaliseTelegram_1.outTrackMessage_for_check);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &_1_outTrackMessage_for_check_partial,
      &outC->_L22_else_IfBlock1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->outTrackMessage_for_check,
      &_1_outTrackMessage_for_check_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Receive_TrackSide_Msg_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
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

  outC->_L11 = kcg_true;
  outC->_L10 = msrc_undefined_Common_Types_Pkg;
  outC->_L9 = kcg_true;
  outC->_L8 = msrc_undefined_Common_Types_Pkg;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTimeMsgReceived = kcg_lit_int32(0);
  outC->_L2.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L2.btm_msg.present = kcg_true;
  outC->_L2.btm_msg.checkResult = kcg_true;
  outC->_L2.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L2.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L2.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L2.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L2.btm_msg.api_header.m_mcount = kcg_lit_int32(0);
  outC->_L2.btm_msg.api_header.nid_c = kcg_lit_int32(0);
  outC->_L2.btm_msg.api_header.nid_bg = kcg_lit_int32(0);
  outC->_L2.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.rtm_msg.present = kcg_true;
  outC->_L2.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L2.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L2.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L2.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L2.rtm_msg.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L2.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L2.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L2.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L2.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L2.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L2.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L2.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L2.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L2.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int32(0);
  outC->_L2.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int32(0);
  outC->_L2.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L2.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L2.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_true;
  outC->isRadioMsg = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_IfBlock1.timestamp = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.odo.o_min = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.odo.o_max = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.speed.v_lower = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.speed.v_upper = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.acceleration = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_else_IfBlock1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_else_IfBlock1 = kcg_true;
  outC->_L4_else_IfBlock1.valid = kcg_true;
  outC->_L4_else_IfBlock1.systemTimeMsgReceived = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L4_else_IfBlock1.btm_msg.present = kcg_true;
  outC->_L4_else_IfBlock1.btm_msg.checkResult = kcg_true;
  outC->_L4_else_IfBlock1.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L4_else_IfBlock1.btm_msg.api_header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L4_else_IfBlock1.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_else_IfBlock1.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L4_else_IfBlock1.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L4_else_IfBlock1.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4_else_IfBlock1.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L4_else_IfBlock1.btm_msg.api_header.m_mcount = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.api_header.nid_c = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.api_header.nid_bg = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.present = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(
      0);
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L4_else_IfBlock1.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int32(0);
  outC->_L4_else_IfBlock1.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L4_else_IfBlock1.packets.PacketHeaders[idx2].nid_packet =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L4_else_IfBlock1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L4_else_IfBlock1.packets.PacketHeaders[idx2].startAddress =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.packets.PacketHeaders[idx2].endAddress =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L4_else_IfBlock1.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L22_else_IfBlock1.valid = kcg_true;
  outC->_L22_else_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L22_else_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx6 = 0; idx6 < 8; idx6++) {
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].valid = kcg_true;
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].checkResult = kcg_true;
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx4 = 0; idx4 < 30; idx4++) {
      outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].packets.PacketHeaders[idx4].nid_packet =
        kcg_lit_int32(0);
      outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].packets.PacketHeaders[idx4].q_dir =
        Q_DIR_Reverse;
      outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].packets.PacketHeaders[idx4].valid =
        kcg_true;
      outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].packets.PacketHeaders[idx4].startAddress =
        kcg_lit_int32(0);
      outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].packets.PacketHeaders[idx4].endAddress =
        kcg_lit_int32(0);
    }
    for (idx5 = 0; idx5 < 500; idx5++) {
      outC->_L22_else_IfBlock1.telegramHeaders.Telegrams[idx6].packets.PacketData[idx5] =
        kcg_lit_int32(0);
    }
  }
  outC->_L22_else_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L22_else_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L22_else_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L22_else_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22_else_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L22_else_IfBlock1.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22_else_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L22_else_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L22_else_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L22_else_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L22_else_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L22_else_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L22_else_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L22_else_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L22_else_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L22_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx7].nid_packet =
      kcg_lit_int32(0);
    outC->_L22_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx7].q_dir =
      Q_DIR_Reverse;
    outC->_L22_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx7].valid = kcg_true;
    outC->_L22_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx7].startAddress =
      kcg_lit_int32(0);
    outC->_L22_else_IfBlock1.radio_Msg.packets.PacketHeaders[idx7].endAddress =
      kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L22_else_IfBlock1.radio_Msg.packets.PacketData[idx8] = kcg_lit_int32(0);
  }
  outC->_L22_else_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L22_else_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L22_else_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.systemTimeMsgReceived = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1_then_IfBlock1.btm_msg.present = kcg_true;
  outC->_L1_then_IfBlock1.btm_msg.checkResult = kcg_true;
  outC->_L1_then_IfBlock1.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L1_then_IfBlock1.btm_msg.api_header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1_then_IfBlock1.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_IfBlock1.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L1_then_IfBlock1.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L1_then_IfBlock1.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_then_IfBlock1.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L1_then_IfBlock1.btm_msg.api_header.m_mcount = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.api_header.nid_c = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.api_header.nid_bg = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.present = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(
      0);
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1_then_IfBlock1.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx9].nid_packet =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx9].valid = kcg_true;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx9].startAddress =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx9].endAddress =
      kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L1_then_IfBlock1.packets.PacketData[idx10] = kcg_lit_int32(0);
  }
  outC->_L2_then_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L2_then_IfBlock1.telegramHeaders.present = kcg_true;
  for (idx13 = 0; idx13 < 8; idx13++) {
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].valid = kcg_true;
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].checkResult = kcg_true;
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx11 = 0; idx11 < 30; idx11++) {
      outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].packets.PacketHeaders[idx11].nid_packet =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].packets.PacketHeaders[idx11].q_dir =
        Q_DIR_Reverse;
      outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].packets.PacketHeaders[idx11].valid =
        kcg_true;
      outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].packets.PacketHeaders[idx11].startAddress =
        kcg_lit_int32(0);
      outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].packets.PacketHeaders[idx11].endAddress =
        kcg_lit_int32(0);
    }
    for (idx12 = 0; idx12 < 500; idx12++) {
      outC->_L2_then_IfBlock1.telegramHeaders.Telegrams[idx13].packets.PacketData[idx12] =
        kcg_lit_int32(0);
    }
  }
  outC->_L2_then_IfBlock1.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.present = kcg_true;
  outC->_L2_then_IfBlock1.radio_Msg.consistencyError = kcg_true;
  outC->_L2_then_IfBlock1.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_then_IfBlock1.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L2_then_IfBlock1.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_IfBlock1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L2_then_IfBlock1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L2_then_IfBlock1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L2_then_IfBlock1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L2_then_IfBlock1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_then_IfBlock1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L2_then_IfBlock1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L2_then_IfBlock1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2_then_IfBlock1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L2_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx14].nid_packet =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx14].q_dir =
      Q_DIR_Reverse;
    outC->_L2_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L2_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx14].startAddress =
      kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.radio_Msg.packets.PacketHeaders[idx14].endAddress =
      kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L2_then_IfBlock1.radio_Msg.packets.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->_L2_then_IfBlock1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L2_then_IfBlock1.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.valid = kcg_true;
  outC->outTrackMessage_for_check.systemTime = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.present = kcg_true;
  for (idx18 = 0; idx18 < 8; idx18++) {
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].valid =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].checkResult =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx16 = 0; idx16 < 30; idx16++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].packets.PacketHeaders[idx16].nid_packet =
        kcg_lit_int32(0);
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].packets.PacketHeaders[idx16].q_dir =
        Q_DIR_Reverse;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].packets.PacketHeaders[idx16].valid =
        kcg_true;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].packets.PacketHeaders[idx16].startAddress =
        kcg_lit_int32(0);
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].packets.PacketHeaders[idx16].endAddress =
        kcg_lit_int32(0);
    }
    for (idx17 = 0; idx17 < 500; idx17++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx18].packets.PacketData[idx17] =
        kcg_lit_int32(0);
    }
  }
  outC->outTrackMessage_for_check.telegramHeaders.numberBalises = kcg_lit_int32(
      0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.present = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.consistencyError = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outTrackMessage_for_check.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.header.t_train_reference =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->outTrackMessage_for_check.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->outTrackMessage_for_check.radio_Msg.header.d_emergencystop =
    kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.t_train_reference =
    kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.d_emergencystop =
    kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx19].nid_packet =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx19].q_dir =
      Q_DIR_Reverse;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx19].valid =
      kcg_true;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx19].startAddress =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx19].endAddress =
      kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 500; idx20++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketData[idx20] =
      kcg_lit_int32(0);
  }
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.valid = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.device_id =
    kcg_lit_int32(0);
  /* IfBlock1:then:_L2=(Receive_TrackSide_Msg_Pkg::Receive_RadioMsg#1)/ */
  Receive_RadioMsg_init_Receive_TrackSide_Msg_Pkg(
    &outC->Context_Receive_RadioMsg_1);
  /* IfBlock1:else:_L22=(Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram#1)/ */
  Receive_BaliseTelegram_init_Receive_TrackSide_Msg_Pkg(
    &outC->Context_Receive_BaliseTelegram_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
  /* IfBlock1:then:_L2=(Receive_TrackSide_Msg_Pkg::Receive_RadioMsg#1)/ */
  Receive_RadioMsg_reset_Receive_TrackSide_Msg_Pkg(
    &outC->Context_Receive_RadioMsg_1);
  /* IfBlock1:else:_L22=(Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram#1)/ */
  Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(
    &outC->Context_Receive_BaliseTelegram_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

