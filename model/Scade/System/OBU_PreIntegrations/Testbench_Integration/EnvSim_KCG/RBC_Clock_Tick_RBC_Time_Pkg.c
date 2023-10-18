/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_Clock_Tick_RBC_Time_Pkg.h"

/* RBC_Time_Pkg::RBC_Clock_Tick/ */
void RBC_Clock_Tick_RBC_Time_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  outC_RBC_Clock_Tick_RBC_Time_Pkg *outC)
{
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L4, inDataBus);
  kcg_copy_Clock_T(&outC->_L1, &outC->_L4.clockk);
  /* _L2=(RBC_Time_Pkg::Clock__Tick#1)/ */
  Clock__Tick_RBC_Time_Pkg(&outC->_L1, &outC->Context_Clock__Tick_1);
  kcg_copy_Clock_T(&outC->_L2, &outC->Context_Clock__Tick_1.outClock);
  kcg_copy_Clock_T(&outC->outClock, &outC->_L2);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L3, &outC->_L4);
  if (kcg_true) {
    kcg_copy_Clock_T(&outC->_L3.clockk, &outC->_L2);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void RBC_Clock_Tick_init_RBC_Time_Pkg(outC_RBC_Clock_Tick_RBC_Time_Pkg *outC)
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

  outC->_L4.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L4.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L4.session.m_TrainData.m_OnboardPhoneNumbers[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L4.session.m_TrainData.m_OnboardPhoneNumbers[idx1].telephoneNumber[idx] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L4.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L4.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L4.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L4.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L4.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L4.session.m_TrainData.m_TractionIdentities[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4.session.m_TrainData.m_TractionIdentities[idx2].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L4.session.m_TrainData.m_NationalSystemIdentities[idx3] =
      kcg_lit_int64(0);
  }
  outC->_L4.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L4.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L4.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L4.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L4.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L4.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L4.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L4.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L4.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L4.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L4.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L4.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L4.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L4.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L4.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L4.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L4.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L4.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L4.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L4.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L4.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L4.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L4.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L4.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L4.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L4.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L4.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L4.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L4.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L4.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L4.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L4.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx4].d_loc =
      kcg_lit_int64(0);
    outC->_L4.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx4].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx5 = 0; idx5 < 16; idx5++) {
    outC->_L4.diagnostic[idx5].valid = kcg_true;
    outC->_L4.diagnostic[idx5].count = kcg_lit_int64(0);
    outC->_L4.diagnostic[idx5].timestamp = kcg_lit_int64(0);
    outC->_L4.diagnostic[idx5].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L4.diagnostic[idx5].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L4.diagnostic[idx5].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx8 = 0; idx8 < 8; idx8++) {
    outC->_L4.messageQueue.m_Entries[idx8].m_IsValid = kcg_true;
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.nid_em = kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx6 = 0; idx6 < 30; idx6++) {
      outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].nid_packet =
        kcg_lit_int64(0);
      outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].q_dir =
        Q_DIR_Reverse;
      outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].valid =
        kcg_true;
      outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].startAddress =
        kcg_lit_int64(0);
      outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketHeaders[idx6].endAddress =
        kcg_lit_int64(0);
    }
    for (idx7 = 0; idx7 < 500; idx7++) {
      outC->_L4.messageQueue.m_Entries[idx8].m_Entry.Messages.PacketData[idx7] =
        kcg_lit_int64(0);
    }
  }
  outC->_L4.clockk.m_Value = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.receivedSystemTime = kcg_lit_int64(
      0);
  outC->_L4.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L4.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L4.lastSentTrackTrainMessage.Messages.PacketHeaders[idx9].nid_packet =
      kcg_lit_int64(0);
    outC->_L4.lastSentTrackTrainMessage.Messages.PacketHeaders[idx9].q_dir =
      Q_DIR_Reverse;
    outC->_L4.lastSentTrackTrainMessage.Messages.PacketHeaders[idx9].valid =
      kcg_true;
    outC->_L4.lastSentTrackTrainMessage.Messages.PacketHeaders[idx9].startAddress =
      kcg_lit_int64(0);
    outC->_L4.lastSentTrackTrainMessage.Messages.PacketHeaders[idx9].endAddress =
      kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L4.lastSentTrackTrainMessage.Messages.PacketData[idx10] =
      kcg_lit_int64(0);
  }
  outC->_L1.m_Value = kcg_lit_int64(0);
  outC->_L2.m_Value = kcg_lit_int64(0);
  outC->_L3.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->_L3.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int64(0);
  for (idx12 = 0; idx12 < 1; idx12++) {
    outC->_L3.session.m_TrainData.m_OnboardPhoneNumbers[idx12].valid = kcg_true;
    for (idx11 = 0; idx11 < 15; idx11++) {
      outC->_L3.session.m_TrainData.m_OnboardPhoneNumbers[idx12].telephoneNumber[idx11] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3.session.m_TrainData.t_train_ref = kcg_lit_int64(0);
  outC->_L3.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3.session.m_TrainData.l_train = kcg_lit_int64(0);
  outC->_L3.session.m_TrainData.v_maxtrain = kcg_lit_int64(0);
  outC->_L3.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L3.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L3.session.m_TrainData.n_axle = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->_L3.session.m_TrainData.m_TractionIdentities[idx13].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3.session.m_TrainData.m_TractionIdentities[idx13].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 5; idx14++) {
    outC->_L3.session.m_TrainData.m_NationalSystemIdentities[idx14] =
      kcg_lit_int64(0);
  }
  outC->_L3.session.m_TrainData.nid_operational = kcg_lit_int64(0);
  outC->_L3.session.m_PosData.nid_lrbg = kcg_lit_int64(0);
  outC->_L3.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.session.m_PosData.d_lrbg = kcg_lit_int64(0);
  outC->_L3.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3.session.m_PosData.l_doubtover = kcg_lit_int64(0);
  outC->_L3.session.m_PosData.l_doubtunder = kcg_lit_int64(0);
  outC->_L3.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3.session.m_PosData.l_trainint = kcg_lit_int64(0);
  outC->_L3.session.m_PosData.v_train = kcg_lit_int64(0);
  outC->_L3.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L3.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L3.session.m_PosData.nid_ntc = kcg_lit_int64(0);
  outC->_L3.session.m_PosData.nid_prvlrbg = kcg_lit_int64(0);
  outC->_L3.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.config.m_NationalParams.nid_c = kcg_lit_int64(0);
  outC->_L3.config.m_NationalParams.v_nvshunt = kcg_lit_int64(0);
  outC->_L3.config.m_NationalParams.v_nvstff = kcg_lit_int64(0);
  outC->_L3.config.m_NationalParams.v_nvonsight = kcg_lit_int64(0);
  outC->_L3.config.m_NationalParams.v_nvunfit = kcg_lit_int64(0);
  outC->_L3.config.m_NationalParams.v_nvrel = kcg_lit_int64(0);
  outC->_L3.config.m_NationalParams.t_nvcontact = kcg_lit_int64(0);
  outC->_L3.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L3.config.m_MAReqParams.t_mar = kcg_lit_int64(0);
  outC->_L3.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int64(0);
  outC->_L3.config.m_MAReqParams.t_cycrqst = kcg_lit_int64(0);
  outC->_L3.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L3.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.config.m_PosRepParams.t_cycloc = kcg_lit_int64(0);
  outC->_L3.config.m_PosRepParams.d_cycloc = kcg_lit_int64(0);
  outC->_L3.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L3.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int64(0);
  for (idx15 = 0; idx15 < 32; idx15++) {
    outC->_L3.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx15].d_loc =
      kcg_lit_int64(0);
    outC->_L3.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx15].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx16 = 0; idx16 < 16; idx16++) {
    outC->_L3.diagnostic[idx16].valid = kcg_true;
    outC->_L3.diagnostic[idx16].count = kcg_lit_int64(0);
    outC->_L3.diagnostic[idx16].timestamp = kcg_lit_int64(0);
    outC->_L3.diagnostic[idx16].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L3.diagnostic[idx16].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L3.diagnostic[idx16].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx19 = 0; idx19 < 8; idx19++) {
    outC->_L3.messageQueue.m_Entries[idx19].m_IsValid = kcg_true;
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.m_ack = kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.d_sr = kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.d_ref = kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.q_dir = kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx17 = 0; idx17 < 30; idx17++) {
      outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Messages.PacketHeaders[idx17].nid_packet =
        kcg_lit_int64(0);
      outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Messages.PacketHeaders[idx17].q_dir =
        Q_DIR_Reverse;
      outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Messages.PacketHeaders[idx17].valid =
        kcg_true;
      outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Messages.PacketHeaders[idx17].startAddress =
        kcg_lit_int64(0);
      outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Messages.PacketHeaders[idx17].endAddress =
        kcg_lit_int64(0);
    }
    for (idx18 = 0; idx18 < 500; idx18++) {
      outC->_L3.messageQueue.m_Entries[idx19].m_Entry.Messages.PacketData[idx18] =
        kcg_lit_int64(0);
    }
  }
  outC->_L3.clockk.m_Value = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.receivedSystemTime = kcg_lit_int64(
      0);
  outC->_L3.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.t_train_reference = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L3.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L3.lastSentTrackTrainMessage.Messages.PacketHeaders[idx20].nid_packet =
      kcg_lit_int64(0);
    outC->_L3.lastSentTrackTrainMessage.Messages.PacketHeaders[idx20].q_dir =
      Q_DIR_Reverse;
    outC->_L3.lastSentTrackTrainMessage.Messages.PacketHeaders[idx20].valid =
      kcg_true;
    outC->_L3.lastSentTrackTrainMessage.Messages.PacketHeaders[idx20].startAddress =
      kcg_lit_int64(0);
    outC->_L3.lastSentTrackTrainMessage.Messages.PacketHeaders[idx20].endAddress =
      kcg_lit_int64(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L3.lastSentTrackTrainMessage.Messages.PacketData[idx21] =
      kcg_lit_int64(0);
  }
  outC->outClock.m_Value = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.nid_engine = kcg_lit_int64(0);
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int64(0);
  for (idx23 = 0; idx23 < 1; idx23++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx23].valid =
      kcg_true;
    for (idx22 = 0; idx22 < 15; idx22++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx23].telephoneNumber[idx22] =
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
  for (idx24 = 0; idx24 < 4; idx24++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx24].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx24].nid_ctraction =
      kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 5; idx25++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[idx25] =
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
  for (idx26 = 0; idx26 < 32; idx26++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx26].d_loc =
      kcg_lit_int64(0);
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx26].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx27 = 0; idx27 < 16; idx27++) {
    outC->outDataBus.diagnostic[idx27].valid = kcg_true;
    outC->outDataBus.diagnostic[idx27].count = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx27].timestamp = kcg_lit_int64(0);
    outC->outDataBus.diagnostic[idx27].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx27].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx27].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx30 = 0; idx30 < 8; idx30++) {
    outC->outDataBus.messageQueue.m_Entries[idx30].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.radioDevice =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.receivedSystemTime =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.nid_message =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.t_train =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.m_ack =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.nid_lrbg =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.t_train_reference =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.nid_em =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.q_scale =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.d_sr =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.t_sh_rqst =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.d_ref =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.q_dir =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.d_emergencystop =
      kcg_lit_int64(0);
    outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Header.m_version =
      kcg_lit_int64(0);
    for (idx28 = 0; idx28 < 30; idx28++) {
      outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Messages.PacketHeaders[idx28].nid_packet =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Messages.PacketHeaders[idx28].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Messages.PacketHeaders[idx28].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Messages.PacketHeaders[idx28].startAddress =
        kcg_lit_int64(0);
      outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Messages.PacketHeaders[idx28].endAddress =
        kcg_lit_int64(0);
    }
    for (idx29 = 0; idx29 < 500; idx29++) {
      outC->outDataBus.messageQueue.m_Entries[idx30].m_Entry.Messages.PacketData[idx29] =
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
  for (idx31 = 0; idx31 < 30; idx31++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx31].nid_packet =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx31].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx31].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx31].startAddress =
      kcg_lit_int64(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx31].endAddress =
      kcg_lit_int64(0);
  }
  for (idx32 = 0; idx32 < 500; idx32++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[idx32] =
      kcg_lit_int64(0);
  }
  /* _L2=(RBC_Time_Pkg::Clock__Tick#1)/ */
  Clock__Tick_init_RBC_Time_Pkg(&outC->Context_Clock__Tick_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC_Clock_Tick_reset_RBC_Time_Pkg(outC_RBC_Clock_Tick_RBC_Time_Pkg *outC)
{
  /* _L2=(RBC_Time_Pkg::Clock__Tick#1)/ */
  Clock__Tick_reset_RBC_Time_Pkg(&outC->Context_Clock__Tick_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_Clock_Tick_RBC_Time_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

