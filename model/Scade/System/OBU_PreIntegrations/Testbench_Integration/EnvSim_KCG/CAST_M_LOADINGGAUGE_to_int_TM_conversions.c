/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_LOADINGGAUGE_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_LOADINGGAUGE_to_int/ */
void CAST_M_LOADINGGAUGE_to_int_TM_conversions(
  /* m_loadinggauge/ */
  M_LOADINGGAUGE m_loadinggauge,
  outC_CAST_M_LOADINGGAUGE_to_int_TM_conversions *outC)
{
  /* m_loadinggauge_int/ */
  static kcg_int64 m_loadinggauge_int_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_loadinggauge_int/ */
  static kcg_int64 _1_m_loadinggauge_int_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* m_loadinggauge_int/ */
  static kcg_int64 _3_m_loadinggauge_int_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* m_loadinggauge_int/ */
  static kcg_int64 _5_m_loadinggauge_int_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* m_loadinggauge_int/ */
  static kcg_int64 _7_m_loadinggauge_int_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* m_loadinggauge_int/ */
  static kcg_int64 _9_m_loadinggauge_int_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* m_loadinggauge_int/ */
  static kcg_int64 _12_m_loadinggauge_int_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* m_loadinggauge_int/ */
  static kcg_int64 _14_m_loadinggauge_int_partial;
  /* error/ */
  static kcg_bool _15_error_partial;
  /* m_loadinggauge_int/ */
  static kcg_int64 _16_m_loadinggauge_int_partial;
  /* error/ */
  static kcg_bool _17_error_partial;
  /* m_loadinggauge_int/ */
  static kcg_int64 _18_m_loadinggauge_int_partial;
  static kcg_bool noname;

  outC->_L4 = m_loadinggauge;
  outC->m_loadinggauge_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_loadinggauge_in ==
    ENUM_M_LOADINGGAUGE_G1_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = INT_M_LOADINGGAUGE_G1_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_loadinggauge_int_partial = outC->_L8_then_IfBlock1;
    outC->m_loadinggauge_int = m_loadinggauge_int_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_loadinggauge_in ==
      ENUM_M_LOADINGGAUGE_GA_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = INT_M_LOADINGGAUGE_GA_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _17_error_partial = outC->_L6_then_else_IfBlock1;
      _18_m_loadinggauge_int_partial = outC->_L7_then_else_IfBlock1;
      _1_m_loadinggauge_int_partial = _18_m_loadinggauge_int_partial;
      _2_error_partial = _17_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_loadinggauge_in ==
        ENUM_M_LOADINGGAUGE_GB_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        outC->_L1_then_else_else_IfBlock1 = INT_M_LOADINGGAUGE_GB_TM_conversions;
        _3_m_loadinggauge_int_partial = outC->_L1_then_else_else_IfBlock1;
        _16_m_loadinggauge_int_partial = _3_m_loadinggauge_int_partial;
        _15_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->m_loadinggauge_in ==
          ENUM_M_LOADINGGAUGE_GC_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = kcg_false;
          _13_error_partial = outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1 = INT_M_LOADINGGAUGE_GC_TM_conversions;
          _14_m_loadinggauge_int_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_m_loadinggauge_int_partial = _14_m_loadinggauge_int_partial;
          _6_error_partial = _13_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->m_loadinggauge_in ==
            ENUM_M_LOADINGGAUGE_does_not_fit_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 =
              INT_M_LOADINGGAUGE_does_not_fit_TM_conversions;
            outC->_L1_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _7_m_loadinggauge_int_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _12_m_loadinggauge_int_partial = _7_m_loadinggauge_int_partial;
            _11_error_partial = _8_error_partial;
          }
          else {
            outC->_L1_else_else_else_else_else_IfBlock1 =
              INT_M_LOADINGGAUGE_does_not_fit_TM_conversions;
            _9_m_loadinggauge_int_partial = outC->_L1_else_else_else_else_else_IfBlock1;
            outC->_L2_else_else_else_else_else_IfBlock1 = kcg_true;
            _10_error_partial = outC->_L2_else_else_else_else_else_IfBlock1;
            _12_m_loadinggauge_int_partial = _9_m_loadinggauge_int_partial;
            _11_error_partial = _10_error_partial;
          }
          _5_m_loadinggauge_int_partial = _12_m_loadinggauge_int_partial;
          _6_error_partial = _11_error_partial;
        }
        _16_m_loadinggauge_int_partial = _5_m_loadinggauge_int_partial;
        _15_error_partial = _6_error_partial;
      }
      _1_m_loadinggauge_int_partial = _16_m_loadinggauge_int_partial;
      _2_error_partial = _15_error_partial;
    }
    outC->m_loadinggauge_int = _1_m_loadinggauge_int_partial;
    outC->error = _2_error_partial;
  }
  outC->_L7 = outC->error;
  noname = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_M_LOADINGGAUGE_to_int_init_TM_conversions(
  outC_CAST_M_LOADINGGAUGE_to_int_TM_conversions *outC)
{
  outC->_L7 = kcg_true;
  outC->_L4 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->error = kcg_true;
  outC->m_loadinggauge_in =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->_L1_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_int64(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_lit_int64(0);
  outC->m_loadinggauge_int = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_M_LOADINGGAUGE_to_int_reset_TM_conversions(
  outC_CAST_M_LOADINGGAUGE_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_M_LOADINGGAUGE_to_int_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

