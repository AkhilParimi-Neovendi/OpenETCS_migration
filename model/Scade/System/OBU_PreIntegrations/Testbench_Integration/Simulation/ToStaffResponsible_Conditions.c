/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToStaffResponsible_Conditions.h"

/* Conditions::ToStaffResponsible/ */
void ToStaffResponsible_Conditions(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Driver_Req_Override/ */
  kcg_bool Driver_Req_Override,
  /* Train_Speed_Under_Override_Limit/ */
  kcg_bool Train_Speed_Under_Override_Limit,
  /* Override_Function_Active/ */
  kcg_bool Override_Function_Active,
  /* Emergency_Stop_Message_Received/ */
  kcg_bool Emergency_Stop_Message_Received,
  outC_ToStaffResponsible_Conditions *outC)
{
  /* Current_Level/ */
  static M_LEVEL last_Current_Level;

  last_Current_Level = outC->mem_Current_Level;
  outC->mem_Current_Level = Current_Level;
  outC->_L460 = (last_Current_Level == M_LEVEL_Level_0) | (last_Current_Level ==
      M_LEVEL_Level_NTC_specified_by_NID_NTC);
  outC->Level_prev_L0_LNTC = outC->_L460;
  outC->_L469 = outC->Level_prev_L0_LNTC;
  outC->_L468 = outC->Level_prev_L0_LNTC;
  outC->_L461 = (Current_Level == M_LEVEL_Level_2) | (Current_Level ==
      M_LEVEL_Level_3);
  outC->Level_L2_L3 = outC->_L461;
  outC->_L467 = outC->Level_L2_L3;
  outC->_L465 = Current_Level == M_LEVEL_Level_1;
  outC->Level_L1 = outC->_L465;
  outC->_L466 = outC->Level_L1;
  outC->_L437 = Train_Speed_Under_Override_Limit;
  outC->_L436 = Driver_Req_Override;
  outC->_L429 = outC->_L436 & outC->_L437;
  outC->Condition37 = outC->_L429;
  outC->_L458 = Emergency_Stop_Message_Received;
  outC->_L459 = !outC->_L458;
  outC->_L457 = Override_Function_Active;
  outC->_L374 = outC->_L467 & outC->_L469 & outC->_L457 & outC->_L459;
  outC->Condition45 = outC->_L374;
  outC->_L456 = Override_Function_Active;
  outC->_L451 = outC->_L466 & outC->_L468 & outC->_L456;
  outC->Condition44 = outC->_L451;
}

#ifndef KCG_USER_DEFINED_INIT
void ToStaffResponsible_init_Conditions(
  outC_ToStaffResponsible_Conditions *outC)
{
  outC->_L469 = kcg_true;
  outC->_L468 = kcg_true;
  outC->_L467 = kcg_true;
  outC->_L466 = kcg_true;
  outC->_L460 = kcg_true;
  outC->_L461 = kcg_true;
  outC->_L465 = kcg_true;
  outC->_L459 = kcg_true;
  outC->_L458 = kcg_true;
  outC->_L457 = kcg_true;
  outC->_L456 = kcg_true;
  outC->_L451 = kcg_true;
  outC->_L437 = kcg_true;
  outC->_L436 = kcg_true;
  outC->_L429 = kcg_true;
  outC->_L374 = kcg_true;
  outC->Level_L1 = kcg_true;
  outC->Level_L2_L3 = kcg_true;
  outC->Level_prev_L0_LNTC = kcg_true;
  outC->Condition37 = kcg_true;
  outC->Condition45 = kcg_true;
  outC->Condition44 = kcg_true;
  outC->mem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToStaffResponsible_reset_Conditions(
  outC_ToStaffResponsible_Conditions *outC)
{
  outC->mem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_ToStaffResponsible_Conditions(
  SV_ToStaffResponsible_Conditions *SV,
  outC_ToStaffResponsible_Conditions *outC)
{
  SV->Context_mem_Current_Level = outC->mem_Current_Level;
}

void kcg_load_SV_ToStaffResponsible_Conditions(
  outC_ToStaffResponsible_Conditions *outC,
  SV_ToStaffResponsible_Conditions *SV)
{
  outC->mem_Current_Level = SV->Context_mem_Current_Level;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToStaffResponsible_Conditions.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

