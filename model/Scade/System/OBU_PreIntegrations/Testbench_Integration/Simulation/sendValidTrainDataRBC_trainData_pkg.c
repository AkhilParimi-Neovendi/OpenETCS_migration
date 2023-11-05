/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendValidTrainDataRBC_trainData_pkg.h"

/* trainData_pkg::sendValidTrainDataRBC/ */
void sendValidTrainDataRBC_trainData_pkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* evc_t_train/ */
  T_TRAIN evc_t_train,
  /* nidEngine/ */
  NID_ENGINE nidEngine,
  /* actualStatus/ */
  trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* p0_positionReport/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* p1_positionReport/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* inVersion/ */
  M_VERSION inVersion,
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
{
  outC->_L43 = evc_t_train;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L41, actualStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L45, &outC->_L41);
  if (kcg_true) {
    outC->_L45.timeStampValidateToRBC = outC->_L43;
  }
  outC->_L40 = kcg_true;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L44, &outC->_L45);
  if (kcg_true) {
    outC->_L44.waitingForRBCResponse = outC->_L40;
  }
  outC->_L26 = evc_t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L25, MessageBus);
  outC->_L29 = nidEngine;
  outC->_L30 = evc_t_train;
  /* _L28=(trainData_pkg::headerMsg129_ng#1)/ */
  headerMsg129_ng_trainData_pkg(
    outC->_L29,
    outC->_L30,
    &outC->Context_headerMsg129_ng_1);
  kcg_copy_M_129_T_TM_radio_messages(
    &outC->_L28,
    &outC->Context_headerMsg129_ng_1.header);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->_L31,
    p0_positionReport);
  /* _L33=(radioOutput_Pkg::nextGen_P00#1)/ */
  nextGen_P00_radioOutput_Pkg(&outC->_L31, &outC->Context_nextGen_P00_1);
  kcg_copy_P000_TM_TrainToTrack(&outC->_L33, &outC->Context_nextGen_P00_1.outP0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->_L32,
    p1_positionReport);
  /* _L34=(radioOutput_Pkg::nextGen_P01#1)/ */
  nextGen_P01_radioOutput_Pkg(&outC->_L32, &outC->Context_nextGen_P01_1);
  kcg_copy_P001_TM_TrainToTrack(&outC->_L34, &outC->Context_nextGen_P01_1.outP1);
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L36, trainData);
  /* _L37=(trainData_pkg::packet_11#1)/ */
  packet_11_trainData_pkg(&outC->_L36, &outC->Context_packet_11_1);
  kcg_copy_P011_TM_TrainToTrack(&outC->_L37, &outC->Context_packet_11_1.p11);
  outC->_L35 = inVersion;
  /* _L24=(TM_radio_messages::Send_M129#1)/ */
  Send_M129_TM_radio_messages(
    outC->_L26,
    &outC->_L25,
    &outC->_L28,
    &outC->_L33,
    &outC->_L34,
    &outC->_L37,
    outC->_L35,
    &outC->Context_Send_M129_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L24,
    &outC->Context_Send_M129_1.MessageBus_out);
  outC->_L38 = outC->Context_Send_M129_1.t_train_assigned;
  outC->t_trainUsed = outC->_L38;
  outC->_L42 = outC->t_trainUsed;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L39, &outC->_L44);
  if (kcg_true) {
    outC->_L39.timeStampValidateToRBC = outC->_L42;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->updatedStatus,
    &outC->_L39);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->outMessageBus,
    &outC->_L24);
}

