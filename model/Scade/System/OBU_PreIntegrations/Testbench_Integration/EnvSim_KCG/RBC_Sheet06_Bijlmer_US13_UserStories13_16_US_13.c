/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13.h"

/* UserStories13_16::US_13::RBC_Sheet06_Bijlmer_US13/ */
void RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13 *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L13, RadiaDataIn);
  /* _L1=(UserStories13_16::US_13::Send_RBC_LRBG_354_D_00275_3_M003#1)/ */
  Send_RBC_LRBG_354_D_00275_3_M003_UserStories13_16_US_13(
    &outC->_L13,
    kcg_lit_int64(354002753),
    &outC->Context_Send_RBC_LRBG_354_D_00275_3_M003_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L1,
    &outC->Context_Send_RBC_LRBG_354_D_00275_3_M003_1.R_data_out);
  /* _L2=(UserStories13_16::US_13::Send_RBC_LRBG_351_D_00054_9_M003#1)/ */
  Send_RBC_LRBG_351_D_00054_9_M003_UserStories13_16_US_13(
    &outC->_L1,
    kcg_lit_int64(351000549),
    &outC->Context_Send_RBC_LRBG_351_D_00054_9_M003_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->Context_Send_RBC_LRBG_351_D_00054_9_M003_1.R_data_out);
  /* _L14=(UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003#1)/ */
  Send_RBC_LRBG_359_D_00030_0_M003_UserStories13_16_US_13(
    &outC->_L2,
    kcg_lit_int64(359000300),
    &outC->Context_Send_RBC_LRBG_359_D_00030_0_M003_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L14,
    &outC->Context_Send_RBC_LRBG_359_D_00030_0_M003_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void RBC_Sheet06_Bijlmer_US13_init_UserStories13_16_US_13(
  outC_RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13 *outC)
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

  outC->_L14.message.valid = kcg_true;
  outC->_L14.message.nid_message = kcg_lit_int64(0);
  outC->_L14.message.l_message = kcg_lit_int64(0);
  outC->_L14.message.t_train = kcg_lit_int64(0);
  outC->_L14.message.field1 = kcg_lit_int64(0);
  outC->_L14.message.field2 = kcg_lit_int64(0);
  outC->_L14.message.field3 = kcg_lit_int64(0);
  outC->_L14.message.field4 = kcg_lit_int64(0);
  outC->_L14.message.field5 = kcg_lit_int64(0);
  outC->_L14.message.field6 = kcg_lit_int64(0);
  outC->_L14.message.field7 = kcg_lit_int64(0);
  outC->_L14.message.field8 = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L14.packets.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L14.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L14.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L14.packets.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L14.packets.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L14.packets.PacketData[idx1] = kcg_lit_int64(0);
  }
  outC->_L14.trigger = kcg_lit_int64(0);
  outC->_L14.message_sent = kcg_true;
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
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L13.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L13.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L13.trigger = kcg_lit_int64(0);
  outC->_L13.message_sent = kcg_true;
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
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L2.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L2.packets.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L2.packets.PacketData[idx5] = kcg_lit_int64(0);
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
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L1.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L1.packets.PacketData[idx7] = kcg_lit_int64(0);
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
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->R_data_out.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->R_data_out.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->R_data_out.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->R_data_out.packets.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->R_data_out.packets.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->R_data_out.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->R_data_out.trigger = kcg_lit_int64(0);
  outC->R_data_out.message_sent = kcg_true;
  /* _L14=(UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003#1)/ */
  Send_RBC_LRBG_359_D_00030_0_M003_init_UserStories13_16_US_13(
    &outC->Context_Send_RBC_LRBG_359_D_00030_0_M003_1);
  /* _L2=(UserStories13_16::US_13::Send_RBC_LRBG_351_D_00054_9_M003#1)/ */
  Send_RBC_LRBG_351_D_00054_9_M003_init_UserStories13_16_US_13(
    &outC->Context_Send_RBC_LRBG_351_D_00054_9_M003_1);
  /* _L1=(UserStories13_16::US_13::Send_RBC_LRBG_354_D_00275_3_M003#1)/ */
  Send_RBC_LRBG_354_D_00275_3_M003_init_UserStories13_16_US_13(
    &outC->Context_Send_RBC_LRBG_354_D_00275_3_M003_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC_Sheet06_Bijlmer_US13_reset_UserStories13_16_US_13(
  outC_RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13 *outC)
{
  /* _L14=(UserStories13_16::US_13::Send_RBC_LRBG_359_D_00030_0_M003#1)/ */
  Send_RBC_LRBG_359_D_00030_0_M003_reset_UserStories13_16_US_13(
    &outC->Context_Send_RBC_LRBG_359_D_00030_0_M003_1);
  /* _L2=(UserStories13_16::US_13::Send_RBC_LRBG_351_D_00054_9_M003#1)/ */
  Send_RBC_LRBG_351_D_00054_9_M003_reset_UserStories13_16_US_13(
    &outC->Context_Send_RBC_LRBG_351_D_00054_9_M003_1);
  /* _L1=(UserStories13_16::US_13::Send_RBC_LRBG_354_D_00275_3_M003#1)/ */
  Send_RBC_LRBG_354_D_00275_3_M003_reset_UserStories13_16_US_13(
    &outC->Context_Send_RBC_LRBG_354_D_00275_3_M003_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_Sheet06_Bijlmer_US13_UserStories13_16_US_13.c
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

