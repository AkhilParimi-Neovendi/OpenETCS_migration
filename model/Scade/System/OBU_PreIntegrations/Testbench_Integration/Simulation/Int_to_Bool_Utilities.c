/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int_to_Bool_Utilities.h"

/* Utilities::Int_to_Bool/ */
void Int_to_Bool_Utilities(
  /* int_in/ */
  kcg_int32 int_in,
  outC_Int_to_Bool_Utilities *outC)
{
  /* bool_out/ */
  static kcg_bool bool_out_partial;
  /* err/ */
  static kcg_bool err_partial;
  /* bool_out/ */
  static kcg_bool _1_bool_out_partial;
  /* err/ */
  static kcg_bool _2_err_partial;
  /* err/ */
  static kcg_bool _3_err_partial;
  /* bool_out/ */
  static kcg_bool _4_bool_out_partial;
  /* err/ */
  static kcg_bool _5_err_partial;
  /* bool_out/ */
  static kcg_bool _6_bool_out_partial;
  static kcg_bool noname;

  outC->IfBlock1_clock = int_in == kcg_lit_int32(0);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = kcg_false;
    err_partial = outC->_L2_then_IfBlock1;
    outC->err = err_partial;
  }
  else {
    outC->else_clock_IfBlock1 = int_in == kcg_lit_int32(1);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = kcg_false;
      _5_err_partial = outC->_L2_then_else_IfBlock1;
      _2_err_partial = _5_err_partial;
    }
    else {
      outC->_L1_else_else_IfBlock1 = kcg_true;
      _3_err_partial = outC->_L1_else_else_IfBlock1;
      _2_err_partial = _3_err_partial;
    }
    outC->err = _2_err_partial;
  }
  outC->_L1 = outC->err;
  noname = outC->_L1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = kcg_false;
    bool_out_partial = outC->_L1_then_IfBlock1;
    outC->bool_out = bool_out_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = kcg_true;
      _6_bool_out_partial = outC->_L1_then_else_IfBlock1;
      _1_bool_out_partial = _6_bool_out_partial;
    }
    else {
      outC->_L2_else_else_IfBlock1 = kcg_false;
      _4_bool_out_partial = outC->_L2_else_else_IfBlock1;
      _1_bool_out_partial = _4_bool_out_partial;
    }
    outC->bool_out = _1_bool_out_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Int_to_Bool_init_Utilities(outC_Int_to_Bool_Utilities *outC)
{
  outC->_L1 = kcg_true;
  outC->err = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1 = kcg_true;
  outC->_L2_else_else_IfBlock1 = kcg_true;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->bool_out = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Int_to_Bool_reset_Utilities(outC_Int_to_Bool_Utilities *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Int_to_Bool_Utilities.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

