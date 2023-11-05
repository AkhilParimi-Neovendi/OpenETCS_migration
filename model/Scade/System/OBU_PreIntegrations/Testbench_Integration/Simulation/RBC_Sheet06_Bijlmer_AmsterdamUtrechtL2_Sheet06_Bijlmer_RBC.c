/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer/ */
void RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* _L1=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003#1)/ */
  Send_RBC_LRBG_354_D_00275_3_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L13,
    kcg_lit_int32(354002753),
    &outC->Context_Send_RBC_LRBG_354_D_00275_3_M003_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L1,
    &outC->Context_Send_RBC_LRBG_354_D_00275_3_M003_1.R_data_out);
  /* _L2=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003#1)/ */
  Send_RBC_LRBG_351_D_00054_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L1,
    kcg_lit_int32(351000549),
    &outC->Context_Send_RBC_LRBG_351_D_00054_9_M003_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->Context_Send_RBC_LRBG_351_D_00054_9_M003_1.R_data_out);
  /* _L3=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_355_D_00089_4_M015#1)/ */
  Send_RBC_LRBG_355_D_00089_4_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L2,
    kcg_lit_int32(355000894),
    &outC->Context_Send_RBC_LRBG_355_D_00089_4_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->Context_Send_RBC_LRBG_355_D_00089_4_M015_1.R_data_out);
  /* _L4=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_356_D_00048_5_M015#1)/ */
  Send_RBC_LRBG_356_D_00048_5_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L3,
    kcg_lit_int32(356000485),
    &outC->Context_Send_RBC_LRBG_356_D_00048_5_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L4,
    &outC->Context_Send_RBC_LRBG_356_D_00048_5_M015_1.R_data_out);
  /* _L5=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_358_D_00123_1_M015#1)/ */
  Send_RBC_LRBG_358_D_00123_1_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L4,
    kcg_lit_int32(358001231),
    &outC->Context_Send_RBC_LRBG_358_D_00123_1_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L5,
    &outC->Context_Send_RBC_LRBG_358_D_00123_1_M015_1.R_data_out);
  /* _L6=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_360_D_00249_2_M015#1)/ */
  Send_RBC_LRBG_360_D_00249_2_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L5,
    kcg_lit_int32(360002492),
    &outC->Context_Send_RBC_LRBG_360_D_00249_2_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L6,
    &outC->Context_Send_RBC_LRBG_360_D_00249_2_M015_1.R_data_out);
  /* _L7=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00124_9_M015#1)/ */
  Send_RBC_LRBG_362_D_00124_9_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L6,
    kcg_lit_int32(362001249),
    &outC->Context_Send_RBC_LRBG_362_D_00124_9_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L7,
    &outC->Context_Send_RBC_LRBG_362_D_00124_9_M015_1.R_data_out);
  /* _L8=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00230_6_M003#1)/ */
  Send_RBC_LRBG_362_D_00230_6_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L7,
    kcg_lit_int32(362002306),
    &outC->Context_Send_RBC_LRBG_362_D_00230_6_M003_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L8,
    &outC->Context_Send_RBC_LRBG_362_D_00230_6_M003_1.R_data_out);
  /* _L9=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003#1)/ */
  Send_RBC_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L8,
    kcg_lit_int32(362002389),
    &outC->Context_Send_RBC_LRBG_362_D_00238_9_M003_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L9,
    &outC->Context_Send_RBC_LRBG_362_D_00238_9_M003_1.R_data_out);
  /* _L10=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003#1)/ */
  Send_RBC_LRBG_364_D_00091_1_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L9,
    kcg_lit_int32(364000911),
    &outC->Context_Send_RBC_LRBG_364_D_00091_1_M003_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L10,
    &outC->Context_Send_RBC_LRBG_364_D_00091_1_M003_1.R_data_out);
  /* _L11=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_369_D_00231_3_M015#1)/ */
  Send_RBC_LRBG_369_D_00231_3_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L10,
    kcg_lit_int32(369002313),
    &outC->Context_Send_RBC_LRBG_369_D_00231_3_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L11,
    &outC->Context_Send_RBC_LRBG_369_D_00231_3_M015_1.R_data_out);
  /* _L12=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_341_D_00134_4_M015#1)/ */
  Send_RBC_LRBG_341_D_00134_4_M015_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->_L11,
    kcg_lit_int32(341001344),
    &outC->Context_Send_RBC_LRBG_341_D_00134_4_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L12,
    &outC->Context_Send_RBC_LRBG_341_D_00134_4_M015_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void RBC_Sheet06_Bijlmer_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
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

  outC->_L13.message.valid = kcg_true;
  outC->_L13.message.nid_message = kcg_lit_int32(0);
  outC->_L13.message.l_message = kcg_lit_int32(0);
  outC->_L13.message.t_train = kcg_lit_int32(0);
  outC->_L13.message.field1 = kcg_lit_int32(0);
  outC->_L13.message.field2 = kcg_lit_int32(0);
  outC->_L13.message.field3 = kcg_lit_int32(0);
  outC->_L13.message.field4 = kcg_lit_int32(0);
  outC->_L13.message.field5 = kcg_lit_int32(0);
  outC->_L13.message.field6 = kcg_lit_int32(0);
  outC->_L13.message.field7 = kcg_lit_int32(0);
  outC->_L13.message.field8 = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L13.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L13.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L13.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L13.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L13.trigger = kcg_lit_int32(0);
  outC->_L13.message_sent = kcg_true;
  outC->_L12.message.valid = kcg_true;
  outC->_L12.message.nid_message = kcg_lit_int32(0);
  outC->_L12.message.l_message = kcg_lit_int32(0);
  outC->_L12.message.t_train = kcg_lit_int32(0);
  outC->_L12.message.field1 = kcg_lit_int32(0);
  outC->_L12.message.field2 = kcg_lit_int32(0);
  outC->_L12.message.field3 = kcg_lit_int32(0);
  outC->_L12.message.field4 = kcg_lit_int32(0);
  outC->_L12.message.field5 = kcg_lit_int32(0);
  outC->_L12.message.field6 = kcg_lit_int32(0);
  outC->_L12.message.field7 = kcg_lit_int32(0);
  outC->_L12.message.field8 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L12.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L12.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L12.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L12.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L12.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L12.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L12.trigger = kcg_lit_int32(0);
  outC->_L12.message_sent = kcg_true;
  outC->_L11.message.valid = kcg_true;
  outC->_L11.message.nid_message = kcg_lit_int32(0);
  outC->_L11.message.l_message = kcg_lit_int32(0);
  outC->_L11.message.t_train = kcg_lit_int32(0);
  outC->_L11.message.field1 = kcg_lit_int32(0);
  outC->_L11.message.field2 = kcg_lit_int32(0);
  outC->_L11.message.field3 = kcg_lit_int32(0);
  outC->_L11.message.field4 = kcg_lit_int32(0);
  outC->_L11.message.field5 = kcg_lit_int32(0);
  outC->_L11.message.field6 = kcg_lit_int32(0);
  outC->_L11.message.field7 = kcg_lit_int32(0);
  outC->_L11.message.field8 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L11.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L11.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L11.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L11.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L11.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L11.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L11.trigger = kcg_lit_int32(0);
  outC->_L11.message_sent = kcg_true;
  outC->_L10.message.valid = kcg_true;
  outC->_L10.message.nid_message = kcg_lit_int32(0);
  outC->_L10.message.l_message = kcg_lit_int32(0);
  outC->_L10.message.t_train = kcg_lit_int32(0);
  outC->_L10.message.field1 = kcg_lit_int32(0);
  outC->_L10.message.field2 = kcg_lit_int32(0);
  outC->_L10.message.field3 = kcg_lit_int32(0);
  outC->_L10.message.field4 = kcg_lit_int32(0);
  outC->_L10.message.field5 = kcg_lit_int32(0);
  outC->_L10.message.field6 = kcg_lit_int32(0);
  outC->_L10.message.field7 = kcg_lit_int32(0);
  outC->_L10.message.field8 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L10.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L10.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L10.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L10.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L10.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L10.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L10.trigger = kcg_lit_int32(0);
  outC->_L10.message_sent = kcg_true;
  outC->_L9.message.valid = kcg_true;
  outC->_L9.message.nid_message = kcg_lit_int32(0);
  outC->_L9.message.l_message = kcg_lit_int32(0);
  outC->_L9.message.t_train = kcg_lit_int32(0);
  outC->_L9.message.field1 = kcg_lit_int32(0);
  outC->_L9.message.field2 = kcg_lit_int32(0);
  outC->_L9.message.field3 = kcg_lit_int32(0);
  outC->_L9.message.field4 = kcg_lit_int32(0);
  outC->_L9.message.field5 = kcg_lit_int32(0);
  outC->_L9.message.field6 = kcg_lit_int32(0);
  outC->_L9.message.field7 = kcg_lit_int32(0);
  outC->_L9.message.field8 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L9.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L9.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L9.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L9.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L9.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L9.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L9.trigger = kcg_lit_int32(0);
  outC->_L9.message_sent = kcg_true;
  outC->_L8.message.valid = kcg_true;
  outC->_L8.message.nid_message = kcg_lit_int32(0);
  outC->_L8.message.l_message = kcg_lit_int32(0);
  outC->_L8.message.t_train = kcg_lit_int32(0);
  outC->_L8.message.field1 = kcg_lit_int32(0);
  outC->_L8.message.field2 = kcg_lit_int32(0);
  outC->_L8.message.field3 = kcg_lit_int32(0);
  outC->_L8.message.field4 = kcg_lit_int32(0);
  outC->_L8.message.field5 = kcg_lit_int32(0);
  outC->_L8.message.field6 = kcg_lit_int32(0);
  outC->_L8.message.field7 = kcg_lit_int32(0);
  outC->_L8.message.field8 = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L8.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L8.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L8.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L8.packets.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L8.packets.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L8.packets.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L8.trigger = kcg_lit_int32(0);
  outC->_L8.message_sent = kcg_true;
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
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L7.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L7.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L7.trigger = kcg_lit_int32(0);
  outC->_L7.message_sent = kcg_true;
  outC->_L6.message.valid = kcg_true;
  outC->_L6.message.nid_message = kcg_lit_int32(0);
  outC->_L6.message.l_message = kcg_lit_int32(0);
  outC->_L6.message.t_train = kcg_lit_int32(0);
  outC->_L6.message.field1 = kcg_lit_int32(0);
  outC->_L6.message.field2 = kcg_lit_int32(0);
  outC->_L6.message.field3 = kcg_lit_int32(0);
  outC->_L6.message.field4 = kcg_lit_int32(0);
  outC->_L6.message.field5 = kcg_lit_int32(0);
  outC->_L6.message.field6 = kcg_lit_int32(0);
  outC->_L6.message.field7 = kcg_lit_int32(0);
  outC->_L6.message.field8 = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L6.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L6.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L6.packets.PacketHeaders[idx14].startAddress = kcg_lit_int32(0);
    outC->_L6.packets.PacketHeaders[idx14].endAddress = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L6.packets.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->_L6.trigger = kcg_lit_int32(0);
  outC->_L6.message_sent = kcg_true;
  outC->_L5.message.valid = kcg_true;
  outC->_L5.message.nid_message = kcg_lit_int32(0);
  outC->_L5.message.l_message = kcg_lit_int32(0);
  outC->_L5.message.t_train = kcg_lit_int32(0);
  outC->_L5.message.field1 = kcg_lit_int32(0);
  outC->_L5.message.field2 = kcg_lit_int32(0);
  outC->_L5.message.field3 = kcg_lit_int32(0);
  outC->_L5.message.field4 = kcg_lit_int32(0);
  outC->_L5.message.field5 = kcg_lit_int32(0);
  outC->_L5.message.field6 = kcg_lit_int32(0);
  outC->_L5.message.field7 = kcg_lit_int32(0);
  outC->_L5.message.field8 = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L5.packets.PacketHeaders[idx16].nid_packet = kcg_lit_int32(0);
    outC->_L5.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L5.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L5.packets.PacketHeaders[idx16].startAddress = kcg_lit_int32(0);
    outC->_L5.packets.PacketHeaders[idx16].endAddress = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L5.packets.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->_L5.trigger = kcg_lit_int32(0);
  outC->_L5.message_sent = kcg_true;
  outC->_L4.message.valid = kcg_true;
  outC->_L4.message.nid_message = kcg_lit_int32(0);
  outC->_L4.message.l_message = kcg_lit_int32(0);
  outC->_L4.message.t_train = kcg_lit_int32(0);
  outC->_L4.message.field1 = kcg_lit_int32(0);
  outC->_L4.message.field2 = kcg_lit_int32(0);
  outC->_L4.message.field3 = kcg_lit_int32(0);
  outC->_L4.message.field4 = kcg_lit_int32(0);
  outC->_L4.message.field5 = kcg_lit_int32(0);
  outC->_L4.message.field6 = kcg_lit_int32(0);
  outC->_L4.message.field7 = kcg_lit_int32(0);
  outC->_L4.message.field8 = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L4.packets.PacketHeaders[idx18].nid_packet = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx18].startAddress = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx18].endAddress = kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L4.packets.PacketData[idx19] = kcg_lit_int32(0);
  }
  outC->_L4.trigger = kcg_lit_int32(0);
  outC->_L4.message_sent = kcg_true;
  outC->_L3.message.valid = kcg_true;
  outC->_L3.message.nid_message = kcg_lit_int32(0);
  outC->_L3.message.l_message = kcg_lit_int32(0);
  outC->_L3.message.t_train = kcg_lit_int32(0);
  outC->_L3.message.field1 = kcg_lit_int32(0);
  outC->_L3.message.field2 = kcg_lit_int32(0);
  outC->_L3.message.field3 = kcg_lit_int32(0);
  outC->_L3.message.field4 = kcg_lit_int32(0);
  outC->_L3.message.field5 = kcg_lit_int32(0);
  outC->_L3.message.field6 = kcg_lit_int32(0);
  outC->_L3.message.field7 = kcg_lit_int32(0);
  outC->_L3.message.field8 = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L3.packets.PacketHeaders[idx20].nid_packet = kcg_lit_int32(0);
    outC->_L3.packets.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L3.packets.PacketHeaders[idx20].valid = kcg_true;
    outC->_L3.packets.PacketHeaders[idx20].startAddress = kcg_lit_int32(0);
    outC->_L3.packets.PacketHeaders[idx20].endAddress = kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L3.packets.PacketData[idx21] = kcg_lit_int32(0);
  }
  outC->_L3.trigger = kcg_lit_int32(0);
  outC->_L3.message_sent = kcg_true;
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
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L2.packets.PacketHeaders[idx22].nid_packet = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx22].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx22].startAddress = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx22].endAddress = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L2.packets.PacketData[idx23] = kcg_lit_int32(0);
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
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L1.packets.PacketHeaders[idx24].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx24].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx24].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx24].endAddress = kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L1.packets.PacketData[idx25] = kcg_lit_int32(0);
  }
  outC->_L1.trigger = kcg_lit_int32(0);
  outC->_L1.message_sent = kcg_true;
  outC->R_data_out.message.valid = kcg_true;
  outC->R_data_out.message.nid_message = kcg_lit_int32(0);
  outC->R_data_out.message.l_message = kcg_lit_int32(0);
  outC->R_data_out.message.t_train = kcg_lit_int32(0);
  outC->R_data_out.message.field1 = kcg_lit_int32(0);
  outC->R_data_out.message.field2 = kcg_lit_int32(0);
  outC->R_data_out.message.field3 = kcg_lit_int32(0);
  outC->R_data_out.message.field4 = kcg_lit_int32(0);
  outC->R_data_out.message.field5 = kcg_lit_int32(0);
  outC->R_data_out.message.field6 = kcg_lit_int32(0);
  outC->R_data_out.message.field7 = kcg_lit_int32(0);
  outC->R_data_out.message.field8 = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->R_data_out.packets.PacketHeaders[idx26].nid_packet = kcg_lit_int32(0);
    outC->R_data_out.packets.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->R_data_out.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->R_data_out.packets.PacketHeaders[idx26].startAddress = kcg_lit_int32(0);
    outC->R_data_out.packets.PacketHeaders[idx26].endAddress = kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->R_data_out.packets.PacketData[idx27] = kcg_lit_int32(0);
  }
  outC->R_data_out.trigger = kcg_lit_int32(0);
  outC->R_data_out.message_sent = kcg_true;
  /* _L12=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_341_D_00134_4_M015#1)/ */
  Send_RBC_LRBG_341_D_00134_4_M015_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_341_D_00134_4_M015_1);
  /* _L11=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_369_D_00231_3_M015#1)/ */
  Send_RBC_LRBG_369_D_00231_3_M015_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_369_D_00231_3_M015_1);
  /* _L10=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003#1)/ */
  Send_RBC_LRBG_364_D_00091_1_M003_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_364_D_00091_1_M003_1);
  /* _L9=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003#1)/ */
  Send_RBC_LRBG_362_D_00238_9_M003_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_362_D_00238_9_M003_1);
  /* _L8=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00230_6_M003#1)/ */
  Send_RBC_LRBG_362_D_00230_6_M003_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_362_D_00230_6_M003_1);
  /* _L7=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00124_9_M015#1)/ */
  Send_RBC_LRBG_362_D_00124_9_M015_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_362_D_00124_9_M015_1);
  /* _L6=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_360_D_00249_2_M015#1)/ */
  Send_RBC_LRBG_360_D_00249_2_M015_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_360_D_00249_2_M015_1);
  /* _L5=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_358_D_00123_1_M015#1)/ */
  Send_RBC_LRBG_358_D_00123_1_M015_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_358_D_00123_1_M015_1);
  /* _L4=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_356_D_00048_5_M015#1)/ */
  Send_RBC_LRBG_356_D_00048_5_M015_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_356_D_00048_5_M015_1);
  /* _L3=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_355_D_00089_4_M015#1)/ */
  Send_RBC_LRBG_355_D_00089_4_M015_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_355_D_00089_4_M015_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003#1)/ */
  Send_RBC_LRBG_351_D_00054_9_M003_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_351_D_00054_9_M003_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003#1)/ */
  Send_RBC_LRBG_354_D_00275_3_M003_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_354_D_00275_3_M003_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC_Sheet06_Bijlmer_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  /* _L12=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_341_D_00134_4_M015#1)/ */
  Send_RBC_LRBG_341_D_00134_4_M015_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_341_D_00134_4_M015_1);
  /* _L11=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_369_D_00231_3_M015#1)/ */
  Send_RBC_LRBG_369_D_00231_3_M015_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_369_D_00231_3_M015_1);
  /* _L10=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003#1)/ */
  Send_RBC_LRBG_364_D_00091_1_M003_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_364_D_00091_1_M003_1);
  /* _L9=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003#1)/ */
  Send_RBC_LRBG_362_D_00238_9_M003_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_362_D_00238_9_M003_1);
  /* _L8=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00230_6_M003#1)/ */
  Send_RBC_LRBG_362_D_00230_6_M003_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_362_D_00230_6_M003_1);
  /* _L7=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00124_9_M015#1)/ */
  Send_RBC_LRBG_362_D_00124_9_M015_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_362_D_00124_9_M015_1);
  /* _L6=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_360_D_00249_2_M015#1)/ */
  Send_RBC_LRBG_360_D_00249_2_M015_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_360_D_00249_2_M015_1);
  /* _L5=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_358_D_00123_1_M015#1)/ */
  Send_RBC_LRBG_358_D_00123_1_M015_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_358_D_00123_1_M015_1);
  /* _L4=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_356_D_00048_5_M015#1)/ */
  Send_RBC_LRBG_356_D_00048_5_M015_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_356_D_00048_5_M015_1);
  /* _L3=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_355_D_00089_4_M015#1)/ */
  Send_RBC_LRBG_355_D_00089_4_M015_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_355_D_00089_4_M015_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003#1)/ */
  Send_RBC_LRBG_351_D_00054_9_M003_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_351_D_00054_9_M003_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003#1)/ */
  Send_RBC_LRBG_354_D_00275_3_M003_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
    &outC->Context_Send_RBC_LRBG_354_D_00275_3_M003_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

