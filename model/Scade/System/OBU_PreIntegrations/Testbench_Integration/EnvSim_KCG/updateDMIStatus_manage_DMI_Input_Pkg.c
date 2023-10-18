/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateDMIStatus_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::updateDMIStatus/ */
void updateDMIStatus_manage_DMI_Input_Pkg(
  /* oldStatus/ */
  DMI_EVC_status_T_DMI_Types_Pkg *oldStatus,
  /* fromDMI/ */
  DMI_to_EVC_Message_T_API_DMI_Pkg *fromDMI,
  /* sndValidationRequested/ */
  kcg_bool sndValidationRequested,
  outC_updateDMIStatus_manage_DMI_Input_Pkg *outC)
{
  outC->_L73 = Start_of_mission_DMI_Types_Pkg;
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&outC->_L1, fromDMI);
  outC->_L71 = outC->_L1.driverRequest.m_request;
  outC->_L72 = outC->_L71 == outC->_L73;
  outC->_L32 = outC->_L1.driverRequest.valid;
  outC->_L74 = outC->_L32 & outC->_L72;
  outC->_L70 = outC->_L1.selectedLevel.valid;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->_L2, oldStatus);
  outC->_L69 = outC->_L2.DMI_LevelSelectedByDirver;
  outC->_L68 = outC->_L69 | outC->_L70;
  outC->_L67 = sndValidationRequested;
  outC->_L62 = outC->_L2.DMI_TrainDataValidated;
  outC->_L65 = outC->_L1.trainDataAck.acknowledged;
  outC->_L63 = outC->_L1.trainDataAck.valid;
  /* _L66= */
  if (outC->_L63) {
    outC->_L66 = outC->_L65;
  }
  else {
    outC->_L66 = outC->_L62;
  }
  outC->_L31 = outC->_L1.trainRunningNumber.valid;
  outC->_L49 = outC->_L31 & outC->_L67;
  outC->_L46 = sndValidationRequested;
  outC->_L48 = !outC->_L46;
  outC->_L23 = outC->_L1.trainRunningNumber.valid;
  outC->_L47 = outC->_L48 & outC->_L23;
  outC->_L33 = outC->_L2.DMI_StartReceived;
  outC->_L34 = outC->_L33 | outC->_L74;
  outC->_L29 = outC->_L2.DMI_TrainRunningNumberValidated;
  outC->_L30 = outC->_L49 | outC->_L29;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L21,
    &outC->_L1.identifier);
  outC->_L28 = outC->_L21.valid;
  outC->_L24 = outC->_L2.DMI_TrainRunningNumberFirstValidation;
  outC->_L25 = outC->_L24 | outC->_L47;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L22,
    &outC->_L2.DMI_Identifier);
  /* _L20= */
  if (outC->_L28) {
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(&outC->_L20, &outC->_L21);
  }
  else {
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(&outC->_L20, &outC->_L22);
  }
  outC->_L17 = outC->_L1.driverIdentifier.valid;
  outC->_L18 = outC->_L2.DMI_DriverIdValidated;
  outC->_L19 = outC->_L18 | outC->_L17;
  outC->_L16 = kcg_false;
  outC->_L4 = outC->_L2.DMI_Active;
  outC->_L3 = outC->_L1.present;
  outC->_L5 = outC->_L3 | outC->_L4;
  outC->_L15.DMI_Active = outC->_L5;
  outC->_L15.DMI_Error = outC->_L16;
  outC->_L15.DMI_DriverIdValidated = outC->_L19;
  outC->_L15.DMI_LevelSelectedByDirver = outC->_L68;
  outC->_L15.DMI_TrainRunningNumberFirstValidation = outC->_L25;
  outC->_L15.DMI_TrainRunningNumberValidated = outC->_L30;
  outC->_L15.DMI_TrainDataValidated = outC->_L66;
  outC->_L15.DMI_StartReceived = outC->_L34;
  kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L15.DMI_Identifier,
    &outC->_L20);
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->newStatus, &outC->_L15);
}

