/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_LINKORIENTATION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_LINKORIENTATION/ */
void CAST_Int_to_Q_LINKORIENTATION_TM_conversions(
  /* q_linkorientation_int/ */
  kcg_int32 q_linkorientation_int,
  outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions *outC)
{
  /* q_linkorientation/ */
  Q_LINKORIENTATION q_linkorientation_partial;
  /* error/ */
  kcg_bool error_partial;
  /* q_linkorientation/ */
  Q_LINKORIENTATION _1_q_linkorientation_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* error/ */
  kcg_bool _3_error_partial;
  /* q_linkorientation/ */
  Q_LINKORIENTATION _4_q_linkorientation_partial;
  /* error/ */
  kcg_bool _5_error_partial;
  /* q_linkorientation/ */
  Q_LINKORIENTATION _6_q_linkorientation_partial;
  kcg_bool noname;

  outC->_L12 = q_linkorientation_int;
  outC->q_linkorientation_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_linkorientation_in ==
    INT_Q_LINKORIENTATION_nominal_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 = ENUM_Q_LINKORIENTATION_nominal_TM_conversions;
    q_linkorientation_partial = outC->_L4_then_IfBlock1;
    outC->q_linkorientation = q_linkorientation_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_linkorientation_in ==
      INT_Q_LINKORIENTATION_reverse_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L5_then_else_IfBlock1;
      outC->_L3_then_else_IfBlock1 = ENUM_Q_LINKORIENTATION_reverse_TM_conversions;
      _6_q_linkorientation_partial = outC->_L3_then_else_IfBlock1;
      _1_q_linkorientation_partial = _6_q_linkorientation_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = ENUM_Q_LINKORIENTATION_reverse_TM_conversions;
      _4_q_linkorientation_partial = outC->_L1_else_else_IfBlock1;
      _1_q_linkorientation_partial = _4_q_linkorientation_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->q_linkorientation = _1_q_linkorientation_partial;
    outC->error = _2_error_partial;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_LINKORIENTATION_init_TM_conversions(
  outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->q_linkorientation_in = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1_else_else_IfBlock1 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_LINKORIENTATION_reset_TM_conversions(
  outC_CAST_Int_to_Q_LINKORIENTATION_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_Q_LINKORIENTATION_TM_conversions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

