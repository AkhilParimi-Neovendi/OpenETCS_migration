/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_DMI_to_EVC_to_int_Messages.h"

/* Messages::Write_DMI_to_EVC_to_int/ */
void Write_DMI_to_EVC_to_int_Messages(
  /* dmi_to_evc_ct/ */
  DMI_to_EVC_Message_T_API_DMI_Pkg *dmi_to_evc_ct,
  outC_Write_DMI_to_EVC_to_int_Messages *outC)
{
  static DMI_to_EVC_Message_int_T_API_DMI_Pkg op_call;

  kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(&outC->_L1, dmi_to_evc_ct);
  outC->_L3 = outC->_L1.present;
  outC->every = outC->_L3;
  if (outC->every) {
    /* _L2=(Messages::CAST_DMI_to_EVC_to_int#1)/ */
    CAST_DMI_to_EVC_to_int_Messages(
      &outC->_L1,
      &outC->Context_CAST_DMI_to_EVC_to_int_1);
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
      &op_call,
      &outC->Context_CAST_DMI_to_EVC_to_int_1.dmi_to_evc_int);
  }
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &outC->_L4,
    (DMI_to_EVC_Message_int_T_API_DMI_Pkg *) &cDMI_EVC_int_array_Messages);
  if (outC->every) {
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&outC->_L2, &op_call);
  }
  else {
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&outC->_L2, &outC->_L4);
  }
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
    &outC->dmi_to_evc_int,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void Write_DMI_to_EVC_to_int_init_Messages(
  outC_Write_DMI_to_EVC_to_int_Messages *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  for (idx = 0; idx < 311; idx++) {
    outC->_L4[idx] = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_true;
  for (idx1 = 0; idx1 < 311; idx1++) {
    outC->_L2[idx1] = kcg_lit_int64(0);
  }
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
  for (idx2 = 0; idx2 < 255; idx2++) {
    outC->_L1.identifier.DMI_name[idx2] = ' ';
  }
  outC->_L1.identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.driverRequest.valid = kcg_true;
  outC->_L1.driverRequest.systemTime = kcg_lit_int64(0);
  outC->_L1.driverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L1.driverIdentifier.valid = kcg_true;
  outC->_L1.driverIdentifier.systemTime = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 9; idx3++) {
    outC->_L1.driverIdentifier.driverIdentifier[idx3] = ' ';
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
  outC->every = kcg_true;
  for (idx4 = 0; idx4 < 311; idx4++) {
    outC->dmi_to_evc_int[idx4] = kcg_lit_int64(0);
  }
  /* _L2=(Messages::CAST_DMI_to_EVC_to_int#1)/ */
  CAST_DMI_to_EVC_to_int_init_Messages(&outC->Context_CAST_DMI_to_EVC_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Write_DMI_to_EVC_to_int_reset_Messages(
  outC_Write_DMI_to_EVC_to_int_Messages *outC)
{
  /* _L2=(Messages::CAST_DMI_to_EVC_to_int#1)/ */
  CAST_DMI_to_EVC_to_int_reset_Messages(
    &outC->Context_CAST_DMI_to_EVC_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_DMI_to_EVC_to_int_Messages.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

