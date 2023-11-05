/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_onTrack_itr/ */
void indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int32 iteratorIndex,
  /* prevIndex/ */
  kcg_int32 prevIndex,
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  /* BG_asElementFromBGs/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_asElementFromBGs,
  outC_indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_int32 noname;

  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L30,
    BG_asElementFromBGs);
  outC->_L31 = outC->_L30.infoFromPassing.valid;
  outC->_L51 = outC->_L30.missed;
  outC->_L52 = outC->_L51 | outC->_L31;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L28, BG);
  outC->_L48 = outC->_L28.missed;
  outC->_L29 = outC->_L28.infoFromPassing.valid;
  outC->_L47 = outC->_L48 | outC->_L29;
  outC->_L16 = prevIndex;
  noname = outC->_L16;
  outC->_L46 = cNoValidIndex_CalculateTrainPosition_Pkg;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L21, BG);
  outC->_L23 = outC->_L21.valid;
  outC->_L25 = !outC->_L23;
  outC->invalidateIndex = outC->_L25;
  outC->_L45 = outC->invalidateIndex;
  outC->_L42 = outC->_L30.location.nominal;
  outC->_L41 = outC->_L28.location.nominal;
  outC->_L43 = outC->_L41 <= outC->_L42;
  outC->_L38 = !outC->_L52;
  outC->_L40 = !outC->_L47;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L19,
    BG_asElementFromBGs);
  outC->_L26 = outC->_L19.valid;
  outC->_L39 = outC->_L23 & outC->_L26 & outC->_L40 & outC->_L38 & outC->_L43;
  outC->_L37 = outC->_L23 & outC->_L26 & outC->_L47 & outC->_L38;
  outC->_L33 = outC->_L30.seqNoOnTrack;
  outC->_L32 = outC->_L28.seqNoOnTrack;
  outC->_L34 = outC->_L32 <= outC->_L33;
  outC->_L35 = outC->_L23 & outC->_L26 & outC->_L47 & outC->_L52 & outC->_L34;
  outC->_L27 = !outC->_L26;
  outC->_L24 = outC->_L25 | outC->_L27 | outC->_L35 | outC->_L37 | outC->_L39;
  outC->stopIteration = outC->_L24;
  outC->_L44 = outC->stopIteration;
  outC->_L18 = iteratorIndex;
  /* _L11= */
  if (outC->_L44) {
    outC->_L11 = outC->_L18;
  }
  else {
    outC->_L11 = outC->_L46;
  }
  outC->_L10 = cNoValidIndex_CalculateTrainPosition_Pkg;
  outC->_L8 = !outC->_L44;
  /* _L7= */
  if (outC->_L45) {
    outC->_L7 = outC->_L10;
  }
  else {
    outC->_L7 = outC->_L11;
  }
  outC->indexOfBG = outC->_L7;
  outC->cont = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void indexOfBG_onTrack_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L51 = kcg_true;
  outC->_L52 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_lit_int32(0);
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_lit_int32(0);
  outC->_L41 = kcg_lit_int32(0);
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32 = kcg_lit_int32(0);
  outC->_L31 = kcg_true;
  outC->_L30.valid = kcg_true;
  outC->_L30.nid_c = kcg_lit_int32(0);
  outC->_L30.nid_bg = kcg_lit_int32(0);
  outC->_L30.q_link = Q_LINK_Unlinked;
  outC->_L30.location.nominal = kcg_lit_int32(0);
  outC->_L30.location.d_min = kcg_lit_int32(0);
  outC->_L30.location.d_max = kcg_lit_int32(0);
  outC->_L30.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.valid = kcg_true;
  outC->_L30.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L30.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L30.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L30.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L30.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L30.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L30.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L30.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L30.infoFromPassing.valid = kcg_true;
  outC->_L30.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L30.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L30.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L30.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L30.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L30.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L30.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L30.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L30.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L30.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L30.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L30.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L30.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L30.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L30.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L30.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L30.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L30.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L30.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L30.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L30.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L30.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L30.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L30.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L30.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L30.missed = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28.valid = kcg_true;
  outC->_L28.nid_c = kcg_lit_int32(0);
  outC->_L28.nid_bg = kcg_lit_int32(0);
  outC->_L28.q_link = Q_LINK_Unlinked;
  outC->_L28.location.nominal = kcg_lit_int32(0);
  outC->_L28.location.d_min = kcg_lit_int32(0);
  outC->_L28.location.d_max = kcg_lit_int32(0);
  outC->_L28.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.valid = kcg_true;
  outC->_L28.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L28.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L28.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L28.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L28.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L28.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L28.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.valid = kcg_true;
  outC->_L28.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L28.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L28.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L28.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L28.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L28.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L28.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L28.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L28.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L28.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L28.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L28.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L28.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L28.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L28.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L28.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L28.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L28.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L28.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L28.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L28.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L28.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L28.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L28.missed = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L19.valid = kcg_true;
  outC->_L19.nid_c = kcg_lit_int32(0);
  outC->_L19.nid_bg = kcg_lit_int32(0);
  outC->_L19.q_link = Q_LINK_Unlinked;
  outC->_L19.location.nominal = kcg_lit_int32(0);
  outC->_L19.location.d_min = kcg_lit_int32(0);
  outC->_L19.location.d_max = kcg_lit_int32(0);
  outC->_L19.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.valid = kcg_true;
  outC->_L19.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L19.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L19.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L19.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L19.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L19.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.valid = kcg_true;
  outC->_L19.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L19.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L19.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L19.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L19.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L19.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L19.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L19.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L19.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L19.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L19.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L19.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L19.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L19.missed = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.nid_c = kcg_lit_int32(0);
  outC->_L21.nid_bg = kcg_lit_int32(0);
  outC->_L21.q_link = Q_LINK_Unlinked;
  outC->_L21.location.nominal = kcg_lit_int32(0);
  outC->_L21.location.d_min = kcg_lit_int32(0);
  outC->_L21.location.d_max = kcg_lit_int32(0);
  outC->_L21.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.valid = kcg_true;
  outC->_L21.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L21.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L21.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L21.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L21.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L21.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L21.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.valid = kcg_true;
  outC->_L21.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L21.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L21.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L21.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L21.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L21.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L21.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L21.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L21.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L21.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L21.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L21.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L21.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L21.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L21.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L21.missed = kcg_true;
  outC->_L18 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  outC->invalidateIndex = kcg_true;
  outC->stopIteration = kcg_true;
  outC->indexOfBG = kcg_lit_int32(0);
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void indexOfBG_onTrack_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOfBG_onTrack_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

