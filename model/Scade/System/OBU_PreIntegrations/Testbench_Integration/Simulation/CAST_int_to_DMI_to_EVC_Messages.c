/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_int_to_DMI_to_EVC_Messages.h"

/* Messages::CAST_int_to_DMI_to_EVC/ */
void CAST_int_to_DMI_to_EVC_Messages(
  /* dmi_to_evc_int/ */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int,
  outC_CAST_int_to_DMI_to_EVC_Messages *outC)
{
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&outC->_L31, dmi_to_evc_int);
  outC->_L49 = outC->_L31[0];
  outC->_L47 = kcg_lit_int32(1);
  outC->_L48 = outC->_L49 == outC->_L47;
  kcg_copy_array_int32_4(&outC->_L45, (array_int32_4 *) &outC->_L31[307]);
  kcg_copy_array_int32_3(&outC->_L44, (array_int32_3 *) &outC->_L31[304]);
  kcg_copy_array_int32_3(&outC->_L43, (array_int32_3 *) &outC->_L31[301]);
  kcg_copy_array_int32_9(&outC->_L42, (array_int32_9 *) &outC->_L31[292]);
  kcg_copy_array_int32_3(&outC->_L41, (array_int32_3 *) &outC->_L31[289]);
  kcg_copy_array_int32_4(&outC->_L40, (array_int32_4 *) &outC->_L31[285]);
  kcg_copy_array_int32_2(&outC->_L39, (array_int32_2 *) &outC->_L31[283]);
  kcg_copy_array_int32_3(&outC->_L38, (array_int32_3 *) &outC->_L31[280]);
  kcg_copy_array_int32_11(&outC->_L37, (array_int32_11 *) &outC->_L31[269]);
  kcg_copy_array_int32_3(&outC->_L36, (array_int32_3 *) &outC->_L31[266]);
  kcg_copy_array_int32_261(&outC->_L34, (array_int32_261 *) &outC->_L31[5]);
  kcg_copy_array_int32_4(&outC->_L33, (array_int32_4 *) &outC->_L31[1]);
  /* _L17=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status#1)/ */
  Write_int_to_DMI_Status_DATA_Packets_DMI_to_EVC(
    &outC->_L33,
    &outC->Context_Write_int_to_DMI_Status_1);
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L17,
    &outC->Context_Write_int_to_DMI_Status_1.dim_status_ct);
  /* _L18=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier#1)/ */
  Write_int_to_DMI_identifier_DATA_Packets_DMI_to_EVC(
    &outC->_L34,
    &outC->Context_Write_int_to_DMI_identifier_1);
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L18,
    &outC->Context_Write_int_to_DMI_identifier_1.dmi_identifier_ct_out);
  /* _L19=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest#1)/ */
  Write_int_to_DMI_Driver_Reqest_DATA_Packets_DMI_to_EVC(
    &outC->_L36,
    &outC->Context_Write_int_to_DMI_Driver_Reqest_1);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L19,
    &outC->Context_Write_int_to_DMI_Driver_Reqest_1.dmi_driver_request_ct);
  /* _L20=(DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier#1)/ */
  Write_int_to_DMI_Driver_Identifier_DATA_Packets_Bothways(
    &outC->_L37,
    &outC->Context_Write_int_to_DMI_Driver_Identifier_1);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L20,
    &outC->Context_Write_int_to_DMI_Driver_Identifier_1.dmi_driver_identifier_ct);
  /* _L21=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Running_Number#1)/ */
  Write_int_to_DMI_Train_Running_Number_DATA_Packets_Bothways(
    &outC->_L38,
    &outC->Context_Write_int_to_DMI_Train_Running_Number_1);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L21,
    &outC->Context_Write_int_to_DMI_Train_Running_Number_1.dmi_train_running_number_ct);
  /* _L22=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data#1)/ */
  Write_int_to_DMI_Radio_Net_Data_DATA_Packets_DMI_to_EVC(
    &outC->_L39,
    &outC->Context_Write_int_to_DMI_Radio_Net_Data_1);
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L22,
    &outC->Context_Write_int_to_DMI_Radio_Net_Data_1.dmi_radio_net_data_ct);
  /* _L23=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack#1)/ */
  Write_int_to_DMI_Text_Message_Ack_DATA_Packets_DMI_to_EVC(
    &outC->_L40,
    &outC->Context_Write_int_to_DMI_Text_Message_Ack_1);
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L23,
    &outC->Context_Write_int_to_DMI_Text_Message_Ack_1.dmi_text_message_ack_ct);
  /* _L24=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack#1)/ */
  Write_int_to_DMI_Train_Data_Ack_DATA_Packets_DMI_to_EVC(
    &outC->_L41,
    &outC->Context_Write_int_to_DMI_Train_Data_Ack_1);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L24,
    &outC->Context_Write_int_to_DMI_Train_Data_Ack_1.dmi_train_data_ack_ct);
  /* _L26=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Data#1)/ */
  Write_int_to_DMI_Train_Data_DATA_Packets_Bothways(
    &outC->_L42,
    &outC->Context_Write_int_to_DMI_Train_Data_1);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L26,
    &outC->Context_Write_int_to_DMI_Train_Data_1.dmi_train_data_ct);
  /* _L25=(DATA::Packets::Bothways::Write_int_to_DMI_Adhesion_Factor_Data#1)/ */
  Write_int_to_DMI_Adhesion_Factor_Data_DATA_Packets_Bothways(
    &outC->_L43,
    &outC->Context_Write_int_to_DMI_Adhesion_Factor_Data_1);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L25,
    &outC->Context_Write_int_to_DMI_Adhesion_Factor_Data_1.dmi_adhesion_factor_data_ct);
  /* _L27=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack#1)/ */
  Write_int_to_DMI_Icon_Ack_DATA_Packets_DMI_to_EVC(
    &outC->_L44,
    &outC->Context_Write_int_to_DMI_Icon_Ack_1);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L27,
    &outC->Context_Write_int_to_DMI_Icon_Ack_1.dmi_icon_ack_ct);
  /* _L28=(DATA::Packets::Bothways::Write_int_to_DMI_Level_Data#1)/ */
  Write_int_to_DMI_Level_Data_DATA_Packets_Bothways(
    &outC->_L45,
    &outC->Context_Write_int_to_DMI_Level_Data_1);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L28,
    &outC->Context_Write_int_to_DMI_Level_Data_1.dmi_level_data_ct);
  outC->_L29.present = outC->_L48;
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L29.status,
    &outC->_L17);
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L29.identifier,
    &outC->_L18);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L29.driverRequest,
    &outC->_L19);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &outC->_L29.driverIdentifier,
    &outC->_L20);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L29.trainRunningNumber,
    &outC->_L21);
  kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L29.radioNetData,
    &outC->_L22);
  kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L29.textMessageAck,
    &outC->_L23);
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L29.trainDataAck,
    &outC->_L24);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L29.trainData,
    &outC->_L26);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L29.adhesionFactor,
    &outC->_L25);
  kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L29.iconAck,
    &outC->_L27);
  kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L29.selectedLevel,
    &outC->_L28);
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&outC->dmi_to_evc_ct, &outC->_L29);
}

