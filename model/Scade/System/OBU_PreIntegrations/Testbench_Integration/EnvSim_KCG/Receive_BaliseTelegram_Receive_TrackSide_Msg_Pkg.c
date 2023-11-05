/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::Receive_BaliseTelegram/ */
void Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
  /* reset/ */
  kcg_bool reset,
  /* inActualOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  /* API_TrackSide_Msg/ */
  API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L17, API_TrackSide_Msg);
  outC->_L19 = outC->_L17.btm_msg.present;
  outC->_L18 = outC->_L17.valid;
  outC->_L20 = outC->_L18 & outC->_L19;
  outC->telegramPresent = outC->_L20;
  outC->_L30 = outC->telegramPresent;
  outC->_L31 = outC->_L17.btm_msg.checkResult;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L26,
    &outC->_L17.btm_msg.api_header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L46, &outC->_L17.packets);
  outC->_L55.valid = outC->_L30;
  outC->_L55.checkResult = outC->_L31;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L55.telegramheader, &outC->_L26);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L55.packets, &outC->_L46);
  outC->_L38 = outC->_L17.systemTimeMsgReceived;
  outC->systemTimeMsgReceived = outC->_L38;
  outC->_L40 = outC->systemTimeMsgReceived;
  outC->_L35 = outC->_L17.msg_type;
  outC->msgType = outC->_L35;
  outC->_L37 = outC->msgType;
  outC->_L1 = reset;
  outC->_L22 = outC->telegramPresent;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->decodedTelegram, &outC->_L55);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L28, &outC->decodedTelegram);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L23,
    &outC->_L17.btm_msg.centerOfBalisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->centerOfBaliseDetection,
    &outC->_L23);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L25,
    &outC->centerOfBaliseDetection);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L5, inActualOdometry);
  /* _L6=(Receive_TrackSide_Msg_Pkg::BuildBGMessage#1)/ */
  BuildBGMessage_Receive_TrackSide_Msg_Pkg(
    outC->_L1,
    outC->_L22,
    &outC->_L28,
    &outC->_L25,
    &outC->_L5,
    &outC->Context_BuildBGMessage_1);
  kcg_copy_BG_Message_T_BG_Types_Pkg(
    &outC->_L6,
    &outC->Context_BuildBGMessage_1.outBGMessage);
  outC->_L34 = outC->_L6.present;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(
    &outC->_L13,
    (RadioMessage_T_Radio_Types_Pkg *) &cEmptyRadioMsg_Radio_Types_Pkg);
  outC->_L7.valid = outC->_L34;
  outC->_L7.systemTime = outC->_L40;
  outC->_L7.msg_type = outC->_L37;
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L7.telegramHeaders, &outC->_L6);
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&outC->_L7.radio_Msg, &outC->_L13);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->outTrackMessage_for_check,
    &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void Receive_BaliseTelegram_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
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

  outC->_L55.valid = kcg_true;
  outC->_L55.checkResult = kcg_true;
  outC->_L55.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L55.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L55.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L55.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L55.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L55.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L55.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L55.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L55.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L55.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx = 0; idx < 30; idx++) {
    outC->_L55.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L55.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L55.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L55.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L55.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L55.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L46.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L46.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L46.PacketHeaders[idx2].valid = kcg_true;
    outC->_L46.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L46.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L46.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L40 = kcg_lit_int32(0);
  outC->_L38 = kcg_lit_int32(0);
  outC->_L37 = msrc_undefined_Common_Types_Pkg;
  outC->_L35 = msrc_undefined_Common_Types_Pkg;
  outC->_L34 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L28.valid = kcg_true;
  outC->_L28.checkResult = kcg_true;
  outC->_L28.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L28.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L28.telegramheader.q_media = Q_MEDIA_Balise;
  outC->_L28.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->_L28.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L28.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->_L28.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->_L28.telegramheader.nid_c = kcg_lit_int32(0);
  outC->_L28.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->_L28.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L28.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L28.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L28.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L28.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L28.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L28.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L26.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L26.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L26.q_media = Q_MEDIA_Balise;
  outC->_L26.n_pig = N_PIG_I_am_the_1st;
  outC->_L26.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L26.m_dup = M_DUP_No_duplicates;
  outC->_L26.m_mcount = kcg_lit_int32(0);
  outC->_L26.nid_c = kcg_lit_int32(0);
  outC->_L26.nid_bg = kcg_lit_int32(0);
  outC->_L26.q_link = Q_LINK_Unlinked;
  outC->_L25.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L25.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L25.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L25.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L25.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L25.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L23.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L23.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L23.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L23.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L23.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17.valid = kcg_true;
  outC->_L17.systemTimeMsgReceived = kcg_lit_int32(0);
  outC->_L17.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L17.btm_msg.present = kcg_true;
  outC->_L17.btm_msg.checkResult = kcg_true;
  outC->_L17.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L17.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L17.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L17.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L17.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L17.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L17.btm_msg.api_header.m_mcount = kcg_lit_int32(0);
  outC->_L17.btm_msg.api_header.nid_c = kcg_lit_int32(0);
  outC->_L17.btm_msg.api_header.nid_bg = kcg_lit_int32(0);
  outC->_L17.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L17.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L17.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L17.rtm_msg.present = kcg_true;
  outC->_L17.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L17.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L17.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L17.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L17.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L17.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L17.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L17.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L17.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L17.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L17.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L17.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L17.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L17.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L17.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L17.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L17.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L17.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int32(0);
  outC->_L17.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int32(0);
  outC->_L17.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L17.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L17.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L17.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L17.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L17.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L17.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L13.present = kcg_true;
  outC->_L13.consistencyError = kcg_true;
  outC->_L13.header.radioDevice = kcg_lit_int32(0);
  outC->_L13.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L13.header.nid_message = kcg_lit_int32(0);
  outC->_L13.header.t_train = kcg_lit_int32(0);
  outC->_L13.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L13.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L13.header.t_train_reference = kcg_lit_int32(0);
  outC->_L13.header.nid_em = kcg_lit_int32(0);
  outC->_L13.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.header.d_sr = kcg_lit_int32(0);
  outC->_L13.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L13.header.d_ref = kcg_lit_int32(0);
  outC->_L13.header.q_dir = Q_DIR_Reverse;
  outC->_L13.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L13.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.radioMetadata.t_train_reference = kcg_true;
  outC->_L13.radioMetadata.nid_em = kcg_true;
  outC->_L13.radioMetadata.q_scale = kcg_true;
  outC->_L13.radioMetadata.d_sr = kcg_true;
  outC->_L13.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L13.radioMetadata.d_ref = kcg_true;
  outC->_L13.radioMetadata.q_dir = kcg_true;
  outC->_L13.radioMetadata.d_emergencystop = kcg_true;
  outC->_L13.radioMetadata.m_version = kcg_true;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L13.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L13.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L13.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L13.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L13.sendingRBC.valid = kcg_true;
  outC->_L13.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L13.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L13.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.systemTime = kcg_lit_int32(0);
  outC->_L7.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L7.telegramHeaders.present = kcg_true;
  for (idx12 = 0; idx12 < 8; idx12++) {
    outC->_L7.telegramHeaders.Telegrams[idx12].valid = kcg_true;
    outC->_L7.telegramHeaders.Telegrams[idx12].checkResult = kcg_true;
    outC->_L7.telegramHeaders.Telegrams[idx12].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L7.telegramHeaders.Telegrams[idx12].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L7.telegramHeaders.Telegrams[idx12].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L7.telegramHeaders.Telegrams[idx12].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L7.telegramHeaders.Telegrams[idx12].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L7.telegramHeaders.Telegrams[idx12].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L7.telegramHeaders.Telegrams[idx12].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L7.telegramHeaders.Telegrams[idx12].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L7.telegramHeaders.Telegrams[idx12].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L7.telegramHeaders.Telegrams[idx12].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx10 = 0; idx10 < 30; idx10++) {
      outC->_L7.telegramHeaders.Telegrams[idx12].packets.PacketHeaders[idx10].nid_packet =
        kcg_lit_int32(0);
      outC->_L7.telegramHeaders.Telegrams[idx12].packets.PacketHeaders[idx10].q_dir =
        Q_DIR_Reverse;
      outC->_L7.telegramHeaders.Telegrams[idx12].packets.PacketHeaders[idx10].valid =
        kcg_true;
      outC->_L7.telegramHeaders.Telegrams[idx12].packets.PacketHeaders[idx10].startAddress =
        kcg_lit_int32(0);
      outC->_L7.telegramHeaders.Telegrams[idx12].packets.PacketHeaders[idx10].endAddress =
        kcg_lit_int32(0);
    }
    for (idx11 = 0; idx11 < 500; idx11++) {
      outC->_L7.telegramHeaders.Telegrams[idx12].packets.PacketData[idx11] =
        kcg_lit_int32(0);
    }
  }
  outC->_L7.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7.radio_Msg.present = kcg_true;
  outC->_L7.radio_Msg.consistencyError = kcg_true;
  outC->_L7.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L7.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L7.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L7.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L7.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L7.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L7.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L7.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L7.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L7.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L7.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L7.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L7.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L7.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L7.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L7.radio_Msg.packets.PacketHeaders[idx13].nid_packet = kcg_lit_int32(0);
    outC->_L7.radio_Msg.packets.PacketHeaders[idx13].q_dir = Q_DIR_Reverse;
    outC->_L7.radio_Msg.packets.PacketHeaders[idx13].valid = kcg_true;
    outC->_L7.radio_Msg.packets.PacketHeaders[idx13].startAddress =
      kcg_lit_int32(0);
    outC->_L7.radio_Msg.packets.PacketHeaders[idx13].endAddress = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 500; idx14++) {
    outC->_L7.radio_Msg.packets.PacketData[idx14] = kcg_lit_int32(0);
  }
  outC->_L7.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L7.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L7.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L7.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L6.present = kcg_true;
  for (idx17 = 0; idx17 < 8; idx17++) {
    outC->_L6.Telegrams[idx17].valid = kcg_true;
    outC->_L6.Telegrams[idx17].checkResult = kcg_true;
    outC->_L6.Telegrams[idx17].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L6.Telegrams[idx17].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L6.Telegrams[idx17].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L6.Telegrams[idx17].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L6.Telegrams[idx17].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L6.Telegrams[idx17].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L6.Telegrams[idx17].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L6.Telegrams[idx17].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L6.Telegrams[idx17].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L6.Telegrams[idx17].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx15 = 0; idx15 < 30; idx15++) {
      outC->_L6.Telegrams[idx17].packets.PacketHeaders[idx15].nid_packet =
        kcg_lit_int32(0);
      outC->_L6.Telegrams[idx17].packets.PacketHeaders[idx15].q_dir = Q_DIR_Reverse;
      outC->_L6.Telegrams[idx17].packets.PacketHeaders[idx15].valid = kcg_true;
      outC->_L6.Telegrams[idx17].packets.PacketHeaders[idx15].startAddress =
        kcg_lit_int32(0);
      outC->_L6.Telegrams[idx17].packets.PacketHeaders[idx15].endAddress =
        kcg_lit_int32(0);
    }
    for (idx16 = 0; idx16 < 500; idx16++) {
      outC->_L6.Telegrams[idx17].packets.PacketData[idx16] = kcg_lit_int32(0);
    }
  }
  outC->_L6.numberBalises = kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.timestamp = kcg_lit_int32(0);
  outC->_L5.odo.o_nominal = kcg_lit_int32(0);
  outC->_L5.odo.o_min = kcg_lit_int32(0);
  outC->_L5.odo.o_max = kcg_lit_int32(0);
  outC->_L5.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L5.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L5.speed.v_lower = kcg_lit_int32(0);
  outC->_L5.speed.v_upper = kcg_lit_int32(0);
  outC->_L5.acceleration = kcg_lit_int32(0);
  outC->_L5.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1 = kcg_true;
  outC->systemTimeMsgReceived = kcg_lit_int32(0);
  outC->msgType = msrc_undefined_Common_Types_Pkg;
  outC->decodedTelegram.valid = kcg_true;
  outC->decodedTelegram.checkResult = kcg_true;
  outC->decodedTelegram.telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->decodedTelegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->decodedTelegram.telegramheader.q_media = Q_MEDIA_Balise;
  outC->decodedTelegram.telegramheader.n_pig = N_PIG_I_am_the_1st;
  outC->decodedTelegram.telegramheader.n_total = N_TOTAL_1_balise_in_the_group;
  outC->decodedTelegram.telegramheader.m_dup = M_DUP_No_duplicates;
  outC->decodedTelegram.telegramheader.m_mcount = kcg_lit_int32(0);
  outC->decodedTelegram.telegramheader.nid_c = kcg_lit_int32(0);
  outC->decodedTelegram.telegramheader.nid_bg = kcg_lit_int32(0);
  outC->decodedTelegram.telegramheader.q_link = Q_LINK_Unlinked;
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->decodedTelegram.packets.PacketHeaders[idx18].nid_packet =
      kcg_lit_int32(0);
    outC->decodedTelegram.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->decodedTelegram.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->decodedTelegram.packets.PacketHeaders[idx18].startAddress =
      kcg_lit_int32(0);
    outC->decodedTelegram.packets.PacketHeaders[idx18].endAddress =
      kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->decodedTelegram.packets.PacketData[idx19] = kcg_lit_int32(0);
  }
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.valid = kcg_true;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->centerOfBaliseDetection.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->centerOfBaliseDetection.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->centerOfBaliseDetection.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->centerOfBaliseDetection.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->telegramPresent = kcg_true;
  outC->outTrackMessage_for_check.valid = kcg_true;
  outC->outTrackMessage_for_check.systemTime = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.present = kcg_true;
  for (idx22 = 0; idx22 < 8; idx22++) {
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].valid =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].checkResult =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx20 = 0; idx20 < 30; idx20++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].packets.PacketHeaders[idx20].nid_packet =
        kcg_lit_int32(0);
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].packets.PacketHeaders[idx20].q_dir =
        Q_DIR_Reverse;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].packets.PacketHeaders[idx20].valid =
        kcg_true;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].packets.PacketHeaders[idx20].startAddress =
        kcg_lit_int32(0);
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].packets.PacketHeaders[idx20].endAddress =
        kcg_lit_int32(0);
    }
    for (idx21 = 0; idx21 < 500; idx21++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx22].packets.PacketData[idx21] =
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
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx23].nid_packet =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx23].q_dir =
      Q_DIR_Reverse;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx23].valid =
      kcg_true;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx23].startAddress =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx23].endAddress =
      kcg_lit_int32(0);
  }
  for (idx24 = 0; idx24 < 500; idx24++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketData[idx24] =
      kcg_lit_int32(0);
  }
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.valid = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.device_id =
    kcg_lit_int32(0);
  /* _L6=(Receive_TrackSide_Msg_Pkg::BuildBGMessage#1)/ */
  BuildBGMessage_init_Receive_TrackSide_Msg_Pkg(
    &outC->Context_BuildBGMessage_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* _L6=(Receive_TrackSide_Msg_Pkg::BuildBGMessage#1)/ */
  BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(
    &outC->Context_BuildBGMessage_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

