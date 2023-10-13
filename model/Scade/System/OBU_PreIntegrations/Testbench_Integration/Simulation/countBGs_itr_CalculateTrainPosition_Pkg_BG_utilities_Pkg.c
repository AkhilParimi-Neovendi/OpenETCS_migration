/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr/ */
void countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* counters_in/ */
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *counters_in,
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L12 = Q_LINK_Linked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, BG_in);
  outC->_L11 = outC->_L1.q_link;
  outC->_L13 = outC->_L11 == outC->_L12;
  outC->_L15 = !outC->_L13;
  outC->_L2 = outC->_L1.valid;
  outC->_L48 = outC->_L2 & outC->_L15;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L44, BG_in);
  outC->_L43 = outC->_L44.infoFromPassing.valid;
  outC->_L47 = outC->_L2 & outC->_L43;
  outC->_L14 = outC->_L2 & outC->_L13;
  outC->_L46 = outC->_L14 & outC->_L43;
  outC->_L45 = outC->_L48 & outC->_L43;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L10,
    counters_in);
  outC->_L7 = outC->_L10.passedTotalBGsCount;
  outC->_L37 = kcg_lit_int64(1);
  outC->_L36 = outC->_L37 + outC->_L7;
  /* _L42= */
  if (outC->_L47) {
    outC->_L42 = outC->_L36;
  }
  else {
    outC->_L42 = outC->_L7;
  }
  outC->_L31 = outC->_L10.passedLinkedBGsCount;
  outC->_L35 = kcg_lit_int64(1);
  outC->_L34 = outC->_L35 + outC->_L31;
  /* _L41= */
  if (outC->_L46) {
    outC->_L41 = outC->_L34;
  }
  else {
    outC->_L41 = outC->_L31;
  }
  outC->_L8 = outC->_L10.passedUnlinkedBGsCount;
  outC->_L33 = kcg_lit_int64(1);
  outC->_L32 = outC->_L33 + outC->_L8;
  /* _L40= */
  if (outC->_L45) {
    outC->_L40 = outC->_L32;
  }
  else {
    outC->_L40 = outC->_L8;
  }
  outC->_L25 = kcg_lit_int64(1);
  outC->_L30 = outC->_L10.totalBGsCount;
  outC->_L23 = outC->_L25 + outC->_L30;
  /* _L24= */
  if (outC->_L2) {
    outC->_L24 = outC->_L23;
  }
  else {
    outC->_L24 = outC->_L30;
  }
  outC->_L29 = outC->_L10.linkedBGsCount;
  outC->_L20 = kcg_lit_int64(1);
  outC->_L21 = outC->_L20 + outC->_L29;
  /* _L22= */
  if (outC->_L14) {
    outC->_L22 = outC->_L21;
  }
  else {
    outC->_L22 = outC->_L29;
  }
  outC->_L19 = kcg_lit_int64(1);
  outC->_L6 = outC->_L10.unlinkedBGsCount;
  outC->_L18 = outC->_L19 + outC->_L6;
  /* _L17= */
  if (outC->_L48) {
    outC->_L17 = outC->_L18;
  }
  else {
    outC->_L17 = outC->_L6;
  }
  outC->_L9.unlinkedBGsCount = outC->_L17;
  outC->_L9.linkedBGsCount = outC->_L22;
  outC->_L9.totalBGsCount = outC->_L24;
  outC->_L9.passedUnlinkedBGsCount = outC->_L40;
  outC->_L9.passedLinkedBGsCount = outC->_L41;
  outC->_L9.passedTotalBGsCount = outC->_L42;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->counters_out,
    &outC->_L9);
  outC->cont = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void countBGs_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L44.valid = kcg_true;
  outC->_L44.nid_c = kcg_lit_int64(0);
  outC->_L44.nid_bg = kcg_lit_int64(0);
  outC->_L44.q_link = Q_LINK_Unlinked;
  outC->_L44.location.nominal = kcg_lit_int64(0);
  outC->_L44.location.d_min = kcg_lit_int64(0);
  outC->_L44.location.d_max = kcg_lit_int64(0);
  outC->_L44.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.valid = kcg_true;
  outC->_L44.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L44.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L44.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L44.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L44.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L44.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L44.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L44.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L44.infoFromPassing.valid = kcg_true;
  outC->_L44.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L44.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L44.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L44.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L44.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L44.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L44.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L44.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L44.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L44.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L44.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L44.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L44.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L44.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L44.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L44.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L44.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L44.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L44.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L44.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L44.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L44.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L44.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L44.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L44.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L44.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L44.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L44.missed = kcg_true;
  outC->_L42 = kcg_lit_int64(0);
  outC->_L41 = kcg_lit_int64(0);
  outC->_L40 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L34 = kcg_lit_int64(0);
  outC->_L35 = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_int64(0);
  outC->_L31 = kcg_lit_int64(0);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = Q_LINK_Unlinked;
  outC->_L11 = Q_LINK_Unlinked;
  outC->_L10.unlinkedBGsCount = kcg_lit_int64(0);
  outC->_L10.linkedBGsCount = kcg_lit_int64(0);
  outC->_L10.totalBGsCount = kcg_lit_int64(0);
  outC->_L10.passedUnlinkedBGsCount = kcg_lit_int64(0);
  outC->_L10.passedLinkedBGsCount = kcg_lit_int64(0);
  outC->_L10.passedTotalBGsCount = kcg_lit_int64(0);
  outC->_L9.unlinkedBGsCount = kcg_lit_int64(0);
  outC->_L9.linkedBGsCount = kcg_lit_int64(0);
  outC->_L9.totalBGsCount = kcg_lit_int64(0);
  outC->_L9.passedUnlinkedBGsCount = kcg_lit_int64(0);
  outC->_L9.passedLinkedBGsCount = kcg_lit_int64(0);
  outC->_L9.passedTotalBGsCount = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_c = kcg_lit_int64(0);
  outC->_L1.nid_bg = kcg_lit_int64(0);
  outC->_L1.q_link = Q_LINK_Unlinked;
  outC->_L1.location.nominal = kcg_lit_int64(0);
  outC->_L1.location.d_min = kcg_lit_int64(0);
  outC->_L1.location.d_max = kcg_lit_int64(0);
  outC->_L1.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.valid = kcg_true;
  outC->_L1.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L1.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L1.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L1.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L1.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L1.missed = kcg_true;
  outC->counters_out.unlinkedBGsCount = kcg_lit_int64(0);
  outC->counters_out.linkedBGsCount = kcg_lit_int64(0);
  outC->counters_out.totalBGsCount = kcg_lit_int64(0);
  outC->counters_out.passedUnlinkedBGsCount = kcg_lit_int64(0);
  outC->counters_out.passedLinkedBGsCount = kcg_lit_int64(0);
  outC->counters_out.passedTotalBGsCount = kcg_lit_int64(0);
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void countBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

