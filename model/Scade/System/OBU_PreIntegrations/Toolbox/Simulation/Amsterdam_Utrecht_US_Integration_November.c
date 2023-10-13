/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_US_Integration_November.h"

/* US_Integration_November::Amsterdam_Utrecht/ */
void Amsterdam_Utrecht_US_Integration_November(
  /* TrainPos/ */
  kcg_float64 TrainPos,
  /* Trigger_in/ */
  kcg_int64 Trigger_in,
  /* SelectTrack/ */
  TrackType_US_Integration_November SelectTrack,
  outC_Amsterdam_Utrecht_US_Integration_November *outC)
{
  /* Balise_Packets/ */
  CompressedPackets_T_Common_Types_Pkg Balise_Packets_partial;
  /* Balise_Header/ */
  TelegramHeader_T_BG_Types_Pkg Balise_Header_partial;
  /* CompressedBaliseMessage/ */
  CompressedBaliseMessage_TM CompressedBaliseMessage_partial;
  /* RadioTrackTrainHeader_out/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg RadioTrackTrainHeader_out_partial;
  /* Compressed_Packets_out/ */
  CompressedPackets_T_Common_Types_Pkg Compressed_Packets_out_partial;
  /* Compressed_Radio_Message_out/ */
  CompressedRadioMessage_TM Compressed_Radio_Message_out_partial;
  /* Balise_Packets/ */
  CompressedPackets_T_Common_Types_Pkg _1_Balise_Packets_partial;
  /* Balise_Header/ */
  TelegramHeader_T_BG_Types_Pkg _2_Balise_Header_partial;
  /* CompressedBaliseMessage/ */
  CompressedBaliseMessage_TM _3_CompressedBaliseMessage_partial;
  /* RadioTrackTrainHeader_out/ */
  _4_Radio_TrackTrain_Header_T_Radio_Types_Pkg _4_RadioTrackTrainHeader_out_partial;
  /* Compressed_Packets_out/ */
  CompressedPackets_T_Common_Types_Pkg _5_Compressed_Packets_out_partial;
  /* Compressed_Radio_Message_out/ */
  CompressedRadioMessage_TM _6_Compressed_Radio_Message_out_partial;

  outC->IfBlock1_clock = (SelectTrack ==
      UserStory01to12_US_Integration_November) | (SelectTrack ==
      UserStory13to16_US_Integration_November);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L7_then_IfBlock1 = TrainPos;
    outC->_L8_then_IfBlock1 = Trigger_in;
    outC->_L9_then_IfBlock1 = SelectTrack;
    /* IfBlock1:then:_L1=(US_Integration_November::Amsterdam_Utrecht_US#1)/ */
    Amsterdam_Utrecht_US_US_Integration_November(
      outC->_L7_then_IfBlock1,
      outC->_L8_then_IfBlock1,
      outC->_L9_then_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_US_1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L1_then_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_US_1.Balise_Packets);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_US_1.Balise_Header);
    kcg_copy_CompressedBaliseMessage_TM(
      &outC->_L3_then_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_US_1.CompressedBaliseMessage);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->_L4_then_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_US_1.RadioTrackTrainHeader_out);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L5_then_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_US_1.Compressed_Packets_out);
    kcg_copy_CompressedRadioMessage_TM(
      &outC->_L6_then_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_US_1.Compressed_Radio_Message_out);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &Compressed_Packets_out_partial,
      &outC->_L5_then_IfBlock1);
    kcg_copy_CompressedRadioMessage_TM(
      &Compressed_Radio_Message_out_partial,
      &outC->_L6_then_IfBlock1);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &RadioTrackTrainHeader_out_partial,
      &outC->_L4_then_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &Balise_Packets_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_CompressedBaliseMessage_TM(
      &CompressedBaliseMessage_partial,
      &outC->_L3_then_IfBlock1);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(
      &Balise_Header_partial,
      &outC->_L2_then_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->Balise_Packets,
      &Balise_Packets_partial);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(
      &outC->Balise_Header,
      &Balise_Header_partial);
    kcg_copy_CompressedBaliseMessage_TM(
      &outC->CompressedBaliseMessage,
      &CompressedBaliseMessage_partial);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->RadioTrackTrainHeader_out,
      &RadioTrackTrainHeader_out_partial);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->Compressed_Packets_out,
      &Compressed_Packets_out_partial);
    kcg_copy_CompressedRadioMessage_TM(
      &outC->Compressed_Radio_Message_out,
      &Compressed_Radio_Message_out_partial);
  }
  else {
    outC->_L7_else_IfBlock1 = TrainPos;
    outC->_L8_else_IfBlock1 = Trigger_in;
    outC->_L9_else_IfBlock1 = SelectTrack;
    /* IfBlock1:else:_L1=(US_Integration_November::Amsterdam_Utrecht_modular#1)/ */
    Amsterdam_Utrecht_modular_US_Integration_November(
      outC->_L7_else_IfBlock1,
      outC->_L8_else_IfBlock1,
      outC->_L9_else_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_modular_1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L1_else_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_modular_1.Balise_Packets);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(
      &outC->_L2_else_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_modular_1.Balise_Header);
    kcg_copy_CompressedBaliseMessage_TM(
      &outC->_L3_else_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_modular_1.CompressedBaliseMessage);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->_L4_else_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_modular_1.RadioTrackTrainHeader_out);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L5_else_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_modular_1.Compressed_Packets_out);
    kcg_copy_CompressedRadioMessage_TM(
      &outC->_L6_else_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_modular_1.Compressed_Radio_Message_out);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &_4_RadioTrackTrainHeader_out_partial,
      &outC->_L4_else_IfBlock1);
    kcg_copy_CompressedRadioMessage_TM(
      &_6_Compressed_Radio_Message_out_partial,
      &outC->_L6_else_IfBlock1);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(
      &_2_Balise_Header_partial,
      &outC->_L2_else_IfBlock1);
    kcg_copy_CompressedBaliseMessage_TM(
      &_3_CompressedBaliseMessage_partial,
      &outC->_L3_else_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_5_Compressed_Packets_out_partial,
      &outC->_L5_else_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_1_Balise_Packets_partial,
      &outC->_L1_else_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->Balise_Packets,
      &_1_Balise_Packets_partial);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(
      &outC->Balise_Header,
      &_2_Balise_Header_partial);
    kcg_copy_CompressedBaliseMessage_TM(
      &outC->CompressedBaliseMessage,
      &_3_CompressedBaliseMessage_partial);
    kcg_copy__4_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &outC->RadioTrackTrainHeader_out,
      &_4_RadioTrackTrainHeader_out_partial);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->Compressed_Packets_out,
      &_5_Compressed_Packets_out_partial);
    kcg_copy_CompressedRadioMessage_TM(
      &outC->Compressed_Radio_Message_out,
      &_6_Compressed_Radio_Message_out_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Amsterdam_Utrecht_init_US_Integration_November(
  outC_Amsterdam_Utrecht_US_Integration_November *outC)
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

  outC->IfBlock1_clock = kcg_true;
  outC->_L6_else_IfBlock1.Header.radioDevice = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.nid_message = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.t_train = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.m_ack = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.nid_em = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.q_scale = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.d_sr = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.d_ref = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.q_dir = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.Header.m_version = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L6_else_IfBlock1.Messages.PacketHeaders[idx].nid_packet =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L6_else_IfBlock1.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L6_else_IfBlock1.Messages.PacketHeaders[idx].startAddress =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.Messages.PacketHeaders[idx].endAddress =
      kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L6_else_IfBlock1.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L5_else_IfBlock1.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L5_else_IfBlock1.PacketHeaders[idx2].valid = kcg_true;
    outC->_L5_else_IfBlock1.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L5_else_IfBlock1.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L4_else_IfBlock1.radioDevice = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.receivedSystemTime = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.nid_message = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.t_train = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L4_else_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.t_train_reference = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.nid_em = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4_else_IfBlock1.d_sr = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.t_sh_rqst = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.d_ref = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L4_else_IfBlock1.d_emergencystop = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_else_IfBlock1.Header.q_updown = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.m_version = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.q_media = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.n_pig = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.n_total = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.m_dup = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.m_mcount = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.nid_c = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.nid_bg = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.q_link = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L3_else_IfBlock1.Messages.PacketHeaders[idx4].nid_packet =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L3_else_IfBlock1.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->_L3_else_IfBlock1.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1.Messages.PacketHeaders[idx4].endAddress =
      kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L3_else_IfBlock1.Messages.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L2_else_IfBlock1.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2_else_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_else_IfBlock1.q_media = Q_MEDIA_Balise;
  outC->_L2_else_IfBlock1.n_pig = N_PIG_I_am_the_1st;
  outC->_L2_else_IfBlock1.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2_else_IfBlock1.m_dup = M_DUP_No_duplicates;
  outC->_L2_else_IfBlock1.m_mcount = kcg_lit_int64(0);
  outC->_L2_else_IfBlock1.nid_c = kcg_lit_int64(0);
  outC->_L2_else_IfBlock1.nid_bg = kcg_lit_int64(0);
  outC->_L2_else_IfBlock1.q_link = Q_LINK_Unlinked;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L1_else_IfBlock1.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L1_else_IfBlock1.PacketHeaders[idx6].valid = kcg_true;
    outC->_L1_else_IfBlock1.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L1_else_IfBlock1.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L1_else_IfBlock1.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L7_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L8_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L9_else_IfBlock1 = US_01_to_12_US_Integration_November;
  outC->_L6_then_IfBlock1.Header.radioDevice = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.nid_message = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.t_train = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.m_ack = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.nid_em = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.q_scale = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.d_sr = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.d_ref = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.q_dir = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.Header.m_version = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L6_then_IfBlock1.Messages.PacketHeaders[idx8].nid_packet =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.Messages.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L6_then_IfBlock1.Messages.PacketHeaders[idx8].valid = kcg_true;
    outC->_L6_then_IfBlock1.Messages.PacketHeaders[idx8].startAddress =
      kcg_lit_int64(0);
    outC->_L6_then_IfBlock1.Messages.PacketHeaders[idx8].endAddress =
      kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L6_then_IfBlock1.Messages.PacketData[idx9] = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L5_then_IfBlock1.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L5_then_IfBlock1.PacketHeaders[idx10].valid = kcg_true;
    outC->_L5_then_IfBlock1.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->_L5_then_IfBlock1.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L5_then_IfBlock1.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->_L4_then_IfBlock1.radioDevice = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.receivedSystemTime = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.nid_message = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.t_train = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L4_then_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.t_train_reference = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.nid_em = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4_then_IfBlock1.d_sr = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.t_sh_rqst = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.d_ref = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L4_then_IfBlock1.d_emergencystop = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_then_IfBlock1.Header.q_updown = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.Header.m_version = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.Header.q_media = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.Header.n_pig = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.Header.n_total = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.Header.m_dup = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.Header.m_mcount = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.Header.nid_c = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.Header.nid_bg = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.Header.q_link = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L3_then_IfBlock1.Messages.PacketHeaders[idx12].nid_packet =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.Messages.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L3_then_IfBlock1.Messages.PacketHeaders[idx12].valid = kcg_true;
    outC->_L3_then_IfBlock1.Messages.PacketHeaders[idx12].startAddress =
      kcg_lit_int64(0);
    outC->_L3_then_IfBlock1.Messages.PacketHeaders[idx12].endAddress =
      kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L3_then_IfBlock1.Messages.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->_L2_then_IfBlock1.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2_then_IfBlock1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_IfBlock1.q_media = Q_MEDIA_Balise;
  outC->_L2_then_IfBlock1.n_pig = N_PIG_I_am_the_1st;
  outC->_L2_then_IfBlock1.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2_then_IfBlock1.m_dup = M_DUP_No_duplicates;
  outC->_L2_then_IfBlock1.m_mcount = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.nid_c = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.nid_bg = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.q_link = Q_LINK_Unlinked;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L1_then_IfBlock1.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L1_then_IfBlock1.PacketHeaders[idx14].valid = kcg_true;
    outC->_L1_then_IfBlock1.PacketHeaders[idx14].startAddress = kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L1_then_IfBlock1.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->_L7_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L8_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1 = US_01_to_12_US_Integration_November;
  outC->Compressed_Radio_Message_out.Header.radioDevice = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.nid_message = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.t_train = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.m_ack = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.nid_lrbg = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.t_train_reference = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.nid_em = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.q_scale = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.d_sr = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.d_ref = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.q_dir = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.d_emergencystop = kcg_lit_int64(0);
  outC->Compressed_Radio_Message_out.Header.m_version = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx16].nid_packet =
      kcg_lit_int64(0);
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx16].q_dir =
      Q_DIR_Reverse;
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx16].valid =
      kcg_true;
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx16].startAddress =
      kcg_lit_int64(0);
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx16].endAddress =
      kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->Compressed_Radio_Message_out.Messages.PacketData[idx17] =
      kcg_lit_int64(0);
  }
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->Compressed_Packets_out.PacketHeaders[idx18].nid_packet = kcg_lit_int64(0);
    outC->Compressed_Packets_out.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->Compressed_Packets_out.PacketHeaders[idx18].valid = kcg_true;
    outC->Compressed_Packets_out.PacketHeaders[idx18].startAddress =
      kcg_lit_int64(0);
    outC->Compressed_Packets_out.PacketHeaders[idx18].endAddress = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->Compressed_Packets_out.PacketData[idx19] = kcg_lit_int64(0);
  }
  outC->RadioTrackTrainHeader_out.radioDevice = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.receivedSystemTime = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.nid_message = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.t_train = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.m_ack = M_ACK_No_acknowledgement_required;
  outC->RadioTrackTrainHeader_out.nid_lrbg = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.t_train_reference = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.nid_em = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.q_scale = Q_SCALE_10_cm_scale;
  outC->RadioTrackTrainHeader_out.d_sr = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.t_sh_rqst = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.d_ref = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.q_dir = Q_DIR_Reverse;
  outC->RadioTrackTrainHeader_out.d_emergencystop = kcg_lit_int64(0);
  outC->RadioTrackTrainHeader_out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->CompressedBaliseMessage.Header.q_updown = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.m_version = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.q_media = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.n_pig = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.n_total = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.m_dup = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.m_mcount = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.nid_c = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.nid_bg = kcg_lit_int64(0);
  outC->CompressedBaliseMessage.Header.q_link = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx20].nid_packet =
      kcg_lit_int64(0);
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx20].q_dir =
      Q_DIR_Reverse;
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx20].valid = kcg_true;
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx20].startAddress =
      kcg_lit_int64(0);
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx20].endAddress =
      kcg_lit_int64(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->CompressedBaliseMessage.Messages.PacketData[idx21] = kcg_lit_int64(0);
  }
  outC->Balise_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->Balise_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Balise_Header.q_media = Q_MEDIA_Balise;
  outC->Balise_Header.n_pig = N_PIG_I_am_the_1st;
  outC->Balise_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->Balise_Header.m_dup = M_DUP_No_duplicates;
  outC->Balise_Header.m_mcount = kcg_lit_int64(0);
  outC->Balise_Header.nid_c = kcg_lit_int64(0);
  outC->Balise_Header.nid_bg = kcg_lit_int64(0);
  outC->Balise_Header.q_link = Q_LINK_Unlinked;
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->Balise_Packets.PacketHeaders[idx22].nid_packet = kcg_lit_int64(0);
    outC->Balise_Packets.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->Balise_Packets.PacketHeaders[idx22].valid = kcg_true;
    outC->Balise_Packets.PacketHeaders[idx22].startAddress = kcg_lit_int64(0);
    outC->Balise_Packets.PacketHeaders[idx22].endAddress = kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->Balise_Packets.PacketData[idx23] = kcg_lit_int64(0);
  }
  /* IfBlock1:then:_L1=(US_Integration_November::Amsterdam_Utrecht_US#1)/ */
  Amsterdam_Utrecht_US_init_US_Integration_November(
    &outC->Context_Amsterdam_Utrecht_US_1);
  /* IfBlock1:else:_L1=(US_Integration_November::Amsterdam_Utrecht_modular#1)/ */
  Amsterdam_Utrecht_modular_init_US_Integration_November(
    &outC->Context_Amsterdam_Utrecht_modular_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Amsterdam_Utrecht_reset_US_Integration_November(
  outC_Amsterdam_Utrecht_US_Integration_November *outC)
{
  /* IfBlock1:then:_L1=(US_Integration_November::Amsterdam_Utrecht_US#1)/ */
  Amsterdam_Utrecht_US_reset_US_Integration_November(
    &outC->Context_Amsterdam_Utrecht_US_1);
  /* IfBlock1:else:_L1=(US_Integration_November::Amsterdam_Utrecht_modular#1)/ */
  Amsterdam_Utrecht_modular_reset_US_Integration_November(
    &outC->Context_Amsterdam_Utrecht_modular_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_US_Integration_November.c
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