#ifndef KCG_USER_DEFINED_INIT
void sendValidTrainDataRBC_init_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
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

  outC->_L39.valid = kcg_true;
  outC->_L39.validatedByDriver = kcg_true;
  outC->_L39.RBCsystemVersionOnboard = kcg_true;
  outC->_L39.validatedbyRBC = kcg_true;
  outC->_L39.waitingForRBCResponse = kcg_true;
  outC->_L39.driverIsModificationTrainData = kcg_true;
  outC->_L39.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L40 = kcg_true;
  outC->_L41.valid = kcg_true;
  outC->_L41.validatedByDriver = kcg_true;
  outC->_L41.RBCsystemVersionOnboard = kcg_true;
  outC->_L41.validatedbyRBC = kcg_true;
  outC->_L41.waitingForRBCResponse = kcg_true;
  outC->_L41.driverIsModificationTrainData = kcg_true;
  outC->_L41.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L42 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(0);
  outC->_L44.valid = kcg_true;
  outC->_L44.validatedByDriver = kcg_true;
  outC->_L44.RBCsystemVersionOnboard = kcg_true;
  outC->_L44.validatedbyRBC = kcg_true;
  outC->_L44.waitingForRBCResponse = kcg_true;
  outC->_L44.driverIsModificationTrainData = kcg_true;
  outC->_L44.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L45.valid = kcg_true;
  outC->_L45.validatedByDriver = kcg_true;
  outC->_L45.RBCsystemVersionOnboard = kcg_true;
  outC->_L45.validatedbyRBC = kcg_true;
  outC->_L45.waitingForRBCResponse = kcg_true;
  outC->_L45.driverIsModificationTrainData = kcg_true;
  outC->_L45.timeStampValidateToRBC = kcg_lit_int32(0);
  outC->_L38 = kcg_lit_int32(0);
  outC->_L37.valid = kcg_true;
  outC->_L37.nid_packet = kcg_lit_int32(0);
  outC->_L37.l_packet = kcg_lit_int32(0);
  outC->_L37.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L37.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L37.l_train = kcg_lit_int32(0);
  outC->_L37.v_maxtrain = kcg_lit_int32(0);
  outC->_L37.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L37.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L37.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L37.n_axle = kcg_lit_int32(0);
  outC->_L37.n_iter_voltage = kcg_lit_int32(0);
  for (idx = 0; idx < 4; idx++) {
    outC->_L37.voltage_list[idx].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L37.voltage_list[idx].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L37.n_iter_nid_ntc = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L37.nid_ntc_list[idx1] = kcg_lit_int32(0);
  }
  outC->_L36.valid = kcg_true;
  outC->_L36.acknowledgedByDriver = kcg_true;
  outC->_L36.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L36.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L36.trainLength = kcg_lit_int32(0);
  outC->_L36.brakePerctage = kcg_lit_int32(0);
  outC->_L36.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L36.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L36.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L36.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L36.axleNumber = kcg_lit_int32(0);
  outC->_L36.numberNationalSystems = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L36.nationSystems[idx2] = kcg_lit_int32(0);
  }
  outC->_L36.numberTractionSystems = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 4; idx3++) {
    outC->_L36.tractionSystem[idx3].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L36.tractionSystem[idx3].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L35 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34.valid = kcg_true;
  outC->_L34.nid_packet = kcg_lit_int32(0);
  outC->_L34.l_packet = kcg_lit_int32(0);
  outC->_L34.q_scale = Q_SCALE_10_cm_scale;
  outC->_L34.nid_lrbg = kcg_lit_int32(0);
  outC->_L34.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L34.d_lrbg = kcg_lit_int32(0);
  outC->_L34.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L34.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L34.l_doubtover = kcg_lit_int32(0);
  outC->_L34.l_doubtunder = kcg_lit_int32(0);
  outC->_L34.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L34.l_trainint = kcg_lit_int32(0);
  outC->_L34.v_train = kcg_lit_int32(0);
  outC->_L34.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L34.m_mode = M_MODE_Full_Supervision;
  outC->_L34.m_level = M_LEVEL_Level_0;
  outC->_L34.nid_ntc = kcg_lit_int32(0);
  outC->_L33.valid = kcg_true;
  outC->_L33.nid_packet = kcg_lit_int32(0);
  outC->_L33.l_packet = kcg_lit_int32(0);
  outC->_L33.q_scale = Q_SCALE_10_cm_scale;
  outC->_L33.nid_lrbg = kcg_lit_int32(0);
  outC->_L33.d_lrbg = kcg_lit_int32(0);
  outC->_L33.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L33.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L33.l_doubtover = kcg_lit_int32(0);
  outC->_L33.l_doubtunder = kcg_lit_int32(0);
  outC->_L33.q_length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L33.l_trainint = kcg_lit_int32(0);
  outC->_L33.v_train = kcg_lit_int32(0);
  outC->_L33.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L33.m_mode = M_MODE_Full_Supervision;
  outC->_L33.m_level = M_LEVEL_Level_0;
  outC->_L33.nid_ntc = kcg_lit_int32(0);
  outC->_L32.valid = kcg_true;
  outC->_L32.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L32.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L32.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L32.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L32.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L32.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L32.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L32.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L32.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L32.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L32.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L32.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L32.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L32.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L32.packet1.mode = M_MODE_Full_Supervision;
  outC->_L32.packet1.level = M_LEVEL_Level_0;
  outC->_L32.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L31.valid = kcg_true;
  outC->_L31.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L31.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L31.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L31.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L31.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L31.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L31.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L31.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L31.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L31.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L31.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L31.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L31.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L31.packet0.mode = M_MODE_Full_Supervision;
  outC->_L31.packet0.level = M_LEVEL_Level_0;
  outC->_L31.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L30 = kcg_lit_int32(0);
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28.valid = kcg_true;
  outC->_L28.nid_message = kcg_lit_int32(0);
  outC->_L28.l_message = kcg_lit_int32(0);
  outC->_L28.t_train = kcg_lit_int32(0);
  outC->_L28.nid_engine = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L25[idx5].Message.valid = kcg_true;
    outC->_L25[idx5].Message.nid_message = kcg_lit_int32(0);
    outC->_L25[idx5].Message.l_message = kcg_lit_int32(0);
    outC->_L25[idx5].Message.t_train = kcg_lit_int32(0);
    outC->_L25[idx5].Message.nid_engine = kcg_lit_int32(0);
    outC->_L25[idx5].Message.field1 = kcg_lit_int32(0);
    outC->_L25[idx5].Message.field2 = kcg_lit_int32(0);
    outC->_L25[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L25[idx5].OptionalPackets[idx4] = kcg_lit_int32(0);
    }
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L24[idx7].Message.valid = kcg_true;
    outC->_L24[idx7].Message.nid_message = kcg_lit_int32(0);
    outC->_L24[idx7].Message.l_message = kcg_lit_int32(0);
    outC->_L24[idx7].Message.t_train = kcg_lit_int32(0);
    outC->_L24[idx7].Message.nid_engine = kcg_lit_int32(0);
    outC->_L24[idx7].Message.field1 = kcg_lit_int32(0);
    outC->_L24[idx7].Message.field2 = kcg_lit_int32(0);
    outC->_L24[idx7].Message.field3 = kcg_lit_int32(0);
    for (idx6 = 0; idx6 < 50; idx6++) {
      outC->_L24[idx7].OptionalPackets[idx6] = kcg_lit_int32(0);
    }
  }
  outC->t_trainUsed = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->outMessageBus[idx9].Message.valid = kcg_true;
    outC->outMessageBus[idx9].Message.nid_message = kcg_lit_int32(0);
    outC->outMessageBus[idx9].Message.l_message = kcg_lit_int32(0);
    outC->outMessageBus[idx9].Message.t_train = kcg_lit_int32(0);
    outC->outMessageBus[idx9].Message.nid_engine = kcg_lit_int32(0);
    outC->outMessageBus[idx9].Message.field1 = kcg_lit_int32(0);
    outC->outMessageBus[idx9].Message.field2 = kcg_lit_int32(0);
    outC->outMessageBus[idx9].Message.field3 = kcg_lit_int32(0);
    for (idx8 = 0; idx8 < 50; idx8++) {
      outC->outMessageBus[idx9].OptionalPackets[idx8] = kcg_lit_int32(0);
    }
  }
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = kcg_lit_int32(0);
  /* _L24=(TM_radio_messages::Send_M129#1)/ */
  Send_M129_init_TM_radio_messages(&outC->Context_Send_M129_1);
  /* _L37=(trainData_pkg::packet_11#1)/ */
  packet_11_init_trainData_pkg(&outC->Context_packet_11_1);
  /* _L34=(radioOutput_Pkg::nextGen_P01#1)/ */
  nextGen_P01_init_radioOutput_Pkg(&outC->Context_nextGen_P01_1);
  /* _L33=(radioOutput_Pkg::nextGen_P00#1)/ */
  nextGen_P00_init_radioOutput_Pkg(&outC->Context_nextGen_P00_1);
  /* _L28=(trainData_pkg::headerMsg129_ng#1)/ */
  headerMsg129_ng_init_trainData_pkg(&outC->Context_headerMsg129_ng_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendValidTrainDataRBC_reset_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
{
  /* _L24=(TM_radio_messages::Send_M129#1)/ */
  Send_M129_reset_TM_radio_messages(&outC->Context_Send_M129_1);
  /* _L37=(trainData_pkg::packet_11#1)/ */
  packet_11_reset_trainData_pkg(&outC->Context_packet_11_1);
  /* _L34=(radioOutput_Pkg::nextGen_P01#1)/ */
  nextGen_P01_reset_radioOutput_Pkg(&outC->Context_nextGen_P01_1);
  /* _L33=(radioOutput_Pkg::nextGen_P00#1)/ */
  nextGen_P00_reset_radioOutput_Pkg(&outC->Context_nextGen_P00_1);
  /* _L28=(trainData_pkg::headerMsg129_ng#1)/ */
  headerMsg129_ng_reset_trainData_pkg(&outC->Context_headerMsg129_ng_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_sendValidTrainDataRBC_trainData_pkg(
  SV_sendValidTrainDataRBC_trainData_pkg *SV,
  outC_sendValidTrainDataRBC_trainData_pkg *outC)
{
  kcg_save_SV_Send_M129_TM_radio_messages(
    &SV->Context_Send_M129_1,
    &outC->Context_Send_M129_1);
}

void kcg_load_SV_sendValidTrainDataRBC_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC,
  SV_sendValidTrainDataRBC_trainData_pkg *SV)
{
  kcg_load_SV_Send_M129_TM_radio_messages(
    &outC->Context_Send_M129_1,
    &SV->Context_Send_M129_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendValidTrainDataRBC_trainData_pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

