/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_ADHESION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_ADHESION/ */
void CAST_Int_to_M_ADHESION_TM_conversions(
  /* m_adhesion_int/ */
  kcg_int64 m_adhesion_int,
  outC_CAST_Int_to_M_ADHESION_TM_conversions *outC)
{
  /* m_adhesion/ */
  static M_ADHESION m_adhesion_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_adhesion/ */
  static M_ADHESION _1_m_adhesion_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* m_adhesion/ */
  static M_ADHESION _4_m_adhesion_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* m_adhesion/ */
  static M_ADHESION _6_m_adhesion_partial;
  static kcg_bool noname;

  outC->_L1 = m_adhesion_int;
  outC->m_adhesion_in = outC->_L1;
  outC->IfBlock1_clock = outC->m_adhesion_in ==
    INT_M_ADHESION_slippery_rail_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = ENUM_M_ADHESION_slippery_rail_TM_conversions;
    m_adhesion_partial = outC->_L8_then_IfBlock1;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    outC->m_adhesion = m_adhesion_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_adhesion_in ==
      INT_M_ADHESION_no_slippery_rail_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = ENUM_M_ADHESION_no_slippery_rail_TM_conversions;
      _6_m_adhesion_partial = outC->_L7_then_else_IfBlock1;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L6_then_else_IfBlock1;
      _1_m_adhesion_partial = _6_m_adhesion_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L1_else_else_IfBlock1 = ENUM_M_ADHESION_slippery_rail_TM_conversions;
      _4_m_adhesion_partial = outC->_L1_else_else_IfBlock1;
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      _1_m_adhesion_partial = _4_m_adhesion_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->m_adhesion = _1_m_adhesion_partial;
    outC->error = _2_error_partial;
  }
  outC->_L34 = outC->error;
  noname = outC->_L34;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_ADHESION_init_TM_conversions(
  outC_CAST_Int_to_M_ADHESION_TM_conversions *outC)
{
  outC->_L34 = kcg_true;
  outC->_L1 = kcg_lit_int64(0);
  outC->m_adhesion_in = kcg_lit_int64(0);
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = M_ADHESION_Slippery_rail;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = M_ADHESION_Slippery_rail;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = M_ADHESION_Slippery_rail;
  outC->m_adhesion = M_ADHESION_Slippery_rail;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_ADHESION_reset_TM_conversions(
  outC_CAST_Int_to_M_ADHESION_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_ADHESION_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

