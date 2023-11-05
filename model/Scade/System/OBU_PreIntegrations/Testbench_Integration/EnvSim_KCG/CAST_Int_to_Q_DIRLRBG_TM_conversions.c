/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_DIRLRBG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_DIRLRBG/ */
void CAST_Int_to_Q_DIRLRBG_TM_conversions(
  /* q_dirlrbg_int/ */
  kcg_int32 q_dirlrbg_int,
  outC_CAST_Int_to_Q_DIRLRBG_TM_conversions *outC)
{
  /* q_dirlrbg/ */
  static Q_DIRLRBG q_dirlrbg_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* q_dirlrbg/ */
  static Q_DIRLRBG _1_q_dirlrbg_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* q_dirlrbg/ */
  static Q_DIRLRBG _3_q_dirlrbg_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* q_dirlrbg/ */
  static Q_DIRLRBG _5_q_dirlrbg_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* q_dirlrbg/ */
  static Q_DIRLRBG _8_q_dirlrbg_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* q_dirlrbg/ */
  static Q_DIRLRBG _10_q_dirlrbg_partial;
  static kcg_bool noname;

  outC->_L12 = q_dirlrbg_int;
  outC->q_dirlrbg_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_dirlrbg_in ==
    INT_Q_DIRLRBG_nominal_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 = ENUM_Q_DIRLRBG_nominal_TM_conversions;
    q_dirlrbg_partial = outC->_L4_then_IfBlock1;
    outC->q_dirlrbg = q_dirlrbg_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_dirlrbg_in ==
      INT_Q_DIRLRBG_reverse_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _9_error_partial = outC->_L5_then_else_IfBlock1;
      outC->_L3_then_else_IfBlock1 = ENUM_Q_DIRLRBG_reverse_TM_conversions;
      _10_q_dirlrbg_partial = outC->_L3_then_else_IfBlock1;
      _1_q_dirlrbg_partial = _10_q_dirlrbg_partial;
      _2_error_partial = _9_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->q_dirlrbg_in ==
        INT_Q_DIRLRBG_unknown_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1 = ENUM_Q_DIRLRBG_unknown_TM_conversions;
        _3_q_dirlrbg_partial = outC->_L2_then_else_else_IfBlock1;
        _8_q_dirlrbg_partial = _3_q_dirlrbg_partial;
        _7_error_partial = _4_error_partial;
      }
      else {
        outC->_L2_else_else_else_IfBlock1 = ENUM_Q_DIRLRBG_unknown_TM_conversions;
        outC->_L1_else_else_else_IfBlock1 = kcg_true;
        _6_error_partial = outC->_L1_else_else_else_IfBlock1;
        _5_q_dirlrbg_partial = outC->_L2_else_else_else_IfBlock1;
        _8_q_dirlrbg_partial = _5_q_dirlrbg_partial;
        _7_error_partial = _6_error_partial;
      }
      _1_q_dirlrbg_partial = _8_q_dirlrbg_partial;
      _2_error_partial = _7_error_partial;
    }
    outC->q_dirlrbg = _1_q_dirlrbg_partial;
    outC->error = _2_error_partial;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_DIRLRBG_init_TM_conversions(
  outC_CAST_Int_to_Q_DIRLRBG_TM_conversions *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->q_dirlrbg_in = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 = Q_DIRLRBG_Reverse;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_IfBlock1 = Q_DIRLRBG_Reverse;
  outC->_L1_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = Q_DIRLRBG_Reverse;
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = Q_DIRLRBG_Reverse;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->q_dirlrbg = Q_DIRLRBG_Reverse;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_DIRLRBG_reset_TM_conversions(
  outC_CAST_Int_to_Q_DIRLRBG_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_Q_DIRLRBG_TM_conversions.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

