/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SL_PriorityManagement.h"

/* PriorityManagement::From_SL/ */
void From_SL_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition3/ */
  kcg_bool Condition3,
  /* Condition2/ */
  kcg_bool Condition2,
  /* Condition29/ */
  kcg_bool Condition29,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_SL_PriorityManagement *outC)
{
  /* FromSL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg FromSL_To_NewMode_partial;
  /* FromSL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSL_To_NewMode_partial;
  /* FromSL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSL_To_NewMode_partial;
  /* FromSL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSL_To_NewMode_partial;
  /* FromSL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _4_FromSL_To_NewMode_partial;
  /* FromSL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _5_FromSL_To_NewMode_partial;
  /* FromSL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _6_FromSL_To_NewMode_partial;
  /* FromSL_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _7_FromSL_To_NewMode_partial;

  outC->IfBlock1_clock = Condition1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromSL_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromSL_To_NewMode = FromSL_To_NewMode_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _7_FromSL_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromSL_To_NewMode_partial = _7_FromSL_To_NewMode_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = Condition2;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
        _2_FromSL_To_NewMode_partial = outC->_L1_then_else_else_IfBlock1;
        _6_FromSL_To_NewMode_partial = _2_FromSL_To_NewMode_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = Condition3;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L1_then_else_else_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
          _5_FromSL_To_NewMode_partial = outC->_L1_then_else_else_else_IfBlock1;
          _3_FromSL_To_NewMode_partial = _5_FromSL_To_NewMode_partial;
        }
        else {
          outC->_L1_else_else_else_else_IfBlock1 = previousMode_Loc;
          _4_FromSL_To_NewMode_partial = outC->_L1_else_else_else_else_IfBlock1;
          _3_FromSL_To_NewMode_partial = _4_FromSL_To_NewMode_partial;
        }
        _6_FromSL_To_NewMode_partial = _3_FromSL_To_NewMode_partial;
      }
      _1_FromSL_To_NewMode_partial = _6_FromSL_To_NewMode_partial;
    }
    outC->FromSL_To_NewMode = _1_FromSL_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_SL_init_PriorityManagement(outC_From_SL_PriorityManagement *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->_L1_else_else_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->FromSL_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_SL_reset_PriorityManagement(outC_From_SL_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_SL_PriorityManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

