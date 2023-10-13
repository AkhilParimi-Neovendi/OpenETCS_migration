/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTIU_input_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::manageTIU_input/ */
void manageTIU_input_input_from_TIU_API_Pkg(
  /* inTIUfromAPI/ */
  TIU_Input_msg_API_TIU_Pkg *inTIUfromAPI,
  /* evc_trainData/ */
  trainData_T_TIU_Types_Pkg *evc_trainData,
  /* inModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  /* inDriverWindowEB/ */
  kcg_bool inDriverWindowEB,
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC)
{
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg op_call;
  /* storeTIU/ */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg last_storeTIU;

  kcg_copy_TIU_Input_msg_API_TIU_Pkg(&outC->_L1, inTIUfromAPI);
  outC->_L40 = outC->_L1.valid;
  outC->every = outC->_L40;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L41,
    &outC->_L1.info);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &last_storeTIU,
    &outC->storeTIU);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L8,
    &last_storeTIU);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L36, evc_trainData);
  if (outC->every) {
    /* _L35=(input_from_TIU_API_Pkg::mergeTIU_Info#1)/ */
    mergeTIU_Info_input_from_TIU_API_Pkg(
      &outC->_L41,
      &outC->_L8,
      &outC->_L36,
      &outC->Context_mergeTIU_Info_1);
    kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
      &op_call,
      &outC->Context_mergeTIU_Info_1.updatedInfo);
  }
  outC->_L45 = inDriverWindowEB;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L44, inModeLevel);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L39,
    &last_storeTIU);
  if (outC->every) {
    kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&outC->_L35, &op_call);
  }
  else {
    kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
      &outC->_L35,
      &outC->_L39);
  }
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->storeTIU,
    &outC->_L35);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L37,
    &outC->storeTIU);
  kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(
    &outC->_L43,
    &outC->_L37.brake_pressure);
  /* _L42=(input_from_TIU_API_Pkg::detectEvokeBrake#1)/ */
  detectEvokeBrake_input_from_TIU_API_Pkg(
    &outC->_L43,
    &outC->_L44,
    outC->_L45,
    &outC->Context_detectEvokeBrake_1);
  outC->_L42 = outC->Context_detectEvokeBrake_1.EB_RevokedByDriver;
  outC->outRevokeEB = outC->_L42;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->outTIUCurrentInfo,
    &outC->_L37);
  /* _L22=(input_from_TIU_API_Pkg::getTIUStatusFromData#1)/ */
  getTIUStatusFromData_input_from_TIU_API_Pkg(
    &outC->_L37,
    &outC->Context_getTIUStatusFromData_1);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(
    &outC->_L22,
    &outC->Context_getTIUStatusFromData_1.outStatus);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->outTIUStatus, &outC->_L22);
}

