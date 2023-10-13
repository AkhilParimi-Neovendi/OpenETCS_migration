/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::findLinkedBG_bckwd_itr/ */
void findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* index_acc_in/ */
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_acc_in,
  /* index_in/ */
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *index_in,
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  outC_findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L19,
    index_acc_in);
  outC->_L28 = outC->_L19.subsequentLinkedBG_idx;
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L25,
    index_in);
  outC->_L27 = outC->_L25.currentIndex;
  outC->_L26 = outC->_L25.previousLinkedBG_idx;
  outC->_L9 = Q_LINK_Linked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L5, BG_in);
  outC->_L7 = outC->_L5.q_link;
  outC->_L8 = outC->_L7 == outC->_L9;
  outC->_L6 = outC->_L5.valid;
  outC->_L11 = outC->_L6 & outC->_L8;
  /* _L20= */
  if (outC->_L11) {
    outC->_L20 = outC->_L27;
  }
  else {
    outC->_L20 = outC->_L28;
  }
  outC->_L12.previousLinkedBG_idx = outC->_L26;
  outC->_L12.currentIndex = outC->_L27;
  outC->_L12.subsequentLinkedBG_idx = outC->_L20;
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->index_out,
    &outC->_L12);
  kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->index_acc_out,
    &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void findLinkedBG_bckwd_itr_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  static kcg_size idx;

  outC->_L28 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L25.previousLinkedBG_idx = kcg_lit_int64(0);
  outC->_L25.currentIndex = kcg_lit_int64(0);
  outC->_L25.subsequentLinkedBG_idx = kcg_lit_int64(0);
  outC->_L20 = kcg_lit_int64(0);
  outC->_L19.previousLinkedBG_idx = kcg_lit_int64(0);
  outC->_L19.currentIndex = kcg_lit_int64(0);
  outC->_L19.subsequentLinkedBG_idx = kcg_lit_int64(0);
  outC->_L12.previousLinkedBG_idx = kcg_lit_int64(0);
  outC->_L12.currentIndex = kcg_lit_int64(0);
  outC->_L12.subsequentLinkedBG_idx = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  outC->_L9 = Q_LINK_Unlinked;
  outC->_L8 = kcg_true;
  outC->_L7 = Q_LINK_Unlinked;
  outC->_L6 = kcg_true;
  outC->_L5.valid = kcg_true;
  outC->_L5.nid_c = kcg_lit_int64(0);
  outC->_L5.nid_bg = kcg_lit_int64(0);
  outC->_L5.q_link = Q_LINK_Unlinked;
  outC->_L5.location.nominal = kcg_lit_int64(0);
  outC->_L5.location.d_min = kcg_lit_int64(0);
  outC->_L5.location.d_max = kcg_lit_int64(0);
  outC->_L5.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.valid = kcg_true;
  outC->_L5.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L5.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.valid = kcg_true;
  outC->_L5.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L5.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L5.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L5.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L5.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L5.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L5.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L5.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L5.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L5.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L5.missed = kcg_true;
  outC->index_out.previousLinkedBG_idx = kcg_lit_int64(0);
  outC->index_out.currentIndex = kcg_lit_int64(0);
  outC->index_out.subsequentLinkedBG_idx = kcg_lit_int64(0);
  outC->index_acc_out.previousLinkedBG_idx = kcg_lit_int64(0);
  outC->index_acc_out.currentIndex = kcg_lit_int64(0);
  outC->index_acc_out.subsequentLinkedBG_idx = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void findLinkedBG_bckwd_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** findLinkedBG_bckwd_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

