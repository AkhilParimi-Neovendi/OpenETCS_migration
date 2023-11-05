/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RBC__PingTrain_RBC_Model_Pkg.h"

/* RBC_Model_Pkg::RBC__PingTrain/ */
void RBC__PingTrain_RBC_Model_Pkg(
  /* inForceTrigger/ */
  kcg_bool inForceTrigger,
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* inTriggeredRadioTrackTrainMessage/ */
  CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__PingTrain_RBC_Model_Pkg *outC)
{
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T messageQueue_partial;
  /* Level_2_or_3/ */
  kcg_bool Level_2_or_3_partial;
  /* messageQueue/ */
  _2_RadioTrackTrainMessageQueue_T _1_messageQueue_partial;
  /* Level_2_or_3/ */
  kcg_bool _2_Level_2_or_3_partial;
  /* Level_2_or_3/ */
  kcg_bool last_Level_2_or_3;
  /* lastRadioTrackTrainMessageWasSentTimestamp/ */
  T_TRAIN last_lastRadioTrackTrainMessageWasSentTimestamp;

  last_Level_2_or_3 = outC->Level_2_or_3;
  last_lastRadioTrackTrainMessageWasSentTimestamp =
    outC->lastRadioTrackTrainMessageWasSentTimestamp;
  outC->_L108 = T_NVCONTACT_UNLIMITED;
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L128, inDataBus);
  kcg_copy_DynamicConfig_T(&outC->_L129, &outC->_L128.config);
  /* _L76=(RBC_Config_Pkg::DynamicConfig__GetNationalParams#1)/ */
  DynamicConfig__GetNationa_RBC_Config_Pkg(
    &outC->_L129,
    &outC->Context_DynamicConfig__GetNationalParams_1);
  kcg_copy_NationalParams_T(
    &outC->_L76,
    &outC->Context_DynamicConfig__GetNationalParams_1.outNationalParams);
  /* _L75=(RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT#1)/ */
  NationalParams__Get_T_NVC_RBC_Config_Pkg(
    &outC->_L76,
    &outC->Context_NationalParams__Get_T_NVCONTACT_1);
  outC->_L75 = outC->Context_NationalParams__Get_T_NVCONTACT_1.out_T_NVCONTACT;
  outC->rbcContactTime = outC->_L75;
  outC->_L105 = outC->rbcContactTime;
  outC->_L99 = outC->_L105 < outC->_L108;
  outC->_L109 = T_NVCONTACT_DEFAULT;
  outC->_L104 = outC->rbcContactTime;
  outC->_L100 = outC->_L104 > outC->_L109;
  outC->_L96 = outC->_L100 & outC->_L99;
  outC->_L97 = outC->rbcContactTime;
  outC->_L101 = T_NVCONTACT_FACTOR;
  outC->_L103 = outC->_L101 * outC->_L97;
  outC->_L117 = last_lastRadioTrackTrainMessageWasSentTimestamp;
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L141, inDataBus);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L142,
    &outC->_L141.lastSentTrackTrainMessage);
  /* _L114=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#2)/ */
  RadioTrackTrainMessage__G_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L142,
    &outC->_4_Context_RadioTrackTrainMessage__GetHeader_2);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->_L114,
    &outC->_4_Context_RadioTrackTrainMessage__GetHeader_2.outRadioTrackTrainHeader);
  /* _L112=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
  _55_RadioTrackTrainHeader__Ge_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L114,
    &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
  outC->_L112 = outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2.out_T_TRAIN;
  /* _L115=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid#2)/ */
  RadioTrackTrainMessage__I_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_L142,
    &outC->Context_RadioTrackTrainMessage__IsValid_2);
  outC->_L115 = outC->Context_RadioTrackTrainMessage__IsValid_2.outIsValid;
  /* _L116= */
  if (outC->_L115) {
    outC->_L116 = outC->_L112;
  }
  else {
    outC->_L116 = outC->_L117;
  }
  outC->lastRadioTrackTrainMessageWasSentTimestamp = outC->_L116;
  outC->_L110 = outC->lastRadioTrackTrainMessageWasSentTimestamp;
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L133, inDataBus);
  kcg_copy_Clock_T(&outC->_L132, &outC->_L133.clockk);
  /* _L124=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_RBC_Time_Pkg(
    &outC->_L132,
    &outC->Context_Clock__GetSeconds_1);
  outC->_L124 = outC->Context_Clock__GetSeconds_1.outValue;
  outC->rbcTimestamp = outC->_L124;
  outC->_L98 = outC->rbcTimestamp;
  outC->_L111 = outC->_L98 - outC->_L110;
  outC->_L102 = outC->_L111 >= outC->_L103;
  outC->_L94 = RADIO_TRACK_TRAIN_MESSAGE_QUEUE_CAPACITY;
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L130, inDataBus);
  kcg_copy__2_RadioTrackTrainMessageQueue_T(
    &outC->_L131,
    &outC->_L130.messageQueue);
  /* _L74=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */
  _48_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
    &outC->_L131,
    &outC->_3_Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1);
  outC->_L74 =
    outC->_3_Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1.outRemainingCapacity;
  outC->remainingCapacity = outC->_L74;
  outC->_L107 = outC->remainingCapacity;
  outC->_L95 = outC->_L107 == outC->_L94;
  outC->_L106 = outC->_L95 & outC->_L102 & outC->_L96;
  outC->_L143 = inForceTrigger;
  outC->_L144 = outC->_L143 | outC->_L106;
  outC->trigger = outC->_L144;
  outC->IfBlock1_clock = outC->trigger;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L29_then_IfBlock1, inDataBus);
    kcg_copy__2_RadioTrackTrainMessageQueue_T(
      &outC->_L28_then_IfBlock1,
      &outC->_L29_then_IfBlock1.messageQueue);
    outC->_L5_then_IfBlock1 = T_TRAIN_MIN;
    outC->_L6_then_IfBlock1 = M_ACK_No_acknowledgement_required;
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L25_then_IfBlock1, inDataBus);
    kcg_copy_SessionManagement_T(
      &outC->_L24_then_IfBlock1,
      &outC->_L25_then_IfBlock1.session);
    /* IfBlock1:then:_L21=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */
    SessionManagement__GetPosData_RBC_Session_Pkg(
      &outC->_L24_then_IfBlock1,
      &outC->_2_Context_SessionManagement__GetPosData_3);
    kcg_copy_PosData_T(
      &outC->_L21_then_IfBlock1,
      &outC->_2_Context_SessionManagement__GetPosData_3.outPositionManagement);
    /* IfBlock1:then:_L20=(RBC_Session_Pkg::PosData__Get_NID_LRBG#3)/ */
    PosData__Get_NID_LRBG_RBC_Session_Pkg(
      &outC->_L21_then_IfBlock1,
      &outC->Context_PosData__Get_NID_LRBG_3);
    outC->_L20_then_IfBlock1 = outC->Context_PosData__Get_NID_LRBG_3.out_NID_LRBG;
    kcg_copy_P042_trackside_int_T_TM(
      &outC->_L33_then_IfBlock1,
      (P042_trackside_int_T_TM *) &P042_DEFAULT);
    kcg_copy_P042_trackside_int_T_TM(
      &outC->_L34_then_IfBlock1,
      (P042_trackside_int_T_TM *) &P042_RequestSessionTermination);
    outC->_L30_then_IfBlock1 = inForceTrigger;
    outC->_L93_then_IfBlock1 = last_Level_2_or_3;
    outC->_L90_then_IfBlock1 = M_LEVEL_Level_2;
    /* IfBlock1:then:_L80=(RBC_Session_Pkg::SessionManagement__GetPosData#11)/ */
    SessionManagement__GetPosData_RBC_Session_Pkg(
      &outC->_L24_then_IfBlock1,
      &outC->Context_SessionManagement__GetPosData_11);
    kcg_copy_PosData_T(
      &outC->_L80_then_IfBlock1,
      &outC->Context_SessionManagement__GetPosData_11.outPositionManagement);
    /* IfBlock1:then:_L79=(RBC_Session_Pkg::PosData__Get_M_LEVEL#8)/ */
    PosData__Get_M_LEVEL_RBC_Session_Pkg(
      &outC->_L80_then_IfBlock1,
      &outC->Context_PosData__Get_M_LEVEL_8);
    outC->_L79_then_IfBlock1 = outC->Context_PosData__Get_M_LEVEL_8.out_M_LEVEL;
    outC->_L89_then_IfBlock1 = outC->_L79_then_IfBlock1 == outC->_L90_then_IfBlock1;
    outC->_L91_then_IfBlock1 = M_LEVEL_Level_3;
    outC->_L88_then_IfBlock1 = outC->_L91_then_IfBlock1 == outC->_L79_then_IfBlock1;
    outC->_L87_then_IfBlock1 = outC->_L88_then_IfBlock1 | outC->_L89_then_IfBlock1;
    Level_2_or_3_partial = outC->_L87_then_IfBlock1;
    outC->_L94_then_IfBlock1 = Level_2_or_3_partial;
    outC->_L96_then_IfBlock1 = !outC->_L94_then_IfBlock1;
    outC->_L95_then_IfBlock1 = outC->_L96_then_IfBlock1 & outC->_L93_then_IfBlock1;
    outC->_L97_then_IfBlock1 = outC->_L95_then_IfBlock1 | outC->_L30_then_IfBlock1;
    /* IfBlock1:then:_L31= */
    if (outC->_L97_then_IfBlock1) {
      kcg_copy_P042_trackside_int_T_TM(
        &outC->_L31_then_IfBlock1,
        &outC->_L34_then_IfBlock1);
    }
    else {
      kcg_copy_P042_trackside_int_T_TM(
        &outC->_L31_then_IfBlock1,
        &outC->_L33_then_IfBlock1);
    }
    /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2#1)/ */
    _104_RadioTrackTrainFacto_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
      outC->_L5_then_IfBlock1,
      outC->_L6_then_IfBlock1,
      outC->_L20_then_IfBlock1,
      (P003V1_trackside_int_T_TM_baseline2 *) &P003_DEFAULT,
      (P005_trackside_int_T_TM *) &P005_DEFAULT,
      &outC->_L31_then_IfBlock1,
      (P057_trackside_int_T_TM *) &P057_DEFAULT,
      (P058_trackside_int_T_TM *) &P058_DEFAULT,
      &outC->Context_RadioTrackTrainFactory__CreateMsg024_BSL2_1);
    kcg_copy_CompressedRadioMessage_TM(
      &outC->_L1_then_IfBlock1,
      &outC->Context_RadioTrackTrainFactory__CreateMsg024_BSL2_1.outRadioTrackTrainMessage);
    /* IfBlock1:then:_L15=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#2)/ */
    _51_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
      &outC->_L1_then_IfBlock1,
      &outC->_1_Context_RadioTrackTrainMessageQueueEntry__Create_2);
    kcg_copy_RadioTrackTrainMessageQueueEntry_T(
      &outC->_L15_then_IfBlock1,
      &outC->_1_Context_RadioTrackTrainMessageQueueEntry__Create_2.outRadioTrackTrainMessageQueueEntry);
    /* IfBlock1:then:_L14=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#2)/ */
    _50_RadioTrackTrainMessageQue_RBC_Collections_Pkg(
      &outC->_L28_then_IfBlock1,
      &outC->_L15_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__TryPut_2);
    kcg_copy__2_RadioTrackTrainMessageQueue_T(
      &outC->_L14_then_IfBlock1,
      &outC->Context_RadioTrackTrainMessageQueue__TryPut_2.outRadioTrackTrainMessageQueue);
    kcg_copy__2_RadioTrackTrainMessageQueue_T(
      &messageQueue_partial,
      &outC->_L14_then_IfBlock1);
    kcg_copy__2_RadioTrackTrainMessageQueue_T(
      &outC->messageQueue,
      &messageQueue_partial);
  }
  else {
    kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L3_else_IfBlock1, inDataBus);
    kcg_copy__2_RadioTrackTrainMessageQueue_T(
      &outC->_L4_else_IfBlock1,
      &outC->_L3_else_IfBlock1.messageQueue);
    kcg_copy__2_RadioTrackTrainMessageQueue_T(
      &_1_messageQueue_partial,
      &outC->_L4_else_IfBlock1);
    kcg_copy__2_RadioTrackTrainMessageQueue_T(
      &outC->messageQueue,
      &_1_messageQueue_partial);
  }
  kcg_copy__2_RadioTrackTrainMessageQueue_T(&outC->_L140, &outC->messageQueue);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L138, inDataBus);
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->_L139, &outC->_L138);
  if (kcg_true) {
    kcg_copy__2_RadioTrackTrainMessageQueue_T(
      &outC->_L139.messageQueue,
      &outC->_L140);
  }
  kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(&outC->outDataBus, &outC->_L139);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->_L123,
    inTriggeredRadioTrackTrainMessage);
  kcg_copy_CompressedRadioMessage_TM(
    &outC->outTriggeredRadioTrackTrainMessage,
    &outC->_L123);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->_L120,
    inRadioTrainTrackMessage);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &outC->outRadioTrainTrackMessage,
    &outC->_L120);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->Level_2_or_3 = Level_2_or_3_partial;
  }
  else {
    _2_Level_2_or_3_partial = last_Level_2_or_3;
    outC->Level_2_or_3 = _2_Level_2_or_3_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RBC__PingTrain_init_RBC_Model_Pkg(outC_RBC__PingTrain_RBC_Model_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;
  kcg_size idx32;
  kcg_size idx33;
  kcg_size idx34;
  kcg_size idx35;
  kcg_size idx36;
  kcg_size idx37;
  kcg_size idx38;
  kcg_size idx39;
  kcg_size idx40;
  kcg_size idx41;
  kcg_size idx42;
  kcg_size idx43;
  kcg_size idx44;
  kcg_size idx45;
  kcg_size idx46;
  kcg_size idx47;
  kcg_size idx48;
  kcg_size idx49;
  kcg_size idx50;
  kcg_size idx51;
  kcg_size idx52;
  kcg_size idx53;
  kcg_size idx54;
  kcg_size idx55;
  kcg_size idx56;
  kcg_size idx57;
  kcg_size idx58;
  kcg_size idx59;
  kcg_size idx60;
  kcg_size idx61;
  kcg_size idx62;
  kcg_size idx63;
  kcg_size idx64;
  kcg_size idx65;
  kcg_size idx66;
  kcg_size idx67;
  kcg_size idx68;
  kcg_size idx69;
  kcg_size idx70;
  kcg_size idx71;
  kcg_size idx72;
  kcg_size idx73;
  kcg_size idx74;
  kcg_size idx75;
  kcg_size idx76;
  kcg_size idx77;
  kcg_size idx78;
  kcg_size idx79;
  kcg_size idx80;
  kcg_size idx81;
  kcg_size idx82;
  kcg_size idx83;
  kcg_size idx84;
  kcg_size idx85;
  kcg_size idx86;
  kcg_size idx87;
  kcg_size idx88;
  kcg_size idx89;
  kcg_size idx90;
  kcg_size idx91;
  kcg_size idx92;
  kcg_size idx93;
  kcg_size idx94;
  kcg_size idx95;
  kcg_size idx96;
  kcg_size idx97;
  kcg_size idx98;
  kcg_size idx99;
  kcg_size idx100;
  kcg_size idx101;
  kcg_size idx102;
  kcg_size idx103;
  kcg_size idx104;
  kcg_size idx105;
  kcg_size idx106;
  kcg_size idx107;
  kcg_size idx108;
  kcg_size idx109;
  kcg_size idx110;
  kcg_size idx111;
  kcg_size idx112;
  kcg_size idx113;
  kcg_size idx114;
  kcg_size idx115;
  kcg_size idx116;
  kcg_size idx117;
  kcg_size idx118;
  kcg_size idx119;
  kcg_size idx120;
  kcg_size idx121;
  kcg_size idx122;
  kcg_size idx123;
  kcg_size idx124;
  kcg_size idx125;
  kcg_size idx126;
  kcg_size idx127;
  kcg_size idx128;
  kcg_size idx129;
  kcg_size idx130;
  kcg_size idx131;
  kcg_size idx132;
  kcg_size idx133;
  kcg_size idx134;
  kcg_size idx135;
  kcg_size idx136;
  kcg_size idx137;
  kcg_size idx138;
  kcg_size idx139;
  kcg_size idx140;
  kcg_size idx141;
  kcg_size idx142;
  kcg_size idx143;
  kcg_size idx144;
  kcg_size idx145;
  kcg_size idx146;
  kcg_size idx147;
  kcg_size idx148;
  kcg_size idx149;
  kcg_size idx150;

  outC->_L144 = kcg_true;
  outC->_L143 = kcg_true;
  outC->_L142.Header.radioDevice = kcg_lit_int32(0);
  outC->_L142.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L142.Header.nid_message = kcg_lit_int32(0);
  outC->_L142.Header.t_train = kcg_lit_int32(0);
  outC->_L142.Header.m_ack = kcg_lit_int32(0);
  outC->_L142.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L142.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L142.Header.nid_em = kcg_lit_int32(0);
  outC->_L142.Header.q_scale = kcg_lit_int32(0);
  outC->_L142.Header.d_sr = kcg_lit_int32(0);
  outC->_L142.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L142.Header.d_ref = kcg_lit_int32(0);
  outC->_L142.Header.q_dir = kcg_lit_int32(0);
  outC->_L142.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L142.Header.m_version = kcg_lit_int32(0);
  for (idx = 0; idx < 30; idx++) {
    outC->_L142.Messages.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L142.Messages.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L142.Messages.PacketHeaders[idx].valid = kcg_true;
    outC->_L142.Messages.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L142.Messages.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L142.Messages.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L141.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L141.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(
      0);
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L141.session.m_TrainData.m_OnboardPhoneNumbers[idx3].valid = kcg_true;
    for (idx2 = 0; idx2 < 15; idx2++) {
      outC->_L141.session.m_TrainData.m_OnboardPhoneNumbers[idx3].telephoneNumber[idx2] =
        kcg_lit_int32(0);
    }
  }
  outC->_L141.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L141.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L141.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L141.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L141.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L141.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L141.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L141.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L141.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L141.session.m_TrainData.m_TractionIdentities[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L141.session.m_TrainData.m_TractionIdentities[idx4].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L141.session.m_TrainData.m_NationalSystemIdentities[idx5] =
      kcg_lit_int32(0);
  }
  outC->_L141.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L141.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L141.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L141.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L141.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L141.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L141.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L141.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L141.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L141.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L141.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L141.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L141.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L141.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L141.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L141.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L141.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L141.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L141.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L141.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L141.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L141.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L141.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L141.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L141.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L141.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L141.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L141.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L141.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L141.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L141.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L141.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L141.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L141.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L141.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx6].d_loc =
      kcg_lit_int32(0);
    outC->_L141.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx6].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx7 = 0; idx7 < 16; idx7++) {
    outC->_L141.diagnostic[idx7].valid = kcg_true;
    outC->_L141.diagnostic[idx7].count = kcg_lit_int32(0);
    outC->_L141.diagnostic[idx7].timestamp = kcg_lit_int32(0);
    outC->_L141.diagnostic[idx7].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L141.diagnostic[idx7].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L141.diagnostic[idx7].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx10 = 0; idx10 < 8; idx10++) {
    outC->_L141.messageQueue.m_Entries[idx10].m_IsValid = kcg_true;
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx8 = 0; idx8 < 30; idx8++) {
      outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].nid_packet =
        kcg_lit_int32(0);
      outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].q_dir =
        Q_DIR_Reverse;
      outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].valid =
        kcg_true;
      outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].startAddress =
        kcg_lit_int32(0);
      outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketHeaders[idx8].endAddress =
        kcg_lit_int32(0);
    }
    for (idx9 = 0; idx9 < 500; idx9++) {
      outC->_L141.messageQueue.m_Entries[idx10].m_Entry.Messages.PacketData[idx9] =
        kcg_lit_int32(0);
    }
  }
  outC->_L141.clockk.m_Value = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L141.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->_L141.lastSentTrackTrainMessage.Messages.PacketHeaders[idx11].nid_packet =
      kcg_lit_int32(0);
    outC->_L141.lastSentTrackTrainMessage.Messages.PacketHeaders[idx11].q_dir =
      Q_DIR_Reverse;
    outC->_L141.lastSentTrackTrainMessage.Messages.PacketHeaders[idx11].valid =
      kcg_true;
    outC->_L141.lastSentTrackTrainMessage.Messages.PacketHeaders[idx11].startAddress =
      kcg_lit_int32(0);
    outC->_L141.lastSentTrackTrainMessage.Messages.PacketHeaders[idx11].endAddress =
      kcg_lit_int32(0);
  }
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->_L141.lastSentTrackTrainMessage.Messages.PacketData[idx12] =
      kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 8; idx15++) {
    outC->_L140.m_Entries[idx15].m_IsValid = kcg_true;
    outC->_L140.m_Entries[idx15].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
    outC->_L140.m_Entries[idx15].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx13 = 0; idx13 < 30; idx13++) {
      outC->_L140.m_Entries[idx15].m_Entry.Messages.PacketHeaders[idx13].nid_packet =
        kcg_lit_int32(0);
      outC->_L140.m_Entries[idx15].m_Entry.Messages.PacketHeaders[idx13].q_dir =
        Q_DIR_Reverse;
      outC->_L140.m_Entries[idx15].m_Entry.Messages.PacketHeaders[idx13].valid =
        kcg_true;
      outC->_L140.m_Entries[idx15].m_Entry.Messages.PacketHeaders[idx13].startAddress =
        kcg_lit_int32(0);
      outC->_L140.m_Entries[idx15].m_Entry.Messages.PacketHeaders[idx13].endAddress =
        kcg_lit_int32(0);
    }
    for (idx14 = 0; idx14 < 500; idx14++) {
      outC->_L140.m_Entries[idx15].m_Entry.Messages.PacketData[idx14] =
        kcg_lit_int32(0);
    }
  }
  outC->_L139.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L139.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(
      0);
  for (idx17 = 0; idx17 < 1; idx17++) {
    outC->_L139.session.m_TrainData.m_OnboardPhoneNumbers[idx17].valid = kcg_true;
    for (idx16 = 0; idx16 < 15; idx16++) {
      outC->_L139.session.m_TrainData.m_OnboardPhoneNumbers[idx17].telephoneNumber[idx16] =
        kcg_lit_int32(0);
    }
  }
  outC->_L139.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L139.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L139.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L139.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L139.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L139.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L139.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L139.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L139.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 4; idx18++) {
    outC->_L139.session.m_TrainData.m_TractionIdentities[idx18].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L139.session.m_TrainData.m_TractionIdentities[idx18].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->_L139.session.m_TrainData.m_NationalSystemIdentities[idx19] =
      kcg_lit_int32(0);
  }
  outC->_L139.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L139.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L139.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L139.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L139.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L139.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L139.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L139.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L139.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L139.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L139.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L139.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L139.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L139.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L139.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L139.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L139.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L139.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L139.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L139.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L139.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L139.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L139.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L139.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L139.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L139.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L139.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L139.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L139.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L139.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L139.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L139.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L139.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L139.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 32; idx20++) {
    outC->_L139.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx20].d_loc =
      kcg_lit_int32(0);
    outC->_L139.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx20].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx21 = 0; idx21 < 16; idx21++) {
    outC->_L139.diagnostic[idx21].valid = kcg_true;
    outC->_L139.diagnostic[idx21].count = kcg_lit_int32(0);
    outC->_L139.diagnostic[idx21].timestamp = kcg_lit_int32(0);
    outC->_L139.diagnostic[idx21].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L139.diagnostic[idx21].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L139.diagnostic[idx21].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx24 = 0; idx24 < 8; idx24++) {
    outC->_L139.messageQueue.m_Entries[idx24].m_IsValid = kcg_true;
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx22 = 0; idx22 < 30; idx22++) {
      outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketHeaders[idx22].nid_packet =
        kcg_lit_int32(0);
      outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketHeaders[idx22].q_dir =
        Q_DIR_Reverse;
      outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketHeaders[idx22].valid =
        kcg_true;
      outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketHeaders[idx22].startAddress =
        kcg_lit_int32(0);
      outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketHeaders[idx22].endAddress =
        kcg_lit_int32(0);
    }
    for (idx23 = 0; idx23 < 500; idx23++) {
      outC->_L139.messageQueue.m_Entries[idx24].m_Entry.Messages.PacketData[idx23] =
        kcg_lit_int32(0);
    }
  }
  outC->_L139.clockk.m_Value = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L139.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L139.lastSentTrackTrainMessage.Messages.PacketHeaders[idx25].nid_packet =
      kcg_lit_int32(0);
    outC->_L139.lastSentTrackTrainMessage.Messages.PacketHeaders[idx25].q_dir =
      Q_DIR_Reverse;
    outC->_L139.lastSentTrackTrainMessage.Messages.PacketHeaders[idx25].valid =
      kcg_true;
    outC->_L139.lastSentTrackTrainMessage.Messages.PacketHeaders[idx25].startAddress =
      kcg_lit_int32(0);
    outC->_L139.lastSentTrackTrainMessage.Messages.PacketHeaders[idx25].endAddress =
      kcg_lit_int32(0);
  }
  for (idx26 = 0; idx26 < 500; idx26++) {
    outC->_L139.lastSentTrackTrainMessage.Messages.PacketData[idx26] =
      kcg_lit_int32(0);
  }
  outC->_L138.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L138.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(
      0);
  for (idx28 = 0; idx28 < 1; idx28++) {
    outC->_L138.session.m_TrainData.m_OnboardPhoneNumbers[idx28].valid = kcg_true;
    for (idx27 = 0; idx27 < 15; idx27++) {
      outC->_L138.session.m_TrainData.m_OnboardPhoneNumbers[idx28].telephoneNumber[idx27] =
        kcg_lit_int32(0);
    }
  }
  outC->_L138.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L138.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L138.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L138.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L138.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L138.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L138.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L138.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L138.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx29 = 0; idx29 < 4; idx29++) {
    outC->_L138.session.m_TrainData.m_TractionIdentities[idx29].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L138.session.m_TrainData.m_TractionIdentities[idx29].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx30 = 0; idx30 < 5; idx30++) {
    outC->_L138.session.m_TrainData.m_NationalSystemIdentities[idx30] =
      kcg_lit_int32(0);
  }
  outC->_L138.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L138.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L138.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L138.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L138.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L138.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L138.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L138.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L138.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L138.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L138.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L138.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L138.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L138.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L138.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L138.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L138.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L138.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L138.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L138.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L138.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L138.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L138.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L138.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L138.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L138.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L138.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L138.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L138.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L138.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L138.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L138.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L138.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L138.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx31 = 0; idx31 < 32; idx31++) {
    outC->_L138.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx31].d_loc =
      kcg_lit_int32(0);
    outC->_L138.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx31].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx32 = 0; idx32 < 16; idx32++) {
    outC->_L138.diagnostic[idx32].valid = kcg_true;
    outC->_L138.diagnostic[idx32].count = kcg_lit_int32(0);
    outC->_L138.diagnostic[idx32].timestamp = kcg_lit_int32(0);
    outC->_L138.diagnostic[idx32].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L138.diagnostic[idx32].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L138.diagnostic[idx32].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx35 = 0; idx35 < 8; idx35++) {
    outC->_L138.messageQueue.m_Entries[idx35].m_IsValid = kcg_true;
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx33 = 0; idx33 < 30; idx33++) {
      outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Messages.PacketHeaders[idx33].nid_packet =
        kcg_lit_int32(0);
      outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Messages.PacketHeaders[idx33].q_dir =
        Q_DIR_Reverse;
      outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Messages.PacketHeaders[idx33].valid =
        kcg_true;
      outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Messages.PacketHeaders[idx33].startAddress =
        kcg_lit_int32(0);
      outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Messages.PacketHeaders[idx33].endAddress =
        kcg_lit_int32(0);
    }
    for (idx34 = 0; idx34 < 500; idx34++) {
      outC->_L138.messageQueue.m_Entries[idx35].m_Entry.Messages.PacketData[idx34] =
        kcg_lit_int32(0);
    }
  }
  outC->_L138.clockk.m_Value = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L138.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->_L138.lastSentTrackTrainMessage.Messages.PacketHeaders[idx36].nid_packet =
      kcg_lit_int32(0);
    outC->_L138.lastSentTrackTrainMessage.Messages.PacketHeaders[idx36].q_dir =
      Q_DIR_Reverse;
    outC->_L138.lastSentTrackTrainMessage.Messages.PacketHeaders[idx36].valid =
      kcg_true;
    outC->_L138.lastSentTrackTrainMessage.Messages.PacketHeaders[idx36].startAddress =
      kcg_lit_int32(0);
    outC->_L138.lastSentTrackTrainMessage.Messages.PacketHeaders[idx36].endAddress =
      kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->_L138.lastSentTrackTrainMessage.Messages.PacketData[idx37] =
      kcg_lit_int32(0);
  }
  outC->_L132.m_Value = kcg_lit_int32(0);
  outC->_L133.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L133.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(
      0);
  for (idx39 = 0; idx39 < 1; idx39++) {
    outC->_L133.session.m_TrainData.m_OnboardPhoneNumbers[idx39].valid = kcg_true;
    for (idx38 = 0; idx38 < 15; idx38++) {
      outC->_L133.session.m_TrainData.m_OnboardPhoneNumbers[idx39].telephoneNumber[idx38] =
        kcg_lit_int32(0);
    }
  }
  outC->_L133.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L133.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L133.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L133.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L133.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L133.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L133.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L133.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L133.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx40 = 0; idx40 < 4; idx40++) {
    outC->_L133.session.m_TrainData.m_TractionIdentities[idx40].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L133.session.m_TrainData.m_TractionIdentities[idx40].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx41 = 0; idx41 < 5; idx41++) {
    outC->_L133.session.m_TrainData.m_NationalSystemIdentities[idx41] =
      kcg_lit_int32(0);
  }
  outC->_L133.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L133.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L133.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L133.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L133.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L133.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L133.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L133.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L133.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L133.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L133.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L133.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L133.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L133.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L133.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L133.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L133.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L133.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L133.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L133.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L133.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L133.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L133.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L133.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L133.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L133.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L133.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L133.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L133.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L133.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L133.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L133.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L133.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L133.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx42 = 0; idx42 < 32; idx42++) {
    outC->_L133.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx42].d_loc =
      kcg_lit_int32(0);
    outC->_L133.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx42].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx43 = 0; idx43 < 16; idx43++) {
    outC->_L133.diagnostic[idx43].valid = kcg_true;
    outC->_L133.diagnostic[idx43].count = kcg_lit_int32(0);
    outC->_L133.diagnostic[idx43].timestamp = kcg_lit_int32(0);
    outC->_L133.diagnostic[idx43].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L133.diagnostic[idx43].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L133.diagnostic[idx43].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx46 = 0; idx46 < 8; idx46++) {
    outC->_L133.messageQueue.m_Entries[idx46].m_IsValid = kcg_true;
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx44 = 0; idx44 < 30; idx44++) {
      outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Messages.PacketHeaders[idx44].nid_packet =
        kcg_lit_int32(0);
      outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Messages.PacketHeaders[idx44].q_dir =
        Q_DIR_Reverse;
      outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Messages.PacketHeaders[idx44].valid =
        kcg_true;
      outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Messages.PacketHeaders[idx44].startAddress =
        kcg_lit_int32(0);
      outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Messages.PacketHeaders[idx44].endAddress =
        kcg_lit_int32(0);
    }
    for (idx45 = 0; idx45 < 500; idx45++) {
      outC->_L133.messageQueue.m_Entries[idx46].m_Entry.Messages.PacketData[idx45] =
        kcg_lit_int32(0);
    }
  }
  outC->_L133.clockk.m_Value = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L133.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx47 = 0; idx47 < 30; idx47++) {
    outC->_L133.lastSentTrackTrainMessage.Messages.PacketHeaders[idx47].nid_packet =
      kcg_lit_int32(0);
    outC->_L133.lastSentTrackTrainMessage.Messages.PacketHeaders[idx47].q_dir =
      Q_DIR_Reverse;
    outC->_L133.lastSentTrackTrainMessage.Messages.PacketHeaders[idx47].valid =
      kcg_true;
    outC->_L133.lastSentTrackTrainMessage.Messages.PacketHeaders[idx47].startAddress =
      kcg_lit_int32(0);
    outC->_L133.lastSentTrackTrainMessage.Messages.PacketHeaders[idx47].endAddress =
      kcg_lit_int32(0);
  }
  for (idx48 = 0; idx48 < 500; idx48++) {
    outC->_L133.lastSentTrackTrainMessage.Messages.PacketData[idx48] =
      kcg_lit_int32(0);
  }
  outC->_L130.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L130.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(
      0);
  for (idx50 = 0; idx50 < 1; idx50++) {
    outC->_L130.session.m_TrainData.m_OnboardPhoneNumbers[idx50].valid = kcg_true;
    for (idx49 = 0; idx49 < 15; idx49++) {
      outC->_L130.session.m_TrainData.m_OnboardPhoneNumbers[idx50].telephoneNumber[idx49] =
        kcg_lit_int32(0);
    }
  }
  outC->_L130.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L130.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L130.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L130.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L130.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L130.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L130.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L130.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L130.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx51 = 0; idx51 < 4; idx51++) {
    outC->_L130.session.m_TrainData.m_TractionIdentities[idx51].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L130.session.m_TrainData.m_TractionIdentities[idx51].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx52 = 0; idx52 < 5; idx52++) {
    outC->_L130.session.m_TrainData.m_NationalSystemIdentities[idx52] =
      kcg_lit_int32(0);
  }
  outC->_L130.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L130.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L130.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L130.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L130.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L130.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L130.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L130.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L130.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L130.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L130.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L130.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L130.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L130.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L130.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L130.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L130.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L130.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L130.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L130.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L130.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L130.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L130.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L130.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L130.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L130.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L130.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L130.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L130.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L130.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L130.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L130.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L130.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L130.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx53 = 0; idx53 < 32; idx53++) {
    outC->_L130.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx53].d_loc =
      kcg_lit_int32(0);
    outC->_L130.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx53].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx54 = 0; idx54 < 16; idx54++) {
    outC->_L130.diagnostic[idx54].valid = kcg_true;
    outC->_L130.diagnostic[idx54].count = kcg_lit_int32(0);
    outC->_L130.diagnostic[idx54].timestamp = kcg_lit_int32(0);
    outC->_L130.diagnostic[idx54].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L130.diagnostic[idx54].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L130.diagnostic[idx54].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx57 = 0; idx57 < 8; idx57++) {
    outC->_L130.messageQueue.m_Entries[idx57].m_IsValid = kcg_true;
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx55 = 0; idx55 < 30; idx55++) {
      outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Messages.PacketHeaders[idx55].nid_packet =
        kcg_lit_int32(0);
      outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Messages.PacketHeaders[idx55].q_dir =
        Q_DIR_Reverse;
      outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Messages.PacketHeaders[idx55].valid =
        kcg_true;
      outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Messages.PacketHeaders[idx55].startAddress =
        kcg_lit_int32(0);
      outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Messages.PacketHeaders[idx55].endAddress =
        kcg_lit_int32(0);
    }
    for (idx56 = 0; idx56 < 500; idx56++) {
      outC->_L130.messageQueue.m_Entries[idx57].m_Entry.Messages.PacketData[idx56] =
        kcg_lit_int32(0);
    }
  }
  outC->_L130.clockk.m_Value = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L130.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx58 = 0; idx58 < 30; idx58++) {
    outC->_L130.lastSentTrackTrainMessage.Messages.PacketHeaders[idx58].nid_packet =
      kcg_lit_int32(0);
    outC->_L130.lastSentTrackTrainMessage.Messages.PacketHeaders[idx58].q_dir =
      Q_DIR_Reverse;
    outC->_L130.lastSentTrackTrainMessage.Messages.PacketHeaders[idx58].valid =
      kcg_true;
    outC->_L130.lastSentTrackTrainMessage.Messages.PacketHeaders[idx58].startAddress =
      kcg_lit_int32(0);
    outC->_L130.lastSentTrackTrainMessage.Messages.PacketHeaders[idx58].endAddress =
      kcg_lit_int32(0);
  }
  for (idx59 = 0; idx59 < 500; idx59++) {
    outC->_L130.lastSentTrackTrainMessage.Messages.PacketData[idx59] =
      kcg_lit_int32(0);
  }
  for (idx62 = 0; idx62 < 8; idx62++) {
    outC->_L131.m_Entries[idx62].m_IsValid = kcg_true;
    outC->_L131.m_Entries[idx62].m_Entry.Header.radioDevice = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.nid_message = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
    outC->_L131.m_Entries[idx62].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx60 = 0; idx60 < 30; idx60++) {
      outC->_L131.m_Entries[idx62].m_Entry.Messages.PacketHeaders[idx60].nid_packet =
        kcg_lit_int32(0);
      outC->_L131.m_Entries[idx62].m_Entry.Messages.PacketHeaders[idx60].q_dir =
        Q_DIR_Reverse;
      outC->_L131.m_Entries[idx62].m_Entry.Messages.PacketHeaders[idx60].valid =
        kcg_true;
      outC->_L131.m_Entries[idx62].m_Entry.Messages.PacketHeaders[idx60].startAddress =
        kcg_lit_int32(0);
      outC->_L131.m_Entries[idx62].m_Entry.Messages.PacketHeaders[idx60].endAddress =
        kcg_lit_int32(0);
    }
    for (idx61 = 0; idx61 < 500; idx61++) {
      outC->_L131.m_Entries[idx62].m_Entry.Messages.PacketData[idx61] =
        kcg_lit_int32(0);
    }
  }
  outC->_L129.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L129.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L129.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L129.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L129.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L129.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L129.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L129.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L129.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L129.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L129.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L129.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L129.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L129.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L129.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L129.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L129.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L129.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx63 = 0; idx63 < 32; idx63++) {
    outC->_L129.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx63].d_loc =
      kcg_lit_int32(0);
    outC->_L129.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx63].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L128.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L128.session.m_TrainData.m_NumberOfOnboardPhoneNumbers = kcg_lit_int32(
      0);
  for (idx65 = 0; idx65 < 1; idx65++) {
    outC->_L128.session.m_TrainData.m_OnboardPhoneNumbers[idx65].valid = kcg_true;
    for (idx64 = 0; idx64 < 15; idx64++) {
      outC->_L128.session.m_TrainData.m_OnboardPhoneNumbers[idx65].telephoneNumber[idx64] =
        kcg_lit_int32(0);
    }
  }
  outC->_L128.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L128.session.m_TrainData.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L128.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L128.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L128.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L128.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L128.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L128.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L128.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx66 = 0; idx66 < 4; idx66++) {
    outC->_L128.session.m_TrainData.m_TractionIdentities[idx66].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L128.session.m_TrainData.m_TractionIdentities[idx66].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx67 = 0; idx67 < 5; idx67++) {
    outC->_L128.session.m_TrainData.m_NationalSystemIdentities[idx67] =
      kcg_lit_int32(0);
  }
  outC->_L128.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L128.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L128.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L128.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L128.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L128.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L128.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L128.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L128.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L128.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L128.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L128.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L128.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L128.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L128.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L128.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L128.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L128.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L128.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L128.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L128.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L128.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L128.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L128.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L128.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L128.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L128.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L128.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L128.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L128.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L128.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L128.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L128.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L128.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx68 = 0; idx68 < 32; idx68++) {
    outC->_L128.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx68].d_loc =
      kcg_lit_int32(0);
    outC->_L128.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx68].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx69 = 0; idx69 < 16; idx69++) {
    outC->_L128.diagnostic[idx69].valid = kcg_true;
    outC->_L128.diagnostic[idx69].count = kcg_lit_int32(0);
    outC->_L128.diagnostic[idx69].timestamp = kcg_lit_int32(0);
    outC->_L128.diagnostic[idx69].diagType = DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L128.diagnostic[idx69].diagSrc = DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L128.diagnostic[idx69].diagText = DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx72 = 0; idx72 < 8; idx72++) {
    outC->_L128.messageQueue.m_Entries[idx72].m_IsValid = kcg_true;
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx70 = 0; idx70 < 30; idx70++) {
      outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketHeaders[idx70].nid_packet =
        kcg_lit_int32(0);
      outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketHeaders[idx70].q_dir =
        Q_DIR_Reverse;
      outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketHeaders[idx70].valid =
        kcg_true;
      outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketHeaders[idx70].startAddress =
        kcg_lit_int32(0);
      outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketHeaders[idx70].endAddress =
        kcg_lit_int32(0);
    }
    for (idx71 = 0; idx71 < 500; idx71++) {
      outC->_L128.messageQueue.m_Entries[idx72].m_Entry.Messages.PacketData[idx71] =
        kcg_lit_int32(0);
    }
  }
  outC->_L128.clockk.m_Value = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L128.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx73 = 0; idx73 < 30; idx73++) {
    outC->_L128.lastSentTrackTrainMessage.Messages.PacketHeaders[idx73].nid_packet =
      kcg_lit_int32(0);
    outC->_L128.lastSentTrackTrainMessage.Messages.PacketHeaders[idx73].q_dir =
      Q_DIR_Reverse;
    outC->_L128.lastSentTrackTrainMessage.Messages.PacketHeaders[idx73].valid =
      kcg_true;
    outC->_L128.lastSentTrackTrainMessage.Messages.PacketHeaders[idx73].startAddress =
      kcg_lit_int32(0);
    outC->_L128.lastSentTrackTrainMessage.Messages.PacketHeaders[idx73].endAddress =
      kcg_lit_int32(0);
  }
  for (idx74 = 0; idx74 < 500; idx74++) {
    outC->_L128.lastSentTrackTrainMessage.Messages.PacketData[idx74] =
      kcg_lit_int32(0);
  }
  outC->_L124 = kcg_lit_int32(0);
  outC->_L120.present = kcg_true;
  outC->_L120.header.present = kcg_true;
  outC->_L120.header.nid_message = kcg_lit_int32(0);
  outC->_L120.header.t_train = kcg_lit_int32(0);
  outC->_L120.header.nid_engine = kcg_lit_int32(0);
  outC->_L120.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L120.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L120.header.xNID_EM = kcg_lit_int32(0);
  outC->_L120.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L120.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L120.packets.p0.valid = kcg_true;
  outC->_L120.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L120.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L120.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L120.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L120.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L120.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L120.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L120.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L120.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L120.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L120.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L120.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L120.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L120.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L120.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L120.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L120.packets.p1.valid = kcg_true;
  outC->_L120.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L120.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L120.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L120.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L120.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L120.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L120.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L120.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L120.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L120.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L120.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L120.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L120.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L120.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L120.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L120.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L120.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L120.packets.p3.valid = kcg_true;
  outC->_L120.packets.p3.number = kcg_lit_int32(0);
  for (idx76 = 0; idx76 < 1; idx76++) {
    outC->_L120.packets.p3.aNID_RADIO[idx76].valid = kcg_true;
    for (idx75 = 0; idx75 < 15; idx75++) {
      outC->_L120.packets.p3.aNID_RADIO[idx76].telephoneNumber[idx75] =
        kcg_lit_int32(0);
    }
  }
  outC->_L120.packets.p4.valid = kcg_true;
  outC->_L120.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L120.packets.p5.valid = kcg_true;
  outC->_L120.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L120.packets.p9.valid = kcg_true;
  outC->_L120.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L120.packets.p11.valid = kcg_true;
  outC->_L120.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L120.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L120.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L120.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L120.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L120.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L120.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L120.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L120.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx77 = 0; idx77 < 4; idx77++) {
    outC->_L120.packets.p11.tractionIdentity[idx77].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L120.packets.p11.tractionIdentity[idx77].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L120.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx78 = 0; idx78 < 5; idx78++) {
    outC->_L120.packets.p11.nid_ntc[idx78] = kcg_lit_int32(0);
  }
  outC->_L123.Header.radioDevice = kcg_lit_int32(0);
  outC->_L123.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L123.Header.nid_message = kcg_lit_int32(0);
  outC->_L123.Header.t_train = kcg_lit_int32(0);
  outC->_L123.Header.m_ack = kcg_lit_int32(0);
  outC->_L123.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L123.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L123.Header.nid_em = kcg_lit_int32(0);
  outC->_L123.Header.q_scale = kcg_lit_int32(0);
  outC->_L123.Header.d_sr = kcg_lit_int32(0);
  outC->_L123.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L123.Header.d_ref = kcg_lit_int32(0);
  outC->_L123.Header.q_dir = kcg_lit_int32(0);
  outC->_L123.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L123.Header.m_version = kcg_lit_int32(0);
  for (idx79 = 0; idx79 < 30; idx79++) {
    outC->_L123.Messages.PacketHeaders[idx79].nid_packet = kcg_lit_int32(0);
    outC->_L123.Messages.PacketHeaders[idx79].q_dir = Q_DIR_Reverse;
    outC->_L123.Messages.PacketHeaders[idx79].valid = kcg_true;
    outC->_L123.Messages.PacketHeaders[idx79].startAddress = kcg_lit_int32(0);
    outC->_L123.Messages.PacketHeaders[idx79].endAddress = kcg_lit_int32(0);
  }
  for (idx80 = 0; idx80 < 500; idx80++) {
    outC->_L123.Messages.PacketData[idx80] = kcg_lit_int32(0);
  }
  outC->_L112 = kcg_lit_int32(0);
  outC->_L114.radioDevice = kcg_lit_int32(0);
  outC->_L114.receivedSystemTime = kcg_lit_int32(0);
  outC->_L114.nid_message = kcg_lit_int32(0);
  outC->_L114.t_train = kcg_lit_int32(0);
  outC->_L114.m_ack = kcg_lit_int32(0);
  outC->_L114.nid_lrbg = kcg_lit_int32(0);
  outC->_L114.t_train_reference = kcg_lit_int32(0);
  outC->_L114.nid_em = kcg_lit_int32(0);
  outC->_L114.q_scale = kcg_lit_int32(0);
  outC->_L114.d_sr = kcg_lit_int32(0);
  outC->_L114.t_sh_rqst = kcg_lit_int32(0);
  outC->_L114.d_ref = kcg_lit_int32(0);
  outC->_L114.q_dir = kcg_lit_int32(0);
  outC->_L114.d_emergencystop = kcg_lit_int32(0);
  outC->_L114.m_version = kcg_lit_int32(0);
  outC->_L115 = kcg_true;
  outC->_L116 = kcg_lit_int32(0);
  outC->_L117 = kcg_lit_int32(0);
  outC->_L94 = kcg_lit_int32(0);
  outC->_L95 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L97 = kcg_lit_int32(0);
  outC->_L98 = kcg_lit_int32(0);
  outC->_L99 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L101 = kcg_lit_int32(0);
  outC->_L102 = kcg_true;
  outC->_L103 = kcg_lit_int32(0);
  outC->_L104 = kcg_lit_int32(0);
  outC->_L105 = kcg_lit_int32(0);
  outC->_L106 = kcg_true;
  outC->_L107 = kcg_lit_int32(0);
  outC->_L108 = kcg_lit_int32(0);
  outC->_L109 = kcg_lit_int32(0);
  outC->_L110 = kcg_lit_int32(0);
  outC->_L111 = kcg_lit_int32(0);
  outC->_L74 = kcg_lit_int32(0);
  outC->_L75 = kcg_lit_int32(0);
  outC->_L76.nid_c = kcg_lit_int32(0);
  outC->_L76.v_nvshunt = kcg_lit_int32(0);
  outC->_L76.v_nvstff = kcg_lit_int32(0);
  outC->_L76.v_nvonsight = kcg_lit_int32(0);
  outC->_L76.v_nvunfit = kcg_lit_int32(0);
  outC->_L76.v_nvrel = kcg_lit_int32(0);
  outC->_L76.t_nvcontact = kcg_lit_int32(0);
  for (idx83 = 0; idx83 < 8; idx83++) {
    outC->messageQueue.m_Entries[idx83].m_IsValid = kcg_true;
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.t_train = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.m_ack = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.nid_em = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.q_scale = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.d_ref = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.q_dir = kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->messageQueue.m_Entries[idx83].m_Entry.Header.m_version = kcg_lit_int32(0);
    for (idx81 = 0; idx81 < 30; idx81++) {
      outC->messageQueue.m_Entries[idx83].m_Entry.Messages.PacketHeaders[idx81].nid_packet =
        kcg_lit_int32(0);
      outC->messageQueue.m_Entries[idx83].m_Entry.Messages.PacketHeaders[idx81].q_dir =
        Q_DIR_Reverse;
      outC->messageQueue.m_Entries[idx83].m_Entry.Messages.PacketHeaders[idx81].valid =
        kcg_true;
      outC->messageQueue.m_Entries[idx83].m_Entry.Messages.PacketHeaders[idx81].startAddress =
        kcg_lit_int32(0);
      outC->messageQueue.m_Entries[idx83].m_Entry.Messages.PacketHeaders[idx81].endAddress =
        kcg_lit_int32(0);
    }
    for (idx82 = 0; idx82 < 500; idx82++) {
      outC->messageQueue.m_Entries[idx83].m_Entry.Messages.PacketData[idx82] =
        kcg_lit_int32(0);
    }
  }
  outC->trigger = kcg_true;
  outC->rbcTimestamp = kcg_lit_int32(0);
  outC->remainingCapacity = kcg_lit_int32(0);
  outC->rbcContactTime = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  for (idx86 = 0; idx86 < 8; idx86++) {
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_IsValid = kcg_true;
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.d_sr = kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx84 = 0; idx84 < 30; idx84++) {
      outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Messages.PacketHeaders[idx84].nid_packet =
        kcg_lit_int32(0);
      outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Messages.PacketHeaders[idx84].q_dir =
        Q_DIR_Reverse;
      outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Messages.PacketHeaders[idx84].valid =
        kcg_true;
      outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Messages.PacketHeaders[idx84].startAddress =
        kcg_lit_int32(0);
      outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Messages.PacketHeaders[idx84].endAddress =
        kcg_lit_int32(0);
    }
    for (idx85 = 0; idx85 < 500; idx85++) {
      outC->_L4_else_IfBlock1.m_Entries[idx86].m_Entry.Messages.PacketData[idx85] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_else_IfBlock1.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx88 = 0; idx88 < 1; idx88++) {
    outC->_L3_else_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx88].valid =
      kcg_true;
    for (idx87 = 0; idx87 < 15; idx87++) {
      outC->_L3_else_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx88].telephoneNumber[idx87] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_else_IfBlock1.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L3_else_IfBlock1.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L3_else_IfBlock1.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L3_else_IfBlock1.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L3_else_IfBlock1.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L3_else_IfBlock1.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx89 = 0; idx89 < 4; idx89++) {
    outC->_L3_else_IfBlock1.session.m_TrainData.m_TractionIdentities[idx89].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L3_else_IfBlock1.session.m_TrainData.m_TractionIdentities[idx89].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx90 = 0; idx90 < 5; idx90++) {
    outC->_L3_else_IfBlock1.session.m_TrainData.m_NationalSystemIdentities[idx90] =
      kcg_lit_int32(0);
  }
  outC->_L3_else_IfBlock1.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_else_IfBlock1.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L3_else_IfBlock1.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L3_else_IfBlock1.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L3_else_IfBlock1.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L3_else_IfBlock1.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L3_else_IfBlock1.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L3_else_IfBlock1.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3_else_IfBlock1.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L3_else_IfBlock1.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L3_else_IfBlock1.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3_else_IfBlock1.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L3_else_IfBlock1.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx91 = 0; idx91 < 32; idx91++) {
    outC->_L3_else_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx91].d_loc =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx91].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx92 = 0; idx92 < 16; idx92++) {
    outC->_L3_else_IfBlock1.diagnostic[idx92].valid = kcg_true;
    outC->_L3_else_IfBlock1.diagnostic[idx92].count = kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.diagnostic[idx92].timestamp = kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.diagnostic[idx92].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_else_IfBlock1.diagnostic[idx92].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L3_else_IfBlock1.diagnostic[idx92].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx95 = 0; idx95 < 8; idx95++) {
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_IsValid = kcg_true;
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx93 = 0; idx93 < 30; idx93++) {
      outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketHeaders[idx93].nid_packet =
        kcg_lit_int32(0);
      outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketHeaders[idx93].q_dir =
        Q_DIR_Reverse;
      outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketHeaders[idx93].valid =
        kcg_true;
      outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketHeaders[idx93].startAddress =
        kcg_lit_int32(0);
      outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketHeaders[idx93].endAddress =
        kcg_lit_int32(0);
    }
    for (idx94 = 0; idx94 < 500; idx94++) {
      outC->_L3_else_IfBlock1.messageQueue.m_Entries[idx95].m_Entry.Messages.PacketData[idx94] =
        kcg_lit_int32(0);
    }
  }
  outC->_L3_else_IfBlock1.clockk.m_Value = kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(
      0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int32(0);
  for (idx96 = 0; idx96 < 30; idx96++) {
    outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx96].nid_packet =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx96].q_dir =
      Q_DIR_Reverse;
    outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx96].valid =
      kcg_true;
    outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx96].startAddress =
      kcg_lit_int32(0);
    outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx96].endAddress =
      kcg_lit_int32(0);
  }
  for (idx97 = 0; idx97 < 500; idx97++) {
    outC->_L3_else_IfBlock1.lastSentTrackTrainMessage.Messages.PacketData[idx97] =
      kcg_lit_int32(0);
  }
  outC->_L1_then_IfBlock1.Header.radioDevice = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.nid_message = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.t_train = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.m_ack = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.nid_em = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.q_scale = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.d_sr = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.d_ref = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.q_dir = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Header.m_version = kcg_lit_int32(0);
  for (idx98 = 0; idx98 < 30; idx98++) {
    outC->_L1_then_IfBlock1.Messages.PacketHeaders[idx98].nid_packet =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.Messages.PacketHeaders[idx98].q_dir = Q_DIR_Reverse;
    outC->_L1_then_IfBlock1.Messages.PacketHeaders[idx98].valid = kcg_true;
    outC->_L1_then_IfBlock1.Messages.PacketHeaders[idx98].startAddress =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.Messages.PacketHeaders[idx98].endAddress =
      kcg_lit_int32(0);
  }
  for (idx99 = 0; idx99 < 500; idx99++) {
    outC->_L1_then_IfBlock1.Messages.PacketData[idx99] = kcg_lit_int32(0);
  }
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1 = M_ACK_No_acknowledgement_required;
  outC->_L15_then_IfBlock1.m_IsValid = kcg_true;
  outC->_L15_then_IfBlock1.m_Entry.Header.radioDevice = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.nid_message = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.t_train = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.m_ack = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.t_train_reference = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.nid_em = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.q_scale = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.d_sr = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.d_ref = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.q_dir = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.m_Entry.Header.m_version = kcg_lit_int32(0);
  for (idx100 = 0; idx100 < 30; idx100++) {
    outC->_L15_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx100].nid_packet =
      kcg_lit_int32(0);
    outC->_L15_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx100].q_dir =
      Q_DIR_Reverse;
    outC->_L15_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx100].valid =
      kcg_true;
    outC->_L15_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx100].startAddress =
      kcg_lit_int32(0);
    outC->_L15_then_IfBlock1.m_Entry.Messages.PacketHeaders[idx100].endAddress =
      kcg_lit_int32(0);
  }
  for (idx101 = 0; idx101 < 500; idx101++) {
    outC->_L15_then_IfBlock1.m_Entry.Messages.PacketData[idx101] = kcg_lit_int32(0);
  }
  for (idx104 = 0; idx104 < 8; idx104++) {
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_IsValid = kcg_true;
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx102 = 0; idx102 < 30; idx102++) {
      outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Messages.PacketHeaders[idx102].nid_packet =
        kcg_lit_int32(0);
      outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Messages.PacketHeaders[idx102].q_dir =
        Q_DIR_Reverse;
      outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Messages.PacketHeaders[idx102].valid =
        kcg_true;
      outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Messages.PacketHeaders[idx102].startAddress =
        kcg_lit_int32(0);
      outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Messages.PacketHeaders[idx102].endAddress =
        kcg_lit_int32(0);
    }
    for (idx103 = 0; idx103 < 500; idx103++) {
      outC->_L14_then_IfBlock1.m_Entries[idx104].m_Entry.Messages.PacketData[idx103] =
        kcg_lit_int32(0);
    }
  }
  outC->_L21_then_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L21_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21_then_IfBlock1.d_lrbg = kcg_lit_int32(0);
  outC->_L21_then_IfBlock1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L21_then_IfBlock1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L21_then_IfBlock1.l_doubtover = kcg_lit_int32(0);
  outC->_L21_then_IfBlock1.l_doubtunder = kcg_lit_int32(0);
  outC->_L21_then_IfBlock1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L21_then_IfBlock1.l_trainint = kcg_lit_int32(0);
  outC->_L21_then_IfBlock1.v_train = kcg_lit_int32(0);
  outC->_L21_then_IfBlock1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L21_then_IfBlock1.m_mode = M_MODE_Full_Supervision;
  outC->_L21_then_IfBlock1.m_level = M_LEVEL_Level_0;
  outC->_L21_then_IfBlock1.nid_ntc = kcg_lit_int32(0);
  outC->_L21_then_IfBlock1.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L20_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx106 = 0; idx106 < 1; idx106++) {
    outC->_L25_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx106].valid =
      kcg_true;
    for (idx105 = 0; idx105 < 15; idx105++) {
      outC->_L25_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx106].telephoneNumber[idx105] =
        kcg_lit_int32(0);
    }
  }
  outC->_L25_then_IfBlock1.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L25_then_IfBlock1.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L25_then_IfBlock1.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L25_then_IfBlock1.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L25_then_IfBlock1.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L25_then_IfBlock1.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx107 = 0; idx107 < 4; idx107++) {
    outC->_L25_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx107].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L25_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx107].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx108 = 0; idx108 < 5; idx108++) {
    outC->_L25_then_IfBlock1.session.m_TrainData.m_NationalSystemIdentities[idx108] =
      kcg_lit_int32(0);
  }
  outC->_L25_then_IfBlock1.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L25_then_IfBlock1.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L25_then_IfBlock1.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L25_then_IfBlock1.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L25_then_IfBlock1.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L25_then_IfBlock1.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L25_then_IfBlock1.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L25_then_IfBlock1.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L25_then_IfBlock1.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L25_then_IfBlock1.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L25_then_IfBlock1.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L25_then_IfBlock1.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L25_then_IfBlock1.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx109 = 0; idx109 < 32; idx109++) {
    outC->_L25_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx109].d_loc =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx109].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx110 = 0; idx110 < 16; idx110++) {
    outC->_L25_then_IfBlock1.diagnostic[idx110].valid = kcg_true;
    outC->_L25_then_IfBlock1.diagnostic[idx110].count = kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.diagnostic[idx110].timestamp = kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.diagnostic[idx110].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L25_then_IfBlock1.diagnostic[idx110].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L25_then_IfBlock1.diagnostic[idx110].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx113 = 0; idx113 < 8; idx113++) {
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_IsValid = kcg_true;
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx111 = 0; idx111 < 30; idx111++) {
      outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].nid_packet =
        kcg_lit_int32(0);
      outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].q_dir =
        Q_DIR_Reverse;
      outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].valid =
        kcg_true;
      outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].startAddress =
        kcg_lit_int32(0);
      outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketHeaders[idx111].endAddress =
        kcg_lit_int32(0);
    }
    for (idx112 = 0; idx112 < 500; idx112++) {
      outC->_L25_then_IfBlock1.messageQueue.m_Entries[idx113].m_Entry.Messages.PacketData[idx112] =
        kcg_lit_int32(0);
    }
  }
  outC->_L25_then_IfBlock1.clockk.m_Value = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int32(0);
  for (idx114 = 0; idx114 < 30; idx114++) {
    outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].nid_packet =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].q_dir =
      Q_DIR_Reverse;
    outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].valid =
      kcg_true;
    outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].startAddress =
      kcg_lit_int32(0);
    outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx114].endAddress =
      kcg_lit_int32(0);
  }
  for (idx115 = 0; idx115 < 500; idx115++) {
    outC->_L25_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketData[idx115] =
      kcg_lit_int32(0);
  }
  outC->_L24_then_IfBlock1.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx117 = 0; idx117 < 1; idx117++) {
    outC->_L24_then_IfBlock1.m_TrainData.m_OnboardPhoneNumbers[idx117].valid =
      kcg_true;
    for (idx116 = 0; idx116 < 15; idx116++) {
      outC->_L24_then_IfBlock1.m_TrainData.m_OnboardPhoneNumbers[idx117].telephoneNumber[idx116] =
        kcg_lit_int32(0);
    }
  }
  outC->_L24_then_IfBlock1.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L24_then_IfBlock1.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L24_then_IfBlock1.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L24_then_IfBlock1.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L24_then_IfBlock1.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L24_then_IfBlock1.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx118 = 0; idx118 < 4; idx118++) {
    outC->_L24_then_IfBlock1.m_TrainData.m_TractionIdentities[idx118].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L24_then_IfBlock1.m_TrainData.m_TractionIdentities[idx118].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx119 = 0; idx119 < 5; idx119++) {
    outC->_L24_then_IfBlock1.m_TrainData.m_NationalSystemIdentities[idx119] =
      kcg_lit_int32(0);
  }
  outC->_L24_then_IfBlock1.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L24_then_IfBlock1.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L24_then_IfBlock1.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L24_then_IfBlock1.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L24_then_IfBlock1.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L24_then_IfBlock1.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L24_then_IfBlock1.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L24_then_IfBlock1.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx121 = 0; idx121 < 1; idx121++) {
    outC->_L29_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx121].valid =
      kcg_true;
    for (idx120 = 0; idx120 < 15; idx120++) {
      outC->_L29_then_IfBlock1.session.m_TrainData.m_OnboardPhoneNumbers[idx121].telephoneNumber[idx120] =
        kcg_lit_int32(0);
    }
  }
  outC->_L29_then_IfBlock1.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L29_then_IfBlock1.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L29_then_IfBlock1.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L29_then_IfBlock1.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L29_then_IfBlock1.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L29_then_IfBlock1.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx122 = 0; idx122 < 4; idx122++) {
    outC->_L29_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx122].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L29_then_IfBlock1.session.m_TrainData.m_TractionIdentities[idx122].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx123 = 0; idx123 < 5; idx123++) {
    outC->_L29_then_IfBlock1.session.m_TrainData.m_NationalSystemIdentities[idx123] =
      kcg_lit_int32(0);
  }
  outC->_L29_then_IfBlock1.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->_L29_then_IfBlock1.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L29_then_IfBlock1.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L29_then_IfBlock1.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L29_then_IfBlock1.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L29_then_IfBlock1.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->_L29_then_IfBlock1.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->_L29_then_IfBlock1.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29_then_IfBlock1.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->_L29_then_IfBlock1.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->_L29_then_IfBlock1.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->_L29_then_IfBlock1.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->_L29_then_IfBlock1.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx124 = 0; idx124 < 32; idx124++) {
    outC->_L29_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx124].d_loc =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx124].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx125 = 0; idx125 < 16; idx125++) {
    outC->_L29_then_IfBlock1.diagnostic[idx125].valid = kcg_true;
    outC->_L29_then_IfBlock1.diagnostic[idx125].count = kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.diagnostic[idx125].timestamp = kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.diagnostic[idx125].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->_L29_then_IfBlock1.diagnostic[idx125].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->_L29_then_IfBlock1.diagnostic[idx125].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx128 = 0; idx128 < 8; idx128++) {
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_IsValid = kcg_true;
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx126 = 0; idx126 < 30; idx126++) {
      outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Messages.PacketHeaders[idx126].nid_packet =
        kcg_lit_int32(0);
      outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Messages.PacketHeaders[idx126].q_dir =
        Q_DIR_Reverse;
      outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Messages.PacketHeaders[idx126].valid =
        kcg_true;
      outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Messages.PacketHeaders[idx126].startAddress =
        kcg_lit_int32(0);
      outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Messages.PacketHeaders[idx126].endAddress =
        kcg_lit_int32(0);
    }
    for (idx127 = 0; idx127 < 500; idx127++) {
      outC->_L29_then_IfBlock1.messageQueue.m_Entries[idx128].m_Entry.Messages.PacketData[idx127] =
        kcg_lit_int32(0);
    }
  }
  outC->_L29_then_IfBlock1.clockk.m_Value = kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.radioDevice =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_message =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.m_ack =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.nid_em =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.q_scale =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.d_sr =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.d_ref =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.q_dir =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Header.m_version =
    kcg_lit_int32(0);
  for (idx129 = 0; idx129 < 30; idx129++) {
    outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx129].nid_packet =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx129].q_dir =
      Q_DIR_Reverse;
    outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx129].valid =
      kcg_true;
    outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx129].startAddress =
      kcg_lit_int32(0);
    outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketHeaders[idx129].endAddress =
      kcg_lit_int32(0);
  }
  for (idx130 = 0; idx130 < 500; idx130++) {
    outC->_L29_then_IfBlock1.lastSentTrackTrainMessage.Messages.PacketData[idx130] =
      kcg_lit_int32(0);
  }
  for (idx133 = 0; idx133 < 8; idx133++) {
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_IsValid = kcg_true;
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx131 = 0; idx131 < 30; idx131++) {
      outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Messages.PacketHeaders[idx131].nid_packet =
        kcg_lit_int32(0);
      outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Messages.PacketHeaders[idx131].q_dir =
        Q_DIR_Reverse;
      outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Messages.PacketHeaders[idx131].valid =
        kcg_true;
      outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Messages.PacketHeaders[idx131].startAddress =
        kcg_lit_int32(0);
      outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Messages.PacketHeaders[idx131].endAddress =
        kcg_lit_int32(0);
    }
    for (idx132 = 0; idx132 < 500; idx132++) {
      outC->_L28_then_IfBlock1.m_Entries[idx133].m_Entry.Messages.PacketData[idx132] =
        kcg_lit_int32(0);
    }
  }
  outC->_L30_then_IfBlock1 = kcg_true;
  outC->_L31_then_IfBlock1.valid = kcg_true;
  outC->_L31_then_IfBlock1.NID_PACKET = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.Q_DIR = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.L_PACKET = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.Q_RBC = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.NID_C = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.NID_RBC = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.NID_RADIO = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.Q_SLEEPSESSION = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.valid = kcg_true;
  outC->_L33_then_IfBlock1.NID_PACKET = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Q_DIR = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.L_PACKET = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Q_RBC = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.NID_C = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.NID_RBC = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.NID_RADIO = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Q_SLEEPSESSION = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.valid = kcg_true;
  outC->_L34_then_IfBlock1.NID_PACKET = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Q_DIR = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.L_PACKET = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Q_RBC = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.NID_C = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.NID_RBC = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.NID_RADIO = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Q_SLEEPSESSION = kcg_lit_int32(0);
  outC->_L80_then_IfBlock1.nid_lrbg = kcg_lit_int32(0);
  outC->_L80_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L80_then_IfBlock1.d_lrbg = kcg_lit_int32(0);
  outC->_L80_then_IfBlock1.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L80_then_IfBlock1.q_dlrbg = Q_DLRBG_Reverse;
  outC->_L80_then_IfBlock1.l_doubtover = kcg_lit_int32(0);
  outC->_L80_then_IfBlock1.l_doubtunder = kcg_lit_int32(0);
  outC->_L80_then_IfBlock1.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L80_then_IfBlock1.l_trainint = kcg_lit_int32(0);
  outC->_L80_then_IfBlock1.v_train = kcg_lit_int32(0);
  outC->_L80_then_IfBlock1.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L80_then_IfBlock1.m_mode = M_MODE_Full_Supervision;
  outC->_L80_then_IfBlock1.m_level = M_LEVEL_Level_0;
  outC->_L80_then_IfBlock1.nid_ntc = kcg_lit_int32(0);
  outC->_L80_then_IfBlock1.nid_prvlrbg = kcg_lit_int32(0);
  outC->_L79_then_IfBlock1 = M_LEVEL_Level_0;
  outC->_L91_then_IfBlock1 = M_LEVEL_Level_0;
  outC->_L90_then_IfBlock1 = M_LEVEL_Level_0;
  outC->_L89_then_IfBlock1 = kcg_true;
  outC->_L88_then_IfBlock1 = kcg_true;
  outC->_L87_then_IfBlock1 = kcg_true;
  outC->_L93_then_IfBlock1 = kcg_true;
  outC->_L94_then_IfBlock1 = kcg_true;
  outC->_L95_then_IfBlock1 = kcg_true;
  outC->_L96_then_IfBlock1 = kcg_true;
  outC->_L97_then_IfBlock1 = kcg_true;
  outC->outTriggeredRadioTrackTrainMessage.Header.radioDevice = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_message = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->outTriggeredRadioTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx134 = 0; idx134 < 30; idx134++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx134].nid_packet =
      kcg_lit_int32(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx134].q_dir =
      Q_DIR_Reverse;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx134].valid =
      kcg_true;
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx134].startAddress =
      kcg_lit_int32(0);
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketHeaders[idx134].endAddress =
      kcg_lit_int32(0);
  }
  for (idx135 = 0; idx135 < 500; idx135++) {
    outC->outTriggeredRadioTrackTrainMessage.Messages.PacketData[idx135] =
      kcg_lit_int32(0);
  }
  outC->outRadioTrainTrackMessage.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.present = kcg_true;
  outC->outRadioTrainTrackMessage.header.nid_message = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.t_train = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.nid_engine = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->outRadioTrainTrackMessage.header.xT_TRAIN = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.xNID_EM = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.header.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->outRadioTrainTrackMessage.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_PACKET = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.L_TRAININT = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PACKET = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.L_TRAININT = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->outRadioTrainTrackMessage.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p3.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p3.number = kcg_lit_int32(0);
  for (idx137 = 0; idx137 < 1; idx137++) {
    outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx137].valid = kcg_true;
    for (idx136 = 0; idx136 < 15; idx136++) {
      outC->outRadioTrainTrackMessage.packets.p3.aNID_RADIO[idx137].telephoneNumber[idx136] =
        kcg_lit_int32(0);
    }
  }
  outC->outRadioTrainTrackMessage.packets.p4.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->outRadioTrainTrackMessage.packets.p5.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p5.TrainRunningNumber = kcg_lit_int32(
      0);
  outC->outRadioTrainTrackMessage.packets.p9.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.valid = kcg_true;
  outC->outRadioTrainTrackMessage.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outRadioTrainTrackMessage.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outRadioTrainTrackMessage.packets.p11.l_train = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outRadioTrainTrackMessage.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outRadioTrainTrackMessage.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outRadioTrainTrackMessage.packets.p11.n_axle = kcg_lit_int32(0);
  outC->outRadioTrainTrackMessage.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx138 = 0; idx138 < 4; idx138++) {
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx138].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outRadioTrainTrackMessage.packets.p11.tractionIdentity[idx138].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->outRadioTrainTrackMessage.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx139 = 0; idx139 < 5; idx139++) {
    outC->outRadioTrainTrackMessage.packets.p11.nid_ntc[idx139] = kcg_lit_int32(0);
  }
  outC->outDataBus.session.m_TrainData.nid_engine = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.m_NumberOfOnboardPhoneNumbers =
    kcg_lit_int32(0);
  for (idx141 = 0; idx141 < 1; idx141++) {
    outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx141].valid =
      kcg_true;
    for (idx140 = 0; idx140 < 15; idx140++) {
      outC->outDataBus.session.m_TrainData.m_OnboardPhoneNumbers[idx141].telephoneNumber[idx140] =
        kcg_lit_int32(0);
    }
  }
  outC->outDataBus.session.m_TrainData.t_train_ref = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->outDataBus.session.m_TrainData.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->outDataBus.session.m_TrainData.l_train = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.v_maxtrain = kcg_lit_int32(0);
  outC->outDataBus.session.m_TrainData.m_loadinggauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->outDataBus.session.m_TrainData.m_axleloadcat = M_AXLELOADCAT_A;
  outC->outDataBus.session.m_TrainData.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->outDataBus.session.m_TrainData.n_axle = kcg_lit_int32(0);
  for (idx142 = 0; idx142 < 4; idx142++) {
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx142].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->outDataBus.session.m_TrainData.m_TractionIdentities[idx142].nid_ctraction =
      kcg_lit_int32(0);
  }
  for (idx143 = 0; idx143 < 5; idx143++) {
    outC->outDataBus.session.m_TrainData.m_NationalSystemIdentities[idx143] =
      kcg_lit_int32(0);
  }
  outC->outDataBus.session.m_TrainData.nid_operational = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.nid_lrbg = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.session.m_PosData.d_lrbg = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_dirlrbg = Q_DIRLRBG_Reverse;
  outC->outDataBus.session.m_PosData.q_dlrbg = Q_DLRBG_Reverse;
  outC->outDataBus.session.m_PosData.l_doubtover = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.l_doubtunder = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->outDataBus.session.m_PosData.l_trainint = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.v_train = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.q_dirtrain = Q_DIRTRAIN_Reverse;
  outC->outDataBus.session.m_PosData.m_mode = M_MODE_Full_Supervision;
  outC->outDataBus.session.m_PosData.m_level = M_LEVEL_Level_0;
  outC->outDataBus.session.m_PosData.nid_ntc = kcg_lit_int32(0);
  outC->outDataBus.session.m_PosData.nid_prvlrbg = kcg_lit_int32(0);
  outC->outDataBus.config.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outDataBus.config.m_NationalParams.nid_c = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvshunt = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvstff = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvonsight = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvunfit = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.v_nvrel = kcg_lit_int32(0);
  outC->outDataBus.config.m_NationalParams.t_nvcontact = kcg_lit_int32(0);
  outC->outDataBus.config.m_MAReqParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_MAReqParams.t_mar = kcg_lit_int32(0);
  outC->outDataBus.config.m_MAReqParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->outDataBus.config.m_MAReqParams.t_cycrqst = kcg_lit_int32(0);
  outC->outDataBus.config.m_PosRepParams.q_dir = Q_DIR_Reverse;
  outC->outDataBus.config.m_PosRepParams.q_scale = Q_SCALE_10_cm_scale;
  outC->outDataBus.config.m_PosRepParams.t_cycloc = kcg_lit_int32(0);
  outC->outDataBus.config.m_PosRepParams.d_cycloc = kcg_lit_int32(0);
  outC->outDataBus.config.m_PosRepParams.m_loc = M_LOC_Now;
  outC->outDataBus.config.m_PosRepParams.m_NumberOfIncrementalDistancesAndQualifiers =
    kcg_lit_int32(0);
  for (idx144 = 0; idx144 < 32; idx144++) {
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx144].d_loc =
      kcg_lit_int32(0);
    outC->outDataBus.config.m_PosRepParams.m_IncrementalDistancesAndQualifiers[idx144].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  for (idx145 = 0; idx145 < 16; idx145++) {
    outC->outDataBus.diagnostic[idx145].valid = kcg_true;
    outC->outDataBus.diagnostic[idx145].count = kcg_lit_int32(0);
    outC->outDataBus.diagnostic[idx145].timestamp = kcg_lit_int32(0);
    outC->outDataBus.diagnostic[idx145].diagType =
      DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx145].diagSrc =
      DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg;
    outC->outDataBus.diagnostic[idx145].diagText =
      DIAG_MSG_Empty_RBC_Diagnostic_Pkg;
  }
  for (idx148 = 0; idx148 < 8; idx148++) {
    outC->outDataBus.messageQueue.m_Entries[idx148].m_IsValid = kcg_true;
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.radioDevice =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.receivedSystemTime =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.nid_message =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.t_train =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.m_ack =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.nid_lrbg =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.t_train_reference =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.nid_em =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.q_scale =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.d_sr =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.t_sh_rqst =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.d_ref =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.q_dir =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.d_emergencystop =
      kcg_lit_int32(0);
    outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Header.m_version =
      kcg_lit_int32(0);
    for (idx146 = 0; idx146 < 30; idx146++) {
      outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Messages.PacketHeaders[idx146].nid_packet =
        kcg_lit_int32(0);
      outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Messages.PacketHeaders[idx146].q_dir =
        Q_DIR_Reverse;
      outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Messages.PacketHeaders[idx146].valid =
        kcg_true;
      outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Messages.PacketHeaders[idx146].startAddress =
        kcg_lit_int32(0);
      outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Messages.PacketHeaders[idx146].endAddress =
        kcg_lit_int32(0);
    }
    for (idx147 = 0; idx147 < 500; idx147++) {
      outC->outDataBus.messageQueue.m_Entries[idx148].m_Entry.Messages.PacketData[idx147] =
        kcg_lit_int32(0);
    }
  }
  outC->outDataBus.clockk.m_Value = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.radioDevice = kcg_lit_int32(
      0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_message = kcg_lit_int32(
      0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_ack = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_lrbg = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_train_reference =
    kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.nid_em = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_scale = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_sr = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.t_sh_rqst = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_ref = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.q_dir = kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->outDataBus.lastSentTrackTrainMessage.Header.m_version = kcg_lit_int32(0);
  for (idx149 = 0; idx149 < 30; idx149++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx149].nid_packet =
      kcg_lit_int32(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx149].q_dir =
      Q_DIR_Reverse;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx149].valid =
      kcg_true;
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx149].startAddress =
      kcg_lit_int32(0);
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketHeaders[idx149].endAddress =
      kcg_lit_int32(0);
  }
  for (idx150 = 0; idx150 < 500; idx150++) {
    outC->outDataBus.lastSentTrackTrainMessage.Messages.PacketData[idx150] =
      kcg_lit_int32(0);
  }
  /* IfBlock1:then:_L14=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#2)/ */
  _50_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_2);
  /* IfBlock1:then:_L15=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#2)/ */
  _51_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
    &outC->_1_Context_RadioTrackTrainMessageQueueEntry__Create_2);
  /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2#1)/ */
  _104_RadioTrackTrainFacto_init_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
    &outC->Context_RadioTrackTrainFactory__CreateMsg024_BSL2_1);
  /* IfBlock1:then:_L79=(RBC_Session_Pkg::PosData__Get_M_LEVEL#8)/ */
  PosData__Get_M_LEVEL_init_RBC_Session_Pkg(
    &outC->Context_PosData__Get_M_LEVEL_8);
  /* IfBlock1:then:_L80=(RBC_Session_Pkg::SessionManagement__GetPosData#11)/ */
  SessionManagement__GetPosData_init_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_11);
  /* IfBlock1:then:_L20=(RBC_Session_Pkg::PosData__Get_NID_LRBG#3)/ */
  PosData__Get_NID_LRBG_init_RBC_Session_Pkg(
    &outC->Context_PosData__Get_NID_LRBG_3);
  /* IfBlock1:then:_L21=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */
  SessionManagement__GetPosData_init_RBC_Session_Pkg(
    &outC->_2_Context_SessionManagement__GetPosData_3);
  /* _L74=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */
  _48_RadioTrackTrainMessageQue_init_RBC_Collections_Pkg(
    &outC->_3_Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1);
  /* _L124=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_init_RBC_Time_Pkg(&outC->Context_Clock__GetSeconds_1);
  /* _L115=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid#2)/ */
  RadioTrackTrainMessage__I_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__IsValid_2);
  /* _L112=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
  _55_RadioTrackTrainHeader__Ge_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
  /* _L114=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#2)/ */
  RadioTrackTrainMessage__G_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_4_Context_RadioTrackTrainMessage__GetHeader_2);
  /* _L75=(RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT#1)/ */
  NationalParams__Get_T_NVC_init_RBC_Config_Pkg(
    &outC->Context_NationalParams__Get_T_NVCONTACT_1);
  /* _L76=(RBC_Config_Pkg::DynamicConfig__GetNationalParams#1)/ */
  DynamicConfig__GetNationa_init_RBC_Config_Pkg(
    &outC->Context_DynamicConfig__GetNationalParams_1);
  outC->lastRadioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
  outC->Level_2_or_3 = kcg_false;
}
#endif /* KCG_USER_DEFINED_INIT */


