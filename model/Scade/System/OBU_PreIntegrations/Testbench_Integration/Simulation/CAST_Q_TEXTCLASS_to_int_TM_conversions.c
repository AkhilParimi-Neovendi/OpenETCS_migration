/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_TEXTCLASS_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_TEXTCLASS_to_int/ */
void CAST_Q_TEXTCLASS_to_int_TM_conversions(
  /* q_textclass_int/ */
  Q_TEXTCLASS q_textclass_int,
  outC_CAST_Q_TEXTCLASS_to_int_TM_conversions *outC)
{
  /* d/ */
  static kcg_int64 d_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* d/ */
  static kcg_int64 _1_d_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* d/ */
  static kcg_int64 _4_d_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* d/ */
  static kcg_int64 _6_d_partial;
  static kcg_bool noname;

  outC->_L12 = q_textclass_int;
  outC->q_textclass_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_textclass_in ==
    ENUM_Q_TEXTCLASS_important_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 = INT_Q_TEXTCLASS_important_TM_conversions;
    d_partial = outC->_L4_then_IfBlock1;
    outC->d = d_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_textclass_in ==
      ENUM_Q_TEXTCLASS_aux_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L5_then_else_IfBlock1;
      outC->_L3_then_else_IfBlock1 = INT_Q_TEXTCLASS_aux_TM_conversions;
      _6_d_partial = outC->_L3_then_else_IfBlock1;
      _1_d_partial = _6_d_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = INT_Q_TEXTCLASS_important_TM_conversions;
      _4_d_partial = outC->_L1_else_else_IfBlock1;
      _1_d_partial = _4_d_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->d = _1_d_partial;
    outC->error = _2_error_partial;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Q_TEXTCLASS_to_int_init_TM_conversions(
  outC_CAST_Q_TEXTCLASS_to_int_TM_conversions *outC)
{
  outC->_L12 = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L13 = kcg_true;
  outC->q_textclass_in = Q_TEXTCLASS_Auxiliary_Information;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->d = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Q_TEXTCLASS_to_int_reset_TM_conversions(
  outC_CAST_Q_TEXTCLASS_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Q_TEXTCLASS_to_int_TM_conversions.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

