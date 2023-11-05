/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_TEXTCONFIRM_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_TEXTCONFIRM/ */
void CAST_Int_to_Q_TEXTCONFIRM_TM_conversions(
  /* q_textconfirmint/ */
  kcg_int32 q_textconfirmint,
  outC_CAST_Int_to_Q_TEXTCONFIRM_TM_conversions *outC)
{
  /* q_textconfirm/ */
  static Q_TEXTCONFIRM q_textconfirm_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* q_textconfirm/ */
  static Q_TEXTCONFIRM _1_q_textconfirm_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* q_textconfirm/ */
  static Q_TEXTCONFIRM _3_q_textconfirm_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* q_textconfirm/ */
  static Q_TEXTCONFIRM _5_q_textconfirm_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* q_textconfirm/ */
  static Q_TEXTCONFIRM _8_q_textconfirm_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* q_textconfirm/ */
  static Q_TEXTCONFIRM _10_q_textconfirm_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* q_textconfirm/ */
  static Q_TEXTCONFIRM _12_q_textconfirm_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* q_textconfirm/ */
  static Q_TEXTCONFIRM _14_q_textconfirm_partial;
  static kcg_bool noname;

  outC->_L2 = q_textconfirmint;
  outC->q_textconfirm_in = outC->_L2;
  outC->IfBlock1_clock = outC->q_textconfirm_in ==
    INT_Q_TEXTCONFIRM_confirmation_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_textconfirm_in ==
      INT_Q_TEXTCONFIRM_confirmation_EB_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _13_error_partial = outC->_L3_then_else_IfBlock1;
      _2_error_partial = _13_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->q_textconfirm_in ==
        INT_Q_TEXTCONFIRM_confirmation_SB_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        _11_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->q_textconfirm_in ==
          INT_Q_TEXTCONFIRM_no_confirmation_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = kcg_false;
          _9_error_partial = outC->_L3_then_else_else_else_IfBlock1;
          _6_error_partial = _9_error_partial;
        }
        else {
          outC->_L1_else_else_else_else_IfBlock1 = kcg_true;
          _7_error_partial = outC->_L1_else_else_else_else_IfBlock1;
          _6_error_partial = _7_error_partial;
        }
        _11_error_partial = _6_error_partial;
      }
      _2_error_partial = _11_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L4 = outC->error;
  noname = outC->_L4;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = ENUM_Q_TEXTCONFIRM_confirmation_TM_conversions;
    q_textconfirm_partial = outC->_L2_then_IfBlock1;
    outC->q_textconfirm = q_textconfirm_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 =
        ENUM_Q_TEXTCONFIRM_confirmation_EB_TM_conversions;
      _14_q_textconfirm_partial = outC->_L1_then_else_IfBlock1;
      _1_q_textconfirm_partial = _14_q_textconfirm_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 =
          ENUM_Q_TEXTCONFIRM_confirmation_SB_TM_conversions;
        _3_q_textconfirm_partial = outC->_L1_then_else_else_IfBlock1;
        _12_q_textconfirm_partial = _3_q_textconfirm_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 =
            ENUM_Q_TEXTCONFIRM_no_confirmation_TM_conversions;
          _10_q_textconfirm_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_q_textconfirm_partial = _10_q_textconfirm_partial;
        }
        else {
          outC->_L2_else_else_else_else_IfBlock1 =
            ENUM_Q_TEXTCONFIRM_confirmation_TM_conversions;
          _8_q_textconfirm_partial = outC->_L2_else_else_else_else_IfBlock1;
          _5_q_textconfirm_partial = _8_q_textconfirm_partial;
        }
        _12_q_textconfirm_partial = _5_q_textconfirm_partial;
      }
      _1_q_textconfirm_partial = _12_q_textconfirm_partial;
    }
    outC->q_textconfirm = _1_q_textconfirm_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_TEXTCONFIRM_init_TM_conversions(
  outC_CAST_Int_to_Q_TEXTCONFIRM_TM_conversions *outC)
{
  outC->_L4 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->q_textconfirm_in = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_else_IfBlock1 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->q_textconfirm = Q_TEXTCONFIRM_No_confirmation_required;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_TEXTCONFIRM_reset_TM_conversions(
  outC_CAST_Int_to_Q_TEXTCONFIRM_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_Q_TEXTCONFIRM_TM_conversions.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

