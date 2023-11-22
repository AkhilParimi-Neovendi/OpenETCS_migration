/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_AIRTIGHT_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_AIRTIGHT_to_int/ */
void CAST_M_AIRTIGHT_to_int_TM_conversions(
  /* m_airtight/ */
  M_AIRTIGHT m_airtight,
  outC_CAST_M_AIRTIGHT_to_int_TM_conversions *outC)
{
  /* m_airtight_int/ */
  kcg_int32 m_airtight_int_partial;
  /* error/ */
  kcg_bool error_partial;
  /* m_airtight_int/ */
  kcg_int32 _1_m_airtight_int_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* error/ */
  kcg_bool _3_error_partial;
  /* m_airtight_int/ */
  kcg_int32 _4_m_airtight_int_partial;
  /* error/ */
  kcg_bool _5_error_partial;
  /* m_airtight_int/ */
  kcg_int32 _6_m_airtight_int_partial;
  kcg_bool noname;

  outC->_L4 = m_airtight;
  outC->m_airtight_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_airtight_in ==
    ENUM_M_AIRTIGHT_fitted_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = INT_M_AIRTIGHT_fitted_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_airtight_int_partial = outC->_L8_then_IfBlock1;
    outC->m_airtight_int = m_airtight_int_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_airtight_in ==
      ENUM_M_AIRTIGHT_not_fitted_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = INT_M_AIRTIGHT_not_fitted_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L6_then_else_IfBlock1;
      _6_m_airtight_int_partial = outC->_L7_then_else_IfBlock1;
      _1_m_airtight_int_partial = _6_m_airtight_int_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = INT_M_AIRTIGHT_not_fitted_TM_conversions;
      _4_m_airtight_int_partial = outC->_L1_else_else_IfBlock1;
      _1_m_airtight_int_partial = _4_m_airtight_int_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->m_airtight_int = _1_m_airtight_int_partial;
    outC->error = _2_error_partial;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_M_AIRTIGHT_to_int_init_TM_conversions(
  outC_CAST_M_AIRTIGHT_to_int_TM_conversions *outC)
{
  outC->_L4 = M_AIRTIGHT_Not_fitted;
  outC->_L5 = kcg_true;
  outC->error = kcg_true;
  outC->m_airtight_in = M_AIRTIGHT_Not_fitted;
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->m_airtight_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_M_AIRTIGHT_to_int_reset_TM_conversions(
  outC_CAST_M_AIRTIGHT_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_M_AIRTIGHT_to_int_TM_conversions.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

