/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_NVDERUN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_NVDERUN/ */
void CAST_Int_to_M_NVDERUN_TM_conversions(
  /* m_nvderun_int/ */
  kcg_int32 m_nvderun_int,
  outC_CAST_Int_to_M_NVDERUN_TM_conversions *outC)
{
  /* m_nvderun/ */
  static M_NVDERUN m_nvderun_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_nvderun/ */
  static M_NVDERUN _1_m_nvderun_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* m_nvderun/ */
  static M_NVDERUN _4_m_nvderun_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* m_nvderun/ */
  static M_NVDERUN _6_m_nvderun_partial;
  static kcg_bool noname;

  outC->_L21 = m_nvderun_int;
  outC->m_nvderun_in = outC->_L21;
  outC->IfBlock1_clock = outC->m_nvderun_in == INT_M_NVDERUN_no_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = ENUM_M_NVDERUN_no_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_nvderun_partial = outC->_L8_then_IfBlock1;
    outC->m_nvderun = m_nvderun_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_nvderun_in ==
      INT_M_NVDERUN_yes_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = ENUM_M_NVDERUN_yes_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L6_then_else_IfBlock1;
      _6_m_nvderun_partial = outC->_L7_then_else_IfBlock1;
      _1_m_nvderun_partial = _6_m_nvderun_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = ENUM_M_NVDERUN_yes_TM_conversions;
      _4_m_nvderun_partial = outC->_L1_else_else_IfBlock1;
      _1_m_nvderun_partial = _4_m_nvderun_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->m_nvderun = _1_m_nvderun_partial;
    outC->error = _2_error_partial;
  }
  outC->_L20 = outC->error;
  noname = outC->_L20;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_NVDERUN_init_TM_conversions(
  outC_CAST_Int_to_M_NVDERUN_TM_conversions *outC)
{
  outC->_L20 = kcg_true;
  outC->_L21 = kcg_lit_int32(0);
  outC->m_nvderun_in = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = M_NVDERUN_No;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = M_NVDERUN_No;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = M_NVDERUN_No;
  outC->m_nvderun = M_NVDERUN_No;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_NVDERUN_reset_TM_conversions(
  outC_CAST_Int_to_M_NVDERUN_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_NVDERUN_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

