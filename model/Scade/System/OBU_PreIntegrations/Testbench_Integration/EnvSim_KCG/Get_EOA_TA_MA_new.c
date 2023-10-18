/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Get_EOA_TA_MA_new.h"

/* TA_MA_new::Get_EOA/ */
void Get_EOA_TA_MA_new(
  /* MA_absolute/ */
  MovementAuthority_t_TrackAtlasTypes *MA_absolute,
  outC_Get_EOA_TA_MA_new *outC)
{
  static kcg_size idx;
  static L_internal_Type_Obu_BasicTypes_Pkg acc;
  static kcg_size idx1;
  static kcg_int64 noname;

  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L6, MA_absolute);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L37,
    &outC->_L6.sections);
  /* _L38/ */
  for (idx = 0; idx < 10; idx++) {
    kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &outC->_L38[idx],
      &outC->_L37);
  }
  outC->_L5 = DEFAULT_loc_TA_MA_new;
  outC->_L3 = kcg_true;
  outC->_L4 = outC->_L5;
  /* _L2= */
  if (outC->_L3) {
    /* _L2= */
    for (idx1 = 0; idx1 < 10; idx1++) {
      acc = outC->_L4;
      /* _L2=(TA_MA_new::Get_EOA_loop#1)/ */
      Get_EOA_loop_TA_MA_new(
        /* _L2= */(kcg_int64) idx1,
        acc,
        &outC->_L38[idx1],
        &outC->Context_Get_EOA_loop_1[idx1]);
      outC->_L4 = outC->Context_Get_EOA_loop_1[idx1].currentEOA;
      outC->_L2 = /* _L2= */(kcg_int64) (idx1 + 1);
      /* _L2= */
      if (!outC->Context_Get_EOA_loop_1[idx1].cont) {
        break;
      }
    }
  }
  else {
    outC->_L2 = kcg_lit_int64(0);
  }
  outC->currentEOA = outC->_L4;
  noname = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void Get_EOA_init_TA_MA_new(outC_Get_EOA_TA_MA_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  for (idx2 = 0; idx2 < 10; idx2++) {
    for (idx1 = 0; idx1 < 10; idx1++) {
      outC->_L38[idx2][idx1].valid = kcg_true;
      outC->_L38[idx2][idx1].q_endsection = kcg_true;
      outC->_L38[idx2][idx1].l_section = kcg_lit_int64(0);
      outC->_L38[idx2][idx1].q_sectiontimer = kcg_true;
      outC->_L38[idx2][idx1].t_sectiontimer = kcg_lit_int64(0);
      outC->_L38[idx2][idx1].d_sectiontimerstoploc = kcg_lit_int64(0);
    }
  }
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L37[idx3].valid = kcg_true;
    outC->_L37[idx3].q_endsection = kcg_true;
    outC->_L37[idx3].l_section = kcg_lit_int64(0);
    outC->_L37[idx3].q_sectiontimer = kcg_true;
    outC->_L37[idx3].t_sectiontimer = kcg_lit_int64(0);
    outC->_L37[idx3].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L6.valid = kcg_true;
  outC->_L6.Level = MA_L1_TrackAtlasTypes;
  outC->_L6.q_dir = Q_DIR_Reverse;
  outC->_L6.v_main = kcg_lit_int64(0);
  outC->_L6.v_loa = kcg_lit_int64(0);
  outC->_L6.t_loa_unlimited = kcg_true;
  outC->_L6.t_loa = kcg_lit_int64(0);
  outC->_L6.n_iter = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->_L6.sections[idx4].valid = kcg_true;
    outC->_L6.sections[idx4].q_endsection = kcg_true;
    outC->_L6.sections[idx4].l_section = kcg_lit_int64(0);
    outC->_L6.sections[idx4].q_sectiontimer = kcg_true;
    outC->_L6.sections[idx4].t_sectiontimer = kcg_lit_int64(0);
    outC->_L6.sections[idx4].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L6.q_dangerpoint = kcg_true;
  outC->_L6.dangerpoint.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L6.dangerpoint.v_release = kcg_lit_int64(0);
  outC->_L6.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L6.q_overlap = kcg_true;
  outC->_L6.overlap.d_DP_or_OL = kcg_lit_int64(0);
  outC->_L6.overlap.v_release = kcg_lit_int64(0);
  outC->_L6.overlap.calc_v_release_onboard = kcg_true;
  outC->_L6.q_endtimer = kcg_true;
  outC->_L6.endtimer_t.t_endtimer = kcg_lit_int64(0);
  outC->_L6.endtimer_t.d_endtimerstoploc = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->currentEOA = kcg_lit_int64(0);
  for (idx = 0; idx < 10; idx++) {
    /* _L2=(TA_MA_new::Get_EOA_loop#1)/ */
    Get_EOA_loop_init_TA_MA_new(&outC->Context_Get_EOA_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Get_EOA_reset_TA_MA_new(outC_Get_EOA_TA_MA_new *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 10; idx++) {
    /* _L2=(TA_MA_new::Get_EOA_loop#1)/ */
    Get_EOA_loop_reset_TA_MA_new(&outC->Context_Get_EOA_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Get_EOA_TA_MA_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

