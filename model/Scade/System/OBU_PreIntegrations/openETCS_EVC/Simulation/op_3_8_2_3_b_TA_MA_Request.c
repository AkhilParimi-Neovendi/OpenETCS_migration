/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_b_TA_MA_Request.h"

/* TA_MA_Request::op_3_8_2_3_b/ */
void op_3_8_2_3_b_TA_MA_Request(
  /* t_timeoutrqst/ */
  kcg_int32 t_timeoutrqst,
  /* ma_s/ */
  MovementAuthority_t_TrackAtlasTypes *ma_s,
  outC_op_3_8_2_3_b_TA_MA_Request *outC)
{
  kcg_int32 acc;
  kcg_size idx;

  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L1, ma_s);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L11,
    &outC->_L1.sections);
  outC->_L5 = kcg_lit_int32(10000);
  outC->_L6 = outC->_L5;
  /* _L6= */
  for (idx = 0; idx < 10; idx++) {
    acc = outC->_L6;
    /* _L6=(TA_MA_Request::CompareSectionTimer#1)/ */
    CompareSectionTimer_TA_MA_Request(
      acc,
      &outC->_L11[idx],
      &outC->Context_CompareSectionTimer_1[idx]);
    outC->_L6 = outC->Context_CompareSectionTimer_1[idx].smallestTimer;
  }
  outC->_L3 = t_timeoutrqst;
  outC->_L10 = outC->_L3 <= outC->_L6;
  outC->_L7 = outC->_L1.t_loa;
  outC->_L8 = outC->_L3 <= outC->_L7;
  outC->_L9 = outC->_L10 | outC->_L8;
  outC->triggerMA = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void op_3_8_2_3_b_init_TA_MA_Request(outC_op_3_8_2_3_b_TA_MA_Request *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L11[idx1].valid = kcg_true;
    outC->_L11[idx1].q_endsection = kcg_true;
    outC->_L11[idx1].l_section = kcg_lit_int32(0);
    outC->_L11[idx1].q_sectiontimer = kcg_true;
    outC->_L11[idx1].t_sectiontimer = kcg_lit_int32(0);
    outC->_L11[idx1].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.Level = MA_L1_TrackAtlasTypes;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.v_main = kcg_lit_int32(0);
  outC->_L1.v_loa = kcg_lit_int32(0);
  outC->_L1.t_loa_unlimited = kcg_true;
  outC->_L1.t_loa = kcg_lit_int32(0);
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L1.sections[idx2].valid = kcg_true;
    outC->_L1.sections[idx2].q_endsection = kcg_true;
    outC->_L1.sections[idx2].l_section = kcg_lit_int32(0);
    outC->_L1.sections[idx2].q_sectiontimer = kcg_true;
    outC->_L1.sections[idx2].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1.sections[idx2].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L1.q_dangerpoint = kcg_true;
  outC->_L1.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L1.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L1.q_overlap = kcg_true;
  outC->_L1.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L1.overlap.v_release = kcg_lit_int32(0);
  outC->_L1.overlap.calc_v_release_onboard = kcg_true;
  outC->_L1.q_endtimer = kcg_true;
  outC->_L1.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L1.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->triggerMA = kcg_true;
  for (idx = 0; idx < 10; idx++) {
    /* _L6=(TA_MA_Request::CompareSectionTimer#1)/ */
    CompareSectionTimer_init_TA_MA_Request(
      &outC->Context_CompareSectionTimer_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_8_2_3_b_reset_TA_MA_Request(outC_op_3_8_2_3_b_TA_MA_Request *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 10; idx++) {
    /* _L6=(TA_MA_Request::CompareSectionTimer#1)/ */
    CompareSectionTimer_reset_TA_MA_Request(
      &outC->Context_CompareSectionTimer_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_8_2_3_b_TA_MA_Request.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

