/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_EVC_to_DMI_Messages.h"

/* Messages::CAST_int_to_EVC_to_DMI/ */
void CAST_int_to_EVC_to_DMI_Messages(
  /* evc_to_dmi_int/ */
  EVC_to_DMI_Message_int_T_API_DMI_Pkg *evc_to_dmi_int,
  outC_CAST_int_to_EVC_to_DMI_Messages *outC)
{
  outC->_L77 = kcg_lit_int64(1);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->_L55, evc_to_dmi_int);
  outC->_L75 = outC->_L55[0];
  outC->_L76 = outC->_L75 == outC->_L77;
  kcg_copy_array_int64_24(&outC->_L56, (array_int64_24 *) &outC->_L55[1]);
  /* _L36=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Dynamic#1)/ */
  Write_int_to_DMI_Dynamic_DATA_Packets_EVC_to_DMI(
    &outC->_L56,
    &outC->Context_Write_int_to_DMI_Dynamic_1);
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L36,
    &outC->Context_Write_int_to_DMI_Dynamic_1.dmi_dynamic_ct);
  kcg_copy_array_int64_3(&outC->_L57, (array_int64_3 *) &outC->_L55[25]);
  /* _L37=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Menu_Request#1)/ */
  Write_int_to_DMI_Menu_Request_DATA_Packets_EVC_to_DMI(
    &outC->_L57,
    &outC->Context_Write_int_to_DMI_Menu_Request_1);
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L37,
    &outC->Context_Write_int_to_DMI_Menu_Request_1.dmi_menu_request_ct);
  kcg_copy_array_int64_3(&outC->_L58, (array_int64_3 *) &outC->_L55[28]);
  /* _L38=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Entry_Request#1)/ */
  Write_int_to_DMI_Entry_Request_DATA_Packets_EVC_to_DMI(
    &outC->_L58,
    &outC->Context_Write_int_to_DMI_Entry_Request_1);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L38,
    &outC->Context_Write_int_to_DMI_Entry_Request_1.dmi_entry_request_ct);
  kcg_copy_array_int64_9(&outC->_L59, (array_int64_9 *) &outC->_L55[31]);
  /* _L39=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Coded_Train_Data#1)/ */
  Write_int_to_DMI_EVC_Coded_Train_Data_DATA_Packets_EVC_to_DMI(
    &outC->_L59,
    &outC->Context_Write_int_to_DMI_EVC_Coded_Train_Data_1);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L39,
    &outC->Context_Write_int_to_DMI_EVC_Coded_Train_Data_1.dmi_evc_coded_train_data_ct);
  kcg_copy_DMI_Text_Message_int_array_T_DATA(
    &outC->_L60,
    (DMI_Text_Message_int_array_T_DATA *) &outC->_L55[40]);
  /* _L40=(DATA::Packets::EVC_to_DMI::Write_Int_to_DMI_Text_Message#1)/ */
  Write_Int_to_DMI_Text_Message_DATA_Packets_EVC_to_DMI(
    &outC->_L60,
    &outC->Context_Write_Int_to_DMI_Text_Message_1);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L40,
    &outC->Context_Write_Int_to_DMI_Text_Message_1.dmi_text_message_ct);
  kcg_copy_DMI_Track_Description_int_array_T(
    &outC->_L64,
    (DMI_Track_Description_int_array_T *) &outC->_L55[302]);
  /* _L41=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description#1)/ */
  Write_int_to_DMI_Track_Description_DATA_Packets_EVC_to_DMI(
    &outC->_L64,
    &outC->Context_Write_int_to_DMI_Track_Description_1);
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L41,
    &outC->Context_Write_int_to_DMI_Track_Description_1.dmi_track_description_ct);
  kcg_copy_array_int64_261(&outC->_L65, (array_int64_261 *) &outC->_L55[627]);
  /* _L42=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Identifier_Request#1)/ */
  Write_int_to_DMI_Identifier_Request_DATA_Packets_EVC_to_DMI(
    &outC->_L65,
    &outC->Context_Write_int_to_DMI_Identifier_Request_1);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L42,
    &outC->Context_Write_int_to_DMI_Identifier_Request_1.dmi_id_ct);
  kcg_copy_array_int64_3(&outC->_L66, (array_int64_3 *) &outC->_L55[888]);
  /* _L43=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_System_Version#1)/ */
  Write_int_to_DMI_System_Version_DATA_Packets_EVC_to_DMI(
    &outC->_L66,
    &outC->Context_Write_int_to_DMI_System_Version_1);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L43,
    &outC->Context_Write_int_to_DMI_System_Version_1.dmi_system_version_ct);
  kcg_copy_array_int64_3(&outC->_L67, (array_int64_3 *) &outC->_L55[891]);
  /* _L44=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Display_Control#1)/ */
  Write_int_to_DMI_Display_Control_DATA_Packets_EVC_to_DMI(
    &outC->_L67,
    &outC->Context_Write_int_to_DMI_Display_Control_1);
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L44,
    &outC->Context_Write_int_to_DMI_Display_Control_1.dmi_display_control_ct);
  kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(
    &outC->_L68,
    (DMI_EVC_Level_Data_int_array_T_DATA *) &outC->_L55[894]);
  /* _L45=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Level_Data#1)/ */
  Write_int_to_DMI_EVC_Level_Data_DATA_Packets_EVC_to_DMI(
    &outC->_L68,
    &outC->Context_Write_int_to_DMI_EVC_Level_Data_1);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L45,
    &outC->Context_Write_int_to_DMI_EVC_Level_Data_1.dmi_evc_level_data_ct);
  kcg_copy_array_int64_3(&outC->_L69, (array_int64_3 *) &outC->_L55[961]);
  /* _L46=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Radio_Net_Data#1)/ */
  Write_int_to_DMI_EVC_Radio_Net_Data_DATA_Packets_EVC_to_DMI(
    &outC->_L69,
    &outC->Context_Write_int_to_DMI_EVC_Radio_Net_Data_1);
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L46,
    &outC->Context_Write_int_to_DMI_EVC_Radio_Net_Data_1.dmi_evc_radio_net_data_ct);
  kcg_copy_array_int64_11(&outC->_L70, (array_int64_11 *) &outC->_L55[964]);
  /* _L51=(DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier#1)/ */
  Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
    &outC->_L70,
    &outC->Context_Write_int_to_DMI_Driver_Identifier_1);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L51,
    &outC->Context_Write_int_to_DMI_Driver_Identifier_1.dmi_driver_identifier_ct);
  kcg_copy_array_int64_3(&outC->_L71, (array_int64_3 *) &outC->_L55[975]);
  /* _L47=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Running_Number#1)/ */
  Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(
    &outC->_L71,
    &outC->Context_Write_int_to_DMI_Train_Running_Number_1);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L47,
    &outC->Context_Write_int_to_DMI_Train_Running_Number_1.dmi_train_running_number_ct);
  kcg_copy_array_int64_9(&outC->_L72, (array_int64_9 *) &outC->_L55[978]);
  /* _L48=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Data#1)/ */
  Write_int_to_DMI_Train_Data_DATA_Packets_Bothways(
    &outC->_L72,
    &outC->Context_Write_int_to_DMI_Train_Data_1);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L48,
    &outC->Context_Write_int_to_DMI_Train_Data_1.dmi_train_data_ct);
  kcg_copy_array_int64_3(&outC->_L73, (array_int64_3 *) &outC->_L55[987]);
  /* _L49=(DATA::Packets::Bothways::Write_int_to_DMI_Adhesion_Factor_Data#1)/ */
  Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways(
    &outC->_L73,
    &outC->Context_Write_int_to_DMI_Adhesion_Factor_Data_1);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L49,
    &outC->Context_Write_int_to_DMI_Adhesion_Factor_Data_1.dmi_adhesion_factor_data_ct);
  kcg_copy_array_int64_9(&outC->_L74, (array_int64_9 *) &outC->_L55[990]);
  /* _L50=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Icons#1)/ */
  Write_int_to_DMI_Icons_DATA_Packets_EVC_to_DMI(
    &outC->_L74,
    &outC->Context_Write_int_to_DMI_Icons_1);
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L50,
    &outC->Context_Write_int_to_DMI_Icons_1.dmi_icons_ct);
  outC->_L29.present = outC->_L76;
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.dynamic,
    &outC->_L36);
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.menu_request,
    &outC->_L37);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.entry_request,
    &outC->_L38);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.evc_coded_train_data,
    &outC->_L39);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.textMessage,
    &outC->_L40);
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.trackDescription,
    &outC->_L41);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.identifierRequest,
    &outC->_L42);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.systemVersion,
    &outC->_L43);
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.displayControl,
    &outC->_L44);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.EVC_levelData,
    &outC->_L45);
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.EVC_radioNetData,
    &outC->_L46);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L29.driverIdentifier,
    &outC->_L51);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L29.trainRunningNumber,
    &outC->_L47);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L29.trainData,
    &outC->_L48);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L29.adhesionFactor,
    &outC->_L49);
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L29.iconRequest,
    &outC->_L50);
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&outC->evc_to_dmi_ct, &outC->_L29);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_EVC_to_DMI_init_Messages(
  outC_CAST_int_to_EVC_to_DMI_Messages *outC)
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
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;

  outC->_L77 = kcg_lit_int64(0);
  outC->_L76 = kcg_true;
  outC->_L75 = kcg_lit_int64(0);
  for (idx = 0; idx < 9; idx++) {
    outC->_L74[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L73[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->_L72[idx2] = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->_L71[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 11; idx4++) {
    outC->_L70[idx4] = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L69[idx5] = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 67; idx6++) {
    outC->_L68[idx6] = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 3; idx7++) {
    outC->_L67[idx7] = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 3; idx8++) {
    outC->_L66[idx8] = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 261; idx9++) {
    outC->_L65[idx9] = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 325; idx10++) {
    outC->_L64[idx10] = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 262; idx11++) {
    outC->_L60[idx11] = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 9; idx12++) {
    outC->_L59[idx12] = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 3; idx13++) {
    outC->_L58[idx13] = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 3; idx14++) {
    outC->_L57[idx14] = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 24; idx15++) {
    outC->_L56[idx15] = kcg_lit_int64(0);
  }
  for (idx16 = 0; idx16 < 999; idx16++) {
    outC->_L55[idx16] = kcg_lit_int64(0);
  }
  outC->_L51.valid = kcg_true;
  outC->_L51.systemTime = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 9; idx17++) {
    outC->_L51.driverIdentifier[idx17] = ' ';
  }
  outC->_L50.valid = kcg_true;
  outC->_L50.system_clock = kcg_lit_int64(0);
  outC->_L50.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L50.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L50.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L50.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L50.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L50.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L50.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L49.valid = kcg_true;
  outC->_L49.systemTime = kcg_lit_int64(0);
  outC->_L49.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L48.valid = kcg_true;
  outC->_L48.systemTime = kcg_lit_int64(0);
  outC->_L48.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L48.l_train = kcg_lit_int64(0);
  outC->_L48.m_brakeperct = kcg_lit_int64(0);
  outC->_L48.v_maxTrain = kcg_lit_int64(0);
  outC->_L48.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L48.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L48.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L47.valid = kcg_true;
  outC->_L47.systemTime = kcg_lit_int64(0);
  outC->_L47.trainRunningNumber = kcg_lit_int64(0);
  outC->_L46.valid = kcg_true;
  outC->_L46.system_clock = kcg_lit_int64(0);
  outC->_L46.nid_mn = kcg_lit_int64(0);
  outC->_L45.valid = kcg_true;
  outC->_L45.system_clock = kcg_lit_int64(0);
  outC->_L45.levelList.number = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 32; idx18++) {
    outC->_L45.levelList.levelList[idx18].level = M_LEVEL_Level_0;
    outC->_L45.levelList.levelList[idx18].nid_stm = kcg_lit_int64(0);
  }
  outC->_L44.valid = kcg_true;
  outC->_L44.cab_is_active = kcg_true;
  outC->_L44.system_clock = kcg_lit_int64(0);
  outC->_L43.valid = kcg_true;
  outC->_L43.system_clock = kcg_lit_int64(0);
  outC->_L43.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L42.valid = kcg_true;
  outC->_L42.system_clock = kcg_lit_int64(0);
  outC->_L42.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L42.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L42.l_name = kcg_lit_int64(0);
  for (idx19 = 0; idx19 < 255; idx19++) {
    outC->_L42.x_name[idx19] = ' ';
  }
  outC->_L42.l_extra = kcg_lit_int64(0);
  outC->_L41.valid = kcg_true;
  outC->_L41.system_clock = kcg_lit_int64(0);
  outC->_L41.speedProfiles.profileChanged = kcg_true;
  for (idx20 = 0; idx20 < 32; idx20++) {
    outC->_L41.speedProfiles.speedProfiles[idx20].valid = kcg_true;
    outC->_L41.speedProfiles.speedProfiles[idx20].Loc_Abs = kcg_lit_int64(0);
    outC->_L41.speedProfiles.speedProfiles[idx20].Loc_LRBG = kcg_lit_int64(0);
    outC->_L41.speedProfiles.speedProfiles[idx20].MRS = kcg_lit_int64(0);
  }
  outC->_L41.gradientProfiles.profileChanged = kcg_true;
  for (idx21 = 0; idx21 < 32; idx21++) {
    outC->_L41.gradientProfiles.gradientProfiles[idx21].valid = kcg_true;
    outC->_L41.gradientProfiles.gradientProfiles[idx21].begin_section =
      kcg_lit_int64(0);
    outC->_L41.gradientProfiles.gradientProfiles[idx21].end_section =
      kcg_lit_int64(0);
    outC->_L41.gradientProfiles.gradientProfiles[idx21].gradient = kcg_lit_int64(0);
  }
  outC->_L41.trackConditions.nIter = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 32; idx22++) {
    outC->_L41.trackConditions.trackCondition[idx22].d_trackcond = kcg_lit_int64(0);
    outC->_L41.trackConditions.trackCondition[idx22].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L40.valid = kcg_true;
  outC->_L40.system_clock = kcg_lit_int64(0);
  outC->_L40.textMessage_ID = kcg_lit_int64(0);
  outC->_L40.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L40.l_text = kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 255; idx23++) {
    outC->_L40.x_text[idx23] = ' ';
  }
  outC->_L40.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L40.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L39.valid = kcg_true;
  outC->_L39.system_clock = kcg_lit_int64(0);
  outC->_L39.trainID.number = kcg_lit_int64(0);
  outC->_L39.trainID.dig1 = kcg_lit_int64(0);
  outC->_L39.trainID.dig2 = kcg_lit_int64(0);
  outC->_L39.trainID.dig3 = kcg_lit_int64(0);
  outC->_L39.trainID.dig4 = kcg_lit_int64(0);
  outC->_L39.trainID.dig5 = kcg_lit_int64(0);
  outC->_L39.trainLength.number = kcg_lit_int64(0);
  outC->_L39.trainLength.dig1 = kcg_lit_int64(0);
  outC->_L39.trainLength.dig2 = kcg_lit_int64(0);
  outC->_L39.trainLength.dig3 = kcg_lit_int64(0);
  outC->_L39.trainLength.dig4 = kcg_lit_int64(0);
  outC->_L39.brakeModel.number = kcg_lit_int64(0);
  outC->_L39.brakeModel.dig1 = kcg_lit_int64(0);
  outC->_L39.brakeModel.dig2 = kcg_lit_int64(0);
  outC->_L39.brakeModel.dig3 = kcg_lit_int64(0);
  outC->_L39.vmax.number = kcg_lit_int64(0);
  outC->_L39.vmax.dig1 = kcg_lit_int64(0);
  outC->_L39.vmax.dig2 = kcg_lit_int64(0);
  outC->_L39.vmax.dig3 = kcg_lit_int64(0);
  outC->_L39.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L39.airTightSystem.number = kcg_lit_int64(0);
  outC->_L39.airTightSystem.dig1 = kcg_lit_int64(0);
  outC->_L39.airTightSystem.dig2 = kcg_lit_int64(0);
  outC->_L39.airTightSystem.dig3 = kcg_lit_int64(0);
  outC->_L39.mLoadingGauge.number = kcg_lit_int64(0);
  outC->_L39.mLoadingGauge.dig1 = kcg_lit_int64(0);
  outC->_L39.mLoadingGauge.dig2 = kcg_lit_int64(0);
  outC->_L39.mLoadingGauge.dig3 = kcg_lit_int64(0);
  outC->_L38.valid = kcg_true;
  outC->_L38.system_clock = kcg_lit_int64(0);
  outC->_L38.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L37.valid = kcg_true;
  outC->_L37.system_clock = kcg_lit_int64(0);
  outC->_L37.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L37.available_menu.Menu_button_shunting = kcg_true;
  outC->_L37.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L37.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L37.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L37.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L37.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L37.available_menu.Menu_button_train_running_number = kcg_true;
  outC->_L37.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L37.available_menu.Menu_button_train_data_modification = kcg_true;
  outC->_L37.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L37.available_menu.Menu_button_staff_responsible_data = kcg_true;
  outC->_L37.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L37.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L37.available_menu.Menu_button_override_route_suitability = kcg_true;
  outC->_L37.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L37.available_menu.Menu_button_system_version = kcg_true;
  outC->_L37.available_menu.Menu_button_volume = kcg_true;
  outC->_L37.available_menu.Menu_button_luminance = kcg_true;
  outC->_L37.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L37.available_menu.Menu_button_isolation = kcg_true;
  outC->_L37.available_menu.Show_hourglass = kcg_true;
  outC->_L37.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L37.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L37.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L37.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L37.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L37.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L37.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L37.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L36.valid = kcg_true;
  outC->_L36.system_clock = kcg_lit_int64(0);
  outC->_L36.v_train = kcg_lit_int64(0);
  outC->_L36.location_front_train = kcg_lit_int64(0);
  outC->_L36.location_brake_target = kcg_lit_int64(0);
  outC->_L36.v_target = kcg_lit_int64(0);
  outC->_L36.v_permitted = kcg_lit_int64(0);
  outC->_L36.v_release = kcg_lit_int64(0);
  outC->_L36.location_brake_curve_starting_point = kcg_lit_int64(0);
  outC->_L36.v_intervention = kcg_lit_int64(0);
  outC->_L36.mode = M_MODE_Full_Supervision;
  outC->_L36.level.level = M_LEVEL_Level_0;
  outC->_L36.level.nid_stm = kcg_lit_int64(0);
  outC->_L36.nid_c = kcg_lit_int64(0);
  outC->_L36.nid_c_valid = kcg_true;
  outC->_L36.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L36.sup_status = CSM_DMI_Types_Pkg;
  outC->_L36.location_LOA = kcg_lit_int64(0);
  outC->_L36.v_LOA = kcg_lit_int64(0);
  outC->_L36.location_KP_Balise_Track = kcg_lit_int64(0);
  outC->_L36.distance_KP_Balise = kcg_lit_int64(0);
  outC->_L36.distance_to_TSA = kcg_lit_int64(0);
  outC->_L36.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L36.distanceIndicationPoint = kcg_lit_int64(0);
  outC->_L29.present = kcg_true;
  outC->_L29.dynamic.valid = kcg_true;
  outC->_L29.dynamic.system_clock = kcg_lit_int64(0);
  outC->_L29.dynamic.v_train = kcg_lit_int64(0);
  outC->_L29.dynamic.location_front_train = kcg_lit_int64(0);
  outC->_L29.dynamic.location_brake_target = kcg_lit_int64(0);
  outC->_L29.dynamic.v_target = kcg_lit_int64(0);
  outC->_L29.dynamic.v_permitted = kcg_lit_int64(0);
  outC->_L29.dynamic.v_release = kcg_lit_int64(0);
  outC->_L29.dynamic.location_brake_curve_starting_point = kcg_lit_int64(0);
  outC->_L29.dynamic.v_intervention = kcg_lit_int64(0);
  outC->_L29.dynamic.mode = M_MODE_Full_Supervision;
  outC->_L29.dynamic.level.level = M_LEVEL_Level_0;
  outC->_L29.dynamic.level.nid_stm = kcg_lit_int64(0);
  outC->_L29.dynamic.nid_c = kcg_lit_int64(0);
  outC->_L29.dynamic.nid_c_valid = kcg_true;
  outC->_L29.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L29.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->_L29.dynamic.location_LOA = kcg_lit_int64(0);
  outC->_L29.dynamic.v_LOA = kcg_lit_int64(0);
  outC->_L29.dynamic.location_KP_Balise_Track = kcg_lit_int64(0);
  outC->_L29.dynamic.distance_KP_Balise = kcg_lit_int64(0);
  outC->_L29.dynamic.distance_to_TSA = kcg_lit_int64(0);
  outC->_L29.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->_L29.dynamic.distanceIndicationPoint = kcg_lit_int64(0);
  outC->_L29.menu_request.valid = kcg_true;
  outC->_L29.menu_request.system_clock = kcg_lit_int64(0);
  outC->_L29.menu_request.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_language_selection =
    kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_system_version = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_luminance = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_isolation = kcg_true;
  outC->_L29.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L29.menu_request.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L29.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L29.menu_request.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L29.entry_request.valid = kcg_true;
  outC->_L29.entry_request.system_clock = kcg_lit_int64(0);
  outC->_L29.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L29.evc_coded_train_data.valid = kcg_true;
  outC->_L29.evc_coded_train_data.system_clock = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.trainID.number = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.trainID.dig1 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.trainID.dig2 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.trainID.dig3 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.trainID.dig4 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.trainID.dig5 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.trainLength.number = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.trainLength.dig1 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.trainLength.dig2 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.trainLength.dig3 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.trainLength.dig4 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.brakeModel.number = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.brakeModel.dig1 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.brakeModel.dig2 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.brakeModel.dig3 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.vmax.number = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.vmax.dig1 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.vmax.dig2 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.vmax.dig3 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L29.evc_coded_train_data.airTightSystem.number = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.airTightSystem.dig1 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.airTightSystem.dig2 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.airTightSystem.dig3 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.mLoadingGauge.number = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.mLoadingGauge.dig1 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.mLoadingGauge.dig2 = kcg_lit_int64(0);
  outC->_L29.evc_coded_train_data.mLoadingGauge.dig3 = kcg_lit_int64(0);
  outC->_L29.textMessage.valid = kcg_true;
  outC->_L29.textMessage.system_clock = kcg_lit_int64(0);
  outC->_L29.textMessage.textMessage_ID = kcg_lit_int64(0);
  outC->_L29.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L29.textMessage.l_text = kcg_lit_int64(0);
  for (idx24 = 0; idx24 < 255; idx24++) {
    outC->_L29.textMessage.x_text[idx24] = ' ';
  }
  outC->_L29.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L29.textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L29.trackDescription.valid = kcg_true;
  outC->_L29.trackDescription.system_clock = kcg_lit_int64(0);
  outC->_L29.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (idx25 = 0; idx25 < 32; idx25++) {
    outC->_L29.trackDescription.speedProfiles.speedProfiles[idx25].valid = kcg_true;
    outC->_L29.trackDescription.speedProfiles.speedProfiles[idx25].Loc_Abs =
      kcg_lit_int64(0);
    outC->_L29.trackDescription.speedProfiles.speedProfiles[idx25].Loc_LRBG =
      kcg_lit_int64(0);
    outC->_L29.trackDescription.speedProfiles.speedProfiles[idx25].MRS =
      kcg_lit_int64(0);
  }
  outC->_L29.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (idx26 = 0; idx26 < 32; idx26++) {
    outC->_L29.trackDescription.gradientProfiles.gradientProfiles[idx26].valid =
      kcg_true;
    outC->_L29.trackDescription.gradientProfiles.gradientProfiles[idx26].begin_section =
      kcg_lit_int64(0);
    outC->_L29.trackDescription.gradientProfiles.gradientProfiles[idx26].end_section =
      kcg_lit_int64(0);
    outC->_L29.trackDescription.gradientProfiles.gradientProfiles[idx26].gradient =
      kcg_lit_int64(0);
  }
  outC->_L29.trackDescription.trackConditions.nIter = kcg_lit_int64(0);
  for (idx27 = 0; idx27 < 32; idx27++) {
    outC->_L29.trackDescription.trackConditions.trackCondition[idx27].d_trackcond =
      kcg_lit_int64(0);
    outC->_L29.trackDescription.trackConditions.trackCondition[idx27].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L29.identifierRequest.valid = kcg_true;
  outC->_L29.identifierRequest.system_clock = kcg_lit_int64(0);
  outC->_L29.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.identifierRequest.l_name = kcg_lit_int64(0);
  for (idx28 = 0; idx28 < 255; idx28++) {
    outC->_L29.identifierRequest.x_name[idx28] = ' ';
  }
  outC->_L29.identifierRequest.l_extra = kcg_lit_int64(0);
  outC->_L29.systemVersion.valid = kcg_true;
  outC->_L29.systemVersion.system_clock = kcg_lit_int64(0);
  outC->_L29.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.displayControl.valid = kcg_true;
  outC->_L29.displayControl.cab_is_active = kcg_true;
  outC->_L29.displayControl.system_clock = kcg_lit_int64(0);
  outC->_L29.EVC_levelData.valid = kcg_true;
  outC->_L29.EVC_levelData.system_clock = kcg_lit_int64(0);
  outC->_L29.EVC_levelData.levelList.number = kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 32; idx29++) {
    outC->_L29.EVC_levelData.levelList.levelList[idx29].level = M_LEVEL_Level_0;
    outC->_L29.EVC_levelData.levelList.levelList[idx29].nid_stm = kcg_lit_int64(0);
  }
  outC->_L29.EVC_radioNetData.valid = kcg_true;
  outC->_L29.EVC_radioNetData.system_clock = kcg_lit_int64(0);
  outC->_L29.EVC_radioNetData.nid_mn = kcg_lit_int64(0);
  outC->_L29.driverIdentifier.valid = kcg_true;
  outC->_L29.driverIdentifier.systemTime = kcg_lit_int64(0);
  for (idx30 = 0; idx30 < 9; idx30++) {
    outC->_L29.driverIdentifier.driverIdentifier[idx30] = ' ';
  }
  outC->_L29.trainRunningNumber.valid = kcg_true;
  outC->_L29.trainRunningNumber.systemTime = kcg_lit_int64(0);
  outC->_L29.trainRunningNumber.trainRunningNumber = kcg_lit_int64(0);
  outC->_L29.trainData.valid = kcg_true;
  outC->_L29.trainData.systemTime = kcg_lit_int64(0);
  outC->_L29.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L29.trainData.l_train = kcg_lit_int64(0);
  outC->_L29.trainData.m_brakeperct = kcg_lit_int64(0);
  outC->_L29.trainData.v_maxTrain = kcg_lit_int64(0);
  outC->_L29.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L29.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L29.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L29.adhesionFactor.valid = kcg_true;
  outC->_L29.adhesionFactor.systemTime = kcg_lit_int64(0);
  outC->_L29.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L29.iconRequest.valid = kcg_true;
  outC->_L29.iconRequest.system_clock = kcg_lit_int64(0);
  outC->_L29.iconRequest.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->_L29.iconRequest.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->_L29.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L29.iconRequest.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->_L29.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L29.iconRequest.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->_L29.iconRequest.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.present = kcg_true;
  outC->evc_to_dmi_ct.dynamic.valid = kcg_true;
  outC->evc_to_dmi_ct.dynamic.system_clock = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.v_train = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.location_front_train = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.location_brake_target = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.v_target = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.v_permitted = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.v_release = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.location_brake_curve_starting_point =
    kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.v_intervention = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.mode = M_MODE_Full_Supervision;
  outC->evc_to_dmi_ct.dynamic.level.level = M_LEVEL_Level_0;
  outC->evc_to_dmi_ct.dynamic.level.nid_stm = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.nid_c = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.nid_c_valid = kcg_true;
  outC->evc_to_dmi_ct.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.dynamic.location_LOA = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.v_LOA = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.location_KP_Balise_Track = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.distance_KP_Balise = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.distance_to_TSA = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->evc_to_dmi_ct.dynamic.distanceIndicationPoint = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.menu_request.valid = kcg_true;
  outC->evc_to_dmi_ct.menu_request.system_clock = kcg_lit_int64(0);
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
  outC->evc_to_dmi_ct.entry_request.system_clock = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.evc_coded_train_data.valid = kcg_true;
  outC->evc_to_dmi_ct.evc_coded_train_data.system_clock = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.number = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.dig1 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.dig2 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.dig3 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.dig4 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainID.dig5 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainLength.number = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainLength.dig1 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainLength.dig2 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainLength.dig3 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.trainLength.dig4 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.brakeModel.number = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.brakeModel.dig1 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.brakeModel.dig2 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.brakeModel.dig3 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.vmax.number = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.vmax.dig1 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.vmax.dig2 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.vmax.dig3 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->evc_to_dmi_ct.evc_coded_train_data.airTightSystem.number =
    kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.airTightSystem.dig1 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.airTightSystem.dig2 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.airTightSystem.dig3 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.mLoadingGauge.number = kcg_lit_int64(
      0);
  outC->evc_to_dmi_ct.evc_coded_train_data.mLoadingGauge.dig1 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.mLoadingGauge.dig2 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.evc_coded_train_data.mLoadingGauge.dig3 = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.textMessage.valid = kcg_true;
  outC->evc_to_dmi_ct.textMessage.system_clock = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.textMessage.textMessage_ID = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.textMessage.l_text = kcg_lit_int64(0);
  for (idx31 = 0; idx31 < 255; idx31++) {
    outC->evc_to_dmi_ct.textMessage.x_text[idx31] = ' ';
  }
  outC->evc_to_dmi_ct.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->evc_to_dmi_ct.textMessage.q_textConfirm =
    Q_TEXTCONFIRM_No_confirmation_required;
  outC->evc_to_dmi_ct.trackDescription.valid = kcg_true;
  outC->evc_to_dmi_ct.trackDescription.system_clock = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (idx32 = 0; idx32 < 32; idx32++) {
    outC->evc_to_dmi_ct.trackDescription.speedProfiles.speedProfiles[idx32].valid =
      kcg_true;
    outC->evc_to_dmi_ct.trackDescription.speedProfiles.speedProfiles[idx32].Loc_Abs =
      kcg_lit_int64(0);
    outC->evc_to_dmi_ct.trackDescription.speedProfiles.speedProfiles[idx32].Loc_LRBG =
      kcg_lit_int64(0);
    outC->evc_to_dmi_ct.trackDescription.speedProfiles.speedProfiles[idx32].MRS =
      kcg_lit_int64(0);
  }
  outC->evc_to_dmi_ct.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (idx33 = 0; idx33 < 32; idx33++) {
    outC->evc_to_dmi_ct.trackDescription.gradientProfiles.gradientProfiles[idx33].valid =
      kcg_true;
    outC->evc_to_dmi_ct.trackDescription.gradientProfiles.gradientProfiles[idx33].begin_section =
      kcg_lit_int64(0);
    outC->evc_to_dmi_ct.trackDescription.gradientProfiles.gradientProfiles[idx33].end_section =
      kcg_lit_int64(0);
    outC->evc_to_dmi_ct.trackDescription.gradientProfiles.gradientProfiles[idx33].gradient =
      kcg_lit_int64(0);
  }
  outC->evc_to_dmi_ct.trackDescription.trackConditions.nIter = kcg_lit_int64(0);
  for (idx34 = 0; idx34 < 32; idx34++) {
    outC->evc_to_dmi_ct.trackDescription.trackConditions.trackCondition[idx34].d_trackcond =
      kcg_lit_int64(0);
    outC->evc_to_dmi_ct.trackDescription.trackConditions.trackCondition[idx34].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->evc_to_dmi_ct.identifierRequest.valid = kcg_true;
  outC->evc_to_dmi_ct.identifierRequest.system_clock = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->evc_to_dmi_ct.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->evc_to_dmi_ct.identifierRequest.l_name = kcg_lit_int64(0);
  for (idx35 = 0; idx35 < 255; idx35++) {
    outC->evc_to_dmi_ct.identifierRequest.x_name[idx35] = ' ';
  }
  outC->evc_to_dmi_ct.identifierRequest.l_extra = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.systemVersion.valid = kcg_true;
  outC->evc_to_dmi_ct.systemVersion.system_clock = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->evc_to_dmi_ct.displayControl.valid = kcg_true;
  outC->evc_to_dmi_ct.displayControl.cab_is_active = kcg_true;
  outC->evc_to_dmi_ct.displayControl.system_clock = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.EVC_levelData.valid = kcg_true;
  outC->evc_to_dmi_ct.EVC_levelData.system_clock = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.EVC_levelData.levelList.number = kcg_lit_int64(0);
  for (idx36 = 0; idx36 < 32; idx36++) {
    outC->evc_to_dmi_ct.EVC_levelData.levelList.levelList[idx36].level =
      M_LEVEL_Level_0;
    outC->evc_to_dmi_ct.EVC_levelData.levelList.levelList[idx36].nid_stm =
      kcg_lit_int64(0);
  }
  outC->evc_to_dmi_ct.EVC_radioNetData.valid = kcg_true;
  outC->evc_to_dmi_ct.EVC_radioNetData.system_clock = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.EVC_radioNetData.nid_mn = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.driverIdentifier.valid = kcg_true;
  outC->evc_to_dmi_ct.driverIdentifier.systemTime = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 9; idx37++) {
    outC->evc_to_dmi_ct.driverIdentifier.driverIdentifier[idx37] = ' ';
  }
  outC->evc_to_dmi_ct.trainRunningNumber.valid = kcg_true;
  outC->evc_to_dmi_ct.trainRunningNumber.systemTime = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.trainRunningNumber.trainRunningNumber = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.trainData.valid = kcg_true;
  outC->evc_to_dmi_ct.trainData.systemTime = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->evc_to_dmi_ct.trainData.l_train = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.trainData.m_brakeperct = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.trainData.v_maxTrain = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->evc_to_dmi_ct.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->evc_to_dmi_ct.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->evc_to_dmi_ct.adhesionFactor.valid = kcg_true;
  outC->evc_to_dmi_ct.adhesionFactor.systemTime = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->evc_to_dmi_ct.iconRequest.valid = kcg_true;
  outC->evc_to_dmi_ct.iconRequest.system_clock = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.iconRequest.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.iconRequest.DMI_m_icon_flashing_freq = kcg_lit_float64(0.0);
  outC->evc_to_dmi_ct.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.iconRequest.DMI_nid_icon_rank = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->evc_to_dmi_ct.iconRequest.DMI_nid_area_rank = kcg_lit_int64(0);
  outC->evc_to_dmi_ct.iconRequest.DMI_nid_icon_identifier = kcg_lit_int64(0);
  /* _L50=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Icons#1)/ */
  Write_int_to_DMI_Icons_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Icons_1);
  /* _L49=(DATA::Packets::Bothways::Write_int_to_DMI_Adhesion_Factor_Data#1)/ */
  Write_int_to_DMI_Adhesion_Factor_Data_init_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Adhesion_Factor_Data_1);
  /* _L48=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Data#1)/ */
  Write_int_to_DMI_Train_Data_init_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Train_Data_1);
  /* _L47=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Running_Number#1)/ */
  Write_int_to_DMI_Train_Running_Number_init_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Train_Running_Number_1);
  /* _L51=(DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier#1)/ */
  Write_int_to_DMI_Driver_Identifier_init_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Driver_Identifier_1);
  /* _L46=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Radio_Net_Data#1)/ */
  Write_int_to_DMI_EVC_Radio_Net_Data_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_EVC_Radio_Net_Data_1);
  /* _L45=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Level_Data#1)/ */
  Write_int_to_DMI_EVC_Level_Data_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_EVC_Level_Data_1);
  /* _L44=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Display_Control#1)/ */
  Write_int_to_DMI_Display_Control_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Display_Control_1);
  /* _L43=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_System_Version#1)/ */
  Write_int_to_DMI_System_Version_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_System_Version_1);
  /* _L42=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Identifier_Request#1)/ */
  Write_int_to_DMI_Identifier_Request_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Identifier_Request_1);
  /* _L41=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description#1)/ */
  Write_int_to_DMI_Track_Description_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Track_Description_1);
  /* _L40=(DATA::Packets::EVC_to_DMI::Write_Int_to_DMI_Text_Message#1)/ */
  Write_Int_to_DMI_Text_Message_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_Int_to_DMI_Text_Message_1);
  /* _L39=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Coded_Train_Data#1)/ */
  Write_int_to_DMI_EVC_Coded_Train_Data_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_EVC_Coded_Train_Data_1);
  /* _L38=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Entry_Request#1)/ */
  Write_int_to_DMI_Entry_Request_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Entry_Request_1);
  /* _L37=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Menu_Request#1)/ */
  Write_int_to_DMI_Menu_Request_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Menu_Request_1);
  /* _L36=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Dynamic#1)/ */
  Write_int_to_DMI_Dynamic_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Dynamic_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_EVC_to_DMI_reset_Messages(
  outC_CAST_int_to_EVC_to_DMI_Messages *outC)
{
  /* _L50=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Icons#1)/ */
  Write_int_to_DMI_Icons_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Icons_1);
  /* _L49=(DATA::Packets::Bothways::Write_int_to_DMI_Adhesion_Factor_Data#1)/ */
  Write_int_to_DMI_Adhesion_Factor_Data_reset_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Adhesion_Factor_Data_1);
  /* _L48=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Data#1)/ */
  Write_int_to_DMI_Train_Data_reset_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Train_Data_1);
  /* _L47=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Running_Number#1)/ */
  Write_int_to_DMI_Train_Running_Number_reset_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Train_Running_Number_1);
  /* _L51=(DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier#1)/ */
  Write_int_to_DMI_Driver_Identifier_reset_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Driver_Identifier_1);
  /* _L46=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Radio_Net_Data#1)/ */
  Write_int_to_DMI_EVC_Radio_Net_Data_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_EVC_Radio_Net_Data_1);
  /* _L45=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Level_Data#1)/ */
  Write_int_to_DMI_EVC_Level_Data_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_EVC_Level_Data_1);
  /* _L44=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Display_Control#1)/ */
  Write_int_to_DMI_Display_Control_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Display_Control_1);
  /* _L43=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_System_Version#1)/ */
  Write_int_to_DMI_System_Version_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_System_Version_1);
  /* _L42=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Identifier_Request#1)/ */
  Write_int_to_DMI_Identifier_Request_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Identifier_Request_1);
  /* _L41=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Track_Description#1)/ */
  Write_int_to_DMI_Track_Description_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Track_Description_1);
  /* _L40=(DATA::Packets::EVC_to_DMI::Write_Int_to_DMI_Text_Message#1)/ */
  Write_Int_to_DMI_Text_Message_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_Int_to_DMI_Text_Message_1);
  /* _L39=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_EVC_Coded_Train_Data#1)/ */
  Write_int_to_DMI_EVC_Coded_Train_Data_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_EVC_Coded_Train_Data_1);
  /* _L38=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Entry_Request#1)/ */
  Write_int_to_DMI_Entry_Request_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Entry_Request_1);
  /* _L37=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Menu_Request#1)/ */
  Write_int_to_DMI_Menu_Request_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Menu_Request_1);
  /* _L36=(DATA::Packets::EVC_to_DMI::Write_int_to_DMI_Dynamic#1)/ */
  Write_int_to_DMI_Dynamic_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_int_to_DMI_Dynamic_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_EVC_to_DMI_Messages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