void RBC__PingTrain_reset_RBC_Model_Pkg(outC_RBC__PingTrain_RBC_Model_Pkg *outC)
{
  /* IfBlock1:then:_L14=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__TryPut#2)/ */
  _50_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
    &outC->Context_RadioTrackTrainMessageQueue__TryPut_2);
  /* IfBlock1:then:_L15=(RBC_Collections_Pkg::RadioTrackTrainMessageQueueEntry__Create#2)/ */
  _51_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
    &outC->_1_Context_RadioTrackTrainMessageQueueEntry__Create_2);
  /* IfBlock1:then:_L1=(RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateMsg024_BSL2#1)/ */
  _104_RadioTrackTrainFacto_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
    &outC->Context_RadioTrackTrainFactory__CreateMsg024_BSL2_1);
  /* IfBlock1:then:_L79=(RBC_Session_Pkg::PosData__Get_M_LEVEL#8)/ */
  PosData__Get_M_LEVEL_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Get_M_LEVEL_8);
  /* IfBlock1:then:_L80=(RBC_Session_Pkg::SessionManagement__GetPosData#11)/ */
  SessionManagement__GetPosData_reset_RBC_Session_Pkg(
    &outC->Context_SessionManagement__GetPosData_11);
  /* IfBlock1:then:_L20=(RBC_Session_Pkg::PosData__Get_NID_LRBG#3)/ */
  PosData__Get_NID_LRBG_reset_RBC_Session_Pkg(
    &outC->Context_PosData__Get_NID_LRBG_3);
  /* IfBlock1:then:_L21=(RBC_Session_Pkg::SessionManagement__GetPosData#3)/ */
  SessionManagement__GetPosData_reset_RBC_Session_Pkg(
    &outC->_2_Context_SessionManagement__GetPosData_3);
  /* _L74=(RBC_Collections_Pkg::RadioTrackTrainMessageQueue__GetRemainingCapacity#1)/ */
  _48_RadioTrackTrainMessageQue_reset_RBC_Collections_Pkg(
    &outC->_3_Context_RadioTrackTrainMessageQueue__GetRemainingCapacity_1);
  /* _L124=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */
  Clock__GetSeconds_reset_RBC_Time_Pkg(&outC->Context_Clock__GetSeconds_1);
  /* _L115=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__IsValid#2)/ */
  RadioTrackTrainMessage__I_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainMessage__IsValid_2);
  /* _L112=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Get_T_TRAIN#2)/ */
  _55_RadioTrackTrainHeader__Ge_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->Context_RadioTrackTrainHeader__Get_T_TRAIN_2);
  /* _L114=(RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__GetHeader#2)/ */
  RadioTrackTrainMessage__G_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
    &outC->_4_Context_RadioTrackTrainMessage__GetHeader_2);
  /* _L75=(RBC_Config_Pkg::NationalParams__Get_T_NVCONTACT#1)/ */
  NationalParams__Get_T_NVC_reset_RBC_Config_Pkg(
    &outC->Context_NationalParams__Get_T_NVCONTACT_1);
  /* _L76=(RBC_Config_Pkg::DynamicConfig__GetNationalParams#1)/ */
  DynamicConfig__GetNationa_reset_RBC_Config_Pkg(
    &outC->Context_DynamicConfig__GetNationalParams_1);
  outC->lastRadioTrackTrainMessageWasSentTimestamp = T_TRAIN_MIN;
  outC->Level_2_or_3 = kcg_false;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC__PingTrain_RBC_Model_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

