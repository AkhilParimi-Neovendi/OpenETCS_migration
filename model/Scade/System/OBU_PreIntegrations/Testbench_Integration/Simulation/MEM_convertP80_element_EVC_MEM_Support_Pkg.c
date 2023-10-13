/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_convertP80_element_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_convertP80_element/ */
void MEM_convertP80_element_EVC_MEM_Support_Pkg(
  /* p80TM/ */
  P080_section_enum_T_TM *p80TM,
  /* qDir/ */
  Q_DIR qDir,
  /* qScale/ */
  Q_SCALE qScale,
  /* nationalValues/ */
  P003_OBU_T_TM *nationalValues,
  outC_MEM_convertP80_element_EVC_MEM_Support_Pkg *outC)
{
  kcg_copy_P003_OBU_T_TM(&outC->_L27, nationalValues);
  kcg_copy_P080_section_enum_T_TM(&outC->_L1, p80TM);
  outC->_L18 = outC->_L1.m_mamode;
  outC->_L19 = outC->_L1.v_mamode;
  /* _L26=(EVC_MEM_Support_Pkg::scaleVelo#1)/ */
  scaleVelo_EVC_MEM_Support_Pkg(
    outC->_L18,
    outC->_L19,
    &outC->_L27,
    &outC->Context_scaleVelo_1);
  outC->_L26 = outC->Context_scaleVelo_1.v_evc;
  outC->_L16 = outC->_L1.valid;
  outC->_1_continue = outC->_L16;
  outC->_L25 = qScale;
  outC->_L24 = qDir;
  outC->_L17 = outC->_L1.d_mamode;
  outC->_L20 = outC->_L1.l_mamode;
  outC->_L21 = outC->_L1.l_ackmamode;
  outC->_L22 = outC->_L1.q_mamode;
  outC->_L23.valid = outC->_L16;
  outC->_L23.q_dir = outC->_L24;
  outC->_L23.q_scale = outC->_L25;
  outC->_L23.d_mamode = outC->_L17;
  outC->_L23.m_mamode = outC->_L18;
  outC->_L23.v_mamode = outC->_L26;
  outC->_L23.l_mamode = outC->_L20;
  outC->_L23.l_ackmamode = outC->_L21;
  outC->_L23.q_mamode = outC->_L22;
  kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg(&outC->p80, &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void MEM_convertP80_element_init_EVC_MEM_Support_Pkg(
  outC_MEM_convertP80_element_EVC_MEM_Support_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L27.valid = kcg_true;
  outC->_L27.nid_packet = kcg_lit_int64(0);
  outC->_L27.q_dir = Q_DIR_Reverse;
  outC->_L27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L27.d_validnv = kcg_lit_int64(0);
  outC->_L27.nid_c = kcg_lit_int64(0);
  outC->_L27.n_iter_nid_c = kcg_lit_int64(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L27.nid_c_list[idx].valid = kcg_true;
    outC->_L27.nid_c_list[idx].nid_c = kcg_lit_int64(0);
  }
  outC->_L27.v_nvshunt = kcg_lit_int64(0);
  outC->_L27.v_nvstff = kcg_lit_int64(0);
  outC->_L27.v_nvonsight = kcg_lit_int64(0);
  outC->_L27.v_nvlimsuperv = kcg_lit_int64(0);
  outC->_L27.v_nvunfit = kcg_lit_int64(0);
  outC->_L27.v_nvrel = kcg_lit_int64(0);
  outC->_L27.d_nvroll = kcg_lit_int64(0);
  outC->_L27.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L27.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L27.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L27.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L27.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L27.v_nvallowovtrp = kcg_lit_int64(0);
  outC->_L27.v_nvsupovtrp = kcg_lit_int64(0);
  outC->_L27.d_nvovtrp = kcg_lit_int64(0);
  outC->_L27.t_nvovtrp = kcg_lit_int64(0);
  outC->_L27.d_nvpotrp = kcg_lit_int64(0);
  outC->_L27.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L27.t_nvcontact = kcg_lit_int64(0);
  outC->_L27.m_nvderun = M_NVDERUN_No;
  outC->_L27.d_nvstff = kcg_lit_int64(0);
  outC->_L27.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L27.a_nvmaxredadh1 = kcg_lit_float64(0.0);
  outC->_L27.a_nvmaxredadh2 = kcg_lit_float64(0.0);
  outC->_L27.a_nvmaxredadh3 = kcg_lit_float64(0.0);
  outC->_L27.q_nvlocacc = kcg_lit_int64(0);
  outC->_L27.m_nvavadh = kcg_lit_float64(0.0);
  outC->_L27.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L27.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L27.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L27.a_nvp12 = kcg_lit_float64(0.0);
  outC->_L27.a_nvp23 = kcg_lit_float64(0.0);
  outC->_L27.v_nvkvint = kcg_lit_int64(0);
  outC->_L27.m_nvkvint_12 = kcg_lit_float64(0.0);
  outC->_L27.m_nvkvint_23 = kcg_lit_float64(0.0);
  outC->_L27.n_iter_n = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L27.n_iter_n_list[idx1].valid = kcg_true;
    outC->_L27.n_iter_n_list[idx1].v_nvkvint_n = kcg_lit_int64(0);
    outC->_L27.n_iter_n_list[idx1].m_nvkvint_n_12 = kcg_lit_float64(0.0);
    outC->_L27.n_iter_n_list[idx1].m_nvkvint_n_23 = kcg_lit_float64(0.0);
  }
  outC->_L27.n_iter_k = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L27.n_iter_k_list[idx3].valid = kcg_true;
    outC->_L27.n_iter_k_list[idx3].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L27.n_iter_k_list[idx3].a_nvp12_k = kcg_lit_float64(0.0);
    outC->_L27.n_iter_k_list[idx3].a_nvp23_k = kcg_lit_float64(0.0);
    outC->_L27.n_iter_k_list[idx3].v_nvkvint_k = kcg_lit_int64(0);
    outC->_L27.n_iter_k_list[idx3].m_nvkvint_k_12 = kcg_lit_float64(0.0);
    outC->_L27.n_iter_k_list[idx3].m_nvkvint_k_23 = kcg_lit_float64(0.0);
    outC->_L27.n_iter_k_list[idx3].n_iter_k_m = kcg_lit_int64(0);
    for (idx2 = 0; idx2 < 32; idx2++) {
      outC->_L27.n_iter_k_list[idx3].n_iter_k_m_list[idx2].valid = kcg_true;
      outC->_L27.n_iter_k_list[idx3].n_iter_k_m_list[idx2].v_nvkvint_k_m =
        kcg_lit_int64(0);
      outC->_L27.n_iter_k_list[idx3].n_iter_k_m_list[idx2].m_nvkvint_km_12 =
        kcg_lit_float64(0.0);
      outC->_L27.n_iter_k_list[idx3].n_iter_k_m_list[idx2].m_nvkvint_km_23 =
        kcg_lit_float64(0.0);
    }
  }
  outC->_L27.l_nvkrint = L_NVKRINT_0m;
  outC->_L27.m_nvkrint = kcg_lit_float64(0.0);
  outC->_L27.n_iter_l = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L27.n_iter_l_list[idx4].valid = kcg_true;
    outC->_L27.n_iter_l_list[idx4].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L27.n_iter_l_list[idx4].m_nvkrint_l = kcg_lit_float64(0.0);
  }
  outC->_L27.m_nvktint = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = Q_SCALE_10_cm_scale;
  outC->_L24 = Q_DIR_Reverse;
  outC->_L23.valid = kcg_true;
  outC->_L23.q_dir = Q_DIR_Reverse;
  outC->_L23.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23.d_mamode = kcg_lit_int64(0);
  outC->_L23.m_mamode = M_MAMODE_On_Sight;
  outC->_L23.v_mamode = kcg_lit_int64(0);
  outC->_L23.l_mamode = kcg_lit_int64(0);
  outC->_L23.l_ackmamode = kcg_lit_int64(0);
  outC->_L23.q_mamode = Q_MAMODE_as_the_EOA;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_lit_int64(0);
  outC->_L18 = M_MAMODE_On_Sight;
  outC->_L19 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L22 = Q_MAMODE_as_the_EOA;
  outC->_L1.valid = kcg_true;
  outC->_L1.d_mamode = kcg_lit_int64(0);
  outC->_L1.m_mamode = M_MAMODE_On_Sight;
  outC->_L1.v_mamode = kcg_lit_int64(0);
  outC->_L1.l_mamode = kcg_lit_int64(0);
  outC->_L1.l_ackmamode = kcg_lit_int64(0);
  outC->_L1.q_mamode = Q_MAMODE_as_the_EOA;
  outC->p80.valid = kcg_true;
  outC->p80.q_dir = Q_DIR_Reverse;
  outC->p80.q_scale = Q_SCALE_10_cm_scale;
  outC->p80.d_mamode = kcg_lit_int64(0);
  outC->p80.m_mamode = M_MAMODE_On_Sight;
  outC->p80.v_mamode = kcg_lit_int64(0);
  outC->p80.l_mamode = kcg_lit_int64(0);
  outC->p80.l_ackmamode = kcg_lit_int64(0);
  outC->p80.q_mamode = Q_MAMODE_as_the_EOA;
  outC->_1_continue = kcg_true;
  /* _L26=(EVC_MEM_Support_Pkg::scaleVelo#1)/ */
  scaleVelo_init_EVC_MEM_Support_Pkg(&outC->Context_scaleVelo_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MEM_convertP80_element_reset_EVC_MEM_Support_Pkg(
  outC_MEM_convertP80_element_EVC_MEM_Support_Pkg *outC)
{
  /* _L26=(EVC_MEM_Support_Pkg::scaleVelo#1)/ */
  scaleVelo_reset_EVC_MEM_Support_Pkg(&outC->Context_scaleVelo_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_convertP80_element_EVC_MEM_Support_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

