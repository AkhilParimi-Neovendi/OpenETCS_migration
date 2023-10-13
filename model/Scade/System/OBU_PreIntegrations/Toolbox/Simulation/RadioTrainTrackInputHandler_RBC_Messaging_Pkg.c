/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackInputHandler_RBC_Messaging_Pkg.h"

/* RBC_Messaging_Pkg::RadioTrainTrackInputHandler/ */
void RadioTrainTrackInputHandler_RBC_Messaging_Pkg(
  /* inRadioTrainTrack/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrack,
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC)
{
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg#1)/ */
  RadioTrainTrackFactory__C_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
    &outC->Context_RadioTrainTrackFactory__CreateDefaultMsg_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackFactory__CreateDefaultMsg_1.o_RadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L4,
    inRadioTrainTrack);
  /* _L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg#1)/ */
  _143_RadioTrainTrackMessa_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->_L4,
    &outC->Context_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_1);
  outC->_L3 =
    outC->Context_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_1.outIsConsistent;
  /* _L2= */
  if (outC->_L3) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&outC->_L2, &outC->_L4);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&outC->_L2, &outC->_L1);
  }
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrack,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackInputHandler_init_RBC_Messaging_Pkg(
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;

  outC->_L4.present = kcg_true;
  outC->_L4.header.present = kcg_true;
  outC->_L4.header.nid_message = kcg_lit_int64(0);
  outC->_L4.header.t_train = kcg_lit_int64(0);
  outC->_L4.header.nid_engine = kcg_lit_int64(0);
  outC->_L4.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L4.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L4.header.xNID_EM = kcg_lit_int64(0);
  outC->_L4.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L4.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L4.packets.p0.valid = kcg_true;
  outC->_L4.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L4.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L4.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L4.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L4.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L4.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L4.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L4.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L4.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L4.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L4.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L4.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L4.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L4.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L4.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L4.packets.p1.valid = kcg_true;
  outC->_L4.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L4.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L4.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L4.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L4.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L4.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L4.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L4.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L4.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L4.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L4.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L4.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L4.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L4.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L4.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L4.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L4.packets.p3.valid = kcg_true;
  outC->_L4.packets.p3.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L4.packets.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L4.packets.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L4.packets.p4.valid = kcg_true;
  outC->_L4.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L4.packets.p5.valid = kcg_true;
  outC->_L4.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L4.packets.p9.valid = kcg_true;
  outC->_L4.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L4.packets.p11.valid = kcg_true;
  outC->_L4.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L4.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L4.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L4.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L4.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L4.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L4.packets.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4.packets.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L4.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L4.packets.p11.nid_ntc[idx3] = kcg_lit_int64(0);
  }
  outC->_L1.present = kcg_true;
  outC->_L1.header.present = kcg_true;
  outC->_L1.header.nid_message = kcg_lit_int64(0);
  outC->_L1.header.t_train = kcg_lit_int64(0);
  outC->_L1.header.nid_engine = kcg_lit_int64(0);
  outC->_L1.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L1.header.xNID_EM = kcg_lit_int64(0);
  outC->_L1.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L1.packets.p0.valid = kcg_true;
  outC->_L1.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L1.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L1.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L1.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L1.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L1.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L1.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L1.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L1.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L1.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L1.packets.p1.valid = kcg_true;
  outC->_L1.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L1.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L1.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L1.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L1.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L1.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L1.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L1.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L1.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L1.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L1.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L1.packets.p3.valid = kcg_true;
  outC->_L1.packets.p3.number = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L1.packets.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L1.packets.p3.aNID_RADIO[idx5].telephoneNumber[idx4] = kcg_lit_int64(0);
    }
  }
  outC->_L1.packets.p4.valid = kcg_true;
  outC->_L1.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1.packets.p5.valid = kcg_true;
  outC->_L1.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L1.packets.p9.valid = kcg_true;
  outC->_L1.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L1.packets.p11.valid = kcg_true;
  outC->_L1.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L1.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L1.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L1.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L1.packets.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.packets.p11.tractionIdentity[idx6].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L1.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L1.packets.p11.nid_ntc[idx7] = kcg_lit_int64(0);
  }
  outC->_L2.present = kcg_true;
  outC->_L2.header.present = kcg_true;
  outC->_L2.header.nid_message = kcg_lit_int64(0);
  outC->_L2.header.t_train = kcg_lit_int64(0);
  outC->_L2.header.nid_engine = kcg_lit_int64(0);
  outC->_L2.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L2.header.xNID_EM = kcg_lit_int64(0);
  outC->_L2.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L2.packets.p0.valid = kcg_true;
  outC->_L2.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L2.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2.packets.p1.valid = kcg_true;
  outC->_L2.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L2.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L2.packets.p3.valid = kcg_true;
  outC->_L2.packets.p3.number = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->_L2.packets.p3.aNID_RADIO[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->_L2.packets.p3.aNID_RADIO[idx9].telephoneNumber[idx8] = kcg_lit_int64(0);
    }
  }
  outC->_L2.packets.p4.valid = kcg_true;
  outC->_L2.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2.packets.p5.valid = kcg_true;
  outC->_L2.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L2.packets.p9.valid = kcg_true;
  outC->_L2.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L2.packets.p11.valid = kcg_true;
  outC->_L2.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L2.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L2.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L2.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->_L2.packets.p11.tractionIdentity[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2.packets.p11.tractionIdentity[idx10].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L2.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L2.packets.p11.nid_ntc[idx11] = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_true;
  outC->outRadioTrainTrack.present = kcg_true;
  outC->outRadioTrainTrack.header.present = kcg_true;
  outC->outRadioTrainTrack.header.nid_message = kcg_lit_int64(0);
  outC->outRadioTrainTrack.header.t_train = kcg_lit_int64(0);
  outC->outRadioTrainTrack.header.nid_engine = kcg_lit_int64(0);
  outC->outRadioTrainTrack.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->outRadioTrainTrack.header.xT_TRAIN = kcg_lit_int64(0);
  outC->outRadioTrainTrack.header.xNID_EM = kcg_lit_int64(0);
  outC->outRadioTrainTrack.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outRadioTrainTrack.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p0.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrack.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrack.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrack.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->outRadioTrainTrack.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrack.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p1.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrack.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrack.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrack.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrack.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->outRadioTrainTrack.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrack.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p3.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p3.number = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 1; idx13++) {
    outC->outRadioTrainTrack.packets.p3.aNID_RADIO[idx13].valid = kcg_true;
    for (idx12 = 0; idx12 < 15; idx12++) {
      outC->outRadioTrainTrack.packets.p3.aNID_RADIO[idx13].telephoneNumber[idx12] =
        kcg_lit_int64(0);
    }
  }
  outC->outRadioTrainTrack.packets.p4.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outRadioTrainTrack.packets.p5.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p9.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p11.valid = kcg_true;
  outC->outRadioTrainTrack.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioTrainTrack.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioTrainTrack.packets.p11.l_train = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioTrainTrack.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrack.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrack.packets.p11.n_axle = kcg_lit_int64(0);
  outC->outRadioTrainTrack.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 4; idx14++) {
    outC->outRadioTrainTrack.packets.p11.tractionIdentity[idx14].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrack.packets.p11.tractionIdentity[idx14].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->outRadioTrainTrack.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->outRadioTrainTrack.packets.p11.nid_ntc[idx15] = kcg_lit_int64(0);
  }
  /* _L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg#1)/ */
  _143_RadioTrainTrackMessa_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_1);
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg#1)/ */
  RadioTrainTrackFactory__C_init_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
    &outC->Context_RadioTrainTrackFactory__CreateDefaultMsg_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrainTrackInputHandler_reset_RBC_Messaging_Pkg(
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC)
{
  /* _L3=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg#1)/ */
  _143_RadioTrainTrackMessa_reset_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    &outC->Context_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_1);
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg#1)/ */
  RadioTrainTrackFactory__C_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
    &outC->Context_RadioTrainTrackFactory__CreateDefaultMsg_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackInputHandler_RBC_Messaging_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

