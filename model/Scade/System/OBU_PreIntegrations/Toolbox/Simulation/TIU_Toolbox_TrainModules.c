/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TIU_Toolbox_TrainModules.h"

/* Toolbox::TrainModules::TIU/ */
void TIU_Toolbox_TrainModules(
  /* Input_TIU_From_API/ */
  TIU_Output_msg_API_TIU_Pkg *Input_TIU_From_API,
  /* cabStatus/ */
  M_cab_signal_status_T_TIU_Types_Pkg cabStatus,
  /* directionController/ */
  M_directioncontroller_signal_status_T_TIU_Types_Pkg directionController,
  /* tractionSwitchedOn/ */
  kcg_bool tractionSwitchedOn,
  /* brakeAccelerationPercentage/ */
  kcg_int64 brakeAccelerationPercentage,
  outC_TIU_Toolbox_TrainModules *outC)
{
  /* powerOn/ */
  kcg_bool last_powerOn;
  /* cutoffCommand/ */
  M_traction_cutoff_command_T_TIU_Types_Pkg last_cutoffCommand;
  /* emergencyBrakeCommandTmp/ */
  M_brake_signal_command_T_TIU_Types_Pkg last_emergencyBrakeCommandTmp;
  /* serviceBrakeCommandTmp/ */
  M_brake_signal_command_T_TIU_Types_Pkg last_serviceBrakeCommandTmp;

  last_powerOn = outC->powerOn;
  last_cutoffCommand = outC->cutoffCommand;
  last_emergencyBrakeCommandTmp = outC->emergencyBrakeCommandTmp;
  last_serviceBrakeCommandTmp = outC->serviceBrakeCommandTmp;
  outC->_L107 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L108 = cabStatus;
  outC->_L109 = outC->_L108 == outC->_L107;
  outC->_L102 = both_desks_are_closed_TIU_Types_Pkg;
  outC->_L100 = cabStatus;
  outC->_L101 = outC->_L100 == outC->_L102;
  outC->_L110 = outC->_L101 | outC->_L109;
  outC->_L112 = !outC->_L110;
  outC->_L106 = kcg_true;
  outC->_L99 = last_powerOn;
  outC->_L105 = !outC->_L99;
  outC->_L104 = outC->_L105 & outC->_L112;
  outC->_L98 = last_powerOn;
  /* _L103= */
  if (outC->_L104) {
    outC->_L103 = outC->_L106;
  }
  else {
    outC->_L103 = outC->_L98;
  }
  outC->powerOn = outC->_L103;
  outC->_L97 = outC->powerOn;
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->_L96,
    (trainData_T_TIU_Types_Pkg *) &cICE3TrainData_Toolbox);
  outC->_L93 = apply_traction_cutoff_TIU_Types_Pkg;
  outC->_L92 = last_cutoffCommand;
  kcg_copy_TIU_Output_msg_API_TIU_Pkg(&outC->_L58, Input_TIU_From_API);
  kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
    &outC->_L15,
    &outC->_L58.info);
  outC->_L87 = outC->_L15.type_I_train_commands.m_traction_cutoff_cm;
  outC->_L95 = outC->_L15.type_I_train_commands.valid;
  outC->_L14 = outC->_L58.valid;
  outC->_L94 = outC->_L14 & outC->_L95;
  /* _L89= */
  if (outC->_L94) {
    outC->_L89 = outC->_L87;
  }
  else {
    outC->_L89 = outC->_L92;
  }
  outC->_L90 = outC->_L89 == outC->_L93;
  outC->tractionCutOff_To_Environment = outC->_L90;
  outC->cutoffCommand = outC->_L89;
  outC->_L84 = apply_brake_TIU_Types_Pkg;
  outC->_L54 = last_emergencyBrakeCommandTmp;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->_L56, &outC->_L15.brake_command);
  outC->_L31 = outC->_L56.m_emergencybrake_cm;
  outC->_L33 = outC->_L56.valid;
  outC->_L57 = outC->_L14 & outC->_L33;
  /* _L55= */
  if (outC->_L57) {
    outC->_L55 = outC->_L31;
  }
  else {
    outC->_L55 = outC->_L54;
  }
  outC->_L82 = outC->_L55 == outC->_L84;
  outC->emergencyBrakeActivated_To_Environment = outC->_L82;
  outC->_L83 = apply_brake_TIU_Types_Pkg;
  outC->_L51 = last_serviceBrakeCommandTmp;
  outC->_L32 = outC->_L56.m_servicebrake_cm;
  /* _L52= */
  if (outC->_L57) {
    outC->_L52 = outC->_L32;
  }
  else {
    outC->_L52 = outC->_L51;
  }
  outC->_L81 = outC->_L52 == outC->_L83;
  outC->serviceBrakeActivated_To_Environment = outC->_L81;
  outC->_L62 = kcg_true;
  outC->_L64 = signal_not_active_TIU_Types_Pkg;
  outC->_L65 = passive_shunting_not_permitted_TIU_Types_Pkg;
  outC->_L66 = non_leading_not_permitted_TIU_Types_Pkg;
  outC->_L67 = cabStatus;
  outC->_L68 = directionController;
  outC->_L69 = train_is_integer_TIU_Types_Pkg;
  outC->_L73 = traction_off_TIU_Types_Pkg;
  outC->_L72 = traction_on_TIU_Types_Pkg;
  outC->_L71 = tractionSwitchedOn;
  /* _L70= */
  if (outC->_L71) {
    outC->_L70 = outC->_L72;
  }
  else {
    outC->_L70 = outC->_L73;
  }
  outC->_L61.valid = outC->_L97;
  outC->_L61.m_sleeping_st = outC->_L64;
  outC->_L61.m_passiveshunting_st = outC->_L65;
  outC->_L61.m_nonleading_st = outC->_L66;
  outC->_L61.m_cab_st = outC->_L67;
  outC->_L61.m_directioncontroller_st = outC->_L68;
  outC->_L61.m_trainintegrity_st = outC->_L69;
  outC->_L61.m_traction_st = outC->_L70;
  kcg_copy_Brake_status_T_TIU_Types_Pkg(
    &outC->_L74,
    (Brake_status_T_TIU_Types_Pkg *) &cEmptyBrakeStatus_Toolbox);
  outC->_L76 = kcg_true;
  outC->_L78 = kcg_lit_int64(6000);
  outC->_L79 = brakeAccelerationPercentage;
  outC->_L77 = outC->_L79 * outC->_L78;
  outC->_L75.valid = outC->_L76;
  outC->_L75.pressure = outC->_L77;
  outC->_L59 = cEmtpyDataEntryType_Toolbox;
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &outC->_L80,
    (Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *)
      &cEmptyType_I_train_and_brake_inhibition_with_distance_T_Toolbox);
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &outC->_L28.train_status,
    &outC->_L61);
  kcg_copy_Brake_status_T_TIU_Types_Pkg(&outC->_L28.brake_status, &outC->_L74);
  kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(
    &outC->_L28.brake_pressure,
    &outC->_L75);
  outC->_L28.train_data_entry_type = outC->_L59;
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L28.train_data_info, &outC->_L96);
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &outC->_L28.type_I_train_and_brake_inhibition,
    &outC->_L80);
  outC->_L27.valid = outC->_L62;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L27.info,
    &outC->_L28);
  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->output_To_EVC, &outC->_L27);
  outC->emergencyBrakeCommandTmp = outC->_L55;
  outC->serviceBrakeCommandTmp = outC->_L52;
}

