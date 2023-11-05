/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_OVERLAP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_OVERLAP/ */
void CAST_Int_to_Q_OVERLAP_TM_conversions(
  /* q_overlap_int/ */
  kcg_int32 q_overlap_int,
  outC_CAST_Int_to_Q_OVERLAP_TM_conversions *outC)
{
  /* q_overlap/ */
  static Q_OVERLAP q_overlap_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* q_overlap/ */
  static Q_OVERLAP _1_q_overlap_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* q_overlap/ */
  static Q_OVERLAP _4_q_overlap_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* q_overlap/ */
  static Q_OVERLAP _6_q_overlap_partial;
  static kcg_bool noname;

  outC->_L12 = q_overlap_int;
  outC->q_overlap_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_overlap_in ==
    INT_Q_OVERLAP_overlap_info_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 = ENUM_Q_OVERLAP_overlap_info_TM_conversions;
    q_overlap_partial = outC->_L4_then_IfBlock1;
    outC->q_overlap = q_overlap_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_overlap_in ==
      INT_Q_OVERLAP_no_overlap_info_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L5_then_else_IfBlock1;
      outC->_L3_then_else_IfBlock1 = ENUM_Q_OVERLAP_no_overlap_info_TM_conversions;
      _6_q_overlap_partial = outC->_L3_then_else_IfBlock1;
      _1_q_overlap_partial = _6_q_overlap_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = ENUM_Q_OVERLAP_overlap_info_TM_conversions;
      _4_q_overlap_partial = outC->_L1_else_else_IfBlock1;
      _1_q_overlap_partial = _4_q_overlap_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->q_overlap = _1_q_overlap_partial;
    outC->error = _2_error_partial;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_OVERLAP_init_TM_conversions(
  outC_CAST_Int_to_Q_OVERLAP_TM_conversions *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->q_overlap_in = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 = Q_OVERLAP_No_overlap_information;
  outC->_L1_else_else_IfBlock1 = Q_OVERLAP_No_overlap_information;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = Q_OVERLAP_No_overlap_information;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->q_overlap = Q_OVERLAP_No_overlap_information;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_OVERLAP_reset_TM_conversions(
  outC_CAST_Int_to_Q_OVERLAP_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_Q_OVERLAP_TM_conversions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

