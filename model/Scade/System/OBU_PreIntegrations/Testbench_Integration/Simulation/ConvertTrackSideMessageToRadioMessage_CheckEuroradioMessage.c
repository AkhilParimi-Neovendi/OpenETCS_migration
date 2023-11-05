/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage/ */
void ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage(
  /* TrackSideMessage/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *TrackSideMessage,
  outC_ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage *outC)
{
  static BG_Message_T_BG_Types_Pkg noname;

  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&outC->_L1, TrackSideMessage);
  outC->_L5 = outC->_L1.systemTime;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&outC->_L2, &outC->_L1.radio_Msg);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L11,
    &outC->_L2.header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&outC->_L20, &outC->_L11);
  if (kcg_true) {
    outC->_L20.receivedSystemTime = outC->_L5;
  }
  outC->_L12 = outC->_L2.consistencyError;
  outC->_L17 = !outC->_L12;
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &outC->_L16,
    (BG_Header_T_BG_Types_Pkg *) &cEmptyBG_Header_BG_Types_Pkg);
  outC->_L13 = outC->_L2.present;
  outC->_L14 = outC->_L13 & outC->_L17;
  outC->_L6 = outC->_L1.valid;
  outC->_L15 = outC->_L6 & outC->_L14;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->_L2.radioMetadata);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L9, &outC->_L2.packets);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L19, &outC->_L2.sendingRBC);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L3, &outC->_L1.telegramHeaders);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&noname, &outC->_L3);
  outC->_L4 = outC->_L1.msg_type;
  outC->_L7.valid = outC->_L15;
  outC->_L7.source = outC->_L4;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L7.radioMetadata,
    &outC->_L10);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L7.BG_Common_Header, &outC->_L16);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L7.Radio_Common_Header,
    &outC->_L20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7.packets, &outC->_L9);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L7.sendingRBC, &outC->_L19);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->ReceivedMessage, &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertTrackSideMessageToRadioMessage_init_CheckEuroradioMessage(
  outC_ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage *outC)
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

  outC->_L20.radioDevice = kcg_lit_int32(0);
  outC->_L20.receivedSystemTime = kcg_lit_int32(0);
  outC->_L20.nid_message = kcg_lit_int32(0);
  outC->_L20.t_train = kcg_lit_int32(0);
  outC->_L20.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L20.nid_lrbg = kcg_lit_int32(0);
  outC->_L20.t_train_reference = kcg_lit_int32(0);
  outC->_L20.nid_em = kcg_lit_int32(0);
  outC->_L20.q_scale = Q_SCALE_10_cm_scale;
  outC->_L20.d_sr = kcg_lit_int32(0);
  outC->_L20.t_sh_rqst = kcg_lit_int32(0);
  outC->_L20.d_ref = kcg_lit_int32(0);
  outC->_L20.q_dir = Q_DIR_Reverse;
  outC->_L20.d_emergencystop = kcg_lit_int32(0);
  outC->_L20.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.valid = kcg_true;
  outC->_L19.nid_c = kcg_lit_int32(0);
  outC->_L19.rbc_id = kcg_lit_int32(0);
  outC->_L19.device_id = kcg_lit_int32(0);
  outC->_L12 = kcg_true;
  outC->_L11.radioDevice = kcg_lit_int32(0);
  outC->_L11.receivedSystemTime = kcg_lit_int32(0);
  outC->_L11.nid_message = kcg_lit_int32(0);
  outC->_L11.t_train = kcg_lit_int32(0);
  outC->_L11.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L11.nid_lrbg = kcg_lit_int32(0);
  outC->_L11.t_train_reference = kcg_lit_int32(0);
  outC->_L11.nid_em = kcg_lit_int32(0);
  outC->_L11.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11.d_sr = kcg_lit_int32(0);
  outC->_L11.t_sh_rqst = kcg_lit_int32(0);
  outC->_L11.d_ref = kcg_lit_int32(0);
  outC->_L11.q_dir = Q_DIR_Reverse;
  outC->_L11.d_emergencystop = kcg_lit_int32(0);
  outC->_L11.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10.t_train_reference = kcg_true;
  outC->_L10.nid_em = kcg_true;
  outC->_L10.q_scale = kcg_true;
  outC->_L10.d_sr = kcg_true;
  outC->_L10.t_sh_rqst = kcg_true;
  outC->_L10.d_ref = kcg_true;
  outC->_L10.q_dir = kcg_true;
  outC->_L10.d_emergencystop = kcg_true;
  outC->_L10.m_version = kcg_true;
  for (idx = 0; idx < 30; idx++) {
    outC->_L9.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L9.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L9.PacketHeaders[idx].valid = kcg_true;
    outC->_L9.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L9.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L9.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L17 = kcg_true;
  outC->_L16.valid = kcg_true;
  outC->_L16.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.q_media = Q_MEDIA_Balise;
  outC->_L16.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.m_mcount = kcg_lit_int32(0);
  outC->_L16.nid_c = kcg_lit_int32(0);
  outC->_L16.nid_bg = kcg_lit_int32(0);
  outC->_L16.q_link = Q_LINK_Unlinked;
  outC->_L16.bgPosition.valid = kcg_true;
  outC->_L16.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L16.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L16.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L16.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L16.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L16.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L16.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L16.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L16.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L16.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L16.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L16.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L16.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L16.q_nvlocacc = kcg_lit_int32(0);
  outC->_L16.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L16.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L16.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.source = msrc_undefined_Common_Types_Pkg;
  outC->_L7.radioMetadata.t_train_reference = kcg_true;
  outC->_L7.radioMetadata.nid_em = kcg_true;
  outC->_L7.radioMetadata.q_scale = kcg_true;
  outC->_L7.radioMetadata.d_sr = kcg_true;
  outC->_L7.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L7.radioMetadata.d_ref = kcg_true;
  outC->_L7.radioMetadata.q_dir = kcg_true;
  outC->_L7.radioMetadata.d_emergencystop = kcg_true;
  outC->_L7.radioMetadata.m_version = kcg_true;
  outC->_L7.BG_Common_Header.valid = kcg_true;
  outC->_L7.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L7.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L7.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L7.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L7.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L7.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L7.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L7.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L7.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L7.sendingRBC.valid = kcg_true;
  outC->_L7.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L7.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L7.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L2.present = kcg_true;
  outC->_L2.consistencyError = kcg_true;
  outC->_L2.header.radioDevice = kcg_lit_int32(0);
  outC->_L2.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L2.header.nid_message = kcg_lit_int32(0);
  outC->_L2.header.t_train = kcg_lit_int32(0);
  outC->_L2.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L2.header.t_train_reference = kcg_lit_int32(0);
  outC->_L2.header.nid_em = kcg_lit_int32(0);
  outC->_L2.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.header.d_sr = kcg_lit_int32(0);
  outC->_L2.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L2.header.d_ref = kcg_lit_int32(0);
  outC->_L2.header.q_dir = Q_DIR_Reverse;
  outC->_L2.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L2.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.radioMetadata.t_train_reference = kcg_true;
  outC->_L2.radioMetadata.nid_em = kcg_true;
  outC->_L2.radioMetadata.q_scale = kcg_true;
  outC->_L2.radioMetadata.d_sr = kcg_true;
  outC->_L2.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2.radioMetadata.d_ref = kcg_true;
  outC->_L2.radioMetadata.q_dir = kcg_true;
  outC->_L2.radioMetadata.d_emergencystop = kcg_true;
  outC->_L2.radioMetadata.m_version = kcg_true;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L2.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L2.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L2.sendingRBC.valid = kcg_true;
  outC->_L2.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L2.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L2.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L3.present = kcg_true;
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L3.Telegrams[idx8].valid = kcg_true;
    outC->_L3.Telegrams[idx8].checkResult = kcg_true;
    outC->_L3.Telegrams[idx8].telegramheader.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L3.Telegrams[idx8].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L3.Telegrams[idx8].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L3.Telegrams[idx8].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L3.Telegrams[idx8].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L3.Telegrams[idx8].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L3.Telegrams[idx8].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L3.Telegrams[idx8].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L3.Telegrams[idx8].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L3.Telegrams[idx8].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L3.Telegrams[idx8].packets.PacketHeaders[idx6].nid_packet =
        kcg_lit_int32(0);
      outC->_L3.Telegrams[idx8].packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
      outC->_L3.Telegrams[idx8].packets.PacketHeaders[idx6].valid = kcg_true;
      outC->_L3.Telegrams[idx8].packets.PacketHeaders[idx6].startAddress =
        kcg_lit_int32(0);
      outC->_L3.Telegrams[idx8].packets.PacketHeaders[idx6].endAddress =
        kcg_lit_int32(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L3.Telegrams[idx8].packets.PacketData[idx7] = kcg_lit_int32(0);
    }
  }
  outC->_L3.numberBalises = kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4 = msrc_undefined_Common_Types_Pkg;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTime = kcg_lit_int32(0);
  outC->_L1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1.telegramHeaders.present = kcg_true;
  for (idx11 = 0; idx11 < 8; idx11++) {
    outC->_L1.telegramHeaders.Telegrams[idx11].valid = kcg_true;
    outC->_L1.telegramHeaders.Telegrams[idx11].checkResult = kcg_true;
    outC->_L1.telegramHeaders.Telegrams[idx11].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1.telegramHeaders.Telegrams[idx11].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1.telegramHeaders.Telegrams[idx11].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L1.telegramHeaders.Telegrams[idx11].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L1.telegramHeaders.Telegrams[idx11].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1.telegramHeaders.Telegrams[idx11].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L1.telegramHeaders.Telegrams[idx11].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L1.telegramHeaders.Telegrams[idx11].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L1.telegramHeaders.Telegrams[idx11].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L1.telegramHeaders.Telegrams[idx11].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx9 = 0; idx9 < 30; idx9++) {
      outC->_L1.telegramHeaders.Telegrams[idx11].packets.PacketHeaders[idx9].nid_packet =
        kcg_lit_int32(0);
      outC->_L1.telegramHeaders.Telegrams[idx11].packets.PacketHeaders[idx9].q_dir =
        Q_DIR_Reverse;
      outC->_L1.telegramHeaders.Telegrams[idx11].packets.PacketHeaders[idx9].valid =
        kcg_true;
      outC->_L1.telegramHeaders.Telegrams[idx11].packets.PacketHeaders[idx9].startAddress =
        kcg_lit_int32(0);
      outC->_L1.telegramHeaders.Telegrams[idx11].packets.PacketHeaders[idx9].endAddress =
        kcg_lit_int32(0);
    }
    for (idx10 = 0; idx10 < 500; idx10++) {
      outC->_L1.telegramHeaders.Telegrams[idx11].packets.PacketData[idx10] =
        kcg_lit_int32(0);
    }
  }
  outC->_L1.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.radio_Msg.present = kcg_true;
  outC->_L1.radio_Msg.consistencyError = kcg_true;
  outC->_L1.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L1.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L1.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L1.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L1.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L1.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L1.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L1.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L1.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L1.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L1.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L1.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L1.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L1.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L1.radio_Msg.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L1.radio_Msg.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L1.radio_Msg.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L1.radio_Msg.packets.PacketHeaders[idx12].startAddress =
      kcg_lit_int32(0);
    outC->_L1.radio_Msg.packets.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L1.radio_Msg.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L1.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L1.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->ReceivedMessage.valid = kcg_true;
  outC->ReceivedMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->ReceivedMessage.radioMetadata.t_train_reference = kcg_true;
  outC->ReceivedMessage.radioMetadata.nid_em = kcg_true;
  outC->ReceivedMessage.radioMetadata.q_scale = kcg_true;
  outC->ReceivedMessage.radioMetadata.d_sr = kcg_true;
  outC->ReceivedMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->ReceivedMessage.radioMetadata.d_ref = kcg_true;
  outC->ReceivedMessage.radioMetadata.q_dir = kcg_true;
  outC->ReceivedMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->ReceivedMessage.radioMetadata.m_version = kcg_true;
  outC->ReceivedMessage.BG_Common_Header.valid = kcg_true;
  outC->ReceivedMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->ReceivedMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->ReceivedMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->ReceivedMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->ReceivedMessage.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->ReceivedMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->ReceivedMessage.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->ReceivedMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->ReceivedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->ReceivedMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->ReceivedMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->ReceivedMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->ReceivedMessage.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->ReceivedMessage.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->ReceivedMessage.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->ReceivedMessage.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->ReceivedMessage.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->ReceivedMessage.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->ReceivedMessage.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->ReceivedMessage.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->ReceivedMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->ReceivedMessage.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->ReceivedMessage.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->ReceivedMessage.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->ReceivedMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->ReceivedMessage.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->ReceivedMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->ReceivedMessage.packets.PacketHeaders[idx14].nid_packet =
      kcg_lit_int32(0);
    outC->ReceivedMessage.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->ReceivedMessage.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->ReceivedMessage.packets.PacketHeaders[idx14].startAddress =
      kcg_lit_int32(0);
    outC->ReceivedMessage.packets.PacketHeaders[idx14].endAddress =
      kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->ReceivedMessage.packets.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->ReceivedMessage.sendingRBC.valid = kcg_true;
  outC->ReceivedMessage.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->ReceivedMessage.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->ReceivedMessage.sendingRBC.device_id = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertTrackSideMessageToRadioMessage_reset_CheckEuroradioMessage(
  outC_ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

