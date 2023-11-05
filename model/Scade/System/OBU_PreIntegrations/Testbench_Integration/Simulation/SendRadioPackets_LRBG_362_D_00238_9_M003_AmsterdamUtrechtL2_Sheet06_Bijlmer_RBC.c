/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003/ */
void SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  /* Radio_packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L32, Radio_packets_in);
  /* _L11=(MessageLibBaseline2::Send_P015#1)/ */
  Send_P015_MessageLibBaseline2(
    &outC->_L32,
    (P015_trackside_int_T_TM *) &LRBG362_P015_2_Packets426,
    &outC->Context_Send_P015_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->Context_Send_P015_1.B_data_out);
  /* _L2=(MessageLibBaseline2::Send_P021#1)/ */
  Send_P021_MessageLibBaseline2(
    &outC->_L11,
    (P021_trackside_int_T_TM *) &LRBG362_P021_2_Packets426,
    &outC->Context_Send_P021_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->Context_Send_P021_1.B_data_out);
  /* _L3=(MessageLibBaseline2::Send_P027V1#1)/ */
  Send_P027V1_MessageLibBaseline2(
    &outC->_L2,
    (P027V1_trackside_int_T_TM_baseline2 *) &LRBG362_P027_2_Packets426,
    &outC->Context_Send_P027V1_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_Send_P027V1_1.B_data_out);
  /* _L5=(MessageLibBaseline2::Send_P005#1)/ */
  Send_P005_MessageLibBaseline2(
    &outC->_L3,
    (P005_trackside_int_T_TM *) &LRBG362_P005_2_Packets426,
    &outC->Context_Send_P005_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L5,
    &outC->Context_Send_P005_1.B_data_out);
  /* _L7=(MessageLibBaseline2::Send_P065#1)/ */
  Send_P065_MessageLibBaseline2(
    &outC->_L5,
    (P065_trackside_int_T_TM *) &LRBG362_P065_2_R1_Packets426,
    &outC->Context_Send_P065_1);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L7,
    &outC->Context_Send_P065_1.B_data_out);
  /* _L33=(MessageLibBaseline2::Send_P065#2)/ */
  Send_P065_MessageLibBaseline2(
    &outC->_L7,
    (P065_trackside_int_T_TM *) &LRBG362_P065_2_R2_Packets426,
    &outC->Context_Send_P065_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L33,
    &outC->Context_Send_P065_2.B_data_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Radio_packets_out,
    &outC->_L33);
}

#ifndef KCG_USER_DEFINED_INIT
void SendRadioPackets_LRBG_362_D_00238_9_M003_init_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
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

  for (idx = 0; idx < 30; idx++) {
    outC->_L33.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L33.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L33.PacketHeaders[idx].valid = kcg_true;
    outC->_L33.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L33.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L33.PacketData[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L32.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L32.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L32.PacketHeaders[idx2].valid = kcg_true;
    outC->_L32.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L32.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L32.PacketData[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L11.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L11.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L11.PacketHeaders[idx4].valid = kcg_true;
    outC->_L11.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->_L11.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L11.PacketData[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L7.PacketHeaders[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L7.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L7.PacketHeaders[idx6].valid = kcg_true;
    outC->_L7.PacketHeaders[idx6].startAddress = kcg_lit_int32(0);
    outC->_L7.PacketHeaders[idx6].endAddress = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L7.PacketData[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L5.PacketHeaders[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L5.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L5.PacketHeaders[idx8].valid = kcg_true;
    outC->_L5.PacketHeaders[idx8].startAddress = kcg_lit_int32(0);
    outC->_L5.PacketHeaders[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L5.PacketData[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L3.PacketHeaders[idx10].nid_packet = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx10].valid = kcg_true;
    outC->_L3.PacketHeaders[idx10].startAddress = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx10].endAddress = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L3.PacketData[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L2.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L2.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L2.PacketHeaders[idx12].valid = kcg_true;
    outC->_L2.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L2.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L2.PacketData[idx13] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->Radio_packets_out.PacketHeaders[idx14].nid_packet = kcg_lit_int32(0);
    outC->Radio_packets_out.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->Radio_packets_out.PacketHeaders[idx14].valid = kcg_true;
    outC->Radio_packets_out.PacketHeaders[idx14].startAddress = kcg_lit_int32(0);
    outC->Radio_packets_out.PacketHeaders[idx14].endAddress = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->Radio_packets_out.PacketData[idx15] = kcg_lit_int32(0);
  }
  /* _L33=(MessageLibBaseline2::Send_P065#2)/ */
  Send_P065_init_MessageLibBaseline2(&outC->Context_Send_P065_2);
  /* _L7=(MessageLibBaseline2::Send_P065#1)/ */
  Send_P065_init_MessageLibBaseline2(&outC->Context_Send_P065_1);
  /* _L5=(MessageLibBaseline2::Send_P005#1)/ */
  Send_P005_init_MessageLibBaseline2(&outC->Context_Send_P005_1);
  /* _L3=(MessageLibBaseline2::Send_P027V1#1)/ */
  Send_P027V1_init_MessageLibBaseline2(&outC->Context_Send_P027V1_1);
  /* _L2=(MessageLibBaseline2::Send_P021#1)/ */
  Send_P021_init_MessageLibBaseline2(&outC->Context_Send_P021_1);
  /* _L11=(MessageLibBaseline2::Send_P015#1)/ */
  Send_P015_init_MessageLibBaseline2(&outC->Context_Send_P015_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SendRadioPackets_LRBG_362_D_00238_9_M003_reset_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC(
  outC_SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC *outC)
{
  /* _L33=(MessageLibBaseline2::Send_P065#2)/ */
  Send_P065_reset_MessageLibBaseline2(&outC->Context_Send_P065_2);
  /* _L7=(MessageLibBaseline2::Send_P065#1)/ */
  Send_P065_reset_MessageLibBaseline2(&outC->Context_Send_P065_1);
  /* _L5=(MessageLibBaseline2::Send_P005#1)/ */
  Send_P005_reset_MessageLibBaseline2(&outC->Context_Send_P005_1);
  /* _L3=(MessageLibBaseline2::Send_P027V1#1)/ */
  Send_P027V1_reset_MessageLibBaseline2(&outC->Context_Send_P027V1_1);
  /* _L2=(MessageLibBaseline2::Send_P021#1)/ */
  Send_P021_reset_MessageLibBaseline2(&outC->Context_Send_P021_1);
  /* _L11=(MessageLibBaseline2::Send_P015#1)/ */
  Send_P015_reset_MessageLibBaseline2(&outC->Context_Send_P015_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SendRadioPackets_LRBG_362_D_00238_9_M003_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

