/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeNewLevel_LevelChangement.h"

/* LevelChangement::ComputeNewLevel/ */
void ComputeNewLevel_LevelChangement(
  /* current_level/ */
  M_LEVEL current_level,
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_ComputeNewLevel_LevelChangement *outC)
{
  static NID_LRBG noname;
  static L_internal_Type_Obu_BasicTypes_Pkg _1_noname;
  static kcg_bool _2_noname;
  static Location_T_Obu_BasicTypes_Pkg _3_noname;

  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L32, trainPosition);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L31,
    selected_level_transition);
  outC->_L30 = outC->_L32.estimatedFrontEndPosition;
  kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
    &outC->_L6,
    &outC->_L31.transition);
  outC->_L11 = outC->_L6.position;
  outC->Loc_Position = outC->_L11;
  outC->_L26 = outC->Loc_Position;
  outC->_L28 = outC->_L26 <= outC->_L30;
  outC->_L10 = outC->_L6.transitionType;
  outC->Loc_Type = outC->_L10;
  outC->_L25 = outC->Loc_Type == M_TransitionType_Normal_Level_And_Mode_Types_Pkg;
  outC->_L29 = outC->_L25 & outC->_L28;
  outC->_L24 = outC->Loc_Type ==
    M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg;
  outC->_L21 = outC->Loc_Type ==
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L20 = outC->_L21 | outC->_L24 | outC->_L29;
  outC->_L12 = outC->_L6.level;
  outC->Loc_Level = outC->_L12;
  outC->_L18 = outC->Loc_Level;
  outC->_L17 = current_level;
  outC->_L19 = outC->_L17 != outC->_L18;
  outC->_L7 = outC->_L31.is_set;
  outC->Loc_is_set = outC->_L7;
  outC->_L16 = outC->Loc_is_set;
  outC->_L15 = outC->_L16 & outC->_L19 & outC->_L20;
  outC->IsNewLevel = outC->_L15;
  outC->_L14 = outC->Loc_Level;
  outC->_L1 = current_level;
  /* _L13= */
  if (outC->_L15) {
    outC->_L13 = outC->_L14;
  }
  else {
    outC->_L13 = outC->_L1;
  }
  outC->_L8 = outC->_L6.AckLength;
  _3_noname = outC->_L8;
  outC->_L9 = outC->_L6.immediateAck;
  _2_noname = outC->_L9;
  outC->_L4 = outC->_L31.referenceLocation;
  _1_noname = outC->_L4;
  outC->_L5 = outC->_L31.LRBG;
  noname = outC->_L5;
  outC->next_level = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void ComputeNewLevel_init_LevelChangement(
  outC_ComputeNewLevel_LevelChangement *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L32.valid = kcg_true;
  outC->_L32.timestamp = kcg_lit_int64(0);
  outC->_L32.trainPositionIsUnknown = kcg_true;
  outC->_L32.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L32.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L32.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L32.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L32.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L32.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L32.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L32.LRBG.valid = kcg_true;
  outC->_L32.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L32.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L32.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L32.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L32.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L32.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L32.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L32.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L32.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L32.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L32.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L32.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L32.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L32.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L32.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L32.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L32.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L32.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L32.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L32.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L32.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L32.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L32.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L32.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L32.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L32.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L32.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L32.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L32.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L32.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L32.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L32.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L32.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L32.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L32.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L32.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L32.LRBG.missed = kcg_true;
  outC->_L32.prvLRBG.valid = kcg_true;
  outC->_L32.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L32.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L32.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L32.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L32.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L32.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L32.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L32.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L32.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L32.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L32.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L32.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L32.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L32.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L32.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L32.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L32.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L32.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L32.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L32.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L32.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L32.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L32.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L32.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L32.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L32.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L32.prvLRBG.missed = kcg_true;
  outC->_L32.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L32.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L32.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L32.linkingIsUsedOnboard = kcg_true;
  outC->_L32.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L32.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L32.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L31.is_set = kcg_true;
  outC->_L31.transition.level = M_LEVEL_Level_0;
  outC->_L31.transition.position = kcg_lit_int64(0);
  outC->_L31.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L31.transition.immediateAck = kcg_true;
  outC->_L31.transition.AckLength = kcg_lit_int64(0);
  outC->_L31.LRBG = kcg_lit_int64(0);
  outC->_L31.referenceLocation = kcg_lit_int64(0);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = M_LEVEL_Level_0;
  outC->_L17 = M_LEVEL_Level_0;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = M_LEVEL_Level_0;
  outC->_L13 = M_LEVEL_Level_0;
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  outC->_L10 = M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L11 = kcg_lit_int64(0);
  outC->_L12 = M_LEVEL_Level_0;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6.level = M_LEVEL_Level_0;
  outC->_L6.position = kcg_lit_int64(0);
  outC->_L6.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L6.immediateAck = kcg_true;
  outC->_L6.AckLength = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
  outC->_L1 = M_LEVEL_Level_0;
  outC->Loc_Type = M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->Loc_Position = kcg_lit_int64(0);
  outC->Loc_Level = M_LEVEL_Level_0;
  outC->Loc_is_set = kcg_true;
  outC->IsNewLevel = kcg_true;
  outC->next_level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ComputeNewLevel_reset_LevelChangement(
  outC_ComputeNewLevel_LevelChangement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ComputeNewLevel_LevelChangement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

