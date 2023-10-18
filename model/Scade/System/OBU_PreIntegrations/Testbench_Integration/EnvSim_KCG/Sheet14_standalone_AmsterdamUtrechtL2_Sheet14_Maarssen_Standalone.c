/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_standalone/ */
void Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* TrainPos_in/ */
  kcg_float64 TrainPos_in,
  /* Trigger_in/ */
  kcg_int64 Trigger_in,
  outC_Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC)
{
  outC->_L25 = TrainPos_in;
  /* _L13=(InfraLib::TrackInit#1)/ */
  TrackInit_InfraLib(outC->_L25, kcg_lit_int64(0), &outC->Context_TrackInit_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L13,
    &outC->Context_TrackInit_1.SectionData_out);
  /* _L28=(InfraLib::TrackDiscontinuity#2)/ */
  TrackDiscontinuity_InfraLib(
    &outC->_L13,
    kcg_lit_int64(0),
    kcg_lit_int64(1000),
    &outC->Context_TrackDiscontinuity_2);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L28,
    &outC->Context_TrackDiscontinuity_2.SectionData_out);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L17,
    (M_TrackTrain_Radio_T_TM_radio_messages *) &no_message_US_Integration_November);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L18,
    (CompressedPackets_T_Common_Types_Pkg *) &no_packets_US_Integration_November);
  outC->_L20 = Trigger_in;
  outC->_L19 = kcg_false;
  /* _L12=(RadioLib::RBC_init#1)/ */
  RBC_init_RadioLib(
    &outC->_L17,
    &outC->_L18,
    outC->_L20,
    outC->_L19,
    &outC->Context_RBC_init_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L12,
    &outC->Context_RBC_init_1.R_data_out);
  /* _L27=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init#1)/ */
  Sheet14_Radio_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->_L12,
    &outC->Context_Sheet14_Radio_init_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L27,
    &outC->Context_Sheet14_Radio_init_1.R_data_out);
  /* _L26=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init#1)/ */
  Sheet14_Balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->_L28,
    &outC->Context_Sheet14_Balises_init_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L26,
    &outC->Context_Sheet14_Balises_init_1.SectionData_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_local, &outC->_L27);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L24, &outC->R_data_local);
  /* _L14=(InfraLib::TrackDiscontinuity#1)/ */
  TrackDiscontinuity_InfraLib(
    &outC->_L26,
    kcg_lit_int64(27158),
    kcg_lit_int64(32982),
    &outC->Context_TrackDiscontinuity_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L14,
    &outC->Context_TrackDiscontinuity_1.SectionData_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->B_data_local, &outC->_L14);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L23, &outC->B_data_local);
  /* _L1=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen#1)/ */
  RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->_L24,
    &outC->Context_RBC_Sheet14_Maarssen_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L1,
    &outC->Context_RBC_Sheet14_Maarssen_1.R_data_out);
  /* _L10=(RadioLib::RBC_close#1)/ */
  RBC_close_RadioLib(&outC->_L1, &outC->Context_RBC_close_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L10,
    &outC->Context_RBC_close_1.Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->Context_RBC_close_1.Packets_out);
  /* _L9=(TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H#1)/ */
  compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
    &outC->_L10,
    &outC->Context_compressed_to_Radio_Track_Train_H_1);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L9,
    &outC->Context_compressed_to_Radio_Track_Train_H_1.Header_Out);
  /* _L7=(TM_conversions::C_TrackTrainMessage_to_Int#1)/ */
  C_TrackTrainMessage_to_Int_TM_conversions(
    &outC->_L9,
    &outC->Context_C_TrackTrainMessage_to_Int_1);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L7,
    &outC->Context_C_TrackTrainMessage_to_Int_1.Message_Out);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L8.Header, &outC->_L7);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L8.Messages, &outC->_L11);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->Compressed_Radio_Message_out,
    &outC->_L8);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Compressed_Packets_out,
    &outC->_L11);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->RadioTrackTrainHeader_out,
    &outC->_L9);
  /* _L2=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises#1)/ */
  Sheet14_Maarssen_balises_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->_L23,
    &outC->Context_Sheet14_Maarssen_balises_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L2,
    &outC->Context_Sheet14_Maarssen_balises_1.SectionData_out);
  /* _L6=(InfraLib::TrackClose#1)/ */
  TrackClose_InfraLib(&outC->_L2, &outC->Context_TrackClose_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L6,
    &outC->Context_TrackClose_1.BaliseMessage);
  kcg_copy_BaliseTelegramHeader_int_T_TM(&outC->_L3, &outC->_L6.Header);
  /* _L5=(TM_conversions::CASTLIB_BaliseHeaders#1)/ */
  CASTLIB_BaliseHeaders_TM_conversions(
    &outC->_L3,
    &outC->Context_CASTLIB_BaliseHeaders_1);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L5,
    &outC->Context_CASTLIB_BaliseHeaders_1.Out);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->Header, &outC->_L5);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L4, &outC->_L6.Messages);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->Packets, &outC->_L4);
  kcg_copy_CompressedBaliseMessage_TM(&outC->CompressedBaliseMessage, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void Sheet14_standalone_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC)
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
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;

  outC->_L28.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L28.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->_L28.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L28.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->_L28.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->_L28.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->_L28.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->_L28.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->_L28.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->_L28.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->_L28.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->_L28.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->_L28.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L28.BG_Message.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L28.BG_Message.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L28.BG_Message.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L28.BG_Message.Messages.PacketHeaders[idx].startAddress =
      kcg_lit_int64(0);
    outC->_L28.BG_Message.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L28.BG_Message.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L27.message.valid = kcg_true;
  outC->_L27.message.nid_message = kcg_lit_int64(0);
  outC->_L27.message.l_message = kcg_lit_int64(0);
  outC->_L27.message.t_train = kcg_lit_int64(0);
  outC->_L27.message.field1 = kcg_lit_int64(0);
  outC->_L27.message.field2 = kcg_lit_int64(0);
  outC->_L27.message.field3 = kcg_lit_int64(0);
  outC->_L27.message.field4 = kcg_lit_int64(0);
  outC->_L27.message.field5 = kcg_lit_int64(0);
  outC->_L27.message.field6 = kcg_lit_int64(0);
  outC->_L27.message.field7 = kcg_lit_int64(0);
  outC->_L27.message.field8 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L27.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L27.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L27.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L27.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L27.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L27.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L27.trigger = kcg_lit_int64(0);
  outC->_L27.message_sent = kcg_true;
  outC->_L26.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L26.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->_L26.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L26.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->_L26.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->_L26.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->_L26.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->_L26.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->_L26.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->_L26.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->_L26.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->_L26.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->_L26.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L26.BG_Message.Messages.PacketHeaders[idx4].nid_packet =
      kcg_lit_int64(0);
    outC->_L26.BG_Message.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L26.BG_Message.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->_L26.BG_Message.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int64(0);
    outC->_L26.BG_Message.Messages.PacketHeaders[idx4].endAddress =
      kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L26.BG_Message.Messages.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L24.message.valid = kcg_true;
  outC->_L24.message.nid_message = kcg_lit_int64(0);
  outC->_L24.message.l_message = kcg_lit_int64(0);
  outC->_L24.message.t_train = kcg_lit_int64(0);
  outC->_L24.message.field1 = kcg_lit_int64(0);
  outC->_L24.message.field2 = kcg_lit_int64(0);
  outC->_L24.message.field3 = kcg_lit_int64(0);
  outC->_L24.message.field4 = kcg_lit_int64(0);
  outC->_L24.message.field5 = kcg_lit_int64(0);
  outC->_L24.message.field6 = kcg_lit_int64(0);
  outC->_L24.message.field7 = kcg_lit_int64(0);
  outC->_L24.message.field8 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L24.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L24.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L24.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L24.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L24.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L24.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L24.trigger = kcg_lit_int64(0);
  outC->_L24.message_sent = kcg_true;
  outC->_L23.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L23.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->_L23.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L23.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->_L23.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->_L23.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->_L23.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->_L23.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->_L23.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->_L23.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->_L23.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->_L23.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->_L23.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L23.BG_Message.Messages.PacketHeaders[idx8].nid_packet =
      kcg_lit_int64(0);
    outC->_L23.BG_Message.Messages.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L23.BG_Message.Messages.PacketHeaders[idx8].valid = kcg_true;
    outC->_L23.BG_Message.Messages.PacketHeaders[idx8].startAddress =
      kcg_lit_int64(0);
    outC->_L23.BG_Message.Messages.PacketHeaders[idx8].endAddress =
      kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L23.BG_Message.Messages.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19 = kcg_true;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L18.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->_L18.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L18.PacketHeaders[idx10].valid = kcg_true;
    outC->_L18.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->_L18.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L18.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->_L17.valid = kcg_true;
  outC->_L17.nid_message = kcg_lit_int64(0);
  outC->_L17.l_message = kcg_lit_int64(0);
  outC->_L17.t_train = kcg_lit_int64(0);
  outC->_L17.field1 = kcg_lit_int64(0);
  outC->_L17.field2 = kcg_lit_int64(0);
  outC->_L17.field3 = kcg_lit_int64(0);
  outC->_L17.field4 = kcg_lit_int64(0);
  outC->_L17.field5 = kcg_lit_int64(0);
  outC->_L17.field6 = kcg_lit_int64(0);
  outC->_L17.field7 = kcg_lit_int64(0);
  outC->_L17.field8 = kcg_lit_int64(0);
  outC->_L14.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L14.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->_L14.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L14.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->_L14.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->_L14.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->_L14.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->_L14.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->_L14.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->_L14.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->_L14.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->_L14.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->_L14.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L14.BG_Message.Messages.PacketHeaders[idx12].nid_packet =
      kcg_lit_int64(0);
    outC->_L14.BG_Message.Messages.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L14.BG_Message.Messages.PacketHeaders[idx12].valid = kcg_true;
    outC->_L14.BG_Message.Messages.PacketHeaders[idx12].startAddress =
      kcg_lit_int64(0);
    outC->_L14.BG_Message.Messages.PacketHeaders[idx12].endAddress =
      kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L14.BG_Message.Messages.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->_L13.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L13.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->_L13.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L13.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->_L13.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->_L13.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->_L13.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->_L13.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->_L13.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->_L13.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->_L13.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->_L13.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->_L13.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L13.BG_Message.Messages.PacketHeaders[idx14].nid_packet =
      kcg_lit_int64(0);
    outC->_L13.BG_Message.Messages.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L13.BG_Message.Messages.PacketHeaders[idx14].valid = kcg_true;
    outC->_L13.BG_Message.Messages.PacketHeaders[idx14].startAddress =
      kcg_lit_int64(0);
    outC->_L13.BG_Message.Messages.PacketHeaders[idx14].endAddress =
      kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L13.BG_Message.Messages.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->_L12.message.valid = kcg_true;
  outC->_L12.message.nid_message = kcg_lit_int64(0);
  outC->_L12.message.l_message = kcg_lit_int64(0);
  outC->_L12.message.t_train = kcg_lit_int64(0);
  outC->_L12.message.field1 = kcg_lit_int64(0);
  outC->_L12.message.field2 = kcg_lit_int64(0);
  outC->_L12.message.field3 = kcg_lit_int64(0);
  outC->_L12.message.field4 = kcg_lit_int64(0);
  outC->_L12.message.field5 = kcg_lit_int64(0);
  outC->_L12.message.field6 = kcg_lit_int64(0);
  outC->_L12.message.field7 = kcg_lit_int64(0);
  outC->_L12.message.field8 = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L12.packets.PacketHeaders[idx16].nid_packet = kcg_lit_int64(0);
    outC->_L12.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L12.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L12.packets.PacketHeaders[idx16].startAddress = kcg_lit_int64(0);
    outC->_L12.packets.PacketHeaders[idx16].endAddress = kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L12.packets.PacketData[idx17] = kcg_lit_int64(0);
  }
  outC->_L12.trigger = kcg_lit_int64(0);
  outC->_L12.message_sent = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.nid_message = kcg_lit_int64(0);
  outC->_L10.l_message = kcg_lit_int64(0);
  outC->_L10.t_train = kcg_lit_int64(0);
  outC->_L10.field1 = kcg_lit_int64(0);
  outC->_L10.field2 = kcg_lit_int64(0);
  outC->_L10.field3 = kcg_lit_int64(0);
  outC->_L10.field4 = kcg_lit_int64(0);
  outC->_L10.field5 = kcg_lit_int64(0);
  outC->_L10.field6 = kcg_lit_int64(0);
  outC->_L10.field7 = kcg_lit_int64(0);
  outC->_L10.field8 = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L11.PacketHeaders[idx18].nid_packet = kcg_lit_int64(0);
    outC->_L11.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L11.PacketHeaders[idx18].valid = kcg_true;
    outC->_L11.PacketHeaders[idx18].startAddress = kcg_lit_int64(0);
    outC->_L11.PacketHeaders[idx18].endAddress = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L11.PacketData[idx19] = kcg_lit_int64(0);
  }
  outC->_L7.radioDevice = kcg_lit_int64(0);
  outC->_L7.receivedSystemTime = kcg_lit_int64(0);
  outC->_L7.nid_message = kcg_lit_int64(0);
  outC->_L7.t_train = kcg_lit_int64(0);
  outC->_L7.m_ack = kcg_lit_int64(0);
  outC->_L7.nid_lrbg = kcg_lit_int64(0);
  outC->_L7.t_train_reference = kcg_lit_int64(0);
  outC->_L7.nid_em = kcg_lit_int64(0);
  outC->_L7.q_scale = kcg_lit_int64(0);
  outC->_L7.d_sr = kcg_lit_int64(0);
  outC->_L7.t_sh_rqst = kcg_lit_int64(0);
  outC->_L7.d_ref = kcg_lit_int64(0);
  outC->_L7.q_dir = kcg_lit_int64(0);
  outC->_L7.d_emergencystop = kcg_lit_int64(0);
  outC->_L7.m_version = kcg_lit_int64(0);
  outC->_L8.Header.radioDevice = kcg_lit_int64(0);
  outC->_L8.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L8.Header.nid_message = kcg_lit_int64(0);
  outC->_L8.Header.t_train = kcg_lit_int64(0);
  outC->_L8.Header.m_ack = kcg_lit_int64(0);
  outC->_L8.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L8.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L8.Header.nid_em = kcg_lit_int64(0);
  outC->_L8.Header.q_scale = kcg_lit_int64(0);
  outC->_L8.Header.d_sr = kcg_lit_int64(0);
  outC->_L8.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L8.Header.d_ref = kcg_lit_int64(0);
  outC->_L8.Header.q_dir = kcg_lit_int64(0);
  outC->_L8.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L8.Header.m_version = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L8.Messages.PacketHeaders[idx20].nid_packet = kcg_lit_int64(0);
    outC->_L8.Messages.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L8.Messages.PacketHeaders[idx20].valid = kcg_true;
    outC->_L8.Messages.PacketHeaders[idx20].startAddress = kcg_lit_int64(0);
    outC->_L8.Messages.PacketHeaders[idx20].endAddress = kcg_lit_int64(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L8.Messages.PacketData[idx21] = kcg_lit_int64(0);
  }
  outC->_L9.radioDevice = kcg_lit_int64(0);
  outC->_L9.receivedSystemTime = kcg_lit_int64(0);
  outC->_L9.nid_message = kcg_lit_int64(0);
  outC->_L9.t_train = kcg_lit_int64(0);
  outC->_L9.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L9.nid_lrbg = kcg_lit_int64(0);
  outC->_L9.t_train_reference = kcg_lit_int64(0);
  outC->_L9.nid_em = kcg_lit_int64(0);
  outC->_L9.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9.d_sr = kcg_lit_int64(0);
  outC->_L9.t_sh_rqst = kcg_lit_int64(0);
  outC->_L9.d_ref = kcg_lit_int64(0);
  outC->_L9.q_dir = Q_DIR_Reverse;
  outC->_L9.d_emergencystop = kcg_lit_int64(0);
  outC->_L9.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.Header.q_updown = kcg_lit_int64(0);
  outC->_L6.Header.m_version = kcg_lit_int64(0);
  outC->_L6.Header.q_media = kcg_lit_int64(0);
  outC->_L6.Header.n_pig = kcg_lit_int64(0);
  outC->_L6.Header.n_total = kcg_lit_int64(0);
  outC->_L6.Header.m_dup = kcg_lit_int64(0);
  outC->_L6.Header.m_mcount = kcg_lit_int64(0);
  outC->_L6.Header.nid_c = kcg_lit_int64(0);
  outC->_L6.Header.nid_bg = kcg_lit_int64(0);
  outC->_L6.Header.q_link = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L6.Messages.PacketHeaders[idx22].nid_packet = kcg_lit_int64(0);
    outC->_L6.Messages.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L6.Messages.PacketHeaders[idx22].valid = kcg_true;
    outC->_L6.Messages.PacketHeaders[idx22].startAddress = kcg_lit_int64(0);
    outC->_L6.Messages.PacketHeaders[idx22].endAddress = kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L6.Messages.PacketData[idx23] = kcg_lit_int64(0);
  }
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L4.PacketHeaders[idx24].nid_packet = kcg_lit_int64(0);
    outC->_L4.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L4.PacketHeaders[idx24].valid = kcg_true;
    outC->_L4.PacketHeaders[idx24].startAddress = kcg_lit_int64(0);
    outC->_L4.PacketHeaders[idx24].endAddress = kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L4.PacketData[idx25] = kcg_lit_int64(0);
  }
  outC->_L3.q_updown = kcg_lit_int64(0);
  outC->_L3.m_version = kcg_lit_int64(0);
  outC->_L3.q_media = kcg_lit_int64(0);
  outC->_L3.n_pig = kcg_lit_int64(0);
  outC->_L3.n_total = kcg_lit_int64(0);
  outC->_L3.m_dup = kcg_lit_int64(0);
  outC->_L3.m_mcount = kcg_lit_int64(0);
  outC->_L3.nid_c = kcg_lit_int64(0);
  outC->_L3.nid_bg = kcg_lit_int64(0);
  outC->_L3.q_link = kcg_lit_int64(0);
  outC->_L5.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.q_media = Q_MEDIA_Balise;
  outC->_L5.n_pig = N_PIG_I_am_the_1st;
  outC->_L5.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5.m_dup = M_DUP_No_duplicates;
  outC->_L5.m_mcount = kcg_lit_int64(0);
  outC->_L5.nid_c = kcg_lit_int64(0);
  outC->_L5.nid_bg = kcg_lit_int64(0);
  outC->_L5.q_link = Q_LINK_Unlinked;
  outC->_L2.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->_L2.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->_L2.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->_L2.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->_L2.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->_L2.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->_L2.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->_L2.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->_L2.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->_L2.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->_L2.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L2.BG_Message.Messages.PacketHeaders[idx26].nid_packet =
      kcg_lit_int64(0);
    outC->_L2.BG_Message.Messages.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L2.BG_Message.Messages.PacketHeaders[idx26].valid = kcg_true;
    outC->_L2.BG_Message.Messages.PacketHeaders[idx26].startAddress =
      kcg_lit_int64(0);
    outC->_L2.BG_Message.Messages.PacketHeaders[idx26].endAddress =
      kcg_lit_int64(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L2.BG_Message.Messages.PacketData[idx27] = kcg_lit_int64(0);
  }
  outC->_L1.message.valid = kcg_true;
  outC->_L1.message.nid_message = kcg_lit_int64(0);
  outC->_L1.message.l_message = kcg_lit_int64(0);
  outC->_L1.message.t_train = kcg_lit_int64(0);
  outC->_L1.message.field1 = kcg_lit_int64(0);
  outC->_L1.message.field2 = kcg_lit_int64(0);
  outC->_L1.message.field3 = kcg_lit_int64(0);
  outC->_L1.message.field4 = kcg_lit_int64(0);
  outC->_L1.message.field5 = kcg_lit_int64(0);
  outC->_L1.message.field6 = kcg_lit_int64(0);
  outC->_L1.message.field7 = kcg_lit_int64(0);
  outC->_L1.message.field8 = kcg_lit_int64(0);
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L1.packets.PacketHeaders[idx28].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx28].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx28].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx28].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx28].endAddress = kcg_lit_int64(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L1.packets.PacketData[idx29] = kcg_lit_int64(0);
  }
  outC->_L1.trigger = kcg_lit_int64(0);
  outC->_L1.message_sent = kcg_true;
  outC->B_data_local.TrainPosRaw.TrainPos_in = kcg_lit_float64(0.0);
  outC->B_data_local.TrainPosRaw.OffsetTotal = kcg_lit_int64(0);
  outC->B_data_local.TrainPosRaw.TrainPosCalibrated = kcg_lit_float64(0.0);
  outC->B_data_local.BG_Message.Header.q_updown = kcg_lit_int64(0);
  outC->B_data_local.BG_Message.Header.m_version = kcg_lit_int64(0);
  outC->B_data_local.BG_Message.Header.q_media = kcg_lit_int64(0);
  outC->B_data_local.BG_Message.Header.n_pig = kcg_lit_int64(0);
  outC->B_data_local.BG_Message.Header.n_total = kcg_lit_int64(0);
  outC->B_data_local.BG_Message.Header.m_dup = kcg_lit_int64(0);
  outC->B_data_local.BG_Message.Header.m_mcount = kcg_lit_int64(0);
  outC->B_data_local.BG_Message.Header.nid_c = kcg_lit_int64(0);
  outC->B_data_local.BG_Message.Header.nid_bg = kcg_lit_int64(0);
  outC->B_data_local.BG_Message.Header.q_link = kcg_lit_int64(0);
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->B_data_local.BG_Message.Messages.PacketHeaders[idx30].nid_packet =
      kcg_lit_int64(0);
    outC->B_data_local.BG_Message.Messages.PacketHeaders[idx30].q_dir =
      Q_DIR_Reverse;
    outC->B_data_local.BG_Message.Messages.PacketHeaders[idx30].valid = kcg_true;
    outC->B_data_local.BG_Message.Messages.PacketHeaders[idx30].startAddress =
      kcg_lit_int64(0);
    outC->B_data_local.BG_Message.Messages.PacketHeaders[idx30].endAddress =
      kcg_lit_int64(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->B_data_local.BG_Message.Messages.PacketData[idx31] = kcg_lit_int64(0);
  }
  outC->R_data_local.message.valid = kcg_true;
  outC->R_data_local.message.nid_message = kcg_lit_int64(0);
  outC->R_data_local.message.l_message = kcg_lit_int64(0);
  outC->R_data_local.message.t_train = kcg_lit_int64(0);
  outC->R_data_local.message.field1 = kcg_lit_int64(0);
  outC->R_data_local.message.field2 = kcg_lit_int64(0);
  outC->R_data_local.message.field3 = kcg_lit_int64(0);
  outC->R_data_local.message.field4 = kcg_lit_int64(0);
  outC->R_data_local.message.field5 = kcg_lit_int64(0);
  outC->R_data_local.message.field6 = kcg_lit_int64(0);
  outC->R_data_local.message.field7 = kcg_lit_int64(0);
  outC->R_data_local.message.field8 = kcg_lit_int64(0);
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->R_data_local.packets.PacketHeaders[idx32].nid_packet = kcg_lit_int64(0);
    outC->R_data_local.packets.PacketHeaders[idx32].q_dir = Q_DIR_Reverse;
    outC->R_data_local.packets.PacketHeaders[idx32].valid = kcg_true;
    outC->R_data_local.packets.PacketHeaders[idx32].startAddress = kcg_lit_int64(0);
    outC->R_data_local.packets.PacketHeaders[idx32].endAddress = kcg_lit_int64(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->R_data_local.packets.PacketData[idx33] = kcg_lit_int64(0);
  }
  outC->R_data_local.trigger = kcg_lit_int64(0);
  outC->R_data_local.message_sent = kcg_true;
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
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx34].nid_packet =
      kcg_lit_int64(0);
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx34].q_dir =
      Q_DIR_Reverse;
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx34].valid =
      kcg_true;
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx34].startAddress =
      kcg_lit_int64(0);
    outC->Compressed_Radio_Message_out.Messages.PacketHeaders[idx34].endAddress =
      kcg_lit_int64(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->Compressed_Radio_Message_out.Messages.PacketData[idx35] =
      kcg_lit_int64(0);
  }
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->Compressed_Packets_out.PacketHeaders[idx36].nid_packet = kcg_lit_int64(0);
    outC->Compressed_Packets_out.PacketHeaders[idx36].q_dir = Q_DIR_Reverse;
    outC->Compressed_Packets_out.PacketHeaders[idx36].valid = kcg_true;
    outC->Compressed_Packets_out.PacketHeaders[idx36].startAddress =
      kcg_lit_int64(0);
    outC->Compressed_Packets_out.PacketHeaders[idx36].endAddress = kcg_lit_int64(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->Compressed_Packets_out.PacketData[idx37] = kcg_lit_int64(0);
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
  for (idx38 = 0; idx38 < 30; idx38++) {
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx38].nid_packet =
      kcg_lit_int64(0);
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx38].q_dir =
      Q_DIR_Reverse;
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx38].valid = kcg_true;
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx38].startAddress =
      kcg_lit_int64(0);
    outC->CompressedBaliseMessage.Messages.PacketHeaders[idx38].endAddress =
      kcg_lit_int64(0);
  }
  for (idx39 = 0; idx39 < 500; idx39++) {
    outC->CompressedBaliseMessage.Messages.PacketData[idx39] = kcg_lit_int64(0);
  }
  outC->Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Header.q_media = Q_MEDIA_Balise;
  outC->Header.n_pig = N_PIG_I_am_the_1st;
  outC->Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->Header.m_dup = M_DUP_No_duplicates;
  outC->Header.m_mcount = kcg_lit_int64(0);
  outC->Header.nid_c = kcg_lit_int64(0);
  outC->Header.nid_bg = kcg_lit_int64(0);
  outC->Header.q_link = Q_LINK_Unlinked;
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->Packets.PacketHeaders[idx40].nid_packet = kcg_lit_int64(0);
    outC->Packets.PacketHeaders[idx40].q_dir = Q_DIR_Reverse;
    outC->Packets.PacketHeaders[idx40].valid = kcg_true;
    outC->Packets.PacketHeaders[idx40].startAddress = kcg_lit_int64(0);
    outC->Packets.PacketHeaders[idx40].endAddress = kcg_lit_int64(0);
  }
  for (idx41 = 0; idx41 < 500; idx41++) {
    outC->Packets.PacketData[idx41] = kcg_lit_int64(0);
  }
  /* _L5=(TM_conversions::CASTLIB_BaliseHeaders#1)/ */
  CASTLIB_BaliseHeaders_init_TM_conversions(
    &outC->Context_CASTLIB_BaliseHeaders_1);
  /* _L6=(InfraLib::TrackClose#1)/ */
  TrackClose_init_InfraLib(&outC->Context_TrackClose_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises#1)/ */
  Sheet14_Maarssen_balises_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_Sheet14_Maarssen_balises_1);
  /* _L7=(TM_conversions::C_TrackTrainMessage_to_Int#1)/ */
  C_TrackTrainMessage_to_Int_init_TM_conversions(
    &outC->Context_C_TrackTrainMessage_to_Int_1);
  /* _L9=(TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H#1)/ */
  compressed_to_Radio_Track_Train_H_init_TM_RBC_conversions_legacy(
    &outC->Context_compressed_to_Radio_Track_Train_H_1);
  /* _L10=(RadioLib::RBC_close#1)/ */
  RBC_close_init_RadioLib(&outC->Context_RBC_close_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen#1)/ */
  RBC_Sheet14_Maarssen_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_RBC_Sheet14_Maarssen_1);
  /* _L14=(InfraLib::TrackDiscontinuity#1)/ */
  TrackDiscontinuity_init_InfraLib(&outC->Context_TrackDiscontinuity_1);
  /* _L26=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init#1)/ */
  Sheet14_Balises_init_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_Sheet14_Balises_init_1);
  /* _L27=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init#1)/ */
  Sheet14_Radio_init_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_Sheet14_Radio_init_1);
  /* _L12=(RadioLib::RBC_init#1)/ */
  RBC_init_init_RadioLib(&outC->Context_RBC_init_1);
  /* _L28=(InfraLib::TrackDiscontinuity#2)/ */
  TrackDiscontinuity_init_InfraLib(&outC->Context_TrackDiscontinuity_2);
  /* _L13=(InfraLib::TrackInit#1)/ */
  TrackInit_init_InfraLib(&outC->Context_TrackInit_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Sheet14_standalone_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC_Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC)
{
  /* _L5=(TM_conversions::CASTLIB_BaliseHeaders#1)/ */
  CASTLIB_BaliseHeaders_reset_TM_conversions(
    &outC->Context_CASTLIB_BaliseHeaders_1);
  /* _L6=(InfraLib::TrackClose#1)/ */
  TrackClose_reset_InfraLib(&outC->Context_TrackClose_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Maarssen_balises#1)/ */
  Sheet14_Maarssen_balises_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_Sheet14_Maarssen_balises_1);
  /* _L7=(TM_conversions::C_TrackTrainMessage_to_Int#1)/ */
  C_TrackTrainMessage_to_Int_reset_TM_conversions(
    &outC->Context_C_TrackTrainMessage_to_Int_1);
  /* _L9=(TM_RBC_conversions_legacy::compressed_to_Radio_Track_Train_H#1)/ */
  compressed_to_Radio_Track_Train_H_reset_TM_RBC_conversions_legacy(
    &outC->Context_compressed_to_Radio_Track_Train_H_1);
  /* _L10=(RadioLib::RBC_close#1)/ */
  RBC_close_reset_RadioLib(&outC->Context_RBC_close_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::RBC_Sheet14_Maarssen#1)/ */
  RBC_Sheet14_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_RBC_Sheet14_Maarssen_1);
  /* _L14=(InfraLib::TrackDiscontinuity#1)/ */
  TrackDiscontinuity_reset_InfraLib(&outC->Context_TrackDiscontinuity_1);
  /* _L26=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Balises_init#1)/ */
  Sheet14_Balises_init_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_Sheet14_Balises_init_1);
  /* _L27=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Sheet14_Radio_init#1)/ */
  Sheet14_Radio_init_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_Sheet14_Radio_init_1);
  /* _L12=(RadioLib::RBC_init#1)/ */
  RBC_init_reset_RadioLib(&outC->Context_RBC_init_1);
  /* _L28=(InfraLib::TrackDiscontinuity#2)/ */
  TrackDiscontinuity_reset_InfraLib(&outC->Context_TrackDiscontinuity_2);
  /* _L13=(InfraLib::TrackInit#1)/ */
  TrackInit_reset_InfraLib(&outC->Context_TrackInit_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

