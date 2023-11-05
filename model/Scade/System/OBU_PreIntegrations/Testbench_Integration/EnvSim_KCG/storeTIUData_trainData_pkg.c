/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "storeTIUData_trainData_pkg.h"

/* trainData_pkg::storeTIUData/ */
void storeTIUData_trainData_pkg(
  /* trainDatafromTIU/ */
  trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* originalTrainData/ */
  trainData_T_TIU_Types_Pkg *originalTrainData,
  /* actualStatus/ */
  trainDataStatus_T_trainData_Types_pkg *actualStatus,
  outC_storeTIUData_trainData_pkg *outC)
{
  static trainData_T_TIU_Types_Pkg noname;
  static trainDataStatus_T_trainData_Types_pkg _1_noname;

  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->_L6,
    (trainDataStatus_T_trainData_Types_pkg *) &cNoStates_trainData_Types_pkg);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L3, actualStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&_1_noname, &outC->_L3);
  outC->_L5 = kcg_true;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L4, &outC->_L6);
  if (kcg_true) {
    outC->_L4.valid = outC->_L5;
  }
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L2, originalTrainData);
  kcg_copy_trainData_T_TIU_Types_Pkg(&noname, &outC->_L2);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L1, trainDatafromTIU);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->actualTrainData, &outC->_L1);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->updatedStatus,
    &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void storeTIUData_init_trainData_pkg(outC_storeTIUData_trainData_pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L6.valid = kcg_true;
  outC->_L6.validatedByDriver = kcg_true;
  outC->_L6.RBCsystemVersionOnboard = kcg_true;
  outC->_L6.validatedbyRBC = kcg_true;
  outC->_L6.waitingForRBCResponse = kcg_true;
  outC->_L6.driverIsModificationTrainData = kcg_true;
  outC->_L6.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.validatedByDriver = kcg_true;
  outC->_L4.RBCsystemVersionOnboard = kcg_true;
  outC->_L4.validatedbyRBC = kcg_true;
  outC->_L4.waitingForRBCResponse = kcg_true;
  outC->_L4.driverIsModificationTrainData = kcg_true;
  outC->_L4.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L3.valid = kcg_true;
  outC->_L3.validatedByDriver = kcg_true;
  outC->_L3.RBCsystemVersionOnboard = kcg_true;
  outC->_L3.validatedbyRBC = kcg_true;
  outC->_L3.waitingForRBCResponse = kcg_true;
  outC->_L3.driverIsModificationTrainData = kcg_true;
  outC->_L3.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.acknowledgedByDriver = kcg_true;
  outC->_L2.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2.trainLength = kcg_lit_int32(0);
  outC->_L2.brakePerctage = kcg_lit_int32(0);
  outC->_L2.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L2.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L2.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L2.axleNumber = kcg_lit_int32(0);
  outC->_L2.numberNationalSystems = kcg_lit_int32(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L2.nationSystems[idx] = kcg_lit_int32(0);
  }
  outC->_L2.numberTractionSystems = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L2.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2.tractionSystem[idx1].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.acknowledgedByDriver = kcg_true;
  outC->_L1.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.trainLength = kcg_lit_int32(0);
  outC->_L1.brakePerctage = kcg_lit_int32(0);
  outC->_L1.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L1.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L1.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L1.axleNumber = kcg_lit_int32(0);
  outC->_L1.numberNationalSystems = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L1.nationSystems[idx2] = kcg_lit_int32(0);
  }
  outC->_L1.numberTractionSystems = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L1.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.tractionSystem[idx3].nid_ctraction = kcg_lit_int32(0);
  }
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->actualTrainData.valid = kcg_true;
  outC->actualTrainData.acknowledgedByDriver = kcg_true;
  outC->actualTrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->actualTrainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->actualTrainData.trainLength = kcg_lit_int32(0);
  outC->actualTrainData.brakePerctage = kcg_lit_int32(0);
  outC->actualTrainData.maxTrainSpeed = kcg_lit_int32(0);
  outC->actualTrainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->actualTrainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->actualTrainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->actualTrainData.axleNumber = kcg_lit_int32(0);
  outC->actualTrainData.numberNationalSystems = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->actualTrainData.nationSystems[idx4] = kcg_lit_int32(0);
  }
  outC->actualTrainData.numberTractionSystems = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->actualTrainData.tractionSystem[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->actualTrainData.tractionSystem[idx5].nid_ctraction = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void storeTIUData_reset_trainData_pkg(outC_storeTIUData_trainData_pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** storeTIUData_trainData_pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

