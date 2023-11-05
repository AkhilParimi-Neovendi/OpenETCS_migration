/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__UpdateWithP003_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__UpdateWithP003/ */
void TrainData__UpdateWithP003_RBC_Session_Pkg(
  /* inTrainData/ */
  TrainData_T *inTrainData,
  /* inRadioTraintrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTraintrackMessage,
  outC_TrainData__UpdateWithP003_RBC_Session_Pkg *outC)
{
  kcg_copy_TrainData_T(&outC->_L9, inTrainData);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L6,
    inRadioTraintrackMessage);
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L6,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1.outRadioTrainTrackPackets);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__GetP003_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L5,
    &outC->Context_RadioTrainTrackPackets__GetP003_1.outRadioTrainTrackPacket);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers#1)/ */
  RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->_L5,
    &outC->Context_RadioTrainTrackPacket003__CountOnboardNumbers_1);
  outC->_L3 =
    outC->Context_RadioTrainTrackPacket003__CountOnboardNumbers_1.outCount;
  /* _L7=(RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers#1)/ */
  TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg(
    &outC->_L9,
    outC->_L3,
    &outC->Context_TrainData__SetNumberOfOnboardPhoneNumbers_1);
  kcg_copy_TrainData_T(
    &outC->_L7,
    &outC->Context_TrainData__SetNumberOfOnboardPhoneNumbers_1.outTrainData);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers#1)/ */
  RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->_L5,
    &outC->Context_RadioTrainTrackPacket003__GetOnboardNumbers_1);
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackPacket003__GetOnboardNumbers_1.outOnboardPhoneNumbers);
  /* _L4=(RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers#1)/ */
  TrainData__SetOnboardPhoneNumbers_RBC_Session_Pkg(
    &outC->_L7,
    &outC->_L2,
    &outC->Context_TrainData__SetOnboardPhoneNumbers_1);
  kcg_copy_TrainData_T(
    &outC->_L4,
    &outC->Context_TrainData__SetOnboardPhoneNumbers_1.outTrainData);
  kcg_copy_TrainData_T(&outC->outTrainData, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void TrainData__UpdateWithP003_init_RBC_Session_Pkg(
  outC_TrainData__UpdateWithP003_RBC_Session_Pkg *outC)
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
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;

  outC->_L9.nid_engine = kcg_lit_int32(0);
  outC->_L9.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L9.m_OnboardPhoneNumbers[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L9.m_OnboardPhoneNumbers[idx1].telephoneNumber[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L9.t_train_ref = kcg_lit_int32(0);
  outC->_L9.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L9.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L9.l_train = kcg_lit_int32(0);
  outC->_L9.v_maxtrain = kcg_lit_int32(0);
  outC->_L9.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L9.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L9.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L9.n_axle = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L9.m_TractionIdentities[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L9.m_TractionIdentities[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L9.m_NationalSystemIdentities[idx3] = kcg_lit_int32(0);
  }
  outC->_L9.nid_operational = kcg_lit_int32(0);
  outC->_L1.p0.valid = kcg_true;
  outC->_L1.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L1.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L1.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L1.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1.p0.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L1.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L1.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L1.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L1.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L1.p1.valid = kcg_true;
  outC->_L1.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L1.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L1.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L1.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L1.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L1.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L1.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L1.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L1.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L1.p1.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L1.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L1.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L1.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L1.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L1.p3.valid = kcg_true;
  outC->_L1.p3.number = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L1.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L1.p3.aNID_RADIO[idx5].telephoneNumber[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L1.p4.valid = kcg_true;
  outC->_L1.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1.p5.valid = kcg_true;
  outC->_L1.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L1.p9.valid = kcg_true;
  outC->_L1.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L1.p11.valid = kcg_true;
  outC->_L1.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.p11.l_train = kcg_lit_int32(0);
  outC->_L1.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L1.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.p11.n_axle = kcg_lit_int32(0);
  outC->_L1.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L1.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.p11.tractionIdentity[idx6].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L1.p11.nid_ntc[idx7] = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->_L2[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->_L2[idx9].telephoneNumber[idx8] = kcg_lit_int32(0);
    }
  }
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4.nid_engine = kcg_lit_int32(0);
  outC->_L4.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 1; idx11++) {
    outC->_L4.m_OnboardPhoneNumbers[idx11].valid = kcg_true;
    for (idx10 = 0; idx10 < 15; idx10++) {
      outC->_L4.m_OnboardPhoneNumbers[idx11].telephoneNumber[idx10] =
        kcg_lit_int32(0);
    }
  }
  outC->_L4.t_train_ref = kcg_lit_int32(0);
  outC->_L4.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4.l_train = kcg_lit_int32(0);
  outC->_L4.v_maxtrain = kcg_lit_int32(0);
  outC->_L4.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L4.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L4.n_axle = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 4; idx12++) {
    outC->_L4.m_TractionIdentities[idx12].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4.m_TractionIdentities[idx12].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->_L4.m_NationalSystemIdentities[idx13] = kcg_lit_int32(0);
  }
  outC->_L4.nid_operational = kcg_lit_int32(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.number = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 1; idx15++) {
    outC->_L5.aNID_RADIO[idx15].valid = kcg_true;
    for (idx14 = 0; idx14 < 15; idx14++) {
      outC->_L5.aNID_RADIO[idx15].telephoneNumber[idx14] = kcg_lit_int32(0);
    }
  }
  outC->_L6.present = kcg_true;
  outC->_L6.header.present = kcg_true;
  outC->_L6.header.nid_message = kcg_lit_int32(0);
  outC->_L6.header.t_train = kcg_lit_int32(0);
  outC->_L6.header.nid_engine = kcg_lit_int32(0);
  outC->_L6.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L6.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L6.header.xNID_EM = kcg_lit_int32(0);
  outC->_L6.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L6.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L6.packets.p0.valid = kcg_true;
  outC->_L6.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L6.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L6.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L6.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L6.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L6.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L6.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L6.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L6.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L6.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L6.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L6.packets.p1.valid = kcg_true;
  outC->_L6.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L6.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L6.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L6.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L6.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L6.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L6.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L6.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L6.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L6.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L6.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L6.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L6.packets.p3.valid = kcg_true;
  outC->_L6.packets.p3.number = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 1; idx17++) {
    outC->_L6.packets.p3.aNID_RADIO[idx17].valid = kcg_true;
    for (idx16 = 0; idx16 < 15; idx16++) {
      outC->_L6.packets.p3.aNID_RADIO[idx17].telephoneNumber[idx16] =
        kcg_lit_int32(0);
    }
  }
  outC->_L6.packets.p4.valid = kcg_true;
  outC->_L6.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L6.packets.p5.valid = kcg_true;
  outC->_L6.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L6.packets.p9.valid = kcg_true;
  outC->_L6.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L6.packets.p11.valid = kcg_true;
  outC->_L6.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L6.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L6.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L6.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L6.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L6.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L6.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 4; idx18++) {
    outC->_L6.packets.p11.tractionIdentity[idx18].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6.packets.p11.tractionIdentity[idx18].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L6.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->_L6.packets.p11.nid_ntc[idx19] = kcg_lit_int32(0);
  }
  outC->_L7.nid_engine = kcg_lit_int32(0);
  outC->_L7.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 1; idx21++) {
    outC->_L7.m_OnboardPhoneNumbers[idx21].valid = kcg_true;
    for (idx20 = 0; idx20 < 15; idx20++) {
      outC->_L7.m_OnboardPhoneNumbers[idx21].telephoneNumber[idx20] =
        kcg_lit_int32(0);
    }
  }
  outC->_L7.t_train_ref = kcg_lit_int32(0);
  outC->_L7.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L7.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7.l_train = kcg_lit_int32(0);
  outC->_L7.v_maxtrain = kcg_lit_int32(0);
  outC->_L7.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L7.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L7.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L7.n_axle = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 4; idx22++) {
    outC->_L7.m_TractionIdentities[idx22].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L7.m_TractionIdentities[idx22].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 5; idx23++) {
    outC->_L7.m_NationalSystemIdentities[idx23] = kcg_lit_int32(0);
  }
  outC->_L7.nid_operational = kcg_lit_int32(0);
  outC->outTrainData.nid_engine = kcg_lit_int32(0);
  outC->outTrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 1; idx25++) {
    outC->outTrainData.m_OnboardPhoneNumbers[idx25].valid = kcg_true;
    for (idx24 = 0; idx24 < 15; idx24++) {
      outC->outTrainData.m_OnboardPhoneNumbers[idx25].telephoneNumber[idx24] =
        kcg_lit_int32(0);
    }
  }
  outC->outTrainData.t_train_ref = kcg_lit_int32(0);
  outC->outTrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outTrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outTrainData.l_train = kcg_lit_int32(0);
  outC->outTrainData.v_maxtrain = kcg_lit_int32(0);
  outC->outTrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outTrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outTrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outTrainData.n_axle = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 4; idx26++) {
    outC->outTrainData.m_TractionIdentities[idx26].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outTrainData.m_TractionIdentities[idx26].nid_ctraction = kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 5; idx27++) {
    outC->outTrainData.m_NationalSystemIdentities[idx27] = kcg_lit_int32(0);
  }
  outC->outTrainData.nid_operational = kcg_lit_int32(0);
  /* _L4=(RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers#1)/ */
  TrainData__SetOnboardPhoneNumbers_init_RBC_Session_Pkg(
    &outC->Context_TrainData__SetOnboardPhoneNumbers_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers#1)/ */
  RadioTrainTrackPacket003__GetOnboardNumbers_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->Context_RadioTrainTrackPacket003__GetOnboardNumbers_1);
  /* _L7=(RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers#1)/ */
  TrainData__SetNumberOfOnboardPhoneNumbers_init_RBC_Session_Pkg(
    &outC->Context_TrainData__SetNumberOfOnboardPhoneNumbers_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers#1)/ */
  RadioTrainTrackPacket003__CountOnboardNumbers_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->Context_RadioTrainTrackPacket003__CountOnboardNumbers_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__GetP003_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrainData__UpdateWithP003_reset_RBC_Session_Pkg(
  outC_TrainData__UpdateWithP003_RBC_Session_Pkg *outC)
{
  /* _L4=(RBC_Session_Pkg::TrainData__SetOnboardPhoneNumbers#1)/ */
  TrainData__SetOnboardPhoneNumbers_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__SetOnboardPhoneNumbers_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers#1)/ */
  RadioTrainTrackPacket003__GetOnboardNumbers_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->Context_RadioTrainTrackPacket003__GetOnboardNumbers_1);
  /* _L7=(RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers#1)/ */
  TrainData__SetNumberOfOnboardPhoneNumbers_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__SetNumberOfOnboardPhoneNumbers_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers#1)/ */
  RadioTrainTrackPacket003__CountOnboardNumbers_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket003_Pkg(
    &outC->Context_RadioTrainTrackPacket003__CountOnboardNumbers_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP003#1)/ */
  RadioTrainTrackPackets__GetP003_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP003_1);
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainData__UpdateWithP003_RBC_Session_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

