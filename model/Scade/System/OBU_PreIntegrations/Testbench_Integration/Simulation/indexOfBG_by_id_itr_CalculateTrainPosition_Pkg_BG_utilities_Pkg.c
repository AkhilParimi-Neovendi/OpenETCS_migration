/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id_itr/ */
void indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int32 iteratorIndex,
  /* prevIndex/ */
  kcg_int32 prevIndex,
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  /* BG_asElementFromBGs/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_asElementFromBGs,
  outC_indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->_L18 = iteratorIndex;
  outC->_L16 = prevIndex;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L3, BG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L4,
    BG_asElementFromBGs);
  /* _L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L3,
    &outC->_L4,
    &outC->Context_positionedBGs_ids_equal_1);
  outC->_L6 = outC->Context_positionedBGs_ids_equal_1.idsEqual;
  /* _L11= */
  if (outC->_L6) {
    outC->_L11 = outC->_L18;
  }
  else {
    outC->_L11 = outC->_L16;
  }
  outC->_L8 = !outC->_L6;
  outC->indexOfBG = outC->_L11;
  outC->cont = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void indexOfBG_by_id_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L18 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L4.valid = kcg_true;
  outC->_L4.nid_c = kcg_lit_int32(0);
  outC->_L4.nid_bg = kcg_lit_int32(0);
  outC->_L4.q_link = Q_LINK_Unlinked;
  outC->_L4.location.nominal = kcg_lit_int32(0);
  outC->_L4.location.d_min = kcg_lit_int32(0);
  outC->_L4.location.d_max = kcg_lit_int32(0);
  outC->_L4.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.valid = kcg_true;
  outC->_L4.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L4.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L4.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L4.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L4.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L4.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L4.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L4.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L4.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L4.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L4.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L4.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L4.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L4.missed = kcg_true;
  outC->_L3.valid = kcg_true;
  outC->_L3.nid_c = kcg_lit_int32(0);
  outC->_L3.nid_bg = kcg_lit_int32(0);
  outC->_L3.q_link = Q_LINK_Unlinked;
  outC->_L3.location.nominal = kcg_lit_int32(0);
  outC->_L3.location.d_min = kcg_lit_int32(0);
  outC->_L3.location.d_max = kcg_lit_int32(0);
  outC->_L3.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.valid = kcg_true;
  outC->_L3.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L3.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L3.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L3.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L3.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L3.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L3.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L3.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L3.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L3.missed = kcg_true;
  outC->indexOfBG = kcg_lit_int32(0);
  outC->cont = kcg_true;
  /* _L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */
  positionedBGs_ids_equal_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_equal_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void indexOfBG_by_id_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* _L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_equal_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOfBG_by_id_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

