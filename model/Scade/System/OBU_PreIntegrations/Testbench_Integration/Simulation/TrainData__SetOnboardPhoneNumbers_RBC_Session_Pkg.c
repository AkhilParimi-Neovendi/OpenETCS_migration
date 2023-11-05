/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers/ */
void TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg(
  /* inTrainData/ */
  TrainData_T *inTrainData,
  /* inOnboardPhoneNumbers/ */
  aNID_RADIO_T_Packet_TrainTypes_Pkg *inOnboardPhoneNumbers,
  outC_TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg *outC)
{
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(&outC->_L2, inOnboardPhoneNumbers);
  kcg_copy_TrainData_T(&outC->_L1, inTrainData);
  kcg_copy_TrainData_T(&outC->_L3, &outC->_L1);
  if (kcg_true) {
    kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(
      &outC->_L3.m_OnboardPhoneNumbers,
      &outC->_L2);
  }
  kcg_copy_TrainData_T(&outC->outTrainData, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void TrainData__SetOnboardPhoneNumbers_init_RBC_Session_Pkg(
  outC_TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg *outC)
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
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L2[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L2[idx5].telephoneNumber[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L1.nid_engine = kcg_lit_int32(0);
  outC->_L1.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 1; idx7++) {
    outC->_L1.m_OnboardPhoneNumbers[idx7].valid = kcg_true;
    for (idx6 = 0; idx6 < 15; idx6++) {
      outC->_L1.m_OnboardPhoneNumbers[idx7].telephoneNumber[idx6] = kcg_lit_int32(0);
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
  for (idx8 = 0; idx8 < 4; idx8++) {
    outC->_L1.m_TractionIdentities[idx8].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.m_TractionIdentities[idx8].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L1.m_NationalSystemIdentities[idx9] = kcg_lit_int32(0);
  }
  outC->_L1.nid_operational = kcg_lit_int32(0);
  outC->outTrainData.nid_engine = kcg_lit_int32(0);
  outC->outTrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 1; idx11++) {
    outC->outTrainData.m_OnboardPhoneNumbers[idx11].valid = kcg_true;
    for (idx10 = 0; idx10 < 15; idx10++) {
      outC->outTrainData.m_OnboardPhoneNumbers[idx11].telephoneNumber[idx10] =
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
  for (idx12 = 0; idx12 < 4; idx12++) {
    outC->outTrainData.m_TractionIdentities[idx12].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outTrainData.m_TractionIdentities[idx12].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->outTrainData.m_NationalSystemIdentities[idx13] = kcg_lit_int32(0);
  }
  outC->outTrainData.nid_operational = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrainData__SetOnboardPhoneNumbers_reset_RBC_Session_Pkg(
  outC_TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

