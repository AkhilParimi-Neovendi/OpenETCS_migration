/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LEVEL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_LEVEL/ */
void CAST_Int_to_M_LEVEL_TM_conversions(
  /* m_level_int/ */
  kcg_int64 m_level_int,
  outC_CAST_Int_to_M_LEVEL_TM_conversions *outC)
{
  /* m_level/ */
  M_LEVEL m_level_partial;
  /* error/ */
  kcg_bool error_partial;
  /* m_level/ */
  M_LEVEL _1_m_level_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* m_level/ */
  M_LEVEL _3_m_level_partial;
  /* error/ */
  kcg_bool _4_error_partial;
  /* m_level/ */
  M_LEVEL _5_m_level_partial;
  /* error/ */
  kcg_bool _6_error_partial;
  /* m_level/ */
  M_LEVEL _7_m_level_partial;
  /* error/ */
  kcg_bool _8_error_partial;
  /* m_level/ */
  M_LEVEL _9_m_level_partial;
  /* error/ */
  kcg_bool _10_error_partial;
  /* error/ */
  kcg_bool _11_error_partial;
  /* m_level/ */
  M_LEVEL _12_m_level_partial;
  /* error/ */
  kcg_bool _13_error_partial;
  /* m_level/ */
  M_LEVEL _14_m_level_partial;
  /* error/ */
  kcg_bool _15_error_partial;
  /* m_level/ */
  M_LEVEL _16_m_level_partial;
  /* error/ */
  kcg_bool _17_error_partial;
  /* m_level/ */
  M_LEVEL _18_m_level_partial;
  kcg_bool noname;

  outC->_L4 = m_level_int;
  outC->m_level_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_level_in == INT_M_LEVEL_Level_0_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = ENUM_M_LEVEL_Level_0_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_level_partial = outC->_L8_then_IfBlock1;
    outC->m_level = m_level_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_level_in ==
      INT_M_LEVEL_Level_1_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = ENUM_M_LEVEL_Level_1_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _17_error_partial = outC->_L6_then_else_IfBlock1;
      _18_m_level_partial = outC->_L7_then_else_IfBlock1;
      _1_m_level_partial = _18_m_level_partial;
      _2_error_partial = _17_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_level_in ==
        INT_M_LEVEL_Level_2_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        outC->_L1_then_else_else_IfBlock1 = ENUM_M_LEVEL_Level_2_TM_conversions;
        _3_m_level_partial = outC->_L1_then_else_else_IfBlock1;
        _16_m_level_partial = _3_m_level_partial;
        _15_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->m_level_in ==
          INT_M_LEVEL_Level_3_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = kcg_false;
          _13_error_partial = outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1 = ENUM_M_LEVEL_Level_3_TM_conversions;
          _14_m_level_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_m_level_partial = _14_m_level_partial;
          _6_error_partial = _13_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->m_level_in ==
            INT_M_LEVEL_Level_NTC_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 = kcg_false;
            outC->_L1_then_else_else_else_else_IfBlock1 =
              ENUM_M_LEVEL_Level_NTC_TM_conversions;
            _7_m_level_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _8_error_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _12_m_level_partial = _7_m_level_partial;
            _11_error_partial = _8_error_partial;
          }
          else {
            outC->_L1_else_else_else_else_else_IfBlock1 = kcg_true;
            _10_error_partial = outC->_L1_else_else_else_else_else_IfBlock1;
            outC->_L2_else_else_else_else_else_IfBlock1 =
              ENUM_M_LEVEL_Level_NTC_TM_conversions;
            _9_m_level_partial = outC->_L2_else_else_else_else_else_IfBlock1;
            _12_m_level_partial = _9_m_level_partial;
            _11_error_partial = _10_error_partial;
          }
          _5_m_level_partial = _12_m_level_partial;
          _6_error_partial = _11_error_partial;
        }
        _16_m_level_partial = _5_m_level_partial;
        _15_error_partial = _6_error_partial;
      }
      _1_m_level_partial = _16_m_level_partial;
      _2_error_partial = _15_error_partial;
    }
    outC->m_level = _1_m_level_partial;
    outC->error = _2_error_partial;
  }
  outC->_L7 = outC->error;
  noname = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_LEVEL_init_TM_conversions(
  outC_CAST_Int_to_M_LEVEL_TM_conversions *outC)
{
  outC->_L7 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->error = kcg_true;
  outC->m_level_in = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = M_LEVEL_Level_0;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = M_LEVEL_Level_0;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_else_else_IfBlock1 = M_LEVEL_Level_0;
  outC->_L1_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = M_LEVEL_Level_0;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = M_LEVEL_Level_0;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = M_LEVEL_Level_0;
  outC->m_level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_LEVEL_reset_TM_conversions(
  outC_CAST_Int_to_M_LEVEL_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_LEVEL_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

