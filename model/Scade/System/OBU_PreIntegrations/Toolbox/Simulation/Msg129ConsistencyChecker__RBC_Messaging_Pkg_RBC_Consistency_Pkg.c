/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Msg129ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::Msg129ConsistencyChecker__HasConsistentPackets/ */
void Msg129ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackPackets/ */
  outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  outC_Msg129ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L27, inRadioTrainTrackPackets);
  /* _L33=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#1)/ */
  _131_RadioTrainTrackPacke_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L27,
    &outC->_10_Context_RadioTrainTrackPackets__GetP009_1);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L33,
    &outC->_10_Context_RadioTrainTrackPackets__GetP009_1.outRadioTrainTrackPacket);
  /* _L34=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#1)/ */
  RadioTrainTrackPacket009__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->_L33,
    &outC->_9_Context_RadioTrainTrackPacket009__IsValid_1);
  outC->_L34 = outC->_9_Context_RadioTrainTrackPacket009__IsValid_1.outIsValid;
  outC->_L35 = !outC->_L34;
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  _128_RadioTrainTrackPacke_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L27,
    &outC->_8_Context_RadioTrainTrackPackets__GetP005_1);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L29,
    &outC->_8_Context_RadioTrainTrackPackets__GetP005_1.outRadioTrainTrackPacket);
  /* _L30=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket005_Pkg(
    &outC->_L29,
    &outC->_7_Context_RadioTrainTrackPacket005__IsValid_1);
  outC->_L30 = outC->_7_Context_RadioTrainTrackPacket005__IsValid_1.outIsValid;
  outC->_L32 = !outC->_L30;
  /* _L20=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#2)/ */
  _72_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L27,
    &outC->_6_Context_RadioTrainTrackPackets__GetP000_2);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L20,
    &outC->_6_Context_RadioTrainTrackPackets__GetP000_2.outRadioTrainTrackPacket);
  /* _L31=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#2)/ */
  _86_RadioTrainTrackPacket000__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->_L20,
    &outC->_5_Context_RadioTrainTrackPacket000__IsValid_2);
  outC->_L31 = outC->_5_Context_RadioTrainTrackPacket000__IsValid_2.outIsValid;
  /* _L25=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#2)/ */
  RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L27,
    &outC->_4_Context_RadioTrainTrackPackets__GetP003_2);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L25,
    &outC->_4_Context_RadioTrainTrackPackets__GetP003_2.outRadioTrainTrackPacket);
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#2)/ */
  RadioTrainTrackPacket003__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->_L25,
    &outC->_3_Context_RadioTrainTrackPacket003__IsValid_2);
  outC->_L26 = outC->_3_Context_RadioTrainTrackPacket003__IsValid_2.outIsValid;
  outC->_L28 = !outC->_L26;
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  _129_RadioTrainTrackPacke_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L27,
    &outC->_2_Context_RadioTrainTrackPackets__GetP004_1);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L21,
    &outC->_2_Context_RadioTrainTrackPackets__GetP004_1.outRadioTrainTrackPacket);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket004_Pkg(
    &outC->_L21,
    &outC->_1_Context_RadioTrainTrackPacket004__IsValid_1);
  outC->_L18 = outC->_1_Context_RadioTrainTrackPacket004__IsValid_1.out_IsValid;
  outC->_L22 = !outC->_L18;
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#2)/ */
  _57_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L27,
    &outC->Context_RadioTrainTrackPackets__GetP001_2);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L19,
    &outC->Context_RadioTrainTrackPackets__GetP001_2.outRadioTrainTrackPacket);
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#2)/ */
  _87_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->_L19,
    &outC->Context_RadioTrainTrackPacket001__IsValid_2);
  outC->_L17 = outC->Context_RadioTrainTrackPacket001__IsValid_2.outIsValid;
  outC->_L16 = outC->_L31 ^ outC->_L17;
  outC->_L23 = outC->_L16 & outC->_L28 & outC->_L22 & outC->_L32 & outC->_L35;
  outC->outIsConsistent = outC->_L23;
}

