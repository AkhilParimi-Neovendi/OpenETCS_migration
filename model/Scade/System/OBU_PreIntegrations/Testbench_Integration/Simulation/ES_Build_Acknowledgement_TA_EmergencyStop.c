/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Build_Acknowledgement_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Build_Acknowledgement/ */
void ES_Build_Acknowledgement_TA_EmergencyStop(
  /* nid_em/ */
  NID_EM nid_em,
  /* t_train/ */
  T_TRAIN t_train,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* receivedMsg16/ */
  kcg_bool receivedMsg16,
  /* cesAccepted/ */
  kcg_bool cesAccepted,
  /* updateEOA/ */
  kcg_bool updateEOA,
  outC_ES_Build_Acknowledgement_TA_EmergencyStop *outC)
{
  outC->_L43 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA;
  outC->_L42 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L40 = updateEOA;
  /* _L39= */
  if (outC->_L40) {
    outC->_L39 = outC->_L42;
  }
  else {
    outC->_L39 = outC->_L43;
  }
  outC->_L38 = Q_EMERGENCYSTOP_Emergency_stop;
  outC->_L36 = cesAccepted;
  /* _L35= */
  if (outC->_L36) {
    outC->_L35 = outC->_L39;
  }
  else {
    outC->_L35 = outC->_L38;
  }
  outC->_L34 = receivedMsg16;
  outC->_L13 = Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted;
  /* _L33= */
  if (outC->_L34) {
    outC->_L33 = outC->_L13;
  }
  else {
    outC->_L33 = outC->_L35;
  }
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L32,
    (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *)
      &cPT9_Level23_MA_Request);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L31,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &cPT5_TrainRunningNumber_MA_Request);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L30,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *) &cPT4_ErrorReporting_MA_Request);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L29,
    (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *)
      &cPT3_OBUTelephoneNumber_MA_Request);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L28,
    (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *)
      &cPT11_ValidateTrainData_MA_Request);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L22, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L26, packet1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p0,
    &outC->_L22);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p1,
    &outC->_L26);
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p3,
    &outC->_L29);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p4,
    &outC->_L30);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &outC->_L27.p5,
    &outC->_L31);
  kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p9,
    &outC->_L32);
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &outC->_L27.p11,
    &outC->_L28);
  outC->_L18 = cNID_TEXTMESSAGE_NONE_TA_EmergencyStop;
  outC->_L17 = cQ_MARQSREASON_NONE_TA_EmergencyStop;
  outC->q_emergencystop = outC->_L33;
  outC->_L14 = outC->q_emergencystop;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L11, trainProps);
  outC->_L12 = outC->_L11.nid_engine;
  outC->_L10 = kcg_lit_int64(147);
  outC->_L9 = kcg_true;
  outC->_L5 = t_train;
  outC->_L4 = nid_em;
  outC->_L8.present = outC->_L9;
  outC->_L8.nid_message = outC->_L10;
  outC->_L8.t_train = outC->_L5;
  outC->_L8.nid_engine = outC->_L12;
  outC->_L8.xQ_MARQSTREASON = outC->_L17;
  outC->_L8.xT_TRAIN = outC->_L5;
  outC->_L8.xNID_EM = outC->_L4;
  outC->_L8.xQ_EMERGENCYSTOP = outC->_L14;
  outC->_L8.xNID_TEXTMESSAGE = outC->_L18;
  outC->_L7 = kcg_true;
  outC->_L6.present = outC->_L7;
  kcg_copy_Radio_TrainTrack_Header_T_TM_transitional(
    &outC->_L6.header,
    &outC->_L8);
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L6.packets, &outC->_L27);
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &outC->message147,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void ES_Build_Acknowledgement_init_TA_EmergencyStop(
  outC_ES_Build_Acknowledgement_TA_EmergencyStop *outC)
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

  outC->_L43 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L42 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L40 = kcg_true;
  outC->_L39 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L38 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L36 = kcg_true;
  outC->_L35 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L34 = kcg_true;
  outC->_L33 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L32.valid = kcg_true;
  outC->_L32.transitionInformation = kcg_lit_int64(0);
  outC->_L31.valid = kcg_true;
  outC->_L31.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L30.valid = kcg_true;
  outC->_L30.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L29.valid = kcg_true;
  outC->_L29.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L29.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L29.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L28.valid = kcg_true;
  outC->_L28.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L28.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L28.l_train = kcg_lit_int64(0);
  outC->_L28.v_maxtrain = kcg_lit_int64(0);
  outC->_L28.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L28.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L28.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L28.n_axle = kcg_lit_int64(0);
  outC->_L28.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L28.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L28.tractionIdentity[idx2].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L28.nIter_ntc = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L28.nid_ntc[idx3] = kcg_lit_int64(0);
  }
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
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L27.p3.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L27.p3.aNID_RADIO[idx5].telephoneNumber[idx4] = kcg_lit_int64(0);
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
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L27.p11.tractionIdentity[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L27.p11.tractionIdentity[idx6].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L27.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L27.p11.nid_ntc[idx7] = kcg_lit_int64(0);
  }
  outC->_L22.valid = kcg_true;
  outC->_L22.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L22.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L22.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L22.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L22.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L22.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L22.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L22.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L22.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L22.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L22.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L22.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L22.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L22.packet0.mode = M_MODE_Full_Supervision;
  outC->_L22.packet0.level = M_LEVEL_Level_0;
  outC->_L22.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L26.valid = kcg_true;
  outC->_L26.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L26.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L26.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L26.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L26.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L26.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L26.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L26.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L26.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L26.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L26.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L26.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L26.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L26.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L26.packet1.mode = M_MODE_Full_Supervision;
  outC->_L26.packet1.level = M_LEVEL_Level_0;
  outC->_L26.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L14 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L13 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11.nid_engine = kcg_lit_int64(0);
  outC->_L11.nid_operational = kcg_lit_int64(0);
  outC->_L11.l_train = kcg_lit_int64(0);
  outC->_L11.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L11.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L11.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L11.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L11.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L11.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L11.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L11.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L11.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L11.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L11.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L11.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  outC->_L8.present = kcg_true;
  outC->_L8.nid_message = kcg_lit_int64(0);
  outC->_L8.t_train = kcg_lit_int64(0);
  outC->_L8.nid_engine = kcg_lit_int64(0);
  outC->_L8.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L8.xT_TRAIN = kcg_lit_int64(0);
  outC->_L8.xNID_EM = kcg_lit_int64(0);
  outC->_L8.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L8.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
  outC->_L6.present = kcg_true;
  outC->_L6.header.present = kcg_true;
  outC->_L6.header.nid_message = kcg_lit_int64(0);
  outC->_L6.header.t_train = kcg_lit_int64(0);
  outC->_L6.header.nid_engine = kcg_lit_int64(0);
  outC->_L6.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L6.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L6.header.xNID_EM = kcg_lit_int64(0);
  outC->_L6.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L6.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L6.packets.p0.valid = kcg_true;
  outC->_L6.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L6.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L6.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L6.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L6.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L6.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L6.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L6.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L6.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L6.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L6.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L6.packets.p1.valid = kcg_true;
  outC->_L6.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L6.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L6.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L6.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L6.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L6.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L6.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L6.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L6.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L6.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L6.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L6.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L6.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L6.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L6.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L6.packets.p3.valid = kcg_true;
  outC->_L6.packets.p3.number = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->_L6.packets.p3.aNID_RADIO[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->_L6.packets.p3.aNID_RADIO[idx9].telephoneNumber[idx8] = kcg_lit_int64(0);
    }
  }
  outC->_L6.packets.p4.valid = kcg_true;
  outC->_L6.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L6.packets.p5.valid = kcg_true;
  outC->_L6.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L6.packets.p9.valid = kcg_true;
  outC->_L6.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L6.packets.p11.valid = kcg_true;
  outC->_L6.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L6.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L6.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L6.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L6.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L6.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L6.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 4; idx10++) {
    outC->_L6.packets.p11.tractionIdentity[idx10].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6.packets.p11.tractionIdentity[idx10].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L6.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L6.packets.p11.nid_ntc[idx11] = kcg_lit_int64(0);
  }
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->q_emergencystop =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->message147.present = kcg_true;
  outC->message147.header.present = kcg_true;
  outC->message147.header.nid_message = kcg_lit_int64(0);
  outC->message147.header.t_train = kcg_lit_int64(0);
  outC->message147.header.nid_engine = kcg_lit_int64(0);
  outC->message147.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->message147.header.xT_TRAIN = kcg_lit_int64(0);
  outC->message147.header.xNID_EM = kcg_lit_int64(0);
  outC->message147.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->message147.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->message147.packets.p0.valid = kcg_true;
  outC->message147.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->message147.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->message147.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->message147.packets.p1.valid = kcg_true;
  outC->message147.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->message147.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->message147.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->message147.packets.p3.valid = kcg_true;
  outC->message147.packets.p3.number = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 1; idx13++) {
    outC->message147.packets.p3.aNID_RADIO[idx13].valid = kcg_true;
    for (idx12 = 0; idx12 < 15; idx12++) {
      outC->message147.packets.p3.aNID_RADIO[idx13].telephoneNumber[idx12] =
        kcg_lit_int64(0);
    }
  }
  outC->message147.packets.p4.valid = kcg_true;
  outC->message147.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->message147.packets.p5.valid = kcg_true;
  outC->message147.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->message147.packets.p9.valid = kcg_true;
  outC->message147.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->message147.packets.p11.valid = kcg_true;
  outC->message147.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->message147.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->message147.packets.p11.l_train = kcg_lit_int64(0);
  outC->message147.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->message147.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->message147.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->message147.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->message147.packets.p11.n_axle = kcg_lit_int64(0);
  outC->message147.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 4; idx14++) {
    outC->message147.packets.p11.tractionIdentity[idx14].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->message147.packets.p11.tractionIdentity[idx14].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->message147.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->message147.packets.p11.nid_ntc[idx15] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ES_Build_Acknowledgement_reset_TA_EmergencyStop(
  outC_ES_Build_Acknowledgement_TA_EmergencyStop *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_Build_Acknowledgement_TA_EmergencyStop.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

