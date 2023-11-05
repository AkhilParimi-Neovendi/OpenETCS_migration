/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG/ */
void indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* linked/ */
  kcg_bool linked,
  /* n/ */
  kcg_int32 n,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* enable/ */
  kcg_bool enable,
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg acc;
  static kcg_size idx2;
  static kcg_int32 noname;

  outC->_L22 = kcg_lit_int32(0);
  outC->_L20 = n;
  outC->_L21 = outC->_L20 > outC->_L22;
  outC->_L6 = enable;
  outC->_L23 = outC->_L6 & outC->_L21;
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L15,
    (BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *)
      &cBG_find_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg);
  outC->_L13 = linked;
  /* _L14/ */
  for (idx = 0; idx < 41; idx++) {
    outC->_L14[idx] = outC->_L13;
  }
  outC->_L16 = n;
  /* _L17/ */
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L17[idx1] = outC->_L16;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L4, BGs);
  kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L1,
    &outC->_L15);
  /* _L3= */
  if (outC->_L23) {
    /* _L3= */
    for (idx2 = 0; idx2 < 41; idx2++) {
      kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &acc,
        &outC->_L1);
      /* _L3=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr#1)/ */
      indexOf_nthPassedBG_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        /* _L3= */(kcg_int32) idx2,
        &acc,
        outC->_L14[idx2],
        outC->_L17[idx2],
        &outC->_L4[idx2],
        &outC->Context_indexOf_nthPassedBG_itr_1[idx2]);
      kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        &outC->_L1,
        &outC->Context_indexOf_nthPassedBG_itr_1[idx2].acc_out);
      outC->_L3 = /* _L3= */(kcg_int32) (idx2 + 1);
      /* _L3= */
      if (!outC->Context_indexOf_nthPassedBG_itr_1[idx2].cont) {
        break;
      }
    }
  }
  else {
    outC->_L3 = kcg_lit_int32(0);
  }
  outC->_L19 = outC->_L1.BGFound;
  outC->_L18 = outC->_L1.index;
  outC->BG_found = outC->_L19;
  outC->indexOfBG = outC->_L18;
  noname = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void indexOf_nthPassedBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L23 = kcg_true;
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L17[idx1] = kcg_lit_int32(0);
  }
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15.index = kcg_lit_int32(0);
  outC->_L15.noOfFoundBGs = kcg_lit_int32(0);
  outC->_L15.BGFound = kcg_true;
  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L14[idx2] = kcg_true;
  }
  outC->_L13 = kcg_true;
  outC->_L6 = kcg_true;
  for (idx4 = 0; idx4 < 41; idx4++) {
    outC->_L4[idx4].valid = kcg_true;
    outC->_L4[idx4].nid_c = kcg_lit_int32(0);
    outC->_L4[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L4[idx4].q_link = Q_LINK_Unlinked;
    outC->_L4[idx4].location.nominal = kcg_lit_int32(0);
    outC->_L4[idx4].location.d_min = kcg_lit_int32(0);
    outC->_L4[idx4].location.d_max = kcg_lit_int32(0);
    outC->_L4[idx4].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.valid = kcg_true;
    outC->_L4[idx4].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L4[idx4].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L4[idx4].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L4[idx4].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4[idx4].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4[idx4].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4[idx4].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.valid = kcg_true;
    outC->_L4[idx4].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L4[idx4].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L4[idx4].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4[idx4].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L4[idx4].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L4[idx4].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L4[idx4].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L4[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L4[idx4].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L4[idx4].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L4[idx4].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx3 = 0; idx3 < 33; idx3++) {
      outC->_L4[idx4].infoFromPassing.linkedBGs[idx3].valid = kcg_true;
      outC->_L4[idx4].infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
      outC->_L4[idx4].infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
      outC->_L4[idx4].infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
      outC->_L4[idx4].infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
      outC->_L4[idx4].infoFromPassing.linkedBGs[idx3].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L4[idx4].infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
      outC->_L4[idx4].infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
      outC->_L4[idx4].infoFromPassing.linkedBGs[idx3].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L4[idx4].infoFromPassing.linkedBGs[idx3].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L4[idx4].infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
    }
    outC->_L4[idx4].missed = kcg_true;
  }
  outC->_L3 = kcg_lit_int32(0);
  outC->_L1.index = kcg_lit_int32(0);
  outC->_L1.noOfFoundBGs = kcg_lit_int32(0);
  outC->_L1.BGFound = kcg_true;
  outC->BG_found = kcg_true;
  outC->indexOfBG = kcg_lit_int32(0);
  for (idx = 0; idx < 41; idx++) {
    /* _L3=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr#1)/ */
    indexOf_nthPassedBG_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_indexOf_nthPassedBG_itr_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void indexOf_nthPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L3=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOf_nthPassedBG_itr#1)/ */
    indexOf_nthPassedBG_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_indexOf_nthPassedBG_itr_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** indexOf_nthPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

