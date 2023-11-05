/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "collectDMIPackets_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::collectDMIPackets/ */
void collectDMIPackets_manage_DMI_Output_Pkg(
  /* TIU_TrainStatus/ */
  TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* dmi_dynamic/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_dynamic,
  /* dmi_menuRequest/ */
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_menuRequest,
  /* dmi_entryRequest/ */
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* dmi_evc_coded_train_data/ */
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data,
  /* dmi_text_message/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_text_message,
  /* dmi_trackDescription/ */
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_trackDescription,
  /* dmi_identifierRequest/ */
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_identifierRequest,
  /* dmi_systemVersion/ */
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_systemVersion,
  /* dmi_displayControl/ */
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_displayControl,
  /* dmi_EVC_levelData/ */
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_levelData,
  /* dmi_EVC_radioNet/ */
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_radioNet,
  /* dmi_driverIdentifier/ */
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driverIdentifier,
  /* dmi_trainRunningNumber/ */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_trainRunningNumber,
  /* dmi_trainData/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *dmi_trainData,
  /* dmi_adhesionFactor/ */
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesionFactor,
  /* dmi_iconRequest/ */
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_iconRequest,
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_collectDMIPackets_manage_DMI_Output_Pkg *outC)
{
  /* outputStatus/ */
  static dmiOutputs_T_manage_DMI_Output_Pkg last_outputStatus;

  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(
    &last_outputStatus,
    &outC->outputStatus);
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L77, dmi_iconRequest);
  outC->_L78 = outC->_L77.valid;
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L50,
    dmi_identifierRequest);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&outC->_L76, TIU_TrainStatus);
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(&outC->_L74, &last_outputStatus);
  outC->_L75 = systemTime;
  /* _L72=(manage_DMI_Output_Pkg::synchWithDMI#1)/ */
  synchWithDMI_manage_DMI_Output_Pkg(
    &outC->_L50,
    &outC->_L76,
    &outC->_L74,
    outC->_L75,
    &outC->Context_synchWithDMI_1);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L72,
    &outC->Context_synchWithDMI_1.send_dmi_identifierRequest);
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(
    &outC->_L73,
    &outC->Context_synchWithDMI_1.updatedOutputStatus);
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(&outC->outputStatus, &outC->_L73);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L71,
    dmi_adhesionFactor);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&outC->_L70, dmi_trainData);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L69,
    dmi_trainRunningNumber);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L68,
    dmi_driverIdentifier);
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L67,
    dmi_EVC_radioNet);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L66,
    dmi_EVC_levelData);
  outC->_L63 = outC->_L71.valid;
  outC->_L62 = outC->_L70.valid;
  outC->_L61 = outC->_L69.valid;
  outC->_L60 = outC->_L68.valid;
  outC->_L59 = outC->_L67.valid;
  outC->_L58 = outC->_L66.valid;
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L57,
    dmi_displayControl);
  outC->_L54 = outC->_L57.valid;
  outC->_L55 = outC->_L54 | outC->_L58 | outC->_L59 | outC->_L60 | outC->_L61 |
    outC->_L62 | outC->_L63 | outC->_L78;
  outC->lowerPart = outC->_L55;
  outC->_L53 = outC->lowerPart;
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L51,
    dmi_systemVersion);
  outC->_L47 = outC->_L51.valid;
  outC->_L46 = outC->_L50.valid;
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L49,
    dmi_trackDescription);
  outC->_L45 = outC->_L49.valid;
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L48,
    dmi_text_message);
  outC->_L43 = outC->_L48.valid;
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L44,
    dmi_evc_coded_train_data);
  outC->_L42 = outC->_L44.valid;
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L40,
    dmi_entryRequest);
  outC->_L41 = outC->_L40.valid;
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L38,
    dmi_menuRequest);
  outC->_L39 = outC->_L38.valid;
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(&outC->_L35, dmi_dynamic);
  outC->_L36 = outC->_L35.valid;
  outC->_L37 = outC->_L36 | outC->_L39 | outC->_L41 | outC->_L42 | outC->_L43 |
    outC->_L45 | outC->_L46 | outC->_L47;
  outC->_L52 = outC->_L37 | outC->_L53;
  outC->_L34.present = outC->_L52;
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.dynamic,
    &outC->_L35);
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.menu_request,
    &outC->_L38);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.entry_request,
    &outC->_L40);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.evc_coded_train_data,
    &outC->_L44);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.textMessage,
    &outC->_L48);
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.trackDescription,
    &outC->_L49);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.identifierRequest,
    &outC->_L72);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.systemVersion,
    &outC->_L51);
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.displayControl,
    &outC->_L57);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.EVC_levelData,
    &outC->_L66);
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.EVC_radioNetData,
    &outC->_L67);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L34.driverIdentifier,
    &outC->_L68);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L34.trainRunningNumber,
    &outC->_L69);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L34.trainData,
    &outC->_L70);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L34.adhesionFactor,
    &outC->_L71);
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L34.iconRequest,
    &outC->_L77);
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&outC->to_DMI, &outC->_L34);
}

