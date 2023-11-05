/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex/ */
void insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  /* BGs_in/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs_in,
  /* indexOfBG/ */
  kcg_int32 indexOfBG,
  /* insert/ */
  kcg_bool insert,
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_int32 noname;

  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L29, BGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L28, &outC->_L29[40]);
  outC->_L30 = outC->_L28.valid;
  outC->_L23 = indexOfBG;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, BGs_in);
  if ((kcg_lit_int32(0) <= outC->_L23) & (outC->_L23 < kcg_lit_int32(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L22,
      &outC->_L2[outC->_L23]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L22,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L26, BG);
  /* _L25=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L22,
    &outC->_L26,
    &outC->Context_positionedBGs_ids_equal_1);
  outC->_L25 = outC->Context_positionedBGs_ids_equal_1.idsEqual;
  outC->_L31 = !outC->_L25;
  outC->_L32 = outC->_L31 & outC->_L30;
  outC->_L33 = !outC->_L32;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L19, BG);
  outC->_L27 = outC->_L19.valid;
  outC->_L7 = cMaxNoOfStoredBGs_TrainPosition_Types_Pck;
  outC->_L3 = indexOfBG;
  outC->_L6 = outC->_L3 < outC->_L7;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = outC->_L3 >= outC->_L5;
  outC->_L1 = insert;
  outC->_L8 = outC->_L1 & outC->_L4 & outC->_L6 & outC->_L27;
  outC->_L34 = outC->_L8 & outC->_L33;
  outC->overrun = outC->_L32;
  kcg_copy__42_array(&outC->_L10, (_42_array *) &outC->_L2[0]);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L11,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  /* _L12/ */
  for (idx = 0; idx < 1; idx++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L12[idx], &outC->_L11);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L13[0], &outC->_L12[0]);
  kcg_copy__42_array(&outC->_L13[1], &outC->_L10);
  /* _L21= */
  if (outC->_L25) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L21, &outC->_L2);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L21, &outC->_L13);
  }
  /* _L20/ */
  for (idx1 = 0; idx1 < 41; idx1++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L20[idx1], &outC->_L19);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L18, BGs_in);
  /* _L9/ */
  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L9[idx2] = outC->_L3;
  }
  /* _L16= */
  if (outC->_L34) {
    /* _L16= */
    for (idx3 = 0; idx3 < 41; idx3++) {
      /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr#1)/ */
      insertBG_atIndex_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
        /* _L16= */(kcg_int32) idx3,
        outC->_L9[idx3],
        &outC->_L20[idx3],
        &outC->_L2[idx3],
        &outC->_L21[idx3],
        &outC->Context_insertBG_atIndex_itr_1[idx3]);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L15[idx3],
        &outC->Context_insertBG_atIndex_itr_1[idx3].BG_out);
      outC->_L16 = /* _L16= */(kcg_int32) (idx3 + 1);
      /* _L16= */
      if (!outC->Context_insertBG_atIndex_itr_1[idx3].cont) {
        break;
      }
    }
  }
  else {
    outC->_L16 = kcg_lit_int32(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L16= */
  for (idx3 = /* _L16= */(kcg_size) outC->_L16; idx3 < 41; idx3++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L15[idx3],
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
#endif /* KCG_MAPW_CPY */

  /* _L17= */
  if (outC->_L34) {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L17, &outC->_L15);
  }
  else {
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L17, &outC->_L18);
  }
  noname = outC->_L16;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_out, &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void insertBG_atIndex_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
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
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;

  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L29[idx2].valid = kcg_true;
    outC->_L29[idx2].nid_c = kcg_lit_int32(0);
    outC->_L29[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L29[idx2].q_link = Q_LINK_Unlinked;
    outC->_L29[idx2].location.nominal = kcg_lit_int32(0);
    outC->_L29[idx2].location.d_min = kcg_lit_int32(0);
    outC->_L29[idx2].location.d_max = kcg_lit_int32(0);
    outC->_L29[idx2].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.valid = kcg_true;
    outC->_L29[idx2].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L29[idx2].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L29[idx2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L29[idx2].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L29[idx2].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L29[idx2].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L29[idx2].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.valid = kcg_true;
    outC->_L29[idx2].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L29[idx2].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L29[idx2].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L29[idx2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L29[idx2].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L29[idx2].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L29[idx2].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L29[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L29[idx2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L29[idx2].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L29[idx2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx1 = 0; idx1 < 33; idx1++) {
      outC->_L29[idx2].infoFromPassing.linkedBGs[idx1].valid = kcg_true;
      outC->_L29[idx2].infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
      outC->_L29[idx2].infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
      outC->_L29[idx2].infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
      outC->_L29[idx2].infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
      outC->_L29[idx2].infoFromPassing.linkedBGs[idx1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L29[idx2].infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
      outC->_L29[idx2].infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
      outC->_L29[idx2].infoFromPassing.linkedBGs[idx1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L29[idx2].infoFromPassing.linkedBGs[idx1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L29[idx2].infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
    }
    outC->_L29[idx2].missed = kcg_true;
  }
  outC->_L28.valid = kcg_true;
  outC->_L28.nid_c = kcg_lit_int32(0);
  outC->_L28.nid_bg = kcg_lit_int32(0);
  outC->_L28.q_link = Q_LINK_Unlinked;
  outC->_L28.location.nominal = kcg_lit_int32(0);
  outC->_L28.location.d_min = kcg_lit_int32(0);
  outC->_L28.location.d_max = kcg_lit_int32(0);
  outC->_L28.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.valid = kcg_true;
  outC->_L28.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L28.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L28.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L28.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L28.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L28.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L28.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L28.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.valid = kcg_true;
  outC->_L28.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L28.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L28.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L28.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L28.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L28.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L28.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L28.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L28.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L28.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L28.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L28.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L28.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L28.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L28.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L28.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L28.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L28.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L28.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L28.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L28.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L28.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L28.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L28.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L28.missed = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26.valid = kcg_true;
  outC->_L26.nid_c = kcg_lit_int32(0);
  outC->_L26.nid_bg = kcg_lit_int32(0);
  outC->_L26.q_link = Q_LINK_Unlinked;
  outC->_L26.location.nominal = kcg_lit_int32(0);
  outC->_L26.location.d_min = kcg_lit_int32(0);
  outC->_L26.location.d_max = kcg_lit_int32(0);
  outC->_L26.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.valid = kcg_true;
  outC->_L26.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L26.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L26.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L26.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L26.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L26.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L26.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L26.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L26.infoFromPassing.valid = kcg_true;
  outC->_L26.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L26.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L26.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L26.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L26.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L26.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L26.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L26.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L26.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L26.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L26.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L26.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L26.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L26.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L26.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L26.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L26.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L26.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L26.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L26.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L26.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L26.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L26.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L26.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L26.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L26.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L26.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L26.missed = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22.valid = kcg_true;
  outC->_L22.nid_c = kcg_lit_int32(0);
  outC->_L22.nid_bg = kcg_lit_int32(0);
  outC->_L22.q_link = Q_LINK_Unlinked;
  outC->_L22.location.nominal = kcg_lit_int32(0);
  outC->_L22.location.d_min = kcg_lit_int32(0);
  outC->_L22.location.d_max = kcg_lit_int32(0);
  outC->_L22.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.valid = kcg_true;
  outC->_L22.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L22.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L22.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L22.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L22.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L22.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L22.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L22.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.valid = kcg_true;
  outC->_L22.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L22.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L22.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L22.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L22.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L22.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L22.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L22.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L22.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L22.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L22.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L22.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L22.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
    outC->_L22.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L22.infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L22.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
    outC->_L22.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L22.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
    outC->_L22.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L22.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L22.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L22.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
  }
  outC->_L22.missed = kcg_true;
  for (idx7 = 0; idx7 < 41; idx7++) {
    outC->_L21[idx7].valid = kcg_true;
    outC->_L21[idx7].nid_c = kcg_lit_int32(0);
    outC->_L21[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L21[idx7].q_link = Q_LINK_Unlinked;
    outC->_L21[idx7].location.nominal = kcg_lit_int32(0);
    outC->_L21[idx7].location.d_min = kcg_lit_int32(0);
    outC->_L21[idx7].location.d_max = kcg_lit_int32(0);
    outC->_L21[idx7].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.valid = kcg_true;
    outC->_L21[idx7].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L21[idx7].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L21[idx7].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L21[idx7].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21[idx7].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21[idx7].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21[idx7].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.valid = kcg_true;
    outC->_L21[idx7].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L21[idx7].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L21[idx7].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L21[idx7].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L21[idx7].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L21[idx7].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L21[idx7].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L21[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L21[idx7].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L21[idx7].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L21[idx7].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx6 = 0; idx6 < 33; idx6++) {
      outC->_L21[idx7].infoFromPassing.linkedBGs[idx6].valid = kcg_true;
      outC->_L21[idx7].infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int32(0);
      outC->_L21[idx7].infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
      outC->_L21[idx7].infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
      outC->_L21[idx7].infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int32(0);
      outC->_L21[idx7].infoFromPassing.linkedBGs[idx6].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L21[idx7].infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int32(0);
      outC->_L21[idx7].infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int32(0);
      outC->_L21[idx7].infoFromPassing.linkedBGs[idx6].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L21[idx7].infoFromPassing.linkedBGs[idx6].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L21[idx7].infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int32(0);
    }
    outC->_L21[idx7].missed = kcg_true;
  }
  for (idx9 = 0; idx9 < 41; idx9++) {
    outC->_L20[idx9].valid = kcg_true;
    outC->_L20[idx9].nid_c = kcg_lit_int32(0);
    outC->_L20[idx9].nid_bg = kcg_lit_int32(0);
    outC->_L20[idx9].q_link = Q_LINK_Unlinked;
    outC->_L20[idx9].location.nominal = kcg_lit_int32(0);
    outC->_L20[idx9].location.d_min = kcg_lit_int32(0);
    outC->_L20[idx9].location.d_max = kcg_lit_int32(0);
    outC->_L20[idx9].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.valid = kcg_true;
    outC->_L20[idx9].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L20[idx9].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L20[idx9].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L20[idx9].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L20[idx9].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L20[idx9].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L20[idx9].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.valid = kcg_true;
    outC->_L20[idx9].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L20[idx9].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L20[idx9].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L20[idx9].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L20[idx9].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L20[idx9].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L20[idx9].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L20[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L20[idx9].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L20[idx9].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L20[idx9].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx8 = 0; idx8 < 33; idx8++) {
      outC->_L20[idx9].infoFromPassing.linkedBGs[idx8].valid = kcg_true;
      outC->_L20[idx9].infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int32(0);
      outC->_L20[idx9].infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
      outC->_L20[idx9].infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
      outC->_L20[idx9].infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
      outC->_L20[idx9].infoFromPassing.linkedBGs[idx8].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L20[idx9].infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
      outC->_L20[idx9].infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
      outC->_L20[idx9].infoFromPassing.linkedBGs[idx8].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L20[idx9].infoFromPassing.linkedBGs[idx8].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L20[idx9].infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int32(0);
    }
    outC->_L20[idx9].missed = kcg_true;
  }
  outC->_L19.valid = kcg_true;
  outC->_L19.nid_c = kcg_lit_int32(0);
  outC->_L19.nid_bg = kcg_lit_int32(0);
  outC->_L19.q_link = Q_LINK_Unlinked;
  outC->_L19.location.nominal = kcg_lit_int32(0);
  outC->_L19.location.d_min = kcg_lit_int32(0);
  outC->_L19.location.d_max = kcg_lit_int32(0);
  outC->_L19.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.valid = kcg_true;
  outC->_L19.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L19.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L19.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L19.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L19.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L19.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L19.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L19.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.valid = kcg_true;
  outC->_L19.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L19.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L19.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L19.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L19.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L19.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L19.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L19.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L19.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L19.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L19.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L19.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L19.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->_L19.infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
    outC->_L19.infoFromPassing.linkedBGs[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L19.infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19.infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int32(0);
    outC->_L19.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19.infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int32(0);
  }
  outC->_L19.missed = kcg_true;
  for (idx12 = 0; idx12 < 41; idx12++) {
    outC->_L18[idx12].valid = kcg_true;
    outC->_L18[idx12].nid_c = kcg_lit_int32(0);
    outC->_L18[idx12].nid_bg = kcg_lit_int32(0);
    outC->_L18[idx12].q_link = Q_LINK_Unlinked;
    outC->_L18[idx12].location.nominal = kcg_lit_int32(0);
    outC->_L18[idx12].location.d_min = kcg_lit_int32(0);
    outC->_L18[idx12].location.d_max = kcg_lit_int32(0);
    outC->_L18[idx12].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.valid = kcg_true;
    outC->_L18[idx12].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L18[idx12].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L18[idx12].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L18[idx12].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18[idx12].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18[idx12].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L18[idx12].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.valid = kcg_true;
    outC->_L18[idx12].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L18[idx12].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L18[idx12].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L18[idx12].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L18[idx12].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L18[idx12].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L18[idx12].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L18[idx12].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L18[idx12].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L18[idx12].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L18[idx12].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx11 = 0; idx11 < 33; idx11++) {
      outC->_L18[idx12].infoFromPassing.linkedBGs[idx11].valid = kcg_true;
      outC->_L18[idx12].infoFromPassing.linkedBGs[idx11].nid_LRBG = kcg_lit_int32(0);
      outC->_L18[idx12].infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
      outC->_L18[idx12].infoFromPassing.linkedBGs[idx11].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L18[idx12].infoFromPassing.linkedBGs[idx11].d_link = kcg_lit_int32(0);
      outC->_L18[idx12].infoFromPassing.linkedBGs[idx11].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L18[idx12].infoFromPassing.linkedBGs[idx11].nid_c = kcg_lit_int32(0);
      outC->_L18[idx12].infoFromPassing.linkedBGs[idx11].nid_bg = kcg_lit_int32(0);
      outC->_L18[idx12].infoFromPassing.linkedBGs[idx11].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L18[idx12].infoFromPassing.linkedBGs[idx11].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L18[idx12].infoFromPassing.linkedBGs[idx11].q_locacc = kcg_lit_int32(0);
    }
    outC->_L18[idx12].missed = kcg_true;
  }
  for (idx14 = 0; idx14 < 41; idx14++) {
    outC->_L17[idx14].valid = kcg_true;
    outC->_L17[idx14].nid_c = kcg_lit_int32(0);
    outC->_L17[idx14].nid_bg = kcg_lit_int32(0);
    outC->_L17[idx14].q_link = Q_LINK_Unlinked;
    outC->_L17[idx14].location.nominal = kcg_lit_int32(0);
    outC->_L17[idx14].location.d_min = kcg_lit_int32(0);
    outC->_L17[idx14].location.d_max = kcg_lit_int32(0);
    outC->_L17[idx14].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.valid = kcg_true;
    outC->_L17[idx14].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L17[idx14].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L17[idx14].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L17[idx14].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L17[idx14].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L17[idx14].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L17[idx14].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.valid = kcg_true;
    outC->_L17[idx14].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L17[idx14].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L17[idx14].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L17[idx14].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L17[idx14].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L17[idx14].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L17[idx14].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L17[idx14].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L17[idx14].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L17[idx14].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L17[idx14].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx13 = 0; idx13 < 33; idx13++) {
      outC->_L17[idx14].infoFromPassing.linkedBGs[idx13].valid = kcg_true;
      outC->_L17[idx14].infoFromPassing.linkedBGs[idx13].nid_LRBG = kcg_lit_int32(0);
      outC->_L17[idx14].infoFromPassing.linkedBGs[idx13].q_dir = Q_DIR_Reverse;
      outC->_L17[idx14].infoFromPassing.linkedBGs[idx13].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L17[idx14].infoFromPassing.linkedBGs[idx13].d_link = kcg_lit_int32(0);
      outC->_L17[idx14].infoFromPassing.linkedBGs[idx13].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L17[idx14].infoFromPassing.linkedBGs[idx13].nid_c = kcg_lit_int32(0);
      outC->_L17[idx14].infoFromPassing.linkedBGs[idx13].nid_bg = kcg_lit_int32(0);
      outC->_L17[idx14].infoFromPassing.linkedBGs[idx13].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L17[idx14].infoFromPassing.linkedBGs[idx13].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L17[idx14].infoFromPassing.linkedBGs[idx13].q_locacc = kcg_lit_int32(0);
    }
    outC->_L17[idx14].missed = kcg_true;
  }
  outC->_L16 = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 41; idx16++) {
    outC->_L15[idx16].valid = kcg_true;
    outC->_L15[idx16].nid_c = kcg_lit_int32(0);
    outC->_L15[idx16].nid_bg = kcg_lit_int32(0);
    outC->_L15[idx16].q_link = Q_LINK_Unlinked;
    outC->_L15[idx16].location.nominal = kcg_lit_int32(0);
    outC->_L15[idx16].location.d_min = kcg_lit_int32(0);
    outC->_L15[idx16].location.d_max = kcg_lit_int32(0);
    outC->_L15[idx16].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.valid = kcg_true;
    outC->_L15[idx16].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L15[idx16].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L15[idx16].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L15[idx16].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15[idx16].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15[idx16].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15[idx16].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.valid = kcg_true;
    outC->_L15[idx16].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L15[idx16].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L15[idx16].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L15[idx16].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L15[idx16].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L15[idx16].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L15[idx16].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L15[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L15[idx16].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L15[idx16].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L15[idx16].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx15 = 0; idx15 < 33; idx15++) {
      outC->_L15[idx16].infoFromPassing.linkedBGs[idx15].valid = kcg_true;
      outC->_L15[idx16].infoFromPassing.linkedBGs[idx15].nid_LRBG = kcg_lit_int32(0);
      outC->_L15[idx16].infoFromPassing.linkedBGs[idx15].q_dir = Q_DIR_Reverse;
      outC->_L15[idx16].infoFromPassing.linkedBGs[idx15].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L15[idx16].infoFromPassing.linkedBGs[idx15].d_link = kcg_lit_int32(0);
      outC->_L15[idx16].infoFromPassing.linkedBGs[idx15].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L15[idx16].infoFromPassing.linkedBGs[idx15].nid_c = kcg_lit_int32(0);
      outC->_L15[idx16].infoFromPassing.linkedBGs[idx15].nid_bg = kcg_lit_int32(0);
      outC->_L15[idx16].infoFromPassing.linkedBGs[idx15].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L15[idx16].infoFromPassing.linkedBGs[idx15].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L15[idx16].infoFromPassing.linkedBGs[idx15].q_locacc = kcg_lit_int32(0);
    }
    outC->_L15[idx16].missed = kcg_true;
  }
  for (idx18 = 0; idx18 < 41; idx18++) {
    outC->_L13[idx18].valid = kcg_true;
    outC->_L13[idx18].nid_c = kcg_lit_int32(0);
    outC->_L13[idx18].nid_bg = kcg_lit_int32(0);
    outC->_L13[idx18].q_link = Q_LINK_Unlinked;
    outC->_L13[idx18].location.nominal = kcg_lit_int32(0);
    outC->_L13[idx18].location.d_min = kcg_lit_int32(0);
    outC->_L13[idx18].location.d_max = kcg_lit_int32(0);
    outC->_L13[idx18].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.valid = kcg_true;
    outC->_L13[idx18].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L13[idx18].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L13[idx18].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L13[idx18].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L13[idx18].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L13[idx18].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L13[idx18].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.valid = kcg_true;
    outC->_L13[idx18].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L13[idx18].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L13[idx18].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L13[idx18].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L13[idx18].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L13[idx18].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L13[idx18].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L13[idx18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L13[idx18].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L13[idx18].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L13[idx18].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx17 = 0; idx17 < 33; idx17++) {
      outC->_L13[idx18].infoFromPassing.linkedBGs[idx17].valid = kcg_true;
      outC->_L13[idx18].infoFromPassing.linkedBGs[idx17].nid_LRBG = kcg_lit_int32(0);
      outC->_L13[idx18].infoFromPassing.linkedBGs[idx17].q_dir = Q_DIR_Reverse;
      outC->_L13[idx18].infoFromPassing.linkedBGs[idx17].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L13[idx18].infoFromPassing.linkedBGs[idx17].d_link = kcg_lit_int32(0);
      outC->_L13[idx18].infoFromPassing.linkedBGs[idx17].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L13[idx18].infoFromPassing.linkedBGs[idx17].nid_c = kcg_lit_int32(0);
      outC->_L13[idx18].infoFromPassing.linkedBGs[idx17].nid_bg = kcg_lit_int32(0);
      outC->_L13[idx18].infoFromPassing.linkedBGs[idx17].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L13[idx18].infoFromPassing.linkedBGs[idx17].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L13[idx18].infoFromPassing.linkedBGs[idx17].q_locacc = kcg_lit_int32(0);
    }
    outC->_L13[idx18].missed = kcg_true;
  }
  for (idx20 = 0; idx20 < 1; idx20++) {
    outC->_L12[idx20].valid = kcg_true;
    outC->_L12[idx20].nid_c = kcg_lit_int32(0);
    outC->_L12[idx20].nid_bg = kcg_lit_int32(0);
    outC->_L12[idx20].q_link = Q_LINK_Unlinked;
    outC->_L12[idx20].location.nominal = kcg_lit_int32(0);
    outC->_L12[idx20].location.d_min = kcg_lit_int32(0);
    outC->_L12[idx20].location.d_max = kcg_lit_int32(0);
    outC->_L12[idx20].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.valid = kcg_true;
    outC->_L12[idx20].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L12[idx20].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L12[idx20].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L12[idx20].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12[idx20].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12[idx20].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12[idx20].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.valid = kcg_true;
    outC->_L12[idx20].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L12[idx20].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L12[idx20].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L12[idx20].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L12[idx20].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L12[idx20].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L12[idx20].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L12[idx20].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L12[idx20].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L12[idx20].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L12[idx20].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx19 = 0; idx19 < 33; idx19++) {
      outC->_L12[idx20].infoFromPassing.linkedBGs[idx19].valid = kcg_true;
      outC->_L12[idx20].infoFromPassing.linkedBGs[idx19].nid_LRBG = kcg_lit_int32(0);
      outC->_L12[idx20].infoFromPassing.linkedBGs[idx19].q_dir = Q_DIR_Reverse;
      outC->_L12[idx20].infoFromPassing.linkedBGs[idx19].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L12[idx20].infoFromPassing.linkedBGs[idx19].d_link = kcg_lit_int32(0);
      outC->_L12[idx20].infoFromPassing.linkedBGs[idx19].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L12[idx20].infoFromPassing.linkedBGs[idx19].nid_c = kcg_lit_int32(0);
      outC->_L12[idx20].infoFromPassing.linkedBGs[idx19].nid_bg = kcg_lit_int32(0);
      outC->_L12[idx20].infoFromPassing.linkedBGs[idx19].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L12[idx20].infoFromPassing.linkedBGs[idx19].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L12[idx20].infoFromPassing.linkedBGs[idx19].q_locacc = kcg_lit_int32(0);
    }
    outC->_L12[idx20].missed = kcg_true;
  }
  outC->_L11.valid = kcg_true;
  outC->_L11.nid_c = kcg_lit_int32(0);
  outC->_L11.nid_bg = kcg_lit_int32(0);
  outC->_L11.q_link = Q_LINK_Unlinked;
  outC->_L11.location.nominal = kcg_lit_int32(0);
  outC->_L11.location.d_min = kcg_lit_int32(0);
  outC->_L11.location.d_max = kcg_lit_int32(0);
  outC->_L11.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.valid = kcg_true;
  outC->_L11.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L11.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L11.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L11.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L11.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L11.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L11.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L11.infoFromPassing.valid = kcg_true;
  outC->_L11.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L11.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L11.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L11.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L11.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L11.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L11.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L11.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L11.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L11.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->_L11.infoFromPassing.linkedBGs[idx21].valid = kcg_true;
    outC->_L11.infoFromPassing.linkedBGs[idx21].nid_LRBG = kcg_lit_int32(0);
    outC->_L11.infoFromPassing.linkedBGs[idx21].q_dir = Q_DIR_Reverse;
    outC->_L11.infoFromPassing.linkedBGs[idx21].q_scale = Q_SCALE_10_cm_scale;
    outC->_L11.infoFromPassing.linkedBGs[idx21].d_link = kcg_lit_int32(0);
    outC->_L11.infoFromPassing.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11.infoFromPassing.linkedBGs[idx21].nid_c = kcg_lit_int32(0);
    outC->_L11.infoFromPassing.linkedBGs[idx21].nid_bg = kcg_lit_int32(0);
    outC->_L11.infoFromPassing.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11.infoFromPassing.linkedBGs[idx21].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L11.infoFromPassing.linkedBGs[idx21].q_locacc = kcg_lit_int32(0);
  }
  outC->_L11.missed = kcg_true;
  for (idx23 = 0; idx23 < 40; idx23++) {
    outC->_L10[idx23].valid = kcg_true;
    outC->_L10[idx23].nid_c = kcg_lit_int32(0);
    outC->_L10[idx23].nid_bg = kcg_lit_int32(0);
    outC->_L10[idx23].q_link = Q_LINK_Unlinked;
    outC->_L10[idx23].location.nominal = kcg_lit_int32(0);
    outC->_L10[idx23].location.d_min = kcg_lit_int32(0);
    outC->_L10[idx23].location.d_max = kcg_lit_int32(0);
    outC->_L10[idx23].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.valid = kcg_true;
    outC->_L10[idx23].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L10[idx23].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L10[idx23].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L10[idx23].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L10[idx23].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L10[idx23].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L10[idx23].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.valid = kcg_true;
    outC->_L10[idx23].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L10[idx23].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L10[idx23].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L10[idx23].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L10[idx23].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L10[idx23].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L10[idx23].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L10[idx23].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L10[idx23].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L10[idx23].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L10[idx23].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx22 = 0; idx22 < 33; idx22++) {
      outC->_L10[idx23].infoFromPassing.linkedBGs[idx22].valid = kcg_true;
      outC->_L10[idx23].infoFromPassing.linkedBGs[idx22].nid_LRBG = kcg_lit_int32(0);
      outC->_L10[idx23].infoFromPassing.linkedBGs[idx22].q_dir = Q_DIR_Reverse;
      outC->_L10[idx23].infoFromPassing.linkedBGs[idx22].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L10[idx23].infoFromPassing.linkedBGs[idx22].d_link = kcg_lit_int32(0);
      outC->_L10[idx23].infoFromPassing.linkedBGs[idx22].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L10[idx23].infoFromPassing.linkedBGs[idx22].nid_c = kcg_lit_int32(0);
      outC->_L10[idx23].infoFromPassing.linkedBGs[idx22].nid_bg = kcg_lit_int32(0);
      outC->_L10[idx23].infoFromPassing.linkedBGs[idx22].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L10[idx23].infoFromPassing.linkedBGs[idx22].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L10[idx23].infoFromPassing.linkedBGs[idx22].q_locacc = kcg_lit_int32(0);
    }
    outC->_L10[idx23].missed = kcg_true;
  }
  for (idx24 = 0; idx24 < 41; idx24++) {
    outC->_L9[idx24] = kcg_lit_int32(0);
  }
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 41; idx26++) {
    outC->_L2[idx26].valid = kcg_true;
    outC->_L2[idx26].nid_c = kcg_lit_int32(0);
    outC->_L2[idx26].nid_bg = kcg_lit_int32(0);
    outC->_L2[idx26].q_link = Q_LINK_Unlinked;
    outC->_L2[idx26].location.nominal = kcg_lit_int32(0);
    outC->_L2[idx26].location.d_min = kcg_lit_int32(0);
    outC->_L2[idx26].location.d_max = kcg_lit_int32(0);
    outC->_L2[idx26].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.valid = kcg_true;
    outC->_L2[idx26].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L2[idx26].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L2[idx26].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L2[idx26].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2[idx26].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2[idx26].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2[idx26].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.valid = kcg_true;
    outC->_L2[idx26].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L2[idx26].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2[idx26].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2[idx26].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L2[idx26].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2[idx26].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L2[idx26].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L2[idx26].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L2[idx26].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L2[idx26].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L2[idx26].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx25 = 0; idx25 < 33; idx25++) {
      outC->_L2[idx26].infoFromPassing.linkedBGs[idx25].valid = kcg_true;
      outC->_L2[idx26].infoFromPassing.linkedBGs[idx25].nid_LRBG = kcg_lit_int32(0);
      outC->_L2[idx26].infoFromPassing.linkedBGs[idx25].q_dir = Q_DIR_Reverse;
      outC->_L2[idx26].infoFromPassing.linkedBGs[idx25].q_scale = Q_SCALE_10_cm_scale;
      outC->_L2[idx26].infoFromPassing.linkedBGs[idx25].d_link = kcg_lit_int32(0);
      outC->_L2[idx26].infoFromPassing.linkedBGs[idx25].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L2[idx26].infoFromPassing.linkedBGs[idx25].nid_c = kcg_lit_int32(0);
      outC->_L2[idx26].infoFromPassing.linkedBGs[idx25].nid_bg = kcg_lit_int32(0);
      outC->_L2[idx26].infoFromPassing.linkedBGs[idx25].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L2[idx26].infoFromPassing.linkedBGs[idx25].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L2[idx26].infoFromPassing.linkedBGs[idx25].q_locacc = kcg_lit_int32(0);
    }
    outC->_L2[idx26].missed = kcg_true;
  }
  outC->_L1 = kcg_true;
  outC->overrun = kcg_true;
  for (idx28 = 0; idx28 < 41; idx28++) {
    outC->BGs_out[idx28].valid = kcg_true;
    outC->BGs_out[idx28].nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx28].nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx28].q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx28].location.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx28].location.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx28].location.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx28].seqNoOnTrack = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.valid = kcg_true;
    outC->BGs_out[idx28].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_out[idx28].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_out[idx28].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs_out[idx28].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_out[idx28].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_out[idx28].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_out[idx28].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.valid = kcg_true;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->BGs_out[idx28].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_out[idx28].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx27 = 0; idx27 < 33; idx27++) {
      outC->BGs_out[idx28].infoFromPassing.linkedBGs[idx27].valid = kcg_true;
      outC->BGs_out[idx28].infoFromPassing.linkedBGs[idx27].nid_LRBG =
        kcg_lit_int32(0);
      outC->BGs_out[idx28].infoFromPassing.linkedBGs[idx27].q_dir = Q_DIR_Reverse;
      outC->BGs_out[idx28].infoFromPassing.linkedBGs[idx27].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_out[idx28].infoFromPassing.linkedBGs[idx27].d_link = kcg_lit_int32(0);
      outC->BGs_out[idx28].infoFromPassing.linkedBGs[idx27].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_out[idx28].infoFromPassing.linkedBGs[idx27].nid_c = kcg_lit_int32(0);
      outC->BGs_out[idx28].infoFromPassing.linkedBGs[idx27].nid_bg = kcg_lit_int32(0);
      outC->BGs_out[idx28].infoFromPassing.linkedBGs[idx27].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_out[idx28].infoFromPassing.linkedBGs[idx27].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_out[idx28].infoFromPassing.linkedBGs[idx27].q_locacc =
        kcg_lit_int32(0);
    }
    outC->BGs_out[idx28].missed = kcg_true;
  }
  for (idx = 0; idx < 41; idx++) {
    /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr#1)/ */
    insertBG_atIndex_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_insertBG_atIndex_itr_1[idx]);
  }
  /* _L25=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */
  positionedBGs_ids_equal_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_equal_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void insertBG_atIndex_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L16=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::insertBG_atIndex_itr#1)/ */
    insertBG_atIndex_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_insertBG_atIndex_itr_1[idx]);
  }
  /* _L25=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_equal_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** insertBG_atIndex_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

