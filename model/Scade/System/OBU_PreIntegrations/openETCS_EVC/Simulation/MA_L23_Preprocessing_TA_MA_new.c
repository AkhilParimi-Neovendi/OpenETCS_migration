/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_L23_Preprocessing_TA_MA_new.h"

/* TA_MA_new::MA_L23_Preprocessing/ */
void MA_L23_Preprocessing_TA_MA_new(
  /* p15/ */
  P015_OBU_T_TM *p15,
  /* reset/ */
  kcg_bool reset,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* NV_in/ */
  P003V1_OBU_T_TM_baseline2 *NV_in,
  outC_MA_L23_Preprocessing_TA_MA_new *outC)
{
  kcg_bool noname;

  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->_L22, NV_in);
  outC->_L21 = reset;
  noname = outC->_L21;
  kcg_copy_P015_OBU_T_TM(&outC->_L1, p15);
  /* _L14=(TA_MA_new::MA_Convert_P15_to_DistanceProfile#1)/ */
  _225_MA_Convert_P15_to_Di_TA_MA_new(
    &outC->_L1,
    &outC->_L22,
    &outC->Context_MA_Convert_P15_to_DistanceProfile_1);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L14,
    &outC->Context_MA_Convert_P15_to_DistanceProfile_1.MovementAuthority);
  outC->_L11 = pos_LRBG;
  /* _L13=(TA_Lib_internal::MoveMAAbsolute_new#1)/ */
  MoveMAAbsolute_new_TA_Lib_internal(
    &outC->_L14,
    outC->_L11,
    &outC->Context_MoveMAAbsolute_new_1);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L13,
    &outC->Context_MoveMAAbsolute_new_1.ProfileOut);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->MA, &outC->_L13);
}

