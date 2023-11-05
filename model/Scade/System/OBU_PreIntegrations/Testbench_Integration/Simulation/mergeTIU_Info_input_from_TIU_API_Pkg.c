/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mergeTIU_Info_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::mergeTIU_Info/ */
void mergeTIU_Info_input_from_TIU_API_Pkg(
  /* newInfo/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *newInfo,
  /* storedInfo/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *storedInfo,
  /* EVC_trainData/ */
  trainData_T_TIU_Types_Pkg *EVC_trainData,
  outC_mergeTIU_Info_input_from_TIU_API_Pkg *outC)
{
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L79, EVC_trainData);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&outC->_L6, newInfo);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L65, &outC->_L6.train_data_info);
  /* _L78=(input_from_TIU_API_Pkg::selectTrainData#1)/ */
  selectTrainData_input_from_TIU_API_Pkg(
    &outC->_L65,
    &outC->_L79,
    &outC->Context_selectTrainData_1);
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->_L78,
    &outC->Context_selectTrainData_1.outTrainData);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L52,
    storedInfo);
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &outC->_L53,
    &outC->_L52.train_status);
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &outC->_L5,
    &outC->_L6.train_status);
  outC->_L50 = outC->_L5.valid;
  /* _L77= */
  if (outC->_L50) {
    kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(&outC->_L77, &outC->_L5);
  }
  else {
    kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
      &outC->_L77,
      &outC->_L53);
  }
  kcg_copy_Brake_status_T_TIU_Types_Pkg(&outC->_L55, &outC->_L52.brake_status);
  kcg_copy_Brake_status_T_TIU_Types_Pkg(&outC->_L54, &outC->_L6.brake_status);
  outC->_L56 = outC->_L54.valid;
  /* _L57= */
  if (outC->_L56) {
    kcg_copy_Brake_status_T_TIU_Types_Pkg(&outC->_L57, &outC->_L54);
  }
  else {
    kcg_copy_Brake_status_T_TIU_Types_Pkg(&outC->_L57, &outC->_L55);
  }
  kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(
    &outC->_L58,
    &outC->_L52.brake_pressure);
  kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(
    &outC->_L61,
    &outC->_L6.brake_pressure);
  outC->_L59 = outC->_L61.valid;
  /* _L60= */
  if (outC->_L59) {
    kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(&outC->_L60, &outC->_L61);
  }
  else {
    kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(&outC->_L60, &outC->_L58);
  }
  outC->_L76 = outC->_L52.train_data_entry_type;
  outC->_L75 = outC->_L6.train_data_entry_type;
  outC->_L72 = no_entry_type_TIU_Types_Pkg;
  outC->_L71 = outC->_L6.train_data_entry_type;
  outC->_L74 = outC->_L71 != outC->_L72;
  /* _L73= */
  if (outC->_L74) {
    outC->_L73 = outC->_L75;
  }
  else {
    outC->_L73 = outC->_L76;
  }
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &outC->_L69,
    &outC->_L52.type_I_train_and_brake_inhibition);
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &outC->_L66,
    &outC->_L6.type_I_train_and_brake_inhibition);
  outC->_L67 = outC->_L66.valid;
  /* _L68= */
  if (outC->_L67) {
    kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
      &outC->_L68,
      &outC->_L66);
  }
  else {
    kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
      &outC->_L68,
      &outC->_L69);
  }
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &outC->_L31.train_status,
    &outC->_L77);
  kcg_copy_Brake_status_T_TIU_Types_Pkg(&outC->_L31.brake_status, &outC->_L57);
  kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(
    &outC->_L31.brake_pressure,
    &outC->_L60);
  outC->_L31.train_data_entry_type = outC->_L73;
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L31.train_data_info, &outC->_L78);
  kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
    &outC->_L31.type_I_train_and_brake_inhibition,
    &outC->_L68);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->updatedInfo,
    &outC->_L31);
}

