/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_152_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::Build_RBC_Message_LRBG_100_D_00110_0_M024/ */
void _152_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC__152_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC)
{
  outC->_L44 = kcg_true;
  /* _L42=(MessageLibBaseline2::Send_M024_JRU#1)/ */
  Send_M024_JRU_MessageLibBaseline2(
    (M_024_int_T_TM_radio_messages *) &LRBG_100_D_00110_0_M024_Messages_Sim,
    &outC->Context_Send_M024_JRU_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L42,
    &outC->Context_Send_M024_JRU_1.Message_Out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L1, RadiaDataIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L38, &outC->_L1.packets);
  /* _L3=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::SendRadioPackets_LRBG_100_D_00110_0_M024#1)/ */
  SendRadioPackets_LRBG_100_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->_L38,
    &outC->Context_SendRadioPackets_LRBG_100_D_00110_0_M024_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_SendRadioPackets_LRBG_100_D_00110_0_M024_1.Radio_packets_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L39, &outC->_L1);
  if (kcg_true) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L39.packets, &outC->_L3);
  }
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L40, &outC->_L39);
  if (kcg_true) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &outC->_L40.message,
      &outC->_L42);
  }
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L43, &outC->_L40);
  if (kcg_true) {
    outC->_L43.message_sent = outC->_L44;
  }
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L43);
}

