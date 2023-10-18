/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_SECTIONTIMER_to_bool_TM_conversions.h"

/* TM_conversions::CAST_Q_SECTIONTIMER_to_bool/ */
void CAST_Q_SECTIONTIMER_to_bool_TM_conversions(
  /* q_sectiontimer/ */
  Q_SECTIONTIMER q_sectiontimer,
  outC_CAST_Q_SECTIONTIMER_to_bool_TM_conversions *outC)
{
  /* q_sectiontimer_bool/ */
  static kcg_bool q_sectiontimer_bool_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* q_sectiontimer_bool/ */
  static kcg_bool _1_q_sectiontimer_bool_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* q_sectiontimer_bool/ */
  static kcg_bool _4_q_sectiontimer_bool_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* q_sectiontimer_bool/ */
  static kcg_bool _6_q_sectiontimer_bool_partial;
  static kcg_bool noname;

  outC->_L12 = q_sectiontimer;
  outC->q_sectiontimer_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_sectiontimer_in ==
    ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 = kcg_true;
    q_sectiontimer_bool_partial = outC->_L4_then_IfBlock1;
    outC->q_sectiontimer_bool = q_sectiontimer_bool_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_sectiontimer_in ==
      ENUM_Q_SECTIONTIMER_no_sectiontimer_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L5_then_else_IfBlock1;
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _6_q_sectiontimer_bool_partial = outC->_L3_then_else_IfBlock1;
      _1_q_sectiontimer_bool_partial = _6_q_sectiontimer_bool_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = kcg_true;
      _4_q_sectiontimer_bool_partial = outC->_L1_else_else_IfBlock1;
      _1_q_sectiontimer_bool_partial = _4_q_sectiontimer_bool_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->q_sectiontimer_bool = _1_q_sectiontimer_bool_partial;
    outC->error = _2_error_partial;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Q_SECTIONTIMER_to_bool_init_TM_conversions(
  outC_CAST_Q_SECTIONTIMER_to_bool_TM_conversions *outC)
{
  outC->_L12 = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L13 = kcg_true;
  outC->q_sectiontimer_in = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_true;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->q_sectiontimer_bool = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Q_SECTIONTIMER_to_bool_reset_TM_conversions(
  outC_CAST_Q_SECTIONTIMER_to_bool_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Q_SECTIONTIMER_to_bool_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