#ifndef KCG_USER_DEFINED_INIT
void manageTIU_input_init_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC)
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
  static kcg_size idx14;
  static kcg_size idx15;

  outC->_L45 = kcg_true;
  outC->_L44.compatibleModeAndLevel = kcg_true;
  outC->_L44.level = M_LEVEL_Level_0;
  outC->_L44.newLevel = kcg_true;
  outC->_L44.Mode = M_MODE_Full_Supervision;
  outC->_L44.newMode = kcg_true;
  outC->_L43.valid = kcg_true;
  outC->_L43.pressure = kcg_lit_int64(0);
  outC->_L42 = kcg_true;
  outC->_L41.train_status.valid = kcg_true;
  outC->_L41.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L41.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L41.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L41.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L41.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L41.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L41.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L41.brake_status.valid = kcg_true;
  outC->_L41.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L41.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L41.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L41.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L41.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L41.brake_pressure.valid = kcg_true;
  outC->_L41.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L41.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L41.train_data_info.valid = kcg_true;
  outC->_L41.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L41.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L41.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L41.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L41.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L41.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L41.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L41.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L41.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L41.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L41.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L41.train_data_info.nationSystems[idx] = kcg_lit_int64(0);
  }
  outC->_L41.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L41.train_data_info.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L41.train_data_info.tractionSystem[idx1].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L41.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L41.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L41.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L41.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L41.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L41.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L41.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L41.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L40 = kcg_true;
  outC->_L39.train_status.valid = kcg_true;
  outC->_L39.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L39.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L39.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L39.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L39.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L39.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L39.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L39.brake_status.valid = kcg_true;
  outC->_L39.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L39.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L39.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L39.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L39.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L39.brake_pressure.valid = kcg_true;
  outC->_L39.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L39.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L39.train_data_info.valid = kcg_true;
  outC->_L39.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L39.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L39.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L39.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L39.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L39.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L39.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L39.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L39.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L39.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L39.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L39.train_data_info.nationSystems[idx2] = kcg_lit_int64(0);
  }
  outC->_L39.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L39.train_data_info.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L39.train_data_info.tractionSystem[idx3].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L39.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L39.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L39.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L39.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L39.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L39.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L39.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L39.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L37.train_status.valid = kcg_true;
  outC->_L37.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L37.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L37.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L37.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L37.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L37.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L37.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L37.brake_status.valid = kcg_true;
  outC->_L37.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L37.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L37.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L37.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L37.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L37.brake_pressure.valid = kcg_true;
  outC->_L37.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L37.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L37.train_data_info.valid = kcg_true;
  outC->_L37.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L37.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L37.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L37.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L37.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L37.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L37.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L37.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L37.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L37.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L37.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L37.train_data_info.nationSystems[idx4] = kcg_lit_int64(0);
  }
  outC->_L37.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L37.train_data_info.tractionSystem[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L37.train_data_info.tractionSystem[idx5].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L37.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L37.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L37.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L37.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L37.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L37.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L37.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L37.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L36.valid = kcg_true;
  outC->_L36.acknowledgedByDriver = kcg_true;
  outC->_L36.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L36.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L36.trainLength = kcg_lit_int64(0);
  outC->_L36.brakePerctage = kcg_lit_int64(0);
  outC->_L36.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L36.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L36.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L36.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L36.axleNumber = kcg_lit_int64(0);
  outC->_L36.numberNationalSystems = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L36.nationSystems[idx6] = kcg_lit_int64(0);
  }
  outC->_L36.numberTractionSystems = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L36.tractionSystem[idx7].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L36.tractionSystem[idx7].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L35.train_status.valid = kcg_true;
  outC->_L35.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L35.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L35.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L35.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L35.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L35.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L35.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L35.brake_status.valid = kcg_true;
  outC->_L35.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L35.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L35.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L35.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L35.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L35.brake_pressure.valid = kcg_true;
  outC->_L35.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L35.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L35.train_data_info.valid = kcg_true;
  outC->_L35.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L35.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L35.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L35.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L35.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L35.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L35.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L35.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L35.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L35.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L35.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L35.train_data_info.nationSystems[idx8] = kcg_lit_int64(0);
  }
  outC->_L35.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L35.train_data_info.tractionSystem[idx9].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L35.train_data_info.tractionSystem[idx9].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L35.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L35.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L35.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L35.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L35.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L35.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L35.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L35.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L22.valid = kcg_true;
  outC->_L22.deskOpen = kcg_true;
  outC->_L22.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L22.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L1.valid = kcg_true;
  outC->_L1.info.train_status.valid = kcg_true;
  outC->_L1.info.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L1.info.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L1.info.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L1.info.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L1.info.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L1.info.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L1.info.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L1.info.brake_status.valid = kcg_true;
  outC->_L1.info.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1.info.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1.info.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1.info.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1.info.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1.info.brake_pressure.valid = kcg_true;
  outC->_L1.info.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L1.info.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L1.info.train_data_info.valid = kcg_true;
  outC->_L1.info.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L1.info.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.info.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.info.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L1.info.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L1.info.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L1.info.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.info.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1.info.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1.info.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L1.info.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L1.info.train_data_info.nationSystems[idx10] = kcg_lit_int64(0);
  }
  outC->_L1.info.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 4; idx11++) {
    outC->_L1.info.train_data_info.tractionSystem[idx11].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.info.train_data_info.tractionSystem[idx11].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L1.info.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L1.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L1.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L1.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L1.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L1.info.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L1.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L1.info.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L8.train_status.valid = kcg_true;
  outC->_L8.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L8.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L8.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L8.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L8.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L8.train_status.m_trainintegrity_st = train_is_not_integer_TIU_Types_Pkg;
  outC->_L8.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L8.brake_status.valid = kcg_true;
  outC->_L8.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L8.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L8.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L8.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L8.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L8.brake_pressure.valid = kcg_true;
  outC->_L8.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L8.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L8.train_data_info.valid = kcg_true;
  outC->_L8.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L8.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L8.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L8.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L8.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L8.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L8.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L8.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L8.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L8.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L8.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->_L8.train_data_info.nationSystems[idx12] = kcg_lit_int64(0);
  }
  outC->_L8.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->_L8.train_data_info.tractionSystem[idx13].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L8.train_data_info.tractionSystem[idx13].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L8.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L8.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L8.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L8.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L8.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L8.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L8.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L8.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->every = kcg_true;
  outC->outRevokeEB = kcg_true;
  outC->outTIUCurrentInfo.train_status.valid = kcg_true;
  outC->outTIUCurrentInfo.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_status.valid = kcg_true;
  outC->outTIUCurrentInfo.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.brake_pressure.valid = kcg_true;
  outC->outTIUCurrentInfo.brake_pressure.pressure = kcg_lit_int64(0);
  outC->outTIUCurrentInfo.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.train_data_info.valid = kcg_true;
  outC->outTIUCurrentInfo.train_data_info.acknowledgedByDriver = kcg_true;
  outC->outTIUCurrentInfo.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outTIUCurrentInfo.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outTIUCurrentInfo.train_data_info.trainLength = kcg_lit_int64(0);
  outC->outTIUCurrentInfo.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->outTIUCurrentInfo.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->outTIUCurrentInfo.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outTIUCurrentInfo.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->outTIUCurrentInfo.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->outTIUCurrentInfo.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->outTIUCurrentInfo.train_data_info.numberNationalSystems = kcg_lit_int64(
      0);
  for (idx14 = 0; idx14 < 5; idx14++) {
    outC->outTIUCurrentInfo.train_data_info.nationSystems[idx14] = kcg_lit_int64(0);
  }
  outC->outTIUCurrentInfo.train_data_info.numberTractionSystems = kcg_lit_int64(
      0);
  for (idx15 = 0; idx15 < 4; idx15++) {
    outC->outTIUCurrentInfo.train_data_info.tractionSystem[idx15].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outTIUCurrentInfo.train_data_info.tractionSystem[idx15].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->outTIUCurrentInfo.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->outTIUStatus.valid = kcg_true;
  outC->outTIUStatus.deskOpen = kcg_true;
  outC->outTIUStatus.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->outTIUStatus.activeCab = CabUndefined_TIU_Types_Pkg;
  /* _L22=(input_from_TIU_API_Pkg::getTIUStatusFromData#1)/ */
  getTIUStatusFromData_init_input_from_TIU_API_Pkg(
    &outC->Context_getTIUStatusFromData_1);
  /* _L42=(input_from_TIU_API_Pkg::detectEvokeBrake#1)/ */
  detectEvokeBrake_init_input_from_TIU_API_Pkg(
    &outC->Context_detectEvokeBrake_1);
  /* _L35=(input_from_TIU_API_Pkg::mergeTIU_Info#1)/ */
  mergeTIU_Info_init_input_from_TIU_API_Pkg(&outC->Context_mergeTIU_Info_1);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->storeTIU,
    (Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *) &emptyTIUInfo_TIU_Types_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageTIU_input_reset_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC)
{
  /* _L22=(input_from_TIU_API_Pkg::getTIUStatusFromData#1)/ */
  getTIUStatusFromData_reset_input_from_TIU_API_Pkg(
    &outC->Context_getTIUStatusFromData_1);
  /* _L42=(input_from_TIU_API_Pkg::detectEvokeBrake#1)/ */
  detectEvokeBrake_reset_input_from_TIU_API_Pkg(
    &outC->Context_detectEvokeBrake_1);
  /* _L35=(input_from_TIU_API_Pkg::mergeTIU_Info#1)/ */
  mergeTIU_Info_reset_input_from_TIU_API_Pkg(&outC->Context_mergeTIU_Info_1);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->storeTIU,
    (Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *) &emptyTIUInfo_TIU_Types_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_manageTIU_input_input_from_TIU_API_Pkg(
  SV_manageTIU_input_input_from_TIU_API_Pkg *SV,
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC)
{
  kcg_save_SV_detectEvokeBrake_input_from_TIU_API_Pkg(
    &SV->Context_detectEvokeBrake_1,
    &outC->Context_detectEvokeBrake_1);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &SV->Context_storeTIU,
    &outC->storeTIU);
}

void kcg_load_SV_manageTIU_input_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC,
  SV_manageTIU_input_input_from_TIU_API_Pkg *SV)
{
  kcg_load_SV_detectEvokeBrake_input_from_TIU_API_Pkg(
    &outC->Context_detectEvokeBrake_1,
    &SV->Context_detectEvokeBrake_1);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->storeTIU,
    &SV->Context_storeTIU);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** manageTIU_input_input_from_TIU_API_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

