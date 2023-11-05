/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Get_Position_of_LRBG_TA_Lib_internal.h"

/* TA_Lib_internal::Get_Position_of_LRBG/ */
void Get_Position_of_LRBG_TA_Lib_internal(
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* balisegroups/ */
  positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_Get_Position_of_LRBG_TA_Lib_internal *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L7, MessageIn);
  /* _L9=(TA_Lib_internal::Eval_LRBG#1)/ */
  Eval_LRBG_TA_Lib_internal(&outC->_L7, &outC->Context_Eval_LRBG_1);
  outC->_L9 = outC->Context_Eval_LRBG_1.valid;
  outC->_L6 = outC->Context_Eval_LRBG_1.C;
  outC->_L5 = outC->Context_Eval_LRBG_1.BG;
  outC->_L10 = DEFAULT_q_link_TA_Lib_internal;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L11,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &DEFAULT_location_TA_Lib_internal);
  outC->_L12 = kcg_lit_int32(0);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L14,
    (infoFromLinking_T_TrainPosition_Types_Pck *)
      &DEFAULT_InfoFromLinking_TA_Lib_internal);
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &outC->_L15,
    (passedBG_T_BG_Types_Pkg *) &DEFAULT_InfoFromPassing_TA_Lib_internal);
  outC->_L13 = kcg_false;
  outC->_L8.valid = outC->_L9;
  outC->_L8.nid_c = outC->_L6;
  outC->_L8.nid_bg = outC->_L5;
  outC->_L8.q_link = outC->_L10;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L8.location, &outC->_L11);
  outC->_L8.seqNoOnTrack = outC->_L12;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L8.infoFromLinking,
    &outC->_L14);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L8.infoFromPassing, &outC->_L15);
  outC->_L8.missed = outC->_L13;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L4, balisegroups);
  outC->_L16 = kcg_true;
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L8,
    &outC->_L4,
    outC->_L16,
    &outC->Context_indexOfBG_by_id_1);
  outC->_L1 = outC->Context_indexOfBG_by_id_1.indexOfBG;
  outC->_L2 = outC->Context_indexOfBG_by_id_1.BG_found;
  outC->_L3 = outC->Context_indexOfBG_by_id_1.indexValid;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L18, balisegroups);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L17,
      &outC->_L18[outC->_L1]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L17,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &DEFAULT_positioned_BG_TA_Lib_internal);
  }
  outC->_L19 = outC->_L17.location.nominal;
  outC->Position = outC->_L19;
  _1_noname = outC->_L3;
  noname = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void Get_Position_of_LRBG_init_TA_Lib_internal(
  outC_Get_Position_of_LRBG_TA_Lib_internal *outC)
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

  outC->_L19 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L18[idx1].valid = kcg_true;
    outC->_L18[idx1].nid_c = kcg_lit_int32(0);
    outC->_L18[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L18[idx1].q_link = Q_LINK_Unlinked;
    outC->_L18[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L18[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L18[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L18[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.valid = kcg_true;
    outC->_L18[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L18[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L18[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L18[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L18[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.valid = kcg_true;
    outC->_L18[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L18[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L18[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L18[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L18[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L18[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L18[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L18[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L18[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L18[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L18[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L18[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L18[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L18[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L18[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L18[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L18[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L18[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L18[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L18[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L18[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L18[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L18[idx1].missed = kcg_true;
  }
  outC->_L17.valid = kcg_true;
  outC->_L17.nid_c = kcg_lit_int32(0);
  outC->_L17.nid_bg = kcg_lit_int32(0);
  outC->_L17.q_link = Q_LINK_Unlinked;
  outC->_L17.location.nominal = kcg_lit_int32(0);
  outC->_L17.location.d_min = kcg_lit_int32(0);
  outC->_L17.location.d_max = kcg_lit_int32(0);
  outC->_L17.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.valid = kcg_true;
  outC->_L17.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L17.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L17.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L17.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L17.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L17.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.valid = kcg_true;
  outC->_L17.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L17.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L17.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L17.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L17.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L17.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L17.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L17.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L17.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L17.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L17.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L17.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L17.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L17.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L17.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L17.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L17.missed = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15.valid = kcg_true;
  outC->_L15.BG_Header.valid = kcg_true;
  outC->_L15.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L15.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L15.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L15.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L15.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L15.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L15.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L15.BG_Header.bgPosition.valid = kcg_true;
  outC->_L15.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L15.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L15.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L15.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L15.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L15.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L15.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L15.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L15.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L15.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L15.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L15.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L15.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L15.linkedBGs[idx3].valid = kcg_true;
    outC->_L15.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L15.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L15.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L15.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L15.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L15.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L15.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15.linkedBGs[idx3].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L15.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L14.valid = kcg_true;
  outC->_L14.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L14.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L14.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L14.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L14.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L14.d_link.nominal = kcg_lit_int32(0);
  outC->_L14.d_link.d_min = kcg_lit_int32(0);
  outC->_L14.d_link.d_max = kcg_lit_int32(0);
  outC->_L14.linkingInfo.valid = kcg_true;
  outC->_L14.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L14.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L14.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L14.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L14.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L14.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L14.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L14.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L14.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11.nominal = kcg_lit_int32(0);
  outC->_L11.d_min = kcg_lit_int32(0);
  outC->_L11.d_max = kcg_lit_int32(0);
  outC->_L10 = Q_LINK_Unlinked;
  outC->_L9 = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.nid_c = kcg_lit_int32(0);
  outC->_L8.nid_bg = kcg_lit_int32(0);
  outC->_L8.q_link = Q_LINK_Unlinked;
  outC->_L8.location.nominal = kcg_lit_int32(0);
  outC->_L8.location.d_min = kcg_lit_int32(0);
  outC->_L8.location.d_max = kcg_lit_int32(0);
  outC->_L8.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.valid = kcg_true;
  outC->_L8.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L8.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L8.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L8.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L8.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L8.missed = kcg_true;
  outC->_L7.valid = kcg_true;
  outC->_L7.source = msrc_undefined_Common_Types_Pkg;
  outC->_L7.radioMetadata.t_train_reference = kcg_true;
  outC->_L7.radioMetadata.nid_em = kcg_true;
  outC->_L7.radioMetadata.q_scale = kcg_true;
  outC->_L7.radioMetadata.d_sr = kcg_true;
  outC->_L7.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L7.radioMetadata.d_ref = kcg_true;
  outC->_L7.radioMetadata.q_dir = kcg_true;
  outC->_L7.radioMetadata.d_emergencystop = kcg_true;
  outC->_L7.radioMetadata.m_version = kcg_true;
  outC->_L7.BG_Common_Header.valid = kcg_true;
  outC->_L7.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L7.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L7.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L7.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L7.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L7.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L7.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L7.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L7.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L7.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L7.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L7.packets.PacketHeaders[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L7.packets.PacketHeaders[idx5].valid = kcg_true;
    outC->_L7.packets.PacketHeaders[idx5].startAddress = kcg_lit_int32(0);
    outC->_L7.packets.PacketHeaders[idx5].endAddress = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L7.packets.PacketData[idx6] = kcg_lit_int32(0);
  }
  outC->_L7.sendingRBC.valid = kcg_true;
  outC->_L7.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L7.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L7.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 41; idx8++) {
    outC->_L4[idx8].valid = kcg_true;
    outC->_L4[idx8].nid_c = kcg_lit_int32(0);
    outC->_L4[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L4[idx8].q_link = Q_LINK_Unlinked;
    outC->_L4[idx8].location.nominal = kcg_lit_int32(0);
    outC->_L4[idx8].location.d_min = kcg_lit_int32(0);
    outC->_L4[idx8].location.d_max = kcg_lit_int32(0);
    outC->_L4[idx8].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.valid = kcg_true;
    outC->_L4[idx8].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L4[idx8].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L4[idx8].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L4[idx8].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4[idx8].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4[idx8].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4[idx8].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.valid = kcg_true;
    outC->_L4[idx8].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L4[idx8].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L4[idx8].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4[idx8].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L4[idx8].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L4[idx8].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L4[idx8].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L4[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L4[idx8].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L4[idx8].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L4[idx8].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx7 = 0; idx7 < 33; idx7++) {
      outC->_L4[idx8].infoFromPassing.linkedBGs[idx7].valid = kcg_true;
      outC->_L4[idx8].infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
      outC->_L4[idx8].infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
      outC->_L4[idx8].infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
      outC->_L4[idx8].infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
      outC->_L4[idx8].infoFromPassing.linkedBGs[idx7].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L4[idx8].infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
      outC->_L4[idx8].infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
      outC->_L4[idx8].infoFromPassing.linkedBGs[idx7].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L4[idx8].infoFromPassing.linkedBGs[idx7].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L4[idx8].infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
    }
    outC->_L4[idx8].missed = kcg_true;
  }
  outC->_L1 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->Position = kcg_lit_int32(0);
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
  /* _L9=(TA_Lib_internal::Eval_LRBG#1)/ */
  Eval_LRBG_init_TA_Lib_internal(&outC->Context_Eval_LRBG_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Get_Position_of_LRBG_reset_TA_Lib_internal(
  outC_Get_Position_of_LRBG_TA_Lib_internal *outC)
{
  /* _L1=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
  /* _L9=(TA_Lib_internal::Eval_LRBG#1)/ */
  Eval_LRBG_reset_TA_Lib_internal(&outC->Context_Eval_LRBG_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Get_Position_of_LRBG_TA_Lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

