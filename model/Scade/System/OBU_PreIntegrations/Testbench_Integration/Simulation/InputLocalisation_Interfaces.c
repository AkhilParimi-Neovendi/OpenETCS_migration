/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputLocalisation_Interfaces.h"

/* Interfaces::InputLocalisation/ */
void InputLocalisation_Interfaces(
  /* Data_From_Localisation/ */
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  outC_InputLocalisation_Interfaces *outC)
{
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->_L1,
    Data_From_Localisation);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L12,
    &outC->_L1.PositionErrors);
  outC->_L15 = outC->_L12.BGpassedInUnexpectedDirection;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L11,
    &outC->_L1.Train_Position);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->Train_Position,
    &outC->_L11);
  outC->_L14 = outC->_L1.BG_In_List_Expected_BG_In_SR;
  outC->_L13 = outC->_L1.BG_In_List_Expected_BG_In_SH;
  outC->_L10 = outC->_L1.Train_Speed;
  outC->_L9 = outC->_L1.Train_Standstill;
  outC->Train_Standstill = outC->_L9;
  outC->Train_Speed = outC->_L10;
  outC->Linked_BG_Pased_In_Wrong_Direction = outC->_L15;
  outC->BG_In_Expected_List_In_SH = outC->_L13;
  outC->BG_In_Expected_List_In_SR = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void InputLocalisation_init_Interfaces(outC_InputLocalisation_Interfaces *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L15 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_lit_int64(0);
  outC->_L11.valid = kcg_true;
  outC->_L11.timestamp = kcg_lit_int64(0);
  outC->_L11.trainPositionIsUnknown = kcg_true;
  outC->_L11.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L11.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L11.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L11.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L11.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L11.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L11.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L11.LRBG.valid = kcg_true;
  outC->_L11.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L11.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L11.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L11.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L11.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L11.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L11.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L11.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L11.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L11.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L11.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L11.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L11.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L11.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L11.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L11.LRBG.missed = kcg_true;
  outC->_L11.prvLRBG.valid = kcg_true;
  outC->_L11.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L11.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L11.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L11.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L11.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L11.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L11.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L11.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L11.prvLRBG.missed = kcg_true;
  outC->_L11.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L11.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L11.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L11.linkingIsUsedOnboard = kcg_true;
  outC->_L11.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L11.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L11.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L12.outOfMemSpace = kcg_true;
  outC->_L12.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L12.positionCalculation_inconsistent = kcg_true;
  outC->_L12.linkedBGMissed = kcg_true;
  outC->_L12.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L12.BG_LinkingConsistencyError = kcg_true;
  outC->_L12.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L12.doubleRepositioningError = kcg_true;
  outC->_L12.bg.valid = kcg_true;
  outC->_L12.bg.nid_c = kcg_lit_int64(0);
  outC->_L12.bg.nid_bg = kcg_lit_int64(0);
  outC->_L12.bg.q_link = Q_LINK_Unlinked;
  outC->_L12.bg.location.nominal = kcg_lit_int64(0);
  outC->_L12.bg.location.d_min = kcg_lit_int64(0);
  outC->_L12.bg.location.d_max = kcg_lit_int64(0);
  outC->_L12.bg.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.valid = kcg_true;
  outC->_L12.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L12.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L12.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L12.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L12.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L12.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L12.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.valid = kcg_true;
  outC->_L12.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L12.bg.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L12.bg.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L12.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L12.bg.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L12.bg.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L12.bg.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L12.bg.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L12.bg.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L12.bg.missed = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L1.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->_L1.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->_L1.PositionErrors.outOfMemSpace = kcg_true;
  outC->_L1.PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L1.PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->_L1.PositionErrors.linkedBGMissed = kcg_true;
  outC->_L1.PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L1.PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->_L1.PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L1.PositionErrors.doubleRepositioningError = kcg_true;
  outC->_L1.PositionErrors.bg.valid = kcg_true;
  outC->_L1.PositionErrors.bg.nid_c = kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.nid_bg = kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L1.PositionErrors.bg.location.nominal = kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.location.d_min = kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.location.d_max = kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L1.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(
      0);
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx3].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx3].q_dir =
      Q_DIR_Reverse;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx3].d_link =
      kcg_lit_int64(0);
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx3].nid_c =
      kcg_lit_int64(0);
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx3].nid_bg =
      kcg_lit_int64(0);
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx3].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L1.PositionErrors.bg.missed = kcg_true;
  outC->_L1.Train_Position.valid = kcg_true;
  outC->_L1.Train_Position.timestamp = kcg_lit_int64(0);
  outC->_L1.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L1.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.Train_Position.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L1.Train_Position.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L1.Train_Position.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L1.Train_Position.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L1.Train_Position.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L1.Train_Position.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.valid = kcg_true;
  outC->_L1.Train_Position.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.Train_Position.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(
      0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx4].q_dir =
      Q_DIR_Reverse;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx4].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx4].d_link =
      kcg_lit_int64(0);
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx4].nid_c =
      kcg_lit_int64(0);
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx4].nid_bg =
      kcg_lit_int64(0);
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx4].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L1.Train_Position.LRBG.missed = kcg_true;
  outC->_L1.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L1.Train_Position.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.Train_Position.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(
      0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(
      0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx5].valid =
      kcg_true;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx5].q_dir =
      Q_DIR_Reverse;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx5].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx5].d_link =
      kcg_lit_int64(0);
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_c =
      kcg_lit_int64(0);
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_bg =
      kcg_lit_int64(0);
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx5].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L1.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L1.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L1.Train_Position.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L1.Train_Position.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L1.Train_Position.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L1.Train_Speed = kcg_lit_int64(0);
  outC->_L1.Train_Standstill = kcg_true;
  outC->Train_Standstill = kcg_true;
  outC->Train_Speed = kcg_lit_int64(0);
  outC->Train_Position.valid = kcg_true;
  outC->Train_Position.timestamp = kcg_lit_int64(0);
  outC->Train_Position.trainPositionIsUnknown = kcg_true;
  outC->Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->Train_Position.trainPosition.nominal = kcg_lit_int64(0);
  outC->Train_Position.trainPosition.d_min = kcg_lit_int64(0);
  outC->Train_Position.trainPosition.d_max = kcg_lit_int64(0);
  outC->Train_Position.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->Train_Position.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->Train_Position.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->Train_Position.LRBG.valid = kcg_true;
  outC->Train_Position.LRBG.nid_c = kcg_lit_int64(0);
  outC->Train_Position.LRBG.nid_bg = kcg_lit_int64(0);
  outC->Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->Train_Position.LRBG.location.nominal = kcg_lit_int64(0);
  outC->Train_Position.LRBG.location.d_min = kcg_lit_int64(0);
  outC->Train_Position.LRBG.location.d_max = kcg_lit_int64(0);
  outC->Train_Position.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(
      0);
  outC->Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Train_Position.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].nid_LRBG =
      kcg_lit_int64(0);
    outC->Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].d_link =
      kcg_lit_int64(0);
    outC->Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].nid_c =
      kcg_lit_int64(0);
    outC->Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].nid_bg =
      kcg_lit_int64(0);
    outC->Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_locacc =
      kcg_lit_int64(0);
  }
  outC->Train_Position.LRBG.missed = kcg_true;
  outC->Train_Position.prvLRBG.valid = kcg_true;
  outC->Train_Position.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->Train_Position.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(
      0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_LRBG =
      kcg_lit_int64(0);
    outC->Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_dir =
      Q_DIR_Reverse;
    outC->Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].d_link =
      kcg_lit_int64(0);
    outC->Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_c =
      kcg_lit_int64(0);
    outC->Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_bg =
      kcg_lit_int64(0);
    outC->Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_locacc =
      kcg_lit_int64(0);
  }
  outC->Train_Position.prvLRBG.missed = kcg_true;
  outC->Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->Train_Position.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->Train_Position.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->Train_Position.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->Linked_BG_Pased_In_Wrong_Direction = kcg_true;
  outC->BG_In_Expected_List_In_SH = kcg_true;
  outC->BG_In_Expected_List_In_SR = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InputLocalisation_reset_Interfaces(outC_InputLocalisation_Interfaces *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputLocalisation_Interfaces.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

