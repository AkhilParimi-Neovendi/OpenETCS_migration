/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BTM_Toolbox_TrainModules.h"

/* Toolbox::TrainModules::BTM/ */
void BTM_Toolbox_TrainModules(
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* Packets/ */
  CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TelegramHeader/ */
  TelegramHeader_T_BG_Types_Pkg *TelegramHeader,
  outC_BTM_Toolbox_TrainModules *outC)
{
  outC->_L35 = kcg_lit_int64(10);
  outC->_L34 = kcg_lit_int64(-10);
  /* _L33=(Toolbox::Functions::ODO_doLocInacc#1)/ */
  ODO_doLocInacc_Toolbox_Functions(
    outC->_L34,
    outC->_L35,
    &outC->Context_ODO_doLocInacc_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L33,
    &outC->Context_ODO_doLocInacc_1.locInAcc);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(
    &outC->_L32,
    (API_RadioMsgHeader_T_API_Msg_Pkg *) &cEmptyRadioMsgHeader_Toolbox);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L30, Packets);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L29, TelegramHeader);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L28, TelegramHeader);
  outC->_L27 = msrc_undefined_Common_Types_Pkg;
  outC->_L26 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L24 = kcg_lit_int64(0);
  outC->_L22 = outC->_L29.nid_c;
  outC->_L23 = outC->_L22 != outC->_L24;
  /* _L25= */
  if (outC->_L23) {
    outC->_L25 = outC->_L26;
  }
  else {
    outC->_L25 = outC->_L27;
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L18, odometry);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L20.odometerOfBaliseDetection,
    &outC->_L18);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L20.BG_centerDetectionInaccuraccuracies,
    &outC->_L33);
  outC->_L17 = kcg_false;
  outC->_L16 = kcg_true;
  outC->_L6 = systemTime;
  outC->_L5.present = outC->_L23;
  outC->_L5.checkResult = outC->_L16;
  outC->_L5.api_bad_balise_received = outC->_L17;
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L5.api_header, &outC->_L28);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L5.centerOfBalisePosition,
    &outC->_L20);
  outC->_L4.valid = outC->_L23;
  outC->_L4.systemTimeMsgReceived = outC->_L6;
  outC->_L4.msg_type = outC->_L25;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(&outC->_L4.btm_msg, &outC->_L5);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(&outC->_L4.rtm_msg, &outC->_L32);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L4.packets, &outC->_L30);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->TrackMessage, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void BTM_init_Toolbox_TrainModules(outC_BTM_Toolbox_TrainModules *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L35 = kcg_lit_int64(0);
  outC->_L34 = kcg_lit_int64(0);
  outC->_L33.nominal = kcg_lit_int64(0);
  outC->_L33.d_min = kcg_lit_int64(0);
  outC->_L33.d_max = kcg_lit_int64(0);
  outC->_L32.present = kcg_true;
  outC->_L32.apiConsistencyError = kcg_true;
  outC->_L32.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L32.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L32.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L32.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L32.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L32.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L32.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L32.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L32.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L32.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L32.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L32.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L32.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L32.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L32.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L32.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L32.Radio_MetaData.nid_em = kcg_true;
  outC->_L32.Radio_MetaData.q_scale = kcg_true;
  outC->_L32.Radio_MetaData.d_sr = kcg_true;
  outC->_L32.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L32.Radio_MetaData.d_ref = kcg_true;
  outC->_L32.Radio_MetaData.q_dir = kcg_true;
  outC->_L32.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L32.Radio_MetaData.m_version = kcg_true;
  outC->_L32.sendingRBC_Id.valid = kcg_true;
  outC->_L32.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L32.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L32.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L30.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L30.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L30.PacketHeaders[idx].valid = kcg_true;
    outC->_L30.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L30.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L30.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L29.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L29.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.q_media = Q_MEDIA_Balise;
  outC->_L29.n_pig = N_PIG_I_am_the_1st;
  outC->_L29.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L29.m_dup = M_DUP_No_duplicates;
  outC->_L29.m_mcount = kcg_lit_int64(0);
  outC->_L29.nid_c = kcg_lit_int64(0);
  outC->_L29.nid_bg = kcg_lit_int64(0);
  outC->_L29.q_link = Q_LINK_Unlinked;
  outC->_L28.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L28.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L28.q_media = Q_MEDIA_Balise;
  outC->_L28.n_pig = N_PIG_I_am_the_1st;
  outC->_L28.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L28.m_dup = M_DUP_No_duplicates;
  outC->_L28.m_mcount = kcg_lit_int64(0);
  outC->_L28.nid_c = kcg_lit_int64(0);
  outC->_L28.nid_bg = kcg_lit_int64(0);
  outC->_L28.q_link = Q_LINK_Unlinked;
  outC->_L27 = msrc_undefined_Common_Types_Pkg;
  outC->_L26 = msrc_undefined_Common_Types_Pkg;
  outC->_L25 = msrc_undefined_Common_Types_Pkg;
  outC->_L24 = kcg_lit_int64(0);
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_lit_int64(0);
  outC->_L20.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L20.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L20.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int64(0);
  outC->_L20.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L20.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L20.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L20.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L20.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int64(0);
  outC->_L20.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int64(0);
  outC->_L20.odometerOfBaliseDetection.acceleration = kcg_lit_int64(0);
  outC->_L20.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L20.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L20.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L20.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L18.valid = kcg_true;
  outC->_L18.timestamp = kcg_lit_int64(0);
  outC->_L18.odo.o_nominal = kcg_lit_int64(0);
  outC->_L18.odo.o_min = kcg_lit_int64(0);
  outC->_L18.odo.o_max = kcg_lit_int64(0);
  outC->_L18.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L18.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L18.speed.v_lower = kcg_lit_int64(0);
  outC->_L18.speed.v_upper = kcg_lit_int64(0);
  outC->_L18.acceleration = kcg_lit_int64(0);
  outC->_L18.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L18.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5.present = kcg_true;
  outC->_L5.checkResult = kcg_true;
  outC->_L5.api_bad_balise_received = kcg_true;
  outC->_L5.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.api_header.q_media = Q_MEDIA_Balise;
  outC->_L5.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L5.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L5.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L5.api_header.nid_c = kcg_lit_int64(0);
  outC->_L5.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L5.api_header.q_link = Q_LINK_Unlinked;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L5.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L5.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L4.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L4.btm_msg.present = kcg_true;
  outC->_L4.btm_msg.checkResult = kcg_true;
  outC->_L4.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L4.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L4.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L4.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L4.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L4.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L4.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L4.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L4.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L4.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L4.rtm_msg.present = kcg_true;
  outC->_L4.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L4.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L4.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L4.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L4.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L4.rtm_msg.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L4.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L4.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L4.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L4.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L4.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L4.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L4.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L4.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L4.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L4.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L4.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L4.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L4.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L4.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L4.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L4.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->TrackMessage.valid = kcg_true;
  outC->TrackMessage.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->TrackMessage.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->TrackMessage.btm_msg.present = kcg_true;
  outC->TrackMessage.btm_msg.checkResult = kcg_true;
  outC->TrackMessage.btm_msg.api_bad_balise_received = kcg_true;
  outC->TrackMessage.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->TrackMessage.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessage.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->TrackMessage.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->TrackMessage.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->TrackMessage.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->TrackMessage.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->TrackMessage.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.present = kcg_true;
  outC->TrackMessage.rtm_msg.apiConsistencyError = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->TrackMessage.rtm_msg.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->TrackMessage.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessage.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->TrackMessage.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->TrackMessage.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->TrackMessage.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->TrackMessage.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->TrackMessage.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->TrackMessage.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->TrackMessage.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  /* _L33=(Toolbox::Functions::ODO_doLocInacc#1)/ */
  ODO_doLocInacc_init_Toolbox_Functions(&outC->Context_ODO_doLocInacc_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BTM_reset_Toolbox_TrainModules(outC_BTM_Toolbox_TrainModules *outC)
{
  /* _L33=(Toolbox::Functions::ODO_doLocInacc#1)/ */
  ODO_doLocInacc_reset_Toolbox_Functions(&outC->Context_ODO_doLocInacc_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BTM_Toolbox_TrainModules.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

