/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP/ */
void CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions(
  /* q_emergencystop_int/ */
  kcg_int32 q_emergencystop_int,
  outC_CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions *outC)
{
  /* q_emergencystop/ */
  static Q_EMERGENCYSTOP q_emergencystop_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* q_emergencystop/ */
  static Q_EMERGENCYSTOP _1_q_emergencystop_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* q_emergencystop/ */
  static Q_EMERGENCYSTOP _3_q_emergencystop_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* q_emergencystop/ */
  static Q_EMERGENCYSTOP _5_q_emergencystop_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* q_emergencystop/ */
  static Q_EMERGENCYSTOP _8_q_emergencystop_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* q_emergencystop/ */
  static Q_EMERGENCYSTOP _10_q_emergencystop_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* q_emergencystop/ */
  static Q_EMERGENCYSTOP _12_q_emergencystop_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* q_emergencystop/ */
  static Q_EMERGENCYSTOP _14_q_emergencystop_partial;
  static kcg_bool noname;

  outC->_L12 = q_emergencystop_int;
  outC->q_emergencystop_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_emergencystop_in ==
    INT_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 =
      ENUM_Q_EMERGENCYSTOP_cond_accepted_with_EOA_update_TM_conversions;
    q_emergencystop_partial = outC->_L4_then_IfBlock1;
    outC->q_emergencystop = q_emergencystop_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_emergencystop_in ==
      INT_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _13_error_partial = outC->_L5_then_else_IfBlock1;
      outC->_L3_then_else_IfBlock1 =
        ENUM_Q_EMERGENCYSTOP_cond_accepted_with_no_EOA_update_TM_conversions;
      _14_q_emergencystop_partial = outC->_L3_then_else_IfBlock1;
      _1_q_emergencystop_partial = _14_q_emergencystop_partial;
      _2_error_partial = _13_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->q_emergencystop_in ==
        INT_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        outC->_L2_then_else_else_IfBlock1 =
          ENUM_Q_EMERGENCYSTOP_uncond_accepted_TM_conversions;
        _3_q_emergencystop_partial = outC->_L2_then_else_else_IfBlock1;
        _12_q_emergencystop_partial = _3_q_emergencystop_partial;
        _11_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->q_emergencystop_in ==
          INT_Q_EMERGENCYSTOP_rejected_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 = kcg_false;
          _9_error_partial = outC->_L2_then_else_else_else_IfBlock1;
          outC->_L1_then_else_else_else_IfBlock1 =
            ENUM_Q_EMERGENCYSTOP_rejected_TM_conversions;
          _10_q_emergencystop_partial = outC->_L1_then_else_else_else_IfBlock1;
          _5_q_emergencystop_partial = _10_q_emergencystop_partial;
          _6_error_partial = _9_error_partial;
        }
        else {
          outC->_L2_else_else_else_else_IfBlock1 =
            ENUM_Q_EMERGENCYSTOP_rejected_TM_conversions;
          outC->_L1_else_else_else_else_IfBlock1 = kcg_true;
          _7_error_partial = outC->_L1_else_else_else_else_IfBlock1;
          _8_q_emergencystop_partial = outC->_L2_else_else_else_else_IfBlock1;
          _5_q_emergencystop_partial = _8_q_emergencystop_partial;
          _6_error_partial = _7_error_partial;
        }
        _12_q_emergencystop_partial = _5_q_emergencystop_partial;
        _11_error_partial = _6_error_partial;
      }
      _1_q_emergencystop_partial = _12_q_emergencystop_partial;
      _2_error_partial = _11_error_partial;
    }
    outC->q_emergencystop = _1_q_emergencystop_partial;
    outC->error = _2_error_partial;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_EMERGENCYSTOP_init_TM_conversions(
  outC_CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->q_emergencystop_in = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_else_IfBlock1 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->q_emergencystop =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_EMERGENCYSTOP_reset_TM_conversions(
  outC_CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

