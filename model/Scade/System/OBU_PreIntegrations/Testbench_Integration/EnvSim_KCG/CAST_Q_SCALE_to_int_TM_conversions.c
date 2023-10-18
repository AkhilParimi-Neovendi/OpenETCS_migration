/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Q_SCALE_to_int_TM_conversions.h"

/* TM_conversions::CAST_Q_SCALE_to_int/ */
void CAST_Q_SCALE_to_int_TM_conversions(
  /* q_scale_int/ */
  Q_SCALE q_scale_int,
  outC_CAST_Q_SCALE_to_int_TM_conversions *outC)
{
  /* d/ */
  static kcg_int64 d_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* d/ */
  static kcg_int64 _1_d_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* d/ */
  static kcg_int64 _3_d_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* d/ */
  static kcg_int64 _5_d_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* d/ */
  static kcg_int64 _8_d_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* d/ */
  static kcg_int64 _10_d_partial;
  static kcg_bool noname;

  outC->_L2 = q_scale_int;
  outC->q_scale_in = outC->_L2;
  outC->IfBlock1_clock = outC->q_scale_in == ENUM_Q_SCALE_10cm_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = kcg_false;
    error_partial = outC->_L3_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_scale_in == ENUM_Q_SCALE_1m_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_false;
      _9_error_partial = outC->_L3_then_else_IfBlock1;
      _2_error_partial = _9_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->q_scale_in ==
        ENUM_Q_SCALE_10m_TM_conversions;
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
    outC->_L2_then_IfBlock1 = INT_Q_SCALE_10cm_TM_conversions;
    d_partial = outC->_L2_then_IfBlock1;
    outC->d = d_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = INT_Q_SCALE_1m_TM_conversions;
      _10_d_partial = outC->_L1_then_else_IfBlock1;
      _1_d_partial = _10_d_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = INT_Q_SCALE_10m_TM_conversions;
        _3_d_partial = outC->_L1_then_else_else_IfBlock1;
        _8_d_partial = _3_d_partial;
      }
      else {
        outC->_L1_else_else_else_IfBlock1 = INT_Q_SCALE_10cm_TM_conversions;
        _5_d_partial = outC->_L1_else_else_else_IfBlock1;
        _8_d_partial = _5_d_partial;
      }
      _1_d_partial = _8_d_partial;
    }
    outC->d = _1_d_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Q_SCALE_to_int_init_TM_conversions(
  outC_CAST_Q_SCALE_to_int_TM_conversions *outC)
{
  outC->_L4 = kcg_true;
  outC->_L2 = Q_SCALE_10_cm_scale;
  outC->error = kcg_true;
  outC->q_scale_in = Q_SCALE_10_cm_scale;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->d = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void CAST_Q_SCALE_to_int_reset_TM_conversions(
  outC_CAST_Q_SCALE_to_int_TM_conversions *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Q_SCALE_to_int_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

