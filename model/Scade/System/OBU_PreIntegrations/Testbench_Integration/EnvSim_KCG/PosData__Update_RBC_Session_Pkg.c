/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PosData__Update_RBC_Session_Pkg.h"

/* RBC_Session_Pkg::PosData__Update/ */
void PosData__Update_RBC_Session_Pkg(
  /* inPosData/ */
  PosData_T *inPosData,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_PosData__Update_RBC_Session_Pkg *outC)
{
  /* outPosData/ */
  static PosData_T outPosData_partial;
  /* outPosData/ */
  static PosData_T _1_outPosData_partial;
  /* outPosData/ */
  static PosData_T _2_outPosData_partial;
  /* outPosData/ */
  static PosData_T _3_outPosData_partial;

  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L1,
    inRadioTrainTrackMessage);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackMessage__GetPackets_1.outRadioTrainTrackPackets);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPackets__GetP001_1.outRadioTrainTrackPacket);
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
    &outC->_L6,
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  outC->_L7 = outC->Context_RadioTrainTrackPacket001__IsValid_1.outIsValid;
  outC->validPacket1 = outC->_L7;
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L3,
    &outC->Context_RadioTrainTrackPackets__GetP000_1.outRadioTrainTrackPacket);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
    &outC->_L3,
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  outC->_L5 = outC->Context_RadioTrainTrackPacket000__IsValid_1.outIsValid;
  outC->validPacket0 = outC->_L5;
  outC->IfBlock1_clock = outC->validPacket0;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_PosData_T(&outC->_L3_then_IfBlock1, inPosData);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      inRadioTrainTrackMessage);
    /* IfBlock1:then:_L1=(RBC_Session_Pkg::PosData__UpdateWithP000#1)/ */
    PosData__UpdateWithP000_RBC_Session_Pkg(
      &outC->_L3_then_IfBlock1,
      &outC->_L2_then_IfBlock1,
      &outC->Context_PosData__UpdateWithP000_1);
    kcg_copy_PosData_T(
      &outC->_L1_then_IfBlock1,
      &outC->Context_PosData__UpdateWithP000_1.outPosData);
    kcg_copy_PosData_T(&outPosData_partial, &outC->_L1_then_IfBlock1);
    kcg_copy_PosData_T(&outC->outPosData, &outPosData_partial);
  }
  else {
    outC->else_clock_IfBlock1 = outC->validPacket1;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_PosData_T(&outC->_L3_then_else_IfBlock1, inPosData);
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->_L2_then_else_IfBlock1,
        inRadioTrainTrackMessage);
      /* IfBlock1:else:then:_L4=(RBC_Session_Pkg::PosData__UpdateWithP001#1)/ */
      PosData__UpdateWithP001_RBC_Session_Pkg(
        &outC->_L3_then_else_IfBlock1,
        &outC->_L2_then_else_IfBlock1,
        &outC->Context_PosData__UpdateWithP001_1);
      kcg_copy_PosData_T(
        &outC->_L4_then_else_IfBlock1,
        &outC->Context_PosData__UpdateWithP001_1.outPosData);
      kcg_copy_PosData_T(&_3_outPosData_partial, &outC->_L4_then_else_IfBlock1);
      kcg_copy_PosData_T(&_1_outPosData_partial, &_3_outPosData_partial);
    }
    else {
      kcg_copy_PosData_T(&outC->_L1_else_else_IfBlock1, inPosData);
      kcg_copy_PosData_T(&_2_outPosData_partial, &outC->_L1_else_else_IfBlock1);
      kcg_copy_PosData_T(&_1_outPosData_partial, &_2_outPosData_partial);
    }
    kcg_copy_PosData_T(&outC->outPosData, &_1_outPosData_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void PosData__Update_init_RBC_Session_Pkg(
  outC_PosData__Update_RBC_Session_Pkg *outC)
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

  outC->_L7 = kcg_true;
  outC->_L6.valid = kcg_true;
  outC->_L6.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L6.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L6.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L6.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L6.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L6.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L6.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L6.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L6.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L6.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.packet1.mode = M_MODE_Full_Supervision;
  outC->_L6.packet1.level = M_LEVEL_Level_0;
  outC->_L6.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L3.valid = kcg_true;
  outC->_L3.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L3.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L3.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L3.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L3.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L3.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L3.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L3.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L3.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L3.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L3.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L3.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3.packet0.mode = M_MODE_Full_Supervision;
  outC->_L3.packet0.level = M_LEVEL_Level_0;
  outC->_L3.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2.p0.valid = kcg_true;
  outC->_L2.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L2.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L2.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L2.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L2.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2.p0.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L2.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L2.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2.p1.valid = kcg_true;
  outC->_L2.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L2.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L2.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L2.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L2.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L2.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2.p1.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L2.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L2.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L2.p3.valid = kcg_true;
  outC->_L2.p3.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L2.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L2.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L2.p4.valid = kcg_true;
  outC->_L2.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2.p5.valid = kcg_true;
  outC->_L2.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L2.p9.valid = kcg_true;
  outC->_L2.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L2.p11.valid = kcg_true;
  outC->_L2.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2.p11.l_train = kcg_lit_int64(0);
  outC->_L2.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L2.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2.p11.n_axle = kcg_lit_int64(0);
  outC->_L2.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L2.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L2.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L2.p11.nid_ntc[idx3] = kcg_lit_int64(0);
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
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
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
  outC->validPacket1 = kcg_true;
  outC->validPacket0 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L4_then_else_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4_then_else_IfBlock1.d_lrbg = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L4_then_else_IfBlock1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L4_then_else_IfBlock1.l_doubtover = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.l_doubtunder = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4_then_else_IfBlock1.l_trainint = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.v_train = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L4_then_else_IfBlock1.m_mode = M_MODE_Full_Supervision;
  outC->_L4_then_else_IfBlock1.m_level = M_LEVEL_Level_0;
  outC->_L4_then_else_IfBlock1.nid_ntc = kcg_lit_int64(0);
  outC->_L4_then_else_IfBlock1.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_then_else_IfBlock1.d_lrbg = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3_then_else_IfBlock1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3_then_else_IfBlock1.l_doubtover = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.l_doubtunder = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_then_else_IfBlock1.l_trainint = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.v_train = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3_then_else_IfBlock1.m_mode = M_MODE_Full_Supervision;
  outC->_L3_then_else_IfBlock1.m_level = M_LEVEL_Level_0;
  outC->_L3_then_else_IfBlock1.nid_ntc = kcg_lit_int64(0);
  outC->_L3_then_else_IfBlock1.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.present = kcg_true;
  outC->_L2_then_else_IfBlock1.header.present = kcg_true;
  outC->_L2_then_else_IfBlock1.header.nid_message = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.header.t_train = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.header.nid_engine = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2_then_else_IfBlock1.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.header.xNID_EM = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2_then_else_IfBlock1.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p0.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2_then_else_IfBlock1.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p1.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2_then_else_IfBlock1.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p3.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.packets.p3.number = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->_L2_then_else_IfBlock1.packets.p3.aNID_RADIO[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->_L2_then_else_IfBlock1.packets.p3.aNID_RADIO[idx9].telephoneNumber[idx8] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_then_else_IfBlock1.packets.p4.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2_then_else_IfBlock1.packets.p5.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p9.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.packets.p9.transitionInformation = kcg_lit_int64(
      0);
  outC->_L2_then_else_IfBlock1.packets.p11.valid = kcg_true;
  outC->_L2_then_else_IfBlock1.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_else_IfBlock1.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_else_IfBlock1.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_else_IfBlock1.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2_then_else_IfBlock1.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2_then_else_IfBlock1.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L2_then_else_IfBlock1.packets.p11.nIter_tractionIdentity =
    kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->_L2_then_else_IfBlock1.packets.p11.tractionIdentity[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_else_IfBlock1.packets.p11.tractionIdentity[idx10].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L2_then_else_IfBlock1.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L2_then_else_IfBlock1.packets.p11.nid_ntc[idx11] = kcg_lit_int64(0);
  }
  outC->_L1_else_else_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1_else_else_IfBlock1.d_lrbg = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1_else_else_IfBlock1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L1_else_else_IfBlock1.l_doubtover = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.l_doubtunder = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_else_else_IfBlock1.l_trainint = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.v_train = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1_else_else_IfBlock1.m_mode = M_MODE_Full_Supervision;
  outC->_L1_else_else_IfBlock1.m_level = M_LEVEL_Level_0;
  outC->_L1_else_else_IfBlock1.nid_ntc = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.nid_prvlrbg = kcg_lit_int64(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1_then_IfBlock1.d_lrbg = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1_then_IfBlock1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L1_then_IfBlock1.l_doubtover = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.l_doubtunder = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_then_IfBlock1.l_trainint = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.v_train = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1_then_IfBlock1.m_mode = M_MODE_Full_Supervision;
  outC->_L1_then_IfBlock1.m_level = M_LEVEL_Level_0;
  outC->_L1_then_IfBlock1.nid_ntc = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.present = kcg_true;
  outC->_L2_then_IfBlock1.header.present = kcg_true;
  outC->_L2_then_IfBlock1.header.nid_message = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.header.t_train = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.header.nid_engine = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2_then_IfBlock1.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.header.xNID_EM = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2_then_IfBlock1.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p0.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_IfBlock1.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_IfBlock1.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_IfBlock1.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p1.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_IfBlock1.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_IfBlock1.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_IfBlock1.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p3.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p3.number = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 1; idx13++) {
    outC->_L2_then_IfBlock1.packets.p3.aNID_RADIO[idx13].valid = kcg_true;
    for (idx12 = 0; idx12 < 15; idx12++) {
      outC->_L2_then_IfBlock1.packets.p3.aNID_RADIO[idx13].telephoneNumber[idx12] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2_then_IfBlock1.packets.p4.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2_then_IfBlock1.packets.p5.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p9.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p11.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_IfBlock1.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_IfBlock1.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_IfBlock1.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2_then_IfBlock1.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2_then_IfBlock1.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L2_then_IfBlock1.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 4; idx14++) {
    outC->_L2_then_IfBlock1.packets.p11.tractionIdentity[idx14].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_IfBlock1.packets.p11.tractionIdentity[idx14].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L2_then_IfBlock1.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->_L2_then_IfBlock1.packets.p11.nid_ntc[idx15] = kcg_lit_int64(0);
  }
  outC->_L3_then_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_then_IfBlock1.d_lrbg = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3_then_IfBlock1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3_then_IfBlock1.l_doubtover = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.l_doubtunder = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_then_IfBlock1.l_trainint = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.v_train = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3_then_IfBlock1.m_mode = M_MODE_Full_Supervision;
  outC->_L3_then_IfBlock1.m_level = M_LEVEL_Level_0;
  outC->_L3_then_IfBlock1.nid_ntc = kcg_lit_int64(0);
  outC->_L3_then_IfBlock1.nid_prvlrbg = kcg_lit_int64(0);
  outC->outPosData.nid_lrbg = kcg_lit_int64(0);
  outC->outPosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outPosData.d_lrbg = kcg_lit_int64(0);
  outC->outPosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outPosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outPosData.l_doubtover = kcg_lit_int64(0);
  outC->outPosData.l_doubtunder = kcg_lit_int64(0);
  outC->outPosData.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->outPosData.l_trainint = kcg_lit_int64(0);
  outC->outPosData.v_train = kcg_lit_int64(0);
  outC->outPosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outPosData.m_mode = M_MODE_Full_Supervision;
  outC->outPosData.m_level = M_LEVEL_Level_0;
  outC->outPosData.nid_ntc = kcg_lit_int64(0);
  outC->outPosData.nid_prvlrbg = kcg_lit_int64(0);
  /* IfBlock1:then:_L1=(RBC_Session_Pkg::PosData__UpdateWithP000#1)/ */
  PosData__UpdateWithP000_init_RBC_Session_Pkg(
    &outC->Context_PosData__UpdateWithP000_1);
  /* IfBlock1:else:then:_L4=(RBC_Session_Pkg::PosData__UpdateWithP001#1)/ */
  PosData__UpdateWithP001_init_RBC_Session_Pkg(
    &outC->Context_PosData__UpdateWithP001_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void PosData__Update_reset_RBC_Session_Pkg(
  outC_PosData__Update_RBC_Session_Pkg *outC)
{
  /* IfBlock1:then:_L1=(RBC_Session_Pkg::PosData__UpdateWithP000#1)/ */
  PosData__UpdateWithP000_reset_RBC_Session_Pkg(
    &outC->Context_PosData__UpdateWithP000_1);
  /* IfBlock1:else:then:_L4=(RBC_Session_Pkg::PosData__UpdateWithP001#1)/ */
  PosData__UpdateWithP001_reset_RBC_Session_Pkg(
    &outC->Context_PosData__UpdateWithP001_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__IsValid#1)/ */
  RadioTrainTrackPacket000__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
    &outC->Context_RadioTrainTrackPacket000__IsValid_1);
  /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */
  RadioTrainTrackPackets__GetP000_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP000_1);
  /* _L7=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__IsValid#1)/ */
  RadioTrainTrackPacket001__IsValid_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
    &outC->Context_RadioTrainTrackPacket001__IsValid_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */
  RadioTrainTrackPackets__GetP001_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackPackets__GetP001_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */
  RadioTrainTrackMessage__GetPackets_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetPackets_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosData__Update_RBC_Session_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

