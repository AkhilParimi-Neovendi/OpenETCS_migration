/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balises0011_Maarssen/ */
void Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises *outC)
{
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L6, SectionData_in);
  kcg_copy_CompressedBaliseMessage_TM(&outC->_L3, &outC->_L6.BG_Message);
  outC->_L2 = outC->_L6.TrainPosRaw.TrainPosCalibrated;
  /* _L1=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_424#1)/ */
  Balise_Group_424_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L3,
    outC->_L2,
    (BaliseGroupData_TM *) &BG424_Balises426,
    &outC->Context_Balise_Group_424_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L1,
    &outC->Context_Balise_Group_424_1.BG_message_out);
  /* _L7=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_425#1)/ */
  Balise_Group_425_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L1,
    outC->_L2,
    (BaliseGroupData_TM *) &BG425_Balises426,
    &outC->Context_Balise_Group_425_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L7,
    &outC->Context_Balise_Group_425_1.BG_message_out);
  /* _L8=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_426#1)/ */
  Balise_Group_426_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L7,
    outC->_L2,
    (BaliseGroupData_TM *) &BG426_Balises426,
    &outC->Context_Balise_Group_426_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L8,
    &outC->Context_Balise_Group_426_1.BG_message_out);
  /* _L9=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_427#1)/ */
  Balise_Group_427_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L8,
    outC->_L2,
    (BaliseGroupData_TM *) &BG427_Balises426,
    &outC->Context_Balise_Group_427_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L9,
    &outC->Context_Balise_Group_427_1.BG_message_out);
  /* _L10=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_428#1)/ */
  Balise_Group_428_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L9,
    outC->_L2,
    (BaliseGroupData_TM *) &BG428_Balises426,
    &outC->Context_Balise_Group_428_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L10,
    &outC->Context_Balise_Group_428_1.BG_message_out);
  /* _L11=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_429#1)/ */
  Balise_Group_429_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L10,
    outC->_L2,
    (BaliseGroupData_TM *) &BG429_Balises426,
    &outC->Context_Balise_Group_429_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L11,
    &outC->Context_Balise_Group_429_1.BG_message_out);
  /* _L12=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_477#1)/ */
  Balise_Group_477_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L11,
    outC->_L2,
    (BaliseGroupData_TM *) &BG477_Balises426,
    &outC->Context_Balise_Group_477_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L12,
    &outC->Context_Balise_Group_477_1.BG_message_out);
  /* _L13=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_430#1)/ */
  Balise_Group_430_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L12,
    outC->_L2,
    (BaliseGroupData_TM *) &BG430_Balises426,
    &outC->Context_Balise_Group_430_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L13,
    &outC->Context_Balise_Group_430_1.BG_message_out);
  /* _L14=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_431#1)/ */
  Balise_Group_431_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L13,
    outC->_L2,
    (BaliseGroupData_TM *) &BG431_Balises426,
    &outC->Context_Balise_Group_431_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L14,
    &outC->Context_Balise_Group_431_1.BG_message_out);
  /* _L15=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_432#1)/ */
  Balise_Group_432_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L14,
    outC->_L2,
    (BaliseGroupData_TM *) &BG432_Balises426,
    &outC->Context_Balise_Group_432_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L15,
    &outC->Context_Balise_Group_432_1.BG_message_out);
  /* _L16=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_433#1)/ */
  Balise_Group_433_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L15,
    outC->_L2,
    (BaliseGroupData_TM *) &BG433_Balises426,
    &outC->Context_Balise_Group_433_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L16,
    &outC->Context_Balise_Group_433_1.BG_message_out);
  /* _L17=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_434#1)/ */
  Balise_Group_434_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L16,
    outC->_L2,
    (BaliseGroupData_TM *) &BG434_Balises426,
    &outC->Context_Balise_Group_434_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L17,
    &outC->Context_Balise_Group_434_1.BG_message_out);
  /* _L18=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_435#1)/ */
  Balise_Group_435_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L17,
    outC->_L2,
    (BaliseGroupData_TM *) &BG435_Balises426,
    &outC->Context_Balise_Group_435_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L18,
    &outC->Context_Balise_Group_435_1.BG_message_out);
  /* _L19=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_436#1)/ */
  Balise_Group_436_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L18,
    outC->_L2,
    (BaliseGroupData_TM *) &BG436_Balises426,
    &outC->Context_Balise_Group_436_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L19,
    &outC->Context_Balise_Group_436_1.BG_message_out);
  /* _L20=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_437#1)/ */
  Balise_Group_437_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->_L19,
    outC->_L2,
    (BaliseGroupData_TM *) &BG437_Balises426,
    &outC->Context_Balise_Group_437_1);
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L20,
    &outC->Context_Balise_Group_437_1.BG_message_out);
  kcg_copy_TrackSectionData_T_InfraLib(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    kcg_copy_CompressedBaliseMessage_TM(&outC->_L4.BG_Message, &outC->_L20);
  }
  kcg_copy_TrackSectionData_T_InfraLib(&outC->SectionData_out, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Balises0011_Maarssen_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  outC_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises *outC)
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

  outC->_L8.Header.q_updown = kcg_lit_int32(0);
  outC->_L8.Header.m_version = kcg_lit_int32(0);
  outC->_L8.Header.q_media = kcg_lit_int32(0);
  outC->_L8.Header.n_pig = kcg_lit_int32(0);
  outC->_L8.Header.n_total = kcg_lit_int32(0);
  outC->_L8.Header.m_dup = kcg_lit_int32(0);
  outC->_L8.Header.m_mcount = kcg_lit_int32(0);
  outC->_L8.Header.nid_c = kcg_lit_int32(0);
  outC->_L8.Header.nid_bg = kcg_lit_int32(0);
  outC->_L8.Header.q_link = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L8.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L8.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L8.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L8.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L8.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L8.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L20.Header.q_updown = kcg_lit_int32(0);
  outC->_L20.Header.m_version = kcg_lit_int32(0);
  outC->_L20.Header.q_media = kcg_lit_int32(0);
  outC->_L20.Header.n_pig = kcg_lit_int32(0);
  outC->_L20.Header.n_total = kcg_lit_int32(0);
  outC->_L20.Header.m_dup = kcg_lit_int32(0);
  outC->_L20.Header.m_mcount = kcg_lit_int32(0);
  outC->_L20.Header.nid_c = kcg_lit_int32(0);
  outC->_L20.Header.nid_bg = kcg_lit_int32(0);
  outC->_L20.Header.q_link = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L20.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L20.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L20.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L20.Messages.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L20.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L20.Messages.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L9.Header.q_updown = kcg_lit_int32(0);
  outC->_L9.Header.m_version = kcg_lit_int32(0);
  outC->_L9.Header.q_media = kcg_lit_int32(0);
  outC->_L9.Header.n_pig = kcg_lit_int32(0);
  outC->_L9.Header.n_total = kcg_lit_int32(0);
  outC->_L9.Header.m_dup = kcg_lit_int32(0);
  outC->_L9.Header.m_mcount = kcg_lit_int32(0);
  outC->_L9.Header.nid_c = kcg_lit_int32(0);
  outC->_L9.Header.nid_bg = kcg_lit_int32(0);
  outC->_L9.Header.q_link = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L9.Messages.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L9.Messages.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L9.Messages.PacketHeaders[idx4].valid = kcg_true;
    outC->_L9.Messages.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L9.Messages.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L9.Messages.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L10.Header.q_updown = kcg_lit_int32(0);
  outC->_L10.Header.m_version = kcg_lit_int32(0);
  outC->_L10.Header.q_media = kcg_lit_int32(0);
  outC->_L10.Header.n_pig = kcg_lit_int32(0);
  outC->_L10.Header.n_total = kcg_lit_int32(0);
  outC->_L10.Header.m_dup = kcg_lit_int32(0);
  outC->_L10.Header.m_mcount = kcg_lit_int32(0);
  outC->_L10.Header.nid_c = kcg_lit_int32(0);
  outC->_L10.Header.nid_bg = kcg_lit_int32(0);
  outC->_L10.Header.q_link = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L10.Messages.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L10.Messages.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L10.Messages.PacketHeaders[idx6].valid = kcg_true;
    outC->_L10.Messages.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L10.Messages.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L10.Messages.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L11.Header.q_updown = kcg_lit_int32(0);
  outC->_L11.Header.m_version = kcg_lit_int32(0);
  outC->_L11.Header.q_media = kcg_lit_int32(0);
  outC->_L11.Header.n_pig = kcg_lit_int32(0);
  outC->_L11.Header.n_total = kcg_lit_int32(0);
  outC->_L11.Header.m_dup = kcg_lit_int32(0);
  outC->_L11.Header.m_mcount = kcg_lit_int32(0);
  outC->_L11.Header.nid_c = kcg_lit_int32(0);
  outC->_L11.Header.nid_bg = kcg_lit_int32(0);
  outC->_L11.Header.q_link = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L11.Messages.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L11.Messages.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L11.Messages.PacketHeaders[idx8].valid = kcg_true;
    outC->_L11.Messages.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L11.Messages.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L11.Messages.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L12.Header.q_updown = kcg_lit_int32(0);
  outC->_L12.Header.m_version = kcg_lit_int32(0);
  outC->_L12.Header.q_media = kcg_lit_int32(0);
  outC->_L12.Header.n_pig = kcg_lit_int32(0);
  outC->_L12.Header.n_total = kcg_lit_int32(0);
  outC->_L12.Header.m_dup = kcg_lit_int32(0);
  outC->_L12.Header.m_mcount = kcg_lit_int32(0);
  outC->_L12.Header.nid_c = kcg_lit_int32(0);
  outC->_L12.Header.nid_bg = kcg_lit_int32(0);
  outC->_L12.Header.q_link = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L12.Messages.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L12.Messages.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L12.Messages.PacketHeaders[idx10].valid = kcg_true;
    outC->_L12.Messages.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L12.Messages.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L12.Messages.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L13.Header.q_updown = kcg_lit_int32(0);
  outC->_L13.Header.m_version = kcg_lit_int32(0);
  outC->_L13.Header.q_media = kcg_lit_int32(0);
  outC->_L13.Header.n_pig = kcg_lit_int32(0);
  outC->_L13.Header.n_total = kcg_lit_int32(0);
  outC->_L13.Header.m_dup = kcg_lit_int32(0);
  outC->_L13.Header.m_mcount = kcg_lit_int32(0);
  outC->_L13.Header.nid_c = kcg_lit_int32(0);
  outC->_L13.Header.nid_bg = kcg_lit_int32(0);
  outC->_L13.Header.q_link = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L13.Messages.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L13.Messages.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L13.Messages.PacketHeaders[idx12].valid = kcg_true;
    outC->_L13.Messages.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L13.Messages.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L13.Messages.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L14.Header.q_updown = kcg_lit_int32(0);
  outC->_L14.Header.m_version = kcg_lit_int32(0);
  outC->_L14.Header.q_media = kcg_lit_int32(0);
  outC->_L14.Header.n_pig = kcg_lit_int32(0);
  outC->_L14.Header.n_total = kcg_lit_int32(0);
  outC->_L14.Header.m_dup = kcg_lit_int32(0);
  outC->_L14.Header.m_mcount = kcg_lit_int32(0);
  outC->_L14.Header.nid_c = kcg_lit_int32(0);
  outC->_L14.Header.nid_bg = kcg_lit_int32(0);
  outC->_L14.Header.q_link = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L14.Messages.PacketHeaders[idx14].nid_packet = kcg_lit_int32(0);
    outC->_L14.Messages.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L14.Messages.PacketHeaders[idx14].valid = kcg_true;
    outC->_L14.Messages.PacketHeaders[idx14].startAddress = kcg_lit_int32(0);
    outC->_L14.Messages.PacketHeaders[idx14].endAddress = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L14.Messages.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->_L15.Header.q_updown = kcg_lit_int32(0);
  outC->_L15.Header.m_version = kcg_lit_int32(0);
  outC->_L15.Header.q_media = kcg_lit_int32(0);
  outC->_L15.Header.n_pig = kcg_lit_int32(0);
  outC->_L15.Header.n_total = kcg_lit_int32(0);
  outC->_L15.Header.m_dup = kcg_lit_int32(0);
  outC->_L15.Header.m_mcount = kcg_lit_int32(0);
  outC->_L15.Header.nid_c = kcg_lit_int32(0);
  outC->_L15.Header.nid_bg = kcg_lit_int32(0);
  outC->_L15.Header.q_link = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L15.Messages.PacketHeaders[idx16].nid_packet = kcg_lit_int32(0);
    outC->_L15.Messages.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L15.Messages.PacketHeaders[idx16].valid = kcg_true;
    outC->_L15.Messages.PacketHeaders[idx16].startAddress = kcg_lit_int32(0);
    outC->_L15.Messages.PacketHeaders[idx16].endAddress = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L15.Messages.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->_L16.Header.q_updown = kcg_lit_int32(0);
  outC->_L16.Header.m_version = kcg_lit_int32(0);
  outC->_L16.Header.q_media = kcg_lit_int32(0);
  outC->_L16.Header.n_pig = kcg_lit_int32(0);
  outC->_L16.Header.n_total = kcg_lit_int32(0);
  outC->_L16.Header.m_dup = kcg_lit_int32(0);
  outC->_L16.Header.m_mcount = kcg_lit_int32(0);
  outC->_L16.Header.nid_c = kcg_lit_int32(0);
  outC->_L16.Header.nid_bg = kcg_lit_int32(0);
  outC->_L16.Header.q_link = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L16.Messages.PacketHeaders[idx18].nid_packet = kcg_lit_int32(0);
    outC->_L16.Messages.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L16.Messages.PacketHeaders[idx18].valid = kcg_true;
    outC->_L16.Messages.PacketHeaders[idx18].startAddress = kcg_lit_int32(0);
    outC->_L16.Messages.PacketHeaders[idx18].endAddress = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L16.Messages.PacketData[idx19] = kcg_lit_int32(0);
  }
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
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L17.Messages.PacketHeaders[idx20].nid_packet = kcg_lit_int32(0);
    outC->_L17.Messages.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L17.Messages.PacketHeaders[idx20].valid = kcg_true;
    outC->_L17.Messages.PacketHeaders[idx20].startAddress = kcg_lit_int32(0);
    outC->_L17.Messages.PacketHeaders[idx20].endAddress = kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L17.Messages.PacketData[idx21] = kcg_lit_int32(0);
  }
  outC->_L18.Header.q_updown = kcg_lit_int32(0);
  outC->_L18.Header.m_version = kcg_lit_int32(0);
  outC->_L18.Header.q_media = kcg_lit_int32(0);
  outC->_L18.Header.n_pig = kcg_lit_int32(0);
  outC->_L18.Header.n_total = kcg_lit_int32(0);
  outC->_L18.Header.m_dup = kcg_lit_int32(0);
  outC->_L18.Header.m_mcount = kcg_lit_int32(0);
  outC->_L18.Header.nid_c = kcg_lit_int32(0);
  outC->_L18.Header.nid_bg = kcg_lit_int32(0);
  outC->_L18.Header.q_link = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L18.Messages.PacketHeaders[idx22].nid_packet = kcg_lit_int32(0);
    outC->_L18.Messages.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L18.Messages.PacketHeaders[idx22].valid = kcg_true;
    outC->_L18.Messages.PacketHeaders[idx22].startAddress = kcg_lit_int32(0);
    outC->_L18.Messages.PacketHeaders[idx22].endAddress = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L18.Messages.PacketData[idx23] = kcg_lit_int32(0);
  }
  outC->_L19.Header.q_updown = kcg_lit_int32(0);
  outC->_L19.Header.m_version = kcg_lit_int32(0);
  outC->_L19.Header.q_media = kcg_lit_int32(0);
  outC->_L19.Header.n_pig = kcg_lit_int32(0);
  outC->_L19.Header.n_total = kcg_lit_int32(0);
  outC->_L19.Header.m_dup = kcg_lit_int32(0);
  outC->_L19.Header.m_mcount = kcg_lit_int32(0);
  outC->_L19.Header.nid_c = kcg_lit_int32(0);
  outC->_L19.Header.nid_bg = kcg_lit_int32(0);
  outC->_L19.Header.q_link = kcg_lit_int32(0);
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L19.Messages.PacketHeaders[idx24].nid_packet = kcg_lit_int32(0);
    outC->_L19.Messages.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L19.Messages.PacketHeaders[idx24].valid = kcg_true;
    outC->_L19.Messages.PacketHeaders[idx24].startAddress = kcg_lit_int32(0);
    outC->_L19.Messages.PacketHeaders[idx24].endAddress = kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L19.Messages.PacketData[idx25] = kcg_lit_int32(0);
  }
  outC->_L7.Header.q_updown = kcg_lit_int32(0);
  outC->_L7.Header.m_version = kcg_lit_int32(0);
  outC->_L7.Header.q_media = kcg_lit_int32(0);
  outC->_L7.Header.n_pig = kcg_lit_int32(0);
  outC->_L7.Header.n_total = kcg_lit_int32(0);
  outC->_L7.Header.m_dup = kcg_lit_int32(0);
  outC->_L7.Header.m_mcount = kcg_lit_int32(0);
  outC->_L7.Header.nid_c = kcg_lit_int32(0);
  outC->_L7.Header.nid_bg = kcg_lit_int32(0);
  outC->_L7.Header.q_link = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L7.Messages.PacketHeaders[idx26].nid_packet = kcg_lit_int32(0);
    outC->_L7.Messages.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L7.Messages.PacketHeaders[idx26].valid = kcg_true;
    outC->_L7.Messages.PacketHeaders[idx26].startAddress = kcg_lit_int32(0);
    outC->_L7.Messages.PacketHeaders[idx26].endAddress = kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L7.Messages.PacketData[idx27] = kcg_lit_int32(0);
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
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L6.BG_Message.Messages.PacketHeaders[idx28].nid_packet =
      kcg_lit_int32(0);
    outC->_L6.BG_Message.Messages.PacketHeaders[idx28].q_dir = Q_DIR_Reverse;
    outC->_L6.BG_Message.Messages.PacketHeaders[idx28].valid = kcg_true;
    outC->_L6.BG_Message.Messages.PacketHeaders[idx28].startAddress =
      kcg_lit_int32(0);
    outC->_L6.BG_Message.Messages.PacketHeaders[idx28].endAddress =
      kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L6.BG_Message.Messages.PacketData[idx29] = kcg_lit_int32(0);
  }
  outC->_L1.Header.q_updown = kcg_lit_int32(0);
  outC->_L1.Header.m_version = kcg_lit_int32(0);
  outC->_L1.Header.q_media = kcg_lit_int32(0);
  outC->_L1.Header.n_pig = kcg_lit_int32(0);
  outC->_L1.Header.n_total = kcg_lit_int32(0);
  outC->_L1.Header.m_dup = kcg_lit_int32(0);
  outC->_L1.Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.Header.nid_c = kcg_lit_int32(0);
  outC->_L1.Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.Header.q_link = kcg_lit_int32(0);
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L1.Messages.PacketHeaders[idx30].nid_packet = kcg_lit_int32(0);
    outC->_L1.Messages.PacketHeaders[idx30].q_dir = Q_DIR_Reverse;
    outC->_L1.Messages.PacketHeaders[idx30].valid = kcg_true;
    outC->_L1.Messages.PacketHeaders[idx30].startAddress = kcg_lit_int32(0);
    outC->_L1.Messages.PacketHeaders[idx30].endAddress = kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->_L1.Messages.PacketData[idx31] = kcg_lit_int32(0);
  }
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L3.Header.q_updown = kcg_lit_int32(0);
  outC->_L3.Header.m_version = kcg_lit_int32(0);
  outC->_L3.Header.q_media = kcg_lit_int32(0);
  outC->_L3.Header.n_pig = kcg_lit_int32(0);
  outC->_L3.Header.n_total = kcg_lit_int32(0);
  outC->_L3.Header.m_dup = kcg_lit_int32(0);
  outC->_L3.Header.m_mcount = kcg_lit_int32(0);
  outC->_L3.Header.nid_c = kcg_lit_int32(0);
  outC->_L3.Header.nid_bg = kcg_lit_int32(0);
  outC->_L3.Header.q_link = kcg_lit_int32(0);
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->_L3.Messages.PacketHeaders[idx32].nid_packet = kcg_lit_int32(0);
    outC->_L3.Messages.PacketHeaders[idx32].q_dir = Q_DIR_Reverse;
    outC->_L3.Messages.PacketHeaders[idx32].valid = kcg_true;
    outC->_L3.Messages.PacketHeaders[idx32].startAddress = kcg_lit_int32(0);
    outC->_L3.Messages.PacketHeaders[idx32].endAddress = kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->_L3.Messages.PacketData[idx33] = kcg_lit_int32(0);
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
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L4.BG_Message.Messages.PacketHeaders[idx34].nid_packet =
      kcg_lit_int32(0);
    outC->_L4.BG_Message.Messages.PacketHeaders[idx34].q_dir = Q_DIR_Reverse;
    outC->_L4.BG_Message.Messages.PacketHeaders[idx34].valid = kcg_true;
    outC->_L4.BG_Message.Messages.PacketHeaders[idx34].startAddress =
      kcg_lit_int32(0);
    outC->_L4.BG_Message.Messages.PacketHeaders[idx34].endAddress =
      kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->_L4.BG_Message.Messages.PacketData[idx35] = kcg_lit_int32(0);
  }
  outC->SectionData_out.TrainPosRaw.TrainPos_in = kcg_lit_float32(0.0);
  outC->SectionData_out.TrainPosRaw.OffsetTotal = kcg_lit_int32(0);
  outC->SectionData_out.TrainPosRaw.TrainPosCalibrated = kcg_lit_float32(0.0);
  outC->SectionData_out.BG_Message.Header.q_updown = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.m_version = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.q_media = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.n_pig = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.n_total = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.m_dup = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.m_mcount = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.nid_c = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.nid_bg = kcg_lit_int32(0);
  outC->SectionData_out.BG_Message.Header.q_link = kcg_lit_int32(0);
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx36].nid_packet =
      kcg_lit_int32(0);
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx36].q_dir =
      Q_DIR_Reverse;
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx36].valid = kcg_true;
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx36].startAddress =
      kcg_lit_int32(0);
    outC->SectionData_out.BG_Message.Messages.PacketHeaders[idx36].endAddress =
      kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->SectionData_out.BG_Message.Messages.PacketData[idx37] = kcg_lit_int32(0);
  }
  /* _L20=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_437#1)/ */
  Balise_Group_437_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_437_1);
  /* _L19=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_436#1)/ */
  Balise_Group_436_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_436_1);
  /* _L18=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_435#1)/ */
  Balise_Group_435_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_435_1);
  /* _L17=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_434#1)/ */
  Balise_Group_434_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_434_1);
  /* _L16=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_433#1)/ */
  Balise_Group_433_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_433_1);
  /* _L15=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_432#1)/ */
  Balise_Group_432_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_432_1);
  /* _L14=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_431#1)/ */
  Balise_Group_431_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_431_1);
  /* _L13=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_430#1)/ */
  Balise_Group_430_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_430_1);
  /* _L12=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_477#1)/ */
  Balise_Group_477_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_477_1);
  /* _L11=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_429#1)/ */
  Balise_Group_429_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_429_1);
  /* _L10=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_428#1)/ */
  Balise_Group_428_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_428_1);
  /* _L9=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_427#1)/ */
  Balise_Group_427_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_427_1);
  /* _L8=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_426#1)/ */
  Balise_Group_426_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_426_1);
  /* _L7=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_425#1)/ */
  Balise_Group_425_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_425_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_424#1)/ */
  Balise_Group_424_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_424_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balises0011_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
  outC_Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises *outC)
{
  /* _L20=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_437#1)/ */
  Balise_Group_437_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_437_1);
  /* _L19=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_436#1)/ */
  Balise_Group_436_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_436_1);
  /* _L18=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_435#1)/ */
  Balise_Group_435_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_435_1);
  /* _L17=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_434#1)/ */
  Balise_Group_434_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_434_1);
  /* _L16=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_433#1)/ */
  Balise_Group_433_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_433_1);
  /* _L15=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_432#1)/ */
  Balise_Group_432_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_432_1);
  /* _L14=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_431#1)/ */
  Balise_Group_431_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_431_1);
  /* _L13=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_430#1)/ */
  Balise_Group_430_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_430_1);
  /* _L12=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_477#1)/ */
  Balise_Group_477_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_477_1);
  /* _L11=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_429#1)/ */
  Balise_Group_429_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_429_1);
  /* _L10=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_428#1)/ */
  Balise_Group_428_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_428_1);
  /* _L9=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_427#1)/ */
  Balise_Group_427_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_427_1);
  /* _L8=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_426#1)/ */
  Balise_Group_426_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_426_1);
  /* _L7=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_425#1)/ */
  Balise_Group_425_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_425_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet14_Maarssen_Balises::Balise_Group_424#1)/ */
  Balise_Group_424_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises(
    &outC->Context_Balise_Group_424_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balises0011_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_Balises.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

