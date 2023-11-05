/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_RBC_LRBG_405_D_00042_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.h"

/* AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Send_RBC_LRBG_405_D_00042_2_M015/ */
void Send_RBC_LRBG_405_D_00042_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  /* RadiaDataIn/ */
  R_data_internal_T_InfraLib *RadiaDataIn,
  /* TriggerValue/ */
  kcg_int32 TriggerValue,
  outC_Send_RBC_LRBG_405_D_00042_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC)
{
  static R_data_internal_T_InfraLib op_call;

  kcg_copy_R_data_internal_T_InfraLib(&outC->_L23, RadiaDataIn);
  outC->_L27 = outC->_L23.trigger;
  outC->_L26 = TriggerValue;
  outC->_L52 = outC->_L26 == outC->_L27;
  outC->every = outC->_L52;
  kcg_copy_R_data_internal_T_InfraLib(&outC->_L53, RadiaDataIn);
  if (outC->every) {
    /* _L4=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Build_RBC_LRBG_405_D_00042_2_M015#1)/ */
    Build_RBC_LRBG_405_D_00042_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
      &outC->_L53,
      &outC->Context_Build_RBC_LRBG_405_D_00042_2_M015_1);
    kcg_copy_R_data_internal_T_InfraLib(
      &op_call,
      &outC->Context_Build_RBC_LRBG_405_D_00042_2_M015_1.R_data_out);
    kcg_copy_R_data_internal_T_InfraLib(&outC->_L4, &op_call);
  }
  else {
    kcg_copy_R_data_internal_T_InfraLib(&outC->_L4, &outC->_L53);
  }
  kcg_copy_R_data_internal_T_InfraLib(&outC->R_data_out, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void Send_RBC_LRBG_405_D_00042_2_M015_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  outC_Send_RBC_LRBG_405_D_00042_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L53.message.valid = kcg_true;
  outC->_L53.message.nid_message = kcg_lit_int32(0);
  outC->_L53.message.l_message = kcg_lit_int32(0);
  outC->_L53.message.t_train = kcg_lit_int32(0);
  outC->_L53.message.field1 = kcg_lit_int32(0);
  outC->_L53.message.field2 = kcg_lit_int32(0);
  outC->_L53.message.field3 = kcg_lit_int32(0);
  outC->_L53.message.field4 = kcg_lit_int32(0);
  outC->_L53.message.field5 = kcg_lit_int32(0);
  outC->_L53.message.field6 = kcg_lit_int32(0);
  outC->_L53.message.field7 = kcg_lit_int32(0);
  outC->_L53.message.field8 = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L53.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L53.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L53.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L53.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L53.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L53.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L53.trigger = kcg_lit_int32(0);
  outC->_L53.message_sent = kcg_true;
  outC->_L52 = kcg_true;
  outC->_L27 = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_int32(0);
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
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L23.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L23.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L23.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L23.packets.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L23.packets.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L23.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L23.trigger = kcg_lit_int32(0);
  outC->_L23.message_sent = kcg_true;
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
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L4.packets.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L4.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L4.packets.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L4.packets.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L4.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L4.trigger = kcg_lit_int32(0);
  outC->_L4.message_sent = kcg_true;
  outC->every = kcg_true;
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
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->R_data_out.packets.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->R_data_out.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->R_data_out.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->R_data_out.packets.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->R_data_out.packets.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->R_data_out.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->R_data_out.trigger = kcg_lit_int32(0);
  outC->R_data_out.message_sent = kcg_true;
  /* _L4=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Build_RBC_LRBG_405_D_00042_2_M015#1)/ */
  Build_RBC_LRBG_405_D_00042_2_M015_init_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Build_RBC_LRBG_405_D_00042_2_M015_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_RBC_LRBG_405_D_00042_2_M015_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
  outC_Send_RBC_LRBG_405_D_00042_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC *outC)
{
  /* _L4=(AmsterdamUtrechtL2::Sheet11_BreukelenKeerspoor_RBC::Build_RBC_LRBG_405_D_00042_2_M015#1)/ */
  Build_RBC_LRBG_405_D_00042_2_M015_reset_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC(
    &outC->Context_Build_RBC_LRBG_405_D_00042_2_M015_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_RBC_LRBG_405_D_00042_2_M015_AmsterdamUtrechtL2_Sheet11_BreukelenKeerspoor_RBC.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

