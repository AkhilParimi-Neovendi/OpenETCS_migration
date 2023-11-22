/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Bool_to_Int_Utilities.h"

/* Utilities::Bool_to_Int/ */
void Bool_to_Int_Utilities(
  /* bool_in/ */
  kcg_bool bool_in,
  outC_Bool_to_Int_Utilities *outC)
{
  /* int_out/ */
  kcg_int32 int_out_partial;
  /* errorLocal/ */
  kcg_bool errorLocal_partial;
  /* int_out/ */
  kcg_int32 _1_int_out_partial;
  /* errorLocal/ */
  kcg_bool _2_errorLocal_partial;
  /* errorLocal/ */
  kcg_bool _3_errorLocal_partial;
  /* int_out/ */
  kcg_int32 _4_int_out_partial;
  /* errorLocal/ */
  kcg_bool _5_errorLocal_partial;
  /* int_out/ */
  kcg_int32 _6_int_out_partial;
  kcg_bool noname;

  outC->IfBlock1_clock = bool_in == kcg_true;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = kcg_false;
    errorLocal_partial = outC->_L2_then_IfBlock1;
    outC->errorLocal = errorLocal_partial;
  }
  else {
    outC->else_clock_IfBlock1 = bool_in == kcg_false;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = kcg_false;
      _5_errorLocal_partial = outC->_L2_then_else_IfBlock1;
      _2_errorLocal_partial = _5_errorLocal_partial;
    }
    else {
      outC->_L1_else_else_IfBlock1 = kcg_true;
      _3_errorLocal_partial = outC->_L1_else_else_IfBlock1;
      _2_errorLocal_partial = _3_errorLocal_partial;
    }
    outC->errorLocal = _2_errorLocal_partial;
  }
  outC->_L1 = outC->errorLocal;
  noname = outC->_L1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = kcg_lit_int32(1);
    int_out_partial = outC->_L1_then_IfBlock1;
    outC->int_out = int_out_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = kcg_lit_int32(0);
      _6_int_out_partial = outC->_L1_then_else_IfBlock1;
      _1_int_out_partial = _6_int_out_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_lit_int32(-1);
      _4_int_out_partial = outC->_L2_else_else_IfBlock1;
      _1_int_out_partial = _4_int_out_partial;
    }
    outC->int_out = _1_int_out_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Bool_to_Int_init_Utilities(outC_Bool_to_Int_Utilities *outC)
{
  outC->_L1 = kcg_true;
  outC->errorLocal = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->int_out = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Bool_to_Int_reset_Utilities(outC_Bool_to_Int_Utilities *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Bool_to_Int_Utilities.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

