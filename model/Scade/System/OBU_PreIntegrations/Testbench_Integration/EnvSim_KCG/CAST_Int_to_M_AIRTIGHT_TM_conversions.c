/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_AIRTIGHT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_AIRTIGHT/ */
void CAST_Int_to_M_AIRTIGHT_TM_conversions(
  /* int__m_airtight_in/ */
  kcg_int64 int__m_airtight_in,
  outC_CAST_Int_to_M_AIRTIGHT_TM_conversions *outC)
{
  /* m_airtight/ */
  static M_AIRTIGHT m_airtight_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_airtight/ */
  static M_AIRTIGHT _1_m_airtight_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* m_airtight/ */
  static M_AIRTIGHT _4_m_airtight_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* m_airtight/ */
  static M_AIRTIGHT _6_m_airtight_partial;
  static kcg_bool noname;

  outC->_L4 = int__m_airtight_in;
  outC->m_airtight_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_airtight_in ==
    INT_M_AIRTIGHT_fitted_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = ENUM_M_AIRTIGHT_fitted_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_airtight_partial = outC->_L8_then_IfBlock1;
    outC->m_airtight = m_airtight_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_airtight_in ==
      INT_M_AIRTIGHT_not_fitted_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = ENUM_M_AIRTIGHT_not_fitted_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L6_then_else_IfBlock1;
      _6_m_airtight_partial = outC->_L7_then_else_IfBlock1;
      _1_m_airtight_partial = _6_m_airtight_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = ENUM_M_AIRTIGHT_not_fitted_TM_conversions;
      _4_m_airtight_partial = outC->_L1_else_else_IfBlock1;
      _1_m_airtight_partial = _4_m_airtight_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->m_airtight = _1_m_airtight_partial;
    outC->error = _2_error_partial;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_AIRTIGHT_init_TM_conversions(
  outC_CAST_Int_to_M_AIRTIGHT_TM_conversions *outC)
{
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->error = kcg_true;
  outC->m_airtight_in = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = M_AIRTIGHT_Not_fitted;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = M_AIRTIGHT_Not_fitted;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = M_AIRTIGHT_Not_fitted;
  outC->m_airtight = M_AIRTIGHT_Not_fitted;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_AIRTIGHT_reset_TM_conversions(
  outC_CAST_Int_to_M_AIRTIGHT_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_AIRTIGHT_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

