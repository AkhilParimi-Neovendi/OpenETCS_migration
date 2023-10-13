/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:47
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_int32_30
kcg_bool kcg_comp_array_int32_30(array_int32_30 *kcg_c1, array_int32_30 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_30 */

#ifdef kcg_use_array_int32_500_500
kcg_bool kcg_comp_array_int32_500_500(
  array_int32_500_500 *kcg_c1,
  array_int32_500_500 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int32_500_500 */

#ifdef kcg_use_Metadata_T_Common_Types_Pkg
kcg_bool kcg_comp_Metadata_T_Common_Types_Pkg(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MetadataElement_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Metadata_T_Common_Types_Pkg */

#ifdef kcg_use_telephoneNumber_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg(
  telephoneNumber_T_Packet_TrainTypes_Pkg *kcg_c1,
  telephoneNumber_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_telephoneNumber_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_array_bool_30
kcg_bool kcg_comp_array_bool_30(array_bool_30 *kcg_c1, array_bool_30 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_30 */

#ifdef kcg_use_CompressedPacketData_T_Common_Types_Pkg
kcg_bool kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
  CompressedPacketData_T_Common_Types_Pkg *kcg_c1,
  CompressedPacketData_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_CompressedPacketData_T_Common_Types_Pkg */

#ifdef kcg_use_aNID_NTC_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg(
  aNID_NTC_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_NTC_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_aNID_NTC_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_aTractionIdentity_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg(
  aTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c1,
  aTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_aTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg
kcg_bool kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *kcg_c1,
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->origin,
      &kcg_c2->origin);
  kcg_equ = kcg_equ & (kcg_c1->versionSupported == kcg_c2->versionSupported);
  kcg_equ = kcg_equ & (kcg_c1->msgSrc == kcg_c2->msgSrc);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_morc_configData_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_morc_configData_T_RCM_Session_Types_Pkg(
  morc_configData_T_RCM_Session_Types_Pkg *kcg_c1,
  morc_configData_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->noOfTriesToEstablishASafeRadioConnection ==
      kcg_c2->noOfTriesToEstablishASafeRadioConnection);
  kcg_equ = kcg_equ & (kcg_c1->maxTimeToMaintainCommSession ==
      kcg_c2->maxTimeToMaintainCommSession);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ &
    kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
      &kcg_c1->onboardPhoneNumbers,
      &kcg_c2->onboardPhoneNumbers);
  kcg_equ = kcg_equ & (kcg_c1->connectionStatusTimerInterval ==
      kcg_c2->connectionStatusTimerInterval);
  kcg_equ = kcg_equ & (kcg_c1->noOfRetriesUntilTerminationOrderIsReceived ==
      kcg_c2->noOfRetriesUntilTerminationOrderIsReceived);
  kcg_equ = kcg_equ & (kcg_c1->maxWaitingTimeUntilTerminationOrderReceived ==
      kcg_c2->maxWaitingTimeUntilTerminationOrderReceived);
  kcg_equ = kcg_equ & (kcg_c1->maxWaitingTimeForAckMessageReceived ==
      kcg_c2->maxWaitingTimeForAckMessageReceived);
  kcg_equ = kcg_equ & (kcg_c1->noOfRetriesOfSendingTerminationMessage ==
      kcg_c2->noOfRetriesOfSendingTerminationMessage);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio_shortNumberStoredOnboard ==
      kcg_c2->nid_radio_shortNumberStoredOnboard);
  kcg_equ = kcg_equ & kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &kcg_c1->radioNetworkID_Default,
      &kcg_c2->radioNetworkID_Default);
  return kcg_equ;
}
#endif /* kcg_use_morc_configData_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_Radio_TrackTrain_Header_T_Radio_Types_Pkg
kcg_bool kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->receivedSystemTime == kcg_c2->receivedSystemTime);
  kcg_equ = kcg_equ & (kcg_c1->radioDevice == kcg_c2->radioDevice);
  return kcg_equ;
}
#endif /* kcg_use_Radio_TrackTrain_Header_T_Radio_Types_Pkg */

