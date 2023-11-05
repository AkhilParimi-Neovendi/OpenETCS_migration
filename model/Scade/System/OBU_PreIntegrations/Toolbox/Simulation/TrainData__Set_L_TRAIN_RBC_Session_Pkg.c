/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__Set_L_TRAIN_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__Set_L_TRAIN/ */
void TrainData__Set_L_TRAIN_RBC_Session_Pkg(
  /* inTrainData/ */
  TrainData_T *inTrainData,
  /* in_L_TRAIN/ */
  L_TRAIN in_L_TRAIN,
  outC_TrainData__Set_L_TRAIN_RBC_Session_Pkg *outC)
{
  outC->_L2 = in_L_TRAIN;
  kcg_copy_TrainData_T(&outC->_L1, inTrainData);
  kcg_copy_TrainData_T(&outC->_L3, &outC->_L1);
  if (kcg_true) {
    outC->_L3.l_train = outC->_L2;
  }
  kcg_copy_TrainData_T(&outC->outTrainData, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void TrainData__Set_L_TRAIN_init_RBC_Session_Pkg(
  outC_TrainData__Set_L_TRAIN_RBC_Session_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;

  outC->_L3.nid_engine = kcg_lit_int32(0);
  outC->_L3.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L3.m_OnboardPhoneNumbers[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L3.m_OnboardPhoneNumbers[idx1].telephoneNumber[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L3.t_train_ref = kcg_lit_int32(0);
  outC->_L3.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3.l_train = kcg_lit_int32(0);
  outC->_L3.v_maxtrain = kcg_lit_int32(0);
  outC->_L3.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L3.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L3.n_axle = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L3.m_TractionIdentities[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3.m_TractionIdentities[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L3.m_NationalSystemIdentities[idx3] = kcg_lit_int32(0);
  }
  outC->_L3.nid_operational = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1.nid_engine = kcg_lit_int32(0);
  outC->_L1.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L1.m_OnboardPhoneNumbers[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L1.m_OnboardPhoneNumbers[idx5].telephoneNumber[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L1.t_train_ref = kcg_lit_int32(0);
  outC->_L1.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.l_train = kcg_lit_int32(0);
  outC->_L1.v_maxtrain = kcg_lit_int32(0);
  outC->_L1.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.n_axle = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L1.m_TractionIdentities[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.m_TractionIdentities[idx6].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L1.m_NationalSystemIdentities[idx7] = kcg_lit_int32(0);
  }
  outC->_L1.nid_operational = kcg_lit_int32(0);
  outC->outTrainData.nid_engine = kcg_lit_int32(0);
  outC->outTrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->outTrainData.m_OnboardPhoneNumbers[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->outTrainData.m_OnboardPhoneNumbers[idx9].telephoneNumber[idx8] =
        kcg_lit_int32(0);
    }
  }
  outC->outTrainData.t_train_ref = kcg_lit_int32(0);
  outC->outTrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outTrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outTrainData.l_train = kcg_lit_int32(0);
  outC->outTrainData.v_maxtrain = kcg_lit_int32(0);
  outC->outTrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outTrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outTrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outTrainData.n_axle = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->outTrainData.m_TractionIdentities[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outTrainData.m_TractionIdentities[idx10].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->outTrainData.m_NationalSystemIdentities[idx11] = kcg_lit_int32(0);
  }
  outC->outTrainData.nid_operational = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrainData__Set_L_TRAIN_reset_RBC_Session_Pkg(
  outC_TrainData__Set_L_TRAIN_RBC_Session_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainData__Set_L_TRAIN_RBC_Session_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

