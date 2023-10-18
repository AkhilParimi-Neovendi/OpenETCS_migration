/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setProbes_xdebugSupport_Pkg.h"

/* xdebugSupport_Pkg::setProbes/ */
void setProbes_xdebugSupport_Pkg(
  /* inMsg/ */
  API_TrackSideInput_T_API_Msg_Pkg *inMsg,
  /* show24/ */
  kcg_bool show24,
  outC_setProbes_xdebugSupport_Pkg *outC)
{
  static kcg_int64 op_call;
  /* lastBGID/ */
  static NID_BG last_lastBGID;
  /* lastMsgID/ */
  static NID_MESSAGE last_lastMsgID;
  /* bgID/ */
  static NID_BG last_bgID;
  /* msgID/ */
  static NID_MESSAGE last_msgID;

  outC->_L33 = cm24_General_Message_Id_Pkg;
  last_msgID = outC->msgID;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L1, inMsg);
  kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(&outC->_L2, &outC->_L1.rtm_msg);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L4,
    &outC->_L2.Radio_Common_Header);
  outC->_L5 = outC->_L4.nid_message;
  outC->msgID = outC->_L5;
  outC->_L31 = outC->msgID;
  outC->_L32 = outC->_L31 != outC->_L33;
  outC->_L57 = !outC->_L32;
  outC->every = outC->_L57;
  if (outC->every) {
    /* _L55=(xdebugSupport_Pkg::countPackets#1)/ */
    countPackets_xdebugSupport_Pkg(&outC->_L1, &outC->Context_countPackets_1);
    op_call = outC->Context_countPackets_1.count;
  }
  last_lastBGID = outC->lastBGID;
  last_lastMsgID = outC->lastMsgID;
  last_bgID = outC->bgID;
  outC->_L60 = kcg_lit_int64(0);
  outC->_L58 = kcg_lit_int64(0);
  if (outC->every) {
    outC->_L55 = op_call;
  }
  else {
    outC->_L55 = outC->_L58;
  }
  outC->_L59 = outC->_L60 > outC->_L55;
  outC->_L54 = last_msgID;
  outC->_L52 = last_bgID;
  outC->_L35 = show24;
  outC->_L34 = outC->_L32 | outC->_L35 | outC->_L59;
  outC->_L26 = outC->msgID;
  outC->_L24 = outC->_L54 != outC->_L26;
  outC->_L36 = outC->_L24 & outC->_L34;
  outC->_L20 = outC->_L1.valid;
  outC->_L51 = outC->_L20 & outC->_L36;
  kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(&outC->_L6, &outC->_L1.btm_msg);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L7, &outC->_L6.api_header);
  outC->_L8 = outC->_L7.nid_bg;
  outC->bgID = outC->_L8;
  outC->_L22 = outC->bgID;
  outC->_L23 = outC->_L52 != outC->_L22;
  outC->_L50 = outC->_L20 & outC->_L23;
  outC->_L37 = last_lastMsgID;
  outC->_L39 = outC->msgID;
  /* _L38= */
  if (outC->_L51) {
    outC->_L38 = outC->_L39;
  }
  else {
    outC->_L38 = outC->_L37;
  }
  outC->lastMsgID = outC->_L38;
  outC->_L47 = outC->lastMsgID;
  outC->_L42 = last_lastBGID;
  outC->_L45 = outC->bgID;
  /* _L44= */
  if (outC->_L50) {
    outC->_L44 = outC->_L45;
  }
  else {
    outC->_L44 = outC->_L42;
  }
  outC->lastBGID = outC->_L44;
  outC->_L46 = outC->lastBGID;
  outC->lastBG_ID = outC->_L46;
  outC->lastRadioMSG = outC->_L47;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    (MetadataElement_T_Common_Types_Pkg *) &cNoMetaDataElement_Common_Types_Pkg);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L29,
    (MetadataElement_T_Common_Types_Pkg *) &cNoMetaDataElement_Common_Types_Pkg);
  outC->_L27 = outC->_L23 | outC->_L36;
  outC->_L28 = outC->_L20 & outC->_L27;
  outC->isChanged = outC->_L28;
  outC->_L19 = outC->bgID;
  outC->_L18 = outC->msgID;
  outC->_L16 = kcg_lit_int64(1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L9, &outC->_L1.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L10, &outC->_L9.PacketHeaders);
  if ((kcg_lit_int64(0) <= outC->_L16) & (outC->_L16 < kcg_lit_int64(30))) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L15,
      &outC->_L10[outC->_L16]);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L15, &outC->_L29);
  }
  outC->_L14 = outC->_L15.nid_packet;
  outC->packet_id2 = outC->_L14;
  outC->_L12 = kcg_lit_int64(0);
  if ((kcg_lit_int64(0) <= outC->_L12) & (outC->_L12 < kcg_lit_int64(30))) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L11,
      &outC->_L10[outC->_L12]);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L11, &outC->_L30);
  }
  outC->_L13 = outC->_L11.nid_packet;
  outC->packet_id1 = outC->_L13;
  outC->BG_ID = outC->_L19;
  outC->radioMSG = outC->_L18;
}

