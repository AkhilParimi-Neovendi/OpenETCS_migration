/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_DMI_to_EVC_to_int_Messages.h"

/* Messages::CAST_DMI_to_EVC_to_int/ */
void CAST_DMI_to_EVC_to_int_Messages(
  /* dmi_to_evc_ct/ */
  DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct,
  outC_CAST_DMI_to_EVC_to_int_Messages *outC)
{
  static array_int32_307 tmp;
  static array_int32_304 tmp1;
  static array_int32_301 tmp2;
  static array_int32_292 tmp3;
  static array_int32_289 tmp4;
  static array_int32_285 tmp5;
  static array_int32_283 tmp6;
  static array_int32_280 tmp7;
  static array_int32_269 tmp8;
  static array_int32_266 tmp9;
  static array_int32_5 tmp10;

  outC->_L34 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(1);
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&outC->_L1, dmi_to_evc_ct);
  outC->_L14 = outC->_L1.present;
  /* _L35= */
  if (outC->_L14) {
    outC->_L35 = outC->_L33;
  }
  else {
    outC->_L35 = outC->_L34;
  }
  outC->_L32[0] = outC->_L35;
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L2,
    &outC->_L1.selectedLevel);
  /* _L28=(DATA::Packets::Bothways::Write_DMI_Level_Data_to_int#1)/ */
  Write_DMI_Level_Data_to_int_DATA_Packets_Bothways(
    &outC->_L2,
    &outC->Context_Write_DMI_Level_Data_to_int_1);
  kcg_copy_DMI_Level_Data_int_array_T_DATA(
    &outC->_L28,
    &outC->Context_Write_DMI_Level_Data_to_int_1.dmi_level_data_int);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L3,
    &outC->_L1.iconAck);
  /* _L27=(DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int#1)/ */
  Write_DMI_Icon_Ack_to_int_DATA_Packets_DMI_to_EVC(
    &outC->_L3,
    &outC->Context_Write_DMI_Icon_Ack_to_int_1);
  kcg_copy_DMI_Icon_Ack_int_array_T_DATA(
    &outC->_L27,
    &outC->Context_Write_DMI_Icon_Ack_to_int_1.dmi_icon_ack_int);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L4,
    &outC->_L1.adhesionFactor);
  /* _L25=(DATA::Packets::Bothways::Write_DMI_Adhesion_Factor_Data_to_int#1)/ */
  Write_DMI_Adhesion_Factor_Data_to_int_DATA_Packets_Bothways(
    &outC->_L4,
    &outC->Context_Write_DMI_Adhesion_Factor_Data_to_int_1);
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(
    &outC->_L25,
    &outC->Context_Write_DMI_Adhesion_Factor_Data_to_int_1.dmi_adhesion_factor_data_int);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L5,
    &outC->_L1.trainData);
  /* _L26=(DATA::Packets::Bothways::Write_DMI_Train_Data_to_int#1)/ */
  Write_DMI_Train_Data_to_int_DATA_Packets_Bothways(
    &outC->_L5,
    &outC->Context_Write_DMI_Train_Data_to_int_1);
  kcg_copy_DMI_Train_Data_int_array_T_DATA(
    &outC->_L26,
    &outC->Context_Write_DMI_Train_Data_to_int_1.dmi_train_data_int);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L6,
    &outC->_L1.trainDataAck);
  /* _L24=(DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int#1)/ */
  Write_DMI_Train_Data_Ack_to_int_DATA_Packets_DMI_to_EVC(
    &outC->_L6,
    &outC->Context_Write_DMI_Train_Data_Ack_to_int_1);
  kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(
    &outC->_L24,
    &outC->Context_Write_DMI_Train_Data_Ack_to_int_1.dmi_train_data_ack_int);
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L7,
    &outC->_L1.textMessageAck);
  /* _L23=(DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int#1)/ */
  Write_DMI_Text_Message_Ack_to_int_DATA_Packets_DMI_to_EVC(
    &outC->_L7,
    &outC->Context_Write_DMI_Text_Message_Ack_to_int_1);
  kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(
    &outC->_L23,
    &outC->Context_Write_DMI_Text_Message_Ack_to_int_1.dmi_text_message_ack_int);
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L8,
    &outC->_L1.radioNetData);
  /* _L22=(DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int#1)/ */
  Write_DMI_Radio_Net_Data_to_int_DATA_Packets_DMI_to_EVC(
    &outC->_L8,
    &outC->Context_Write_DMI_Radio_Net_Data_to_int_1);
  kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(
    &outC->_L22,
    &outC->Context_Write_DMI_Radio_Net_Data_to_int_1.dmi_radio_net_data_int);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L9,
    &outC->_L1.trainRunningNumber);
  /* _L21=(DATA::Packets::Bothways::Write_DMI_Train_Running_Number_to_int#1)/ */
  Write_DMI_Train_Running_Number_to_int_DATA_Packets_Bothways(
    &outC->_L9,
    &outC->Context_Write_DMI_Train_Running_Number_to_int_1);
  kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(
    &outC->_L21,
    &outC->Context_Write_DMI_Train_Running_Number_to_int_1.dmi_train_running_number_int);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L10,
    &outC->_L1.driverIdentifier);
  /* _L20=(DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int#1)/ */
  Write_DMI_Driver_Identifier_to_int_DATA_Packets_Bothways(
    &outC->_L10,
    &outC->Context_Write_DMI_Driver_Identifier_to_int_1);
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(
    &outC->_L20,
    &outC->Context_Write_DMI_Driver_Identifier_to_int_1.dmi_driver_identifier_int);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L11,
    &outC->_L1.driverRequest);
  /* _L19=(DATA::Packets::DMI_to_EVC::Write_DMI_Driver_Reqest_to_int#1)/ */
  Write_DMI_Driver_Reqest_to_int_DATA_Packets_DMI_to_EVC(
    &outC->_L11,
    &outC->Context_Write_DMI_Driver_Reqest_to_int_1);
  kcg_copy_DMI_Driver_Request_int_array_T_DATA(
    &outC->_L19,
    &outC->Context_Write_DMI_Driver_Reqest_to_int_1.dmi_driver_request_int);
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L12,
    &outC->_L1.identifier);
  /* _L18=(DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int#1)/ */
  Write_DMI_identifier_to_int_DATA_Packets_DMI_to_EVC(
    &outC->_L12,
    &outC->Context_Write_DMI_identifier_to_int_1);
  kcg_copy_DMI_Identifier_int_array_T_DATA(
    &outC->_L18,
    &outC->Context_Write_DMI_identifier_to_int_1.dmi_identifier_int);
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L13,
    &outC->_L1.status);
  /* _L17=(DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int#1)/ */
  Write_DMI_Status_to_int_DATA_Packets_DMI_to_EVC(
    &outC->_L13,
    &outC->Context_Write_DMI_Status_to_int_1);
  kcg_copy_DMI_Status_int_array_T_DATA(
    &outC->_L17,
    &outC->Context_Write_DMI_Status_to_int_1.dmi_status_int);
  tmp10[0] = outC->_L32[0];
  kcg_copy_DMI_Status_int_array_T_DATA(&tmp10[1], &outC->_L17);
  kcg_copy_array_int32_5(&tmp9[0], &tmp10);
  kcg_copy_DMI_Identifier_int_array_T_DATA(&tmp9[5], &outC->_L18);
  kcg_copy_array_int32_266(&tmp8[0], &tmp9);
  kcg_copy_DMI_Driver_Request_int_array_T_DATA(&tmp8[266], &outC->_L19);
  kcg_copy_array_int32_269(&tmp7[0], &tmp8);
  kcg_copy_DMI_Driver_Identifier_int_array_T_DATA(&tmp7[269], &outC->_L20);
  kcg_copy_array_int32_280(&tmp6[0], &tmp7);
  kcg_copy_DMI_Train_Running_Number_int_array_T_DATA(&tmp6[280], &outC->_L21);
  kcg_copy_array_int32_283(&tmp5[0], &tmp6);
  kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA(&tmp5[283], &outC->_L22);
  kcg_copy_array_int32_285(&tmp4[0], &tmp5);
  kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA(&tmp4[285], &outC->_L23);
  kcg_copy_array_int32_289(&tmp3[0], &tmp4);
  kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA(&tmp3[289], &outC->_L24);
  kcg_copy_array_int32_292(&tmp2[0], &tmp3);
  kcg_copy_DMI_Train_Data_int_array_T_DATA(&tmp2[292], &outC->_L26);
  kcg_copy_array_int32_301(&tmp1[0], &tmp2);
  kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA(&tmp1[301], &outC->_L25);
  kcg_copy_array_int32_304(&tmp[0], &tmp1);
  kcg_copy_DMI_Icon_Ack_int_array_T_DATA(&tmp[304], &outC->_L27);
  kcg_copy_array_int32_307(&outC->_L29[0], &tmp);
  kcg_copy_DMI_Level_Data_int_array_T_DATA(&outC->_L29[307], &outC->_L28);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &outC->dmi_to_evc_int,
    &outC->_L29);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_DMI_to_EVC_to_int_init_Messages(
  outC_CAST_DMI_to_EVC_to_int_Messages *outC)
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

  for (idx = 0; idx < 1; idx++) {
    outC->_L32[idx] = kcg_lit_int32(0);
  }
  outC->_L33 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L35 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 311; idx1++) {
    outC->_L29[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L28[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->_L27[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 9; idx4++) {
    outC->_L26[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L25[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 3; idx6++) {
    outC->_L24[idx6] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L23[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 2; idx8++) {
    outC->_L22[idx8] = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 3; idx9++) {
    outC->_L21[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 11; idx10++) {
    outC->_L20[idx10] = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L19[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 261; idx12++) {
    outC->_L18[idx12] = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->_L17[idx13] = kcg_lit_int32(0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.systemTime = kcg_lit_int32(0);
  outC->_L2.level.level = M_LEVEL_Level_0;
  outC->_L2.level.nid_stm = kcg_lit_int32(0);
  outC->_L3.valid = kcg_true;
  outC->_L3.systemTime = kcg_lit_int32(0);
  outC->_L3.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.systemTime = kcg_lit_int32(0);
  outC->_L4.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L5.valid = kcg_true;
  outC->_L5.systemTime = kcg_lit_int32(0);
  outC->_L5.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5.l_train = kcg_lit_int32(0);
  outC->_L5.m_brakeperct = kcg_lit_int32(0);
  outC->_L5.v_maxTrain = kcg_lit_int32(0);
  outC->_L5.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L5.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L5.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6.valid = kcg_true;
  outC->_L6.systemTime = kcg_lit_int32(0);
  outC->_L6.acknowledged = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.systemTime = kcg_lit_int32(0);
  outC->_L7.textMessage_ID = kcg_lit_int32(0);
  outC->_L7.acknowledged = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.systemTime = kcg_lit_int32(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.systemTime = kcg_lit_int32(0);
  outC->_L9.trainRunningNumber = kcg_lit_int32(0);
  outC->_L10.valid = kcg_true;
  outC->_L10.systemTime = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 9; idx14++) {
    outC->_L10.driverIdentifier[idx14] = ' ';
  }
  outC->_L11.valid = kcg_true;
  outC->_L11.systemTime = kcg_lit_int32(0);
  outC->_L11.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L12.valid = kcg_true;
  outC->_L12.systemTime = kcg_lit_int32(0);
  outC->_L12.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L12.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L12.l_name = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 255; idx15++) {
    outC->_L12.DMI_name[idx15] = ' ';
  }
  outC->_L12.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.valid = kcg_true;
  outC->_L13.systemTime = kcg_lit_int32(0);
  outC->_L13.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L13.nAlive = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  outC->_L1.present = kcg_true;
  outC->_L1.status.valid = kcg_true;
  outC->_L1.status.systemTime = kcg_lit_int32(0);
  outC->_L1.status.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L1.status.nAlive = kcg_lit_int32(0);
  outC->_L1.identifier.valid = kcg_true;
  outC->_L1.identifier.systemTime = kcg_lit_int32(0);
  outC->_L1.identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L1.identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L1.identifier.l_name = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 255; idx16++) {
    outC->_L1.identifier.DMI_name[idx16] = ' ';
  }
  outC->_L1.identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.driverRequest.valid = kcg_true;
  outC->_L1.driverRequest.systemTime = kcg_lit_int32(0);
  outC->_L1.driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L1.driverIdentifier.valid = kcg_true;
  outC->_L1.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 9; idx17++) {
    outC->_L1.driverIdentifier.driverIdentifier[idx17] = ' ';
  }
  outC->_L1.trainRunningNumber.valid = kcg_true;
  outC->_L1.trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->_L1.trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->_L1.radioNetData.valid = kcg_true;
  outC->_L1.radioNetData.systemTime = kcg_lit_int32(0);
  outC->_L1.textMessageAck.valid = kcg_true;
  outC->_L1.textMessageAck.systemTime = kcg_lit_int32(0);
  outC->_L1.textMessageAck.textMessage_ID = kcg_lit_int32(0);
  outC->_L1.textMessageAck.acknowledged = kcg_true;
  outC->_L1.trainDataAck.valid = kcg_true;
  outC->_L1.trainDataAck.systemTime = kcg_lit_int32(0);
  outC->_L1.trainDataAck.acknowledged = kcg_true;
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
  outC->_L1.iconAck.valid = kcg_true;
  outC->_L1.iconAck.systemTime = kcg_lit_int32(0);
  outC->_L1.iconAck.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L1.selectedLevel.valid = kcg_true;
  outC->_L1.selectedLevel.systemTime = kcg_lit_int32(0);
  outC->_L1.selectedLevel.level.level = M_LEVEL_Level_0;
  outC->_L1.selectedLevel.level.nid_stm = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 311; idx18++) {
    outC->dmi_to_evc_int[idx18] = kcg_lit_int32(0);
  }
  /* _L17=(DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int#1)/ */
  Write_DMI_Status_to_int_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Status_to_int_1);
  /* _L18=(DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int#1)/ */
  Write_DMI_identifier_to_int_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_identifier_to_int_1);
  /* _L19=(DATA::Packets::DMI_to_EVC::Write_DMI_Driver_Reqest_to_int#1)/ */
  Write_DMI_Driver_Reqest_to_int_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Driver_Reqest_to_int_1);
  /* _L20=(DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int#1)/ */
  Write_DMI_Driver_Identifier_to_int_init_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Driver_Identifier_to_int_1);
  /* _L21=(DATA::Packets::Bothways::Write_DMI_Train_Running_Number_to_int#1)/ */
  Write_DMI_Train_Running_Number_to_int_init_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Train_Running_Number_to_int_1);
  /* _L22=(DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int#1)/ */
  Write_DMI_Radio_Net_Data_to_int_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Radio_Net_Data_to_int_1);
  /* _L23=(DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int#1)/ */
  Write_DMI_Text_Message_Ack_to_int_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Text_Message_Ack_to_int_1);
  /* _L24=(DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int#1)/ */
  Write_DMI_Train_Data_Ack_to_int_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Train_Data_Ack_to_int_1);
  /* _L26=(DATA::Packets::Bothways::Write_DMI_Train_Data_to_int#1)/ */
  Write_DMI_Train_Data_to_int_init_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Train_Data_to_int_1);
  /* _L25=(DATA::Packets::Bothways::Write_DMI_Adhesion_Factor_Data_to_int#1)/ */
  Write_DMI_Adhesion_Factor_Data_to_int_init_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Adhesion_Factor_Data_to_int_1);
  /* _L27=(DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int#1)/ */
  Write_DMI_Icon_Ack_to_int_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Icon_Ack_to_int_1);
  /* _L28=(DATA::Packets::Bothways::Write_DMI_Level_Data_to_int#1)/ */
  Write_DMI_Level_Data_to_int_init_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Level_Data_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_DMI_to_EVC_to_int_reset_Messages(
  outC_CAST_DMI_to_EVC_to_int_Messages *outC)
{
  /* _L17=(DATA::Packets::DMI_to_EVC::Write_DMI_Status_to_int#1)/ */
  Write_DMI_Status_to_int_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Status_to_int_1);
  /* _L18=(DATA::Packets::DMI_to_EVC::Write_DMI_identifier_to_int#1)/ */
  Write_DMI_identifier_to_int_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_identifier_to_int_1);
  /* _L19=(DATA::Packets::DMI_to_EVC::Write_DMI_Driver_Reqest_to_int#1)/ */
  Write_DMI_Driver_Reqest_to_int_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Driver_Reqest_to_int_1);
  /* _L20=(DATA::Packets::Bothways::Write_DMI_Driver_Identifier_to_int#1)/ */
  Write_DMI_Driver_Identifier_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Driver_Identifier_to_int_1);
  /* _L21=(DATA::Packets::Bothways::Write_DMI_Train_Running_Number_to_int#1)/ */
  Write_DMI_Train_Running_Number_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Train_Running_Number_to_int_1);
  /* _L22=(DATA::Packets::DMI_to_EVC::Write_DMI_Radio_Net_Data_to_int#1)/ */
  Write_DMI_Radio_Net_Data_to_int_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Radio_Net_Data_to_int_1);
  /* _L23=(DATA::Packets::DMI_to_EVC::Write_DMI_Text_Message_Ack_to_int#1)/ */
  Write_DMI_Text_Message_Ack_to_int_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Text_Message_Ack_to_int_1);
  /* _L24=(DATA::Packets::DMI_to_EVC::Write_DMI_Train_Data_Ack_to_int#1)/ */
  Write_DMI_Train_Data_Ack_to_int_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Train_Data_Ack_to_int_1);
  /* _L26=(DATA::Packets::Bothways::Write_DMI_Train_Data_to_int#1)/ */
  Write_DMI_Train_Data_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Train_Data_to_int_1);
  /* _L25=(DATA::Packets::Bothways::Write_DMI_Adhesion_Factor_Data_to_int#1)/ */
  Write_DMI_Adhesion_Factor_Data_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Adhesion_Factor_Data_to_int_1);
  /* _L27=(DATA::Packets::DMI_to_EVC::Write_DMI_Icon_Ack_to_int#1)/ */
  Write_DMI_Icon_Ack_to_int_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_DMI_Icon_Ack_to_int_1);
  /* _L28=(DATA::Packets::Bothways::Write_DMI_Level_Data_to_int#1)/ */
  Write_DMI_Level_Data_to_int_reset_DATA_Packets_Bothways(
    &outC->Context_Write_DMI_Level_Data_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_to_EVC_to_int_Messages.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