#ifndef KCG_USER_DEFINED_INIT
void updateDMIStatus_init_manage_DMI_Input_Pkg(
  outC_updateDMIStatus_manage_DMI_Input_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L74 = kcg_true;
  outC->_L73 = Start_of_mission_DMI_Types_Pkg;
  outC->_L72 = kcg_true;
  outC->_L71 = Start_of_mission_DMI_Types_Pkg;
  outC->_L68 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L22.valid = kcg_true;
  outC->_L22.systemTime = kcg_lit_int64(0);
  outC->_L22.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L22.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L22.l_name = kcg_lit_int64(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L22.DMI_name[idx] = ' ';
  }
  outC->_L22.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.valid = kcg_true;
  outC->_L21.systemTime = kcg_lit_int64(0);
  outC->_L21.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L21.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L21.l_name = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 255; idx1++) {
    outC->_L21.DMI_name[idx1] = ' ';
  }
  outC->_L21.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20.valid = kcg_true;
  outC->_L20.systemTime = kcg_lit_int64(0);
  outC->_L20.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L20.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L20.l_name = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L20.DMI_name[idx2] = ' ';
  }
  outC->_L20.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15.DMI_Active = kcg_true;
  outC->_L15.DMI_Error = kcg_true;
  outC->_L15.DMI_DriverIdValidated = kcg_true;
  outC->_L15.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L15.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L15.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L15.DMI_TrainDataValidated = kcg_true;
  outC->_L15.DMI_StartReceived = kcg_true;
  outC->_L15.DMI_Identifier.valid = kcg_true;
  outC->_L15.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->_L15.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L15.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L15.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 255; idx3++) {
    outC->_L15.DMI_Identifier.DMI_name[idx3] = ' ';
  }
  outC->_L15.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2.DMI_Active = kcg_true;
  outC->_L2.DMI_Error = kcg_true;
  outC->_L2.DMI_DriverIdValidated = kcg_true;
  outC->_L2.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L2.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L2.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L2.DMI_TrainDataValidated = kcg_true;
  outC->_L2.DMI_StartReceived = kcg_true;
  outC->_L2.DMI_Identifier.valid = kcg_true;
  outC->_L2.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->_L2.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L2.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L2.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->_L2.DMI_Identifier.DMI_name[idx4] = ' ';
  }
  outC->_L2.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.present = kcg_true;
  outC->_L1.status.valid = kcg_true;
  outC->_L1.status.systemTime = kcg_lit_int64(0);
  outC->_L1.status.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L1.status.nAlive = kcg_lit_int64(0);
  outC->_L1.identifier.valid = kcg_true;
  outC->_L1.identifier.systemTime = kcg_lit_int64(0);
  outC->_L1.identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L1.identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L1.identifier.l_name = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->_L1.identifier.DMI_name[idx5] = ' ';
  }
  outC->_L1.identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.driverRequest.valid = kcg_true;
  outC->_L1.driverRequest.systemTime = kcg_lit_int64(0);
  outC->_L1.driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L1.driverIdentifier.valid = kcg_true;
  outC->_L1.driverIdentifier.systemTime = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 9; idx6++) {
    outC->_L1.driverIdentifier.driverIdentifier[idx6] = ' ';
  }
  outC->_L1.trainRunningNumber.valid = kcg_true;
  outC->_L1.trainRunningNumber.systemTime = kcg_lit_int64(0);
  outC->_L1.trainRunningNumber.trainRunningNumber = kcg_lit_int64(0);
  outC->_L1.radioNetData.valid = kcg_true;
  outC->_L1.radioNetData.systemTime = kcg_lit_int64(0);
  outC->_L1.textMessageAck.valid = kcg_true;
  outC->_L1.textMessageAck.systemTime = kcg_lit_int64(0);
  outC->_L1.textMessageAck.textMessage_ID = kcg_lit_int64(0);
  outC->_L1.textMessageAck.acknowledged = kcg_true;
  outC->_L1.trainDataAck.valid = kcg_true;
  outC->_L1.trainDataAck.systemTime = kcg_lit_int64(0);
  outC->_L1.trainDataAck.acknowledged = kcg_true;
  outC->_L1.trainData.valid = kcg_true;
  outC->_L1.trainData.systemTime = kcg_lit_int64(0);
  outC->_L1.trainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.trainData.l_train = kcg_lit_int64(0);
  outC->_L1.trainData.m_brakeperct = kcg_lit_int64(0);
  outC->_L1.trainData.v_maxTrain = kcg_lit_int64(0);
  outC->_L1.trainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L1.trainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L1.trainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.adhesionFactor.valid = kcg_true;
  outC->_L1.adhesionFactor.systemTime = kcg_lit_int64(0);
  outC->_L1.adhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->_L1.iconAck.valid = kcg_true;
  outC->_L1.iconAck.systemTime = kcg_lit_int64(0);
  outC->_L1.iconAck.DMI_nid_icon_identifier = kcg_lit_int64(0);
  outC->_L1.selectedLevel.valid = kcg_true;
  outC->_L1.selectedLevel.systemTime = kcg_lit_int64(0);
  outC->_L1.selectedLevel.level.level = M_LEVEL_Level_0;
  outC->_L1.selectedLevel.level.nid_stm = kcg_lit_int64(0);
  outC->newStatus.DMI_Active = kcg_true;
  outC->newStatus.DMI_Error = kcg_true;
  outC->newStatus.DMI_DriverIdValidated = kcg_true;
  outC->newStatus.DMI_LevelSelectedByDirver = kcg_true;
  outC->newStatus.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->newStatus.DMI_TrainRunningNumberValidated = kcg_true;
  outC->newStatus.DMI_TrainDataValidated = kcg_true;
  outC->newStatus.DMI_StartReceived = kcg_true;
  outC->newStatus.DMI_Identifier.valid = kcg_true;
  outC->newStatus.DMI_Identifier.systemTime = kcg_lit_int64(0);
  outC->newStatus.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->newStatus.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->newStatus.DMI_Identifier.l_name = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 255; idx7++) {
    outC->newStatus.DMI_Identifier.DMI_name[idx7] = ' ';
  }
  outC->newStatus.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void updateDMIStatus_reset_manage_DMI_Input_Pkg(
  outC_updateDMIStatus_manage_DMI_Input_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** updateDMIStatus_manage_DMI_Input_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

