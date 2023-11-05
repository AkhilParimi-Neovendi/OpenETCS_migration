/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_to_legacy_loop_TM_conversions.h"

/* TM_conversions::C_P015_to_legacy_loop/ */
void C_P015_to_legacy_loop_TM_conversions(
  /* i/ */
  kcg_int32 i,
  /* P015_in/ */
  P015_OBU_T_TM *P015_in,
  /* P015_section_in/ */
  P015_OBU_sectionlist_enum_T_TM *P015_section_in,
  outC_C_P015_to_legacy_loop_TM_conversions *outC)
{
  outC->_L159 = kcg_lit_int32(0);
  outC->_L157 = i;
  outC->_L158 = outC->_L157 > outC->_L159;
  kcg_copy_P015_OBU_T_TM(&outC->_L132, P015_in);
  outC->_L155 = outC->_L132.valid;
  outC->_L20 = i;
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L1, P015_section_in);
  if ((kcg_lit_int32(0) <= outC->_L20) & (outC->_L20 < kcg_lit_int32(32))) {
    kcg_copy_P015_section_enum_T_TM(&outC->_L21, &outC->_L1[outC->_L20]);
  }
  else {
    kcg_copy_P015_section_enum_T_TM(
      &outC->_L21,
      (P015_section_enum_T_TM *) &DEFAULT_P015_OBU_section_TM);
  }
  outC->_L85 = outC->_L21.valid;
  /* _L156= */
  if (outC->_L158) {
    outC->_L156 = outC->_L85;
  }
  else {
    outC->_L156 = outC->_L155;
  }
  kcg_copy_P015_OBU_T_TM(&outC->_L137, P015_in);
  outC->_L154 = outC->_L137.v_releaseol;
  outC->_L153 = outC->_L137.d_ol;
  outC->_L152 = outC->_L137.t_ol;
  outC->_L151 = outC->_L137.d_startol;
  outC->_L150 = outC->_L137.q_overlap;
  outC->_L149 = outC->_L137.v_releasedp;
  outC->_L147 = outC->_L137.d_dp;
  outC->_L146 = outC->_L137.q_dangerpoint;
  outC->_L145 = outC->_L137.d_endtimerstartloc;
  outC->_L144 = outC->_L137.t_endtimer;
  outC->_L143 = outC->_L137.q_endtimer;
  outC->_L142 = outC->_L137.d_sectiontimerstoploc;
  outC->_L140 = outC->_L137.t_sectiontimer;
  outC->_L139 = outC->_L137.q_sectiontimer;
  outC->_L138 = outC->_L137.l_endsection;
  outC->_L136 = outC->_L132.t_loa;
  outC->_L135 = outC->_L132.v_loa;
  outC->_L134 = outC->_L132.q_scale;
  outC->_L133 = outC->_L132.q_dir;
  outC->_L89 = outC->_L21.d_sectiontimerstoploc;
  outC->_L88 = outC->_L21.t_sectiontimer;
  outC->_L87 = outC->_L21.q_sectiontimer;
  outC->_L86 = outC->_L21.l_section;
  outC->_L2.valid = outC->_L156;
  outC->_L2.q_dir = outC->_L133;
  outC->_L2.q_scale = outC->_L134;
  outC->_L2.v_loa = outC->_L135;
  outC->_L2.t_loa = outC->_L136;
  outC->_L2.l_section = outC->_L86;
  outC->_L2.q_sectiontimer_k = outC->_L87;
  outC->_L2.t_sectiontimer_k = outC->_L88;
  outC->_L2.d_sectiontimerstoploc_k = outC->_L89;
  outC->_L2.l_endsection = outC->_L138;
  outC->_L2.q_sectiontimer = outC->_L139;
  outC->_L2.t_sectiontimer = outC->_L140;
  outC->_L2.d_sectiontimerstoploc = outC->_L142;
  outC->_L2.q_endtimer = outC->_L143;
  outC->_L2.t_endtimer = outC->_L144;
  outC->_L2.d_endtimerstartloc = outC->_L145;
  outC->_L2.q_dangerpoint = outC->_L146;
  outC->_L2.d_dp = outC->_L147;
  outC->_L2.v_releasedp = outC->_L149;
  outC->_L2.q_overlap = outC->_L150;
  outC->_L2.d_startol = outC->_L151;
  outC->_L2.t_ol = outC->_L152;
  outC->_L2.d_ol = outC->_L153;
  outC->_L2.v_releaseol = outC->_L154;
  kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg(
    &outC->P015_legacy_out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P015_to_legacy_loop_init_TM_conversions(
  outC_C_P015_to_legacy_loop_TM_conversions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L159 = kcg_lit_int32(0);
  outC->_L158 = kcg_true;
  outC->_L157 = kcg_lit_int32(0);
  outC->_L156 = kcg_true;
  outC->_L155 = kcg_true;
  outC->_L154 = kcg_lit_int32(0);
  outC->_L153 = kcg_lit_int32(0);
  outC->_L152 = kcg_lit_int32(0);
  outC->_L151 = kcg_lit_int32(0);
  outC->_L150 = Q_OVERLAP_No_overlap_information;
  outC->_L149 = kcg_lit_int32(0);
  outC->_L147 = kcg_lit_int32(0);
  outC->_L146 = Q_DANGERPOINT_No_danger_point_information;
  outC->_L145 = kcg_lit_int32(0);
  outC->_L144 = kcg_lit_int32(0);
  outC->_L143 = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L142 = kcg_lit_int32(0);
  outC->_L140 = kcg_lit_int32(0);
  outC->_L139 = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L138 = kcg_lit_int32(0);
  outC->_L137.valid = kcg_true;
  outC->_L137.q_dir = Q_DIR_Reverse;
  outC->_L137.q_scale = Q_SCALE_10_cm_scale;
  outC->_L137.v_loa = kcg_lit_int32(0);
  outC->_L137.t_loa = kcg_lit_int32(0);
  outC->_L137.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L137.sections[idx].valid = kcg_true;
    outC->_L137.sections[idx].l_section = kcg_lit_int32(0);
    outC->_L137.sections[idx].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L137.sections[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L137.sections[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L137.l_endsection = kcg_lit_int32(0);
  outC->_L137.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L137.t_sectiontimer = kcg_lit_int32(0);
  outC->_L137.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L137.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L137.t_endtimer = kcg_lit_int32(0);
  outC->_L137.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L137.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L137.d_dp = kcg_lit_int32(0);
  outC->_L137.v_releasedp = kcg_lit_int32(0);
  outC->_L137.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L137.d_startol = kcg_lit_int32(0);
  outC->_L137.t_ol = kcg_lit_int32(0);
  outC->_L137.d_ol = kcg_lit_int32(0);
  outC->_L137.v_releaseol = kcg_lit_int32(0);
  outC->_L136 = kcg_lit_int32(0);
  outC->_L135 = kcg_lit_int32(0);
  outC->_L134 = Q_SCALE_10_cm_scale;
  outC->_L133 = Q_DIR_Reverse;
  outC->_L132.valid = kcg_true;
  outC->_L132.q_dir = Q_DIR_Reverse;
  outC->_L132.q_scale = Q_SCALE_10_cm_scale;
  outC->_L132.v_loa = kcg_lit_int32(0);
  outC->_L132.t_loa = kcg_lit_int32(0);
  outC->_L132.n_iter = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L132.sections[idx1].valid = kcg_true;
    outC->_L132.sections[idx1].l_section = kcg_lit_int32(0);
    outC->_L132.sections[idx1].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L132.sections[idx1].t_sectiontimer = kcg_lit_int32(0);
    outC->_L132.sections[idx1].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L132.l_endsection = kcg_lit_int32(0);
  outC->_L132.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L132.t_sectiontimer = kcg_lit_int32(0);
  outC->_L132.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L132.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L132.t_endtimer = kcg_lit_int32(0);
  outC->_L132.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L132.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L132.d_dp = kcg_lit_int32(0);
  outC->_L132.v_releasedp = kcg_lit_int32(0);
  outC->_L132.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L132.d_startol = kcg_lit_int32(0);
  outC->_L132.t_ol = kcg_lit_int32(0);
  outC->_L132.d_ol = kcg_lit_int32(0);
  outC->_L132.v_releaseol = kcg_lit_int32(0);
  outC->_L89 = kcg_lit_int32(0);
  outC->_L88 = kcg_lit_int32(0);
  outC->_L87 = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L86 = kcg_lit_int32(0);
  outC->_L85 = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.l_section = kcg_lit_int32(0);
  outC->_L21.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L21.t_sectiontimer = kcg_lit_int32(0);
  outC->_L21.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.v_loa = kcg_lit_int32(0);
  outC->_L2.t_loa = kcg_lit_int32(0);
  outC->_L2.l_section = kcg_lit_int32(0);
  outC->_L2.q_sectiontimer_k = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L2.t_sectiontimer_k = kcg_lit_int32(0);
  outC->_L2.d_sectiontimerstoploc_k = kcg_lit_int32(0);
  outC->_L2.l_endsection = kcg_lit_int32(0);
  outC->_L2.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L2.t_sectiontimer = kcg_lit_int32(0);
  outC->_L2.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L2.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L2.t_endtimer = kcg_lit_int32(0);
  outC->_L2.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L2.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L2.d_dp = kcg_lit_int32(0);
  outC->_L2.v_releasedp = kcg_lit_int32(0);
  outC->_L2.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L2.d_startol = kcg_lit_int32(0);
  outC->_L2.t_ol = kcg_lit_int32(0);
  outC->_L2.d_ol = kcg_lit_int32(0);
  outC->_L2.v_releaseol = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L1[idx2].valid = kcg_true;
    outC->_L1[idx2].l_section = kcg_lit_int32(0);
    outC->_L1[idx2].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1[idx2].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1[idx2].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->P015_legacy_out.valid = kcg_true;
  outC->P015_legacy_out.q_dir = Q_DIR_Reverse;
  outC->P015_legacy_out.q_scale = Q_SCALE_10_cm_scale;
  outC->P015_legacy_out.v_loa = kcg_lit_int32(0);
  outC->P015_legacy_out.t_loa = kcg_lit_int32(0);
  outC->P015_legacy_out.l_section = kcg_lit_int32(0);
  outC->P015_legacy_out.q_sectiontimer_k =
    Q_SECTIONTIMER_No_Section_Timer_information;
  outC->P015_legacy_out.t_sectiontimer_k = kcg_lit_int32(0);
  outC->P015_legacy_out.d_sectiontimerstoploc_k = kcg_lit_int32(0);
  outC->P015_legacy_out.l_endsection = kcg_lit_int32(0);
  outC->P015_legacy_out.q_sectiontimer =
    Q_SECTIONTIMER_No_Section_Timer_information;
  outC->P015_legacy_out.t_sectiontimer = kcg_lit_int32(0);
  outC->P015_legacy_out.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->P015_legacy_out.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->P015_legacy_out.t_endtimer = kcg_lit_int32(0);
  outC->P015_legacy_out.d_endtimerstartloc = kcg_lit_int32(0);
  outC->P015_legacy_out.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->P015_legacy_out.d_dp = kcg_lit_int32(0);
  outC->P015_legacy_out.v_releasedp = kcg_lit_int32(0);
  outC->P015_legacy_out.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->P015_legacy_out.d_startol = kcg_lit_int32(0);
  outC->P015_legacy_out.t_ol = kcg_lit_int32(0);
  outC->P015_legacy_out.d_ol = kcg_lit_int32(0);
  outC->P015_legacy_out.v_releaseol = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P015_to_legacy_loop_reset_TM_conversions(
  outC_C_P015_to_legacy_loop_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P015_to_legacy_loop_TM_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

