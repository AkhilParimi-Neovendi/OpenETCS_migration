/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_HO_MoRC_HO_Pkg.h"

/* MoRC_HO_Pkg::MoRC_HO/ */
void MoRC_HO_MoRC_HO_Pkg(
  /* mode/ */
  M_MODE mode,
  /* level/ */
  M_LEVEL level,
  /* eventsAndPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* atPowerUpRadioNetworkID/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* newRadioNetworkIDFromDriver/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* mobileRegistrationContext_1/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext_1,
  /* mobileRegistrationContext_2/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext_2,
  /* mobileConnectionContext_1/ */
  mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext_1,
  /* mobileConnectionContext_2/ */
  mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext_2,
  /* dataFromTrack_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* msgBusToRBC_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBusToRBC_in,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* t_train/ */
  T_TRAIN t_train,
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* currentTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* reset/ */
  kcg_bool reset,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* configData/ */
  morc_configData_T_RCM_Session_Types_Pkg *configData,
  /* onboardPhoneNumbers_b/ */
  P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* m_version/ */
  M_VERSION m_version,
  outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  static safeRadioConnectionIndication_T_RCM_Session_Types_Pkg noname;
  static kcg_bool _1_noname;
  static msgToTrack_T_RCM_MsgTypes_Pkg _2_noname;
  static msgToTrack_T_RCM_MsgTypes_Pkg _3_noname;
  /* morcStatus_2/ */
  static morcStatus_T_RCM_Session_Types_Pkg last_morcStatus_2;
  /* morcStatus_1/ */
  static morcStatus_T_RCM_Session_Types_Pkg last_morcStatus_1;

  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &last_morcStatus_2,
    &outC->morcStatus_2);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &last_morcStatus_1,
    &outC->morcStatus_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L178, dataFromTrack_in);
  /* _L184=(RCM_Utils_Pkg::decoders::dec_p45#1)/ */
  dec_p45_RCM_Utils_Pkg_decoders(&outC->_L178, &outC->Context_dec_p45_1);
  kcg_copy_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg(
    &outC->_L184,
    &outC->Context_dec_p45_1.p45_radioNetworkRegistration);
  outC->_L185 = outC->_L184.valid;
  outC->p45_networkRegistrationReceived_p = outC->_L185;
  kcg_copy_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg(
    &outC->p45_networkRegistration_p,
    &outC->_L184);
  /* _L173=(RCM_Utils_Pkg::decoders::dec_m39#1)/ */
  dec_m39_RCM_Utils_Pkg_decoders(&outC->_L178, &outC->Context_dec_m39_1);
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L173,
    &outC->Context_dec_m39_1.m39_acknowledgementOfTerminationOfACommunicationSession);
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->m39_AckOfTerminationOfACommunicationSession_p,
    &outC->_L173);
  /* _L174=(RCM_Utils_Pkg::decoders::dec_m38#1)/ */
  dec_m38_RCM_Utils_Pkg_decoders(&outC->_L178, &outC->Context_dec_m38_1);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L174,
    &outC->Context_dec_m38_1.m38_initiationOfComSession);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->m38_initiationOfACommunicationSessionMsg_p,
    &outC->_L174);
  outC->_L171 = kcg_true;
  /* _L177=(RCM_Utils_Pkg::decoders::dec_m32#1)/ */
  dec_m32_RCM_Utils_Pkg_decoders(
    &outC->_L178,
    outC->_L171,
    &outC->Context_dec_m32_1);
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &outC->_L177,
    &outC->Context_dec_m32_1.m32_RBC_or_RIU_System_Version);
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &outC->m32_SystemVersion_p,
    &outC->_L177);
  /* _L172=(RCM_Utils_Pkg::decoders::dec_p42#1)/ */
  dec_p42_RCM_Utils_Pkg_decoders(&outC->_L178, &outC->Context_dec_p42_1);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L172,
    &outC->Context_dec_p42_1.p42_sessionManagement);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->p42_sessionManagement_p,
    &outC->_L172);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L181,
    mobileRegistrationContext_1);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->mobileRegistrationContext_1_p,
    &outC->_L181);
  outC->_L182 = mode;
  outC->mode_p = outC->_L182;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L183,
    eventsAndPhases);
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->eventsAndPhases_p,
    &outC->_L183);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L180,
    mobileConnectionContext_1);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->mobileConnectionContext_1_p,
    &outC->_L180);
  outC->_L179 = level;
  outC->level_p = outC->_L179;
  outC->_L169 = outC->_L172.valid;
  outC->p42_sessionManagementReceived_p = outC->_L169;
  outC->_L170 = outC->_L174.valid;
  outC->m38_initiationOfACommunicationSessionMsgReceived_p = outC->_L170;
  outC->_L176 = outC->_L173.valid;
  outC->m39_AckOfTerminationOfACommunicationSessionReceived_p = outC->_L176;
  outC->_L175 = outC->_L177.valid;
  outC->m32_SystemVersionReceived_p = outC->_L175;
  outC->_L39 = mode;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L61, &last_morcStatus_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L62, &last_morcStatus_2);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L58, dataFromTrack_in);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L59, trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L60, BGs);
  outC->_L63 = sessionManagementAbility;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L64,
    trainProperties);
  /* _L21=(Handover_Pkg::handoverUtils_Pkg::processHandingOver#1)/ */
  processHandingOver_Handover_Pkg_handoverUtils_Pkg(
    outC->_L39,
    &outC->_L61,
    &outC->_L62,
    &outC->_L58,
    &outC->_L59,
    &outC->_L60,
    outC->_L63,
    &outC->_L64,
    &outC->Context_processHandingOver_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L21,
    &outC->Context_processHandingOver_1.sessionCmds_2_MoRC_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L22,
    &outC->Context_processHandingOver_1.sessionCmds_2_MoRC_2);
  outC->_L23 =
    outC->Context_processHandingOver_1.sendPositionReport_2_handingOverRBC;
  outC->_L24 =
    outC->Context_processHandingOver_1.sendPositionReport_2_acceptingRBC;
  outC->_L25 = outC->Context_processHandingOver_1.sendTrainData_2_acceptingRBC;
  outC->_L26 =
    outC->Context_processHandingOver_1.bufferInformationFromAcceptingRBC;
  kcg_copy_connection_ids_T_Handover_Pkg(
    &outC->_L27,
    &outC->Context_processHandingOver_1.supervisingRBC);
  outC->_L28 = outC->Context_processHandingOver_1.useInformationFromAcceptingRBC;
  outC->_L29 = outC->Context_processHandingOver_1.handingOverMobile_is_mobile_1;
  outC->_L30 =
    outC->Context_processHandingOver_1.trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  outC->_L94 = outC->Context_processHandingOver_1.notReady;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L43,
    eventsAndPhases);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L44,
    atPowerUpRadioNetworkID);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L45,
    newRadioNetworkIDFromDriver);
  outC->_L37 = mode;
  outC->_L38 = level;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L48,
    mobileRegistrationContext_2);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L49,
    mobileConnectionContext_2);
  outC->_L50 = currentTime;
  outC->_L51 = reset;
  outC->_L52 = t_train;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&outC->_L66, configData);
  /* _L11=(MoRC_Pck::MoRC_Main_v2#2)/ */
  MoRC_Main_v2_MoRC_Pck(
    &outC->_L22,
    &outC->_L43,
    &outC->_L44,
    &outC->_L45,
    outC->_L37,
    outC->_L38,
    &outC->_L48,
    &outC->_L49,
    outC->_L50,
    outC->_L51,
    outC->_L52,
    &outC->_L66,
    &outC->Context_MoRC_Main_v2_2);
  kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L11,
    &outC->Context_MoRC_Main_v2_2.msgToRBC);
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &outC->_L12,
    &outC->Context_MoRC_Main_v2_2.msgToTrackTriggers);
  outC->_L13 = outC->Context_MoRC_Main_v2_2.sendAPositionReport;
  outC->_L14 = outC->Context_MoRC_Main_v2_2.rejectOrderToContactRBC_or_RIU;
  outC->_L15 =
    outC->Context_MoRC_Main_v2_2.infomDriverNoCompatibleVersionSupported;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L16,
    &outC->Context_MoRC_Main_v2_2.status);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->_L17,
    &outC->Context_MoRC_Main_v2_2.safeRadioIndication);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->_L18,
    &outC->Context_MoRC_Main_v2_2.mobileConnectionCmd);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->_L19,
    &outC->Context_MoRC_Main_v2_2.mobileRegistrationCmd);
  outC->_L20 = outC->Context_MoRC_Main_v2_2.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L98,
    &outC->Context_MoRC_Main_v2_2.lastReceivedRadioNetworkID);
  outC->_L100 = outC->Context_MoRC_Main_v2_2.notReady;
  kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_3_noname, &outC->_L11);
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L40,
    eventsAndPhases);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L41,
    atPowerUpRadioNetworkID);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L42,
    newRadioNetworkIDFromDriver);
  outC->_L35 = mode;
  outC->_L36 = level;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L46,
    mobileRegistrationContext_1);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L47,
    mobileConnectionContext_1);
  outC->_L53 = currentTime;
  outC->_L54 = reset;
  outC->_L55 = t_train;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&outC->_L65, configData);
  /* _L1=(MoRC_Pck::MoRC_Main_v2#1)/ */
  MoRC_Main_v2_MoRC_Pck(
    &outC->_L21,
    &outC->_L40,
    &outC->_L41,
    &outC->_L42,
    outC->_L35,
    outC->_L36,
    &outC->_L46,
    &outC->_L47,
    outC->_L53,
    outC->_L54,
    outC->_L55,
    &outC->_L65,
    &outC->Context_MoRC_Main_v2_1);
  kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
    &outC->_L1,
    &outC->Context_MoRC_Main_v2_1.msgToRBC);
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &outC->_L2,
    &outC->Context_MoRC_Main_v2_1.msgToTrackTriggers);
  outC->_L3 = outC->Context_MoRC_Main_v2_1.sendAPositionReport;
  outC->_L4 = outC->Context_MoRC_Main_v2_1.rejectOrderToContactRBC_or_RIU;
  outC->_L5 =
    outC->Context_MoRC_Main_v2_1.infomDriverNoCompatibleVersionSupported;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->_L6,
    &outC->Context_MoRC_Main_v2_1.status);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->_L7,
    &outC->Context_MoRC_Main_v2_1.safeRadioIndication);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->_L8,
    &outC->Context_MoRC_Main_v2_1.mobileConnectionCmd);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->_L9,
    &outC->Context_MoRC_Main_v2_1.mobileRegistrationCmd);
  outC->_L10 = outC->Context_MoRC_Main_v2_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L97,
    &outC->Context_MoRC_Main_v2_1.lastReceivedRadioNetworkID);
  outC->_L99 = outC->Context_MoRC_Main_v2_1.notReady;
  kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&_2_noname, &outC->_L1);
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &outC->morcMsgTriggersToRBC_1,
    &outC->_L2);
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &outC->_L117,
    &outC->morcMsgTriggersToRBC_1);
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &outC->morcMsgTriggersToRBC_2,
    &outC->_L12);
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &outC->_L118,
    &outC->morcMsgTriggersToRBC_2);
  outC->useInformationFromAcceptingRBC = outC->_L28;
  outC->_L107 = outC->useInformationFromAcceptingRBC;
  outC->handingOverRBC_is_RBC_1 = outC->_L29;
  outC->_L105 = outC->handingOverRBC_is_RBC_1;
  outC->sendPositionReport_2_acceptingRBC = outC->_L24;
  outC->_L102 = outC->sendPositionReport_2_acceptingRBC;
  outC->sendPositionReport_2_handingOverRBC = outC->_L23;
  outC->_L110 = outC->sendPositionReport_2_handingOverRBC;
  outC->sendPositionReportToRBC_1 = outC->_L3;
  outC->_L109 = outC->sendPositionReportToRBC_1;
  outC->sendPositionReportToRBC_2 = outC->_L13;
  outC->_L112 = outC->sendPositionReportToRBC_2;
  outC->sendTrainData_2_acceptingRBC = outC->_L25;
  outC->_L113 = outC->sendTrainData_2_acceptingRBC;
  outC->_L116 = t_train;
  outC->_L120 = t_train_global;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L119,
    msgBusToRBC_in);
  outC->_L106 = sessionManagementAbility;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&outC->_L136, configData);
  outC->_L159 = outC->_L136.nid_engine;
  kcg_copy_P003_TM_TrainToTrack(&outC->_L160, onboardPhoneNumbers_b);
  outC->_L161 = m_version;
  /* _L114=(Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out#1)/ */
  mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
    &outC->_L117,
    &outC->_L118,
    outC->_L107,
    outC->_L105,
    outC->_L102,
    outC->_L110,
    outC->_L109,
    outC->_L112,
    outC->_L113,
    outC->_L116,
    outC->_L120,
    &outC->_L119,
    outC->_L106,
    outC->_L159,
    &outC->_L160,
    outC->_L161,
    &outC->Context_mobileBusRouter_out_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L114,
    &outC->Context_mobileBusRouter_out_1.msgBus_2_RBC_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L115,
    &outC->Context_mobileBusRouter_out_1.msgBus_2_RBC_2);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->msgBus_2_RBC_2,
    &outC->_L115);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->msgBus_2_RBC_1,
    &outC->_L114);
  outC->sNotReady = outC->_L94 | outC->_L99 | outC->_L100;
  outC->_L95 = outC->sNotReady;
  outC->_L96 = !outC->_L95;
  outC->ready = outC->_L96;
  _1_noname = outC->_L14;
  outC->triggerTrainData = outC->_L25;
  outC->_L85 = outC->sendPositionReportToRBC_2;
  outC->_L84 = outC->sendPositionReportToRBC_1;
  outC->_L82 = outC->sendPositionReport_2_handingOverRBC;
  outC->_L81 = outC->sendPositionReport_2_acceptingRBC;
  outC->_L86 = outC->_L81 | outC->_L82 | outC->_L84 | outC->_L85;
  outC->triggerPositionReport = outC->_L86;
  outC->_L72 = outC->_L10 | outC->_L20;
  outC->_L70 = outC->_L97.valid;
  /* _L71= */
  if (outC->_L70) {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L71,
      &outC->_L97);
  }
  else {
    kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &outC->_L71,
      &outC->_L98);
  }
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->lastReceivedRadioNetworkID,
    &outC->_L71);
  outC->memorizeTheLastRadioNetworkID = outC->_L72;
  outC->_L69 = outC->_L5 | outC->_L15;
  outC->infomDriverNoCompatibleVersionSupported = outC->_L69;
  outC->_L68 = outC->_L4 | outC->_L4;
  outC->rejectOrderToContactRBC_or_RIU = outC->_L68;
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = outC->_L30;
  outC->bufferInformationFromAcceptingRBC = outC->_L26;
  kcg_copy_connection_ids_T_Handover_Pkg(&outC->supervisingRBC, &outC->_L27);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->morcStatus_2, &outC->_L16);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->morcStatus_1, &outC->_L6);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &noname,
    &outC->_L17);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->safeRadioIndication,
    &outC->_L7);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd_2,
    &outC->_L19);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->mobileConnectionCmd_2,
    &outC->_L18);
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd_1,
    &outC->_L9);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->mobileConnectionCmd_1,
    &outC->_L8);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->radioStatus_2, &outC->_L16);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->radioStatus_1, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void MoRC_HO_init_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC)
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

  outC->_L185 = kcg_true;
  outC->_L184.valid = kcg_true;
  outC->_L184.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L184.q_dir = Q_DIR_Reverse;
  outC->_L184.nid_mn = kcg_lit_int32(0);
  outC->_L184.origin.valid = kcg_true;
  outC->_L184.origin.nid_c = kcg_lit_int32(0);
  outC->_L184.origin.rbc_id = kcg_lit_int32(0);
  outC->_L184.origin.device_id = kcg_lit_int32(0);
  outC->_L179 = M_LEVEL_Level_0;
  outC->_L180.valid = kcg_true;
  outC->_L180.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L180.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L180.nid_radio = kcg_lit_int64(0);
  outC->_L180.settingUpConnectionHasFailed = kcg_true;
  outC->_L180.connectionLost = kcg_true;
  outC->_L180.isInRadioHole = kcg_true;
  outC->_L181.valid = kcg_true;
  outC->_L181.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L181.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L181.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L181.nid_mn = kcg_lit_int32(0);
  outC->_L182 = M_MODE_Full_Supervision;
  outC->_L183.atPowerUp = kcg_true;
  outC->_L183.atPowerDown = kcg_true;
  outC->_L183.atStartOfMission = kcg_true;
  outC->_L183.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L183.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L183.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L183.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L183.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L183.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L183.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L183.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L183.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L183.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L183.endOfMissionIsExecuted = kcg_true;
  outC->_L183.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L183.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L183.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L183.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L183.trainExitedFromAnRBCArea = kcg_true;
  outC->_L183.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L183.level_1_isLeft = kcg_true;
  outC->_L178.valid = kcg_true;
  outC->_L178.source = msrc_undefined_Common_Types_Pkg;
  outC->_L178.radioMetadata.t_train_reference = kcg_true;
  outC->_L178.radioMetadata.nid_em = kcg_true;
  outC->_L178.radioMetadata.q_scale = kcg_true;
  outC->_L178.radioMetadata.d_sr = kcg_true;
  outC->_L178.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L178.radioMetadata.d_ref = kcg_true;
  outC->_L178.radioMetadata.q_dir = kcg_true;
  outC->_L178.radioMetadata.d_emergencystop = kcg_true;
  outC->_L178.radioMetadata.m_version = kcg_true;
  outC->_L178.BG_Common_Header.valid = kcg_true;
  outC->_L178.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L178.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L178.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L178.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L178.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L178.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L178.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L178.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L178.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L178.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L178.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L178.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L178.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L178.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L178.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L178.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L178.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L178.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L178.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L178.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L178.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L178.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L178.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L178.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L178.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L178.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L178.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L178.packets.PacketHeaders[idx].nid_packet = kcg_lit_int32(0);
    outC->_L178.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L178.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L178.packets.PacketHeaders[idx].startAddress = kcg_lit_int32(0);
    outC->_L178.packets.PacketHeaders[idx].endAddress = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L178.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L178.sendingRBC.valid = kcg_true;
  outC->_L178.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L178.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L178.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L169 = kcg_true;
  outC->_L170 = kcg_true;
  outC->_L171 = kcg_true;
  outC->_L172.valid = kcg_true;
  outC->_L172.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L172.q_dir = Q_DIR_Reverse;
  outC->_L172.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L172.nid_c = kcg_lit_int32(0);
  outC->_L172.nid_RBC = kcg_lit_int32(0);
  outC->_L172.nid_radio = kcg_lit_int64(0);
  outC->_L172.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L172.origin.valid = kcg_true;
  outC->_L172.origin.nid_c = kcg_lit_int32(0);
  outC->_L172.origin.rbc_id = kcg_lit_int32(0);
  outC->_L172.origin.device_id = kcg_lit_int32(0);
  outC->_L173.valid = kcg_true;
  outC->_L173.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L173.origin.valid = kcg_true;
  outC->_L173.origin.nid_c = kcg_lit_int32(0);
  outC->_L173.origin.rbc_id = kcg_lit_int32(0);
  outC->_L173.origin.device_id = kcg_lit_int32(0);
  outC->_L173.lrbg = kcg_lit_int32(0);
  outC->_L174.valid = kcg_true;
  outC->_L174.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L174.origin.valid = kcg_true;
  outC->_L174.origin.nid_c = kcg_lit_int32(0);
  outC->_L174.origin.rbc_id = kcg_lit_int32(0);
  outC->_L174.origin.device_id = kcg_lit_int32(0);
  outC->_L175 = kcg_true;
  outC->_L176 = kcg_true;
  outC->_L177.valid = kcg_true;
  outC->_L177.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L177.versionSupported = kcg_true;
  outC->_L177.origin.valid = kcg_true;
  outC->_L177.origin.nid_c = kcg_lit_int32(0);
  outC->_L177.origin.rbc_id = kcg_lit_int32(0);
  outC->_L177.origin.device_id = kcg_lit_int32(0);
  outC->_L177.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L161 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L160.valid = kcg_true;
  outC->_L160.nid_packet = kcg_lit_int32(0);
  outC->_L160.l_packet = kcg_lit_int32(0);
  outC->_L160.n_iter = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L160.nid_radio[idx2] = kcg_lit_int32(0);
  }
  outC->_L159 = kcg_lit_int32(0);
  outC->_L136.radioNetworkID_Default.valid = kcg_true;
  outC->_L136.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L136.radioNetworkID_Default.nid_mn = kcg_lit_int32(0);
  outC->_L136.nid_radio_shortNumberStoredOnboard = kcg_lit_int64(0);
  outC->_L136.noOfRetriesOfSendingTerminationMessage = kcg_lit_int32(0);
  outC->_L136.maxWaitingTimeForAckMessageReceived = kcg_lit_int32(0);
  outC->_L136.maxWaitingTimeUntilTerminationOrderReceived = kcg_lit_int32(0);
  outC->_L136.noOfRetriesUntilTerminationOrderIsReceived = kcg_lit_int32(0);
  outC->_L136.connectionStatusTimerInterval = kcg_lit_int32(0);
  outC->_L136.onboardPhoneNumbers.valid = kcg_true;
  outC->_L136.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 1; idx4++) {
    outC->_L136.onboardPhoneNumbers.aNID_RADIO[idx4].valid = kcg_true;
    for (idx3 = 0; idx3 < 15; idx3++) {
      outC->_L136.onboardPhoneNumbers.aNID_RADIO[idx4].telephoneNumber[idx3] =
        kcg_lit_int32(0);
    }
  }
  outC->_L136.nid_engine = kcg_lit_int32(0);
  outC->_L136.maxTimeToMaintainCommSession = kcg_lit_int32(0);
  outC->_L136.noOfTriesToEstablishASafeRadioConnection = kcg_lit_int32(0);
  outC->_L120 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L119[idx6].Message.valid = kcg_true;
    outC->_L119[idx6].Message.nid_message = kcg_lit_int32(0);
    outC->_L119[idx6].Message.l_message = kcg_lit_int32(0);
    outC->_L119[idx6].Message.t_train = kcg_lit_int32(0);
    outC->_L119[idx6].Message.nid_engine = kcg_lit_int32(0);
    outC->_L119[idx6].Message.field1 = kcg_lit_int32(0);
    outC->_L119[idx6].Message.field2 = kcg_lit_int32(0);
    outC->_L119[idx6].Message.field3 = kcg_lit_int32(0);
    for (idx5 = 0; idx5 < 50; idx5++) {
      outC->_L119[idx6].OptionalPackets[idx5] = kcg_lit_int32(0);
    }
  }
  outC->_L118.m155_initiationOfACommunicationSession = kcg_true;
  outC->_L118.m156_terminationOfACommunicationSession = kcg_true;
  outC->_L118.m159_sessionEstablished = kcg_true;
  outC->_L118.m154_noCompatibleVersionSupported = kcg_true;
  outC->_L117.m155_initiationOfACommunicationSession = kcg_true;
  outC->_L117.m156_terminationOfACommunicationSession = kcg_true;
  outC->_L117.m159_sessionEstablished = kcg_true;
  outC->_L117.m154_noCompatibleVersionSupported = kcg_true;
  outC->_L116 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 5; idx8++) {
    outC->_L114[idx8].Message.valid = kcg_true;
    outC->_L114[idx8].Message.nid_message = kcg_lit_int32(0);
    outC->_L114[idx8].Message.l_message = kcg_lit_int32(0);
    outC->_L114[idx8].Message.t_train = kcg_lit_int32(0);
    outC->_L114[idx8].Message.nid_engine = kcg_lit_int32(0);
    outC->_L114[idx8].Message.field1 = kcg_lit_int32(0);
    outC->_L114[idx8].Message.field2 = kcg_lit_int32(0);
    outC->_L114[idx8].Message.field3 = kcg_lit_int32(0);
    for (idx7 = 0; idx7 < 50; idx7++) {
      outC->_L114[idx8].OptionalPackets[idx7] = kcg_lit_int32(0);
    }
  }
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L115[idx10].Message.valid = kcg_true;
    outC->_L115[idx10].Message.nid_message = kcg_lit_int32(0);
    outC->_L115[idx10].Message.l_message = kcg_lit_int32(0);
    outC->_L115[idx10].Message.t_train = kcg_lit_int32(0);
    outC->_L115[idx10].Message.nid_engine = kcg_lit_int32(0);
    outC->_L115[idx10].Message.field1 = kcg_lit_int32(0);
    outC->_L115[idx10].Message.field2 = kcg_lit_int32(0);
    outC->_L115[idx10].Message.field3 = kcg_lit_int32(0);
    for (idx9 = 0; idx9 < 50; idx9++) {
      outC->_L115[idx10].OptionalPackets[idx9] = kcg_lit_int32(0);
    }
  }
  outC->_L102 = kcg_true;
  outC->_L105 = kcg_true;
  outC->_L106 = isAbleToManageOneSession_Handover_Pkg;
  outC->_L107 = kcg_true;
  outC->_L109 = kcg_true;
  outC->_L110 = kcg_true;
  outC->_L112 = kcg_true;
  outC->_L113 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L98.valid = kcg_true;
  outC->_L98.q_dir = Q_DIR_Reverse;
  outC->_L98.nid_mn = kcg_lit_int32(0);
  outC->_L97.valid = kcg_true;
  outC->_L97.q_dir = Q_DIR_Reverse;
  outC->_L97.nid_mn = kcg_lit_int32(0);
  outC->_L96 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.q_dir = Q_DIR_Reverse;
  outC->_L71.nid_mn = kcg_lit_int32(0);
  outC->_L70 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L66.radioNetworkID_Default.valid = kcg_true;
  outC->_L66.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L66.radioNetworkID_Default.nid_mn = kcg_lit_int32(0);
  outC->_L66.nid_radio_shortNumberStoredOnboard = kcg_lit_int64(0);
  outC->_L66.noOfRetriesOfSendingTerminationMessage = kcg_lit_int32(0);
  outC->_L66.maxWaitingTimeForAckMessageReceived = kcg_lit_int32(0);
  outC->_L66.maxWaitingTimeUntilTerminationOrderReceived = kcg_lit_int32(0);
  outC->_L66.noOfRetriesUntilTerminationOrderIsReceived = kcg_lit_int32(0);
  outC->_L66.connectionStatusTimerInterval = kcg_lit_int32(0);
  outC->_L66.onboardPhoneNumbers.valid = kcg_true;
  outC->_L66.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 1; idx12++) {
    outC->_L66.onboardPhoneNumbers.aNID_RADIO[idx12].valid = kcg_true;
    for (idx11 = 0; idx11 < 15; idx11++) {
      outC->_L66.onboardPhoneNumbers.aNID_RADIO[idx12].telephoneNumber[idx11] =
        kcg_lit_int32(0);
    }
  }
  outC->_L66.nid_engine = kcg_lit_int32(0);
  outC->_L66.maxTimeToMaintainCommSession = kcg_lit_int32(0);
  outC->_L66.noOfTriesToEstablishASafeRadioConnection = kcg_lit_int32(0);
  outC->_L65.radioNetworkID_Default.valid = kcg_true;
  outC->_L65.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L65.radioNetworkID_Default.nid_mn = kcg_lit_int32(0);
  outC->_L65.nid_radio_shortNumberStoredOnboard = kcg_lit_int64(0);
  outC->_L65.noOfRetriesOfSendingTerminationMessage = kcg_lit_int32(0);
  outC->_L65.maxWaitingTimeForAckMessageReceived = kcg_lit_int32(0);
  outC->_L65.maxWaitingTimeUntilTerminationOrderReceived = kcg_lit_int32(0);
  outC->_L65.noOfRetriesUntilTerminationOrderIsReceived = kcg_lit_int32(0);
  outC->_L65.connectionStatusTimerInterval = kcg_lit_int32(0);
  outC->_L65.onboardPhoneNumbers.valid = kcg_true;
  outC->_L65.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 1; idx14++) {
    outC->_L65.onboardPhoneNumbers.aNID_RADIO[idx14].valid = kcg_true;
    for (idx13 = 0; idx13 < 15; idx13++) {
      outC->_L65.onboardPhoneNumbers.aNID_RADIO[idx14].telephoneNumber[idx13] =
        kcg_lit_int32(0);
    }
  }
  outC->_L65.nid_engine = kcg_lit_int32(0);
  outC->_L65.maxTimeToMaintainCommSession = kcg_lit_int32(0);
  outC->_L65.noOfTriesToEstablishASafeRadioConnection = kcg_lit_int32(0);
  outC->_L64.nid_engine = kcg_lit_int32(0);
  outC->_L64.nid_operational = kcg_lit_int32(0);
  outC->_L64.l_train = kcg_lit_int32(0);
  outC->_L64.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L64.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L64.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L64.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L64.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L64.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L64.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L64.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L64.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L64.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L64.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L64.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L63 = isAbleToManageOneSession_Handover_Pkg;
  outC->_L62.registration.valid = kcg_true;
  outC->_L62.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L62.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L62.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L62.registration.nid_mn = kcg_lit_int32(0);
  outC->_L62.connection.valid = kcg_true;
  outC->_L62.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L62.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L62.connection.nid_radio = kcg_lit_int64(0);
  outC->_L62.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L62.connection.connectionLost = kcg_true;
  outC->_L62.connection.isInRadioHole = kcg_true;
  outC->_L62.session.valid = kcg_true;
  outC->_L62.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L62.session.nid_c = kcg_lit_int32(0);
  outC->_L62.session.nid_rbc = kcg_lit_int32(0);
  outC->_L62.session.nid_radio = kcg_lit_int64(0);
  outC->_L61.registration.valid = kcg_true;
  outC->_L61.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L61.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L61.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L61.registration.nid_mn = kcg_lit_int32(0);
  outC->_L61.connection.valid = kcg_true;
  outC->_L61.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L61.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L61.connection.nid_radio = kcg_lit_int64(0);
  outC->_L61.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L61.connection.connectionLost = kcg_true;
  outC->_L61.connection.isInRadioHole = kcg_true;
  outC->_L61.session.valid = kcg_true;
  outC->_L61.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L61.session.nid_c = kcg_lit_int32(0);
  outC->_L61.session.nid_rbc = kcg_lit_int32(0);
  outC->_L61.session.nid_radio = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 41; idx16++) {
    outC->_L60[idx16].valid = kcg_true;
    outC->_L60[idx16].nid_c = kcg_lit_int32(0);
    outC->_L60[idx16].nid_bg = kcg_lit_int32(0);
    outC->_L60[idx16].q_link = Q_LINK_Unlinked;
    outC->_L60[idx16].location.nominal = kcg_lit_int32(0);
    outC->_L60[idx16].location.d_min = kcg_lit_int32(0);
    outC->_L60[idx16].location.d_max = kcg_lit_int32(0);
    outC->_L60[idx16].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.valid = kcg_true;
    outC->_L60[idx16].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L60[idx16].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L60[idx16].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L60[idx16].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L60[idx16].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L60[idx16].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L60[idx16].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.valid = kcg_true;
    outC->_L60[idx16].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L60[idx16].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L60[idx16].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L60[idx16].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L60[idx16].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L60[idx16].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L60[idx16].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L60[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L60[idx16].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L60[idx16].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L60[idx16].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx15 = 0; idx15 < 33; idx15++) {
      outC->_L60[idx16].infoFromPassing.linkedBGs[idx15].valid = kcg_true;
      outC->_L60[idx16].infoFromPassing.linkedBGs[idx15].nid_LRBG = kcg_lit_int32(0);
      outC->_L60[idx16].infoFromPassing.linkedBGs[idx15].q_dir = Q_DIR_Reverse;
      outC->_L60[idx16].infoFromPassing.linkedBGs[idx15].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L60[idx16].infoFromPassing.linkedBGs[idx15].d_link = kcg_lit_int32(0);
      outC->_L60[idx16].infoFromPassing.linkedBGs[idx15].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L60[idx16].infoFromPassing.linkedBGs[idx15].nid_c = kcg_lit_int32(0);
      outC->_L60[idx16].infoFromPassing.linkedBGs[idx15].nid_bg = kcg_lit_int32(0);
      outC->_L60[idx16].infoFromPassing.linkedBGs[idx15].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L60[idx16].infoFromPassing.linkedBGs[idx15].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L60[idx16].infoFromPassing.linkedBGs[idx15].q_locacc = kcg_lit_int32(0);
    }
    outC->_L60[idx16].missed = kcg_true;
  }
  outC->_L59.valid = kcg_true;
  outC->_L59.timestamp = kcg_lit_int32(0);
  outC->_L59.trainPositionIsUnknown = kcg_true;
  outC->_L59.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L59.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L59.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L59.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L59.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L59.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L59.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L59.LRBG.valid = kcg_true;
  outC->_L59.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L59.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L59.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L59.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L59.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L59.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L59.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L59.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L59.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L59.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L59.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L59.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L59.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L59.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L59.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L59.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L59.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L59.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L59.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L59.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L59.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L59.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L59.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L59.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L59.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->_L59.LRBG.infoFromPassing.linkedBGs[idx17].valid = kcg_true;
    outC->_L59.LRBG.infoFromPassing.linkedBGs[idx17].nid_LRBG = kcg_lit_int32(0);
    outC->_L59.LRBG.infoFromPassing.linkedBGs[idx17].q_dir = Q_DIR_Reverse;
    outC->_L59.LRBG.infoFromPassing.linkedBGs[idx17].q_scale = Q_SCALE_10_cm_scale;
    outC->_L59.LRBG.infoFromPassing.linkedBGs[idx17].d_link = kcg_lit_int32(0);
    outC->_L59.LRBG.infoFromPassing.linkedBGs[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L59.LRBG.infoFromPassing.linkedBGs[idx17].nid_c = kcg_lit_int32(0);
    outC->_L59.LRBG.infoFromPassing.linkedBGs[idx17].nid_bg = kcg_lit_int32(0);
    outC->_L59.LRBG.infoFromPassing.linkedBGs[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L59.LRBG.infoFromPassing.linkedBGs[idx17].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L59.LRBG.infoFromPassing.linkedBGs[idx17].q_locacc = kcg_lit_int32(0);
  }
  outC->_L59.LRBG.missed = kcg_true;
  outC->_L59.prvLRBG.valid = kcg_true;
  outC->_L59.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L59.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L59.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L59.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L59.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L59.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L59.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L59.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L59.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L59.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L59.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L59.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L59.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L59.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L59.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->_L59.prvLRBG.infoFromPassing.linkedBGs[idx18].valid = kcg_true;
    outC->_L59.prvLRBG.infoFromPassing.linkedBGs[idx18].nid_LRBG = kcg_lit_int32(0);
    outC->_L59.prvLRBG.infoFromPassing.linkedBGs[idx18].q_dir = Q_DIR_Reverse;
    outC->_L59.prvLRBG.infoFromPassing.linkedBGs[idx18].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L59.prvLRBG.infoFromPassing.linkedBGs[idx18].d_link = kcg_lit_int32(0);
    outC->_L59.prvLRBG.infoFromPassing.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L59.prvLRBG.infoFromPassing.linkedBGs[idx18].nid_c = kcg_lit_int32(0);
    outC->_L59.prvLRBG.infoFromPassing.linkedBGs[idx18].nid_bg = kcg_lit_int32(0);
    outC->_L59.prvLRBG.infoFromPassing.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L59.prvLRBG.infoFromPassing.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L59.prvLRBG.infoFromPassing.linkedBGs[idx18].q_locacc = kcg_lit_int32(0);
  }
  outC->_L59.prvLRBG.missed = kcg_true;
  outC->_L59.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L59.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L59.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L59.linkingIsUsedOnboard = kcg_true;
  outC->_L59.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L59.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L59.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L58.valid = kcg_true;
  outC->_L58.source = msrc_undefined_Common_Types_Pkg;
  outC->_L58.radioMetadata.t_train_reference = kcg_true;
  outC->_L58.radioMetadata.nid_em = kcg_true;
  outC->_L58.radioMetadata.q_scale = kcg_true;
  outC->_L58.radioMetadata.d_sr = kcg_true;
  outC->_L58.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L58.radioMetadata.d_ref = kcg_true;
  outC->_L58.radioMetadata.q_dir = kcg_true;
  outC->_L58.radioMetadata.d_emergencystop = kcg_true;
  outC->_L58.radioMetadata.m_version = kcg_true;
  outC->_L58.BG_Common_Header.valid = kcg_true;
  outC->_L58.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L58.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L58.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L58.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L58.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L58.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L58.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L58.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L58.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L58.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L58.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L58.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L58.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L58.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L58.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L58.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L58.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->_L58.packets.PacketHeaders[idx19].nid_packet = kcg_lit_int32(0);
    outC->_L58.packets.PacketHeaders[idx19].q_dir = Q_DIR_Reverse;
    outC->_L58.packets.PacketHeaders[idx19].valid = kcg_true;
    outC->_L58.packets.PacketHeaders[idx19].startAddress = kcg_lit_int32(0);
    outC->_L58.packets.PacketHeaders[idx19].endAddress = kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 500; idx20++) {
    outC->_L58.packets.PacketData[idx20] = kcg_lit_int32(0);
  }
  outC->_L58.sendingRBC.valid = kcg_true;
  outC->_L58.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L58.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L58.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L55 = kcg_lit_int32(0);
  outC->_L54 = kcg_true;
  outC->_L53 = kcg_lit_int32(0);
  outC->_L52 = kcg_lit_int32(0);
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_lit_int32(0);
  outC->_L49.valid = kcg_true;
  outC->_L49.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L49.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L49.nid_radio = kcg_lit_int64(0);
  outC->_L49.settingUpConnectionHasFailed = kcg_true;
  outC->_L49.connectionLost = kcg_true;
  outC->_L49.isInRadioHole = kcg_true;
  outC->_L48.valid = kcg_true;
  outC->_L48.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L48.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L48.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L48.nid_mn = kcg_lit_int32(0);
  outC->_L47.valid = kcg_true;
  outC->_L47.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L47.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L47.nid_radio = kcg_lit_int64(0);
  outC->_L47.settingUpConnectionHasFailed = kcg_true;
  outC->_L47.connectionLost = kcg_true;
  outC->_L47.isInRadioHole = kcg_true;
  outC->_L46.valid = kcg_true;
  outC->_L46.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L46.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L46.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L46.nid_mn = kcg_lit_int32(0);
  outC->_L45.valid = kcg_true;
  outC->_L45.q_dir = Q_DIR_Reverse;
  outC->_L45.nid_mn = kcg_lit_int32(0);
  outC->_L44.valid = kcg_true;
  outC->_L44.q_dir = Q_DIR_Reverse;
  outC->_L44.nid_mn = kcg_lit_int32(0);
  outC->_L43.atPowerUp = kcg_true;
  outC->_L43.atPowerDown = kcg_true;
  outC->_L43.atStartOfMission = kcg_true;
  outC->_L43.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L43.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L43.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L43.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L43.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L43.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L43.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L43.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L43.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L43.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L43.endOfMissionIsExecuted = kcg_true;
  outC->_L43.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L43.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L43.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L43.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L43.trainExitedFromAnRBCArea = kcg_true;
  outC->_L43.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L43.level_1_isLeft = kcg_true;
  outC->_L42.valid = kcg_true;
  outC->_L42.q_dir = Q_DIR_Reverse;
  outC->_L42.nid_mn = kcg_lit_int32(0);
  outC->_L41.valid = kcg_true;
  outC->_L41.q_dir = Q_DIR_Reverse;
  outC->_L41.nid_mn = kcg_lit_int32(0);
  outC->_L40.atPowerUp = kcg_true;
  outC->_L40.atPowerDown = kcg_true;
  outC->_L40.atStartOfMission = kcg_true;
  outC->_L40.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L40.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L40.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L40.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L40.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L40.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L40.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L40.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L40.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L40.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L40.endOfMissionIsExecuted = kcg_true;
  outC->_L40.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L40.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L40.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L40.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L40.trainExitedFromAnRBCArea = kcg_true;
  outC->_L40.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L40.level_1_isLeft = kcg_true;
  outC->_L39 = M_MODE_Full_Supervision;
  outC->_L38 = M_LEVEL_Level_0;
  outC->_L37 = M_MODE_Full_Supervision;
  outC->_L36 = M_LEVEL_Level_0;
  outC->_L35 = M_MODE_Full_Supervision;
  outC->_L21.valid = kcg_true;
  outC->_L21.source = msrc_undefined_Common_Types_Pkg;
  outC->_L21.radioMetadata.t_train_reference = kcg_true;
  outC->_L21.radioMetadata.nid_em = kcg_true;
  outC->_L21.radioMetadata.q_scale = kcg_true;
  outC->_L21.radioMetadata.d_sr = kcg_true;
  outC->_L21.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L21.radioMetadata.d_ref = kcg_true;
  outC->_L21.radioMetadata.q_dir = kcg_true;
  outC->_L21.radioMetadata.d_emergencystop = kcg_true;
  outC->_L21.radioMetadata.m_version = kcg_true;
  outC->_L21.BG_Common_Header.valid = kcg_true;
  outC->_L21.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L21.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L21.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L21.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L21.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L21.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L21.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L21.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L21.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L21.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L21.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L21.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L21.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L21.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L21.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L21.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L21.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L21.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L21.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L21.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L21.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L21.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L21.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx21 = 0; idx21 < 30; idx21++) {
    outC->_L21.packets.PacketHeaders[idx21].nid_packet = kcg_lit_int32(0);
    outC->_L21.packets.PacketHeaders[idx21].q_dir = Q_DIR_Reverse;
    outC->_L21.packets.PacketHeaders[idx21].valid = kcg_true;
    outC->_L21.packets.PacketHeaders[idx21].startAddress = kcg_lit_int32(0);
    outC->_L21.packets.PacketHeaders[idx21].endAddress = kcg_lit_int32(0);
  }
  for (idx22 = 0; idx22 < 500; idx22++) {
    outC->_L21.packets.PacketData[idx22] = kcg_lit_int32(0);
  }
  outC->_L21.sendingRBC.valid = kcg_true;
  outC->_L21.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L21.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L21.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L22.valid = kcg_true;
  outC->_L22.source = msrc_undefined_Common_Types_Pkg;
  outC->_L22.radioMetadata.t_train_reference = kcg_true;
  outC->_L22.radioMetadata.nid_em = kcg_true;
  outC->_L22.radioMetadata.q_scale = kcg_true;
  outC->_L22.radioMetadata.d_sr = kcg_true;
  outC->_L22.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L22.radioMetadata.d_ref = kcg_true;
  outC->_L22.radioMetadata.q_dir = kcg_true;
  outC->_L22.radioMetadata.d_emergencystop = kcg_true;
  outC->_L22.radioMetadata.m_version = kcg_true;
  outC->_L22.BG_Common_Header.valid = kcg_true;
  outC->_L22.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L22.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L22.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L22.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L22.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L22.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L22.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L22.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L22.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L22.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L22.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L22.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L22.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L22.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->_L22.packets.PacketHeaders[idx23].nid_packet = kcg_lit_int32(0);
    outC->_L22.packets.PacketHeaders[idx23].q_dir = Q_DIR_Reverse;
    outC->_L22.packets.PacketHeaders[idx23].valid = kcg_true;
    outC->_L22.packets.PacketHeaders[idx23].startAddress = kcg_lit_int32(0);
    outC->_L22.packets.PacketHeaders[idx23].endAddress = kcg_lit_int32(0);
  }
  for (idx24 = 0; idx24 < 500; idx24++) {
    outC->_L22.packets.PacketData[idx24] = kcg_lit_int32(0);
  }
  outC->_L22.sendingRBC.valid = kcg_true;
  outC->_L22.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L22.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L22.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L23 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L27.valid = kcg_true;
  outC->_L27.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L27.nid_c = kcg_lit_int32(0);
  outC->_L27.nid_RBC = kcg_lit_int32(0);
  outC->_L27.nid_radio = kcg_lit_int64(0);
  outC->_L27.nid_mn = kcg_lit_int32(0);
  outC->_L28 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L11.present = kcg_true;
  outC->_L11.header.present = kcg_true;
  outC->_L11.header.nid_message = kcg_lit_int32(0);
  outC->_L11.header.t_train = kcg_lit_int32(0);
  outC->_L11.header.nid_engine = kcg_lit_int32(0);
  outC->_L11.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L11.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L11.header.xNID_EM = kcg_lit_int32(0);
  outC->_L11.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L11.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L11.packets.p0.valid = kcg_true;
  outC->_L11.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L11.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L11.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L11.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L11.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L11.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L11.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L11.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L11.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L11.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L11.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L11.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L11.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L11.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L11.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L11.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L11.packets.p1.valid = kcg_true;
  outC->_L11.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L11.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L11.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L11.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L11.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L11.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L11.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L11.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L11.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L11.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L11.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L11.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L11.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L11.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L11.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L11.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L11.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L11.packets.p3.valid = kcg_true;
  outC->_L11.packets.p3.number = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 1; idx26++) {
    outC->_L11.packets.p3.aNID_RADIO[idx26].valid = kcg_true;
    for (idx25 = 0; idx25 < 15; idx25++) {
      outC->_L11.packets.p3.aNID_RADIO[idx26].telephoneNumber[idx25] =
        kcg_lit_int32(0);
    }
  }
  outC->_L11.packets.p4.valid = kcg_true;
  outC->_L11.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L11.packets.p5.valid = kcg_true;
  outC->_L11.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L11.packets.p9.valid = kcg_true;
  outC->_L11.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L11.packets.p11.valid = kcg_true;
  outC->_L11.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L11.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L11.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L11.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L11.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L11.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L11.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L11.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L11.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx27 = 0; idx27 < 4; idx27++) {
    outC->_L11.packets.p11.tractionIdentity[idx27].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L11.packets.p11.tractionIdentity[idx27].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L11.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 5; idx28++) {
    outC->_L11.packets.p11.nid_ntc[idx28] = kcg_lit_int32(0);
  }
  outC->_L12.m155_initiationOfACommunicationSession = kcg_true;
  outC->_L12.m156_terminationOfACommunicationSession = kcg_true;
  outC->_L12.m159_sessionEstablished = kcg_true;
  outC->_L12.m154_noCompatibleVersionSupported = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L16.registration.valid = kcg_true;
  outC->_L16.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L16.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L16.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L16.registration.nid_mn = kcg_lit_int32(0);
  outC->_L16.connection.valid = kcg_true;
  outC->_L16.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L16.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L16.connection.nid_radio = kcg_lit_int64(0);
  outC->_L16.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L16.connection.connectionLost = kcg_true;
  outC->_L16.connection.isInRadioHole = kcg_true;
  outC->_L16.session.valid = kcg_true;
  outC->_L16.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L16.session.nid_c = kcg_lit_int32(0);
  outC->_L16.session.nid_rbc = kcg_lit_int32(0);
  outC->_L16.session.nid_radio = kcg_lit_int64(0);
  outC->_L17.valid = kcg_true;
  outC->_L17.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->_L18.valid = kcg_true;
  outC->_L18.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L18.action = mca_nop_RCM_Types_Pkg;
  outC->_L18.nid_radio = kcg_lit_int64(0);
  outC->_L19.valid = kcg_true;
  outC->_L19.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L19.action = mra_nop_RCM_Types_Pkg;
  outC->_L19.network_id = kcg_lit_int32(0);
  outC->_L20 = kcg_true;
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
  for (idx30 = 0; idx30 < 1; idx30++) {
    outC->_L1.packets.p3.aNID_RADIO[idx30].valid = kcg_true;
    for (idx29 = 0; idx29 < 15; idx29++) {
      outC->_L1.packets.p3.aNID_RADIO[idx30].telephoneNumber[idx29] =
        kcg_lit_int32(0);
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
  for (idx31 = 0; idx31 < 4; idx31++) {
    outC->_L1.packets.p11.tractionIdentity[idx31].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1.packets.p11.tractionIdentity[idx31].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L1.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx32 = 0; idx32 < 5; idx32++) {
    outC->_L1.packets.p11.nid_ntc[idx32] = kcg_lit_int32(0);
  }
  outC->_L2.m155_initiationOfACommunicationSession = kcg_true;
  outC->_L2.m156_terminationOfACommunicationSession = kcg_true;
  outC->_L2.m159_sessionEstablished = kcg_true;
  outC->_L2.m154_noCompatibleVersionSupported = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6.registration.valid = kcg_true;
  outC->_L6.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L6.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L6.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L6.registration.nid_mn = kcg_lit_int32(0);
  outC->_L6.connection.valid = kcg_true;
  outC->_L6.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L6.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L6.connection.nid_radio = kcg_lit_int64(0);
  outC->_L6.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L6.connection.connectionLost = kcg_true;
  outC->_L6.connection.isInRadioHole = kcg_true;
  outC->_L6.session.valid = kcg_true;
  outC->_L6.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L6.session.nid_c = kcg_lit_int32(0);
  outC->_L6.session.nid_rbc = kcg_lit_int32(0);
  outC->_L6.session.nid_radio = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->_L8.valid = kcg_true;
  outC->_L8.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L8.action = mca_nop_RCM_Types_Pkg;
  outC->_L8.nid_radio = kcg_lit_int64(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L9.action = mra_nop_RCM_Types_Pkg;
  outC->_L9.network_id = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->p45_networkRegistrationReceived_p = kcg_true;
  outC->p45_networkRegistration_p.valid = kcg_true;
  outC->p45_networkRegistration_p.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p45_networkRegistration_p.q_dir = Q_DIR_Reverse;
  outC->p45_networkRegistration_p.nid_mn = kcg_lit_int32(0);
  outC->p45_networkRegistration_p.origin.valid = kcg_true;
  outC->p45_networkRegistration_p.origin.nid_c = kcg_lit_int32(0);
  outC->p45_networkRegistration_p.origin.rbc_id = kcg_lit_int32(0);
  outC->p45_networkRegistration_p.origin.device_id = kcg_lit_int32(0);
  outC->m39_AckOfTerminationOfACommunicationSession_p.valid = kcg_true;
  outC->m39_AckOfTerminationOfACommunicationSession_p.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.valid = kcg_true;
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.nid_c =
    kcg_lit_int32(0);
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.rbc_id =
    kcg_lit_int32(0);
  outC->m39_AckOfTerminationOfACommunicationSession_p.origin.device_id =
    kcg_lit_int32(0);
  outC->m39_AckOfTerminationOfACommunicationSession_p.lrbg = kcg_lit_int32(0);
  outC->m38_initiationOfACommunicationSessionMsg_p.valid = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsg_p.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.valid = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.nid_c = kcg_lit_int32(
      0);
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.rbc_id =
    kcg_lit_int32(0);
  outC->m38_initiationOfACommunicationSessionMsg_p.origin.device_id =
    kcg_lit_int32(0);
  outC->m32_SystemVersion_p.valid = kcg_true;
  outC->m32_SystemVersion_p.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->m32_SystemVersion_p.versionSupported = kcg_true;
  outC->m32_SystemVersion_p.origin.valid = kcg_true;
  outC->m32_SystemVersion_p.origin.nid_c = kcg_lit_int32(0);
  outC->m32_SystemVersion_p.origin.rbc_id = kcg_lit_int32(0);
  outC->m32_SystemVersion_p.origin.device_id = kcg_lit_int32(0);
  outC->m32_SystemVersion_p.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionManagement_p.valid = kcg_true;
  outC->p42_sessionManagement_p.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionManagement_p.q_dir = Q_DIR_Reverse;
  outC->p42_sessionManagement_p.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_sessionManagement_p.nid_c = kcg_lit_int32(0);
  outC->p42_sessionManagement_p.nid_RBC = kcg_lit_int32(0);
  outC->p42_sessionManagement_p.nid_radio = kcg_lit_int64(0);
  outC->p42_sessionManagement_p.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_sessionManagement_p.origin.valid = kcg_true;
  outC->p42_sessionManagement_p.origin.nid_c = kcg_lit_int32(0);
  outC->p42_sessionManagement_p.origin.rbc_id = kcg_lit_int32(0);
  outC->p42_sessionManagement_p.origin.device_id = kcg_lit_int32(0);
  outC->m32_SystemVersionReceived_p = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsgReceived_p = kcg_true;
  outC->m39_AckOfTerminationOfACommunicationSessionReceived_p = kcg_true;
  outC->p42_sessionManagementReceived_p = kcg_true;
  outC->eventsAndPhases_p.atPowerUp = kcg_true;
  outC->eventsAndPhases_p.atPowerDown = kcg_true;
  outC->eventsAndPhases_p.atStartOfMission = kcg_true;
  outC->eventsAndPhases_p.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->eventsAndPhases_p.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->eventsAndPhases_p.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->eventsAndPhases_p.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->eventsAndPhases_p.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->eventsAndPhases_p.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->eventsAndPhases_p.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->eventsAndPhases_p.startOfMissionProcedureCompleted_in_level_2_or_3 =
    kcg_true;
  outC->eventsAndPhases_p.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->eventsAndPhases_p.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->eventsAndPhases_p.endOfMissionIsExecuted = kcg_true;
  outC->eventsAndPhases_p.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->eventsAndPhases_p.errorConditionRequiringTerminationDetected = kcg_true;
  outC->eventsAndPhases_p.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->eventsAndPhases_p.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->eventsAndPhases_p.trainExitedFromAnRBCArea = kcg_true;
  outC->eventsAndPhases_p.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->eventsAndPhases_p.level_1_isLeft = kcg_true;
  outC->mobileConnectionContext_1_p.valid = kcg_true;
  outC->mobileConnectionContext_1_p.mobileDeviceNo = kcg_lit_int32(0);
  outC->mobileConnectionContext_1_p.status = mcs_disconnected_RCM_Types_Pkg;
  outC->mobileConnectionContext_1_p.nid_radio = kcg_lit_int64(0);
  outC->mobileConnectionContext_1_p.settingUpConnectionHasFailed = kcg_true;
  outC->mobileConnectionContext_1_p.connectionLost = kcg_true;
  outC->mobileConnectionContext_1_p.isInRadioHole = kcg_true;
  outC->mobileRegistrationContext_1_p.valid = kcg_true;
  outC->mobileRegistrationContext_1_p.mobileDeviceNo = kcg_lit_int32(0);
  outC->mobileRegistrationContext_1_p.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->mobileRegistrationContext_1_p.status = mrs_unregistered_RCM_Types_Pkg;
  outC->mobileRegistrationContext_1_p.nid_mn = kcg_lit_int32(0);
  outC->level_p = M_LEVEL_Level_0;
  outC->mode_p = M_MODE_Full_Supervision;
  outC->morcMsgTriggersToRBC_2.m155_initiationOfACommunicationSession = kcg_true;
  outC->morcMsgTriggersToRBC_2.m156_terminationOfACommunicationSession = kcg_true;
  outC->morcMsgTriggersToRBC_2.m159_sessionEstablished = kcg_true;
  outC->morcMsgTriggersToRBC_2.m154_noCompatibleVersionSupported = kcg_true;
  outC->morcMsgTriggersToRBC_1.m155_initiationOfACommunicationSession = kcg_true;
  outC->morcMsgTriggersToRBC_1.m156_terminationOfACommunicationSession = kcg_true;
  outC->morcMsgTriggersToRBC_1.m159_sessionEstablished = kcg_true;
  outC->morcMsgTriggersToRBC_1.m154_noCompatibleVersionSupported = kcg_true;
  outC->sendPositionReportToRBC_2 = kcg_true;
  outC->sendPositionReportToRBC_1 = kcg_true;
  outC->handingOverRBC_is_RBC_1 = kcg_true;
  outC->useInformationFromAcceptingRBC = kcg_true;
  outC->sendTrainData_2_acceptingRBC = kcg_true;
  outC->sendPositionReport_2_acceptingRBC = kcg_true;
  outC->sendPositionReport_2_handingOverRBC = kcg_true;
  outC->sNotReady = kcg_true;
  outC->ready = kcg_true;
  outC->lastReceivedRadioNetworkID.valid = kcg_true;
  outC->lastReceivedRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->lastReceivedRadioNetworkID.nid_mn = kcg_lit_int32(0);
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->triggerTrainData = kcg_true;
  outC->triggerPositionReport = kcg_true;
  for (idx34 = 0; idx34 < 5; idx34++) {
    outC->msgBus_2_RBC_2[idx34].Message.valid = kcg_true;
    outC->msgBus_2_RBC_2[idx34].Message.nid_message = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx34].Message.l_message = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx34].Message.t_train = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx34].Message.nid_engine = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx34].Message.field1 = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx34].Message.field2 = kcg_lit_int32(0);
    outC->msgBus_2_RBC_2[idx34].Message.field3 = kcg_lit_int32(0);
    for (idx33 = 0; idx33 < 50; idx33++) {
      outC->msgBus_2_RBC_2[idx34].OptionalPackets[idx33] = kcg_lit_int32(0);
    }
  }
  for (idx36 = 0; idx36 < 5; idx36++) {
    outC->msgBus_2_RBC_1[idx36].Message.valid = kcg_true;
    outC->msgBus_2_RBC_1[idx36].Message.nid_message = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx36].Message.l_message = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx36].Message.t_train = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx36].Message.nid_engine = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx36].Message.field1 = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx36].Message.field2 = kcg_lit_int32(0);
    outC->msgBus_2_RBC_1[idx36].Message.field3 = kcg_lit_int32(0);
    for (idx35 = 0; idx35 < 50; idx35++) {
      outC->msgBus_2_RBC_1[idx36].OptionalPackets[idx35] = kcg_lit_int32(0);
    }
  }
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = kcg_true;
  outC->bufferInformationFromAcceptingRBC = kcg_true;
  outC->supervisingRBC.valid = kcg_true;
  outC->supervisingRBC.mobileDeviceNo = kcg_lit_int32(0);
  outC->supervisingRBC.nid_c = kcg_lit_int32(0);
  outC->supervisingRBC.nid_RBC = kcg_lit_int32(0);
  outC->supervisingRBC.nid_radio = kcg_lit_int64(0);
  outC->supervisingRBC.nid_mn = kcg_lit_int32(0);
  outC->safeRadioIndication.valid = kcg_true;
  outC->safeRadioIndication.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->mobileRegistrationCmd_2.valid = kcg_true;
  outC->mobileRegistrationCmd_2.mobileDeviceNo = kcg_lit_int32(0);
  outC->mobileRegistrationCmd_2.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd_2.network_id = kcg_lit_int32(0);
  outC->mobileRegistrationCmd_1.valid = kcg_true;
  outC->mobileRegistrationCmd_1.mobileDeviceNo = kcg_lit_int32(0);
  outC->mobileRegistrationCmd_1.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd_1.network_id = kcg_lit_int32(0);
  outC->mobileConnectionCmd_2.valid = kcg_true;
  outC->mobileConnectionCmd_2.mobileDeviceNo = kcg_lit_int32(0);
  outC->mobileConnectionCmd_2.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd_2.nid_radio = kcg_lit_int64(0);
  outC->mobileConnectionCmd_1.valid = kcg_true;
  outC->mobileConnectionCmd_1.mobileDeviceNo = kcg_lit_int32(0);
  outC->mobileConnectionCmd_1.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd_1.nid_radio = kcg_lit_int64(0);
  outC->radioStatus_2.registration.valid = kcg_true;
  outC->radioStatus_2.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->radioStatus_2.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->radioStatus_2.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->radioStatus_2.registration.nid_mn = kcg_lit_int32(0);
  outC->radioStatus_2.connection.valid = kcg_true;
  outC->radioStatus_2.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->radioStatus_2.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->radioStatus_2.connection.nid_radio = kcg_lit_int64(0);
  outC->radioStatus_2.connection.settingUpConnectionHasFailed = kcg_true;
  outC->radioStatus_2.connection.connectionLost = kcg_true;
  outC->radioStatus_2.connection.isInRadioHole = kcg_true;
  outC->radioStatus_2.session.valid = kcg_true;
  outC->radioStatus_2.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->radioStatus_2.session.nid_c = kcg_lit_int32(0);
  outC->radioStatus_2.session.nid_rbc = kcg_lit_int32(0);
  outC->radioStatus_2.session.nid_radio = kcg_lit_int64(0);
  outC->radioStatus_1.registration.valid = kcg_true;
  outC->radioStatus_1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->radioStatus_1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->radioStatus_1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->radioStatus_1.registration.nid_mn = kcg_lit_int32(0);
  outC->radioStatus_1.connection.valid = kcg_true;
  outC->radioStatus_1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->radioStatus_1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->radioStatus_1.connection.nid_radio = kcg_lit_int64(0);
  outC->radioStatus_1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->radioStatus_1.connection.connectionLost = kcg_true;
  outC->radioStatus_1.connection.isInRadioHole = kcg_true;
  outC->radioStatus_1.session.valid = kcg_true;
  outC->radioStatus_1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->radioStatus_1.session.nid_c = kcg_lit_int32(0);
  outC->radioStatus_1.session.nid_rbc = kcg_lit_int32(0);
  outC->radioStatus_1.session.nid_radio = kcg_lit_int64(0);
  /* _L114=(Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out#1)/ */
  mobileBusRouter_out_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_mobileBusRouter_out_1);
  /* _L1=(MoRC_Pck::MoRC_Main_v2#1)/ */
  MoRC_Main_v2_init_MoRC_Pck(&outC->Context_MoRC_Main_v2_1);
  /* _L11=(MoRC_Pck::MoRC_Main_v2#2)/ */
  MoRC_Main_v2_init_MoRC_Pck(&outC->Context_MoRC_Main_v2_2);
  /* _L21=(Handover_Pkg::handoverUtils_Pkg::processHandingOver#1)/ */
  processHandingOver_init_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_processHandingOver_1);
  /* _L172=(RCM_Utils_Pkg::decoders::dec_p42#1)/ */
  dec_p42_init_RCM_Utils_Pkg_decoders(&outC->Context_dec_p42_1);
  /* _L177=(RCM_Utils_Pkg::decoders::dec_m32#1)/ */
  dec_m32_init_RCM_Utils_Pkg_decoders(&outC->Context_dec_m32_1);
  /* _L174=(RCM_Utils_Pkg::decoders::dec_m38#1)/ */
  dec_m38_init_RCM_Utils_Pkg_decoders(&outC->Context_dec_m38_1);
  /* _L173=(RCM_Utils_Pkg::decoders::dec_m39#1)/ */
  dec_m39_init_RCM_Utils_Pkg_decoders(&outC->Context_dec_m39_1);
  /* _L184=(RCM_Utils_Pkg::decoders::dec_p45#1)/ */
  dec_p45_init_RCM_Utils_Pkg_decoders(&outC->Context_dec_p45_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->morcStatus_1,
    (morcStatus_T_RCM_Session_Types_Pkg *) &cNoMoRCStatus_RCM_Session_Types_Pkg);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->morcStatus_2,
    (morcStatus_T_RCM_Session_Types_Pkg *) &cNoMoRCStatus_RCM_Session_Types_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoRC_HO_reset_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  /* _L114=(Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out#1)/ */
  mobileBusRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_mobileBusRouter_out_1);
  /* _L1=(MoRC_Pck::MoRC_Main_v2#1)/ */
  MoRC_Main_v2_reset_MoRC_Pck(&outC->Context_MoRC_Main_v2_1);
  /* _L11=(MoRC_Pck::MoRC_Main_v2#2)/ */
  MoRC_Main_v2_reset_MoRC_Pck(&outC->Context_MoRC_Main_v2_2);
  /* _L21=(Handover_Pkg::handoverUtils_Pkg::processHandingOver#1)/ */
  processHandingOver_reset_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_processHandingOver_1);
  /* _L172=(RCM_Utils_Pkg::decoders::dec_p42#1)/ */
  dec_p42_reset_RCM_Utils_Pkg_decoders(&outC->Context_dec_p42_1);
  /* _L177=(RCM_Utils_Pkg::decoders::dec_m32#1)/ */
  dec_m32_reset_RCM_Utils_Pkg_decoders(&outC->Context_dec_m32_1);
  /* _L174=(RCM_Utils_Pkg::decoders::dec_m38#1)/ */
  dec_m38_reset_RCM_Utils_Pkg_decoders(&outC->Context_dec_m38_1);
  /* _L173=(RCM_Utils_Pkg::decoders::dec_m39#1)/ */
  dec_m39_reset_RCM_Utils_Pkg_decoders(&outC->Context_dec_m39_1);
  /* _L184=(RCM_Utils_Pkg::decoders::dec_p45#1)/ */
  dec_p45_reset_RCM_Utils_Pkg_decoders(&outC->Context_dec_p45_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->morcStatus_1,
    (morcStatus_T_RCM_Session_Types_Pkg *) &cNoMoRCStatus_RCM_Session_Types_Pkg);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->morcStatus_2,
    (morcStatus_T_RCM_Session_Types_Pkg *) &cNoMoRCStatus_RCM_Session_Types_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_MoRC_HO_MoRC_HO_Pkg(
  SV_MoRC_HO_MoRC_HO_Pkg *SV,
  outC_MoRC_HO_MoRC_HO_Pkg *outC)
{
  kcg_save_SV_processHandingOver_Handover_Pkg_handoverUtils_Pkg(
    &SV->Context_processHandingOver_1,
    &outC->Context_processHandingOver_1);
  kcg_save_SV_MoRC_Main_v2_MoRC_Pck(
    &SV->Context_MoRC_Main_v2_2,
    &outC->Context_MoRC_Main_v2_2);
  kcg_save_SV_MoRC_Main_v2_MoRC_Pck(
    &SV->Context_MoRC_Main_v2_1,
    &outC->Context_MoRC_Main_v2_1);
  kcg_save_SV_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
    &SV->Context_mobileBusRouter_out_1,
    &outC->Context_mobileBusRouter_out_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &SV->Context_morcStatus_2,
    &outC->morcStatus_2);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &SV->Context_morcStatus_1,
    &outC->morcStatus_1);
}

void kcg_load_SV_MoRC_HO_MoRC_HO_Pkg(
  outC_MoRC_HO_MoRC_HO_Pkg *outC,
  SV_MoRC_HO_MoRC_HO_Pkg *SV)
{
  kcg_load_SV_processHandingOver_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_processHandingOver_1,
    &SV->Context_processHandingOver_1);
  kcg_load_SV_MoRC_Main_v2_MoRC_Pck(
    &outC->Context_MoRC_Main_v2_2,
    &SV->Context_MoRC_Main_v2_2);
  kcg_load_SV_MoRC_Main_v2_MoRC_Pck(
    &outC->Context_MoRC_Main_v2_1,
    &SV->Context_MoRC_Main_v2_1);
  kcg_load_SV_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
    &outC->Context_mobileBusRouter_out_1,
    &SV->Context_mobileBusRouter_out_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->morcStatus_2,
    &SV->Context_morcStatus_2);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &outC->morcStatus_1,
    &SV->Context_morcStatus_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoRC_HO_MoRC_HO_Pkg.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

