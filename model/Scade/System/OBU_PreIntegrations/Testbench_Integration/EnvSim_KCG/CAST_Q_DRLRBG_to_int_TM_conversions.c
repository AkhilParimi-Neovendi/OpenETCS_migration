/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_DRLRBG_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_DRLRBG_to_int/ */
void CAST_Q_DRLRBG_to_int_TM_conversions(
  /* q_drlrbg/ */
  Q_DLRBG q_drlrbg,
  outC_CAST_Q_DRLRBG_to_int_TM_conversions *outC)
{
  /* q_drlrbg_int/ */
  static kcg_int64 q_drlrbg_int_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* q_drlrbg_int/ */
  static kcg_int64 _1_q_drlrbg_int_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* q_drlrbg_int/ */
  static kcg_int64 _3_q_drlrbg_int_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* q_drlrbg_int/ */
  static kcg_int64 _5_q_drlrbg_int_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* q_drlrbg_int/ */
  static kcg_int64 _8_q_drlrbg_int_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* q_drlrbg_int/ */
  static kcg_int64 _10_q_drlrbg_int_partial;
  static kcg_bool noname;

  outC->_L12 = q_drlrbg;
  outC->q_drlrbg_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_drlrbg_in == ENUM_Q_DLRBG_nominal_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 = INT_Q_DLRBG_nominal_TM_conversions;
    q_drlrbg_int_partial = outC->_L4_then_IfBlock1;
    outC->q_drlrbg_int = q_drlrbg_int_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_drlrbg_in ==
      ENUM_Q_DLRBG_reverse_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _9_error_partial = outC->_L5_then_else_IfBlock1;
      outC->_L3_then_else_IfBlock1 = INT_Q_DLRBG_reverse_TM_conversions;
      _10_q_drlrbg_int_partial = outC->_L3_then_else_IfBlock1;
      _1_q_drlrbg_int_partial = _10_q_drlrbg_int_partial;
      _2_error_partial = _9_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->q_drlrbg_in ==
        ENUM_Q_DLRBG_unknown_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1 = INT_Q_DLRBG_unknown_TM_conversions;
        _3_q_drlrbg_int_partial = outC->_L2_then_else_else_IfBlock1;
        _8_q_drlrbg_int_partial = _3_q_drlrbg_int_partial;
        _7_error_partial = _4_error_partial;
      }
      else {
        outC->_L2_else_else_else_IfBlock1 = INT_Q_DLRBG_unknown_TM_conversions;
        outC->_L1_else_else_else_IfBlock1 = kcg_true;
        _6_error_partial = outC->_L1_else_else_else_IfBlock1;
        _5_q_drlrbg_int_partial = outC->_L2_else_else_else_IfBlock1;
        _8_q_drlrbg_int_partial = _5_q_drlrbg_int_partial;
        _7_error_partial = _6_error_partial;
      }
      _1_q_drlrbg_int_partial = _8_q_drlrbg_int_partial;
      _2_error_partial = _7_error_partial;
    }
    outC->q_drlrbg_int = _1_q_drlrbg_int_partial;
    outC->error = _2_error_partial;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Q_DRLRBG_to_int_init_TM_conversions(
  outC_CAST_Q_DRLRBG_to_int_TM_conversions *outC)
{
  outC->_L12 = Q_DLRBG_Reverse;
  outC->_L13 = kcg_true;
  outC->q_drlrbg_in = Q_DLRBG_Reverse;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->q_drlrbg_int = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Q_DRLRBG_to_int_reset_TM_conversions(
  outC_CAST_Q_DRLRBG_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Q_DRLRBG_to_int_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

