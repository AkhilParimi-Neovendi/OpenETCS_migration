/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBGs/ */
void findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg acc;
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg acc3;
  kcg_size idx4;
  kcg_size idx5;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg noname;
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg _6_noname;

  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L25,
    (linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *)
      &cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L26, BGs_in);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L23,
    &outC->_L25);
  /* _L23= */
  for (idx = 0; idx < 41; idx++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &acc,
      &outC->_L23);
    /* _L23=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr#1)/ */
    findLinkedBG_fwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &acc,
      &outC->_L26[idx],
      &outC->Context_findLinkedBG_fwd_itr_1[idx]);
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L23,
      &outC->Context_findLinkedBG_fwd_itr_1[idx].index_acc);
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L24[idx],
      &outC->Context_findLinkedBG_fwd_itr_1[idx].index_out);
  }
  for (idx1 = 0; idx1 < 41; idx1++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L32[idx1],
      &outC->_L24[40 - idx1]);
  }
  for (idx2 = 0; idx2 < 41; idx2++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L30[idx2],
      &outC->_L26[40 - idx2]);
  }
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L28,
    &outC->_L25);
  /* _L28= */
  for (idx4 = 0; idx4 < 41; idx4++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &acc3,
      &outC->_L28);
    /* _L28=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr#1)/ */
    findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &acc3,
      &outC->_L32[idx4],
      &outC->_L30[idx4],
      &outC->Context_findLinkedBG_bckwd_itr_1[idx4]);
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L28,
      &outC->Context_findLinkedBG_bckwd_itr_1[idx4].index_acc_out);
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L29[idx4],
      &outC->Context_findLinkedBG_bckwd_itr_1[idx4].index_out);
  }
  for (idx5 = 0; idx5 < 41; idx5++) {
    kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L31[idx5],
      &outC->_L29[40 - idx5]);
  }
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &_6_noname,
    &outC->_L28);
  kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->BGs_indices,
    &outC->_L31);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &noname,
    &outC->_L23);
}

#ifndef KCG_USER_DEFINED_INIT
void findLinkedBGs_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;

  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L32[idx2].previousLinkedBG_idx = kcg_lit_int32(0);
    outC->_L32[idx2].currentIndex = kcg_lit_int32(0);
    outC->_L32[idx2].subsequentLinkedBG_idx = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L31[idx3].previousLinkedBG_idx = kcg_lit_int32(0);
    outC->_L31[idx3].currentIndex = kcg_lit_int32(0);
    outC->_L31[idx3].subsequentLinkedBG_idx = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L30[idx5].valid = kcg_true;
    outC->_L30[idx5].nid_c = kcg_lit_int32(0);
    outC->_L30[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L30[idx5].q_link = Q_LINK_Unlinked;
    outC->_L30[idx5].location.nominal = kcg_lit_int32(0);
    outC->_L30[idx5].location.d_min = kcg_lit_int32(0);
    outC->_L30[idx5].location.d_max = kcg_lit_int32(0);
    outC->_L30[idx5].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.valid = kcg_true;
    outC->_L30[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L30[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L30[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L30[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L30[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L30[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L30[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.valid = kcg_true;
    outC->_L30[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L30[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L30[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L30[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L30[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L30[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L30[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L30[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L30[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L30[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L30[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L30[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L30[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
      outC->_L30[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L30[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L30[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
      outC->_L30[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L30[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
      outC->_L30[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
      outC->_L30[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L30[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L30[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
    }
    outC->_L30[idx5].missed = kcg_true;
  }
  outC->_L28.previousLinkedBG_idx = kcg_lit_int32(0);
  outC->_L28.currentIndex = kcg_lit_int32(0);
  outC->_L28.subsequentLinkedBG_idx = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 41; idx6++) {
    outC->_L29[idx6].previousLinkedBG_idx = kcg_lit_int32(0);
    outC->_L29[idx6].currentIndex = kcg_lit_int32(0);
    outC->_L29[idx6].subsequentLinkedBG_idx = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 41; idx8++) {
    outC->_L26[idx8].valid = kcg_true;
    outC->_L26[idx8].nid_c = kcg_lit_int32(0);
    outC->_L26[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L26[idx8].q_link = Q_LINK_Unlinked;
    outC->_L26[idx8].location.nominal = kcg_lit_int32(0);
    outC->_L26[idx8].location.d_min = kcg_lit_int32(0);
    outC->_L26[idx8].location.d_max = kcg_lit_int32(0);
    outC->_L26[idx8].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.valid = kcg_true;
    outC->_L26[idx8].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L26[idx8].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L26[idx8].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L26[idx8].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L26[idx8].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L26[idx8].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L26[idx8].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.valid = kcg_true;
    outC->_L26[idx8].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L26[idx8].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L26[idx8].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L26[idx8].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L26[idx8].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L26[idx8].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L26[idx8].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L26[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L26[idx8].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L26[idx8].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L26[idx8].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx7 = 0; idx7 < 33; idx7++) {
      outC->_L26[idx8].infoFromPassing.linkedBGs[idx7].valid = kcg_true;
      outC->_L26[idx8].infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
      outC->_L26[idx8].infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
      outC->_L26[idx8].infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
      outC->_L26[idx8].infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
      outC->_L26[idx8].infoFromPassing.linkedBGs[idx7].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L26[idx8].infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
      outC->_L26[idx8].infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
      outC->_L26[idx8].infoFromPassing.linkedBGs[idx7].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L26[idx8].infoFromPassing.linkedBGs[idx7].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L26[idx8].infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
    }
    outC->_L26[idx8].missed = kcg_true;
  }
  outC->_L25.previousLinkedBG_idx = kcg_lit_int32(0);
  outC->_L25.currentIndex = kcg_lit_int32(0);
  outC->_L25.subsequentLinkedBG_idx = kcg_lit_int32(0);
  outC->_L23.previousLinkedBG_idx = kcg_lit_int32(0);
  outC->_L23.currentIndex = kcg_lit_int32(0);
  outC->_L23.subsequentLinkedBG_idx = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 41; idx9++) {
    outC->_L24[idx9].previousLinkedBG_idx = kcg_lit_int32(0);
    outC->_L24[idx9].currentIndex = kcg_lit_int32(0);
    outC->_L24[idx9].subsequentLinkedBG_idx = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 41; idx10++) {
    outC->BGs_indices[idx10].previousLinkedBG_idx = kcg_lit_int32(0);
    outC->BGs_indices[idx10].currentIndex = kcg_lit_int32(0);
    outC->BGs_indices[idx10].subsequentLinkedBG_idx = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 41; idx1++) {
    /* _L28=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr#1)/ */
    findLinkedBG_bckwd_itr_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->Context_findLinkedBG_bckwd_itr_1[idx1]);
  }
  for (idx = 0; idx < 41; idx++) {
    /* _L23=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr#1)/ */
    findLinkedBG_fwd_itr_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->Context_findLinkedBG_fwd_itr_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void findLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;

  for (idx1 = 0; idx1 < 41; idx1++) {
    /* _L28=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr#1)/ */
    findLinkedBG_bckwd_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->Context_findLinkedBG_bckwd_itr_1[idx1]);
  }
  for (idx = 0; idx < 41; idx++) {
    /* _L23=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_fwd_itr#1)/ */
    findLinkedBG_fwd_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->Context_findLinkedBG_fwd_itr_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** findLinkedBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

