/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr/ */
void indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* iteratorIndex/ */
  kcg_int32 iteratorIndex,
  /* acc_in/ */
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *acc_in,
  /* linked/ */
  kcg_bool linked,
  /* n/ */
  kcg_int32 n,
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  outC_indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L33,
    acc_in);
  outC->_L53 = outC->_L33.BGFound;
  outC->_L42 = n;
  outC->_L52 = outC->_L33.noOfFoundBGs;
  outC->_L38 = kcg_lit_int32(1);
  outC->_L37 = outC->_L38 + outC->_L52;
  outC->_L32 = Q_LINK_Unlinked;
  outC->_L21 = Q_LINK_Linked;
  outC->_L30 = linked;
  /* _L31= */
  if (outC->_L30) {
    outC->_L31 = outC->_L21;
  }
  else {
    outC->_L31 = outC->_L32;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L4, BG);
  outC->_L20 = outC->_L4.q_link;
  outC->_L22 = outC->_L20 == outC->_L31;
  outC->_L23 = outC->_L4.infoFromPassing.valid;
  outC->_L19 = outC->_L4.valid;
  outC->_L25 = outC->_L19 & outC->_L23;
  outC->_L26 = outC->_L25 & outC->_L22;
  /* _L39= */
  if (outC->_L26) {
    outC->_L39 = outC->_L37;
  }
  else {
    outC->_L39 = outC->_L52;
  }
  outC->_L43 = outC->_L39 == outC->_L42;
  outC->_L44 = outC->_L43 | outC->_L53;
  outC->_L55 = !outC->_L44;
  outC->_L54 = outC->_L19 & outC->_L55;
  outC->_L51 = outC->_L33.index;
  outC->_L28 = iteratorIndex;
  /* _L27= */
  if (outC->_L26) {
    outC->_L27 = outC->_L28;
  }
  else {
    outC->_L27 = outC->_L51;
  }
  outC->_L40.index = outC->_L27;
  outC->_L40.noOfFoundBGs = outC->_L39;
  outC->_L40.BGFound = outC->_L44;
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->acc_out,
    &outC->_L40);
  outC->cont = outC->_L54;
}

#ifndef KCG_USER_DEFINED_INIT
void indexOf_nthPassedBG_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;

  outC->_L55 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L51 = kcg_lit_int32(0);
  outC->_L52 = kcg_lit_int32(0);
  outC->_L53 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_lit_int32(0);
  outC->_L40.index = kcg_lit_int32(0);
  outC->_L40.noOfFoundBGs = kcg_lit_int32(0);
  outC->_L40.BGFound = kcg_true;
  outC->_L39 = kcg_lit_int32(0);
  outC->_L38 = kcg_lit_int32(0);
  outC->_L37 = kcg_lit_int32(0);
  outC->_L33.index = kcg_lit_int32(0);
  outC->_L33.noOfFoundBGs = kcg_lit_int32(0);
  outC->_L33.BGFound = kcg_true;
  outC->_L32 = Q_LINK_Unlinked;
  outC->_L31 = Q_LINK_Unlinked;
  outC->_L30 = kcg_true;
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = Q_LINK_Unlinked;
  outC->_L20 = Q_LINK_Unlinked;
  outC->_L19 = kcg_true;
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
  outC->acc_out.index = kcg_lit_int32(0);
  outC->acc_out.noOfFoundBGs = kcg_lit_int32(0);
  outC->acc_out.BGFound = kcg_true;
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void indexOf_nthPassedBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

