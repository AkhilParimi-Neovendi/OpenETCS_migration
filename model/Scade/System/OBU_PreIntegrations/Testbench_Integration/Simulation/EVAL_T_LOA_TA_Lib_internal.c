/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_T_LOA_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_T_LOA/ */
void EVAL_T_LOA_TA_Lib_internal(
  /* t_loa/ */
  P015_OBU_T_TM *t_loa,
  outC_EVAL_T_LOA_TA_Lib_internal *outC)
{
  kcg_copy_P015_OBU_T_TM(&outC->_L1, t_loa);
  outC->_L11 = outC->_L1.t_loa;
  outC->_L10 = kcg_lit_int64(1023);
  outC->_L9 = outC->_L10 == outC->_L11;
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(1000);
  outC->_L5 = kcg_lit_int64(1023);
  outC->_L4 = outC->_L11 < outC->_L5;
  /* _L6= */
  if (outC->_L4) {
    outC->_L6 = outC->_L7;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  outC->_L3 = outC->_L11 * outC->_L6;
  outC->t_loa_out = outC->_L3;
  outC->t_loa_unlimited = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void EVAL_T_LOA_init_TA_Lib_internal(outC_EVAL_T_LOA_TA_Lib_internal *outC)
{
  static kcg_size idx;

  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.v_loa = kcg_lit_int64(0);
  outC->_L1.t_loa = kcg_lit_int64(0);
  outC->_L1.n_iter = kcg_lit_int64(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L1.sections[idx].valid = kcg_true;
    outC->_L1.sections[idx].l_section = kcg_lit_int64(0);
    outC->_L1.sections[idx].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.sections[idx].t_sectiontimer = kcg_lit_int64(0);
    outC->_L1.sections[idx].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L1.l_endsection = kcg_lit_int64(0);
  outC->_L1.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L1.t_sectiontimer = kcg_lit_int64(0);
  outC->_L1.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->_L1.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L1.t_endtimer = kcg_lit_int64(0);
  outC->_L1.d_endtimerstartloc = kcg_lit_int64(0);
  outC->_L1.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L1.d_dp = kcg_lit_int64(0);
  outC->_L1.v_releasedp = kcg_lit_int64(0);
  outC->_L1.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L1.d_startol = kcg_lit_int64(0);
  outC->_L1.t_ol = kcg_lit_int64(0);
  outC->_L1.d_ol = kcg_lit_int64(0);
  outC->_L1.v_releaseol = kcg_lit_int64(0);
  outC->t_loa_out = kcg_lit_int64(0);
  outC->t_loa_unlimited = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EVAL_T_LOA_reset_TA_Lib_internal(outC_EVAL_T_LOA_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVAL_T_LOA_TA_Lib_internal.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

