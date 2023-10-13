/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TRAIN_TrackSideInputFifo_Toolbox_Functions_5.h"

/* Toolbox::Functions::TRAIN_TrackSideInputFifo/ */
void TRAIN_TrackSideInputFifo_Toolbox_Functions_5(
  /* inData/ */
  API_TrackSideInput_T_API_Msg_Pkg *inData_5,
  /* inValid/ */
  kcg_bool inValid_5,
  /* inReady/ */
  kcg_bool inReady_5,
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
  kcg_size idx;
  /* next_entry/ */
  kcg_int64 next_entry_partial_5;
  /* buffer/ */
  _18_array buffer_partial_5;
  /* next_entry/ */
  kcg_int64 _1_next_entry_partial_5;
  /* buffer/ */
  _18_array _2_buffer_partial_5;
  /* entry/ */
  kcg_int64 last_entry_5;
  /* buffer/ */
  _18_array last_buffer_5;
  /* next_entry/ */
  kcg_int64 last_next_entry_5;
  /* l_size/ */
  kcg_int64 last_l_size_5;

  outC->_L40_5 = kcg_lit_int64(5);
  outC->I2_Min_1_int64 = outC->_L40_5;
  outC->_L22_Min_1_int64 = outC->I2_Min_1_int64;
  /* _L38= */
  if (outC->init) {
    outC->_L38_5 = kcg_lit_int64(0);
  }
  else {
    outC->_L38_5 = outC->_L32_5;
  }
  outC->I1_Min_1_int64 = outC->_L38_5;
  outC->_L21_Min_1_int64 = outC->I1_Min_1_int64;
  outC->_L25_Min_1_int64 = outC->_L21_Min_1_int64 <= outC->_L22_Min_1_int64;
  /* @1/_L24= */
  if (outC->_L25_Min_1_int64) {
    outC->_L24_Min_1_int64 = outC->_L21_Min_1_int64;
  }
  else {
    outC->_L24_Min_1_int64 = outC->_L22_Min_1_int64;
  }
  outC->Mi_Output_Min_1_int64 = outC->_L24_Min_1_int64;
  last_entry_5 = outC->entry_5;
  kcg_copy__18_array(&last_buffer_5, &outC->buffer_5);
  last_next_entry_5 = outC->next_entry_5;
  last_l_size_5 = outC->l_size_5;
  outC->_L45_5 = outC->Mi_Output_Min_1_int64;
  outC->l_size_5 = outC->_L45_5;
  outC->_L69_5 = outC->l_size_5;
  outC->size_5 = outC->_L69_5;
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L68_5,
    (API_TrackSideInput_T_API_Msg_Pkg *) &cEmtpyTrackSideInputMessage_Toolbox);
  outC->_L67_5 = kcg_false;
  outC->_L66_5 = inReady_5 & (outC->l_size_5 > kcg_lit_int64(0));
  outC->_L63_5 = kcg_true;
  /* _L64= */
  if (outC->_L66_5) {
    outC->_L64_5 = outC->_L63_5;
  }
  else {
    outC->_L64_5 = outC->_L67_5;
  }
  outC->outValid_5 = outC->_L64_5;
  outC->_L62_5 = kcg_lit_int64(0);
  outC->_L61_5 = kcg_lit_int64(1);
  outC->_L60_5 = kcg_lit_int64(0);
  outC->_L59_5 = kcg_lit_int64(1);
  outC->_L57_5 = inValid_5 & (outC->l_size_5 == kcg_lit_int64(5));
  outC->_L56_5 = inReady_5 & (outC->l_size_5 > kcg_lit_int64(0));
  /* _L55= */
  if (outC->_L57_5) {
    outC->_L55_5 = outC->_L61_5;
  }
  else {
    outC->_L55_5 = outC->_L62_5;
  }
  /* _L47= */
  if (outC->_L56_5) {
    outC->_L47_5 = outC->_L59_5;
  }
  else {
    outC->_L47_5 = outC->_L60_5;
  }
  /* _L49= */
  if (outC->init) {
    outC->_L49_5 = kcg_lit_int64(0);
  }
  else {
    outC->_L49_5 = outC->_L50_5;
  }
  outC->entry_5 = outC->_L49_5;
  outC->_L52_5 = outC->entry_5;
  outC->_L53_5 = outC->_L52_5 + outC->_L47_5 + outC->_L55_5;
  outC->_L51_5 = kcg_lit_int64(5);
  outC->_L50_5 = outC->_L53_5 % outC->_L51_5;
  outC->_L44_5 = inReady_5 & (outC->l_size_5 > kcg_lit_int64(0));
  outC->_L33_5 = outC->l_size_5;
  outC->_L31_5 = kcg_lit_int64(0);
  outC->_L30_5 = kcg_lit_int64(-1);
  /* _L28= */
  if (outC->_L44_5) {
    outC->_L28_5 = outC->_L30_5;
  }
  else {
    outC->_L28_5 = outC->_L31_5;
  }
  outC->_L26_5 = kcg_lit_int64(0);
  outC->_L25_5 = kcg_lit_int64(1);
  outC->_L27_5 = inValid_5;
  /* _L23= */
  if (outC->_L27_5) {
    outC->_L23_5 = outC->_L25_5;
  }
  else {
    outC->_L23_5 = outC->_L26_5;
  }
  outC->_L32_5 = outC->_L33_5 + outC->_L23_5 + outC->_L28_5;
  outC->_L22_5 = outC->entry_5;
  outC->IfBlock1_clock_5 = inValid_5;
  /* IfBlock1: */
  if (outC->IfBlock1_clock_5) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L2_then_IfBlock1_5, inData_5);
    /* IfBlock1:then:_L14= */
    if (outC->init1) {
      outC->_L14_then_IfBlock1_5 = kcg_lit_int64(0);
    }
    else {
      outC->_L14_then_IfBlock1_5 = outC->_L20_then_IfBlock1_5;
    }
    next_entry_partial_5 = outC->_L14_then_IfBlock1_5;
    outC->_L9_then_IfBlock1_5 = next_entry_partial_5;
    /* IfBlock1:then:_L19/ */
    for (idx = 0; idx < 5; idx++) {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &outC->_L19_then_IfBlock1_5[idx],
        (API_TrackSideInput_T_API_Msg_Pkg *) &cEmtpyTrackSideInputMessage_Toolbox);
    }
    /* IfBlock1:then:_L22= */
    if (outC->init1) {
      kcg_copy__18_array(&outC->_L22_then_IfBlock1_5, &outC->_L19_then_IfBlock1_5);
    }
    else {
      kcg_copy__18_array(&outC->_L22_then_IfBlock1_5, &outC->_L4_then_IfBlock1_5);
    }
    kcg_copy__18_array(&outC->_L1_then_IfBlock1_5, &outC->_L22_then_IfBlock1_5);
    if ((kcg_lit_int64(0) <= outC->_L9_then_IfBlock1_5) &
      (outC->_L9_then_IfBlock1_5 < kcg_lit_int64(5))) {
      kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
        &outC->_L1_then_IfBlock1_5[outC->_L9_then_IfBlock1_5],
        &outC->_L2_then_IfBlock1_5);
    }
    kcg_copy__18_array(&buffer_partial_5, &outC->_L1_then_IfBlock1_5);
    kcg_copy__18_array(&outC->buffer_5, &buffer_partial_5);
  }
  else {
    kcg_copy__18_array(&_2_buffer_partial_5, &last_buffer_5);
    kcg_copy__18_array(&outC->buffer_5, &_2_buffer_partial_5);
  }
  kcg_copy__18_array(&outC->_L19_5, &outC->buffer_5);
  if ((kcg_lit_int64(0) <= outC->_L22_5) & (outC->_L22_5 < kcg_lit_int64(5))) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->_L18_5,
      &outC->_L19_5[outC->_L22_5]);
  }
  else {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L18_5, &outC->_L68_5);
  }
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->outData_5, &outC->_L18_5);
  /* IfBlock1: */
  if (outC->IfBlock1_clock_5) {
    outC->_L21_then_IfBlock1_5 = kcg_lit_int64(5);
    outC->_L8_then_IfBlock1_5 = next_entry_partial_5 + kcg_lit_int64(1);
    outC->_L20_then_IfBlock1_5 = outC->_L8_then_IfBlock1_5 %
      outC->_L21_then_IfBlock1_5;
    kcg_copy__18_array(&outC->_L4_then_IfBlock1_5, &buffer_partial_5);
    outC->next_entry_5 = next_entry_partial_5;
    outC->init1 = kcg_false;
  }
  else {
    _1_next_entry_partial_5 = last_next_entry_5;
    outC->next_entry_5 = _1_next_entry_partial_5;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void TRAIN_TrackSideInputFifo_init_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
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
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;

  outC->_L69_5 = kcg_lit_int64(0);
  outC->_L68_5.valid = kcg_true;
  outC->_L68_5.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L68_5.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L68_5.btm_msg.present = kcg_true;
  outC->_L68_5.btm_msg.checkResult = kcg_true;
  outC->_L68_5.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L68_5.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L68_5.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L68_5.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L68_5.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L68_5.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L68_5.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L68_5.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L68_5.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L68_5.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L68_5.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L68_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L68_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L68_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L68_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.present = kcg_true;
  outC->_L68_5.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L68_5.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L68_5.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L68_5.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L68_5.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L68_5.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L68_5.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L68_5.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L68_5.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L68_5.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L68_5.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L68_5.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L68_5.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L68_5.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L68_5.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L68_5.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L68_5.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L68_5.packets.PacketHeaders[idx1].nid_packet = kcg_lit_int64(0);
    outC->_L68_5.packets.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L68_5.packets.PacketHeaders[idx1].valid = kcg_true;
    outC->_L68_5.packets.PacketHeaders[idx1].startAddress = kcg_lit_int64(0);
    outC->_L68_5.packets.PacketHeaders[idx1].endAddress = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L68_5.packets.PacketData[idx2] = kcg_lit_int64(0);
  }
  outC->_L67_5 = kcg_true;
  outC->_L66_5 = kcg_true;
  outC->_L64_5 = kcg_true;
  outC->_L63_5 = kcg_true;
  outC->_L62_5 = kcg_lit_int64(0);
  outC->_L61_5 = kcg_lit_int64(0);
  outC->_L60_5 = kcg_lit_int64(0);
  outC->_L59_5 = kcg_lit_int64(0);
  outC->_L57_5 = kcg_true;
  outC->_L56_5 = kcg_true;
  outC->_L55_5 = kcg_lit_int64(0);
  outC->_L53_5 = kcg_lit_int64(0);
  outC->_L52_5 = kcg_lit_int64(0);
  outC->_L51_5 = kcg_lit_int64(0);
  outC->_L49_5 = kcg_lit_int64(0);
  outC->_L47_5 = kcg_lit_int64(0);
  outC->_L45_5 = kcg_lit_int64(0);
  outC->_L44_5 = kcg_true;
  outC->_L40_5 = kcg_lit_int64(0);
  outC->_L38_5 = kcg_lit_int64(0);
  outC->_L33_5 = kcg_lit_int64(0);
  outC->_L31_5 = kcg_lit_int64(0);
  outC->_L30_5 = kcg_lit_int64(0);
  outC->_L28_5 = kcg_lit_int64(0);
  outC->_L27_5 = kcg_true;
  outC->_L26_5 = kcg_lit_int64(0);
  outC->_L25_5 = kcg_lit_int64(0);
  outC->_L23_5 = kcg_lit_int64(0);
  outC->_L22_5 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L19_5[idx5].valid = kcg_true;
    outC->_L19_5[idx5].systemTimeMsgReceived = kcg_lit_int64(0);
    outC->_L19_5[idx5].msg_type = msrc_undefined_Common_Types_Pkg;
    outC->_L19_5[idx5].btm_msg.present = kcg_true;
    outC->_L19_5[idx5].btm_msg.checkResult = kcg_true;
    outC->_L19_5[idx5].btm_msg.api_bad_balise_received = kcg_true;
    outC->_L19_5[idx5].btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
    outC->_L19_5[idx5].btm_msg.api_header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L19_5[idx5].btm_msg.api_header.q_media = Q_MEDIA_Balise;
    outC->_L19_5[idx5].btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
    outC->_L19_5[idx5].btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
    outC->_L19_5[idx5].btm_msg.api_header.m_dup = M_DUP_No_duplicates;
    outC->_L19_5[idx5].btm_msg.api_header.m_mcount = kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.api_header.nid_c = kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.api_header.nid_bg = kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.api_header.q_link = Q_LINK_Unlinked;
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
      kcg_true;
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.present = kcg_true;
    outC->_L19_5[idx5].rtm_msg.apiConsistencyError = kcg_true;
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L19_5[idx5].rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
    outC->_L19_5[idx5].rtm_msg.Radio_MetaData.nid_em = kcg_true;
    outC->_L19_5[idx5].rtm_msg.Radio_MetaData.q_scale = kcg_true;
    outC->_L19_5[idx5].rtm_msg.Radio_MetaData.d_sr = kcg_true;
    outC->_L19_5[idx5].rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
    outC->_L19_5[idx5].rtm_msg.Radio_MetaData.d_ref = kcg_true;
    outC->_L19_5[idx5].rtm_msg.Radio_MetaData.q_dir = kcg_true;
    outC->_L19_5[idx5].rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
    outC->_L19_5[idx5].rtm_msg.Radio_MetaData.m_version = kcg_true;
    outC->_L19_5[idx5].rtm_msg.sendingRBC_Id.valid = kcg_true;
    outC->_L19_5[idx5].rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
    outC->_L19_5[idx5].rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
    for (idx3 = 0; idx3 < 30; idx3++) {
      outC->_L19_5[idx5].packets.PacketHeaders[idx3].nid_packet = kcg_lit_int64(0);
      outC->_L19_5[idx5].packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
      outC->_L19_5[idx5].packets.PacketHeaders[idx3].valid = kcg_true;
      outC->_L19_5[idx5].packets.PacketHeaders[idx3].startAddress = kcg_lit_int64(0);
      outC->_L19_5[idx5].packets.PacketHeaders[idx3].endAddress = kcg_lit_int64(0);
    }
    for (idx4 = 0; idx4 < 500; idx4++) {
      outC->_L19_5[idx5].packets.PacketData[idx4] = kcg_lit_int64(0);
    }
  }
  outC->_L18_5.valid = kcg_true;
  outC->_L18_5.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L18_5.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L18_5.btm_msg.present = kcg_true;
  outC->_L18_5.btm_msg.checkResult = kcg_true;
  outC->_L18_5.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L18_5.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18_5.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18_5.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L18_5.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L18_5.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18_5.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L18_5.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L18_5.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L18_5.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L18_5.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L18_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L18_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.present = kcg_true;
  outC->_L18_5.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L18_5.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L18_5.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L18_5.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L18_5.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18_5.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L18_5.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L18_5.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L18_5.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L18_5.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L18_5.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L18_5.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L18_5.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L18_5.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L18_5.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L18_5.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L18_5.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L18_5.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L18_5.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L18_5.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L18_5.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L18_5.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L18_5.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->IfBlock1_clock_5 = kcg_true;
  outC->_L2_then_IfBlock1_5.valid = kcg_true;
  outC->_L2_then_IfBlock1_5.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L2_then_IfBlock1_5.btm_msg.present = kcg_true;
  outC->_L2_then_IfBlock1_5.btm_msg.checkResult = kcg_true;
  outC->_L2_then_IfBlock1_5.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L2_then_IfBlock1_5.btm_msg.api_header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_then_IfBlock1_5.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_IfBlock1_5.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L2_then_IfBlock1_5.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L2_then_IfBlock1_5.btm_msg.api_header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_then_IfBlock1_5.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L2_then_IfBlock1_5.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.present = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(
      0);
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L2_then_IfBlock1_5.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1_5.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L2_then_IfBlock1_5.packets.PacketHeaders[idx8].nid_packet =
      kcg_lit_int64(0);
    outC->_L2_then_IfBlock1_5.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L2_then_IfBlock1_5.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L2_then_IfBlock1_5.packets.PacketHeaders[idx8].startAddress =
      kcg_lit_int64(0);
    outC->_L2_then_IfBlock1_5.packets.PacketHeaders[idx8].endAddress =
      kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L2_then_IfBlock1_5.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L8_then_IfBlock1_5 = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1_5 = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1_5 = kcg_lit_int64(0);
  outC->_L21_then_IfBlock1_5 = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->_L1_then_IfBlock1_5[idx12].valid = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].systemTimeMsgReceived = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].msg_type = msrc_undefined_Common_Types_Pkg;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.present = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.checkResult = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.api_bad_balise_received = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.api_header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.api_header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.api_header.q_media = Q_MEDIA_Balise;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.api_header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.api_header.m_dup = M_DUP_No_duplicates;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.api_header.m_mcount = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.api_header.nid_c = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.api_header.nid_bg = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.api_header.q_link = Q_LINK_Unlinked;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
      kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.present = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.apiConsistencyError = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.nid_message =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.t_train =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.nid_em =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.d_sr =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.d_ref =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.q_dir =
      Q_DIR_Reverse;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_MetaData.t_train_reference =
      kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_MetaData.nid_em = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_MetaData.q_scale = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_MetaData.d_sr = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_MetaData.d_ref = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_MetaData.q_dir = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_MetaData.d_emergencystop =
      kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.Radio_MetaData.m_version = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.sendingRBC_Id.valid = kcg_true;
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.sendingRBC_Id.rbc_id =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1_5[idx12].rtm_msg.sendingRBC_Id.device_id =
      kcg_lit_int64(0);
    for (idx10 = 0; idx10 < 30; idx10++) {
      outC->_L1_then_IfBlock1_5[idx12].packets.PacketHeaders[idx10].nid_packet =
        kcg_lit_int64(0);
      outC->_L1_then_IfBlock1_5[idx12].packets.PacketHeaders[idx10].q_dir =
        Q_DIR_Reverse;
      outC->_L1_then_IfBlock1_5[idx12].packets.PacketHeaders[idx10].valid = kcg_true;
      outC->_L1_then_IfBlock1_5[idx12].packets.PacketHeaders[idx10].startAddress =
        kcg_lit_int64(0);
      outC->_L1_then_IfBlock1_5[idx12].packets.PacketHeaders[idx10].endAddress =
        kcg_lit_int64(0);
    }
    for (idx11 = 0; idx11 < 500; idx11++) {
      outC->_L1_then_IfBlock1_5[idx12].packets.PacketData[idx11] = kcg_lit_int64(0);
    }
  }
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->_L19_then_IfBlock1_5[idx15].valid = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].systemTimeMsgReceived = kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].msg_type = msrc_undefined_Common_Types_Pkg;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.present = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.checkResult = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.api_bad_balise_received = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.api_header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.api_header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.api_header.q_media = Q_MEDIA_Balise;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.api_header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.api_header.m_dup =
      M_DUP_No_duplicates;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.api_header.m_mcount =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.api_header.nid_c = kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.api_header.nid_bg = kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.api_header.q_link = Q_LINK_Unlinked;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
      kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.present = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.apiConsistencyError = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.nid_message =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.t_train =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.nid_em =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.d_sr =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.d_ref =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.q_dir =
      Q_DIR_Reverse;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_MetaData.t_train_reference =
      kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_MetaData.nid_em = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_MetaData.q_scale = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_MetaData.d_sr = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_MetaData.d_ref = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_MetaData.q_dir = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_MetaData.d_emergencystop =
      kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.Radio_MetaData.m_version = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.sendingRBC_Id.valid = kcg_true;
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.sendingRBC_Id.nid_c =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.sendingRBC_Id.rbc_id =
      kcg_lit_int64(0);
    outC->_L19_then_IfBlock1_5[idx15].rtm_msg.sendingRBC_Id.device_id =
      kcg_lit_int64(0);
    for (idx13 = 0; idx13 < 30; idx13++) {
      outC->_L19_then_IfBlock1_5[idx15].packets.PacketHeaders[idx13].nid_packet =
        kcg_lit_int64(0);
      outC->_L19_then_IfBlock1_5[idx15].packets.PacketHeaders[idx13].q_dir =
        Q_DIR_Reverse;
      outC->_L19_then_IfBlock1_5[idx15].packets.PacketHeaders[idx13].valid = kcg_true;
      outC->_L19_then_IfBlock1_5[idx15].packets.PacketHeaders[idx13].startAddress =
        kcg_lit_int64(0);
      outC->_L19_then_IfBlock1_5[idx15].packets.PacketHeaders[idx13].endAddress =
        kcg_lit_int64(0);
    }
    for (idx14 = 0; idx14 < 500; idx14++) {
      outC->_L19_then_IfBlock1_5[idx15].packets.PacketData[idx14] = kcg_lit_int64(0);
    }
  }
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L22_then_IfBlock1_5[idx18].valid = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].systemTimeMsgReceived = kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].msg_type = msrc_undefined_Common_Types_Pkg;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.present = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.checkResult = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.api_bad_balise_received = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.api_header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.api_header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.api_header.q_media = Q_MEDIA_Balise;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.api_header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.api_header.m_dup =
      M_DUP_No_duplicates;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.api_header.m_mcount =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.api_header.nid_c = kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.api_header.nid_bg = kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.api_header.q_link = Q_LINK_Unlinked;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
      kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.present = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.apiConsistencyError = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.nid_message =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.t_train =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.nid_em =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.d_sr =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.d_ref =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.q_dir =
      Q_DIR_Reverse;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_MetaData.t_train_reference =
      kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_MetaData.nid_em = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_MetaData.q_scale = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_MetaData.d_sr = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_MetaData.d_ref = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_MetaData.q_dir = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_MetaData.d_emergencystop =
      kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.Radio_MetaData.m_version = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.sendingRBC_Id.valid = kcg_true;
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.sendingRBC_Id.nid_c =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.sendingRBC_Id.rbc_id =
      kcg_lit_int64(0);
    outC->_L22_then_IfBlock1_5[idx18].rtm_msg.sendingRBC_Id.device_id =
      kcg_lit_int64(0);
    for (idx16 = 0; idx16 < 30; idx16++) {
      outC->_L22_then_IfBlock1_5[idx18].packets.PacketHeaders[idx16].nid_packet =
        kcg_lit_int64(0);
      outC->_L22_then_IfBlock1_5[idx18].packets.PacketHeaders[idx16].q_dir =
        Q_DIR_Reverse;
      outC->_L22_then_IfBlock1_5[idx18].packets.PacketHeaders[idx16].valid = kcg_true;
      outC->_L22_then_IfBlock1_5[idx18].packets.PacketHeaders[idx16].startAddress =
        kcg_lit_int64(0);
      outC->_L22_then_IfBlock1_5[idx18].packets.PacketHeaders[idx16].endAddress =
        kcg_lit_int64(0);
    }
    for (idx17 = 0; idx17 < 500; idx17++) {
      outC->_L22_then_IfBlock1_5[idx18].packets.PacketData[idx17] = kcg_lit_int64(0);
    }
  }
  outC->_L21_Min_1_int64 = kcg_lit_int64(0);
  outC->_L22_Min_1_int64 = kcg_lit_int64(0);
  outC->_L24_Min_1_int64 = kcg_lit_int64(0);
  outC->_L25_Min_1_int64 = kcg_true;
  outC->I1_Min_1_int64 = kcg_lit_int64(0);
  outC->I2_Min_1_int64 = kcg_lit_int64(0);
  outC->Mi_Output_Min_1_int64 = kcg_lit_int64(0);
  outC->_L50_5 = kcg_lit_int64(0);
  outC->_L32_5 = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 5; idx21++) {
    outC->_L4_then_IfBlock1_5[idx21].valid = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].systemTimeMsgReceived = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].msg_type = msrc_undefined_Common_Types_Pkg;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.present = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.checkResult = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.api_bad_balise_received = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.api_header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.api_header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.api_header.q_media = Q_MEDIA_Balise;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.api_header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.api_header.m_dup = M_DUP_No_duplicates;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.api_header.m_mcount = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.api_header.nid_c = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.api_header.nid_bg = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.api_header.q_link = Q_LINK_Unlinked;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
      kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.present = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.apiConsistencyError = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.nid_message =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.t_train =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.m_ack =
      M_ACK_No_acknowledgement_required;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.nid_em =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.d_sr =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.d_ref =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.q_dir =
      Q_DIR_Reverse;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_Common_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_MetaData.t_train_reference =
      kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_MetaData.nid_em = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_MetaData.q_scale = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_MetaData.d_sr = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_MetaData.d_ref = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_MetaData.q_dir = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_MetaData.d_emergencystop =
      kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.Radio_MetaData.m_version = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.sendingRBC_Id.valid = kcg_true;
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.sendingRBC_Id.rbc_id =
      kcg_lit_int64(0);
    outC->_L4_then_IfBlock1_5[idx21].rtm_msg.sendingRBC_Id.device_id =
      kcg_lit_int64(0);
    for (idx19 = 0; idx19 < 30; idx19++) {
      outC->_L4_then_IfBlock1_5[idx21].packets.PacketHeaders[idx19].nid_packet =
        kcg_lit_int64(0);
      outC->_L4_then_IfBlock1_5[idx21].packets.PacketHeaders[idx19].q_dir =
        Q_DIR_Reverse;
      outC->_L4_then_IfBlock1_5[idx21].packets.PacketHeaders[idx19].valid = kcg_true;
      outC->_L4_then_IfBlock1_5[idx21].packets.PacketHeaders[idx19].startAddress =
        kcg_lit_int64(0);
      outC->_L4_then_IfBlock1_5[idx21].packets.PacketHeaders[idx19].endAddress =
        kcg_lit_int64(0);
    }
    for (idx20 = 0; idx20 < 500; idx20++) {
      outC->_L4_then_IfBlock1_5[idx21].packets.PacketData[idx20] = kcg_lit_int64(0);
    }
  }
  outC->_L20_then_IfBlock1_5 = kcg_lit_int64(0);
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->size_5 = kcg_lit_int64(0);
  outC->outValid_5 = kcg_true;
  outC->outData_5.valid = kcg_true;
  outC->outData_5.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->outData_5.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->outData_5.btm_msg.present = kcg_true;
  outC->outData_5.btm_msg.checkResult = kcg_true;
  outC->outData_5.btm_msg.api_bad_balise_received = kcg_true;
  outC->outData_5.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outData_5.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outData_5.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->outData_5.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->outData_5.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outData_5.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->outData_5.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->outData_5.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->outData_5.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->outData_5.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outData_5.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outData_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->outData_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->outData_5.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->outData_5.rtm_msg.present = kcg_true;
  outC->outData_5.rtm_msg.apiConsistencyError = kcg_true;
  outC->outData_5.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->outData_5.rtm_msg.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->outData_5.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->outData_5.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->outData_5.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->outData_5.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->outData_5.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(
      0);
  outC->outData_5.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->outData_5.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outData_5.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->outData_5.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->outData_5.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->outData_5.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outData_5.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->outData_5.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outData_5.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->outData_5.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->outData_5.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->outData_5.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->outData_5.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->outData_5.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->outData_5.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->outData_5.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->outData_5.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->outData_5.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->outData_5.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->outData_5.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->outData_5.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->outData_5.packets.PacketHeaders[idx22].nid_packet = kcg_lit_int64(0);
    outC->outData_5.packets.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->outData_5.packets.PacketHeaders[idx22].valid = kcg_true;
    outC->outData_5.packets.PacketHeaders[idx22].startAddress = kcg_lit_int64(0);
    outC->outData_5.packets.PacketHeaders[idx22].endAddress = kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->outData_5.packets.PacketData[idx23] = kcg_lit_int64(0);
  }
  outC->l_size_5 = kcg_lit_int64(0);
  outC->next_entry_5 = kcg_lit_int64(0);
  /* buffer/ */
  for (idx = 0; idx < 5; idx++) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->buffer_5[idx],
      (API_TrackSideInput_T_API_Msg_Pkg *) &cEmtpyTrackSideInputMessage_Toolbox);
  }
  outC->entry_5 = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TRAIN_TrackSideInputFifo_reset_Toolbox_Functions_5(
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 *outC)
{
  kcg_size idx;

  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->l_size_5 = kcg_lit_int64(0);
  outC->next_entry_5 = kcg_lit_int64(0);
  /* buffer/ */
  for (idx = 0; idx < 5; idx++) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->buffer_5[idx],
      (API_TrackSideInput_T_API_Msg_Pkg *) &cEmtpyTrackSideInputMessage_Toolbox);
  }
  outC->entry_5 = kcg_lit_int64(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Toolbox::Functions::TRAIN_TrackSideInputFifo/
  @1: (math::Min#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TRAIN_TrackSideInputFifo_Toolbox_Functions_5.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

