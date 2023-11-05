/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_ERROR_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_ERROR_to_int/ */
void CAST_M_ERROR_to_int_TM_conversions(
  /* m_error/ */
  M_ERROR m_error,
  outC_CAST_M_ERROR_to_int_TM_conversions *outC)
{
  /* m_error_int/ */
  static kcg_int32 m_error_int_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_error_int/ */
  static kcg_int32 _1_m_error_int_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* m_error_int/ */
  static kcg_int32 _3_m_error_int_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* m_error_int/ */
  static kcg_int32 _5_m_error_int_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* m_error_int/ */
  static kcg_int32 _7_m_error_int_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* m_error_int/ */
  static kcg_int32 _9_m_error_int_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* m_error_int/ */
  static kcg_int32 _11_m_error_int_partial;
  /* error/ */
  static kcg_bool _12_error_partial;
  /* m_error_int/ */
  static kcg_int32 _13_m_error_int_partial;
  /* error/ */
  static kcg_bool _14_error_partial;
  /* m_error_int/ */
  static kcg_int32 _15_m_error_int_partial;
  /* error/ */
  static kcg_bool _16_error_partial;
  /* m_error_int/ */
  static kcg_int32 _17_m_error_int_partial;
  /* error/ */
  static kcg_bool _18_error_partial;
  /* error/ */
  static kcg_bool _19_error_partial;
  /* m_error_int/ */
  static kcg_int32 _20_m_error_int_partial;
  /* error/ */
  static kcg_bool _21_error_partial;
  /* m_error_int/ */
  static kcg_int32 _22_m_error_int_partial;
  /* error/ */
  static kcg_bool _23_error_partial;
  /* m_error_int/ */
  static kcg_int32 _24_m_error_int_partial;
  /* error/ */
  static kcg_bool _25_error_partial;
  /* m_error_int/ */
  static kcg_int32 _26_m_error_int_partial;
  /* error/ */
  static kcg_bool _27_error_partial;
  /* m_error_int/ */
  static kcg_int32 _28_m_error_int_partial;
  /* error/ */
  static kcg_bool _29_error_partial;
  /* m_error_int/ */
  static kcg_int32 _30_m_error_int_partial;
  /* error/ */
  static kcg_bool _31_error_partial;
  /* m_error_int/ */
  static kcg_int32 _32_m_error_int_partial;
  /* error/ */
  static kcg_bool _33_error_partial;
  /* m_error_int/ */
  static kcg_int32 _34_m_error_int_partial;
  static kcg_bool noname;

  outC->_L4 = m_error;
  outC->m_error_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_error_in ==
    ENUM_M_ERROR_balise_group_linking_conistency_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 =
      INT_M_ERROR_balise_group_linking_conistency_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_error_int_partial = outC->_L8_then_IfBlock1;
    outC->m_error_int = m_error_int_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_error_in ==
      ENUM_M_ERROR_Double_linking_error_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = INT_M_ERROR_Double_linking_error_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _33_error_partial = outC->_L6_then_else_IfBlock1;
      _34_m_error_int_partial = outC->_L7_then_else_IfBlock1;
      _1_m_error_int_partial = _34_m_error_int_partial;
      _2_error_partial = _33_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_error_in ==
        ENUM_M_ERROR_Double_repositioning_error_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        outC->_L1_then_else_else_IfBlock1 =
          INT_M_ERROR_Double_repositioning_error_TM_conversions;
        _3_m_error_int_partial = outC->_L1_then_else_else_IfBlock1;
        _32_m_error_int_partial = _3_m_error_int_partial;
        _31_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->m_error_in ==
          ENUM_M_ERROR_Linked_balise_group_message_consistency_erro_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = kcg_false;
          _29_error_partial = outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1 =
            INT_M_ERROR_Linked_balise_group_message_consistency_error_TM_conversions;
          _30_m_error_int_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_m_error_int_partial = _30_m_error_int_partial;
          _6_error_partial = _29_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->m_error_in ==
            ENUM_M_ERROR_Radio_message_consistency_error_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 = kcg_false;
            outC->_L1_then_else_else_else_else_IfBlock1 =
              INT_M_ERROR_Radio_message_consistency_error_TM_conversions;
            _7_m_error_int_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _8_error_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _28_m_error_int_partial = _7_m_error_int_partial;
            _27_error_partial = _8_error_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = outC->m_error_in ==
              ENUM_M_ERROR_Radio_safe_radio_connection_error_TM_conversions;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L2_then_else_else_else_else_else_IfBlock1 =
                INT_M_ERROR_Radio_safe_radio_connection_error_TM_conversions;
              _26_m_error_int_partial = outC->_L2_then_else_else_else_else_else_IfBlock1;
              outC->_L1_then_else_else_else_else_else_IfBlock1 = kcg_false;
              _25_error_partial = outC->_L1_then_else_else_else_else_else_IfBlock1;
              _9_m_error_int_partial = _26_m_error_int_partial;
              _10_error_partial = _25_error_partial;
            }
            else {
              outC->else_clock_else_else_else_else_else_IfBlock1 =
                outC->m_error_in == ENUM_M_ERROR_Radio_sequence_error_TM_conversions;
              /* IfBlock1:else:else:else:else:else:else: */
              if (outC->else_clock_else_else_else_else_else_IfBlock1) {
                outC->_L1_then_else_else_else_else_else_else_IfBlock1 =
                  INT_M_ERROR_Radio_sequence_error_TM_conversions;
                _11_m_error_int_partial = outC->_L1_then_else_else_else_else_else_else_IfBlock1;
                outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_false;
                _12_error_partial = outC->_L2_then_else_else_else_else_else_else_IfBlock1;
                _24_m_error_int_partial = _11_m_error_int_partial;
                _23_error_partial = _12_error_partial;
              }
              else {
                outC->else_clock_else_else_else_else_else_else_IfBlock1 =
                  outC->m_error_in == ENUM_M_ERROR_Safety_critical_failure_TM_conversions;
                /* IfBlock1:else:else:else:else:else:else:else: */
                if (outC->else_clock_else_else_else_else_else_else_IfBlock1) {
                  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 =
                    INT_M_ERROR_Safety_critical_failure_TM_conversions;
                  _22_m_error_int_partial =
                    outC->_L1_then_else_else_else_else_else_else_else_IfBlock1;
                  _21_error_partial = outC->_L2_then_else_else_else_else_else_else_else_IfBlock1;
                  _13_m_error_int_partial = _22_m_error_int_partial;
                  _14_error_partial = _21_error_partial;
                }
                else {
                  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 =
                    outC->m_error_in ==
                    ENUM_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions;
                  /* IfBlock1:else:else:else:else:else:else:else:else: */
                  if (outC->else_clock_else_else_else_else_else_else_else_IfBlock1) {
                    outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_false;
                    _16_error_partial =
                      outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1;
                    outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
                      INT_M_ERROR_Unlinked_balise_group_message_consistency_error_TM_conversions;
                    _15_m_error_int_partial =
                      outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1;
                    _20_m_error_int_partial = _15_m_error_int_partial;
                    _19_error_partial = _16_error_partial;
                  }
                  else {
                    outC->_L2_else_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
                    outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1 =
                      INT_M_ERROR_Safety_critical_failure_TM_conversions;
                    _18_error_partial =
                      outC->_L2_else_else_else_else_else_else_else_else_else_IfBlock1;
                    _17_m_error_int_partial =
                      outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1;
                    _20_m_error_int_partial = _17_m_error_int_partial;
                    _19_error_partial = _18_error_partial;
                  }
                  _13_m_error_int_partial = _20_m_error_int_partial;
                  _14_error_partial = _19_error_partial;
                }
                _24_m_error_int_partial = _13_m_error_int_partial;
                _23_error_partial = _14_error_partial;
              }
              _9_m_error_int_partial = _24_m_error_int_partial;
              _10_error_partial = _23_error_partial;
            }
            _28_m_error_int_partial = _9_m_error_int_partial;
            _27_error_partial = _10_error_partial;
          }
          _5_m_error_int_partial = _28_m_error_int_partial;
          _6_error_partial = _27_error_partial;
        }
        _32_m_error_int_partial = _5_m_error_int_partial;
        _31_error_partial = _6_error_partial;
      }
      _1_m_error_int_partial = _32_m_error_int_partial;
      _2_error_partial = _31_error_partial;
    }
    outC->m_error_int = _1_m_error_int_partial;
    outC->error = _2_error_partial;
  }
  outC->_L7 = outC->error;
  noname = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_M_ERROR_to_int_init_TM_conversions(
  outC_CAST_M_ERROR_to_int_TM_conversions *outC)
{
  outC->_L7 = kcg_true;
  outC->_L4 = M_ERROR_Balise_group_linking_consistency_error;
  outC->error = kcg_true;
  outC->m_error_in = M_ERROR_Balise_group_linking_consistency_error;
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->else_clock_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->_L2_then_else_else_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_else_else_IfBlock1 =
    kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->m_error_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_M_ERROR_to_int_reset_TM_conversions(
  outC_CAST_M_ERROR_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_M_ERROR_to_int_TM_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

