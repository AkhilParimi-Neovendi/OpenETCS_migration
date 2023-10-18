/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::posInRangeOfBG_itr/ */
void posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int64 iteratorIndex,
  /* prevIndex/ */
  kcg_int64 prevIndex,
  /* position/ */
  LocWithInAcc_T_Obu_BasicTypes_Pkg *position,
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  outC_posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static LocWithInAcc_T_Obu_BasicTypes_Pkg noname;

  outC->_L45 = kcg_lit_int64(0);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L33, position);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L34, BG);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L35, &outC->_L34.location);
  /* _L40=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L33,
    &outC->_L35,
    &outC->Context_sub_2_distances_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L40,
    &outC->Context_sub_2_distances_1.distance);
  outC->_L42 = outC->_L40.d_max;
  outC->_L41 = outC->_L40.nominal;
  outC->_L43 = outC->_L41 + outC->_L42;
  outC->_L44 = outC->_L43 < outC->_L45;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L4, BG);
  outC->_L19 = outC->_L4.valid;
  outC->_L50 = outC->_L19 & outC->_L44;
  /* _L36=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L33,
    &outC->_L35,
    &outC->Context_overlapOf_2_Locations_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L36,
    &outC->Context_overlapOf_2_Locations_1.loc);
  outC->_L37 = outC->Context_overlapOf_2_Locations_1.overlap;
  outC->_L49 = outC->_L19 & outC->_L37;
  outC->inRange = outC->_L49;
  outC->_L48 = outC->inRange;
  outC->BG_isAhead = outC->_L50;
  outC->_L46 = outC->BG_isAhead;
  outC->_L47 = outC->_L46 | outC->_L48;
  outC->_L39 = !outC->_L47;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&noname, &outC->_L36);
  outC->_L29 = prevIndex;
  outC->_L28 = iteratorIndex;
  /* _L27= */
  if (outC->_L48) {
    outC->_L27 = outC->_L28;
  }
  else {
    outC->_L27 = outC->_L29;
  }
  outC->_L25 = outC->_L19 & outC->_L39;
  outC->indexOfBG = outC->_L27;
  outC->cont = outC->_L25;
}

#ifndef KCG_USER_DEFINED_INIT
void posInRangeOfBG_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L50 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_lit_int64(0);
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_lit_int64(0);
  outC->_L42 = kcg_lit_int64(0);
  outC->_L41 = kcg_lit_int64(0);
  outC->_L40.nominal = kcg_lit_int64(0);
  outC->_L40.d_min = kcg_lit_int64(0);
  outC->_L40.d_max = kcg_lit_int64(0);
  outC->_L39 = kcg_true;
  outC->_L36.nominal = kcg_lit_int64(0);
  outC->_L36.d_min = kcg_lit_int64(0);
  outC->_L36.d_max = kcg_lit_int64(0);
  outC->_L37 = kcg_true;
  outC->_L35.nominal = kcg_lit_int64(0);
  outC->_L35.d_min = kcg_lit_int64(0);
  outC->_L35.d_max = kcg_lit_int64(0);
  outC->_L34.valid = kcg_true;
  outC->_L34.nid_c = kcg_lit_int64(0);
  outC->_L34.nid_bg = kcg_lit_int64(0);
  outC->_L34.q_link = Q_LINK_Unlinked;
  outC->_L34.location.nominal = kcg_lit_int64(0);
  outC->_L34.location.d_min = kcg_lit_int64(0);
  outC->_L34.location.d_max = kcg_lit_int64(0);
  outC->_L34.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.valid = kcg_true;
  outC->_L34.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L34.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L34.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L34.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L34.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L34.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L34.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L34.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L34.infoFromPassing.valid = kcg_true;
  outC->_L34.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L34.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L34.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L34.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L34.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L34.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L34.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L34.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L34.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L34.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L34.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L34.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L34.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L34.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L34.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L34.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L34.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L34.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L34.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L34.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L34.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L34.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L34.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L34.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L34.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L34.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L34.missed = kcg_true;
  outC->_L33.nominal = kcg_lit_int64(0);
  outC->_L33.d_min = kcg_lit_int64(0);
  outC->_L33.d_max = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L25 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.nid_c = kcg_lit_int64(0);
  outC->_L4.nid_bg = kcg_lit_int64(0);
  outC->_L4.q_link = Q_LINK_Unlinked;
  outC->_L4.location.nominal = kcg_lit_int64(0);
  outC->_L4.location.d_min = kcg_lit_int64(0);
  outC->_L4.location.d_max = kcg_lit_int64(0);
  outC->_L4.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.valid = kcg_true;
  outC->_L4.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L4.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L4.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L4.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L4.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L4.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L4.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L4.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L4.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L4.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L4.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L4.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L4.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L4.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L4.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L4.missed = kcg_true;
  outC->BG_isAhead = kcg_true;
  outC->inRange = kcg_true;
  outC->indexOfBG = kcg_lit_int64(0);
  outC->cont = kcg_true;
  /* _L36=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L40=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void posInRangeOfBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* _L36=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L40=(BasicLocationFunctions_Pkg::sub_2_distances#1)/ */
  sub_2_distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** posInRangeOfBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

