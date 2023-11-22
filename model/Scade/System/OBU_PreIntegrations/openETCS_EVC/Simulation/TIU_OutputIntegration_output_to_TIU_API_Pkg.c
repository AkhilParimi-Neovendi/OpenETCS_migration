/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TIU_OutputIntegration_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::TIU_OutputIntegration/ */
void TIU_OutputIntegration_output_to_TIU_API_Pkg(
  /* in_IsolationStatus/ */
  Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* SpeedSup_brakeCommand/ */
  Brake_command_T_TIU_Types_Pkg *SpeedSup_brakeCommand,
  /* in_brake_inhibition/ */
  Brake_inhibition_command_T_TIU_Types_Pkg *in_brake_inhibition,
  /* in_train_commands/ */
  Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* in_change_traction_system/ */
  Change_traction_system_T_TIU_Types_Pkg *in_change_traction_system,
  /* in_passenger_door_control_info/ */
  Passenger_door_control_info_T_TIU_Types_Pkg *in_passenger_door_control_info,
  /* in_change_of_allowed_current_consumption/ */
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *in_change_of_allowed_current_consumption,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC)
{
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L13, inModeAndLevel);
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&outC->_L7, in_train_commands);
  /* _L12=(output_to_TIU_API_Pkg::handleTraction#1)/ */
  handleTraction_output_to_TIU_API_Pkg(
    &outC->_L7,
    &outC->_L13,
    &outC->Context_handleTraction_1);
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
    &outC->_L12,
    &outC->Context_handleTraction_1.outTrainCommands);
  kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
    &outC->_L10,
    in_change_of_allowed_current_consumption);
  kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(
    &outC->_L9,
    in_passenger_door_control_info);
  kcg_copy_Change_traction_system_T_TIU_Types_Pkg(
    &outC->_L8,
    in_change_traction_system);
  kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(
    &outC->_L6,
    in_brake_inhibition);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L4, SpeedSup_brakeCommand);
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(&outC->_L3, in_IsolationStatus);
  /* _L1=(output_to_TIU_API_Pkg::manageTIU_output#1)/ */
  manageTIU_output_output_to_TIU_API_Pkg(
    &outC->_L3,
    &outC->_L4,
    &outC->_L6,
    &outC->_L12,
    &outC->_L8,
    &outC->_L9,
    &outC->_L10,
    &outC->Context_manageTIU_output_1);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(
    &outC->_L1,
    &outC->Context_manageTIU_output_1.outTIU_to_API);
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(
    &outC->_L2,
    &outC->Context_manageTIU_output_1.outCommandStatusforEVC);
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(
    &outC->outCommandStatusforEVC,
    &outC->_L2);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->outTIU_to_API, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void TIU_OutputIntegration_init_output_to_TIU_API_Pkg(
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC)
{
  outC->_L13.compatibleModeAndLevel = kcg_true;
  outC->_L13.level = M_LEVEL_Level_0;
  outC->_L13.newLevel = kcg_true;
  outC->_L13.Mode = M_MODE_Full_Supervision;
  outC->_L13.newMode = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.m_pantograph_cm = pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L12.m_airtightness_cm = airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L12.m_mainpowerswitch_cm = open_main_power_swicth_TIU_Types_Pkg;
  outC->_L12.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L10.valid = kcg_true;
  outC->_L10.d_test_current.now = kcg_lit_int32(0);
  outC->_L10.d_test_current.distance = kcg_lit_int32(0);
  outC->_L10.m_current.no_restriction = kcg_true;
  outC->_L10.m_current.restriction = kcg_lit_int32(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.door_control_info = kcg_lit_int32(0);
  outC->_L8.valid = kcg_true;
  outC->_L8.d_test_traction.now = kcg_lit_int32(0);
  outC->_L8.d_test_traction.distance = kcg_lit_int32(0);
  outC->_L8.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L8.m_voltage.NID_ctraction = kcg_lit_int32(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.m_pantograph_cm = pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L7.m_airtightness_cm = airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L7.m_mainpowerswitch_cm = open_main_power_swicth_TIU_Types_Pkg;
  outC->_L7.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L6.valid = kcg_true;
  outC->_L6.m_regenerativebrake_cm = brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L6.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L6.m_magneticshoebrake_cm = brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L4.valid = kcg_true;
  outC->_L4.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L4.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L3.valid = kcg_true;
  outC->_L3.isolation_status = on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L1.valid = kcg_true;
  outC->_L1.info.isolation_status.valid = kcg_true;
  outC->_L1.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L1.info.brake_command.valid = kcg_true;
  outC->_L1.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1.info.brake_inhibition.valid = kcg_true;
  outC->_L1.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L1.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L1.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L1.info.type_I_train_commands.valid = kcg_true;
  outC->_L1.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L1.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L1.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->_L1.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L1.info.change_traction_system.valid = kcg_true;
  outC->_L1.info.change_traction_system.d_test_traction.now = kcg_lit_int32(0);
  outC->_L1.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int32(0);
  outC->_L1.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L1.info.change_traction_system.m_voltage.NID_ctraction = kcg_lit_int32(
      0);
  outC->_L1.info.passenger_door_control_info.valid = kcg_true;
  outC->_L1.info.passenger_door_control_info.door_control_info = kcg_lit_int32(0);
  outC->_L1.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->_L1.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int32(0);
  outC->_L1.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int32(0);
  outC->_L1.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->_L1.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.emergencyBrakeActive = kcg_true;
  outC->_L2.isolationStatus = kcg_true;
  outC->outCommandStatusforEVC.valid = kcg_true;
  outC->outCommandStatusforEVC.emergencyBrakeActive = kcg_true;
  outC->outCommandStatusforEVC.isolationStatus = kcg_true;
  outC->outTIU_to_API.valid = kcg_true;
  outC->outTIU_to_API.info.isolation_status.valid = kcg_true;
  outC->outTIU_to_API.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->outTIU_to_API.info.brake_command.valid = kcg_true;
  outC->outTIU_to_API.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.brake_inhibition.valid = kcg_true;
  outC->outTIU_to_API.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.type_I_train_commands.valid = kcg_true;
  outC->outTIU_to_API.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->outTIU_to_API.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->outTIU_to_API.info.change_traction_system.valid = kcg_true;
  outC->outTIU_to_API.info.change_traction_system.d_test_traction.now =
    kcg_lit_int32(0);
  outC->outTIU_to_API.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int32(0);
  outC->outTIU_to_API.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->outTIU_to_API.info.change_traction_system.m_voltage.NID_ctraction =
    kcg_lit_int32(0);
  outC->outTIU_to_API.info.passenger_door_control_info.valid = kcg_true;
  outC->outTIU_to_API.info.passenger_door_control_info.door_control_info =
    kcg_lit_int32(0);
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int32(0);
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int32(0);
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int32(0);
  /* _L1=(output_to_TIU_API_Pkg::manageTIU_output#1)/ */
  manageTIU_output_init_output_to_TIU_API_Pkg(
    &outC->Context_manageTIU_output_1);
  /* _L12=(output_to_TIU_API_Pkg::handleTraction#1)/ */
  handleTraction_init_output_to_TIU_API_Pkg(&outC->Context_handleTraction_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TIU_OutputIntegration_reset_output_to_TIU_API_Pkg(
  outC_TIU_OutputIntegration_output_to_TIU_API_Pkg *outC)
{
  /* _L1=(output_to_TIU_API_Pkg::manageTIU_output#1)/ */
  manageTIU_output_reset_output_to_TIU_API_Pkg(
    &outC->Context_manageTIU_output_1);
  /* _L12=(output_to_TIU_API_Pkg::handleTraction#1)/ */
  handleTraction_reset_output_to_TIU_API_Pkg(&outC->Context_handleTraction_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TIU_OutputIntegration_output_to_TIU_API_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