#ifndef KCG_USER_DEFINED_INIT
void setProbes_init_xdebugSupport_Pkg(outC_setProbes_xdebugSupport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L60 = kcg_lit_int64(0);
  outC->_L59 = kcg_true;
  outC->_L58 = kcg_lit_int64(0);
  outC->_L57 = kcg_true;
  outC->_L55 = kcg_lit_int64(0);
  outC->_L54 = kcg_lit_int64(0);
  outC->_L52 = kcg_lit_int64(0);
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L47 = kcg_lit_int64(0);
  outC->_L46 = kcg_lit_int64(0);
  outC->_L44 = kcg_lit_int64(0);
  outC->_L45 = kcg_lit_int64(0);
  outC->_L42 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_lit_int64(0);
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_lit_int64(0);
  outC->_L30.nid_packet = kcg_lit_int64(0);
  outC->_L30.q_dir = Q_DIR_Reverse;
  outC->_L30.valid = kcg_true;
  outC->_L30.startAddress = kcg_lit_int64(0);
  outC->_L30.endAddress = kcg_lit_int64(0);
  outC->_L29.nid_packet = kcg_lit_int64(0);
  outC->_L29.q_dir = Q_DIR_Reverse;
  outC->_L29.valid = kcg_true;
  outC->_L29.startAddress = kcg_lit_int64(0);
  outC->_L29.endAddress = kcg_lit_int64(0);
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_lit_int64(0);
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_lit_int64(0);
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L15.nid_packet = kcg_lit_int64(0);
  outC->_L15.q_dir = Q_DIR_Reverse;
  outC->_L15.valid = kcg_true;
  outC->_L15.startAddress = kcg_lit_int64(0);
  outC->_L15.endAddress = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11.nid_packet = kcg_lit_int64(0);
  outC->_L11.q_dir = Q_DIR_Reverse;
  outC->_L11.valid = kcg_true;
  outC->_L11.startAddress = kcg_lit_int64(0);
  outC->_L11.endAddress = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L10[idx].nid_packet = kcg_lit_int64(0);
    outC->_L10[idx].q_dir = Q_DIR_Reverse;
    outC->_L10[idx].valid = kcg_true;
    outC->_L10[idx].startAddress = kcg_lit_int64(0);
    outC->_L10[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L9.PacketHeaders[idx1].nid_packet = kcg_lit_int64(0);
    outC->_L9.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L9.PacketHeaders[idx1].valid = kcg_true;
    outC->_L9.PacketHeaders[idx1].startAddress = kcg_lit_int64(0);
    outC->_L9.PacketHeaders[idx1].endAddress = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L9.PacketData[idx2] = kcg_lit_int64(0);
  }
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.q_media = Q_MEDIA_Balise;
  outC->_L7.n_pig = N_PIG_I_am_the_1st;
  outC->_L7.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.m_dup = M_DUP_No_duplicates;
  outC->_L7.m_mcount = kcg_lit_int64(0);
  outC->_L7.nid_c = kcg_lit_int64(0);
  outC->_L7.nid_bg = kcg_lit_int64(0);
  outC->_L7.q_link = Q_LINK_Unlinked;
  outC->_L6.present = kcg_true;
  outC->_L6.checkResult = kcg_true;
  outC->_L6.api_bad_balise_received = kcg_true;
  outC->_L6.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.api_header.q_media = Q_MEDIA_Balise;
  outC->_L6.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L6.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L6.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L6.api_header.nid_c = kcg_lit_int64(0);
  outC->_L6.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L6.api_header.q_link = Q_LINK_Unlinked;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L6.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4.radioDevice = kcg_lit_int64(0);
  outC->_L4.receivedSystemTime = kcg_lit_int64(0);
  outC->_L4.nid_message = kcg_lit_int64(0);
  outC->_L4.t_train = kcg_lit_int64(0);
  outC->_L4.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L4.nid_lrbg = kcg_lit_int64(0);
  outC->_L4.t_train_reference = kcg_lit_int64(0);
  outC->_L4.nid_em = kcg_lit_int64(0);
  outC->_L4.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.d_sr = kcg_lit_int64(0);
  outC->_L4.t_sh_rqst = kcg_lit_int64(0);
  outC->_L4.d_ref = kcg_lit_int64(0);
  outC->_L4.q_dir = Q_DIR_Reverse;
  outC->_L4.d_emergencystop = kcg_lit_int64(0);
  outC->_L4.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.present = kcg_true;
  outC->_L2.apiConsistencyError = kcg_true;
  outC->_L2.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L2.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L2.Radio_MetaData.nid_em = kcg_true;
  outC->_L2.Radio_MetaData.q_scale = kcg_true;
  outC->_L2.Radio_MetaData.d_sr = kcg_true;
  outC->_L2.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L2.Radio_MetaData.d_ref = kcg_true;
  outC->_L2.Radio_MetaData.q_dir = kcg_true;
  outC->_L2.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L2.Radio_MetaData.m_version = kcg_true;
  outC->_L2.sendingRBC_Id.valid = kcg_true;
  outC->_L2.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L2.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L2.sendingRBC_Id.device_id = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L1.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L1.btm_msg.present = kcg_true;
  outC->_L1.btm_msg.checkResult = kcg_true;
  outC->_L1.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L1.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L1.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L1.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L1.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L1.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L1.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L1.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.rtm_msg.present = kcg_true;
  outC->_L1.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L1.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L1.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L1.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L1.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L1.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L1.packets.PacketHeaders[idx3].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx3].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx3].endAddress = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L1.packets.PacketData[idx4] = kcg_lit_int64(0);
  }
  outC->every = kcg_true;
  outC->lastBG_ID = kcg_lit_int64(0);
  outC->lastRadioMSG = kcg_lit_int64(0);
  outC->packet_id2 = kcg_lit_int64(0);
  outC->packet_id1 = kcg_lit_int64(0);
  outC->BG_ID = kcg_lit_int64(0);
  outC->radioMSG = kcg_lit_int64(0);
  outC->isChanged = kcg_true;
  /* _L55=(xdebugSupport_Pkg::countPackets#1)/ */
  countPackets_init_xdebugSupport_Pkg(&outC->Context_countPackets_1);
  outC->bgID = kcg_lit_int64(0);
  outC->lastMsgID = kcg_lit_int64(0);
  outC->lastBGID = kcg_lit_int64(0);
  outC->msgID = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setProbes_reset_xdebugSupport_Pkg(outC_setProbes_xdebugSupport_Pkg *outC)
{
  /* _L55=(xdebugSupport_Pkg::countPackets#1)/ */
  countPackets_reset_xdebugSupport_Pkg(&outC->Context_countPackets_1);
  outC->bgID = kcg_lit_int64(0);
  outC->lastMsgID = kcg_lit_int64(0);
  outC->lastBGID = kcg_lit_int64(0);
  outC->msgID = kcg_lit_int64(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setProbes_xdebugSupport_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

