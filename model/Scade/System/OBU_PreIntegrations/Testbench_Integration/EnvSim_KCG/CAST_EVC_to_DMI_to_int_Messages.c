/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_EVC_to_DMI_to_int_Messages.h"

/* Messages::CAST_EVC_to_DMI_to_int/ */
void CAST_EVC_to_DMI_to_int_Messages(
  /* evc_to_dmi_ct/ */
  EVC_to_DMI_Message_T_API_DMI_Pkg *evc_to_dmi_ct,
  outC_CAST_EVC_to_DMI_to_int_Messages *outC)
{
  static array_int32_990 tmp;
  static array_int32_987 tmp1;
  static array_int32_978 tmp2;
  static array_int32_975 tmp3;
  static array_int32_964 tmp4;
  static array_int32_961 tmp5;
  static array_int32_894 tmp6;
  static array_int32_891 tmp7;
  static array_int32_888 tmp8;
  static array_int32_627 tmp9;
  static array_int32_302 tmp10;
  static array_int32_40 tmp11;
  static array_int32_31 tmp12;
  static array_int32_28 tmp13;
  static array_int32_25 tmp14;

  outC->_L55 = kcg_lit_int32(0);
  outC->_L54 = kcg_lit_int32(1);
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&outC->_L1, evc_to_dmi_ct);
  outC->_L14 = outC->_L1.present;
  /* _L53= */
  if (outC->_L14) {
    outC->_L53 = outC->_L54;
  }
  else {
    outC->_L53 = outC->_L55;
  }
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L2,
    &outC->_L1.driverIdentifier);
  /* _L51=(DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int#2)/ */
  Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(
    &outC->_L2,
    &outC->Context_Write_DMI_Driver_Identifier_to_int_2);
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    &outC->_L51,
    &outC->Context_Write_DMI_Driver_Identifier_to_int_2.dmi_driver_identifier_int);
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L32,
    &outC->_L1.iconRequest);
  /* _L50=(DATA::Packets::EVC_to_DMI::Write_DMI_Icons_to_int#1)/ */
  Write_DMI_Icons_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L32,
    &outC->Context_Write_DMI_Icons_to_int_1);
  kcg_copy_DMI_Icons_int_array_T_DATA(
    &outC->_L50,
    &outC->Context_Write_DMI_Icons_to_int_1.dmi_icons_int);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L33,
    &outC->_L1.adhesionFactor);
  /* _L49=(DATA::Packets::Bothways::Write_DMI_Adhesion_Factor_Data_to_int#2)/ */
  Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways(
    &outC->_L33,
    &outC->Context_Write_DMI_Adhesion_Factor_Data_to_int_2);
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(
    &outC->_L49,
    &outC->Context_Write_DMI_Adhesion_Factor_Data_to_int_2.dmi_adhesion_factor_data_int);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L34,
    &outC->_L1.trainData);
  /* _L48=(DATA::Packets::Bothways::Write_DMI_Train_Data_to_int#2)/ */
  Write_DMI_Train_Data_to_int_DATA_Packets_Bothways(
    &outC->_L34,
    &outC->Context_Write_DMI_Train_Data_to_int_2);
  kcg_copy_DMI_Train_Data_int_array_T_DATA(
    &outC->_L48,
    &outC->Context_Write_DMI_Train_Data_to_int_2.dmi_train_data_int);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L35,
    &outC->_L1.trainRunningNumber);
  /* _L47=(DATA::Packets::Bothways::Write_DMI_Train_Running_Number_to_int#2)/ */
  Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways(
    &outC->_L35,
    &outC->Context_Write_DMI_Train_Running_Number_to_int_2);
  kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(
    &outC->_L47,
    &outC->Context_Write_DMI_Train_Running_Number_to_int_2.dmi_train_running_number_int);
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L3,
    &outC->_L1.EVC_radioNetData);
  /* _L46=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Radio_Net_Data_to_int#1)/ */
  Write_DMI_EVC_Radio_Net_Data_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L3,
    &outC->Context_Write_DMI_EVC_Radio_Net_Data_to_int_1);
  kcg_copy_DMI_EVC_Radio_Net_Data_int_array_T_DATA(
    &outC->_L46,
    &outC->Context_Write_DMI_EVC_Radio_Net_Data_to_int_1.dmi_evc_radio_net_data_int);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L4,
    &outC->_L1.EVC_levelData);
  /* _L45=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Level_Data_to_int#1)/ */
  Write_DMI_EVC_Level_Data_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L4,
    &outC->Context_Write_DMI_EVC_Level_Data_to_int_1);
  kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(
    &outC->_L45,
    &outC->Context_Write_DMI_EVC_Level_Data_to_int_1.dmi_evc_level_data_int);
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L5,
    &outC->_L1.displayControl);
  /* _L44=(DATA::Packets::EVC_to_DMI::Write_DMI_Display_Control_to_int#1)/ */
  Write_DMI_Display_Control_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L5,
    &outC->Context_Write_DMI_Display_Control_to_int_1);
  kcg_copy_DMI_Display_Control_int_array_T_DATA(
    &outC->_L44,
    &outC->Context_Write_DMI_Display_Control_to_int_1.dmi_display_control_int);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L6,
    &outC->_L1.systemVersion);
  /* _L43=(DATA::Packets::EVC_to_DMI::Write_DMI_System_Version_to_int#1)/ */
  Write_DMI_System_Version_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L6,
    &outC->Context_Write_DMI_System_Version_to_int_1);
  kcg_copy_DMI_System_Version_int_array_T_DATA(
    &outC->_L43,
    &outC->Context_Write_DMI_System_Version_to_int_1.dmi_system_version_int);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L7,
    &outC->_L1.identifierRequest);
  /* _L42=(DATA::Packets::EVC_to_DMI::Write_DMI_Identifier_Request_to_int#1)/ */
  Write_DMI_Identifier_Request_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L7,
    &outC->Context_Write_DMI_Identifier_Request_to_int_1);
  kcg_copy_DMI_Identifier_Request_int_array_T_DATA(
    &outC->_L42,
    &outC->Context_Write_DMI_Identifier_Request_to_int_1.dmi_id_int);
  kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L8,
    &outC->_L1.trackDescription);
  /* _L41=(DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int#1)/ */
  Write_DMI_Track_Description_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L8,
    &outC->Context_Write_DMI_Track_Description_to_int_1);
  kcg_copy_DMI_Track_Description_int_array_T(
    &outC->_L41,
    &outC->Context_Write_DMI_Track_Description_to_int_1.dmi_track_description_int);
  kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L9,
    &outC->_L1.textMessage);
  /* _L40=(DATA::Packets::EVC_to_DMI::Write_DMI_Text_Message_to_int#1)/ */
  Write_DMI_Text_Message_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L9,
    &outC->Context_Write_DMI_Text_Message_to_int_1);
  kcg_copy_DMI_Text_Message_int_array_T_DATA(
    &outC->_L40,
    &outC->Context_Write_DMI_Text_Message_to_int_1.dmi_text_message_int);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L10,
    &outC->_L1.evc_coded_train_data);
  /* _L39=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Coded_Train_Data_to_int#1)/ */
  Write_DMI_EVC_Coded_Train_Data_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L10,
    &outC->Context_Write_DMI_EVC_Coded_Train_Data_to_int_1);
  kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(
    &outC->_L39,
    &outC->Context_Write_DMI_EVC_Coded_Train_Data_to_int_1.dmi_evc_coded_train_data_int);
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L11,
    &outC->_L1.entry_request);
  /* _L38=(DATA::Packets::EVC_to_DMI::Write_DMI_Entry_Request_to_int#1)/ */
  Write_DMI_Entry_Request_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L11,
    &outC->Context_Write_DMI_Entry_Request_to_int_1);
  kcg_copy_DMI_Entry_Request_int_array_T_DATA(
    &outC->_L38,
    &outC->Context_Write_DMI_Entry_Request_to_int_1.dmi_entry_request_int);
  kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L12,
    &outC->_L1.menu_request);
  /* _L37=(DATA::Packets::EVC_to_DMI::Write_DMI_Menu_Request_to_int#1)/ */
  Write_DMI_Menu_Request_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L12,
    &outC->Context_Write_DMI_Menu_Request_to_int_1);
  kcg_copy_DMI_Menu_Request_int_array_T_DATA(
    &outC->_L37,
    &outC->Context_Write_DMI_Menu_Request_to_int_1.dmi_menu_request_int);
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->_L13,
    &outC->_L1.dynamic);
  /* _L36=(DATA::Packets::EVC_to_DMI::Write_DMI_Dynamic_to_int#1)/ */
  Write_DMI_Dynamic_to_int_DATA_Packets_EVC_to_DMI(
    &outC->_L13,
    &outC->Context_Write_DMI_Dynamic_to_int_1);
  kcg_copy_DMI_Dynamic_int_array_T_DATA(
    &outC->_L36,
    &outC->Context_Write_DMI_Dynamic_to_int_1.dmi_dynamic_int);
  outC->_L16[0] = outC->_L53;
  tmp14[0] = outC->_L16[0];
  kcg_copy_DMI_Dynamic_int_array_T_DATA(&tmp14[1], &outC->_L36);
  kcg_copy_array_int32_25(&tmp13[0], &tmp14);
  kcg_copy_DMI_Menu_Request_int_array_T_DATA(&tmp13[25], &outC->_L37);
  kcg_copy_array_int32_28(&tmp12[0], &tmp13);
  kcg_copy_DMI_Entry_Request_int_array_T_DATA(&tmp12[28], &outC->_L38);
  kcg_copy_array_int32_31(&tmp11[0], &tmp12);
  kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA(&tmp11[31], &outC->_L39);
  kcg_copy_array_int32_40(&tmp10[0], &tmp11);
  kcg_copy_DMI_Text_Message_int_array_T_DATA(&tmp10[40], &outC->_L40);
  kcg_copy_array_int32_302(&tmp9[0], &tmp10);
  kcg_copy_DMI_Track_Description_int_array_T(&tmp9[302], &outC->_L41);
  kcg_copy_array_int32_627(&tmp8[0], &tmp9);
  kcg_copy_DMI_Identifier_Request_int_array_T_DATA(&tmp8[627], &outC->_L42);
  kcg_copy_array_int32_888(&tmp7[0], &tmp8);
  kcg_copy_DMI_System_Version_int_array_T_DATA(&tmp7[888], &outC->_L43);
  kcg_copy_array_int32_891(&tmp6[0], &tmp7);
  kcg_copy_DMI_Display_Control_int_array_T_DATA(&tmp6[891], &outC->_L44);
  kcg_copy_array_int32_894(&tmp5[0], &tmp6);
  kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(&tmp5[894], &outC->_L45);
  kcg_copy_array_int32_961(&tmp4[0], &tmp5);
  kcg_copy_DMI_EVC_Radio_Net_Data_int_array_T_DATA(&tmp4[961], &outC->_L46);
  kcg_copy_array_int32_964(&tmp3[0], &tmp4);
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(&tmp3[964], &outC->_L51);
  kcg_copy_array_int32_975(&tmp2[0], &tmp3);
  kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(&tmp2[975], &outC->_L47);
  kcg_copy_array_int32_978(&tmp1[0], &tmp2);
  kcg_copy_DMI_Train_Data_int_array_T_DATA(&tmp1[978], &outC->_L48);
  kcg_copy_array_int32_987(&tmp[0], &tmp1);
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(&tmp[987], &outC->_L49);
  kcg_copy_array_int32_990(&outC->_L29[0], &tmp);
  kcg_copy_DMI_Icons_int_array_T_DATA(&outC->_L29[990], &outC->_L50);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
    &outC->evc_to_dmi_int,
    &outC->_L29);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_EVC_to_DMI_to_int_init_Messages(
  outC_CAST_EVC_to_DMI_to_int_Messages *outC)
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

  outC->_L55 = kcg_lit_int32(0);
  outC->_L54 = kcg_lit_int32(0);
  outC->_L53 = kcg_lit_int32(0);
  for (idx = 0; idx < 11; idx++) {
    outC->_L51[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L50[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L49[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 9; idx3++) {
    outC->_L48[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 3; idx4++) {
    outC->_L47[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L46[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 67; idx6++) {
    outC->_L45[idx6] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 3; idx7++) {
    outC->_L44[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 3; idx8++) {
    outC->_L43[idx8] = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 261; idx9++) {
    outC->_L42[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 325; idx10++) {
    outC->_L41[idx10] = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 262; idx11++) {
    outC->_L40[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 9; idx12++) {
    outC->_L39[idx12] = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 3; idx13++) {
    outC->_L38[idx13] = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 3; idx14++) {
    outC->_L37[idx14] = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 24; idx15++) {
    outC->_L36[idx15] = kcg_lit_int32(0);
  }
  outC->_L32.valid = kcg_true;
  outC->_L32.system_clock = kcg_lit_int32(0);
  outC->_L32.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L32.DMI_m_icon_flashing_freq = kcg_lit_float32(0.0);
  outC->_L32.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L32.DMI_nid_icon_rank = kcg_lit_int32(0);
  outC->_L32.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L32.DMI_nid_area_rank = kcg_lit_int32(0);
  outC->_L32.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L33.valid = kcg_true;
  outC->_L33.systemTime = kcg_lit_int32(0);
  outC->_L33.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L34.valid = kcg_true;
  outC->_L34.systemTime = kcg_lit_int32(0);
  outC->_L34.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L34.l_train = kcg_lit_int32(0);
  outC->_L34.m_brakeperct = kcg_lit_int32(0);
  outC->_L34.v_maxTrain = kcg_lit_int32(0);
  outC->_L34.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L34.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L34.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L35.valid = kcg_true;
  outC->_L35.systemTime = kcg_lit_int32(0);
  outC->_L35.trainRunningNumber = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 1; idx16++) {
    outC->_L16[idx16] = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 999; idx17++) {
    outC->_L29[idx17] = kcg_lit_int32(0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTime = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 9; idx18++) {
    outC->_L2.driverIdentifier[idx18] = ' ';
  }
  outC->_L3.valid = kcg_true;
  outC->_L3.system_clock = kcg_lit_int32(0);
  outC->_L3.nid_mn = kcg_lit_int32(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.system_clock = kcg_lit_int32(0);
  outC->_L4.levelList.number = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 32; idx19++) {
    outC->_L4.levelList.levelList[idx19].level = M_LEVEL_Level_0;
    outC->_L4.levelList.levelList[idx19].nid_stm = kcg_lit_int32(0);
  }
  outC->_L5.valid = kcg_true;
  outC->_L5.cab_is_active = kcg_true;
  outC->_L5.system_clock = kcg_lit_int32(0);
  outC->_L6.valid = kcg_true;
  outC->_L6.system_clock = kcg_lit_int32(0);
  outC->_L6.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.valid = kcg_true;
  outC->_L7.system_clock = kcg_lit_int32(0);
  outC->_L7.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.l_name = kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 255; idx20++) {
    outC->_L7.x_name[idx20] = ' ';
  }
  outC->_L7.l_extra = kcg_lit_int32(0);
  outC->_L8.valid = kcg_true;
  outC->_L8.system_clock = kcg_lit_int32(0);
  outC->_L8.speedProfiles.profileChanged = kcg_true;
  for (idx21 = 0; idx21 < 32; idx21++) {
    outC->_L8.speedProfiles.speedProfiles[idx21].valid = kcg_true;
    outC->_L8.speedProfiles.speedProfiles[idx21].Loc_Abs = kcg_lit_int32(0);
    outC->_L8.speedProfiles.speedProfiles[idx21].Loc_LRBG = kcg_lit_int32(0);
    outC->_L8.speedProfiles.speedProfiles[idx21].MRS = kcg_lit_int32(0);
  }
  outC->_L8.gradientProfiles.profileChanged = kcg_true;
  for (idx22 = 0; idx22 < 32; idx22++) {
    outC->_L8.gradientProfiles.gradientProfiles[idx22].valid = kcg_true;
    outC->_L8.gradientProfiles.gradientProfiles[idx22].begin_section =
      kcg_lit_int32(0);
    outC->_L8.gradientProfiles.gradientProfiles[idx22].end_section =
      kcg_lit_int32(0);
    outC->_L8.gradientProfiles.gradientProfiles[idx22].gradient = kcg_lit_int32(0);
  }
  outC->_L8.trackConditions.nIter = kcg_lit_int32(0);
  for (idx23 = 0; idx23 < 32; idx23++) {
    outC->_L8.trackConditions.trackCondition[idx23].d_trackcond = kcg_lit_int32(0);
    outC->_L8.trackConditions.trackCondition[idx23].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L9.valid = kcg_true;
  outC->_L9.system_clock = kcg_lit_int32(0);
  outC->_L9.textMessage_ID = kcg_lit_int32(0);
  outC->_L9.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L9.l_text = kcg_lit_int32(0);
  for (idx24 = 0; idx24 < 255; idx24++) {
    outC->_L9.x_text[idx24] = ' ';
  }
  outC->_L9.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L9.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L10.valid = kcg_true;
  outC->_L10.system_clock = kcg_lit_int32(0);
  outC->_L10.trainID.number = kcg_lit_int32(0);
  outC->_L10.trainID.dig1 = kcg_lit_int32(0);
  outC->_L10.trainID.dig2 = kcg_lit_int32(0);
  outC->_L10.trainID.dig3 = kcg_lit_int32(0);
  outC->_L10.trainID.dig4 = kcg_lit_int32(0);
  outC->_L10.trainID.dig5 = kcg_lit_int32(0);
  outC->_L10.trainLength.number = kcg_lit_int32(0);
  outC->_L10.trainLength.dig1 = kcg_lit_int32(0);
  outC->_L10.trainLength.dig2 = kcg_lit_int32(0);
  outC->_L10.trainLength.dig3 = kcg_lit_int32(0);
  outC->_L10.trainLength.dig4 = kcg_lit_int32(0);
  outC->_L10.brakeModel.number = kcg_lit_int32(0);
  outC->_L10.brakeModel.dig1 = kcg_lit_int32(0);
  outC->_L10.brakeModel.dig2 = kcg_lit_int32(0);
  outC->_L10.brakeModel.dig3 = kcg_lit_int32(0);
  outC->_L10.vmax.number = kcg_lit_int32(0);
  outC->_L10.vmax.dig1 = kcg_lit_int32(0);
  outC->_L10.vmax.dig2 = kcg_lit_int32(0);
  outC->_L10.vmax.dig3 = kcg_lit_int32(0);
  outC->_L10.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L10.airTightSystem.number = kcg_lit_int32(0);
  outC->_L10.airTightSystem.dig1 = kcg_lit_int32(0);
  outC->_L10.airTightSystem.dig2 = kcg_lit_int32(0);
  outC->_L10.airTightSystem.dig3 = kcg_lit_int32(0);
  outC->_L10.mLoadingGauge.number = kcg_lit_int32(0);
  outC->_L10.mLoadingGauge.dig1 = kcg_lit_int32(0);
  outC->_L10.mLoadingGauge.dig2 = kcg_lit_int32(0);
  outC->_L10.mLoadingGauge.dig3 = kcg_lit_int32(0);
  outC->_L11.valid = kcg_true;
  outC->_L11.system_clock = kcg_lit_int32(0);
  outC->_L11.entry_request = Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L12.valid = kcg_true;
  outC->_L12.system_clock = kcg_lit_int32(0);
  outC->_L12.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L12.available_menu.Menu_button_shunting = kcg_true;
  outC->_L12.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L12.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L12.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L12.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L12.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L12.available_menu.Menu_button_train_running_number = kcg_true;
  outC->_L12.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L12.available_menu.Menu_button_train_data_modification = kcg_true;
  outC->_L12.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L12.available_menu.Menu_button_staff_responsible_data = kcg_true;
  outC->_L12.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L12.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L12.available_menu.Menu_button_override_route_suitability = kcg_true;
  outC->_L12.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L12.available_menu.Menu_button_system_version = kcg_true;
  outC->_L12.available_menu.Menu_button_volume = kcg_true;
  outC->_L12.available_menu.Menu_button_luminance = kcg_true;
  outC->_L12.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L12.available_menu.Menu_button_isolation = kcg_true;
  outC->_L12.available_menu.Show_hourglass = kcg_true;
  outC->_L12.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L12.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L12.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L12.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L12.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L12.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L12.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L12.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L13.valid = kcg_true;
  outC->_L13.system_clock = kcg_lit_int32(0);
  outC->_L13.v_train = kcg_lit_int32(0);
  outC->_L13.location_front_train = kcg_lit_int32(0);
  outC->_L13.location_brake_target = kcg_lit_int32(0);
  outC->_L13.v_target = kcg_lit_int32(0);
  outC->_L13.v_permitted = kcg_lit_int32(0);
  outC->_L13.v_release = kcg_lit_int32(0);
  outC->_L13.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L13.v_intervention = kcg_lit_int32(0);
  outC->_L13.mode = M_MODE_Full_Supervision;
  outC->_L13.level.level = M_LEVEL_Level_0;
  outC->_L13.level.nid_stm = kcg_lit_int32(0);
  outC->_L13.nid_c = kcg_lit_int32(0);
  outC->_L13.nid_c_valid = kcg_true;
  outC->_L13.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L13.sup_status = CSM_DMI_Types_Pkg;
  outC->_L13.location_LOA = kcg_lit_int32(0);
  outC->_L13.v_LOA = kcg_lit_int32(0);
  outC->_L13.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L13.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L13.distance_to_TSA = kcg_lit_int32(0);
  outC->_L13.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L13.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  outC->_L1.present = kcg_true;
  outC->_L1.dynamic.valid = kcg_true;
  outC->_L1.dynamic.system_clock = kcg_lit_int32(0);
  outC->_L1.dynamic.v_train = kcg_lit_int32(0);
  outC->_L1.dynamic.location_front_train = kcg_lit_int32(0);
  outC->_L1.dynamic.location_brake_target = kcg_lit_int32(0);
  outC->_L1.dynamic.v_target = kcg_lit_int32(0);
  outC->_L1.dynamic.v_permitted = kcg_lit_int32(0);
  outC->_L1.dynamic.v_release = kcg_lit_int32(0);
  outC->_L1.dynamic.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L1.dynamic.v_intervention = kcg_lit_int32(0);
  outC->_L1.dynamic.mode = M_MODE_Full_Supervision;
  outC->_L1.dynamic.level.level = M_LEVEL_Level_0;
  outC->_L1.dynamic.level.nid_stm = kcg_lit_int32(0);
  outC->_L1.dynamic.nid_c = kcg_lit_int32(0);
  outC->_L1.dynamic.nid_c_valid = kcg_true;
  outC->_L1.dynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L1.dynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->_L1.dynamic.location_LOA = kcg_lit_int32(0);
  outC->_L1.dynamic.v_LOA = kcg_lit_int32(0);
  outC->_L1.dynamic.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L1.dynamic.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L1.dynamic.distance_to_TSA = kcg_lit_int32(0);
  outC->_L1.dynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->_L1.dynamic.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L1.menu_request.valid = kcg_true;
  outC->_L1.menu_request.system_clock = kcg_lit_int32(0);
  outC->_L1.menu_request.available_menu.Menu_button_start_of_mission = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_shunting = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_shunting_exit = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_non_leading = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_exit_non_leading = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_maintain_shunting = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_driver_ID = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_train_running_number =
    kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_ETCS_level = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_train_data_modification =
    kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_train_data_view = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_staff_responsible_data =
    kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_language_selection = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_override_EOA = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_override_route_suitability =
    kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_adhesion_factor = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_system_version = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_volume = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_luminance = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_train_integrity = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_isolation = kcg_true;
  outC->_L1.menu_request.available_menu.Show_hourglass = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_use_short_number = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_enter_RBC_data = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_radio_network_ID = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_contact_last_RBC = kcg_true;
  outC->_L1.menu_request.available_menu.Button_switch_for_train_data = kcg_true;
  outC->_L1.menu_request.available_menu.Fix_train_data_entry = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_Set_VBC = kcg_true;
  outC->_L1.menu_request.available_menu.Menu_button_Remove_VBC = kcg_true;
  outC->_L1.entry_request.valid = kcg_true;
  outC->_L1.entry_request.system_clock = kcg_lit_int32(0);
  outC->_L1.entry_request.entry_request =
    Enter_revalidate_driver_identifier_DMI_Types_Pkg;
  outC->_L1.evc_coded_train_data.valid = kcg_true;
  outC->_L1.evc_coded_train_data.system_clock = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.trainID.number = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.trainID.dig1 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.trainID.dig2 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.trainID.dig3 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.trainID.dig4 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.trainID.dig5 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.trainLength.number = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.trainLength.dig1 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.trainLength.dig2 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.trainLength.dig3 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.trainLength.dig4 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.brakeModel.number = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.brakeModel.dig1 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.brakeModel.dig2 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.brakeModel.dig3 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.vmax.number = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.vmax.dig1 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.vmax.dig2 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.vmax.dig3 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.mAxleLoad = M_AXLELOADCAT_A;
  outC->_L1.evc_coded_train_data.airTightSystem.number = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.airTightSystem.dig1 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.airTightSystem.dig2 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.airTightSystem.dig3 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.mLoadingGauge.number = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.mLoadingGauge.dig1 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.mLoadingGauge.dig2 = kcg_lit_int32(0);
  outC->_L1.evc_coded_train_data.mLoadingGauge.dig3 = kcg_lit_int32(0);
  outC->_L1.textMessage.valid = kcg_true;
  outC->_L1.textMessage.system_clock = kcg_lit_int32(0);
  outC->_L1.textMessage.textMessage_ID = kcg_lit_int32(0);
  outC->_L1.textMessage.q_text = balise_read_error_DMI_Types_Pkg;
  outC->_L1.textMessage.l_text = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 255; idx25++) {
    outC->_L1.textMessage.x_text[idx25] = ' ';
  }
  outC->_L1.textMessage.q_textClass = Q_TEXTCLASS_Auxiliary_Information;
  outC->_L1.textMessage.q_textConfirm = Q_TEXTCONFIRM_No_confirmation_required;
  outC->_L1.trackDescription.valid = kcg_true;
  outC->_L1.trackDescription.system_clock = kcg_lit_int32(0);
  outC->_L1.trackDescription.speedProfiles.profileChanged = kcg_true;
  for (idx26 = 0; idx26 < 32; idx26++) {
    outC->_L1.trackDescription.speedProfiles.speedProfiles[idx26].valid = kcg_true;
    outC->_L1.trackDescription.speedProfiles.speedProfiles[idx26].Loc_Abs =
      kcg_lit_int32(0);
    outC->_L1.trackDescription.speedProfiles.speedProfiles[idx26].Loc_LRBG =
      kcg_lit_int32(0);
    outC->_L1.trackDescription.speedProfiles.speedProfiles[idx26].MRS =
      kcg_lit_int32(0);
  }
  outC->_L1.trackDescription.gradientProfiles.profileChanged = kcg_true;
  for (idx27 = 0; idx27 < 32; idx27++) {
    outC->_L1.trackDescription.gradientProfiles.gradientProfiles[idx27].valid =
      kcg_true;
    outC->_L1.trackDescription.gradientProfiles.gradientProfiles[idx27].begin_section =
      kcg_lit_int32(0);
    outC->_L1.trackDescription.gradientProfiles.gradientProfiles[idx27].end_section =
      kcg_lit_int32(0);
    outC->_L1.trackDescription.gradientProfiles.gradientProfiles[idx27].gradient =
      kcg_lit_int32(0);
  }
  outC->_L1.trackDescription.trackConditions.nIter = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 32; idx28++) {
    outC->_L1.trackDescription.trackConditions.trackCondition[idx28].d_trackcond =
      kcg_lit_int32(0);
    outC->_L1.trackDescription.trackConditions.trackCondition[idx28].m_trackcond =
      M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted;
  }
  outC->_L1.identifierRequest.valid = kcg_true;
  outC->_L1.identifierRequest.system_clock = kcg_lit_int32(0);
  outC->_L1.identifierRequest.ERTMS_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.identifierRequest.EVC_Version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.identifierRequest.l_name = kcg_lit_int32(0);
  for (idx29 = 0; idx29 < 255; idx29++) {
    outC->_L1.identifierRequest.x_name[idx29] = ' ';
  }
  outC->_L1.identifierRequest.l_extra = kcg_lit_int32(0);
  outC->_L1.systemVersion.valid = kcg_true;
  outC->_L1.systemVersion.system_clock = kcg_lit_int32(0);
  outC->_L1.systemVersion.system_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.displayControl.valid = kcg_true;
  outC->_L1.displayControl.cab_is_active = kcg_true;
  outC->_L1.displayControl.system_clock = kcg_lit_int32(0);
  outC->_L1.EVC_levelData.valid = kcg_true;
  outC->_L1.EVC_levelData.system_clock = kcg_lit_int32(0);
  outC->_L1.EVC_levelData.levelList.number = kcg_lit_int32(0);
  for (idx30 = 0; idx30 < 32; idx30++) {
    outC->_L1.EVC_levelData.levelList.levelList[idx30].level = M_LEVEL_Level_0;
    outC->_L1.EVC_levelData.levelList.levelList[idx30].nid_stm = kcg_lit_int32(0);
  }
  outC->_L1.EVC_radioNetData.valid = kcg_true;
  outC->_L1.EVC_radioNetData.system_clock = kcg_lit_int32(0);
  outC->_L1.EVC_radioNetData.nid_mn = kcg_lit_int32(0);
  outC->_L1.driverIdentifier.valid = kcg_true;
  outC->_L1.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx31 = 0; idx31 < 9; idx31++) {
    outC->_L1.driverIdentifier.driverIdentifier[idx31] = ' ';
  }
  outC->_L1.trainRunningNumber.valid = kcg_true;
  outC->_L1.trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->_L1.trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->_L1.trainData.valid = kcg_true;
  outC->_L1.trainData.systemTime = kcg_lit_int32(0);
  outC->_L1.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.trainData.l_train = kcg_lit_int32(0);
  outC->_L1.trainData.m_brakeperct = kcg_lit_int32(0);
  outC->_L1.trainData.v_maxTrain = kcg_lit_int32(0);
  outC->_L1.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L1.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L1.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.adhesionFactor.valid = kcg_true;
  outC->_L1.adhesionFactor.systemTime = kcg_lit_int32(0);
  outC->_L1.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L1.iconRequest.valid = kcg_true;
  outC->_L1.iconRequest.system_clock = kcg_lit_int32(0);
  outC->_L1.iconRequest.DMI_m_icon_control_flag = show_icon_in_area_DMI_Types_Pkg;
  outC->_L1.iconRequest.DMI_m_icon_flashing_freq = kcg_lit_float32(0.0);
  outC->_L1.iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->_L1.iconRequest.DMI_nid_icon_rank = kcg_lit_int32(0);
  outC->_L1.iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->_L1.iconRequest.DMI_nid_area_rank = kcg_lit_int32(0);
  outC->_L1.iconRequest.DMI_nid_icon_identifier = kcg_lit_int32(0);
  for (idx32 = 0; idx32 < 999; idx32++) {
    outC->evc_to_dmi_int[idx32] = kcg_lit_int32(0);
  }
  /* _L36=(DATA::Packets::EVC_to_DMI::Write_DMI_Dynamic_to_int#1)/ */
  Write_DMI_Dynamic_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Dynamic_to_int_1);
  /* _L37=(DATA::Packets::EVC_to_DMI::Write_DMI_Menu_Request_to_int#1)/ */
  Write_DMI_Menu_Request_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Menu_Request_to_int_1);
  /* _L38=(DATA::Packets::EVC_to_DMI::Write_DMI_Entry_Request_to_int#1)/ */
  Write_DMI_Entry_Request_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Entry_Request_to_int_1);
  /* _L39=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Coded_Train_Data_to_int#1)/ */
  Write_DMI_EVC_Coded_Train_Data_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_EVC_Coded_Train_Data_to_int_1);
  /* _L40=(DATA::Packets::EVC_to_DMI::Write_DMI_Text_Message_to_int#1)/ */
  Write_DMI_Text_Message_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Text_Message_to_int_1);
  /* _L41=(DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int#1)/ */
  Write_DMI_Track_Description_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Track_Description_to_int_1);
  /* _L42=(DATA::Packets::EVC_to_DMI::Write_DMI_Identifier_Request_to_int#1)/ */
  Write_DMI_Identifier_Request_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Identifier_Request_to_int_1);
  /* _L43=(DATA::Packets::EVC_to_DMI::Write_DMI_System_Version_to_int#1)/ */
  Write_DMI_System_Version_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_System_Version_to_int_1);
  /* _L44=(DATA::Packets::EVC_to_DMI::Write_DMI_Display_Control_to_int#1)/ */
  Write_DMI_Display_Control_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Display_Control_to_int_1);
  /* _L45=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Level_Data_to_int#1)/ */
  Write_DMI_EVC_Level_Data_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_EVC_Level_Data_to_int_1);
  /* _L46=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Radio_Net_Data_to_int#1)/ */
  Write_DMI_EVC_Radio_Net_Data_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_EVC_Radio_Net_Data_to_int_1);
  /* _L47=(DATA::Packets::Bothways::Write_DMI_Train_Running_Number_to_int#2)/ */
  Write_DMI_Train_Running_Number_to_int_init_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Train_Running_Number_to_int_2);
  /* _L48=(DATA::Packets::Bothways::Write_DMI_Train_Data_to_int#2)/ */
  Write_DMI_Train_Data_to_int_init_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Train_Data_to_int_2);
  /* _L49=(DATA::Packets::Bothways::Write_DMI_Adhesion_Factor_Data_to_int#2)/ */
  Write_DMI_Adhesion_Factor_Data_to_int_init_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Adhesion_Factor_Data_to_int_2);
  /* _L50=(DATA::Packets::EVC_to_DMI::Write_DMI_Icons_to_int#1)/ */
  Write_DMI_Icons_to_int_init_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Icons_to_int_1);
  /* _L51=(DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int#2)/ */
  Write_DMI_Driver_Identifier_to_int_init_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Driver_Identifier_to_int_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_EVC_to_DMI_to_int_reset_Messages(
  outC_CAST_EVC_to_DMI_to_int_Messages *outC)
{
  /* _L36=(DATA::Packets::EVC_to_DMI::Write_DMI_Dynamic_to_int#1)/ */
  Write_DMI_Dynamic_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Dynamic_to_int_1);
  /* _L37=(DATA::Packets::EVC_to_DMI::Write_DMI_Menu_Request_to_int#1)/ */
  Write_DMI_Menu_Request_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Menu_Request_to_int_1);
  /* _L38=(DATA::Packets::EVC_to_DMI::Write_DMI_Entry_Request_to_int#1)/ */
  Write_DMI_Entry_Request_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Entry_Request_to_int_1);
  /* _L39=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Coded_Train_Data_to_int#1)/ */
  Write_DMI_EVC_Coded_Train_Data_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_EVC_Coded_Train_Data_to_int_1);
  /* _L40=(DATA::Packets::EVC_to_DMI::Write_DMI_Text_Message_to_int#1)/ */
  Write_DMI_Text_Message_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Text_Message_to_int_1);
  /* _L41=(DATA::Packets::EVC_to_DMI::Write_DMI_Track_Description_to_int#1)/ */
  Write_DMI_Track_Description_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Track_Description_to_int_1);
  /* _L42=(DATA::Packets::EVC_to_DMI::Write_DMI_Identifier_Request_to_int#1)/ */
  Write_DMI_Identifier_Request_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Identifier_Request_to_int_1);
  /* _L43=(DATA::Packets::EVC_to_DMI::Write_DMI_System_Version_to_int#1)/ */
  Write_DMI_System_Version_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_System_Version_to_int_1);
  /* _L44=(DATA::Packets::EVC_to_DMI::Write_DMI_Display_Control_to_int#1)/ */
  Write_DMI_Display_Control_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Display_Control_to_int_1);
  /* _L45=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Level_Data_to_int#1)/ */
  Write_DMI_EVC_Level_Data_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_EVC_Level_Data_to_int_1);
  /* _L46=(DATA::Packets::EVC_to_DMI::Write_DMI_EVC_Radio_Net_Data_to_int#1)/ */
  Write_DMI_EVC_Radio_Net_Data_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_EVC_Radio_Net_Data_to_int_1);
  /* _L47=(DATA::Packets::Bothways::Write_DMI_Train_Running_Number_to_int#2)/ */
  Write_DMI_Train_Running_Number_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Train_Running_Number_to_int_2);
  /* _L48=(DATA::Packets::Bothways::Write_DMI_Train_Data_to_int#2)/ */
  Write_DMI_Train_Data_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Train_Data_to_int_2);
  /* _L49=(DATA::Packets::Bothways::Write_DMI_Adhesion_Factor_Data_to_int#2)/ */
  Write_DMI_Adhesion_Factor_Data_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Adhesion_Factor_Data_to_int_2);
  /* _L50=(DATA::Packets::EVC_to_DMI::Write_DMI_Icons_to_int#1)/ */
  Write_DMI_Icons_to_int_reset_DATA_Packets_EVC_to_DMI(
    &outC->Context_Write_DMI_Icons_to_int_1);
  /* _L51=(DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int#2)/ */
  Write_DMI_Driver_Identifier_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Driver_Identifier_to_int_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_EVC_to_DMI_to_int_Messages.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

