/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_DP_and_OL_LRBG_TA_MA_new.h"

/* TA_MA_new::Normalize_DP_and_OL_LRBG/ */
void Normalize_DP_and_OL_LRBG_TA_MA_new(
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* MA_in/ */
  MovementAuthority_t_TrackAtlasTypes *MA_in,
  outC_Normalize_DP_and_OL_LRBG_TA_MA_new *outC)
{
  outC->_L67 = pos_LRBG;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L74, MA_in);
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L68, &outC->_L74.overlap);
  outC->_L69 = outC->_L68.d_DP_or_OL;
  outC->_L72 = outC->_L69 - outC->_L67;
  outC->_L70 = outC->_L68.v_release;
  outC->_L71 = outC->_L68.calc_v_release_onboard;
  outC->_L73.d_DP_or_OL = outC->_L72;
  outC->_L73.v_release = outC->_L70;
  outC->_L73.calc_v_release_onboard = outC->_L71;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->overlap, &outC->_L73);
  outC->_L12 = pos_LRBG;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L8, MA_in);
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L61, &outC->_L8.dangerpoint);
  outC->_L64 = outC->_L61.d_DP_or_OL;
  outC->_L65 = outC->_L64 - outC->_L12;
  outC->_L63 = outC->_L61.v_release;
  outC->_L62 = outC->_L61.calc_v_release_onboard;
  outC->_L66.d_DP_or_OL = outC->_L65;
  outC->_L66.v_release = outC->_L63;
  outC->_L66.calc_v_release_onboard = outC->_L62;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->dangerpoint, &outC->_L66);
}

#ifndef KCG_USER_DEFINED_INIT
void Normalize_DP_and_OL_LRBG_init_TA_MA_new(
  outC_Normalize_DP_and_OL_LRBG_TA_MA_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L67 = kcg_lit_int32(0);
  outC->_L68.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L68.v_release = kcg_lit_int32(0);
  outC->_L68.calc_v_release_onboard = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L70 = kcg_lit_int32(0);
  outC->_L69 = kcg_lit_int32(0);
  outC->_L72 = kcg_lit_int32(0);
  outC->_L73.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L73.v_release = kcg_lit_int32(0);
  outC->_L73.calc_v_release_onboard = kcg_true;
  outC->_L74.valid = kcg_true;
  outC->_L74.Level = MA_L1_TrackAtlasTypes;
  outC->_L74.q_dir = Q_DIR_Reverse;
  outC->_L74.v_main = kcg_lit_int32(0);
  outC->_L74.v_loa = kcg_lit_int32(0);
  outC->_L74.t_loa_unlimited = kcg_true;
  outC->_L74.t_loa = kcg_lit_int32(0);
  outC->_L74.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L74.sections[idx].valid = kcg_true;
    outC->_L74.sections[idx].q_endsection = kcg_true;
    outC->_L74.sections[idx].l_section = kcg_lit_int32(0);
    outC->_L74.sections[idx].q_sectiontimer = kcg_true;
    outC->_L74.sections[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L74.sections[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L74.q_dangerpoint = kcg_true;
  outC->_L74.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L74.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L74.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L74.q_overlap = kcg_true;
  outC->_L74.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L74.overlap.v_release = kcg_lit_int32(0);
  outC->_L74.overlap.calc_v_release_onboard = kcg_true;
  outC->_L74.q_endtimer = kcg_true;
  outC->_L74.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L74.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L66.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L66.v_release = kcg_lit_int32(0);
  outC->_L66.calc_v_release_onboard = kcg_true;
  outC->_L65 = kcg_lit_int32(0);
  outC->_L62 = kcg_true;
  outC->_L63 = kcg_lit_int32(0);
  outC->_L64 = kcg_lit_int32(0);
  outC->_L61.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L61.v_release = kcg_lit_int32(0);
  outC->_L61.calc_v_release_onboard = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
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
  outC->overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->overlap.v_release = kcg_lit_int32(0);
  outC->overlap.calc_v_release_onboard = kcg_true;
  outC->dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->dangerpoint.v_release = kcg_lit_int32(0);
  outC->dangerpoint.calc_v_release_onboard = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Normalize_DP_and_OL_LRBG_reset_TA_MA_new(
  outC_Normalize_DP_and_OL_LRBG_TA_MA_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Normalize_DP_and_OL_LRBG_TA_MA_new.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

