/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_MAMODE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_MAMODE/ */
void CAST_Int_to_M_MAMODE_TM_conversions(
  /* m_mamode_int/ */
  kcg_int64 m_mamode_int,
  outC_CAST_Int_to_M_MAMODE_TM_conversions *outC)
{
  /* m_mamode/ */
  static M_MAMODE m_mamode_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_mamode/ */
  static M_MAMODE _1_m_mamode_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* m_mamode/ */
  static M_MAMODE _3_m_mamode_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* m_mamode/ */
  static M_MAMODE _5_m_mamode_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* m_mamode/ */
  static M_MAMODE _8_m_mamode_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* m_mamode/ */
  static M_MAMODE _10_m_mamode_partial;
  static kcg_bool noname;

  outC->_L4 = m_mamode_int;
  outC->m_mamode_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_mamode_in ==
    INT_M_MAMODE_on_sight_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = ENUM_M_MAMODE_on_sight_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_mamode_partial = outC->_L8_then_IfBlock1;
    outC->m_mamode = m_mamode_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_mamode_in ==
      INT_M_MAMODE_limited_supervision_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = ENUM_M_MAMODE_limited_supervision_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _9_error_partial = outC->_L6_then_else_IfBlock1;
      _10_m_mamode_partial = outC->_L7_then_else_IfBlock1;
      _1_m_mamode_partial = _10_m_mamode_partial;
      _2_error_partial = _9_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_mamode_in ==
        INT_M_MAMODE_shunting_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        outC->_L1_then_else_else_IfBlock1 = ENUM_M_MAMODE_shunting_TM_conversions;
        _3_m_mamode_partial = outC->_L1_then_else_else_IfBlock1;
        _8_m_mamode_partial = _3_m_mamode_partial;
        _7_error_partial = _4_error_partial;
      }
      else {
        outC->_L2_else_else_else_IfBlock1 = ENUM_M_MAMODE_on_sight_TM_conversions;
        outC->_L1_else_else_else_IfBlock1 = kcg_true;
        _5_m_mamode_partial = outC->_L2_else_else_else_IfBlock1;
        _6_error_partial = outC->_L1_else_else_else_IfBlock1;
        _8_m_mamode_partial = _5_m_mamode_partial;
        _7_error_partial = _6_error_partial;
      }
      _1_m_mamode_partial = _8_m_mamode_partial;
      _2_error_partial = _7_error_partial;
    }
    outC->m_mamode = _1_m_mamode_partial;
    outC->error = _2_error_partial;
  }
  outC->_L7 = outC->error;
  noname = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_MAMODE_init_TM_conversions(
  outC_CAST_Int_to_M_MAMODE_TM_conversions *outC)
{
  outC->_L7 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->error = kcg_true;
  outC->m_mamode_in = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = M_MAMODE_On_Sight;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_IfBlock1 = M_MAMODE_On_Sight;
  outC->_L1_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = M_MAMODE_On_Sight;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = M_MAMODE_On_Sight;
  outC->m_mamode = M_MAMODE_On_Sight;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_MAMODE_reset_TM_conversions(
  outC_CAST_Int_to_M_MAMODE_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_MAMODE_TM_conversions.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

