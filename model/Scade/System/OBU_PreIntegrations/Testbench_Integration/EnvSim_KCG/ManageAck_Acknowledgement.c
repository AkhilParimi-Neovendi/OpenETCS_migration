/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageAck_Acknowledgement.h"

/* Acknowledgement::ManageAck/ */
void ManageAck_Acknowledgement(
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* last_level/ */
  M_LEVEL last_level,
  /* levelAck/ */
  kcg_bool levelAck,
  /* IsNewLevel/ */
  kcg_bool IsNewLevel,
  outC_ManageAck_Acknowledgement *outC)
{
  outC->_L11 = IsNewLevel;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L4,
    selected_level_transition);
  outC->_L5 = last_level;
  /* _L3=(Acknowledgement::IsAckNeeded#1)/ */
  IsAckNeeded_Acknowledgement(
    &outC->_L4,
    outC->_L5,
    &outC->Context_IsAckNeeded_1);
  outC->_L3 = outC->Context_IsAckNeeded_1.isAckNeeded;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L8,
    selected_level_transition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L9, trainPosition);
  outC->_L10 = levelAck;
  /* _L7=(Acknowledgement::RequestAck#1)/ */
  RequestAck_Acknowledgement(
    outC->_L3,
    &outC->_L8,
    &outC->_L9,
    outC->_L10,
    outC->_L11,
    &outC->Context_RequestAck_1);
  outC->_L7 = outC->Context_RequestAck_1.needsAckFromDriver;
  outC->_L6 = outC->Context_RequestAck_1.service_brake;
  outC->service_brake = outC->_L6;
  outC->needsAckFromDriver = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void ManageAck_init_Acknowledgement(outC_ManageAck_Acknowledgement *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9.valid = kcg_true;
  outC->_L9.timestamp = kcg_lit_int32(0);
  outC->_L9.trainPositionIsUnknown = kcg_true;
  outC->_L9.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L9.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L9.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L9.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L9.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L9.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L9.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L9.LRBG.valid = kcg_true;
  outC->_L9.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L9.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L9.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L9.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L9.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L9.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L9.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L9.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L9.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L9.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L9.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L9.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L9.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L9.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L9.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L9.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L9.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L9.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L9.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L9.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L9.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L9.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L9.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L9.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L9.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L9.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L9.LRBG.missed = kcg_true;
  outC->_L9.prvLRBG.valid = kcg_true;
  outC->_L9.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L9.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L9.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L9.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L9.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L9.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L9.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L9.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L9.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L9.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L9.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L9.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L9.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L9.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L9.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L9.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L9.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L9.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L9.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L9.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L9.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L9.prvLRBG.missed = kcg_true;
  outC->_L9.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L9.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L9.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L9.linkingIsUsedOnboard = kcg_true;
  outC->_L9.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L9.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L9.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L8.is_set = kcg_true;
  outC->_L8.transition.level = M_LEVEL_Level_0;
  outC->_L8.transition.position = kcg_lit_int32(0);
  outC->_L8.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L8.transition.immediateAck = kcg_true;
  outC->_L8.transition.AckLength = kcg_lit_int32(0);
  outC->_L8.LRBG = kcg_lit_int32(0);
  outC->_L8.referenceLocation = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = M_LEVEL_Level_0;
  outC->_L4.is_set = kcg_true;
  outC->_L4.transition.level = M_LEVEL_Level_0;
  outC->_L4.transition.position = kcg_lit_int32(0);
  outC->_L4.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L4.transition.immediateAck = kcg_true;
  outC->_L4.transition.AckLength = kcg_lit_int32(0);
  outC->_L4.LRBG = kcg_lit_int32(0);
  outC->_L4.referenceLocation = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->service_brake = kcg_true;
  outC->needsAckFromDriver = kcg_true;
  /* _L7=(Acknowledgement::RequestAck#1)/ */
  RequestAck_init_Acknowledgement(&outC->Context_RequestAck_1);
  /* _L3=(Acknowledgement::IsAckNeeded#1)/ */
  IsAckNeeded_init_Acknowledgement(&outC->Context_IsAckNeeded_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManageAck_reset_Acknowledgement(outC_ManageAck_Acknowledgement *outC)
{
  /* _L7=(Acknowledgement::RequestAck#1)/ */
  RequestAck_reset_Acknowledgement(&outC->Context_RequestAck_1);
  /* _L3=(Acknowledgement::IsAckNeeded#1)/ */
  IsAckNeeded_reset_Acknowledgement(&outC->Context_IsAckNeeded_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ManageAck_Acknowledgement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

