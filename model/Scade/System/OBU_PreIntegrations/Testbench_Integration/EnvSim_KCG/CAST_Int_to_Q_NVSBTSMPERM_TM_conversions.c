/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_NVSBTSMPERM/ */
void CAST_Int_to_Q_NVSBTSMPERM_TM_conversions(
  /* q_nvsbtsmperm_int/ */
  kcg_int32 q_nvsbtsmperm_int,
  outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions *outC)
{
  /* q_nvsbtsmperm/ */
  static Q_NVSBTSMPERM q_nvsbtsmperm_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* q_nvsbtsmperm/ */
  static Q_NVSBTSMPERM _1_q_nvsbtsmperm_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* q_nvsbtsmperm/ */
  static Q_NVSBTSMPERM _4_q_nvsbtsmperm_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* q_nvsbtsmperm/ */
  static Q_NVSBTSMPERM _6_q_nvsbtsmperm_partial;
  static kcg_bool noname;

  outC->_L12 = q_nvsbtsmperm_int;
  outC->q_nvsbtsmperm_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_nvsbtsmperm_in ==
    INT_Q_NVSBTSMPERM_Yes_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 = ENUM_Q_NVSBTSMPERM_Yes_TM_conversions;
    q_nvsbtsmperm_partial = outC->_L4_then_IfBlock1;
    outC->q_nvsbtsmperm = q_nvsbtsmperm_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_nvsbtsmperm_in ==
      INT_Q_NVSBTSMPERM_No_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L5_then_else_IfBlock1;
      outC->_L3_then_else_IfBlock1 = ENUM_Q_NVSBTSMPERM_No_TM_conversions;
      _6_q_nvsbtsmperm_partial = outC->_L3_then_else_IfBlock1;
      _1_q_nvsbtsmperm_partial = _6_q_nvsbtsmperm_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = ENUM_Q_NVSBTSMPERM_No_TM_conversions;
      _4_q_nvsbtsmperm_partial = outC->_L1_else_else_IfBlock1;
      _1_q_nvsbtsmperm_partial = _4_q_nvsbtsmperm_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->q_nvsbtsmperm = _1_q_nvsbtsmperm_partial;
    outC->error = _2_error_partial;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_NVSBTSMPERM_init_TM_conversions(
  outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->q_nvsbtsmperm_in = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 = Q_NVSBTSMPERM_No;
  outC->_L1_else_else_IfBlock1 = Q_NVSBTSMPERM_No;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = Q_NVSBTSMPERM_No;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->q_nvsbtsmperm = Q_NVSBTSMPERM_No;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_NVSBTSMPERM_reset_TM_conversions(
  outC_CAST_Int_to_Q_NVSBTSMPERM_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_Q_NVSBTSMPERM_TM_conversions.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

