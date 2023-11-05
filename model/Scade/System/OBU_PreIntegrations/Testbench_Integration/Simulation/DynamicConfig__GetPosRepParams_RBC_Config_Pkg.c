/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__GetPosRepParams_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::DynamicConfig__GetPosRepParams/ */
void DynamicConfig__GetPosRepParams_RBC_Config_Pkg(
  /* inDynamicConfig/ */
  DynamicConfig_T *inDynamicConfig,
  outC_DynamicConfig__GetPosRepParams_RBC_Config_Pkg *outC)
{
  kcg_copy_DynamicConfig_T(&outC->_L1, inDynamicConfig);
  kcg_copy_PosRepParams_T(&outC->_L2, &outC->_L1.m_PosRepParams);
  kcg_copy_PosRepParams_T(&outC->outPosRepParams, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void DynamicConfig__GetPosRepParams_init_RBC_Config_Pkg(
  outC_DynamicConfig__GetPosRepParams_RBC_Config_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.t_cycloc = kcg_lit_int32(0);
  outC->_L2.d_cycloc = kcg_lit_int32(0);
  outC->_L2.m_loc = M_LOC_Now;
  outC->_L2.m_NumberOfIncrementalDistancesAndQualifiers = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L2.m_IncrementalDistancesAndQualifiers[idx].d_loc = kcg_lit_int32(0);
    outC->_L2.m_IncrementalDistancesAndQualifiers[idx].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L1.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L1.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L1.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L1.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L1.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L1.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L1.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L1.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L1.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L1.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L1.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L1.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L1.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L1.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L1.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L1.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L1.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx1].d_loc =
      kcg_lit_int32(0);
    outC->_L1.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx1].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->outPosRepParams.q_dir = Q_DIR_Reverse;
  outC->outPosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->outPosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->outPosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->outPosRepParams.m_loc = M_LOC_Now;
  outC->outPosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->outPosRepParams.m_IncrementalDistancesAndQualifiers[idx2].d_loc =
      kcg_lit_int32(0);
    outC->outPosRepParams.m_IncrementalDistancesAndQualifiers[idx2].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DynamicConfig__GetPosRepParams_reset_RBC_Config_Pkg(
  outC_DynamicConfig__GetPosRepParams_RBC_Config_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DynamicConfig__GetPosRepParams_RBC_Config_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