#ifndef KCG_USER_DEFINED_INIT
void CAST_int_to_DMI_to_EVC_init_Messages(
  outC_CAST_int_to_DMI_to_EVC_Messages *outC)
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

  outC->_L47 = kcg_lit_int32(0);
  outC->_L48 = kcg_true;
  outC->_L49 = kcg_lit_int32(0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L45[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L44[idx1] = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L43[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 9; idx3++) {
    outC->_L42[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 3; idx4++) {
    outC->_L41[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L40[idx5] = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 2; idx6++) {
    outC->_L39[idx6] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 3; idx7++) {
    outC->_L38[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 11; idx8++) {
    outC->_L37[idx8] = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 3; idx9++) {
    outC->_L36[idx9] = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 261; idx10++) {
    outC->_L34[idx10] = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 4; idx11++) {
    outC->_L33[idx11] = kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 311; idx12++) {
    outC->_L31[idx12] = kcg_lit_int32(0);
  }
  outC->_L29.present = kcg_true;
  outC->_L29.status.valid = kcg_true;
  outC->_L29.status.systemTime = kcg_lit_int32(0);
  outC->_L29.status.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L29.status.nAlive = kcg_lit_int32(0);
  outC->_L29.identifier.valid = kcg_true;
  outC->_L29.identifier.systemTime = kcg_lit_int32(0);
  outC->_L29.identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L29.identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L29.identifier.l_name = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 255; idx13++) {
    outC->_L29.identifier.DMI_name[idx13] = ' ';
  }
  outC->_L29.identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.driverRequest.valid = kcg_true;
  outC->_L29.driverRequest.systemTime = kcg_lit_int32(0);
  outC->_L29.driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L29.driverIdentifier.valid = kcg_true;
  outC->_L29.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 9; idx14++) {
    outC->_L29.driverIdentifier.driverIdentifier[idx14] = ' ';
  }
  outC->_L29.trainRunningNumber.valid = kcg_true;
  outC->_L29.trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->_L29.trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->_L29.radioNetData.valid = kcg_true;
  outC->_L29.radioNetData.systemTime = kcg_lit_int32(0);
  outC->_L29.textMessageAck.valid = kcg_true;
  outC->_L29.textMessageAck.systemTime = kcg_lit_int32(0);
  outC->_L29.textMessageAck.textMessage_ID = kcg_lit_int32(0);
  outC->_L29.textMessageAck.acknowledged = kcg_true;
  outC->_L29.trainDataAck.valid = kcg_true;
  outC->_L29.trainDataAck.systemTime = kcg_lit_int32(0);
  outC->_L29.trainDataAck.acknowledged = kcg_true;
  outC->_L29.trainData.valid = kcg_true;
  outC->_L29.trainData.systemTime = kcg_lit_int32(0);
  outC->_L29.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L29.trainData.l_train = kcg_lit_int32(0);
  outC->_L29.trainData.m_brakeperct = kcg_lit_int32(0);
  outC->_L29.trainData.v_maxTrain = kcg_lit_int32(0);
  outC->_L29.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L29.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L29.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L29.adhesionFactor.valid = kcg_true;
  outC->_L29.adhesionFactor.systemTime = kcg_lit_int32(0);
  outC->_L29.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L29.iconAck.valid = kcg_true;
  outC->_L29.iconAck.systemTime = kcg_lit_int32(0);
  outC->_L29.iconAck.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L29.selectedLevel.valid = kcg_true;
  outC->_L29.selectedLevel.systemTime = kcg_lit_int32(0);
  outC->_L29.selectedLevel.level.level = M_LEVEL_Level_0;
  outC->_L29.selectedLevel.level.nid_stm = kcg_lit_int32(0);
  outC->_L28.valid = kcg_true;
  outC->_L28.systemTime = kcg_lit_int32(0);
  outC->_L28.level.level = M_LEVEL_Level_0;
  outC->_L28.level.nid_stm = kcg_lit_int32(0);
  outC->_L27.valid = kcg_true;
  outC->_L27.systemTime = kcg_lit_int32(0);
  outC->_L27.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L26.valid = kcg_true;
  outC->_L26.systemTime = kcg_lit_int32(0);
  outC->_L26.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L26.l_train = kcg_lit_int32(0);
  outC->_L26.m_brakeperct = kcg_lit_int32(0);
  outC->_L26.v_maxTrain = kcg_lit_int32(0);
  outC->_L26.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L26.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L26.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L25.valid = kcg_true;
  outC->_L25.systemTime = kcg_lit_int32(0);
  outC->_L25.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L24.valid = kcg_true;
  outC->_L24.systemTime = kcg_lit_int32(0);
  outC->_L24.acknowledged = kcg_true;
  outC->_L23.valid = kcg_true;
  outC->_L23.systemTime = kcg_lit_int32(0);
  outC->_L23.textMessage_ID = kcg_lit_int32(0);
  outC->_L23.acknowledged = kcg_true;
  outC->_L22.valid = kcg_true;
  outC->_L22.systemTime = kcg_lit_int32(0);
  outC->_L21.valid = kcg_true;
  outC->_L21.systemTime = kcg_lit_int32(0);
  outC->_L21.trainRunningNumber = kcg_lit_int32(0);
  outC->_L20.valid = kcg_true;
  outC->_L20.systemTime = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 9; idx15++) {
    outC->_L20.driverIdentifier[idx15] = ' ';
  }
  outC->_L19.valid = kcg_true;
  outC->_L19.systemTime = kcg_lit_int32(0);
  outC->_L19.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L18.valid = kcg_true;
  outC->_L18.systemTime = kcg_lit_int32(0);
  outC->_L18.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L18.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L18.l_name = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 255; idx16++) {
    outC->_L18.DMI_name[idx16] = ' ';
  }
  outC->_L18.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.valid = kcg_true;
  outC->_L17.systemTime = kcg_lit_int32(0);
  outC->_L17.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L17.nAlive = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.present = kcg_true;
  outC->dmi_to_evc_ct.status.valid = kcg_true;
  outC->dmi_to_evc_ct.status.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.status.statusSet = Running_state_DMI_Types_Pkg;
  outC->dmi_to_evc_ct.status.nAlive = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.identifier.valid = kcg_true;
  outC->dmi_to_evc_ct.identifier.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->dmi_to_evc_ct.identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->dmi_to_evc_ct.identifier.l_name = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 255; idx17++) {
    outC->dmi_to_evc_ct.identifier.DMI_name[idx17] = ' ';
  }
  outC->dmi_to_evc_ct.identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dmi_to_evc_ct.driverRequest.valid = kcg_true;
  outC->dmi_to_evc_ct.driverRequest.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->dmi_to_evc_ct.driverIdentifier.valid = kcg_true;
  outC->dmi_to_evc_ct.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 9; idx18++) {
    outC->dmi_to_evc_ct.driverIdentifier.driverIdentifier[idx18] = ' ';
  }
  outC->dmi_to_evc_ct.trainRunningNumber.valid = kcg_true;
  outC->dmi_to_evc_ct.trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.radioNetData.valid = kcg_true;
  outC->dmi_to_evc_ct.radioNetData.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.textMessageAck.valid = kcg_true;
  outC->dmi_to_evc_ct.textMessageAck.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.textMessageAck.textMessage_ID = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.textMessageAck.acknowledged = kcg_true;
  outC->dmi_to_evc_ct.trainDataAck.valid = kcg_true;
  outC->dmi_to_evc_ct.trainDataAck.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.trainDataAck.acknowledged = kcg_true;
  outC->dmi_to_evc_ct.trainData.valid = kcg_true;
  outC->dmi_to_evc_ct.trainData.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->dmi_to_evc_ct.trainData.l_train = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.trainData.m_brakeperct = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.trainData.v_maxTrain = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->dmi_to_evc_ct.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->dmi_to_evc_ct.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->dmi_to_evc_ct.adhesionFactor.valid = kcg_true;
  outC->dmi_to_evc_ct.adhesionFactor.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->dmi_to_evc_ct.iconAck.valid = kcg_true;
  outC->dmi_to_evc_ct.iconAck.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.iconAck.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.selectedLevel.valid = kcg_true;
  outC->dmi_to_evc_ct.selectedLevel.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.selectedLevel.level.level = M_LEVEL_Level_0;
  outC->dmi_to_evc_ct.selectedLevel.level.nid_stm = kcg_lit_int32(0);
  /* _L28=(DATA::Packets::Bothways::Write_int_to_DMI_Level_Data#1)/ */
  Write_int_to_DMI_Level_Data_init_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Level_Data_1);
  /* _L27=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack#1)/ */
  Write_int_to_DMI_Icon_Ack_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Icon_Ack_1);
  /* _L25=(DATA::Packets::Bothways::Write_int_to_DMI_Adhesion_Factor_Data#1)/ */
  Write_int_to_DMI_Adhesion_Factor_Data_init_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Adhesion_Factor_Data_1);
  /* _L26=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Data#1)/ */
  Write_int_to_DMI_Train_Data_init_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Train_Data_1);
  /* _L24=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack#1)/ */
  Write_int_to_DMI_Train_Data_Ack_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Train_Data_Ack_1);
  /* _L23=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack#1)/ */
  Write_int_to_DMI_Text_Message_Ack_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Text_Message_Ack_1);
  /* _L22=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data#1)/ */
  Write_int_to_DMI_Radio_Net_Data_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Radio_Net_Data_1);
  /* _L21=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Running_Number#1)/ */
  Write_int_to_DMI_Train_Running_Number_init_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Train_Running_Number_1);
  /* _L20=(DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier#1)/ */
  Write_int_to_DMI_Driver_Identifier_init_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Driver_Identifier_1);
  /* _L19=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest#1)/ */
  Write_int_to_DMI_Driver_Reqest_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Driver_Reqest_1);
  /* _L18=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier#1)/ */
  Write_int_to_DMI_identifier_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_identifier_1);
  /* _L17=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status#1)/ */
  Write_int_to_DMI_Status_init_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Status_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CAST_int_to_DMI_to_EVC_reset_Messages(
  outC_CAST_int_to_DMI_to_EVC_Messages *outC)
{
  /* _L28=(DATA::Packets::Bothways::Write_int_to_DMI_Level_Data#1)/ */
  Write_int_to_DMI_Level_Data_reset_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Level_Data_1);
  /* _L27=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Icon_Ack#1)/ */
  Write_int_to_DMI_Icon_Ack_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Icon_Ack_1);
  /* _L25=(DATA::Packets::Bothways::Write_int_to_DMI_Adhesion_Factor_Data#1)/ */
  Write_int_to_DMI_Adhesion_Factor_Data_reset_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Adhesion_Factor_Data_1);
  /* _L26=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Data#1)/ */
  Write_int_to_DMI_Train_Data_reset_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Train_Data_1);
  /* _L24=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Train_Data_Ack#1)/ */
  Write_int_to_DMI_Train_Data_Ack_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Train_Data_Ack_1);
  /* _L23=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Text_Message_Ack#1)/ */
  Write_int_to_DMI_Text_Message_Ack_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Text_Message_Ack_1);
  /* _L22=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Radio_Net_Data#1)/ */
  Write_int_to_DMI_Radio_Net_Data_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Radio_Net_Data_1);
  /* _L21=(DATA::Packets::Bothways::Write_int_to_DMI_Train_Running_Number#1)/ */
  Write_int_to_DMI_Train_Running_Number_reset_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Train_Running_Number_1);
  /* _L20=(DATA::Packets::Bothways::Write_int_to_DMI_Driver_Identifier#1)/ */
  Write_int_to_DMI_Driver_Identifier_reset_DATA_Packets_Bothways(
    &outC->Context_Write_int_to_DMI_Driver_Identifier_1);
  /* _L19=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Driver_Reqest#1)/ */
  Write_int_to_DMI_Driver_Reqest_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Driver_Reqest_1);
  /* _L18=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_identifier#1)/ */
  Write_int_to_DMI_identifier_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_identifier_1);
  /* _L17=(DATA::Packets::DMI_to_EVC::Write_int_to_DMI_Status#1)/ */
  Write_int_to_DMI_Status_reset_DATA_Packets_DMI_to_EVC(
    &outC->Context_Write_int_to_DMI_Status_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_to_EVC_Messages.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

