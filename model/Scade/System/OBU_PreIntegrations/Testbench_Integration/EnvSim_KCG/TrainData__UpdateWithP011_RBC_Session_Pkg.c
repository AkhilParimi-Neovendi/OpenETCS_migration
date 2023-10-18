/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainData__UpdateWithP011_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::TrainData__UpdateWithP011/ */
void TrainData__UpdateWithP011_RBC_Session_Pkg(
  /* inTrainData/ */
  TrainData_T *inTrainData,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_TrainData__UpdateWithP011_RBC_Session_Pkg *outC)
{
  kcg_copy_TrainData_T(&outC->_L31, inTrainData);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L32,
    inRadioTrainTrackMessage);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L32,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->_L19,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1.outRadioTrainTrackPackets);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L19,
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPackets__GetP011_1.outRadioTrainTrackPacket);
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_CDTRAIN#1)/ */
  RadioTrainTrackPacket011__Get_NC_CDTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPacket011__Get_NC_CDTRAIN_1);
  outC->_L13 =
    outC->Context_RadioTrainTrackPacket011__Get_NC_CDTRAIN_1.out_NC_CDTRAIN;
  /* _L15=(RBC_Session_Pkg::TrainData__Set_NC_CDTRAIN#1)/ */
  TrainData__Set_NC_CDTRAIN_RBC_Session_Pkg(
    &outC->_L31,
    outC->_L13,
    &outC->Context_TrainData__Set_NC_CDTRAIN_1);
  kcg_copy_TrainData_T(
    &outC->_L15,
    &outC->Context_TrainData__Set_NC_CDTRAIN_1.outTrainData);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_TRAIN#1)/ */
  RadioTrainTrackPacket011__Get_NC_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPacket011__Get_NC_TRAIN_1);
  outC->_L21 =
    outC->Context_RadioTrainTrackPacket011__Get_NC_TRAIN_1.out_NC_TRAIN;
  /* _L16=(RBC_Session_Pkg::TrainData__Set_NC_TRAIN#1)/ */
  TrainData__Set_NC_TRAIN_RBC_Session_Pkg(
    &outC->_L15,
    outC->_L21,
    &outC->Context_TrainData__Set_NC_TRAIN_1);
  kcg_copy_TrainData_T(
    &outC->_L16,
    &outC->Context_TrainData__Set_NC_TRAIN_1.out_TrainData);
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN#1)/ */
  RadioTrainTrackPacket011__Get_L_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPacket011__Get_L_TRAIN_1);
  outC->_L26 = outC->Context_RadioTrainTrackPacket011__Get_L_TRAIN_1.out_L_TRAIN;
  /* _L29=(RBC_Session_Pkg::TrainData__Set_L_TRAIN#1)/ */
  TrainData__Set_L_TRAIN_RBC_Session_Pkg(
    &outC->_L16,
    outC->_L26,
    &outC->Context_TrainData__Set_L_TRAIN_1);
  kcg_copy_TrainData_T(
    &outC->_L29,
    &outC->Context_TrainData__Set_L_TRAIN_1.outTrainData);
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_V_MAXTRAIN#1)/ */
  RadioTrainTrackPacket011__Get_V_MAXTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPacket011__Get_V_MAXTRAIN_1);
  outC->_L12 =
    outC->Context_RadioTrainTrackPacket011__Get_V_MAXTRAIN_1.out_V_MAXTRAIN;
  /* _L18=(RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN#1)/ */
  TrainData__Set_V_MAXTRAIN_RBC_Session_Pkg(
    &outC->_L29,
    outC->_L12,
    &outC->Context_TrainData__Set_V_MAXTRAIN_1);
  kcg_copy_TrainData_T(
    &outC->_L18,
    &outC->Context_TrainData__Set_V_MAXTRAIN_1.outTrainData);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE#1)/ */
  RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_1);
  outC->_L5 =
    outC->Context_RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_1.out_M_LOADINGGAUGE;
  /* _L10=(RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE#1)/ */
  TrainData__Set_M_LOADINGGAUGE_RBC_Session_Pkg(
    &outC->_L18,
    outC->_L5,
    &outC->Context_TrainData__Set_M_LOADINGGAUGE_1);
  kcg_copy_TrainData_T(
    &outC->_L10,
    &outC->Context_TrainData__Set_M_LOADINGGAUGE_1.outTrainData);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT#1)/ */
  RadioTrainTrackPacket011__Get_M_AXLELOADCAT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPacket011__Get_M_AXLELOADCAT_1);
  outC->_L14 =
    outC->Context_RadioTrainTrackPacket011__Get_M_AXLELOADCAT_1.out_M_AXLELOADCAT;
  /* _L22=(RBC_Session_Pkg::TrainData__Set_M_AXLELOADCAT#1)/ */
  TrainData__Set_M_AXLELOADCAT_RBC_Session_Pkg(
    &outC->_L10,
    outC->_L14,
    &outC->Context_TrainData__Set_M_AXLELOADCAT_1);
  kcg_copy_TrainData_T(
    &outC->_L22,
    &outC->Context_TrainData__Set_M_AXLELOADCAT_1.outTrainData);
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AIRTIGHT#1)/ */
  RadioTrainTrackPacket011__Get_M_AIRTIGHT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPacket011__Get_M_AIRTIGHT_1);
  outC->_L1 =
    outC->Context_RadioTrainTrackPacket011__Get_M_AIRTIGHT_1.out_M_AIRTIGHT;
  /* _L7=(RBC_Session_Pkg::TrainData__Set_M_AIRTIGHT#1)/ */
  TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg(
    &outC->_L22,
    outC->_L1,
    &outC->Context_TrainData__Set_M_AIRTIGHT_1);
  kcg_copy_TrainData_T(
    &outC->_L7,
    &outC->Context_TrainData__Set_M_AIRTIGHT_1.outTrainData);
  /* _L24=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_N_AXLE#1)/ */
  RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPacket011__Get_N_AXLE_1);
  outC->_L24 = outC->Context_RadioTrainTrackPacket011__Get_N_AXLE_1.out_N_AXLE;
  /* _L30=(RBC_Session_Pkg::TrainData__Set_N_AXLE#1)/ */
  TrainData__Set_N_AXLE_RBC_Session_Pkg(
    &outC->_L7,
    outC->_L24,
    &outC->Context_TrainData__Set_N_AXLE_1);
  kcg_copy_TrainData_T(
    &outC->_L30,
    &outC->Context_TrainData__Set_N_AXLE_1.outTrainData);
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities#1)/ */
  RadioTrainTrackPacket011__GetTractionIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioT(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPacket011__GetTractionIdentities_1);
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    &outC->_L8,
    &outC->Context_RadioTrainTrackPacket011__GetTractionIdentities_1.outTractionIdentities);
  /* _L4=(RBC_Session_Pkg::TrainData__SetTractionIdentities#1)/ */
  TrainData__SetTractionIdentities_RBC_Session_Pkg(
    &outC->_L30,
    &outC->_L8,
    &outC->Context_TrainData__SetTractionIdentities_1);
  kcg_copy_TrainData_T(
    &outC->_L4,
    &outC->Context_TrainData__SetTractionIdentities_1.outTrainData);
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities#1)/ */
  RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPacket011__GetNationalSystemIdentities_1);
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(
    &outC->_L9,
    &outC->Context_RadioTrainTrackPacket011__GetNationalSystemIdentities_1.outNationalSystemIdentities);
  /* _L20=(RBC_Session_Pkg::TrainData__SetNationalSystemIdentities#1)/ */
  TrainData__SetNationalSystemIdentities_RBC_Session_Pkg(
    &outC->_L4,
    &outC->_L9,
    &outC->Context_TrainData__SetNationalSystemIdentities_1);
  kcg_copy_TrainData_T(
    &outC->_L20,
    &outC->Context_TrainData__SetNationalSystemIdentities_1.outTrainData);
  kcg_copy_TrainData_T(&outC->outTrainData, &outC->_L20);
}

