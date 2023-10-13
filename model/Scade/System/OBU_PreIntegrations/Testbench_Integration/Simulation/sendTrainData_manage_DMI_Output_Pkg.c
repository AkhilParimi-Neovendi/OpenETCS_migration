/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendTrainData_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendTrainData/ */
void sendTrainData_manage_DMI_Output_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* trainDataFromEVC/ */
  trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  outC_sendTrainData_manage_DMI_Output_Pkg *outC)
{
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L5, trainDataFromEVC);
  outC->_L14 = outC->_L5.loadingGauge;
  outC->_L13 = outC->_L5.airtightSystem;
  outC->_L12 = outC->_L5.axleLoadCategory;
  outC->_L11 = outC->_L5.maxTrainSpeed;
  outC->_L10 = outC->_L5.brakePerctage;
  outC->_L9 = outC->_L5.trainLength;
  outC->_L8 = outC->_L5.trainCategory;
  outC->_L7 = outC->_L5.valid;
  outC->_L3 = inSystemTime;
  outC->_L6.valid = outC->_L7;
  outC->_L6.systemTime = outC->_L3;
  outC->_L6.trainCategory = outC->_L8;
  outC->_L6.l_train = outC->_L9;
  outC->_L6.m_brakeperct = outC->_L10;
  outC->_L6.v_maxTrain = outC->_L11;
  outC->_L6.m_axleLoad = outC->_L12;
  outC->_L6.m_airTight = outC->_L13;
  outC->_L6.m_loadingGauge = outC->_L14;
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &outC->trainData_ForDMI,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void sendTrainData_init_manage_DMI_Output_Pkg(
  outC_sendTrainData_manage_DMI_Output_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L14 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L13 = M_AIRTIGHT_Not_fitted;
  outC->_L12 = M_AXLELOADCAT_A;
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7 = kcg_true;
  outC->_L6.valid = kcg_true;
  outC->_L6.systemTime = kcg_lit_int64(0);
  outC->_L6.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6.l_train = kcg_lit_int64(0);
  outC->_L6.m_brakeperct = kcg_lit_int64(0);
  outC->_L6.v_maxTrain = kcg_lit_int64(0);
  outC->_L6.m_axleLoad = M_AXLELOADCAT_A;
  outC->_L6.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->_L6.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5.valid = kcg_true;
  outC->_L5.acknowledgedByDriver = kcg_true;
  outC->_L5.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L5.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L5.trainLength = kcg_lit_int64(0);
  outC->_L5.brakePerctage = kcg_lit_int64(0);
  outC->_L5.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L5.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L5.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L5.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L5.axleNumber = kcg_lit_int64(0);
  outC->_L5.numberNationalSystems = kcg_lit_int64(0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L5.nationSystems[idx] = kcg_lit_int64(0);
  }
  outC->_L5.numberTractionSystems = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L5.tractionSystem[idx1].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L5.tractionSystem[idx1].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_lit_int64(0);
  outC->trainData_ForDMI.valid = kcg_true;
  outC->trainData_ForDMI.systemTime = kcg_lit_int64(0);
  outC->trainData_ForDMI.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->trainData_ForDMI.l_train = kcg_lit_int64(0);
  outC->trainData_ForDMI.m_brakeperct = kcg_lit_int64(0);
  outC->trainData_ForDMI.v_maxTrain = kcg_lit_int64(0);
  outC->trainData_ForDMI.m_axleLoad = M_AXLELOADCAT_A;
  outC->trainData_ForDMI.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->trainData_ForDMI.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendTrainData_reset_manage_DMI_Output_Pkg(
  outC_sendTrainData_manage_DMI_Output_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendTrainData_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

