/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC_InputBuffer_Toolbox_Functions.h"

/* Toolbox::Functions::EVC_InputBuffer/ */
void EVC_InputBuffer_Toolbox_Functions(
  /* BTMMessage/ */
  API_TrackSideInput_T_API_Msg_Pkg *BTMMessage,
  /* RTMMessage/ */
  API_TrackSideInput_T_API_Msg_Pkg *RTMMessage,
  outC_EVC_InputBuffer_Toolbox_Functions *outC)
{
  static kcg_int64 noname;
  /* sendRTM/ */
  static kcg_bool last_sendRTM;

  last_sendRTM = outC->sendRTM;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L7, RTMMessage);
  outC->_L9 = outC->_L7.valid;
  outC->_L27 = last_sendRTM;
  /* _L1=(Toolbox::Functions::TRAIN_TrackSideInputFifo#1)/ */
  TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
    &outC->_L7,
    outC->_L9,
    outC->_L27,
    &outC->Context_TRAIN_TrackSideInputFifo_1);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L1,
    &outC->Context_TRAIN_TrackSideInputFifo_1.outData_5);
  outC->_L2 = outC->Context_TRAIN_TrackSideInputFifo_1.outValid_5;
  outC->_L3 = outC->Context_TRAIN_TrackSideInputFifo_1.size_5;
  noname = outC->_L3;
  outC->_L45 = kcg_false;
  outC->_L28 = last_sendRTM;
  outC->_L29 = !outC->_L28;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_lit_int64(0);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L8, BTMMessage);
  outC->_L10 = outC->_L8.valid;
  /* _L4=(Toolbox::Functions::TRAIN_TrackSideInputFifo#2)/ */
  TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
    &outC->_L8,
    outC->_L10,
    outC->_L29,
    &outC->Context_TRAIN_TrackSideInputFifo_2);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L4,
    &outC->Context_TRAIN_TrackSideInputFifo_2.outData_5);
  outC->_L5 = outC->Context_TRAIN_TrackSideInputFifo_2.outValid_5;
  outC->_L6 = outC->Context_TRAIN_TrackSideInputFifo_2.size_5;
  outC->sizeBTM = outC->_L6;
  outC->_L20 = outC->sizeBTM;
  outC->_L21 = outC->_L20 == outC->_L22;
  /* _L19= */
  if (outC->_L21) {
    outC->_L19 = outC->_L23;
  }
  else {
    outC->_L19 = outC->_L45;
  }
  outC->sendRTM = outC->_L19;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L14,
    (API_TrackSideInput_T_API_Msg_Pkg *) &cEmtpyTrackSideInputMessage_Toolbox);
  outC->_L17 = last_sendRTM;
  /* _L12= */
  if (outC->_L17) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L12, &outC->_L1);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L12, &outC->_L4);
  }
  outC->_L16 = last_sendRTM;
  /* _L15= */
  if (outC->_L16) {
    outC->_L15 = outC->_L2;
  }
  else {
    outC->_L15 = outC->_L5;
  }
  /* _L13= */
  if (outC->_L15) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L13, &outC->_L12);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L13, &outC->_L14);
  }
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->TrackMessageToEVC,
    &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void EVC_InputBuffer_init_Toolbox_Functions(
  outC_EVC_InputBuffer_Toolbox_Functions *outC)
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

  outC->_L45 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_lit_int64(0);
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14.valid = kcg_true;
  outC->_L14.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L14.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L14.btm_msg.present = kcg_true;
  outC->_L14.btm_msg.checkResult = kcg_true;
  outC->_L14.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L14.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L14.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L14.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L14.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L14.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L14.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L14.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L14.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L14.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L14.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L14.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L14.rtm_msg.present = kcg_true;
  outC->_L14.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L14.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L14.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L14.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L14.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L14.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L14.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L14.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L14.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L14.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L14.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L14.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L14.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L14.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L14.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L14.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L14.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L14.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L14.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L14.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L14.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L14.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L14.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L14.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L14.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L14.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L14.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L14.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L14.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L14.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L14.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L14.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L14.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L13.valid = kcg_true;
  outC->_L13.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L13.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L13.btm_msg.present = kcg_true;
  outC->_L13.btm_msg.checkResult = kcg_true;
  outC->_L13.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L13.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L13.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L13.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L13.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L13.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L13.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L13.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L13.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L13.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L13.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L13.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L13.rtm_msg.present = kcg_true;
  outC->_L13.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L13.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L13.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L13.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L13.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L13.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L13.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L13.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L13.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L13.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L13.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L13.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L13.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L13.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L13.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L13.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L13.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L13.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L13.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L13.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L13.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L13.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L13.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L13.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L13.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L13.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L13.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L13.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L13.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L12.valid = kcg_true;
  outC->_L12.systemTimeMsgReceived = kcg_lit_int64(0);
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
  outC->_L12.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L12.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L12.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L12.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L12.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L12.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L12.rtm_msg.present = kcg_true;
  outC->_L12.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L12.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L12.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L12.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L12.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L12.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L12.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L12.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L12.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L12.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L12.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L12.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L12.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L12.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
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
  outC->_L12.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L12.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L12.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L12.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L12.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L12.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L12.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L12.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L12.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L8.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L8.btm_msg.present = kcg_true;
  outC->_L8.btm_msg.checkResult = kcg_true;
  outC->_L8.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L8.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L8.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L8.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L8.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L8.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L8.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L8.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L8.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L8.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L8.rtm_msg.present = kcg_true;
  outC->_L8.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L8.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L8.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L8.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L8.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L8.rtm_msg.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L8.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L8.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L8.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L8.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L8.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L8.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L8.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L8.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L8.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L8.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L8.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L8.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L8.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L8.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L8.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L8.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L8.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L8.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L8.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L8.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L8.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L8.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L8.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L8.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L8.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L8.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L8.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L7.valid = kcg_true;
  outC->_L7.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L7.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L7.btm_msg.present = kcg_true;
  outC->_L7.btm_msg.checkResult = kcg_true;
  outC->_L7.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L7.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L7.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L7.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L7.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L7.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L7.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L7.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L7.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L7.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L7.rtm_msg.present = kcg_true;
  outC->_L7.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L7.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L7.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L7.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L7.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L7.rtm_msg.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L7.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L7.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L7.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L7.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L7.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L7.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L7.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L7.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L7.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L7.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L7.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L7.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L7.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L7.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L7.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L7.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L7.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L7.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L7.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L7.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L7.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L7.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L7.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L7.packets.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L7.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
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
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L4.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L4.packets.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_lit_int64(0);
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
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L1.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx12].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx12].endAddress = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L1.packets.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->sizeBTM = kcg_lit_int64(0);
  outC->TrackMessageToEVC.valid = kcg_true;
  outC->TrackMessageToEVC.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->TrackMessageToEVC.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->TrackMessageToEVC.btm_msg.present = kcg_true;
  outC->TrackMessageToEVC.btm_msg.checkResult = kcg_true;
  outC->TrackMessageToEVC.btm_msg.api_bad_balise_received = kcg_true;
  outC->TrackMessageToEVC.btm_msg.api_header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->TrackMessageToEVC.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessageToEVC.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->TrackMessageToEVC.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->TrackMessageToEVC.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->TrackMessageToEVC.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->TrackMessageToEVC.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.present = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.apiConsistencyError = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(
      0);
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->TrackMessageToEVC.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->TrackMessageToEVC.packets.PacketHeaders[idx14].nid_packet =
      kcg_lit_int64(0);
    outC->TrackMessageToEVC.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->TrackMessageToEVC.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->TrackMessageToEVC.packets.PacketHeaders[idx14].startAddress =
      kcg_lit_int64(0);
    outC->TrackMessageToEVC.packets.PacketHeaders[idx14].endAddress =
      kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->TrackMessageToEVC.packets.PacketData[idx15] = kcg_lit_int64(0);
  }
  /* _L4=(Toolbox::Functions::TRAIN_TrackSideInputFifo#2)/ */
  TRAIN_TrackSideInputFifo_init_Toolbox_Functions_5(
    &outC->Context_TRAIN_TrackSideInputFifo_2);
  /* _L1=(Toolbox::Functions::TRAIN_TrackSideInputFifo#1)/ */
  TRAIN_TrackSideInputFifo_init_Toolbox_Functions_5(
    &outC->Context_TRAIN_TrackSideInputFifo_1);
  outC->sendRTM = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EVC_InputBuffer_reset_Toolbox_Functions(
  outC_EVC_InputBuffer_Toolbox_Functions *outC)
{
  /* _L4=(Toolbox::Functions::TRAIN_TrackSideInputFifo#2)/ */
  TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(
    &outC->Context_TRAIN_TrackSideInputFifo_2);
  /* _L1=(Toolbox::Functions::TRAIN_TrackSideInputFifo#1)/ */
  TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(
    &outC->Context_TRAIN_TrackSideInputFifo_1);
  outC->sendRTM = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVC_InputBuffer_Toolbox_Functions.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

