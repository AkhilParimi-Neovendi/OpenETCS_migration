/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputLocalisation_InputManagement.h"

/* InputManagement::InputLocalisation/ */
void InputLocalisation_InputManagement(
  /* Data_From_Localisation/ */
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  outC_InputLocalisation_InputManagement *outC)
{
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->_L1,
    Data_From_Localisation);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L11,
    &outC->_L1.Train_Position);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->Loc_Train_Position,
    &outC->_L11);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L23,
    &outC->Loc_Train_Position);
  outC->_L9 = outC->_L1.Train_Standstill;
  outC->Loc_Train_Standstill = outC->_L9;
  outC->_L22 = outC->Loc_Train_Standstill;
  outC->_L21 = outC->Loc_Train_Standstill;
  outC->_L10 = outC->_L1.Train_Speed;
  outC->Loc_Train_Speed = outC->_L10;
  outC->_L20 = outC->Loc_Train_Speed;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L19,
    &outC->Loc_Train_Position);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L12,
    &outC->_L1.PositionErrors);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->Loc_PositionErrors,
    &outC->_L12);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L18,
    &outC->Loc_PositionErrors);
  outC->_L14 = outC->_L1.BG_In_List_Expected_BG_In_SR;
  outC->Loc_BG_In_Expected_List_In_SR = outC->_L14;
  outC->_L17 = outC->Loc_BG_In_Expected_List_In_SR;
  outC->_L13 = outC->_L1.BG_In_List_Expected_BG_In_SH;
  outC->Loc_BG_In_Expected_List_In_SH = outC->_L13;
  outC->_L16 = outC->Loc_BG_In_Expected_List_In_SH;
  outC->_L15.BG_In_List_Expected_BG_In_SR = outC->_L16;
  outC->_L15.BG_In_List_Expected_BG_In_SH = outC->_L17;
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L15.PositionErrors,
    &outC->_L18);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L15.Train_Position,
    &outC->_L19);
  outC->_L15.Train_Speed = outC->_L20;
  outC->_L15.Train_Standstill = outC->_L21;
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->Data_From_Localisation_To_Mode,
    &outC->_L15);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPosition,
    &outC->_L23);
  outC->train_standstill = outC->_L22;
}

