/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_M_ACK_TM_conversions.h"

/* TM_conversions::CAST_Int_to_M_ACK/ */
void CAST_Int_to_M_ACK_TM_conversions(
  /* m_ack_int/ */
  kcg_int64 m_ack_int,
  outC_CAST_Int_to_M_ACK_TM_conversions *outC)
{
  /* m_ack/ */
  static M_ACK m_ack_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_ack/ */
  static M_ACK _1_m_ack_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* m_ack/ */
  static M_ACK _4_m_ack_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* m_ack/ */
  static M_ACK _6_m_ack_partial;
  static kcg_bool noname;

  outC->_L4 = m_ack_int;
  outC->m_ack_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_ack_in ==
    INT_M_ACK_acknowledgement_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = ENUM_M_ACK_acknowledgement_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_ack_partial = outC->_L8_then_IfBlock1;
    outC->m_ack = m_ack_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_ack_in ==
      INT_M_ACK_no_acknowledgement_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = ENUM_M_ACK_no_acknowledgement_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L6_then_else_IfBlock1;
      _6_m_ack_partial = outC->_L7_then_else_IfBlock1;
      _1_m_ack_partial = _6_m_ack_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = ENUM_M_ACK_acknowledgement_TM_conversions;
      _4_m_ack_partial = outC->_L1_else_else_IfBlock1;
      _1_m_ack_partial = _4_m_ack_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->m_ack = _1_m_ack_partial;
    outC->error = _2_error_partial;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_M_ACK_init_TM_conversions(
  outC_CAST_Int_to_M_ACK_TM_conversions *outC)
{
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->error = kcg_true;
  outC->m_ack_in = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = M_ACK_No_acknowledgement_required;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = M_ACK_No_acknowledgement_required;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = M_ACK_No_acknowledgement_required;
  outC->m_ack = M_ACK_No_acknowledgement_required;
}
#endif /* KCG_USER_DEFINED_INIT */


void CAST_Int_to_M_ACK_reset_TM_conversions(
  outC_CAST_Int_to_M_ACK_TM_conversions *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_M_ACK_TM_conversions.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

