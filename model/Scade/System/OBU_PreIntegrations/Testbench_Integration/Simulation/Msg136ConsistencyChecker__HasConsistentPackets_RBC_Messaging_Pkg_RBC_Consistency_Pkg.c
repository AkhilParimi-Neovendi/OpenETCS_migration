/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg136ConsistencyChecker__HasConsistentPackets/ */
void Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackPackets/ */
  outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  outC_Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L10, inRadioTrainTrackPackets);
  /* _L28=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#2)/ */
  RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L10,
    &outC->Context_RadioTrainTrackPackets__GetP009_2);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L28,
    &outC->Context_RadioTrainTrackPackets__GetP009_2.outRadioTrainTrackPacket);
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#2)/ */
  RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->_L28,
    &outC->Context_RadioTrainTrackPacket009__IsValid_2);
  outC->_L29 = outC->Context_RadioTrainTrackPacket009__IsValid_2.outIsValid;
  outC->_L27 = !outC->_L29;
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L10,
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPackets__GetP001_1.outRadioTrainTrackPacket);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->_L4,
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  outC->_L21 = outC->Context_RadioTrainTrackPacket001__IsValid_1.outIsValid;
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L10,
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L18,
    &outC->Context_RadioTrainTrackPackets__GetP000_1.outRadioTrainTrackPacket);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->_L18,
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  outC->_L3 = outC->Context_RadioTrainTrackPacket000__IsValid_1.outIsValid;
  outC->_L23 = outC->_L3 ^ outC->_L21;
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L10,
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L5,
    &outC->Context_RadioTrainTrackPackets__GetP003_1.outRadioTrainTrackPacket);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */
  RadioTrainTrackPacket003__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->_L5,
    &outC->Context_RadioTrainTrackPacket003__IsValid_1);
  outC->_L6 = outC->Context_RadioTrainTrackPacket003__IsValid_1.outIsValid;
  outC->_L20 = !outC->_L6;
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L10,
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L19,
    &outC->Context_RadioTrainTrackPackets__GetP011_1.outRadioTrainTrackPacket);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
    &outC->_L19,
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  outC->_L11 = outC->Context_RadioTrainTrackPacket011__IsValid_1.outIsValid;
  outC->_L13 = !outC->_L11;
  outC->_L12 = outC->_L23 & outC->_L20 & outC->_L27 & outC->_L13;
  outC->outIsConsistent = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void Msg136ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L27 = kcg_true;
  outC->_L28.valid = kcg_true;
  outC->_L28.transitionInformation = kcg_lit_int64(0);
  outC->_L29 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L4.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L4.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L4.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L4.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L4.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L4.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L4.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L4.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L4.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L4.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L4.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L4.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L4.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L4.packet1.mode = M_MODE_Full_Supervision;
  outC->_L4.packet1.level = M_LEVEL_Level_0;
  outC->_L4.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L5.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L5.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L6 = kcg_true;
  outC->_L10.p0.valid = kcg_true;
  outC->_L10.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L10.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L10.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L10.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L10.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L10.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L10.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L10.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L10.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L10.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L10.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L10.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L10.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L10.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L10.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L10.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L10.p1.valid = kcg_true;
  outC->_L10.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L10.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L10.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L10.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L10.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L10.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L10.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L10.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L10.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L10.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L10.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L10.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L10.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L10.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L10.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L10.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L10.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L10.p3.valid = kcg_true;
  outC->_L10.p3.number = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L10.p3.aNID_RADIO[idx3].valid = kcg_true;
    for (idx2 = 0; idx2 < 15; idx2++) {
      outC->_L10.p3.aNID_RADIO[idx3].telephoneNumber[idx2] = kcg_lit_int64(0);
    }
  }
  outC->_L10.p4.valid = kcg_true;
  outC->_L10.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L10.p5.valid = kcg_true;
  outC->_L10.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L10.p9.valid = kcg_true;
  outC->_L10.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L10.p11.valid = kcg_true;
  outC->_L10.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L10.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L10.p11.l_train = kcg_lit_int64(0);
  outC->_L10.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L10.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L10.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L10.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L10.p11.n_axle = kcg_lit_int64(0);
  outC->_L10.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L10.p11.tractionIdentity[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L10.p11.tractionIdentity[idx4].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L10.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L10.p11.nid_ntc[idx5] = kcg_lit_int64(0);
  }
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L18.valid = kcg_true;
  outC->_L18.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L18.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L18.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L18.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L18.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L18.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L18.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L18.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L18.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L18.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L18.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L18.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L18.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L18.packet0.mode = M_MODE_Full_Supervision;
  outC->_L18.packet0.level = M_LEVEL_Level_0;
  outC->_L18.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L19.valid = kcg_true;
  outC->_L19.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L19.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L19.l_train = kcg_lit_int64(0);
  outC->_L19.v_maxtrain = kcg_lit_int64(0);
  outC->_L19.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L19.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L19.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L19.n_axle = kcg_lit_int64(0);
  outC->_L19.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L19.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L19.tractionIdentity[idx6].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L19.nIter_ntc = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L19.nid_ntc[idx7] = kcg_lit_int64(0);
  }
  outC->_L20 = kcg_true;
  outC->_L21 = kcg_true;
  outC->outIsConsistent = kcg_true;
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  RadioTrainTrackPacket011__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */
  RadioTrainTrackPacket003__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->Context_RadioTrainTrackPacket003__IsValid_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__GetP003_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#2)/ */
  RadioTrainTrackPacket009__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->Context_RadioTrainTrackPacket009__IsValid_2);
  /* _L28=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#2)/ */
  RadioTrainTrackPackets__GetP009_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP009_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Msg136ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  RadioTrainTrackPacket011__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket011_Pkg(
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#1)/ */
  RadioTrainTrackPacket003__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->Context_RadioTrainTrackPacket003__IsValid_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__GetP003_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#2)/ */
  RadioTrainTrackPacket009__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->Context_RadioTrainTrackPacket009__IsValid_2);
  /* _L28=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#2)/ */
  RadioTrainTrackPackets__GetP009_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP009_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Msg136ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

