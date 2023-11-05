/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_EVC_to_DMI_to_int_Messages.h"

/* Messages::Write_EVC_to_DMI_to_int/ */
void Write_EVC_to_DMI_to_int_Messages(
  /* evc_to_dmi_ct/ */
  EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct,
  outC_Write_EVC_to_DMI_to_int_Messages *outC)
{
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg op_call;

  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&outC->_L5, evc_to_dmi_ct);
  outC->_L3 = outC->_L5.present;
  outC->every = outC->_L3;
  if (outC->every) {
    /* _L2=(Messages::CAST_EVC_to_DMI_to_int#1)/ */
    CAST_EVC_to_DMI_to_int_Messages(
      &outC->_L5,
      &outC->Context_CAST_EVC_to_DMI_to_int_1);
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_EVC_to_DMI_to_int_1.evc_to_dmi_int);
  }
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->_L4,
    (EVC_to_DMI_Message_int_T_API_DMI_Pkg *) &cEVC_DMI_int_array_Messages);
  if (outC->every) {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->_L2, &op_call);
  }
  else {
    kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->_L2, &outC->_L4);
  }
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->evc_to_dmi_int,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_EVC_to_DMI_to_int_init_Messages(
  outC_Write_EVC_to_DMI_to_int_Messages *outC)
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
  for (idx = 0; idx < 255; idx++) {
    outC->_L5.textMessage.x_text[idx] = ' ';
  }
  outC->_L5.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L5.textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L5.trackDescription.valid = kcg_true;
  outC->_L5.trackDescription.system_clock = kcg_lit_int32(0);
  outC->_L5.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L5.trackDescription.speedProfiles.speedProfiles[idx1].valid = kcg_true;
    outC->_L5.trackDescription.speedProfiles.speedProfiles[idx1].Loc_Abs =
      kcg_lit_int32(0);
    outC->_L5.trackDescription.speedProfiles.speedProfiles[idx1].Loc_LRBG =
      kcg_lit_int32(0);
    outC->_L5.trackDescription.speedProfiles.speedProfiles[idx1].MRS =
      kcg_lit_int32(0);
  }
  outC->_L5.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[idx2].valid =
      kcg_true;
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[idx2].begin_section =
      kcg_lit_int32(0);
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[idx2].end_section =
      kcg_lit_int32(0);
    outC->_L5.trackDescription.gradientProfiles.gradientProfiles[idx2].gradient =
      kcg_lit_int32(0);
  }
  outC->_L5.trackDescription.trackConditions.nIter = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L5.trackDescription.trackConditions.trackCondition[idx3].d_trackcond =
      kcg_lit_int32(0);
    outC->_L5.trackDescription.trackConditions.trackCondition[idx3].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L5.identifierRequest.valid = kcg_true;
  outC->_L5.identifierRequest.system_clock = kcg_lit_int32(0);
  outC->_L5.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.identifierRequest.l_name = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L5.identifierRequest.x_name[idx4] = ' ';
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
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L5.EVC_levelData.levelList.levelList[idx5].level = M_LEVEL_Level_0;
    outC->_L5.EVC_levelData.levelList.levelList[idx5].nid_stm = kcg_lit_int32(0);
  }
  outC->_L5.EVC_radioNetData.valid = kcg_true;
  outC->_L5.EVC_radioNetData.system_clock = kcg_lit_int32(0);
  outC->_L5.EVC_radioNetData.nid_mn = kcg_lit_int32(0);
  outC->_L5.driverIdentifier.valid = kcg_true;
  outC->_L5.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 9; idx6++) {
    outC->_L5.driverIdentifier.driverIdentifier[idx6] = ' ';
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
  for (idx7 = 0; idx7 < 999; idx7++) {
    outC->_L4[idx7] = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_true;
  for (idx8 = 0; idx8 < 999; idx8++) {
    outC->_L2[idx8] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  for (idx9 = 0; idx9 < 999; idx9++) {
    outC->evc_to_dmi_int[idx9] = kcg_lit_int32(0);
  }
  /* _L2=(Messages::CAST_EVC_to_DMI_to_int#1)/ */
  CAST_EVC_to_DMI_to_int_init_Messages(&outC->Context_CAST_EVC_to_DMI_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_EVC_to_DMI_to_int_reset_Messages(
  outC_Write_EVC_to_DMI_to_int_Messages *outC)
{
  /* _L2=(Messages::CAST_EVC_to_DMI_to_int#1)/ */
  CAST_EVC_to_DMI_to_int_reset_Messages(
    &outC->Context_CAST_EVC_to_DMI_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_EVC_to_DMI_to_int_Messages.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

