/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::RBC_Sheet05_Amstel/ */
void RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
{
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L4, RadiaDataIn);
  /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00319_2_M032#1)/ */
  Send_RBC_LRBG_353_D_00319_2_M032_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->_L4,
    kcg_lit_int32(353003192),
    &outC->Context_Send_RBC_LRBG_353_D_00319_2_M032_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L1,
    &outC->Context_Send_RBC_LRBG_353_D_00319_2_M032_1.R_data_out);
  /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008#1)/ */
  Send_RBC_LRBG_353_D_00421_9_M008_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->_L1,
    kcg_lit_int32(353004219),
    &outC->Context_Send_RBC_LRBG_353_D_00421_9_M008_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L2,
    &outC->Context_Send_RBC_LRBG_353_D_00421_9_M008_1.R_data_out);
  /* _L3=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00431_0_M024#1)/ */
  Send_RBC_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->_L2,
    kcg_lit_int32(353004310),
    &outC->Context_Send_RBC_LRBG_353_D_00431_0_M024_1);
  kcg_copy_R_data_internal_T_InfraLib(
    &outC->_L3,
    &outC->Context_Send_RBC_LRBG_353_D_00431_0_M024_1.R_data_out);
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void RBC_Sheet05_Amstel_init_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
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
  for (idx = 0; idx < 30; idx++) {
    outC->_L4.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L4.packets.PacketData[idx1] = kcg_lit_int32(0);
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
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L3.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L3.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L3.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L3.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L3.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L3.packets.PacketData[idx3] = kcg_lit_int32(0);
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
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L2.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L2.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L2.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L2.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L2.packets.PacketData[idx5] = kcg_lit_int32(0);
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
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L1.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L1.packets.PacketData[idx7] = kcg_lit_int32(0);
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
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->R_data_out.packets.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->R_data_out.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->R_data_out.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->R_data_out.packets.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->R_data_out.packets.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->R_data_out.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->R_data_out.trigger = kcg_lit_int32(0);
  outC->R_data_out.message_sent = kcg_true;
  /* _L3=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00431_0_M024#1)/ */
  Send_RBC_LRBG_353_D_00431_0_M024_init_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_Send_RBC_LRBG_353_D_00431_0_M024_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008#1)/ */
  Send_RBC_LRBG_353_D_00421_9_M008_init_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_Send_RBC_LRBG_353_D_00421_9_M008_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00319_2_M032#1)/ */
  Send_RBC_LRBG_353_D_00319_2_M032_init_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_Send_RBC_LRBG_353_D_00319_2_M032_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC_Sheet05_Amstel_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
{
  /* _L3=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00431_0_M024#1)/ */
  Send_RBC_LRBG_353_D_00431_0_M024_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_Send_RBC_LRBG_353_D_00431_0_M024_1);
  /* _L2=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00421_9_M008#1)/ */
  Send_RBC_LRBG_353_D_00421_9_M008_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_Send_RBC_LRBG_353_D_00421_9_M008_1);
  /* _L1=(AmsterdamUtrechtL2::Sheet05_Amstel_RBC::Send_RBC_LRBG_353_D_00319_2_M032#1)/ */
  Send_RBC_LRBG_353_D_00319_2_M032_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
    &outC->Context_Send_RBC_LRBG_353_D_00319_2_M032_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_Sheet05_Amstel_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.c
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

