/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "storeDriverInput_trainData_pkg.h"

/* trainData_pkg::storeDriverInput/ */
void storeDriverInput_trainData_pkg(
  /* fromDMI_TrainData/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *fromDMI_TrainData,
  /* trainDataAckfromDriver/ */
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* originalTrainData/ */
  trainData_T_TIU_Types_Pkg *originalTrainData,
  /* actualStatus/ */
  trainDataStatus_T_trainData_Types_pkg *actualStatus,
  outC_storeDriverInput_trainData_pkg *outC)
{
  /* trainDataForEVC/ */
  static trainData_T_TIU_Types_Pkg trainDataForEVC_partial;
  /* trainDataForEVC/ */
  static trainData_T_TIU_Types_Pkg _1_trainDataForEVC_partial;

  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L74, originalTrainData);
  outC->_L79 = outC->_L74.acknowledgedByDriver;
  kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L75,
    trainDataAckfromDriver);
  outC->_L78 = outC->_L75.acknowledged;
  outC->_L76 = outC->_L75.valid;
  /* _L77= */
  if (outC->_L76) {
    outC->_L77 = outC->_L78;
  }
  else {
    outC->_L77 = outC->_L79;
  }
  outC->newState = outC->_L77;
  outC->_L81 = outC->newState;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L82, actualStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L80, &outC->_L82);
  if (kcg_true) {
    outC->_L80.validatedByDriver = outC->_L81;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->updatedStatus,
    &outC->_L80);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->_L72,
    fromDMI_TrainData);
  outC->_L73 = outC->_L72.valid;
  outC->updateTrainData = outC->_L73;
  outC->IfBlock1_clock = outC->updateTrainData;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L34_then_IfBlock1 = outC->newState;
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->_L27_then_IfBlock1,
      fromDMI_TrainData);
    outC->_L33_then_IfBlock1 = outC->_L27_then_IfBlock1.m_brakeperct;
    outC->_L32_then_IfBlock1 = outC->_L27_then_IfBlock1.l_train;
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &outC->_L29_then_IfBlock1,
      originalTrainData);
    outC->_L28_then_IfBlock1 = outC->_L29_then_IfBlock1.valid;
    outC->_L22_then_IfBlock1 = outC->_L27_then_IfBlock1.trainCategory;
    outC->_L20_then_IfBlock1 = outC->_L29_then_IfBlock1.cantDeficientcy;
    outC->_L26_then_IfBlock1 = outC->_L27_then_IfBlock1.v_maxTrain;
    outC->_L16_then_IfBlock1 = outC->_L27_then_IfBlock1.m_loadingGauge;
    outC->_L19_then_IfBlock1 = outC->_L27_then_IfBlock1.m_axleLoad;
    outC->_L18_then_IfBlock1 = outC->_L27_then_IfBlock1.m_airTight;
    outC->_L25_then_IfBlock1 = outC->_L29_then_IfBlock1.axleNumber;
    outC->_L17_then_IfBlock1 = outC->_L29_then_IfBlock1.numberNationalSystems;
    kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &outC->_L30_then_IfBlock1,
      &outC->_L29_then_IfBlock1.nationSystems);
    outC->_L24_then_IfBlock1 = outC->_L29_then_IfBlock1.numberTractionSystems;
    kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &outC->_L23_then_IfBlock1,
      &outC->_L29_then_IfBlock1.tractionSystem);
    outC->_L31_then_IfBlock1.valid = outC->_L28_then_IfBlock1;
    outC->_L31_then_IfBlock1.acknowledgedByDriver = outC->_L34_then_IfBlock1;
    outC->_L31_then_IfBlock1.trainCategory = outC->_L22_then_IfBlock1;
    outC->_L31_then_IfBlock1.cantDeficientcy = outC->_L20_then_IfBlock1;
    outC->_L31_then_IfBlock1.trainLength = outC->_L32_then_IfBlock1;
    outC->_L31_then_IfBlock1.brakePerctage = outC->_L33_then_IfBlock1;
    outC->_L31_then_IfBlock1.maxTrainSpeed = outC->_L26_then_IfBlock1;
    outC->_L31_then_IfBlock1.loadingGauge = outC->_L16_then_IfBlock1;
    outC->_L31_then_IfBlock1.axleLoadCategory = outC->_L19_then_IfBlock1;
    outC->_L31_then_IfBlock1.airtightSystem = outC->_L18_then_IfBlock1;
    outC->_L31_then_IfBlock1.axleNumber = outC->_L25_then_IfBlock1;
    outC->_L31_then_IfBlock1.numberNationalSystems = outC->_L17_then_IfBlock1;
    kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &outC->_L31_then_IfBlock1.nationSystems,
      &outC->_L30_then_IfBlock1);
    outC->_L31_then_IfBlock1.numberTractionSystems = outC->_L24_then_IfBlock1;
    kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &outC->_L31_then_IfBlock1.tractionSystem,
      &outC->_L23_then_IfBlock1);
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &trainDataForEVC_partial,
      &outC->_L31_then_IfBlock1);
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &outC->trainDataForEVC,
      &trainDataForEVC_partial);
  }
  else {
    outC->_L3_else_IfBlock1 = outC->newState;
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L1_else_IfBlock1, originalTrainData);
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &outC->_L2_else_IfBlock1,
      &outC->_L1_else_IfBlock1);
    if (kcg_true) {
      outC->_L2_else_IfBlock1.acknowledgedByDriver = outC->_L3_else_IfBlock1;
    }
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &_1_trainDataForEVC_partial,
      &outC->_L2_else_IfBlock1);
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &outC->trainDataForEVC,
      &_1_trainDataForEVC_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void storeDriverInput_init_trainData_pkg(
  outC_storeDriverInput_trainData_pkg *outC)
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

  outC->_L82.valid = kcg_true;
  outC->_L82.validatedByDriver = kcg_true;
  outC->_L82.RBCsystemVersionOnboard = kcg_true;
  outC->_L82.validatedbyRBC = kcg_true;
  outC->_L82.waitingForRBCResponse = kcg_true;
  outC->_L82.driverIsModificationTrainData = kcg_true;
  outC->_L82.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L80.valid = kcg_true;
  outC->_L80.validatedByDriver = kcg_true;
  outC->_L80.RBCsystemVersionOnboard = kcg_true;
  outC->_L80.validatedbyRBC = kcg_true;
  outC->_L80.waitingForRBCResponse = kcg_true;
  outC->_L80.driverIsModificationTrainData = kcg_true;
  outC->_L80.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L81 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L75.valid = kcg_true;
  outC->_L75.systemTime = kcg_lit_int32(0);
  outC->_L75.acknowledged = kcg_true;
  outC->_L74.valid = kcg_true;
  outC->_L74.acknowledgedByDriver = kcg_true;
  outC->_L74.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L74.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L74.trainLength = kcg_lit_int32(0);
  outC->_L74.brakePerctage = kcg_lit_int32(0);
  outC->_L74.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L74.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L74.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L74.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L74.axleNumber = kcg_lit_int32(0);
  outC->_L74.numberNationalSystems = kcg_lit_int32(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L74.nationSystems[idx] = kcg_lit_int32(0);
  }
  outC->_L74.numberTractionSystems = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L74.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L74.tractionSystem[idx1].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L73 = kcg_true;
  outC->_L72.valid = kcg_true;
  outC->_L72.systemTime = kcg_lit_int32(0);
  outC->_L72.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L72.l_train = kcg_lit_int32(0);
  outC->_L72.m_brakeperct = kcg_lit_int32(0);
  outC->_L72.v_maxTrain = kcg_lit_int32(0);
  outC->_L72.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L72.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L72.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->newState = kcg_true;
  outC->updateTrainData = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L1_else_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1_else_IfBlock1.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1_else_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1_else_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1_else_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1_else_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L1_else_IfBlock1.nationSystems[idx2] = kcg_lit_int32(0);
  }
  outC->_L1_else_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L1_else_IfBlock1.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1_else_IfBlock1.tractionSystem[idx3].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L2_else_IfBlock1.valid = kcg_true;
  outC->_L2_else_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L2_else_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_else_IfBlock1.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_else_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_else_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L2_else_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L2_else_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L2_else_IfBlock1.nationSystems[idx4] = kcg_lit_int32(0);
  }
  outC->_L2_else_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L2_else_IfBlock1.tractionSystem[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_else_IfBlock1.tractionSystem[idx5].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L3_else_IfBlock1 = kcg_true;
  outC->_L33_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L32_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.valid = kcg_true;
  outC->_L31_then_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L31_then_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L31_then_IfBlock1.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L31_then_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L31_then_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L31_then_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L31_then_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L31_then_IfBlock1.nationSystems[idx6] = kcg_lit_int32(0);
  }
  outC->_L31_then_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L31_then_IfBlock1.tractionSystem[idx7].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L31_then_IfBlock1.tractionSystem[idx7].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L30_then_IfBlock1[idx8] = kcg_lit_int32(0);
  }
  outC->_L29_then_IfBlock1.valid = kcg_true;
  outC->_L29_then_IfBlock1.acknowledgedByDriver = kcg_true;
  outC->_L29_then_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L29_then_IfBlock1.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L29_then_IfBlock1.trainLength = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.brakePerctage = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L29_then_IfBlock1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L29_then_IfBlock1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L29_then_IfBlock1.axleNumber = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.numberNationalSystems = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L29_then_IfBlock1.nationSystems[idx9] = kcg_lit_int32(0);
  }
  outC->_L29_then_IfBlock1.numberTractionSystems = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->_L29_then_IfBlock1.tractionSystem[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L29_then_IfBlock1.tractionSystem[idx10].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L28_then_IfBlock1 = kcg_true;
  outC->_L27_then_IfBlock1.valid = kcg_true;
  outC->_L27_then_IfBlock1.systemTime = kcg_lit_int32(0);
  outC->_L27_then_IfBlock1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L27_then_IfBlock1.l_train = kcg_lit_int32(0);
  outC->_L27_then_IfBlock1.m_brakeperct = kcg_lit_int32(0);
  outC->_L27_then_IfBlock1.v_maxTrain = kcg_lit_int32(0);
  outC->_L27_then_IfBlock1.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L27_then_IfBlock1.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L27_then_IfBlock1.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L26_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1 = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 4; idx11++) {
    outC->_L23_then_IfBlock1[idx11].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L23_then_IfBlock1[idx11].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L22_then_IfBlock1 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L20_then_IfBlock1 = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L19_then_IfBlock1 = M_AXLELOADCAT_A;
  outC->_L18_then_IfBlock1 = M_AIRTIGHT_Not_fitted;
  outC->_L17_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L34_then_IfBlock1 = kcg_true;
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->trainDataForEVC.valid = kcg_true;
  outC->trainDataForEVC.acknowledgedByDriver = kcg_true;
  outC->trainDataForEVC.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->trainDataForEVC.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->trainDataForEVC.trainLength = kcg_lit_int32(0);
  outC->trainDataForEVC.brakePerctage = kcg_lit_int32(0);
  outC->trainDataForEVC.maxTrainSpeed = kcg_lit_int32(0);
  outC->trainDataForEVC.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->trainDataForEVC.axleLoadCategory = M_AXLELOADCAT_A;
  outC->trainDataForEVC.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->trainDataForEVC.axleNumber = kcg_lit_int32(0);
  outC->trainDataForEVC.numberNationalSystems = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->trainDataForEVC.nationSystems[idx12] = kcg_lit_int32(0);
  }
  outC->trainDataForEVC.numberTractionSystems = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->trainDataForEVC.tractionSystem[idx13].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->trainDataForEVC.tractionSystem[idx13].nid_ctraction = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void storeDriverInput_reset_trainData_pkg(
  outC_storeDriverInput_trainData_pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** storeDriverInput_trainData_pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

