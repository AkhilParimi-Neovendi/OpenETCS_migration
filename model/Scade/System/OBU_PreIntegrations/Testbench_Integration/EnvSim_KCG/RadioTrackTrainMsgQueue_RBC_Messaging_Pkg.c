/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMsgQueue_RBC_Messaging_Pkg.h"

/* RBC_Messaging_Pkg::RadioTrackTrainMsgQueue/ */
void RadioTrackTrainMsgQueue_RBC_Messaging_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  outC_RadioTrackTrainMsgQueue_RBC_Messaging_Pkg *outC)
{
  /* outDataBus/ */
  static RBC_Data_T_RBC_DataBus_Pkg outDataBus_partial;
  /* outRadioTrackTrainMessage/ */
  static CompressedRadioMessage_TM outRadioTrackTrainMessage_partial;
  /* outDataBus/ */
  static RBC_Data_T_RBC_DataBus_Pkg _1_outDataBus_partial;
  /* outRadioTrackTrainMessage/ */
  static CompressedRadioMessage_TM _2_outRadioTrackTrainMessage_partial;

  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L1, inDataBus);
  kcg_copy_RadioTrackTrainMessageQueue_T(&outC->_L6, &outC->_L1.messageQueue);
  /* _L5=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#2)/ */
  RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg(
    &outC->_L6,
    &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_2);
  outC->_L5 =
    outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_2.outRemainingCapacity;
  outC->remainingCapacity = outC->_L5;
  outC->IfBlock1_clock = outC->remainingCapacity <
    RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L42_then_IfBlock1, inDataBus);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->_L43_then_IfBlock1,
      &outC->_L42_then_IfBlock1.messageQueue);
    /* IfBlock1:then:_L34=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take#2)/ */
    RadioTrackTrainMessageQueue__Take_RBC_Collections_Pkg(
      &outC->_L43_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__Take_2);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->_L34_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__Take_2.outRadioTrackTrainMessageQueue);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->_L35_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__Take_2.outRadioTrackTrainMessageQueueEntry);
    /* IfBlock1:then:_L36=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry#2)/ */
    RadioTrackTrainMessageQueueEntry__GetEntry_RBC_Collections_Pkg(
      &outC->_L35_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueueEntry__GetEntry_2);
    kcg_copy_CompressedRadioMessage_TM(
      &outC->_L36_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueueEntry__GetEntry_2.outRadioTrackTrainMessage);
    /* IfBlock1:then:_L37=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#2)/ */
    RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &outC->_L36_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessage__GetHeader_2);
    kcg_copy_Radio_TrackTrain_Header_T_TM(
      &outC->_L37_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessage__GetHeader_2.outRadioTrackTrainHeader);
    kcg_copy_Clock_T(&outC->_L41_then_IfBlock1, &outC->_L42_then_IfBlock1.clockk);
    /* IfBlock1:then:_L39=(RBC_Time_Pkg::Clock__GetSeconds#2)/ */
    Clock__GetSeconds_RBC_Time_Pkg(
      &outC->_L41_then_IfBlock1,
      &outC->Context_Clock__GetSeconds_2);
    outC->_L39_then_IfBlock1 = outC->Context_Clock__GetSeconds_2.outValue;
    /* IfBlock1:then:_L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN#2)/ */
    RadioTrackTrainHeader__Set_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &outC->_L37_then_IfBlock1,
      outC->_L39_then_IfBlock1,
      &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_2);
    kcg_copy_Radio_TrackTrain_Header_T_TM(
      &outC->_L33_then_IfBlock1,
      &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_2.outRadioTrackTrainHeader);
    /* IfBlock1:then:_L32=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader#2)/ */
    RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
      &outC->_L36_then_IfBlock1,
      &outC->_L33_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessage__SetHeader_2);
    kcg_copy_CompressedRadioMessage_TM(
      &outC->_L32_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessage__SetHeader_2.outRadioTrackTrainMessage);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L45_then_IfBlock1, inDataBus);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
      &outC->_L44_then_IfBlock1,
      &outC->_L45_then_IfBlock1);
    if (kcg_true) {
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L44_then_IfBlock1.messageQueue,
        &outC->_L34_then_IfBlock1);
    }
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
      &outC->_L49_then_IfBlock1,
      &outC->_L44_then_IfBlock1);
    if (kcg_true) {
      kcg_copy_CompressedRadioMessage_TM(
        &outC->_L49_then_IfBlock1.lastSentTrackTrainMessage,
        &outC->_L32_then_IfBlock1);
    }
    kcg_copy_CompressedRadioMessage_TM(
      &outRadioTrackTrainMessage_partial,
      &outC->_L32_then_IfBlock1);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
      &outDataBus_partial,
      &outC->_L49_then_IfBlock1);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outDataBus_partial);
    kcg_copy_CompressedRadioMessage_TM(
      &outC->outRadioTrackTrainMessage,
      &outRadioTrackTrainMessage_partial);
  }
  else {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L8_else_IfBlock1, inDataBus);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L6_else_IfBlock1, inDataBus);
    kcg_copy_RadioTrackTrainMessageQueue_T(
      &outC->_L5_else_IfBlock1,
      &outC->_L6_else_IfBlock1.messageQueue);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
      &outC->_L7_else_IfBlock1,
      &outC->_L8_else_IfBlock1);
    if (kcg_true) {
      kcg_copy_RadioTrackTrainMessageQueue_T(
        &outC->_L7_else_IfBlock1.messageQueue,
        &outC->_L5_else_IfBlock1);
    }
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
      &_1_outDataBus_partial,
      &outC->_L7_else_IfBlock1);
    /* IfBlock1:else:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateDefaultMsg_BSL2#2)/ */
    RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
      &outC->Context_RadioTrackTrainFactory__CreateDefaultMsg_BSL2_2);
    kcg_copy_CompressedRadioMessage_TM(
      &outC->_L3_else_IfBlock1,
      &outC->Context_RadioTrackTrainFactory__CreateDefaultMsg_BSL2_2.outRadioTrackTrainMessage);
    kcg_copy_CompressedRadioMessage_TM(
      &_2_outRadioTrackTrainMessage_partial,
      &outC->_L3_else_IfBlock1);
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &_1_outDataBus_partial);
    kcg_copy_CompressedRadioMessage_TM(
      &outC->outRadioTrackTrainMessage,
      &_2_outRadioTrackTrainMessage_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMsgQueue_init_RBC_Messaging_Pkg(
  outC_RadioTrackTrainMsgQueue_RBC_Messaging_Pkg *outC)
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
  static kcg_size idx66;
  static kcg_size idx67;
  static kcg_size idx68;
  static kcg_size idx69;
  static kcg_size idx70;
  static kcg_size idx71;
  static kcg_size idx72;
  static kcg_size idx73;
  static kcg_size idx74;
  static kcg_size idx75;
  static kcg_size idx76;
  static kcg_size idx77;
  static kcg_size idx78;
  static kcg_size idx79;
  static kcg_size idx80;
  static kcg_size idx81;
  static kcg_size idx82;
  static kcg_size idx83;
  static kcg_size idx84;
  static kcg_size idx85;
  static kcg_size idx86;
  static kcg_size idx87;
  static kcg_size idx88;
  static kcg_size idx89;
  static kcg_size idx90;
  static kcg_size idx91;
  static kcg_size idx92;
  static kcg_size idx93;
  static kcg_size idx94;
  static kcg_size idx95;
  static kcg_size idx96;
  static kcg_size idx97;
  static kcg_size idx98;
  static kcg_size idx99;
  static kcg_size idx100;
  static kcg_size idx101;
  static kcg_size idx102;
  static kcg_size idx103;
  static kcg_size idx104;
  static kcg_size idx105;
  static kcg_size idx106;
  static kcg_size idx107;
  static kcg_size idx108;
  static kcg_size idx109;
  static kcg_size idx110;
  static kcg_size idx111;
  static kcg_size idx112;
  static kcg_size idx113;
  static kcg_size idx114;
  static kcg_size idx115;
  static kcg_size idx116;
  static kcg_size idx117;
  static kcg_size idx118;
  static kcg_size idx119;
  static kcg_size idx120;

  for (idx2 = 0; idx2 < 8; idx2++) {
    outC->_L6.m_Entries[idx2].m_IsValid = kcg_true;
    outC->_L6.m_Entries[idx2].m_Entry.Header.radioDevice = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.receivedSystemTime = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.nid_message = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.t_train = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.t_train_reference = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.q_scale = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
    outC->_L6.m_Entries[idx2].m_Entry.Header.m_version = kcg_lit_int64(0);
    for (idx = 0; idx < 30; idx++) {
      outC->_L6.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].nid_packet =
        kcg_lit_int64(0);
      outC->_L6.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].q_dir =
        Q_DIR_Reverse;
      outC->_L6.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].valid = kcg_true;
      outC->_L6.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].startAddress =
        kcg_lit_int64(0);
      outC->_L6.m_Entries[idx2].m_Entry.Messages.PacketHeaders[idx].endAddress =
        kcg_lit_int64(0);
    }
    for (idx1 = 0; idx1 < 500; idx1++) {
      outC->_L6.m_Entries[idx2].m_Entry.Messages.PacketData[idx1] = kcg_lit_int64(0);
    }
  }
  outC->_L5 = kcg_lit_int64(0);
  outC->_L1.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L1.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 1; idx4++) {
    outC->_L1.session.m_TrainData.m_OnboardPhoneNumbers[idx4].valid = kcg_true;
    for (idx3 = 0; idx3 < 15; idx3++) {
      outC->_L1.session.m_TrainData.m_OnboardPhoneNumbers[idx4].telephoneNumber[idx3] =
        kcg_lit_int64(0);
    }
  }
  outC->_L1.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L1.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L1.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L1.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L1.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L1.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 4; idx5++) {
    outC->_L1.session.m_TrainData.m_TractionIdentities[idx5].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.session.m_TrainData.m_TractionIdentities[idx5].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L1.session.m_TrainData.m_NationalSystemIdentities[idx6] =
      kcg_lit_int64(0);
  }
  outC->_L1.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L1.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L1.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L1.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L1.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L1.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L1.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L1.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L1.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L1.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L1.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L1.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L1.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L1.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L1.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L1.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L1.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L1.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L1.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L1.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L1.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L1.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L1.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L1.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L1.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L1.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L1.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L1.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L1.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->_L1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx7].d_loc =
      kcg_lit_int64(0);
    outC->_L1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx7].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx8 = 0; idx8 < 16; idx8++) {
    outC->_L1.diagnostic[idx8].valid = kcg_true;
    outC->_L1.diagnostic[idx8].count = kcg_lit_int64(0);
    outC->_L1.diagnostic[idx8].timestamp = kcg_lit_int64(0);
    outC->_L1.diagnostic[idx8].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L1.diagnostic[idx8].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L1.diagnostic[idx8].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx11 = 0; idx11 < 8; idx11++) {
    outC->_L1.messageQueue.m_Entries[idx11].m_IsValid = kcg_true;
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx9 = 0; idx9 < 30; idx9++) {
      outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Messages.PacketHeaders[idx9].nid_packet =
        kcg_lit_int64(0);
      outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Messages.PacketHeaders[idx9].q_dir =
        Q_DIR_Reverse;
      outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Messages.PacketHeaders[idx9].valid =
        kcg_true;
      outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Messages.PacketHeaders[idx9].startAddress =
        kcg_lit_int64(0);
      outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Messages.PacketHeaders[idx9].endAddress =
        kcg_lit_int64(0);
    }
    for (idx10 = 0; idx10 < 500; idx10++) {
      outC->_L1.messageQueue.m_Entries[idx11].m_Entry.Messages.PacketData[idx10] =
        kcg_lit_int64(0);
    }
  }
  outC->_L1.clockk.m_Value = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.receivedSystemTime = kcg_lit_int64(
      0);
  outC->_L1.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx12].nid_packet =
      kcg_lit_int64(0);
    outC->_L1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx12].q_dir =
      Q_DIR_Reverse;
    outC->_L1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx12].valid =
      kcg_true;
    outC->_L1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx12].startAddress =
      kcg_lit_int64(0);
    outC->_L1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx12].endAddress =
      kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L1.lastSentTrackTrainMessage.Messages.PacketData[idx13] =
      kcg_lit_int64(0);
  }
  outC->remainingCapacity = kcg_lit_int64(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_else_IfBlock1.Header.radioDevice = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.nid_message = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.t_train = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.m_ack = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.nid_em = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.q_scale = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.d_sr = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.d_ref = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.q_dir = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.Header.m_version = kcg_lit_int64(0);
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L3_else_IfBlock1.Messages.PacketHeaders[idx14].nid_packet =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1.Messages.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L3_else_IfBlock1.Messages.PacketHeaders[idx14].valid = kcg_true;
    outC->_L3_else_IfBlock1.Messages.PacketHeaders[idx14].startAddress =
      kcg_lit_int64(0);
    outC->_L3_else_IfBlock1.Messages.PacketHeaders[idx14].endAddress =
      kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L3_else_IfBlock1.Messages.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->_L6_else_IfBlock1.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 1; idx17++) {
    outC->_L6_else_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx17].valid =
      kcg_true;
    for (idx16 = 0; idx16 < 15; idx16++) {
      outC->_L6_else_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx17].telephoneNumber[idx16] =
        kcg_lit_int64(0);
    }
  }
  outC->_L6_else_IfBlock1.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L6_else_IfBlock1.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6_else_IfBlock1.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6_else_IfBlock1.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L6_else_IfBlock1.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L6_else_IfBlock1.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 4; idx18++) {
    outC->_L6_else_IfBlock1.session.m_TrainData.m_TractionIdentities[idx18].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6_else_IfBlock1.session.m_TrainData.m_TractionIdentities[idx18].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->_L6_else_IfBlock1.session.m_TrainData.m_NationalSystemIdentities[idx19] =
      kcg_lit_int64(0);
  }
  outC->_L6_else_IfBlock1.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6_else_IfBlock1.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6_else_IfBlock1.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L6_else_IfBlock1.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L6_else_IfBlock1.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6_else_IfBlock1.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L6_else_IfBlock1.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L6_else_IfBlock1.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_else_IfBlock1.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L6_else_IfBlock1.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L6_else_IfBlock1.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6_else_IfBlock1.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L6_else_IfBlock1.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 32; idx20++) {
    outC->_L6_else_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx20].d_loc =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx20].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx21 = 0; idx21 < 16; idx21++) {
    outC->_L6_else_IfBlock1.diagnostic[idx21].valid = kcg_true;
    outC->_L6_else_IfBlock1.diagnostic[idx21].count = kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.diagnostic[idx21].timestamp = kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.diagnostic[idx21].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L6_else_IfBlock1.diagnostic[idx21].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L6_else_IfBlock1.diagnostic[idx21].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx24 = 0; idx24 < 8; idx24++) {
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_IsValid = kcg_true;
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx22 = 0; idx22 < 30; idx22++) {
      outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketHeaders[idx22].nid_packet =
        kcg_lit_int64(0);
      outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketHeaders[idx22].q_dir =
        Q_DIR_Reverse;
      outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketHeaders[idx22].valid =
        kcg_true;
      outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketHeaders[idx22].startAddress =
        kcg_lit_int64(0);
      outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketHeaders[idx22].endAddress =
        kcg_lit_int64(0);
    }
    for (idx23 = 0; idx23 < 500; idx23++) {
      outC->_L6_else_IfBlock1.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketData[idx23] =
        kcg_lit_int64(0);
    }
  }
  outC->_L6_else_IfBlock1.clockk.m_Value = kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(
      0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx25].nid_packet =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx25].q_dir =
      Q_DIR_Reverse;
    outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx25].valid =
      kcg_true;
    outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx25].startAddress =
      kcg_lit_int64(0);
    outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx25].endAddress =
      kcg_lit_int64(0);
  }
  for (idx26 = 0; idx26 < 500; idx26++) {
    outC->_L6_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketData[idx26] =
      kcg_lit_int64(0);
  }
  for (idx29 = 0; idx29 < 8; idx29++) {
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_IsValid = kcg_true;
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx27 = 0; idx27 < 30; idx27++) {
      outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Messages.PacketHeaders[idx27].nid_packet =
        kcg_lit_int64(0);
      outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Messages.PacketHeaders[idx27].q_dir =
        Q_DIR_Reverse;
      outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Messages.PacketHeaders[idx27].valid =
        kcg_true;
      outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Messages.PacketHeaders[idx27].startAddress =
        kcg_lit_int64(0);
      outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Messages.PacketHeaders[idx27].endAddress =
        kcg_lit_int64(0);
    }
    for (idx28 = 0; idx28 < 500; idx28++) {
      outC->_L5_else_IfBlock1.m_Entries[idx29].m_Entry.Messages.PacketData[idx28] =
        kcg_lit_int64(0);
    }
  }
  outC->_L8_else_IfBlock1.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx31 = 0; idx31 < 1; idx31++) {
    outC->_L8_else_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx31].valid =
      kcg_true;
    for (idx30 = 0; idx30 < 15; idx30++) {
      outC->_L8_else_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx31].telephoneNumber[idx30] =
        kcg_lit_int64(0);
    }
  }
  outC->_L8_else_IfBlock1.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L8_else_IfBlock1.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L8_else_IfBlock1.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L8_else_IfBlock1.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L8_else_IfBlock1.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L8_else_IfBlock1.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx32 = 0; idx32 < 4; idx32++) {
    outC->_L8_else_IfBlock1.session.m_TrainData.m_TractionIdentities[idx32].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L8_else_IfBlock1.session.m_TrainData.m_TractionIdentities[idx32].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx33 = 0; idx33 < 5; idx33++) {
    outC->_L8_else_IfBlock1.session.m_TrainData.m_NationalSystemIdentities[idx33] =
      kcg_lit_int64(0);
  }
  outC->_L8_else_IfBlock1.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8_else_IfBlock1.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L8_else_IfBlock1.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L8_else_IfBlock1.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L8_else_IfBlock1.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L8_else_IfBlock1.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L8_else_IfBlock1.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L8_else_IfBlock1.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_else_IfBlock1.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L8_else_IfBlock1.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L8_else_IfBlock1.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8_else_IfBlock1.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L8_else_IfBlock1.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx34 = 0; idx34 < 32; idx34++) {
    outC->_L8_else_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx34].d_loc =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx34].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx35 = 0; idx35 < 16; idx35++) {
    outC->_L8_else_IfBlock1.diagnostic[idx35].valid = kcg_true;
    outC->_L8_else_IfBlock1.diagnostic[idx35].count = kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.diagnostic[idx35].timestamp = kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.diagnostic[idx35].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L8_else_IfBlock1.diagnostic[idx35].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L8_else_IfBlock1.diagnostic[idx35].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx38 = 0; idx38 < 8; idx38++) {
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_IsValid = kcg_true;
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx36 = 0; idx36 < 30; idx36++) {
      outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Messages.PacketHeaders[idx36].nid_packet =
        kcg_lit_int64(0);
      outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Messages.PacketHeaders[idx36].q_dir =
        Q_DIR_Reverse;
      outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Messages.PacketHeaders[idx36].valid =
        kcg_true;
      outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Messages.PacketHeaders[idx36].startAddress =
        kcg_lit_int64(0);
      outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Messages.PacketHeaders[idx36].endAddress =
        kcg_lit_int64(0);
    }
    for (idx37 = 0; idx37 < 500; idx37++) {
      outC->_L8_else_IfBlock1.messageQueue.m_Entries[idx38].m_Entry.Messages.PacketData[idx37] =
        kcg_lit_int64(0);
    }
  }
  outC->_L8_else_IfBlock1.clockk.m_Value = kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(
      0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx39 = 0; idx39 < 30; idx39++) {
    outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx39].nid_packet =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx39].q_dir =
      Q_DIR_Reverse;
    outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx39].valid =
      kcg_true;
    outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx39].startAddress =
      kcg_lit_int64(0);
    outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx39].endAddress =
      kcg_lit_int64(0);
  }
  for (idx40 = 0; idx40 < 500; idx40++) {
    outC->_L8_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketData[idx40] =
      kcg_lit_int64(0);
  }
  outC->_L7_else_IfBlock1.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx42 = 0; idx42 < 1; idx42++) {
    outC->_L7_else_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx42].valid =
      kcg_true;
    for (idx41 = 0; idx41 < 15; idx41++) {
      outC->_L7_else_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx42].telephoneNumber[idx41] =
        kcg_lit_int64(0);
    }
  }
  outC->_L7_else_IfBlock1.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L7_else_IfBlock1.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L7_else_IfBlock1.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L7_else_IfBlock1.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L7_else_IfBlock1.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L7_else_IfBlock1.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx43 = 0; idx43 < 4; idx43++) {
    outC->_L7_else_IfBlock1.session.m_TrainData.m_TractionIdentities[idx43].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L7_else_IfBlock1.session.m_TrainData.m_TractionIdentities[idx43].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx44 = 0; idx44 < 5; idx44++) {
    outC->_L7_else_IfBlock1.session.m_TrainData.m_NationalSystemIdentities[idx44] =
      kcg_lit_int64(0);
  }
  outC->_L7_else_IfBlock1.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7_else_IfBlock1.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L7_else_IfBlock1.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L7_else_IfBlock1.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L7_else_IfBlock1.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L7_else_IfBlock1.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L7_else_IfBlock1.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L7_else_IfBlock1.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_else_IfBlock1.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L7_else_IfBlock1.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L7_else_IfBlock1.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7_else_IfBlock1.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L7_else_IfBlock1.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx45 = 0; idx45 < 32; idx45++) {
    outC->_L7_else_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx45].d_loc =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx45].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx46 = 0; idx46 < 16; idx46++) {
    outC->_L7_else_IfBlock1.diagnostic[idx46].valid = kcg_true;
    outC->_L7_else_IfBlock1.diagnostic[idx46].count = kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.diagnostic[idx46].timestamp = kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.diagnostic[idx46].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L7_else_IfBlock1.diagnostic[idx46].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L7_else_IfBlock1.diagnostic[idx46].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx49 = 0; idx49 < 8; idx49++) {
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_IsValid = kcg_true;
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx47 = 0; idx47 < 30; idx47++) {
      outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Messages.PacketHeaders[idx47].nid_packet =
        kcg_lit_int64(0);
      outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Messages.PacketHeaders[idx47].q_dir =
        Q_DIR_Reverse;
      outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Messages.PacketHeaders[idx47].valid =
        kcg_true;
      outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Messages.PacketHeaders[idx47].startAddress =
        kcg_lit_int64(0);
      outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Messages.PacketHeaders[idx47].endAddress =
        kcg_lit_int64(0);
    }
    for (idx48 = 0; idx48 < 500; idx48++) {
      outC->_L7_else_IfBlock1.messageQueue.m_Entries[idx49].m_Entry.Messages.PacketData[idx48] =
        kcg_lit_int64(0);
    }
  }
  outC->_L7_else_IfBlock1.clockk.m_Value = kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(
      0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx50 = 0; idx50 < 30; idx50++) {
    outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx50].nid_packet =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx50].q_dir =
      Q_DIR_Reverse;
    outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx50].valid =
      kcg_true;
    outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx50].startAddress =
      kcg_lit_int64(0);
    outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx50].endAddress =
      kcg_lit_int64(0);
  }
  for (idx51 = 0; idx51 < 500; idx51++) {
    outC->_L7_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketData[idx51] =
      kcg_lit_int64(0);
  }
  outC->_L39_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.radioDevice = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.receivedSystemTime = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.nid_message = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.t_train = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.m_ack = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.t_train_reference = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.nid_em = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.q_scale = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.d_sr = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.t_sh_rqst = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.d_ref = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.q_dir = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.d_emergencystop = kcg_lit_int64(0);
  outC->_L37_then_IfBlock1.m_version = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.radioDevice = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.nid_message = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.t_train = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.m_ack = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.nid_em = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.q_scale = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.d_sr = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.d_ref = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.q_dir = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1.Header.m_version = kcg_lit_int64(0);
  for (idx52 = 0; idx52 < 30; idx52++) {
    outC->_L36_then_IfBlock1.Messages.PacketHeaders[idx52].nid_packet =
      kcg_lit_int64(0);
    outC->_L36_then_IfBlock1.Messages.PacketHeaders[idx52].q_dir = Q_DIR_Reverse;
    outC->_L36_then_IfBlock1.Messages.PacketHeaders[idx52].valid = kcg_true;
    outC->_L36_then_IfBlock1.Messages.PacketHeaders[idx52].startAddress =
      kcg_lit_int64(0);
    outC->_L36_then_IfBlock1.Messages.PacketHeaders[idx52].endAddress =
      kcg_lit_int64(0);
  }
  for (idx53 = 0; idx53 < 500; idx53++) {
    outC->_L36_then_IfBlock1.Messages.PacketData[idx53] = kcg_lit_int64(0);
  }
  for (idx56 = 0; idx56 < 8; idx56++) {
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_IsValid = kcg_true;
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx54 = 0; idx54 < 30; idx54++) {
      outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].nid_packet =
        kcg_lit_int64(0);
      outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].q_dir =
        Q_DIR_Reverse;
      outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].valid =
        kcg_true;
      outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].startAddress =
        kcg_lit_int64(0);
      outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketHeaders[idx54].endAddress =
        kcg_lit_int64(0);
    }
    for (idx55 = 0; idx55 < 500; idx55++) {
      outC->_L34_then_IfBlock1.m_Entries[idx56].m_Entry.Messages.PacketData[idx55] =
        kcg_lit_int64(0);
    }
  }
  outC->_L35_then_IfBlock1.m_IsValid = kcg_true;
  outC->_L35_then_IfBlock1.m_Entry.Header.radioDevice = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.nid_message = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.t_train = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.m_ack = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.nid_em = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.q_scale = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.d_sr = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.d_ref = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.q_dir = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L35_then_IfBlock1.m_Entry.Header.m_version = kcg_lit_int64(0);
  for (idx57 = 0; idx57 < 30; idx57++) {
    outC->_L35_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx57].nid_packet =
      kcg_lit_int64(0);
    outC->_L35_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx57].q_dir =
      Q_DIR_Reverse;
    outC->_L35_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx57].valid = kcg_true;
    outC->_L35_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx57].startAddress =
      kcg_lit_int64(0);
    outC->_L35_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx57].endAddress =
      kcg_lit_int64(0);
  }
  for (idx58 = 0; idx58 < 500; idx58++) {
    outC->_L35_then_IfBlock1.m_Entry.Messages.PacketData[idx58] = kcg_lit_int64(0);
  }
  outC->_L33_then_IfBlock1.radioDevice = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.receivedSystemTime = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.nid_message = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.t_train = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.m_ack = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.nid_lrbg = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.t_train_reference = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.nid_em = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.q_scale = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.d_sr = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.t_sh_rqst = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.d_ref = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.q_dir = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.d_emergencystop = kcg_lit_int64(0);
  outC->_L33_then_IfBlock1.m_version = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.radioDevice = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.nid_message = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.t_train = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.m_ack = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.nid_em = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.q_scale = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.d_sr = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.d_ref = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.q_dir = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L32_then_IfBlock1.Header.m_version = kcg_lit_int64(0);
  for (idx59 = 0; idx59 < 30; idx59++) {
    outC->_L32_then_IfBlock1.Messages.PacketHeaders[idx59].nid_packet =
      kcg_lit_int64(0);
    outC->_L32_then_IfBlock1.Messages.PacketHeaders[idx59].q_dir = Q_DIR_Reverse;
    outC->_L32_then_IfBlock1.Messages.PacketHeaders[idx59].valid = kcg_true;
    outC->_L32_then_IfBlock1.Messages.PacketHeaders[idx59].startAddress =
      kcg_lit_int64(0);
    outC->_L32_then_IfBlock1.Messages.PacketHeaders[idx59].endAddress =
      kcg_lit_int64(0);
  }
  for (idx60 = 0; idx60 < 500; idx60++) {
    outC->_L32_then_IfBlock1.Messages.PacketData[idx60] = kcg_lit_int64(0);
  }
  outC->_L41_then_IfBlock1.m_Value = kcg_lit_int64(0);
  for (idx63 = 0; idx63 < 8; idx63++) {
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_IsValid = kcg_true;
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx61 = 0; idx61 < 30; idx61++) {
      outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].nid_packet =
        kcg_lit_int64(0);
      outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].q_dir =
        Q_DIR_Reverse;
      outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].valid =
        kcg_true;
      outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].startAddress =
        kcg_lit_int64(0);
      outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Messages.PacketHeaders[idx61].endAddress =
        kcg_lit_int64(0);
    }
    for (idx62 = 0; idx62 < 500; idx62++) {
      outC->_L43_then_IfBlock1.m_Entries[idx63].m_Entry.Messages.PacketData[idx62] =
        kcg_lit_int64(0);
    }
  }
  outC->_L42_then_IfBlock1.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx65 = 0; idx65 < 1; idx65++) {
    outC->_L42_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx65].valid =
      kcg_true;
    for (idx64 = 0; idx64 < 15; idx64++) {
      outC->_L42_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx65].telephoneNumber[idx64] =
        kcg_lit_int64(0);
    }
  }
  outC->_L42_then_IfBlock1.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L42_then_IfBlock1.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L42_then_IfBlock1.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L42_then_IfBlock1.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L42_then_IfBlock1.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L42_then_IfBlock1.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx66 = 0; idx66 < 4; idx66++) {
    outC->_L42_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx66].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L42_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx66].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx67 = 0; idx67 < 5; idx67++) {
    outC->_L42_then_IfBlock1.session.m_TrainData.m_NationalSystemIdentities[idx67] =
      kcg_lit_int64(0);
  }
  outC->_L42_then_IfBlock1.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L42_then_IfBlock1.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L42_then_IfBlock1.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L42_then_IfBlock1.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L42_then_IfBlock1.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L42_then_IfBlock1.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L42_then_IfBlock1.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L42_then_IfBlock1.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L42_then_IfBlock1.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L42_then_IfBlock1.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L42_then_IfBlock1.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L42_then_IfBlock1.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L42_then_IfBlock1.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx68 = 0; idx68 < 32; idx68++) {
    outC->_L42_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx68].d_loc =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx68].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx69 = 0; idx69 < 16; idx69++) {
    outC->_L42_then_IfBlock1.diagnostic[idx69].valid = kcg_true;
    outC->_L42_then_IfBlock1.diagnostic[idx69].count = kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.diagnostic[idx69].timestamp = kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.diagnostic[idx69].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L42_then_IfBlock1.diagnostic[idx69].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L42_then_IfBlock1.diagnostic[idx69].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx72 = 0; idx72 < 8; idx72++) {
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_IsValid = kcg_true;
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx70 = 0; idx70 < 30; idx70++) {
      outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketHeaders[idx70].nid_packet =
        kcg_lit_int64(0);
      outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketHeaders[idx70].q_dir =
        Q_DIR_Reverse;
      outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketHeaders[idx70].valid =
        kcg_true;
      outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketHeaders[idx70].startAddress =
        kcg_lit_int64(0);
      outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketHeaders[idx70].endAddress =
        kcg_lit_int64(0);
    }
    for (idx71 = 0; idx71 < 500; idx71++) {
      outC->_L42_then_IfBlock1.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketData[idx71] =
        kcg_lit_int64(0);
    }
  }
  outC->_L42_then_IfBlock1.clockk.m_Value = kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx73 = 0; idx73 < 30; idx73++) {
    outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx73].nid_packet =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx73].q_dir =
      Q_DIR_Reverse;
    outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx73].valid =
      kcg_true;
    outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx73].startAddress =
      kcg_lit_int64(0);
    outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx73].endAddress =
      kcg_lit_int64(0);
  }
  for (idx74 = 0; idx74 < 500; idx74++) {
    outC->_L42_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketData[idx74] =
      kcg_lit_int64(0);
  }
  outC->_L44_then_IfBlock1.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx76 = 0; idx76 < 1; idx76++) {
    outC->_L44_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx76].valid =
      kcg_true;
    for (idx75 = 0; idx75 < 15; idx75++) {
      outC->_L44_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx76].telephoneNumber[idx75] =
        kcg_lit_int64(0);
    }
  }
  outC->_L44_then_IfBlock1.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L44_then_IfBlock1.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L44_then_IfBlock1.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L44_then_IfBlock1.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L44_then_IfBlock1.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L44_then_IfBlock1.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx77 = 0; idx77 < 4; idx77++) {
    outC->_L44_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx77].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L44_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx77].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx78 = 0; idx78 < 5; idx78++) {
    outC->_L44_then_IfBlock1.session.m_TrainData.m_NationalSystemIdentities[idx78] =
      kcg_lit_int64(0);
  }
  outC->_L44_then_IfBlock1.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L44_then_IfBlock1.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L44_then_IfBlock1.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L44_then_IfBlock1.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L44_then_IfBlock1.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L44_then_IfBlock1.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L44_then_IfBlock1.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L44_then_IfBlock1.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L44_then_IfBlock1.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L44_then_IfBlock1.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L44_then_IfBlock1.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L44_then_IfBlock1.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L44_then_IfBlock1.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx79 = 0; idx79 < 32; idx79++) {
    outC->_L44_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx79].d_loc =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx79].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx80 = 0; idx80 < 16; idx80++) {
    outC->_L44_then_IfBlock1.diagnostic[idx80].valid = kcg_true;
    outC->_L44_then_IfBlock1.diagnostic[idx80].count = kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.diagnostic[idx80].timestamp = kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.diagnostic[idx80].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L44_then_IfBlock1.diagnostic[idx80].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L44_then_IfBlock1.diagnostic[idx80].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx83 = 0; idx83 < 8; idx83++) {
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_IsValid = kcg_true;
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx81 = 0; idx81 < 30; idx81++) {
      outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Messages.PacketHeaders[idx81].nid_packet =
        kcg_lit_int64(0);
      outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Messages.PacketHeaders[idx81].q_dir =
        Q_DIR_Reverse;
      outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Messages.PacketHeaders[idx81].valid =
        kcg_true;
      outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Messages.PacketHeaders[idx81].startAddress =
        kcg_lit_int64(0);
      outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Messages.PacketHeaders[idx81].endAddress =
        kcg_lit_int64(0);
    }
    for (idx82 = 0; idx82 < 500; idx82++) {
      outC->_L44_then_IfBlock1.messageQueue.m_Entries[idx83].m_Entry.Messages.PacketData[idx82] =
        kcg_lit_int64(0);
    }
  }
  outC->_L44_then_IfBlock1.clockk.m_Value = kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx84 = 0; idx84 < 30; idx84++) {
    outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx84].nid_packet =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx84].q_dir =
      Q_DIR_Reverse;
    outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx84].valid =
      kcg_true;
    outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx84].startAddress =
      kcg_lit_int64(0);
    outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx84].endAddress =
      kcg_lit_int64(0);
  }
  for (idx85 = 0; idx85 < 500; idx85++) {
    outC->_L44_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketData[idx85] =
      kcg_lit_int64(0);
  }
  outC->_L45_then_IfBlock1.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx87 = 0; idx87 < 1; idx87++) {
    outC->_L45_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx87].valid =
      kcg_true;
    for (idx86 = 0; idx86 < 15; idx86++) {
      outC->_L45_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx87].telephoneNumber[idx86] =
        kcg_lit_int64(0);
    }
  }
  outC->_L45_then_IfBlock1.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L45_then_IfBlock1.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L45_then_IfBlock1.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L45_then_IfBlock1.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L45_then_IfBlock1.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L45_then_IfBlock1.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx88 = 0; idx88 < 4; idx88++) {
    outC->_L45_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx88].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L45_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx88].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx89 = 0; idx89 < 5; idx89++) {
    outC->_L45_then_IfBlock1.session.m_TrainData.m_NationalSystemIdentities[idx89] =
      kcg_lit_int64(0);
  }
  outC->_L45_then_IfBlock1.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L45_then_IfBlock1.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L45_then_IfBlock1.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L45_then_IfBlock1.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L45_then_IfBlock1.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L45_then_IfBlock1.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L45_then_IfBlock1.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L45_then_IfBlock1.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L45_then_IfBlock1.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L45_then_IfBlock1.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L45_then_IfBlock1.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L45_then_IfBlock1.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L45_then_IfBlock1.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx90 = 0; idx90 < 32; idx90++) {
    outC->_L45_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx90].d_loc =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx90].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx91 = 0; idx91 < 16; idx91++) {
    outC->_L45_then_IfBlock1.diagnostic[idx91].valid = kcg_true;
    outC->_L45_then_IfBlock1.diagnostic[idx91].count = kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.diagnostic[idx91].timestamp = kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.diagnostic[idx91].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L45_then_IfBlock1.diagnostic[idx91].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L45_then_IfBlock1.diagnostic[idx91].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx94 = 0; idx94 < 8; idx94++) {
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_IsValid = kcg_true;
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx92 = 0; idx92 < 30; idx92++) {
      outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketHeaders[idx92].nid_packet =
        kcg_lit_int64(0);
      outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketHeaders[idx92].q_dir =
        Q_DIR_Reverse;
      outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketHeaders[idx92].valid =
        kcg_true;
      outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketHeaders[idx92].startAddress =
        kcg_lit_int64(0);
      outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketHeaders[idx92].endAddress =
        kcg_lit_int64(0);
    }
    for (idx93 = 0; idx93 < 500; idx93++) {
      outC->_L45_then_IfBlock1.messageQueue.m_Entries[idx94].m_Entry.Messages.PacketData[idx93] =
        kcg_lit_int64(0);
    }
  }
  outC->_L45_then_IfBlock1.clockk.m_Value = kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx95 = 0; idx95 < 30; idx95++) {
    outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx95].nid_packet =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx95].q_dir =
      Q_DIR_Reverse;
    outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx95].valid =
      kcg_true;
    outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx95].startAddress =
      kcg_lit_int64(0);
    outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx95].endAddress =
      kcg_lit_int64(0);
  }
  for (idx96 = 0; idx96 < 500; idx96++) {
    outC->_L45_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketData[idx96] =
      kcg_lit_int64(0);
  }
  outC->_L49_then_IfBlock1.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx98 = 0; idx98 < 1; idx98++) {
    outC->_L49_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx98].valid =
      kcg_true;
    for (idx97 = 0; idx97 < 15; idx97++) {
      outC->_L49_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx98].telephoneNumber[idx97] =
        kcg_lit_int64(0);
    }
  }
  outC->_L49_then_IfBlock1.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L49_then_IfBlock1.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L49_then_IfBlock1.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L49_then_IfBlock1.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L49_then_IfBlock1.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L49_then_IfBlock1.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx99 = 0; idx99 < 4; idx99++) {
    outC->_L49_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx99].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L49_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx99].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx100 = 0; idx100 < 5; idx100++) {
    outC->_L49_then_IfBlock1.session.m_TrainData.m_NationalSystemIdentities[idx100] =
      kcg_lit_int64(0);
  }
  outC->_L49_then_IfBlock1.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L49_then_IfBlock1.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L49_then_IfBlock1.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L49_then_IfBlock1.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L49_then_IfBlock1.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L49_then_IfBlock1.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L49_then_IfBlock1.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L49_then_IfBlock1.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L49_then_IfBlock1.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L49_then_IfBlock1.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L49_then_IfBlock1.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L49_then_IfBlock1.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L49_then_IfBlock1.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx101 = 0; idx101 < 32; idx101++) {
    outC->_L49_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx101].d_loc =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx101].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx102 = 0; idx102 < 16; idx102++) {
    outC->_L49_then_IfBlock1.diagnostic[idx102].valid = kcg_true;
    outC->_L49_then_IfBlock1.diagnostic[idx102].count = kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.diagnostic[idx102].timestamp = kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.diagnostic[idx102].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L49_then_IfBlock1.diagnostic[idx102].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L49_then_IfBlock1.diagnostic[idx102].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx105 = 0; idx105 < 8; idx105++) {
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_IsValid = kcg_true;
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx103 = 0; idx103 < 30; idx103++) {
      outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Messages.PacketHeaders[idx103].nid_packet =
        kcg_lit_int64(0);
      outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Messages.PacketHeaders[idx103].q_dir =
        Q_DIR_Reverse;
      outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Messages.PacketHeaders[idx103].valid =
        kcg_true;
      outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Messages.PacketHeaders[idx103].startAddress =
        kcg_lit_int64(0);
      outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Messages.PacketHeaders[idx103].endAddress =
        kcg_lit_int64(0);
    }
    for (idx104 = 0; idx104 < 500; idx104++) {
      outC->_L49_then_IfBlock1.messageQueue.m_Entries[idx105].m_Entry.Messages.PacketData[idx104] =
        kcg_lit_int64(0);
    }
  }
  outC->_L49_then_IfBlock1.clockk.m_Value = kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int64(0);
  for (idx106 = 0; idx106 < 30; idx106++) {
    outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx106].nid_packet =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx106].q_dir =
      Q_DIR_Reverse;
    outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx106].valid =
      kcg_true;
    outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx106].startAddress =
      kcg_lit_int64(0);
    outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx106].endAddress =
      kcg_lit_int64(0);
  }
  for (idx107 = 0; idx107 < 500; idx107++) {
    outC->_L49_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketData[idx107] =
      kcg_lit_int64(0);
  }
  outC->outRadioTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.receivedSystemTime = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->outRadioTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx108 = 0; idx108 < 30; idx108++) {
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx108].nid_packet =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx108].q_dir =
      Q_DIR_Reverse;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx108].valid = kcg_true;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx108].startAddress =
      kcg_lit_int64(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx108].endAddress =
      kcg_lit_int64(0);
  }
  for (idx109 = 0; idx109 < 500; idx109++) {
    outC->outRadioTrackTrainMessage.Messages.PacketData[idx109] = kcg_lit_int64(0);
  }
  outC->outDataBus.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx111 = 0; idx111 < 1; idx111++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx111].valid =
      kcg_true;
    for (idx110 = 0; idx110 < 15; idx110++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx111].telephoneNumber[idx110] =
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
  for (idx112 = 0; idx112 < 4; idx112++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx112].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx112].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx113 = 0; idx113 < 5; idx113++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[idx113] =
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
  for (idx114 = 0; idx114 < 32; idx114++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx114].d_loc =
      kcg_lit_int64(0);
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx114].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx115 = 0; idx115 < 16; idx115++) {
    outC->outDataBus.diagnostic[idx115].valid = kcg_true;
    outC->outDataBus.diagnostic[idx115].count = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx115].timestamp = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx115].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx115].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx115].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx118 = 0; idx118 < 8; idx118++) {
    outC->outDataBus.messageQueue.m_Entries[idx118].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx116 = 0; idx116 < 30; idx116++) {
      outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Messages.PacketHeaders[idx116].nid_packet =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Messages.PacketHeaders[idx116].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Messages.PacketHeaders[idx116].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Messages.PacketHeaders[idx116].startAddress =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Messages.PacketHeaders[idx116].endAddress =
        kcg_lit_int64(0);
    }
    for (idx117 = 0; idx117 < 500; idx117++) {
      outC->outDataBus.messageQueue.m_Entries[idx118].m_Entry.Messages.PacketData[idx117] =
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
  for (idx119 = 0; idx119 < 30; idx119++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx119].nid_packet =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx119].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx119].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx119].startAddress =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx119].endAddress =
      kcg_lit_int64(0);
  }
  for (idx120 = 0; idx120 < 500; idx120++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[idx120] =
      kcg_lit_int64(0);
  }
  /* IfBlock1:then:_L32=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader#2)/ */
  RadioTrackTrainMessage__SetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__SetHeader_2);
  /* IfBlock1:then:_L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN#2)/ */
  RadioTrackTrainHeader__Set_T_TRAIN_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_2);
  /* IfBlock1:then:_L39=(RBC_Time_Pkg::Clock__GetSeconds#2)/ */
  Clock__GetSeconds_init_RBC_Time_Pkg(&outC->Context_Clock__GetSeconds_2);
  /* IfBlock1:then:_L37=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#2)/ */
  RadioTrackTrainMessage__GetHeader_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_2);
  /* IfBlock1:then:_L36=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry#2)/ */
  RadioTrackTrainMessageQueueEntry__GetEntry_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__GetEntry_2);
  /* IfBlock1:then:_L34=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take#2)/ */
  RadioTrackTrainMessageQueue__Take_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__Take_2);
  /* IfBlock1:else:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateDefaultMsg_BSL2#2)/ */
  RadioTrackTrainFactory__CreateDefaultMsg_BSL2_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
    &outC->Context_RadioTrackTrainFactory__CreateDefaultMsg_BSL2_2);
  /* _L5=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#2)/ */
  RadioTrackTrainMessageQueue__GetRemainingCapacity_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainMsgQueue_reset_RBC_Messaging_Pkg(
  outC_RadioTrackTrainMsgQueue_RBC_Messaging_Pkg *outC)
{
  /* IfBlock1:then:_L32=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader#2)/ */
  RadioTrackTrainMessage__SetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__SetHeader_2);
  /* IfBlock1:then:_L33=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_T_TRAIN#2)/ */
  RadioTrackTrainHeader__Set_T_TRAIN_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Set_T_TRAIN_2);
  /* IfBlock1:then:_L39=(RBC_Time_Pkg::Clock__GetSeconds#2)/ */
  Clock__GetSeconds_reset_RBC_Time_Pkg(&outC->Context_Clock__GetSeconds_2);
  /* IfBlock1:then:_L37=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#2)/ */
  RadioTrackTrainMessage__GetHeader_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__GetHeader_2);
  /* IfBlock1:then:_L36=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__GetEntry#2)/ */
  RadioTrackTrainMessageQueueEntry__GetEntry_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueueEntry__GetEntry_2);
  /* IfBlock1:then:_L34=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__Take#2)/ */
  RadioTrackTrainMessageQueue__Take_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__Take_2);
  /* IfBlock1:else:_L3=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateDefaultMsg_BSL2#2)/ */
  RadioTrackTrainFactory__CreateDefaultMsg_BSL2_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
    &outC->Context_RadioTrackTrainFactory__CreateDefaultMsg_BSL2_2);
  /* _L5=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#2)/ */
  RadioTrackTrainMessageQueue__GetRemainingCapacity_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMsgQueue_RBC_Messaging_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

