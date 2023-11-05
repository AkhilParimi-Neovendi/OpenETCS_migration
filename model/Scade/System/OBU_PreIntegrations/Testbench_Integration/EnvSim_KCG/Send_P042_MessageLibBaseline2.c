/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P042_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P042/ */
void Send_P042_MessageLibBaseline2(
  /* B_data_in/ */
  CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* P042/ */
  P042_trackside_int_T_TM *P042,
  outC_Send_P042_MessageLibBaseline2 *outC)
{
  static CompressedPackets_T_Common_Types_Pkg op_call;
  static kcg_bool _1_op_call;
  static kcg_bool noname;

  kcg_copy_P042_trackside_int_T_TM(&outC->_L4, P042);
  outC->_L5 = outC->_L4.valid;
  outC->every = outC->_L5;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, B_data_in);
  if (outC->every) {
    /* _L6=(TM_trackside::Write_P042#1)/ */
    Write_P042_TM_trackside(
      &outC->_L4,
      &outC->_L3,
      &outC->Context_Write_P042_1);
    _1_op_call = outC->Context_Write_P042_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &op_call,
      &outC->Context_Write_P042_1.RadioPacketsOut);
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
void Send_P042_init_MessageLibBaseline2(
  outC_Send_P042_MessageLibBaseline2 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

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
  outC->_L4.Q_RBC = kcg_lit_int32(0);
  outC->_L4.NID_C = kcg_lit_int32(0);
  outC->_L4.NID_RBC = kcg_lit_int32(0);
  outC->_L4.NID_RADIO = kcg_lit_int32(0);
  outC->_L4.Q_SLEEPSESSION = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L3.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx2].valid = kcg_true;
    outC->_L3.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L3.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->B_data_out.PacketHeaders[idx4].nid_packet = kcg_lit_int32(0);
    outC->B_data_out.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->B_data_out.PacketHeaders[idx4].valid = kcg_true;
    outC->B_data_out.PacketHeaders[idx4].startAddress = kcg_lit_int32(0);
    outC->B_data_out.PacketHeaders[idx4].endAddress = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->B_data_out.PacketData[idx5] = kcg_lit_int32(0);
  }
  /* _L6=(TM_trackside::Write_P042#1)/ */
  Write_P042_init_TM_trackside(&outC->Context_Write_P042_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_P042_reset_MessageLibBaseline2(
  outC_Send_P042_MessageLibBaseline2 *outC)
{
  /* _L6=(TM_trackside::Write_P042#1)/ */
  Write_P042_reset_TM_trackside(&outC->Context_Write_P042_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_P042_MessageLibBaseline2.c
** Generation date: 2023-10-13T16:12:13
*************************************************************$ */

