/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_LOC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_LOC/ */
void CAST_Int_to_M_LOC_TM_conversions(
  /* m_loc_int/ */
  kcg_int64 m_loc_int,
  outC_CAST_Int_to_M_LOC_TM_conversions *outC)
{
  /* m_loc/ */
  static M_LOC m_loc_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_loc/ */
  static M_LOC _1_m_loc_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* m_loc/ */
  static M_LOC _3_m_loc_partial;
  /* error/ */
  static kcg_bool _4_error_partial;
  /* m_loc/ */
  static M_LOC _5_m_loc_partial;
  /* error/ */
  static kcg_bool _6_error_partial;
  /* error/ */
  static kcg_bool _7_error_partial;
  /* m_loc/ */
  static M_LOC _8_m_loc_partial;
  /* error/ */
  static kcg_bool _9_error_partial;
  /* m_loc/ */
  static M_LOC _10_m_loc_partial;
  static kcg_bool noname;

  outC->_L4 = m_loc_int;
  outC->m_loc_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_loc_in == INT_M_LOC_every_LRBG_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = ENUM_M_LOC_every_LRBG_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_loc_partial = outC->_L8_then_IfBlock1;
    outC->m_loc = m_loc_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_loc_in ==
      INT_M_LOC_not_when_LRBG_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = ENUM_M_LOC_not_when_LRBG_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _9_error_partial = outC->_L6_then_else_IfBlock1;
      _10_m_loc_partial = outC->_L7_then_else_IfBlock1;
      _1_m_loc_partial = _10_m_loc_partial;
      _2_error_partial = _9_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_loc_in == INT_M_LOC_now_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        outC->_L1_then_else_else_IfBlock1 = ENUM_M_LOC_now_TM_conversions;
        _3_m_loc_partial = outC->_L1_then_else_else_IfBlock1;
        _8_m_loc_partial = _3_m_loc_partial;
        _7_error_partial = _4_error_partial;
      }
      else {
        outC->_L2_else_else_else_IfBlock1 = ENUM_M_LOC_now_TM_conversions;
        outC->_L1_else_else_else_IfBlock1 = kcg_true;
        _5_m_loc_partial = outC->_L2_else_else_else_IfBlock1;
        _6_error_partial = outC->_L1_else_else_else_IfBlock1;
        _8_m_loc_partial = _5_m_loc_partial;
        _7_error_partial = _6_error_partial;
      }
      _1_m_loc_partial = _8_m_loc_partial;
      _2_error_partial = _7_error_partial;
    }
    outC->m_loc = _1_m_loc_partial;
    outC->error = _2_error_partial;
  }
  outC->_L7 = outC->error;
  noname = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_LOC_init_TM_conversions(
  outC_CAST_Int_to_M_LOC_TM_conversions *outC)
{
  outC->_L7 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->error = kcg_true;
  outC->m_loc_in = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = M_LOC_Now;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_IfBlock1 = M_LOC_Now;
  outC->_L1_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = M_LOC_Now;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = M_LOC_Now;
  outC->m_loc = M_LOC_Now;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_LOC_reset_TM_conversions(
  outC_CAST_Int_to_M_LOC_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_LOC_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

