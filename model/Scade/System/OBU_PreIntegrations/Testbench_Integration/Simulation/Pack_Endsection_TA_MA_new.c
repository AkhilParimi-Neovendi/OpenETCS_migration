/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Pack_Endsection_TA_MA_new.h"

/* TA_MA_new::Pack_Endsection/ */
void Pack_Endsection_TA_MA_new(
  /* Packet15_in/ */
  P015_OBU_T_TM *Packet15_in,
  outC_Pack_Endsection_TA_MA_new *outC)
{
  kcg_copy_P015_OBU_T_TM(&outC->_L1, Packet15_in);
  outC->_L54 = outC->_L1.q_sectiontimer;
  outC->_L53 = outC->_L1.t_sectiontimer;
  outC->_L52 = outC->_L1.d_sectiontimerstoploc;
  outC->_L48 = outC->_L1.l_endsection;
  outC->_L47 = kcg_true;
  outC->_L46.valid = outC->_L47;
  outC->_L46.l_section = outC->_L48;
  outC->_L46.q_sectiontimer = outC->_L54;
  outC->_L46.t_sectiontimer = outC->_L53;
  outC->_L46.d_sectiontimerstoploc = outC->_L52;
  kcg_copy_P015_section_enum_T_TM(&outC->endsection, &outC->_L46);
}

#ifndef KCG_USER_DEFINED_INIT
void Pack_Endsection_init_TA_MA_new(outC_Pack_Endsection_TA_MA_new *outC)
{
  static kcg_size idx;

  outC->_L53 = kcg_lit_int32(0);
  outC->_L54 = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L52 = kcg_lit_int32(0);
  outC->_L48 = kcg_lit_int32(0);
  outC->_L47 = kcg_true;
  outC->_L46.valid = kcg_true;
  outC->_L46.l_section = kcg_lit_int32(0);
  outC->_L46.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L46.t_sectiontimer = kcg_lit_int32(0);
  outC->_L46.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.v_loa = kcg_lit_int32(0);
  outC->_L1.t_loa = kcg_lit_int32(0);
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L1.sections[idx].valid = kcg_true;
    outC->_L1.sections[idx].l_section = kcg_lit_int32(0);
    outC->_L1.sections[idx].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.sections[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L1.sections[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
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
  outC->endsection.valid = kcg_true;
  outC->endsection.l_section = kcg_lit_int32(0);
  outC->endsection.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->endsection.t_sectiontimer = kcg_lit_int32(0);
  outC->endsection.d_sectiontimerstoploc = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Pack_Endsection_reset_TA_MA_new(outC_Pack_Endsection_TA_MA_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Pack_Endsection_TA_MA_new.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

