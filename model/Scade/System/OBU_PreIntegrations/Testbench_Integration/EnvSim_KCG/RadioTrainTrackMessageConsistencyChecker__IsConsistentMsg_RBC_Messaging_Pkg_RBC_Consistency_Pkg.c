/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg.h"

/* RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg/ */
void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* outIsConsistent/ */
  static kcg_bool outIsConsistent_partial;
  /* lastReceivedRadioTrainTrackMessageTimestamp/ */
  static T_TRAIN lastReceivedRadioTrainTrackMessageTimestamp_partial;
  /* outIsConsistent/ */
  static kcg_bool _1_outIsConsistent_partial;
  /* lastReceivedRadioTrainTrackMessageTimestamp/ */
  static T_TRAIN _2_lastReceivedRadioTrainTrackMessageTimestamp_partial;
  /* lastReceivedRadioTrainTrackMessageTimestamp/ */
  static T_TRAIN last_lastReceivedRadioTrainTrackMessageTimestamp;

  last_lastReceivedRadioTrainTrackMessageTimestamp =
    outC->lastReceivedRadioTrainTrackMessageTimestamp;
  outC->_L43 = last_lastReceivedRadioTrainTrackMessageTimestamp;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L1,
    inRadioTrainTrackMessage);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackMessage__GetHeader_1.outRadioTrainTrackHeader);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN#1)/ */
  RadioTrainTrackHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_1);
  outC->_L6 = outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_1.out_T_TRAIN;
  outC->currentRecivedRadioTrainTrackMessageTimestamp = outC->_L6;
  outC->_L42 = outC->currentRecivedRadioTrainTrackMessageTimestamp;
  outC->_L50 = outC->_L42 > outC->_L43;
  outC->_L49 = outC->currentRecivedRadioTrainTrackMessageTimestamp;
  outC->_L48 = outC->currentRecivedRadioTrainTrackMessageTimestamp;
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__IsPresent#1)/ */
  RadioTrainTrackHeader__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L2,
    &outC->Context_RadioTrainTrackHeader__IsPresent_1);
  outC->_L4 = outC->Context_RadioTrainTrackHeader__IsPresent_1.outIsPresent;
  outC->radioTrainTrackHeaderIsPresent = outC->_L4;
  outC->_L39 = outC->radioTrainTrackHeaderIsPresent;
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent#1)/ */
  RadioTrainTrackMessage__IsPresent_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->_L1,
    &outC->Context_RadioTrainTrackMessage__IsPresent_1);
  outC->_L5 = outC->Context_RadioTrainTrackMessage__IsPresent_1.outIsPresent;
  outC->radioTrainTrackMessageIsPresent = outC->_L5;
  outC->_L44 = outC->radioTrainTrackMessageIsPresent;
  outC->_L41 = T_TRAIN_MAX;
  outC->_L46 = outC->_L48 <= outC->_L41;
  outC->_L45 = T_TRAIN_MIN;
  outC->_L40 = outC->_L49 >= outC->_L45;
  outC->_L47 = outC->_L50 & outC->_L40 & outC->_L46 & outC->_L44 & outC->_L39;
  outC->consistencyCheckConditionSatisfied = outC->_L47;
  outC->IfBlock1_clock = outC->consistencyCheckConditionSatisfied;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L8_then_IfBlock1 = last_lastReceivedRadioTrainTrackMessageTimestamp;
    outC->_L6_then_IfBlock1 = outC->currentRecivedRadioTrainTrackMessageTimestamp;
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->_L2_then_IfBlock1,
      inRadioTrainTrackMessage);
    /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets#1)/ */
    RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->Context_RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_1);
    outC->_L1_then_IfBlock1 =
      outC->Context_RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_1.outIsConsistent;
    /* IfBlock1:then:_L4=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader#1)/ */
    RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
      &outC->_L2_then_IfBlock1,
      &outC->Context_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_1);
    outC->_L4_then_IfBlock1 =
      outC->Context_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_1.outIsConsistent;
    outC->_L3_then_IfBlock1 = outC->_L4_then_IfBlock1 & outC->_L1_then_IfBlock1;
    /* IfBlock1:then:_L5= */
    if (outC->_L3_then_IfBlock1) {
      outC->_L5_then_IfBlock1 = outC->_L6_then_IfBlock1;
    }
    else {
      outC->_L5_then_IfBlock1 = outC->_L8_then_IfBlock1;
    }
    lastReceivedRadioTrainTrackMessageTimestamp_partial = outC->_L5_then_IfBlock1;
    outIsConsistent_partial = outC->_L3_then_IfBlock1;
    outC->outIsConsistent = outIsConsistent_partial;
    outC->lastReceivedRadioTrainTrackMessageTimestamp =
      lastReceivedRadioTrainTrackMessageTimestamp_partial;
  }
  else {
    _2_lastReceivedRadioTrainTrackMessageTimestamp_partial =
      last_lastReceivedRadioTrainTrackMessageTimestamp;
    outC->_L1_else_IfBlock1 = kcg_false;
    _1_outIsConsistent_partial = outC->_L1_else_IfBlock1;
    outC->outIsConsistent = _1_outIsConsistent_partial;
    outC->lastReceivedRadioTrainTrackMessageTimestamp =
      _2_lastReceivedRadioTrainTrackMessageTimestamp_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_init_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L39 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L41 = kcg_lit_int32(0);
  outC->_L42 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(0);
  outC->_L44 = kcg_true;
  outC->_L45 = kcg_lit_int32(0);
  outC->_L46 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L48 = kcg_lit_int32(0);
  outC->_L49 = kcg_lit_int32(0);
  outC->_L50 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L2.present = kcg_true;
  outC->_L2.nid_message = kcg_lit_int32(0);
  outC->_L2.t_train = kcg_lit_int32(0);
  outC->_L2.nid_engine = kcg_lit_int32(0);
  outC->_L2.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2.xT_TRAIN = kcg_lit_int32(0);
  outC->_L2.xNID_EM = kcg_lit_int32(0);
  outC->_L2.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2.xNID_TEXTMESSAGE = kcg_lit_int32(0);
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
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L1.packets.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L1.packets.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int32(0);
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
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L1.packets.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.packets.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L1.packets.p11.nid_ntc[idx3] = kcg_lit_int32(0);
  }
  outC->consistencyCheckConditionSatisfied = kcg_true;
  outC->currentRecivedRadioTrainTrackMessageTimestamp = kcg_lit_int32(0);
  outC->radioTrainTrackMessageIsPresent = kcg_true;
  outC->radioTrainTrackHeaderIsPresent = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1.present = kcg_true;
  outC->_L2_then_IfBlock1.header.present = kcg_true;
  outC->_L2_then_IfBlock1.header.nid_message = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.header.t_train = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.header.nid_engine = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2_then_IfBlock1.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.header.xNID_EM = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2_then_IfBlock1.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p0.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_IfBlock1.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_IfBlock1.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_IfBlock1.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p1.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock1.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_IfBlock1.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_IfBlock1.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2_then_IfBlock1.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L2_then_IfBlock1.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2_then_IfBlock1.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p3.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p3.number = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L2_then_IfBlock1.packets.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L2_then_IfBlock1.packets.p3.aNID_RADIO[idx5].telephoneNumber[idx4] =
        kcg_lit_int32(0);
    }
  }
  outC->_L2_then_IfBlock1.packets.p4.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2_then_IfBlock1.packets.p5.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p9.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p11.valid = kcg_true;
  outC->_L2_then_IfBlock1.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_IfBlock1.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_IfBlock1.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_IfBlock1.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2_then_IfBlock1.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2_then_IfBlock1.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L2_then_IfBlock1.packets.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_IfBlock1.packets.p11.tractionIdentity[idx6].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L2_then_IfBlock1.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L2_then_IfBlock1.packets.p11.nid_ntc[idx7] = kcg_lit_int32(0);
  }
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = kcg_true;
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->outIsConsistent = kcg_true;
  /* IfBlock1:then:_L4=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader#1)/ */
  RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_init_RBC_Messaging_Pkg_RBC_Consistency(
    &outC->Context_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets#1)/ */
  RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_init_RBC_Messaging_Pkg_RBC_Consistenc(
    &outC->Context_RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent#1)/ */
  RadioTrainTrackMessage__IsPresent_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__IsPresent_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__IsPresent#1)/ */
  RadioTrainTrackHeader__IsPresent_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__IsPresent_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN#1)/ */
  RadioTrainTrackHeader__Get_T_TRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
  outC->lastReceivedRadioTrainTrackMessageTimestamp = kcg_lit_int32(-1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_reset_RBC_Messaging_Pkg_RBC_Consistency_Pk(
  outC_RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg *outC)
{
  /* IfBlock1:then:_L4=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader#1)/ */
  RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_reset_RBC_Messaging_Pkg_RBC_Consistenc(
    &outC->Context_RadioTrainTrackMessageConsistencyChecker__HasConsistentHeader_1);
  /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_Consistency_Pkg::RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets#1)/ */
  RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_reset_RBC_Messaging_Pkg_RBC_Consisten(
    &outC->Context_RadioTrainTrackMessageConsistencyChecker__HasConsistentPackets_1);
  /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__IsPresent#1)/ */
  RadioTrainTrackMessage__IsPresent_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__IsPresent_1);
  /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__IsPresent#1)/ */
  RadioTrainTrackHeader__IsPresent_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__IsPresent_1);
  /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackHeader__Get_T_TRAIN#1)/ */
  RadioTrainTrackHeader__Get_T_TRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackHeader__Get_T_TRAIN_1);
  /* _L2=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetHeader#1)/ */
  RadioTrainTrackMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
    &outC->Context_RadioTrainTrackMessage__GetHeader_1);
  outC->lastReceivedRadioTrainTrackMessageTimestamp = kcg_lit_int32(-1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