#ifndef KCG_USER_DEFINED_INIT
void _152_Build_RBC_Message_LR_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC__152_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC)
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

  outC->_L44 = kcg_true;
  outC->_L43.message.valid = kcg_true;
  outC->_L43.message.nid_message = kcg_lit_int64(0);
  outC->_L43.message.l_message = kcg_lit_int64(0);
  outC->_L43.message.t_train = kcg_lit_int64(0);
  outC->_L43.message.field1 = kcg_lit_int64(0);
  outC->_L43.message.field2 = kcg_lit_int64(0);
  outC->_L43.message.field3 = kcg_lit_int64(0);
  outC->_L43.message.field4 = kcg_lit_int64(0);
  outC->_L43.message.field5 = kcg_lit_int64(0);
  outC->_L43.message.field6 = kcg_lit_int64(0);
  outC->_L43.message.field7 = kcg_lit_int64(0);
  outC->_L43.message.field8 = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L43.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L43.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L43.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L43.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L43.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L43.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L43.trigger = kcg_lit_int64(0);
  outC->_L43.message_sent = kcg_true;
  outC->_L42.valid = kcg_true;
  outC->_L42.nid_message = kcg_lit_int64(0);
  outC->_L42.l_message = kcg_lit_int64(0);
  outC->_L42.t_train = kcg_lit_int64(0);
  outC->_L42.field1 = kcg_lit_int64(0);
  outC->_L42.field2 = kcg_lit_int64(0);
  outC->_L42.field3 = kcg_lit_int64(0);
  outC->_L42.field4 = kcg_lit_int64(0);
  outC->_L42.field5 = kcg_lit_int64(0);
  outC->_L42.field6 = kcg_lit_int64(0);
  outC->_L42.field7 = kcg_lit_int64(0);
  outC->_L42.field8 = kcg_lit_int64(0);
  outC->_L40.message.valid = kcg_true;
  outC->_L40.message.nid_message = kcg_lit_int64(0);
  outC->_L40.message.l_message = kcg_lit_int64(0);
  outC->_L40.message.t_train = kcg_lit_int64(0);
  outC->_L40.message.field1 = kcg_lit_int64(0);
  outC->_L40.message.field2 = kcg_lit_int64(0);
  outC->_L40.message.field3 = kcg_lit_int64(0);
  outC->_L40.message.field4 = kcg_lit_int64(0);
  outC->_L40.message.field5 = kcg_lit_int64(0);
  outC->_L40.message.field6 = kcg_lit_int64(0);
  outC->_L40.message.field7 = kcg_lit_int64(0);
  outC->_L40.message.field8 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L40.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L40.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L40.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L40.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L40.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L40.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L40.trigger = kcg_lit_int64(0);
  outC->_L40.message_sent = kcg_true;
  outC->_L39.message.valid = kcg_true;
  outC->_L39.message.nid_message = kcg_lit_int64(0);
  outC->_L39.message.l_message = kcg_lit_int64(0);
  outC->_L39.message.t_train = kcg_lit_int64(0);
  outC->_L39.message.field1 = kcg_lit_int64(0);
  outC->_L39.message.field2 = kcg_lit_int64(0);
  outC->_L39.message.field3 = kcg_lit_int64(0);
  outC->_L39.message.field4 = kcg_lit_int64(0);
  outC->_L39.message.field5 = kcg_lit_int64(0);
  outC->_L39.message.field6 = kcg_lit_int64(0);
  outC->_L39.message.field7 = kcg_lit_int64(0);
  outC->_L39.message.field8 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L39.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L39.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L39.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L39.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L39.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L39.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L39.trigger = kcg_lit_int64(0);
  outC->_L39.message_sent = kcg_true;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L38.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L38.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L38.PacketHeaders[idx6].valid = kcg_true;
    outC->_L38.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L38.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L38.PacketData[idx7] = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L3.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L3.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx8].valid = kcg_true;
    outC->_L3.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L3.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L3.PacketData[idx9] = kcg_lit_int64(0);
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
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L1.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L1.packets.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->_L1.trigger = kcg_lit_int64(0);
  outC->_L1.message_sent = kcg_true;
  outC->R_data_out.message.valid = kcg_true;
  outC->R_data_out.message.nid_message = kcg_lit_int64(0);
  outC->R_data_out.message.l_message = kcg_lit_int64(0);
  outC->R_data_out.message.t_train = kcg_lit_int64(0);
  outC->R_data_out.message.field1 = kcg_lit_int64(0);
  outC->R_data_out.message.field2 = kcg_lit_int64(0);
  outC->R_data_out.message.field3 = kcg_lit_int64(0);
  outC->R_data_out.message.field4 = kcg_lit_int64(0);
  outC->R_data_out.message.field5 = kcg_lit_int64(0);
  outC->R_data_out.message.field6 = kcg_lit_int64(0);
  outC->R_data_out.message.field7 = kcg_lit_int64(0);
  outC->R_data_out.message.field8 = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->R_data_out.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int64(0);
    outC->R_data_out.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->R_data_out.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->R_data_out.packets.PacketHeaders[idx12].startAddress = kcg_lit_int64(0);
    outC->R_data_out.packets.PacketHeaders[idx12].endAddress = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->R_data_out.packets.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->R_data_out.trigger = kcg_lit_int64(0);
  outC->R_data_out.message_sent = kcg_true;
  /* _L3=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::SendRadioPackets_LRBG_100_D_00110_0_M024#1)/ */
  SendRadioPackets_LRBG_100_init_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_SendRadioPackets_LRBG_100_D_00110_0_M024_1);
  /* _L42=(MessageLibBaseline2::Send_M024_JRU#1)/ */
  Send_M024_JRU_init_MessageLibBaseline2(&outC->Context_Send_M024_JRU_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _152_Build_RBC_Message_LR_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
  outC__152_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone *outC)
{
  /* _L3=(AmsterdamUtrechtL2::Sheet14_Maarssen_Standalone::SendRadioPackets_LRBG_100_D_00110_0_M024#1)/ */
  SendRadioPackets_LRBG_100_reset_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone(
    &outC->Context_SendRadioPackets_LRBG_100_D_00110_0_M024_1);
  /* _L42=(MessageLibBaseline2::Send_M024_JRU#1)/ */
  Send_M024_JRU_reset_MessageLibBaseline2(&outC->Context_Send_M024_JRU_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _152_Build_RBC_Message_LR_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.c
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

