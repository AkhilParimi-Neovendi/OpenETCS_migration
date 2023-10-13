/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex/ */
void deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* indexOfBG/ */
  kcg_int64 indexOfBG,
  /* del/ */
  kcg_bool del,
  outC_deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_int64 noname;

  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L18, BGs_in);
  outC->_L3 = indexOfBG;
  /* _L9/ */
  for (idx = 0; idx < 41; idx++) {
    outC->_L9[idx] = outC->_L3;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L11,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* _L12/ */
  for (idx1 = 0; idx1 < 1; idx1++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L12[idx1], &outC->_L11);
  }
  kcg_copy__40_array(&outC->_L10, (_40_array *) &outC->_L2[1]);
  kcg_copy__40_array(&outC->_L13[0], &outC->_L10);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L13[40],
    &outC->_L12[0]);
  outC->_L7 = cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  outC->_L6 = outC->_L3 < outC->_L7;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = outC->_L3 >= outC->_L5;
  outC->_L1 = del;
  outC->_L8 = outC->_L1 & outC->_L4 & outC->_L6;
  /* _L16= */
  if (outC->_L8) {
    /* _L16= */
    for (idx2 = 0; idx2 < 41; idx2++) {
      /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr#1)/ */
      deleteBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        /* _L16= */(kcg_int64) idx2,
        outC->_L9[idx2],
        &outC->_L2[idx2],
        &outC->_L13[idx2],
        &outC->Context_deleteBG_atIndex_itr_1[idx2]);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L15[idx2],
        &outC->Context_deleteBG_atIndex_itr_1[idx2].BG_out);
      outC->_L16 = /* _L16= */(kcg_int64) (idx2 + 1);
      /* _L16= */
      if (!outC->Context_deleteBG_atIndex_itr_1[idx2].cont) {
        break;
      }
    }
  }
  else {
    outC->_L16 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L16= */
  for (idx2 = /* _L16= */(kcg_size) outC->_L16; idx2 < 41; idx2++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L15[idx2],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */

  /* _L17= */
  if (outC->_L8) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L17, &outC->_L15);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L17, &outC->_L18);
  }
  noname = outC->_L16;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void deleteBG_atIndex_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
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

  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L18[idx2].valid = kcg_true;
    outC->_L18[idx2].nid_c = kcg_lit_int64(0);
    outC->_L18[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L18[idx2].q_link = Q_LINK_Unlinked;
    outC->_L18[idx2].location.nominal = kcg_lit_int64(0);
    outC->_L18[idx2].location.d_min = kcg_lit_int64(0);
    outC->_L18[idx2].location.d_max = kcg_lit_int64(0);
    outC->_L18[idx2].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.valid = kcg_true;
    outC->_L18[idx2].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L18[idx2].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L18[idx2].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18[idx2].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L18[idx2].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.valid = kcg_true;
    outC->_L18[idx2].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L18[idx2].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L18[idx2].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L18[idx2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L18[idx2].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L18[idx2].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L18[idx2].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L18[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L18[idx2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L18[idx2].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L18[idx2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx1 = 0; idx1 < 33; idx1++) {
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].valid = kcg_true;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L18[idx2].infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
    }
    outC->_L18[idx2].missed = kcg_true;
  }
  for (idx4 = 0; idx4 < 41; idx4++) {
    outC->_L17[idx4].valid = kcg_true;
    outC->_L17[idx4].nid_c = kcg_lit_int64(0);
    outC->_L17[idx4].nid_bg = kcg_lit_int64(0);
    outC->_L17[idx4].q_link = Q_LINK_Unlinked;
    outC->_L17[idx4].location.nominal = kcg_lit_int64(0);
    outC->_L17[idx4].location.d_min = kcg_lit_int64(0);
    outC->_L17[idx4].location.d_max = kcg_lit_int64(0);
    outC->_L17[idx4].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.valid = kcg_true;
    outC->_L17[idx4].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L17[idx4].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L17[idx4].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L17[idx4].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L17[idx4].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L17[idx4].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L17[idx4].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.valid = kcg_true;
    outC->_L17[idx4].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L17[idx4].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L17[idx4].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L17[idx4].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L17[idx4].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L17[idx4].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L17[idx4].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L17[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L17[idx4].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L17[idx4].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L17[idx4].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx3 = 0; idx3 < 33; idx3++) {
      outC->_L17[idx4].infoFromPassing.linkedBGs[idx3].valid = kcg_true;
      outC->_L17[idx4].infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
      outC->_L17[idx4].infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
      outC->_L17[idx4].infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
      outC->_L17[idx4].infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
      outC->_L17[idx4].infoFromPassing.linkedBGs[idx3].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L17[idx4].infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
      outC->_L17[idx4].infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
      outC->_L17[idx4].infoFromPassing.linkedBGs[idx3].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L17[idx4].infoFromPassing.linkedBGs[idx3].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L17[idx4].infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
    }
    outC->_L17[idx4].missed = kcg_true;
  }
  outC->_L16 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 41; idx6++) {
    outC->_L15[idx6].valid = kcg_true;
    outC->_L15[idx6].nid_c = kcg_lit_int64(0);
    outC->_L15[idx6].nid_bg = kcg_lit_int64(0);
    outC->_L15[idx6].q_link = Q_LINK_Unlinked;
    outC->_L15[idx6].location.nominal = kcg_lit_int64(0);
    outC->_L15[idx6].location.d_min = kcg_lit_int64(0);
    outC->_L15[idx6].location.d_max = kcg_lit_int64(0);
    outC->_L15[idx6].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.valid = kcg_true;
    outC->_L15[idx6].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L15[idx6].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L15[idx6].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L15[idx6].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15[idx6].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15[idx6].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15[idx6].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.valid = kcg_true;
    outC->_L15[idx6].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L15[idx6].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L15[idx6].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L15[idx6].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L15[idx6].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L15[idx6].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L15[idx6].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L15[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L15[idx6].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L15[idx6].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L15[idx6].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx5 = 0; idx5 < 33; idx5++) {
      outC->_L15[idx6].infoFromPassing.linkedBGs[idx5].valid = kcg_true;
      outC->_L15[idx6].infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int64(0);
      outC->_L15[idx6].infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
      outC->_L15[idx6].infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
      outC->_L15[idx6].infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int64(0);
      outC->_L15[idx6].infoFromPassing.linkedBGs[idx5].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L15[idx6].infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int64(0);
      outC->_L15[idx6].infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int64(0);
      outC->_L15[idx6].infoFromPassing.linkedBGs[idx5].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L15[idx6].infoFromPassing.linkedBGs[idx5].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L15[idx6].infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int64(0);
    }
    outC->_L15[idx6].missed = kcg_true;
  }
  for (idx8 = 0; idx8 < 41; idx8++) {
    outC->_L13[idx8].valid = kcg_true;
    outC->_L13[idx8].nid_c = kcg_lit_int64(0);
    outC->_L13[idx8].nid_bg = kcg_lit_int64(0);
    outC->_L13[idx8].q_link = Q_LINK_Unlinked;
    outC->_L13[idx8].location.nominal = kcg_lit_int64(0);
    outC->_L13[idx8].location.d_min = kcg_lit_int64(0);
    outC->_L13[idx8].location.d_max = kcg_lit_int64(0);
    outC->_L13[idx8].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.valid = kcg_true;
    outC->_L13[idx8].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L13[idx8].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L13[idx8].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L13[idx8].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L13[idx8].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L13[idx8].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L13[idx8].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.valid = kcg_true;
    outC->_L13[idx8].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L13[idx8].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L13[idx8].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L13[idx8].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L13[idx8].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L13[idx8].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L13[idx8].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L13[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L13[idx8].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L13[idx8].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L13[idx8].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx7 = 0; idx7 < 33; idx7++) {
      outC->_L13[idx8].infoFromPassing.linkedBGs[idx7].valid = kcg_true;
      outC->_L13[idx8].infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int64(0);
      outC->_L13[idx8].infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
      outC->_L13[idx8].infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
      outC->_L13[idx8].infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int64(0);
      outC->_L13[idx8].infoFromPassing.linkedBGs[idx7].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L13[idx8].infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int64(0);
      outC->_L13[idx8].infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int64(0);
      outC->_L13[idx8].infoFromPassing.linkedBGs[idx7].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L13[idx8].infoFromPassing.linkedBGs[idx7].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L13[idx8].infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int64(0);
    }
    outC->_L13[idx8].missed = kcg_true;
  }
  for (idx10 = 0; idx10 < 1; idx10++) {
    outC->_L12[idx10].valid = kcg_true;
    outC->_L12[idx10].nid_c = kcg_lit_int64(0);
    outC->_L12[idx10].nid_bg = kcg_lit_int64(0);
    outC->_L12[idx10].q_link = Q_LINK_Unlinked;
    outC->_L12[idx10].location.nominal = kcg_lit_int64(0);
    outC->_L12[idx10].location.d_min = kcg_lit_int64(0);
    outC->_L12[idx10].location.d_max = kcg_lit_int64(0);
    outC->_L12[idx10].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.valid = kcg_true;
    outC->_L12[idx10].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L12[idx10].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L12[idx10].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L12[idx10].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12[idx10].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12[idx10].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12[idx10].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.valid = kcg_true;
    outC->_L12[idx10].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L12[idx10].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L12[idx10].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L12[idx10].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L12[idx10].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L12[idx10].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L12[idx10].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L12[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L12[idx10].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L12[idx10].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L12[idx10].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx9 = 0; idx9 < 33; idx9++) {
      outC->_L12[idx10].infoFromPassing.linkedBGs[idx9].valid = kcg_true;
      outC->_L12[idx10].infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int64(0);
      outC->_L12[idx10].infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
      outC->_L12[idx10].infoFromPassing.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
      outC->_L12[idx10].infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int64(0);
      outC->_L12[idx10].infoFromPassing.linkedBGs[idx9].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L12[idx10].infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int64(0);
      outC->_L12[idx10].infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int64(0);
      outC->_L12[idx10].infoFromPassing.linkedBGs[idx9].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L12[idx10].infoFromPassing.linkedBGs[idx9].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L12[idx10].infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int64(0);
    }
    outC->_L12[idx10].missed = kcg_true;
  }
  outC->_L11.valid = kcg_true;
  outC->_L11.nid_c = kcg_lit_int64(0);
  outC->_L11.nid_bg = kcg_lit_int64(0);
  outC->_L11.q_link = Q_LINK_Unlinked;
  outC->_L11.location.nominal = kcg_lit_int64(0);
  outC->_L11.location.d_min = kcg_lit_int64(0);
  outC->_L11.location.d_max = kcg_lit_int64(0);
  outC->_L11.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.valid = kcg_true;
  outC->_L11.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L11.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L11.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L11.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L11.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L11.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L11.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L11.infoFromPassing.valid = kcg_true;
  outC->_L11.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L11.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L11.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L11.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L11.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L11.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L11.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L11.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L11.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L11.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L11.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L11.infoFromPassing.linkedBGs[idx11].nid_LRBG = kcg_lit_int64(0);
    outC->_L11.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
    outC->_L11.infoFromPassing.linkedBGs[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L11.infoFromPassing.linkedBGs[idx11].d_link = kcg_lit_int64(0);
    outC->_L11.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11.infoFromPassing.linkedBGs[idx11].nid_c = kcg_lit_int64(0);
    outC->_L11.infoFromPassing.linkedBGs[idx11].nid_bg = kcg_lit_int64(0);
    outC->_L11.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L11.infoFromPassing.linkedBGs[idx11].q_locacc = kcg_lit_int64(0);
  }
  outC->_L11.missed = kcg_true;
  for (idx13 = 0; idx13 < 40; idx13++) {
    outC->_L10[idx13].valid = kcg_true;
    outC->_L10[idx13].nid_c = kcg_lit_int64(0);
    outC->_L10[idx13].nid_bg = kcg_lit_int64(0);
    outC->_L10[idx13].q_link = Q_LINK_Unlinked;
    outC->_L10[idx13].location.nominal = kcg_lit_int64(0);
    outC->_L10[idx13].location.d_min = kcg_lit_int64(0);
    outC->_L10[idx13].location.d_max = kcg_lit_int64(0);
    outC->_L10[idx13].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.valid = kcg_true;
    outC->_L10[idx13].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L10[idx13].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L10[idx13].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L10[idx13].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L10[idx13].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L10[idx13].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L10[idx13].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.valid = kcg_true;
    outC->_L10[idx13].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L10[idx13].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L10[idx13].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L10[idx13].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L10[idx13].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L10[idx13].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L10[idx13].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L10[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L10[idx13].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L10[idx13].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L10[idx13].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx12 = 0; idx12 < 33; idx12++) {
      outC->_L10[idx13].infoFromPassing.linkedBGs[idx12].valid = kcg_true;
      outC->_L10[idx13].infoFromPassing.linkedBGs[idx12].nid_LRBG = kcg_lit_int64(0);
      outC->_L10[idx13].infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
      outC->_L10[idx13].infoFromPassing.linkedBGs[idx12].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L10[idx13].infoFromPassing.linkedBGs[idx12].d_link = kcg_lit_int64(0);
      outC->_L10[idx13].infoFromPassing.linkedBGs[idx12].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L10[idx13].infoFromPassing.linkedBGs[idx12].nid_c = kcg_lit_int64(0);
      outC->_L10[idx13].infoFromPassing.linkedBGs[idx12].nid_bg = kcg_lit_int64(0);
      outC->_L10[idx13].infoFromPassing.linkedBGs[idx12].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L10[idx13].infoFromPassing.linkedBGs[idx12].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L10[idx13].infoFromPassing.linkedBGs[idx12].q_locacc = kcg_lit_int64(0);
    }
    outC->_L10[idx13].missed = kcg_true;
  }
  for (idx14 = 0; idx14 < 41; idx14++) {
    outC->_L9[idx14] = kcg_lit_int64(0);
  }
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  for (idx16 = 0; idx16 < 41; idx16++) {
    outC->_L2[idx16].valid = kcg_true;
    outC->_L2[idx16].nid_c = kcg_lit_int64(0);
    outC->_L2[idx16].nid_bg = kcg_lit_int64(0);
    outC->_L2[idx16].q_link = Q_LINK_Unlinked;
    outC->_L2[idx16].location.nominal = kcg_lit_int64(0);
    outC->_L2[idx16].location.d_min = kcg_lit_int64(0);
    outC->_L2[idx16].location.d_max = kcg_lit_int64(0);
    outC->_L2[idx16].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.valid = kcg_true;
    outC->_L2[idx16].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L2[idx16].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L2[idx16].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L2[idx16].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2[idx16].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2[idx16].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2[idx16].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.valid = kcg_true;
    outC->_L2[idx16].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L2[idx16].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2[idx16].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2[idx16].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L2[idx16].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2[idx16].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L2[idx16].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L2[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L2[idx16].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L2[idx16].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L2[idx16].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx15 = 0; idx15 < 33; idx15++) {
      outC->_L2[idx16].infoFromPassing.linkedBGs[idx15].valid = kcg_true;
      outC->_L2[idx16].infoFromPassing.linkedBGs[idx15].nid_LRBG = kcg_lit_int64(0);
      outC->_L2[idx16].infoFromPassing.linkedBGs[idx15].q_dir = Q_DIR_Reverse;
      outC->_L2[idx16].infoFromPassing.linkedBGs[idx15].q_scale = Q_SCALE_10_cm_scale;
      outC->_L2[idx16].infoFromPassing.linkedBGs[idx15].d_link = kcg_lit_int64(0);
      outC->_L2[idx16].infoFromPassing.linkedBGs[idx15].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L2[idx16].infoFromPassing.linkedBGs[idx15].nid_c = kcg_lit_int64(0);
      outC->_L2[idx16].infoFromPassing.linkedBGs[idx15].nid_bg = kcg_lit_int64(0);
      outC->_L2[idx16].infoFromPassing.linkedBGs[idx15].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L2[idx16].infoFromPassing.linkedBGs[idx15].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L2[idx16].infoFromPassing.linkedBGs[idx15].q_locacc = kcg_lit_int64(0);
    }
    outC->_L2[idx16].missed = kcg_true;
  }
  outC->_L1 = kcg_true;
  for (idx18 = 0; idx18 < 41; idx18++) {
    outC->BGs_out[idx18].valid = kcg_true;
    outC->BGs_out[idx18].nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx18].nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx18].q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx18].location.nominal = kcg_lit_int64(0);
    outC->BGs_out[idx18].location.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx18].location.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx18].seqNoOnTrack = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.valid = kcg_true;
    outC->BGs_out[idx18].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[idx18].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[idx18].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[idx18].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[idx18].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[idx18].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[idx18].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.valid = kcg_true;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->BGs_out[idx18].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[idx18].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx17 = 0; idx17 < 33; idx17++) {
      outC->BGs_out[idx18].infoFromPassing.linkedBGs[idx17].valid = kcg_true;
      outC->BGs_out[idx18].infoFromPassing.linkedBGs[idx17].nid_LRBG =
        kcg_lit_int64(0);
      outC->BGs_out[idx18].infoFromPassing.linkedBGs[idx17].q_dir = Q_DIR_Reverse;
      outC->BGs_out[idx18].infoFromPassing.linkedBGs[idx17].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[idx18].infoFromPassing.linkedBGs[idx17].d_link = kcg_lit_int64(0);
      outC->BGs_out[idx18].infoFromPassing.linkedBGs[idx17].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[idx18].infoFromPassing.linkedBGs[idx17].nid_c = kcg_lit_int64(0);
      outC->BGs_out[idx18].infoFromPassing.linkedBGs[idx17].nid_bg = kcg_lit_int64(0);
      outC->BGs_out[idx18].infoFromPassing.linkedBGs[idx17].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[idx18].infoFromPassing.linkedBGs[idx17].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[idx18].infoFromPassing.linkedBGs[idx17].q_locacc =
        kcg_lit_int64(0);
    }
    outC->BGs_out[idx18].missed = kcg_true;
  }
  for (idx = 0; idx < 41; idx++) {
    /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr#1)/ */
    deleteBG_atIndex_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_deleteBG_atIndex_itr_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void deleteBG_atIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::deleteBG_atIndex_itr#1)/ */
    deleteBG_atIndex_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_deleteBG_atIndex_itr_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** deleteBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