#ifndef KCG_USER_DEFINED_INIT
void Msg129ConsistencyChecker__init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg129ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L33.valid = kcg_true;
  outC->_L33.transitionInformation = kcg_lit_int64(0);
  outC->_L34 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L19.valid = kcg_true;
  outC->_L19.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L19.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L19.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L19.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L19.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L19.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L19.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L19.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L19.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L19.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L19.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L19.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L19.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L19.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L19.packet1.mode = M_MODE_Full_Supervision;
  outC->_L19.packet1.level = M_LEVEL_Level_0;
  outC->_L19.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L20.valid = kcg_true;
  outC->_L20.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L20.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L20.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L20.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L20.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L20.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L20.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L20.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L20.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L20.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L20.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L20.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L20.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L20.packet0.mode = M_MODE_Full_Supervision;
  outC->_L20.packet0.level = M_LEVEL_Level_0;
  outC->_L20.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L21.valid = kcg_true;
  outC->_L21.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L22 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L25.valid = kcg_true;
  outC->_L25.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L25.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L25.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L26 = kcg_true;
  outC->_L27.p0.valid = kcg_true;
  outC->_L27.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L27.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L27.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L27.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L27.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L27.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L27.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L27.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L27.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L27.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L27.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L27.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L27.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L27.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L27.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L27.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L27.p1.valid = kcg_true;
  outC->_L27.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L27.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L27.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L27.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L27.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L27.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L27.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L27.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L27.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L27.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L27.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L27.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L27.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L27.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L27.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L27.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L27.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L27.p3.valid = kcg_true;
  outC->_L27.p3.number = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L27.p3.aNID_RADIO[idx3].valid = kcg_true;
    for (idx2 = 0; idx2 < 15; idx2++) {
      outC->_L27.p3.aNID_RADIO[idx3].telephoneNumber[idx2] = kcg_lit_int64(0);
    }
  }
  outC->_L27.p4.valid = kcg_true;
  outC->_L27.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L27.p5.valid = kcg_true;
  outC->_L27.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L27.p9.valid = kcg_true;
  outC->_L27.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L27.p11.valid = kcg_true;
  outC->_L27.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L27.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L27.p11.l_train = kcg_lit_int64(0);
  outC->_L27.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L27.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L27.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L27.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L27.p11.n_axle = kcg_lit_int64(0);
  outC->_L27.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L27.p11.tractionIdentity[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L27.p11.tractionIdentity[idx4].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L27.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L27.p11.nid_ntc[idx5] = kcg_lit_int64(0);
  }
  outC->_L28 = kcg_true;
  outC->_L29.valid = kcg_true;
  outC->_L29.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L30 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L32 = kcg_true;
  outC->outIsConsistent = kcg_true;
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#2)/ */
  _87_RadioTrainTrackPacket001__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->Context_RadioTrainTrackPacket001__IsValid_2);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#2)/ */
  _57_RadioTrainTrackPackets__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_2);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket004_Pkg(
    &outC->_1_Context_RadioTrainTrackPacket004__IsValid_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  _129_RadioTrainTrackPacke_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_2_Context_RadioTrainTrackPackets__GetP004_1);
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#2)/ */
  RadioTrainTrackPacket003__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->_3_Context_RadioTrainTrackPacket003__IsValid_2);
  /* _L25=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#2)/ */
  RadioTrainTrackPackets__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_4_Context_RadioTrainTrackPackets__GetP003_2);
  /* _L31=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#2)/ */
  _86_RadioTrainTrackPacket000__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->_5_Context_RadioTrainTrackPacket000__IsValid_2);
  /* _L20=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#2)/ */
  _72_RadioTrainTrackPackets__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_6_Context_RadioTrainTrackPackets__GetP000_2);
  /* _L30=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket005_Pkg(
    &outC->_7_Context_RadioTrainTrackPacket005__IsValid_1);
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  _128_RadioTrainTrackPacke_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_8_Context_RadioTrainTrackPackets__GetP005_1);
  /* _L34=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#1)/ */
  RadioTrainTrackPacket009__init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->_9_Context_RadioTrainTrackPacket009__IsValid_1);
  /* _L33=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#1)/ */
  _131_RadioTrainTrackPacke_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_10_Context_RadioTrainTrackPackets__GetP009_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Msg129ConsistencyChecker__reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_Msg129ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#2)/ */
  _87_RadioTrainTrackPacket001__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg(
    &outC->Context_RadioTrainTrackPacket001__IsValid_2);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#2)/ */
  _57_RadioTrainTrackPackets__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_2);
  /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid#1)/ */
  RadioTrainTrackPacket004__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket004_Pkg(
    &outC->_1_Context_RadioTrainTrackPacket004__IsValid_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004#1)/ */
  _129_RadioTrainTrackPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_2_Context_RadioTrainTrackPackets__GetP004_1);
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__IsValid#2)/ */
  RadioTrainTrackPacket003__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->_3_Context_RadioTrainTrackPacket003__IsValid_2);
  /* _L25=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#2)/ */
  RadioTrainTrackPackets__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_4_Context_RadioTrainTrackPackets__GetP003_2);
  /* _L31=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#2)/ */
  _86_RadioTrainTrackPacket000__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg(
    &outC->_5_Context_RadioTrainTrackPacket000__IsValid_2);
  /* _L20=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#2)/ */
  _72_RadioTrainTrackPackets__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_6_Context_RadioTrainTrackPackets__GetP000_2);
  /* _L30=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid#1)/ */
  RadioTrainTrackPacket005__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket005_Pkg(
    &outC->_7_Context_RadioTrainTrackPacket005__IsValid_1);
  /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005#1)/ */
  _128_RadioTrainTrackPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_8_Context_RadioTrainTrackPackets__GetP005_1);
  /* _L34=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket009_Pkg::RadioTrainTrackPacket009__IsValid#1)/ */
  RadioTrainTrackPacket009__reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket009_Pkg(
    &outC->_9_Context_RadioTrainTrackPacket009__IsValid_1);
  /* _L33=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP009#1)/ */
  _131_RadioTrainTrackPacke_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_10_Context_RadioTrainTrackPackets__GetP009_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Msg129ConsistencyChecker__RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

