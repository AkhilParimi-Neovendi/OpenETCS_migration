/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DataBusFactory_RBC_DataBus_Pkg.h"

/* RBC_DataBus_Pkg::DataBusFactory/ */
void DataBusFactory_RBC_DataBus_Pkg(
  /* initConfig/ */
  DynamicConfig_T *initConfig,
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  outC_DataBusFactory_RBC_DataBus_Pkg *outC)
{
  outC->_L4 = kcg_lit_int64(1);
  outC->n_times_1_int64 = outC->_L4;
  /* @1/_/v4= */
  if (outC->init) {
    outC->v4_times_1_int64 = outC->n_times_1_int64;
  }
  else {
    outC->v4_times_1_int64 = outC->v3_times_1_int64;
  }
  outC->_L1 = kcg_true;
  outC->c_times_1_int64 = outC->_L1;
  /* @1/_/v3= */
  if (outC->v4_times_1_int64 < kcg_lit_int64(0)) {
    outC->v3_times_1_int64 = outC->v4_times_1_int64;
  }
  else /* @1/_/v3= */
  if (outC->c_times_1_int64) {
    outC->v3_times_1_int64 = outC->v4_times_1_int64 - kcg_lit_int64(1);
  }
  else {
    outC->v3_times_1_int64 = outC->v4_times_1_int64;
  }
  outC->o_times_1_int64 = outC->c_times_1_int64 & (outC->v3_times_1_int64 ==
      kcg_lit_int64(0));
  kcg_copy__56_array(
    &outC->_L38,
    (_56_array *) &DIAG_MSG_DEFAULT_ARRAY_RBC_Diagnostic_Pkg);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L8, inDataBus);
  kcg_copy__56_array(&outC->_L16, &outC->_L8.diagnostic);
  outC->_L3 = outC->o_times_1_int64;
  /* _L28= */
  if (outC->_L3) {
    kcg_copy__56_array(&outC->_L28, &outC->_L38);
  }
  else {
    kcg_copy__56_array(&outC->_L28, &outC->_L16);
  }
  kcg_copy_Clock_T(&outC->_L25, (Clock_T *) &CLOCK_DEFAULT);
  kcg_copy_RadioTrackTrainMessageQueue_T(
    &outC->_L24,
    (RadioTrackTrainMessageQueue_T *) &RADIO_TRACK_TRAIN_MESSAGE_QUEUE_DEFAULT);
  kcg_copy_SessionManagement_T(
    &outC->_L23,
    (SessionManagement_T *) &SESSION_MANAGEMENT_DEFAULT);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L22,
    (CompressedRadioMessage_TM *) &Empty_RadioTrackTrainMessage_RBC_Messaging_Pkg);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L26,
    &outC->_L8.lastSentTrackTrainMessage);
  /* _L21= */
  if (outC->_L3) {
    kcg_copy_CompressedRadioMessage_TM(&outC->_L21, &outC->_L22);
  }
  else {
    kcg_copy_CompressedRadioMessage_TM(&outC->_L21, &outC->_L26);
  }
  kcg_copy_Clock_T(&outC->_L19, &outC->_L8.clockk);
  /* _L18=(RBC_Time_Pkg::Clock__Limit#1)/ */
  Clock__Limit_RBC_Time_Pkg(&outC->_L19, &outC->Context_Clock__Limit_1);
  kcg_copy_Clock_T(&outC->_L18, &outC->Context_Clock__Limit_1.outClock);
  kcg_copy_SessionManagement_T(&outC->_L15, &outC->_L8.session);
  /* _L2= */
  if (outC->_L3) {
    kcg_copy_SessionManagement_T(&outC->_L2, &outC->_L23);
  }
  else {
    kcg_copy_SessionManagement_T(&outC->_L2, &outC->_L15);
  }
  kcg_copy_DynamicConfig_T(&outC->_L14, &outC->_L8.config);
  kcg_copy_DynamicConfig_T(&outC->_L10, initConfig);
  /* _L5= */
  if (outC->_L3) {
    kcg_copy_DynamicConfig_T(&outC->_L5, &outC->_L10);
  }
  else {
    kcg_copy_DynamicConfig_T(&outC->_L5, &outC->_L14);
  }
  kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L13, &outC->_L8.messageQueue);
  /* _L7= */
  if (outC->_L3) {
    kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L7, &outC->_L24);
  }
  else {
    kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L7, &outC->_L13);
  }
  /* _L6= */
  if (outC->_L3) {
    kcg_copy_Clock_T(&outC->_L6, &outC->_L25);
  }
  else {
    kcg_copy_Clock_T(&outC->_L6, &outC->_L18);
  }
  kcg_copy_SessionManagement_T(&outC->_L17.session, &outC->_L2);
  kcg_copy_DynamicConfig_T(&outC->_L17.config, &outC->_L5);
  kcg_copy__56_array(&outC->_L17.diagnostic, &outC->_L28);
  kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L17.messageQueue, &outC->_L7);
  kcg_copy_Clock_T(&outC->_L17.clockk, &outC->_L6);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L17.lastSentTrackTrainMessage,
    &outC->_L21);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outC->_L17);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void DataBusFactory_init_RBC_DataBus_Pkg(
  outC_DataBusFactory_RBC_DataBus_Pkg *outC)
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
  static kcg_size idx60;
  static kcg_size idx61;
  static kcg_size idx62;
  static kcg_size idx63;
  static kcg_size idx64;
  static kcg_size idx65;

  for (idx = 0; idx < 16; idx++) {
    outC->_L38[idx].valid = kcg_true;
    outC->_L38[idx].count = kcg_lit_int64(0);
    outC->_L38[idx].timestamp = kcg_lit_int64(0);
    outC->_L38[idx].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L38[idx].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L38[idx].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx1 = 0; idx1 < 16; idx1++) {
    outC->_L28[idx1].valid = kcg_true;
    outC->_L28[idx1].count = kcg_lit_int64(0);
    outC->_L28[idx1].timestamp = kcg_lit_int64(0);
    outC->_L28[idx1].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L28[idx1].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L28[idx1].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  outC->_L26.Header.radioDevice = kcg_lit_int64(0);
  outC->_L26.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L26.Header.nid_message = kcg_lit_int64(0);
  outC->_L26.Header.t_train = kcg_lit_int64(0);
  outC->_L26.Header.m_ack = kcg_lit_int64(0);
  outC->_L26.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L26.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L26.Header.nid_em = kcg_lit_int64(0);
  outC->_L26.Header.q_scale = kcg_lit_int64(0);
  outC->_L26.Header.d_sr = kcg_lit_int64(0);
  outC->_L26.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L26.Header.d_ref = kcg_lit_int64(0);
  outC->_L26.Header.q_dir = kcg_lit_int64(0);
  outC->_L26.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L26.Header.m_version = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L26.Messages.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L26.Messages.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L26.Messages.PacketHeaders[idx2].valid = kcg_true;
    outC->_L26.Messages.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L26.Messages.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L26.Messages.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L25.m_Value = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 8; idx6++) {
    outC->_L24.m_Entries[idx6].m_IsValid = kcg_true;
    outC->_L24.m_Entries[idx6].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.t_train_reference = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L24.m_Entries[idx6].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx4 = 0; idx4 < 30; idx4++) {
      outC->_L24.m_Entries[idx6].m_Entry.Messages.PacketHeaders[idx4].nid_packet =
        kcg_lit_int64(0);
      outC->_L24.m_Entries[idx6].m_Entry.Messages.PacketHeaders[idx4].q_dir =
        Q_DIR_Reverse;
      outC->_L24.m_Entries[idx6].m_Entry.Messages.PacketHeaders[idx4].valid =
        kcg_true;
      outC->_L24.m_Entries[idx6].m_Entry.Messages.PacketHeaders[idx4].startAddress =
        kcg_lit_int64(0);
      outC->_L24.m_Entries[idx6].m_Entry.Messages.PacketHeaders[idx4].endAddress =
        kcg_lit_int64(0);
    }
    for (idx5 = 0; idx5 < 500; idx5++) {
      outC->_L24.m_Entries[idx6].m_Entry.Messages.PacketData[idx5] = kcg_lit_int64(0);
    }
  }
  outC->_L23.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L23.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 1; idx8++) {
    outC->_L23.m_TrainData.m_OnboardPhoneNumbers[idx8].valid = kcg_true;
    for (idx7 = 0; idx7 < 15; idx7++) {
      outC->_L23.m_TrainData.m_OnboardPhoneNumbers[idx8].telephoneNumber[idx7] =
        kcg_lit_int64(0);
    }
  }
  outC->_L23.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L23.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L23.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L23.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L23.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L23.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L23.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L23.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L23.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 4; idx9++) {
    outC->_L23.m_TrainData.m_TractionIdentities[idx9].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L23.m_TrainData.m_TractionIdentities[idx9].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L23.m_TrainData.m_NationalSystemIdentities[idx10] = kcg_lit_int64(0);
  }
  outC->_L23.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L23.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L23.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L23.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L23.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L23.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L23.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L23.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L23.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L23.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L23.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L23.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L23.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L23.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L23.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L22.Header.radioDevice = kcg_lit_int64(0);
  outC->_L22.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L22.Header.nid_message = kcg_lit_int64(0);
  outC->_L22.Header.t_train = kcg_lit_int64(0);
  outC->_L22.Header.m_ack = kcg_lit_int64(0);
  outC->_L22.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L22.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L22.Header.nid_em = kcg_lit_int64(0);
  outC->_L22.Header.q_scale = kcg_lit_int64(0);
  outC->_L22.Header.d_sr = kcg_lit_int64(0);
  outC->_L22.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L22.Header.d_ref = kcg_lit_int64(0);
  outC->_L22.Header.q_dir = kcg_lit_int64(0);
  outC->_L22.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L22.Header.m_version = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->_L22.Messages.PacketHeaders[idx11].nid_packet = kcg_lit_int64(0);
    outC->_L22.Messages.PacketHeaders[idx11].q_dir = Q_DIR_Reverse;
    outC->_L22.Messages.PacketHeaders[idx11].valid = kcg_true;
    outC->_L22.Messages.PacketHeaders[idx11].startAddress = kcg_lit_int64(0);
    outC->_L22.Messages.PacketHeaders[idx11].endAddress = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->_L22.Messages.PacketData[idx12] = kcg_lit_int64(0);
  }
  outC->_L21.Header.radioDevice = kcg_lit_int64(0);
  outC->_L21.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L21.Header.nid_message = kcg_lit_int64(0);
  outC->_L21.Header.t_train = kcg_lit_int64(0);
  outC->_L21.Header.m_ack = kcg_lit_int64(0);
  outC->_L21.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L21.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L21.Header.nid_em = kcg_lit_int64(0);
  outC->_L21.Header.q_scale = kcg_lit_int64(0);
  outC->_L21.Header.d_sr = kcg_lit_int64(0);
  outC->_L21.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L21.Header.d_ref = kcg_lit_int64(0);
  outC->_L21.Header.q_dir = kcg_lit_int64(0);
  outC->_L21.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L21.Header.m_version = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L21.Messages.PacketHeaders[idx13].nid_packet = kcg_lit_int64(0);
    outC->_L21.Messages.PacketHeaders[idx13].q_dir = Q_DIR_Reverse;
    outC->_L21.Messages.PacketHeaders[idx13].valid = kcg_true;
    outC->_L21.Messages.PacketHeaders[idx13].startAddress = kcg_lit_int64(0);
    outC->_L21.Messages.PacketHeaders[idx13].endAddress = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 500; idx14++) {
    outC->_L21.Messages.PacketData[idx14] = kcg_lit_int64(0);
  }
  outC->_L19.m_Value = kcg_lit_int64(0);
  outC->_L18.m_Value = kcg_lit_int64(0);
  outC->_L17.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L17.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 1; idx16++) {
    outC->_L17.session.m_TrainData.m_OnboardPhoneNumbers[idx16].valid = kcg_true;
    for (idx15 = 0; idx15 < 15; idx15++) {
      outC->_L17.session.m_TrainData.m_OnboardPhoneNumbers[idx16].telephoneNumber[idx15] =
        kcg_lit_int64(0);
    }
  }
  outC->_L17.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L17.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L17.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L17.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L17.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L17.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L17.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L17.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L17.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 4; idx17++) {
    outC->_L17.session.m_TrainData.m_TractionIdentities[idx17].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L17.session.m_TrainData.m_TractionIdentities[idx17].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L17.session.m_TrainData.m_NationalSystemIdentities[idx18] =
      kcg_lit_int64(0);
  }
  outC->_L17.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L17.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L17.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L17.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L17.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L17.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L17.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L17.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L17.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L17.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L17.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L17.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L17.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L17.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L17.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L17.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L17.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L17.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L17.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L17.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L17.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L17.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L17.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L17.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L17.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L17.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L17.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L17.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L17.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L17.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L17.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx19 = 0; idx19 < 32; idx19++) {
    outC->_L17.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx19].d_loc =
      kcg_lit_int64(0);
    outC->_L17.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx19].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx20 = 0; idx20 < 16; idx20++) {
    outC->_L17.diagnostic[idx20].valid = kcg_true;
    outC->_L17.diagnostic[idx20].count = kcg_lit_int64(0);
    outC->_L17.diagnostic[idx20].timestamp = kcg_lit_int64(0);
    outC->_L17.diagnostic[idx20].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L17.diagnostic[idx20].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L17.diagnostic[idx20].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx23 = 0; idx23 < 8; idx23++) {
    outC->_L17.messageQueue.m_Entries[idx23].m_IsValid = kcg_true;
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx21 = 0; idx21 < 30; idx21++) {
      outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].nid_packet =
        kcg_lit_int64(0);
      outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].q_dir =
        Q_DIR_Reverse;
      outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].valid =
        kcg_true;
      outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].startAddress =
        kcg_lit_int64(0);
      outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketHeaders[idx21].endAddress =
        kcg_lit_int64(0);
    }
    for (idx22 = 0; idx22 < 500; idx22++) {
      outC->_L17.messageQueue.m_Entries[idx23].m_Entry.Messages.PacketData[idx22] =
        kcg_lit_int64(0);
    }
  }
  outC->_L17.clockk.m_Value = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L17.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L17.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L17.lastSentTrackTrainMessage.Messages.PacketHeaders[idx24].nid_packet =
      kcg_lit_int64(0);
    outC->_L17.lastSentTrackTrainMessage.Messages.PacketHeaders[idx24].q_dir =
      Q_DIR_Reverse;
    outC->_L17.lastSentTrackTrainMessage.Messages.PacketHeaders[idx24].valid =
      kcg_true;
    outC->_L17.lastSentTrackTrainMessage.Messages.PacketHeaders[idx24].startAddress =
      kcg_lit_int64(0);
    outC->_L17.lastSentTrackTrainMessage.Messages.PacketHeaders[idx24].endAddress =
      kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L17.lastSentTrackTrainMessage.Messages.PacketData[idx25] =
      kcg_lit_int64(0);
  }
  for (idx28 = 0; idx28 < 8; idx28++) {
    outC->_L13.m_Entries[idx28].m_IsValid = kcg_true;
    outC->_L13.m_Entries[idx28].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.t_train_reference = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L13.m_Entries[idx28].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx26 = 0; idx26 < 30; idx26++) {
      outC->_L13.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].nid_packet =
        kcg_lit_int64(0);
      outC->_L13.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].q_dir =
        Q_DIR_Reverse;
      outC->_L13.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].valid =
        kcg_true;
      outC->_L13.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].startAddress =
        kcg_lit_int64(0);
      outC->_L13.m_Entries[idx28].m_Entry.Messages.PacketHeaders[idx26].endAddress =
        kcg_lit_int64(0);
    }
    for (idx27 = 0; idx27 < 500; idx27++) {
      outC->_L13.m_Entries[idx28].m_Entry.Messages.PacketData[idx27] =
        kcg_lit_int64(0);
    }
  }
  outC->_L14.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L14.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L14.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L14.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L14.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L14.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L14.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L14.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L14.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L14.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L14.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L14.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L14.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L14.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L14.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L14.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx29 = 0; idx29 < 32; idx29++) {
    outC->_L14.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx29].d_loc =
      kcg_lit_int64(0);
    outC->_L14.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx29].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L15.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L15.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx31 = 0; idx31 < 1; idx31++) {
    outC->_L15.m_TrainData.m_OnboardPhoneNumbers[idx31].valid = kcg_true;
    for (idx30 = 0; idx30 < 15; idx30++) {
      outC->_L15.m_TrainData.m_OnboardPhoneNumbers[idx31].telephoneNumber[idx30] =
        kcg_lit_int64(0);
    }
  }
  outC->_L15.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L15.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L15.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L15.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L15.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L15.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L15.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L15.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L15.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx32 = 0; idx32 < 4; idx32++) {
    outC->_L15.m_TrainData.m_TractionIdentities[idx32].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L15.m_TrainData.m_TractionIdentities[idx32].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx33 = 0; idx33 < 5; idx33++) {
    outC->_L15.m_TrainData.m_NationalSystemIdentities[idx33] = kcg_lit_int64(0);
  }
  outC->_L15.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L15.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L15.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L15.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L15.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L15.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L15.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L15.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L15.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L15.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L15.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L15.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L15.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L15.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L15.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  for (idx34 = 0; idx34 < 16; idx34++) {
    outC->_L16[idx34].valid = kcg_true;
    outC->_L16[idx34].count = kcg_lit_int64(0);
    outC->_L16[idx34].timestamp = kcg_lit_int64(0);
    outC->_L16[idx34].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L16[idx34].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L16[idx34].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  outC->_L10.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L10.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L10.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L10.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L10.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L10.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L10.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L10.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L10.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L10.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L10.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L10.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L10.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L10.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L10.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L10.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx35 = 0; idx35 < 32; idx35++) {
    outC->_L10.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx35].d_loc =
      kcg_lit_int64(0);
    outC->_L10.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx35].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L8.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L8.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx37 = 0; idx37 < 1; idx37++) {
    outC->_L8.session.m_TrainData.m_OnboardPhoneNumbers[idx37].valid = kcg_true;
    for (idx36 = 0; idx36 < 15; idx36++) {
      outC->_L8.session.m_TrainData.m_OnboardPhoneNumbers[idx37].telephoneNumber[idx36] =
        kcg_lit_int64(0);
    }
  }
  outC->_L8.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L8.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L8.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L8.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L8.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L8.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L8.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L8.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L8.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx38 = 0; idx38 < 4; idx38++) {
    outC->_L8.session.m_TrainData.m_TractionIdentities[idx38].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L8.session.m_TrainData.m_TractionIdentities[idx38].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx39 = 0; idx39 < 5; idx39++) {
    outC->_L8.session.m_TrainData.m_NationalSystemIdentities[idx39] =
      kcg_lit_int64(0);
  }
  outC->_L8.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L8.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L8.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L8.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L8.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L8.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L8.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L8.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L8.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L8.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L8.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L8.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L8.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L8.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L8.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L8.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L8.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L8.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L8.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L8.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L8.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L8.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L8.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L8.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L8.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L8.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L8.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L8.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L8.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L8.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L8.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx40 = 0; idx40 < 32; idx40++) {
    outC->_L8.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx40].d_loc =
      kcg_lit_int64(0);
    outC->_L8.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx40].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx41 = 0; idx41 < 16; idx41++) {
    outC->_L8.diagnostic[idx41].valid = kcg_true;
    outC->_L8.diagnostic[idx41].count = kcg_lit_int64(0);
    outC->_L8.diagnostic[idx41].timestamp = kcg_lit_int64(0);
    outC->_L8.diagnostic[idx41].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L8.diagnostic[idx41].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L8.diagnostic[idx41].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx44 = 0; idx44 < 8; idx44++) {
    outC->_L8.messageQueue.m_Entries[idx44].m_IsValid = kcg_true;
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx42 = 0; idx42 < 30; idx42++) {
      outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Messages.PacketHeaders[idx42].nid_packet =
        kcg_lit_int64(0);
      outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Messages.PacketHeaders[idx42].q_dir =
        Q_DIR_Reverse;
      outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Messages.PacketHeaders[idx42].valid =
        kcg_true;
      outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Messages.PacketHeaders[idx42].startAddress =
        kcg_lit_int64(0);
      outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Messages.PacketHeaders[idx42].endAddress =
        kcg_lit_int64(0);
    }
    for (idx43 = 0; idx43 < 500; idx43++) {
      outC->_L8.messageQueue.m_Entries[idx44].m_Entry.Messages.PacketData[idx43] =
        kcg_lit_int64(0);
    }
  }
  outC->_L8.clockk.m_Value = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.receivedSystemTime = kcg_lit_int64(
      0);
  outC->_L8.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L8.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx45 = 0; idx45 < 30; idx45++) {
    outC->_L8.lastSentTrackTrainMessage.Messages.PacketHeaders[idx45].nid_packet =
      kcg_lit_int64(0);
    outC->_L8.lastSentTrackTrainMessage.Messages.PacketHeaders[idx45].q_dir =
      Q_DIR_Reverse;
    outC->_L8.lastSentTrackTrainMessage.Messages.PacketHeaders[idx45].valid =
      kcg_true;
    outC->_L8.lastSentTrackTrainMessage.Messages.PacketHeaders[idx45].startAddress =
      kcg_lit_int64(0);
    outC->_L8.lastSentTrackTrainMessage.Messages.PacketHeaders[idx45].endAddress =
      kcg_lit_int64(0);
  }
  for (idx46 = 0; idx46 < 500; idx46++) {
    outC->_L8.lastSentTrackTrainMessage.Messages.PacketData[idx46] =
      kcg_lit_int64(0);
  }
  outC->_L6.m_Value = kcg_lit_int64(0);
  for (idx49 = 0; idx49 < 8; idx49++) {
    outC->_L7.m_Entries[idx49].m_IsValid = kcg_true;
    outC->_L7.m_Entries[idx49].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.t_train_reference = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L7.m_Entries[idx49].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx47 = 0; idx47 < 30; idx47++) {
      outC->_L7.m_Entries[idx49].m_Entry.Messages.PacketHeaders[idx47].nid_packet =
        kcg_lit_int64(0);
      outC->_L7.m_Entries[idx49].m_Entry.Messages.PacketHeaders[idx47].q_dir =
        Q_DIR_Reverse;
      outC->_L7.m_Entries[idx49].m_Entry.Messages.PacketHeaders[idx47].valid =
        kcg_true;
      outC->_L7.m_Entries[idx49].m_Entry.Messages.PacketHeaders[idx47].startAddress =
        kcg_lit_int64(0);
      outC->_L7.m_Entries[idx49].m_Entry.Messages.PacketHeaders[idx47].endAddress =
        kcg_lit_int64(0);
    }
    for (idx48 = 0; idx48 < 500; idx48++) {
      outC->_L7.m_Entries[idx49].m_Entry.Messages.PacketData[idx48] =
        kcg_lit_int64(0);
    }
  }
  outC->_L5.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L5.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L5.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L5.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L5.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L5.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L5.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L5.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L5.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L5.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L5.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L5.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L5.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L5.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L5.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L5.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx50 = 0; idx50 < 32; idx50++) {
    outC->_L5.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx50].d_loc =
      kcg_lit_int64(0);
    outC->_L5.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx50].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L1 = kcg_true;
  outC->_L2.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L2.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx52 = 0; idx52 < 1; idx52++) {
    outC->_L2.m_TrainData.m_OnboardPhoneNumbers[idx52].valid = kcg_true;
    for (idx51 = 0; idx51 < 15; idx51++) {
      outC->_L2.m_TrainData.m_OnboardPhoneNumbers[idx52].telephoneNumber[idx51] =
        kcg_lit_int64(0);
    }
  }
  outC->_L2.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L2.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L2.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L2.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L2.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx53 = 0; idx53 < 4; idx53++) {
    outC->_L2.m_TrainData.m_TractionIdentities[idx53].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2.m_TrainData.m_TractionIdentities[idx53].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx54 = 0; idx54 < 5; idx54++) {
    outC->_L2.m_TrainData.m_NationalSystemIdentities[idx54] = kcg_lit_int64(0);
  }
  outC->_L2.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L2.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L2.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L2.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L2.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L2.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L2.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L2.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L2.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L2.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L2.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L2.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L2.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L2.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->v4_times_1_int64 = kcg_lit_int64(0);
  outC->n_times_1_int64 = kcg_lit_int64(0);
  outC->c_times_1_int64 = kcg_true;
  outC->o_times_1_int64 = kcg_true;
  outC->v3_times_1_int64 = kcg_lit_int64(0);
  outC->init = kcg_true;
  outC->outDataBus.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx56 = 0; idx56 < 1; idx56++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx56].valid =
      kcg_true;
    for (idx55 = 0; idx55 < 15; idx55++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx56].telephoneNumber[idx55] =
        kcg_lit_int64(0);
    }
  }
  outC->outDataBus.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outDataBus.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outDataBus.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outDataBus.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outDataBus.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outDataBus.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx57 = 0; idx57 < 4; idx57++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx57].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx57].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx58 = 0; idx58 < 5; idx58++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[idx58] =
      kcg_lit_int64(0);
  }
  outC->outDataBus.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outDataBus.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outDataBus.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outDataBus.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outDataBus.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outDataBus.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outDataBus.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->outDataBus.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->outDataBus.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outDataBus.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->outDataBus.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->outDataBus.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->outDataBus.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->outDataBus.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->outDataBus.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->outDataBus.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->outDataBus.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->outDataBus.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx59 = 0; idx59 < 32; idx59++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx59].d_loc =
      kcg_lit_int64(0);
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx59].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx60 = 0; idx60 < 16; idx60++) {
    outC->outDataBus.diagnostic[idx60].valid = kcg_true;
    outC->outDataBus.diagnostic[idx60].count = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx60].timestamp = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx60].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx60].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx60].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx63 = 0; idx63 < 8; idx63++) {
    outC->outDataBus.messageQueue.m_Entries[idx63].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx61 = 0; idx61 < 30; idx61++) {
      outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].nid_packet =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].startAddress =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].endAddress =
        kcg_lit_int64(0);
    }
    for (idx62 = 0; idx62 < 500; idx62++) {
      outC->outDataBus.messageQueue.m_Entries[idx63].m_Entry.Messages.PacketData[idx62] =
        kcg_lit_int64(0);
    }
  }
  outC->outDataBus.clockk.m_Value = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(
      0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(
      0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx64 = 0; idx64 < 30; idx64++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx64].nid_packet =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx64].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx64].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx64].startAddress =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx64].endAddress =
      kcg_lit_int64(0);
  }
  for (idx65 = 0; idx65 < 500; idx65++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[idx65] =
      kcg_lit_int64(0);
  }
  /* _L18=(RBC_Time_Pkg::Clock__Limit#1)/ */
  Clock__Limit_init_RBC_Time_Pkg(&outC->Context_Clock__Limit_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DataBusFactory_reset_RBC_DataBus_Pkg(
  outC_DataBusFactory_RBC_DataBus_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L18=(RBC_Time_Pkg::Clock__Limit#1)/ */
  Clock__Limit_reset_RBC_Time_Pkg(&outC->Context_Clock__Limit_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_DataBusFactory_RBC_DataBus_Pkg(
  SV_DataBusFactory_RBC_DataBus_Pkg *SV,
  outC_DataBusFactory_RBC_DataBus_Pkg *outC)
{
  SV->Context_v3_times_1 = outC->v3_times_1_int64;
  SV->Context_init = outC->init;
}

void kcg_load_SV_DataBusFactory_RBC_DataBus_Pkg(
  outC_DataBusFactory_RBC_DataBus_Pkg *outC,
  SV_DataBusFactory_RBC_DataBus_Pkg *SV)
{
  outC->v3_times_1_int64 = SV->Context_v3_times_1;
  outC->init = SV->Context_init;
}

/*
  Expanded instances for: RBC_DataBus_Pkg::DataBusFactory/
  @1: (times#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DataBusFactory_RBC_DataBus_Pkg.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

