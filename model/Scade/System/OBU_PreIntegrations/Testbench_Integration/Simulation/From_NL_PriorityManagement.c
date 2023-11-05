/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_NL_PriorityManagement.h"

/* PriorityManagement::From_NL/ */
void From_NL_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition28/ */
  kcg_bool Condition28,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition47/ */
  kcg_bool Condition47,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_NL_PriorityManagement *outC)
{
  /* FromNL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg FromNL_To_NewMode_partial;
  /* FromNL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromNL_To_NewMode_partial;
  /* FromNL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromNL_To_NewMode_partial;
  /* FromNL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromNL_To_NewMode_partial;
  /* FromNL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromNL_To_NewMode_partial;
  /* FromNL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromNL_To_NewMode_partial;

  outC->IfBlock1_clock = Condition1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromNL_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromNL_To_NewMode = FromNL_To_NewMode_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _5_FromNL_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromNL_To_NewMode_partial = _5_FromNL_To_NewMode_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Condition28 | Condition47;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
        _2_FromNL_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _4_FromNL_To_NewMode_partial = _2_FromNL_To_NewMode_partial;
      }
      else {
        outC->_L1_else_else_else_IfBlock1 = previousMode_Loc;
        _3_FromNL_To_NewMode_partial = outC->_L1_else_else_else_IfBlock1;
        _4_FromNL_To_NewMode_partial = _3_FromNL_To_NewMode_partial;
      }
      _1_FromNL_To_NewMode_partial = _4_FromNL_To_NewMode_partial;
    }
    outC->FromNL_To_NewMode = _1_FromNL_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_NL_init_PriorityManagement(outC_From_NL_PriorityManagement *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->_L1_then_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->FromNL_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_NL_reset_PriorityManagement(outC_From_NL_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_NL_PriorityManagement.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

