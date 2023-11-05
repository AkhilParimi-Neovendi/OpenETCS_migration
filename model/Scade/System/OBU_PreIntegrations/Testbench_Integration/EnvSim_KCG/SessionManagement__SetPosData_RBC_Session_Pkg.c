/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__SetPosData_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::SessionManagement__SetPosData/ */
void SessionManagement__SetPosData_RBC_Session_Pkg(
  /* inSessionManagement/ */
  SessionManagement_T *inSessionManagement,
  /* inPosData/ */
  PosData_T *inPosData,
  outC_SessionManagement__SetPosData_RBC_Session_Pkg *outC)
{
  kcg_copy_PosData_T(&outC->_L2, inPosData);
  kcg_copy_SessionManagement_T(&outC->_L1, inSessionManagement);
  kcg_copy_SessionManagement_T(&outC->_L3, &outC->_L1);
  if (kcg_true) {
    kcg_copy_PosData_T(&outC->_L3.m_PosData, &outC->_L2);
  }
  kcg_copy_SessionManagement_T(&outC->outSessionManagement, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void SessionManagement__SetPosData_init_RBC_Session_Pkg(
  outC_SessionManagement__SetPosData_RBC_Session_Pkg *outC)
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

  outC->_L3.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L3.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L3.m_TrainData.m_OnboardPhoneNumbers[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L3.m_TrainData.m_OnboardPhoneNumbers[idx1].telephoneNumber[idx] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L3.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L3.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L3.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L3.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L3.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L3.m_TrainData.m_TractionIdentities[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3.m_TrainData.m_TractionIdentities[idx2].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L3.m_TrainData.m_NationalSystemIdentities[idx3] = kcg_lit_int32(0);
  }
  outC->_L3.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L3.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L3.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L3.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L3.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L3.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L3.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L3.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L3.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L3.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L3.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L2.nid_lrbg = kcg_lit_int32(0);
  outC->_L2.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.d_lrbg = kcg_lit_int32(0);
  outC->_L2.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L2.l_doubtover = kcg_lit_int32(0);
  outC->_L2.l_doubtunder = kcg_lit_int32(0);
  outC->_L2.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.l_trainint = kcg_lit_int32(0);
  outC->_L2.v_train = kcg_lit_int32(0);
  outC->_L2.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.m_mode = M_MODE_Full_Supervision;
  outC->_L2.m_level = M_LEVEL_Level_0;
  outC->_L2.nid_ntc = kcg_lit_int32(0);
  outC->_L2.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L1.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L1.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L1.m_TrainData.m_OnboardPhoneNumbers[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L1.m_TrainData.m_OnboardPhoneNumbers[idx5].telephoneNumber[idx4] =
        kcg_lit_int32(0);
    }
  }
  outC->_L1.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L1.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L1.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L1.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L1.m_TrainData.m_TractionIdentities[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.m_TrainData.m_TractionIdentities[idx6].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L1.m_TrainData.m_NationalSystemIdentities[idx7] = kcg_lit_int32(0);
  }
  outC->_L1.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L1.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L1.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L1.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L1.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L1.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L1.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L1.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L1.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L1.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L1.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->outSessionManagement.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->outSessionManagement.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->outSessionManagement.m_TrainData.m_OnboardPhoneNumbers[idx9].valid =
      kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->outSessionManagement.m_TrainData.m_OnboardPhoneNumbers[idx9].telephoneNumber[idx8] =
        kcg_lit_int32(0);
    }
  }
  outC->outSessionManagement.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->outSessionManagement.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outSessionManagement.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outSessionManagement.m_TrainData.l_train = kcg_lit_int32(0);
  outC->outSessionManagement.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->outSessionManagement.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outSessionManagement.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outSessionManagement.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outSessionManagement.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->outSessionManagement.m_TrainData.m_TractionIdentities[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outSessionManagement.m_TrainData.m_TractionIdentities[idx10].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->outSessionManagement.m_TrainData.m_NationalSystemIdentities[idx11] =
      kcg_lit_int32(0);
  }
  outC->outSessionManagement.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outSessionManagement.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outSessionManagement.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outSessionManagement.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outSessionManagement.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.v_train = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outSessionManagement.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outSessionManagement.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outSessionManagement.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void SessionManagement__SetPosData_reset_RBC_Session_Pkg(
  outC_SessionManagement__SetPosData_RBC_Session_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SessionManagement__SetPosData_RBC_Session_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

