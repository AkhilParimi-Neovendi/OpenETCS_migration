/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINKREACTION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LINKREACTION/ */
void CAST_Int_to_Q_LINKREACTION_TM_conversions(
  /* q_linkreaction_int/ */
  kcg_int32 q_linkreaction_int,
  outC_CAST_Int_to_Q_LINKREACTION_TM_conversions *outC)
{
  /* q_linkreaction/ */
  static Q_LINKREACTION q_linkreaction_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* q_linkreaction/ */
  static Q_LINKREACTION _1_q_linkreaction_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* q_linkreaction/ */
  static Q_LINKREACTION _3_q_linkreaction_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* q_linkreaction/ */
  static Q_LINKREACTION _5_q_linkreaction_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* q_linkreaction/ */
  static Q_LINKREACTION _8_q_linkreaction_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* q_linkreaction/ */
  static Q_LINKREACTION _10_q_linkreaction_partial;
  static kcg_bool noname;

  outC->_L2 = q_linkreaction_int;
  outC->q_linkreaction_in = outC->_L2;
  outC->IfBlock1_clock = outC->q_linkreaction_in ==
    INT_Q_LINKREACTION_Train_trip_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_linkreaction_in ==
      INT_Q_LINKREACTION_Apply_servicebrake_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _9_error_partial = outC->_L3_then_else_IfBlock1;
      _2_error_partial = _9_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->q_linkreaction_in ==
        INT_Q_LINKREACTION_No_Reaction_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        _7_error_partial = _4_error_partial;
      }
      else {
        outC->_L2_else_else_else_IfBlock1 = kcg_true;
        _6_error_partial = outC->_L2_else_else_else_IfBlock1;
        _7_error_partial = _6_error_partial;
      }
      _2_error_partial = _7_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L4 = outC->error;
  noname = outC->_L4;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = ENUM_Q_LINKREACTION_Train_trip_TM_conversions;
    q_linkreaction_partial = outC->_L2_then_IfBlock1;
    outC->q_linkreaction = q_linkreaction_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 =
        ENUM_Q_LINKREACTION_Apply_servicebrake_TM_conversions;
      _10_q_linkreaction_partial = outC->_L1_then_else_IfBlock1;
      _1_q_linkreaction_partial = _10_q_linkreaction_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 =
          ENUM_Q_LINKREACTION_No_Reaction_TM_conversions;
        _3_q_linkreaction_partial = outC->_L1_then_else_else_IfBlock1;
        _8_q_linkreaction_partial = _3_q_linkreaction_partial;
      }
      else {
        outC->_L1_else_else_else_IfBlock1 =
          ENUM_Q_LINKREACTION_Train_trip_TM_conversions;
        _5_q_linkreaction_partial = outC->_L1_else_else_else_IfBlock1;
        _8_q_linkreaction_partial = _5_q_linkreaction_partial;
      }
      _1_q_linkreaction_partial = _8_q_linkreaction_partial;
    }
    outC->q_linkreaction = _1_q_linkreaction_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_LINKREACTION_init_TM_conversions(
  outC_CAST_Int_to_Q_LINKREACTION_TM_conversions *outC)
{
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->q_linkreaction_in = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = Q_LINKREACTION_Train_trip;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_IfBlock1 = Q_LINKREACTION_Train_trip;
  outC->_L1_then_else_else_IfBlock1 = Q_LINKREACTION_Train_trip;
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = Q_LINKREACTION_Train_trip;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->q_linkreaction = Q_LINKREACTION_Train_trip;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_LINKREACTION_reset_TM_conversions(
  outC_CAST_Int_to_Q_LINKREACTION_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_Q_LINKREACTION_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

