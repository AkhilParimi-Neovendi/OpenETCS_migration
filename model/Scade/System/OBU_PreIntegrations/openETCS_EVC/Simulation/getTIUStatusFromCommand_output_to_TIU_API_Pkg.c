/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getTIUStatusFromCommand_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::getTIUStatusFromCommand/ */
void getTIUStatusFromCommand_output_to_TIU_API_Pkg(
  /* in_IsolationStatus/ */
  Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* in_brake_command/ */
  Brake_command_T_TIU_Types_Pkg *in_brake_command,
  outC_getTIUStatusFromCommand_output_to_TIU_API_Pkg *outC)
{
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(&outC->_L11, in_IsolationStatus);
  outC->_L3 = outC->_L11.valid;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L12, in_brake_command);
  outC->_L15 = outC->_L12.valid;
  outC->_L21 = outC->_L15 | outC->_L3;
  outC->_L10 = on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L8 = outC->_L11.isolation_status;
  outC->_L14 = outC->_L8 == outC->_L10;
  outC->_L20 = outC->_L3 & outC->_L14;
  outC->_L18 = apply_brake_TIU_Types_Pkg;
  outC->_L16 = outC->_L12.m_emergencybrake_cm;
  outC->_L17 = outC->_L16 == outC->_L18;
  outC->_L19 = outC->_L15 & outC->_L17;
  outC->_L4.valid = outC->_L21;
  outC->_L4.emergencyBrakeActive = outC->_L19;
  outC->_L4.isolationStatus = outC->_L20;
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(&outC->outStatus, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void getTIUStatusFromCommand_init_output_to_TIU_API_Pkg(
  outC_getTIUStatusFromCommand_output_to_TIU_API_Pkg *outC)
{
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L17 = kcg_true;
  outC->_L16 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L12.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L11.valid = kcg_true;
  outC->_L11.isolation_status = on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L10 = on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L8 = on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L4.valid = kcg_true;
  outC->_L4.emergencyBrakeActive = kcg_true;
  outC->_L4.isolationStatus = kcg_true;
  outC->_L3 = kcg_true;
  outC->outStatus.valid = kcg_true;
  outC->outStatus.emergencyBrakeActive = kcg_true;
  outC->outStatus.isolationStatus = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getTIUStatusFromCommand_reset_output_to_TIU_API_Pkg(
  outC_getTIUStatusFromCommand_output_to_TIU_API_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getTIUStatusFromCommand_output_to_TIU_API_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

