/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicConfig__GetNationa_RBC_Config_Pkg.h"

/* RBC_Config_Pkg::DynamicConfig__GetNationalParams/ */
void DynamicConfig__GetNationa_RBC_Config_Pkg(
  /* inDynamicConfig/ */
  DynamicConfig_T *inDynamicConfig,
  outC_DynamicConfig__GetNationa_RBC_Config_Pkg *outC)
{
  kcg_copy_DynamicConfig_T(&outC->_L1, inDynamicConfig);
  kcg_copy_NationalParams_T(&outC->_L2, &outC->_L1.m_NationalParams);
  kcg_copy_NationalParams_T(&outC->outNationalParams, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void DynamicConfig__GetNationa_init_RBC_Config_Pkg(
  outC_DynamicConfig__GetNationa_RBC_Config_Pkg *outC)
{
  kcg_size idx;

  outC->_L2.nid_c = kcg_lit_int32(0);
  outC->_L2.v_nvshunt = kcg_lit_int32(0);
  outC->_L2.v_nvstff = kcg_lit_int32(0);
  outC->_L2.v_nvonsight = kcg_lit_int32(0);
  outC->_L2.v_nvunfit = kcg_lit_int32(0);
  outC->_L2.v_nvrel = kcg_lit_int32(0);
  outC->_L2.t_nvcontact = kcg_lit_int32(0);
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
  for (idx = 0; idx < 32; idx++) {
    outC->_L1.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx].d_loc =
      kcg_lit_int32(0);
    outC->_L1.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->outNationalParams.nid_c = kcg_lit_int32(0);
  outC->outNationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->outNationalParams.v_nvstff = kcg_lit_int32(0);
  outC->outNationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->outNationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->outNationalParams.v_nvrel = kcg_lit_int32(0);
  outC->outNationalParams.t_nvcontact = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void DynamicConfig__GetNationa_reset_RBC_Config_Pkg(
  outC_DynamicConfig__GetNationa_RBC_Config_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DynamicConfig__GetNationa_RBC_Config_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

