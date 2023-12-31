/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations/ */
void improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_int32 noname;

  outC->_L12 = kcg_true;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L3, BGs_in);
  /* _L8/ */
  for (idx = 0; idx < 41; idx++) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L8[idx], &outC->_L3);
  }
  /* _L2=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs#1)/ */
  findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L3,
    &outC->Context_findLinkedBGs_1);
  kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L2,
    &outC->Context_findLinkedBGs_1.BGs_indices);
  /* _L6= */
  if (outC->_L12) {
    /* _L6= */
    for (idx1 = 0; idx1 < 41; idx1++) {
      /* _L6=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr#1)/ */
      improveUnlinkedBGLocations_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
        &outC->_L2[idx1],
        &outC->_L8[idx1],
        &outC->Context_improveUnlinkedBGLocations_itr_1[idx1]);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L5[idx1],
        &outC->Context_improveUnlinkedBGLocations_itr_1[idx1].BG_out);
      outC->_L6 = /* _L6= */(kcg_int32) (idx1 + 1);
      /* _L6= */
      if (!outC->Context_improveUnlinkedBGLocations_itr_1[idx1].cont) {
        break;
      }
    }
  }
  else {
    outC->_L6 = kcg_lit_int32(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L6= */
  for (idx1 = /* _L6= */(kcg_size) outC->_L6; idx1 < 41; idx1++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L5[idx1],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */

  noname = outC->_L6;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void improveUnlinkedBGLocations_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
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

  outC->_L12 = kcg_true;
  for (idx3 = 0; idx3 < 41; idx3++) {
    for (idx2 = 0; idx2 < 41; idx2++) {
      outC->_L8[idx3][idx2].valid = kcg_true;
      outC->_L8[idx3][idx2].nid_c = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].nid_bg = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].q_link = Q_LINK_Unlinked;
      outC->_L8[idx3][idx2].location.nominal = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].location.d_min = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].location.d_max = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].seqNoOnTrack = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.valid = kcg_true;
      outC->_L8[idx3][idx2].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.expectedLocation.nominal =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.linkingInfo.valid = kcg_true;
      outC->_L8[idx3][idx2].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
      outC->_L8[idx3][idx2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
      outC->_L8[idx3][idx2].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.linkingInfo.q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L8[idx3][idx2].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromLinking.linkingInfo.q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L8[idx3][idx2].infoFromLinking.linkingInfo.q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L8[idx3][idx2].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.valid = kcg_true;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.valid = kcg_true;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.q_updown =
        Q_UPDOWN_Down_link_telegram;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.m_version =
        M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.n_total =
        N_TOTAL_1_balise_in_the_group;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.timestamp =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.odo.o_min =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.odo.o_max =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.acceleration =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.motionState =
        noMotion_Obu_BasicTypes_Pkg;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.bgPosition.motionDirection =
        unknownDirection_Obu_BasicTypes_Pkg;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
        kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
        kcg_true;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.trainOrientationToBG =
        Q_DIRLRBG_Reverse;
      outC->_L8[idx3][idx2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
        Q_DIRTRAIN_Reverse;
      for (idx1 = 0; idx1 < 33; idx1++) {
        outC->_L8[idx3][idx2].infoFromPassing.linkedBGs[idx1].valid = kcg_true;
        outC->_L8[idx3][idx2].infoFromPassing.linkedBGs[idx1].nid_LRBG =
          kcg_lit_int32(0);
        outC->_L8[idx3][idx2].infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
        outC->_L8[idx3][idx2].infoFromPassing.linkedBGs[idx1].q_scale =
          Q_SCALE_10_cm_scale;
        outC->_L8[idx3][idx2].infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
        outC->_L8[idx3][idx2].infoFromPassing.linkedBGs[idx1].q_newcountry =
          Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
        outC->_L8[idx3][idx2].infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
        outC->_L8[idx3][idx2].infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
        outC->_L8[idx3][idx2].infoFromPassing.linkedBGs[idx1].q_linkorientation =
          Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
        outC->_L8[idx3][idx2].infoFromPassing.linkedBGs[idx1].q_linkreaction =
          Q_LINKREACTION_Train_trip;
        outC->_L8[idx3][idx2].infoFromPassing.linkedBGs[idx1].q_locacc =
          kcg_lit_int32(0);
      }
      outC->_L8[idx3][idx2].missed = kcg_true;
    }
  }
  outC->_L6 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L5[idx5].valid = kcg_true;
    outC->_L5[idx5].nid_c = kcg_lit_int32(0);
    outC->_L5[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L5[idx5].q_link = Q_LINK_Unlinked;
    outC->_L5[idx5].location.nominal = kcg_lit_int32(0);
    outC->_L5[idx5].location.d_min = kcg_lit_int32(0);
    outC->_L5[idx5].location.d_max = kcg_lit_int32(0);
    outC->_L5[idx5].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.valid = kcg_true;
    outC->_L5[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L5[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L5[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.valid = kcg_true;
    outC->_L5[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L5[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L5[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L5[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L5[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L5[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L5[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L5[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L5[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
    }
    outC->_L5[idx5].missed = kcg_true;
  }
  for (idx7 = 0; idx7 < 41; idx7++) {
    outC->_L3[idx7].valid = kcg_true;
    outC->_L3[idx7].nid_c = kcg_lit_int32(0);
    outC->_L3[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L3[idx7].q_link = Q_LINK_Unlinked;
    outC->_L3[idx7].location.nominal = kcg_lit_int32(0);
    outC->_L3[idx7].location.d_min = kcg_lit_int32(0);
    outC->_L3[idx7].location.d_max = kcg_lit_int32(0);
    outC->_L3[idx7].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.valid = kcg_true;
    outC->_L3[idx7].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L3[idx7].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L3[idx7].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L3[idx7].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3[idx7].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3[idx7].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3[idx7].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.valid = kcg_true;
    outC->_L3[idx7].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L3[idx7].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L3[idx7].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L3[idx7].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L3[idx7].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L3[idx7].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L3[idx7].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L3[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L3[idx7].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L3[idx7].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L3[idx7].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx6 = 0; idx6 < 33; idx6++) {
      outC->_L3[idx7].infoFromPassing.linkedBGs[idx6].valid = kcg_true;
      outC->_L3[idx7].infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int32(0);
      outC->_L3[idx7].infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
      outC->_L3[idx7].infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
      outC->_L3[idx7].infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int32(0);
      outC->_L3[idx7].infoFromPassing.linkedBGs[idx6].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L3[idx7].infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int32(0);
      outC->_L3[idx7].infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int32(0);
      outC->_L3[idx7].infoFromPassing.linkedBGs[idx6].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L3[idx7].infoFromPassing.linkedBGs[idx6].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L3[idx7].infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int32(0);
    }
    outC->_L3[idx7].missed = kcg_true;
  }
  for (idx8 = 0; idx8 < 41; idx8++) {
    outC->_L2[idx8].previousLinkedBG_idx = kcg_lit_int32(0);
    outC->_L2[idx8].currentIndex = kcg_lit_int32(0);
    outC->_L2[idx8].subsequentLinkedBG_idx = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 41; idx10++) {
    outC->BGs_out[idx10].valid = kcg_true;
    outC->BGs_out[idx10].nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx10].nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx10].q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx10].location.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx10].location.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx10].location.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx10].seqNoOnTrack = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.valid = kcg_true;
    outC->BGs_out[idx10].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.valid = kcg_true;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx9 = 0; idx9 < 33; idx9++) {
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].valid = kcg_true;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].nid_LRBG =
        kcg_lit_int32(0);
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int32(0);
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int32(0);
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int32(0);
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_locacc =
        kcg_lit_int32(0);
    }
    outC->BGs_out[idx10].missed = kcg_true;
  }
  for (idx = 0; idx < 41; idx++) {
    /* _L6=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr#1)/ */
    improveUnlinkedBGLocations_itr_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->Context_improveUnlinkedBGLocations_itr_1[idx]);
  }
  /* _L2=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs#1)/ */
  findLinkedBGs_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_findLinkedBGs_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void improveUnlinkedBGLocations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L6=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations_itr#1)/ */
    improveUnlinkedBGLocations_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->Context_improveUnlinkedBGLocations_itr_1[idx]);
  }
  /* _L2=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs#1)/ */
  findLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_findLinkedBGs_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