#ifndef KCG_USER_DEFINED_INIT
void mergeTIU_Info_init_input_from_TIU_API_Pkg(
  outC_mergeTIU_Info_input_from_TIU_API_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;

  outC->_L79.valid = kcg_true;
  outC->_L79.acknowledgedByDriver = kcg_true;
  outC->_L79.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L79.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L79.trainLength = kcg_lit_int32(0);
  outC->_L79.brakePerctage = kcg_lit_int32(0);
  outC->_L79.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L79.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L79.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L79.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L79.axleNumber = kcg_lit_int32(0);
  outC->_L79.numberNationalSystems = kcg_lit_int32(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L79.nationSystems[idx] = kcg_lit_int32(0);
  }
  outC->_L79.numberTractionSystems = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L79.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L79.tractionSystem[idx1].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L78.valid = kcg_true;
  outC->_L78.acknowledgedByDriver = kcg_true;
  outC->_L78.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L78.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L78.trainLength = kcg_lit_int32(0);
  outC->_L78.brakePerctage = kcg_lit_int32(0);
  outC->_L78.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L78.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L78.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L78.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L78.axleNumber = kcg_lit_int32(0);
  outC->_L78.numberNationalSystems = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L78.nationSystems[idx2] = kcg_lit_int32(0);
  }
  outC->_L78.numberTractionSystems = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L78.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L78.tractionSystem[idx3].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L77.valid = kcg_true;
  outC->_L77.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L77.m_passiveshunting_st = passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L77.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L77.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L77.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L77.m_trainintegrity_st = train_is_not_integer_TIU_Types_Pkg;
  outC->_L77.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L76 = fixed_entry_type_TIU_Types_Pkg;
  outC->_L75 = fixed_entry_type_TIU_Types_Pkg;
  outC->_L74 = kcg_true;
  outC->_L73 = fixed_entry_type_TIU_Types_Pkg;
  outC->_L72 = fixed_entry_type_TIU_Types_Pkg;
  outC->_L71 = fixed_entry_type_TIU_Types_Pkg;
  outC->_L66.valid = kcg_true;
  outC->_L66.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L66.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L66.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L66.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L66.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L66.empty_profile_initial_state_to_be_resumed.now = kcg_lit_int32(0);
  outC->_L66.empty_profile_initial_state_to_be_resumed.distance = kcg_lit_int32(
      0);
  outC->_L67 = kcg_true;
  outC->_L68.valid = kcg_true;
  outC->_L68.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L68.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L68.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L68.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L68.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L68.empty_profile_initial_state_to_be_resumed.now = kcg_lit_int32(0);
  outC->_L68.empty_profile_initial_state_to_be_resumed.distance = kcg_lit_int32(
      0);
  outC->_L69.valid = kcg_true;
  outC->_L69.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L69.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L69.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L69.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L69.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L69.empty_profile_initial_state_to_be_resumed.now = kcg_lit_int32(0);
  outC->_L69.empty_profile_initial_state_to_be_resumed.distance = kcg_lit_int32(
      0);
  outC->_L65.valid = kcg_true;
  outC->_L65.acknowledgedByDriver = kcg_true;
  outC->_L65.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L65.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L65.trainLength = kcg_lit_int32(0);
  outC->_L65.brakePerctage = kcg_lit_int32(0);
  outC->_L65.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L65.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L65.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L65.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L65.axleNumber = kcg_lit_int32(0);
  outC->_L65.numberNationalSystems = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L65.nationSystems[idx4] = kcg_lit_int32(0);
  }
  outC->_L65.numberTractionSystems = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L65.tractionSystem[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L65.tractionSystem[idx5].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L58.valid = kcg_true;
  outC->_L58.pressure = kcg_lit_int32(0);
  outC->_L59 = kcg_true;
  outC->_L60.valid = kcg_true;
  outC->_L60.pressure = kcg_lit_int32(0);
  outC->_L61.valid = kcg_true;
  outC->_L61.pressure = kcg_lit_int32(0);
  outC->_L54.valid = kcg_true;
  outC->_L54.m_regenerativebrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L54.m_eddycurrentbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L54.m_magneticshoebrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L54.m_electropneumaticbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L54.m_additionalbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L55.valid = kcg_true;
  outC->_L55.m_regenerativebrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L55.m_eddycurrentbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L55.m_magneticshoebrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L55.m_electropneumaticbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L55.m_additionalbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L56 = kcg_true;
  outC->_L57.valid = kcg_true;
  outC->_L57.m_regenerativebrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L57.m_eddycurrentbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L57.m_magneticshoebrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L57.m_electropneumaticbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L57.m_additionalbrake_st = brake_status_not_defined_TIU_Types_Pkg;
  outC->_L53.valid = kcg_true;
  outC->_L53.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L53.m_passiveshunting_st = passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L53.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L53.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L53.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L53.m_trainintegrity_st = train_is_not_integer_TIU_Types_Pkg;
  outC->_L53.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L52.train_status.valid = kcg_true;
  outC->_L52.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L52.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L52.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L52.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L52.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L52.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L52.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L52.brake_status.valid = kcg_true;
  outC->_L52.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L52.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L52.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L52.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L52.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L52.brake_pressure.valid = kcg_true;
  outC->_L52.brake_pressure.pressure = kcg_lit_int32(0);
  outC->_L52.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L52.train_data_info.valid = kcg_true;
  outC->_L52.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L52.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L52.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L52.train_data_info.trainLength = kcg_lit_int32(0);
  outC->_L52.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->_L52.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L52.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L52.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L52.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L52.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->_L52.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L52.train_data_info.nationSystems[idx6] = kcg_lit_int32(0);
  }
  outC->_L52.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L52.train_data_info.tractionSystem[idx7].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L52.train_data_info.tractionSystem[idx7].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L52.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L52.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L52.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L52.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L52.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L52.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L52.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->_L52.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->_L50 = kcg_true;
  outC->_L31.train_status.valid = kcg_true;
  outC->_L31.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L31.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L31.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L31.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L31.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L31.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L31.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L31.brake_status.valid = kcg_true;
  outC->_L31.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L31.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L31.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L31.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L31.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L31.brake_pressure.valid = kcg_true;
  outC->_L31.brake_pressure.pressure = kcg_lit_int32(0);
  outC->_L31.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L31.train_data_info.valid = kcg_true;
  outC->_L31.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L31.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L31.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L31.train_data_info.trainLength = kcg_lit_int32(0);
  outC->_L31.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->_L31.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L31.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L31.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L31.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L31.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->_L31.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L31.train_data_info.nationSystems[idx8] = kcg_lit_int32(0);
  }
  outC->_L31.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L31.train_data_info.tractionSystem[idx9].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L31.train_data_info.tractionSystem[idx9].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L31.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L31.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L31.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L31.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L31.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L31.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L31.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->_L31.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->_L6.train_status.valid = kcg_true;
  outC->_L6.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L6.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L6.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L6.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L6.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L6.train_status.m_trainintegrity_st = train_is_not_integer_TIU_Types_Pkg;
  outC->_L6.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L6.brake_status.valid = kcg_true;
  outC->_L6.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L6.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L6.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L6.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L6.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L6.brake_pressure.valid = kcg_true;
  outC->_L6.brake_pressure.pressure = kcg_lit_int32(0);
  outC->_L6.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L6.train_data_info.valid = kcg_true;
  outC->_L6.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L6.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L6.train_data_info.trainLength = kcg_lit_int32(0);
  outC->_L6.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->_L6.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L6.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L6.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L6.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->_L6.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L6.train_data_info.nationSystems[idx10] = kcg_lit_int32(0);
  }
  outC->_L6.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 4; idx11++) {
    outC->_L6.train_data_info.tractionSystem[idx11].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6.train_data_info.tractionSystem[idx11].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L6.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L6.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L6.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L6.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L6.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L6.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L6.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->_L6.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L5.m_passiveshunting_st = passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L5.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L5.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L5.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L5.m_trainintegrity_st = train_is_not_integer_TIU_Types_Pkg;
  outC->_L5.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->updatedInfo.train_status.valid = kcg_true;
  outC->updatedInfo.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->updatedInfo.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->updatedInfo.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->updatedInfo.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->updatedInfo.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->updatedInfo.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->updatedInfo.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->updatedInfo.brake_status.valid = kcg_true;
  outC->updatedInfo.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->updatedInfo.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->updatedInfo.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->updatedInfo.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->updatedInfo.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->updatedInfo.brake_pressure.valid = kcg_true;
  outC->updatedInfo.brake_pressure.pressure = kcg_lit_int32(0);
  outC->updatedInfo.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->updatedInfo.train_data_info.valid = kcg_true;
  outC->updatedInfo.train_data_info.acknowledgedByDriver = kcg_true;
  outC->updatedInfo.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->updatedInfo.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->updatedInfo.train_data_info.trainLength = kcg_lit_int32(0);
  outC->updatedInfo.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->updatedInfo.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->updatedInfo.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->updatedInfo.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->updatedInfo.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->updatedInfo.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->updatedInfo.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->updatedInfo.train_data_info.nationSystems[idx12] = kcg_lit_int32(0);
  }
  outC->updatedInfo.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->updatedInfo.train_data_info.tractionSystem[idx13].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->updatedInfo.train_data_info.tractionSystem[idx13].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->updatedInfo.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->updatedInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->updatedInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->updatedInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->updatedInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->updatedInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->updatedInfo.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->updatedInfo.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  /* _L78=(input_from_TIU_API_Pkg::selectTrainData#1)/ */
  selectTrainData_init_input_from_TIU_API_Pkg(&outC->Context_selectTrainData_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mergeTIU_Info_reset_input_from_TIU_API_Pkg(
  outC_mergeTIU_Info_input_from_TIU_API_Pkg *outC)
{
  /* _L78=(input_from_TIU_API_Pkg::selectTrainData#1)/ */
  selectTrainData_reset_input_from_TIU_API_Pkg(
    &outC->Context_selectTrainData_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mergeTIU_Info_input_from_TIU_API_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

