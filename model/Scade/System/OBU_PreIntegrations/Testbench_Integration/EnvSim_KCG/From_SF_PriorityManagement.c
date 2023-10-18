/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_SF_PriorityManagement.h"

/* PriorityManagement::From_SF/ */
void From_SF_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition29/ */
  kcg_bool Condition29,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_SF_PriorityManagement *outC)
{
  /* FromSF_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg FromSF_To_NewMode_partial;
  /* FromSF_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _1_FromSF_To_NewMode_partial;
  /* FromSF_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _2_FromSF_To_NewMode_partial;
  /* FromSF_To_NewMode/ */
  static T_Mode_Level_And_Mode_Types_Pkg _3_FromSF_To_NewMode_partial;

  outC->IfBlock1_clock = Condition1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromSF_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromSF_To_NewMode = FromSF_To_NewMode_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Condition29;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
      _3_FromSF_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromSF_To_NewMode_partial = _3_FromSF_To_NewMode_partial;
    }
    else {
      outC->_L1_else_else_IfBlock1 = previousMode_Loc;
      _2_FromSF_To_NewMode_partial = outC->_L1_else_else_IfBlock1;
      _1_FromSF_To_NewMode_partial = _2_FromSF_To_NewMode_partial;
    }
    outC->FromSF_To_NewMode = _1_FromSF_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_SF_init_PriorityManagement(outC_From_SF_PriorityManagement *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->_L1_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->FromSF_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_SF_reset_PriorityManagement(outC_From_SF_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_SF_PriorityManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

