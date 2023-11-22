/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "From_NP_PriorityManagement.h"

/* PriorityManagement::From_NP/ */
void From_NP_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition4/ */
  kcg_bool Condition4,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_NP_PriorityManagement *outC)
{
  /* FromNP_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg FromNP_To_NewMode_partial;
  /* FromNP_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _1_FromNP_To_NewMode_partial;
  /* FromNP_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _2_FromNP_To_NewMode_partial;
  /* FromNP_To_NewMode/ */
  T_Mode_Level_And_Mode_Types_Pkg _3_FromNP_To_NewMode_partial;

  outC->IfBlock1_clock = Condition1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = IS_Level_And_Mode_Types_Pkg;
    FromNP_To_NewMode_partial = outC->_L1_then_IfBlock1;
    outC->FromNP_To_NewMode = FromNP_To_NewMode_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Condition4;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = SB_Level_And_Mode_Types_Pkg;
      _3_FromNP_To_NewMode_partial = outC->_L1_then_else_IfBlock1;
      _1_FromNP_To_NewMode_partial = _3_FromNP_To_NewMode_partial;
    }
    else {
      outC->_L3_else_else_IfBlock1 = previousMode_Loc;
      _2_FromNP_To_NewMode_partial = outC->_L3_else_else_IfBlock1;
      _1_FromNP_To_NewMode_partial = _2_FromNP_To_NewMode_partial;
    }
    outC->FromNP_To_NewMode = _1_FromNP_To_NewMode_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void From_NP_init_PriorityManagement(outC_From_NP_PriorityManagement *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->_L3_else_else_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = NP_Level_And_Mode_Types_Pkg;
  outC->FromNP_To_NewMode = NP_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void From_NP_reset_PriorityManagement(outC_From_NP_PriorityManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_NP_PriorityManagement.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

