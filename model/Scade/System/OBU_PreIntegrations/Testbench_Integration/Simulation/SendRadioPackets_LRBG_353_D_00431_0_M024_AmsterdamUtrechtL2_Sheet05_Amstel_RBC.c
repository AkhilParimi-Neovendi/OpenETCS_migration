/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.h"

/* AmsterdamUtrechtL2::Sheet05_Amstel_RBC::SendRadioPackets_LRBG_353_D_00431_0_M024/ */
void SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  /* Radio_packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L32, Radio_packets_in);
  /* _L11=(MessageLibBaseline2::Send_P057#1)/ */
  Send_P057_MessageLibBaseline2(
    &outC->_L32,
    (P057_trackside_int_T_TM *) &LRBG353_P057_Packets426,
    &outC->Context_Send_P057_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->Context_Send_P057_1.B_data_out);
  /* _L2=(MessageLibBaseline2::Send_P058#1)/ */
  Send_P058_MessageLibBaseline2(
    &outC->_L11,
    (P058_trackside_int_T_TM *) &LRBG353_P058_Packets426,
    &outC->Context_Send_P058_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->Context_Send_P058_1.B_data_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Radio_packets_out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void SendRadioPackets_LRBG_353_D_00431_0_M024_init_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  for (idx = 0; idx < 30; idx++) {
    outC->_L32.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L32.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L32.PacketHeaders[idx].valid = kcg_true;
    outC->_L32.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L32.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L32.PacketData[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L11.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L11.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L11.PacketHeaders[idx2].valid = kcg_true;
    outC->_L11.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L11.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L11.PacketData[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L2.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L2.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L2.PacketHeaders[idx4].valid = kcg_true;
    outC->_L2.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L2.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L2.PacketData[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->Radio_packets_out.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->Radio_packets_out.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->Radio_packets_out.PacketHeaders[idx6].valid = kcg_true;
    outC->Radio_packets_out.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->Radio_packets_out.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->Radio_packets_out.PacketData[idx7] = kcg_lit_int32(0);
  }
  /* _L2=(MessageLibBaseline2::Send_P058#1)/ */
  Send_P058_init_MessageLibBaseline2(&outC->Context_Send_P058_1);
  /* _L11=(MessageLibBaseline2::Send_P057#1)/ */
  Send_P057_init_MessageLibBaseline2(&outC->Context_Send_P057_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SendRadioPackets_LRBG_353_D_00431_0_M024_reset_AmsterdamUtrechtL2_Sheet05_Amstel_RBC(
  outC_SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC *outC)
{
  /* _L2=(MessageLibBaseline2::Send_P058#1)/ */
  Send_P058_reset_MessageLibBaseline2(&outC->Context_Send_P058_1);
  /* _L11=(MessageLibBaseline2::Send_P057#1)/ */
  Send_P057_reset_MessageLibBaseline2(&outC->Context_Send_P057_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SendRadioPackets_LRBG_353_D_00431_0_M024_AmsterdamUtrechtL2_Sheet05_Amstel_RBC.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

