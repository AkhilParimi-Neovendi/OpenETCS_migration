/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.h"

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Sheet11_BreukelenKeerspoor/ */
void Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* _L1=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_397_D_00169_2_M015#1)/ */
  Send_RBC_LRBG_397_D_00169_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L13,
    kcg_lit_int64(397001692),
    &outC->Context_Send_RBC_LRBG_397_D_00169_2_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L1,
    &outC->Context_Send_RBC_LRBG_397_D_00169_2_M015_1.R_data_out);
  /* _L2=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_397_D_00382_0_M003#1)/ */
  Send_RBC_LRBG_397_D_00382_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L1,
    kcg_lit_int64(397003820),
    &outC->Context_Send_RBC_LRBG_397_D_00382_0_M003_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->Context_Send_RBC_LRBG_397_D_00382_0_M003_1.R_data_out);
  /* _L3=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_400_D_00106_0_M015#1)/ */
  Send_RBC_LRBG_400_D_00106_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L2,
    kcg_lit_int64(400001060),
    &outC->Context_Send_RBC_LRBG_400_D_00106_0_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->Context_Send_RBC_LRBG_400_D_00106_0_M015_1.R_data_out);
  /* _L4=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_400_D_00371_2_M003#1)/ */
  Send_RBC_LRBG_400_D_00371_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L3,
    kcg_lit_int64(400003712),
    &outC->Context_Send_RBC_LRBG_400_D_00371_2_M003_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L4,
    &outC->Context_Send_RBC_LRBG_400_D_00371_2_M003_1.R_data_out);
  /* _L5=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_401_D_00182_7_M015#1)/ */
  Send_RBC_LRBG_401_D_00182_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L4,
    kcg_lit_int64(401001827),
    &outC->Context_Send_RBC_LRBG_401_D_00182_7_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L5,
    &outC->Context_Send_RBC_LRBG_401_D_00182_7_M015_1.R_data_out);
  /* _L6=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_402_D_00063_3_M015#1)/ */
  Send_RBC_LRBG_402_D_00063_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L5,
    kcg_lit_int64(402000633),
    &outC->Context_Send_RBC_LRBG_402_D_00063_3_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L6,
    &outC->Context_Send_RBC_LRBG_402_D_00063_3_M015_1.R_data_out);
  /* _L7=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_404_D_00184_3_M015#1)/ */
  Send_RBC_LRBG_404_D_00184_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L6,
    kcg_lit_int64(404001844),
    &outC->Context_Send_RBC_LRBG_404_D_00184_3_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L7,
    &outC->Context_Send_RBC_LRBG_404_D_00184_3_M015_1.R_data_out);
  /* _L8=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_405_D_00042_2_M015#1)/ */
  Send_RBC_LRBG_405_D_00042_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L7,
    kcg_lit_int64(405000422),
    &outC->Context_Send_RBC_LRBG_405_D_00042_2_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L8,
    &outC->Context_Send_RBC_LRBG_405_D_00042_2_M015_1.R_data_out);
  /* _L9=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_407_D_00167_3_M015#1)/ */
  Send_RBC_LRBG_407_D_00167_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L8,
    kcg_lit_int64(407001673),
    &outC->Context_Send_RBC_LRBG_407_D_00167_3_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L9,
    &outC->Context_Send_RBC_LRBG_407_D_00167_3_M015_1.R_data_out);
  /* _L10=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_408_D_00050_9_M015#1)/ */
  Send_RBC_LRBG_408_D_00050_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->_L9,
    kcg_lit_int64(408000509),
    &outC->Context_Send_RBC_LRBG_408_D_00050_9_M015_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L10,
    &outC->Context_Send_RBC_LRBG_408_D_00050_9_M015_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void Sheet11_BreukelenKeerspoor_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  outC_Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC)
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

  outC->_L13.message.valid = kcg_true;
  outC->_L13.message.nid_message = kcg_lit_int64(0);
  outC->_L13.message.l_message = kcg_lit_int64(0);
  outC->_L13.message.t_train = kcg_lit_int64(0);
  outC->_L13.message.field1 = kcg_lit_int64(0);
  outC->_L13.message.field2 = kcg_lit_int64(0);
  outC->_L13.message.field3 = kcg_lit_int64(0);
  outC->_L13.message.field4 = kcg_lit_int64(0);
  outC->_L13.message.field5 = kcg_lit_int64(0);
  outC->_L13.message.field6 = kcg_lit_int64(0);
  outC->_L13.message.field7 = kcg_lit_int64(0);
  outC->_L13.message.field8 = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L13.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L13.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L13.trigger = kcg_lit_int64(0);
  outC->_L13.message_sent = kcg_true;
  outC->_L10.message.valid = kcg_true;
  outC->_L10.message.nid_message = kcg_lit_int64(0);
  outC->_L10.message.l_message = kcg_lit_int64(0);
  outC->_L10.message.t_train = kcg_lit_int64(0);
  outC->_L10.message.field1 = kcg_lit_int64(0);
  outC->_L10.message.field2 = kcg_lit_int64(0);
  outC->_L10.message.field3 = kcg_lit_int64(0);
  outC->_L10.message.field4 = kcg_lit_int64(0);
  outC->_L10.message.field5 = kcg_lit_int64(0);
  outC->_L10.message.field6 = kcg_lit_int64(0);
  outC->_L10.message.field7 = kcg_lit_int64(0);
  outC->_L10.message.field8 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L10.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L10.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L10.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L10.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L10.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L10.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L10.trigger = kcg_lit_int64(0);
  outC->_L10.message_sent = kcg_true;
  outC->_L9.message.valid = kcg_true;
  outC->_L9.message.nid_message = kcg_lit_int64(0);
  outC->_L9.message.l_message = kcg_lit_int64(0);
  outC->_L9.message.t_train = kcg_lit_int64(0);
  outC->_L9.message.field1 = kcg_lit_int64(0);
  outC->_L9.message.field2 = kcg_lit_int64(0);
  outC->_L9.message.field3 = kcg_lit_int64(0);
  outC->_L9.message.field4 = kcg_lit_int64(0);
  outC->_L9.message.field5 = kcg_lit_int64(0);
  outC->_L9.message.field6 = kcg_lit_int64(0);
  outC->_L9.message.field7 = kcg_lit_int64(0);
  outC->_L9.message.field8 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L9.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L9.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L9.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L9.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L9.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L9.packets.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->_L9.trigger = kcg_lit_int64(0);
  outC->_L9.message_sent = kcg_true;
  outC->_L8.message.valid = kcg_true;
  outC->_L8.message.nid_message = kcg_lit_int64(0);
  outC->_L8.message.l_message = kcg_lit_int64(0);
  outC->_L8.message.t_train = kcg_lit_int64(0);
  outC->_L8.message.field1 = kcg_lit_int64(0);
  outC->_L8.message.field2 = kcg_lit_int64(0);
  outC->_L8.message.field3 = kcg_lit_int64(0);
  outC->_L8.message.field4 = kcg_lit_int64(0);
  outC->_L8.message.field5 = kcg_lit_int64(0);
  outC->_L8.message.field6 = kcg_lit_int64(0);
  outC->_L8.message.field7 = kcg_lit_int64(0);
  outC->_L8.message.field8 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L8.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L8.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L8.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L8.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L8.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L8.packets.PacketData[idx7] = kcg_lit_int64(0);
  }
  outC->_L8.trigger = kcg_lit_int64(0);
  outC->_L8.message_sent = kcg_true;
  outC->_L7.message.valid = kcg_true;
  outC->_L7.message.nid_message = kcg_lit_int64(0);
  outC->_L7.message.l_message = kcg_lit_int64(0);
  outC->_L7.message.t_train = kcg_lit_int64(0);
  outC->_L7.message.field1 = kcg_lit_int64(0);
  outC->_L7.message.field2 = kcg_lit_int64(0);
  outC->_L7.message.field3 = kcg_lit_int64(0);
  outC->_L7.message.field4 = kcg_lit_int64(0);
  outC->_L7.message.field5 = kcg_lit_int64(0);
  outC->_L7.message.field6 = kcg_lit_int64(0);
  outC->_L7.message.field7 = kcg_lit_int64(0);
  outC->_L7.message.field8 = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L7.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L7.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L7.packets.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L7.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L7.trigger = kcg_lit_int64(0);
  outC->_L7.message_sent = kcg_true;
  outC->_L6.message.valid = kcg_true;
  outC->_L6.message.nid_message = kcg_lit_int64(0);
  outC->_L6.message.l_message = kcg_lit_int64(0);
  outC->_L6.message.t_train = kcg_lit_int64(0);
  outC->_L6.message.field1 = kcg_lit_int64(0);
  outC->_L6.message.field2 = kcg_lit_int64(0);
  outC->_L6.message.field3 = kcg_lit_int64(0);
  outC->_L6.message.field4 = kcg_lit_int64(0);
  outC->_L6.message.field5 = kcg_lit_int64(0);
  outC->_L6.message.field6 = kcg_lit_int64(0);
  outC->_L6.message.field7 = kcg_lit_int64(0);
  outC->_L6.message.field8 = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L6.packets.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->_L6.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L6.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L6.packets.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->_L6.packets.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L6.packets.PacketData[idx11] = kcg_lit_int64(0);
  }
  outC->_L6.trigger = kcg_lit_int64(0);
  outC->_L6.message_sent = kcg_true;
  outC->_L5.message.valid = kcg_true;
  outC->_L5.message.nid_message = kcg_lit_int64(0);
  outC->_L5.message.l_message = kcg_lit_int64(0);
  outC->_L5.message.t_train = kcg_lit_int64(0);
  outC->_L5.message.field1 = kcg_lit_int64(0);
  outC->_L5.message.field2 = kcg_lit_int64(0);
  outC->_L5.message.field3 = kcg_lit_int64(0);
  outC->_L5.message.field4 = kcg_lit_int64(0);
  outC->_L5.message.field5 = kcg_lit_int64(0);
  outC->_L5.message.field6 = kcg_lit_int64(0);
  outC->_L5.message.field7 = kcg_lit_int64(0);
  outC->_L5.message.field8 = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L5.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int64(0);
    outC->_L5.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L5.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L5.packets.PacketHeaders[idx12].startAddress = kcg_lit_int64(0);
    outC->_L5.packets.PacketHeaders[idx12].endAddress = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L5.packets.PacketData[idx13] = kcg_lit_int64(0);
  }
  outC->_L5.trigger = kcg_lit_int64(0);
  outC->_L5.message_sent = kcg_true;
  outC->_L4.message.valid = kcg_true;
  outC->_L4.message.nid_message = kcg_lit_int64(0);
  outC->_L4.message.l_message = kcg_lit_int64(0);
  outC->_L4.message.t_train = kcg_lit_int64(0);
  outC->_L4.message.field1 = kcg_lit_int64(0);
  outC->_L4.message.field2 = kcg_lit_int64(0);
  outC->_L4.message.field3 = kcg_lit_int64(0);
  outC->_L4.message.field4 = kcg_lit_int64(0);
  outC->_L4.message.field5 = kcg_lit_int64(0);
  outC->_L4.message.field6 = kcg_lit_int64(0);
  outC->_L4.message.field7 = kcg_lit_int64(0);
  outC->_L4.message.field8 = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L4.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx14].startAddress = kcg_lit_int64(0);
    outC->_L4.packets.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L4.packets.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->_L4.trigger = kcg_lit_int64(0);
  outC->_L4.message_sent = kcg_true;
  outC->_L3.message.valid = kcg_true;
  outC->_L3.message.nid_message = kcg_lit_int64(0);
  outC->_L3.message.l_message = kcg_lit_int64(0);
  outC->_L3.message.t_train = kcg_lit_int64(0);
  outC->_L3.message.field1 = kcg_lit_int64(0);
  outC->_L3.message.field2 = kcg_lit_int64(0);
  outC->_L3.message.field3 = kcg_lit_int64(0);
  outC->_L3.message.field4 = kcg_lit_int64(0);
  outC->_L3.message.field5 = kcg_lit_int64(0);
  outC->_L3.message.field6 = kcg_lit_int64(0);
  outC->_L3.message.field7 = kcg_lit_int64(0);
  outC->_L3.message.field8 = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L3.packets.PacketHeaders[idx16].nid_packet = kcg_lit_int64(0);
    outC->_L3.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L3.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L3.packets.PacketHeaders[idx16].startAddress = kcg_lit_int64(0);
    outC->_L3.packets.PacketHeaders[idx16].endAddress = kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L3.packets.PacketData[idx17] = kcg_lit_int64(0);
  }
  outC->_L3.trigger = kcg_lit_int64(0);
  outC->_L3.message_sent = kcg_true;
  outC->_L2.message.valid = kcg_true;
  outC->_L2.message.nid_message = kcg_lit_int64(0);
  outC->_L2.message.l_message = kcg_lit_int64(0);
  outC->_L2.message.t_train = kcg_lit_int64(0);
  outC->_L2.message.field1 = kcg_lit_int64(0);
  outC->_L2.message.field2 = kcg_lit_int64(0);
  outC->_L2.message.field3 = kcg_lit_int64(0);
  outC->_L2.message.field4 = kcg_lit_int64(0);
  outC->_L2.message.field5 = kcg_lit_int64(0);
  outC->_L2.message.field6 = kcg_lit_int64(0);
  outC->_L2.message.field7 = kcg_lit_int64(0);
  outC->_L2.message.field8 = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L2.packets.PacketHeaders[idx18].nid_packet = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx18].startAddress = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx18].endAddress = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L2.packets.PacketData[idx19] = kcg_lit_int64(0);
  }
  outC->_L2.trigger = kcg_lit_int64(0);
  outC->_L2.message_sent = kcg_true;
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
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L1.packets.PacketHeaders[idx20].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx20].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx20].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx20].endAddress = kcg_lit_int64(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L1.packets.PacketData[idx21] = kcg_lit_int64(0);
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
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->R_data_out.packets.PacketHeaders[idx22].nid_packet = kcg_lit_int64(0);
    outC->R_data_out.packets.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->R_data_out.packets.PacketHeaders[idx22].valid = kcg_true;
    outC->R_data_out.packets.PacketHeaders[idx22].startAddress = kcg_lit_int64(0);
    outC->R_data_out.packets.PacketHeaders[idx22].endAddress = kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->R_data_out.packets.PacketData[idx23] = kcg_lit_int64(0);
  }
  outC->R_data_out.trigger = kcg_lit_int64(0);
  outC->R_data_out.message_sent = kcg_true;
  /* _L10=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_408_D_00050_9_M015#1)/ */
  Send_RBC_LRBG_408_D_00050_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_408_D_00050_9_M015_1);
  /* _L9=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_407_D_00167_3_M015#1)/ */
  Send_RBC_LRBG_407_D_00167_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_407_D_00167_3_M015_1);
  /* _L8=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_405_D_00042_2_M015#1)/ */
  Send_RBC_LRBG_405_D_00042_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_405_D_00042_2_M015_1);
  /* _L7=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_404_D_00184_3_M015#1)/ */
  Send_RBC_LRBG_404_D_00184_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_404_D_00184_3_M015_1);
  /* _L6=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_402_D_00063_3_M015#1)/ */
  Send_RBC_LRBG_402_D_00063_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_402_D_00063_3_M015_1);
  /* _L5=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_401_D_00182_7_M015#1)/ */
  Send_RBC_LRBG_401_D_00182_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_401_D_00182_7_M015_1);
  /* _L4=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_400_D_00371_2_M003#1)/ */
  Send_RBC_LRBG_400_D_00371_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_400_D_00371_2_M003_1);
  /* _L3=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_400_D_00106_0_M015#1)/ */
  Send_RBC_LRBG_400_D_00106_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_400_D_00106_0_M015_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_397_D_00382_0_M003#1)/ */
  Send_RBC_LRBG_397_D_00382_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_397_D_00382_0_M003_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_397_D_00169_2_M015#1)/ */
  Send_RBC_LRBG_397_D_00169_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_397_D_00169_2_M015_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Sheet11_BreukelenKeerspoor_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  outC_Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC)
{
  /* _L10=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_408_D_00050_9_M015#1)/ */
  Send_RBC_LRBG_408_D_00050_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_408_D_00050_9_M015_1);
  /* _L9=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_407_D_00167_3_M015#1)/ */
  Send_RBC_LRBG_407_D_00167_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_407_D_00167_3_M015_1);
  /* _L8=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_405_D_00042_2_M015#1)/ */
  Send_RBC_LRBG_405_D_00042_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_405_D_00042_2_M015_1);
  /* _L7=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_404_D_00184_3_M015#1)/ */
  Send_RBC_LRBG_404_D_00184_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_404_D_00184_3_M015_1);
  /* _L6=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_402_D_00063_3_M015#1)/ */
  Send_RBC_LRBG_402_D_00063_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_402_D_00063_3_M015_1);
  /* _L5=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_401_D_00182_7_M015#1)/ */
  Send_RBC_LRBG_401_D_00182_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_401_D_00182_7_M015_1);
  /* _L4=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_400_D_00371_2_M003#1)/ */
  Send_RBC_LRBG_400_D_00371_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_400_D_00371_2_M003_1);
  /* _L3=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_400_D_00106_0_M015#1)/ */
  Send_RBC_LRBG_400_D_00106_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_400_D_00106_0_M015_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_397_D_00382_0_M003#1)/ */
  Send_RBC_LRBG_397_D_00382_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_397_D_00382_0_M003_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_397_D_00169_2_M015#1)/ */
  Send_RBC_LRBG_397_D_00169_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Send_RBC_LRBG_397_D_00169_2_M015_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Sheet11_BreukelenKeerspoor_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.c
** Generation date: 2023-09-12T13:45:52
*************************************************************$ */

