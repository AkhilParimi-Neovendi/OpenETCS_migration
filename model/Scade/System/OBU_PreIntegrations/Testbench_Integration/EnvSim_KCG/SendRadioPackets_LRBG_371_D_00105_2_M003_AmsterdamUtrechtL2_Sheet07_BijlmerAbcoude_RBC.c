/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendRadioPackets_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.h"

/* AmsterdamUtrechtL2::Sheet07_BijlmerAbcoude_RBC::SendRadioPackets_LRBG_371_D_00105_2_M003/ */
void SendRadioPackets_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  /* Radio_packets_in/ */
  CompressedPackets_T_Common_Types_Pkg *Radio_packets_in,
  outC_SendRadioPackets_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L32, Radio_packets_in);
  /* _L11=(MessageLibBaseline2::Send_P015#2)/ */
  Send_P015_MessageLibBaseline2(
    &outC->_L32,
    (P015_trackside_int_T_TM *) &LRBG371_P015_Packets426,
    &outC->Context_Send_P015_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11,
    &outC->Context_Send_P015_2.B_data_out);
  /* _L2=(MessageLibBaseline2::Send_P021#2)/ */
  Send_P021_MessageLibBaseline2(
    &outC->_L11,
    (P021_trackside_int_T_TM *) &LRBG371_P021_Packets426,
    &outC->Context_Send_P021_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->Context_Send_P021_2.B_data_out);
  /* _L3=(MessageLibBaseline2::Send_P027V1#2)/ */
  Send_P027V1_MessageLibBaseline2(
    &outC->_L2,
    (P027V1_trackside_int_T_TM_baseline2 *) &LRBG371_P027_Packets426,
    &outC->Context_Send_P027V1_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_Send_P027V1_2.B_data_out);
  /* _L4=(MessageLibBaseline2::Send_P005#3)/ */
  Send_P005_MessageLibBaseline2(
    &outC->_L3,
    (P005_trackside_int_T_TM *) &LRBG371_P005_Packets426,
    &outC->Context_Send_P005_3);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->Context_Send_P005_3.B_data_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Radio_packets_out,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void SendRadioPackets_LRBG_371_D_00105_2_M003_init_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  outC_SendRadioPackets_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC)
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

  for (idx = 0; idx < 30; idx++) {
    outC->_L32.PacketHeaders[idx].nid_packet = kcg_lit_int64(0);
    outC->_L32.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L32.PacketHeaders[idx].valid = kcg_true;
    outC->_L32.PacketHeaders[idx].startAddress = kcg_lit_int64(0);
    outC->_L32.PacketHeaders[idx].endAddress = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L32.PacketData[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L11.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L11.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L11.PacketHeaders[idx2].valid = kcg_true;
    outC->_L11.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L11.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L11.PacketData[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L4.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L4.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L4.PacketHeaders[idx4].valid = kcg_true;
    outC->_L4.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L4.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L4.PacketData[idx5] = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L3.PacketHeaders[idx6].nid_packet = kcg_lit_int64(0);
    outC->_L3.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx6].valid = kcg_true;
    outC->_L3.PacketHeaders[idx6].startAddress = kcg_lit_int64(0);
    outC->_L3.PacketHeaders[idx6].endAddress = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L3.PacketData[idx7] = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L2.PacketHeaders[idx8].nid_packet = kcg_lit_int64(0);
    outC->_L2.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L2.PacketHeaders[idx8].valid = kcg_true;
    outC->_L2.PacketHeaders[idx8].startAddress = kcg_lit_int64(0);
    outC->_L2.PacketHeaders[idx8].endAddress = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L2.PacketData[idx9] = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->Radio_packets_out.PacketHeaders[idx10].nid_packet = kcg_lit_int64(0);
    outC->Radio_packets_out.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->Radio_packets_out.PacketHeaders[idx10].valid = kcg_true;
    outC->Radio_packets_out.PacketHeaders[idx10].startAddress = kcg_lit_int64(0);
    outC->Radio_packets_out.PacketHeaders[idx10].endAddress = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->Radio_packets_out.PacketData[idx11] = kcg_lit_int64(0);
  }
  /* _L4=(MessageLibBaseline2::Send_P005#3)/ */
  Send_P005_init_MessageLibBaseline2(&outC->Context_Send_P005_3);
  /* _L3=(MessageLibBaseline2::Send_P027V1#2)/ */
  Send_P027V1_init_MessageLibBaseline2(&outC->Context_Send_P027V1_2);
  /* _L2=(MessageLibBaseline2::Send_P021#2)/ */
  Send_P021_init_MessageLibBaseline2(&outC->Context_Send_P021_2);
  /* _L11=(MessageLibBaseline2::Send_P015#2)/ */
  Send_P015_init_MessageLibBaseline2(&outC->Context_Send_P015_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SendRadioPackets_LRBG_371_D_00105_2_M003_reset_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC(
  outC_SendRadioPackets_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC *outC)
{
  /* _L4=(MessageLibBaseline2::Send_P005#3)/ */
  Send_P005_reset_MessageLibBaseline2(&outC->Context_Send_P005_3);
  /* _L3=(MessageLibBaseline2::Send_P027V1#2)/ */
  Send_P027V1_reset_MessageLibBaseline2(&outC->Context_Send_P027V1_2);
  /* _L2=(MessageLibBaseline2::Send_P021#2)/ */
  Send_P021_reset_MessageLibBaseline2(&outC->Context_Send_P021_2);
  /* _L11=(MessageLibBaseline2::Send_P015#2)/ */
  Send_P015_reset_MessageLibBaseline2(&outC->Context_Send_P015_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SendRadioPackets_LRBG_371_D_00105_2_M003_AmsterdamUtrechtL2_Sheet07_BijlmerAbcoude_RBC.c
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

