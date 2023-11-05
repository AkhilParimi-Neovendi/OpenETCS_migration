/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_balises/ */
void Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  /* TrainPosSim_in/ */
  kcg_float32 TrainPosSim_in,
  outC_Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
{
  outC->_L16 = TrainPosSim_in;
  /* _L15=(InfraLib::TrackInit#1)/ */
  TrackInit_InfraLib(outC->_L16, kcg_lit_int32(0), &outC->Context_TrackInit_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L15,
    &outC->Context_TrackInit_1.SectionData_out);
  /* _L13=(InfraLib::TrackDiscontinuity#1)/ */
  TrackDiscontinuity_InfraLib(
    &outC->_L15,
    kcg_lit_int32(104775),
    kcg_lit_int32(105650),
    &outC->Context_TrackDiscontinuity_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L13,
    &outC->Context_TrackDiscontinuity_1.SectionData_out);
  /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613#1)/ */
  Balises0001_Amstel_UB_Signal_611_to_613_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_L13,
    &outC->Context_Balises0001_Amstel_UB_Signal_611_to_613_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L1,
    &outC->Context_Balises0001_Amstel_UB_Signal_611_to_613_1.SectionData_out);
  /* _L14=(InfraLib::TrackDiscontinuity#2)/ */
  TrackDiscontinuity_InfraLib(
    &outC->_L1,
    kcg_lit_int32(1659) - kcg_lit_int32(400),
    kcg_lit_int32(32962),
    &outC->Context_TrackDiscontinuity_2);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L14,
    &outC->Context_TrackDiscontinuity_2.SectionData_out);
  /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617#1)/ */
  Balises0002_Amstel_UB_Signal_613_to_617_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->_L14,
    &outC->Context_Balises0002_Amstel_UB_Signal_613_to_617_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L2,
    &outC->Context_Balises0002_Amstel_UB_Signal_613_to_617_1.SectionData_out);
  /* _L3=(AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer#1)/ */
  Balises0003_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->_L2,
    &outC->Context_Balises0003_Bijlmer_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L3,
    &outC->Context_Balises0003_Bijlmer_1.SectionData_out);
  /* _L4=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude#1)/ */
  Balises0004_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->_L3,
    &outC->Context_Balises0004_BijlmerAbcoude_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L4,
    &outC->Context_Balises0004_BijlmerAbcoude_1.SectionData_out);
  /* _L5=(AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude#1)/ */
  Balises0005_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &outC->_L4,
    &outC->Context_Balises0005_Abcoude_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L5,
    &outC->Context_Balises0005_Abcoude_1.SectionData_out);
  /* _L6=(AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude#1)/ */
  Balises0006_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L5,
    &outC->Context_Balises0006_Abcoude_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L6,
    &outC->Context_Balises0006_Abcoude_1.SectionData_out);
  /* _L7=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen#1)/ */
  Balises0007_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->_L6,
    &outC->Context_Balises0007_AbcoudeBreukelen_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L7,
    &outC->Context_Balises0007_AbcoudeBreukelen_1.SectionData_out);
  /* _L8=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor#1)/ */
  Balises0008_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->_L7,
    &outC->Context_Balises0008_BreukelenKeerspoor_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L8,
    &outC->Context_Balises0008_BreukelenKeerspoor_1.SectionData_out);
  /* _L9=(AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen#1)/ */
  Balises0009_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->_L8,
    &outC->Context_Balises0009_Breukelen_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L9,
    &outC->Context_Balises0009_Breukelen_1.SectionData_out);
  /* _L10=(AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen#1)/ */
  Balises0010_Breukelen_Maarssen_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &outC->_L9,
    &outC->Context_Balises0010_Breukelen_Maarssen_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L10,
    &outC->Context_Balises0010_Breukelen_Maarssen_1.SectionData_out);
  /* _L11=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen#1)/ */
  Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L10,
    &outC->Context_Balises0011_Maarssen_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L11,
    &outC->Context_Balises0011_Maarssen_1.SectionData_out);
  /* _L12=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS#1)/ */
  Balises0012_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->_L11,
    &outC->Context_Balises0012_MaarssenUtrechtCS_1);
  kcg_copy_TrackSectionData_T_InfraLib(
    &outC->_L12,
    &outC->Context_Balises0012_MaarssenUtrechtCS_1.SectionData_out);
  /* _L17=(InfraLib::TrackClose#1)/ */
  TrackClose_InfraLib(&outC->_L12, &outC->Context_TrackClose_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L17,
    &outC->Context_TrackClose_1.BaliseMessage);
  kcg_copy_CompressedBaliseMessage_TM(&outC->BaliseMessage, &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void Amsterdam_Utrecht_Lijn1_balises_init_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
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

  outC->_L17.Header.q_updown = kcg_lit_int32(0);
  outC->_L17.Header.m_version = kcg_lit_int32(0);
  outC->_L17.Header.q_media = kcg_lit_int32(0);
  outC->_L17.Header.n_pig = kcg_lit_int32(0);
  outC->_L17.Header.n_total = kcg_lit_int32(0);
  outC->_L17.Header.m_dup = kcg_lit_int32(0);
  outC->_L17.Header.m_mcount = kcg_lit_int32(0);
  outC->_L17.Header.nid_c = kcg_lit_int32(0);
  outC->_L17.Header.nid_bg = kcg_lit_int32(0);
  outC->_L17.Header.q_link = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L17.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L17.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L17.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L17.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L17.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L17.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L16 = kcg_lit_float32(0.0);
  outC->_L15.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L15.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L15.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L15.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L15.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L15.BG_Message.Messages.PacketHeaders[idx2].nid_packet =
      kcg_lit_int32(0);
    outC->_L15.BG_Message.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L15.BG_Message.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L15.BG_Message.Messages.PacketHeaders[idx2].startAddress =
      kcg_lit_int32(0);
    outC->_L15.BG_Message.Messages.PacketHeaders[idx2].endAddress =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L15.BG_Message.Messages.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L14.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L14.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L14.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L14.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L14.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L14.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L14.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L14.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L14.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L14.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L14.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L14.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L14.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L14.BG_Message.Messages.PacketHeaders[idx4].nid_packet =
      kcg_lit_int32(0);
    outC->_L14.BG_Message.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L14.BG_Message.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->_L14.BG_Message.Messages.PacketHeaders[idx4].startAddress =
      kcg_lit_int32(0);
    outC->_L14.BG_Message.Messages.PacketHeaders[idx4].endAddress =
      kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L14.BG_Message.Messages.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L13.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L13.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L13.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L13.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L13.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L13.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L13.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L13.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L13.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L13.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L13.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L13.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L13.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L13.BG_Message.Messages.PacketHeaders[idx6].nid_packet =
      kcg_lit_int32(0);
    outC->_L13.BG_Message.Messages.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L13.BG_Message.Messages.PacketHeaders[idx6].valid = kcg_true;
    outC->_L13.BG_Message.Messages.PacketHeaders[idx6].startAddress =
      kcg_lit_int32(0);
    outC->_L13.BG_Message.Messages.PacketHeaders[idx6].endAddress =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L13.BG_Message.Messages.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L12.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L12.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L12.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L12.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L12.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L12.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L12.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L12.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L12.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L12.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L12.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L12.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L12.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L12.BG_Message.Messages.PacketHeaders[idx8].nid_packet =
      kcg_lit_int32(0);
    outC->_L12.BG_Message.Messages.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L12.BG_Message.Messages.PacketHeaders[idx8].valid = kcg_true;
    outC->_L12.BG_Message.Messages.PacketHeaders[idx8].startAddress =
      kcg_lit_int32(0);
    outC->_L12.BG_Message.Messages.PacketHeaders[idx8].endAddress =
      kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L12.BG_Message.Messages.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L11.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L11.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L11.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L11.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L11.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L11.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L11.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L11.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L11.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L11.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L11.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L11.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L11.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L11.BG_Message.Messages.PacketHeaders[idx10].nid_packet =
      kcg_lit_int32(0);
    outC->_L11.BG_Message.Messages.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L11.BG_Message.Messages.PacketHeaders[idx10].valid = kcg_true;
    outC->_L11.BG_Message.Messages.PacketHeaders[idx10].startAddress =
      kcg_lit_int32(0);
    outC->_L11.BG_Message.Messages.PacketHeaders[idx10].endAddress =
      kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L11.BG_Message.Messages.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L10.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L10.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L10.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L10.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L10.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L10.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L10.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L10.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L10.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L10.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L10.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L10.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L10.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L10.BG_Message.Messages.PacketHeaders[idx12].nid_packet =
      kcg_lit_int32(0);
    outC->_L10.BG_Message.Messages.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L10.BG_Message.Messages.PacketHeaders[idx12].valid = kcg_true;
    outC->_L10.BG_Message.Messages.PacketHeaders[idx12].startAddress =
      kcg_lit_int32(0);
    outC->_L10.BG_Message.Messages.PacketHeaders[idx12].endAddress =
      kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L10.BG_Message.Messages.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L9.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L9.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L9.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L9.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L9.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L9.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L9.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L9.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L9.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L9.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L9.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L9.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L9.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L9.BG_Message.Messages.PacketHeaders[idx14].nid_packet =
      kcg_lit_int32(0);
    outC->_L9.BG_Message.Messages.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L9.BG_Message.Messages.PacketHeaders[idx14].valid = kcg_true;
    outC->_L9.BG_Message.Messages.PacketHeaders[idx14].startAddress =
      kcg_lit_int32(0);
    outC->_L9.BG_Message.Messages.PacketHeaders[idx14].endAddress =
      kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L9.BG_Message.Messages.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->_L8.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L8.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L8.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L8.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L8.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L8.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L8.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L8.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L8.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L8.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L8.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L8.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L8.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L8.BG_Message.Messages.PacketHeaders[idx16].nid_packet =
      kcg_lit_int32(0);
    outC->_L8.BG_Message.Messages.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L8.BG_Message.Messages.PacketHeaders[idx16].valid = kcg_true;
    outC->_L8.BG_Message.Messages.PacketHeaders[idx16].startAddress =
      kcg_lit_int32(0);
    outC->_L8.BG_Message.Messages.PacketHeaders[idx16].endAddress =
      kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L8.BG_Message.Messages.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->_L7.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L7.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L7.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L7.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L7.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L7.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L7.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L7.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L7.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L7.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L7.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L7.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L7.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L7.BG_Message.Messages.PacketHeaders[idx18].nid_packet =
      kcg_lit_int32(0);
    outC->_L7.BG_Message.Messages.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L7.BG_Message.Messages.PacketHeaders[idx18].valid = kcg_true;
    outC->_L7.BG_Message.Messages.PacketHeaders[idx18].startAddress =
      kcg_lit_int32(0);
    outC->_L7.BG_Message.Messages.PacketHeaders[idx18].endAddress =
      kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L7.BG_Message.Messages.PacketData[idx19] = kcg_lit_int32(0);
  }
  outC->_L6.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L6.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L6.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L6.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L6.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L6.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L6.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L6.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L6.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L6.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L6.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L6.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L6.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L6.BG_Message.Messages.PacketHeaders[idx20].nid_packet =
      kcg_lit_int32(0);
    outC->_L6.BG_Message.Messages.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L6.BG_Message.Messages.PacketHeaders[idx20].valid = kcg_true;
    outC->_L6.BG_Message.Messages.PacketHeaders[idx20].startAddress =
      kcg_lit_int32(0);
    outC->_L6.BG_Message.Messages.PacketHeaders[idx20].endAddress =
      kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L6.BG_Message.Messages.PacketData[idx21] = kcg_lit_int32(0);
  }
  outC->_L5.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L5.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L5.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L5.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L5.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L5.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L5.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L5.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L5.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L5.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L5.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L5.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L5.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L5.BG_Message.Messages.PacketHeaders[idx22].nid_packet =
      kcg_lit_int32(0);
    outC->_L5.BG_Message.Messages.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L5.BG_Message.Messages.PacketHeaders[idx22].valid = kcg_true;
    outC->_L5.BG_Message.Messages.PacketHeaders[idx22].startAddress =
      kcg_lit_int32(0);
    outC->_L5.BG_Message.Messages.PacketHeaders[idx22].endAddress =
      kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L5.BG_Message.Messages.PacketData[idx23] = kcg_lit_int32(0);
  }
  outC->_L4.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L4.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L4.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L4.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L4.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L4.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L4.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L4.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L4.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L4.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L4.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L4.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L4.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L4.BG_Message.Messages.PacketHeaders[idx24].nid_packet =
      kcg_lit_int32(0);
    outC->_L4.BG_Message.Messages.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L4.BG_Message.Messages.PacketHeaders[idx24].valid = kcg_true;
    outC->_L4.BG_Message.Messages.PacketHeaders[idx24].startAddress =
      kcg_lit_int32(0);
    outC->_L4.BG_Message.Messages.PacketHeaders[idx24].endAddress =
      kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L4.BG_Message.Messages.PacketData[idx25] = kcg_lit_int32(0);
  }
  outC->_L3.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L3.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L3.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L3.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L3.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L3.BG_Message.Messages.PacketHeaders[idx26].nid_packet =
      kcg_lit_int32(0);
    outC->_L3.BG_Message.Messages.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L3.BG_Message.Messages.PacketHeaders[idx26].valid = kcg_true;
    outC->_L3.BG_Message.Messages.PacketHeaders[idx26].startAddress =
      kcg_lit_int32(0);
    outC->_L3.BG_Message.Messages.PacketHeaders[idx26].endAddress =
      kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L3.BG_Message.Messages.PacketData[idx27] = kcg_lit_int32(0);
  }
  outC->_L2.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L2.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L2.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L2.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L2.BG_Message.Messages.PacketHeaders[idx28].nid_packet =
      kcg_lit_int32(0);
    outC->_L2.BG_Message.Messages.PacketHeaders[idx28].q_dir = Q_DIR_Reverse;
    outC->_L2.BG_Message.Messages.PacketHeaders[idx28].valid = kcg_true;
    outC->_L2.BG_Message.Messages.PacketHeaders[idx28].startAddress =
      kcg_lit_int32(0);
    outC->_L2.BG_Message.Messages.PacketHeaders[idx28].endAddress =
      kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L2.BG_Message.Messages.PacketData[idx29] = kcg_lit_int32(0);
  }
  outC->_L1.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->_L1.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->_L1.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->_L1.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L1.BG_Message.Messages.PacketHeaders[idx30].nid_packet =
      kcg_lit_int32(0);
    outC->_L1.BG_Message.Messages.PacketHeaders[idx30].q_dir = Q_DIR_Reverse;
    outC->_L1.BG_Message.Messages.PacketHeaders[idx30].valid = kcg_true;
    outC->_L1.BG_Message.Messages.PacketHeaders[idx30].startAddress =
      kcg_lit_int32(0);
    outC->_L1.BG_Message.Messages.PacketHeaders[idx30].endAddress =
      kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->_L1.BG_Message.Messages.PacketData[idx31] = kcg_lit_int32(0);
  }
  outC->BaliseMessage.Header.q_updown = kcg_lit_int32(0);
  outC->BaliseMessage.Header.m_version = kcg_lit_int32(0);
  outC->BaliseMessage.Header.q_media = kcg_lit_int32(0);
  outC->BaliseMessage.Header.n_pig = kcg_lit_int32(0);
  outC->BaliseMessage.Header.n_total = kcg_lit_int32(0);
  outC->BaliseMessage.Header.m_dup = kcg_lit_int32(0);
  outC->BaliseMessage.Header.m_mcount = kcg_lit_int32(0);
  outC->BaliseMessage.Header.nid_c = kcg_lit_int32(0);
  outC->BaliseMessage.Header.nid_bg = kcg_lit_int32(0);
  outC->BaliseMessage.Header.q_link = kcg_lit_int32(0);
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->BaliseMessage.Messages.PacketHeaders[idx32].nid_packet = kcg_lit_int32(0);
    outC->BaliseMessage.Messages.PacketHeaders[idx32].q_dir = Q_DIR_Reverse;
    outC->BaliseMessage.Messages.PacketHeaders[idx32].valid = kcg_true;
    outC->BaliseMessage.Messages.PacketHeaders[idx32].startAddress =
      kcg_lit_int32(0);
    outC->BaliseMessage.Messages.PacketHeaders[idx32].endAddress = kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->BaliseMessage.Messages.PacketData[idx33] = kcg_lit_int32(0);
  }
  /* _L17=(InfraLib::TrackClose#1)/ */
  TrackClose_init_InfraLib(&outC->Context_TrackClose_1);
  /* _L12=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS#1)/ */
  Balises0012_MaarssenUtrechtCS_init_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->Context_Balises0012_MaarssenUtrechtCS_1);
  /* _L11=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen#1)/ */
  Balises0011_Maarssen_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balises0011_Maarssen_1);
  /* _L10=(AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen#1)/ */
  Balises0010_Breukelen_Maarssen_init_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &outC->Context_Balises0010_Breukelen_Maarssen_1);
  /* _L9=(AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen#1)/ */
  Balises0009_Breukelen_init_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->Context_Balises0009_Breukelen_1);
  /* _L8=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor#1)/ */
  Balises0008_BreukelenKeerspoor_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->Context_Balises0008_BreukelenKeerspoor_1);
  /* _L7=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen#1)/ */
  Balises0007_AbcoudeBreukelen_init_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->Context_Balises0007_AbcoudeBreukelen_1);
  /* _L6=(AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude#1)/ */
  Balises0006_Abcoude_init_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->Context_Balises0006_Abcoude_1);
  /* _L5=(AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude#1)/ */
  Balises0005_Abcoude_init_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &outC->Context_Balises0005_Abcoude_1);
  /* _L4=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude#1)/ */
  Balises0004_BijlmerAbcoude_init_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->Context_Balises0004_BijlmerAbcoude_1);
  /* _L3=(AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer#1)/ */
  Balises0003_Bijlmer_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->Context_Balises0003_Bijlmer_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617#1)/ */
  Balises0002_Amstel_UB_Signal_613_to_617_init_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->Context_Balises0002_Amstel_UB_Signal_613_to_617_1);
  /* _L14=(InfraLib::TrackDiscontinuity#2)/ */
  TrackDiscontinuity_init_InfraLib(&outC->Context_TrackDiscontinuity_2);
  /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613#1)/ */
  Balises0001_Amstel_UB_Signal_611_to_613_init_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->Context_Balises0001_Amstel_UB_Signal_611_to_613_1);
  /* _L13=(InfraLib::TrackDiscontinuity#1)/ */
  TrackDiscontinuity_init_InfraLib(&outC->Context_TrackDiscontinuity_1);
  /* _L15=(InfraLib::TrackInit#1)/ */
  TrackInit_init_InfraLib(&outC->Context_TrackInit_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Amsterdam_Utrecht_Lijn1_balises_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
{
  /* _L17=(InfraLib::TrackClose#1)/ */
  TrackClose_reset_InfraLib(&outC->Context_TrackClose_1);
  /* _L12=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_Balises::Balises0012_MaarssenUtrechtCS#1)/ */
  Balises0012_MaarssenUtrechtCS_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_Balises(
    &outC->Context_Balises0012_MaarssenUtrechtCS_1);
  /* _L11=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen#1)/ */
  Balises0011_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balises0011_Maarssen_1);
  /* _L10=(AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_Balises::Balises0010_Breukelen_Maarssen#1)/ */
  Balises0010_Breukelen_Maarssen_reset_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_Balises(
    &outC->Context_Balises0010_Breukelen_Maarssen_1);
  /* _L9=(AmsterdamUtrechtL2::Sheet12_Breukelen_Balises::Balises0009_Breukelen#1)/ */
  Balises0009_Breukelen_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_Balises(
    &outC->Context_Balises0009_Breukelen_1);
  /* _L8=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_Balises::Balises0008_BreukelenKeerspoor#1)/ */
  Balises0008_BreukelenKeerspoor_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_Balises(
    &outC->Context_Balises0008_BreukelenKeerspoor_1);
  /* _L7=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_Balises::Balises0007_AbcoudeBreukelen#1)/ */
  Balises0007_AbcoudeBreukelen_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_Balises(
    &outC->Context_Balises0007_AbcoudeBreukelen_1);
  /* _L6=(AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balises0006_Abcoude#1)/ */
  Balises0006_Abcoude_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->Context_Balises0006_Abcoude_1);
  /* _L5=(AmsterdamUtrechtL2::Sheet08A_Abcoude_Balises::Balises0005_Abcoude#1)/ */
  Balises0005_Abcoude_reset_AmsterdamUtrechtL2_Sheet08A_Abcoude_Balises(
    &outC->Context_Balises0005_Abcoude_1);
  /* _L4=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_Balises::Balises0004_BijlmerAbcoude#1)/ */
  Balises0004_BijlmerAbcoude_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_Balises(
    &outC->Context_Balises0004_BijlmerAbcoude_1);
  /* _L3=(AmsterdamUtrechtL2::Sheet06_Bijlmer_Balises::Balises0003_Bijlmer#1)/ */
  Balises0003_Bijlmer_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_Balises(
    &outC->Context_Balises0003_Bijlmer_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0002_Amstel_UB_Signal_613_to_617#1)/ */
  Balises0002_Amstel_UB_Signal_613_to_617_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->Context_Balises0002_Amstel_UB_Signal_613_to_617_1);
  /* _L14=(InfraLib::TrackDiscontinuity#2)/ */
  TrackDiscontinuity_reset_InfraLib(&outC->Context_TrackDiscontinuity_2);
  /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_Balises::Balises0001_Amstel_UB_Signal_611_to_613#1)/ */
  Balises0001_Amstel_UB_Signal_611_to_613_reset_AmsterdamUtrechtL2_Sheet05_Amstel_Balises(
    &outC->Context_Balises0001_Amstel_UB_Signal_611_to_613_1);
  /* _L13=(InfraLib::TrackDiscontinuity#1)/ */
  TrackDiscontinuity_reset_InfraLib(&outC->Context_TrackDiscontinuity_1);
  /* _L15=(InfraLib::TrackInit#1)/ */
  TrackInit_reset_InfraLib(&outC->Context_TrackInit_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

