/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProceedOnLevelChange_LevelChangement.h"

/* LevelChangement::ProceedOnLevelChange/ */
void ProceedOnLevelChange_LevelChangement(
  /* current_level/ */
  M_LEVEL current_level,
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Data_From_Track_to_Level/ */
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  outC_ProceedOnLevelChange_LevelChangement *outC)
{
  outC->_L9 = current_level;
  outC->_L5 = current_level;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L6,
    selected_level_transition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L7, trainPosition);
  /* _L1=(LevelChangement::ComputeNewLevel#1)/ */
  ComputeNewLevel_LevelChangement(
    outC->_L5,
    &outC->_L6,
    &outC->_L7,
    &outC->Context_ComputeNewLevel_1);
  outC->_L1 = outC->Context_ComputeNewLevel_1.next_level;
  outC->_L2 = outC->Context_ComputeNewLevel_1.IsNewLevel;
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &outC->_L10,
    Data_From_Track_to_Level);
  /* _L4=(LevelChangement::TripRequests#1)/ */
  TripRequests_LevelChangement(
    outC->_L9,
    outC->_L1,
    &outC->_L10,
    &outC->Context_TripRequests_1);
  outC->_L4 = outC->Context_TripRequests_1.Trip_Requested;
  outC->Trip_Requested = outC->_L4;
  outC->IsNewLevel = outC->_L2;
  outC->next_level = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void ProceedOnLevelChange_init_LevelChangement(
  outC_ProceedOnLevelChange_LevelChangement *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  for (idx = 0; idx < 7; idx++) {
    outC->_L10.level_transition_priority_table[idx].is_set = kcg_true;
    outC->_L10.level_transition_priority_table[idx].transition.level =
      M_LEVEL_Level_0;
    outC->_L10.level_transition_priority_table[idx].transition.position =
      kcg_lit_int64(0);
    outC->_L10.level_transition_priority_table[idx].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L10.level_transition_priority_table[idx].transition.immediateAck =
      kcg_true;
    outC->_L10.level_transition_priority_table[idx].transition.AckLength =
      kcg_lit_int64(0);
    outC->_L10.level_transition_priority_table[idx].LRBG = kcg_lit_int64(0);
    outC->_L10.level_transition_priority_table[idx].referenceLocation =
      kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L10.conditionnalTransition[idx1].is_set = kcg_true;
    outC->_L10.conditionnalTransition[idx1].transition.level = M_LEVEL_Level_0;
    outC->_L10.conditionnalTransition[idx1].transition.position = kcg_lit_int64(0);
    outC->_L10.conditionnalTransition[idx1].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L10.conditionnalTransition[idx1].transition.immediateAck = kcg_true;
    outC->_L10.conditionnalTransition[idx1].transition.AckLength = kcg_lit_int64(0);
    outC->_L10.conditionnalTransition[idx1].LRBG = kcg_lit_int64(0);
    outC->_L10.conditionnalTransition[idx1].referenceLocation = kcg_lit_int64(0);
  }
  outC->_L10.receivedL2L3MA_track = kcg_true;
  outC->_L10.receivedL1MA_track = kcg_true;
  outC->_L9 = M_LEVEL_Level_0;
  outC->_L7.valid = kcg_true;
  outC->_L7.timestamp = kcg_lit_int64(0);
  outC->_L7.trainPositionIsUnknown = kcg_true;
  outC->_L7.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L7.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L7.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L7.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L7.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L7.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L7.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L7.LRBG.valid = kcg_true;
  outC->_L7.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L7.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L7.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L7.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L7.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L7.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L7.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L7.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L7.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L7.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L7.LRBG.missed = kcg_true;
  outC->_L7.prvLRBG.valid = kcg_true;
  outC->_L7.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L7.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L7.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L7.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L7.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L7.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L7.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L7.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L7.prvLRBG.missed = kcg_true;
  outC->_L7.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L7.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L7.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L7.linkingIsUsedOnboard = kcg_true;
  outC->_L7.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L7.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L7.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L6.is_set = kcg_true;
  outC->_L6.transition.level = M_LEVEL_Level_0;
  outC->_L6.transition.position = kcg_lit_int64(0);
  outC->_L6.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L6.transition.immediateAck = kcg_true;
  outC->_L6.transition.AckLength = kcg_lit_int64(0);
  outC->_L6.LRBG = kcg_lit_int64(0);
  outC->_L6.referenceLocation = kcg_lit_int64(0);
  outC->_L5 = M_LEVEL_Level_0;
  outC->_L4 = kcg_true;
  outC->_L1 = M_LEVEL_Level_0;
  outC->_L2 = kcg_true;
  outC->Trip_Requested = kcg_true;
  outC->IsNewLevel = kcg_true;
  outC->next_level = M_LEVEL_Level_0;
  /* _L4=(LevelChangement::TripRequests#1)/ */
  TripRequests_init_LevelChangement(&outC->Context_TripRequests_1);
  /* _L1=(LevelChangement::ComputeNewLevel#1)/ */
  ComputeNewLevel_init_LevelChangement(&outC->Context_ComputeNewLevel_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ProceedOnLevelChange_reset_LevelChangement(
  outC_ProceedOnLevelChange_LevelChangement *outC)
{
  /* _L4=(LevelChangement::TripRequests#1)/ */
  TripRequests_reset_LevelChangement(&outC->Context_TripRequests_1);
  /* _L1=(LevelChangement::ComputeNewLevel#1)/ */
  ComputeNewLevel_reset_LevelChangement(&outC->Context_ComputeNewLevel_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ProceedOnLevelChange_LevelChangement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

