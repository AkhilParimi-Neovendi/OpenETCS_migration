/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageLevels.h"

/* ManageLevels/ */
void ManageLevels(
  /* trainStandstill/ */
  kcg_bool trainStandstill,
  /* driverLevelTransition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driverLevelTransition,
  /* levelAck/ */
  kcg_bool levelAck,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ERTMScapabilities/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMScapabilities,
  /* DataFromTrackToLevel/ */
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *DataFromTrackToLevel,
  /* MemorizedLevelIn/ */
  M_LEVEL MemorizedLevelIn,
  outC_ManageLevels *outC)
{
  outC->_L87 = MemorizedLevelIn;
  outC->_L86 = MemorizedLevelIn;
  outC->_L85 = MemorizedLevelIn;
  outC->_L84 = MemorizedLevelIn;
  outC->_L15 = trainStandstill;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L18,
    driverLevelTransition);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->_L24,
    ERTMScapabilities);
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &outC->_L54,
    DataFromTrackToLevel);
  /* _L35=(LevelTransitionSelection::SelectLevelTransition#1)/ */
  SelectLevelTransition_LevelTransitionSelection(
    outC->_L85,
    outC->_L15,
    &outC->_L18,
    &outC->_L24,
    &outC->_L54,
    &outC->Context_SelectLevelTransition_1);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L35,
    &outC->Context_SelectLevelTransition_1.selected_level_transition);
  outC->_L38 = outC->Context_SelectLevelTransition_1.IsAvailableForUse;
  outC->isAvailableForUse = outC->_L38;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L21, trainPosition);
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &outC->_L61,
    DataFromTrackToLevel);
  /* _L55=(LevelChangement::ProceedOnLevelChange#1)/ */
  ProceedOnLevelChange_LevelChangement(
    outC->_L86,
    &outC->_L35,
    &outC->_L21,
    &outC->_L61,
    &outC->Context_ProceedOnLevelChange_1);
  outC->_L55 = outC->Context_ProceedOnLevelChange_1.next_level;
  outC->_L56 = outC->Context_ProceedOnLevelChange_1.IsNewLevel;
  outC->_L57 = outC->Context_ProceedOnLevelChange_1.Trip_Requested;
  outC->Loc_IsNewLevel = outC->_L56;
  outC->_L82 = outC->Loc_IsNewLevel;
  outC->levelIsNew = outC->_L82;
  outC->_L80 = outC->Loc_IsNewLevel;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L78, trainPosition);
  outC->_L19 = levelAck;
  /* _L75=(Acknowledgement::ManageAck#1)/ */
  ManageAck_Acknowledgement(
    &outC->_L35,
    &outC->_L78,
    outC->_L87,
    outC->_L19,
    outC->_L80,
    &outC->Context_ManageAck_1);
  outC->_L75 = outC->Context_ManageAck_1.needsAckFromDriver;
  outC->_L76 = outC->Context_ManageAck_1.service_brake;
  outC->Loc_NextLevel = outC->_L55;
  outC->_L70 = outC->Loc_NextLevel;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L72, trainPosition);
  /* _L68=(OutputToRBC::BuildOutputToRBC#1)/ */
  BuildOutputToRBC_OutputToRBC(
    &outC->_L35,
    outC->_L84,
    outC->_L70,
    &outC->_L72,
    &outC->Context_BuildOutputToRBC_1);
  outC->_L68 = outC->Context_BuildOutputToRBC_1.Connection_to_RBC_Requested;
  outC->_L69 = outC->Context_BuildOutputToRBC_1.PositionReportNeeded;
  outC->positionReportNeeded = outC->_L69;
  outC->connectionToRBCRequested = outC->_L68;
  outC->_L67 = outC->Loc_NextLevel;
  outC->TripTrainRequested = outC->_L57;
  outC->nextLevel = outC->_L67;
  outC->serviceBrakeRequested = outC->_L76;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->announcedLevelTransition,
    &outC->_L35);
  outC->needsAckFromDriver = outC->_L75;
}

