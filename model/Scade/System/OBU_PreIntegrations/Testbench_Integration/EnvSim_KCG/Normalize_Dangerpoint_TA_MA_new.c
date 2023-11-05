/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Dangerpoint_TA_MA_new.h"

/* TA_MA_new::Normalize_Dangerpoint/ */
void Normalize_Dangerpoint_TA_MA_new(
  /* d_endsection/ */
  L_internal_Type_Obu_BasicTypes_Pkg d_endsection,
  /* Packet15_in/ */
  P015_OBU_T_TM *Packet15_in,
  /* NV_in/ */
  P003V1_OBU_T_TM_baseline2 *NV_in,
  outC_Normalize_Dangerpoint_TA_MA_new *outC)
{
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(
    &outC->_L15,
    (DP_or_OL_t_TrackAtlasTypes *) &DEFAULT_DP_TrackAtlasTypes);
  outC->_L12 = d_endsection;
  kcg_copy_P015_OBU_T_TM(&outC->_L8, Packet15_in);
  outC->_L10 = outC->_L8.q_scale;
  outC->_L13 = outC->_L8.d_dp;
  /* _L2=(TA_MRSP::Eval_Q_SCALE#1)/ */
  Eval_Q_SCALE_TA_MRSP(outC->_L10, outC->_L13, &outC->Context_Eval_Q_SCALE_1);
  outC->_L2 = outC->Context_Eval_Q_SCALE_1.d_out;
  outC->_L14 = outC->_L2 + outC->_L12;
  outC->_L11 = outC->_L8.v_releasedp;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L7, NV_in);
  outC->_L6 = outC->_L7.v_nvrel;
  /* _L3=(TA_Lib_internal::EVAL_V_Release#1)/ */
  EVAL_V_Release_TA_Lib_internal(
    outC->_L11,
    outC->_L6,
    &outC->Context_EVAL_V_Release_1);
  outC->_L3 = outC->Context_EVAL_V_Release_1.V_out;
  outC->_L4 = outC->Context_EVAL_V_Release_1.calc_onboard;
  outC->_L5.d_DP_or_OL = outC->_L14;
  outC->_L5.v_release = outC->_L3;
  outC->_L5.calc_v_release_onboard = outC->_L4;
  outC->_L9 = outC->_L8.q_dangerpoint;
  /* _L1=(TA_Lib_internal::EVAL_Q_DANGERPOINT#1)/ */
  EVAL_Q_DANGERPOINT_TA_Lib_internal(
    outC->_L9,
    &outC->Context_EVAL_Q_DANGERPOINT_1);
  outC->_L1 = outC->Context_EVAL_Q_DANGERPOINT_1.q_dp_bool;
  /* _L16= */
  if (outC->_L1) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L16, &outC->_L5);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L16, &outC->_L15);
  }
  outC->q_dangerpoint = outC->_L1;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->dangerpoint, &outC->_L16);
}

#ifndef KCG_USER_DEFINED_INIT
void Normalize_Dangerpoint_init_TA_MA_new(
  outC_Normalize_Dangerpoint_TA_MA_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L16.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L16.v_release = kcg_lit_int32(0);
  outC->_L16.calc_v_release_onboard = kcg_true;
  outC->_L15.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L15.v_release = kcg_lit_int32(0);
  outC->_L15.calc_v_release_onboard = kcg_true;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = Q_SCALE_10_cm_scale;
  outC->_L9 = Q_DANGERPOINT_No_danger_point_information;
  outC->_L8.valid = kcg_true;
  outC->_L8.q_dir = Q_DIR_Reverse;
  outC->_L8.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.v_loa = kcg_lit_int32(0);
  outC->_L8.t_loa = kcg_lit_int32(0);
  outC->_L8.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L8.sections[idx].valid = kcg_true;
    outC->_L8.sections[idx].l_section = kcg_lit_int32(0);
    outC->_L8.sections[idx].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L8.sections[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L8.sections[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L8.l_endsection = kcg_lit_int32(0);
  outC->_L8.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L8.t_sectiontimer = kcg_lit_int32(0);
  outC->_L8.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L8.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L8.t_endtimer = kcg_lit_int32(0);
  outC->_L8.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L8.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L8.d_dp = kcg_lit_int32(0);
  outC->_L8.v_releasedp = kcg_lit_int32(0);
  outC->_L8.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L8.d_startol = kcg_lit_int32(0);
  outC->_L8.t_ol = kcg_lit_int32(0);
  outC->_L8.d_ol = kcg_lit_int32(0);
  outC->_L8.v_releaseol = kcg_lit_int32(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.q_dir = Q_DIR_Reverse;
  outC->_L7.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.d_validnv = kcg_lit_int32(0);
  outC->_L7.n_iter = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L7.SECTIONS[idx1].valid = kcg_true;
    outC->_L7.SECTIONS[idx1].nid_c = kcg_lit_int32(0);
  }
  outC->_L7.v_nvshunt = kcg_lit_int32(0);
  outC->_L7.v_nvstff = kcg_lit_int32(0);
  outC->_L7.v_nvonsight = kcg_lit_int32(0);
  outC->_L7.v_nvunfit = kcg_lit_int32(0);
  outC->_L7.v_nvrel = kcg_lit_int32(0);
  outC->_L7.d_nvroll = kcg_lit_int32(0);
  outC->_L7.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L7.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L7.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L7.v_nvsopovtrp = kcg_lit_int32(0);
  outC->_L7.d_nvovtrp = kcg_lit_int32(0);
  outC->_L7.t_nvovtrp = kcg_lit_int32(0);
  outC->_L7.d_nvpotrp = kcg_lit_int32(0);
  outC->_L7.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L7.t_nvcontact = kcg_lit_int32(0);
  outC->_L7.m_nvderun = M_NVDERUN_No;
  outC->_L7.d_nvstff = kcg_lit_int32(0);
  outC->_L7.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L5.v_release = kcg_lit_int32(0);
  outC->_L5.calc_v_release_onboard = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->dangerpoint.v_release = kcg_lit_int32(0);
  outC->dangerpoint.calc_v_release_onboard = kcg_true;
  outC->q_dangerpoint = kcg_true;
  /* _L1=(TA_Lib_internal::EVAL_Q_DANGERPOINT#1)/ */
  EVAL_Q_DANGERPOINT_init_TA_Lib_internal(&outC->Context_EVAL_Q_DANGERPOINT_1);
  /* _L3=(TA_Lib_internal::EVAL_V_Release#1)/ */
  EVAL_V_Release_init_TA_Lib_internal(&outC->Context_EVAL_V_Release_1);
  /* _L2=(TA_MRSP::Eval_Q_SCALE#1)/ */
  Eval_Q_SCALE_init_TA_MRSP(&outC->Context_Eval_Q_SCALE_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Normalize_Dangerpoint_reset_TA_MA_new(
  outC_Normalize_Dangerpoint_TA_MA_new *outC)
{
  /* _L1=(TA_Lib_internal::EVAL_Q_DANGERPOINT#1)/ */
  EVAL_Q_DANGERPOINT_reset_TA_Lib_internal(&outC->Context_EVAL_Q_DANGERPOINT_1);
  /* _L3=(TA_Lib_internal::EVAL_V_Release#1)/ */
  EVAL_V_Release_reset_TA_Lib_internal(&outC->Context_EVAL_V_Release_1);
  /* _L2=(TA_MRSP::Eval_Q_SCALE#1)/ */
  Eval_Q_SCALE_reset_TA_MRSP(&outC->Context_Eval_Q_SCALE_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Normalize_Dangerpoint_TA_MA_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

