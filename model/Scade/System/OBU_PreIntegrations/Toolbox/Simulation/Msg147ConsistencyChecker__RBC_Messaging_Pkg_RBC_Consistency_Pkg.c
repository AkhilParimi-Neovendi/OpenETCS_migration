/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg147ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg147ConsistencyChecker__HasConsistentPackets/ */
void Msg147ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackPackets/ */
  outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  outC_Msg147ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L6, inRadioTrainTrackPackets);
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  _57_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L6,
    &outC->_11_Context_RadioTrainTrackPackets__GetP001_1);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L16,
    &outC->_11_Context_RadioTrainTrackPackets__GetP001_1.outRadioTrainTrackPacket);
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  _87_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->_L16,
    &outC->_10_Context_RadioTrainTrackPacket001__IsValid_1);
  outC->_L12 = outC->_10_Context_RadioTrainTrackPacket001__IsValid_1.outIsValid;
  outC->_L20 = !outC->_L12;
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  _72_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L6,
    &outC->_9_Context_RadioTrainTrackPackets__GetP000_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L17,
    &outC->_9_Context_RadioTrainTrackPackets__GetP000_1.outRadioTrainTrackPacket);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  _86_RadioTrainTrackPacket000__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->_L17,
    &outC->_8_Context_RadioTrainTrackPacket000__IsValid_1);
  outC->_L19 = outC->_8_Context_RadioTrainTrackPacket000__IsValid_1.outIsValid;
  outC->_L4 = !outC->_L19;
  outC->_L25 = outC->_L4 ^ outC->_L20;
  /* _L24=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#1)/ */
  _131_RadioTrainTrackPacke_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L6,
    &outC->_7_Context_RadioTrainTrackPackets__GetP009_1);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L24,
    &outC->_7_Context_RadioTrainTrackPackets__GetP009_1.outRadioTrainTrackPacket);
  /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#1)/ */
  RadioTrainTrackPacket009__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->_L24,
    &outC->_6_Context_RadioTrainTrackPacket009__IsValid_1);
  outC->_L22 = outC->_6_Context_RadioTrainTrackPacket009__IsValid_1.outIsValid;
  outC->_L23 = !outC->_L22;
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  _129_RadioTrainTrackPacke_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L6,
    &outC->_5_Context_RadioTrainTrackPackets__GetP004_1);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L14,
    &outC->_5_Context_RadioTrainTrackPackets__GetP004_1.outRadioTrainTrackPacket);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket004_Pkg(
    &outC->_L14,
    &outC->_4_Context_RadioTrainTrackPacket004__IsValid_1);
  outC->_L21 = outC->_4_Context_RadioTrainTrackPacket004__IsValid_1.out_IsValid;
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  _128_RadioTrainTrackPacke_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L6,
    &outC->_3_Context_RadioTrainTrackPackets__GetP005_1);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L3,
    &outC->_3_Context_RadioTrainTrackPackets__GetP005_1.outRadioTrainTrackPacket);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket005_Pkg(
    &outC->_L3,
    &outC->_2_Context_RadioTrainTrackPacket005__IsValid_1);
  outC->_L18 = outC->_2_Context_RadioTrainTrackPacket005__IsValid_1.outIsValid;
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  _89_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L6,
    &outC->_1_Context_RadioTrainTrackPackets__GetP011_1);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L8,
    &outC->_1_Context_RadioTrainTrackPackets__GetP011_1.outRadioTrainTrackPacket);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  _130_RadioTrainTrackPacke_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
    &outC->_L8,
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  outC->_L15 = outC->Context_RadioTrainTrackPacket011__IsValid_1.outIsValid;
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L11,
    &outC->Context_RadioTrainTrackPackets__GetP003_1.outRadioTrainTrackPacket);
  outC->_L1 = !outC->_L15;
  outC->_L10 = !outC->_L18;
  outC->_L7 = !outC->_L21;
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */
  RadioTrainTrackPacket003__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->_L11,
    &outC->Context_RadioTrainTrackPacket003__IsValid_1);
  outC->_L2 = outC->Context_RadioTrainTrackPacket003__IsValid_1.outIsValid;
  outC->_L5 = !outC->_L2;
  outC->_L9 = outC->_L25 & outC->_L5 & outC->_L7 & outC->_L10 & outC->_L23 &
    outC->_L1;
  outC->outIsConsistent = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void Msg147ConsistencyChecker__init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg147ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L25 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L24.valid = kcg_true;
  outC->_L24.transitionInformation = kcg_lit_int64(0);
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3.valid = kcg_true;
  outC->_L3.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
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
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L6.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L6.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
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
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L6.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L6.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L6.p11.nid_ntc[idx3] = kcg_lit_int64(0);
  }
  outC->_L7 = kcg_true;
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
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L8.tractionIdentity[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L8.tractionIdentity[idx4].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L8.nIter_ntc = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L8.nid_ntc[idx5] = kcg_lit_int64(0);
  }
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.number = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 1; idx7++) {
    outC->_L11.aNID_RADIO[idx7].valid = kcg_true;
    for (idx6 = 0; idx6 < 15; idx6++) {
      outC->_L11.aNID_RADIO[idx7].telephoneNumber[idx6] = kcg_lit_int64(0);
    }
  }
  outC->_L12 = kcg_true;
  outC->_L14.valid = kcg_true;
  outC->_L14.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L15 = kcg_true;
  outC->_L16.valid = kcg_true;
  outC->_L16.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L16.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L16.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L16.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L16.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L16.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L16.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L16.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L16.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L16.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L16.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L16.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L16.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L16.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L16.packet1.mode = M_MODE_Full_Supervision;
  outC->_L16.packet1.level = M_LEVEL_Level_0;
  outC->_L16.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L17.valid = kcg_true;
  outC->_L17.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L17.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L17.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L17.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L17.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L17.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L17.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L17.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L17.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L17.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L17.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L17.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L17.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L17.packet0.mode = M_MODE_Full_Supervision;
  outC->_L17.packet0.level = M_LEVEL_Level_0;
  outC->_L17.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L21 = kcg_true;
  outC->outIsConsistent = kcg_true;
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */
  RadioTrainTrackPacket003__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->Context_RadioTrainTrackPacket003__IsValid_1);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  _130_RadioTrainTrackPacke_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  _89_RadioTrainTrackPackets__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_1_Context_RadioTrainTrackPackets__GetP011_1);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket005_Pkg(
    &outC->_2_Context_RadioTrainTrackPacket005__IsValid_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  _128_RadioTrainTrackPacke_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_3_Context_RadioTrainTrackPackets__GetP005_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket004_Pkg(
    &outC->_4_Context_RadioTrainTrackPacket004__IsValid_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  _129_RadioTrainTrackPacke_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_5_Context_RadioTrainTrackPackets__GetP004_1);
  /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#1)/ */
  RadioTrainTrackPacket009__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->_6_Context_RadioTrainTrackPacket009__IsValid_1);
  /* _L24=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#1)/ */
  _131_RadioTrainTrackPacke_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_7_Context_RadioTrainTrackPackets__GetP009_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  _86_RadioTrainTrackPacket000__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->_8_Context_RadioTrainTrackPacket000__IsValid_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  _72_RadioTrainTrackPackets__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_9_Context_RadioTrainTrackPackets__GetP000_1);
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  _87_RadioTrainTrackPacket001__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->_10_Context_RadioTrainTrackPacket001__IsValid_1);
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  _57_RadioTrainTrackPackets__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_11_Context_RadioTrainTrackPackets__GetP001_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Msg147ConsistencyChecker__reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg147ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */
  RadioTrainTrackPacket003__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->Context_RadioTrainTrackPacket003__IsValid_1);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  _130_RadioTrainTrackPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  _89_RadioTrainTrackPackets__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_1_Context_RadioTrainTrackPackets__GetP011_1);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket005_Pkg(
    &outC->_2_Context_RadioTrainTrackPacket005__IsValid_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  _128_RadioTrainTrackPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_3_Context_RadioTrainTrackPackets__GetP005_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket004_Pkg(
    &outC->_4_Context_RadioTrainTrackPacket004__IsValid_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  _129_RadioTrainTrackPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_5_Context_RadioTrainTrackPackets__GetP004_1);
  /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#1)/ */
  RadioTrainTrackPacket009__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->_6_Context_RadioTrainTrackPacket009__IsValid_1);
  /* _L24=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#1)/ */
  _131_RadioTrainTrackPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_7_Context_RadioTrainTrackPackets__GetP009_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  _86_RadioTrainTrackPacket000__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->_8_Context_RadioTrainTrackPacket000__IsValid_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  _72_RadioTrainTrackPackets__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_9_Context_RadioTrainTrackPackets__GetP000_1);
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  _87_RadioTrainTrackPacket001__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->_10_Context_RadioTrainTrackPacket001__IsValid_1);
  /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  _57_RadioTrainTrackPackets__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_11_Context_RadioTrainTrackPackets__GetP001_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Msg147ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

