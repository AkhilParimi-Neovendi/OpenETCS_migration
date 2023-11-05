/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_M_ACK_to_int_TM_conversions.h"

/* TM_conversions::CAST_M_ACK_to_int/ */
void CAST_M_ACK_to_int_TM_conversions(
  /* m_ack/ */
  M_ACK m_ack,
  outC_CAST_M_ACK_to_int_TM_conversions *outC)
{
  /* m_ack_int/ */
  static kcg_int32 m_ack_int_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* m_ack_int/ */
  static kcg_int32 _1_m_ack_int_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* m_ack_int/ */
  static kcg_int32 _4_m_ack_int_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* m_ack_int/ */
  static kcg_int32 _6_m_ack_int_partial;
  static kcg_bool noname;

  outC->_L4 = m_ack;
  outC->m_ack_in = outC->_L4;
  outC->IfBlock1_clock = outC->m_ack_in ==
    ENUM_M_ACK_acknowledgement_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = INT_M_ACK_acknowledgement_TM_conversions;
    outC->_L7_then_IfBlock1 = kcg_false;
    error_partial = outC->_L7_then_IfBlock1;
    m_ack_int_partial = outC->_L8_then_IfBlock1;
    outC->m_ack_int = m_ack_int_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->m_ack_in ==
      ENUM_M_ACK_no_acknowledgement_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L7_then_else_IfBlock1 = INT_M_ACK_no_acknowledgement_TM_conversions;
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L6_then_else_IfBlock1;
      _6_m_ack_int_partial = outC->_L7_then_else_IfBlock1;
      _1_m_ack_int_partial = _6_m_ack_int_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = INT_M_ACK_acknowledgement_TM_conversions;
      _4_m_ack_int_partial = outC->_L1_else_else_IfBlock1;
      _1_m_ack_int_partial = _4_m_ack_int_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->m_ack_int = _1_m_ack_int_partial;
    outC->error = _2_error_partial;
  }
  outC->_L5 = outC->error;
  noname = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_M_ACK_to_int_init_TM_conversions(
  outC_CAST_M_ACK_to_int_TM_conversions *outC)
{
  outC->_L4 = M_ACK_No_acknowledgement_required;
  outC->_L5 = kcg_true;
  outC->error = kcg_true;
  outC->m_ack_in = M_ACK_No_acknowledgement_required;
  outC->IfBlock1_clock = kcg_true;
  outC->_L7_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->m_ack_int = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void CAST_M_ACK_to_int_reset_TM_conversions(
  outC_CAST_M_ACK_to_int_TM_conversions *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_M_ACK_to_int_TM_conversions.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

