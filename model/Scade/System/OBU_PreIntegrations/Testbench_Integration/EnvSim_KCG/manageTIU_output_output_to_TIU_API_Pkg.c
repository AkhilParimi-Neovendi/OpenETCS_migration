/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTIU_output_output_to_TIU_API_Pkg.h"

/* output_to_TIU_API_Pkg::manageTIU_output/ */
void manageTIU_output_output_to_TIU_API_Pkg(
  /* in_IsolationStatus/ */
  Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* in_brake_command/ */
  Brake_command_T_TIU_Types_Pkg *in_brake_command,
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
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC)
{
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L2, in_brake_command);
  /* _L25=(output_to_TIU_API_Pkg::handleBrakeCommand#1)/ */
  handleBrakeCommand_output_to_TIU_API_Pkg(
    &outC->_L2,
    &outC->Context_handleBrakeCommand_1);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L25,
    &outC->Context_handleBrakeCommand_1.out_brake_command);
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(&outC->_L22, in_IsolationStatus);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L23, in_brake_command);
  /* _L24=(output_to_TIU_API_Pkg::getTIUStatusFromCommand#1)/ */
  getTIUStatusFromCommand_output_to_TIU_API_Pkg(
    &outC->_L22,
    &outC->_L23,
    &outC->Context_getTIUStatusFromCommand_1);
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(
    &outC->_L24,
    &outC->Context_getTIUStatusFromCommand_1.outStatus);
  kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(
    &outC->outCommandStatusforEVC,
    &outC->_L24);
  kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
    &outC->_L7,
    in_change_of_allowed_current_consumption);
  outC->_L21 = outC->_L7.valid;
  kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(
    &outC->_L6,
    in_passenger_door_control_info);
  outC->_L20 = outC->_L6.valid;
  kcg_copy_Change_traction_system_T_TIU_Types_Pkg(
    &outC->_L5,
    in_change_traction_system);
  outC->_L17 = outC->_L5.valid;
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&outC->_L4, in_train_commands);
  outC->_L15 = outC->_L4.valid;
  kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(
    &outC->_L3,
    in_brake_inhibition);
  outC->_L12 = outC->_L3.valid;
  outC->_L11 = outC->_L25.valid;
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(&outC->_L1, in_IsolationStatus);
  outC->_L9 = outC->_L1.valid;
  outC->_L18 = outC->_L9 | outC->_L11 | outC->_L12 | outC->_L15 | outC->_L17 |
    outC->_L20 | outC->_L21;
  kcg_copy_Isolation_Status_T_TIU_Types_Pkg(
    &outC->_L10.isolation_status,
    &outC->_L1);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L10.brake_command, &outC->_L25);
  kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(
    &outC->_L10.brake_inhibition,
    &outC->_L3);
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
    &outC->_L10.type_I_train_commands,
    &outC->_L4);
  kcg_copy_Change_traction_system_T_TIU_Types_Pkg(
    &outC->_L10.change_traction_system,
    &outC->_L5);
  kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(
    &outC->_L10.passenger_door_control_info,
    &outC->_L6);
  kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
    &outC->_L10.change_of_allowed_current_consumption,
    &outC->_L7);
  outC->_L8.valid = outC->_L18;
  kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
    &outC->_L8.info,
    &outC->_L10);
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->outTIU_to_API, &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void manageTIU_output_init_output_to_TIU_API_Pkg(
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC)
{
  outC->_L25.valid = kcg_true;
  outC->_L25.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L25.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L24.valid = kcg_true;
  outC->_L24.emergencyBrakeActive = kcg_true;
  outC->_L24.isolationStatus = kcg_true;
  outC->_L23.valid = kcg_true;
  outC->_L23.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L23.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L22.valid = kcg_true;
  outC->_L22.isolation_status = on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10.isolation_status.valid = kcg_true;
  outC->_L10.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L10.brake_command.valid = kcg_true;
  outC->_L10.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L10.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L10.brake_inhibition.valid = kcg_true;
  outC->_L10.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L10.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L10.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L10.type_I_train_commands.valid = kcg_true;
  outC->_L10.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L10.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L10.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->_L10.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L10.change_traction_system.valid = kcg_true;
  outC->_L10.change_traction_system.d_test_traction.now = kcg_lit_int64(0);
  outC->_L10.change_traction_system.d_test_traction.distance = kcg_lit_int64(0);
  outC->_L10.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L10.change_traction_system.m_voltage.NID_ctraction = kcg_lit_int64(0);
  outC->_L10.passenger_door_control_info.valid = kcg_true;
  outC->_L10.passenger_door_control_info.door_control_info = kcg_lit_int64(0);
  outC->_L10.change_of_allowed_current_consumption.valid = kcg_true;
  outC->_L10.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int64(0);
  outC->_L10.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int64(0);
  outC->_L10.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->_L10.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.info.isolation_status.valid = kcg_true;
  outC->_L8.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L8.info.brake_command.valid = kcg_true;
  outC->_L8.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L8.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L8.info.brake_inhibition.valid = kcg_true;
  outC->_L8.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L8.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L8.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L8.info.type_I_train_commands.valid = kcg_true;
  outC->_L8.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L8.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L8.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->_L8.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L8.info.change_traction_system.valid = kcg_true;
  outC->_L8.info.change_traction_system.d_test_traction.now = kcg_lit_int64(0);
  outC->_L8.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int64(0);
  outC->_L8.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L8.info.change_traction_system.m_voltage.NID_ctraction = kcg_lit_int64(
      0);
  outC->_L8.info.passenger_door_control_info.valid = kcg_true;
  outC->_L8.info.passenger_door_control_info.door_control_info = kcg_lit_int64(0);
  outC->_L8.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->_L8.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int64(0);
  outC->_L8.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int64(0);
  outC->_L8.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->_L8.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.d_test_current.now = kcg_lit_int64(0);
  outC->_L7.d_test_current.distance = kcg_lit_int64(0);
  outC->_L7.m_current.no_restriction = kcg_true;
  outC->_L7.m_current.restriction = kcg_lit_int64(0);
  outC->_L6.valid = kcg_true;
  outC->_L6.door_control_info = kcg_lit_int64(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.d_test_traction.now = kcg_lit_int64(0);
  outC->_L5.d_test_traction.distance = kcg_lit_int64(0);
  outC->_L5.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L5.m_voltage.NID_ctraction = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.m_pantograph_cm = pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L4.m_airtightness_cm = airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L4.m_mainpowerswitch_cm = open_main_power_swicth_TIU_Types_Pkg;
  outC->_L4.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L3.valid = kcg_true;
  outC->_L3.m_regenerativebrake_cm = brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L3.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L3.m_magneticshoebrake_cm = brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L2.valid = kcg_true;
  outC->_L2.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L2.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L1.valid = kcg_true;
  outC->_L1.isolation_status = on_board_equipment_is_isolated_TIU_Types_Pkg;
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
    kcg_lit_int64(0);
  outC->outTIU_to_API.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int64(0);
  outC->outTIU_to_API.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->outTIU_to_API.info.change_traction_system.m_voltage.NID_ctraction =
    kcg_lit_int64(0);
  outC->outTIU_to_API.info.passenger_door_control_info.valid = kcg_true;
  outC->outTIU_to_API.info.passenger_door_control_info.door_control_info =
    kcg_lit_int64(0);
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int64(0);
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int64(0);
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->outTIU_to_API.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int64(0);
  /* _L24=(output_to_TIU_API_Pkg::getTIUStatusFromCommand#1)/ */
  getTIUStatusFromCommand_init_output_to_TIU_API_Pkg(
    &outC->Context_getTIUStatusFromCommand_1);
  /* _L25=(output_to_TIU_API_Pkg::handleBrakeCommand#1)/ */
  handleBrakeCommand_init_output_to_TIU_API_Pkg(
    &outC->Context_handleBrakeCommand_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageTIU_output_reset_output_to_TIU_API_Pkg(
  outC_manageTIU_output_output_to_TIU_API_Pkg *outC)
{
  /* _L24=(output_to_TIU_API_Pkg::getTIUStatusFromCommand#1)/ */
  getTIUStatusFromCommand_reset_output_to_TIU_API_Pkg(
    &outC->Context_getTIUStatusFromCommand_1);
  /* _L25=(output_to_TIU_API_Pkg::handleBrakeCommand#1)/ */
  handleBrakeCommand_reset_output_to_TIU_API_Pkg(
    &outC->Context_handleBrakeCommand_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageTIU_output_output_to_TIU_API_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

