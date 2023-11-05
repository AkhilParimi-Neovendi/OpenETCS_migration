/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_LOC_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_LOC_to_int/ */
void CAST_M_LOC_to_int_TM_conversions(
  /* m_loc/ */
  M_LOC m_loc,
  outC_CAST_M_LOC_to_int_TM_conversions *outC)
{
  /* m_loc_int/ */
  kcg_int32 m_loc_int_partial;
  /* error/ */
  kcg_bool error_partial;
  /* m_loc_int/ */
  kcg_int32 _1_m_loc_int_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* m_loc_int/ */
  kcg_int32 _3_m_loc_int_partial;
  /* error/ */
  kcg_bool _4_error_partial;
  /* m_loc_int/ */
  kcg_int32 _5_m_loc_int_partial;
  /* error/ */
  kcg_bool _6_error_partial;
  /* error/ */
  kcg_bool _7_error_partial;
  /* m_loc_int/ */
  kcg_int32 _8_m_loc_int_partial;
  /* error/ */
  kcg_bool _9_error_partial;
  /* m_loc_int/ */
  kcg_int32 _10_m_loc_int_partial;
  kcg_bool noname;

  outC->_L4 = m_loc;
  outC->m_loc_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_loc_in == ENUM_M_LOC_every_LRBG_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = INT_M_LOC_every_LRBG_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_loc_int_partial = outC->_L8_then_IfBlock1;
    outC->m_loc_int = m_loc_int_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_loc_in ==
      ENUM_M_LOC_not_when_LRBG_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = INT_M_LOC_not_when_LRBG_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _9_error_partial = outC->_L6_then_else_IfBlock1;
      _10_m_loc_int_partial = outC->_L7_then_else_IfBlock1;
      _1_m_loc_int_partial = _10_m_loc_int_partial;
      _2_error_partial = _9_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_loc_in ==
        ENUM_M_LOC_now_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L2_then_else_else_IfBlock1;
        outC->_L1_then_else_else_IfBlock1 = INT_M_LOC_now_TM_conversions;
        _3_m_loc_int_partial = outC->_L1_then_else_else_IfBlock1;
        _8_m_loc_int_partial = _3_m_loc_int_partial;
        _7_error_partial = _4_error_partial;
      }
      else {
        outC->_L2_else_else_else_IfBlock1 = INT_M_LOC_now_TM_conversions;
        outC->_L1_else_else_else_IfBlock1 = kcg_true;
        _5_m_loc_int_partial = outC->_L2_else_else_else_IfBlock1;
        _6_error_partial = outC->_L1_else_else_else_IfBlock1;
        _8_m_loc_int_partial = _5_m_loc_int_partial;
        _7_error_partial = _6_error_partial;
      }
      _1_m_loc_int_partial = _8_m_loc_int_partial;
      _2_error_partial = _7_error_partial;
    }
    outC->m_loc_int = _1_m_loc_int_partial;
    outC->error = _2_error_partial;
  }
  outC->_L7 = outC->error;
  noname = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_M_LOC_to_int_init_TM_conversions(
  outC_CAST_M_LOC_to_int_TM_conversions *outC)
{
  outC->_L7 = kcg_true;
  outC->_L4 = M_LOC_Now;
  outC->error = kcg_true;
  outC->m_loc_in = M_LOC_Now;
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_else_else_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->m_loc_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_M_LOC_to_int_reset_TM_conversions(
  outC_CAST_M_LOC_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_M_LOC_to_int_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

