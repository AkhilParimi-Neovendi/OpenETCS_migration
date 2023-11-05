/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg155ConsistencyChecker__HasConsistentPackets/ */
void Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackPackets/ */
  outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  outC_Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L18, inRadioTrainTrackPackets);
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#2)/ */
  RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L18,
    &outC->Context_RadioTrainTrackPackets__GetP009_2);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L26,
    &outC->Context_RadioTrainTrackPackets__GetP009_2.outRadioTrainTrackPacket);
  /* _L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#2)/ */
  RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->_L26,
    &outC->Context_RadioTrainTrackPacket009__IsValid_2);
  outC->_L27 = outC->Context_RadioTrainTrackPacket009__IsValid_2.outIsValid;
  outC->_L28 = !outC->_L27;
  /* _L20=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L18,
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L20,
    &outC->Context_RadioTrainTrackPackets__GetP003_1.outRadioTrainTrackPacket);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */
  RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->_L20,
    &outC->Context_RadioTrainTrackPacket003__IsValid_1);
  outC->_L21 = outC->Context_RadioTrainTrackPacket003__IsValid_1.outIsValid;
  outC->_L22 = !outC->_L21;
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L18,
    &outC->Context_RadioTrainTrackPackets__GetP004_1);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L19,
    &outC->Context_RadioTrainTrackPackets__GetP004_1.outRadioTrainTrackPacket);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket004_Pkg(
    &outC->_L19,
    &outC->Context_RadioTrainTrackPacket004__IsValid_1);
  outC->_L17 = outC->Context_RadioTrainTrackPacket004__IsValid_1.out_IsValid;
  outC->_L16 = !outC->_L17;
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L18,
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L12,
    &outC->Context_RadioTrainTrackPackets__GetP011_1.outRadioTrainTrackPacket);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
    &outC->_L12,
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  outC->_L15 = outC->Context_RadioTrainTrackPacket011__IsValid_1.outIsValid;
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L18,
    &outC->Context_RadioTrainTrackPackets__GetP005_1);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L14,
    &outC->Context_RadioTrainTrackPackets__GetP005_1.outRadioTrainTrackPacket);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L18,
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L3,
    &outC->Context_RadioTrainTrackPackets__GetP001_1.outRadioTrainTrackPacket);
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->_L3,
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  outC->_L9 = outC->Context_RadioTrainTrackPacket001__IsValid_1.outIsValid;
  outC->_L13 = !outC->_L9;
  outC->_L7 = !outC->_L15;
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket005_Pkg(
    &outC->_L14,
    &outC->Context_RadioTrainTrackPacket005__IsValid_1);
  outC->_L11 = outC->Context_RadioTrainTrackPacket005__IsValid_1.outIsValid;
  outC->_L6 = !outC->_L11;
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L18,
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L8,
    &outC->Context_RadioTrainTrackPackets__GetP000_1.outRadioTrainTrackPacket);
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->_L8,
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  outC->_L10 = outC->Context_RadioTrainTrackPacket000__IsValid_1.outIsValid;
  outC->_L5 = !outC->_L10;
  outC->_L2 = outC->_L5 & outC->_L13 & outC->_L22 & outC->_L16 & outC->_L6 &
    outC->_L28 & outC->_L7;
  outC->outIsConsistent = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void Msg155ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L26.valid = kcg_true;
  outC->_L26.transitionInformation = kcg_lit_int32(0);
  outC->_L27 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20.valid = kcg_true;
  outC->_L20.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L20.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L20.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L2 = kcg_true;
  outC->_L3.valid = kcg_true;
  outC->_L3.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L3.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L3.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L3.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L3.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L3.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L3.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L3.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L3.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L3.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L3.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L3.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L3.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3.packet1.mode = M_MODE_Full_Supervision;
  outC->_L3.packet1.level = M_LEVEL_Level_0;
  outC->_L3.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L8.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L8.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L8.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L8.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L8.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L8.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L8.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L8.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L8.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L8.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L8.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L8.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L8.packet0.mode = M_MODE_Full_Supervision;
  outC->_L8.packet0.level = M_LEVEL_Level_0;
  outC->_L8.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L12.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L12.l_train = kcg_lit_int32(0);
  outC->_L12.v_maxtrain = kcg_lit_int32(0);
  outC->_L12.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L12.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L12.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L12.n_axle = kcg_lit_int32(0);
  outC->_L12.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L12.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L12.tractionIdentity[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L12.nIter_ntc = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L12.nid_ntc[idx3] = kcg_lit_int32(0);
  }
  outC->_L13 = kcg_true;
  outC->_L14.valid = kcg_true;
  outC->_L14.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L18.p0.valid = kcg_true;
  outC->_L18.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L18.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L18.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L18.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L18.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L18.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L18.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L18.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L18.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L18.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L18.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L18.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L18.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L18.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L18.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L18.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L18.p1.valid = kcg_true;
  outC->_L18.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L18.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L18.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L18.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L18.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L18.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L18.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L18.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L18.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L18.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L18.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L18.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L18.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L18.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L18.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L18.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L18.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L18.p3.valid = kcg_true;
  outC->_L18.p3.number = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L18.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L18.p3.aNID_RADIO[idx5].telephoneNumber[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L18.p4.valid = kcg_true;
  outC->_L18.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L18.p5.valid = kcg_true;
  outC->_L18.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L18.p9.valid = kcg_true;
  outC->_L18.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L18.p11.valid = kcg_true;
  outC->_L18.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L18.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L18.p11.l_train = kcg_lit_int32(0);
  outC->_L18.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L18.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L18.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L18.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L18.p11.n_axle = kcg_lit_int32(0);
  outC->_L18.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L18.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L18.p11.tractionIdentity[idx6].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L18.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L18.p11.nid_ntc[idx7] = kcg_lit_int32(0);
  }
  outC->_L19.valid = kcg_true;
  outC->_L19.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->outIsConsistent = kcg_true;
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket005_Pkg(
    &outC->Context_RadioTrainTrackPacket005__IsValid_1);
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  RadioTrainTrackPackets__GetP005_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP005_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  RadioTrainTrackPacket011__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket004_Pkg(
    &outC->Context_RadioTrainTrackPacket004__IsValid_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  RadioTrainTrackPackets__GetP004_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP004_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */
  RadioTrainTrackPacket003__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->Context_RadioTrainTrackPacket003__IsValid_1);
  /* _L20=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__GetP003_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  /* _L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#2)/ */
  RadioTrainTrackPacket009__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->Context_RadioTrainTrackPacket009__IsValid_2);
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#2)/ */
  RadioTrainTrackPackets__GetP009_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP009_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Msg155ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket005_Pkg(
    &outC->Context_RadioTrainTrackPacket005__IsValid_1);
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  RadioTrainTrackPackets__GetP005_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP005_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  RadioTrainTrackPacket011__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket004_Pkg(
    &outC->Context_RadioTrainTrackPacket004__IsValid_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  RadioTrainTrackPackets__GetP004_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP004_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */
  RadioTrainTrackPacket003__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->Context_RadioTrainTrackPacket003__IsValid_1);
  /* _L20=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__GetP003_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  /* _L27=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#2)/ */
  RadioTrainTrackPacket009__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->Context_RadioTrainTrackPacket009__IsValid_2);
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#2)/ */
  RadioTrainTrackPackets__GetP009_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP009_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Msg155ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

