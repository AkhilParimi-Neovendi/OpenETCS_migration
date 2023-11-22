/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.h"

/* TM_conversions::CAST_Int_to_Q_NEWCOUNTRY/ */
void CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(
  /* q_newcountry_int/ */
  kcg_int32 q_newcountry_int,
  outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions *outC)
{
  /* q_newcountry/ */
  Q_NEWCOUNTRY q_newcountry_partial;
  /* error/ */
  kcg_bool error_partial;
  /* q_newcountry/ */
  Q_NEWCOUNTRY _1_q_newcountry_partial;
  /* error/ */
  kcg_bool _2_error_partial;
  /* error/ */
  kcg_bool _3_error_partial;
  /* q_newcountry/ */
  Q_NEWCOUNTRY _4_q_newcountry_partial;
  /* error/ */
  kcg_bool _5_error_partial;
  /* q_newcountry/ */
  Q_NEWCOUNTRY _6_q_newcountry_partial;
  kcg_bool noname;

  outC->_L12 = q_newcountry_int;
  outC->q_newcountry_in = outC->_L12;
  outC->IfBlock1_clock = outC->q_newcountry_in ==
    INT_Q_NEWCOUNTRY_same_TM_conversions;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L5_then_IfBlock1 = kcg_false;
    error_partial = outC->_L5_then_IfBlock1;
    outC->_L4_then_IfBlock1 = ENUM_Q_NEWCOUNTRY_same_TM_conversions;
    q_newcountry_partial = outC->_L4_then_IfBlock1;
    outC->q_newcountry = q_newcountry_partial;
    outC->error = error_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->q_newcountry_in ==
      INT_Q_NEWCOUNTRY_not_same_TM_conversions;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L5_then_else_IfBlock1 = kcg_false;
      _5_error_partial = outC->_L5_then_else_IfBlock1;
      outC->_L3_then_else_IfBlock1 = ENUM_Q_NEWCOUNTRY_not_same_TM_conversions;
      _6_q_newcountry_partial = outC->_L3_then_else_IfBlock1;
      _1_q_newcountry_partial = _6_q_newcountry_partial;
      _2_error_partial = _5_error_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_true;
      _3_error_partial = outC->_L2_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1 = ENUM_Q_NEWCOUNTRY_not_same_TM_conversions;
      _4_q_newcountry_partial = outC->_L1_else_else_IfBlock1;
      _1_q_newcountry_partial = _4_q_newcountry_partial;
      _2_error_partial = _3_error_partial;
    }
    outC->q_newcountry = _1_q_newcountry_partial;
    outC->error = _2_error_partial;
  }
  outC->_L13 = outC->error;
  noname = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_Int_to_Q_NEWCOUNTRY_init_TM_conversions(
  outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions *outC)
{
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->q_newcountry_in = kcg_lit_int32(0);
  outC->error = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L5_then_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_IfBlock1 =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1_else_else_IfBlock1 =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_Int_to_Q_NEWCOUNTRY_reset_TM_conversions(
  outC_CAST_Int_to_Q_NEWCOUNTRY_TM_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_Int_to_Q_NEWCOUNTRY_TM_conversions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

