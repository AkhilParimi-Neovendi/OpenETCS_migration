/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_to_legacy_t_TM_conversions.h"

/* TM_conversions::C_P015_to_legacy_t/ */
void C_P015_to_legacy_t_TM_conversions(
  /* P015_in/ */
  P015_OBU_T_TM *P015_in,
  outC_C_P015_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  kcg_copy_P015_OBU_T_TM(&outC->_L1, P015_in);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L45, &outC->_L1.sections);
  /* _L26/ */
  for (idx = 0; idx < 5; idx++) {
    kcg_copy_P015_OBU_T_TM(&outC->_L26[idx], &outC->_L1);
  }
  /* _L23/ */
  for (idx1 = 0; idx1 < 5; idx1++) {
    kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L23[idx1], &outC->_L45);
  }
  /* _L20= */
  for (idx2 = 0; idx2 < 5; idx2++) {
    /* _L20=(TM_conversions::C_P015_to_legacy_loop#1)/ */
    C_P015_to_legacy_loop_TM_conversions(
      /* _L20= */(kcg_int32) idx2,
      &outC->_L26[idx2],
      &outC->_L23[idx2],
      &outC->Context_C_P015_to_legacy_loop_1[idx2]);
    kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg(
      &outC->_L20[idx2],
      &outC->Context_C_P015_to_legacy_loop_1[idx2].P015_legacy_out);
  }
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &outC->P015_legacy_out,
    &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P015_to_legacy_t_init_TM_conversions(
  outC_C_P015_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;

  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L45[idx1].valid = kcg_true;
    outC->_L45[idx1].l_section = kcg_lit_int32(0);
    outC->_L45[idx1].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L45[idx1].t_sectiontimer = kcg_lit_int32(0);
    outC->_L45[idx1].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L26[idx3].valid = kcg_true;
    outC->_L26[idx3].q_dir = Q_DIR_Reverse;
    outC->_L26[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L26[idx3].v_loa = kcg_lit_int32(0);
    outC->_L26[idx3].t_loa = kcg_lit_int32(0);
    outC->_L26[idx3].n_iter = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 32; idx2++) {
      outC->_L26[idx3].sections[idx2].valid = kcg_true;
      outC->_L26[idx3].sections[idx2].l_section = kcg_lit_int32(0);
      outC->_L26[idx3].sections[idx2].q_sectiontimer =
        Q_SECTIONTIMER_No_Section_Timer_information;
      outC->_L26[idx3].sections[idx2].t_sectiontimer = kcg_lit_int32(0);
      outC->_L26[idx3].sections[idx2].d_sectiontimerstoploc = kcg_lit_int32(0);
    }
    outC->_L26[idx3].l_endsection = kcg_lit_int32(0);
    outC->_L26[idx3].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L26[idx3].t_sectiontimer = kcg_lit_int32(0);
    outC->_L26[idx3].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L26[idx3].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L26[idx3].t_endtimer = kcg_lit_int32(0);
    outC->_L26[idx3].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L26[idx3].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L26[idx3].d_dp = kcg_lit_int32(0);
    outC->_L26[idx3].v_releasedp = kcg_lit_int32(0);
    outC->_L26[idx3].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L26[idx3].d_startol = kcg_lit_int32(0);
    outC->_L26[idx3].t_ol = kcg_lit_int32(0);
    outC->_L26[idx3].d_ol = kcg_lit_int32(0);
    outC->_L26[idx3].v_releaseol = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    for (idx4 = 0; idx4 < 32; idx4++) {
      outC->_L23[idx5][idx4].valid = kcg_true;
      outC->_L23[idx5][idx4].l_section = kcg_lit_int32(0);
      outC->_L23[idx5][idx4].q_sectiontimer =
        Q_SECTIONTIMER_No_Section_Timer_information;
      outC->_L23[idx5][idx4].t_sectiontimer = kcg_lit_int32(0);
      outC->_L23[idx5][idx4].d_sectiontimerstoploc = kcg_lit_int32(0);
    }
  }
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L20[idx6].valid = kcg_true;
    outC->_L20[idx6].q_dir = Q_DIR_Reverse;
    outC->_L20[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L20[idx6].v_loa = kcg_lit_int32(0);
    outC->_L20[idx6].t_loa = kcg_lit_int32(0);
    outC->_L20[idx6].l_section = kcg_lit_int32(0);
    outC->_L20[idx6].q_sectiontimer_k = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L20[idx6].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L20[idx6].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L20[idx6].l_endsection = kcg_lit_int32(0);
    outC->_L20[idx6].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L20[idx6].t_sectiontimer = kcg_lit_int32(0);
    outC->_L20[idx6].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L20[idx6].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L20[idx6].t_endtimer = kcg_lit_int32(0);
    outC->_L20[idx6].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L20[idx6].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L20[idx6].d_dp = kcg_lit_int32(0);
    outC->_L20[idx6].v_releasedp = kcg_lit_int32(0);
    outC->_L20[idx6].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L20[idx6].d_startol = kcg_lit_int32(0);
    outC->_L20[idx6].t_ol = kcg_lit_int32(0);
    outC->_L20[idx6].d_ol = kcg_lit_int32(0);
    outC->_L20[idx6].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.v_loa = kcg_lit_int32(0);
  outC->_L1.t_loa = kcg_lit_int32(0);
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L1.sections[idx7].valid = kcg_true;
    outC->_L1.sections[idx7].l_section = kcg_lit_int32(0);
    outC->_L1.sections[idx7].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.sections[idx7].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1.sections[idx7].d_sectiontimerstoploc = kcg_lit_int32(0);
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
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->P015_legacy_out[idx8].valid = kcg_true;
    outC->P015_legacy_out[idx8].q_dir = Q_DIR_Reverse;
    outC->P015_legacy_out[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->P015_legacy_out[idx8].v_loa = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].t_loa = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].l_section = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->P015_legacy_out[idx8].t_sectiontimer_k = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].l_endsection = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->P015_legacy_out[idx8].t_sectiontimer = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->P015_legacy_out[idx8].t_endtimer = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].d_endtimerstartloc = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->P015_legacy_out[idx8].d_dp = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].v_releasedp = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->P015_legacy_out[idx8].d_startol = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].t_ol = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].d_ol = kcg_lit_int32(0);
    outC->P015_legacy_out[idx8].v_releaseol = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 5; idx++) {
    /* _L20=(TM_conversions::C_P015_to_legacy_loop#1)/ */
    C_P015_to_legacy_loop_init_TM_conversions(
      &outC->Context_C_P015_to_legacy_loop_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P015_to_legacy_t_reset_TM_conversions(
  outC_C_P015_to_legacy_t_TM_conversions *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 5; idx++) {
    /* _L20=(TM_conversions::C_P015_to_legacy_loop#1)/ */
    C_P015_to_legacy_loop_reset_TM_conversions(
      &outC->Context_C_P015_to_legacy_loop_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P015_to_legacy_t_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