#ifndef KCG_USER_DEFINED_INIT
void collectDMIPackets_init_manage_DMI_Output_Pkg(
  outC_collectDMIPackets_manage_DMI_Output_Pkg *outC)
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

  outC->_L78 = kcg_true;
  outC->_L77.valid = kcg_true;
  outC->_L77.system_clock = kcg_lit_int32(0);
  outC->_L77.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L77.DMI_m_icon_flashing_freq = kcg_lit_float32(0.0);
  outC->_L77.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L77.DMI_nid_icon_rank = kcg_lit_int32(0);
  outC->_L77.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L77.DMI_nid_area_rank = kcg_lit_int32(0);
  outC->_L77.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L76.valid = kcg_true;
  outC->_L76.deskOpen = kcg_true;
  outC->_L76.ownCab = CabUndefined_TIU_Types_Pkg;
  outC->_L76.activeCab = CabUndefined_TIU_Types_Pkg;
  outC->_L75 = kcg_lit_int32(0);
  outC->_L74.NO_initrequestSent = kcg_true;
  outC->_L74.secondValidationRequested = kcg_true;
  outC->_L72.valid = kcg_true;
  outC->_L72.system_clock = kcg_lit_int32(0);
  outC->_L72.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L72.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L72.l_name = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L72.x_name[idx] = ' ';
  }
  outC->_L72.l_extra = kcg_lit_int32(0);
  outC->_L73.NO_initrequestSent = kcg_true;
  outC->_L73.secondValidationRequested = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.systemTime = kcg_lit_int32(0);
  outC->_L71.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L70.valid = kcg_true;
  outC->_L70.systemTime = kcg_lit_int32(0);
  outC->_L70.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L70.l_train = kcg_lit_int32(0);
  outC->_L70.m_brakeperct = kcg_lit_int32(0);
  outC->_L70.v_maxTrain = kcg_lit_int32(0);
  outC->_L70.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L70.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L70.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L69.valid = kcg_true;
  outC->_L69.systemTime = kcg_lit_int32(0);
  outC->_L69.trainRunningNumber = kcg_lit_int32(0);
  outC->_L68.valid = kcg_true;
  outC->_L68.systemTime = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L68.driverIdentifier[idx1] = ' ';
  }
  outC->_L67.valid = kcg_true;
  outC->_L67.system_clock = kcg_lit_int32(0);
  outC->_L67.nid_mn = kcg_lit_int32(0);
  outC->_L66.valid = kcg_true;
  outC->_L66.system_clock = kcg_lit_int32(0);
  outC->_L66.levelList.number = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L66.levelList.levelList[idx2].level = M_LEVEL_Level_0;
    outC->_L66.levelList.levelList[idx2].nid_stm = kcg_lit_int32(0);
  }
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L57.valid = kcg_true;
  outC->_L57.cab_is_active = kcg_true;
  outC->_L57.system_clock = kcg_lit_int32(0);
  outC->_L54 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L53 = kcg_true;
  outC->_L52 = kcg_true;
  outC->_L51.valid = kcg_true;
  outC->_L51.system_clock = kcg_lit_int32(0);
  outC->_L51.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L50.valid = kcg_true;
  outC->_L50.system_clock = kcg_lit_int32(0);
  outC->_L50.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L50.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L50.l_name = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->_L50.x_name[idx3] = ' ';
  }
  outC->_L50.l_extra = kcg_lit_int32(0);
  outC->_L49.valid = kcg_true;
  outC->_L49.system_clock = kcg_lit_int32(0);
  outC->_L49.speedProfiles.profileChanged = kcg_true;
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L49.speedProfiles.speedProfiles[idx4].valid = kcg_true;
    outC->_L49.speedProfiles.speedProfiles[idx4].Loc_Abs = kcg_lit_int32(0);
    outC->_L49.speedProfiles.speedProfiles[idx4].Loc_LRBG = kcg_lit_int32(0);
    outC->_L49.speedProfiles.speedProfiles[idx4].MRS = kcg_lit_int32(0);
  }
  outC->_L49.gradientProfiles.profileChanged = kcg_true;
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L49.gradientProfiles.gradientProfiles[idx5].valid = kcg_true;
    outC->_L49.gradientProfiles.gradientProfiles[idx5].begin_section =
      kcg_lit_int32(0);
    outC->_L49.gradientProfiles.gradientProfiles[idx5].end_section =
      kcg_lit_int32(0);
    outC->_L49.gradientProfiles.gradientProfiles[idx5].gradient = kcg_lit_int32(0);
  }
  outC->_L49.trackConditions.nIter = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L49.trackConditions.trackCondition[idx6].d_trackcond = kcg_lit_int32(0);
    outC->_L49.trackConditions.trackCondition[idx6].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L48.valid = kcg_true;
  outC->_L48.system_clock = kcg_lit_int32(0);
  outC->_L48.textMessage_ID = kcg_lit_int32(0);
  outC->_L48.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L48.l_text = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 255; idx7++) {
    outC->_L48.x_text[idx7] = ' ';
  }
  outC->_L48.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L48.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44.valid = kcg_true;
  outC->_L44.system_clock = kcg_lit_int32(0);
  outC->_L44.trainID.number = kcg_lit_int32(0);
  outC->_L44.trainID.dig1 = kcg_lit_int32(0);
  outC->_L44.trainID.dig2 = kcg_lit_int32(0);
  outC->_L44.trainID.dig3 = kcg_lit_int32(0);
  outC->_L44.trainID.dig4 = kcg_lit_int32(0);
  outC->_L44.trainID.dig5 = kcg_lit_int32(0);
  outC->_L44.trainLength.number = kcg_lit_int32(0);
  outC->_L44.trainLength.dig1 = kcg_lit_int32(0);
  outC->_L44.trainLength.dig2 = kcg_lit_int32(0);
  outC->_L44.trainLength.dig3 = kcg_lit_int32(0);
  outC->_L44.trainLength.dig4 = kcg_lit_int32(0);
  outC->_L44.brakeModel.number = kcg_lit_int32(0);
  outC->_L44.brakeModel.dig1 = kcg_lit_int32(0);
  outC->_L44.brakeModel.dig2 = kcg_lit_int32(0);
  outC->_L44.brakeModel.dig3 = kcg_lit_int32(0);
  outC->_L44.vmax.number = kcg_lit_int32(0);
  outC->_L44.vmax.dig1 = kcg_lit_int32(0);
  outC->_L44.vmax.dig2 = kcg_lit_int32(0);
  outC->_L44.vmax.dig3 = kcg_lit_int32(0);
  outC->_L44.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L44.airTightSystem.number = kcg_lit_int32(0);
  outC->_L44.airTightSystem.dig1 = kcg_lit_int32(0);
  outC->_L44.airTightSystem.dig2 = kcg_lit_int32(0);
  outC->_L44.airTightSystem.dig3 = kcg_lit_int32(0);
  outC->_L44.mLoadingGauge.number = kcg_lit_int32(0);
  outC->_L44.mLoadingGauge.dig1 = kcg_lit_int32(0);
  outC->_L44.mLoadingGauge.dig2 = kcg_lit_int32(0);
  outC->_L44.mLoadingGauge.dig3 = kcg_lit_int32(0);
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40.valid = kcg_true;
  outC->_L40.system_clock = kcg_lit_int32(0);
  outC->_L40.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L39 = kcg_true;
  outC->_L38.valid = kcg_true;
  outC->_L38.system_clock = kcg_lit_int32(0);
  outC->_L38.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L38.available_menu.Menu_button_shunting = kcg_true;
  outC->_L38.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L38.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L38.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L38.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L38.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L38.available_menu.Menu_button_train_running_number = kcg_true;
  outC->_L38.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L38.available_menu.Menu_button_train_data_modification = kcg_true;
  outC->_L38.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L38.available_menu.Menu_button_staff_responsible_data = kcg_true;
  outC->_L38.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L38.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L38.available_menu.Menu_button_override_route_suitability = kcg_true;
  outC->_L38.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L38.available_menu.Menu_button_system_version = kcg_true;
  outC->_L38.available_menu.Menu_button_volume = kcg_true;
  outC->_L38.available_menu.Menu_button_luminance = kcg_true;
  outC->_L38.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L38.available_menu.Menu_button_isolation = kcg_true;
  outC->_L38.available_menu.Show_hourglass = kcg_true;
  outC->_L38.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L38.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L38.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L38.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L38.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L38.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L38.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L38.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35.valid = kcg_true;
  outC->_L35.system_clock = kcg_lit_int32(0);
  outC->_L35.v_train = kcg_lit_int32(0);
  outC->_L35.location_front_train = kcg_lit_int32(0);
  outC->_L35.location_brake_target = kcg_lit_int32(0);
  outC->_L35.v_target = kcg_lit_int32(0);
  outC->_L35.v_permitted = kcg_lit_int32(0);
  outC->_L35.v_release = kcg_lit_int32(0);
  outC->_L35.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L35.v_intervention = kcg_lit_int32(0);
  outC->_L35.mode = M_MODE_Full_Supervision;
  outC->_L35.level.level = M_LEVEL_Level_0;
  outC->_L35.level.nid_stm = kcg_lit_int32(0);
  outC->_L35.nid_c = kcg_lit_int32(0);
  outC->_L35.nid_c_valid = kcg_true;
  outC->_L35.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L35.sup_status = CSM_DMI_Types_Pkg;
  outC->_L35.location_LOA = kcg_lit_int32(0);
  outC->_L35.v_LOA = kcg_lit_int32(0);
  outC->_L35.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L35.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L35.distance_to_TSA = kcg_lit_int32(0);
  outC->_L35.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L35.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L34.present = kcg_true;
  outC->_L34.dynamic.valid = kcg_true;
  outC->_L34.dynamic.system_clock = kcg_lit_int32(0);
  outC->_L34.dynamic.v_train = kcg_lit_int32(0);
  outC->_L34.dynamic.location_front_train = kcg_lit_int32(0);
  outC->_L34.dynamic.location_brake_target = kcg_lit_int32(0);
  outC->_L34.dynamic.v_target = kcg_lit_int32(0);
  outC->_L34.dynamic.v_permitted = kcg_lit_int32(0);
  outC->_L34.dynamic.v_release = kcg_lit_int32(0);
  outC->_L34.dynamic.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L34.dynamic.v_intervention = kcg_lit_int32(0);
  outC->_L34.dynamic.mode = M_MODE_Full_Supervision;
  outC->_L34.dynamic.level.level = M_LEVEL_Level_0;
  outC->_L34.dynamic.level.nid_stm = kcg_lit_int32(0);
  outC->_L34.dynamic.nid_c = kcg_lit_int32(0);
  outC->_L34.dynamic.nid_c_valid = kcg_true;
  outC->_L34.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L34.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->_L34.dynamic.location_LOA = kcg_lit_int32(0);
  outC->_L34.dynamic.v_LOA = kcg_lit_int32(0);
  outC->_L34.dynamic.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L34.dynamic.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L34.dynamic.distance_to_TSA = kcg_lit_int32(0);
  outC->_L34.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->_L34.dynamic.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L34.menu_request.valid = kcg_true;
  outC->_L34.menu_request.system_clock = kcg_lit_int32(0);
  outC->_L34.menu_request.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_system_version = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_luminance = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_isolation = kcg_true;
  outC->_L34.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L34.menu_request.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L34.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L34.menu_request.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L34.entry_request.valid = kcg_true;
  outC->_L34.entry_request.system_clock = kcg_lit_int32(0);
  outC->_L34.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L34.evc_coded_train_data.valid = kcg_true;
  outC->_L34.evc_coded_train_data.system_clock = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.trainID.number = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.trainID.dig1 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.trainID.dig2 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.trainID.dig3 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.trainID.dig4 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.trainID.dig5 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.trainLength.number = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.trainLength.dig1 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.trainLength.dig2 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.trainLength.dig3 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.trainLength.dig4 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.brakeModel.number = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.brakeModel.dig1 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.brakeModel.dig2 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.brakeModel.dig3 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.vmax.number = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.vmax.dig1 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.vmax.dig2 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.vmax.dig3 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L34.evc_coded_train_data.airTightSystem.number = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.airTightSystem.dig1 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.airTightSystem.dig2 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.airTightSystem.dig3 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.mLoadingGauge.number = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.mLoadingGauge.dig1 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.mLoadingGauge.dig2 = kcg_lit_int32(0);
  outC->_L34.evc_coded_train_data.mLoadingGauge.dig3 = kcg_lit_int32(0);
  outC->_L34.textMessage.valid = kcg_true;
  outC->_L34.textMessage.system_clock = kcg_lit_int32(0);
  outC->_L34.textMessage.textMessage_ID = kcg_lit_int32(0);
  outC->_L34.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L34.textMessage.l_text = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 255; idx8++) {
    outC->_L34.textMessage.x_text[idx8] = ' ';
  }
  outC->_L34.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L34.textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L34.trackDescription.valid = kcg_true;
  outC->_L34.trackDescription.system_clock = kcg_lit_int32(0);
  outC->_L34.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->_L34.trackDescription.speedProfiles.speedProfiles[idx9].valid = kcg_true;
    outC->_L34.trackDescription.speedProfiles.speedProfiles[idx9].Loc_Abs =
      kcg_lit_int32(0);
    outC->_L34.trackDescription.speedProfiles.speedProfiles[idx9].Loc_LRBG =
      kcg_lit_int32(0);
    outC->_L34.trackDescription.speedProfiles.speedProfiles[idx9].MRS =
      kcg_lit_int32(0);
  }
  outC->_L34.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (idx10 = 0; idx10 < 32; idx10++) {
    outC->_L34.trackDescription.gradientProfiles.gradientProfiles[idx10].valid =
      kcg_true;
    outC->_L34.trackDescription.gradientProfiles.gradientProfiles[idx10].begin_section =
      kcg_lit_int32(0);
    outC->_L34.trackDescription.gradientProfiles.gradientProfiles[idx10].end_section =
      kcg_lit_int32(0);
    outC->_L34.trackDescription.gradientProfiles.gradientProfiles[idx10].gradient =
      kcg_lit_int32(0);
  }
  outC->_L34.trackDescription.trackConditions.nIter = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 32; idx11++) {
    outC->_L34.trackDescription.trackConditions.trackCondition[idx11].d_trackcond =
      kcg_lit_int32(0);
    outC->_L34.trackDescription.trackConditions.trackCondition[idx11].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L34.identifierRequest.valid = kcg_true;
  outC->_L34.identifierRequest.system_clock = kcg_lit_int32(0);
  outC->_L34.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34.identifierRequest.l_name = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 255; idx12++) {
    outC->_L34.identifierRequest.x_name[idx12] = ' ';
  }
  outC->_L34.identifierRequest.l_extra = kcg_lit_int32(0);
  outC->_L34.systemVersion.valid = kcg_true;
  outC->_L34.systemVersion.system_clock = kcg_lit_int32(0);
  outC->_L34.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34.displayControl.valid = kcg_true;
  outC->_L34.displayControl.cab_is_active = kcg_true;
  outC->_L34.displayControl.system_clock = kcg_lit_int32(0);
  outC->_L34.EVC_levelData.valid = kcg_true;
  outC->_L34.EVC_levelData.system_clock = kcg_lit_int32(0);
  outC->_L34.EVC_levelData.levelList.number = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 32; idx13++) {
    outC->_L34.EVC_levelData.levelList.levelList[idx13].level = M_LEVEL_Level_0;
    outC->_L34.EVC_levelData.levelList.levelList[idx13].nid_stm = kcg_lit_int32(0);
  }
  outC->_L34.EVC_radioNetData.valid = kcg_true;
  outC->_L34.EVC_radioNetData.system_clock = kcg_lit_int32(0);
  outC->_L34.EVC_radioNetData.nid_mn = kcg_lit_int32(0);
  outC->_L34.driverIdentifier.valid = kcg_true;
  outC->_L34.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 9; idx14++) {
    outC->_L34.driverIdentifier.driverIdentifier[idx14] = ' ';
  }
  outC->_L34.trainRunningNumber.valid = kcg_true;
  outC->_L34.trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->_L34.trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->_L34.trainData.valid = kcg_true;
  outC->_L34.trainData.systemTime = kcg_lit_int32(0);
  outC->_L34.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L34.trainData.l_train = kcg_lit_int32(0);
  outC->_L34.trainData.m_brakeperct = kcg_lit_int32(0);
  outC->_L34.trainData.v_maxTrain = kcg_lit_int32(0);
  outC->_L34.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L34.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L34.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L34.adhesionFactor.valid = kcg_true;
  outC->_L34.adhesionFactor.systemTime = kcg_lit_int32(0);
  outC->_L34.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L34.iconRequest.valid = kcg_true;
  outC->_L34.iconRequest.system_clock = kcg_lit_int32(0);
  outC->_L34.iconRequest.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->_L34.iconRequest.DMI_m_icon_flashing_freq = kcg_lit_float32(0.0);
  outC->_L34.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L34.iconRequest.DMI_nid_icon_rank = kcg_lit_int32(0);
  outC->_L34.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L34.iconRequest.DMI_nid_area_rank = kcg_lit_int32(0);
  outC->_L34.iconRequest.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->lowerPart = kcg_true;
  outC->to_DMI.present = kcg_true;
  outC->to_DMI.dynamic.valid = kcg_true;
  outC->to_DMI.dynamic.system_clock = kcg_lit_int32(0);
  outC->to_DMI.dynamic.v_train = kcg_lit_int32(0);
  outC->to_DMI.dynamic.location_front_train = kcg_lit_int32(0);
  outC->to_DMI.dynamic.location_brake_target = kcg_lit_int32(0);
  outC->to_DMI.dynamic.v_target = kcg_lit_int32(0);
  outC->to_DMI.dynamic.v_permitted = kcg_lit_int32(0);
  outC->to_DMI.dynamic.v_release = kcg_lit_int32(0);
  outC->to_DMI.dynamic.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->to_DMI.dynamic.v_intervention = kcg_lit_int32(0);
  outC->to_DMI.dynamic.mode = M_MODE_Full_Supervision;
  outC->to_DMI.dynamic.level.level = M_LEVEL_Level_0;
  outC->to_DMI.dynamic.level.nid_stm = kcg_lit_int32(0);
  outC->to_DMI.dynamic.nid_c = kcg_lit_int32(0);
  outC->to_DMI.dynamic.nid_c_valid = kcg_true;
  outC->to_DMI.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->to_DMI.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->to_DMI.dynamic.location_LOA = kcg_lit_int32(0);
  outC->to_DMI.dynamic.v_LOA = kcg_lit_int32(0);
  outC->to_DMI.dynamic.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->to_DMI.dynamic.distance_KP_Balise = kcg_lit_int32(0);
  outC->to_DMI.dynamic.distance_to_TSA = kcg_lit_int32(0);
  outC->to_DMI.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->to_DMI.dynamic.distanceIndicationPoint = kcg_lit_int32(0);
  outC->to_DMI.menu_request.valid = kcg_true;
  outC->to_DMI.menu_request.system_clock = kcg_lit_int32(0);
  outC->to_DMI.menu_request.available_menu.Menu_button_start_of_mission =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_non_leading = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_exit_non_leading =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_maintain_shunting =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_driver_ID = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_train_data_view = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_override_EOA = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_system_version = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_luminance = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_train_integrity = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_isolation = kcg_true;
  outC->to_DMI.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_use_short_number =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_radio_network_ID =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_contact_last_RBC =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Button_switch_for_train_data =
    kcg_true;
  outC->to_DMI.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->to_DMI.menu_request.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->to_DMI.entry_request.valid = kcg_true;
  outC->to_DMI.entry_request.system_clock = kcg_lit_int32(0);
  outC->to_DMI.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->to_DMI.evc_coded_train_data.valid = kcg_true;
  outC->to_DMI.evc_coded_train_data.system_clock = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.trainID.number = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.trainID.dig1 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.trainID.dig2 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.trainID.dig3 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.trainID.dig4 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.trainID.dig5 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.trainLength.number = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.trainLength.dig1 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.trainLength.dig2 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.trainLength.dig3 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.trainLength.dig4 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.brakeModel.number = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.brakeModel.dig1 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.brakeModel.dig2 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.brakeModel.dig3 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.vmax.number = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.vmax.dig1 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.vmax.dig2 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.vmax.dig3 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->to_DMI.evc_coded_train_data.airTightSystem.number = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.airTightSystem.dig1 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.airTightSystem.dig2 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.airTightSystem.dig3 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.mLoadingGauge.number = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.mLoadingGauge.dig1 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.mLoadingGauge.dig2 = kcg_lit_int32(0);
  outC->to_DMI.evc_coded_train_data.mLoadingGauge.dig3 = kcg_lit_int32(0);
  outC->to_DMI.textMessage.valid = kcg_true;
  outC->to_DMI.textMessage.system_clock = kcg_lit_int32(0);
  outC->to_DMI.textMessage.textMessage_ID = kcg_lit_int32(0);
  outC->to_DMI.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->to_DMI.textMessage.l_text = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 255; idx15++) {
    outC->to_DMI.textMessage.x_text[idx15] = ' ';
  }
  outC->to_DMI.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->to_DMI.textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->to_DMI.trackDescription.valid = kcg_true;
  outC->to_DMI.trackDescription.system_clock = kcg_lit_int32(0);
  outC->to_DMI.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (idx16 = 0; idx16 < 32; idx16++) {
    outC->to_DMI.trackDescription.speedProfiles.speedProfiles[idx16].valid =
      kcg_true;
    outC->to_DMI.trackDescription.speedProfiles.speedProfiles[idx16].Loc_Abs =
      kcg_lit_int32(0);
    outC->to_DMI.trackDescription.speedProfiles.speedProfiles[idx16].Loc_LRBG =
      kcg_lit_int32(0);
    outC->to_DMI.trackDescription.speedProfiles.speedProfiles[idx16].MRS =
      kcg_lit_int32(0);
  }
  outC->to_DMI.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (idx17 = 0; idx17 < 32; idx17++) {
    outC->to_DMI.trackDescription.gradientProfiles.gradientProfiles[idx17].valid =
      kcg_true;
    outC->to_DMI.trackDescription.gradientProfiles.gradientProfiles[idx17].begin_section =
      kcg_lit_int32(0);
    outC->to_DMI.trackDescription.gradientProfiles.gradientProfiles[idx17].end_section =
      kcg_lit_int32(0);
    outC->to_DMI.trackDescription.gradientProfiles.gradientProfiles[idx17].gradient =
      kcg_lit_int32(0);
  }
  outC->to_DMI.trackDescription.trackConditions.nIter = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 32; idx18++) {
    outC->to_DMI.trackDescription.trackConditions.trackCondition[idx18].d_trackcond =
      kcg_lit_int32(0);
    outC->to_DMI.trackDescription.trackConditions.trackCondition[idx18].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->to_DMI.identifierRequest.valid = kcg_true;
  outC->to_DMI.identifierRequest.system_clock = kcg_lit_int32(0);
  outC->to_DMI.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->to_DMI.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->to_DMI.identifierRequest.l_name = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 255; idx19++) {
    outC->to_DMI.identifierRequest.x_name[idx19] = ' ';
  }
  outC->to_DMI.identifierRequest.l_extra = kcg_lit_int32(0);
  outC->to_DMI.systemVersion.valid = kcg_true;
  outC->to_DMI.systemVersion.system_clock = kcg_lit_int32(0);
  outC->to_DMI.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->to_DMI.displayControl.valid = kcg_true;
  outC->to_DMI.displayControl.cab_is_active = kcg_true;
  outC->to_DMI.displayControl.system_clock = kcg_lit_int32(0);
  outC->to_DMI.EVC_levelData.valid = kcg_true;
  outC->to_DMI.EVC_levelData.system_clock = kcg_lit_int32(0);
  outC->to_DMI.EVC_levelData.levelList.number = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 32; idx20++) {
    outC->to_DMI.EVC_levelData.levelList.levelList[idx20].level = M_LEVEL_Level_0;
    outC->to_DMI.EVC_levelData.levelList.levelList[idx20].nid_stm =
      kcg_lit_int32(0);
  }
  outC->to_DMI.EVC_radioNetData.valid = kcg_true;
  outC->to_DMI.EVC_radioNetData.system_clock = kcg_lit_int32(0);
  outC->to_DMI.EVC_radioNetData.nid_mn = kcg_lit_int32(0);
  outC->to_DMI.driverIdentifier.valid = kcg_true;
  outC->to_DMI.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 9; idx21++) {
    outC->to_DMI.driverIdentifier.driverIdentifier[idx21] = ' ';
  }
  outC->to_DMI.trainRunningNumber.valid = kcg_true;
  outC->to_DMI.trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->to_DMI.trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->to_DMI.trainData.valid = kcg_true;
  outC->to_DMI.trainData.systemTime = kcg_lit_int32(0);
  outC->to_DMI.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->to_DMI.trainData.l_train = kcg_lit_int32(0);
  outC->to_DMI.trainData.m_brakeperct = kcg_lit_int32(0);
  outC->to_DMI.trainData.v_maxTrain = kcg_lit_int32(0);
  outC->to_DMI.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->to_DMI.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->to_DMI.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->to_DMI.adhesionFactor.valid = kcg_true;
  outC->to_DMI.adhesionFactor.systemTime = kcg_lit_int32(0);
  outC->to_DMI.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->to_DMI.iconRequest.valid = kcg_true;
  outC->to_DMI.iconRequest.system_clock = kcg_lit_int32(0);
  outC->to_DMI.iconRequest.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->to_DMI.iconRequest.DMI_m_icon_flashing_freq = kcg_lit_float32(0.0);
  outC->to_DMI.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->to_DMI.iconRequest.DMI_nid_icon_rank = kcg_lit_int32(0);
  outC->to_DMI.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->to_DMI.iconRequest.DMI_nid_area_rank = kcg_lit_int32(0);
  outC->to_DMI.iconRequest.DMI_nid_icon_identifier = kcg_lit_int32(0);
  /* _L72=(manage_DMI_Output_Pkg::synchWithDMI#1)/ */
  synchWithDMI_init_manage_DMI_Output_Pkg(&outC->Context_synchWithDMI_1);
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(
    &outC->outputStatus,
    (dmiOutputs_T_manage_DMI_Output_Pkg *) &cOutputStatus_manage_DMI_Output_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void collectDMIPackets_reset_manage_DMI_Output_Pkg(
  outC_collectDMIPackets_manage_DMI_Output_Pkg *outC)
{
  /* _L72=(manage_DMI_Output_Pkg::synchWithDMI#1)/ */
  synchWithDMI_reset_manage_DMI_Output_Pkg(&outC->Context_synchWithDMI_1);
  kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(
    &outC->outputStatus,
    (dmiOutputs_T_manage_DMI_Output_Pkg *) &cOutputStatus_manage_DMI_Output_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** collectDMIPackets_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

