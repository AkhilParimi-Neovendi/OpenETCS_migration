/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "scaleVelo_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::scaleVelo/ */
void scaleVelo_EVC_MEM_Support_Pkg(
  /* maMode/ */
  M_MAMODE maMode,
  /* v_track/ */
  V_MAMODE v_track,
  /* nationalValues/ */
  P003_OBU_T_TM *nationalValues,
  outC_scaleVelo_EVC_MEM_Support_Pkg *outC)
{
  outC->_L18 = kcg_lit_int32(36);
  outC->_L16 = kcg_lit_int32(1000);
  outC->_L14 = kcg_lit_int32(5);
  outC->_L12 = v_track;
  outC->_L13 = outC->_L12 * outC->_L14;
  kcg_copy_P003_OBU_T_TM(&outC->_L2, nationalValues);
  outC->_L6 = outC->_L2.v_nvlimsuperv;
  outC->_L7 = outC->_L2.v_nvonsight;
  outC->_L8 = outC->_L2.v_nvshunt;
  outC->_L3 = maMode;
  /* _L4= */
  switch (outC->_L3) {
    case M_MAMODE_Limited_Supervision :
      outC->_L4 = outC->_L6;
      break;
    case M_MAMODE_On_Sight :
      outC->_L4 = outC->_L7;
      break;
    case M_MAMODE_Shunting :
      outC->_L4 = outC->_L8;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L10 = kcg_lit_int32(127);
  outC->_L1 = v_track;
  outC->_L9 = outC->_L1 == outC->_L10;
  /* _L11= */
  if (outC->_L9) {
    outC->_L11 = outC->_L4;
  }
  else {
    outC->_L11 = outC->_L13;
  }
  outC->_L15 = outC->_L11 * outC->_L16;
  outC->_L17 = outC->_L15 / outC->_L18;
  outC->v_evc = outC->_L17;
}

#ifndef KCG_USER_DEFINED_INIT
void scaleVelo_init_EVC_MEM_Support_Pkg(
  outC_scaleVelo_EVC_MEM_Support_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = M_MAMODE_On_Sight;
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_packet = kcg_lit_int32(0);
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_validnv = kcg_lit_int32(0);
  outC->_L2.nid_c = kcg_lit_int32(0);
  outC->_L2.n_iter_nid_c = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L2.nid_c_list[idx].valid = kcg_true;
    outC->_L2.nid_c_list[idx].nid_c = kcg_lit_int32(0);
  }
  outC->_L2.v_nvshunt = kcg_lit_int32(0);
  outC->_L2.v_nvstff = kcg_lit_int32(0);
  outC->_L2.v_nvonsight = kcg_lit_int32(0);
  outC->_L2.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L2.v_nvunfit = kcg_lit_int32(0);
  outC->_L2.v_nvrel = kcg_lit_int32(0);
  outC->_L2.d_nvroll = kcg_lit_int32(0);
  outC->_L2.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L2.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L2.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L2.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L2.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L2.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L2.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L2.d_nvovtrp = kcg_lit_int32(0);
  outC->_L2.t_nvovtrp = kcg_lit_int32(0);
  outC->_L2.d_nvpotrp = kcg_lit_int32(0);
  outC->_L2.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L2.t_nvcontact = kcg_lit_int32(0);
  outC->_L2.m_nvderun = M_NVDERUN_No;
  outC->_L2.d_nvstff = kcg_lit_int32(0);
  outC->_L2.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L2.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L2.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L2.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L2.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L2.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L2.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L2.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L2.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L2.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L2.v_nvkvint = kcg_lit_int32(0);
  outC->_L2.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L2.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L2.n_iter_n = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L2.n_iter_n_list[idx1].valid = kcg_true;
    outC->_L2.n_iter_n_list[idx1].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L2.n_iter_n_list[idx1].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L2.n_iter_n_list[idx1].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L2.n_iter_k = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L2.n_iter_k_list[idx3].valid = kcg_true;
    outC->_L2.n_iter_k_list[idx3].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L2.n_iter_k_list[idx3].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L2.n_iter_k_list[idx3].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L2.n_iter_k_list[idx3].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L2.n_iter_k_list[idx3].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L2.n_iter_k_list[idx3].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L2.n_iter_k_list[idx3].n_iter_k_m = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 32; idx2++) {
      outC->_L2.n_iter_k_list[idx3].n_iter_k_m_list[idx2].valid = kcg_true;
      outC->_L2.n_iter_k_list[idx3].n_iter_k_m_list[idx2].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L2.n_iter_k_list[idx3].n_iter_k_m_list[idx2].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L2.n_iter_k_list[idx3].n_iter_k_m_list[idx2].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L2.l_nvkrint = L_NVKRINT_0m;
  outC->_L2.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L2.n_iter_l = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L2.n_iter_l_list[idx4].valid = kcg_true;
    outC->_L2.n_iter_l_list[idx4].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L2.n_iter_l_list[idx4].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L2.m_nvktint = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_int32(0);
  outC->v_evc = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void scaleVelo_reset_EVC_MEM_Support_Pkg(
  outC_scaleVelo_EVC_MEM_Support_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** scaleVelo_EVC_MEM_Support_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

