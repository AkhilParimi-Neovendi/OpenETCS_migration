/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "maintainTrainProperties_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::maintainTrainProperties/ */
void maintainTrainProperties_EVC_MEM_Support_Pkg(
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* trainRunningNumber/ */
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *trainRunningNumber,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* nid_engine/ */
  NID_ENGINE nid_engine,
  outC_maintainTrainProperties_EVC_MEM_Support_Pkg *outC)
{
  outC->_L27 = nid_engine;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L26,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocationAccuracyDefault);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L25,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cD_FE2RE);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L24,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cD_Antenna2FE);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L23,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cCenterDetectionAccuracyDefault);
  outC->_L22 = kcg_lit_int32(100);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L18, trainData);
  outC->_L19 = outC->_L18.trainLength;
  outC->_L21 = outC->_L19 / outC->_L22;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L15,
    trainProperties);
  outC->_L16 = outC->_L15.nid_operational;
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &outC->_L10,
    trainRunningNumber);
  outC->_L13 = outC->_L10.trainRunningNumber;
  outC->_L11 = outC->_L10.valid;
  /* _L14= */
  if (outC->_L11) {
    outC->_L14 = outC->_L13;
  }
  else {
    outC->_L14 = outC->_L16;
  }
  outC->_L17.nid_engine = outC->_L27;
  outC->_L17.nid_operational = outC->_L14;
  outC->_L17.l_train = outC->_L21;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L17.d_baliseAntenna_2_frontend,
    &outC->_L24);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L17.d_frontend_2_rearend,
    &outC->_L25);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L17.locationAccuracy_DefaultValue,
    &outC->_L26);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L17.centerDetectionAcc_DefaultValue,
    &outC->_L23);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->UpdatedtrainProperties,
    &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void maintainTrainProperties_init_EVC_MEM_Support_Pkg(
  outC_maintainTrainProperties_EVC_MEM_Support_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L27 = kcg_lit_int32(0);
  outC->_L26.nominal = kcg_lit_int32(0);
  outC->_L26.d_min = kcg_lit_int32(0);
  outC->_L26.d_max = kcg_lit_int32(0);
  outC->_L25.nominal = kcg_lit_int32(0);
  outC->_L25.d_min = kcg_lit_int32(0);
  outC->_L25.d_max = kcg_lit_int32(0);
  outC->_L24.nominal = kcg_lit_int32(0);
  outC->_L24.d_min = kcg_lit_int32(0);
  outC->_L24.d_max = kcg_lit_int32(0);
  outC->_L23.nominal = kcg_lit_int32(0);
  outC->_L23.d_min = kcg_lit_int32(0);
  outC->_L23.d_max = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18.valid = kcg_true;
  outC->_L18.acknowledgedByDriver = kcg_true;
  outC->_L18.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L18.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L18.trainLength = kcg_lit_int32(0);
  outC->_L18.brakePerctage = kcg_lit_int32(0);
  outC->_L18.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L18.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L18.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L18.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L18.axleNumber = kcg_lit_int32(0);
  outC->_L18.numberNationalSystems = kcg_lit_int32(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L18.nationSystems[idx] = kcg_lit_int32(0);
  }
  outC->_L18.numberTractionSystems = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L18.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L18.tractionSystem[idx1].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L17.nid_engine = kcg_lit_int32(0);
  outC->_L17.nid_operational = kcg_lit_int32(0);
  outC->_L17.l_train = kcg_lit_int32(0);
  outC->_L17.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L17.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L17.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L17.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L17.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L17.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L17.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L17.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L17.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L17.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L17.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L17.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15.nid_engine = kcg_lit_int32(0);
  outC->_L15.nid_operational = kcg_lit_int32(0);
  outC->_L15.l_train = kcg_lit_int32(0);
  outC->_L15.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L15.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L15.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L15.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L15.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L15.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L15.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L15.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L15.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L15.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L15.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L15.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L11 = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.systemTime = kcg_lit_int32(0);
  outC->_L10.trainRunningNumber = kcg_lit_int32(0);
  outC->UpdatedtrainProperties.nid_engine = kcg_lit_int32(0);
  outC->UpdatedtrainProperties.nid_operational = kcg_lit_int32(0);
  outC->UpdatedtrainProperties.l_train = kcg_lit_int32(0);
  outC->UpdatedtrainProperties.d_baliseAntenna_2_frontend.nominal =
    kcg_lit_int32(0);
  outC->UpdatedtrainProperties.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(
      0);
  outC->UpdatedtrainProperties.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(
      0);
  outC->UpdatedtrainProperties.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->UpdatedtrainProperties.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->UpdatedtrainProperties.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->UpdatedtrainProperties.locationAccuracy_DefaultValue.nominal =
    kcg_lit_int32(0);
  outC->UpdatedtrainProperties.locationAccuracy_DefaultValue.d_min =
    kcg_lit_int32(0);
  outC->UpdatedtrainProperties.locationAccuracy_DefaultValue.d_max =
    kcg_lit_int32(0);
  outC->UpdatedtrainProperties.centerDetectionAcc_DefaultValue.nominal =
    kcg_lit_int32(0);
  outC->UpdatedtrainProperties.centerDetectionAcc_DefaultValue.d_min =
    kcg_lit_int32(0);
  outC->UpdatedtrainProperties.centerDetectionAcc_DefaultValue.d_max =
    kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void maintainTrainProperties_reset_EVC_MEM_Support_Pkg(
  outC_maintainTrainProperties_EVC_MEM_Support_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** maintainTrainProperties_EVC_MEM_Support_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

