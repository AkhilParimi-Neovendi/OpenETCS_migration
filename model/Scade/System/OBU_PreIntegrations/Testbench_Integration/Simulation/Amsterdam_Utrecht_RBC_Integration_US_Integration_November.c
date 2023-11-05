/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_RBC_Integration_US_Integration_November.h"

/* US_Integration_November::Amsterdam_Utrecht_RBC_Integration/ */
void Amsterdam_Utrecht_RBC_Integration_US_Integration_November(
  /* Trigger_in/ */
  kcg_int32 Trigger_in,
  /* SelectTrack/ */
  TrackType_US_Integration_November SelectTrack,
  outC_Amsterdam_Utrecht_RBC_Integration_US_Integration_November *outC)
{
  /* Header/ */
  static M_TrackTrain_Radio_T_TM_radio_messages Header_partial;
  /* Packets/ */
  static CompressedPackets_T_Common_Types_Pkg Packets_partial;
  /* Header/ */
  static M_TrackTrain_Radio_T_TM_radio_messages _1_Header_partial;
  /* Packets/ */
  static CompressedPackets_T_Common_Types_Pkg _2_Packets_partial;

  outC->IfBlock1_clock = SelectTrack == UserStory01to12_US_Integration_November;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L3_then_IfBlock1,
      (M_TrackTrain_Radio_T_TM_radio_messages *) &no_message_US_Integration_November);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L4_then_IfBlock1,
      (CompressedPackets_T_Common_Types_Pkg *) &no_packets_US_Integration_November);
    outC->_L8_then_IfBlock1 = Trigger_in;
    outC->_L5_then_IfBlock1 = kcg_false;
    /* IfBlock1:then:_L1=(AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC#1)/ */
    Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
      &outC->_L3_then_IfBlock1,
      &outC->_L4_then_IfBlock1,
      outC->_L8_then_IfBlock1,
      outC->_L5_then_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_Lijn1_RBC_1);
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L1_then_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_Lijn1_RBC_1.Message_out);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_Lijn1_RBC_1.Packets_out);
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &Header_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->Header, &Header_partial);
  }
  else {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L5_else_IfBlock1,
      (M_TrackTrain_Radio_T_TM_radio_messages *) &no_message_US_Integration_November);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L4_else_IfBlock1,
      (CompressedPackets_T_Common_Types_Pkg *) &no_packets_US_Integration_November);
    outC->_L6_else_IfBlock1 = Trigger_in;
    outC->_L3_else_IfBlock1 = kcg_false;
    /* IfBlock1:else:_L1=(UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal#1)/ */
    Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16(
      &outC->_L5_else_IfBlock1,
      &outC->_L4_else_IfBlock1,
      outC->_L6_else_IfBlock1,
      outC->_L3_else_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_1);
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L1_else_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_1.Message_out);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L2_else_IfBlock1,
      &outC->Context_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_1.Packets_out);
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &_1_Header_partial,
      &outC->_L1_else_IfBlock1);
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->Header,
      &_1_Header_partial);
  }
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L16, &outC->Header);
  /* _L13=(TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H#1)/ */
  compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
    &outC->_L16,
    &outC->Context_compressed_to_Radio_Track_Train_H_1);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L13,
    &outC->Context_compressed_to_Radio_Track_Train_H_1.Header_Out);
  /* _L15=(TM_conversions::C_TrackTrainMessage_to_Int#1)/ */
  C_TrackTrainMessage_to_Int_TM_conversions(
    &outC->_L13,
    &outC->Context_C_TrackTrainMessage_to_Int_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L15,
    &outC->Context_C_TrackTrainMessage_to_Int_1.Message_Out);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &Packets_partial,
      &outC->_L2_then_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->Packets, &Packets_partial);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_2_Packets_partial,
      &outC->_L2_else_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->Packets,
      &_2_Packets_partial);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L14, &outC->Packets);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L12.Header, &outC->_L15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L12.Messages,
    &outC->_L14);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->Compressed_Radio_Message_out,
    &outC->_L12);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Packets_out,
    &outC->_L14);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->RadioTrackTrainHeader_out,
    &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void Amsterdam_Utrecht_RBC_Integration_init_US_Integration_November(
  outC_Amsterdam_Utrecht_RBC_Integration_US_Integration_November *outC)
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

  outC->_L12.Header.radioDevice = kcg_lit_int32(0);
  outC->_L12.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L12.Header.nid_message = kcg_lit_int32(0);
  outC->_L12.Header.t_train = kcg_lit_int32(0);
  outC->_L12.Header.m_ack = kcg_lit_int32(0);
  outC->_L12.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L12.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L12.Header.nid_em = kcg_lit_int32(0);
  outC->_L12.Header.q_scale = kcg_lit_int32(0);
  outC->_L12.Header.d_sr = kcg_lit_int32(0);
  outC->_L12.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L12.Header.d_ref = kcg_lit_int32(0);
  outC->_L12.Header.q_dir = kcg_lit_int32(0);
  outC->_L12.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L12.Header.m_version = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L12.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L12.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L12.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L12.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L12.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L12.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L13.radioDevice = kcg_lit_int32(0);
  outC->_L13.receivedSystemTime = kcg_lit_int32(0);
  outC->_L13.nid_message = kcg_lit_int32(0);
  outC->_L13.t_train = kcg_lit_int32(0);
  outC->_L13.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L13.nid_lrbg = kcg_lit_int32(0);
  outC->_L13.t_train_reference = kcg_lit_int32(0);
  outC->_L13.nid_em = kcg_lit_int32(0);
  outC->_L13.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.d_sr = kcg_lit_int32(0);
  outC->_L13.t_sh_rqst = kcg_lit_int32(0);
  outC->_L13.d_ref = kcg_lit_int32(0);
  outC->_L13.q_dir = Q_DIR_Reverse;
  outC->_L13.d_emergencystop = kcg_lit_int32(0);
  outC->_L13.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L14.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L14.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L14.PacketHeaders[idx2].valid = kcg_true;
    outC->_L14.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L14.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L14.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L15.radioDevice = kcg_lit_int32(0);
  outC->_L15.receivedSystemTime = kcg_lit_int32(0);
  outC->_L15.nid_message = kcg_lit_int32(0);
  outC->_L15.t_train = kcg_lit_int32(0);
  outC->_L15.m_ack = kcg_lit_int32(0);
  outC->_L15.nid_lrbg = kcg_lit_int32(0);
  outC->_L15.t_train_reference = kcg_lit_int32(0);
  outC->_L15.nid_em = kcg_lit_int32(0);
  outC->_L15.q_scale = kcg_lit_int32(0);
  outC->_L15.d_sr = kcg_lit_int32(0);
  outC->_L15.t_sh_rqst = kcg_lit_int32(0);
  outC->_L15.d_ref = kcg_lit_int32(0);
  outC->_L15.q_dir = kcg_lit_int32(0);
  outC->_L15.d_emergencystop = kcg_lit_int32(0);
  outC->_L15.m_version = kcg_lit_int32(0);
  outC->_L16.valid = kcg_true;
  outC->_L16.nid_message = kcg_lit_int32(0);
  outC->_L16.l_message = kcg_lit_int32(0);
  outC->_L16.t_train = kcg_lit_int32(0);
  outC->_L16.field1 = kcg_lit_int32(0);
  outC->_L16.field2 = kcg_lit_int32(0);
  outC->_L16.field3 = kcg_lit_int32(0);
  outC->_L16.field4 = kcg_lit_int32(0);
  outC->_L16.field5 = kcg_lit_int32(0);
  outC->_L16.field6 = kcg_lit_int32(0);
  outC->_L16.field7 = kcg_lit_int32(0);
  outC->_L16.field8 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->Packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->Packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->Packets.PacketHeaders[idx4].valid = kcg_true;
    outC->Packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->Packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->Packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->Header.valid = kcg_true;
  outC->Header.nid_message = kcg_lit_int32(0);
  outC->Header.l_message = kcg_lit_int32(0);
  outC->Header.t_train = kcg_lit_int32(0);
  outC->Header.field1 = kcg_lit_int32(0);
  outC->Header.field2 = kcg_lit_int32(0);
  outC->Header.field3 = kcg_lit_int32(0);
  outC->Header.field4 = kcg_lit_int32(0);
  outC->Header.field5 = kcg_lit_int32(0);
  outC->Header.field6 = kcg_lit_int32(0);
  outC->Header.field7 = kcg_lit_int32(0);
  outC->Header.field8 = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L2_else_IfBlock1.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L2_else_IfBlock1.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L2_else_IfBlock1.PacketHeaders[idx6].valid = kcg_true;
    outC->_L2_else_IfBlock1.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L2_else_IfBlock1.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L2_else_IfBlock1.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L1_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.field1 = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.field2 = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.field3 = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.field4 = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.field5 = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.field6 = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.field7 = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.field8 = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1 = kcg_true;
  outC->_L5_else_IfBlock1.valid = kcg_true;
  outC->_L5_else_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L5_else_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L5_else_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L5_else_IfBlock1.field1 = kcg_lit_int32(0);
  outC->_L5_else_IfBlock1.field2 = kcg_lit_int32(0);
  outC->_L5_else_IfBlock1.field3 = kcg_lit_int32(0);
  outC->_L5_else_IfBlock1.field4 = kcg_lit_int32(0);
  outC->_L5_else_IfBlock1.field5 = kcg_lit_int32(0);
  outC->_L5_else_IfBlock1.field6 = kcg_lit_int32(0);
  outC->_L5_else_IfBlock1.field7 = kcg_lit_int32(0);
  outC->_L5_else_IfBlock1.field8 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L4_else_IfBlock1.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L4_else_IfBlock1.PacketHeaders[idx8].valid = kcg_true;
    outC->_L4_else_IfBlock1.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L4_else_IfBlock1.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L6_else_IfBlock1 = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L2_then_IfBlock1.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L2_then_IfBlock1.PacketHeaders[idx10].valid = kcg_true;
    outC->_L2_then_IfBlock1.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L2_then_IfBlock1.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L2_then_IfBlock1.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field1 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field2 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field3 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field4 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field5 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field6 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field7 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.field8 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.valid = kcg_true;
  outC->_L3_then_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.field1 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.field2 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.field3 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.field4 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.field5 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.field6 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.field7 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.field8 = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L4_then_IfBlock1.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L4_then_IfBlock1.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L4_then_IfBlock1.PacketHeaders[idx12].valid = kcg_true;
    outC->_L4_then_IfBlock1.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L4_then_IfBlock1.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L4_then_IfBlock1.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.radioDevice = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.nid_message = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.t_train = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.m_ack = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.nid_lrbg = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.t_train_reference = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.nid_em = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.q_scale = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.d_sr = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.d_ref = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.q_dir = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.d_emergencystop = kcg_lit_int32(0);
  outC->Compressed_Radio_Message_out.Header.m_version = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx14].nid_packet =
      kcg_lit_int32(0);
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx14].q_dir =
      Q_DIR_Reverse;
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx14].valid =
      kcg_true;
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx14].startAddress =
      kcg_lit_int32(0);
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx14].endAddress =
      kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->Compressed_Radio_Message_out.Messages.PacketData[idx15] =
      kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->Compressed_Packets_out.PacketHeaders[idx16].nid_packet = kcg_lit_int32(0);
    outC->Compressed_Packets_out.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->Compressed_Packets_out.PacketHeaders[idx16].valid = kcg_true;
    outC->Compressed_Packets_out.PacketHeaders[idx16].startAddress =
      kcg_lit_int32(0);
    outC->Compressed_Packets_out.PacketHeaders[idx16].endAddress = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->Compressed_Packets_out.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->RadioTrackTrainHeader_out.radioDevice = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.receivedSystemTime = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.nid_message = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.t_train = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.m_ack = M_ACK_No_acknowledgement_required;
  outC->RadioTrackTrainHeader_out.nid_lrbg = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.t_train_reference = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.nid_em = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.q_scale = Q_SCALE_10_cm_scale;
  outC->RadioTrackTrainHeader_out.d_sr = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.t_sh_rqst = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.d_ref = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.q_dir = Q_DIR_Reverse;
  outC->RadioTrackTrainHeader_out.d_emergencystop = kcg_lit_int32(0);
  outC->RadioTrackTrainHeader_out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  /* _L15=(TM_conversions::C_TrackTrainMessage_to_Int#1)/ */
  C_TrackTrainMessage_to_Int_init_TM_conversions(
    &outC->Context_C_TrackTrainMessage_to_Int_1);
  /* _L13=(TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H#1)/ */
  compressed_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_compressed_to_Radio_Track_Train_H_1);
  /* IfBlock1:then:_L1=(AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC#1)/ */
  Amsterdam_Utrecht_Lijn1_RBC_init_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    &outC->Context_Amsterdam_Utrecht_Lijn1_RBC_1);
  /* IfBlock1:else:_L1=(UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal#1)/ */
  Amsterdam_Utrecht_Lijn1_RBC_non_nominal_init_UserStories13_16(
    &outC->Context_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Amsterdam_Utrecht_RBC_Integration_reset_US_Integration_November(
  outC_Amsterdam_Utrecht_RBC_Integration_US_Integration_November *outC)
{
  /* _L15=(TM_conversions::C_TrackTrainMessage_to_Int#1)/ */
  C_TrackTrainMessage_to_Int_reset_TM_conversions(
    &outC->Context_C_TrackTrainMessage_to_Int_1);
  /* _L13=(TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H#1)/ */
  compressed_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_compressed_to_Radio_Track_Train_H_1);
  /* IfBlock1:then:_L1=(AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC#1)/ */
  Amsterdam_Utrecht_Lijn1_RBC_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
    &outC->Context_Amsterdam_Utrecht_Lijn1_RBC_1);
  /* IfBlock1:else:_L1=(UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal#1)/ */
  Amsterdam_Utrecht_Lijn1_RBC_non_nominal_reset_UserStories13_16(
    &outC->Context_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_RBC_Integration_US_Integration_November.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

