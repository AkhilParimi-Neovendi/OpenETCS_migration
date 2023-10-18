/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg159ConsistencyChecker__HasConsistentPackets/ */
void Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackPackets/ */
  outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  outC_Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L1, inRadioTrainTrackPackets);
  /* _L23=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#1)/ */
  RadioTrainTrackPackets__GetP009_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackPackets__GetP009_1);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L23,
    &outC->Context_RadioTrainTrackPackets__GetP009_1.outRadioTrainTrackPacket);
  /* _L24=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#1)/ */
  RadioTrainTrackPacket009__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
    &outC->_L23,
    &outC->Context_RadioTrainTrackPacket009__IsValid_1);
  outC->_L24 = outC->Context_RadioTrainTrackPacket009__IsValid_1.outIsValid;
  outC->_L25 = !outC->_L24;
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L15,
    &outC->Context_RadioTrainTrackPackets__GetP011_1.outRadioTrainTrackPacket);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  RadioTrainTrackPacket011__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
    &outC->_L15,
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  outC->_L17 = outC->Context_RadioTrainTrackPacket011__IsValid_1.outIsValid;
  outC->_L22 = !outC->_L17;
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackPackets__GetP005_1);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L14,
    &outC->Context_RadioTrainTrackPackets__GetP005_1.outRadioTrainTrackPacket);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
    &outC->_L14,
    &outC->Context_RadioTrainTrackPacket005__IsValid_1);
  outC->_L18 = outC->Context_RadioTrainTrackPacket005__IsValid_1.outIsValid;
  outC->_L21 = !outC->_L18;
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackPackets__GetP004_1);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L13,
    &outC->Context_RadioTrainTrackPackets__GetP004_1.outRadioTrainTrackPacket);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
    &outC->_L13,
    &outC->Context_RadioTrainTrackPacket004__IsValid_1);
  outC->_L19 = outC->Context_RadioTrainTrackPacket004__IsValid_1.out_IsValid;
  outC->_L20 = !outC->_L19;
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L10,
    &outC->Context_RadioTrainTrackPackets__GetP001_1.outRadioTrainTrackPacket);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
    &outC->_L10,
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  outC->_L11 = outC->Context_RadioTrainTrackPacket001__IsValid_1.outIsValid;
  outC->_L12 = !outC->_L11;
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L9,
    &outC->Context_RadioTrainTrackPackets__GetP000_1.outRadioTrainTrackPacket);
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
    &outC->_L9,
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  outC->_L7 = outC->Context_RadioTrainTrackPacket000__IsValid_1.outIsValid;
  outC->_L8 = !outC->_L7;
  outC->_L6 = outC->_L8 & outC->_L12 & outC->_L20 & outC->_L21 & outC->_L25 &
    outC->_L22;
  outC->outIsConsistent = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void Msg159ConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23.valid = kcg_true;
  outC->_L23.transitionInformation = kcg_lit_int64(0);
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L15.valid = kcg_true;
  outC->_L15.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L15.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L15.l_train = kcg_lit_int64(0);
  outC->_L15.v_maxtrain = kcg_lit_int64(0);
  outC->_L15.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L15.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L15.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L15.n_axle = kcg_lit_int64(0);
  outC->_L15.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L15.tractionIdentity[idx].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L15.tractionIdentity[idx].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L15.nIter_ntc = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L15.nid_ntc[idx1] = kcg_lit_int64(0);
  }
  outC->_L14.valid = kcg_true;
  outC->_L14.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L13.valid = kcg_true;
  outC->_L13.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L10.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L10.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L10.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L10.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L10.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L10.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L10.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L10.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L10.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L10.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L10.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L10.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L10.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L10.packet1.mode = M_MODE_Full_Supervision;
  outC->_L10.packet1.level = M_LEVEL_Level_0;
  outC->_L10.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L9.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L9.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L9.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L9.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L9.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L9.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L9.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L9.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L9.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L9.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L9.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L9.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L9.packet0.mode = M_MODE_Full_Supervision;
  outC->_L9.packet0.level = M_LEVEL_Level_0;
  outC->_L9.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L1.p0.valid = kcg_true;
  outC->_L1.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L1.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L1.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L1.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L1.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L1.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L1.p0.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L1.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L1.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L1.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L1.p1.valid = kcg_true;
  outC->_L1.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L1.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L1.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L1.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L1.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L1.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L1.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L1.p1.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L1.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L1.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L1.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L1.p3.valid = kcg_true;
  outC->_L1.p3.number = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L1.p3.aNID_RADIO[idx3].valid = kcg_true;
    for (idx2 = 0; idx2 < 15; idx2++) {
      outC->_L1.p3.aNID_RADIO[idx3].telephoneNumber[idx2] = kcg_lit_int64(0);
    }
  }
  outC->_L1.p4.valid = kcg_true;
  outC->_L1.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1.p5.valid = kcg_true;
  outC->_L1.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L1.p9.valid = kcg_true;
  outC->_L1.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L1.p11.valid = kcg_true;
  outC->_L1.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.p11.l_train = kcg_lit_int64(0);
  outC->_L1.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.p11.n_axle = kcg_lit_int64(0);
  outC->_L1.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L1.p11.tractionIdentity[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.p11.tractionIdentity[idx4].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L1.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L1.p11.nid_ntc[idx5] = kcg_lit_int64(0);
  }
  outC->outIsConsistent = kcg_true;
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
    &outC->Context_RadioTrainTrackPacket004__IsValid_1);
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  RadioTrainTrackPackets__GetP004_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP004_1);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
    &outC->Context_RadioTrainTrackPacket005__IsValid_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  RadioTrainTrackPackets__GetP005_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP005_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  RadioTrainTrackPacket011__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  /* _L24=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#1)/ */
  RadioTrainTrackPacket009__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
    &outC->Context_RadioTrainTrackPacket009__IsValid_1);
  /* _L23=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#1)/ */
  RadioTrainTrackPackets__GetP009_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP009_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Msg159ConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
    &outC->Context_RadioTrainTrackPacket004__IsValid_1);
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  RadioTrainTrackPackets__GetP004_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP004_1);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
    &outC->Context_RadioTrainTrackPacket005__IsValid_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  RadioTrainTrackPackets__GetP005_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP005_1);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__IsValid#1)/ */
  RadioTrainTrackPacket011__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
    &outC->Context_RadioTrainTrackPacket011__IsValid_1);
  /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  /* _L24=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#1)/ */
  RadioTrainTrackPacket009__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
    &outC->Context_RadioTrainTrackPacket009__IsValid_1);
  /* _L23=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#1)/ */
  RadioTrainTrackPackets__GetP009_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP009_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Msg159ConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