#ifndef KCG_USER_DEFINED_INIT
void MA_L23_Preprocessing_init_TA_MA_new(
  outC_MA_L23_Preprocessing_TA_MA_new *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  outC->_L22.valid = kcg_true;
  outC->_L22.q_dir = Q_DIR_Reverse;
  outC->_L22.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22.d_validnv = kcg_lit_int32(0);
  outC->_L22.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L22.SECTIONS[idx].valid = kcg_true;
    outC->_L22.SECTIONS[idx].nid_c = kcg_lit_int32(0);
  }
  outC->_L22.v_nvshunt = kcg_lit_int32(0);
  outC->_L22.v_nvstff = kcg_lit_int32(0);
  outC->_L22.v_nvonsight = kcg_lit_int32(0);
  outC->_L22.v_nvunfit = kcg_lit_int32(0);
  outC->_L22.v_nvrel = kcg_lit_int32(0);
  outC->_L22.d_nvroll = kcg_lit_int32(0);
  outC->_L22.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L22.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L22.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L22.v_nvsopovtrp = kcg_lit_int32(0);
  outC->_L22.d_nvovtrp = kcg_lit_int32(0);
  outC->_L22.t_nvovtrp = kcg_lit_int32(0);
  outC->_L22.d_nvpotrp = kcg_lit_int32(0);
  outC->_L22.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L22.t_nvcontact = kcg_lit_int32(0);
  outC->_L22.m_nvderun = M_NVDERUN_No;
  outC->_L22.d_nvstff = kcg_lit_int32(0);
  outC->_L22.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L21 = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L13.valid = kcg_true;
  outC->_L13.Level = MA_L1_TrackAtlasTypes;
  outC->_L13.q_dir = Q_DIR_Reverse;
  outC->_L13.v_main = kcg_lit_int32(0);
  outC->_L13.v_loa = kcg_lit_int32(0);
  outC->_L13.t_loa_unlimited = kcg_true;
  outC->_L13.t_loa = kcg_lit_int32(0);
  outC->_L13.n_iter = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L13.sections[idx1].valid = kcg_true;
    outC->_L13.sections[idx1].q_endsection = kcg_true;
    outC->_L13.sections[idx1].l_section = kcg_lit_int32(0);
    outC->_L13.sections[idx1].q_sectiontimer = kcg_true;
    outC->_L13.sections[idx1].t_sectiontimer = kcg_lit_int32(0);
    outC->_L13.sections[idx1].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L13.q_dangerpoint = kcg_true;
  outC->_L13.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L13.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L13.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L13.q_overlap = kcg_true;
  outC->_L13.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L13.overlap.v_release = kcg_lit_int32(0);
  outC->_L13.overlap.calc_v_release_onboard = kcg_true;
  outC->_L13.q_endtimer = kcg_true;
  outC->_L13.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L13.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L14.valid = kcg_true;
  outC->_L14.Level = MA_L1_TrackAtlasTypes;
  outC->_L14.q_dir = Q_DIR_Reverse;
  outC->_L14.v_main = kcg_lit_int32(0);
  outC->_L14.v_loa = kcg_lit_int32(0);
  outC->_L14.t_loa_unlimited = kcg_true;
  outC->_L14.t_loa = kcg_lit_int32(0);
  outC->_L14.n_iter = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L14.sections[idx2].valid = kcg_true;
    outC->_L14.sections[idx2].q_endsection = kcg_true;
    outC->_L14.sections[idx2].l_section = kcg_lit_int32(0);
    outC->_L14.sections[idx2].q_sectiontimer = kcg_true;
    outC->_L14.sections[idx2].t_sectiontimer = kcg_lit_int32(0);
    outC->_L14.sections[idx2].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L14.q_dangerpoint = kcg_true;
  outC->_L14.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L14.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L14.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L14.q_overlap = kcg_true;
  outC->_L14.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L14.overlap.v_release = kcg_lit_int32(0);
  outC->_L14.overlap.calc_v_release_onboard = kcg_true;
  outC->_L14.q_endtimer = kcg_true;
  outC->_L14.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L14.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.v_loa = kcg_lit_int32(0);
  outC->_L1.t_loa = kcg_lit_int32(0);
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L1.sections[idx3].valid = kcg_true;
    outC->_L1.sections[idx3].l_section = kcg_lit_int32(0);
    outC->_L1.sections[idx3].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.sections[idx3].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1.sections[idx3].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L1.l_endsection = kcg_lit_int32(0);
  outC->_L1.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L1.t_sectiontimer = kcg_lit_int32(0);
  outC->_L1.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L1.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L1.t_endtimer = kcg_lit_int32(0);
  outC->_L1.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L1.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L1.d_dp = kcg_lit_int32(0);
  outC->_L1.v_releasedp = kcg_lit_int32(0);
  outC->_L1.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L1.d_startol = kcg_lit_int32(0);
  outC->_L1.t_ol = kcg_lit_int32(0);
  outC->_L1.d_ol = kcg_lit_int32(0);
  outC->_L1.v_releaseol = kcg_lit_int32(0);
  outC->MA.valid = kcg_true;
  outC->MA.Level = MA_L1_TrackAtlasTypes;
  outC->MA.q_dir = Q_DIR_Reverse;
  outC->MA.v_main = kcg_lit_int32(0);
  outC->MA.v_loa = kcg_lit_int32(0);
  outC->MA.t_loa_unlimited = kcg_true;
  outC->MA.t_loa = kcg_lit_int32(0);
  outC->MA.n_iter = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->MA.sections[idx4].valid = kcg_true;
    outC->MA.sections[idx4].q_endsection = kcg_true;
    outC->MA.sections[idx4].l_section = kcg_lit_int32(0);
    outC->MA.sections[idx4].q_sectiontimer = kcg_true;
    outC->MA.sections[idx4].t_sectiontimer = kcg_lit_int32(0);
    outC->MA.sections[idx4].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->MA.q_dangerpoint = kcg_true;
  outC->MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA.q_overlap = kcg_true;
  outC->MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->MA.overlap.v_release = kcg_lit_int32(0);
  outC->MA.overlap.calc_v_release_onboard = kcg_true;
  outC->MA.q_endtimer = kcg_true;
  outC->MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  /* _L13=(TA_Lib_internal::MoveMAAbsolute_new#1)/ */
  MoveMAAbsolute_new_init_TA_Lib_internal(&outC->Context_MoveMAAbsolute_new_1);
  /* _L14=(TA_MA_new::MA_Convert_P15_to_DistanceProfile#1)/ */
  _225_MA_Convert_P15_to_Di_init_TA_MA_new(
    &outC->Context_MA_Convert_P15_to_DistanceProfile_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MA_L23_Preprocessing_reset_TA_MA_new(
  outC_MA_L23_Preprocessing_TA_MA_new *outC)
{
  /* _L13=(TA_Lib_internal::MoveMAAbsolute_new#1)/ */
  MoveMAAbsolute_new_reset_TA_Lib_internal(&outC->Context_MoveMAAbsolute_new_1);
  /* _L14=(TA_MA_new::MA_Convert_P15_to_DistanceProfile#1)/ */
  _225_MA_Convert_P15_to_Di_reset_TA_MA_new(
    &outC->Context_MA_Convert_P15_to_DistanceProfile_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_L23_Preprocessing_TA_MA_new.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

