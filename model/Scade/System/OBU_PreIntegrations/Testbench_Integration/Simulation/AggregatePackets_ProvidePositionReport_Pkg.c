/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AggregatePackets_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AggregatePackets/ */
void AggregatePackets_ProvidePositionReport_Pkg(
  /* inPacket0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *inPacket0,
  /* inPacket1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inPacket1,
  /* inPacket4/ */
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *inPacket4,
  /* inPacket5/ */
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *inPacket5,
  outC_AggregatePackets_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L22,
    (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *)
      &cInitPT9_ProvidePositionReport_Pkg);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L8,
    (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *)
      &cInitPT11_ProvidePositionReport_Pkg);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L7,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cInitPT3_ProvidePositionReport_Pkg);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L1, inPacket0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L2, inPacket1);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->_L4, inPacket4);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&outC->_L3, inPacket5);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L6.p0, &outC->_L1);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L6.p1,
    &outC->_L2);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L6.p3,
    &outC->_L7);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&outC->_L6.p4, &outC->_L4);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L6.p5,
    &outC->_L3);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L6.p9,
    &outC->_L22);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L6.p11,
    &outC->_L8);
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->outPackets, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void AggregatePackets_init_ProvidePositionReport_Pkg(
  outC_AggregatePackets_ProvidePositionReport_Pkg *outC)
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

  outC->_L22.valid = kcg_true;
  outC->_L22.transitionInformation = kcg_lit_int64(0);
  outC->_L8.valid = kcg_true;
  outC->_L8.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L8.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L8.l_train = kcg_lit_int64(0);
  outC->_L8.v_maxtrain = kcg_lit_int64(0);
  outC->_L8.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L8.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L8.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L8.n_axle = kcg_lit_int64(0);
  outC->_L8.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L8.tractionIdentity[idx].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L8.tractionIdentity[idx].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L8.nIter_ntc = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L8.nid_ntc[idx1] = kcg_lit_int64(0);
  }
  outC->_L7.valid = kcg_true;
  outC->_L7.number = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L7.aNID_RADIO[idx3].valid = kcg_true;
    for (idx2 = 0; idx2 < 15; idx2++) {
      outC->_L7.aNID_RADIO[idx3].telephoneNumber[idx2] = kcg_lit_int64(0);
    }
  }
  outC->_L6.p0.valid = kcg_true;
  outC->_L6.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L6.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L6.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L6.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L6.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L6.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L6.p0.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L6.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L6.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L6.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L6.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L6.p1.valid = kcg_true;
  outC->_L6.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L6.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L6.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L6.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L6.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L6.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L6.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L6.p1.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L6.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L6.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L6.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L6.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L6.p3.valid = kcg_true;
  outC->_L6.p3.number = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L6.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L6.p3.aNID_RADIO[idx5].telephoneNumber[idx4] = kcg_lit_int64(0);
    }
  }
  outC->_L6.p4.valid = kcg_true;
  outC->_L6.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L6.p5.valid = kcg_true;
  outC->_L6.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L6.p9.valid = kcg_true;
  outC->_L6.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L6.p11.valid = kcg_true;
  outC->_L6.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L6.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6.p11.l_train = kcg_lit_int64(0);
  outC->_L6.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L6.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L6.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L6.p11.n_axle = kcg_lit_int64(0);
  outC->_L6.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L6.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6.p11.tractionIdentity[idx6].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L6.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L6.p11.nid_ntc[idx7] = kcg_lit_int64(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L1.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L1.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L1.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L1.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L1.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L1.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L1.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L1.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1.packet0.level = M_LEVEL_Level_0;
  outC->_L1.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L2.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L2.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L2.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L2.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L2.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L2.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L2.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2.packet1.level = M_LEVEL_Level_0;
  outC->_L2.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L3.valid = kcg_true;
  outC->_L3.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->outPackets.p0.valid = kcg_true;
  outC->outPackets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->outPackets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->outPackets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outPackets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->outPackets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->outPackets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outPackets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outPackets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->outPackets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->outPackets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outPackets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->outPackets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->outPackets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outPackets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->outPackets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outPackets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->outPackets.p1.valid = kcg_true;
  outC->outPackets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->outPackets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->outPackets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outPackets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->outPackets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->outPackets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->outPackets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outPackets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outPackets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->outPackets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->outPackets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outPackets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->outPackets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->outPackets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outPackets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->outPackets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outPackets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->outPackets.p3.valid = kcg_true;
  outC->outPackets.p3.number = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->outPackets.p3.aNID_RADIO[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->outPackets.p3.aNID_RADIO[idx9].telephoneNumber[idx8] = kcg_lit_int64(0);
    }
  }
  outC->outPackets.p4.valid = kcg_true;
  outC->outPackets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->outPackets.p5.valid = kcg_true;
  outC->outPackets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->outPackets.p9.valid = kcg_true;
  outC->outPackets.p9.transitionInformation = kcg_lit_int64(0);
  outC->outPackets.p11.valid = kcg_true;
  outC->outPackets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outPackets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outPackets.p11.l_train = kcg_lit_int64(0);
  outC->outPackets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->outPackets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outPackets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outPackets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outPackets.p11.n_axle = kcg_lit_int64(0);
  outC->outPackets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->outPackets.p11.tractionIdentity[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outPackets.p11.tractionIdentity[idx10].nid_ctraction = kcg_lit_int64(0);
  }
  outC->outPackets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->outPackets.p11.nid_ntc[idx11] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AggregatePackets_reset_ProvidePositionReport_Pkg(
  outC_AggregatePackets_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AggregatePackets_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

