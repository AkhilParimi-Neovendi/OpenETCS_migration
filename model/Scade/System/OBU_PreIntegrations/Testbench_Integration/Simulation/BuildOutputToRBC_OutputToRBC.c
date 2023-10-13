/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildOutputToRBC_OutputToRBC.h"

/* OutputToRBC::BuildOutputToRBC/ */
void BuildOutputToRBC_OutputToRBC(
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* last_level/ */
  M_LEVEL last_level,
  /* new_level/ */
  M_LEVEL new_level,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_BuildOutputToRBC_OutputToRBC *outC)
{
  outC->_L10 = new_level;
  outC->_L9 = last_level;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L11,
    selected_level_transition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L12, trainPosition);
  /* _L8=(OutputToRBC::ExitLevel2or3#1)/ */
  ExitLevel2or3_OutputToRBC(
    outC->_L10,
    outC->_L9,
    &outC->_L11,
    &outC->_L12,
    &outC->Context_ExitLevel2or3_1);
  outC->_L8 = outC->Context_ExitLevel2or3_1.PositionReportNeeded;
  outC->_L7 = last_level;
  outC->_L4 = new_level;
  /* _L5=(OutputToRBC::EntryInLevel2or3#1)/ */
  EntryInLevel2or3_OutputToRBC(
    outC->_L7,
    outC->_L4,
    &outC->Context_EntryInLevel2or3_1);
  outC->_L5 = outC->Context_EntryInLevel2or3_1.PositionReportNeeded;
  outC->_L13 = outC->_L5 | outC->_L8;
  outC->PositionReportNeeded = outC->_L13;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L6,
    selected_level_transition);
  outC->_L3 = last_level;
  /* _L2=(OutputToRBC::RBCSessionRequests#2)/ */
  RBCSessionRequests_OutputToRBC(
    outC->_L3,
    &outC->_L6,
    &outC->Context_RBCSessionRequests_2);
  outC->_L2 = outC->Context_RBCSessionRequests_2.Connection_to_RBC_Requested;
  outC->Connection_to_RBC_Requested = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void BuildOutputToRBC_init_OutputToRBC(outC_BuildOutputToRBC_OutputToRBC *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L13 = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.timestamp = kcg_lit_int64(0);
  outC->_L12.trainPositionIsUnknown = kcg_true;
  outC->_L12.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L12.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L12.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L12.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L12.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L12.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L12.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L12.LRBG.valid = kcg_true;
  outC->_L12.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L12.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L12.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L12.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L12.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L12.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L12.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L12.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L12.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L12.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L12.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L12.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L12.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L12.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L12.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L12.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L12.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L12.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L12.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L12.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L12.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L12.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L12.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L12.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L12.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L12.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L12.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L12.LRBG.missed = kcg_true;
  outC->_L12.prvLRBG.valid = kcg_true;
  outC->_L12.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L12.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L12.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L12.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L12.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L12.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L12.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L12.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L12.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L12.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L12.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L12.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L12.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L12.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L12.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L12.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L12.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L12.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L12.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L12.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L12.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L12.prvLRBG.missed = kcg_true;
  outC->_L12.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L12.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L12.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L12.linkingIsUsedOnboard = kcg_true;
  outC->_L12.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L12.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L12.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L11.is_set = kcg_true;
  outC->_L11.transition.level = M_LEVEL_Level_0;
  outC->_L11.transition.position = kcg_lit_int64(0);
  outC->_L11.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L11.transition.immediateAck = kcg_true;
  outC->_L11.transition.AckLength = kcg_lit_int64(0);
  outC->_L11.LRBG = kcg_lit_int64(0);
  outC->_L11.referenceLocation = kcg_lit_int64(0);
  outC->_L10 = M_LEVEL_Level_0;
  outC->_L9 = M_LEVEL_Level_0;
  outC->_L8 = kcg_true;
  outC->_L7 = M_LEVEL_Level_0;
  outC->_L6.is_set = kcg_true;
  outC->_L6.transition.level = M_LEVEL_Level_0;
  outC->_L6.transition.position = kcg_lit_int64(0);
  outC->_L6.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L6.transition.immediateAck = kcg_true;
  outC->_L6.transition.AckLength = kcg_lit_int64(0);
  outC->_L6.LRBG = kcg_lit_int64(0);
  outC->_L6.referenceLocation = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L4 = M_LEVEL_Level_0;
  outC->_L3 = M_LEVEL_Level_0;
  outC->_L2 = kcg_true;
  outC->PositionReportNeeded = kcg_true;
  outC->Connection_to_RBC_Requested = kcg_true;
  /* _L2=(OutputToRBC::RBCSessionRequests#2)/ */
  RBCSessionRequests_init_OutputToRBC(&outC->Context_RBCSessionRequests_2);
  /* _L5=(OutputToRBC::EntryInLevel2or3#1)/ */
  EntryInLevel2or3_init_OutputToRBC(&outC->Context_EntryInLevel2or3_1);
  /* _L8=(OutputToRBC::ExitLevel2or3#1)/ */
  ExitLevel2or3_init_OutputToRBC(&outC->Context_ExitLevel2or3_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BuildOutputToRBC_reset_OutputToRBC(outC_BuildOutputToRBC_OutputToRBC *outC)
{
  /* _L2=(OutputToRBC::RBCSessionRequests#2)/ */
  RBCSessionRequests_reset_OutputToRBC(&outC->Context_RBCSessionRequests_2);
  /* _L5=(OutputToRBC::EntryInLevel2or3#1)/ */
  EntryInLevel2or3_reset_OutputToRBC(&outC->Context_EntryInLevel2or3_1);
  /* _L8=(OutputToRBC::ExitLevel2or3#1)/ */
  ExitLevel2or3_reset_OutputToRBC(&outC->Context_ExitLevel2or3_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_BuildOutputToRBC_OutputToRBC(
  SV_BuildOutputToRBC_OutputToRBC *SV,
  outC_BuildOutputToRBC_OutputToRBC *outC)
{
  kcg_save_SV_ExitLevel2or3_OutputToRBC(
    &SV->Context_ExitLevel2or3_1,
    &outC->Context_ExitLevel2or3_1);
}

void kcg_load_SV_BuildOutputToRBC_OutputToRBC(
  outC_BuildOutputToRBC_OutputToRBC *outC,
  SV_BuildOutputToRBC_OutputToRBC *SV)
{
  kcg_load_SV_ExitLevel2or3_OutputToRBC(
    &outC->Context_ExitLevel2or3_1,
    &SV->Context_ExitLevel2or3_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BuildOutputToRBC_OutputToRBC.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

