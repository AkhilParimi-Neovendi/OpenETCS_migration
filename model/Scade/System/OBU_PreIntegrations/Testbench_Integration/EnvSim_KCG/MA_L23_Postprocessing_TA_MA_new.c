/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_L23_Postprocessing_TA_MA_new.h"

/* TA_MA_new::MA_L23_Postprocessing/ */
void MA_L23_Postprocessing_TA_MA_new(
  /* Profile_in/ */
  MovementAuthority_t_TrackAtlasTypes *Profile_in,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MA_L23_Postprocessing_TA_MA_new *outC)
{
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L8, Profile_in);
  /* _L2=(TA_MA_new::Update_MA#1)/ */
  Update_MA_TA_MA_new(&outC->_L8, &outC->Context_Update_MA_1);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L2,
    &outC->Context_Update_MA_1.MA_in_force);
  outC->_L15 = outC->_L2.valid;
  outC->MA_available = outC->_L15;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->MA_absolute, &outC->_L2);
  outC->_L7 = pos_LRBG;
  /* _L14=(TA_MA_new::MA_Normalize_MA_LRBG#1)/ */
  MA_Normalize_MA_LRBG_TA_MA_new(
    &outC->_L2,
    outC->_L7,
    &outC->Context_MA_Normalize_MA_LRBG_1);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L14,
    &outC->Context_MA_Normalize_MA_LRBG_1.ProfileNormalized_LRBG);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->MA_at_LRBG, &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void MA_L23_Postprocessing_init_TA_MA_new(
  outC_MA_L23_Postprocessing_TA_MA_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L15 = kcg_true;
  outC->_L14.valid = kcg_true;
  outC->_L14.Level = MA_L1_TrackAtlasTypes;
  outC->_L14.q_dir = Q_DIR_Reverse;
  outC->_L14.v_main = kcg_lit_int32(0);
  outC->_L14.v_loa = kcg_lit_int32(0);
  outC->_L14.t_loa_unlimited = kcg_true;
  outC->_L14.t_loa = kcg_lit_int32(0);
  outC->_L14.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L14.sections[idx].valid = kcg_true;
    outC->_L14.sections[idx].q_endsection = kcg_true;
    outC->_L14.sections[idx].l_section = kcg_lit_int32(0);
    outC->_L14.sections[idx].q_sectiontimer = kcg_true;
    outC->_L14.sections[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L14.sections[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
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
  outC->_L8.valid = kcg_true;
  outC->_L8.Level = MA_L1_TrackAtlasTypes;
  outC->_L8.q_dir = Q_DIR_Reverse;
  outC->_L8.v_main = kcg_lit_int32(0);
  outC->_L8.v_loa = kcg_lit_int32(0);
  outC->_L8.t_loa_unlimited = kcg_true;
  outC->_L8.t_loa = kcg_lit_int32(0);
  outC->_L8.n_iter = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L8.sections[idx1].valid = kcg_true;
    outC->_L8.sections[idx1].q_endsection = kcg_true;
    outC->_L8.sections[idx1].l_section = kcg_lit_int32(0);
    outC->_L8.sections[idx1].q_sectiontimer = kcg_true;
    outC->_L8.sections[idx1].t_sectiontimer = kcg_lit_int32(0);
    outC->_L8.sections[idx1].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L8.q_dangerpoint = kcg_true;
  outC->_L8.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L8.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L8.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L8.q_overlap = kcg_true;
  outC->_L8.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L8.overlap.v_release = kcg_lit_int32(0);
  outC->_L8.overlap.calc_v_release_onboard = kcg_true;
  outC->_L8.q_endtimer = kcg_true;
  outC->_L8.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L8.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.Level = MA_L1_TrackAtlasTypes;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.v_main = kcg_lit_int32(0);
  outC->_L2.v_loa = kcg_lit_int32(0);
  outC->_L2.t_loa_unlimited = kcg_true;
  outC->_L2.t_loa = kcg_lit_int32(0);
  outC->_L2.n_iter = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L2.sections[idx2].valid = kcg_true;
    outC->_L2.sections[idx2].q_endsection = kcg_true;
    outC->_L2.sections[idx2].l_section = kcg_lit_int32(0);
    outC->_L2.sections[idx2].q_sectiontimer = kcg_true;
    outC->_L2.sections[idx2].t_sectiontimer = kcg_lit_int32(0);
    outC->_L2.sections[idx2].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L2.q_dangerpoint = kcg_true;
  outC->_L2.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L2.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L2.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L2.q_overlap = kcg_true;
  outC->_L2.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L2.overlap.v_release = kcg_lit_int32(0);
  outC->_L2.overlap.calc_v_release_onboard = kcg_true;
  outC->_L2.q_endtimer = kcg_true;
  outC->_L2.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L2.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->MA_available = kcg_true;
  outC->MA_absolute.valid = kcg_true;
  outC->MA_absolute.Level = MA_L1_TrackAtlasTypes;
  outC->MA_absolute.q_dir = Q_DIR_Reverse;
  outC->MA_absolute.v_main = kcg_lit_int32(0);
  outC->MA_absolute.v_loa = kcg_lit_int32(0);
  outC->MA_absolute.t_loa_unlimited = kcg_true;
  outC->MA_absolute.t_loa = kcg_lit_int32(0);
  outC->MA_absolute.n_iter = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->MA_absolute.sections[idx3].valid = kcg_true;
    outC->MA_absolute.sections[idx3].q_endsection = kcg_true;
    outC->MA_absolute.sections[idx3].l_section = kcg_lit_int32(0);
    outC->MA_absolute.sections[idx3].q_sectiontimer = kcg_true;
    outC->MA_absolute.sections[idx3].t_sectiontimer = kcg_lit_int32(0);
    outC->MA_absolute.sections[idx3].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->MA_absolute.q_dangerpoint = kcg_true;
  outC->MA_absolute.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->MA_absolute.dangerpoint.v_release = kcg_lit_int32(0);
  outC->MA_absolute.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_absolute.q_overlap = kcg_true;
  outC->MA_absolute.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->MA_absolute.overlap.v_release = kcg_lit_int32(0);
  outC->MA_absolute.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_absolute.q_endtimer = kcg_true;
  outC->MA_absolute.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->MA_absolute.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->MA_at_LRBG.valid = kcg_true;
  outC->MA_at_LRBG.Level = MA_L1_TrackAtlasTypes;
  outC->MA_at_LRBG.q_dir = Q_DIR_Reverse;
  outC->MA_at_LRBG.v_main = kcg_lit_int32(0);
  outC->MA_at_LRBG.v_loa = kcg_lit_int32(0);
  outC->MA_at_LRBG.t_loa_unlimited = kcg_true;
  outC->MA_at_LRBG.t_loa = kcg_lit_int32(0);
  outC->MA_at_LRBG.n_iter = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->MA_at_LRBG.sections[idx4].valid = kcg_true;
    outC->MA_at_LRBG.sections[idx4].q_endsection = kcg_true;
    outC->MA_at_LRBG.sections[idx4].l_section = kcg_lit_int32(0);
    outC->MA_at_LRBG.sections[idx4].q_sectiontimer = kcg_true;
    outC->MA_at_LRBG.sections[idx4].t_sectiontimer = kcg_lit_int32(0);
    outC->MA_at_LRBG.sections[idx4].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->MA_at_LRBG.q_dangerpoint = kcg_true;
  outC->MA_at_LRBG.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->MA_at_LRBG.dangerpoint.v_release = kcg_lit_int32(0);
  outC->MA_at_LRBG.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_at_LRBG.q_overlap = kcg_true;
  outC->MA_at_LRBG.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->MA_at_LRBG.overlap.v_release = kcg_lit_int32(0);
  outC->MA_at_LRBG.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_at_LRBG.q_endtimer = kcg_true;
  outC->MA_at_LRBG.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->MA_at_LRBG.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  /* _L14=(TA_MA_new::MA_Normalize_MA_LRBG#1)/ */
  MA_Normalize_MA_LRBG_init_TA_MA_new(&outC->Context_MA_Normalize_MA_LRBG_1);
  /* _L2=(TA_MA_new::Update_MA#1)/ */
  Update_MA_init_TA_MA_new(&outC->Context_Update_MA_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MA_L23_Postprocessing_reset_TA_MA_new(
  outC_MA_L23_Postprocessing_TA_MA_new *outC)
{
  /* _L14=(TA_MA_new::MA_Normalize_MA_LRBG#1)/ */
  MA_Normalize_MA_LRBG_reset_TA_MA_new(&outC->Context_MA_Normalize_MA_LRBG_1);
  /* _L2=(TA_MA_new::Update_MA#1)/ */
  Update_MA_reset_TA_MA_new(&outC->Context_Update_MA_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_L23_Postprocessing_TA_MA_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

