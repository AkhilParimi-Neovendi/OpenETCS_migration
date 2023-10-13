/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Balise_Group_386_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.h"

/* AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_Group_386/ */
void Balise_Group_386_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  /* BG_message_in/ */
  CompressedBaliseMessage_TM *BG_message_in,
  /* TrainPos/ */
  kcg_float64 TrainPos,
  /* Engineering_Data/ */
  BaliseGroupData_TM *Engineering_Data,
  outC_Balise_Group_386_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises *outC)
{
  kcg_bool noname;

  kcg_copy_CompressedBaliseMessage_TM(&outC->_L29, BG_message_in);
  outC->_L28 = TrainPos;
  kcg_copy_BaliseGroupData_TM(&outC->_L19, Engineering_Data);
  /* _L11=(InfraLib::Balise_Group_Init#1)/ */
  Balise_Group_Init_InfraLib(
    outC->_L28,
    &outC->_L19,
    &outC->Context_Balise_Group_Init_1);
  kcg_copy_B_data_internal_T_InfraLib(
    &outC->_L11,
    &outC->Context_Balise_Group_Init_1.BG_internal_out);
  kcg_copy_B_data_internal_T_InfraLib(&outC->BaliseDataIn, &outC->_L11);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L9, &outC->BaliseDataIn);
  outC->_L20 = kcg_lit_int64(0);
  /* _L8=(AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_386_1#1)/ */
  Balise_386_1_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L9,
    (BaliseTelegramHeader_int_T_TM *) &BG386_header_B1_Balises426,
    outC->_L20,
    &outC->Context_Balise_386_1_1);
  kcg_copy_B_data_internal_T_InfraLib(
    &outC->_L8,
    &outC->Context_Balise_386_1_1.B_data_out);
  outC->_L21 = kcg_lit_int64(1);
  /* _L7=(AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_386_0#1)/ */
  Balise_386_0_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->_L8,
    (BaliseTelegramHeader_int_T_TM *) &BG386_header_B0_Balises426,
    outC->_L21,
    &outC->Context_Balise_386_0_1);
  kcg_copy_B_data_internal_T_InfraLib(
    &outC->_L7,
    &outC->Context_Balise_386_0_1.B_data_out);
  kcg_copy_B_data_internal_T_InfraLib(&outC->BaliseDataOut, &outC->_L7);
  kcg_copy_B_data_internal_T_InfraLib(&outC->_L16, &outC->BaliseDataOut);
  /* _L14=(InfraLib::Balise_Group_Close#1)/ */
  Balise_Group_Close_InfraLib(
    &outC->_L16,
    &outC->_L29,
    &outC->Context_Balise_Group_Close_1);
  outC->_L14 = outC->Context_Balise_Group_Close_1.Error_out;
  kcg_copy_CompressedBaliseMessage_TM(
    &outC->_L13,
    &outC->Context_Balise_Group_Close_1.BG_message_out);
  noname = outC->_L14;
  kcg_copy_CompressedBaliseMessage_TM(&outC->BG_message_out, &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void Balise_Group_386_init_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  outC_Balise_Group_386_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises *outC)
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

  outC->_L29.Header.q_updown = kcg_lit_int64(0);
  outC->_L29.Header.m_version = kcg_lit_int64(0);
  outC->_L29.Header.q_media = kcg_lit_int64(0);
  outC->_L29.Header.n_pig = kcg_lit_int64(0);
  outC->_L29.Header.n_total = kcg_lit_int64(0);
  outC->_L29.Header.m_dup = kcg_lit_int64(0);
  outC->_L29.Header.m_mcount = kcg_lit_int64(0);
  outC->_L29.Header.nid_c = kcg_lit_int64(0);
  outC->_L29.Header.nid_bg = kcg_lit_int64(0);
  outC->_L29.Header.q_link = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L29.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L29.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L29.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L29.Messages.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L29.Messages.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L29.Messages.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L8.header.q_updown = kcg_lit_int64(0);
  outC->_L8.header.m_version = kcg_lit_int64(0);
  outC->_L8.header.q_media = kcg_lit_int64(0);
  outC->_L8.header.n_pig = kcg_lit_int64(0);
  outC->_L8.header.n_total = kcg_lit_int64(0);
  outC->_L8.header.m_dup = kcg_lit_int64(0);
  outC->_L8.header.m_mcount = kcg_lit_int64(0);
  outC->_L8.header.nid_c = kcg_lit_int64(0);
  outC->_L8.header.nid_bg = kcg_lit_int64(0);
  outC->_L8.header.q_link = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L8.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L8.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L8.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L8.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L8.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L8.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L8.engineering_BG_location = kcg_lit_int64(0);
  outC->_L8.TrainPos = kcg_lit_float64(0.0);
  outC->_L8.pig_nom_0 = kcg_lit_int64(0);
  outC->_L8.balise_passed = kcg_true;
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19.NID_C = kcg_lit_int64(0);
  outC->_L19.NID_BG = kcg_lit_int64(0);
  outC->_L19.Pos = kcg_lit_int64(0);
  outC->_L19.Or_BG = Amsterdam_TM;
  outC->_L19.Or_Line = N_TM;
  outC->_L16.header.q_updown = kcg_lit_int64(0);
  outC->_L16.header.m_version = kcg_lit_int64(0);
  outC->_L16.header.q_media = kcg_lit_int64(0);
  outC->_L16.header.n_pig = kcg_lit_int64(0);
  outC->_L16.header.n_total = kcg_lit_int64(0);
  outC->_L16.header.m_dup = kcg_lit_int64(0);
  outC->_L16.header.m_mcount = kcg_lit_int64(0);
  outC->_L16.header.nid_c = kcg_lit_int64(0);
  outC->_L16.header.nid_bg = kcg_lit_int64(0);
  outC->_L16.header.q_link = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L16.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L16.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L16.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L16.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L16.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L16.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L16.engineering_BG_location = kcg_lit_int64(0);
  outC->_L16.TrainPos = kcg_lit_float64(0.0);
  outC->_L16.pig_nom_0 = kcg_lit_int64(0);
  outC->_L16.balise_passed = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13.Header.q_updown = kcg_lit_int64(0);
  outC->_L13.Header.m_version = kcg_lit_int64(0);
  outC->_L13.Header.q_media = kcg_lit_int64(0);
  outC->_L13.Header.n_pig = kcg_lit_int64(0);
  outC->_L13.Header.n_total = kcg_lit_int64(0);
  outC->_L13.Header.m_dup = kcg_lit_int64(0);
  outC->_L13.Header.m_mcount = kcg_lit_int64(0);
  outC->_L13.Header.nid_c = kcg_lit_int64(0);
  outC->_L13.Header.nid_bg = kcg_lit_int64(0);
  outC->_L13.Header.q_link = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L13.Messages.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L13.Messages.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L13.Messages.PacketHeaders[idx6].valid = kcg_true;
    outC->_L13.Messages.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L13.Messages.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L13.Messages.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L11.header.q_updown = kcg_lit_int64(0);
  outC->_L11.header.m_version = kcg_lit_int64(0);
  outC->_L11.header.q_media = kcg_lit_int64(0);
  outC->_L11.header.n_pig = kcg_lit_int64(0);
  outC->_L11.header.n_total = kcg_lit_int64(0);
  outC->_L11.header.m_dup = kcg_lit_int64(0);
  outC->_L11.header.m_mcount = kcg_lit_int64(0);
  outC->_L11.header.nid_c = kcg_lit_int64(0);
  outC->_L11.header.nid_bg = kcg_lit_int64(0);
  outC->_L11.header.q_link = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L11.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L11.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L11.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L11.packets.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L11.packets.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L11.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L11.engineering_BG_location = kcg_lit_int64(0);
  outC->_L11.TrainPos = kcg_lit_float64(0.0);
  outC->_L11.pig_nom_0 = kcg_lit_int64(0);
  outC->_L11.balise_passed = kcg_true;
  outC->_L9.header.q_updown = kcg_lit_int64(0);
  outC->_L9.header.m_version = kcg_lit_int64(0);
  outC->_L9.header.q_media = kcg_lit_int64(0);
  outC->_L9.header.n_pig = kcg_lit_int64(0);
  outC->_L9.header.n_total = kcg_lit_int64(0);
  outC->_L9.header.m_dup = kcg_lit_int64(0);
  outC->_L9.header.m_mcount = kcg_lit_int64(0);
  outC->_L9.header.nid_c = kcg_lit_int64(0);
  outC->_L9.header.nid_bg = kcg_lit_int64(0);
  outC->_L9.header.q_link = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L9.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->_L9.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L9.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L9.packets.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->_L9.packets.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L9.packets.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->_L9.engineering_BG_location = kcg_lit_int64(0);
  outC->_L9.TrainPos = kcg_lit_float64(0.0);
  outC->_L9.pig_nom_0 = kcg_lit_int64(0);
  outC->_L9.balise_passed = kcg_true;
  outC->_L7.header.q_updown = kcg_lit_int64(0);
  outC->_L7.header.m_version = kcg_lit_int64(0);
  outC->_L7.header.q_media = kcg_lit_int64(0);
  outC->_L7.header.n_pig = kcg_lit_int64(0);
  outC->_L7.header.n_total = kcg_lit_int64(0);
  outC->_L7.header.m_dup = kcg_lit_int64(0);
  outC->_L7.header.m_mcount = kcg_lit_int64(0);
  outC->_L7.header.nid_c = kcg_lit_int64(0);
  outC->_L7.header.nid_bg = kcg_lit_int64(0);
  outC->_L7.header.q_link = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L7.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int64(0);
    outC->_L7.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx12].startAddress = kcg_lit_int64(0);
    outC->_L7.packets.PacketHeaders[idx12].endAddress = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L7.packets.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->_L7.engineering_BG_location = kcg_lit_int64(0);
  outC->_L7.TrainPos = kcg_lit_float64(0.0);
  outC->_L7.pig_nom_0 = kcg_lit_int64(0);
  outC->_L7.balise_passed = kcg_true;
  outC->BaliseDataOut.header.q_updown = kcg_lit_int64(0);
  outC->BaliseDataOut.header.m_version = kcg_lit_int64(0);
  outC->BaliseDataOut.header.q_media = kcg_lit_int64(0);
  outC->BaliseDataOut.header.n_pig = kcg_lit_int64(0);
  outC->BaliseDataOut.header.n_total = kcg_lit_int64(0);
  outC->BaliseDataOut.header.m_dup = kcg_lit_int64(0);
  outC->BaliseDataOut.header.m_mcount = kcg_lit_int64(0);
  outC->BaliseDataOut.header.nid_c = kcg_lit_int64(0);
  outC->BaliseDataOut.header.nid_bg = kcg_lit_int64(0);
  outC->BaliseDataOut.header.q_link = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->BaliseDataOut.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->BaliseDataOut.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->BaliseDataOut.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->BaliseDataOut.packets.PacketHeaders[idx14].startAddress =
      kcg_lit_int64(0);
    outC->BaliseDataOut.packets.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->BaliseDataOut.packets.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->BaliseDataOut.engineering_BG_location = kcg_lit_int64(0);
  outC->BaliseDataOut.TrainPos = kcg_lit_float64(0.0);
  outC->BaliseDataOut.pig_nom_0 = kcg_lit_int64(0);
  outC->BaliseDataOut.balise_passed = kcg_true;
  outC->BaliseDataIn.header.q_updown = kcg_lit_int64(0);
  outC->BaliseDataIn.header.m_version = kcg_lit_int64(0);
  outC->BaliseDataIn.header.q_media = kcg_lit_int64(0);
  outC->BaliseDataIn.header.n_pig = kcg_lit_int64(0);
  outC->BaliseDataIn.header.n_total = kcg_lit_int64(0);
  outC->BaliseDataIn.header.m_dup = kcg_lit_int64(0);
  outC->BaliseDataIn.header.m_mcount = kcg_lit_int64(0);
  outC->BaliseDataIn.header.nid_c = kcg_lit_int64(0);
  outC->BaliseDataIn.header.nid_bg = kcg_lit_int64(0);
  outC->BaliseDataIn.header.q_link = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->BaliseDataIn.packets.PacketHeaders[idx16].nid_packet = kcg_lit_int64(0);
    outC->BaliseDataIn.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->BaliseDataIn.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->BaliseDataIn.packets.PacketHeaders[idx16].startAddress = kcg_lit_int64(0);
    outC->BaliseDataIn.packets.PacketHeaders[idx16].endAddress = kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->BaliseDataIn.packets.PacketData[idx17] = kcg_lit_int64(0);
  }
  outC->BaliseDataIn.engineering_BG_location = kcg_lit_int64(0);
  outC->BaliseDataIn.TrainPos = kcg_lit_float64(0.0);
  outC->BaliseDataIn.pig_nom_0 = kcg_lit_int64(0);
  outC->BaliseDataIn.balise_passed = kcg_true;
  outC->BG_message_out.Header.q_updown = kcg_lit_int64(0);
  outC->BG_message_out.Header.m_version = kcg_lit_int64(0);
  outC->BG_message_out.Header.q_media = kcg_lit_int64(0);
  outC->BG_message_out.Header.n_pig = kcg_lit_int64(0);
  outC->BG_message_out.Header.n_total = kcg_lit_int64(0);
  outC->BG_message_out.Header.m_dup = kcg_lit_int64(0);
  outC->BG_message_out.Header.m_mcount = kcg_lit_int64(0);
  outC->BG_message_out.Header.nid_c = kcg_lit_int64(0);
  outC->BG_message_out.Header.nid_bg = kcg_lit_int64(0);
  outC->BG_message_out.Header.q_link = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->BG_message_out.Messages.PacketHeaders[idx18].nid_packet =
      kcg_lit_int64(0);
    outC->BG_message_out.Messages.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->BG_message_out.Messages.PacketHeaders[idx18].valid = kcg_true;
    outC->BG_message_out.Messages.PacketHeaders[idx18].startAddress =
      kcg_lit_int64(0);
    outC->BG_message_out.Messages.PacketHeaders[idx18].endAddress =
      kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->BG_message_out.Messages.PacketData[idx19] = kcg_lit_int64(0);
  }
  /* _L14=(InfraLib::Balise_Group_Close#1)/ */
  Balise_Group_Close_init_InfraLib(&outC->Context_Balise_Group_Close_1);
  /* _L7=(AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_386_0#1)/ */
  Balise_386_0_init_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->Context_Balise_386_0_1);
  /* _L8=(AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_386_1#1)/ */
  Balise_386_1_init_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->Context_Balise_386_1_1);
  /* _L11=(InfraLib::Balise_Group_Init#1)/ */
  Balise_Group_Init_init_InfraLib(&outC->Context_Balise_Group_Init_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Balise_Group_386_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
  outC_Balise_Group_386_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises *outC)
{
  /* _L14=(InfraLib::Balise_Group_Close#1)/ */
  Balise_Group_Close_reset_InfraLib(&outC->Context_Balise_Group_Close_1);
  /* _L7=(AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_386_0#1)/ */
  Balise_386_0_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->Context_Balise_386_0_1);
  /* _L8=(AmsterdamUtrechtL2::Sheet08B_Abcoude_Balises::Balise_386_1#1)/ */
  Balise_386_1_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises(
    &outC->Context_Balise_386_1_1);
  /* _L11=(InfraLib::Balise_Group_Init#1)/ */
  Balise_Group_Init_reset_InfraLib(&outC->Context_Balise_Group_Init_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Balise_Group_386_AmsterdamUtrechtL2_Sheet08B_Abcoude_Balises.c
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

