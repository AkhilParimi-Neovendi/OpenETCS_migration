/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P003V1_OBU_P003_OBU_convert_nid_c_list/ */
void C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2(
  /* P003V1_onboard/ */
  P003V1_OBU_T_TM_baseline2 *P003V1_onboard,
  outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2 *outC)
{
  kcg_size idx;

  kcg_copy_P003V1_section_enum_T_TM_baseline2(
    &outC->_L115,
    (P003V1_section_enum_T_TM_baseline2 *)
      &DEFAULT_P003V1_OBU_section_TM_baseline2);
  /* _L116/ */
  for (idx = 0; idx < 1; idx++) {
    kcg_copy_P003V1_section_enum_T_TM_baseline2(&outC->_L116[idx], &outC->_L115);
  }
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L59, P003V1_onboard);
  kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2(
    &outC->_L109,
    &outC->_L59.SECTIONS);
  kcg_copy__191_array(&outC->_L110, (_191_array *) &outC->_L109[1]);
  kcg_copy__191_array(&outC->_L113[0], &outC->_L110);
  kcg_copy_P003V1_section_enum_T_TM_baseline2(&outC->_L113[31], &outC->_L116[0]);
  kcg_copy_P003V1_section_enum_T_TM_baseline2(&outC->_L111, &outC->_L109[0]);
  outC->_L112 = outC->_L111.nid_c;
  outC->_L108 = outC->_L59.n_iter;
  kcg_copy__16_P003_OBU_nid_c_sectionlist_enum_T_TM(
    &outC->nid_c_list,
    &outC->_L113);
  outC->n_iter_out = outC->_L108;
  outC->nid_c1 = outC->_L112;
}

#ifndef KCG_USER_DEFINED_INIT
void C_P003V1_OBU_P003_OBU_con_init_TM_conversions_baseline2(
  outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2 *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  for (idx = 0; idx < 1; idx++) {
    outC->_L116[idx].valid = kcg_true;
    outC->_L116[idx].nid_c = kcg_lit_int32(0);
  }
  outC->_L115.valid = kcg_true;
  outC->_L115.nid_c = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L113[idx1].valid = kcg_true;
    outC->_L113[idx1].nid_c = kcg_lit_int32(0);
  }
  outC->_L112 = kcg_lit_int32(0);
  outC->_L111.valid = kcg_true;
  outC->_L111.nid_c = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 31; idx2++) {
    outC->_L110[idx2].valid = kcg_true;
    outC->_L110[idx2].nid_c = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L109[idx3].valid = kcg_true;
    outC->_L109[idx3].nid_c = kcg_lit_int32(0);
  }
  outC->_L108 = kcg_lit_int32(0);
  outC->_L59.valid = kcg_true;
  outC->_L59.q_dir = Q_DIR_Reverse;
  outC->_L59.q_scale = Q_SCALE_10_cm_scale;
  outC->_L59.d_validnv = kcg_lit_int32(0);
  outC->_L59.n_iter = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L59.SECTIONS[idx4].valid = kcg_true;
    outC->_L59.SECTIONS[idx4].nid_c = kcg_lit_int32(0);
  }
  outC->_L59.v_nvshunt = kcg_lit_int32(0);
  outC->_L59.v_nvstff = kcg_lit_int32(0);
  outC->_L59.v_nvonsight = kcg_lit_int32(0);
  outC->_L59.v_nvunfit = kcg_lit_int32(0);
  outC->_L59.v_nvrel = kcg_lit_int32(0);
  outC->_L59.d_nvroll = kcg_lit_int32(0);
  outC->_L59.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L59.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L59.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L59.v_nvsopovtrp = kcg_lit_int32(0);
  outC->_L59.d_nvovtrp = kcg_lit_int32(0);
  outC->_L59.t_nvovtrp = kcg_lit_int32(0);
  outC->_L59.d_nvpotrp = kcg_lit_int32(0);
  outC->_L59.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L59.t_nvcontact = kcg_lit_int32(0);
  outC->_L59.m_nvderun = M_NVDERUN_No;
  outC->_L59.d_nvstff = kcg_lit_int32(0);
  outC->_L59.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->nid_c_list[idx5].valid = kcg_true;
    outC->nid_c_list[idx5].nid_c = kcg_lit_int32(0);
  }
  outC->n_iter_out = kcg_lit_int32(0);
  outC->nid_c1 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P003V1_OBU_P003_OBU_con_reset_TM_conversions_baseline2(
  outC_C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_OBU_P003_OBU_con_TM_conversions_baseline2.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

