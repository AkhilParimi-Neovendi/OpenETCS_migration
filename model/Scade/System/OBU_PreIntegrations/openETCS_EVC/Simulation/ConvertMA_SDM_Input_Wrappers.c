/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertMA_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertMA/ */
void ConvertMA_SDM_Input_Wrappers(
  /* Ma_in/ */
  MovementAuthority_t_TrackAtlasTypes *Ma_in,
  outC_ConvertMA_SDM_Input_Wrappers *outC)
{
  kcg_int32 acc;
  kcg_size idx;
  kcg_int32 noname;

  outC->_L205 = kcg_lit_int32(0);
  outC->_L201 = kcg_lit_int32(0);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L193, Ma_in);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L191,
    &outC->_L193.sections);
  outC->_L192 = outC->_L193.valid;
  outC->_L200 = outC->_L201;
  /* _L199= */
  if (outC->_L192) {
    /* _L199= */
    for (idx = 0; idx < 10; idx++) {
      acc = outC->_L200;
      /* _L199=(SDM_Input_Wrappers::SelectEndSection#2)/ */
      SelectEndSection_SDM_Input_Wrappers(
        acc,
        &outC->_L191[idx],
        &outC->Context_SelectEndSection_2[idx]);
      outC->_L200 = outC->Context_SelectEndSection_2[idx].eoa;
      outC->_L199 = /* _L199= */(kcg_int32) (idx + 1);
      /* _L199= */
      if (!outC->Context_SelectEndSection_2[idx].go_on) {
        break;
      }
    }
  }
  else {
    outC->_L199 = kcg_lit_int32(0);
  }
  outC->_L204 = outC->_L200 > outC->_L205;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->_L89, Ma_in);
  outC->_L133 = outC->_L89.valid;
  outC->_L202 = outC->_L133 & outC->_L204;
  noname = outC->_L199;
  outC->_L134 = outC->_L89.v_main;
  /* _L187=(SDM_Types_Pkg::TransformV_intToV_real#3)/ */
  TransformV_intToV_real_SDM_Types_Pkg(
    outC->_L134,
    &outC->_4_Context_TransformV_intToV_real_3);
  outC->_L187 = outC->_4_Context_TransformV_intToV_real_3.v_real;
  outC->_L186 = outC->_L89.Level;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L132, &outC->_L89.dangerpoint);
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L120, &outC->_L89.dangerpoint);
  outC->_L131 = outC->_L120.d_DP_or_OL;
  kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L117, &outC->_L89.overlap);
  outC->_L119 = outC->_L89.q_overlap;
  /* _L129= */
  if (outC->_L119) {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L129, &outC->_L117);
  }
  else {
    kcg_copy_DP_or_OL_t_TrackAtlasTypes(&outC->_L129, &outC->_L132);
  }
  outC->_L125 = outC->_L89.v_loa;
  outC->_L121 = outC->_L89.q_dangerpoint;
  outC->_L118 = outC->_L117.d_DP_or_OL;
  outC->_L116 = outC->_L129.calc_v_release_onboard;
  outC->_L115 = outC->_L129.v_release;
  /* _L21=(SDM_Types_Pkg::TransformL_intToL_real#2)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L200,
    &outC->_3_Context_TransformL_intToL_real_2);
  outC->_L21 = outC->_3_Context_TransformL_intToL_real_2.loc_real;
  /* _L23=(SDM_Types_Pkg::TransformV_intToV_real#2)/ */
  TransformV_intToV_real_SDM_Types_Pkg(
    outC->_L125,
    &outC->_2_Context_TransformV_intToV_real_2);
  outC->_L23 = outC->_2_Context_TransformV_intToV_real_2.v_real;
  outC->_L39.Location = outC->_L21;
  outC->_L39.TargetSpeed = outC->_L23;
  /* _L19=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L131,
    &outC->_1_Context_TransformL_intToL_real_1);
  outC->_L19 = outC->_1_Context_TransformL_intToL_real_1.loc_real;
  /* _L25=(SDM_Types_Pkg::TransformL_intToL_real#3)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L118,
    &outC->Context_TransformL_intToL_real_3);
  outC->_L25 = outC->Context_TransformL_intToL_real_3.loc_real;
  /* _L20=(SDM_Types_Pkg::TransformV_intToV_real#1)/ */
  TransformV_intToV_real_SDM_Types_Pkg(
    outC->_L115,
    &outC->Context_TransformV_intToV_real_1);
  outC->_L20 = outC->Context_TransformV_intToV_real_1.v_real;
  outC->_L114.valid = outC->_L202;
  outC->_L114.v_main = outC->_L187;
  kcg_copy_EOA_real_T_TargetManagement_types(&outC->_L114.EOA, &outC->_L39);
  outC->_L114.DP_valid = outC->_L121;
  outC->_L114.DangerPoint = outC->_L19;
  outC->_L114.OL_valid = outC->_L119;
  outC->_L114.Overlap = outC->_L25;
  outC->_L114.q_calculate_release = outC->_L116;
  outC->_L114.ReleaseSpeed = outC->_L20;
  outC->_L114.level = outC->_L186;
  kcg_copy_MA_section_real_T_TargetManagement_types(&outC->Ma_out, &outC->_L114);
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertMA_init_SDM_Input_Wrappers(outC_ConvertMA_SDM_Input_Wrappers *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  outC->_L205 = kcg_lit_int32(0);
  outC->_L204 = kcg_true;
  outC->_L202 = kcg_true;
  outC->_L201 = kcg_lit_int32(0);
  outC->_L200 = kcg_lit_int32(0);
  outC->_L199 = kcg_lit_int32(0);
  outC->_L193.valid = kcg_true;
  outC->_L193.Level = MA_L1_TrackAtlasTypes;
  outC->_L193.q_dir = Q_DIR_Reverse;
  outC->_L193.v_main = kcg_lit_int32(0);
  outC->_L193.v_loa = kcg_lit_int32(0);
  outC->_L193.t_loa_unlimited = kcg_true;
  outC->_L193.t_loa = kcg_lit_int32(0);
  outC->_L193.n_iter = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L193.sections[idx1].valid = kcg_true;
    outC->_L193.sections[idx1].q_endsection = kcg_true;
    outC->_L193.sections[idx1].l_section = kcg_lit_int32(0);
    outC->_L193.sections[idx1].q_sectiontimer = kcg_true;
    outC->_L193.sections[idx1].t_sectiontimer = kcg_lit_int32(0);
    outC->_L193.sections[idx1].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L193.q_dangerpoint = kcg_true;
  outC->_L193.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L193.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L193.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L193.q_overlap = kcg_true;
  outC->_L193.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L193.overlap.v_release = kcg_lit_int32(0);
  outC->_L193.overlap.calc_v_release_onboard = kcg_true;
  outC->_L193.q_endtimer = kcg_true;
  outC->_L193.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L193.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L191[idx2].valid = kcg_true;
    outC->_L191[idx2].q_endsection = kcg_true;
    outC->_L191[idx2].l_section = kcg_lit_int32(0);
    outC->_L191[idx2].q_sectiontimer = kcg_true;
    outC->_L191[idx2].t_sectiontimer = kcg_lit_int32(0);
    outC->_L191[idx2].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L192 = kcg_true;
  outC->_L187 = kcg_lit_float32(0.0);
  outC->_L186 = MA_L1_TrackAtlasTypes;
  outC->_L134 = kcg_lit_int32(0);
  outC->_L133 = kcg_true;
  outC->_L132.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L132.v_release = kcg_lit_int32(0);
  outC->_L132.calc_v_release_onboard = kcg_true;
  outC->_L131 = kcg_lit_int32(0);
  outC->_L129.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L129.v_release = kcg_lit_int32(0);
  outC->_L129.calc_v_release_onboard = kcg_true;
  outC->_L125 = kcg_lit_int32(0);
  outC->_L121 = kcg_true;
  outC->_L120.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L120.v_release = kcg_lit_int32(0);
  outC->_L120.calc_v_release_onboard = kcg_true;
  outC->_L119 = kcg_true;
  outC->_L118 = kcg_lit_int32(0);
  outC->_L117.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L117.v_release = kcg_lit_int32(0);
  outC->_L117.calc_v_release_onboard = kcg_true;
  outC->_L116 = kcg_true;
  outC->_L115 = kcg_lit_int32(0);
  outC->_L114.valid = kcg_true;
  outC->_L114.v_main = kcg_lit_float32(0.0);
  outC->_L114.EOA.Location = kcg_lit_float32(0.0);
  outC->_L114.EOA.TargetSpeed = kcg_lit_float32(0.0);
  outC->_L114.DP_valid = kcg_true;
  outC->_L114.DangerPoint = kcg_lit_float32(0.0);
  outC->_L114.OL_valid = kcg_true;
  outC->_L114.Overlap = kcg_lit_float32(0.0);
  outC->_L114.q_calculate_release = kcg_true;
  outC->_L114.ReleaseSpeed = kcg_lit_float32(0.0);
  outC->_L114.level = MA_L1_TrackAtlasTypes;
  outC->_L89.valid = kcg_true;
  outC->_L89.Level = MA_L1_TrackAtlasTypes;
  outC->_L89.q_dir = Q_DIR_Reverse;
  outC->_L89.v_main = kcg_lit_int32(0);
  outC->_L89.v_loa = kcg_lit_int32(0);
  outC->_L89.t_loa_unlimited = kcg_true;
  outC->_L89.t_loa = kcg_lit_int32(0);
  outC->_L89.n_iter = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L89.sections[idx3].valid = kcg_true;
    outC->_L89.sections[idx3].q_endsection = kcg_true;
    outC->_L89.sections[idx3].l_section = kcg_lit_int32(0);
    outC->_L89.sections[idx3].q_sectiontimer = kcg_true;
    outC->_L89.sections[idx3].t_sectiontimer = kcg_lit_int32(0);
    outC->_L89.sections[idx3].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L89.q_dangerpoint = kcg_true;
  outC->_L89.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L89.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L89.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L89.q_overlap = kcg_true;
  outC->_L89.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L89.overlap.v_release = kcg_lit_int32(0);
  outC->_L89.overlap.calc_v_release_onboard = kcg_true;
  outC->_L89.q_endtimer = kcg_true;
  outC->_L89.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L89.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L39.Location = kcg_lit_float32(0.0);
  outC->_L39.TargetSpeed = kcg_lit_float32(0.0);
  outC->_L25 = kcg_lit_float32(0.0);
  outC->_L23 = kcg_lit_float32(0.0);
  outC->_L21 = kcg_lit_float32(0.0);
  outC->_L20 = kcg_lit_float32(0.0);
  outC->_L19 = kcg_lit_float32(0.0);
  outC->Ma_out.valid = kcg_true;
  outC->Ma_out.v_main = kcg_lit_float32(0.0);
  outC->Ma_out.EOA.Location = kcg_lit_float32(0.0);
  outC->Ma_out.EOA.TargetSpeed = kcg_lit_float32(0.0);
  outC->Ma_out.DP_valid = kcg_true;
  outC->Ma_out.DangerPoint = kcg_lit_float32(0.0);
  outC->Ma_out.OL_valid = kcg_true;
  outC->Ma_out.Overlap = kcg_lit_float32(0.0);
  outC->Ma_out.q_calculate_release = kcg_true;
  outC->Ma_out.ReleaseSpeed = kcg_lit_float32(0.0);
  outC->Ma_out.level = MA_L1_TrackAtlasTypes;
  /* _L20=(SDM_Types_Pkg::TransformV_intToV_real#1)/ */
  TransformV_intToV_real_init_SDM_Types_Pkg(
    &outC->Context_TransformV_intToV_real_1);
  /* _L25=(SDM_Types_Pkg::TransformL_intToL_real#3)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_3);
  /* _L19=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->_1_Context_TransformL_intToL_real_1);
  /* _L23=(SDM_Types_Pkg::TransformV_intToV_real#2)/ */
  TransformV_intToV_real_init_SDM_Types_Pkg(
    &outC->_2_Context_TransformV_intToV_real_2);
  /* _L21=(SDM_Types_Pkg::TransformL_intToL_real#2)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->_3_Context_TransformL_intToL_real_2);
  /* _L187=(SDM_Types_Pkg::TransformV_intToV_real#3)/ */
  TransformV_intToV_real_init_SDM_Types_Pkg(
    &outC->_4_Context_TransformV_intToV_real_3);
  for (idx = 0; idx < 10; idx++) {
    /* _L199=(SDM_Input_Wrappers::SelectEndSection#2)/ */
    SelectEndSection_init_SDM_Input_Wrappers(
      &outC->Context_SelectEndSection_2[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertMA_reset_SDM_Input_Wrappers(outC_ConvertMA_SDM_Input_Wrappers *outC)
{
  kcg_size idx;

  /* _L20=(SDM_Types_Pkg::TransformV_intToV_real#1)/ */
  TransformV_intToV_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformV_intToV_real_1);
  /* _L25=(SDM_Types_Pkg::TransformL_intToL_real#3)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_3);
  /* _L19=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->_1_Context_TransformL_intToL_real_1);
  /* _L23=(SDM_Types_Pkg::TransformV_intToV_real#2)/ */
  TransformV_intToV_real_reset_SDM_Types_Pkg(
    &outC->_2_Context_TransformV_intToV_real_2);
  /* _L21=(SDM_Types_Pkg::TransformL_intToL_real#2)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->_3_Context_TransformL_intToL_real_2);
  /* _L187=(SDM_Types_Pkg::TransformV_intToV_real#3)/ */
  TransformV_intToV_real_reset_SDM_Types_Pkg(
    &outC->_4_Context_TransformV_intToV_real_3);
  for (idx = 0; idx < 10; idx++) {
    /* _L199=(SDM_Input_Wrappers::SelectEndSection#2)/ */
    SelectEndSection_reset_SDM_Input_Wrappers(
      &outC->Context_SelectEndSection_2[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertMA_SDM_Input_Wrappers.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

