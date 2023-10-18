/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg/ */
void ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* inNew/ */
  M_TrainTrack_Message_T_TM_radio_messages *inNew,
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L1, inNew);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L11,
    &outC->_L1.Message);
  outC->_L13 = outC->_L11.nid_message;
  kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(
    &outC->_L10,
    &outC->_L1.OptionalPackets);
  /* _L12=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets#1)/ */
  ConvertPackets_RBC_Model_Pkg_TrainTrackMsgConversion(
    outC->_L13,
    &outC->_L10,
    &outC->Context_ConvertPackets_1);
  kcg_copy_outPackets_T_Common_Types_Pkg(
    &outC->_L12,
    &outC->Context_ConvertPackets_1.oldPackets);
  /* _L7=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader#1)/ */
  ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_L11,
    &outC->Context_ConvertHeader_1);
  outC->_L7 = outC->Context_ConvertHeader_1.present;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L8,
    &outC->Context_ConvertHeader_1.oldHeader);
  outC->_L3.present = outC->_L7;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->_L3.header,
    &outC->_L8);
  kcg_copy_outPackets_T_Common_Types_Pkg(&outC->_L3.packets, &outC->_L12);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(&outC->outOld, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void ToOldRadioTrainTrackMsg_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
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

  outC->_L13 = kcg_lit_int64(0);
  outC->_L12.p0.valid = kcg_true;
  outC->_L12.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L12.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L12.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L12.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L12.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L12.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L12.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L12.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L12.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L12.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L12.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L12.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L12.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L12.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L12.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L12.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L12.p1.valid = kcg_true;
  outC->_L12.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L12.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L12.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L12.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L12.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L12.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L12.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L12.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L12.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L12.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L12.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L12.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L12.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L12.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L12.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L12.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L12.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L12.p3.valid = kcg_true;
  outC->_L12.p3.number = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L12.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L12.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int64(0);
    }
  }
  outC->_L12.p4.valid = kcg_true;
  outC->_L12.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L12.p5.valid = kcg_true;
  outC->_L12.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L12.p9.valid = kcg_true;
  outC->_L12.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L12.p11.valid = kcg_true;
  outC->_L12.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L12.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L12.p11.l_train = kcg_lit_int64(0);
  outC->_L12.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L12.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L12.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L12.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L12.p11.n_axle = kcg_lit_int64(0);
  outC->_L12.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L12.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L12.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L12.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L12.p11.nid_ntc[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->_L10[idx4] = kcg_lit_int64(0);
  }
  outC->_L11.valid = kcg_true;
  outC->_L11.nid_message = kcg_lit_int64(0);
  outC->_L11.l_message = kcg_lit_int64(0);
  outC->_L11.t_train = kcg_lit_int64(0);
  outC->_L11.nid_engine = kcg_lit_int64(0);
  outC->_L11.field1 = kcg_lit_int64(0);
  outC->_L11.field2 = kcg_lit_int64(0);
  outC->_L11.field3 = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
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
  outC->_L3.present = kcg_true;
  outC->_L3.header.present = kcg_true;
  outC->_L3.header.nid_message = kcg_lit_int64(0);
  outC->_L3.header.t_train = kcg_lit_int64(0);
  outC->_L3.header.nid_engine = kcg_lit_int64(0);
  outC->_L3.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L3.header.xT_TRAIN = kcg_lit_int64(0);
  outC->_L3.header.xNID_EM = kcg_lit_int64(0);
  outC->_L3.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L3.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->_L3.packets.p0.valid = kcg_true;
  outC->_L3.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->_L3.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->_L3.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L3.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->_L3.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->_L3.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L3.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L3.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L3.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->_L3.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->_L3.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L3.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L3.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->_L3.packets.p1.valid = kcg_true;
  outC->_L3.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->_L3.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->_L3.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L3.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->_L3.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->_L3.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->_L3.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L3.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->_L3.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->_L3.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->_L3.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->_L3.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L3.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L3.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->_L3.packets.p3.valid = kcg_true;
  outC->_L3.packets.p3.number = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 1; idx6++) {
    outC->_L3.packets.p3.aNID_RADIO[idx6].valid = kcg_true;
    for (idx5 = 0; idx5 < 15; idx5++) {
      outC->_L3.packets.p3.aNID_RADIO[idx6].telephoneNumber[idx5] = kcg_lit_int64(0);
    }
  }
  outC->_L3.packets.p4.valid = kcg_true;
  outC->_L3.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L3.packets.p5.valid = kcg_true;
  outC->_L3.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->_L3.packets.p9.valid = kcg_true;
  outC->_L3.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->_L3.packets.p11.valid = kcg_true;
  outC->_L3.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3.packets.p11.l_train = kcg_lit_int64(0);
  outC->_L3.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->_L3.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L3.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L3.packets.p11.n_axle = kcg_lit_int64(0);
  outC->_L3.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L3.packets.p11.tractionIdentity[idx7].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3.packets.p11.tractionIdentity[idx7].nid_ctraction = kcg_lit_int64(0);
  }
  outC->_L3.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L3.packets.p11.nid_ntc[idx8] = kcg_lit_int64(0);
  }
  outC->_L1.Message.valid = kcg_true;
  outC->_L1.Message.nid_message = kcg_lit_int64(0);
  outC->_L1.Message.l_message = kcg_lit_int64(0);
  outC->_L1.Message.t_train = kcg_lit_int64(0);
  outC->_L1.Message.nid_engine = kcg_lit_int64(0);
  outC->_L1.Message.field1 = kcg_lit_int64(0);
  outC->_L1.Message.field2 = kcg_lit_int64(0);
  outC->_L1.Message.field3 = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 50; idx9++) {
    outC->_L1.OptionalPackets[idx9] = kcg_lit_int64(0);
  }
  outC->outOld.present = kcg_true;
  outC->outOld.header.present = kcg_true;
  outC->outOld.header.nid_message = kcg_lit_int64(0);
  outC->outOld.header.t_train = kcg_lit_int64(0);
  outC->outOld.header.nid_engine = kcg_lit_int64(0);
  outC->outOld.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->outOld.header.xT_TRAIN = kcg_lit_int64(0);
  outC->outOld.header.xNID_EM = kcg_lit_int64(0);
  outC->outOld.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outOld.header.xNID_TEXTMESSAGE = kcg_lit_int64(0);
  outC->outOld.packets.p0.valid = kcg_true;
  outC->outOld.packets.p0.packet0.NID_PACKET = kcg_lit_int64(0);
  outC->outOld.packets.p0.packet0.L_PACKET = kcg_lit_int64(0);
  outC->outOld.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outOld.packets.p0.packet0.NID_LRBG = kcg_lit_int64(0);
  outC->outOld.packets.p0.packet0.D_LRBG = kcg_lit_int64(0);
  outC->outOld.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outOld.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outOld.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int64(0);
  outC->outOld.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->outOld.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outOld.packets.p0.packet0.L_TRAININT = kcg_lit_int64(0);
  outC->outOld.packets.p0.packet0.V_TRAIN = kcg_lit_int64(0);
  outC->outOld.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outOld.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->outOld.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outOld.packets.p0.packet0.NID_NTC = kcg_lit_int64(0);
  outC->outOld.packets.p1.valid = kcg_true;
  outC->outOld.packets.p1.packet1.NID_PACKET = kcg_lit_int64(0);
  outC->outOld.packets.p1.packet1.L_PACKET = kcg_lit_int64(0);
  outC->outOld.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outOld.packets.p1.packet1.NID_LRBG = kcg_lit_int64(0);
  outC->outOld.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int64(0);
  outC->outOld.packets.p1.packet1.D_LRBG = kcg_lit_int64(0);
  outC->outOld.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outOld.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outOld.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int64(0);
  outC->outOld.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int64(0);
  outC->outOld.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outOld.packets.p1.packet1.L_TRAININT = kcg_lit_int64(0);
  outC->outOld.packets.p1.packet1.V_TRAIN = kcg_lit_int64(0);
  outC->outOld.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->outOld.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->outOld.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outOld.packets.p1.packet1.NID_NTC = kcg_lit_int64(0);
  outC->outOld.packets.p3.valid = kcg_true;
  outC->outOld.packets.p3.number = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 1; idx11++) {
    outC->outOld.packets.p3.aNID_RADIO[idx11].valid = kcg_true;
    for (idx10 = 0; idx10 < 15; idx10++) {
      outC->outOld.packets.p3.aNID_RADIO[idx11].telephoneNumber[idx10] =
        kcg_lit_int64(0);
    }
  }
  outC->outOld.packets.p4.valid = kcg_true;
  outC->outOld.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outOld.packets.p5.valid = kcg_true;
  outC->outOld.packets.p5.TrainRunningNumber = kcg_lit_int64(0);
  outC->outOld.packets.p9.valid = kcg_true;
  outC->outOld.packets.p9.transitionInformation = kcg_lit_int64(0);
  outC->outOld.packets.p11.valid = kcg_true;
  outC->outOld.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outOld.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outOld.packets.p11.l_train = kcg_lit_int64(0);
  outC->outOld.packets.p11.v_maxtrain = kcg_lit_int64(0);
  outC->outOld.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outOld.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outOld.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outOld.packets.p11.n_axle = kcg_lit_int64(0);
  outC->outOld.packets.p11.nIter_tractionIdentity = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 4; idx12++) {
    outC->outOld.packets.p11.tractionIdentity[idx12].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outOld.packets.p11.tractionIdentity[idx12].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->outOld.packets.p11.nIter_ntc = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 5; idx13++) {
    outC->outOld.packets.p11.nid_ntc[idx13] = kcg_lit_int64(0);
  }
  /* _L7=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader#1)/ */
  ConvertHeader_init_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertHeader_1);
  /* _L12=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets#1)/ */
  ConvertPackets_init_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertPackets_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToOldRadioTrainTrackMsg_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* _L7=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader#1)/ */
  ConvertHeader_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertHeader_1);
  /* _L12=(RBC_Model_Pkg::TrainTrackMsgConversion::ConvertPackets#1)/ */
  ConvertPackets_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ConvertPackets_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

