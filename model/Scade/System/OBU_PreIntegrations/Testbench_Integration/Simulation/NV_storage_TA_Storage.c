/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NV_storage_TA_Storage.h"

/* TA_Storage::NV_storage/ */
void NV_storage_TA_Storage(
  /* Packet3_in/ */
  P003V1_OBU_T_TM_baseline2 *Packet3_in,
  outC_NV_storage_TA_Storage *outC)
{
  outC->_L2 = kcg_true;
  outC->P3_received = outC->_L2;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L1, Packet3_in);
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->Packet3_out, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void NV_storage_init_TA_Storage(outC_NV_storage_TA_Storage *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.d_validnv = kcg_lit_int64(0);
  outC->_L1.n_iter = kcg_lit_int64(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L1.SECTIONS[idx].valid = kcg_true;
    outC->_L1.SECTIONS[idx].nid_c = kcg_lit_int64(0);
  }
  outC->_L1.v_nvshunt = kcg_lit_int64(0);
  outC->_L1.v_nvstff = kcg_lit_int64(0);
  outC->_L1.v_nvonsight = kcg_lit_int64(0);
  outC->_L1.v_nvunfit = kcg_lit_int64(0);
  outC->_L1.v_nvrel = kcg_lit_int64(0);
  outC->_L1.d_nvroll = kcg_lit_int64(0);
  outC->_L1.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1.v_nvallowovtrp = kcg_lit_int64(0);
  outC->_L1.v_nvsopovtrp = kcg_lit_int64(0);
  outC->_L1.d_nvovtrp = kcg_lit_int64(0);
  outC->_L1.t_nvovtrp = kcg_lit_int64(0);
  outC->_L1.d_nvpotrp = kcg_lit_int64(0);
  outC->_L1.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1.t_nvcontact = kcg_lit_int64(0);
  outC->_L1.m_nvderun = M_NVDERUN_No;
  outC->_L1.d_nvstff = kcg_lit_int64(0);
  outC->_L1.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->Packet3_out.valid = kcg_true;
  outC->Packet3_out.q_dir = Q_DIR_Reverse;
  outC->Packet3_out.q_scale = Q_SCALE_10_cm_scale;
  outC->Packet3_out.d_validnv = kcg_lit_int64(0);
  outC->Packet3_out.n_iter = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->Packet3_out.SECTIONS[idx1].valid = kcg_true;
    outC->Packet3_out.SECTIONS[idx1].nid_c = kcg_lit_int64(0);
  }
  outC->Packet3_out.v_nvshunt = kcg_lit_int64(0);
  outC->Packet3_out.v_nvstff = kcg_lit_int64(0);
  outC->Packet3_out.v_nvonsight = kcg_lit_int64(0);
  outC->Packet3_out.v_nvunfit = kcg_lit_int64(0);
  outC->Packet3_out.v_nvrel = kcg_lit_int64(0);
  outC->Packet3_out.d_nvroll = kcg_lit_int64(0);
  outC->Packet3_out.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->Packet3_out.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->Packet3_out.v_nvallowovtrp = kcg_lit_int64(0);
  outC->Packet3_out.v_nvsopovtrp = kcg_lit_int64(0);
  outC->Packet3_out.d_nvovtrp = kcg_lit_int64(0);
  outC->Packet3_out.t_nvovtrp = kcg_lit_int64(0);
  outC->Packet3_out.d_nvpotrp = kcg_lit_int64(0);
  outC->Packet3_out.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->Packet3_out.t_nvcontact = kcg_lit_int64(0);
  outC->Packet3_out.m_nvderun = M_NVDERUN_No;
  outC->Packet3_out.d_nvstff = kcg_lit_int64(0);
  outC->Packet3_out.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->P3_received = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void NV_storage_reset_TA_Storage(outC_NV_storage_TA_Storage *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NV_storage_TA_Storage.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

