/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

/* AmsterdamUtrechtL2::AmsterdamUtrechtTrack1::Amsterdam_Utrecht_Lijn1_RBC/ */
void Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  /* Message_in/ */
  M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* Packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* Trigger_in/ */
  kcg_int32 Trigger_in,
  /* Message_sent/ */
  kcg_bool Message_sent,
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
{
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L3, Message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L4, Packets_in);
  outC->_L5 = Trigger_in;
  outC->_L6 = Message_sent;
  /* _L7=(RadioLib::RBC_init#1)/ */
  RBC_init_RadioLib(
    &outC->_L3,
    &outC->_L4,
    outC->_L5,
    outC->_L6,
    &outC->Context_RBC_init_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L7,
    &outC->Context_RBC_init_1.R_data_out);
  /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel#1)/ */
  RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->_L7,
    &outC->Context_RBC_Sheet05_Amstel_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->Context_RBC_Sheet05_Amstel_1.R_data_out);
  /* _L19=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer#1)/ */
  RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L2,
    &outC->Context_RBC_Sheet06_Bijlmer_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L19,
    &outC->Context_RBC_Sheet06_Bijlmer_1.R_data_out);
  /* _L20=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude#1)/ */
  Sheet07_BijlmerAbcoude_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->_L19,
    &outC->Context_Sheet07_BijlmerAbcoude_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L20,
    &outC->Context_Sheet07_BijlmerAbcoude_1.R_data_out);
  /* _L21=(AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude#1)/ */
  Sheet08A_Abcoude_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
    &outC->_L20,
    &outC->Context_Sheet08A_Abcoude_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L21,
    &outC->Context_Sheet08A_Abcoude_1.R_data_out);
  /* _L22=(AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude#1)/ */
  Sheet08B_Abcoude_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->_L21,
    &outC->Context_Sheet08B_Abcoude_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L22,
    &outC->Context_Sheet08B_Abcoude_1.R_data_out);
  /* _L23=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen#1)/ */
  Sheet09_AbcoudeBreukelen_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->_L22,
    &outC->Context_Sheet09_AbcoudeBreukelen_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L23,
    &outC->Context_Sheet09_AbcoudeBreukelen_1.R_data_out);
  /* _L24=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Sheet11_BreukelenKeerspoor#1)/ */
  Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L23,
    &outC->Context_Sheet11_BreukelenKeerspoor_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L24,
    &outC->Context_Sheet11_BreukelenKeerspoor_1.R_data_out);
  /* _L25=(AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen#1)/ */
  Sheet12_Breukelen_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->_L24,
    &outC->Context_Sheet12_Breukelen_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L25,
    &outC->Context_Sheet12_Breukelen_1.R_data_out);
  /* _L26=(AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC#1)/ */
  Sheet13_Breukelen_Maarssen_RBC_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &outC->_L25,
    &outC->Context_Sheet13_Breukelen_Maarssen_RBC_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L26,
    &outC->Context_Sheet13_Breukelen_Maarssen_RBC_1.R_data_out);
  /* _L27=(AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen#1)/ */
  RBC_Sheet14_Maarssen_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->_L26,
    &outC->Context_RBC_Sheet14_Maarssen_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L27,
    &outC->Context_RBC_Sheet14_Maarssen_1.R_data_out);
  /* _L28=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS#1)/ */
  RBC_Sheet15_MaarssenUtrechtCS_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &outC->_L27,
    &outC->Context_RBC_Sheet15_MaarssenUtrechtCS_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L28,
    &outC->Context_RBC_Sheet15_MaarssenUtrechtCS_1.R_data_out);
  /* _L8=(RadioLib::RBC_close#1)/ */
  RBC_close_RadioLib(&outC->_L28, &outC->Context_RBC_close_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L8,
    &outC->Context_RBC_close_1.Message_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L9,
    &outC->Context_RBC_close_1.Packets_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->Packets_out, &outC->_L9);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->Message_out, &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void Amsterdam_Utrecht_Lijn1_RBC_init_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
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

  outC->_L28.message.valid = kcg_true;
  outC->_L28.message.nid_message = kcg_lit_int32(0);
  outC->_L28.message.l_message = kcg_lit_int32(0);
  outC->_L28.message.t_train = kcg_lit_int32(0);
  outC->_L28.message.field1 = kcg_lit_int32(0);
  outC->_L28.message.field2 = kcg_lit_int32(0);
  outC->_L28.message.field3 = kcg_lit_int32(0);
  outC->_L28.message.field4 = kcg_lit_int32(0);
  outC->_L28.message.field5 = kcg_lit_int32(0);
  outC->_L28.message.field6 = kcg_lit_int32(0);
  outC->_L28.message.field7 = kcg_lit_int32(0);
  outC->_L28.message.field8 = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L28.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L28.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L28.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L28.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L28.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L28.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L28.trigger = kcg_lit_int32(0);
  outC->_L28.message_sent = kcg_true;
  outC->_L27.message.valid = kcg_true;
  outC->_L27.message.nid_message = kcg_lit_int32(0);
  outC->_L27.message.l_message = kcg_lit_int32(0);
  outC->_L27.message.t_train = kcg_lit_int32(0);
  outC->_L27.message.field1 = kcg_lit_int32(0);
  outC->_L27.message.field2 = kcg_lit_int32(0);
  outC->_L27.message.field3 = kcg_lit_int32(0);
  outC->_L27.message.field4 = kcg_lit_int32(0);
  outC->_L27.message.field5 = kcg_lit_int32(0);
  outC->_L27.message.field6 = kcg_lit_int32(0);
  outC->_L27.message.field7 = kcg_lit_int32(0);
  outC->_L27.message.field8 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L27.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L27.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L27.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L27.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L27.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L27.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L27.trigger = kcg_lit_int32(0);
  outC->_L27.message_sent = kcg_true;
  outC->_L26.message.valid = kcg_true;
  outC->_L26.message.nid_message = kcg_lit_int32(0);
  outC->_L26.message.l_message = kcg_lit_int32(0);
  outC->_L26.message.t_train = kcg_lit_int32(0);
  outC->_L26.message.field1 = kcg_lit_int32(0);
  outC->_L26.message.field2 = kcg_lit_int32(0);
  outC->_L26.message.field3 = kcg_lit_int32(0);
  outC->_L26.message.field4 = kcg_lit_int32(0);
  outC->_L26.message.field5 = kcg_lit_int32(0);
  outC->_L26.message.field6 = kcg_lit_int32(0);
  outC->_L26.message.field7 = kcg_lit_int32(0);
  outC->_L26.message.field8 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L26.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L26.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L26.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L26.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L26.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L26.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L26.trigger = kcg_lit_int32(0);
  outC->_L26.message_sent = kcg_true;
  outC->_L25.message.valid = kcg_true;
  outC->_L25.message.nid_message = kcg_lit_int32(0);
  outC->_L25.message.l_message = kcg_lit_int32(0);
  outC->_L25.message.t_train = kcg_lit_int32(0);
  outC->_L25.message.field1 = kcg_lit_int32(0);
  outC->_L25.message.field2 = kcg_lit_int32(0);
  outC->_L25.message.field3 = kcg_lit_int32(0);
  outC->_L25.message.field4 = kcg_lit_int32(0);
  outC->_L25.message.field5 = kcg_lit_int32(0);
  outC->_L25.message.field6 = kcg_lit_int32(0);
  outC->_L25.message.field7 = kcg_lit_int32(0);
  outC->_L25.message.field8 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L25.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L25.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L25.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L25.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L25.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L25.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L25.trigger = kcg_lit_int32(0);
  outC->_L25.message_sent = kcg_true;
  outC->_L24.message.valid = kcg_true;
  outC->_L24.message.nid_message = kcg_lit_int32(0);
  outC->_L24.message.l_message = kcg_lit_int32(0);
  outC->_L24.message.t_train = kcg_lit_int32(0);
  outC->_L24.message.field1 = kcg_lit_int32(0);
  outC->_L24.message.field2 = kcg_lit_int32(0);
  outC->_L24.message.field3 = kcg_lit_int32(0);
  outC->_L24.message.field4 = kcg_lit_int32(0);
  outC->_L24.message.field5 = kcg_lit_int32(0);
  outC->_L24.message.field6 = kcg_lit_int32(0);
  outC->_L24.message.field7 = kcg_lit_int32(0);
  outC->_L24.message.field8 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L24.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L24.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L24.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L24.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L24.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L24.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L24.trigger = kcg_lit_int32(0);
  outC->_L24.message_sent = kcg_true;
  outC->_L23.message.valid = kcg_true;
  outC->_L23.message.nid_message = kcg_lit_int32(0);
  outC->_L23.message.l_message = kcg_lit_int32(0);
  outC->_L23.message.t_train = kcg_lit_int32(0);
  outC->_L23.message.field1 = kcg_lit_int32(0);
  outC->_L23.message.field2 = kcg_lit_int32(0);
  outC->_L23.message.field3 = kcg_lit_int32(0);
  outC->_L23.message.field4 = kcg_lit_int32(0);
  outC->_L23.message.field5 = kcg_lit_int32(0);
  outC->_L23.message.field6 = kcg_lit_int32(0);
  outC->_L23.message.field7 = kcg_lit_int32(0);
  outC->_L23.message.field8 = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L23.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L23.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L23.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L23.packets.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L23.packets.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L23.packets.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L23.trigger = kcg_lit_int32(0);
  outC->_L23.message_sent = kcg_true;
  outC->_L22.message.valid = kcg_true;
  outC->_L22.message.nid_message = kcg_lit_int32(0);
  outC->_L22.message.l_message = kcg_lit_int32(0);
  outC->_L22.message.t_train = kcg_lit_int32(0);
  outC->_L22.message.field1 = kcg_lit_int32(0);
  outC->_L22.message.field2 = kcg_lit_int32(0);
  outC->_L22.message.field3 = kcg_lit_int32(0);
  outC->_L22.message.field4 = kcg_lit_int32(0);
  outC->_L22.message.field5 = kcg_lit_int32(0);
  outC->_L22.message.field6 = kcg_lit_int32(0);
  outC->_L22.message.field7 = kcg_lit_int32(0);
  outC->_L22.message.field8 = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L22.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L22.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L22.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L22.packets.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L22.packets.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L22.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L22.trigger = kcg_lit_int32(0);
  outC->_L22.message_sent = kcg_true;
  outC->_L21.message.valid = kcg_true;
  outC->_L21.message.nid_message = kcg_lit_int32(0);
  outC->_L21.message.l_message = kcg_lit_int32(0);
  outC->_L21.message.t_train = kcg_lit_int32(0);
  outC->_L21.message.field1 = kcg_lit_int32(0);
  outC->_L21.message.field2 = kcg_lit_int32(0);
  outC->_L21.message.field3 = kcg_lit_int32(0);
  outC->_L21.message.field4 = kcg_lit_int32(0);
  outC->_L21.message.field5 = kcg_lit_int32(0);
  outC->_L21.message.field6 = kcg_lit_int32(0);
  outC->_L21.message.field7 = kcg_lit_int32(0);
  outC->_L21.message.field8 = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L21.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int32(0);
    outC->_L21.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L21.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L21.packets.PacketHeaders[idx14].startAddress = kcg_lit_int32(0);
    outC->_L21.packets.PacketHeaders[idx14].endAddress = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L21.packets.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->_L21.trigger = kcg_lit_int32(0);
  outC->_L21.message_sent = kcg_true;
  outC->_L20.message.valid = kcg_true;
  outC->_L20.message.nid_message = kcg_lit_int32(0);
  outC->_L20.message.l_message = kcg_lit_int32(0);
  outC->_L20.message.t_train = kcg_lit_int32(0);
  outC->_L20.message.field1 = kcg_lit_int32(0);
  outC->_L20.message.field2 = kcg_lit_int32(0);
  outC->_L20.message.field3 = kcg_lit_int32(0);
  outC->_L20.message.field4 = kcg_lit_int32(0);
  outC->_L20.message.field5 = kcg_lit_int32(0);
  outC->_L20.message.field6 = kcg_lit_int32(0);
  outC->_L20.message.field7 = kcg_lit_int32(0);
  outC->_L20.message.field8 = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L20.packets.PacketHeaders[idx16].nid_packet = kcg_lit_int32(0);
    outC->_L20.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L20.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L20.packets.PacketHeaders[idx16].startAddress = kcg_lit_int32(0);
    outC->_L20.packets.PacketHeaders[idx16].endAddress = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L20.packets.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->_L20.trigger = kcg_lit_int32(0);
  outC->_L20.message_sent = kcg_true;
  outC->_L19.message.valid = kcg_true;
  outC->_L19.message.nid_message = kcg_lit_int32(0);
  outC->_L19.message.l_message = kcg_lit_int32(0);
  outC->_L19.message.t_train = kcg_lit_int32(0);
  outC->_L19.message.field1 = kcg_lit_int32(0);
  outC->_L19.message.field2 = kcg_lit_int32(0);
  outC->_L19.message.field3 = kcg_lit_int32(0);
  outC->_L19.message.field4 = kcg_lit_int32(0);
  outC->_L19.message.field5 = kcg_lit_int32(0);
  outC->_L19.message.field6 = kcg_lit_int32(0);
  outC->_L19.message.field7 = kcg_lit_int32(0);
  outC->_L19.message.field8 = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L19.packets.PacketHeaders[idx18].nid_packet = kcg_lit_int32(0);
    outC->_L19.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L19.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->_L19.packets.PacketHeaders[idx18].startAddress = kcg_lit_int32(0);
    outC->_L19.packets.PacketHeaders[idx18].endAddress = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L19.packets.PacketData[idx19] = kcg_lit_int32(0);
  }
  outC->_L19.trigger = kcg_lit_int32(0);
  outC->_L19.message_sent = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.nid_message = kcg_lit_int32(0);
  outC->_L8.l_message = kcg_lit_int32(0);
  outC->_L8.t_train = kcg_lit_int32(0);
  outC->_L8.field1 = kcg_lit_int32(0);
  outC->_L8.field2 = kcg_lit_int32(0);
  outC->_L8.field3 = kcg_lit_int32(0);
  outC->_L8.field4 = kcg_lit_int32(0);
  outC->_L8.field5 = kcg_lit_int32(0);
  outC->_L8.field6 = kcg_lit_int32(0);
  outC->_L8.field7 = kcg_lit_int32(0);
  outC->_L8.field8 = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L9.PacketHeaders[idx20].nid_packet = kcg_lit_int32(0);
    outC->_L9.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L9.PacketHeaders[idx20].valid = kcg_true;
    outC->_L9.PacketHeaders[idx20].startAddress = kcg_lit_int32(0);
    outC->_L9.PacketHeaders[idx20].endAddress = kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L9.PacketData[idx21] = kcg_lit_int32(0);
  }
  outC->_L7.message.valid = kcg_true;
  outC->_L7.message.nid_message = kcg_lit_int32(0);
  outC->_L7.message.l_message = kcg_lit_int32(0);
  outC->_L7.message.t_train = kcg_lit_int32(0);
  outC->_L7.message.field1 = kcg_lit_int32(0);
  outC->_L7.message.field2 = kcg_lit_int32(0);
  outC->_L7.message.field3 = kcg_lit_int32(0);
  outC->_L7.message.field4 = kcg_lit_int32(0);
  outC->_L7.message.field5 = kcg_lit_int32(0);
  outC->_L7.message.field6 = kcg_lit_int32(0);
  outC->_L7.message.field7 = kcg_lit_int32(0);
  outC->_L7.message.field8 = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L7.packets.PacketHeaders[idx22].nid_packet = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx22].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx22].startAddress = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx22].endAddress = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L7.packets.PacketData[idx23] = kcg_lit_int32(0);
  }
  outC->_L7.trigger = kcg_lit_int32(0);
  outC->_L7.message_sent = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L4.PacketHeaders[idx24].nid_packet = kcg_lit_int32(0);
    outC->_L4.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L4.PacketHeaders[idx24].valid = kcg_true;
    outC->_L4.PacketHeaders[idx24].startAddress = kcg_lit_int32(0);
    outC->_L4.PacketHeaders[idx24].endAddress = kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L4.PacketData[idx25] = kcg_lit_int32(0);
  }
  outC->_L3.valid = kcg_true;
  outC->_L3.nid_message = kcg_lit_int32(0);
  outC->_L3.l_message = kcg_lit_int32(0);
  outC->_L3.t_train = kcg_lit_int32(0);
  outC->_L3.field1 = kcg_lit_int32(0);
  outC->_L3.field2 = kcg_lit_int32(0);
  outC->_L3.field3 = kcg_lit_int32(0);
  outC->_L3.field4 = kcg_lit_int32(0);
  outC->_L3.field5 = kcg_lit_int32(0);
  outC->_L3.field6 = kcg_lit_int32(0);
  outC->_L3.field7 = kcg_lit_int32(0);
  outC->_L3.field8 = kcg_lit_int32(0);
  outC->_L2.message.valid = kcg_true;
  outC->_L2.message.nid_message = kcg_lit_int32(0);
  outC->_L2.message.l_message = kcg_lit_int32(0);
  outC->_L2.message.t_train = kcg_lit_int32(0);
  outC->_L2.message.field1 = kcg_lit_int32(0);
  outC->_L2.message.field2 = kcg_lit_int32(0);
  outC->_L2.message.field3 = kcg_lit_int32(0);
  outC->_L2.message.field4 = kcg_lit_int32(0);
  outC->_L2.message.field5 = kcg_lit_int32(0);
  outC->_L2.message.field6 = kcg_lit_int32(0);
  outC->_L2.message.field7 = kcg_lit_int32(0);
  outC->_L2.message.field8 = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L2.packets.PacketHeaders[idx26].nid_packet = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx26].startAddress = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx26].endAddress = kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L2.packets.PacketData[idx27] = kcg_lit_int32(0);
  }
  outC->_L2.trigger = kcg_lit_int32(0);
  outC->_L2.message_sent = kcg_true;
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->Packets_out.PacketHeaders[idx28].nid_packet = kcg_lit_int32(0);
    outC->Packets_out.PacketHeaders[idx28].q_dir = Q_DIR_Reverse;
    outC->Packets_out.PacketHeaders[idx28].valid = kcg_true;
    outC->Packets_out.PacketHeaders[idx28].startAddress = kcg_lit_int32(0);
    outC->Packets_out.PacketHeaders[idx28].endAddress = kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->Packets_out.PacketData[idx29] = kcg_lit_int32(0);
  }
  outC->Message_out.valid = kcg_true;
  outC->Message_out.nid_message = kcg_lit_int32(0);
  outC->Message_out.l_message = kcg_lit_int32(0);
  outC->Message_out.t_train = kcg_lit_int32(0);
  outC->Message_out.field1 = kcg_lit_int32(0);
  outC->Message_out.field2 = kcg_lit_int32(0);
  outC->Message_out.field3 = kcg_lit_int32(0);
  outC->Message_out.field4 = kcg_lit_int32(0);
  outC->Message_out.field5 = kcg_lit_int32(0);
  outC->Message_out.field6 = kcg_lit_int32(0);
  outC->Message_out.field7 = kcg_lit_int32(0);
  outC->Message_out.field8 = kcg_lit_int32(0);
  /* _L8=(RadioLib::RBC_close#1)/ */
  RBC_close_init_RadioLib(&outC->Context_RBC_close_1);
  /* _L28=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS#1)/ */
  RBC_Sheet15_MaarssenUtrechtCS_init_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &outC->Context_RBC_Sheet15_MaarssenUtrechtCS_1);
  /* _L27=(AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen#1)/ */
  RBC_Sheet14_Maarssen_init_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->Context_RBC_Sheet14_Maarssen_1);
  /* _L26=(AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC#1)/ */
  Sheet13_Breukelen_Maarssen_RBC_init_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &outC->Context_Sheet13_Breukelen_Maarssen_RBC_1);
  /* _L25=(AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen#1)/ */
  Sheet12_Breukelen_init_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->Context_Sheet12_Breukelen_1);
  /* _L24=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Sheet11_BreukelenKeerspoor#1)/ */
  Sheet11_BreukelenKeerspoor_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Sheet11_BreukelenKeerspoor_1);
  /* _L23=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen#1)/ */
  Sheet09_AbcoudeBreukelen_init_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->Context_Sheet09_AbcoudeBreukelen_1);
  /* _L22=(AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude#1)/ */
  Sheet08B_Abcoude_init_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->Context_Sheet08B_Abcoude_1);
  /* _L21=(AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude#1)/ */
  Sheet08A_Abcoude_init_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
    &outC->Context_Sheet08A_Abcoude_1);
  /* _L20=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude#1)/ */
  Sheet07_BijlmerAbcoude_init_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->Context_Sheet07_BijlmerAbcoude_1);
  /* _L19=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer#1)/ */
  RBC_Sheet06_Bijlmer_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_RBC_Sheet06_Bijlmer_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel#1)/ */
  RBC_Sheet05_Amstel_init_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_RBC_Sheet05_Amstel_1);
  /* _L7=(RadioLib::RBC_init#1)/ */
  RBC_init_init_RadioLib(&outC->Context_RBC_init_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Amsterdam_Utrecht_Lijn1_RBC_reset_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 *outC)
{
  /* _L8=(RadioLib::RBC_close#1)/ */
  RBC_close_reset_RadioLib(&outC->Context_RBC_close_1);
  /* _L28=(AmsterdamUtrechtL2::Sheet15_MaarssenUtrechtCS_RBC::RBC_Sheet15_MaarssenUtrechtCS#1)/ */
  RBC_Sheet15_MaarssenUtrechtCS_reset_AmsterdamUtrechtL2_Sheet15_MaarssenUtrechtCS_RBC(
    &outC->Context_RBC_Sheet15_MaarssenUtrechtCS_1);
  /* _L27=(AmsterdamUtrechtL2::Sheet14_Maarssen_RBC::RBC_Sheet14_Maarssen#1)/ */
  RBC_Sheet14_Maarssen_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_RBC(
    &outC->Context_RBC_Sheet14_Maarssen_1);
  /* _L26=(AmsterdamUtrechtL2::Sheet13_Breukelen_Maarssen_RBC::Sheet13_Breukelen_Maarssen_RBC#1)/ */
  Sheet13_Breukelen_Maarssen_RBC_reset_AmsterdamUtrechtL2_Sheet13_Breukelen_Maarssen_RBC(
    &outC->Context_Sheet13_Breukelen_Maarssen_RBC_1);
  /* _L25=(AmsterdamUtrechtL2::Sheet12_Breukelen_RBC::Sheet12_Breukelen#1)/ */
  Sheet12_Breukelen_reset_AmsterdamUtrechtL2_Sheet12_Breukelen_RBC(
    &outC->Context_Sheet12_Breukelen_1);
  /* _L24=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Sheet11_BreukelenKeerspoor#1)/ */
  Sheet11_BreukelenKeerspoor_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Sheet11_BreukelenKeerspoor_1);
  /* _L23=(AmsterdamUtrechtL2::Sheet09_AbcoudeBreukelen_RBC::Sheet09_AbcoudeBreukelen#1)/ */
  Sheet09_AbcoudeBreukelen_reset_AmsterdamUtrechtL2_Sheet09_AbcoudeBreukelen_RBC(
    &outC->Context_Sheet09_AbcoudeBreukelen_1);
  /* _L22=(AmsterdamUtrechtL2::Sheet08B_Abcoude_RBC::Sheet08B_Abcoude#1)/ */
  Sheet08B_Abcoude_reset_AmsterdamUtrechtL2_Sheet08B_Abcoude_RBC(
    &outC->Context_Sheet08B_Abcoude_1);
  /* _L21=(AmsterdamUtrechtL2::Sheet08A_Abcoude_RBC::Sheet08A_Abcoude#1)/ */
  Sheet08A_Abcoude_reset_AmsterdamUtrechtL2_Sheet08A_Abcoude_RBC(
    &outC->Context_Sheet08A_Abcoude_1);
  /* _L20=(AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::Sheet07_BijlmerAbcoude#1)/ */
  Sheet07_BijlmerAbcoude_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
    &outC->Context_Sheet07_BijlmerAbcoude_1);
  /* _L19=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer#1)/ */
  RBC_Sheet06_Bijlmer_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_RBC_Sheet06_Bijlmer_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel#1)/ */
  RBC_Sheet05_Amstel_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_RBC_Sheet05_Amstel_1);
  /* _L7=(RadioLib::RBC_init#1)/ */
  RBC_init_reset_RadioLib(&outC->Context_RBC_init_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.c
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

