/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::SessionManagement__GetPosData/ */
void SessionManagement__GetPosData_RBC_Session_Pkg(
  /* inSessionManagement/ */
  SessionManagement_T *inSessionManagement,
  outC_SessionManagement__GetPosData_RBC_Session_Pkg *outC)
{
  kcg_copy_SessionManagement_T(&outC->_L1, inSessionManagement);
  kcg_copy_PosData_T(&outC->_L2, &outC->_L1.m_PosData);
  kcg_copy_PosData_T(&outC->outPositionManagement, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void SessionManagement__GetPosData_init_RBC_Session_Pkg(
  outC_SessionManagement__GetPosData_RBC_Session_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

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
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L1.m_TrainData.m_OnboardPhoneNumbers[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L1.m_TrainData.m_OnboardPhoneNumbers[idx1].telephoneNumber[idx] =
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
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L1.m_TrainData.m_TractionIdentities[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.m_TrainData.m_TractionIdentities[idx2].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L1.m_TrainData.m_NationalSystemIdentities[idx3] = kcg_lit_int32(0);
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
  outC->outPositionManagement.nid_lrbg = kcg_lit_int32(0);
  outC->outPositionManagement.q_scale = Q_SCALE_10_cm_scale;
  outC->outPositionManagement.d_lrbg = kcg_lit_int32(0);
  outC->outPositionManagement.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outPositionManagement.q_dlrbg = Q_DLRBG_Reverse;
  outC->outPositionManagement.l_doubtover = kcg_lit_int32(0);
  outC->outPositionManagement.l_doubtunder = kcg_lit_int32(0);
  outC->outPositionManagement.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outPositionManagement.l_trainint = kcg_lit_int32(0);
  outC->outPositionManagement.v_train = kcg_lit_int32(0);
  outC->outPositionManagement.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outPositionManagement.m_mode = M_MODE_Full_Supervision;
  outC->outPositionManagement.m_level = M_LEVEL_Level_0;
  outC->outPositionManagement.nid_ntc = kcg_lit_int32(0);
  outC->outPositionManagement.nid_prvlrbg = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void SessionManagement__GetPosData_reset_RBC_Session_Pkg(
  outC_SessionManagement__GetPosData_RBC_Session_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SessionManagement__GetPosData_RBC_Session_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

