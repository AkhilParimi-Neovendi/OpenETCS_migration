/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_EVC_to_DMI_Messages.h"

/* Messages::Write_int_to_EVC_to_DMI/ */
void Write_int_to_EVC_to_DMI_Messages(
  /* evc_to_dmi_int/ */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int,
  outC_Write_int_to_EVC_to_DMI_Messages *outC)
{
  static EVC_to_DMI_Message_T_API_DMI_Pkg op_call;

  outC->_L4 = kcg_lit_int32(1);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->_L7, evc_to_dmi_int);
  outC->_L2 = outC->_L7[0];
  outC->_L3 = outC->_L2 == outC->_L4;
  outC->every = outC->_L3;
  if (outC->every) {
    /* _L5=(Messages::CAST_int_to_EVC_to_DMI#1)/ */
    CAST_int_to_EVC_to_DMI_Messages(
      &outC->_L7,
      &outC->Context_CAST_int_to_EVC_to_DMI_1);
    kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_EVC_to_DMI_1.evc_to_dmi_ct);
  }
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(
    &outC->_L6,
    (EVC_to_DMI_Message_T_API_DMI_Pkg *) &cEVC_to_DMI_CT_Messages);
  if (outC->every) {
    kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&outC->_L5, &op_call);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&outC->_L5, &outC->_L6);
  }
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&outC->evc_to_dmi_ct, &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_EVC_to_DMI_init_Messages(
  outC_Write_int_to_EVC_to_DMI_Messages *outC)
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
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;

  for (idx = 0; idx < 999; idx++) {
    outC->_L7[idx] = kcg_lit_int32(0);
  }
  outC->_L6.present = kcg_true;
  outC->_L6.dynamic.valid = kcg_true;
  outC->_L6.dynamic.system_clock = kcg_lit_int32(0);
  outC->_L6.dynamic.v_train = kcg_lit_int32(0);
  outC->_L6.dynamic.location_front_train = kcg_lit_int32(0);
  outC->_L6.dynamic.location_brake_target = kcg_lit_int32(0);
  outC->_L6.dynamic.v_target = kcg_lit_int32(0);
  outC->_L6.dynamic.v_permitted = kcg_lit_int32(0);
  outC->_L6.dynamic.v_release = kcg_lit_int32(0);
  outC->_L6.dynamic.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L6.dynamic.v_intervention = kcg_lit_int32(0);
  outC->_L6.dynamic.mode = M_MODE_Full_Supervision;
  outC->_L6.dynamic.level.level = M_LEVEL_Level_0;
  outC->_L6.dynamic.level.nid_stm = kcg_lit_int32(0);
  outC->_L6.dynamic.nid_c = kcg_lit_int32(0);
  outC->_L6.dynamic.nid_c_valid = kcg_true;
  outC->_L6.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L6.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->_L6.dynamic.location_LOA = kcg_lit_int32(0);
  outC->_L6.dynamic.v_LOA = kcg_lit_int32(0);
  outC->_L6.dynamic.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L6.dynamic.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L6.dynamic.distance_to_TSA = kcg_lit_int32(0);
  outC->_L6.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->_L6.dynamic.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L6.menu_request.valid = kcg_true;
  outC->_L6.menu_request.system_clock = kcg_lit_int32(0);
  outC->_L6.menu_request.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_system_version = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_luminance = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_isolation = kcg_true;
  outC->_L6.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L6.menu_request.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L6.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L6.menu_request.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L6.entry_request.valid = kcg_true;
  outC->_L6.entry_request.system_clock = kcg_lit_int32(0);
  outC->_L6.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L6.evc_coded_train_data.valid = kcg_true;
  outC->_L6.evc_coded_train_data.system_clock = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.trainID.number = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.trainID.dig1 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.trainID.dig2 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.trainID.dig3 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.trainID.dig4 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.trainID.dig5 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.trainLength.number = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.trainLength.dig1 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.trainLength.dig2 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.trainLength.dig3 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.trainLength.dig4 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.brakeModel.number = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.brakeModel.dig1 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.brakeModel.dig2 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.brakeModel.dig3 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.vmax.number = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.vmax.dig1 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.vmax.dig2 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.vmax.dig3 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L6.evc_coded_train_data.airTightSystem.number = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.airTightSystem.dig1 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.airTightSystem.dig2 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.airTightSystem.dig3 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.mLoadingGauge.number = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.mLoadingGauge.dig1 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.mLoadingGauge.dig2 = kcg_lit_int32(0);
  outC->_L6.evc_coded_train_data.mLoadingGauge.dig3 = kcg_lit_int32(0);
  outC->_L6.textMessage.valid = kcg_true;
  outC->_L6.textMessage.system_clock = kcg_lit_int32(0);
  outC->_L6.textMessage.textMessage_ID = kcg_lit_int32(0);
  outC->_L6.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L6.textMessage.l_text = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L6.textMessage.x_text[idx1] = ' ';
  }
  outC->_L6.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L6.textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L6.trackDescription.valid = kcg_true;
  outC->_L6.trackDescription.system_clock = kcg_lit_int32(0);
  outC->_L6.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L6.trackDescription.speedProfiles.speedProfiles[idx2].valid = kcg_true;
    outC->_L6.trackDescription.speedProfiles.speedProfiles[idx2].Loc_Abs =
      kcg_lit_int32(0);
    outC->_L6.trackDescription.speedProfiles.speedProfiles[idx2].Loc_LRBG =
      kcg_lit_int32(0);
    outC->_L6.trackDescription.speedProfiles.speedProfiles[idx2].MRS =
      kcg_lit_int32(0);
  }
  outC->_L6.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L6.trackDescription.gradientProfiles.gradientProfiles[idx3].valid =
      kcg_true;
    outC->_L6.trackDescription.gradientProfiles.gradientProfiles[idx3].begin_section =
      kcg_lit_int32(0);
    outC->_L6.trackDescription.gradientProfiles.gradientProfiles[idx3].end_section =
      kcg_lit_int32(0);
    outC->_L6.trackDescription.gradientProfiles.gradientProfiles[idx3].gradient =
      kcg_lit_int32(0);
  }
  outC->_L6.trackDescription.trackConditions.nIter = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L6.trackDescription.trackConditions.trackCondition[idx4].d_trackcond =
      kcg_lit_int32(0);
    outC->_L6.trackDescription.trackConditions.trackCondition[idx4].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L6.identifierRequest.valid = kcg_true;
  outC->_L6.identifierRequest.system_clock = kcg_lit_int32(0);
  outC->_L6.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.identifierRequest.l_name = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L6.identifierRequest.x_name[idx5] = ' ';
  }
  outC->_L6.identifierRequest.l_extra = kcg_lit_int32(0);
  outC->_L6.systemVersion.valid = kcg_true;
  outC->_L6.systemVersion.system_clock = kcg_lit_int32(0);
  outC->_L6.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.displayControl.valid = kcg_true;
  outC->_L6.displayControl.cab_is_active = kcg_true;
  outC->_L6.displayControl.system_clock = kcg_lit_int32(0);
  outC->_L6.EVC_levelData.valid = kcg_true;
  outC->_L6.EVC_levelData.system_clock = kcg_lit_int32(0);
  outC->_L6.EVC_levelData.levelList.number = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L6.EVC_levelData.levelList.levelList[idx6].level = M_LEVEL_Level_0;
    outC->_L6.EVC_levelData.levelList.levelList[idx6].nid_stm = kcg_lit_int32(0);
  }
  outC->_L6.EVC_radioNetData.valid = kcg_true;
  outC->_L6.EVC_radioNetData.system_clock = kcg_lit_int32(0);
  outC->_L6.EVC_radioNetData.nid_mn = kcg_lit_int32(0);
  outC->_L6.driverIdentifier.valid = kcg_true;
  outC->_L6.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 9; idx7++) {
    outC->_L6.driverIdentifier.driverIdentifier[idx7] = ' ';
  }
  outC->_L6.trainRunningNumber.valid = kcg_true;
  outC->_L6.trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->_L6.trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->_L6.trainData.valid = kcg_true;
  outC->_L6.trainData.systemTime = kcg_lit_int32(0);
  outC->_L6.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6.trainData.l_train = kcg_lit_int32(0);
  outC->_L6.trainData.m_brakeperct = kcg_lit_int32(0);
  outC->_L6.trainData.v_maxTrain = kcg_lit_int32(0);
  outC->_L6.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L6.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L6.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6.adhesionFactor.valid = kcg_true;
  outC->_L6.adhesionFactor.systemTime = kcg_lit_int32(0);
  outC->_L6.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L6.iconRequest.valid = kcg_true;
  outC->_L6.iconRequest.system_clock = kcg_lit_int32(0);
  outC->_L6.iconRequest.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L6.iconRequest.DMI_m_icon_flashing_freq = kcg_lit_float32(0.0);
  outC->_L6.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L6.iconRequest.DMI_nid_icon_rank = kcg_lit_int32(0);
  outC->_L6.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L6.iconRequest.DMI_nid_area_rank = kcg_lit_int32(0);
  outC->_L6.iconRequest.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L5.present = kcg_true;
  outC->_L5.dynamic.valid = kcg_true;
  outC->_L5.dynamic.system_clock = kcg_lit_int32(0);
  outC->_L5.dynamic.v_train = kcg_lit_int32(0);
  outC->_L5.dynamic.location_front_train = kcg_lit_int32(0);
  outC->_L5.dynamic.location_brake_target = kcg_lit_int32(0);
  outC->_L5.dynamic.v_target = kcg_lit_int32(0);
  outC->_L5.dynamic.v_permitted = kcg_lit_int32(0);
  outC->_L5.dynamic.v_release = kcg_lit_int32(0);
  outC->_L5.dynamic.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L5.dynamic.v_intervention = kcg_lit_int32(0);
  outC->_L5.dynamic.mode = M_MODE_Full_Supervision;
  outC->_L5.dynamic.level.level = M_LEVEL_Level_0;
  outC->_L5.dynamic.level.nid_stm = kcg_lit_int32(0);
  outC->_L5.dynamic.nid_c = kcg_lit_int32(0);
  outC->_L5.dynamic.nid_c_valid = kcg_true;
  outC->_L5.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L5.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->_L5.dynamic.location_LOA = kcg_lit_int32(0);
  outC->_L5.dynamic.v_LOA = kcg_lit_int32(0);
  outC->_L5.dynamic.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L5.dynamic.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L5.dynamic.distance_to_TSA = kcg_lit_int32(0);
  outC->_L5.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->_L5.dynamic.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L5.menu_request.valid = kcg_true;
  outC->_L5.menu_request.system_clock = kcg_lit_int32(0);
  outC->_L5.menu_request.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_system_version = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_luminance = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_isolation = kcg_true;
  outC->_L5.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L5.menu_request.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L5.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L5.menu_request.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L5.entry_request.valid = kcg_true;
  outC->_L5.entry_request.system_clock = kcg_lit_int32(0);
  outC->_L5.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L5.evc_coded_train_data.valid = kcg_true;
  outC->_L5.evc_coded_train_data.system_clock = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.trainID.number = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.trainID.dig1 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.trainID.dig2 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.trainID.dig3 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.trainID.dig4 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.trainID.dig5 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.trainLength.number = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.trainLength.dig1 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.trainLength.dig2 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.trainLength.dig3 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.trainLength.dig4 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.brakeModel.number = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.brakeModel.dig1 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.brakeModel.dig2 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.brakeModel.dig3 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.vmax.number = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.vmax.dig1 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.vmax.dig2 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.vmax.dig3 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L5.evc_coded_train_data.airTightSystem.number = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.airTightSystem.dig1 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.airTightSystem.dig2 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.airTightSystem.dig3 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.mLoadingGauge.number = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.mLoadingGauge.dig1 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.mLoadingGauge.dig2 = kcg_lit_int32(0);
  outC->_L5.evc_coded_train_data.mLoadingGauge.dig3 = kcg_lit_int32(0);
  outC->_L5.textMessage.valid = kcg_true;
  outC->_L5.textMessage.system_clock = kcg_lit_int32(0);
  outC->_L5.textMessage.textMessage_ID = kcg_lit_int32(0);
  outC->_L5.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L5.textMessage.l_text = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 255; idx8++) {
    outC->_L5.textMessage.x_text[idx8] = ' ';
  }
  outC->_L5.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L5.textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L5.trackDescription.valid = kcg_true;
  outC->_L5.trackDescription.system_clock = kcg_lit_int32(0);
  outC->_L5.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L5.trackDescription.speedProfiles.speedProfiles[idx9].valid = kcg_true;
    outC->_L5.trackDescription.speedProfiles.speedProfiles[idx9].Loc_Abs =
      kcg_lit_int32(0);
    outC->_L5.trackDescription.speedProfiles.speedProfiles[idx9].Loc_LRBG =
      kcg_lit_int32(0);
    outC->_L5.trackDescription.speedProfiles.speedProfiles[idx9].MRS =
      kcg_lit_int32(0);
  }
  outC->_L5.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[idx10].valid =
      kcg_true;
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[idx10].begin_section =
      kcg_lit_int32(0);
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[idx10].end_section =
      kcg_lit_int32(0);
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[idx10].gradient =
      kcg_lit_int32(0);
  }
  outC->_L5.trackDescription.trackConditions.nIter = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 32; idx11++) {
    outC->_L5.trackDescription.trackConditions.trackCondition[idx11].d_trackcond =
      kcg_lit_int32(0);
    outC->_L5.trackDescription.trackConditions.trackCondition[idx11].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L5.identifierRequest.valid = kcg_true;
  outC->_L5.identifierRequest.system_clock = kcg_lit_int32(0);
  outC->_L5.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.identifierRequest.l_name = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 255; idx12++) {
    outC->_L5.identifierRequest.x_name[idx12] = ' ';
  }
  outC->_L5.identifierRequest.l_extra = kcg_lit_int32(0);
  outC->_L5.systemVersion.valid = kcg_true;
  outC->_L5.systemVersion.system_clock = kcg_lit_int32(0);
  outC->_L5.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.displayControl.valid = kcg_true;
  outC->_L5.displayControl.cab_is_active = kcg_true;
  outC->_L5.displayControl.system_clock = kcg_lit_int32(0);
  outC->_L5.EVC_levelData.valid = kcg_true;
  outC->_L5.EVC_levelData.system_clock = kcg_lit_int32(0);
  outC->_L5.EVC_levelData.levelList.number = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 32; idx13++) {
    outC->_L5.EVC_levelData.levelList.levelList[idx13].level = M_LEVEL_Level_0;
    outC->_L5.EVC_levelData.levelList.levelList[idx13].nid_stm = kcg_lit_int32(0);
  }
  outC->_L5.EVC_radioNetData.valid = kcg_true;
  outC->_L5.EVC_radioNetData.system_clock = kcg_lit_int32(0);
  outC->_L5.EVC_radioNetData.nid_mn = kcg_lit_int32(0);
  outC->_L5.driverIdentifier.valid = kcg_true;
  outC->_L5.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 9; idx14++) {
    outC->_L5.driverIdentifier.driverIdentifier[idx14] = ' ';
  }
  outC->_L5.trainRunningNumber.valid = kcg_true;
  outC->_L5.trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->_L5.trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->_L5.trainData.valid = kcg_true;
  outC->_L5.trainData.systemTime = kcg_lit_int32(0);
  outC->_L5.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5.trainData.l_train = kcg_lit_int32(0);
  outC->_L5.trainData.m_brakeperct = kcg_lit_int32(0);
  outC->_L5.trainData.v_maxTrain = kcg_lit_int32(0);
  outC->_L5.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L5.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L5.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5.adhesionFactor.valid = kcg_true;
  outC->_L5.adhesionFactor.systemTime = kcg_lit_int32(0);
  outC->_L5.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L5.iconRequest.valid = kcg_true;
  outC->_L5.iconRequest.system_clock = kcg_lit_int32(0);
  outC->_L5.iconRequest.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L5.iconRequest.DMI_m_icon_flashing_freq = kcg_lit_float32(0.0);
  outC->_L5.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L5.iconRequest.DMI_nid_icon_rank = kcg_lit_int32(0);
  outC->_L5.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L5.iconRequest.DMI_nid_area_rank = kcg_lit_int32(0);
  outC->_L5.iconRequest.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->every = kcg_true;
  outC->evc_to_dmi_ct.present = kcg_true;
  outC->evc_to_dmi_ct.dynamic.valid = kcg_true;
  outC->evc_to_dmi_ct.dynamic.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.v_train = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.location_front_train = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.location_brake_target = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.v_target = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.v_permitted = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.v_release = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.location_brake_curve_starting_point =
    kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.v_intervention = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.mode = M_MODE_Full_Supervision;
  outC->evc_to_dmi_ct.dynamic.level.level = M_LEVEL_Level_0;
  outC->evc_to_dmi_ct.dynamic.level.nid_stm = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.nid_c = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.nid_c_valid = kcg_true;
  outC->evc_to_dmi_ct.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.dynamic.location_LOA = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.v_LOA = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.distance_KP_Balise = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.distance_to_TSA = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->evc_to_dmi_ct.dynamic.distanceIndicationPoint = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.menu_request.valid = kcg_true;
  outC->evc_to_dmi_ct.menu_request.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_start_of_mission =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_shunting_exit =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_non_leading =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_exit_non_leading =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_maintain_shunting =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_driver_ID =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_ETCS_level =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_train_data_view =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_override_EOA =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_adhesion_factor =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_system_version =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_luminance =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_train_integrity =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_isolation =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_use_short_number =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_enter_RBC_data =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_radio_network_ID =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_contact_last_RBC =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Button_switch_for_train_data =
    kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->evc_to_dmi_ct.menu_request.available_menu.Menu_button_Remove_VBC =
    kcg_true;
  outC->evc_to_dmi_ct.entry_request.valid = kcg_true;
  outC->evc_to_dmi_ct.entry_request.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.evc_coded_train_data.valid = kcg_true;
  outC->evc_to_dmi_ct.evc_coded_train_data.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.number = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.dig1 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.dig2 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.dig3 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.dig4 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.dig5 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainLength.number = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainLength.dig1 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainLength.dig2 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainLength.dig3 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainLength.dig4 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.brakeModel.number = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.brakeModel.dig1 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.brakeModel.dig2 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.brakeModel.dig3 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.vmax.number = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.vmax.dig1 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.vmax.dig2 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.vmax.dig3 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->evc_to_dmi_ct.evc_coded_train_data.airTightSystem.number =
    kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.airTightSystem.dig1 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.airTightSystem.dig2 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.airTightSystem.dig3 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.mLoadingGauge.number = kcg_lit_int32(
      0);
  outC->evc_to_dmi_ct.evc_coded_train_data.mLoadingGauge.dig1 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.mLoadingGauge.dig2 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.mLoadingGauge.dig3 = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.textMessage.valid = kcg_true;
  outC->evc_to_dmi_ct.textMessage.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.textMessage.textMessage_ID = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.textMessage.l_text = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 255; idx15++) {
    outC->evc_to_dmi_ct.textMessage.x_text[idx15] = ' ';
  }
  outC->evc_to_dmi_ct.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->evc_to_dmi_ct.textMessage.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->evc_to_dmi_ct.trackDescription.valid = kcg_true;
  outC->evc_to_dmi_ct.trackDescription.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (idx16 = 0; idx16 < 32; idx16++) {
    outC->evc_to_dmi_ct.trackDescription.speedProfiles.speedProfiles[idx16].valid =
      kcg_true;
    outC->evc_to_dmi_ct.trackDescription.speedProfiles.speedProfiles[idx16].Loc_Abs =
      kcg_lit_int32(0);
    outC->evc_to_dmi_ct.trackDescription.speedProfiles.speedProfiles[idx16].Loc_LRBG =
      kcg_lit_int32(0);
    outC->evc_to_dmi_ct.trackDescription.speedProfiles.speedProfiles[idx16].MRS =
      kcg_lit_int32(0);
  }
  outC->evc_to_dmi_ct.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (idx17 = 0; idx17 < 32; idx17++) {
    outC->evc_to_dmi_ct.trackDescription.gradientProfiles.gradientProfiles[idx17].valid =
      kcg_true;
    outC->evc_to_dmi_ct.trackDescription.gradientProfiles.gradientProfiles[idx17].begin_section =
      kcg_lit_int32(0);
    outC->evc_to_dmi_ct.trackDescription.gradientProfiles.gradientProfiles[idx17].end_section =
      kcg_lit_int32(0);
    outC->evc_to_dmi_ct.trackDescription.gradientProfiles.gradientProfiles[idx17].gradient =
      kcg_lit_int32(0);
  }
  outC->evc_to_dmi_ct.trackDescription.trackConditions.nIter = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 32; idx18++) {
    outC->evc_to_dmi_ct.trackDescription.trackConditions.trackCondition[idx18].d_trackcond =
      kcg_lit_int32(0);
    outC->evc_to_dmi_ct.trackDescription.trackConditions.trackCondition[idx18].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->evc_to_dmi_ct.identifierRequest.valid = kcg_true;
  outC->evc_to_dmi_ct.identifierRequest.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->evc_to_dmi_ct.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->evc_to_dmi_ct.identifierRequest.l_name = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 255; idx19++) {
    outC->evc_to_dmi_ct.identifierRequest.x_name[idx19] = ' ';
  }
  outC->evc_to_dmi_ct.identifierRequest.l_extra = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.systemVersion.valid = kcg_true;
  outC->evc_to_dmi_ct.systemVersion.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->evc_to_dmi_ct.displayControl.valid = kcg_true;
  outC->evc_to_dmi_ct.displayControl.cab_is_active = kcg_true;
  outC->evc_to_dmi_ct.displayControl.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.EVC_levelData.valid = kcg_true;
  outC->evc_to_dmi_ct.EVC_levelData.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.EVC_levelData.levelList.number = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 32; idx20++) {
    outC->evc_to_dmi_ct.EVC_levelData.levelList.levelList[idx20].level =
      M_LEVEL_Level_0;
    outC->evc_to_dmi_ct.EVC_levelData.levelList.levelList[idx20].nid_stm =
      kcg_lit_int32(0);
  }
  outC->evc_to_dmi_ct.EVC_radioNetData.valid = kcg_true;
  outC->evc_to_dmi_ct.EVC_radioNetData.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.EVC_radioNetData.nid_mn = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.driverIdentifier.valid = kcg_true;
  outC->evc_to_dmi_ct.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 9; idx21++) {
    outC->evc_to_dmi_ct.driverIdentifier.driverIdentifier[idx21] = ' ';
  }
  outC->evc_to_dmi_ct.trainRunningNumber.valid = kcg_true;
  outC->evc_to_dmi_ct.trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.trainData.valid = kcg_true;
  outC->evc_to_dmi_ct.trainData.systemTime = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->evc_to_dmi_ct.trainData.l_train = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.trainData.m_brakeperct = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.trainData.v_maxTrain = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->evc_to_dmi_ct.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->evc_to_dmi_ct.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->evc_to_dmi_ct.adhesionFactor.valid = kcg_true;
  outC->evc_to_dmi_ct.adhesionFactor.systemTime = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->evc_to_dmi_ct.iconRequest.valid = kcg_true;
  outC->evc_to_dmi_ct.iconRequest.system_clock = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.iconRequest.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.iconRequest.DMI_m_icon_flashing_freq = kcg_lit_float32(0.0);
  outC->evc_to_dmi_ct.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.iconRequest.DMI_nid_icon_rank = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.iconRequest.DMI_nid_area_rank = kcg_lit_int32(0);
  outC->evc_to_dmi_ct.iconRequest.DMI_nid_icon_identifier = kcg_lit_int32(0);
  /* _L5=(Messages::CAST_int_to_EVC_to_DMI#1)/ */
  CAST_int_to_EVC_to_DMI_init_Messages(&outC->Context_CAST_int_to_EVC_to_DMI_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_EVC_to_DMI_reset_Messages(
  outC_Write_int_to_EVC_to_DMI_Messages *outC)
{
  /* _L5=(Messages::CAST_int_to_EVC_to_DMI#1)/ */
  CAST_int_to_EVC_to_DMI_reset_Messages(
    &outC->Context_CAST_int_to_EVC_to_DMI_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_EVC_to_DMI_Messages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

