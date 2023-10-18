/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_Q_Front_TA_Lib_internal.h"

/* TA_Lib_internal::Eval_Q_Front/ */
void Eval_Q_Front_TA_Lib_internal(
  /* q_front/ */
  Q_FRONT q_front,
  outC_Eval_Q_Front_TA_Lib_internal *outC)
{
  /* add_train_length/ */
  static kcg_bool add_train_length_partial;
  /* add_train_length/ */
  static kcg_bool _1_add_train_length_partial;

  outC->_L1 = q_front;
  outC->q_front_in = outC->_L1;
  outC->IfBlock1_clock = outC->q_front_in ==
    ENUM_Q_FRONT_train_length_delay_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = kcg_true;
    add_train_length_partial = outC->_L2_then_IfBlock1;
    outC->add_train_length = add_train_length_partial;
  }
  else {
    outC->_L1_else_IfBlock1 = kcg_false;
    _1_add_train_length_partial = outC->_L1_else_IfBlock1;
    outC->add_train_length = _1_add_train_length_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Eval_Q_Front_init_TA_Lib_internal(outC_Eval_Q_Front_TA_Lib_internal *outC)
{
  outC->_L1 = Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->q_front_in =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->add_train_length = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Eval_Q_Front_reset_TA_Lib_internal(outC_Eval_Q_Front_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Eval_Q_Front_TA_Lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

