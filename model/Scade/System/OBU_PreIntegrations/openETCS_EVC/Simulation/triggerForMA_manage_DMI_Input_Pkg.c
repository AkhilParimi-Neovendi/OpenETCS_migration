/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "triggerForMA_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::triggerForMA/ */
void triggerForMA_manage_DMI_Input_Pkg(
  /* fromDMI_driverRequest/ */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *fromDMI_driverRequest,
  outC_triggerForMA_manage_DMI_Input_Pkg *outC)
{
  /* outForMA/ */
  Driver2MAR_T_MA_Request outForMA_partial;
  /* outForMA/ */
  Driver2MAR_T_MA_Request _1_outForMA_partial;

  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L1,
    fromDMI_driverRequest);
  outC->_L2 = outC->_L1.valid;
  outC->isValid = outC->_L2;
  outC->IfBlock1_clock = outC->isValid;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L9_then_IfBlock1 = Track_Ahead_Free_is_validated_DMI_Types_Pkg;
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L1_then_IfBlock1,
      fromDMI_driverRequest);
    outC->_L2_then_IfBlock1 = outC->_L1_then_IfBlock1.m_request;
    outC->_L8_then_IfBlock1 = outC->_L2_then_IfBlock1 == outC->_L9_then_IfBlock1;
    outC->_L5_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
    outC->_L4_then_IfBlock1 = outC->_L2_then_IfBlock1 == outC->_L5_then_IfBlock1;
    outC->_L7_then_IfBlock1.trackAheadFree = outC->_L8_then_IfBlock1;
    outC->_L7_then_IfBlock1.driverSelectsStart = outC->_L4_then_IfBlock1;
    kcg_copy_Driver2MAR_T_MA_Request(&outForMA_partial, &outC->_L7_then_IfBlock1);
    kcg_copy_Driver2MAR_T_MA_Request(&outC->outForMA, &outForMA_partial);
  }
  else {
    kcg_copy_Driver2MAR_T_MA_Request(
      &outC->_L1_else_IfBlock1,
      (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
    kcg_copy_Driver2MAR_T_MA_Request(
      &_1_outForMA_partial,
      &outC->_L1_else_IfBlock1);
    kcg_copy_Driver2MAR_T_MA_Request(&outC->outForMA, &_1_outForMA_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void triggerForMA_init_manage_DMI_Input_Pkg(
  outC_triggerForMA_manage_DMI_Input_Pkg *outC)
{
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTime = kcg_lit_int32(0);
  outC->_L1.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->isValid = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.trackAheadFree = kcg_true;
  outC->_L1_else_IfBlock1.driverSelectsStart = kcg_true;
  outC->_L2_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L4_then_IfBlock1 = kcg_true;
  outC->_L5_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
  outC->_L7_then_IfBlock1.trackAheadFree = kcg_true;
  outC->_L7_then_IfBlock1.driverSelectsStart = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_true;
  outC->_L9_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
  outC->outForMA.trackAheadFree = kcg_true;
  outC->outForMA.driverSelectsStart = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void triggerForMA_reset_manage_DMI_Input_Pkg(
  outC_triggerForMA_manage_DMI_Input_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** triggerForMA_manage_DMI_Input_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

