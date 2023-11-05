/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_int_to_DMI_to_EVC_Messages.h"

/* Messages::Write_int_to_DMI_to_EVC/ */
void Write_int_to_DMI_to_EVC_Messages(
  /* dmi_to_evc_int/ */
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmi_to_evc_int,
  outC_Write_int_to_DMI_to_EVC_Messages *outC)
{
  static DMI_to_EVC_Message_T_API_DMI_Pkg op_call;

  outC->_L4 = kcg_lit_int32(1);
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&outC->_L1, dmi_to_evc_int);
  outC->_L2 = outC->_L1[0];
  outC->_L3 = outC->_L2 == outC->_L4;
  outC->every = outC->_L3;
  if (outC->every) {
    /* _L5=(Messages::CAST_int_to_DMI_to_EVC#1)/ */
    CAST_int_to_DMI_to_EVC_Messages(
      &outC->_L1,
      &outC->Context_CAST_int_to_DMI_to_EVC_1);
    kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_int_to_DMI_to_EVC_1.dmi_to_evc_ct);
  }
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(
    &outC->_L6,
    (DMI_to_EVC_Message_T_API_DMI_Pkg *) &cDMI_EVC_CT_Messages);
  if (outC->every) {
    kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&outC->_L5, &op_call);
  }
  else {
    kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&outC->_L5, &outC->_L6);
  }
  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&outC->dmi_to_evc_ct, &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_int_to_DMI_to_EVC_init_Messages(
  outC_Write_int_to_DMI_to_EVC_Messages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L6.present = kcg_true;
  outC->_L6.status.valid = kcg_true;
  outC->_L6.status.systemTime = kcg_lit_int32(0);
  outC->_L6.status.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L6.status.nAlive = kcg_lit_int32(0);
  outC->_L6.identifier.valid = kcg_true;
  outC->_L6.identifier.systemTime = kcg_lit_int32(0);
  outC->_L6.identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L6.identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L6.identifier.l_name = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L6.identifier.DMI_name[idx] = ' ';
  }
  outC->_L6.identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.driverRequest.valid = kcg_true;
  outC->_L6.driverRequest.systemTime = kcg_lit_int32(0);
  outC->_L6.driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L6.driverIdentifier.valid = kcg_true;
  outC->_L6.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L6.driverIdentifier.driverIdentifier[idx1] = ' ';
  }
  outC->_L6.trainRunningNumber.valid = kcg_true;
  outC->_L6.trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->_L6.trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->_L6.radioNetData.valid = kcg_true;
  outC->_L6.radioNetData.systemTime = kcg_lit_int32(0);
  outC->_L6.textMessageAck.valid = kcg_true;
  outC->_L6.textMessageAck.systemTime = kcg_lit_int32(0);
  outC->_L6.textMessageAck.textMessage_ID = kcg_lit_int32(0);
  outC->_L6.textMessageAck.acknowledged = kcg_true;
  outC->_L6.trainDataAck.valid = kcg_true;
  outC->_L6.trainDataAck.systemTime = kcg_lit_int32(0);
  outC->_L6.trainDataAck.acknowledged = kcg_true;
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
  outC->_L6.iconAck.valid = kcg_true;
  outC->_L6.iconAck.systemTime = kcg_lit_int32(0);
  outC->_L6.iconAck.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L6.selectedLevel.valid = kcg_true;
  outC->_L6.selectedLevel.systemTime = kcg_lit_int32(0);
  outC->_L6.selectedLevel.level.level = M_LEVEL_Level_0;
  outC->_L6.selectedLevel.level.nid_stm = kcg_lit_int32(0);
  outC->_L5.present = kcg_true;
  outC->_L5.status.valid = kcg_true;
  outC->_L5.status.systemTime = kcg_lit_int32(0);
  outC->_L5.status.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L5.status.nAlive = kcg_lit_int32(0);
  outC->_L5.identifier.valid = kcg_true;
  outC->_L5.identifier.systemTime = kcg_lit_int32(0);
  outC->_L5.identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L5.identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L5.identifier.l_name = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L5.identifier.DMI_name[idx2] = ' ';
  }
  outC->_L5.identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.driverRequest.valid = kcg_true;
  outC->_L5.driverRequest.systemTime = kcg_lit_int32(0);
  outC->_L5.driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L5.driverIdentifier.valid = kcg_true;
  outC->_L5.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 9; idx3++) {
    outC->_L5.driverIdentifier.driverIdentifier[idx3] = ' ';
  }
  outC->_L5.trainRunningNumber.valid = kcg_true;
  outC->_L5.trainRunningNumber.systemTime = kcg_lit_int32(0);
  outC->_L5.trainRunningNumber.trainRunningNumber = kcg_lit_int32(0);
  outC->_L5.radioNetData.valid = kcg_true;
  outC->_L5.radioNetData.systemTime = kcg_lit_int32(0);
  outC->_L5.textMessageAck.valid = kcg_true;
  outC->_L5.textMessageAck.systemTime = kcg_lit_int32(0);
  outC->_L5.textMessageAck.textMessage_ID = kcg_lit_int32(0);
  outC->_L5.textMessageAck.acknowledged = kcg_true;
  outC->_L5.trainDataAck.valid = kcg_true;
  outC->_L5.trainDataAck.systemTime = kcg_lit_int32(0);
  outC->_L5.trainDataAck.acknowledged = kcg_true;
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
  outC->_L5.iconAck.valid = kcg_true;
  outC->_L5.iconAck.systemTime = kcg_lit_int32(0);
  outC->_L5.iconAck.DMI_nid_icon_identifier = kcg_lit_int32(0);
  outC->_L5.selectedLevel.valid = kcg_true;
  outC->_L5.selectedLevel.systemTime = kcg_lit_int32(0);
  outC->_L5.selectedLevel.level.level = M_LEVEL_Level_0;
  outC->_L5.selectedLevel.level.nid_stm = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 311; idx4++) {
    outC->_L1[idx4] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
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
  for (idx5 = 0; idx5 < 255; idx5++) {
    outC->dmi_to_evc_ct.identifier.DMI_name[idx5] = ' ';
  }
  outC->dmi_to_evc_ct.identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dmi_to_evc_ct.driverRequest.valid = kcg_true;
  outC->dmi_to_evc_ct.driverRequest.systemTime = kcg_lit_int32(0);
  outC->dmi_to_evc_ct.driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->dmi_to_evc_ct.driverIdentifier.valid = kcg_true;
  outC->dmi_to_evc_ct.driverIdentifier.systemTime = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 9; idx6++) {
    outC->dmi_to_evc_ct.driverIdentifier.driverIdentifier[idx6] = ' ';
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
  /* _L5=(Messages::CAST_int_to_DMI_to_EVC#1)/ */
  CAST_int_to_DMI_to_EVC_init_Messages(&outC->Context_CAST_int_to_DMI_to_EVC_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_int_to_DMI_to_EVC_reset_Messages(
  outC_Write_int_to_DMI_to_EVC_Messages *outC)
{
  /* _L5=(Messages::CAST_int_to_DMI_to_EVC#1)/ */
  CAST_int_to_DMI_to_EVC_reset_Messages(
    &outC->Context_CAST_int_to_DMI_to_EVC_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_int_to_DMI_to_EVC_Messages.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