#ifdef kcg_use_BG_Header_T_BG_Types_Pkg
kcg_bool kcg_comp_BG_Header_T_BG_Types_Pkg(
  BG_Header_T_BG_Types_Pkg *kcg_c1,
  BG_Header_T_BG_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->trainRunningDirectionToBG ==
      kcg_c2->trainRunningDirectionToBG);
  kcg_equ = kcg_equ & (kcg_c1->trainOrientationToBG ==
      kcg_c2->trainOrientationToBG);
  kcg_equ = kcg_equ & (kcg_c1->noCoordinateSystemHasBeenAssigned ==
      kcg_c2->noCoordinateSystemHasBeenAssigned);
  kcg_equ = kcg_equ & (kcg_c1->q_nvlocacc == kcg_c2->q_nvlocacc);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->BG_centerDetectionInaccuraccuracies,
      &kcg_c2->BG_centerDetectionInaccuraccuracies);
  kcg_equ = kcg_equ & kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
      &kcg_c1->bgPosition,
      &kcg_c2->bgPosition);
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->m_mcount == kcg_c2->m_mcount);
  kcg_equ = kcg_equ & (kcg_c1->n_total == kcg_c2->n_total);
  kcg_equ = kcg_equ & (kcg_c1->q_media == kcg_c2->q_media);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->q_updown == kcg_c2->q_updown);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_BG_Header_T_BG_Types_Pkg */

#ifdef kcg_use_obuEventsAndPhases_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *kcg_c1,
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->level_1_isLeft == kcg_c2->level_1_isLeft);
  kcg_equ = kcg_equ & (kcg_c1->isInCommunicationSessionWithAnRIU ==
      kcg_c2->isInCommunicationSessionWithAnRIU);
  kcg_equ = kcg_equ & (kcg_c1->trainExitedFromAnRBCArea ==
      kcg_c2->trainExitedFromAnRBCArea);
  kcg_equ = kcg_equ & (kcg_c1->driverClosesTheDeskduringStartOfMission ==
      kcg_c2->driverClosesTheDeskduringStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->trainIsRejectedByRBC_duringStartOfMission ==
      kcg_c2->trainIsRejectedByRBC_duringStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->errorConditionRequiringTerminationDetected ==
      kcg_c2->errorConditionRequiringTerminationDetected);
  kcg_equ = kcg_equ & (kcg_c1->triggerDecisionThatNoRadioNetworkIDAvailable ==
      kcg_c2->triggerDecisionThatNoRadioNetworkIDAvailable);
  kcg_equ = kcg_equ & (kcg_c1->endOfMissionIsExecuted ==
      kcg_c2->endOfMissionIsExecuted);
  kcg_equ = kcg_equ & (kcg_c1->startOfMissionProcedureIsGoingOn ==
      kcg_c2->startOfMissionProcedureIsGoingOn);
  kcg_equ = kcg_equ & (kcg_c1->isPartOfAnOngoingStartOfMissionProcedure ==
      kcg_c2->isPartOfAnOngoingStartOfMissionProcedure);
  kcg_equ = kcg_equ &
    (kcg_c1->startOfMissionProcedureCompleted_in_level_2_or_3 ==
      kcg_c2->startOfMissionProcedureCompleted_in_level_2_or_3);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontPassesA_RBC_RBC_border ==
      kcg_c2->trainFrontPassesA_RBC_RBC_border);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontPassesALevelTransitionBorder ==
      kcg_c2->trainFrontPassesALevelTransitionBorder);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontInsideInAnAnnouncedRadioHole ==
      kcg_c2->trainFrontInsideInAnAnnouncedRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontReachesEndOfAnnouncedRadioHole ==
      kcg_c2->trainFrontReachesEndOfAnnouncedRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontPassesStartOfAnnouncedRadioHole ==
      kcg_c2->trainFrontPassesStartOfAnnouncedRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->driverHasManuallyChangedLevel_to_2_or_3 ==
      kcg_c2->driverHasManuallyChangedLevel_to_2_or_3);
  kcg_equ = kcg_equ & (kcg_c1->modeChangeHasToBeReportedToRBC ==
      kcg_c2->modeChangeHasToBeReportedToRBC);
  kcg_equ = kcg_equ & (kcg_c1->atStartOfMission == kcg_c2->atStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->atPowerDown == kcg_c2->atPowerDown);
  kcg_equ = kcg_equ & (kcg_c1->atPowerUp == kcg_c2->atPowerUp);
  return kcg_equ;
}
#endif /* kcg_use_obuEventsAndPhases_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_sessionCmd_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg(
  sessionCmd_T_RCM_Session_Types_Pkg *kcg_c1,
  sessionCmd_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &kcg_c1->p42,
      &kcg_c2->p42);
  kcg_equ = kcg_equ &
    kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
      &kcg_c1->m38,
      &kcg_c2->m38);
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->origin,
      &kcg_c2->origin);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_rbc == kcg_c2->nid_rbc);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_rbc == kcg_c2->q_rbc);
  kcg_equ = kcg_equ & (kcg_c1->initiatedByRBC == kcg_c2->initiatedByRBC);
  kcg_equ = kcg_equ & (kcg_c1->initiatedByOBU == kcg_c2->initiatedByOBU);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_sessionCmd_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &kcg_c1->nid_ntc,
      &kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->nIter_ntc == kcg_c2->nIter_ntc);
  kcg_equ = kcg_equ & kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &kcg_c1->tractionIdentity,
      &kcg_c2->tractionIdentity);
  kcg_equ = kcg_equ & (kcg_c1->nIter_tractionIdentity ==
      kcg_c2->nIter_tractionIdentity);
  kcg_equ = kcg_equ & (kcg_c1->n_axle == kcg_c2->n_axle);
  kcg_equ = kcg_equ & (kcg_c1->m_airtight == kcg_c2->m_airtight);
  kcg_equ = kcg_equ & (kcg_c1->m_axleloadcat == kcg_c2->m_axleloadcat);
  kcg_equ = kcg_equ & (kcg_c1->m_loadinggoage == kcg_c2->m_loadinggoage);
  kcg_equ = kcg_equ & (kcg_c1->v_maxtrain == kcg_c2->v_maxtrain);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_train == kcg_c2->nc_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_cdtrain == kcg_c2->nc_cdtrain);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack
kcg_bool kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack(
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c1,
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->mode == kcg_c2->mode);
  kcg_equ = kcg_equ & (kcg_c1->dirtrain == kcg_c2->dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->V_TRAIN == kcg_c2->V_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_TRAININT == kcg_c2->L_TRAININT);
  kcg_equ = kcg_equ & (kcg_c1->length == kcg_c2->length);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTUNDER == kcg_c2->L_DOUBTUNDER);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTOVER == kcg_c2->L_DOUBTOVER);
  kcg_equ = kcg_equ & (kcg_c1->dlrbg == kcg_c2->dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->dirlrbg == kcg_c2->dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->D_LRBG == kcg_c2->D_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_PRVLRBG == kcg_c2->NID_PRVLRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->qscale == kcg_c2->qscale);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack */

#ifdef kcg_use_Position_Report_TrainToTrack
kcg_bool kcg_comp_Position_Report_TrainToTrack(
  Position_Report_TrainToTrack *kcg_c1,
  Position_Report_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->mode == kcg_c2->mode);
  kcg_equ = kcg_equ & (kcg_c1->dirtrain == kcg_c2->dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->V_TRAIN == kcg_c2->V_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_TRAININT == kcg_c2->L_TRAININT);
  kcg_equ = kcg_equ & (kcg_c1->length == kcg_c2->length);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTUNDER == kcg_c2->L_DOUBTUNDER);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTOVER == kcg_c2->L_DOUBTOVER);
  kcg_equ = kcg_equ & (kcg_c1->dlrbg == kcg_c2->dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->dirlrbg == kcg_c2->dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->D_LRBG == kcg_c2->D_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->qscale == kcg_c2->qscale);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Position_Report_TrainToTrack */

#ifdef kcg_use_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg *kcg_c1,
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->indicator == kcg_c2->indicator);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
kcg_bool kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c1,
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */

#ifdef kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
      &kcg_c1->aNID_RADIO,
      &kcg_c2->aNID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_max == kcg_c2->d_max);
  kcg_equ = kcg_equ & (kcg_c1->d_min == kcg_c2->d_min);
  kcg_equ = kcg_equ & (kcg_c1->nominal == kcg_c2->nominal);
  return kcg_equ;
}
#endif /* kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_sessionStatus_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(
  sessionStatus_T_RCM_Session_Types_Pkg *kcg_c1,
  sessionStatus_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_rbc == kcg_c2->nid_rbc);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->phase == kcg_c2->phase);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_sessionStatus_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->o_max == kcg_c2->o_max);
  kcg_equ = kcg_equ & (kcg_c1->o_min == kcg_c2->o_min);
  kcg_equ = kcg_equ & (kcg_c1->o_nominal == kcg_c2->o_nominal);
  return kcg_equ;
}
#endif /* kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_CompressedPackets_T_Common_Types_Pkg
kcg_bool kcg_comp_CompressedPackets_T_Common_Types_Pkg(
  CompressedPackets_T_Common_Types_Pkg *kcg_c1,
  CompressedPackets_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
      &kcg_c1->PacketData,
      &kcg_c2->PacketData);
  kcg_equ = kcg_equ & kcg_comp_Metadata_T_Common_Types_Pkg(
      &kcg_c1->PacketHeaders,
      &kcg_c2->PacketHeaders);
  return kcg_equ;
}
#endif /* kcg_use_CompressedPackets_T_Common_Types_Pkg */

#ifdef kcg_use_morcStatus_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_morcStatus_T_RCM_Session_Types_Pkg(
  morcStatus_T_RCM_Session_Types_Pkg *kcg_c1,
  morcStatus_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(
      &kcg_c1->session,
      &kcg_c2->session);
  kcg_equ = kcg_equ & kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
      &kcg_c1->connection,
      &kcg_c2->connection);
  kcg_equ = kcg_equ & kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(
      &kcg_c1->registration,
      &kcg_c2->registration);
  return kcg_equ;
}
#endif /* kcg_use_morcStatus_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg
kcg_bool kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c1,
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->origin,
      &kcg_c2->origin);
  kcg_equ = kcg_equ & (kcg_c1->msgSrc == kcg_c2->msgSrc);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_struct_18831
kcg_bool kcg_comp_struct_18831(struct_18831 *kcg_c1, struct_18831 *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_outPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &kcg_c1->header,
      &kcg_c2->header);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_struct_18831 */

#ifdef kcg_use_mobileRegistrationCmd_T_RCM_Types_Pkg
kcg_bool kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg(
  mobileRegistrationCmd_T_RCM_Types_Pkg *kcg_c1,
  mobileRegistrationCmd_T_RCM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->network_id == kcg_c2->network_id);
  kcg_equ = kcg_equ & (kcg_c1->action == kcg_c2->action);
  kcg_equ = kcg_equ & (kcg_c1->mobileDeviceNo == kcg_c2->mobileDeviceNo);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileRegistrationCmd_T_RCM_Types_Pkg */

#ifdef kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c1,
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->TrainRunningNumber == kcg_c2->TrainRunningNumber);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifdef kcg_use_RBC_Id_T_Common_Types_Pkg
kcg_bool kcg_comp_RBC_Id_T_Common_Types_Pkg(
  RBC_Id_T_Common_Types_Pkg *kcg_c1,
  RBC_Id_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->device_id == kcg_c2->device_id);
  kcg_equ = kcg_equ & (kcg_c1->rbc_id == kcg_c2->rbc_id);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_RBC_Id_T_Common_Types_Pkg */