#ifndef KCG_USER_DEFINED_INIT
void InputLocalisation_init_InputManagement(
  outC_InputLocalisation_InputManagement *outC)
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

  outC->_L23.valid = kcg_true;
  outC->_L23.timestamp = kcg_lit_int32(0);
  outC->_L23.trainPositionIsUnknown = kcg_true;
  outC->_L23.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L23.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L23.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L23.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L23.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L23.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L23.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L23.LRBG.valid = kcg_true;
  outC->_L23.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L23.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L23.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L23.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L23.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L23.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L23.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L23.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L23.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L23.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L23.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L23.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L23.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L23.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L23.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L23.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L23.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L23.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L23.LRBG.missed = kcg_true;
  outC->_L23.prvLRBG.valid = kcg_true;
  outC->_L23.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L23.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L23.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L23.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L23.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L23.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L23.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L23.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L23.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L23.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L23.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L23.prvLRBG.missed = kcg_true;
  outC->_L23.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L23.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L23.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L23.linkingIsUsedOnboard = kcg_true;
  outC->_L23.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L23.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L23.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19.valid = kcg_true;
  outC->_L19.timestamp = kcg_lit_int32(0);
  outC->_L19.trainPositionIsUnknown = kcg_true;
  outC->_L19.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L19.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L19.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L19.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L19.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L19.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L19.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L19.LRBG.valid = kcg_true;
  outC->_L19.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L19.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L19.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L19.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L19.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L19.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L19.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L19.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L19.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L19.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L19.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L19.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L19.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L19.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L19.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L19.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L19.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L19.LRBG.missed = kcg_true;
  outC->_L19.prvLRBG.valid = kcg_true;
  outC->_L19.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L19.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L19.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L19.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L19.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L19.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L19.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L19.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L19.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L19.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L19.prvLRBG.missed = kcg_true;
  outC->_L19.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L19.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L19.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L19.linkingIsUsedOnboard = kcg_true;
  outC->_L19.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L19.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L19.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L18.outOfMemSpace = kcg_true;
  outC->_L18.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L18.positionCalculation_inconsistent = kcg_true;
  outC->_L18.linkedBGMissed = kcg_true;
  outC->_L18.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L18.BG_LinkingConsistencyError = kcg_true;
  outC->_L18.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L18.doubleRepositioningError = kcg_true;
  outC->_L18.bg.valid = kcg_true;
  outC->_L18.bg.nid_c = kcg_lit_int32(0);
  outC->_L18.bg.nid_bg = kcg_lit_int32(0);
  outC->_L18.bg.q_link = Q_LINK_Unlinked;
  outC->_L18.bg.location.nominal = kcg_lit_int32(0);
  outC->_L18.bg.location.d_min = kcg_lit_int32(0);
  outC->_L18.bg.location.d_max = kcg_lit_int32(0);
  outC->_L18.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.valid = kcg_true;
  outC->_L18.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L18.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L18.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L18.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L18.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L18.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L18.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L18.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.valid = kcg_true;
  outC->_L18.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L18.bg.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L18.bg.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L18.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L18.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L18.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L18.bg.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L18.bg.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L18.bg.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L18.bg.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L18.bg.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L18.bg.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18.bg.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L18.bg.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L18.bg.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18.bg.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L18.bg.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L18.bg.missed = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->_L15.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->_L15.PositionErrors.outOfMemSpace = kcg_true;
  outC->_L15.PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L15.PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->_L15.PositionErrors.linkedBGMissed = kcg_true;
  outC->_L15.PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L15.PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->_L15.PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L15.PositionErrors.doubleRepositioningError = kcg_true;
  outC->_L15.PositionErrors.bg.valid = kcg_true;
  outC->_L15.PositionErrors.bg.nid_c = kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.nid_bg = kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L15.PositionErrors.bg.location.nominal = kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.location.d_min = kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.location.d_max = kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L15.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L15.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L15.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L15.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L15.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L15.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L15.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(
      0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L15.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L15.PositionErrors.bg.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L15.PositionErrors.bg.infoFromPassing.linkedBGs[idx5].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L15.PositionErrors.bg.infoFromPassing.linkedBGs[idx5].q_dir =
      Q_DIR_Reverse;
    outC->_L15.PositionErrors.bg.infoFromPassing.linkedBGs[idx5].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L15.PositionErrors.bg.infoFromPassing.linkedBGs[idx5].d_link =
      kcg_lit_int32(0);
    outC->_L15.PositionErrors.bg.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15.PositionErrors.bg.infoFromPassing.linkedBGs[idx5].nid_c =
      kcg_lit_int32(0);
    outC->_L15.PositionErrors.bg.infoFromPassing.linkedBGs[idx5].nid_bg =
      kcg_lit_int32(0);
    outC->_L15.PositionErrors.bg.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15.PositionErrors.bg.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15.PositionErrors.bg.infoFromPassing.linkedBGs[idx5].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L15.PositionErrors.bg.missed = kcg_true;
  outC->_L15.Train_Position.valid = kcg_true;
  outC->_L15.Train_Position.timestamp = kcg_lit_int32(0);
  outC->_L15.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L15.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L15.Train_Position.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L15.Train_Position.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L15.Train_Position.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L15.Train_Position.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L15.Train_Position.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L15.Train_Position.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.valid = kcg_true;
  outC->_L15.Train_Position.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L15.Train_Position.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L15.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L15.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L15.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L15.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L15.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L15.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L15.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L15.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L15.Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L15.Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L15.Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_dir =
      Q_DIR_Reverse;
    outC->_L15.Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L15.Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].d_link =
      kcg_lit_int32(0);
    outC->_L15.Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15.Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].nid_c =
      kcg_lit_int32(0);
    outC->_L15.Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].nid_bg =
      kcg_lit_int32(0);
    outC->_L15.Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15.Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15.Train_Position.LRBG.infoFromPassing.linkedBGs[idx6].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L15.Train_Position.LRBG.missed = kcg_true;
  outC->_L15.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L15.Train_Position.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L15.Train_Position.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L15.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L15.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L15.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].valid =
      kcg_true;
    outC->_L15.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L15.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_dir =
      Q_DIR_Reverse;
    outC->_L15.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L15.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].d_link =
      kcg_lit_int32(0);
    outC->_L15.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_c =
      kcg_lit_int32(0);
    outC->_L15.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_bg =
      kcg_lit_int32(0);
    outC->_L15.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx7].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L15.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L15.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L15.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L15.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L15.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L15.Train_Position.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L15.Train_Position.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L15.Train_Position.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L15.Train_Speed = kcg_lit_int32(0);
  outC->_L15.Train_Standstill = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_lit_int32(0);
  outC->_L11.valid = kcg_true;
  outC->_L11.timestamp = kcg_lit_int32(0);
  outC->_L11.trainPositionIsUnknown = kcg_true;
  outC->_L11.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L11.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L11.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L11.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L11.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L11.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L11.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L11.LRBG.valid = kcg_true;
  outC->_L11.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L11.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L11.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L11.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L11.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L11.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L11.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L11.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L11.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L11.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L11.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L11.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L11.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L11.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L11.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L11.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L11.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int32(0);
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L11.LRBG.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int32(0);
  }
  outC->_L11.LRBG.missed = kcg_true;
  outC->_L11.prvLRBG.valid = kcg_true;
  outC->_L11.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L11.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L11.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L11.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L11.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L11.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L11.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L11.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L11.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L11.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int32(0);
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx9].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int32(0);
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int32(0);
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int32(0);
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L11.prvLRBG.infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int32(0);
  }
  outC->_L11.prvLRBG.missed = kcg_true;
  outC->_L11.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L11.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L11.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L11.linkingIsUsedOnboard = kcg_true;
  outC->_L11.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L11.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L11.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L12.outOfMemSpace = kcg_true;
  outC->_L12.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L12.positionCalculation_inconsistent = kcg_true;
  outC->_L12.linkedBGMissed = kcg_true;
  outC->_L12.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L12.BG_LinkingConsistencyError = kcg_true;
  outC->_L12.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L12.doubleRepositioningError = kcg_true;
  outC->_L12.bg.valid = kcg_true;
  outC->_L12.bg.nid_c = kcg_lit_int32(0);
  outC->_L12.bg.nid_bg = kcg_lit_int32(0);
  outC->_L12.bg.q_link = Q_LINK_Unlinked;
  outC->_L12.bg.location.nominal = kcg_lit_int32(0);
  outC->_L12.bg.location.d_min = kcg_lit_int32(0);
  outC->_L12.bg.location.d_max = kcg_lit_int32(0);
  outC->_L12.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.valid = kcg_true;
  outC->_L12.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L12.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L12.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L12.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L12.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L12.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L12.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.valid = kcg_true;
  outC->_L12.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L12.bg.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L12.bg.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L12.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L12.bg.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int32(0);
    outC->_L12.bg.infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int32(0);
    outC->_L12.bg.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int32(0);
    outC->_L12.bg.infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int32(0);
    outC->_L12.bg.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12.bg.infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int32(0);
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
  outC->_L1.PositionErrors.bg.nid_c = kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.nid_bg = kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L1.PositionErrors.bg.location.nominal = kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.location.d_min = kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.location.d_max = kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L1.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(
      0);
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
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
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx11].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx11].q_dir =
      Q_DIR_Reverse;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx11].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx11].d_link =
      kcg_lit_int32(0);
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx11].nid_c =
      kcg_lit_int32(0);
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx11].nid_bg =
      kcg_lit_int32(0);
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.PositionErrors.bg.infoFromPassing.linkedBGs[idx11].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1.PositionErrors.bg.missed = kcg_true;
  outC->_L1.Train_Position.valid = kcg_true;
  outC->_L1.Train_Position.timestamp = kcg_lit_int32(0);
  outC->_L1.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L1.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.Train_Position.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L1.Train_Position.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L1.Train_Position.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L1.Train_Position.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L1.Train_Position.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L1.Train_Position.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.valid = kcg_true;
  outC->_L1.Train_Position.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.Train_Position.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
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
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx12].valid = kcg_true;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx12].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx12].q_dir =
      Q_DIR_Reverse;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx12].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx12].d_link =
      kcg_lit_int32(0);
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx12].nid_c =
      kcg_lit_int32(0);
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx12].nid_bg =
      kcg_lit_int32(0);
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx12].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx12].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.Train_Position.LRBG.infoFromPassing.linkedBGs[idx12].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1.Train_Position.LRBG.missed = kcg_true;
  outC->_L1.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L1.Train_Position.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.Train_Position.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(
      0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(
      0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
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
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx13].valid =
      kcg_true;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx13].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx13].q_dir =
      Q_DIR_Reverse;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx13].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx13].d_link =
      kcg_lit_int32(0);
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx13].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx13].nid_c =
      kcg_lit_int32(0);
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx13].nid_bg =
      kcg_lit_int32(0);
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx13].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx13].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx13].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L1.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L1.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L1.Train_Position.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L1.Train_Position.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1.Train_Position.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1.Train_Speed = kcg_lit_int32(0);
  outC->_L1.Train_Standstill = kcg_true;
  outC->Loc_Train_Standstill = kcg_true;
  outC->Loc_Train_Speed = kcg_lit_int32(0);
  outC->Loc_Train_Position.valid = kcg_true;
  outC->Loc_Train_Position.timestamp = kcg_lit_int32(0);
  outC->Loc_Train_Position.trainPositionIsUnknown = kcg_true;
  outC->Loc_Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->Loc_Train_Position.trainPosition.nominal = kcg_lit_int32(0);
  outC->Loc_Train_Position.trainPosition.d_min = kcg_lit_int32(0);
  outC->Loc_Train_Position.trainPosition.d_max = kcg_lit_int32(0);
  outC->Loc_Train_Position.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->Loc_Train_Position.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->Loc_Train_Position.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.valid = kcg_true;
  outC->Loc_Train_Position.LRBG.nid_c = kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.nid_bg = kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->Loc_Train_Position.LRBG.location.nominal = kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.location.d_min = kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.location.d_max = kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->Loc_Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->Loc_Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->Loc_Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Loc_Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Loc_Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Loc_Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Loc_Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Loc_Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->Loc_Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->Loc_Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].nid_LRBG =
      kcg_lit_int32(0);
    outC->Loc_Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_dir =
      Q_DIR_Reverse;
    outC->Loc_Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Loc_Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].d_link =
      kcg_lit_int32(0);
    outC->Loc_Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Loc_Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].nid_c =
      kcg_lit_int32(0);
    outC->Loc_Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].nid_bg =
      kcg_lit_int32(0);
    outC->Loc_Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Loc_Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Loc_Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_locacc =
      kcg_lit_int32(0);
  }
  outC->Loc_Train_Position.LRBG.missed = kcg_true;
  outC->Loc_Train_Position.prvLRBG.valid = kcg_true;
  outC->Loc_Train_Position.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->Loc_Train_Position.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(
      0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(
      0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Loc_Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Loc_Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->Loc_Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].valid =
      kcg_true;
    outC->Loc_Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].nid_LRBG =
      kcg_lit_int32(0);
    outC->Loc_Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_dir =
      Q_DIR_Reverse;
    outC->Loc_Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Loc_Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].d_link =
      kcg_lit_int32(0);
    outC->Loc_Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Loc_Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].nid_c =
      kcg_lit_int32(0);
    outC->Loc_Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].nid_bg =
      kcg_lit_int32(0);
    outC->Loc_Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Loc_Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Loc_Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_locacc =
      kcg_lit_int32(0);
  }
  outC->Loc_Train_Position.prvLRBG.missed = kcg_true;
  outC->Loc_Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->Loc_Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->Loc_Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->Loc_Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->Loc_Train_Position.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->Loc_Train_Position.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->Loc_Train_Position.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->Loc_PositionErrors.outOfMemSpace = kcg_true;
  outC->Loc_PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->Loc_PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->Loc_PositionErrors.linkedBGMissed = kcg_true;
  outC->Loc_PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->Loc_PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->Loc_PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->Loc_PositionErrors.doubleRepositioningError = kcg_true;
  outC->Loc_PositionErrors.bg.valid = kcg_true;
  outC->Loc_PositionErrors.bg.nid_c = kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.nid_bg = kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->Loc_PositionErrors.bg.location.nominal = kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.location.d_min = kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.location.d_max = kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->Loc_PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->Loc_PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->Loc_PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Loc_PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Loc_PositionErrors.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(
      0);
  outC->Loc_PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Loc_PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Loc_PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Loc_PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->Loc_PositionErrors.bg.infoFromPassing.linkedBGs[idx16].valid = kcg_true;
    outC->Loc_PositionErrors.bg.infoFromPassing.linkedBGs[idx16].nid_LRBG =
      kcg_lit_int32(0);
    outC->Loc_PositionErrors.bg.infoFromPassing.linkedBGs[idx16].q_dir =
      Q_DIR_Reverse;
    outC->Loc_PositionErrors.bg.infoFromPassing.linkedBGs[idx16].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Loc_PositionErrors.bg.infoFromPassing.linkedBGs[idx16].d_link =
      kcg_lit_int32(0);
    outC->Loc_PositionErrors.bg.infoFromPassing.linkedBGs[idx16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Loc_PositionErrors.bg.infoFromPassing.linkedBGs[idx16].nid_c =
      kcg_lit_int32(0);
    outC->Loc_PositionErrors.bg.infoFromPassing.linkedBGs[idx16].nid_bg =
      kcg_lit_int32(0);
    outC->Loc_PositionErrors.bg.infoFromPassing.linkedBGs[idx16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Loc_PositionErrors.bg.infoFromPassing.linkedBGs[idx16].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Loc_PositionErrors.bg.infoFromPassing.linkedBGs[idx16].q_locacc =
      kcg_lit_int32(0);
  }
  outC->Loc_PositionErrors.bg.missed = kcg_true;
  outC->Loc_BG_In_Expected_List_In_SH = kcg_true;
  outC->Loc_BG_In_Expected_List_In_SR = kcg_true;
  outC->Data_From_Localisation_To_Mode.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->Data_From_Localisation_To_Mode.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.outOfMemSpace = kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.passedBG_foundNotWhereExpected =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.positionCalculation_inconsistent =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.linkedBGMissed = kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.BGpassedInUnexpectedDirection =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.BG_LinkingConsistencyError =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.twoConsecutiveLinkedBGs_missed =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.doubleRepositioningError =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.valid = kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.nid_c = kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.nid_bg = kcg_lit_int32(
      0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.location.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.location.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.location.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.seqNoOnTrack =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx17].valid =
      kcg_true;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx17].nid_LRBG =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx17].q_dir =
      Q_DIR_Reverse;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx17].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx17].d_link =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx17].nid_c =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx17].nid_bg =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx17].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx17].q_locacc =
      kcg_lit_int32(0);
  }
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.missed = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.valid = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.timestamp = kcg_lit_int32(
      0);
  outC->Data_From_Localisation_To_Mode.Train_Position.trainPositionIsUnknown =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.trainPosition.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.trainPosition.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.trainPosition.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.estimatedFrontEndPosition =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.minSafeFrontEndPosition =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.maxSafeFrontEndPostion =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.valid = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.nid_c =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.nid_bg =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.q_link =
    Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.location.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.location.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.location.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.seqNoOnTrack =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx18].valid =
      kcg_true;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx18].nid_LRBG =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx18].q_dir =
      Q_DIR_Reverse;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx18].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx18].d_link =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx18].nid_c =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx18].nid_bg =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx18].q_locacc =
      kcg_lit_int32(0);
  }
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.missed = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.valid = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.nid_c =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.nid_bg =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.q_link =
    Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.location.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.location.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.location.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.seqNoOnTrack =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx19 = 0; idx19 < 33; idx19++) {
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx19].valid =
      kcg_true;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx19].nid_LRBG =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx19].q_dir =
      Q_DIR_Reverse;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx19].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx19].d_link =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx19].nid_c =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx19].nid_bg =
      kcg_lit_int32(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx19].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx19].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx19].q_locacc =
      kcg_lit_int32(0);
  }
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.missed = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.nominalOrReverseToLRBG =
    Q_DLRBG_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.trainOrientationToLRBG =
    Q_DIRLRBG_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.trainRunningDirectionToLRBG =
    Q_DIRTRAIN_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.linkingIsUsedOnboard =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.estimatedRearEndPosition =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.minSafeRearEndPosition =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.maxSafeRearEndPosition =
    kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Speed = kcg_lit_int32(0);
  outC->Data_From_Localisation_To_Mode.Train_Standstill = kcg_true;
  outC->trainPosition.valid = kcg_true;
  outC->trainPosition.timestamp = kcg_lit_int32(0);
  outC->trainPosition.trainPositionIsUnknown = kcg_true;
  outC->trainPosition.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->trainPosition.trainPosition.nominal = kcg_lit_int32(0);
  outC->trainPosition.trainPosition.d_min = kcg_lit_int32(0);
  outC->trainPosition.trainPosition.d_max = kcg_lit_int32(0);
  outC->trainPosition.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->trainPosition.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->trainPosition.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->trainPosition.LRBG.valid = kcg_true;
  outC->trainPosition.LRBG.nid_c = kcg_lit_int32(0);
  outC->trainPosition.LRBG.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.LRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.location.nominal = kcg_lit_int32(0);
  outC->trainPosition.LRBG.location.d_min = kcg_lit_int32(0);
  outC->trainPosition.LRBG.location.d_max = kcg_lit_int32(0);
  outC->trainPosition.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx20].valid = kcg_true;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx20].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx20].q_dir = Q_DIR_Reverse;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx20].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx20].d_link =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx20].nid_c =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx20].nid_bg =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx20].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx20].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx20].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPosition.LRBG.missed = kcg_true;
  outC->trainPosition.prvLRBG.valid = kcg_true;
  outC->trainPosition.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(
      0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx21].valid = kcg_true;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx21].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx21].q_dir =
      Q_DIR_Reverse;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx21].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx21].d_link =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx21].nid_c =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx21].nid_bg =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx21].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx21].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPosition.prvLRBG.missed = kcg_true;
  outC->trainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->trainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->trainPosition.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->trainPosition.linkingIsUsedOnboard = kcg_true;
  outC->trainPosition.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->trainPosition.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->trainPosition.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->train_standstill = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InputLocalisation_reset_InputManagement(
  outC_InputLocalisation_InputManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputLocalisation_InputManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

