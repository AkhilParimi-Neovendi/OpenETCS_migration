/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "selectTrainData_input_from_TIU_API_Pkg.h"

/* input_from_TIU_API_Pkg::selectTrainData/ */
void selectTrainData_input_from_TIU_API_Pkg(
  /* newTIUTrainData/ */
  trainData_T_TIU_Types_Pkg *newTIUTrainData,
  /* EVC_trainData/ */
  trainData_T_TIU_Types_Pkg *EVC_trainData,
  outC_selectTrainData_input_from_TIU_API_Pkg *outC)
{
  kcg_copy_trainData_T_TIU_Types_Pkg(
    &outC->_L14,
    (trainData_T_TIU_Types_Pkg *) &cEmptyTrainData);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L10, newTIUTrainData);
  outC->_L8 = outC->_L10.valid;
  /* _L9= */
  if (outC->_L8) {
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L9, &outC->_L10);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L9, &outC->_L14);
  }
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L2, EVC_trainData);
  outC->_L6 = outC->_L2.valid;
  /* _L4= */
  if (outC->_L6) {
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L4, &outC->_L2);
  }
  else {
    kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L4, &outC->_L9);
  }
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->outTrainData, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void selectTrainData_init_input_from_TIU_API_Pkg(
  outC_selectTrainData_input_from_TIU_API_Pkg *outC)
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

  outC->_L14.valid = kcg_true;
  outC->_L14.acknowledgedByDriver = kcg_true;
  outC->_L14.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L14.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L14.trainLength = kcg_lit_int64(0);
  outC->_L14.brakePerctage = kcg_lit_int64(0);
  outC->_L14.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L14.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L14.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L14.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L14.axleNumber = kcg_lit_int64(0);
  outC->_L14.numberNationalSystems = kcg_lit_int64(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L14.nationSystems[idx] = kcg_lit_int64(0);
  }
  outC->_L14.numberTractionSystems = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L14.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L14.tractionSystem[idx1].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L10.valid = kcg_true;
  outC->_L10.acknowledgedByDriver = kcg_true;
  outC->_L10.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L10.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L10.trainLength = kcg_lit_int64(0);
  outC->_L10.brakePerctage = kcg_lit_int64(0);
  outC->_L10.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L10.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L10.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L10.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L10.axleNumber = kcg_lit_int64(0);
  outC->_L10.numberNationalSystems = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L10.nationSystems[idx2] = kcg_lit_int64(0);
  }
  outC->_L10.numberTractionSystems = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L10.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L10.tractionSystem[idx3].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L9.valid = kcg_true;
  outC->_L9.acknowledgedByDriver = kcg_true;
  outC->_L9.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L9.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L9.trainLength = kcg_lit_int64(0);
  outC->_L9.brakePerctage = kcg_lit_int64(0);
  outC->_L9.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L9.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L9.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L9.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L9.axleNumber = kcg_lit_int64(0);
  outC->_L9.numberNationalSystems = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L9.nationSystems[idx4] = kcg_lit_int64(0);
  }
  outC->_L9.numberTractionSystems = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L9.tractionSystem[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L9.tractionSystem[idx5].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L8 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.acknowledgedByDriver = kcg_true;
  outC->_L4.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4.trainLength = kcg_lit_int64(0);
  outC->_L4.brakePerctage = kcg_lit_int64(0);
  outC->_L4.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L4.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L4.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L4.axleNumber = kcg_lit_int64(0);
  outC->_L4.numberNationalSystems = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L4.nationSystems[idx6] = kcg_lit_int64(0);
  }
  outC->_L4.numberTractionSystems = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L4.tractionSystem[idx7].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4.tractionSystem[idx7].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.acknowledgedByDriver = kcg_true;
  outC->_L2.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2.trainLength = kcg_lit_int64(0);
  outC->_L2.brakePerctage = kcg_lit_int64(0);
  outC->_L2.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L2.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L2.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L2.axleNumber = kcg_lit_int64(0);
  outC->_L2.numberNationalSystems = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L2.nationSystems[idx8] = kcg_lit_int64(0);
  }
  outC->_L2.numberTractionSystems = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L2.tractionSystem[idx9].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2.tractionSystem[idx9].nid_ctraction = kcg_lit_int64(0);
  }
  outC->outTrainData.valid = kcg_true;
  outC->outTrainData.acknowledgedByDriver = kcg_true;
  outC->outTrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outTrainData.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outTrainData.trainLength = kcg_lit_int64(0);
  outC->outTrainData.brakePerctage = kcg_lit_int64(0);
  outC->outTrainData.maxTrainSpeed = kcg_lit_int64(0);
  outC->outTrainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outTrainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->outTrainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->outTrainData.axleNumber = kcg_lit_int64(0);
  outC->outTrainData.numberNationalSystems = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->outTrainData.nationSystems[idx10] = kcg_lit_int64(0);
  }
  outC->outTrainData.numberTractionSystems = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 4; idx11++) {
    outC->outTrainData.tractionSystem[idx11].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outTrainData.tractionSystem[idx11].nid_ctraction = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void selectTrainData_reset_input_from_TIU_API_Pkg(
  outC_selectTrainData_input_from_TIU_API_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** selectTrainData_input_from_TIU_API_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

