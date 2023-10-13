/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_89_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011/ */
void _89_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* inRadioTrainTrackPackets/ */
  outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  outC__89_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC)
{
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L1, inRadioTrainTrackPackets);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L3,
    &outC->_L1.p11);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->outRadioTrainTrackPacket,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void _89_RadioTrainTrackPackets__G_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  outC__89_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L3.valid = kcg_true;
  outC->_L3.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3.l_train = kcg_lit_int64(0);
  outC->_L3.v_maxtrain = kcg_lit_int64(0);
  outC->_L3.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L3.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L3.n_axle = kcg_lit_int64(0);
  outC->_L3.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L3.tractionIdentity[idx].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3.tractionIdentity[idx].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L3.nIter_ntc = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L3.nid_ntc[idx1] = kcg_lit_int64(0);
  }
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
  outC->outRadioTrainTrackPacket.valid = kcg_true;
  outC->outRadioTrainTrackPacket.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioTrainTrackPacket.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioTrainTrackPacket.l_train = kcg_lit_int64(0);
  outC->outRadioTrainTrackPacket.v_maxtrain = kcg_lit_int64(0);
  outC->outRadioTrainTrackPacket.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioTrainTrackPacket.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrackPacket.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrackPacket.n_axle = kcg_lit_int64(0);
  outC->outRadioTrainTrackPacket.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->outRadioTrainTrackPacket.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrackPacket.tractionIdentity[idx6].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->outRadioTrainTrackPacket.nIter_ntc = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->outRadioTrainTrackPacket.nid_ntc[idx7] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _89_RadioTrainTrackPackets__G_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  outC__89_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _89_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