#ifdef kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack(
      &kcg_c1->packet1,
      &kcg_c2->packet1);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Position_Report_TrainToTrack(
      &kcg_c1->packet0,
      &kcg_c2->packet0);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_upper == kcg_c2->v_upper);
  kcg_equ = kcg_equ & (kcg_c1->v_lower == kcg_c2->v_lower);
  kcg_equ = kcg_equ & (kcg_c1->v_rawNominal == kcg_c2->v_rawNominal);
  kcg_equ = kcg_equ & (kcg_c1->v_safeNominal == kcg_c2->v_safeNominal);
  return kcg_equ;
}
#endif /* kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_error == kcg_c2->m_error);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_sTractionIdentity_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg(
  sTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c1,
  sTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ctraction == kcg_c2->nid_ctraction);
  kcg_equ = kcg_equ & (kcg_c1->m_voltage == kcg_c2->m_voltage);
  return kcg_equ;
}
#endif /* kcg_use_sTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_mobileConnectionCmd_T_RCM_Types_Pkg
kcg_bool kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg(
  mobileConnectionCmd_T_RCM_Types_Pkg *kcg_c1,
  mobileConnectionCmd_T_RCM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->action == kcg_c2->action);
  kcg_equ = kcg_equ & (kcg_c1->mobileDeviceNo == kcg_c2->mobileDeviceNo);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileConnectionCmd_T_RCM_Types_Pkg */

#ifdef kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->transitionInformation ==
      kcg_c2->transitionInformation);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_mobileConnectionContext_T_RCM_Types_Pkg
kcg_bool kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
  mobileConnectionContext_T_RCM_Types_Pkg *kcg_c1,
  mobileConnectionContext_T_RCM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->isInRadioHole == kcg_c2->isInRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->connectionLost == kcg_c2->connectionLost);
  kcg_equ = kcg_equ & (kcg_c1->settingUpConnectionHasFailed ==
      kcg_c2->settingUpConnectionHasFailed);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->status == kcg_c2->status);
  kcg_equ = kcg_equ & (kcg_c1->mobileDeviceNo == kcg_c2->mobileDeviceNo);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileConnectionContext_T_RCM_Types_Pkg */

#ifdef kcg_use_msgToTrackTriggers_T_RCM_MsgTypes_Pkg
kcg_bool kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *kcg_c1,
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m154_noCompatibleVersionSupported ==
      kcg_c2->m154_noCompatibleVersionSupported);
  kcg_equ = kcg_equ & (kcg_c1->m159_sessionEstablished ==
      kcg_c2->m159_sessionEstablished);
  kcg_equ = kcg_equ & (kcg_c1->m156_terminationOfACommunicationSession ==
      kcg_c2->m156_terminationOfACommunicationSession);
  kcg_equ = kcg_equ & (kcg_c1->m155_initiationOfACommunicationSession ==
      kcg_c2->m155_initiationOfACommunicationSession);
  return kcg_equ;
}
#endif /* kcg_use_msgToTrackTriggers_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_RadioMetadata_T_Common_Types_Pkg
kcg_bool kcg_comp_RadioMetadata_T_Common_Types_Pkg(
  RadioMetadata_T_Common_Types_Pkg *kcg_c1,
  RadioMetadata_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  return kcg_equ;
}
#endif /* kcg_use_RadioMetadata_T_Common_Types_Pkg */

#ifdef kcg_use_p42_sessionManagement_T_RCM_MsgTypes_Pkg
kcg_bool kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *kcg_c1,
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->origin,
      &kcg_c2->origin);
  kcg_equ = kcg_equ & (kcg_c1->q_sleepsession == kcg_c2->q_sleepsession);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_RBC == kcg_c2->nid_RBC);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_rbc == kcg_c2->q_rbc);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->msgSrc == kcg_c2->msgSrc);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_p42_sessionManagement_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg
kcg_bool kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->xNID_TEXTMESSAGE == kcg_c2->xNID_TEXTMESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->xQ_EMERGENCYSTOP == kcg_c2->xQ_EMERGENCYSTOP);
  kcg_equ = kcg_equ & (kcg_c1->xNID_EM == kcg_c2->xNID_EM);
  kcg_equ = kcg_equ & (kcg_c1->xT_TRAIN == kcg_c2->xT_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->xQ_MARQSTREASON == kcg_c2->xQ_MARQSTREASON);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg */

#ifdef kcg_use_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg
kcg_bool kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c1,
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->lrbg == kcg_c2->lrbg);
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->origin,
      &kcg_c2->origin);
  kcg_equ = kcg_equ & (kcg_c1->msgSrc == kcg_c2->msgSrc);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_P42_SessionManagement_T_Packet_Types_Pkg
kcg_bool kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg(
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c1,
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_sleepsession == kcg_c2->q_sleepsession);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_rbc == kcg_c2->nid_rbc);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_rbc == kcg_c2->q_rbc);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P42_SessionManagement_T_Packet_Types_Pkg */

#ifdef kcg_use_odometry_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->motionDirection == kcg_c2->motionDirection);
  kcg_equ = kcg_equ & (kcg_c1->motionState == kcg_c2->motionState);
  kcg_equ = kcg_equ & (kcg_c1->acceleration == kcg_c2->acceleration);
  kcg_equ = kcg_equ & kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
      &kcg_c1->speed,
      &kcg_c2->speed);
  kcg_equ = kcg_equ & kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &kcg_c1->odo,
      &kcg_c2->odo);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_odometry_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_mobileRegistrationContext_T_RCM_Types_Pkg
kcg_bool kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(
  mobileRegistrationContext_T_RCM_Types_Pkg *kcg_c1,
  mobileRegistrationContext_T_RCM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->status == kcg_c2->status);
  kcg_equ = kcg_equ & (kcg_c1->healthStatus == kcg_c2->healthStatus);
  kcg_equ = kcg_equ & (kcg_c1->mobileDeviceNo == kcg_c2->mobileDeviceNo);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileRegistrationContext_T_RCM_Types_Pkg */

#ifdef kcg_use_struct_19159
kcg_bool kcg_comp_struct_19159(struct_19159 *kcg_c1, struct_19159 *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->sendingRBC,
      &kcg_c2->sendingRBC);
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &kcg_c1->Radio_Common_Header,
      &kcg_c2->Radio_Common_Header);
  kcg_equ = kcg_equ & kcg_comp_BG_Header_T_BG_Types_Pkg(
      &kcg_c1->BG_Common_Header,
      &kcg_c2->BG_Common_Header);
  kcg_equ = kcg_equ & kcg_comp_RadioMetadata_T_Common_Types_Pkg(
      &kcg_c1->radioMetadata,
      &kcg_c2->radioMetadata);
  kcg_equ = kcg_equ & (kcg_c1->source == kcg_c2->source);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_19159 */

#ifdef kcg_use_outPackets_T_Common_Types_Pkg
kcg_bool kcg_comp_outPackets_T_Common_Types_Pkg(
  outPackets_T_Common_Types_Pkg *kcg_c1,
  outPackets_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p11,
      &kcg_c2->p11);
  kcg_equ = kcg_equ &
    kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p9,
      &kcg_c2->p9);
  kcg_equ = kcg_equ & kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
      &kcg_c1->p5,
      &kcg_c2->p5);
  kcg_equ = kcg_equ & kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p4,
      &kcg_c2->p4);
  kcg_equ = kcg_equ &
    kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p3,
      &kcg_c2->p3);
  kcg_equ = kcg_equ & kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p1,
      &kcg_c2->p1);
  kcg_equ = kcg_equ & kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p0,
      &kcg_c2->p0);
  return kcg_equ;
}
#endif /* kcg_use_outPackets_T_Common_Types_Pkg */

#ifdef kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg(
      &kcg_c1->telephoneNumber,
      &kcg_c2->telephoneNumber);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_MetadataElement_T_Common_Types_Pkg
kcg_bool kcg_comp_MetadataElement_T_Common_Types_Pkg(
  MetadataElement_T_Common_Types_Pkg *kcg_c1,
  MetadataElement_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->endAddress == kcg_c2->endAddress);
  kcg_equ = kcg_equ & (kcg_c1->startAddress == kcg_c2->startAddress);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  return kcg_equ;
}
#endif /* kcg_use_MetadataElement_T_Common_Types_Pkg */

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** kcg_types.c
** Generation date: 2023-09-01T13:21:47
*************************************************************$ */

