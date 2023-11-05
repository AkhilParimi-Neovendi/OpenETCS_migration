/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P027V1_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P027V1/ */
void Send_P027V1_MessageLibBaseline2(
  /* B_data_in/ */
  CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* P027/ */
  P027V1_trackside_int_T_TM_baseline2 *P027,
  outC_Send_P027V1_MessageLibBaseline2 *outC)
{
  static CompressedPackets_T_Common_Types_Pkg op_call;
  static kcg_bool _1_op_call;
  static kcg_bool noname;

  kcg_copy_P027V1_trackside_int_T_TM_baseline2(&outC->_L4, P027);
  outC->_L5 = outC->_L4.valid;
  outC->every = outC->_L5;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, B_data_in);
  if (outC->every) {
    /* _L6=(TM_trackside_baseline2::Write_P027V1#1)/ */
    Write_P027V1_TM_trackside_baseline2(
      &outC->_L4,
      &outC->_L3,
      &outC->Context_Write_P027V1_1);
    _1_op_call = outC->Context_Write_P027V1_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &op_call,
      &outC->Context_Write_P027V1_1.PacketsOut);
  }
  outC->_L8 = kcg_false;
  if (outC->every) {
    outC->_L6 = _1_op_call;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  noname = outC->_L6;
  if (outC->every) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &op_call);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &outC->_L3);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_out, &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void Send_P027V1_init_MessageLibBaseline2(
  outC_Send_P027V1_MessageLibBaseline2 *outC)
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

  outC->_L5 = kcg_true;
  for (idx = 0; idx < 30; idx++) {
    outC->_L7.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L7.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L7.PacketHeaders[idx].valid = kcg_true;
    outC->_L7.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L7.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L7.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L6 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.NID_PACKET = kcg_lit_int32(0);
  outC->_L4.Q_DIR = kcg_lit_int32(0);
  outC->_L4.L_PACKET = kcg_lit_int32(0);
  outC->_L4.Q_SCALE = kcg_lit_int32(0);
  outC->_L4.D_STATIC = kcg_lit_int32(0);
  outC->_L4.V_STATIC = kcg_lit_int32(0);
  outC->_L4.Q_FRONT = kcg_lit_int32(0);
  outC->_L4.N_ITER_n = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L4.SECTIONS_q_diff[idx2].NC_DIFF = kcg_lit_int32(0);
    outC->_L4.SECTIONS_q_diff[idx2].V_DIFF = kcg_lit_int32(0);
  }
  outC->_L4.N_ITER_k = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L4.SECTIONS_SSP[idx4].D_STATIC = kcg_lit_int32(0);
    outC->_L4.SECTIONS_SSP[idx4].V_STATIC = kcg_lit_int32(0);
    outC->_L4.SECTIONS_SSP[idx4].Q_FRONT = kcg_lit_int32(0);
    outC->_L4.SECTIONS_SSP[idx4].N_ITER = kcg_lit_int32(0);
    for (idx3 = 0; idx3 < 32; idx3++) {
      outC->_L4.SECTIONS_SSP[idx4].SECTIONS_q_diff[idx3].NC_DIFF = kcg_lit_int32(0);
      outC->_L4.SECTIONS_SSP[idx4].SECTIONS_q_diff[idx3].V_DIFF = kcg_lit_int32(0);
    }
  }
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L3.PacketHeaders[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx5].valid = kcg_true;
    outC->_L3.PacketHeaders[idx5].startAddress = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L3.PacketData[idx6] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->B_data_out.PacketHeaders[idx7].nid_packet = kcg_lit_int32(0);
    outC->B_data_out.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
    outC->B_data_out.PacketHeaders[idx7].valid = kcg_true;
    outC->B_data_out.PacketHeaders[idx7].startAddress = kcg_lit_int32(0);
    outC->B_data_out.PacketHeaders[idx7].endAddress = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->B_data_out.PacketData[idx8] = kcg_lit_int32(0);
  }
  /* _L6=(TM_trackside_baseline2::Write_P027V1#1)/ */
  Write_P027V1_init_TM_trackside_baseline2(&outC->Context_Write_P027V1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_P027V1_reset_MessageLibBaseline2(
  outC_Send_P027V1_MessageLibBaseline2 *outC)
{
  /* _L6=(TM_trackside_baseline2::Write_P027V1#1)/ */
  Write_P027V1_reset_TM_trackside_baseline2(&outC->Context_Write_P027V1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_P027V1_MessageLibBaseline2.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

