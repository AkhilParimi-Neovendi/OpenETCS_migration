/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16.h"

/* UserStories13_16::Amsterdam_Utrecht_Lijn1_RBC_non_nominal/ */
void Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16(
  /* Message_in/ */
  M_TrackTrain_Radio_T_TM_radio_messages *Message_in,
  /* Packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Packets_in,
  /* Trigger_in/ */
  kcg_int32 Trigger_in,
  /* Message_sent/ */
  kcg_bool Message_sent,
  outC_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16 *outC)
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
  /* _L1=(UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13#1)/ */
  RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13(
    &outC->_L2,
    &outC->Context_RBC_Sheet06_Bijlmer_US13_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L1,
    &outC->Context_RBC_Sheet06_Bijlmer_US13_1.R_data_out);
  /* _L8=(RadioLib::RBC_close#1)/ */
  RBC_close_RadioLib(&outC->_L1, &outC->Context_RBC_close_1);
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
void Amsterdam_Utrecht_Lijn1_RBC_non_nominal_init_UserStories13_16(
  outC_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16 *outC)
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
  for (idx = 0; idx < 30; idx++) {
    outC->_L9.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L9.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L9.PacketHeaders[idx].valid = kcg_true;
    outC->_L9.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L9.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L9.PacketData[idx1] = kcg_lit_int32(0);
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
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L7.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L7.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L7.trigger = kcg_lit_int32(0);
  outC->_L7.message_sent = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L4.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L4.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L4.PacketHeaders[idx4].valid = kcg_true;
    outC->_L4.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L4.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L4.PacketData[idx5] = kcg_lit_int32(0);
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
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L2.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L2.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L2.trigger = kcg_lit_int32(0);
  outC->_L2.message_sent = kcg_true;
  outC->_L1.message.valid = kcg_true;
  outC->_L1.message.nid_message = kcg_lit_int32(0);
  outC->_L1.message.l_message = kcg_lit_int32(0);
  outC->_L1.message.t_train = kcg_lit_int32(0);
  outC->_L1.message.field1 = kcg_lit_int32(0);
  outC->_L1.message.field2 = kcg_lit_int32(0);
  outC->_L1.message.field3 = kcg_lit_int32(0);
  outC->_L1.message.field4 = kcg_lit_int32(0);
  outC->_L1.message.field5 = kcg_lit_int32(0);
  outC->_L1.message.field6 = kcg_lit_int32(0);
  outC->_L1.message.field7 = kcg_lit_int32(0);
  outC->_L1.message.field8 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L1.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L1.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L1.trigger = kcg_lit_int32(0);
  outC->_L1.message_sent = kcg_true;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->Packets_out.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->Packets_out.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->Packets_out.PacketHeaders[idx10].valid = kcg_true;
    outC->Packets_out.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->Packets_out.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->Packets_out.PacketData[idx11] = kcg_lit_int32(0);
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
  /* _L1=(UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13#1)/ */
  RBC_Sheet06_Bijlmer_US13_init_UserStories13_16_US_13(
    &outC->Context_RBC_Sheet06_Bijlmer_US13_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel#1)/ */
  RBC_Sheet05_Amstel_init_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_RBC_Sheet05_Amstel_1);
  /* _L7=(RadioLib::RBC_init#1)/ */
  RBC_init_init_RadioLib(&outC->Context_RBC_init_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Amsterdam_Utrecht_Lijn1_RBC_non_nominal_reset_UserStories13_16(
  outC_Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16 *outC)
{
  /* _L8=(RadioLib::RBC_close#1)/ */
  RBC_close_reset_RadioLib(&outC->Context_RBC_close_1);
  /* _L1=(UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13#1)/ */
  RBC_Sheet06_Bijlmer_US13_reset_UserStories13_16_US_13(
    &outC->Context_RBC_Sheet06_Bijlmer_US13_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel#1)/ */
  RBC_Sheet05_Amstel_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_RBC_Sheet05_Amstel_1);
  /* _L7=(RadioLib::RBC_init#1)/ */
  RBC_init_reset_RadioLib(&outC->Context_RBC_init_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

