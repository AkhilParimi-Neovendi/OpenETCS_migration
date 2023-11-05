/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P003V1_TM_baseline2.h"

/* TM_baseline2::Read_P003V1/ */
void Read_P003V1_TM_baseline2(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P003V1_TM_baseline2 *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, Message_IN);
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_TM_lib_internal(
    &outC->_L6,
    kcg_lit_int32(3016000),
    kcg_true,
    kcg_false,
    &outC->Context_RECV_ReadPackets_1);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L5,
    &outC->Context_RECV_ReadPackets_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_RECV_ReadPackets_1.Metadata);
  outC->_L167 = outC->Context_RECV_ReadPackets_1.received;
  outC->received = outC->_L167;
  /* _L166=(TM_conversions_baseline2::C_P003V1_compr_onboard#1)/ */
  C_P003V1_compr_onboard_TM_conversions_baseline2(
    &outC->_L5,
    &outC->_L30,
    &outC->Context_C_P003V1_compr_onboard_1);
  kcg_copy_P003V1_OBU_T_TM_baseline2(
    &outC->_L166,
    &outC->Context_C_P003V1_compr_onboard_1.P003V1_onboard);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->P003V1_OBU_out, &outC->_L166);
}

#ifndef KCG_USER_DEFINED_INIT
void Read_P003V1_init_TM_baseline2(outC_Read_P003V1_TM_baseline2 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L167 = kcg_true;
  for (idx = 0; idx < 500; idx++) {
    outC->_L5[idx] = kcg_lit_int32(0);
  }
  outC->_L30.nid_packet = kcg_lit_int32(0);
  outC->_L30.q_dir = Q_DIR_Reverse;
  outC->_L30.valid = kcg_true;
  outC->_L30.startAddress = kcg_lit_int32(0);
  outC->_L30.endAddress = kcg_lit_int32(0);
  outC->_L166.valid = kcg_true;
  outC->_L166.q_dir = Q_DIR_Reverse;
  outC->_L166.q_scale = Q_SCALE_10_cm_scale;
  outC->_L166.d_validnv = kcg_lit_int32(0);
  outC->_L166.n_iter = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L166.SECTIONS[idx1].valid = kcg_true;
    outC->_L166.SECTIONS[idx1].nid_c = kcg_lit_int32(0);
  }
  outC->_L166.v_nvshunt = kcg_lit_int32(0);
  outC->_L166.v_nvstff = kcg_lit_int32(0);
  outC->_L166.v_nvonsight = kcg_lit_int32(0);
  outC->_L166.v_nvunfit = kcg_lit_int32(0);
  outC->_L166.v_nvrel = kcg_lit_int32(0);
  outC->_L166.d_nvroll = kcg_lit_int32(0);
  outC->_L166.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L166.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L166.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L166.v_nvsopovtrp = kcg_lit_int32(0);
  outC->_L166.d_nvovtrp = kcg_lit_int32(0);
  outC->_L166.t_nvovtrp = kcg_lit_int32(0);
  outC->_L166.d_nvpotrp = kcg_lit_int32(0);
  outC->_L166.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L166.t_nvcontact = kcg_lit_int32(0);
  outC->_L166.m_nvderun = M_NVDERUN_No;
  outC->_L166.d_nvstff = kcg_lit_int32(0);
  outC->_L166.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L6.PacketHeaders[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L6.PacketHeaders[idx2].valid = kcg_true;
    outC->_L6.PacketHeaders[idx2].startAddress = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L6.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->P003V1_OBU_out.valid = kcg_true;
  outC->P003V1_OBU_out.q_dir = Q_DIR_Reverse;
  outC->P003V1_OBU_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P003V1_OBU_out.d_validnv = kcg_lit_int32(0);
  outC->P003V1_OBU_out.n_iter = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->P003V1_OBU_out.SECTIONS[idx4].valid = kcg_true;
    outC->P003V1_OBU_out.SECTIONS[idx4].nid_c = kcg_lit_int32(0);
  }
  outC->P003V1_OBU_out.v_nvshunt = kcg_lit_int32(0);
  outC->P003V1_OBU_out.v_nvstff = kcg_lit_int32(0);
  outC->P003V1_OBU_out.v_nvonsight = kcg_lit_int32(0);
  outC->P003V1_OBU_out.v_nvunfit = kcg_lit_int32(0);
  outC->P003V1_OBU_out.v_nvrel = kcg_lit_int32(0);
  outC->P003V1_OBU_out.d_nvroll = kcg_lit_int32(0);
  outC->P003V1_OBU_out.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->P003V1_OBU_out.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->P003V1_OBU_out.v_nvallowovtrp = kcg_lit_int32(0);
  outC->P003V1_OBU_out.v_nvsopovtrp = kcg_lit_int32(0);
  outC->P003V1_OBU_out.d_nvovtrp = kcg_lit_int32(0);
  outC->P003V1_OBU_out.t_nvovtrp = kcg_lit_int32(0);
  outC->P003V1_OBU_out.d_nvpotrp = kcg_lit_int32(0);
  outC->P003V1_OBU_out.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->P003V1_OBU_out.t_nvcontact = kcg_lit_int32(0);
  outC->P003V1_OBU_out.m_nvderun = M_NVDERUN_No;
  outC->P003V1_OBU_out.d_nvstff = kcg_lit_int32(0);
  outC->P003V1_OBU_out.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->received = kcg_true;
  /* _L166=(TM_conversions_baseline2::C_P003V1_compr_onboard#1)/ */
  C_P003V1_compr_onboard_init_TM_conversions_baseline2(
    &outC->Context_C_P003V1_compr_onboard_1);
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_init_TM_lib_internal(&outC->Context_RECV_ReadPackets_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Read_P003V1_reset_TM_baseline2(outC_Read_P003V1_TM_baseline2 *outC)
{
  /* _L166=(TM_conversions_baseline2::C_P003V1_compr_onboard#1)/ */
  C_P003V1_compr_onboard_reset_TM_conversions_baseline2(
    &outC->Context_C_P003V1_compr_onboard_1);
  /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */
  RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_RECV_ReadPackets_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P003V1_TM_baseline2.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