#ifndef KCG_USER_DEFINED_INIT
void TrainData__UpdateWithP011_init_RBC_Session_Pkg(
  outC_TrainData__UpdateWithP011_RBC_Session_Pkg *outC)
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
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;

  outC->_L32.present = kcg_true;
  outC->_L32.header.present = kcg_true;
  outC->_L32.header.nid_message = kcg_lit_int64(0);
  outC->_L32.header.t_train = kcg_lit_int64(0);
  outC->_L32.header.nid_engine = kcg_lit_int64(0);
  outC->_L32.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L32.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L32.header.xNID_EM = kcg_lit_int64(0);
  outC->_L32.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L32.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L32.packets.p0.valid = kcg_true;
  outC->_L32.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L32.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L32.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L32.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L32.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L32.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L32.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L32.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L32.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L32.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L32.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L32.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L32.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L32.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L32.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L32.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L32.packets.p1.valid = kcg_true;
  outC->_L32.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L32.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L32.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L32.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L32.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L32.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L32.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L32.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L32.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L32.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L32.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L32.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L32.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L32.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L32.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L32.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L32.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L32.packets.p3.valid = kcg_true;
  outC->_L32.packets.p3.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L32.packets.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L32.packets.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L32.packets.p4.valid = kcg_true;
  outC->_L32.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L32.packets.p5.valid = kcg_true;
  outC->_L32.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L32.packets.p9.valid = kcg_true;
  outC->_L32.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L32.packets.p11.valid = kcg_true;
  outC->_L32.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L32.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L32.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L32.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L32.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L32.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L32.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L32.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L32.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L32.packets.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L32.packets.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L32.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L32.packets.p11.nid_ntc[idx3] = kcg_lit_int64(0);
  }
  outC->_L31.nid_engine = kcg_lit_int64(0);
  outC->_L31.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L31.m_OnboardPhoneNumbers[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L31.m_OnboardPhoneNumbers[idx5].telephoneNumber[idx4] = kcg_lit_int64(0);
    }
  }
  outC->_L31.t_train_ref = kcg_lit_int64(0);
  outC->_L31.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L31.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L31.l_train = kcg_lit_int64(0);
  outC->_L31.v_maxtrain = kcg_lit_int64(0);
  outC->_L31.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L31.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L31.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L31.n_axle = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L31.m_TractionIdentities[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L31.m_TractionIdentities[idx6].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L31.m_NationalSystemIdentities[idx7] = kcg_lit_int64(0);
  }
  outC->_L31.nid_operational = kcg_lit_int64(0);
  outC->_L1 = M_AIRTIGHT_Not_fitted;
  outC->_L4.nid_engine = kcg_lit_int64(0);
  outC->_L4.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->_L4.m_OnboardPhoneNumbers[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->_L4.m_OnboardPhoneNumbers[idx9].telephoneNumber[idx8] = kcg_lit_int64(0);
    }
  }
  outC->_L4.t_train_ref = kcg_lit_int64(0);
  outC->_L4.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4.l_train = kcg_lit_int64(0);
  outC->_L4.v_maxtrain = kcg_lit_int64(0);
  outC->_L4.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L4.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L4.n_axle = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->_L4.m_TractionIdentities[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4.m_TractionIdentities[idx10].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L4.m_NationalSystemIdentities[idx11] = kcg_lit_int64(0);
  }
  outC->_L4.nid_operational = kcg_lit_int64(0);
  outC->_L5 =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6.valid = kcg_true;
  outC->_L6.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L6.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6.l_train = kcg_lit_int64(0);
  outC->_L6.v_maxtrain = kcg_lit_int64(0);
  outC->_L6.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L6.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L6.n_axle = kcg_lit_int64(0);
  outC->_L6.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 4; idx12++) {
    outC->_L6.tractionIdentity[idx12].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6.tractionIdentity[idx12].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L6.nIter_ntc = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->_L6.nid_ntc[idx13] = kcg_lit_int64(0);
  }
  outC->_L7.nid_engine = kcg_lit_int64(0);
  outC->_L7.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 1; idx15++) {
    outC->_L7.m_OnboardPhoneNumbers[idx15].valid = kcg_true;
    for (idx14 = 0; idx14 < 15; idx14++) {
      outC->_L7.m_OnboardPhoneNumbers[idx15].telephoneNumber[idx14] =
        kcg_lit_int64(0);
    }
  }
  outC->_L7.t_train_ref = kcg_lit_int64(0);
  outC->_L7.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L7.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7.l_train = kcg_lit_int64(0);
  outC->_L7.v_maxtrain = kcg_lit_int64(0);
  outC->_L7.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L7.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L7.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L7.n_axle = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 4; idx16++) {
    outC->_L7.m_TractionIdentities[idx16].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L7.m_TractionIdentities[idx16].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 5; idx17++) {
    outC->_L7.m_NationalSystemIdentities[idx17] = kcg_lit_int64(0);
  }
  outC->_L7.nid_operational = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 4; idx18++) {
    outC->_L8[idx18].m_voltage = M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L8[idx18].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->_L9[idx19] = kcg_lit_int64(0);
  }
  outC->_L10.nid_engine = kcg_lit_int64(0);
  outC->_L10.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 1; idx21++) {
    outC->_L10.m_OnboardPhoneNumbers[idx21].valid = kcg_true;
    for (idx20 = 0; idx20 < 15; idx20++) {
      outC->_L10.m_OnboardPhoneNumbers[idx21].telephoneNumber[idx20] =
        kcg_lit_int64(0);
    }
  }
  outC->_L10.t_train_ref = kcg_lit_int64(0);
  outC->_L10.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L10.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L10.l_train = kcg_lit_int64(0);
  outC->_L10.v_maxtrain = kcg_lit_int64(0);
  outC->_L10.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L10.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L10.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L10.n_axle = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 4; idx22++) {
    outC->_L10.m_TractionIdentities[idx22].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L10.m_TractionIdentities[idx22].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx23 = 0; idx23 < 5; idx23++) {
    outC->_L10.m_NationalSystemIdentities[idx23] = kcg_lit_int64(0);
  }
  outC->_L10.nid_operational = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L13 = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L14 = M_AXLELOADCAT_A;
  outC->_L15.nid_engine = kcg_lit_int64(0);
  outC->_L15.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 1; idx25++) {
    outC->_L15.m_OnboardPhoneNumbers[idx25].valid = kcg_true;
    for (idx24 = 0; idx24 < 15; idx24++) {
      outC->_L15.m_OnboardPhoneNumbers[idx25].telephoneNumber[idx24] =
        kcg_lit_int64(0);
    }
  }
  outC->_L15.t_train_ref = kcg_lit_int64(0);
  outC->_L15.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L15.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L15.l_train = kcg_lit_int64(0);
  outC->_L15.v_maxtrain = kcg_lit_int64(0);
  outC->_L15.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L15.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L15.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L15.n_axle = kcg_lit_int64(0);
  for (idx26 = 0; idx26 < 4; idx26++) {
    outC->_L15.m_TractionIdentities[idx26].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L15.m_TractionIdentities[idx26].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx27 = 0; idx27 < 5; idx27++) {
    outC->_L15.m_NationalSystemIdentities[idx27] = kcg_lit_int64(0);
  }
  outC->_L15.nid_operational = kcg_lit_int64(0);
  outC->_L16.nid_engine = kcg_lit_int64(0);
  outC->_L16.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 1; idx29++) {
    outC->_L16.m_OnboardPhoneNumbers[idx29].valid = kcg_true;
    for (idx28 = 0; idx28 < 15; idx28++) {
      outC->_L16.m_OnboardPhoneNumbers[idx29].telephoneNumber[idx28] =
        kcg_lit_int64(0);
    }
  }
  outC->_L16.t_train_ref = kcg_lit_int64(0);
  outC->_L16.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L16.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L16.l_train = kcg_lit_int64(0);
  outC->_L16.v_maxtrain = kcg_lit_int64(0);
  outC->_L16.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L16.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L16.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L16.n_axle = kcg_lit_int64(0);
  for (idx30 = 0; idx30 < 4; idx30++) {
    outC->_L16.m_TractionIdentities[idx30].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L16.m_TractionIdentities[idx30].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx31 = 0; idx31 < 5; idx31++) {
    outC->_L16.m_NationalSystemIdentities[idx31] = kcg_lit_int64(0);
  }
  outC->_L16.nid_operational = kcg_lit_int64(0);
  outC->_L18.nid_engine = kcg_lit_int64(0);
  outC->_L18.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx33 = 0; idx33 < 1; idx33++) {
    outC->_L18.m_OnboardPhoneNumbers[idx33].valid = kcg_true;
    for (idx32 = 0; idx32 < 15; idx32++) {
      outC->_L18.m_OnboardPhoneNumbers[idx33].telephoneNumber[idx32] =
        kcg_lit_int64(0);
    }
  }
  outC->_L18.t_train_ref = kcg_lit_int64(0);
  outC->_L18.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L18.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L18.l_train = kcg_lit_int64(0);
  outC->_L18.v_maxtrain = kcg_lit_int64(0);
  outC->_L18.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L18.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L18.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L18.n_axle = kcg_lit_int64(0);
  for (idx34 = 0; idx34 < 4; idx34++) {
    outC->_L18.m_TractionIdentities[idx34].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L18.m_TractionIdentities[idx34].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx35 = 0; idx35 < 5; idx35++) {
    outC->_L18.m_NationalSystemIdentities[idx35] = kcg_lit_int64(0);
  }
  outC->_L18.nid_operational = kcg_lit_int64(0);
  outC->_L19.p0.valid = kcg_true;
  outC->_L19.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L19.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L19.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L19.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L19.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L19.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L19.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L19.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L19.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L19.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L19.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L19.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L19.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L19.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L19.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L19.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L19.p1.valid = kcg_true;
  outC->_L19.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L19.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L19.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L19.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L19.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L19.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L19.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L19.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L19.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L19.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L19.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L19.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L19.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L19.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L19.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L19.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L19.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L19.p3.valid = kcg_true;
  outC->_L19.p3.number = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 1; idx37++) {
    outC->_L19.p3.aNID_RADIO[idx37].valid = kcg_true;
    for (idx36 = 0; idx36 < 15; idx36++) {
      outC->_L19.p3.aNID_RADIO[idx37].telephoneNumber[idx36] = kcg_lit_int64(0);
    }
  }
  outC->_L19.p4.valid = kcg_true;
  outC->_L19.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L19.p5.valid = kcg_true;
  outC->_L19.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L19.p9.valid = kcg_true;
  outC->_L19.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L19.p11.valid = kcg_true;
  outC->_L19.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L19.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L19.p11.l_train = kcg_lit_int64(0);
  outC->_L19.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L19.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L19.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L19.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L19.p11.n_axle = kcg_lit_int64(0);
  outC->_L19.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx38 = 0; idx38 < 4; idx38++) {
    outC->_L19.p11.tractionIdentity[idx38].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L19.p11.tractionIdentity[idx38].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L19.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx39 = 0; idx39 < 5; idx39++) {
    outC->_L19.p11.nid_ntc[idx39] = kcg_lit_int64(0);
  }
  outC->_L20.nid_engine = kcg_lit_int64(0);
  outC->_L20.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx41 = 0; idx41 < 1; idx41++) {
    outC->_L20.m_OnboardPhoneNumbers[idx41].valid = kcg_true;
    for (idx40 = 0; idx40 < 15; idx40++) {
      outC->_L20.m_OnboardPhoneNumbers[idx41].telephoneNumber[idx40] =
        kcg_lit_int64(0);
    }
  }
  outC->_L20.t_train_ref = kcg_lit_int64(0);
  outC->_L20.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L20.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L20.l_train = kcg_lit_int64(0);
  outC->_L20.v_maxtrain = kcg_lit_int64(0);
  outC->_L20.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L20.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L20.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L20.n_axle = kcg_lit_int64(0);
  for (idx42 = 0; idx42 < 4; idx42++) {
    outC->_L20.m_TractionIdentities[idx42].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L20.m_TractionIdentities[idx42].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx43 = 0; idx43 < 5; idx43++) {
    outC->_L20.m_NationalSystemIdentities[idx43] = kcg_lit_int64(0);
  }
  outC->_L20.nid_operational = kcg_lit_int64(0);
  outC->_L21 =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L22.nid_engine = kcg_lit_int64(0);
  outC->_L22.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx45 = 0; idx45 < 1; idx45++) {
    outC->_L22.m_OnboardPhoneNumbers[idx45].valid = kcg_true;
    for (idx44 = 0; idx44 < 15; idx44++) {
      outC->_L22.m_OnboardPhoneNumbers[idx45].telephoneNumber[idx44] =
        kcg_lit_int64(0);
    }
  }
  outC->_L22.t_train_ref = kcg_lit_int64(0);
  outC->_L22.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L22.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L22.l_train = kcg_lit_int64(0);
  outC->_L22.v_maxtrain = kcg_lit_int64(0);
  outC->_L22.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L22.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L22.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L22.n_axle = kcg_lit_int64(0);
  for (idx46 = 0; idx46 < 4; idx46++) {
    outC->_L22.m_TractionIdentities[idx46].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L22.m_TractionIdentities[idx46].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx47 = 0; idx47 < 5; idx47++) {
    outC->_L22.m_NationalSystemIdentities[idx47] = kcg_lit_int64(0);
  }
  outC->_L22.nid_operational = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L29.nid_engine = kcg_lit_int64(0);
  outC->_L29.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx49 = 0; idx49 < 1; idx49++) {
    outC->_L29.m_OnboardPhoneNumbers[idx49].valid = kcg_true;
    for (idx48 = 0; idx48 < 15; idx48++) {
      outC->_L29.m_OnboardPhoneNumbers[idx49].telephoneNumber[idx48] =
        kcg_lit_int64(0);
    }
  }
  outC->_L29.t_train_ref = kcg_lit_int64(0);
  outC->_L29.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L29.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L29.l_train = kcg_lit_int64(0);
  outC->_L29.v_maxtrain = kcg_lit_int64(0);
  outC->_L29.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L29.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L29.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L29.n_axle = kcg_lit_int64(0);
  for (idx50 = 0; idx50 < 4; idx50++) {
    outC->_L29.m_TractionIdentities[idx50].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L29.m_TractionIdentities[idx50].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx51 = 0; idx51 < 5; idx51++) {
    outC->_L29.m_NationalSystemIdentities[idx51] = kcg_lit_int64(0);
  }
  outC->_L29.nid_operational = kcg_lit_int64(0);
  outC->_L30.nid_engine = kcg_lit_int64(0);
  outC->_L30.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx53 = 0; idx53 < 1; idx53++) {
    outC->_L30.m_OnboardPhoneNumbers[idx53].valid = kcg_true;
    for (idx52 = 0; idx52 < 15; idx52++) {
      outC->_L30.m_OnboardPhoneNumbers[idx53].telephoneNumber[idx52] =
        kcg_lit_int64(0);
    }
  }
  outC->_L30.t_train_ref = kcg_lit_int64(0);
  outC->_L30.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L30.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L30.l_train = kcg_lit_int64(0);
  outC->_L30.v_maxtrain = kcg_lit_int64(0);
  outC->_L30.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L30.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L30.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L30.n_axle = kcg_lit_int64(0);
  for (idx54 = 0; idx54 < 4; idx54++) {
    outC->_L30.m_TractionIdentities[idx54].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L30.m_TractionIdentities[idx54].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx55 = 0; idx55 < 5; idx55++) {
    outC->_L30.m_NationalSystemIdentities[idx55] = kcg_lit_int64(0);
  }
  outC->_L30.nid_operational = kcg_lit_int64(0);
  outC->outTrainData.nid_engine = kcg_lit_int64(0);
  outC->outTrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx57 = 0; idx57 < 1; idx57++) {
    outC->outTrainData.m_OnboardPhoneNumbers[idx57].valid = kcg_true;
    for (idx56 = 0; idx56 < 15; idx56++) {
      outC->outTrainData.m_OnboardPhoneNumbers[idx57].telephoneNumber[idx56] =
        kcg_lit_int64(0);
    }
  }
  outC->outTrainData.t_train_ref = kcg_lit_int64(0);
  outC->outTrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outTrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outTrainData.l_train = kcg_lit_int64(0);
  outC->outTrainData.v_maxtrain = kcg_lit_int64(0);
  outC->outTrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outTrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outTrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outTrainData.n_axle = kcg_lit_int64(0);
  for (idx58 = 0; idx58 < 4; idx58++) {
    outC->outTrainData.m_TractionIdentities[idx58].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outTrainData.m_TractionIdentities[idx58].nid_ctraction = kcg_lit_int64(0);
  }
  for (idx59 = 0; idx59 < 5; idx59++) {
    outC->outTrainData.m_NationalSystemIdentities[idx59] = kcg_lit_int64(0);
  }
  outC->outTrainData.nid_operational = kcg_lit_int64(0);
  /* _L20=(RBC_Session_Pkg::TrainData__SetNationalSystemIdentities#1)/ */
  TrainData__SetNationalSystemIdentities_init_RBC_Session_Pkg(
    &outC->Context_TrainData__SetNationalSystemIdentities_1);
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities#1)/ */
  RadioTrainTrackPacket011__GetNationalSystemIdentities_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPacket011__GetNationalSystemIdentities_1);
  /* _L4=(RBC_Session_Pkg::TrainData__SetTractionIdentities#1)/ */
  TrainData__SetTractionIdentities_init_RBC_Session_Pkg(
    &outC->Context_TrainData__SetTractionIdentities_1);
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities#1)/ */
  RadioTrainTrackPacket011__GetTractionIdentities_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_R(
    &outC->Context_RadioTrainTrackPacket011__GetTractionIdentities_1);
  /* _L30=(RBC_Session_Pkg::TrainData__Set_N_AXLE#1)/ */
  TrainData__Set_N_AXLE_init_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_N_AXLE_1);
  /* _L24=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_N_AXLE#1)/ */
  RadioTrainTrackPacket011__Get_N_AXLE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr(
    &outC->Context_RadioTrainTrackPacket011__Get_N_AXLE_1);
  /* _L7=(RBC_Session_Pkg::TrainData__Set_M_AIRTIGHT#1)/ */
  TrainData__Set_M_AIRTIGHT_init_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_M_AIRTIGHT_1);
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AIRTIGHT#1)/ */
  RadioTrainTrackPacket011__Get_M_AIRTIGHT_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra(
    &outC->Context_RadioTrainTrackPacket011__Get_M_AIRTIGHT_1);
  /* _L22=(RBC_Session_Pkg::TrainData__Set_M_AXLELOADCAT#1)/ */
  TrainData__Set_M_AXLELOADCAT_init_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_M_AXLELOADCAT_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT#1)/ */
  RadioTrainTrackPacket011__Get_M_AXLELOADCAT_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_Radio(
    &outC->Context_RadioTrainTrackPacket011__Get_M_AXLELOADCAT_1);
  /* _L10=(RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE#1)/ */
  TrainData__Set_M_LOADINGGAUGE_init_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_M_LOADINGGAUGE_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE#1)/ */
  RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_Radi(
    &outC->Context_RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_1);
  /* _L18=(RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN#1)/ */
  TrainData__Set_V_MAXTRAIN_init_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_V_MAXTRAIN_1);
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_V_MAXTRAIN#1)/ */
  RadioTrainTrackPacket011__Get_V_MAXTRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra(
    &outC->Context_RadioTrainTrackPacket011__Get_V_MAXTRAIN_1);
  /* _L29=(RBC_Session_Pkg::TrainData__Set_L_TRAIN#1)/ */
  TrainData__Set_L_TRAIN_init_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_L_TRAIN_1);
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN#1)/ */
  RadioTrainTrackPacket011__Get_L_TRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
    &outC->Context_RadioTrainTrackPacket011__Get_L_TRAIN_1);
  /* _L16=(RBC_Session_Pkg::TrainData__Set_NC_TRAIN#1)/ */
  TrainData__Set_NC_TRAIN_init_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_NC_TRAIN_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_TRAIN#1)/ */
  RadioTrainTrackPacket011__Get_NC_TRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
    &outC->Context_RadioTrainTrackPacket011__Get_NC_TRAIN_1);
  /* _L15=(RBC_Session_Pkg::TrainData__Set_NC_CDTRAIN#1)/ */
  TrainData__Set_NC_CDTRAIN_init_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_NC_CDTRAIN_1);
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_CDTRAIN#1)/ */
  RadioTrainTrackPacket011__Get_NC_CDTRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra(
    &outC->Context_RadioTrainTrackPacket011__Get_NC_CDTRAIN_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrainData__UpdateWithP011_reset_RBC_Session_Pkg(
  outC_TrainData__UpdateWithP011_RBC_Session_Pkg *outC)
{
  /* _L20=(RBC_Session_Pkg::TrainData__SetNationalSystemIdentities#1)/ */
  TrainData__SetNationalSystemIdentities_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__SetNationalSystemIdentities_1);
  /* _L9=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities#1)/ */
  RadioTrainTrackPacket011__GetNationalSystemIdentities_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pk(
    &outC->Context_RadioTrainTrackPacket011__GetNationalSystemIdentities_1);
  /* _L4=(RBC_Session_Pkg::TrainData__SetTractionIdentities#1)/ */
  TrainData__SetTractionIdentities_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__SetTractionIdentities_1);
  /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities#1)/ */
  RadioTrainTrackPacket011__GetTractionIdentities_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_(
    &outC->Context_RadioTrainTrackPacket011__GetTractionIdentities_1);
  /* _L30=(RBC_Session_Pkg::TrainData__Set_N_AXLE#1)/ */
  TrainData__Set_N_AXLE_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_N_AXLE_1);
  /* _L24=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_N_AXLE#1)/ */
  RadioTrainTrackPacket011__Get_N_AXLE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
    &outC->Context_RadioTrainTrackPacket011__Get_N_AXLE_1);
  /* _L7=(RBC_Session_Pkg::TrainData__Set_M_AIRTIGHT#1)/ */
  TrainData__Set_M_AIRTIGHT_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_M_AIRTIGHT_1);
  /* _L1=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AIRTIGHT#1)/ */
  RadioTrainTrackPacket011__Get_M_AIRTIGHT_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTr(
    &outC->Context_RadioTrainTrackPacket011__Get_M_AIRTIGHT_1);
  /* _L22=(RBC_Session_Pkg::TrainData__Set_M_AXLELOADCAT#1)/ */
  TrainData__Set_M_AXLELOADCAT_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_M_AXLELOADCAT_1);
  /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT#1)/ */
  RadioTrainTrackPacket011__Get_M_AXLELOADCAT_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_Radi(
    &outC->Context_RadioTrainTrackPacket011__Get_M_AXLELOADCAT_1);
  /* _L10=(RBC_Session_Pkg::TrainData__Set_M_LOADINGGAUGE#1)/ */
  TrainData__Set_M_LOADINGGAUGE_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_M_LOADINGGAUGE_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE#1)/ */
  RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_Rad(
    &outC->Context_RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_1);
  /* _L18=(RBC_Session_Pkg::TrainData__Set_V_MAXTRAIN#1)/ */
  TrainData__Set_V_MAXTRAIN_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_V_MAXTRAIN_1);
  /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_V_MAXTRAIN#1)/ */
  RadioTrainTrackPacket011__Get_V_MAXTRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTr(
    &outC->Context_RadioTrainTrackPacket011__Get_V_MAXTRAIN_1);
  /* _L29=(RBC_Session_Pkg::TrainData__Set_L_TRAIN#1)/ */
  TrainData__Set_L_TRAIN_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_L_TRAIN_1);
  /* _L26=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN#1)/ */
  RadioTrainTrackPacket011__Get_L_TRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
    &outC->Context_RadioTrainTrackPacket011__Get_L_TRAIN_1);
  /* _L16=(RBC_Session_Pkg::TrainData__Set_NC_TRAIN#1)/ */
  TrainData__Set_NC_TRAIN_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_NC_TRAIN_1);
  /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_TRAIN#1)/ */
  RadioTrainTrackPacket011__Get_NC_TRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
    &outC->Context_RadioTrainTrackPacket011__Get_NC_TRAIN_1);
  /* _L15=(RBC_Session_Pkg::TrainData__Set_NC_CDTRAIN#1)/ */
  TrainData__Set_NC_CDTRAIN_reset_RBC_Session_Pkg(
    &outC->Context_TrainData__Set_NC_CDTRAIN_1);
  /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_NC_CDTRAIN#1)/ */
  RadioTrainTrackPacket011__Get_NC_CDTRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTr(
    &outC->Context_RadioTrainTrackPacket011__Get_NC_CDTRAIN_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP011#1)/ */
  RadioTrainTrackPackets__GetP011_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP011_1);
  /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainData__UpdateWithP011_RBC_Session_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

