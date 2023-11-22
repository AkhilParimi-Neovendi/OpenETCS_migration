/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getTIUStatusFromData_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::getTIUStatusFromData/ */
void getTIUStatusFromData_input_from_TIU_API_Pkg(
  /* inTIUActualData/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *inTIUActualData,
  outC_getTIUStatusFromData_input_from_TIU_API_Pkg *outC)
{
  outC->_L26 = CabUndefined_TIU_Types_Pkg;
  outC->_L17 = desk_B_is_open_TIU_Types_Pkg;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L1,
    inTIUActualData);
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &outC->_L3,
    &outC->_L1.train_status);
  outC->_L7 = outC->_L3.m_cab_st;
  outC->_L16 = outC->_L7 == outC->_L17;
  outC->isB = outC->_L16;
  outC->_L25 = outC->isB;
  outC->_L23 = CabB_TIU_Types_Pkg;
  /* _L24= */
  if (outC->_L25) {
    outC->_L24 = outC->_L23;
  }
  else {
    outC->_L24 = outC->_L26;
  }
  outC->_L21 = CabA_TIU_Types_Pkg;
  outC->_L15 = desk_A_is_open_TIU_Types_Pkg;
  outC->_L14 = outC->_L7 == outC->_L15;
  outC->isA = outC->_L14;
  outC->_L20 = outC->isA;
  /* _L19= */
  if (outC->_L20) {
    outC->_L19 = outC->_L21;
  }
  else {
    outC->_L19 = outC->_L24;
  }
  outC->_L13 = both_desks_are_open_TIU_Types_Pkg;
  outC->_L11 = outC->_L7 == outC->_L13;
  outC->_L18 = outC->_L11 | outC->_L14 | outC->_L16;
  outC->_L8 = outC->_L3.valid;
  outC->_L4.valid = outC->_L8;
  outC->_L4.deskOpen = outC->_L18;
  outC->_L4.ownCab = outC->_L19;
  outC->_L4.activeCab = outC->_L19;
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->outStatus, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void getTIUStatusFromData_init_input_from_TIU_API_Pkg(
  outC_getTIUStatusFromData_input_from_TIU_API_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L26 = CabUndefined_TIU_Types_Pkg;
  outC->_L25 = kcg_true;
  outC->_L23 = CabUndefined_TIU_Types_Pkg;
  outC->_L24 = CabUndefined_TIU_Types_Pkg;
  outC->_L21 = CabUndefined_TIU_Types_Pkg;
  outC->_L20 = kcg_true;
  outC->_L19 = CabUndefined_TIU_Types_Pkg;
  outC->_L18 = kcg_true;
  outC->_L17 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L16 = kcg_true;
  outC->_L15 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L14 = kcg_true;
  outC->_L13 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L11 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L4.valid = kcg_true;
  outC->_L4.deskOpen = kcg_true;
  outC->_L4.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L4.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L3.valid = kcg_true;
  outC->_L3.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L3.m_passiveshunting_st = passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L3.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L3.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L3.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L3.m_trainintegrity_st = train_is_not_integer_TIU_Types_Pkg;
  outC->_L3.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L1.train_status.valid = kcg_true;
  outC->_L1.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L1.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L1.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L1.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L1.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L1.train_status.m_trainintegrity_st = train_is_not_integer_TIU_Types_Pkg;
  outC->_L1.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L1.brake_status.valid = kcg_true;
  outC->_L1.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L1.brake_pressure.valid = kcg_true;
  outC->_L1.brake_pressure.pressure = kcg_lit_int32(0);
  outC->_L1.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L1.train_data_info.valid = kcg_true;
  outC->_L1.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L1.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.train_data_info.trainLength = kcg_lit_int32(0);
  outC->_L1.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->_L1.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->_L1.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L1.train_data_info.nationSystems[idx] = kcg_lit_int32(0);
  }
  outC->_L1.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L1.train_data_info.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.train_data_info.tractionSystem[idx1].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L1.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L1.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L1.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L1.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L1.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L1.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->_L1.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->isB = kcg_true;
  outC->isA = kcg_true;
  outC->outStatus.valid = kcg_true;
  outC->outStatus.deskOpen = kcg_true;
  outC->outStatus.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->outStatus.activeCab = CabUndefined_TIU_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getTIUStatusFromData_reset_input_from_TIU_API_Pkg(
  outC_getTIUStatusFromData_input_from_TIU_API_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getTIUStatusFromData_input_from_TIU_API_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

