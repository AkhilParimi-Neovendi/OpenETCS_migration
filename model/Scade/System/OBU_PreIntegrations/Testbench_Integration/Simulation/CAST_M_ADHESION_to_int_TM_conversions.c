/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_ADHESION_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_ADHESION_to_int/ */
void CAST_M_ADHESION_to_int_TM_conversions(
  /* m_adhesion/ */
  M_ADHESION m_adhesion,
  outC_CAST_M_ADHESION_to_int_TM_conversions *outC)
{
  /* m_adhesion_int/ */
  static kcg_int32 m_adhesion_int_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_adhesion_int/ */
  static kcg_int32 _1_m_adhesion_int_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* m_adhesion_int/ */
  static kcg_int32 _4_m_adhesion_int_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* m_adhesion_int/ */
  static kcg_int32 _6_m_adhesion_int_partial;
  static kcg_bool noname;

  outC->_L1 = m_adhesion;
  outC->m_adhesion_in = outC->_L1;
  outC->IfBlock1_clock = outC->m_adhesion_in ==
    ENUM_M_ADHESION_slippery_rail_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = INT_M_ADHESION_slippery_rail_TM_conversions;
    m_adhesion_int_partial = outC->_L8_then_IfBlock1;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    outC->m_adhesion_int = m_adhesion_int_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_adhesion_in ==
      ENUM_M_ADHESION_no_slippery_rail_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = INT_M_ADHESION_no_slippery_rail_TM_conversions;
      _6_m_adhesion_int_partial = outC->_L7_then_else_IfBlock1;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L6_then_else_IfBlock1;
      _1_m_adhesion_int_partial = _6_m_adhesion_int_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L1_else_else_IfBlock1 = INT_M_ADHESION_slippery_rail_TM_conversions;
      _4_m_adhesion_int_partial = outC->_L1_else_else_IfBlock1;
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      _1_m_adhesion_int_partial = _4_m_adhesion_int_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->m_adhesion_int = _1_m_adhesion_int_partial;
    outC->error = _2_error_partial;
  }
  outC->_L34 = outC->error;
  noname = outC->_L34;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_M_ADHESION_to_int_init_TM_conversions(
  outC_CAST_M_ADHESION_to_int_TM_conversions *outC)
{
  outC->_L34 = kcg_true;
  outC->_L1 = M_ADHESION_Slippery_rail;
  outC->m_adhesion_in = M_ADHESION_Slippery_rail;
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->m_adhesion_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_M_ADHESION_to_int_reset_TM_conversions(
  outC_CAST_M_ADHESION_to_int_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_M_ADHESION_to_int_TM_conversions.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

