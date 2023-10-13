/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_FRONT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_FRONT/ */
void CAST_Int_to_Q_FRONT_TM_conversions(
  /* q_front_int/ */
  kcg_int64 q_front_int,
  outC_CAST_Int_to_Q_FRONT_TM_conversions *outC)
{
  /* q_front/ */
  static Q_FRONT q_front_partial;
  /* error/ */
  static kcg_bool error_partial;
  /* q_front/ */
  static Q_FRONT _1_q_front_partial;
  /* error/ */
  static kcg_bool _2_error_partial;
  /* error/ */
  static kcg_bool _3_error_partial;
  /* q_front/ */
  static Q_FRONT _4_q_front_partial;
  /* error/ */
  static kcg_bool _5_error_partial;
  /* q_front/ */
  static Q_FRONT _6_q_front_partial;
  static kcg_bool noname;

  outC->_L12 = q_front_int;
  outC->q_front_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_front_in ==
    INT_Q_FRONT_train_length_delay_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 = ENUM_Q_FRONT_train_length_delay_TM_conversions;
    q_front_partial = outC->_L4_then_IfBlock1;
    outC->q_front = q_front_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_front_in ==
      INT_Q_FRONT_no_train_length_delay_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L5_then_else_IfBlock1;
      outC->_L3_then_else_IfBlock1 =
        ENUM_Q_FRONT_no_train_length_delay_TM_conversions;
      _6_q_front_partial = outC->_L3_then_else_IfBlock1;
      _1_q_front_partial = _6_q_front_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = ENUM_Q_FRONT_train_length_delay_TM_conversions;
      _4_q_front_partial = outC->_L1_else_else_IfBlock1;
      _1_q_front_partial = _4_q_front_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->q_front = _1_q_front_partial;
    outC->error = _2_error_partial;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_FRONT_init_TM_conversions(
  outC_CAST_Int_to_Q_FRONT_TM_conversions *outC)
{
  outC->_L12 = kcg_lit_int64(0);
  outC->_L13 = kcg_true;
  outC->q_front_in = kcg_lit_int64(0);
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->_L1_else_else_IfBlock1 =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_FRONT_reset_TM_conversions(
  outC_CAST_Int_to_Q_FRONT_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_Q_FRONT_TM_conversions.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

