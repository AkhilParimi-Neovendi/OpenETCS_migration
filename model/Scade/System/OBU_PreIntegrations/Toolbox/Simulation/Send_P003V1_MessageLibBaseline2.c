/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P003V1_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_P003V1/ */
void Send_P003V1_MessageLibBaseline2(
  /* B_data_in/ */
  CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* P003V1/ */
  P003V1_trackside_int_T_TM_baseline2 *P003V1,
  outC_Send_P003V1_MessageLibBaseline2 *outC)
{
  CompressedPackets_T_Common_Types_Pkg op_call;
  kcg_bool _1_op_call;
  kcg_bool noname;

  kcg_copy_P003V1_trackside_int_T_TM_baseline2(&outC->_L4, P003V1);
  outC->_L5 = outC->_L4.valid;
  outC->every = outC->_L5;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, B_data_in);
  if (outC->every) {
    /* _L6=(TM_trackside_baseline2::Write_P003V1#1)/ */
    Write_P003V1_TM_trackside_baseline2(
      &outC->_L4,
      &outC->_L3,
      &outC->Context_Write_P003V1_1);
    _1_op_call = outC->Context_Write_P003V1_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &op_call,
      &outC->Context_Write_P003V1_1.RadioPacketsOut);
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
void Send_P003V1_init_MessageLibBaseline2(
  outC_Send_P003V1_MessageLibBaseline2 *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;

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
  outC->_L4.D_VALIDNV = kcg_lit_int32(0);
  outC->_L4.N_ITER = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L4.SECTIONS[idx2] = kcg_lit_int32(0);
  }
  outC->_L4.V_NVSHUNT = kcg_lit_int32(0);
  outC->_L4.V_NVSTFF = kcg_lit_int32(0);
  outC->_L4.V_NVONSIGHT = kcg_lit_int32(0);
  outC->_L4.V_NVUNFIT = kcg_lit_int32(0);
  outC->_L4.V_NVREL = kcg_lit_int32(0);
  outC->_L4.D_NVROLL = kcg_lit_int32(0);
  outC->_L4.Q_NVSRBKTRG = kcg_lit_int32(0);
  outC->_L4.Q_NVEMRRLS = kcg_lit_int32(0);
  outC->_L4.V_NVALLOWOVTRP = kcg_lit_int32(0);
  outC->_L4.V_NVSUPOVTRP = kcg_lit_int32(0);
  outC->_L4.D_NVOVTRP = kcg_lit_int32(0);
  outC->_L4.T_NVOVTRP = kcg_lit_int32(0);
  outC->_L4.D_NVPOTRP = kcg_lit_int32(0);
  outC->_L4.M_NVCONTACT = kcg_lit_int32(0);
  outC->_L4.T_NVCONTACT = kcg_lit_int32(0);
  outC->_L4.M_NVDERUN = kcg_lit_int32(0);
  outC->_L4.D_NVSTFF = kcg_lit_int32(0);
  outC->_L4.Q_NVDRIVER_ADHES = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L3.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L3.PacketHeaders[idx3].valid = kcg_true;
    outC->_L3.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L3.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L3.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->B_data_out.PacketHeaders[idx5].nid_packet = kcg_lit_int32(0);
    outC->B_data_out.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->B_data_out.PacketHeaders[idx5].valid = kcg_true;
    outC->B_data_out.PacketHeaders[idx5].startAddress = kcg_lit_int32(0);
    outC->B_data_out.PacketHeaders[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->B_data_out.PacketData[idx6] = kcg_lit_int32(0);
  }
  /* _L6=(TM_trackside_baseline2::Write_P003V1#1)/ */
  Write_P003V1_init_TM_trackside_baseline2(&outC->Context_Write_P003V1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_P003V1_reset_MessageLibBaseline2(
  outC_Send_P003V1_MessageLibBaseline2 *outC)
{
  /* _L6=(TM_trackside_baseline2::Write_P003V1#1)/ */
  Write_P003V1_reset_TM_trackside_baseline2(&outC->Context_Write_P003V1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_P003V1_MessageLibBaseline2.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

