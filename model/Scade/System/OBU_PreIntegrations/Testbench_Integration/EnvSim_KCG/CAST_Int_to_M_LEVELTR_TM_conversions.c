/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LEVELTR_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_LEVELTR/ */
void CAST_Int_to_M_LEVELTR_TM_conversions(
  /* m_leveltr_int/ */
  kcg_int32 m_leveltr_int,
  outC_CAST_Int_to_M_LEVELTR_TM_conversions *outC)
{
  /* m_leveltr/ */
  static M_LEVELTR m_leveltr_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_leveltr/ */
  static M_LEVELTR _1_m_leveltr_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* m_leveltr/ */
  static M_LEVELTR _3_m_leveltr_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* m_leveltr/ */
  static M_LEVELTR _5_m_leveltr_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* m_leveltr/ */
  static M_LEVELTR _7_m_leveltr_partial;
  /* error/ */
  static kcg_bool _8_error_partial;
  /* m_leveltr/ */
  static M_LEVELTR _9_m_leveltr_partial;
  /* error/ */
  static kcg_bool _10_error_partial;
  /* error/ */
  static kcg_bool _11_error_partial;
  /* m_leveltr/ */
  static M_LEVELTR _12_m_leveltr_partial;
  /* error/ */
  static kcg_bool _13_error_partial;
  /* m_leveltr/ */
  static M_LEVELTR _14_m_leveltr_partial;
  /* error/ */
  static kcg_bool _15_error_partial;
  /* m_leveltr/ */
  static M_LEVELTR _16_m_leveltr_partial;
  /* error/ */
  static kcg_bool _17_error_partial;
  /* m_leveltr/ */
  static M_LEVELTR _18_m_leveltr_partial;
  static kcg_bool noname;

  outC->_L4 = m_leveltr_int;
  outC->m_leveltr_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_leveltr_in ==
    INT_M_LEVELTR_Level_0_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = ENUM_M_LEVELTR_Level_0_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_leveltr_partial = outC->_L8_then_IfBlock1;
    outC->m_leveltr = m_leveltr_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_leveltr_in ==
      INT_M_LEVELTR_Level_1_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = ENUM_M_LEVELTR_Level_1_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _17_error_partial = outC->_L6_then_else_IfBlock1;
      _18_m_leveltr_partial = outC->_L7_then_else_IfBlock1;
      _1_m_leveltr_partial = _18_m_leveltr_partial;
      _2_error_partial = _17_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_leveltr_in ==
        INT_M_LEVELTR_Level_2_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        outC->_L1_then_else_else_IfBlock1 = ENUM_M_LEVELTR_Level_2_TM_conversions;
        _3_m_leveltr_partial = outC->_L1_then_else_else_IfBlock1;
        _16_m_leveltr_partial = _3_m_leveltr_partial;
        _15_error_partial = _4_error_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->m_leveltr_in ==
          INT_M_LEVELTR_Level_3_TM_conversions;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = kcg_false;
          _13_error_partial = outC->_L1_then_else_else_else_IfBlock1;
          outC->_L2_then_else_else_else_IfBlock1 = ENUM_M_LEVELTR_Level_3_TM_conversions;
          _14_m_leveltr_partial = outC->_L2_then_else_else_else_IfBlock1;
          _5_m_leveltr_partial = _14_m_leveltr_partial;
          _6_error_partial = _13_error_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->m_leveltr_in ==
            INT_M_LEVELTR_Level_NTC_TM_conversions;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L2_then_else_else_else_else_IfBlock1 = kcg_false;
            outC->_L1_then_else_else_else_else_IfBlock1 =
              ENUM_M_LEVELTR_Level_NTC_TM_conversions;
            _7_m_leveltr_partial = outC->_L1_then_else_else_else_else_IfBlock1;
            _8_error_partial = outC->_L2_then_else_else_else_else_IfBlock1;
            _12_m_leveltr_partial = _7_m_leveltr_partial;
            _11_error_partial = _8_error_partial;
          }
          else {
            outC->_L1_else_else_else_else_else_IfBlock1 = kcg_true;
            _10_error_partial = outC->_L1_else_else_else_else_else_IfBlock1;
            outC->_L2_else_else_else_else_else_IfBlock1 =
              ENUM_M_LEVELTR_Level_NTC_TM_conversions;
            _9_m_leveltr_partial = outC->_L2_else_else_else_else_else_IfBlock1;
            _12_m_leveltr_partial = _9_m_leveltr_partial;
            _11_error_partial = _10_error_partial;
          }
          _5_m_leveltr_partial = _12_m_leveltr_partial;
          _6_error_partial = _11_error_partial;
        }
        _16_m_leveltr_partial = _5_m_leveltr_partial;
        _15_error_partial = _6_error_partial;
      }
      _1_m_leveltr_partial = _16_m_leveltr_partial;
      _2_error_partial = _15_error_partial;
    }
    outC->m_leveltr = _1_m_leveltr_partial;
    outC->error = _2_error_partial;
  }
  outC->_L7 = outC->error;
  noname = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_LEVELTR_init_TM_conversions(
  outC_CAST_Int_to_M_LEVELTR_TM_conversions *outC)
{
  outC->_L7 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->m_leveltr_in = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = M_LEVELTR_Level_0;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_IfBlock1 = M_LEVELTR_Level_0;
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_else_else_IfBlock1 = M_LEVELTR_Level_0;
  outC->_L1_else_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_else_IfBlock1 = M_LEVELTR_Level_0;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = M_LEVELTR_Level_0;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = M_LEVELTR_Level_0;
  outC->m_leveltr = M_LEVELTR_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_LEVELTR_reset_TM_conversions(
  outC_CAST_Int_to_M_LEVELTR_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_LEVELTR_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

