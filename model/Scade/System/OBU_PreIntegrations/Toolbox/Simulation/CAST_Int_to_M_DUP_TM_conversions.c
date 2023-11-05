/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_DUP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_DUP/ */
void CAST_Int_to_M_DUP_TM_conversions(
  /* int_in/ */
  kcg_int32 int_in,
  outC_CAST_Int_to_M_DUP_TM_conversions *outC)
{
  /* m_dup/ */
  M_DUP m_dup_partial;
  /* error/ */
  kcg_bool error_partial;
  /* m_dup/ */
  M_DUP _1_m_dup_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* m_dup/ */
  M_DUP _3_m_dup_partial;
  /* error/ */
  kcg_bool _4_error_partial;
  /* m_dup/ */
  M_DUP _5_m_dup_partial;
  /* error/ */
  kcg_bool _6_error_partial;
  /* error/ */
  kcg_bool _7_error_partial;
  /* m_dup/ */
  M_DUP _8_m_dup_partial;
  /* error/ */
  kcg_bool _9_error_partial;
  /* m_dup/ */
  M_DUP _10_m_dup_partial;
  kcg_bool noname;

  outC->_L2 = int_in;
  outC->m_dup_in = outC->_L2;
  outC->IfBlock1_clock = outC->m_dup_in ==
    INT_M_DUP_duplicate_of_next_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_dup_in ==
      INT_M_DUP_duplicate_of_previous_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _9_error_partial = outC->_L6_then_else_IfBlock1;
      _2_error_partial = _9_error_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->m_dup_in ==
        INT_M_DUP_no_duplicates_TM_conversions;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L5_then_else_else_IfBlock1 = kcg_false;
        _4_error_partial = outC->_L5_then_else_else_IfBlock1;
        _7_error_partial = _4_error_partial;
      }
      else {
        outC->_L2_else_else_else_IfBlock1 = kcg_true;
        _6_error_partial = outC->_L2_else_else_else_IfBlock1;
        _7_error_partial = _6_error_partial;
      }
      _2_error_partial = _7_error_partial;
    }
    outC->error = _2_error_partial;
  }
  outC->_L3 = outC->error;
  noname = outC->_L3;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L6_then_IfBlock1 = ENUM_M_DUP_duplicate_of_next_TM_conversions;
    m_dup_partial = outC->_L6_then_IfBlock1;
    outC->m_dup = m_dup_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = ENUM_M_DUP_duplicate_of_previous_TM_conversions;
      _10_m_dup_partial = outC->_L5_then_else_IfBlock1;
      _1_m_dup_partial = _10_m_dup_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = ENUM_M_DUP_no_duplicates_TM_conversions;
        _3_m_dup_partial = outC->_L4_then_else_else_IfBlock1;
        _8_m_dup_partial = _3_m_dup_partial;
      }
      else {
        outC->_L3_else_else_else_IfBlock1 = ENUM_M_DUP_duplicate_of_next_TM_conversions;
        _5_m_dup_partial = outC->_L3_else_else_else_IfBlock1;
        _8_m_dup_partial = _5_m_dup_partial;
      }
      _1_m_dup_partial = _8_m_dup_partial;
    }
    outC->m_dup = _1_m_dup_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_DUP_init_TM_conversions(
  outC_CAST_Int_to_M_DUP_TM_conversions *outC)
{
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->m_dup_in = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_IfBlock1 = M_DUP_No_duplicates;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_else_else_else_IfBlock1 = M_DUP_No_duplicates;
  outC->_L4_then_else_else_IfBlock1 = M_DUP_No_duplicates;
  outC->_L5_then_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L6_then_IfBlock1 = M_DUP_No_duplicates;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->m_dup = M_DUP_No_duplicates;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_M_DUP_reset_TM_conversions(
  outC_CAST_Int_to_M_DUP_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_DUP_TM_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

