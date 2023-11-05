/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC_New_RBC_Model_Pkg.h"

/* RBC_Model_Pkg::RBC_New/ */
void RBC_New_RBC_Model_Pkg(
  /* inDynamicConfigInit/ */
  DynamicConfig_T *inDynamicConfigInit,
  /* inRadioTrainTrackMsg/ */
  M_TrainTrack_Message_T_TM_radio_messages *inRadioTrainTrackMsg,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC_New_RBC_Model_Pkg *outC)
{
  /* dataBus/ */
  static RBC_Data_T_RBC_DataBus_Pkg last_dataBus;

  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&last_dataBus, &outC->dataBus);
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->_L157,
    inRadioTrainTrackMsg);
  /* _L256=(RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg#1)/ */
  ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->_L157,
    &outC->Context_ToOldRadioTrainTrackMsg_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L256,
    &outC->Context_ToOldRadioTrainTrackMsg_1.outOld);
  kcg_copy_DynamicConfig_T(&outC->_L220, inDynamicConfigInit);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L223, &last_dataBus);
  /* _L218=(RBC_DataBus_Pkg::DataBusFactory#1)/ */
  DataBusFactory_RBC_DataBus_Pkg(
    &outC->_L220,
    &outC->_L223,
    &outC->Context_DataBusFactory_1);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
    &outC->_L218,
    &outC->Context_DataBusFactory_1.outDataBus);
  /* _L239=(RBC_Messaging_Pkg::RadioTrainTrackInputHandler#1)/ */
  RadioTrainTrackInputHandler_RBC_Messaging_Pkg(
    &outC->_L256,
    &outC->Context_RadioTrainTrackInputHandler_1);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L239,
    &outC->Context_RadioTrainTrackInputHandler_1.outRadioTrainTrack);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L217,
    inTriggeredRadioTrackTrainMessage);
  /* _L240=(RBC_Model_Pkg::RBC__ProcessController#1)/ */
  RBC__ProcessController_RBC_Model_Pkg(
    &outC->_L218,
    &outC->_L239,
    &outC->_L217,
    &outC->Context_RBC__ProcessController_1);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
    &outC->_L240,
    &outC->Context_RBC__ProcessController_1.outDataBus);
  /* _L245=(RBC_Messaging_Pkg::RadioTrackTrainMsgQueue#1)/ */
  RadioTrackTrainMsgQueue_RBC_Messaging_Pkg(
    &outC->_L240,
    &outC->Context_RadioTrackTrainMsgQueue_1);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
    &outC->_L245,
    &outC->Context_RadioTrackTrainMsgQueue_1.outDataBus);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L246,
    &outC->Context_RadioTrackTrainMsgQueue_1.outRadioTrackTrainMessage);
  /* _L254=(RBC_Time_Pkg::RBC_Clock_Tick#1)/ */
  RBC_Clock_Tick_RBC_Time_Pkg(&outC->_L245, &outC->Context_RBC_Clock_Tick_1);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
    &outC->_L254,
    &outC->Context_RBC_Clock_Tick_1.outDataBus);
  kcg_copy_Clock_T(&outC->_L255, &outC->Context_RBC_Clock_Tick_1.outClock);
  kcg_copy_SessionManagement_T(&outC->_L253, &outC->_L254.session);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outRadioTrackTrainMessage,
    &outC->_L246);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->dataBus, &outC->_L254);
  kcg_copy_SessionManagement_T(&outC->outSessionManagement, &outC->_L253);
  kcg_copy_Clock_T(&outC->outClock, &outC->_L255);
}

