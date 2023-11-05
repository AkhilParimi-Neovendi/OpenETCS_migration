/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handleBrakeCommand_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::handleBrakeCommand/ */
void handleBrakeCommand_output_to_TIU_API_Pkg(
  /* in_brake_command/ */
  Brake_command_T_TIU_Types_Pkg *in_brake_command,
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC)
{
  /* in_brake_command/ */
  static Brake_command_T_TIU_Types_Pkg last_in_brake_command;

  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &last_in_brake_command,
    &outC->mem_in_brake_command);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->mem_in_brake_command,
    in_brake_command);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L9,
    (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCmd);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L8, in_brake_command);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L2, &last_in_brake_command);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L1, in_brake_command);
  outC->_L3 = !kcg_comp_Brake_command_T_TIU_Types_Pkg(&outC->_L1, &outC->_L2);
  outC->_L6 = outC->_L1.valid;
  outC->_L4 = outC->_L6 & outC->_L3;
  /* _L7= */
  if (outC->_L4) {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L7, &outC->_L8);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L7, &outC->_L9);
  }
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->out_brake_command, &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void handleBrakeCommand_init_output_to_TIU_API_Pkg(
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC)
{
  outC->_L9.valid = kcg_true;
  outC->_L9.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L9.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L8.valid = kcg_true;
  outC->_L8.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L8.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L7.valid = kcg_true;
  outC->_L7.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L7.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L6 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L2.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1.valid = kcg_true;
  outC->_L1.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->out_brake_command.valid = kcg_true;
  outC->out_brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->out_brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->mem_in_brake_command,
    (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCmd);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void handleBrakeCommand_reset_output_to_TIU_API_Pkg(
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC)
{
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->mem_in_brake_command,
    (Brake_command_T_TIU_Types_Pkg *) &cEmptyBrakeCmd);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_handleBrakeCommand_output_to_TIU_API_Pkg(
  SV_handleBrakeCommand_output_to_TIU_API_Pkg *SV,
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC)
{
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &SV->Context_mem_in_brake_command,
    &outC->mem_in_brake_command);
}

void kcg_load_SV_handleBrakeCommand_output_to_TIU_API_Pkg(
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC,
  SV_handleBrakeCommand_output_to_TIU_API_Pkg *SV)
{
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->mem_in_brake_command,
    &SV->Context_mem_in_brake_command);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** handleBrakeCommand_output_to_TIU_API_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

