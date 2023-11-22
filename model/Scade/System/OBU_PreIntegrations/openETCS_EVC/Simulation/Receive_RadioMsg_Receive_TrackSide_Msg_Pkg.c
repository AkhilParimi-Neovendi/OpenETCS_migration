/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg/ */
void Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
  /* API_TrackSide_Msg/ */
  API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L12, API_TrackSide_Msg);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &outC->_L92,
    &outC->_L12.rtm_msg.sendingRBC_Id);
  kcg_copy_BG_Message_T_BG_Types_Pkg(
    &outC->_L68,
    (BG_Message_T_BG_Types_Pkg *) &cEmptyBGMessages_BG_Types_Pkg);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L67, &outC->_L12.packets);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L21,
    &outC->_L12.rtm_msg.Radio_MetaData);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L37,
    &outC->_L12.rtm_msg.Radio_Common_Header);
  outC->_L36 = outC->_L12.rtm_msg.present;
  outC->_L34 = outC->_L12.rtm_msg.apiConsistencyError;
  outC->_L19.present = outC->_L36;
  outC->_L19.consistencyError = outC->_L34;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L19.header,
    &outC->_L37);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L19.radioMetadata,
    &outC->_L21);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L19.packets, &outC->_L67);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L19.sendingRBC, &outC->_L92);
  outC->_L17 = outC->_L12.msg_type;
  outC->_L16 = outC->_L12.systemTimeMsgReceived;
  outC->_L15 = outC->_L12.valid;
  outC->_L14.valid = outC->_L15;
  outC->_L14.systemTime = outC->_L16;
  outC->_L14.msg_type = outC->_L17;
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L14.telegramHeaders, &outC->_L68);
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&outC->_L14.radio_Msg, &outC->_L19);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->outTrackMessage_for_check,
    &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void Receive_RadioMsg_init_Receive_TrackSide_Msg_Pkg(
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;

  outC->_L92.valid = kcg_true;
  outC->_L92.nid_c = kcg_lit_int32(0);
  outC->_L92.rbc_id = kcg_lit_int32(0);
  outC->_L92.device_id = kcg_lit_int32(0);
  outC->_L68.present = kcg_true;
  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L68.Telegrams[idx2].valid = kcg_true;
    outC->_L68.Telegrams[idx2].checkResult = kcg_true;
    outC->_L68.Telegrams[idx2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L68.Telegrams[idx2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L68.Telegrams[idx2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->_L68.Telegrams[idx2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->_L68.Telegrams[idx2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L68.Telegrams[idx2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->_L68.Telegrams[idx2].telegramheader.m_mcount = kcg_lit_int32(0);
    outC->_L68.Telegrams[idx2].telegramheader.nid_c = kcg_lit_int32(0);
    outC->_L68.Telegrams[idx2].telegramheader.nid_bg = kcg_lit_int32(0);
    outC->_L68.Telegrams[idx2].telegramheader.q_link = Q_LINK_Unlinked;
    for (idx = 0; idx < 30; idx++) {
      outC->_L68.Telegrams[idx2].packets.PacketHeaders[idx].nid_packet =
        kcg_lit_int32(0);
      outC->_L68.Telegrams[idx2].packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
      outC->_L68.Telegrams[idx2].packets.PacketHeaders[idx].valid = kcg_true;
      outC->_L68.Telegrams[idx2].packets.PacketHeaders[idx].startAddress =
        kcg_lit_int32(0);
      outC->_L68.Telegrams[idx2].packets.PacketHeaders[idx].endAddress =
        kcg_lit_int32(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L68.Telegrams[idx2].packets.PacketData[idx1] = kcg_lit_int32(0);
    }
  }
  outC->_L68.numberBalises = kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L68.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L68.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L68.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L67.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L67.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L67.PacketHeaders[idx3].valid = kcg_true;
    outC->_L67.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L67.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L67.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L21.t_train_reference = kcg_true;
  outC->_L21.nid_em = kcg_true;
  outC->_L21.q_scale = kcg_true;
  outC->_L21.d_sr = kcg_true;
  outC->_L21.t_sh_rqst = kcg_true;
  outC->_L21.d_ref = kcg_true;
  outC->_L21.q_dir = kcg_true;
  outC->_L21.d_emergencystop = kcg_true;
  outC->_L21.m_version = kcg_true;
  outC->_L37.radioDevice = kcg_lit_int32(0);
  outC->_L37.receivedSystemTime = kcg_lit_int32(0);
  outC->_L37.nid_message = kcg_lit_int32(0);
  outC->_L37.t_train = kcg_lit_int32(0);
  outC->_L37.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L37.nid_lrbg = kcg_lit_int32(0);
  outC->_L37.t_train_reference = kcg_lit_int32(0);
  outC->_L37.nid_em = kcg_lit_int32(0);
  outC->_L37.q_scale = Q_SCALE_10_cm_scale;
  outC->_L37.d_sr = kcg_lit_int32(0);
  outC->_L37.t_sh_rqst = kcg_lit_int32(0);
  outC->_L37.d_ref = kcg_lit_int32(0);
  outC->_L37.q_dir = Q_DIR_Reverse;
  outC->_L37.d_emergencystop = kcg_lit_int32(0);
  outC->_L37.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L19.present = kcg_true;
  outC->_L19.consistencyError = kcg_true;
  outC->_L19.header.radioDevice = kcg_lit_int32(0);
  outC->_L19.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L19.header.nid_message = kcg_lit_int32(0);
  outC->_L19.header.t_train = kcg_lit_int32(0);
  outC->_L19.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L19.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L19.header.t_train_reference = kcg_lit_int32(0);
  outC->_L19.header.nid_em = kcg_lit_int32(0);
  outC->_L19.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19.header.d_sr = kcg_lit_int32(0);
  outC->_L19.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L19.header.d_ref = kcg_lit_int32(0);
  outC->_L19.header.q_dir = Q_DIR_Reverse;
  outC->_L19.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L19.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.radioMetadata.t_train_reference = kcg_true;
  outC->_L19.radioMetadata.nid_em = kcg_true;
  outC->_L19.radioMetadata.q_scale = kcg_true;
  outC->_L19.radioMetadata.d_sr = kcg_true;
  outC->_L19.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L19.radioMetadata.d_ref = kcg_true;
  outC->_L19.radioMetadata.q_dir = kcg_true;
  outC->_L19.radioMetadata.d_emergencystop = kcg_true;
  outC->_L19.radioMetadata.m_version = kcg_true;
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L19.packets.PacketHeaders[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L19.packets.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L19.packets.PacketHeaders[idx5].valid = kcg_true;
    outC->_L19.packets.PacketHeaders[idx5].startAddress = kcg_lit_int32(0);
    outC->_L19.packets.PacketHeaders[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L19.packets.PacketData[idx6] = kcg_lit_int32(0);
  }
  outC->_L19.sendingRBC.valid = kcg_true;
  outC->_L19.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L19.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L19.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L17 = msrc_undefined_Common_Types_Pkg;
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_true;
  outC->_L14.valid = kcg_true;
  outC->_L14.systemTime = kcg_lit_int32(0);
  outC->_L14.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L14.telegramHeaders.present = kcg_true;
  for (idx9 = 0; idx9 < 8; idx9++) {
    outC->_L14.telegramHeaders.Telegrams[idx9].valid = kcg_true;
    outC->_L14.telegramHeaders.Telegrams[idx9].checkResult = kcg_true;
    outC->_L14.telegramHeaders.Telegrams[idx9].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L14.telegramHeaders.Telegrams[idx9].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L14.telegramHeaders.Telegrams[idx9].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->_L14.telegramHeaders.Telegrams[idx9].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->_L14.telegramHeaders.Telegrams[idx9].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L14.telegramHeaders.Telegrams[idx9].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->_L14.telegramHeaders.Telegrams[idx9].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->_L14.telegramHeaders.Telegrams[idx9].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->_L14.telegramHeaders.Telegrams[idx9].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->_L14.telegramHeaders.Telegrams[idx9].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx7 = 0; idx7 < 30; idx7++) {
      outC->_L14.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].nid_packet =
        kcg_lit_int32(0);
      outC->_L14.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].q_dir =
        Q_DIR_Reverse;
      outC->_L14.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].valid =
        kcg_true;
      outC->_L14.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].startAddress =
        kcg_lit_int32(0);
      outC->_L14.telegramHeaders.Telegrams[idx9].packets.PacketHeaders[idx7].endAddress =
        kcg_lit_int32(0);
    }
    for (idx8 = 0; idx8 < 500; idx8++) {
      outC->_L14.telegramHeaders.Telegrams[idx9].packets.PacketData[idx8] =
        kcg_lit_int32(0);
    }
  }
  outC->_L14.telegramHeaders.numberBalises = kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.telegramHeaders.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L14.telegramHeaders.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L14.radio_Msg.present = kcg_true;
  outC->_L14.radio_Msg.consistencyError = kcg_true;
  outC->_L14.radio_Msg.header.radioDevice = kcg_lit_int32(0);
  outC->_L14.radio_Msg.header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L14.radio_Msg.header.nid_message = kcg_lit_int32(0);
  outC->_L14.radio_Msg.header.t_train = kcg_lit_int32(0);
  outC->_L14.radio_Msg.header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L14.radio_Msg.header.nid_lrbg = kcg_lit_int32(0);
  outC->_L14.radio_Msg.header.t_train_reference = kcg_lit_int32(0);
  outC->_L14.radio_Msg.header.nid_em = kcg_lit_int32(0);
  outC->_L14.radio_Msg.header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.radio_Msg.header.d_sr = kcg_lit_int32(0);
  outC->_L14.radio_Msg.header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L14.radio_Msg.header.d_ref = kcg_lit_int32(0);
  outC->_L14.radio_Msg.header.q_dir = Q_DIR_Reverse;
  outC->_L14.radio_Msg.header.d_emergencystop = kcg_lit_int32(0);
  outC->_L14.radio_Msg.header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.radio_Msg.radioMetadata.t_train_reference = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.nid_em = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.q_scale = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.d_sr = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.d_ref = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.q_dir = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.d_emergencystop = kcg_true;
  outC->_L14.radio_Msg.radioMetadata.m_version = kcg_true;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L14.radio_Msg.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L14.radio_Msg.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L14.radio_Msg.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L14.radio_Msg.packets.PacketHeaders[idx10].startAddress =
      kcg_lit_int32(0);
    outC->_L14.radio_Msg.packets.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L14.radio_Msg.packets.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L14.radio_Msg.sendingRBC.valid = kcg_true;
  outC->_L14.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L14.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L14.radio_Msg.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L12.valid = kcg_true;
  outC->_L12.systemTimeMsgReceived = kcg_lit_int32(0);
  outC->_L12.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L12.btm_msg.present = kcg_true;
  outC->_L12.btm_msg.checkResult = kcg_true;
  outC->_L12.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L12.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L12.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L12.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L12.btm_msg.api_header.m_mcount = kcg_lit_int32(0);
  outC->_L12.btm_msg.api_header.nid_c = kcg_lit_int32(0);
  outC->_L12.btm_msg.api_header.nid_bg = kcg_lit_int32(0);
  outC->_L12.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int32(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int32(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int32(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12.rtm_msg.present = kcg_true;
  outC->_L12.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L12.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L12.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L12.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L12.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L12.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L12.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L12.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L12.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L12.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L12.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L12.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L12.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L12.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L12.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L12.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L12.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L12.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int32(0);
  outC->_L12.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int32(0);
  outC->_L12.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L12.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L12.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L12.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L12.packets.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L12.packets.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L12.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->outTrackMessage_for_check.valid = kcg_true;
  outC->outTrackMessage_for_check.systemTime = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->outTrackMessage_for_check.telegramHeaders.present = kcg_true;
  for (idx16 = 0; idx16 < 8; idx16++) {
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].valid =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].checkResult =
      kcg_true;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].telegramheader.q_media =
      Q_MEDIA_Balise;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].telegramheader.n_pig =
      N_PIG_I_am_the_1st;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].telegramheader.m_dup =
      M_DUP_No_duplicates;
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].telegramheader.m_mcount =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].telegramheader.nid_c =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].telegramheader.nid_bg =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].telegramheader.q_link =
      Q_LINK_Unlinked;
    for (idx14 = 0; idx14 < 30; idx14++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].packets.PacketHeaders[idx14].nid_packet =
        kcg_lit_int32(0);
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].packets.PacketHeaders[idx14].q_dir =
        Q_DIR_Reverse;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].packets.PacketHeaders[idx14].valid =
        kcg_true;
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].packets.PacketHeaders[idx14].startAddress =
        kcg_lit_int32(0);
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].packets.PacketHeaders[idx14].endAddress =
        kcg_lit_int32(0);
    }
    for (idx15 = 0; idx15 < 500; idx15++) {
      outC->outTrackMessage_for_check.telegramHeaders.Telegrams[idx16].packets.PacketData[idx15] =
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
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx17].nid_packet =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx17].q_dir =
      Q_DIR_Reverse;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx17].valid =
      kcg_true;
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx17].startAddress =
      kcg_lit_int32(0);
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketHeaders[idx17].endAddress =
      kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 500; idx18++) {
    outC->outTrackMessage_for_check.radio_Msg.packets.PacketData[idx18] =
      kcg_lit_int32(0);
  }
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.valid = kcg_true;
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->outTrackMessage_for_check.radio_Msg.sendingRBC.device_id =
    kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Receive_RadioMsg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_RadioMsg_Receive_TrackSide_Msg_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

