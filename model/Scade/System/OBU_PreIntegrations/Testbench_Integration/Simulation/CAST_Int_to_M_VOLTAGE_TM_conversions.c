/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_VOLTAGE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_VOLTAGE/ */
void CAST_Int_to_M_VOLTAGE_TM_conversions(
  /* m_voltage_int/ */
  kcg_int32 m_voltage_int,
  outC_CAST_Int_to_M_VOLTAGE_TM_conversions *outC)
{
  /* m_voltage/ */
  static M_VOLTAGE m_voltage_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_voltage/ */
  static M_VOLTAGE _1_m_voltage_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* m_voltage/ */
  static M_VOLTAGE _3_m_voltage_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* m_voltage/ */
  static M_VOLTAGE _5_m_voltage_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* m_voltage/ */
  static M_VOLTAGE _7_m_voltage_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* m_voltage/ */
  static M_VOLTAGE _9_m_voltage_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* m_voltage/ */
  static M_VOLTAGE _12_m_voltage_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* m_voltage/ */
  static M_VOLTAGE _14_m_voltage_partial;
  /* error/ */
  static kcg_bool _15_error_partial;
  /* m_voltage/ */
  static M_VOLTAGE _16_m_voltage_partial;
  /* error/ */
  static kcg_bool _17_error_partial;
  /* m_voltage/ */
  static M_VOLTAGE _18_m_voltage_partial;
  /* error/ */
  static kcg_bool _19_error_partial;
  /* m_voltage/ */
  static M_VOLTAGE _20_m_voltage_partial;
  /* error/ */
  static kcg_bool _21_error_partial;
  /* m_voltage/ */
  static M_VOLTAGE _22_m_voltage_partial;
  static kcg_bool noname;

  outC->_L4 = m_voltage_int;
  outC->m_voltage_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_voltage_in ==
    INT_M_VOLTAGE_Line_not_fitted_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_voltage_in ==
      INT_M_VOLTAGE_AC_25_kV_50_Hz_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _21_error_partial = outC->_L5_then_else_IfBlock1;
      _2_error_partial = _21_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_voltage_in ==
        INT_M_VOLTAGE_AC_15_kV_16_7_Hz_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L4_then_else_else_IfBlock1;
        _19_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->m_voltage_in ==
          INT_M_VOLTAGE_DC_3_kV_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L4_then_else_else_else_IfBlock1 = kcg_false;
          _17_error_partial = outC->_L4_then_else_else_else_IfBlock1;
          _6_error_partial = _17_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->m_voltage_in ==
            INT_M_VOLTAGE_DC_1_5_kV_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L4_then_else_else_else_else_IfBlock1 = kcg_false;
            _8_error_partial = outC->_L4_then_else_else_else_else_IfBlock1;
            _15_error_partial = _8_error_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 =
              outC->m_voltage_in == INT_M_VOLTAGE_DC_600_or_750_V_TM_conversions;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L4_then_else_else_else_else_else_IfBlock1 = kcg_false;
              _13_error_partial = outC->_L4_then_else_else_else_else_else_IfBlock1;
              _10_error_partial = _13_error_partial;
            }
            else {
              outC->_L2_else_else_else_else_else_else_IfBlock1 = kcg_true;
              _11_error_partial = outC->_L2_else_else_else_else_else_else_IfBlock1;
              _10_error_partial = _11_error_partial;
            }
            _15_error_partial = _10_error_partial;
          }
          _6_error_partial = _15_error_partial;
        }
        _19_error_partial = _6_error_partial;
      }
      _2_error_partial = _19_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = ENUM_M_VOLTAGE_Line_not_fitted_TM_conversions;
    m_voltage_partial = outC->_L4_then_IfBlock1;
    outC->m_voltage = m_voltage_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = ENUM_M_VOLTAGE_AC_25_kV_50_Hz_TM_conversions;
      _22_m_voltage_partial = outC->_L3_then_else_IfBlock1;
      _1_m_voltage_partial = _22_m_voltage_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 =
          ENUM_M_VOLTAGE_AC_15_kV_16_7_Hz_TM_conversions;
        _3_m_voltage_partial = outC->_L2_then_else_else_IfBlock1;
        _20_m_voltage_partial = _3_m_voltage_partial;
      }
      else {
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L2_then_else_else_else_IfBlock1 = ENUM_M_VOLTAGE_DC_3_kV_TM_conversions;
          _18_m_voltage_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_m_voltage_partial = _18_m_voltage_partial;
        }
        else {
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 =
              ENUM_M_VOLTAGE_DC_1_5_kV_TM_conversions;
            _7_m_voltage_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _16_m_voltage_partial = _7_m_voltage_partial;
          }
          else {
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L2_then_else_else_else_else_else_IfBlock1 =
                ENUM_M_VOLTAGE_DC_600_or_750_V_TM_conversions;
              _14_m_voltage_partial = outC->_L2_then_else_else_else_else_else_IfBlock1;
              _9_m_voltage_partial = _14_m_voltage_partial;
            }
            else {
              outC->_L1_else_else_else_else_else_else_IfBlock1 =
                ENUM_M_VOLTAGE_Line_not_fitted_TM_conversions;
              _12_m_voltage_partial = outC->_L1_else_else_else_else_else_else_IfBlock1;
              _9_m_voltage_partial = _12_m_voltage_partial;
            }
            _16_m_voltage_partial = _9_m_voltage_partial;
          }
          _5_m_voltage_partial = _16_m_voltage_partial;
        }
        _20_m_voltage_partial = _5_m_voltage_partial;
      }
      _1_m_voltage_partial = _20_m_voltage_partial;
    }
    outC->m_voltage = _1_m_voltage_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_VOLTAGE_init_TM_conversions(
  outC_CAST_Int_to_M_VOLTAGE_TM_conversions *outC)
{
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->m_voltage_in = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 =
    M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 =
    M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_IfBlock1 =
    M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->_L1_else_else_else_else_else_else_IfBlock1 =
    M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->_L2_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1 =
    M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->_L4_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 =
    M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->_L4_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_VOLTAGE_reset_TM_conversions(
  outC_CAST_Int_to_M_VOLTAGE_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_VOLTAGE_TM_conversions.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