#ifndef KCG_USER_DEFINED_INIT
void ManageLevels_init(outC_ManageLevels *outC)
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

  outC->_L87 = M_LEVEL_Level_0;
  outC->_L86 = M_LEVEL_Level_0;
  outC->_L85 = M_LEVEL_Level_0;
  outC->_L84 = M_LEVEL_Level_0;
  outC->_L82 = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L78.valid = kcg_true;
  outC->_L78.timestamp = kcg_lit_int32(0);
  outC->_L78.trainPositionIsUnknown = kcg_true;
  outC->_L78.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L78.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L78.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L78.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L78.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L78.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L78.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L78.LRBG.valid = kcg_true;
  outC->_L78.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L78.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L78.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L78.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L78.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L78.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L78.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L78.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L78.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L78.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L78.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L78.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L78.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L78.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L78.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L78.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L78.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L78.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L78.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L78.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L78.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L78.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L78.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L78.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L78.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L78.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L78.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L78.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L78.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L78.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L78.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L78.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L78.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L78.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L78.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L78.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L78.LRBG.missed = kcg_true;
  outC->_L78.prvLRBG.valid = kcg_true;
  outC->_L78.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L78.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L78.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L78.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L78.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L78.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L78.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L78.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L78.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L78.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L78.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L78.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L78.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L78.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L78.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L78.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L78.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L78.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L78.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L78.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L78.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L78.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L78.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L78.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L78.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L78.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L78.prvLRBG.missed = kcg_true;
  outC->_L78.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L78.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L78.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L78.linkingIsUsedOnboard = kcg_true;
  outC->_L78.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L78.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L78.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L75 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L72.valid = kcg_true;
  outC->_L72.timestamp = kcg_lit_int32(0);
  outC->_L72.trainPositionIsUnknown = kcg_true;
  outC->_L72.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L72.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L72.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L72.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L72.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L72.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L72.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L72.LRBG.valid = kcg_true;
  outC->_L72.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L72.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L72.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L72.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L72.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L72.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L72.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L72.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L72.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L72.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L72.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L72.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L72.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L72.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L72.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L72.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L72.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L72.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L72.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L72.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L72.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L72.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L72.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L72.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L72.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L72.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L72.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L72.LRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L72.LRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L72.LRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L72.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L72.LRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L72.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L72.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L72.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L72.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L72.LRBG.missed = kcg_true;
  outC->_L72.prvLRBG.valid = kcg_true;
  outC->_L72.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L72.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L72.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L72.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L72.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L72.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L72.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L72.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L72.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L72.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L72.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L72.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L72.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L72.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L72.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L72.prvLRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L72.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L72.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L72.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L72.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L72.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L72.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L72.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L72.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L72.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L72.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L72.prvLRBG.missed = kcg_true;
  outC->_L72.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L72.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L72.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L72.linkingIsUsedOnboard = kcg_true;
  outC->_L72.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L72.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L72.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L70 = M_LEVEL_Level_0;
  outC->_L68 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L67 = M_LEVEL_Level_0;
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L61.level_transition_priority_table[idx4].is_set = kcg_true;
    outC->_L61.level_transition_priority_table[idx4].transition.level =
      M_LEVEL_Level_0;
    outC->_L61.level_transition_priority_table[idx4].transition.position =
      kcg_lit_int32(0);
    outC->_L61.level_transition_priority_table[idx4].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L61.level_transition_priority_table[idx4].transition.immediateAck =
      kcg_true;
    outC->_L61.level_transition_priority_table[idx4].transition.AckLength =
      kcg_lit_int32(0);
    outC->_L61.level_transition_priority_table[idx4].LRBG = kcg_lit_int32(0);
    outC->_L61.level_transition_priority_table[idx4].referenceLocation =
      kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L61.conditionnalTransition[idx5].is_set = kcg_true;
    outC->_L61.conditionnalTransition[idx5].transition.level = M_LEVEL_Level_0;
    outC->_L61.conditionnalTransition[idx5].transition.position = kcg_lit_int32(0);
    outC->_L61.conditionnalTransition[idx5].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L61.conditionnalTransition[idx5].transition.immediateAck = kcg_true;
    outC->_L61.conditionnalTransition[idx5].transition.AckLength = kcg_lit_int32(0);
    outC->_L61.conditionnalTransition[idx5].LRBG = kcg_lit_int32(0);
    outC->_L61.conditionnalTransition[idx5].referenceLocation = kcg_lit_int32(0);
  }
  outC->_L61.receivedL2L3MA_track = kcg_true;
  outC->_L61.receivedL1MA_track = kcg_true;
  outC->_L55 = M_LEVEL_Level_0;
  outC->_L56 = kcg_true;
  outC->_L57 = kcg_true;
  for (idx6 = 0; idx6 < 7; idx6++) {
    outC->_L54.level_transition_priority_table[idx6].is_set = kcg_true;
    outC->_L54.level_transition_priority_table[idx6].transition.level =
      M_LEVEL_Level_0;
    outC->_L54.level_transition_priority_table[idx6].transition.position =
      kcg_lit_int32(0);
    outC->_L54.level_transition_priority_table[idx6].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L54.level_transition_priority_table[idx6].transition.immediateAck =
      kcg_true;
    outC->_L54.level_transition_priority_table[idx6].transition.AckLength =
      kcg_lit_int32(0);
    outC->_L54.level_transition_priority_table[idx6].LRBG = kcg_lit_int32(0);
    outC->_L54.level_transition_priority_table[idx6].referenceLocation =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->_L54.conditionnalTransition[idx7].is_set = kcg_true;
    outC->_L54.conditionnalTransition[idx7].transition.level = M_LEVEL_Level_0;
    outC->_L54.conditionnalTransition[idx7].transition.position = kcg_lit_int32(0);
    outC->_L54.conditionnalTransition[idx7].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L54.conditionnalTransition[idx7].transition.immediateAck = kcg_true;
    outC->_L54.conditionnalTransition[idx7].transition.AckLength = kcg_lit_int32(0);
    outC->_L54.conditionnalTransition[idx7].LRBG = kcg_lit_int32(0);
    outC->_L54.conditionnalTransition[idx7].referenceLocation = kcg_lit_int32(0);
  }
  outC->_L54.receivedL2L3MA_track = kcg_true;
  outC->_L54.receivedL1MA_track = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L35.is_set = kcg_true;
  outC->_L35.transition.level = M_LEVEL_Level_0;
  outC->_L35.transition.position = kcg_lit_int32(0);
  outC->_L35.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L35.transition.immediateAck = kcg_true;
  outC->_L35.transition.AckLength = kcg_lit_int32(0);
  outC->_L35.LRBG = kcg_lit_int32(0);
  outC->_L35.referenceLocation = kcg_lit_int32(0);
  outC->_L24.NTC = kcg_true;
  outC->_L24.L0 = kcg_true;
  outC->_L24.L1 = kcg_true;
  outC->_L24.L2 = kcg_true;
  outC->_L24.L3 = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.timestamp = kcg_lit_int32(0);
  outC->_L21.trainPositionIsUnknown = kcg_true;
  outC->_L21.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L21.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L21.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L21.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L21.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L21.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L21.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L21.LRBG.valid = kcg_true;
  outC->_L21.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L21.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L21.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L21.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L21.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L21.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L21.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L21.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L21.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L21.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L21.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L21.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L21.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L21.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L21.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int32(0);
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int32(0);
  }
  outC->_L21.LRBG.missed = kcg_true;
  outC->_L21.prvLRBG.valid = kcg_true;
  outC->_L21.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L21.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L21.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L21.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L21.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L21.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L21.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L21.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int32(0);
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx9].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int32(0);
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int32(0);
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int32(0);
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int32(0);
  }
  outC->_L21.prvLRBG.missed = kcg_true;
  outC->_L21.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L21.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L21.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L21.linkingIsUsedOnboard = kcg_true;
  outC->_L21.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L21.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L21.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L19 = kcg_true;
  outC->_L18.is_set = kcg_true;
  outC->_L18.transition.level = M_LEVEL_Level_0;
  outC->_L18.transition.position = kcg_lit_int32(0);
  outC->_L18.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L18.transition.immediateAck = kcg_true;
  outC->_L18.transition.AckLength = kcg_lit_int32(0);
  outC->_L18.LRBG = kcg_lit_int32(0);
  outC->_L18.referenceLocation = kcg_lit_int32(0);
  outC->_L15 = kcg_true;
  outC->Loc_NextLevel = M_LEVEL_Level_0;
  outC->Loc_IsNewLevel = kcg_true;
  outC->isAvailableForUse = kcg_true;
  outC->levelIsNew = kcg_true;
  outC->positionReportNeeded = kcg_true;
  outC->connectionToRBCRequested = kcg_true;
  outC->serviceBrakeRequested = kcg_true;
  outC->announcedLevelTransition.is_set = kcg_true;
  outC->announcedLevelTransition.transition.level = M_LEVEL_Level_0;
  outC->announcedLevelTransition.transition.position = kcg_lit_int32(0);
  outC->announcedLevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->announcedLevelTransition.transition.immediateAck = kcg_true;
  outC->announcedLevelTransition.transition.AckLength = kcg_lit_int32(0);
  outC->announcedLevelTransition.LRBG = kcg_lit_int32(0);
  outC->announcedLevelTransition.referenceLocation = kcg_lit_int32(0);
  outC->needsAckFromDriver = kcg_true;
  outC->TripTrainRequested = kcg_true;
  outC->nextLevel = M_LEVEL_Level_0;
  /* _L68=(OutputToRBC::BuildOutputToRBC#1)/ */
  BuildOutputToRBC_init_OutputToRBC(&outC->Context_BuildOutputToRBC_1);
  /* _L75=(Acknowledgement::ManageAck#1)/ */
  ManageAck_init_Acknowledgement(&outC->Context_ManageAck_1);
  /* _L55=(LevelChangement::ProceedOnLevelChange#1)/ */
  ProceedOnLevelChange_init_LevelChangement(
    &outC->Context_ProceedOnLevelChange_1);
  /* _L35=(LevelTransitionSelection::SelectLevelTransition#1)/ */
  SelectLevelTransition_init_LevelTransitionSelection(
    &outC->Context_SelectLevelTransition_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManageLevels_reset(outC_ManageLevels *outC)
{
  /* _L68=(OutputToRBC::BuildOutputToRBC#1)/ */
  BuildOutputToRBC_reset_OutputToRBC(&outC->Context_BuildOutputToRBC_1);
  /* _L75=(Acknowledgement::ManageAck#1)/ */
  ManageAck_reset_Acknowledgement(&outC->Context_ManageAck_1);
  /* _L55=(LevelChangement::ProceedOnLevelChange#1)/ */
  ProceedOnLevelChange_reset_LevelChangement(
    &outC->Context_ProceedOnLevelChange_1);
  /* _L35=(LevelTransitionSelection::SelectLevelTransition#1)/ */
  SelectLevelTransition_reset_LevelTransitionSelection(
    &outC->Context_SelectLevelTransition_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_ManageLevels(SV_ManageLevels *SV, outC_ManageLevels *outC)
{
  kcg_save_SV_SelectLevelTransition_LevelTransitionSelection(
    &SV->Context_SelectLevelTransition_1,
    &outC->Context_SelectLevelTransition_1);
  kcg_save_SV_ManageAck_Acknowledgement(
    &SV->Context_ManageAck_1,
    &outC->Context_ManageAck_1);
  kcg_save_SV_BuildOutputToRBC_OutputToRBC(
    &SV->Context_BuildOutputToRBC_1,
    &outC->Context_BuildOutputToRBC_1);
}

void kcg_load_SV_ManageLevels(outC_ManageLevels *outC, SV_ManageLevels *SV)
{
  kcg_load_SV_SelectLevelTransition_LevelTransitionSelection(
    &outC->Context_SelectLevelTransition_1,
    &SV->Context_SelectLevelTransition_1);
  kcg_load_SV_ManageAck_Acknowledgement(
    &outC->Context_ManageAck_1,
    &SV->Context_ManageAck_1);
  kcg_load_SV_BuildOutputToRBC_OutputToRBC(
    &outC->Context_BuildOutputToRBC_1,
    &SV->Context_BuildOutputToRBC_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ManageLevels.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

