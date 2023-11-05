/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "cyclicReportToDMI_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::cyclicReportToDMI/ */
void cyclicReportToDMI_manage_DMI_Output_Pkg(
  /* incurrentDMIStatus/ */
  DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* inTrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* inSpeedSupervision/ */
  speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* inNationalValues/ */
  nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* inMovementAuthority/ */
  movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* inMoRC_status/ */
  morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* inNTC/ */
  NID_NTC inNTC,
  /* forceSend/ */
  kcg_bool forceSend,
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  /* packetDynamic/ */
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg packetDynamic_partial;
  /* packetDynamic/ */
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg _1_packetDynamic_partial;
  /* inModeAndLevel/ */
  static T_Mode_Level_Level_And_Mode_Types_Pkg last_inModeAndLevel;

  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &last_inModeAndLevel,
    &outC->mem_inModeAndLevel);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->mem_inModeAndLevel,
    inModeAndLevel);
  outC->_L17 = forceSend;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L13,
    &last_inModeAndLevel);
  outC->_L15 = outC->_L13.newMode;
  outC->_L14 = outC->_L13.newLevel;
  outC->_L2 = inSystemTime;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->_L12, incurrentDMIStatus);
  /* _L1=(manage_DMI_Output_Pkg::isSendingNeeded#1)/ */
  isSendingNeeded_manage_DMI_Output_Pkg(
    outC->_L2,
    &outC->_L12,
    &outC->Context_isSendingNeeded_1);
  outC->_L1 = outC->Context_isSendingNeeded_1.sendingNeeded;
  outC->_L16 = outC->_L1 | outC->_L14 | outC->_L15 | outC->_L17;
  outC->doSendingDynamc = outC->_L16;
  outC->IfBlock1_clock = outC->doSendingDynamc;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L20_then_IfBlock1,
      inMoRC_status);
    outC->_L19_then_IfBlock1 = inNTC;
    outC->_L10_then_IfBlock1 = inSystemTime;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L11_then_IfBlock1, inOdometry);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L12_then_IfBlock1,
      inTrainPosition);
    kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
      &outC->_L13_then_IfBlock1,
      inSpeedSupervision);
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &outC->_L14_then_IfBlock1,
      inModeAndLevel);
    kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(
      &outC->_L15_then_IfBlock1,
      inNationalValues);
    kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(
      &outC->_L16_then_IfBlock1,
      inMovementAuthority);
    /* IfBlock1:then:_L1=(manage_DMI_Output_Pkg::sendDynamic#2)/ */
    sendDynamic_manage_DMI_Output_Pkg(
      outC->_L10_then_IfBlock1,
      &outC->_L11_then_IfBlock1,
      &outC->_L12_then_IfBlock1,
      &outC->_L13_then_IfBlock1,
      &outC->_L14_then_IfBlock1,
      &outC->_L15_then_IfBlock1,
      &outC->_L20_then_IfBlock1,
      &outC->_L16_then_IfBlock1,
      outC->_L19_then_IfBlock1,
      &outC->Context_sendDynamic_2);
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->_L1_then_IfBlock1,
      &outC->Context_sendDynamic_2.packetDynamic);
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &packetDynamic_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->packetDynamic,
      &packetDynamic_partial);
  }
  else {
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_1_packetDynamic_partial,
      (DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDefaultDynamic_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->packetDynamic,
      &_1_packetDynamic_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void cyclicReportToDMI_init_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13.compatibleModeAndLevel = kcg_true;
  outC->_L13.level = M_LEVEL_Level_0;
  outC->_L13.newLevel = kcg_true;
  outC->_L13.Mode = M_MODE_Full_Supervision;
  outC->_L13.newMode = kcg_true;
  outC->_L12.DMI_Active = kcg_true;
  outC->_L12.DMI_Error = kcg_true;
  outC->_L12.DMI_DriverIdValidated = kcg_true;
  outC->_L12.DMI_LevelSelectedByDirver = kcg_true;
  outC->_L12.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->_L12.DMI_TrainRunningNumberValidated = kcg_true;
  outC->_L12.DMI_TrainDataValidated = kcg_true;
  outC->_L12.DMI_StartReceived = kcg_true;
  outC->_L12.DMI_Identifier.valid = kcg_true;
  outC->_L12.DMI_Identifier.systemTime = kcg_lit_int32(0);
  outC->_L12.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->_L12.DMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->_L12.DMI_Identifier.l_name = kcg_lit_int32(0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L12.DMI_Identifier.DMI_name[idx] = ' ';
  }
  outC->_L12.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_true;
  outC->doSendingDynamc = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.system_clock = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.v_train = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.location_front_train = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.location_brake_target = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.v_target = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.v_permitted = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.v_release = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.v_intervention = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.mode = M_MODE_Full_Supervision;
  outC->_L1_then_IfBlock1.level.level = M_LEVEL_Level_0;
  outC->_L1_then_IfBlock1.level.nid_stm = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.nid_c_valid = kcg_true;
  outC->_L1_then_IfBlock1.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L1_then_IfBlock1.sup_status = CSM_DMI_Types_Pkg;
  outC->_L1_then_IfBlock1.location_LOA = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.v_LOA = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.distance_to_TSA = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->_L1_then_IfBlock1.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.valid = kcg_true;
  outC->_L11_then_IfBlock1.timestamp = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odo.o_nominal = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odo.o_min = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.odo.o_max = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.speed.v_lower = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.speed.v_upper = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.acceleration = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L11_then_IfBlock1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.valid = kcg_true;
  outC->_L12_then_IfBlock1.timestamp = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.trainPositionIsUnknown = kcg_true;
  outC->_L12_then_IfBlock1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L12_then_IfBlock1.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.valid = kcg_true;
  outC->_L12_then_IfBlock1.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L12_then_IfBlock1.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L12_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_IfBlock1.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L12_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L12_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx1].q_dir =
      Q_DIR_Reverse;
    outC->_L12_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L12_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx1].d_link =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx1].nid_c =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx1].nid_bg =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx1].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L12_then_IfBlock1.LRBG.missed = kcg_true;
  outC->_L12_then_IfBlock1.prvLRBG.valid = kcg_true;
  outC->_L12_then_IfBlock1.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L12_then_IfBlock1.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(
      0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(
      0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx2].valid =
      kcg_true;
    outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_dir =
      Q_DIR_Reverse;
    outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx2].d_link =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_c =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_bg =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx2].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L12_then_IfBlock1.prvLRBG.missed = kcg_true;
  outC->_L12_then_IfBlock1.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L12_then_IfBlock1.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L12_then_IfBlock1.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L12_then_IfBlock1.linkingIsUsedOnboard = kcg_true;
  outC->_L12_then_IfBlock1.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L13_then_IfBlock1.valid = kcg_true;
  outC->_L13_then_IfBlock1.targetSpeed = kcg_lit_int32(0);
  outC->_L13_then_IfBlock1.permittedSpeed = kcg_lit_int32(0);
  outC->_L13_then_IfBlock1.releaseSpeed = kcg_lit_int32(0);
  outC->_L13_then_IfBlock1.locationBrakeTarget = kcg_lit_int32(0);
  outC->_L13_then_IfBlock1.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L13_then_IfBlock1.interventionSpeed = kcg_lit_int32(0);
  outC->_L13_then_IfBlock1.sup_status = CSM_DMI_Types_Pkg;
  outC->_L13_then_IfBlock1.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L13_then_IfBlock1.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.compatibleModeAndLevel = kcg_true;
  outC->_L14_then_IfBlock1.level = M_LEVEL_Level_0;
  outC->_L14_then_IfBlock1.newLevel = kcg_true;
  outC->_L14_then_IfBlock1.Mode = M_MODE_Full_Supervision;
  outC->_L14_then_IfBlock1.newMode = kcg_true;
  outC->_L15_then_IfBlock1.valid = kcg_true;
  outC->_L15_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.nid_c_valid = kcg_true;
  outC->_L16_then_IfBlock1.valid = kcg_true;
  outC->_L16_then_IfBlock1.location_LOA = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.v_LOA = kcg_lit_int32(0);
  outC->_L19_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L20_then_IfBlock1.registration.valid = kcg_true;
  outC->_L20_then_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L20_then_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L20_then_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L20_then_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L20_then_IfBlock1.connection.valid = kcg_true;
  outC->_L20_then_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L20_then_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L20_then_IfBlock1.connection.nid_radio = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L20_then_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L20_then_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L20_then_IfBlock1.session.valid = kcg_true;
  outC->_L20_then_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L20_then_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L20_then_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L20_then_IfBlock1.session.nid_radio = kcg_lit_int64(0);
  outC->packetDynamic.valid = kcg_true;
  outC->packetDynamic.system_clock = kcg_lit_int32(0);
  outC->packetDynamic.v_train = kcg_lit_int32(0);
  outC->packetDynamic.location_front_train = kcg_lit_int32(0);
  outC->packetDynamic.location_brake_target = kcg_lit_int32(0);
  outC->packetDynamic.v_target = kcg_lit_int32(0);
  outC->packetDynamic.v_permitted = kcg_lit_int32(0);
  outC->packetDynamic.v_release = kcg_lit_int32(0);
  outC->packetDynamic.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->packetDynamic.v_intervention = kcg_lit_int32(0);
  outC->packetDynamic.mode = M_MODE_Full_Supervision;
  outC->packetDynamic.level.level = M_LEVEL_Level_0;
  outC->packetDynamic.level.nid_stm = kcg_lit_int32(0);
  outC->packetDynamic.nid_c = kcg_lit_int32(0);
  outC->packetDynamic.nid_c_valid = kcg_true;
  outC->packetDynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->packetDynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->packetDynamic.location_LOA = kcg_lit_int32(0);
  outC->packetDynamic.v_LOA = kcg_lit_int32(0);
  outC->packetDynamic.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->packetDynamic.distance_KP_Balise = kcg_lit_int32(0);
  outC->packetDynamic.distance_to_TSA = kcg_lit_int32(0);
  outC->packetDynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->packetDynamic.distanceIndicationPoint = kcg_lit_int32(0);
  /* IfBlock1:then:_L1=(manage_DMI_Output_Pkg::sendDynamic#2)/ */
  sendDynamic_init_manage_DMI_Output_Pkg(&outC->Context_sendDynamic_2);
  /* _L1=(manage_DMI_Output_Pkg::isSendingNeeded#1)/ */
  isSendingNeeded_init_manage_DMI_Output_Pkg(&outC->Context_isSendingNeeded_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->mem_inModeAndLevel,
    (T_Mode_Level_Level_And_Mode_Types_Pkg *)
      &cInitModeLevel_manage_DMI_Output_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void cyclicReportToDMI_reset_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  /* IfBlock1:then:_L1=(manage_DMI_Output_Pkg::sendDynamic#2)/ */
  sendDynamic_reset_manage_DMI_Output_Pkg(&outC->Context_sendDynamic_2);
  /* _L1=(manage_DMI_Output_Pkg::isSendingNeeded#1)/ */
  isSendingNeeded_reset_manage_DMI_Output_Pkg(&outC->Context_isSendingNeeded_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->mem_inModeAndLevel,
    (T_Mode_Level_Level_And_Mode_Types_Pkg *)
      &cInitModeLevel_manage_DMI_Output_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_cyclicReportToDMI_manage_DMI_Output_Pkg(
  SV_cyclicReportToDMI_manage_DMI_Output_Pkg *SV,
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  kcg_save_SV_isSendingNeeded_manage_DMI_Output_Pkg(
    &SV->Context_isSendingNeeded_1,
    &outC->Context_isSendingNeeded_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &SV->Context_mem_inModeAndLevel,
    &outC->mem_inModeAndLevel);
}

void kcg_load_SV_cyclicReportToDMI_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC,
  SV_cyclicReportToDMI_manage_DMI_Output_Pkg *SV)
{
  kcg_load_SV_isSendingNeeded_manage_DMI_Output_Pkg(
    &outC->Context_isSendingNeeded_1,
    &SV->Context_isSendingNeeded_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->mem_inModeAndLevel,
    &SV->Context_mem_inModeAndLevel);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** cyclicReportToDMI_manage_DMI_Output_Pkg.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