#ifndef KCG_USER_DEFINED_INIT
void TIU_init_Toolbox_TrainModules(outC_TIU_Toolbox_TrainModules *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L112 = kcg_true;
  outC->_L110 = kcg_true;
  outC->_L107 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L108 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L109 = kcg_true;
  outC->_L106 = kcg_true;
  outC->_L105 = kcg_true;
  outC->_L104 = kcg_true;
  outC->_L103 = kcg_true;
  outC->_L102 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L101 = kcg_true;
  outC->_L100 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L99 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L96.valid = kcg_true;
  outC->_L96.acknowledgedByDriver = kcg_true;
  outC->_L96.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L96.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L96.trainLength = kcg_lit_int64(0);
  outC->_L96.brakePerctage = kcg_lit_int64(0);
  outC->_L96.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L96.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L96.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L96.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L96.axleNumber = kcg_lit_int64(0);
  outC->_L96.numberNationalSystems = kcg_lit_int64(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L96.nationSystems[idx] = kcg_lit_int64(0);
  }
  outC->_L96.numberTractionSystems = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L96.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L96.tractionSystem[idx1].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L92 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L90 = kcg_true;
  outC->_L89 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L87 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L84 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L83 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L80.valid = kcg_true;
  outC->_L80.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L80.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L80.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L80.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L80.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L80.empty_profile_initial_state_to_be_resumed.now = kcg_lit_int64(0);
  outC->_L80.empty_profile_initial_state_to_be_resumed.distance = kcg_lit_int64(
      0);
  outC->_L79 = kcg_lit_int64(0);
  outC->_L78 = kcg_lit_int64(0);
  outC->_L77 = kcg_lit_int64(0);
  outC->_L76 = kcg_true;
  outC->_L75.valid = kcg_true;
  outC->_L75.pressure = kcg_lit_int64(0);
  outC->_L74.valid = kcg_true;
  outC->_L74.m_regenerativebrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L74.m_eddycurrentbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L74.m_magneticshoebrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L74.m_electropneumaticbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L74.m_additionalbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L73 = traction_on_TIU_Types_Pkg;
  outC->_L72 = traction_on_TIU_Types_Pkg;
  outC->_L71 = kcg_true;
  outC->_L70 = traction_on_TIU_Types_Pkg;
  outC->_L69 = train_is_not_integer_TIU_Types_Pkg;
  outC->_L68 = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L67 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L66 = non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L65 = passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L64 = signal_active_TIU_Types_Pkg;
  outC->_L62 = kcg_true;
  outC->_L61.valid = kcg_true;
  outC->_L61.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L61.m_passiveshunting_st = passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L61.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L61.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L61.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L61.m_trainintegrity_st = train_is_not_integer_TIU_Types_Pkg;
  outC->_L61.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L59 = fixed_entry_type_TIU_Types_Pkg;
  outC->_L58.valid = kcg_true;
  outC->_L58.info.isolation_status.valid = kcg_true;
  outC->_L58.info.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L58.info.brake_command.valid = kcg_true;
  outC->_L58.info.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L58.info.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L58.info.brake_inhibition.valid = kcg_true;
  outC->_L58.info.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L58.info.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L58.info.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L58.info.type_I_train_commands.valid = kcg_true;
  outC->_L58.info.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L58.info.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L58.info.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->_L58.info.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L58.info.change_traction_system.valid = kcg_true;
  outC->_L58.info.change_traction_system.d_test_traction.now = kcg_lit_int64(0);
  outC->_L58.info.change_traction_system.d_test_traction.distance =
    kcg_lit_int64(0);
  outC->_L58.info.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L58.info.change_traction_system.m_voltage.NID_ctraction =
    kcg_lit_int64(0);
  outC->_L58.info.passenger_door_control_info.valid = kcg_true;
  outC->_L58.info.passenger_door_control_info.door_control_info = kcg_lit_int64(
      0);
  outC->_L58.info.change_of_allowed_current_consumption.valid = kcg_true;
  outC->_L58.info.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int64(0);
  outC->_L58.info.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int64(0);
  outC->_L58.info.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->_L58.info.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int64(0);
  outC->_L57 = kcg_true;
  outC->_L56.valid = kcg_true;
  outC->_L56.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L56.m_emergencybrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L55 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L54 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L52 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L51 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L31 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L32 = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L33 = kcg_true;
  outC->_L27.valid = kcg_true;
  outC->_L27.info.train_status.valid = kcg_true;
  outC->_L27.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L27.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L27.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L27.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L27.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L27.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L27.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L27.info.brake_status.valid = kcg_true;
  outC->_L27.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L27.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L27.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L27.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L27.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L27.info.brake_pressure.valid = kcg_true;
  outC->_L27.info.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L27.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L27.info.train_data_info.valid = kcg_true;
  outC->_L27.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L27.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L27.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L27.info.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L27.info.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L27.info.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L27.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L27.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L27.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L27.info.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L27.info.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L27.info.train_data_info.nationSystems[idx2] = kcg_lit_int64(0);
  }
  outC->_L27.info.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L27.info.train_data_info.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L27.info.train_data_info.tractionSystem[idx3].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L27.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L27.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L27.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L27.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L27.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L27.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L27.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L27.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L28.train_status.valid = kcg_true;
  outC->_L28.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L28.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L28.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L28.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L28.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L28.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L28.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L28.brake_status.valid = kcg_true;
  outC->_L28.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L28.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L28.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L28.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L28.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L28.brake_pressure.valid = kcg_true;
  outC->_L28.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L28.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L28.train_data_info.valid = kcg_true;
  outC->_L28.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L28.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L28.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L28.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L28.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L28.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L28.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L28.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L28.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L28.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L28.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L28.train_data_info.nationSystems[idx4] = kcg_lit_int64(0);
  }
  outC->_L28.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L28.train_data_info.tractionSystem[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L28.train_data_info.tractionSystem[idx5].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L28.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L28.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L28.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L28.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L28.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L28.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L28.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L28.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L15.isolation_status.valid = kcg_true;
  outC->_L15.isolation_status.isolation_status =
    on_board_equipment_is_isolated_TIU_Types_Pkg;
  outC->_L15.brake_command.valid = kcg_true;
  outC->_L15.brake_command.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L15.brake_command.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L15.brake_inhibition.valid = kcg_true;
  outC->_L15.brake_inhibition.m_regenerativebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L15.brake_inhibition.m_eddycurrentbrake_cm =
    eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg;
  outC->_L15.brake_inhibition.m_magneticshoebrake_cm =
    brake_inhibit_not_defined_TIU_Types_Pkg;
  outC->_L15.type_I_train_commands.valid = kcg_true;
  outC->_L15.type_I_train_commands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->_L15.type_I_train_commands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->_L15.type_I_train_commands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->_L15.type_I_train_commands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->_L15.change_traction_system.valid = kcg_true;
  outC->_L15.change_traction_system.d_test_traction.now = kcg_lit_int64(0);
  outC->_L15.change_traction_system.d_test_traction.distance = kcg_lit_int64(0);
  outC->_L15.change_traction_system.m_voltage.voltage_type =
    line_not_fitted_with_any_traction_system_TIU_Types_Pkg;
  outC->_L15.change_traction_system.m_voltage.NID_ctraction = kcg_lit_int64(0);
  outC->_L15.passenger_door_control_info.valid = kcg_true;
  outC->_L15.passenger_door_control_info.door_control_info = kcg_lit_int64(0);
  outC->_L15.change_of_allowed_current_consumption.valid = kcg_true;
  outC->_L15.change_of_allowed_current_consumption.d_test_current.now =
    kcg_lit_int64(0);
  outC->_L15.change_of_allowed_current_consumption.d_test_current.distance =
    kcg_lit_int64(0);
  outC->_L15.change_of_allowed_current_consumption.m_current.no_restriction =
    kcg_true;
  outC->_L15.change_of_allowed_current_consumption.m_current.restriction =
    kcg_lit_int64(0);
  outC->_L14 = kcg_true;
  outC->tractionCutOff_To_Environment = kcg_true;
  outC->emergencyBrakeActivated_To_Environment = kcg_true;
  outC->serviceBrakeActivated_To_Environment = kcg_true;
  outC->output_To_EVC.valid = kcg_true;
  outC->output_To_EVC.info.train_status.valid = kcg_true;
  outC->output_To_EVC.info.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.valid = kcg_true;
  outC->output_To_EVC.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->output_To_EVC.info.brake_pressure.valid = kcg_true;
  outC->output_To_EVC.info.brake_pressure.pressure = kcg_lit_int64(0);
  outC->output_To_EVC.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->output_To_EVC.info.train_data_info.valid = kcg_true;
  outC->output_To_EVC.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->output_To_EVC.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->output_To_EVC.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->output_To_EVC.info.train_data_info.trainLength = kcg_lit_int64(0);
  outC->output_To_EVC.info.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->output_To_EVC.info.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->output_To_EVC.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->output_To_EVC.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->output_To_EVC.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->output_To_EVC.info.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->output_To_EVC.info.train_data_info.numberNationalSystems =
    kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->output_To_EVC.info.train_data_info.nationSystems[idx6] = kcg_lit_int64(0);
  }
  outC->output_To_EVC.info.train_data_info.numberTractionSystems =
    kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->output_To_EVC.info.train_data_info.tractionSystem[idx7].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->output_To_EVC.info.train_data_info.tractionSystem[idx7].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->output_To_EVC.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->serviceBrakeCommandTmp = cEmptyBrakeSignalCommand_Toolbox;
  outC->emergencyBrakeCommandTmp = cEmptyBrakeSignalCommand_Toolbox;
  outC->cutoffCommand = apply_traction_cutoff_TIU_Types_Pkg;
  outC->powerOn = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TIU_reset_Toolbox_TrainModules(outC_TIU_Toolbox_TrainModules *outC)
{
  outC->serviceBrakeCommandTmp = cEmptyBrakeSignalCommand_Toolbox;
  outC->emergencyBrakeCommandTmp = cEmptyBrakeSignalCommand_Toolbox;
  outC->cutoffCommand = apply_traction_cutoff_TIU_Types_Pkg;
  outC->powerOn = kcg_false;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TIU_Toolbox_TrainModules.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

