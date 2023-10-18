/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::improve_BG_locations/ */
void improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* referenceBG/ */
  positionedBG_T_TrainPosition_Types_Pck *referenceBG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L39,
    trainProperties);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L2, referenceBG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L1, BGs_in);
  /* _L33=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead#1)/ */
  recalculate_BG_locations_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L2,
    &outC->_L1,
    &outC->_L39,
    &outC->Context_recalculate_BG_locations_ahead_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L33,
    &outC->Context_recalculate_BG_locations_ahead_1.BGs_out);
  /* _L34=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern#1)/ */
  recalculate_BG_locations_astern_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L2,
    &outC->_L33,
    &outC->_L39,
    &outC->Context_recalculate_BG_locations_astern_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L34,
    &outC->Context_recalculate_BG_locations_astern_1.BGs_out);
  /* _L38=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations#1)/ */
  improveUnlinkedBGLocations_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L34,
    &outC->Context_improveUnlinkedBGLocations_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L38,
    &outC->Context_improveUnlinkedBGLocations_1.BGs_out);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L38);
}

#ifndef KCG_USER_DEFINED_INIT
void improve_BG_locations_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
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

  outC->_L39.nid_engine = kcg_lit_int64(0);
  outC->_L39.nid_operational = kcg_lit_int64(0);
  outC->_L39.l_train = kcg_lit_int64(0);
  outC->_L39.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L39.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L39.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L39.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L39.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L39.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L39.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L39.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L39.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L39.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L39.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L39.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L38[idx1].valid = kcg_true;
    outC->_L38[idx1].nid_c = kcg_lit_int64(0);
    outC->_L38[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L38[idx1].q_link = Q_LINK_Unlinked;
    outC->_L38[idx1].location.nominal = kcg_lit_int64(0);
    outC->_L38[idx1].location.d_min = kcg_lit_int64(0);
    outC->_L38[idx1].location.d_max = kcg_lit_int64(0);
    outC->_L38[idx1].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.valid = kcg_true;
    outC->_L38[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L38[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L38[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L38[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L38[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L38[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L38[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.valid = kcg_true;
    outC->_L38[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L38[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L38[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L38[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L38[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L38[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L38[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L38[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L38[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L38[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L38[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L38[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L38[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
      outC->_L38[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L38[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L38[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
      outC->_L38[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L38[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
      outC->_L38[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
      outC->_L38[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L38[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L38[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
    }
    outC->_L38[idx1].missed = kcg_true;
  }
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L34[idx3].valid = kcg_true;
    outC->_L34[idx3].nid_c = kcg_lit_int64(0);
    outC->_L34[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L34[idx3].q_link = Q_LINK_Unlinked;
    outC->_L34[idx3].location.nominal = kcg_lit_int64(0);
    outC->_L34[idx3].location.d_min = kcg_lit_int64(0);
    outC->_L34[idx3].location.d_max = kcg_lit_int64(0);
    outC->_L34[idx3].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.valid = kcg_true;
    outC->_L34[idx3].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L34[idx3].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L34[idx3].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L34[idx3].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L34[idx3].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L34[idx3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L34[idx3].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.valid = kcg_true;
    outC->_L34[idx3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L34[idx3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L34[idx3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L34[idx3].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L34[idx3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L34[idx3].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L34[idx3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L34[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L34[idx3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L34[idx3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L34[idx3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L34[idx3].infoFromPassing.linkedBGs[idx2].valid = kcg_true;
      outC->_L34[idx3].infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
      outC->_L34[idx3].infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
      outC->_L34[idx3].infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
      outC->_L34[idx3].infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
      outC->_L34[idx3].infoFromPassing.linkedBGs[idx2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L34[idx3].infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
      outC->_L34[idx3].infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
      outC->_L34[idx3].infoFromPassing.linkedBGs[idx2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L34[idx3].infoFromPassing.linkedBGs[idx2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L34[idx3].infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
    }
    outC->_L34[idx3].missed = kcg_true;
  }
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L33[idx5].valid = kcg_true;
    outC->_L33[idx5].nid_c = kcg_lit_int64(0);
    outC->_L33[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L33[idx5].q_link = Q_LINK_Unlinked;
    outC->_L33[idx5].location.nominal = kcg_lit_int64(0);
    outC->_L33[idx5].location.d_min = kcg_lit_int64(0);
    outC->_L33[idx5].location.d_max = kcg_lit_int64(0);
    outC->_L33[idx5].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.valid = kcg_true;
    outC->_L33[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L33[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L33[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L33[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L33[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L33[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L33[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.valid = kcg_true;
    outC->_L33[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L33[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L33[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L33[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L33[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L33[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L33[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L33[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L33[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L33[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L33[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L33[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L33[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
      outC->_L33[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L33[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L33[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
      outC->_L33[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L33[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
      outC->_L33[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
      outC->_L33[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L33[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L33[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
    }
    outC->_L33[idx5].missed = kcg_true;
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_c = kcg_lit_int64(0);
  outC->_L2.nid_bg = kcg_lit_int64(0);
  outC->_L2.q_link = Q_LINK_Unlinked;
  outC->_L2.location.nominal = kcg_lit_int64(0);
  outC->_L2.location.d_min = kcg_lit_int64(0);
  outC->_L2.location.d_max = kcg_lit_int64(0);
  outC->_L2.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.valid = kcg_true;
  outC->_L2.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L2.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L2.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L2.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L2.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L2.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int64(0);
    outC->_L2.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int64(0);
  }
  outC->_L2.missed = kcg_true;
  for (idx8 = 0; idx8 < 41; idx8++) {
    outC->_L1[idx8].valid = kcg_true;
    outC->_L1[idx8].nid_c = kcg_lit_int64(0);
    outC->_L1[idx8].nid_bg = kcg_lit_int64(0);
    outC->_L1[idx8].q_link = Q_LINK_Unlinked;
    outC->_L1[idx8].location.nominal = kcg_lit_int64(0);
    outC->_L1[idx8].location.d_min = kcg_lit_int64(0);
    outC->_L1[idx8].location.d_max = kcg_lit_int64(0);
    outC->_L1[idx8].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.valid = kcg_true;
    outC->_L1[idx8].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L1[idx8].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L1[idx8].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L1[idx8].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1[idx8].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1[idx8].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1[idx8].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.valid = kcg_true;
    outC->_L1[idx8].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L1[idx8].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L1[idx8].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L1[idx8].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L1[idx8].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L1[idx8].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L1[idx8].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L1[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L1[idx8].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L1[idx8].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L1[idx8].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx7 = 0; idx7 < 33; idx7++) {
      outC->_L1[idx8].infoFromPassing.linkedBGs[idx7].valid = kcg_true;
      outC->_L1[idx8].infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int64(0);
      outC->_L1[idx8].infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
      outC->_L1[idx8].infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
      outC->_L1[idx8].infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int64(0);
      outC->_L1[idx8].infoFromPassing.linkedBGs[idx7].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L1[idx8].infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int64(0);
      outC->_L1[idx8].infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int64(0);
      outC->_L1[idx8].infoFromPassing.linkedBGs[idx7].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L1[idx8].infoFromPassing.linkedBGs[idx7].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L1[idx8].infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int64(0);
    }
    outC->_L1[idx8].missed = kcg_true;
  }
  for (idx10 = 0; idx10 < 41; idx10++) {
    outC->BGs_out[idx10].valid = kcg_true;
    outC->BGs_out[idx10].nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx10].nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx10].q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx10].location.nominal = kcg_lit_int64(0);
    outC->BGs_out[idx10].location.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx10].location.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx10].seqNoOnTrack = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.valid = kcg_true;
    outC->BGs_out[idx10].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[idx10].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.valid = kcg_true;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->BGs_out[idx10].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[idx10].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx9 = 0; idx9 < 33; idx9++) {
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].valid = kcg_true;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].nid_LRBG =
        kcg_lit_int64(0);
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int64(0);
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int64(0);
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int64(0);
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[idx10].infoFromPassing.linkedBGs[idx9].q_locacc =
        kcg_lit_int64(0);
    }
    outC->BGs_out[idx10].missed = kcg_true;
  }
  /* _L38=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations#1)/ */
  improveUnlinkedBGLocations_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_improveUnlinkedBGLocations_1);
  /* _L34=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern#1)/ */
  recalculate_BG_locations_astern_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_recalculate_BG_locations_astern_1);
  /* _L33=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead#1)/ */
  recalculate_BG_locations_ahead_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_recalculate_BG_locations_ahead_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void improve_BG_locations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* _L38=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::improveUnlinkedBGLocations#1)/ */
  improveUnlinkedBGLocations_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_improveUnlinkedBGLocations_1);
  /* _L34=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_astern#1)/ */
  recalculate_BG_locations_astern_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_recalculate_BG_locations_astern_1);
  /* _L33=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead#1)/ */
  recalculate_BG_locations_ahead_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_recalculate_BG_locations_ahead_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** improve_BG_locations_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

