/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs/ */
void countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* enable/ */
  kcg_bool enable,
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg acc;
  kcg_size idx;
  kcg_int32 noname;

  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L4,
    (BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &cBGCounters_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L5, BGs_in);
  outC->_L12 = enable;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L1,
    &outC->_L4);
  /* _L3= */
  if (outC->_L12) {
    /* _L3= */
    for (idx = 0; idx < 41; idx++) {
      kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &acc,
        &outC->_L1);
      /* _L3=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr#1)/ */
      countBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &acc,
        &outC->_L5[idx],
        &outC->Context_countBGs_itr_1[idx]);
      kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &outC->_L1,
        &outC->Context_countBGs_itr_1[idx].counters_out);
      outC->_L3 = /* _L3= */(kcg_int32) (idx + 1);
      /* _L3= */
      if (!outC->Context_countBGs_itr_1[idx].cont) {
        break;
      }
    }
  }
  else {
    outC->_L3 = kcg_lit_int32(0);
  }
  outC->_L24 = outC->_L1.totalBGsCount;
  kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->counters,
    &outC->_L1);
  outC->_L17 = cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  outC->_L16 = outC->_L24 == outC->_L17;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = outC->_L24 == outC->_L15;
  outC->full = outC->_L16;
  outC->empty = outC->_L14;
  noname = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void countBGs_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  outC->_L24 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  outC->_L12 = kcg_true;
  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L5[idx2].valid = kcg_true;
    outC->_L5[idx2].nid_c = kcg_lit_int32(0);
    outC->_L5[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L5[idx2].q_link = Q_LINK_Unlinked;
    outC->_L5[idx2].location.nominal = kcg_lit_int32(0);
    outC->_L5[idx2].location.d_min = kcg_lit_int32(0);
    outC->_L5[idx2].location.d_max = kcg_lit_int32(0);
    outC->_L5[idx2].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.valid = kcg_true;
    outC->_L5[idx2].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L5[idx2].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L5[idx2].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5[idx2].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5[idx2].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.valid = kcg_true;
    outC->_L5[idx2].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L5[idx2].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L5[idx2].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L5[idx2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L5[idx2].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L5[idx2].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L5[idx2].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L5[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L5[idx2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L5[idx2].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L5[idx2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx1 = 0; idx1 < 33; idx1++) {
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].valid = kcg_true;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L5[idx2].infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
    }
    outC->_L5[idx2].missed = kcg_true;
  }
  outC->_L4.unlinkedBGsCount = kcg_lit_int32(0);
  outC->_L4.linkedBGsCount = kcg_lit_int32(0);
  outC->_L4.totalBGsCount = kcg_lit_int32(0);
  outC->_L4.passedUnlinkedBGsCount = kcg_lit_int32(0);
  outC->_L4.passedLinkedBGsCount = kcg_lit_int32(0);
  outC->_L4.passedTotalBGsCount = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L1.unlinkedBGsCount = kcg_lit_int32(0);
  outC->_L1.linkedBGsCount = kcg_lit_int32(0);
  outC->_L1.totalBGsCount = kcg_lit_int32(0);
  outC->_L1.passedUnlinkedBGsCount = kcg_lit_int32(0);
  outC->_L1.passedLinkedBGsCount = kcg_lit_int32(0);
  outC->_L1.passedTotalBGsCount = kcg_lit_int32(0);
  outC->counters.unlinkedBGsCount = kcg_lit_int32(0);
  outC->counters.linkedBGsCount = kcg_lit_int32(0);
  outC->counters.totalBGsCount = kcg_lit_int32(0);
  outC->counters.passedUnlinkedBGsCount = kcg_lit_int32(0);
  outC->counters.passedLinkedBGsCount = kcg_lit_int32(0);
  outC->counters.passedTotalBGsCount = kcg_lit_int32(0);
  outC->full = kcg_true;
  outC->empty = kcg_true;
  for (idx = 0; idx < 41; idx++) {
    /* _L3=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr#1)/ */
    countBGs_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_countBGs_itr_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void countBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L3=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::countBGs_itr#1)/ */
    countBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_countBGs_itr_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