#ifndef KCG_USER_DEFINED_INIT
void RBC_New_init_RBC_Model_Pkg(outC_RBC_New_RBC_Model_Pkg *outC)
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

  outC->_L256.present = kcg_true;
  outC->_L256.header.present = kcg_true;
  outC->_L256.header.nid_message = kcg_lit_int32(0);
  outC->_L256.header.t_train = kcg_lit_int32(0);
  outC->_L256.header.nid_engine = kcg_lit_int32(0);
  outC->_L256.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L256.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L256.header.xNID_EM = kcg_lit_int32(0);
  outC->_L256.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L256.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L256.packets.p0.valid = kcg_true;
  outC->_L256.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L256.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L256.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L256.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L256.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L256.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L256.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L256.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L256.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L256.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L256.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L256.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L256.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L256.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L256.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L256.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L256.packets.p1.valid = kcg_true;
  outC->_L256.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L256.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L256.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L256.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L256.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L256.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L256.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L256.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L256.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L256.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L256.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L256.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L256.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L256.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L256.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L256.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L256.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L256.packets.p3.valid = kcg_true;
  outC->_L256.packets.p3.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L256.packets.p3.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L256.packets.p3.aNID_RADIO[idx1].telephoneNumber[idx] = kcg_lit_int32(0);
    }
  }
  outC->_L256.packets.p4.valid = kcg_true;
  outC->_L256.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L256.packets.p5.valid = kcg_true;
  outC->_L256.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L256.packets.p9.valid = kcg_true;
  outC->_L256.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L256.packets.p11.valid = kcg_true;
  outC->_L256.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L256.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L256.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L256.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L256.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L256.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L256.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L256.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L256.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 4; idx2++) {
    outC->_L256.packets.p11.tractionIdentity[idx2].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L256.packets.p11.tractionIdentity[idx2].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L256.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L256.packets.p11.nid_ntc[idx3] = kcg_lit_int32(0);
  }
  outC->_L254.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L254.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(
      0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L254.session.m_TrainData.m_OnboardPhoneNumbers[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L254.session.m_TrainData.m_OnboardPhoneNumbers[idx5].telephoneNumber[idx4] =
        kcg_lit_int32(0);
    }
  }
  outC->_L254.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L254.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L254.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L254.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L254.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L254.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L254.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L254.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L254.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 4; idx6++) {
    outC->_L254.session.m_TrainData.m_TractionIdentities[idx6].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L254.session.m_TrainData.m_TractionIdentities[idx6].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L254.session.m_TrainData.m_NationalSystemIdentities[idx7] =
      kcg_lit_int32(0);
  }
  outC->_L254.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L254.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L254.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L254.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L254.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L254.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L254.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L254.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L254.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L254.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L254.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L254.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L254.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L254.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L254.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L254.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L254.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L254.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L254.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L254.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L254.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L254.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L254.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L254.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L254.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L254.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L254.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L254.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L254.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L254.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L254.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L254.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L254.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L254.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->_L254.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx8].d_loc =
      kcg_lit_int32(0);
    outC->_L254.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx8].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx9 = 0; idx9 < 16; idx9++) {
    outC->_L254.diagnostic[idx9].valid = kcg_true;
    outC->_L254.diagnostic[idx9].count = kcg_lit_int32(0);
    outC->_L254.diagnostic[idx9].timestamp = kcg_lit_int32(0);
    outC->_L254.diagnostic[idx9].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L254.diagnostic[idx9].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L254.diagnostic[idx9].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx12 = 0; idx12 < 8; idx12++) {
    outC->_L254.messageQueue.m_Entries[idx12].m_IsValid = kcg_true;
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx10 = 0; idx10 < 30; idx10++) {
      outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].nid_packet =
        kcg_lit_int32(0);
      outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].q_dir =
        Q_DIR_Reverse;
      outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].valid =
        kcg_true;
      outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].startAddress =
        kcg_lit_int32(0);
      outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketHeaders[idx10].endAddress =
        kcg_lit_int32(0);
    }
    for (idx11 = 0; idx11 < 500; idx11++) {
      outC->_L254.messageQueue.m_Entries[idx12].m_Entry.Messages.PacketData[idx11] =
        kcg_lit_int32(0);
    }
  }
  outC->_L254.clockk.m_Value = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L254.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L254.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].nid_packet =
      kcg_lit_int32(0);
    outC->_L254.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].q_dir =
      Q_DIR_Reverse;
    outC->_L254.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].valid =
      kcg_true;
    outC->_L254.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].startAddress =
      kcg_lit_int32(0);
    outC->_L254.lastSentTrackTrainMessage.Messages.PacketHeaders[idx13].endAddress =
      kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 500; idx14++) {
    outC->_L254.lastSentTrackTrainMessage.Messages.PacketData[idx14] =
      kcg_lit_int32(0);
  }
  outC->_L255.m_Value = kcg_lit_int32(0);
  outC->_L253.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L253.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 1; idx16++) {
    outC->_L253.m_TrainData.m_OnboardPhoneNumbers[idx16].valid = kcg_true;
    for (idx15 = 0; idx15 < 15; idx15++) {
      outC->_L253.m_TrainData.m_OnboardPhoneNumbers[idx16].telephoneNumber[idx15] =
        kcg_lit_int32(0);
    }
  }
  outC->_L253.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L253.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L253.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L253.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L253.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L253.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L253.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L253.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L253.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 4; idx17++) {
    outC->_L253.m_TrainData.m_TractionIdentities[idx17].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L253.m_TrainData.m_TractionIdentities[idx17].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L253.m_TrainData.m_NationalSystemIdentities[idx18] = kcg_lit_int32(0);
  }
  outC->_L253.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L253.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L253.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L253.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L253.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L253.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L253.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L253.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L253.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L253.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L253.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L253.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L253.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L253.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L253.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L253.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L245.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L245.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(
      0);
  for (idx20 = 0; idx20 < 1; idx20++) {
    outC->_L245.session.m_TrainData.m_OnboardPhoneNumbers[idx20].valid = kcg_true;
    for (idx19 = 0; idx19 < 15; idx19++) {
      outC->_L245.session.m_TrainData.m_OnboardPhoneNumbers[idx20].telephoneNumber[idx19] =
        kcg_lit_int32(0);
    }
  }
  outC->_L245.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L245.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L245.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L245.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L245.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L245.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L245.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L245.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L245.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 4; idx21++) {
    outC->_L245.session.m_TrainData.m_TractionIdentities[idx21].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L245.session.m_TrainData.m_TractionIdentities[idx21].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx22 = 0; idx22 < 5; idx22++) {
    outC->_L245.session.m_TrainData.m_NationalSystemIdentities[idx22] =
      kcg_lit_int32(0);
  }
  outC->_L245.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L245.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L245.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L245.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L245.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L245.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L245.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L245.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L245.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L245.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L245.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L245.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L245.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L245.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L245.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L245.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L245.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L245.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L245.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L245.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L245.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L245.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L245.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L245.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L245.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L245.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L245.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L245.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L245.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L245.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L245.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L245.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L245.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L245.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx23 = 0; idx23 < 32; idx23++) {
    outC->_L245.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx23].d_loc =
      kcg_lit_int32(0);
    outC->_L245.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx23].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx24 = 0; idx24 < 16; idx24++) {
    outC->_L245.diagnostic[idx24].valid = kcg_true;
    outC->_L245.diagnostic[idx24].count = kcg_lit_int32(0);
    outC->_L245.diagnostic[idx24].timestamp = kcg_lit_int32(0);
    outC->_L245.diagnostic[idx24].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L245.diagnostic[idx24].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L245.diagnostic[idx24].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx27 = 0; idx27 < 8; idx27++) {
    outC->_L245.messageQueue.m_Entries[idx27].m_IsValid = kcg_true;
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx25 = 0; idx25 < 30; idx25++) {
      outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Messages.PacketHeaders[idx25].nid_packet =
        kcg_lit_int32(0);
      outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Messages.PacketHeaders[idx25].q_dir =
        Q_DIR_Reverse;
      outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Messages.PacketHeaders[idx25].valid =
        kcg_true;
      outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Messages.PacketHeaders[idx25].startAddress =
        kcg_lit_int32(0);
      outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Messages.PacketHeaders[idx25].endAddress =
        kcg_lit_int32(0);
    }
    for (idx26 = 0; idx26 < 500; idx26++) {
      outC->_L245.messageQueue.m_Entries[idx27].m_Entry.Messages.PacketData[idx26] =
        kcg_lit_int32(0);
    }
  }
  outC->_L245.clockk.m_Value = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L245.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L245.lastSentTrackTrainMessage.Messages.PacketHeaders[idx28].nid_packet =
      kcg_lit_int32(0);
    outC->_L245.lastSentTrackTrainMessage.Messages.PacketHeaders[idx28].q_dir =
      Q_DIR_Reverse;
    outC->_L245.lastSentTrackTrainMessage.Messages.PacketHeaders[idx28].valid =
      kcg_true;
    outC->_L245.lastSentTrackTrainMessage.Messages.PacketHeaders[idx28].startAddress =
      kcg_lit_int32(0);
    outC->_L245.lastSentTrackTrainMessage.Messages.PacketHeaders[idx28].endAddress =
      kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L245.lastSentTrackTrainMessage.Messages.PacketData[idx29] =
      kcg_lit_int32(0);
  }
  outC->_L246.Header.radioDevice = kcg_lit_int32(0);
  outC->_L246.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L246.Header.nid_message = kcg_lit_int32(0);
  outC->_L246.Header.t_train = kcg_lit_int32(0);
  outC->_L246.Header.m_ack = kcg_lit_int32(0);
  outC->_L246.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L246.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L246.Header.nid_em = kcg_lit_int32(0);
  outC->_L246.Header.q_scale = kcg_lit_int32(0);
  outC->_L246.Header.d_sr = kcg_lit_int32(0);
  outC->_L246.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L246.Header.d_ref = kcg_lit_int32(0);
  outC->_L246.Header.q_dir = kcg_lit_int32(0);
  outC->_L246.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L246.Header.m_version = kcg_lit_int32(0);
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L246.Messages.PacketHeaders[idx30].nid_packet = kcg_lit_int32(0);
    outC->_L246.Messages.PacketHeaders[idx30].q_dir = Q_DIR_Reverse;
    outC->_L246.Messages.PacketHeaders[idx30].valid = kcg_true;
    outC->_L246.Messages.PacketHeaders[idx30].startAddress = kcg_lit_int32(0);
    outC->_L246.Messages.PacketHeaders[idx30].endAddress = kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->_L246.Messages.PacketData[idx31] = kcg_lit_int32(0);
  }
  outC->_L240.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L240.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(
      0);
  for (idx33 = 0; idx33 < 1; idx33++) {
    outC->_L240.session.m_TrainData.m_OnboardPhoneNumbers[idx33].valid = kcg_true;
    for (idx32 = 0; idx32 < 15; idx32++) {
      outC->_L240.session.m_TrainData.m_OnboardPhoneNumbers[idx33].telephoneNumber[idx32] =
        kcg_lit_int32(0);
    }
  }
  outC->_L240.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L240.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L240.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L240.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L240.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L240.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L240.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L240.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L240.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx34 = 0; idx34 < 4; idx34++) {
    outC->_L240.session.m_TrainData.m_TractionIdentities[idx34].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L240.session.m_TrainData.m_TractionIdentities[idx34].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 5; idx35++) {
    outC->_L240.session.m_TrainData.m_NationalSystemIdentities[idx35] =
      kcg_lit_int32(0);
  }
  outC->_L240.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L240.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L240.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L240.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L240.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L240.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L240.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L240.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L240.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L240.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L240.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L240.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L240.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L240.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L240.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L240.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L240.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L240.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L240.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L240.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L240.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L240.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L240.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L240.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L240.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L240.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L240.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L240.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L240.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L240.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L240.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L240.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L240.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L240.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx36 = 0; idx36 < 32; idx36++) {
    outC->_L240.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx36].d_loc =
      kcg_lit_int32(0);
    outC->_L240.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx36].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx37 = 0; idx37 < 16; idx37++) {
    outC->_L240.diagnostic[idx37].valid = kcg_true;
    outC->_L240.diagnostic[idx37].count = kcg_lit_int32(0);
    outC->_L240.diagnostic[idx37].timestamp = kcg_lit_int32(0);
    outC->_L240.diagnostic[idx37].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L240.diagnostic[idx37].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L240.diagnostic[idx37].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx40 = 0; idx40 < 8; idx40++) {
    outC->_L240.messageQueue.m_Entries[idx40].m_IsValid = kcg_true;
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx38 = 0; idx38 < 30; idx38++) {
      outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Messages.PacketHeaders[idx38].nid_packet =
        kcg_lit_int32(0);
      outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Messages.PacketHeaders[idx38].q_dir =
        Q_DIR_Reverse;
      outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Messages.PacketHeaders[idx38].valid =
        kcg_true;
      outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Messages.PacketHeaders[idx38].startAddress =
        kcg_lit_int32(0);
      outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Messages.PacketHeaders[idx38].endAddress =
        kcg_lit_int32(0);
    }
    for (idx39 = 0; idx39 < 500; idx39++) {
      outC->_L240.messageQueue.m_Entries[idx40].m_Entry.Messages.PacketData[idx39] =
        kcg_lit_int32(0);
    }
  }
  outC->_L240.clockk.m_Value = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L240.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx41 = 0; idx41 < 30; idx41++) {
    outC->_L240.lastSentTrackTrainMessage.Messages.PacketHeaders[idx41].nid_packet =
      kcg_lit_int32(0);
    outC->_L240.lastSentTrackTrainMessage.Messages.PacketHeaders[idx41].q_dir =
      Q_DIR_Reverse;
    outC->_L240.lastSentTrackTrainMessage.Messages.PacketHeaders[idx41].valid =
      kcg_true;
    outC->_L240.lastSentTrackTrainMessage.Messages.PacketHeaders[idx41].startAddress =
      kcg_lit_int32(0);
    outC->_L240.lastSentTrackTrainMessage.Messages.PacketHeaders[idx41].endAddress =
      kcg_lit_int32(0);
  }
  for (idx42 = 0; idx42 < 500; idx42++) {
    outC->_L240.lastSentTrackTrainMessage.Messages.PacketData[idx42] =
      kcg_lit_int32(0);
  }
  outC->_L239.present = kcg_true;
  outC->_L239.header.present = kcg_true;
  outC->_L239.header.nid_message = kcg_lit_int32(0);
  outC->_L239.header.t_train = kcg_lit_int32(0);
  outC->_L239.header.nid_engine = kcg_lit_int32(0);
  outC->_L239.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L239.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L239.header.xNID_EM = kcg_lit_int32(0);
  outC->_L239.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L239.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L239.packets.p0.valid = kcg_true;
  outC->_L239.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L239.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L239.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L239.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L239.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L239.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L239.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L239.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L239.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L239.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L239.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L239.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L239.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L239.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L239.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L239.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L239.packets.p1.valid = kcg_true;
  outC->_L239.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L239.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L239.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L239.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L239.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L239.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L239.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L239.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L239.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L239.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L239.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L239.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L239.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L239.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L239.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L239.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L239.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L239.packets.p3.valid = kcg_true;
  outC->_L239.packets.p3.number = kcg_lit_int32(0);
  for (idx44 = 0; idx44 < 1; idx44++) {
    outC->_L239.packets.p3.aNID_RADIO[idx44].valid = kcg_true;
    for (idx43 = 0; idx43 < 15; idx43++) {
      outC->_L239.packets.p3.aNID_RADIO[idx44].telephoneNumber[idx43] =
        kcg_lit_int32(0);
    }
  }
  outC->_L239.packets.p4.valid = kcg_true;
  outC->_L239.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L239.packets.p5.valid = kcg_true;
  outC->_L239.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L239.packets.p9.valid = kcg_true;
  outC->_L239.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L239.packets.p11.valid = kcg_true;
  outC->_L239.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L239.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L239.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L239.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L239.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L239.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L239.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L239.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L239.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx45 = 0; idx45 < 4; idx45++) {
    outC->_L239.packets.p11.tractionIdentity[idx45].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L239.packets.p11.tractionIdentity[idx45].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L239.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx46 = 0; idx46 < 5; idx46++) {
    outC->_L239.packets.p11.nid_ntc[idx46] = kcg_lit_int32(0);
  }
  outC->_L223.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L223.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(
      0);
  for (idx48 = 0; idx48 < 1; idx48++) {
    outC->_L223.session.m_TrainData.m_OnboardPhoneNumbers[idx48].valid = kcg_true;
    for (idx47 = 0; idx47 < 15; idx47++) {
      outC->_L223.session.m_TrainData.m_OnboardPhoneNumbers[idx48].telephoneNumber[idx47] =
        kcg_lit_int32(0);
    }
  }
  outC->_L223.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L223.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L223.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L223.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L223.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L223.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L223.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L223.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L223.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx49 = 0; idx49 < 4; idx49++) {
    outC->_L223.session.m_TrainData.m_TractionIdentities[idx49].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L223.session.m_TrainData.m_TractionIdentities[idx49].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx50 = 0; idx50 < 5; idx50++) {
    outC->_L223.session.m_TrainData.m_NationalSystemIdentities[idx50] =
      kcg_lit_int32(0);
  }
  outC->_L223.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L223.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L223.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L223.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L223.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L223.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L223.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L223.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L223.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L223.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L223.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L223.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L223.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L223.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L223.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L223.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L223.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L223.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L223.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L223.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L223.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L223.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L223.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L223.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L223.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L223.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L223.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L223.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L223.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L223.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L223.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L223.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L223.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L223.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx51 = 0; idx51 < 32; idx51++) {
    outC->_L223.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx51].d_loc =
      kcg_lit_int32(0);
    outC->_L223.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx51].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx52 = 0; idx52 < 16; idx52++) {
    outC->_L223.diagnostic[idx52].valid = kcg_true;
    outC->_L223.diagnostic[idx52].count = kcg_lit_int32(0);
    outC->_L223.diagnostic[idx52].timestamp = kcg_lit_int32(0);
    outC->_L223.diagnostic[idx52].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L223.diagnostic[idx52].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L223.diagnostic[idx52].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx55 = 0; idx55 < 8; idx55++) {
    outC->_L223.messageQueue.m_Entries[idx55].m_IsValid = kcg_true;
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx53 = 0; idx53 < 30; idx53++) {
      outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Messages.PacketHeaders[idx53].nid_packet =
        kcg_lit_int32(0);
      outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Messages.PacketHeaders[idx53].q_dir =
        Q_DIR_Reverse;
      outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Messages.PacketHeaders[idx53].valid =
        kcg_true;
      outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Messages.PacketHeaders[idx53].startAddress =
        kcg_lit_int32(0);
      outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Messages.PacketHeaders[idx53].endAddress =
        kcg_lit_int32(0);
    }
    for (idx54 = 0; idx54 < 500; idx54++) {
      outC->_L223.messageQueue.m_Entries[idx55].m_Entry.Messages.PacketData[idx54] =
        kcg_lit_int32(0);
    }
  }
  outC->_L223.clockk.m_Value = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L223.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx56 = 0; idx56 < 30; idx56++) {
    outC->_L223.lastSentTrackTrainMessage.Messages.PacketHeaders[idx56].nid_packet =
      kcg_lit_int32(0);
    outC->_L223.lastSentTrackTrainMessage.Messages.PacketHeaders[idx56].q_dir =
      Q_DIR_Reverse;
    outC->_L223.lastSentTrackTrainMessage.Messages.PacketHeaders[idx56].valid =
      kcg_true;
    outC->_L223.lastSentTrackTrainMessage.Messages.PacketHeaders[idx56].startAddress =
      kcg_lit_int32(0);
    outC->_L223.lastSentTrackTrainMessage.Messages.PacketHeaders[idx56].endAddress =
      kcg_lit_int32(0);
  }
  for (idx57 = 0; idx57 < 500; idx57++) {
    outC->_L223.lastSentTrackTrainMessage.Messages.PacketData[idx57] =
      kcg_lit_int32(0);
  }
  outC->_L220.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L220.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L220.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L220.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L220.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L220.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L220.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L220.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L220.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L220.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L220.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L220.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L220.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L220.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L220.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L220.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L220.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L220.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx58 = 0; idx58 < 32; idx58++) {
    outC->_L220.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx58].d_loc =
      kcg_lit_int32(0);
    outC->_L220.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx58].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L218.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L218.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(
      0);
  for (idx60 = 0; idx60 < 1; idx60++) {
    outC->_L218.session.m_TrainData.m_OnboardPhoneNumbers[idx60].valid = kcg_true;
    for (idx59 = 0; idx59 < 15; idx59++) {
      outC->_L218.session.m_TrainData.m_OnboardPhoneNumbers[idx60].telephoneNumber[idx59] =
        kcg_lit_int32(0);
    }
  }
  outC->_L218.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L218.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L218.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L218.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L218.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L218.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L218.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L218.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L218.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx61 = 0; idx61 < 4; idx61++) {
    outC->_L218.session.m_TrainData.m_TractionIdentities[idx61].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L218.session.m_TrainData.m_TractionIdentities[idx61].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx62 = 0; idx62 < 5; idx62++) {
    outC->_L218.session.m_TrainData.m_NationalSystemIdentities[idx62] =
      kcg_lit_int32(0);
  }
  outC->_L218.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L218.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L218.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L218.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L218.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L218.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L218.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L218.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L218.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L218.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L218.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L218.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L218.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L218.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L218.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L218.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L218.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L218.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L218.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L218.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L218.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L218.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L218.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L218.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L218.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L218.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L218.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L218.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L218.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L218.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L218.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L218.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L218.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L218.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx63 = 0; idx63 < 32; idx63++) {
    outC->_L218.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx63].d_loc =
      kcg_lit_int32(0);
    outC->_L218.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx63].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx64 = 0; idx64 < 16; idx64++) {
    outC->_L218.diagnostic[idx64].valid = kcg_true;
    outC->_L218.diagnostic[idx64].count = kcg_lit_int32(0);
    outC->_L218.diagnostic[idx64].timestamp = kcg_lit_int32(0);
    outC->_L218.diagnostic[idx64].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L218.diagnostic[idx64].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L218.diagnostic[idx64].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx67 = 0; idx67 < 8; idx67++) {
    outC->_L218.messageQueue.m_Entries[idx67].m_IsValid = kcg_true;
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx65 = 0; idx65 < 30; idx65++) {
      outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Messages.PacketHeaders[idx65].nid_packet =
        kcg_lit_int32(0);
      outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Messages.PacketHeaders[idx65].q_dir =
        Q_DIR_Reverse;
      outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Messages.PacketHeaders[idx65].valid =
        kcg_true;
      outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Messages.PacketHeaders[idx65].startAddress =
        kcg_lit_int32(0);
      outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Messages.PacketHeaders[idx65].endAddress =
        kcg_lit_int32(0);
    }
    for (idx66 = 0; idx66 < 500; idx66++) {
      outC->_L218.messageQueue.m_Entries[idx67].m_Entry.Messages.PacketData[idx66] =
        kcg_lit_int32(0);
    }
  }
  outC->_L218.clockk.m_Value = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L218.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx68 = 0; idx68 < 30; idx68++) {
    outC->_L218.lastSentTrackTrainMessage.Messages.PacketHeaders[idx68].nid_packet =
      kcg_lit_int32(0);
    outC->_L218.lastSentTrackTrainMessage.Messages.PacketHeaders[idx68].q_dir =
      Q_DIR_Reverse;
    outC->_L218.lastSentTrackTrainMessage.Messages.PacketHeaders[idx68].valid =
      kcg_true;
    outC->_L218.lastSentTrackTrainMessage.Messages.PacketHeaders[idx68].startAddress =
      kcg_lit_int32(0);
    outC->_L218.lastSentTrackTrainMessage.Messages.PacketHeaders[idx68].endAddress =
      kcg_lit_int32(0);
  }
  for (idx69 = 0; idx69 < 500; idx69++) {
    outC->_L218.lastSentTrackTrainMessage.Messages.PacketData[idx69] =
      kcg_lit_int32(0);
  }
  outC->_L217.Header.radioDevice = kcg_lit_int32(0);
  outC->_L217.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L217.Header.nid_message = kcg_lit_int32(0);
  outC->_L217.Header.t_train = kcg_lit_int32(0);
  outC->_L217.Header.m_ack = kcg_lit_int32(0);
  outC->_L217.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L217.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L217.Header.nid_em = kcg_lit_int32(0);
  outC->_L217.Header.q_scale = kcg_lit_int32(0);
  outC->_L217.Header.d_sr = kcg_lit_int32(0);
  outC->_L217.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L217.Header.d_ref = kcg_lit_int32(0);
  outC->_L217.Header.q_dir = kcg_lit_int32(0);
  outC->_L217.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L217.Header.m_version = kcg_lit_int32(0);
  for (idx70 = 0; idx70 < 30; idx70++) {
    outC->_L217.Messages.PacketHeaders[idx70].nid_packet = kcg_lit_int32(0);
    outC->_L217.Messages.PacketHeaders[idx70].q_dir = Q_DIR_Reverse;
    outC->_L217.Messages.PacketHeaders[idx70].valid = kcg_true;
    outC->_L217.Messages.PacketHeaders[idx70].startAddress = kcg_lit_int32(0);
    outC->_L217.Messages.PacketHeaders[idx70].endAddress = kcg_lit_int32(0);
  }
  for (idx71 = 0; idx71 < 500; idx71++) {
    outC->_L217.Messages.PacketData[idx71] = kcg_lit_int32(0);
  }
  outC->_L157.Message.valid = kcg_true;
  outC->_L157.Message.nid_message = kcg_lit_int32(0);
  outC->_L157.Message.l_message = kcg_lit_int32(0);
  outC->_L157.Message.t_train = kcg_lit_int32(0);
  outC->_L157.Message.nid_engine = kcg_lit_int32(0);
  outC->_L157.Message.field1 = kcg_lit_int32(0);
  outC->_L157.Message.field2 = kcg_lit_int32(0);
  outC->_L157.Message.field3 = kcg_lit_int32(0);
  for (idx72 = 0; idx72 < 50; idx72++) {
    outC->_L157.OptionalPackets[idx72] = kcg_lit_int32(0);
  }
  outC->outClock.m_Value = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.t_train_reference = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->outRadioTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx73 = 0; idx73 < 30; idx73++) {
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx73].nid_packet =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx73].q_dir =
      Q_DIR_Reverse;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx73].valid = kcg_true;
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx73].startAddress =
      kcg_lit_int32(0);
    outC->outRadioTrackTrainMessage.Messages.PacketHeaders[idx73].endAddress =
      kcg_lit_int32(0);
  }
  for (idx74 = 0; idx74 < 500; idx74++) {
    outC->outRadioTrackTrainMessage.Messages.PacketData[idx74] = kcg_lit_int32(0);
  }
  outC->outSessionManagement.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->outSessionManagement.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx76 = 0; idx76 < 1; idx76++) {
    outC->outSessionManagement.m_TrainData.m_OnboardPhoneNumbers[idx76].valid =
      kcg_true;
    for (idx75 = 0; idx75 < 15; idx75++) {
      outC->outSessionManagement.m_TrainData.m_OnboardPhoneNumbers[idx76].telephoneNumber[idx75] =
        kcg_lit_int32(0);
    }
  }
  outC->outSessionManagement.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->outSessionManagement.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outSessionManagement.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outSessionManagement.m_TrainData.l_train = kcg_lit_int32(0);
  outC->outSessionManagement.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->outSessionManagement.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outSessionManagement.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outSessionManagement.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outSessionManagement.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx77 = 0; idx77 < 4; idx77++) {
    outC->outSessionManagement.m_TrainData.m_TractionIdentities[idx77].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outSessionManagement.m_TrainData.m_TractionIdentities[idx77].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx78 = 0; idx78 < 5; idx78++) {
    outC->outSessionManagement.m_TrainData.m_NationalSystemIdentities[idx78] =
      kcg_lit_int32(0);
  }
  outC->outSessionManagement.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outSessionManagement.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outSessionManagement.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outSessionManagement.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outSessionManagement.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.v_train = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outSessionManagement.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outSessionManagement.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outSessionManagement.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->outSessionManagement.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  /* _L254=(RBC_Time_Pkg::RBC_Clock_Tick#1)/ */
  RBC_Clock_Tick_init_RBC_Time_Pkg(&outC->Context_RBC_Clock_Tick_1);
  /* _L245=(RBC_Messaging_Pkg::RadioTrackTrainMsgQueue#1)/ */
  RadioTrackTrainMsgQueue_init_RBC_Messaging_Pkg(
    &outC->Context_RadioTrackTrainMsgQueue_1);
  /* _L240=(RBC_Model_Pkg::RBC__ProcessController#1)/ */
  RBC__ProcessController_init_RBC_Model_Pkg(
    &outC->Context_RBC__ProcessController_1);
  /* _L239=(RBC_Messaging_Pkg::RadioTrainTrackInputHandler#1)/ */
  RadioTrainTrackInputHandler_init_RBC_Messaging_Pkg(
    &outC->Context_RadioTrainTrackInputHandler_1);
  /* _L218=(RBC_DataBus_Pkg::DataBusFactory#1)/ */
  DataBusFactory_init_RBC_DataBus_Pkg(&outC->Context_DataBusFactory_1);
  /* _L256=(RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg#1)/ */
  ToOldRadioTrainTrackMsg_init_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ToOldRadioTrainTrackMsg_1);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
    &outC->dataBus,
    (RBC_Data_T_RBC_DataBus_Pkg *) &RBC_DATA_BUS_DEFAULT_RBC_DataBus_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RBC_New_reset_RBC_Model_Pkg(outC_RBC_New_RBC_Model_Pkg *outC)
{
  /* _L254=(RBC_Time_Pkg::RBC_Clock_Tick#1)/ */
  RBC_Clock_Tick_reset_RBC_Time_Pkg(&outC->Context_RBC_Clock_Tick_1);
  /* _L245=(RBC_Messaging_Pkg::RadioTrackTrainMsgQueue#1)/ */
  RadioTrackTrainMsgQueue_reset_RBC_Messaging_Pkg(
    &outC->Context_RadioTrackTrainMsgQueue_1);
  /* _L240=(RBC_Model_Pkg::RBC__ProcessController#1)/ */
  RBC__ProcessController_reset_RBC_Model_Pkg(
    &outC->Context_RBC__ProcessController_1);
  /* _L239=(RBC_Messaging_Pkg::RadioTrainTrackInputHandler#1)/ */
  RadioTrainTrackInputHandler_reset_RBC_Messaging_Pkg(
    &outC->Context_RadioTrainTrackInputHandler_1);
  /* _L218=(RBC_DataBus_Pkg::DataBusFactory#1)/ */
  DataBusFactory_reset_RBC_DataBus_Pkg(&outC->Context_DataBusFactory_1);
  /* _L256=(RBC_Model_Pkg::TrainTrackMsgConversion::ToOldRadioTrainTrackMsg#1)/ */
  ToOldRadioTrainTrackMsg_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
    &outC->Context_ToOldRadioTrainTrackMsg_1);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(
    &outC->dataBus,
    (RBC_Data_T_RBC_DataBus_Pkg *) &RBC_DATA_BUS_DEFAULT_RBC_DataBus_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_New_RBC_Model_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

