/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP011/ */
void ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newP011/ */
  P011_TM_TrainToTrack *newP011,
  outC_ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  static NID_PACKET noname;
  static L_PACKET _1_noname;
  static L_TRAIN _2_noname;
  static V_MAXTRAIN _3_noname;
  static N_ITER _4_noname;
  static P011_voltage_list_TM_TrainToTrack _5_noname;
  static N_ITER _6_noname;
  static P011_ntc_list_TM_TrainToTrack _7_noname;

  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
    &outC->_L21,
    (aNID_NTC_T_Packet_TrainTypes_Pkg *)
      &cEMPTY_NID_NTC_RBC_Model_Pkg_TrainTrackMsgConversion);
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    &outC->_L20,
    (aTractionIdentity_T_Packet_TrainTypes_Pkg *)
      &cEMPTY_TRACTION_IDENTITY_RBC_Model_Pkg_TrainTrackMsgConversion);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  kcg_copy_P011_TM_TrainToTrack(&outC->_L1, newP011);
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&outC->_L2, &outC->_L1.nid_ntc_list);
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&_7_noname, &outC->_L2);
  outC->_L3 = outC->_L1.n_iter_nid_ntc;
  _6_noname = outC->_L3;
  kcg_copy_P011_voltage_list_TM_TrainToTrack(&outC->_L4, &outC->_L1.voltage_list);
  kcg_copy_P011_voltage_list_TM_TrainToTrack(&_5_noname, &outC->_L4);
  outC->_L5 = outC->_L1.n_iter_voltage;
  _4_noname = outC->_L5;
  outC->_L10 = outC->_L1.v_maxtrain;
  _3_noname = outC->_L10;
  outC->_L11 = outC->_L1.l_train;
  _2_noname = outC->_L11;
  outC->_L14 = outC->_L1.l_packet;
  _1_noname = outC->_L14;
  outC->_L15 = outC->_L1.nid_packet;
  noname = outC->_L15;
  outC->_L16 = outC->_L1.valid;
  outC->_L13 = outC->_L1.nc_cdtrain;
  outC->_L12 = outC->_L1.nc_train;
  outC->_L9 = outC->_L1.m_loadinggauge;
  outC->_L8 = outC->_L1.m_axleloadcat;
  outC->_L7 = outC->_L1.m_airtight;
  outC->_L6 = outC->_L1.n_axle;
  outC->_L17.valid = outC->_L16;
  outC->_L17.nc_cdtrain = outC->_L13;
  outC->_L17.nc_train = outC->_L12;
  outC->_L17.l_train = outC->_L18;
  outC->_L17.v_maxtrain = outC->_L18;
  outC->_L17.m_loadinggoage = outC->_L9;
  outC->_L17.m_axleloadcat = outC->_L8;
  outC->_L17.m_airtight = outC->_L7;
  outC->_L17.n_axle = outC->_L6;
  outC->_L17.nIter_tractionIdentity = outC->_L19;
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    &outC->_L17.tractionIdentity,
    &outC->_L20);
  outC->_L17.nIter_ntc = outC->_L19;
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(&outC->_L17.nid_ntc, &outC->_L21);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->oldP011,
    &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertP011_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
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

  for (idx = 0; idx < 5; idx++) {
    outC->_L21[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 4; idx1++) {
    outC->_L20[idx1].m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L20[idx1].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17.valid = kcg_true;
  outC->_L17.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L17.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L17.l_train = kcg_lit_int32(0);
  outC->_L17.v_maxtrain = kcg_lit_int32(0);
  outC->_L17.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L17.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L17.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L17.n_axle = kcg_lit_int32(0);
  outC->_L17.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L17.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L17.tractionIdentity[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L17.nIter_ntc = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L17.nid_ntc[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L2[idx4] = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L4[idx5].m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4[idx5].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = M_AIRTIGHT_Not_fitted;
  outC->_L8 = M_AXLELOADCAT_A;
  outC->_L9 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L12 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L13 = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.l_packet = kcg_lit_int32(0);
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
  outC->_L1.n_iter_voltage = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L1.voltage_list[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.voltage_list[idx6].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1.n_iter_nid_ntc = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L1.nid_ntc_list[idx7] = kcg_lit_int32(0);
  }
  outC->oldP011.valid = kcg_true;
  outC->oldP011.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->oldP011.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->oldP011.l_train = kcg_lit_int32(0);
  outC->oldP011.v_maxtrain = kcg_lit_int32(0);
  outC->oldP011.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->oldP011.m_axleloadcat = M_AXLELOADCAT_A;
  outC->oldP011.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->oldP011.n_axle = kcg_lit_int32(0);
  outC->oldP011.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 4; idx8++) {
    outC->oldP011.tractionIdentity[idx8].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->oldP011.tractionIdentity[idx8].nid_ctraction = kcg_lit_int32(0);
  }
  outC->oldP011.nIter_ntc = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->oldP011.nid_ntc[idx9] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertP011_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertP011_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

