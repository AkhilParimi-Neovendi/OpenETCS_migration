/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputTIUManagement_Interfaces.h"

/* Interfaces::InputTIUManagement/ */
void InputTIUManagement_Interfaces(
  /* Data_from_TIU/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_from_TIU,
  /* Cab/ */
  cab_ID_T_TIU_Types_Pkg Cab,
  outC_InputTIUManagement_Interfaces *outC)
{
  static M_trainintegrity_signal_status_T_TIU_Types_Pkg noname;
  static M_traction_signal_status_T_TIU_Types_Pkg _1_noname;
  static M_directioncontroller_signal_status_T_TIU_Types_Pkg _2_noname;
  static kcg_bool _3_noname;

  outC->_L94 = kcg_false;
  outC->_L101 = kcg_true;
  outC->_L102 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L95 = kcg_false;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L20,
    Data_from_TIU);
  kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(
    &outC->_L37,
    &outC->_L20.train_status);
  outC->_L32 = outC->_L37.m_cab_st;
  outC->Loc_Cab_ST = outC->_L32;
  outC->_L100 = outC->Loc_Cab_ST;
  /* _L96= */
  switch (outC->_L100) {
    case both_desks_are_closed_TIU_Types_Pkg :
      outC->_L96 = outC->_L94;
      break;
    case desk_A_is_open_TIU_Types_Pkg :
      outC->_L96 = outC->_L101;
      break;
    case desk_B_is_open_TIU_Types_Pkg :
      outC->_L96 = outC->_L102;
      break;
    case both_desks_are_open_TIU_Types_Pkg :
      outC->_L96 = outC->_L97;
      break;
    default :
      outC->_L96 = outC->_L95;
      break;
  }
  _3_noname = outC->_L96;
  outC->_L36 = outC->_L37.valid;
  outC->OnBoard_Powered = outC->_L36;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L84,
    Data_from_TIU);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L85, &outC->_L84.train_data_info);
  outC->_L86 = outC->_L85.acknowledgedByDriver;
  outC->Valid_Train_Data_Stored = outC->_L86;
  outC->_L31 = outC->_L37.m_directioncontroller_st;
  _2_noname = outC->_L31;
  outC->_L83 = both_desks_are_closed_TIU_Types_Pkg;
  outC->_L81 = outC->Loc_Cab_ST;
  outC->_L82 = outC->_L81 == outC->_L83;
  outC->_L79 = kcg_false;
  outC->_L78 = kcg_false;
  outC->_L77 = Cab == CabB_TIU_Types_Pkg;
  outC->_L76 = Cab == CabA_TIU_Types_Pkg;
  outC->_L75 = kcg_true;
  outC->_L72 = outC->Loc_Cab_ST;
  /* _L71= */
  switch (outC->_L72) {
    case both_desks_are_closed_TIU_Types_Pkg :
      outC->_L71 = outC->_L78;
      break;
    case desk_A_is_open_TIU_Types_Pkg :
      outC->_L71 = outC->_L76;
      break;
    case desk_B_is_open_TIU_Types_Pkg :
      outC->_L71 = outC->_L77;
      break;
    case both_desks_are_open_TIU_Types_Pkg :
      outC->_L71 = outC->_L75;
      break;
    default :
      outC->_L71 = outC->_L79;
      break;
  }
  outC->Desk_Open = outC->_L71;
  outC->_L34 = outC->_L37.m_passiveshunting_st;
  outC->Loc_PS_ST = outC->_L34;
  outC->_L70 = outC->Loc_PS_ST;
  outC->_L69 = kcg_false;
  outC->_L63 = kcg_true;
  /* _L68= */
  switch (outC->_L70) {
    case passive_shunting_permitted_TIU_Types_Pkg :
      outC->_L68 = outC->_L63;
      break;
    case passive_shunting_not_permitted_TIU_Types_Pkg :
      outC->_L68 = outC->_L69;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L35 = outC->_L37.m_sleeping_st;
  outC->Loc_Sleeping_ST = outC->_L35;
  outC->_L62 = outC->Loc_Sleeping_ST;
  outC->_L58 = kcg_true;
  outC->_L57 = kcg_false;
  /* _L60= */
  switch (outC->_L62) {
    case signal_active_TIU_Types_Pkg :
      outC->_L60 = outC->_L58;
      break;
    case signal_not_active_TIU_Types_Pkg :
      outC->_L60 = outC->_L57;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L53 = kcg_false;
  outC->_L52 = kcg_false;
  outC->_L51 = kcg_true;
  outC->_L33 = outC->_L37.m_nonleading_st;
  outC->Loc_NL_ST = outC->_L33;
  outC->_L49 = outC->Loc_NL_ST;
  /* _L50= */
  switch (outC->_L49) {
    case non_leading_permitted_TIU_Types_Pkg :
      outC->_L50 = outC->_L51;
      break;
    case non_leading_not_permitted_TIU_Types_Pkg :
      outC->_L50 = outC->_L52;
      break;
    default :
      outC->_L50 = outC->_L53;
      break;
  }
  outC->All_Desks_Closed = outC->_L82;
  outC->Train_Permitted_PS = outC->_L68;
  outC->Train_Req_SL = outC->_L60;
  outC->Train_Permitted_NL = outC->_L50;
  outC->_L29 = outC->_L37.m_traction_st;
  _1_noname = outC->_L29;
  outC->_L30 = outC->_L37.m_trainintegrity_st;
  noname = outC->_L30;
}

#ifndef KCG_USER_DEFINED_INIT
void InputTIUManagement_init_Interfaces(
  outC_InputTIUManagement_Interfaces *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L102 = kcg_true;
  outC->_L101 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L100 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L86 = kcg_true;
  outC->_L85.valid = kcg_true;
  outC->_L85.acknowledgedByDriver = kcg_true;
  outC->_L85.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L85.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L85.trainLength = kcg_lit_int64(0);
  outC->_L85.brakePerctage = kcg_lit_int64(0);
  outC->_L85.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L85.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L85.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L85.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L85.axleNumber = kcg_lit_int64(0);
  outC->_L85.numberNationalSystems = kcg_lit_int64(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L85.nationSystems[idx] = kcg_lit_int64(0);
  }
  outC->_L85.numberTractionSystems = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L85.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L85.tractionSystem[idx1].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L84.train_status.valid = kcg_true;
  outC->_L84.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L84.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L84.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L84.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L84.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L84.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L84.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L84.brake_status.valid = kcg_true;
  outC->_L84.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L84.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L84.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L84.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L84.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L84.brake_pressure.valid = kcg_true;
  outC->_L84.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L84.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L84.train_data_info.valid = kcg_true;
  outC->_L84.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L84.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L84.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L84.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L84.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L84.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L84.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L84.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L84.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L84.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L84.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L84.train_data_info.nationSystems[idx2] = kcg_lit_int64(0);
  }
  outC->_L84.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L84.train_data_info.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L84.train_data_info.tractionSystem[idx3].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L84.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L84.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L84.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L84.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L84.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L84.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L84.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L84.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->_L83 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L82 = kcg_true;
  outC->_L81 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L75 = kcg_true;
  outC->_L72 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L71 = kcg_true;
  outC->_L70 = passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L63 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L62 = signal_active_TIU_Types_Pkg;
  outC->_L57 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L53 = kcg_true;
  outC->_L52 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L49 = non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L37.valid = kcg_true;
  outC->_L37.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L37.m_passiveshunting_st = passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L37.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L37.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L37.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L37.m_trainintegrity_st = train_is_not_integer_TIU_Types_Pkg;
  outC->_L37.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L29 = traction_on_TIU_Types_Pkg;
  outC->_L30 = train_is_not_integer_TIU_Types_Pkg;
  outC->_L31 = direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L32 = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L33 = non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L34 = passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L35 = signal_active_TIU_Types_Pkg;
  outC->_L36 = kcg_true;
  outC->_L20.train_status.valid = kcg_true;
  outC->_L20.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L20.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L20.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L20.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L20.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L20.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L20.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L20.brake_status.valid = kcg_true;
  outC->_L20.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L20.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L20.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L20.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L20.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L20.brake_pressure.valid = kcg_true;
  outC->_L20.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L20.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L20.train_data_info.valid = kcg_true;
  outC->_L20.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L20.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L20.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L20.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L20.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L20.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L20.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L20.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L20.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L20.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L20.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L20.train_data_info.nationSystems[idx4] = kcg_lit_int64(0);
  }
  outC->_L20.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L20.train_data_info.tractionSystem[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L20.train_data_info.tractionSystem[idx5].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L20.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L20.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L20.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L20.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L20.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L20.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L20.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L20.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->Loc_Cab_ST = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->Loc_NL_ST = non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->Loc_PS_ST = passive_shunting_permitted_TIU_Types_Pkg;
  outC->Loc_Sleeping_ST = signal_active_TIU_Types_Pkg;
  outC->Valid_Train_Data_Stored = kcg_true;
  outC->OnBoard_Powered = kcg_true;
  outC->Desk_Open = kcg_true;
  outC->All_Desks_Closed = kcg_true;
  outC->Train_Req_SL = kcg_true;
  outC->Train_Permitted_PS = kcg_true;
  outC->Train_Permitted_NL = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InputTIUManagement_reset_Interfaces(
  outC_InputTIUManagement_Interfaces *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputTIUManagement_Interfaces.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

