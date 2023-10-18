/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper/ */
void UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg(
  /* inSessionManagement/ */
  SessionManagement_T *inSessionManagement,
  /* inClock/ */
  Clock_T *inClock,
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg *outC)
{
  static NID_C noname;

  kcg_copy_SessionManagement_T(&outC->_L1, inSessionManagement);
  /* _L8=(RBC_Session_Pkg::SessionManagement__GetPosData#1)/ */
  SessionManagement__GetPosData_RBC_Session_Pkg(
    &outC->_L1,
    &outC->Context_SessionManagement__GetPosData_1);
  kcg_copy_PosData_T(
    &outC->_L8,
    &outC->Context_SessionManagement__GetPosData_1.outPositionManagement);
  /* _L10=(RBC_Session_Pkg::PosData__Get_NID_LRBG#1)/ */
  PosData__Get_NID_LRBG_RBC_Session_Pkg(
    &outC->_L8,
    &outC->Context_PosData__Get_NID_LRBG_1);
  outC->_L10 = outC->Context_PosData__Get_NID_LRBG_1.out_NID_LRBG;
  /* _L15=(TM_conversions::DECODE_NID_LRBG#1)/ */
  DECODE_NID_LRBG_TM_conversions(outC->_L10, &outC->Context_DECODE_NID_LRBG_1);
  outC->_L15 = outC->Context_DECODE_NID_LRBG_1.nid_c;
  outC->_L16 = outC->Context_DECODE_NID_LRBG_1.nid_bg;
  noname = outC->_L15;
  /* _L9=(RBC_Session_Pkg::PosData__Get_D_LRBG#1)/ */
  PosData__Get_D_LRBG_RBC_Session_Pkg(
    &outC->_L8,
    &outC->Context_PosData__Get_D_LRBG_1);
  outC->_L9 = outC->Context_PosData__Get_D_LRBG_1.out_D_LRBG;
  /* _L11=(RBC_Session_Pkg::PosData__Get_Q_SCALE#1)/ */
  PosData__Get_Q_SCALE_RBC_Session_Pkg(
    &outC->_L8,
    &outC->Context_PosData__Get_Q_SCALE_1);
  outC->_L11 = outC->Context_PosData__Get_Q_SCALE_1.out_Q_SCALE;
  /* _L12=(RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert#1)/ */
  LRBGDistanceToMeterConverter__Convert_RBC_Converter_Pkg(
    outC->_L9,
    outC->_L11,
    &outC->Context_LRBGDistanceToMeterConverter__Convert_1);
  outC->_L12 =
    outC->Context_LRBGDistanceToMeterConverter__Convert_1.outDistanceToLRBGInMeters;
  kcg_copy_Clock_T(&outC->_L7, inClock);
  /* _L14=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_RBC_Time_Pkg(
    &outC->_L7,
    &outC->Context_Clock__GetSeconds_1);
  outC->_L14 = outC->Context_Clock__GetSeconds_1.outValue;
  /* _L13=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages#1)/ */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_RBC_Scenario_Pkg(
    outC->_L16,
    outC->_L12,
    outC->_L14,
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_1);
  outC->_L13 =
    outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_1.outTriggerId;
  outC->outTriggerId = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void UtrechtAmsterdamScenarioStory00AWrapper_init_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L15 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L11 = Q_SCALE_10_cm_scale;
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8.nid_lrbg = kcg_lit_int64(0);
  outC->_L8.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.d_lrbg = kcg_lit_int64(0);
  outC->_L8.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L8.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L8.l_doubtover = kcg_lit_int64(0);
  outC->_L8.l_doubtunder = kcg_lit_int64(0);
  outC->_L8.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L8.l_trainint = kcg_lit_int64(0);
  outC->_L8.v_train = kcg_lit_int64(0);
  outC->_L8.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L8.m_mode = M_MODE_Full_Supervision;
  outC->_L8.m_level = M_LEVEL_Level_0;
  outC->_L8.nid_ntc = kcg_lit_int64(0);
  outC->_L8.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L7.m_Value = kcg_lit_int64(0);
  outC->_L1.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L1.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L1.m_TrainData.m_OnboardPhoneNumbers[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L1.m_TrainData.m_OnboardPhoneNumbers[idx1].telephoneNumber[idx] =
        kcg_lit_int64(0);
    }
  }
  outC->_L1.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L1.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L1.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L1.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L1.m_TrainData.m_TractionIdentities[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.m_TrainData.m_TractionIdentities[idx2].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L1.m_TrainData.m_NationalSystemIdentities[idx3] = kcg_lit_int64(0);
  }
  outC->_L1.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L1.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L1.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L1.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L1.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L1.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L1.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L1.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L1.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L1.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L1.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->outTriggerId = kcg_lit_int64(0);
  /* _L13=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages#1)/ */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_init_RBC_Scenario_Pkg(
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_1);
  /* _L14=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_init_RBC_Time_Pkg(&outC->Context_Clock__GetSeconds_1);
  /* _L12=(RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert#1)/ */
  LRBGDistanceToMeterConverter__Convert_init_RBC_Converter_Pkg(
    &outC->Context_LRBGDistanceToMeterConverter__Convert_1);
  /* _L11=(RBC_Session_Pkg::PosData__Get_Q_SCALE#1)/ */
  PosData__Get_Q_SCALE_init_RBC_Session_Pkg(
    &outC->Context_PosData__Get_Q_SCALE_1);
  /* _L9=(RBC_Session_Pkg::PosData__Get_D_LRBG#1)/ */
  PosData__Get_D_LRBG_init_RBC_Session_Pkg(
    &outC->Context_PosData__Get_D_LRBG_1);
  /* _L15=(TM_conversions::DECODE_NID_LRBG#1)/ */
  DECODE_NID_LRBG_init_TM_conversions(&outC->Context_DECODE_NID_LRBG_1);
  /* _L10=(RBC_Session_Pkg::PosData__Get_NID_LRBG#1)/ */
  PosData__Get_NID_LRBG_init_RBC_Session_Pkg(
    &outC->Context_PosData__Get_NID_LRBG_1);
  /* _L8=(RBC_Session_Pkg::SessionManagement__GetPosData#1)/ */
  SessionManagement__GetPosData_init_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void UtrechtAmsterdamScenarioStory00AWrapper_reset_RBC_Scenario_Pkg(
  outC_UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg *outC)
{
  /* _L13=(RBC_Scenario_Pkg::UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages#1)/ */
  UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_reset_RBC_Scenario_Pkg(
    &outC->Context_UtrechtAmsterdamScenarioStory00AWrapper__TriggerRadioTrackTrainMessages_1);
  /* _L14=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_reset_RBC_Time_Pkg(&outC->Context_Clock__GetSeconds_1);
  /* _L12=(RBC_Converter_Pkg::LRBGDistanceToMeterConverter__Convert#1)/ */
  LRBGDistanceToMeterConverter__Convert_reset_RBC_Converter_Pkg(
    &outC->Context_LRBGDistanceToMeterConverter__Convert_1);
  /* _L11=(RBC_Session_Pkg::PosData__Get_Q_SCALE#1)/ */
  PosData__Get_Q_SCALE_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Get_Q_SCALE_1);
  /* _L9=(RBC_Session_Pkg::PosData__Get_D_LRBG#1)/ */
  PosData__Get_D_LRBG_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Get_D_LRBG_1);
  /* _L15=(TM_conversions::DECODE_NID_LRBG#1)/ */
  DECODE_NID_LRBG_reset_TM_conversions(&outC->Context_DECODE_NID_LRBG_1);
  /* _L10=(RBC_Session_Pkg::PosData__Get_NID_LRBG#1)/ */
  PosData__Get_NID_LRBG_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Get_NID_LRBG_1);
  /* _L8=(RBC_Session_Pkg::SessionManagement__GetPosData#1)/ */
  SessionManagement__GetPosData_reset_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** UtrechtAmsterdamScenarioStory00AWrapper_RBC_Scenario_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

