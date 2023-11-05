/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_Main_v2_MoRC_Pck.h"

/* MoRC_Pck::MoRC_Main_v2/ */
void MoRC_Main_v2_MoRC_Pck(
  /* msg_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *msg_in,
  /* eventsAndPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* atPowerUpRadioNetworkID/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* newRadioNetworkIDFromDriver/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* mode/ */
  M_MODE mode,
  /* level/ */
  M_LEVEL level,
  /* mobileRegistrationContext/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext,
  /* mobileConnectionContext/ */
  mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext,
  /* currentTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* reset/ */
  kcg_bool reset,
  /* t_train/ */
  T_TRAIN t_train,
  /* configData/ */
  morc_configData_T_RCM_Session_Types_Pkg *configData,
  outC_MoRC_Main_v2_MoRC_Pck *outC)
{
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _1_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _2_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _3_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _4_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _5_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _6_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _7_msgToRBC_partial;
  /* sessionStatus_l/ */
  static sessionStatus_T_RCM_Session_Types_Pkg last_sessionStatus_l;
  /* registrationStatus_l/ */
  static mobileRegistrationContext_T_RCM_Types_Pkg last_registrationStatus_l;
  /* connectionStatus_l/ */
  static mobileConnectionContext_T_RCM_Types_Pkg last_connectionStatus_l;

  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &last_sessionStatus_l,
    &outC->sessionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &last_registrationStatus_l,
    &outC->registrationStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &last_connectionStatus_l,
    &outC->connectionStatus_l);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L90, msg_in);
  /* _L99=(RCM_Utils_Pkg::decoders::dec_p42#2)/ */
  dec_p42_RCM_Utils_Pkg_decoders(&outC->_L90, &outC->Context_dec_p42_2);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L99,
    &outC->Context_dec_p42_2.p42_sessionManagement);
  outC->_L142 = outC->_L99.valid;
  outC->p42_sessionManagementReceived_p = outC->_L142;
  /* _L96=(RCM_Utils_Pkg::decoders::dec_m39#1)/ */
  dec_m39_RCM_Utils_Pkg_decoders(&outC->_L90, &outC->Context_dec_m39_1);
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L96,
    &outC->Context_dec_m39_1.m39_acknowledgementOfTerminationOfACommunicationSession);
  outC->_L145 = outC->_L96.valid;
  outC->m39_AckOfTerminationOfACommunicationSessionReceived_p = outC->_L145;
  /* _L95=(RCM_Utils_Pkg::decoders::dec_m38#1)/ */
  dec_m38_RCM_Utils_Pkg_decoders(&outC->_L90, &outC->Context_dec_m38_1);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L95,
    &outC->Context_dec_m38_1.m38_initiationOfComSession);
  outC->_L144 = outC->_L95.valid;
  outC->m38_initiationOfACommunicationSessionMsgReceived_p = outC->_L144;
  outC->_L100 = kcg_true;
  /* _L94=(RCM_Utils_Pkg::decoders::dec_m32#1)/ */
  dec_m32_RCM_Utils_Pkg_decoders(
    &outC->_L90,
    outC->_L100,
    &outC->Context_dec_m32_1);
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &outC->_L94,
    &outC->Context_dec_m32_1.m32_RBC_or_RIU_System_Version);
  outC->_L143 = outC->_L94.valid;
  outC->m32_SystemVersionReceived_p = outC->_L143;
  outC->_L36 = mode;
  outC->_L82 = kcg_false;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L33,
    eventsAndPhases);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->p42_sessionManagement,
    &outC->_L99);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L91,
    &outC->p42_sessionManagement);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->m38_initiationOfACommunicationSessionMsg,
    &outC->_L95);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L101,
    &outC->m38_initiationOfACommunicationSessionMsg);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L52,
    &last_registrationStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L51,
    &last_connectionStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L27,
    &last_sessionStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L83,
    (sessionStatus_T_RCM_Session_Types_Pkg *)
      &cNoSessionStatus_RCM_Session_Types_Pkg);
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&outC->_L105, configData);
  outC->_L106 = outC->_L105.nid_radio_shortNumberStoredOnboard;
  /* _L1=(MoRC_Pck::Subfunc_Pkg::initiateSession_v2#1)/ */
  initiateSession_v2_MoRC_Pck_Subfunc_Pkg(
    outC->_L36,
    outC->_L82,
    &outC->_L33,
    &outC->_L91,
    &outC->_L101,
    &outC->_L52,
    &outC->_L51,
    &outC->_L27,
    &outC->_L83,
    outC->_L106,
    &outC->Context_initiateSession_v2_1);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &outC->_L1,
    &outC->Context_initiateSession_v2_1.sessionEstablishCmd);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L92,
    &outC->p42_sessionManagement);
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->m39_AckOfTerminationOfACommunicationSession,
    &outC->_L96);
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &outC->_L103,
    &outC->m39_AckOfTerminationOfACommunicationSession);
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &outC->m32_SystemVersion,
    &outC->_L94);
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &outC->_L102,
    &outC->m32_SystemVersion);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L65,
    &last_connectionStatus_l);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L93,
    &outC->p42_sessionManagement);
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L75,
    eventsAndPhases);
  outC->_L76 = mode;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L77,
    &last_sessionStatus_l);
  outC->_L78 = currentTime;
  outC->_L79 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&outC->_L113, configData);
  outC->_L111 = outC->_L113.maxWaitingTimeUntilTerminationOrderReceived;
  outC->_L112 = outC->_L113.noOfRetriesUntilTerminationOrderIsReceived;
  /* _L72=(MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2#1)/ */
  initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->_L93,
    &outC->_L75,
    outC->_L76,
    &outC->_L77,
    outC->_L78,
    outC->_L79,
    outC->_L111,
    outC->_L112,
    &outC->Context_initiateTerminatingSession_v2_1);
  outC->_L72 = outC->Context_initiateTerminatingSession_v2_1.initiateTermination;
  outC->_L73 = outC->Context_initiateTerminatingSession_v2_1.sendAPositionReport;
  outC->_L66 = currentTime;
  outC->_L67 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&outC->_L107, configData);
  outC->_L108 = outC->_L107.noOfRetriesOfSendingTerminationMessage;
  outC->_L110 = outC->_L107.maxWaitingTimeForAckMessageReceived;
  /* _L56=(MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2#1)/ */
  sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->_L1,
    &outC->_L92,
    &outC->_L103,
    &outC->_L102,
    &outC->_L65,
    outC->_L72,
    outC->_L66,
    outC->_L67,
    outC->_L108,
    outC->_L110,
    &outC->Context_sessionSequencer_v2_1);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &outC->_L56,
    &outC->Context_sessionSequencer_v2_1.p42_SessionManagement_out);
  outC->_L57 =
    outC->Context_sessionSequencer_v2_1.send_m155_initiationOfACommunicationSession;
  outC->_L58 =
    outC->Context_sessionSequencer_v2_1.send_m156_TerminationOfCommunicationSession;
  outC->_L59 =
    outC->Context_sessionSequencer_v2_1.send_m159_sessionEstablishedReport;
  outC->_L60 =
    outC->Context_sessionSequencer_v2_1.send_m154_noCompatibleVersionSupported;
  outC->_L61 =
    outC->Context_sessionSequencer_v2_1.requestSafeRadioConnectionSetup;
  outC->_L62 =
    outC->Context_sessionSequencer_v2_1.infomDriverNoCompatibleVersionSupported;
  outC->_L63 =
    outC->Context_sessionSequencer_v2_1.requestReleaseOfSafeRadioConnection;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L64,
    &outC->Context_sessionSequencer_v2_1.sessionStatus);
  outC->_L125 = outC->Context_sessionSequencer_v2_1.notReady;
  outC->m159_sessionEstablished = outC->_L59;
  outC->_L141 = outC->m159_sessionEstablished;
  outC->m156_terminationOfACommunicationSession = outC->_L58;
  outC->_L140 = outC->m156_terminationOfACommunicationSession;
  outC->m155_initiationOfACommunicationSession = outC->_L57;
  outC->_L139 = outC->m155_initiationOfACommunicationSession;
  outC->m154_noCompatibleVersionSupported = outC->_L60;
  outC->_L138 = outC->m154_noCompatibleVersionSupported;
  outC->_L137.m155_initiationOfACommunicationSession = outC->_L139;
  outC->_L137.m156_terminationOfACommunicationSession = outC->_L140;
  outC->_L137.m159_sessionEstablished = outC->_L141;
  outC->_L137.m154_noCompatibleVersionSupported = outC->_L138;
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &outC->msgToTrackTriggers,
    &outC->_L137);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->sessionStatus_l,
    &outC->_L64);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L130,
    &outC->sessionStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L132,
    &last_sessionStatus_l);
  outC->_L135 = !kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L132,
      &outC->_L130);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L46,
    atPowerUpRadioNetworkID);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L47,
    newRadioNetworkIDFromDriver);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->_L104, msg_in);
  outC->_L39 = level;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L45,
    eventsAndPhases);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L30,
    &outC->sessionStatus_l);
  outC->_L37 = mode;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L34,
    eventsAndPhases);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L28,
    &outC->sessionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L26,
    &last_registrationStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L14,
    &last_connectionStatus_l);
  outC->_L55 = currentTime;
  outC->_L31 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&outC->_L115, configData);
  outC->_L116 = outC->_L115.maxTimeToMaintainCommSession;
  outC->_L114 = outC->_L115.noOfTriesToEstablishASafeRadioConnection;
  /* _L2=(MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2#1)/ */
  requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
    outC->_L37,
    &outC->_L34,
    &outC->_L56,
    &outC->_L28,
    &outC->_L26,
    &outC->_L14,
    outC->_L61,
    outC->_L63,
    outC->_L55,
    outC->_L31,
    outC->_L116,
    outC->_L114,
    &outC->Context_requestRadioConnectionSetupFromOBU_v2_1);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->_L2,
    &outC->Context_requestRadioConnectionSetupFromOBU_v2_1.connectionCmd);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L43,
    mobileConnectionContext);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L41,
    &last_registrationStatus_l);
  /* _L8=(MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2#1)/ */
  connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->_L2,
    &outC->_L43,
    &outC->_L41,
    &outC->Context_connectingToTheRBC_v2_1);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->_L8,
    &outC->Context_connectingToTheRBC_v2_1.mobileConnectionCmd);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L9,
    &outC->Context_connectingToTheRBC_v2_1.connectionStatus);
  outC->_L10 =
    outC->Context_connectingToTheRBC_v2_1.rejectOrderToContactRBC_or_RIU;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L42,
    mobileRegistrationContext);
  outC->_L40 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&outC->_L118, configData);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L117,
    &outC->_L118.radioNetworkID_Default);
  /* _L19=(MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2#1)/ */
  registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->_L46,
    &outC->_L47,
    &outC->_L104,
    outC->_L39,
    &outC->_L45,
    &outC->_L30,
    &outC->_L9,
    &outC->_L42,
    outC->_L40,
    &outC->_L117,
    &outC->Context_registeringToTheRadioNetwork_v2_1);
  outC->_L19 =
    outC->Context_registeringToTheRadioNetwork_v2_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L21,
    &outC->Context_registeringToTheRadioNetwork_v2_1.lastReceivedRadioNetworkID);
  outC->_L20 =
    outC->Context_registeringToTheRadioNetwork_v2_1.rejectOrderToContactRBC_or_RIU;
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->_L22,
    &outC->Context_registeringToTheRadioNetwork_v2_1.mobileRegistrationCmd);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L23,
    &outC->Context_registeringToTheRadioNetwork_v2_1.mobileRegistrationStatus);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->registrationStatus_l,
    &outC->_L23);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L131,
    &outC->registrationStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L129,
    &last_registrationStatus_l);
  outC->_L134 = !kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(
      &outC->_L129,
      &outC->_L131);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->connectionStatus_l,
    &outC->_L9);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L128,
    &outC->connectionStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L127,
    &last_connectionStatus_l);
  outC->_L133 = !kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
      &outC->_L127,
      &outC->_L128);
  outC->sNotReady = outC->_L125;
  outC->_L126 = outC->sNotReady;
  outC->_L136 = outC->_L126 | outC->_L133 | outC->_L134 | outC->_L135;
  outC->notReady = outC->_L136;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L124,
    &outC->registrationStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L123,
    &outC->sessionStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L122,
    &outC->connectionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->_L121.registration,
    &outC->_L124);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->_L121.connection,
    &outC->_L122);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->_L121.session,
    &outC->_L123);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->status, &outC->_L121);
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(&outC->_L120, configData);
  outC->_L119 = outC->_L120.connectionStatusTimerInterval;
  outC->ifMessageToRBC_clock = outC->m155_initiationOfACommunicationSession;
  /* ifMessageToRBC: */
  if (outC->ifMessageToRBC_clock) {
    kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
      &outC->_L12_then_ifMessageToRBC,
      configData);
    outC->_L11_then_ifMessageToRBC = outC->_L12_then_ifMessageToRBC.nid_engine;
    outC->_L10_then_ifMessageToRBC = kcg_lit_int32(0);
    outC->_L9_then_ifMessageToRBC = kcg_true;
    outC->_L8_then_ifMessageToRBC =
      co155_Initiation_of_a_communication_session_Id_Pkg;
    outC->_L7_then_ifMessageToRBC = t_train;
    /* ifMessageToRBC:then:_L6=(MoRC_Pck::Coder_Pkg::genMsgToRBC#4)/ */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      outC->_L9_then_ifMessageToRBC,
      outC->_L8_then_ifMessageToRBC,
      outC->_L7_then_ifMessageToRBC,
      outC->_L10_then_ifMessageToRBC,
      outC->_L11_then_ifMessageToRBC,
      &outC->Context_genMsgToRBC_4);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->_L6_then_ifMessageToRBC,
      &outC->Context_genMsgToRBC_4.radioMessage);
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
      &msgToRBC_partial,
      &outC->_L6_then_ifMessageToRBC);
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&outC->msgToRBC, &msgToRBC_partial);
  }
  else {
    outC->else_clock_ifMessageToRBC = outC->m156_terminationOfACommunicationSession;
    /* ifMessageToRBC:else: */
    if (outC->else_clock_ifMessageToRBC) {
      kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
        &outC->_L8_then_else_ifMessageToRBC,
        configData);
      outC->_L7_then_else_ifMessageToRBC =
        outC->_L8_then_else_ifMessageToRBC.nid_engine;
      outC->_L6_then_else_ifMessageToRBC = kcg_lit_int32(0);
      outC->_L5_then_else_ifMessageToRBC = kcg_true;
      outC->_L4_then_else_ifMessageToRBC =
        co156_Termination_of_a_communication_session_Id_Pkg;
      outC->_L3_then_else_ifMessageToRBC = t_train;
      /* ifMessageToRBC:else:then:_L2=(MoRC_Pck::Coder_Pkg::genMsgToRBC#3)/ */
      genMsgToRBC_MoRC_Pck_Coder_Pkg(
        outC->_L5_then_else_ifMessageToRBC,
        outC->_L4_then_else_ifMessageToRBC,
        outC->_L3_then_else_ifMessageToRBC,
        outC->_L6_then_else_ifMessageToRBC,
        outC->_L7_then_else_ifMessageToRBC,
        &outC->Context_genMsgToRBC_3);
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &outC->_L2_then_else_ifMessageToRBC,
        &outC->Context_genMsgToRBC_3.radioMessage);
      kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
        &_7_msgToRBC_partial,
        &outC->_L2_then_else_ifMessageToRBC);
      kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
        &_1_msgToRBC_partial,
        &_7_msgToRBC_partial);
    }
    else {
      outC->else_clock_else_ifMessageToRBC = outC->m159_sessionEstablished;
      /* ifMessageToRBC:else:else: */
      if (outC->else_clock_else_ifMessageToRBC) {
        kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
          &outC->_L17_then_else_else_ifMessageToRBC,
          configData);
        kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
          &outC->_L19_then_else_else_ifMessageToRBC,
          &outC->_L17_then_else_else_ifMessageToRBC.onboardPhoneNumbers);
        outC->_L18_then_else_else_ifMessageToRBC =
          outC->_L17_then_else_else_ifMessageToRBC.nid_engine;
        outC->_L16_then_else_else_ifMessageToRBC = kcg_lit_int32(0);
        outC->_L10_then_else_else_ifMessageToRBC = kcg_true;
        outC->_L1_then_else_else_ifMessageToRBC = co159_Session_established_Id_Pkg;
        outC->_L11_then_else_else_ifMessageToRBC = t_train;
        /* ifMessageToRBC:else:else:then:_L12=(MoRC_Pck::Coder_Pkg::genMsgToRBC#2)/ */
        genMsgToRBC_MoRC_Pck_Coder_Pkg(
          outC->_L10_then_else_else_ifMessageToRBC,
          outC->_L1_then_else_else_ifMessageToRBC,
          outC->_L11_then_else_else_ifMessageToRBC,
          outC->_L16_then_else_else_ifMessageToRBC,
          outC->_L18_then_else_else_ifMessageToRBC,
          &outC->Context_genMsgToRBC_2);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &outC->_L12_then_else_else_ifMessageToRBC,
          &outC->Context_genMsgToRBC_2.radioMessage);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &outC->_L15_then_else_else_ifMessageToRBC,
          &outC->_L12_then_else_else_ifMessageToRBC);
        if (kcg_true) {
          kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
            &outC->_L15_then_else_else_ifMessageToRBC.packets.p3,
            &outC->_L19_then_else_else_ifMessageToRBC);
        }
        kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
          &_2_msgToRBC_partial,
          &outC->_L15_then_else_else_ifMessageToRBC);
        kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
          &_6_msgToRBC_partial,
          &_2_msgToRBC_partial);
      }
      else {
        outC->else_clock_else_else_ifMessageToRBC =
          outC->m154_noCompatibleVersionSupported;
        /* ifMessageToRBC:else:else:else: */
        if (outC->else_clock_else_else_ifMessageToRBC) {
          kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
            &outC->_L9_then_else_else_else_ifMessageToRBC,
            configData);
          outC->_L8_then_else_else_else_ifMessageToRBC =
            outC->_L9_then_else_else_else_ifMessageToRBC.nid_engine;
          outC->_L7_then_else_else_else_ifMessageToRBC = kcg_lit_int32(0);
          outC->_L6_then_else_else_else_ifMessageToRBC =
            co154_No_Compatible_Version_Support_Id_Pkg;
          outC->_L5_then_else_else_else_ifMessageToRBC = kcg_true;
          outC->_L2_then_else_else_else_ifMessageToRBC = t_train;
          /* ifMessageToRBC:else:else:else:then:_L1=(MoRC_Pck::Coder_Pkg::genMsgToRBC#1)/ */
          genMsgToRBC_MoRC_Pck_Coder_Pkg(
            outC->_L5_then_else_else_else_ifMessageToRBC,
            outC->_L6_then_else_else_else_ifMessageToRBC,
            outC->_L2_then_else_else_else_ifMessageToRBC,
            outC->_L7_then_else_else_else_ifMessageToRBC,
            outC->_L8_then_else_else_else_ifMessageToRBC,
            &outC->Context_genMsgToRBC_1);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &outC->_L1_then_else_else_else_ifMessageToRBC,
            &outC->Context_genMsgToRBC_1.radioMessage);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
            &_5_msgToRBC_partial,
            &outC->_L1_then_else_else_else_ifMessageToRBC);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
            &_3_msgToRBC_partial,
            &_5_msgToRBC_partial);
        }
        else {
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &outC->_L1_else_else_else_else_ifMessageToRBC,
            (Radio_TrainTrack_Message_T_Radio_Types_Pkg *) &cNoMessageToRBC_MoRC_Pck);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
            &_4_msgToRBC_partial,
            &outC->_L1_else_else_else_else_ifMessageToRBC);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
            &_3_msgToRBC_partial,
            &_4_msgToRBC_partial);
        }
        kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
          &_6_msgToRBC_partial,
          &_3_msgToRBC_partial);
      }
      kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
        &_1_msgToRBC_partial,
        &_6_msgToRBC_partial);
    }
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&outC->msgToRBC, &_1_msgToRBC_partial);
  }
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &outC->_L86,
    eventsAndPhases);
  outC->_L87 = currentTime;
  outC->_L88 = reset;
  /* _L84=(MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2#1)/ */
  safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->_L8,
    &outC->_L9,
    &outC->_L86,
    outC->_L87,
    outC->_L88,
    outC->_L119,
    &outC->Context_safeRadioConnectionIndication_v2_1);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->_L84,
    &outC->Context_safeRadioConnectionIndication_v2_1.indication);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &outC->safeRadioIndication,
    &outC->_L84);
  outC->sendAPositionReport = outC->_L73;
  outC->infomDriverNoCompatibleVersionSupported = outC->_L62;
  outC->_L50 = outC->_L10 | outC->_L20;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->lastReceivedRadioNetworkID,
    &outC->_L21);
  outC->memorizeTheLastRadioNetworkID = outC->_L19;
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &outC->mobileRegistrationCmd,
    &outC->_L22);
  outC->rejectOrderToContactRBC_or_RIU = outC->_L50;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &outC->mobileConnectionCmd,
    &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void MoRC_Main_v2_init_MoRC_Pck(outC_MoRC_Main_v2_MoRC_Pck *outC)
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

  outC->_L145 = kcg_true;
  outC->_L144 = kcg_true;
  outC->_L143 = kcg_true;
  outC->_L142 = kcg_true;
  outC->_L141 = kcg_true;
  outC->_L140 = kcg_true;
  outC->_L139 = kcg_true;
  outC->_L138 = kcg_true;
  outC->_L137.m155_initiationOfACommunicationSession = kcg_true;
  outC->_L137.m156_terminationOfACommunicationSession = kcg_true;
  outC->_L137.m159_sessionEstablished = kcg_true;
  outC->_L137.m154_noCompatibleVersionSupported = kcg_true;
  outC->_L136 = kcg_true;
  outC->_L135 = kcg_true;
  outC->_L134 = kcg_true;
  outC->_L133 = kcg_true;
  outC->_L132.valid = kcg_true;
  outC->_L132.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L132.nid_c = kcg_lit_int32(0);
  outC->_L132.nid_rbc = kcg_lit_int32(0);
  outC->_L132.nid_radio = kcg_lit_int64(0);
  outC->_L131.valid = kcg_true;
  outC->_L131.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L131.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L131.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L131.nid_mn = kcg_lit_int32(0);
  outC->_L130.valid = kcg_true;
  outC->_L130.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L130.nid_c = kcg_lit_int32(0);
  outC->_L130.nid_rbc = kcg_lit_int32(0);
  outC->_L130.nid_radio = kcg_lit_int64(0);
  outC->_L129.valid = kcg_true;
  outC->_L129.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L129.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L129.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L129.nid_mn = kcg_lit_int32(0);
  outC->_L128.valid = kcg_true;
  outC->_L128.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L128.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L128.nid_radio = kcg_lit_int64(0);
  outC->_L128.settingUpConnectionHasFailed = kcg_true;
  outC->_L128.connectionLost = kcg_true;
  outC->_L128.isInRadioHole = kcg_true;
  outC->_L127.valid = kcg_true;
  outC->_L127.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L127.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L127.nid_radio = kcg_lit_int64(0);
  outC->_L127.settingUpConnectionHasFailed = kcg_true;
  outC->_L127.connectionLost = kcg_true;
  outC->_L127.isInRadioHole = kcg_true;
  outC->_L126 = kcg_true;
  outC->_L125 = kcg_true;
  outC->_L124.valid = kcg_true;
  outC->_L124.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L124.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L124.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L124.nid_mn = kcg_lit_int32(0);
  outC->_L123.valid = kcg_true;
  outC->_L123.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L123.nid_c = kcg_lit_int32(0);
  outC->_L123.nid_rbc = kcg_lit_int32(0);
  outC->_L123.nid_radio = kcg_lit_int64(0);
  outC->_L122.valid = kcg_true;
  outC->_L122.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L122.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L122.nid_radio = kcg_lit_int64(0);
  outC->_L122.settingUpConnectionHasFailed = kcg_true;
  outC->_L122.connectionLost = kcg_true;
  outC->_L122.isInRadioHole = kcg_true;
  outC->_L121.registration.valid = kcg_true;
  outC->_L121.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L121.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L121.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L121.registration.nid_mn = kcg_lit_int32(0);
  outC->_L121.connection.valid = kcg_true;
  outC->_L121.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L121.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L121.connection.nid_radio = kcg_lit_int64(0);
  outC->_L121.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L121.connection.connectionLost = kcg_true;
  outC->_L121.connection.isInRadioHole = kcg_true;
  outC->_L121.session.valid = kcg_true;
  outC->_L121.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L121.session.nid_c = kcg_lit_int32(0);
  outC->_L121.session.nid_rbc = kcg_lit_int32(0);
  outC->_L121.session.nid_radio = kcg_lit_int64(0);
  outC->_L119 = kcg_lit_int32(0);
  outC->_L120.radioNetworkID_Default.valid = kcg_true;
  outC->_L120.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L120.radioNetworkID_Default.nid_mn = kcg_lit_int32(0);
  outC->_L120.nid_radio_shortNumberStoredOnboard = kcg_lit_int64(0);
  outC->_L120.noOfRetriesOfSendingTerminationMessage = kcg_lit_int32(0);
  outC->_L120.maxWaitingTimeForAckMessageReceived = kcg_lit_int32(0);
  outC->_L120.maxWaitingTimeUntilTerminationOrderReceived = kcg_lit_int32(0);
  outC->_L120.noOfRetriesUntilTerminationOrderIsReceived = kcg_lit_int32(0);
  outC->_L120.connectionStatusTimerInterval = kcg_lit_int32(0);
  outC->_L120.onboardPhoneNumbers.valid = kcg_true;
  outC->_L120.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L120.onboardPhoneNumbers.aNID_RADIO[idx1].valid = kcg_true;
    for (idx = 0; idx < 15; idx++) {
      outC->_L120.onboardPhoneNumbers.aNID_RADIO[idx1].telephoneNumber[idx] =
        kcg_lit_int32(0);
    }
  }
  outC->_L120.nid_engine = kcg_lit_int32(0);
  outC->_L120.maxTimeToMaintainCommSession = kcg_lit_int32(0);
  outC->_L120.noOfTriesToEstablishASafeRadioConnection = kcg_lit_int32(0);
  outC->_L117.valid = kcg_true;
  outC->_L117.q_dir = Q_DIR_Reverse;
  outC->_L117.nid_mn = kcg_lit_int32(0);
  outC->_L118.radioNetworkID_Default.valid = kcg_true;
  outC->_L118.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L118.radioNetworkID_Default.nid_mn = kcg_lit_int32(0);
  outC->_L118.nid_radio_shortNumberStoredOnboard = kcg_lit_int64(0);
  outC->_L118.noOfRetriesOfSendingTerminationMessage = kcg_lit_int32(0);
  outC->_L118.maxWaitingTimeForAckMessageReceived = kcg_lit_int32(0);
  outC->_L118.maxWaitingTimeUntilTerminationOrderReceived = kcg_lit_int32(0);
  outC->_L118.noOfRetriesUntilTerminationOrderIsReceived = kcg_lit_int32(0);
  outC->_L118.connectionStatusTimerInterval = kcg_lit_int32(0);
  outC->_L118.onboardPhoneNumbers.valid = kcg_true;
  outC->_L118.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 1; idx3++) {
    outC->_L118.onboardPhoneNumbers.aNID_RADIO[idx3].valid = kcg_true;
    for (idx2 = 0; idx2 < 15; idx2++) {
      outC->_L118.onboardPhoneNumbers.aNID_RADIO[idx3].telephoneNumber[idx2] =
        kcg_lit_int32(0);
    }
  }
  outC->_L118.nid_engine = kcg_lit_int32(0);
  outC->_L118.maxTimeToMaintainCommSession = kcg_lit_int32(0);
  outC->_L118.noOfTriesToEstablishASafeRadioConnection = kcg_lit_int32(0);
  outC->_L114 = kcg_lit_int32(0);
  outC->_L115.radioNetworkID_Default.valid = kcg_true;
  outC->_L115.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L115.radioNetworkID_Default.nid_mn = kcg_lit_int32(0);
  outC->_L115.nid_radio_shortNumberStoredOnboard = kcg_lit_int64(0);
  outC->_L115.noOfRetriesOfSendingTerminationMessage = kcg_lit_int32(0);
  outC->_L115.maxWaitingTimeForAckMessageReceived = kcg_lit_int32(0);
  outC->_L115.maxWaitingTimeUntilTerminationOrderReceived = kcg_lit_int32(0);
  outC->_L115.noOfRetriesUntilTerminationOrderIsReceived = kcg_lit_int32(0);
  outC->_L115.connectionStatusTimerInterval = kcg_lit_int32(0);
  outC->_L115.onboardPhoneNumbers.valid = kcg_true;
  outC->_L115.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L115.onboardPhoneNumbers.aNID_RADIO[idx5].valid = kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      outC->_L115.onboardPhoneNumbers.aNID_RADIO[idx5].telephoneNumber[idx4] =
        kcg_lit_int32(0);
    }
  }
  outC->_L115.nid_engine = kcg_lit_int32(0);
  outC->_L115.maxTimeToMaintainCommSession = kcg_lit_int32(0);
  outC->_L115.noOfTriesToEstablishASafeRadioConnection = kcg_lit_int32(0);
  outC->_L116 = kcg_lit_int32(0);
  outC->_L111 = kcg_lit_int32(0);
  outC->_L112 = kcg_lit_int32(0);
  outC->_L113.radioNetworkID_Default.valid = kcg_true;
  outC->_L113.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L113.radioNetworkID_Default.nid_mn = kcg_lit_int32(0);
  outC->_L113.nid_radio_shortNumberStoredOnboard = kcg_lit_int64(0);
  outC->_L113.noOfRetriesOfSendingTerminationMessage = kcg_lit_int32(0);
  outC->_L113.maxWaitingTimeForAckMessageReceived = kcg_lit_int32(0);
  outC->_L113.maxWaitingTimeUntilTerminationOrderReceived = kcg_lit_int32(0);
  outC->_L113.noOfRetriesUntilTerminationOrderIsReceived = kcg_lit_int32(0);
  outC->_L113.connectionStatusTimerInterval = kcg_lit_int32(0);
  outC->_L113.onboardPhoneNumbers.valid = kcg_true;
  outC->_L113.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 1; idx7++) {
    outC->_L113.onboardPhoneNumbers.aNID_RADIO[idx7].valid = kcg_true;
    for (idx6 = 0; idx6 < 15; idx6++) {
      outC->_L113.onboardPhoneNumbers.aNID_RADIO[idx7].telephoneNumber[idx6] =
        kcg_lit_int32(0);
    }
  }
  outC->_L113.nid_engine = kcg_lit_int32(0);
  outC->_L113.maxTimeToMaintainCommSession = kcg_lit_int32(0);
  outC->_L113.noOfTriesToEstablishASafeRadioConnection = kcg_lit_int32(0);
  outC->_L110 = kcg_lit_int32(0);
  outC->_L108 = kcg_lit_int32(0);
  outC->_L107.radioNetworkID_Default.valid = kcg_true;
  outC->_L107.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L107.radioNetworkID_Default.nid_mn = kcg_lit_int32(0);
  outC->_L107.nid_radio_shortNumberStoredOnboard = kcg_lit_int64(0);
  outC->_L107.noOfRetriesOfSendingTerminationMessage = kcg_lit_int32(0);
  outC->_L107.maxWaitingTimeForAckMessageReceived = kcg_lit_int32(0);
  outC->_L107.maxWaitingTimeUntilTerminationOrderReceived = kcg_lit_int32(0);
  outC->_L107.noOfRetriesUntilTerminationOrderIsReceived = kcg_lit_int32(0);
  outC->_L107.connectionStatusTimerInterval = kcg_lit_int32(0);
  outC->_L107.onboardPhoneNumbers.valid = kcg_true;
  outC->_L107.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    outC->_L107.onboardPhoneNumbers.aNID_RADIO[idx9].valid = kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      outC->_L107.onboardPhoneNumbers.aNID_RADIO[idx9].telephoneNumber[idx8] =
        kcg_lit_int32(0);
    }
  }
  outC->_L107.nid_engine = kcg_lit_int32(0);
  outC->_L107.maxTimeToMaintainCommSession = kcg_lit_int32(0);
  outC->_L107.noOfTriesToEstablishASafeRadioConnection = kcg_lit_int32(0);
  outC->_L106 = kcg_lit_int64(0);
  outC->_L105.radioNetworkID_Default.valid = kcg_true;
  outC->_L105.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L105.radioNetworkID_Default.nid_mn = kcg_lit_int32(0);
  outC->_L105.nid_radio_shortNumberStoredOnboard = kcg_lit_int64(0);
  outC->_L105.noOfRetriesOfSendingTerminationMessage = kcg_lit_int32(0);
  outC->_L105.maxWaitingTimeForAckMessageReceived = kcg_lit_int32(0);
  outC->_L105.maxWaitingTimeUntilTerminationOrderReceived = kcg_lit_int32(0);
  outC->_L105.noOfRetriesUntilTerminationOrderIsReceived = kcg_lit_int32(0);
  outC->_L105.connectionStatusTimerInterval = kcg_lit_int32(0);
  outC->_L105.onboardPhoneNumbers.valid = kcg_true;
  outC->_L105.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 1; idx11++) {
    outC->_L105.onboardPhoneNumbers.aNID_RADIO[idx11].valid = kcg_true;
    for (idx10 = 0; idx10 < 15; idx10++) {
      outC->_L105.onboardPhoneNumbers.aNID_RADIO[idx11].telephoneNumber[idx10] =
        kcg_lit_int32(0);
    }
  }
  outC->_L105.nid_engine = kcg_lit_int32(0);
  outC->_L105.maxTimeToMaintainCommSession = kcg_lit_int32(0);
  outC->_L105.noOfTriesToEstablishASafeRadioConnection = kcg_lit_int32(0);
  outC->_L104.valid = kcg_true;
  outC->_L104.source = msrc_undefined_Common_Types_Pkg;
  outC->_L104.radioMetadata.t_train_reference = kcg_true;
  outC->_L104.radioMetadata.nid_em = kcg_true;
  outC->_L104.radioMetadata.q_scale = kcg_true;
  outC->_L104.radioMetadata.d_sr = kcg_true;
  outC->_L104.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L104.radioMetadata.d_ref = kcg_true;
  outC->_L104.radioMetadata.q_dir = kcg_true;
  outC->_L104.radioMetadata.d_emergencystop = kcg_true;
  outC->_L104.radioMetadata.m_version = kcg_true;
  outC->_L104.BG_Common_Header.valid = kcg_true;
  outC->_L104.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L104.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L104.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L104.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L104.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L104.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L104.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L104.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L104.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L104.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L104.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L104.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L104.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L104.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L104.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L104.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L104.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L104.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L104.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L104.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L104.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L104.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L104.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L104.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L104.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L104.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L104.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L104.packets.PacketHeaders[idx12].nid_packet = kcg_lit_int32(0);
    outC->_L104.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L104.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L104.packets.PacketHeaders[idx12].startAddress = kcg_lit_int32(0);
    outC->_L104.packets.PacketHeaders[idx12].endAddress = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L104.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L104.sendingRBC.valid = kcg_true;
  outC->_L104.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L104.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L104.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L103.valid = kcg_true;
  outC->_L103.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L103.origin.valid = kcg_true;
  outC->_L103.origin.nid_c = kcg_lit_int32(0);
  outC->_L103.origin.rbc_id = kcg_lit_int32(0);
  outC->_L103.origin.device_id = kcg_lit_int32(0);
  outC->_L103.lrbg = kcg_lit_int32(0);
  outC->_L102.valid = kcg_true;
  outC->_L102.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L102.versionSupported = kcg_true;
  outC->_L102.origin.valid = kcg_true;
  outC->_L102.origin.nid_c = kcg_lit_int32(0);
  outC->_L102.origin.rbc_id = kcg_lit_int32(0);
  outC->_L102.origin.device_id = kcg_lit_int32(0);
  outC->_L102.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L101.valid = kcg_true;
  outC->_L101.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L101.origin.valid = kcg_true;
  outC->_L101.origin.nid_c = kcg_lit_int32(0);
  outC->_L101.origin.rbc_id = kcg_lit_int32(0);
  outC->_L101.origin.device_id = kcg_lit_int32(0);
  outC->_L100 = kcg_true;
  outC->_L99.valid = kcg_true;
  outC->_L99.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L99.q_dir = Q_DIR_Reverse;
  outC->_L99.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L99.nid_c = kcg_lit_int32(0);
  outC->_L99.nid_RBC = kcg_lit_int32(0);
  outC->_L99.nid_radio = kcg_lit_int64(0);
  outC->_L99.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L99.origin.valid = kcg_true;
  outC->_L99.origin.nid_c = kcg_lit_int32(0);
  outC->_L99.origin.rbc_id = kcg_lit_int32(0);
  outC->_L99.origin.device_id = kcg_lit_int32(0);
  outC->_L96.valid = kcg_true;
  outC->_L96.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L96.origin.valid = kcg_true;
  outC->_L96.origin.nid_c = kcg_lit_int32(0);
  outC->_L96.origin.rbc_id = kcg_lit_int32(0);
  outC->_L96.origin.device_id = kcg_lit_int32(0);
  outC->_L96.lrbg = kcg_lit_int32(0);
  outC->_L95.valid = kcg_true;
  outC->_L95.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L95.origin.valid = kcg_true;
  outC->_L95.origin.nid_c = kcg_lit_int32(0);
  outC->_L95.origin.rbc_id = kcg_lit_int32(0);
  outC->_L95.origin.device_id = kcg_lit_int32(0);
  outC->_L94.valid = kcg_true;
  outC->_L94.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L94.versionSupported = kcg_true;
  outC->_L94.origin.valid = kcg_true;
  outC->_L94.origin.nid_c = kcg_lit_int32(0);
  outC->_L94.origin.rbc_id = kcg_lit_int32(0);
  outC->_L94.origin.device_id = kcg_lit_int32(0);
  outC->_L94.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L93.valid = kcg_true;
  outC->_L93.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L93.q_dir = Q_DIR_Reverse;
  outC->_L93.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L93.nid_c = kcg_lit_int32(0);
  outC->_L93.nid_RBC = kcg_lit_int32(0);
  outC->_L93.nid_radio = kcg_lit_int64(0);
  outC->_L93.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L93.origin.valid = kcg_true;
  outC->_L93.origin.nid_c = kcg_lit_int32(0);
  outC->_L93.origin.rbc_id = kcg_lit_int32(0);
  outC->_L93.origin.device_id = kcg_lit_int32(0);
  outC->_L92.valid = kcg_true;
  outC->_L92.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L92.q_dir = Q_DIR_Reverse;
  outC->_L92.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L92.nid_c = kcg_lit_int32(0);
  outC->_L92.nid_RBC = kcg_lit_int32(0);
  outC->_L92.nid_radio = kcg_lit_int64(0);
  outC->_L92.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L92.origin.valid = kcg_true;
  outC->_L92.origin.nid_c = kcg_lit_int32(0);
  outC->_L92.origin.rbc_id = kcg_lit_int32(0);
  outC->_L92.origin.device_id = kcg_lit_int32(0);
  outC->_L91.valid = kcg_true;
  outC->_L91.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L91.q_dir = Q_DIR_Reverse;
  outC->_L91.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L91.nid_c = kcg_lit_int32(0);
  outC->_L91.nid_RBC = kcg_lit_int32(0);
  outC->_L91.nid_radio = kcg_lit_int64(0);
  outC->_L91.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L91.origin.valid = kcg_true;
  outC->_L91.origin.nid_c = kcg_lit_int32(0);
  outC->_L91.origin.rbc_id = kcg_lit_int32(0);
  outC->_L91.origin.device_id = kcg_lit_int32(0);
  outC->_L90.valid = kcg_true;
  outC->_L90.source = msrc_undefined_Common_Types_Pkg;
  outC->_L90.radioMetadata.t_train_reference = kcg_true;
  outC->_L90.radioMetadata.nid_em = kcg_true;
  outC->_L90.radioMetadata.q_scale = kcg_true;
  outC->_L90.radioMetadata.d_sr = kcg_true;
  outC->_L90.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L90.radioMetadata.d_ref = kcg_true;
  outC->_L90.radioMetadata.q_dir = kcg_true;
  outC->_L90.radioMetadata.d_emergencystop = kcg_true;
  outC->_L90.radioMetadata.m_version = kcg_true;
  outC->_L90.BG_Common_Header.valid = kcg_true;
  outC->_L90.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L90.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L90.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L90.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L90.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L90.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L90.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L90.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L90.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L90.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L90.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L90.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L90.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L90.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L90.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L90.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L90.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L90.packets.PacketHeaders[idx14].nid_packet = kcg_lit_int32(0);
    outC->_L90.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L90.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L90.packets.PacketHeaders[idx14].startAddress = kcg_lit_int32(0);
    outC->_L90.packets.PacketHeaders[idx14].endAddress = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L90.packets.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->_L90.sendingRBC.valid = kcg_true;
  outC->_L90.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L90.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L90.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L88 = kcg_true;
  outC->_L87 = kcg_lit_int32(0);
  outC->_L86.atPowerUp = kcg_true;
  outC->_L86.atPowerDown = kcg_true;
  outC->_L86.atStartOfMission = kcg_true;
  outC->_L86.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L86.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L86.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L86.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L86.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L86.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L86.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L86.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L86.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L86.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L86.endOfMissionIsExecuted = kcg_true;
  outC->_L86.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L86.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L86.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L86.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L86.trainExitedFromAnRBCArea = kcg_true;
  outC->_L86.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L86.level_1_isLeft = kcg_true;
  outC->_L84.valid = kcg_true;
  outC->_L84.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->_L83.valid = kcg_true;
  outC->_L83.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L83.nid_c = kcg_lit_int32(0);
  outC->_L83.nid_rbc = kcg_lit_int32(0);
  outC->_L83.nid_radio = kcg_lit_int64(0);
  outC->_L82 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_lit_int32(0);
  outC->_L77.valid = kcg_true;
  outC->_L77.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L77.nid_c = kcg_lit_int32(0);
  outC->_L77.nid_rbc = kcg_lit_int32(0);
  outC->_L77.nid_radio = kcg_lit_int64(0);
  outC->_L76 = M_MODE_Full_Supervision;
  outC->_L75.atPowerUp = kcg_true;
  outC->_L75.atPowerDown = kcg_true;
  outC->_L75.atStartOfMission = kcg_true;
  outC->_L75.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L75.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L75.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L75.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L75.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L75.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L75.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L75.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L75.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L75.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L75.endOfMissionIsExecuted = kcg_true;
  outC->_L75.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L75.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L75.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L75.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L75.trainExitedFromAnRBCArea = kcg_true;
  outC->_L75.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L75.level_1_isLeft = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66 = kcg_lit_int32(0);
  outC->_L65.valid = kcg_true;
  outC->_L65.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L65.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L65.nid_radio = kcg_lit_int64(0);
  outC->_L65.settingUpConnectionHasFailed = kcg_true;
  outC->_L65.connectionLost = kcg_true;
  outC->_L65.isInRadioHole = kcg_true;
  outC->_L56.valid = kcg_true;
  outC->_L56.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L56.q_dir = Q_DIR_Reverse;
  outC->_L56.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L56.nid_c = kcg_lit_int32(0);
  outC->_L56.nid_RBC = kcg_lit_int32(0);
  outC->_L56.nid_radio = kcg_lit_int64(0);
  outC->_L56.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L56.origin.valid = kcg_true;
  outC->_L56.origin.nid_c = kcg_lit_int32(0);
  outC->_L56.origin.rbc_id = kcg_lit_int32(0);
  outC->_L56.origin.device_id = kcg_lit_int32(0);
  outC->_L57 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L64.valid = kcg_true;
  outC->_L64.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L64.nid_c = kcg_lit_int32(0);
  outC->_L64.nid_rbc = kcg_lit_int32(0);
  outC->_L64.nid_radio = kcg_lit_int64(0);
  outC->_L55 = kcg_lit_int32(0);
  outC->_L51.valid = kcg_true;
  outC->_L51.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L51.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L51.nid_radio = kcg_lit_int64(0);
  outC->_L51.settingUpConnectionHasFailed = kcg_true;
  outC->_L51.connectionLost = kcg_true;
  outC->_L51.isInRadioHole = kcg_true;
  outC->_L52.valid = kcg_true;
  outC->_L52.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L52.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L52.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L52.nid_mn = kcg_lit_int32(0);
  outC->_L50 = kcg_true;
  outC->_L47.valid = kcg_true;
  outC->_L47.q_dir = Q_DIR_Reverse;
  outC->_L47.nid_mn = kcg_lit_int32(0);
  outC->_L46.valid = kcg_true;
  outC->_L46.q_dir = Q_DIR_Reverse;
  outC->_L46.nid_mn = kcg_lit_int32(0);
  outC->_L45.atPowerUp = kcg_true;
  outC->_L45.atPowerDown = kcg_true;
  outC->_L45.atStartOfMission = kcg_true;
  outC->_L45.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L45.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L45.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L45.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L45.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L45.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L45.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L45.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L45.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L45.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L45.endOfMissionIsExecuted = kcg_true;
  outC->_L45.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L45.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L45.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L45.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L45.trainExitedFromAnRBCArea = kcg_true;
  outC->_L45.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L45.level_1_isLeft = kcg_true;
  outC->_L43.valid = kcg_true;
  outC->_L43.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L43.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L43.nid_radio = kcg_lit_int64(0);
  outC->_L43.settingUpConnectionHasFailed = kcg_true;
  outC->_L43.connectionLost = kcg_true;
  outC->_L43.isInRadioHole = kcg_true;
  outC->_L42.valid = kcg_true;
  outC->_L42.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L42.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L42.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L42.nid_mn = kcg_lit_int32(0);
  outC->_L41.valid = kcg_true;
  outC->_L41.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L41.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L41.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L41.nid_mn = kcg_lit_int32(0);
  outC->_L40 = kcg_true;
  outC->_L39 = M_LEVEL_Level_0;
  outC->_L37 = M_MODE_Full_Supervision;
  outC->_L36 = M_MODE_Full_Supervision;
  outC->_L34.atPowerUp = kcg_true;
  outC->_L34.atPowerDown = kcg_true;
  outC->_L34.atStartOfMission = kcg_true;
  outC->_L34.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L34.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L34.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L34.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L34.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L34.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L34.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L34.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L34.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L34.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L34.endOfMissionIsExecuted = kcg_true;
  outC->_L34.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L34.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L34.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L34.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L34.trainExitedFromAnRBCArea = kcg_true;
  outC->_L34.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L34.level_1_isLeft = kcg_true;
  outC->_L33.atPowerUp = kcg_true;
  outC->_L33.atPowerDown = kcg_true;
  outC->_L33.atStartOfMission = kcg_true;
  outC->_L33.modeChangeHasToBeReportedToRBC = kcg_true;
  outC->_L33.driverHasManuallyChangedLevel_to_2_or_3 = kcg_true;
  outC->_L33.trainFrontPassesStartOfAnnouncedRadioHole = kcg_true;
  outC->_L33.trainFrontReachesEndOfAnnouncedRadioHole = kcg_true;
  outC->_L33.trainFrontInsideInAnAnnouncedRadioHole = kcg_true;
  outC->_L33.trainFrontPassesALevelTransitionBorder = kcg_true;
  outC->_L33.trainFrontPassesA_RBC_RBC_border = kcg_true;
  outC->_L33.startOfMissionProcedureCompleted_in_level_2_or_3 = kcg_true;
  outC->_L33.isPartOfAnOngoingStartOfMissionProcedure = kcg_true;
  outC->_L33.startOfMissionProcedureIsGoingOn = kcg_true;
  outC->_L33.endOfMissionIsExecuted = kcg_true;
  outC->_L33.triggerDecisionThatNoRadioNetworkIDAvailable = kcg_true;
  outC->_L33.errorConditionRequiringTerminationDetected = kcg_true;
  outC->_L33.trainIsRejectedByRBC_duringStartOfMission = kcg_true;
  outC->_L33.driverClosesTheDeskduringStartOfMission = kcg_true;
  outC->_L33.trainExitedFromAnRBCArea = kcg_true;
  outC->_L33.isInCommunicationSessionWithAnRIU = kcg_true;
  outC->_L33.level_1_isLeft = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30.valid = kcg_true;
  outC->_L30.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L30.nid_c = kcg_lit_int32(0);
  outC->_L30.nid_rbc = kcg_lit_int32(0);
  outC->_L30.nid_radio = kcg_lit_int64(0);
  outC->_L28.valid = kcg_true;
  outC->_L28.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L28.nid_c = kcg_lit_int32(0);
  outC->_L28.nid_rbc = kcg_lit_int32(0);
  outC->_L28.nid_radio = kcg_lit_int64(0);
  outC->_L27.valid = kcg_true;
  outC->_L27.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L27.nid_c = kcg_lit_int32(0);
  outC->_L27.nid_rbc = kcg_lit_int32(0);
  outC->_L27.nid_radio = kcg_lit_int64(0);
  outC->_L26.valid = kcg_true;
  outC->_L26.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L26.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L26.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L26.nid_mn = kcg_lit_int32(0);
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.q_dir = Q_DIR_Reverse;
  outC->_L21.nid_mn = kcg_lit_int32(0);
  outC->_L22.valid = kcg_true;
  outC->_L22.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L22.action = mra_nop_RCM_Types_Pkg;
  outC->_L22.network_id = kcg_lit_int32(0);
  outC->_L23.valid = kcg_true;
  outC->_L23.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L23.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L23.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L23.nid_mn = kcg_lit_int32(0);
  outC->_L14.valid = kcg_true;
  outC->_L14.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L14.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L14.nid_radio = kcg_lit_int64(0);
  outC->_L14.settingUpConnectionHasFailed = kcg_true;
  outC->_L14.connectionLost = kcg_true;
  outC->_L14.isInRadioHole = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L8.action = mca_nop_RCM_Types_Pkg;
  outC->_L8.nid_radio = kcg_lit_int64(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L9.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L9.nid_radio = kcg_lit_int64(0);
  outC->_L9.settingUpConnectionHasFailed = kcg_true;
  outC->_L9.connectionLost = kcg_true;
  outC->_L9.isInRadioHole = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L2.action = mca_nop_RCM_Types_Pkg;
  outC->_L2.nid_radio = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.initiatedByOBU = kcg_true;
  outC->_L1.initiatedByRBC = kcg_true;
  outC->_L1.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_rbc = kcg_lit_int32(0);
  outC->_L1.nid_radio = kcg_lit_int64(0);
  outC->_L1.origin.valid = kcg_true;
  outC->_L1.origin.nid_c = kcg_lit_int32(0);
  outC->_L1.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1.origin.device_id = kcg_lit_int32(0);
  outC->_L1.m38.valid = kcg_true;
  outC->_L1.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L1.m38.origin.valid = kcg_true;
  outC->_L1.m38.origin.nid_c = kcg_lit_int32(0);
  outC->_L1.m38.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1.m38.origin.device_id = kcg_lit_int32(0);
  outC->_L1.p42.valid = kcg_true;
  outC->_L1.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->_L1.p42.q_dir = Q_DIR_Reverse;
  outC->_L1.p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L1.p42.nid_c = kcg_lit_int32(0);
  outC->_L1.p42.nid_RBC = kcg_lit_int32(0);
  outC->_L1.p42.nid_radio = kcg_lit_int64(0);
  outC->_L1.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L1.p42.origin.valid = kcg_true;
  outC->_L1.p42.origin.nid_c = kcg_lit_int32(0);
  outC->_L1.p42.origin.rbc_id = kcg_lit_int32(0);
  outC->_L1.p42.origin.device_id = kcg_lit_int32(0);
  outC->m39_AckOfTerminationOfACommunicationSessionReceived_p = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsgReceived_p = kcg_true;
  outC->m32_SystemVersionReceived_p = kcg_true;
  outC->p42_sessionManagementReceived_p = kcg_true;
  outC->m155_initiationOfACommunicationSession = kcg_true;
  outC->m156_terminationOfACommunicationSession = kcg_true;
  outC->m159_sessionEstablished = kcg_true;
  outC->m154_noCompatibleVersionSupported = kcg_true;
  outC->m32_SystemVersion.valid = kcg_true;
  outC->m32_SystemVersion.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->m32_SystemVersion.versionSupported = kcg_true;
  outC->m32_SystemVersion.origin.valid = kcg_true;
  outC->m32_SystemVersion.origin.nid_c = kcg_lit_int32(0);
  outC->m32_SystemVersion.origin.rbc_id = kcg_lit_int32(0);
  outC->m32_SystemVersion.origin.device_id = kcg_lit_int32(0);
  outC->m32_SystemVersion.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->m39_AckOfTerminationOfACommunicationSession.valid = kcg_true;
  outC->m39_AckOfTerminationOfACommunicationSession.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->m39_AckOfTerminationOfACommunicationSession.origin.valid = kcg_true;
  outC->m39_AckOfTerminationOfACommunicationSession.origin.nid_c =
    kcg_lit_int32(0);
  outC->m39_AckOfTerminationOfACommunicationSession.origin.rbc_id =
    kcg_lit_int32(0);
  outC->m39_AckOfTerminationOfACommunicationSession.origin.device_id =
    kcg_lit_int32(0);
  outC->m39_AckOfTerminationOfACommunicationSession.lrbg = kcg_lit_int32(0);
  outC->m38_initiationOfACommunicationSessionMsg.valid = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsg.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  outC->m38_initiationOfACommunicationSessionMsg.origin.valid = kcg_true;
  outC->m38_initiationOfACommunicationSessionMsg.origin.nid_c = kcg_lit_int32(0);
  outC->m38_initiationOfACommunicationSessionMsg.origin.rbc_id = kcg_lit_int32(0);
  outC->m38_initiationOfACommunicationSessionMsg.origin.device_id =
    kcg_lit_int32(0);
  outC->p42_sessionManagement.valid = kcg_true;
  outC->p42_sessionManagement.msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionManagement.q_dir = Q_DIR_Reverse;
  outC->p42_sessionManagement.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42_sessionManagement.nid_c = kcg_lit_int32(0);
  outC->p42_sessionManagement.nid_RBC = kcg_lit_int32(0);
  outC->p42_sessionManagement.nid_radio = kcg_lit_int64(0);
  outC->p42_sessionManagement.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->p42_sessionManagement.origin.valid = kcg_true;
  outC->p42_sessionManagement.origin.nid_c = kcg_lit_int32(0);
  outC->p42_sessionManagement.origin.rbc_id = kcg_lit_int32(0);
  outC->p42_sessionManagement.origin.device_id = kcg_lit_int32(0);
  outC->ifMessageToRBC_clock = kcg_true;
  outC->sNotReady = kcg_true;
  outC->_L7_then_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L8_then_else_ifMessageToRBC.radioNetworkID_Default.valid = kcg_true;
  outC->_L8_then_else_ifMessageToRBC.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L8_then_else_ifMessageToRBC.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  outC->_L8_then_else_ifMessageToRBC.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int64(0);
  outC->_L8_then_else_ifMessageToRBC.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  outC->_L8_then_else_ifMessageToRBC.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  outC->_L8_then_else_ifMessageToRBC.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  outC->_L8_then_else_ifMessageToRBC.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  outC->_L8_then_else_ifMessageToRBC.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  outC->_L8_then_else_ifMessageToRBC.onboardPhoneNumbers.valid = kcg_true;
  outC->_L8_then_else_ifMessageToRBC.onboardPhoneNumbers.number = kcg_lit_int32(
      0);
  for (idx17 = 0; idx17 < 1; idx17++) {
    outC->_L8_then_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx17].valid =
      kcg_true;
    for (idx16 = 0; idx16 < 15; idx16++) {
      outC->_L8_then_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx17].telephoneNumber[idx16] =
        kcg_lit_int32(0);
    }
  }
  outC->_L8_then_else_ifMessageToRBC.nid_engine = kcg_lit_int32(0);
  outC->_L8_then_else_ifMessageToRBC.maxTimeToMaintainCommSession =
    kcg_lit_int32(0);
  outC->_L8_then_else_ifMessageToRBC.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  outC->_L6_then_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L5_then_else_ifMessageToRBC = kcg_true;
  outC->_L2_then_else_ifMessageToRBC.present = kcg_true;
  outC->_L2_then_else_ifMessageToRBC.header.present = kcg_true;
  outC->_L2_then_else_ifMessageToRBC.header.nid_message = kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.header.t_train = kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.header.nid_engine = kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2_then_else_ifMessageToRBC.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.header.xNID_EM = kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L2_then_else_ifMessageToRBC.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p0.valid = kcg_true;
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.V_TRAIN = kcg_lit_int32(
      0);
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L2_then_else_ifMessageToRBC.packets.p0.packet0.NID_NTC = kcg_lit_int32(
      0);
  outC->_L2_then_else_ifMessageToRBC.packets.p1.valid = kcg_true;
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.V_TRAIN = kcg_lit_int32(
      0);
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L2_then_else_ifMessageToRBC.packets.p1.packet1.NID_NTC = kcg_lit_int32(
      0);
  outC->_L2_then_else_ifMessageToRBC.packets.p3.valid = kcg_true;
  outC->_L2_then_else_ifMessageToRBC.packets.p3.number = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 1; idx19++) {
    outC->_L2_then_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx19].valid =
      kcg_true;
    for (idx18 = 0; idx18 < 15; idx18++) {
      outC->_L2_then_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx19].telephoneNumber[idx18] =
        kcg_lit_int32(0);
    }
  }
  outC->_L2_then_else_ifMessageToRBC.packets.p4.valid = kcg_true;
  outC->_L2_then_else_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L2_then_else_ifMessageToRBC.packets.p5.valid = kcg_true;
  outC->_L2_then_else_ifMessageToRBC.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p9.valid = kcg_true;
  outC->_L2_then_else_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p11.valid = kcg_true;
  outC->_L2_then_else_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L2_then_else_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L2_then_else_ifMessageToRBC.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L2_then_else_ifMessageToRBC.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L2_then_else_ifMessageToRBC.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L2_then_else_ifMessageToRBC.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L2_then_else_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 4; idx20++) {
    outC->_L2_then_else_ifMessageToRBC.packets.p11.tractionIdentity[idx20].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L2_then_else_ifMessageToRBC.packets.p11.tractionIdentity[idx20].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L2_then_else_ifMessageToRBC.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 5; idx21++) {
    outC->_L2_then_else_ifMessageToRBC.packets.p11.nid_ntc[idx21] =
      kcg_lit_int32(0);
  }
  outC->_L3_then_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L4_then_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->else_clock_else_ifMessageToRBC = kcg_true;
  outC->_L8_then_else_else_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L9_then_else_else_else_ifMessageToRBC.radioNetworkID_Default.valid =
    kcg_true;
  outC->_L9_then_else_else_else_ifMessageToRBC.radioNetworkID_Default.q_dir =
    Q_DIR_Reverse;
  outC->_L9_then_else_else_else_ifMessageToRBC.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  outC->_L9_then_else_else_else_ifMessageToRBC.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int64(0);
  outC->_L9_then_else_else_else_ifMessageToRBC.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  outC->_L9_then_else_else_else_ifMessageToRBC.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  outC->_L9_then_else_else_else_ifMessageToRBC.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  outC->_L9_then_else_else_else_ifMessageToRBC.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  outC->_L9_then_else_else_else_ifMessageToRBC.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  outC->_L9_then_else_else_else_ifMessageToRBC.onboardPhoneNumbers.valid =
    kcg_true;
  outC->_L9_then_else_else_else_ifMessageToRBC.onboardPhoneNumbers.number =
    kcg_lit_int32(0);
  for (idx23 = 0; idx23 < 1; idx23++) {
    outC->_L9_then_else_else_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx23].valid =
      kcg_true;
    for (idx22 = 0; idx22 < 15; idx22++) {
      outC->_L9_then_else_else_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx23].telephoneNumber[idx22] =
        kcg_lit_int32(0);
    }
  }
  outC->_L9_then_else_else_else_ifMessageToRBC.nid_engine = kcg_lit_int32(0);
  outC->_L9_then_else_else_else_ifMessageToRBC.maxTimeToMaintainCommSession =
    kcg_lit_int32(0);
  outC->_L9_then_else_else_else_ifMessageToRBC.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  outC->_L7_then_else_else_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L6_then_else_else_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L5_then_else_else_else_ifMessageToRBC = kcg_true;
  outC->_L1_then_else_else_else_ifMessageToRBC.present = kcg_true;
  outC->_L1_then_else_else_else_ifMessageToRBC.header.present = kcg_true;
  outC->_L1_then_else_else_else_ifMessageToRBC.header.nid_message =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.header.t_train = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.header.nid_engine =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1_then_else_else_else_ifMessageToRBC.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.header.xNID_EM = kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1_then_else_else_else_ifMessageToRBC.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.valid = kcg_true;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.valid = kcg_true;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p3.valid = kcg_true;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p3.number =
    kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 1; idx25++) {
    outC->_L1_then_else_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx25].valid =
      kcg_true;
    for (idx24 = 0; idx24 < 15; idx24++) {
      outC->_L1_then_else_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx25].telephoneNumber[idx24] =
        kcg_lit_int32(0);
    }
  }
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p4.valid = kcg_true;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p5.valid = kcg_true;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p9.valid = kcg_true;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.valid = kcg_true;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.l_train =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.n_axle =
    kcg_lit_int32(0);
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 4; idx26++) {
    outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx26].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx26].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx27 = 0; idx27 < 5; idx27++) {
    outC->_L1_then_else_else_else_ifMessageToRBC.packets.p11.nid_ntc[idx27] =
      kcg_lit_int32(0);
  }
  outC->_L2_then_else_else_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.present = kcg_true;
  outC->_L1_else_else_else_else_ifMessageToRBC.header.present = kcg_true;
  outC->_L1_else_else_else_else_ifMessageToRBC.header.nid_message =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.header.t_train = kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.header.nid_engine =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1_else_else_else_else_ifMessageToRBC.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.header.xNID_EM = kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1_else_else_else_else_ifMessageToRBC.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.valid = kcg_true;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.valid = kcg_true;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p3.valid = kcg_true;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p3.number =
    kcg_lit_int32(0);
  for (idx29 = 0; idx29 < 1; idx29++) {
    outC->_L1_else_else_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx29].valid =
      kcg_true;
    for (idx28 = 0; idx28 < 15; idx28++) {
      outC->_L1_else_else_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx29].telephoneNumber[idx28] =
        kcg_lit_int32(0);
    }
  }
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p4.valid = kcg_true;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p5.valid = kcg_true;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p9.valid = kcg_true;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.valid = kcg_true;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.l_train =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.n_axle =
    kcg_lit_int32(0);
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx30 = 0; idx30 < 4; idx30++) {
    outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx30].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx30].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx31 = 0; idx31 < 5; idx31++) {
    outC->_L1_else_else_else_else_ifMessageToRBC.packets.p11.nid_ntc[idx31] =
      kcg_lit_int32(0);
  }
  outC->else_clock_else_else_ifMessageToRBC = kcg_true;
  outC->_L1_then_else_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.present = kcg_true;
  outC->_L12_then_else_else_ifMessageToRBC.header.present = kcg_true;
  outC->_L12_then_else_else_ifMessageToRBC.header.nid_message = kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.header.t_train = kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.header.nid_engine = kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L12_then_else_else_ifMessageToRBC.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.header.xNID_EM = kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L12_then_else_else_ifMessageToRBC.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.valid = kcg_true;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.valid = kcg_true;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p3.valid = kcg_true;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p3.number = kcg_lit_int32(0);
  for (idx33 = 0; idx33 < 1; idx33++) {
    outC->_L12_then_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx33].valid =
      kcg_true;
    for (idx32 = 0; idx32 < 15; idx32++) {
      outC->_L12_then_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx33].telephoneNumber[idx32] =
        kcg_lit_int32(0);
    }
  }
  outC->_L12_then_else_else_ifMessageToRBC.packets.p4.valid = kcg_true;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p5.valid = kcg_true;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p9.valid = kcg_true;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p11.valid = kcg_true;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L12_then_else_else_ifMessageToRBC.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L12_then_else_else_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx34 = 0; idx34 < 4; idx34++) {
    outC->_L12_then_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx34].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L12_then_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx34].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L12_then_else_else_ifMessageToRBC.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx35 = 0; idx35 < 5; idx35++) {
    outC->_L12_then_else_else_ifMessageToRBC.packets.p11.nid_ntc[idx35] =
      kcg_lit_int32(0);
  }
  outC->_L11_then_else_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L10_then_else_else_ifMessageToRBC = kcg_true;
  outC->_L15_then_else_else_ifMessageToRBC.present = kcg_true;
  outC->_L15_then_else_else_ifMessageToRBC.header.present = kcg_true;
  outC->_L15_then_else_else_ifMessageToRBC.header.nid_message = kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.header.t_train = kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.header.nid_engine = kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L15_then_else_else_ifMessageToRBC.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.header.xNID_EM = kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L15_then_else_else_ifMessageToRBC.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.valid = kcg_true;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.valid = kcg_true;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p3.valid = kcg_true;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p3.number = kcg_lit_int32(0);
  for (idx37 = 0; idx37 < 1; idx37++) {
    outC->_L15_then_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx37].valid =
      kcg_true;
    for (idx36 = 0; idx36 < 15; idx36++) {
      outC->_L15_then_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx37].telephoneNumber[idx36] =
        kcg_lit_int32(0);
    }
  }
  outC->_L15_then_else_else_ifMessageToRBC.packets.p4.valid = kcg_true;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p5.valid = kcg_true;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p9.valid = kcg_true;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p11.valid = kcg_true;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  outC->_L15_then_else_else_ifMessageToRBC.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L15_then_else_else_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx38 = 0; idx38 < 4; idx38++) {
    outC->_L15_then_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx38].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L15_then_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx38].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L15_then_else_else_ifMessageToRBC.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx39 = 0; idx39 < 5; idx39++) {
    outC->_L15_then_else_else_ifMessageToRBC.packets.p11.nid_ntc[idx39] =
      kcg_lit_int32(0);
  }
  outC->_L16_then_else_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L18_then_else_else_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L17_then_else_else_ifMessageToRBC.radioNetworkID_Default.valid =
    kcg_true;
  outC->_L17_then_else_else_ifMessageToRBC.radioNetworkID_Default.q_dir =
    Q_DIR_Reverse;
  outC->_L17_then_else_else_ifMessageToRBC.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  outC->_L17_then_else_else_ifMessageToRBC.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int64(0);
  outC->_L17_then_else_else_ifMessageToRBC.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  outC->_L17_then_else_else_ifMessageToRBC.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  outC->_L17_then_else_else_ifMessageToRBC.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  outC->_L17_then_else_else_ifMessageToRBC.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  outC->_L17_then_else_else_ifMessageToRBC.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  outC->_L17_then_else_else_ifMessageToRBC.onboardPhoneNumbers.valid = kcg_true;
  outC->_L17_then_else_else_ifMessageToRBC.onboardPhoneNumbers.number =
    kcg_lit_int32(0);
  for (idx41 = 0; idx41 < 1; idx41++) {
    outC->_L17_then_else_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx41].valid =
      kcg_true;
    for (idx40 = 0; idx40 < 15; idx40++) {
      outC->_L17_then_else_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx41].telephoneNumber[idx40] =
        kcg_lit_int32(0);
    }
  }
  outC->_L17_then_else_else_ifMessageToRBC.nid_engine = kcg_lit_int32(0);
  outC->_L17_then_else_else_ifMessageToRBC.maxTimeToMaintainCommSession =
    kcg_lit_int32(0);
  outC->_L17_then_else_else_ifMessageToRBC.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  outC->_L19_then_else_else_ifMessageToRBC.valid = kcg_true;
  outC->_L19_then_else_else_ifMessageToRBC.number = kcg_lit_int32(0);
  for (idx43 = 0; idx43 < 1; idx43++) {
    outC->_L19_then_else_else_ifMessageToRBC.aNID_RADIO[idx43].valid = kcg_true;
    for (idx42 = 0; idx42 < 15; idx42++) {
      outC->_L19_then_else_else_ifMessageToRBC.aNID_RADIO[idx43].telephoneNumber[idx42] =
        kcg_lit_int32(0);
    }
  }
  outC->else_clock_ifMessageToRBC = kcg_true;
  outC->_L8_then_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L7_then_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.present = kcg_true;
  outC->_L6_then_ifMessageToRBC.header.present = kcg_true;
  outC->_L6_then_ifMessageToRBC.header.nid_message = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.header.t_train = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.header.nid_engine = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L6_then_ifMessageToRBC.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.header.xNID_EM = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L6_then_ifMessageToRBC.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p0.valid = kcg_true;
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(
      0);
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L6_then_ifMessageToRBC.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p1.valid = kcg_true;
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(
      0);
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L6_then_ifMessageToRBC.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p3.valid = kcg_true;
  outC->_L6_then_ifMessageToRBC.packets.p3.number = kcg_lit_int32(0);
  for (idx45 = 0; idx45 < 1; idx45++) {
    outC->_L6_then_ifMessageToRBC.packets.p3.aNID_RADIO[idx45].valid = kcg_true;
    for (idx44 = 0; idx44 < 15; idx44++) {
      outC->_L6_then_ifMessageToRBC.packets.p3.aNID_RADIO[idx45].telephoneNumber[idx44] =
        kcg_lit_int32(0);
    }
  }
  outC->_L6_then_ifMessageToRBC.packets.p4.valid = kcg_true;
  outC->_L6_then_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->_L6_then_ifMessageToRBC.packets.p5.valid = kcg_true;
  outC->_L6_then_ifMessageToRBC.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p9.valid = kcg_true;
  outC->_L6_then_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p11.valid = kcg_true;
  outC->_L6_then_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L6_then_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L6_then_ifMessageToRBC.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L6_then_ifMessageToRBC.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L6_then_ifMessageToRBC.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L6_then_ifMessageToRBC.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L6_then_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx46 = 0; idx46 < 4; idx46++) {
    outC->_L6_then_ifMessageToRBC.packets.p11.tractionIdentity[idx46].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L6_then_ifMessageToRBC.packets.p11.tractionIdentity[idx46].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L6_then_ifMessageToRBC.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx47 = 0; idx47 < 5; idx47++) {
    outC->_L6_then_ifMessageToRBC.packets.p11.nid_ntc[idx47] = kcg_lit_int32(0);
  }
  outC->_L9_then_ifMessageToRBC = kcg_true;
  outC->_L10_then_ifMessageToRBC = kcg_lit_int32(0);
  outC->_L12_then_ifMessageToRBC.radioNetworkID_Default.valid = kcg_true;
  outC->_L12_then_ifMessageToRBC.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  outC->_L12_then_ifMessageToRBC.radioNetworkID_Default.nid_mn = kcg_lit_int32(0);
  outC->_L12_then_ifMessageToRBC.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int64(0);
  outC->_L12_then_ifMessageToRBC.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  outC->_L12_then_ifMessageToRBC.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  outC->_L12_then_ifMessageToRBC.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  outC->_L12_then_ifMessageToRBC.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  outC->_L12_then_ifMessageToRBC.connectionStatusTimerInterval = kcg_lit_int32(0);
  outC->_L12_then_ifMessageToRBC.onboardPhoneNumbers.valid = kcg_true;
  outC->_L12_then_ifMessageToRBC.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx49 = 0; idx49 < 1; idx49++) {
    outC->_L12_then_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx49].valid =
      kcg_true;
    for (idx48 = 0; idx48 < 15; idx48++) {
      outC->_L12_then_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx49].telephoneNumber[idx48] =
        kcg_lit_int32(0);
    }
  }
  outC->_L12_then_ifMessageToRBC.nid_engine = kcg_lit_int32(0);
  outC->_L12_then_ifMessageToRBC.maxTimeToMaintainCommSession = kcg_lit_int32(0);
  outC->_L12_then_ifMessageToRBC.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  outC->_L11_then_ifMessageToRBC = kcg_lit_int32(0);
  outC->notReady = kcg_true;
  outC->lastReceivedRadioNetworkID.valid = kcg_true;
  outC->lastReceivedRadioNetworkID.q_dir = Q_DIR_Reverse;
  outC->lastReceivedRadioNetworkID.nid_mn = kcg_lit_int32(0);
  outC->memorizeTheLastRadioNetworkID = kcg_true;
  outC->mobileRegistrationCmd.valid = kcg_true;
  outC->mobileRegistrationCmd.mobileDeviceNo = kcg_lit_int32(0);
  outC->mobileRegistrationCmd.action = mra_nop_RCM_Types_Pkg;
  outC->mobileRegistrationCmd.network_id = kcg_lit_int32(0);
  outC->mobileConnectionCmd.valid = kcg_true;
  outC->mobileConnectionCmd.mobileDeviceNo = kcg_lit_int32(0);
  outC->mobileConnectionCmd.action = mca_nop_RCM_Types_Pkg;
  outC->mobileConnectionCmd.nid_radio = kcg_lit_int64(0);
  outC->safeRadioIndication.valid = kcg_true;
  outC->safeRadioIndication.indicator = srci_noConnection_RCM_Session_Types_Pkg;
  outC->status.registration.valid = kcg_true;
  outC->status.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->status.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->status.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->status.registration.nid_mn = kcg_lit_int32(0);
  outC->status.connection.valid = kcg_true;
  outC->status.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->status.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->status.connection.nid_radio = kcg_lit_int64(0);
  outC->status.connection.settingUpConnectionHasFailed = kcg_true;
  outC->status.connection.connectionLost = kcg_true;
  outC->status.connection.isInRadioHole = kcg_true;
  outC->status.session.valid = kcg_true;
  outC->status.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->status.session.nid_c = kcg_lit_int32(0);
  outC->status.session.nid_rbc = kcg_lit_int32(0);
  outC->status.session.nid_radio = kcg_lit_int64(0);
  outC->infomDriverNoCompatibleVersionSupported = kcg_true;
  outC->rejectOrderToContactRBC_or_RIU = kcg_true;
  outC->sendAPositionReport = kcg_true;
  outC->msgToTrackTriggers.m155_initiationOfACommunicationSession = kcg_true;
  outC->msgToTrackTriggers.m156_terminationOfACommunicationSession = kcg_true;
  outC->msgToTrackTriggers.m159_sessionEstablished = kcg_true;
  outC->msgToTrackTriggers.m154_noCompatibleVersionSupported = kcg_true;
  outC->msgToRBC.present = kcg_true;
  outC->msgToRBC.header.present = kcg_true;
  outC->msgToRBC.header.nid_message = kcg_lit_int32(0);
  outC->msgToRBC.header.t_train = kcg_lit_int32(0);
  outC->msgToRBC.header.nid_engine = kcg_lit_int32(0);
  outC->msgToRBC.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->msgToRBC.header.xT_TRAIN = kcg_lit_int32(0);
  outC->msgToRBC.header.xNID_EM = kcg_lit_int32(0);
  outC->msgToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->msgToRBC.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->msgToRBC.packets.p0.valid = kcg_true;
  outC->msgToRBC.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->msgToRBC.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->msgToRBC.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->msgToRBC.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->msgToRBC.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->msgToRBC.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->msgToRBC.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->msgToRBC.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->msgToRBC.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->msgToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->msgToRBC.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->msgToRBC.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->msgToRBC.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->msgToRBC.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->msgToRBC.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->msgToRBC.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->msgToRBC.packets.p1.valid = kcg_true;
  outC->msgToRBC.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->msgToRBC.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->msgToRBC.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->msgToRBC.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->msgToRBC.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->msgToRBC.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->msgToRBC.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->msgToRBC.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->msgToRBC.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->msgToRBC.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->msgToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->msgToRBC.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->msgToRBC.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->msgToRBC.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->msgToRBC.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->msgToRBC.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->msgToRBC.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->msgToRBC.packets.p3.valid = kcg_true;
  outC->msgToRBC.packets.p3.number = kcg_lit_int32(0);
  for (idx51 = 0; idx51 < 1; idx51++) {
    outC->msgToRBC.packets.p3.aNID_RADIO[idx51].valid = kcg_true;
    for (idx50 = 0; idx50 < 15; idx50++) {
      outC->msgToRBC.packets.p3.aNID_RADIO[idx51].telephoneNumber[idx50] =
        kcg_lit_int32(0);
    }
  }
  outC->msgToRBC.packets.p4.valid = kcg_true;
  outC->msgToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->msgToRBC.packets.p5.valid = kcg_true;
  outC->msgToRBC.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->msgToRBC.packets.p9.valid = kcg_true;
  outC->msgToRBC.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->msgToRBC.packets.p11.valid = kcg_true;
  outC->msgToRBC.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->msgToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->msgToRBC.packets.p11.l_train = kcg_lit_int32(0);
  outC->msgToRBC.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->msgToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->msgToRBC.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->msgToRBC.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->msgToRBC.packets.p11.n_axle = kcg_lit_int32(0);
  outC->msgToRBC.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx52 = 0; idx52 < 4; idx52++) {
    outC->msgToRBC.packets.p11.tractionIdentity[idx52].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->msgToRBC.packets.p11.tractionIdentity[idx52].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->msgToRBC.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx53 = 0; idx53 < 5; idx53++) {
    outC->msgToRBC.packets.p11.nid_ntc[idx53] = kcg_lit_int32(0);
  }
  /* _L84=(MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2#1)/ */
  safeRadioConnectionIndication_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_safeRadioConnectionIndication_v2_1);
  /* ifMessageToRBC:then:_L6=(MoRC_Pck::Coder_Pkg::genMsgToRBC#4)/ */
  genMsgToRBC_init_MoRC_Pck_Coder_Pkg(&outC->Context_genMsgToRBC_4);
  /* ifMessageToRBC:else:then:_L2=(MoRC_Pck::Coder_Pkg::genMsgToRBC#3)/ */
  genMsgToRBC_init_MoRC_Pck_Coder_Pkg(&outC->Context_genMsgToRBC_3);
  /* ifMessageToRBC:else:else:then:_L12=(MoRC_Pck::Coder_Pkg::genMsgToRBC#2)/ */
  genMsgToRBC_init_MoRC_Pck_Coder_Pkg(&outC->Context_genMsgToRBC_2);
  /* ifMessageToRBC:else:else:else:then:_L1=(MoRC_Pck::Coder_Pkg::genMsgToRBC#1)/ */
  genMsgToRBC_init_MoRC_Pck_Coder_Pkg(&outC->Context_genMsgToRBC_1);
  /* _L19=(MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2#1)/ */
  registeringToTheRadioNetwork_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_registeringToTheRadioNetwork_v2_1);
  /* _L8=(MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2#1)/ */
  connectingToTheRBC_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_connectingToTheRBC_v2_1);
  /* _L2=(MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2#1)/ */
  requestRadioConnectionSetupFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_requestRadioConnectionSetupFromOBU_v2_1);
  /* _L56=(MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2#1)/ */
  sessionSequencer_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_sessionSequencer_v2_1);
  /* _L72=(MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2#1)/ */
  initiateTerminatingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_initiateTerminatingSession_v2_1);
  /* _L1=(MoRC_Pck::Subfunc_Pkg::initiateSession_v2#1)/ */
  initiateSession_v2_init_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_initiateSession_v2_1);
  /* _L94=(RCM_Utils_Pkg::decoders::dec_m32#1)/ */
  dec_m32_init_RCM_Utils_Pkg_decoders(&outC->Context_dec_m32_1);
  /* _L95=(RCM_Utils_Pkg::decoders::dec_m38#1)/ */
  dec_m38_init_RCM_Utils_Pkg_decoders(&outC->Context_dec_m38_1);
  /* _L96=(RCM_Utils_Pkg::decoders::dec_m39#1)/ */
  dec_m39_init_RCM_Utils_Pkg_decoders(&outC->Context_dec_m39_1);
  /* _L99=(RCM_Utils_Pkg::decoders::dec_p42#2)/ */
  dec_p42_init_RCM_Utils_Pkg_decoders(&outC->Context_dec_p42_2);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->connectionStatus_l,
    (mobileConnectionContext_T_RCM_Types_Pkg *)
      &cNoConnectionContext_RCM_Types_Pkg);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->registrationStatus_l,
    (mobileRegistrationContext_T_RCM_Types_Pkg *)
      &cNoMobileRegistrationContext_RCM_Types_Pkg);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->sessionStatus_l,
    (sessionStatus_T_RCM_Session_Types_Pkg *)
      &cNoSessionStatus_RCM_Session_Types_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoRC_Main_v2_reset_MoRC_Pck(outC_MoRC_Main_v2_MoRC_Pck *outC)
{
  /* _L84=(MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2#1)/ */
  safeRadioConnectionIndication_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_safeRadioConnectionIndication_v2_1);
  /* ifMessageToRBC:then:_L6=(MoRC_Pck::Coder_Pkg::genMsgToRBC#4)/ */
  genMsgToRBC_reset_MoRC_Pck_Coder_Pkg(&outC->Context_genMsgToRBC_4);
  /* ifMessageToRBC:else:then:_L2=(MoRC_Pck::Coder_Pkg::genMsgToRBC#3)/ */
  genMsgToRBC_reset_MoRC_Pck_Coder_Pkg(&outC->Context_genMsgToRBC_3);
  /* ifMessageToRBC:else:else:then:_L12=(MoRC_Pck::Coder_Pkg::genMsgToRBC#2)/ */
  genMsgToRBC_reset_MoRC_Pck_Coder_Pkg(&outC->Context_genMsgToRBC_2);
  /* ifMessageToRBC:else:else:else:then:_L1=(MoRC_Pck::Coder_Pkg::genMsgToRBC#1)/ */
  genMsgToRBC_reset_MoRC_Pck_Coder_Pkg(&outC->Context_genMsgToRBC_1);
  /* _L19=(MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2#1)/ */
  registeringToTheRadioNetwork_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_registeringToTheRadioNetwork_v2_1);
  /* _L8=(MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2#1)/ */
  connectingToTheRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_connectingToTheRBC_v2_1);
  /* _L2=(MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2#1)/ */
  requestRadioConnectionSetupFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_requestRadioConnectionSetupFromOBU_v2_1);
  /* _L56=(MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2#1)/ */
  sessionSequencer_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_sessionSequencer_v2_1);
  /* _L72=(MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2#1)/ */
  initiateTerminatingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_initiateTerminatingSession_v2_1);
  /* _L1=(MoRC_Pck::Subfunc_Pkg::initiateSession_v2#1)/ */
  initiateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_initiateSession_v2_1);
  /* _L94=(RCM_Utils_Pkg::decoders::dec_m32#1)/ */
  dec_m32_reset_RCM_Utils_Pkg_decoders(&outC->Context_dec_m32_1);
  /* _L95=(RCM_Utils_Pkg::decoders::dec_m38#1)/ */
  dec_m38_reset_RCM_Utils_Pkg_decoders(&outC->Context_dec_m38_1);
  /* _L96=(RCM_Utils_Pkg::decoders::dec_m39#1)/ */
  dec_m39_reset_RCM_Utils_Pkg_decoders(&outC->Context_dec_m39_1);
  /* _L99=(RCM_Utils_Pkg::decoders::dec_p42#2)/ */
  dec_p42_reset_RCM_Utils_Pkg_decoders(&outC->Context_dec_p42_2);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->connectionStatus_l,
    (mobileConnectionContext_T_RCM_Types_Pkg *)
      &cNoConnectionContext_RCM_Types_Pkg);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->registrationStatus_l,
    (mobileRegistrationContext_T_RCM_Types_Pkg *)
      &cNoMobileRegistrationContext_RCM_Types_Pkg);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->sessionStatus_l,
    (sessionStatus_T_RCM_Session_Types_Pkg *)
      &cNoSessionStatus_RCM_Session_Types_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_MoRC_Main_v2_MoRC_Pck(
  SV_MoRC_Main_v2_MoRC_Pck *SV,
  outC_MoRC_Main_v2_MoRC_Pck *outC)
{
  kcg_save_SV_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
    &SV->Context_initiateTerminatingSession_v2_1,
    &outC->Context_initiateTerminatingSession_v2_1);
  kcg_save_SV_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
    &SV->Context_sessionSequencer_v2_1,
    &outC->Context_sessionSequencer_v2_1);
  kcg_save_SV_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
    &SV->Context_requestRadioConnectionSetupFromOBU_v2_1,
    &outC->Context_requestRadioConnectionSetupFromOBU_v2_1);
  kcg_save_SV_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
    &SV->Context_registeringToTheRadioNetwork_v2_1,
    &outC->Context_registeringToTheRadioNetwork_v2_1);
  kcg_save_SV_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
    &SV->Context_safeRadioConnectionIndication_v2_1,
    &outC->Context_safeRadioConnectionIndication_v2_1);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &SV->Context_sessionStatus_l,
    &outC->sessionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &SV->Context_registrationStatus_l,
    &outC->registrationStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &SV->Context_connectionStatus_l,
    &outC->connectionStatus_l);
}

void kcg_load_SV_MoRC_Main_v2_MoRC_Pck(
  outC_MoRC_Main_v2_MoRC_Pck *outC,
  SV_MoRC_Main_v2_MoRC_Pck *SV)
{
  kcg_load_SV_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_initiateTerminatingSession_v2_1,
    &SV->Context_initiateTerminatingSession_v2_1);
  kcg_load_SV_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_sessionSequencer_v2_1,
    &SV->Context_sessionSequencer_v2_1);
  kcg_load_SV_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_requestRadioConnectionSetupFromOBU_v2_1,
    &SV->Context_requestRadioConnectionSetupFromOBU_v2_1);
  kcg_load_SV_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_registeringToTheRadioNetwork_v2_1,
    &SV->Context_registeringToTheRadioNetwork_v2_1);
  kcg_load_SV_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
    &outC->Context_safeRadioConnectionIndication_v2_1,
    &SV->Context_safeRadioConnectionIndication_v2_1);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &outC->sessionStatus_l,
    &SV->Context_sessionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &outC->registrationStatus_l,
    &SV->Context_registrationStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &outC->connectionStatus_l,
    &SV->Context_connectionStatus_l);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoRC_Main_v2_MoRC_Pck.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

