/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets/ */
void RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC)
{
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L1,
    inRadioTrainTrackMessage);
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L2, &outC->_L1.packets);
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->outRadioTrainTrackPackets,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackMessage__GetPackets_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC)
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

  outC->_L2.p0.valid = kcg_true;
  outC->_L2.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L2.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L2.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L2.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L2.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L2.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L2.p0.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L2.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L2.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L2.p1.valid = kcg_true;
  outC->_L2.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L2.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L2.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L2.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L2.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L2.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L2.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L2.p1.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L2.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L2.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L2.p3.valid = kcg_true;
  outC->_L2.p3.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L2.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L2.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L2.p4.valid = kcg_true;
  outC->_L2.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2.p5.valid = kcg_true;
  outC->_L2.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L2.p9.valid = kcg_true;
  outC->_L2.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L2.p11.valid = kcg_true;
  outC->_L2.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2.p11.l_train = kcg_lit_int32(0);
  outC->_L2.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L2.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2.p11.n_axle = kcg_lit_int32(0);
  outC->_L2.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L2.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L2.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L2.p11.nid_ntc[idx3] = kcg_lit_int32(0);
  }
  outC->_L1.present = kcg_true;
  outC->_L1.header.present = kcg_true;
  outC->_L1.header.nid_message = kcg_lit_int32(0);
  outC->_L1.header.t_train = kcg_lit_int32(0);
  outC->_L1.header.nid_engine = kcg_lit_int32(0);
  outC->_L1.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L1.header.xNID_EM = kcg_lit_int32(0);
  outC->_L1.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L1.packets.p0.valid = kcg_true;
  outC->_L1.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L1.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L1.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L1.packets.p1.valid = kcg_true;
  outC->_L1.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L1.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L1.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L1.packets.p3.valid = kcg_true;
  outC->_L1.packets.p3.number = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L1.packets.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L1.packets.p3.aNID_RADIO[idx5].telephoneNumber[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L1.packets.p4.valid = kcg_true;
  outC->_L1.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1.packets.p5.valid = kcg_true;
  outC->_L1.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L1.packets.p9.valid = kcg_true;
  outC->_L1.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L1.packets.p11.valid = kcg_true;
  outC->_L1.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L1.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L1.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L1.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L1.packets.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.packets.p11.tractionIdentity[idx6].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L1.packets.p11.nid_ntc[idx7] = kcg_lit_int32(0);
  }
  outC->outRadioTrainTrackPackets.p0.valid = kcg_true;
  outC->outRadioTrainTrackPackets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackPackets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackPackets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackPackets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackPackets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackPackets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->outRadioTrainTrackPackets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackPackets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p1.valid = kcg_true;
  outC->outRadioTrainTrackPackets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackPackets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackPackets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackPackets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackPackets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackPackets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->outRadioTrainTrackPackets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackPackets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p3.valid = kcg_true;
  outC->outRadioTrainTrackPackets.p3.number = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->outRadioTrainTrackPackets.p3.aNID_RADIO[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->outRadioTrainTrackPackets.p3.aNID_RADIO[idx9].telephoneNumber[idx8] =
        kcg_lit_int32(0);
    }
  }
  outC->outRadioTrainTrackPackets.p4.valid = kcg_true;
  outC->outRadioTrainTrackPackets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outRadioTrainTrackPackets.p5.valid = kcg_true;
  outC->outRadioTrainTrackPackets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p9.valid = kcg_true;
  outC->outRadioTrainTrackPackets.p9.transitionInformation = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p11.valid = kcg_true;
  outC->outRadioTrainTrackPackets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioTrainTrackPackets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioTrainTrackPackets.p11.l_train = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioTrainTrackPackets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrackPackets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrackPackets.p11.n_axle = kcg_lit_int32(0);
  outC->outRadioTrainTrackPackets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->outRadioTrainTrackPackets.p11.tractionIdentity[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrackPackets.p11.tractionIdentity[idx10].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->outRadioTrainTrackPackets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->outRadioTrainTrackPackets.p11.nid_ntc[idx11] = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrainTrackMessage__GetPackets_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

