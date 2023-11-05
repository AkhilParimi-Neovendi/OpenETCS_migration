/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG/ */
void lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* BG/ */
  positionedBG_T_TrainPosition_Types_Pck *BG,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* linked/ */
  kcg_bool linked,
  /* reset/ */
  kcg_bool reset,
  /* enable/ */
  kcg_bool enable,
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_bool noname;
  /* storedBG_loc/ */
  static positionedBG_T_TrainPosition_Types_Pck last_storedBG_loc;
  /* prvBG_loc/ */
  static positionedBG_T_TrainPosition_Types_Pck last_prvBG_loc;
  /* BG/ */
  static positionedBG_T_TrainPosition_Types_Pck last_BG;

  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&last_BG, &outC->mem_BG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->mem_BG, BG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L6,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->InitVal_Memory_1_struct,
    &outC->_L6);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L9_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  outC->_L12 = reset;
  outC->Reset_Memory_1_struct = outC->_L12;
  outC->_L1_Memory_1_struct = outC->Reset_Memory_1_struct;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L2_Memory_1_struct,
    &outC->InitVal_Memory_1_struct);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &last_storedBG_loc,
    &outC->storedBG_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->InitVal_Memory_2_struct,
    &outC->_L6);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L9_Memory_2_struct,
    &outC->InitVal_Memory_2_struct);
  /* @2/_L5= */
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L5_Memory_2_struct,
      &outC->_L9_Memory_2_struct);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L5_Memory_2_struct,
      &outC->_L8_Memory_2_struct);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L15, BG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->M_Input_Memory_2_struct,
    &outC->_L15);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L6_Memory_2_struct,
    &outC->M_Input_Memory_2_struct);
  outC->_L34 = Q_LINK_Unlinked;
  outC->_L33 = Q_LINK_Linked;
  outC->_L32 = linked;
  /* _L36= */
  if (outC->_L32) {
    outC->_L36 = outC->_L33;
  }
  else {
    outC->_L36 = outC->_L34;
  }
  outC->_L37 = outC->_L15.q_link;
  outC->_L35 = outC->_L37 == outC->_L36;
  outC->_L40 = outC->_L15.infoFromPassing.BG_Header.valid;
  outC->_L39 = outC->_L15.infoFromPassing.valid;
  outC->_L16 = outC->_L15.valid;
  outC->_L38 = outC->_L16 & outC->_L39 & outC->_L40 & outC->_L35;
  outC->MemCond_Memory_2_struct = outC->_L38;
  outC->_L3_Memory_2_struct = outC->MemCond_Memory_2_struct;
  /* @2/_L7= */
  if (outC->_L3_Memory_2_struct) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L7_Memory_2_struct,
      &outC->_L6_Memory_2_struct);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L7_Memory_2_struct,
      &outC->_L5_Memory_2_struct);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L2_Memory_2_struct,
    &outC->InitVal_Memory_2_struct);
  outC->Reset_Memory_2_struct = outC->_L12;
  outC->_L1_Memory_2_struct = outC->Reset_Memory_2_struct;
  /* @2/_L8= */
  if (outC->_L1_Memory_2_struct) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L8_Memory_2_struct,
      &outC->_L2_Memory_2_struct);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L8_Memory_2_struct,
      &outC->_L7_Memory_2_struct);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->Out_Memory_2_struct,
    &outC->_L8_Memory_2_struct);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L14,
    &outC->Out_Memory_2_struct);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->storedBG_loc,
    &outC->_L14);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L18,
    &outC->storedBG_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L17,
    &last_storedBG_loc);
  /* _L19=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#2)/ */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L18,
    &outC->_L17,
    &outC->Context_positionedBGs_ids_equal_2);
  outC->_L19 = outC->Context_positionedBGs_ids_equal_2.idsEqual;
  outC->_L20 = !outC->_L19;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &last_prvBG_loc,
    &outC->prvBG_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L10, &last_prvBG_loc);
  /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L18,
    &outC->_L10,
    &outC->Context_positionedBGs_ids_equal_1);
  outC->_L9 = outC->Context_positionedBGs_ids_equal_1.idsEqual;
  outC->_L2 = !outC->_L9;
  outC->_L5 = outC->_L18.valid;
  outC->_L13 = !kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L17,
      &outC->_L18);
  outC->_L8 = outC->_L13 & outC->_L5 & outC->_L2 & outC->_L20;
  outC->MemCond_Memory_1_struct = outC->_L8;
  outC->_L3_Memory_1_struct = outC->MemCond_Memory_1_struct;
  /* @1/_L5= */
  if (outC->init) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L5_Memory_1_struct,
      &outC->_L9_Memory_1_struct);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L5_Memory_1_struct,
      &outC->_L8_Memory_1_struct);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->M_Input_Memory_1_struct,
    &outC->_L17);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L6_Memory_1_struct,
    &outC->M_Input_Memory_1_struct);
  /* @1/_L7= */
  if (outC->_L3_Memory_1_struct) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L7_Memory_1_struct,
      &outC->_L6_Memory_1_struct);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L7_Memory_1_struct,
      &outC->_L5_Memory_1_struct);
  }
  /* @1/_L8= */
  if (outC->_L1_Memory_1_struct) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L8_Memory_1_struct,
      &outC->_L2_Memory_1_struct);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L8_Memory_1_struct,
      &outC->_L7_Memory_1_struct);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->Out_Memory_1_struct,
    &outC->_L8_Memory_1_struct);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L4,
    &outC->Out_Memory_1_struct);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->prvBG_loc, &outC->_L4);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L41, &outC->prvBG_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->lastBG, &outC->_L14);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L29, &outC->prvBG_loc);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L24, BGs);
  outC->_L25 = enable;
  /* _L21=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L41,
    &outC->_L24,
    outC->_L25,
    &outC->Context_indexOfBG_by_id_1);
  outC->_L21 = outC->Context_indexOfBG_by_id_1.indexOfBG;
  outC->_L22 = outC->Context_indexOfBG_by_id_1.BG_found;
  outC->_L23 = outC->Context_indexOfBG_by_id_1.indexValid;
  if ((kcg_lit_int32(0) <= outC->_L21) & (outC->_L21 < kcg_lit_int32(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L26,
      &outC->_L24[outC->_L21]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L26,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  /* _L27= */
  if (outC->_L22) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L27, &outC->_L26);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L27, &outC->_L29);
  }
  noname = outC->_L23;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->prvBG, &outC->_L27);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void lastAndPrevBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
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
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;

  outC->_L41.valid = kcg_true;
  outC->_L41.nid_c = kcg_lit_int32(0);
  outC->_L41.nid_bg = kcg_lit_int32(0);
  outC->_L41.q_link = Q_LINK_Unlinked;
  outC->_L41.location.nominal = kcg_lit_int32(0);
  outC->_L41.location.d_min = kcg_lit_int32(0);
  outC->_L41.location.d_max = kcg_lit_int32(0);
  outC->_L41.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.valid = kcg_true;
  outC->_L41.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L41.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L41.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L41.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L41.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L41.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L41.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L41.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L41.infoFromPassing.valid = kcg_true;
  outC->_L41.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L41.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L41.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L41.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L41.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L41.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L41.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L41.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L41.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L41.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L41.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L41.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L41.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L41.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L41.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L41.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L41.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L41.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L41.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L41.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L41.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L41.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L41.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L41.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L41.missed = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L33 = Q_LINK_Unlinked;
  outC->_L34 = Q_LINK_Unlinked;
  outC->_L35 = kcg_true;
  outC->_L36 = Q_LINK_Unlinked;
  outC->_L37 = Q_LINK_Unlinked;
  outC->_L29.valid = kcg_true;
  outC->_L29.nid_c = kcg_lit_int32(0);
  outC->_L29.nid_bg = kcg_lit_int32(0);
  outC->_L29.q_link = Q_LINK_Unlinked;
  outC->_L29.location.nominal = kcg_lit_int32(0);
  outC->_L29.location.d_min = kcg_lit_int32(0);
  outC->_L29.location.d_max = kcg_lit_int32(0);
  outC->_L29.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.valid = kcg_true;
  outC->_L29.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L29.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L29.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L29.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L29.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L29.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L29.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L29.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L29.infoFromPassing.valid = kcg_true;
  outC->_L29.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L29.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L29.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L29.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L29.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L29.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L29.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L29.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L29.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L29.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L29.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L29.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L29.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L29.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L29.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L29.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L29.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L29.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L29.missed = kcg_true;
  outC->_L27.valid = kcg_true;
  outC->_L27.nid_c = kcg_lit_int32(0);
  outC->_L27.nid_bg = kcg_lit_int32(0);
  outC->_L27.q_link = Q_LINK_Unlinked;
  outC->_L27.location.nominal = kcg_lit_int32(0);
  outC->_L27.location.d_min = kcg_lit_int32(0);
  outC->_L27.location.d_max = kcg_lit_int32(0);
  outC->_L27.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.valid = kcg_true;
  outC->_L27.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L27.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L27.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L27.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L27.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L27.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L27.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L27.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L27.infoFromPassing.valid = kcg_true;
  outC->_L27.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L27.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L27.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L27.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L27.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L27.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L27.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L27.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L27.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L27.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L27.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L27.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L27.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L27.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L27.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L27.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L27.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L27.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L27.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L27.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L27.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L27.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L27.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L27.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L27.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L27.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L27.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L27.missed = kcg_true;
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
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L26.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L26.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L26.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L26.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L26.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L26.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L26.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L26.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L26.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L26.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L26.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L26.missed = kcg_true;
  outC->_L25 = kcg_true;
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L24[idx5].valid = kcg_true;
    outC->_L24[idx5].nid_c = kcg_lit_int32(0);
    outC->_L24[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L24[idx5].q_link = Q_LINK_Unlinked;
    outC->_L24[idx5].location.nominal = kcg_lit_int32(0);
    outC->_L24[idx5].location.d_min = kcg_lit_int32(0);
    outC->_L24[idx5].location.d_max = kcg_lit_int32(0);
    outC->_L24[idx5].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.valid = kcg_true;
    outC->_L24[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L24[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L24[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L24[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L24[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L24[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L24[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.valid = kcg_true;
    outC->_L24[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L24[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L24[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L24[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L24[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L24[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L24[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L24[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L24[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L24[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L24[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L24[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L24[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
      outC->_L24[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L24[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L24[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
      outC->_L24[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L24[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
      outC->_L24[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
      outC->_L24[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L24[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L24[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
    }
    outC->_L24[idx5].missed = kcg_true;
  }
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18.valid = kcg_true;
  outC->_L18.nid_c = kcg_lit_int32(0);
  outC->_L18.nid_bg = kcg_lit_int32(0);
  outC->_L18.q_link = Q_LINK_Unlinked;
  outC->_L18.location.nominal = kcg_lit_int32(0);
  outC->_L18.location.d_min = kcg_lit_int32(0);
  outC->_L18.location.d_max = kcg_lit_int32(0);
  outC->_L18.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.valid = kcg_true;
  outC->_L18.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L18.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L18.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L18.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L18.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L18.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L18.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L18.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.valid = kcg_true;
  outC->_L18.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L18.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L18.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L18.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L18.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L18.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L18.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L18.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L18.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L18.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L18.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L18.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int32(0);
    outC->_L18.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L18.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L18.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int32(0);
    outC->_L18.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int32(0);
    outC->_L18.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L18.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L18.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int32(0);
  }
  outC->_L18.missed = kcg_true;
  outC->_L17.valid = kcg_true;
  outC->_L17.nid_c = kcg_lit_int32(0);
  outC->_L17.nid_bg = kcg_lit_int32(0);
  outC->_L17.q_link = Q_LINK_Unlinked;
  outC->_L17.location.nominal = kcg_lit_int32(0);
  outC->_L17.location.d_min = kcg_lit_int32(0);
  outC->_L17.location.d_max = kcg_lit_int32(0);
  outC->_L17.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.valid = kcg_true;
  outC->_L17.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L17.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L17.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L17.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L17.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L17.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L17.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L17.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.valid = kcg_true;
  outC->_L17.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L17.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L17.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L17.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L17.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L17.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L17.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L17.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L17.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L17.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L17.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L17.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L17.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L17.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L17.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L17.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L17.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L17.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
  }
  outC->_L17.missed = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15.valid = kcg_true;
  outC->_L15.nid_c = kcg_lit_int32(0);
  outC->_L15.nid_bg = kcg_lit_int32(0);
  outC->_L15.q_link = Q_LINK_Unlinked;
  outC->_L15.location.nominal = kcg_lit_int32(0);
  outC->_L15.location.d_min = kcg_lit_int32(0);
  outC->_L15.location.d_max = kcg_lit_int32(0);
  outC->_L15.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.valid = kcg_true;
  outC->_L15.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L15.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L15.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L15.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L15.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L15.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.valid = kcg_true;
  outC->_L15.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L15.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L15.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L15.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L15.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L15.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L15.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L15.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L15.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L15.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L15.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int32(0);
    outC->_L15.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L15.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L15.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
    outC->_L15.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
    outC->_L15.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L15.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int32(0);
  }
  outC->_L15.missed = kcg_true;
  outC->_L14.valid = kcg_true;
  outC->_L14.nid_c = kcg_lit_int32(0);
  outC->_L14.nid_bg = kcg_lit_int32(0);
  outC->_L14.q_link = Q_LINK_Unlinked;
  outC->_L14.location.nominal = kcg_lit_int32(0);
  outC->_L14.location.d_min = kcg_lit_int32(0);
  outC->_L14.location.d_max = kcg_lit_int32(0);
  outC->_L14.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.valid = kcg_true;
  outC->_L14.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L14.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L14.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L14.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L14.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L14.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L14.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L14.infoFromPassing.valid = kcg_true;
  outC->_L14.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L14.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L14.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L14.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L14.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L14.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L14.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L14.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L14.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L14.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L14.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->_L14.infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int32(0);
    outC->_L14.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L14.infoFromPassing.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L14.infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int32(0);
    outC->_L14.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L14.infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int32(0);
    outC->_L14.infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int32(0);
    outC->_L14.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L14.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L14.infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int32(0);
  }
  outC->_L14.missed = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.nid_c = kcg_lit_int32(0);
  outC->_L10.nid_bg = kcg_lit_int32(0);
  outC->_L10.q_link = Q_LINK_Unlinked;
  outC->_L10.location.nominal = kcg_lit_int32(0);
  outC->_L10.location.d_min = kcg_lit_int32(0);
  outC->_L10.location.d_max = kcg_lit_int32(0);
  outC->_L10.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.valid = kcg_true;
  outC->_L10.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L10.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L10.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L10.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L10.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L10.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L10.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.valid = kcg_true;
  outC->_L10.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L10.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L10.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L10.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L10.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L10.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L10.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L10.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L10.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L10.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L10.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L10.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L10.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->_L10.infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
    outC->_L10.infoFromPassing.linkedBGs[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L10.infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L10.infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int32(0);
    outC->_L10.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L10.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L10.infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int32(0);
  }
  outC->_L10.missed = kcg_true;
  outC->_L2 = kcg_true;
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
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L4.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L4.infoFromPassing.linkedBGs[idx11].nid_LRBG = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
    outC->_L4.infoFromPassing.linkedBGs[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4.infoFromPassing.linkedBGs[idx11].d_link = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4.infoFromPassing.linkedBGs[idx11].nid_c = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx11].nid_bg = kcg_lit_int32(0);
    outC->_L4.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4.infoFromPassing.linkedBGs[idx11].q_locacc = kcg_lit_int32(0);
  }
  outC->_L4.missed = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6.valid = kcg_true;
  outC->_L6.nid_c = kcg_lit_int32(0);
  outC->_L6.nid_bg = kcg_lit_int32(0);
  outC->_L6.q_link = Q_LINK_Unlinked;
  outC->_L6.location.nominal = kcg_lit_int32(0);
  outC->_L6.location.d_min = kcg_lit_int32(0);
  outC->_L6.location.d_max = kcg_lit_int32(0);
  outC->_L6.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.valid = kcg_true;
  outC->_L6.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L6.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L6.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L6.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L6.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L6.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L6.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.valid = kcg_true;
  outC->_L6.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L6.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L6.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L6.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L6.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L6.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L6.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L6.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->_L6.infoFromPassing.linkedBGs[idx12].valid = kcg_true;
    outC->_L6.infoFromPassing.linkedBGs[idx12].nid_LRBG = kcg_lit_int32(0);
    outC->_L6.infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
    outC->_L6.infoFromPassing.linkedBGs[idx12].q_scale = Q_SCALE_10_cm_scale;
    outC->_L6.infoFromPassing.linkedBGs[idx12].d_link = kcg_lit_int32(0);
    outC->_L6.infoFromPassing.linkedBGs[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L6.infoFromPassing.linkedBGs[idx12].nid_c = kcg_lit_int32(0);
    outC->_L6.infoFromPassing.linkedBGs[idx12].nid_bg = kcg_lit_int32(0);
    outC->_L6.infoFromPassing.linkedBGs[idx12].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L6.infoFromPassing.linkedBGs[idx12].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L6.infoFromPassing.linkedBGs[idx12].q_locacc = kcg_lit_int32(0);
  }
  outC->_L6.missed = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L7_Memory_2_struct.valid = kcg_true;
  outC->_L7_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.nid_bg = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.q_link = Q_LINK_Unlinked;
  outC->_L7_Memory_2_struct.location.nominal = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.location.d_min = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.location.d_max = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.valid = kcg_true;
  outC->_L7_Memory_2_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L7_Memory_2_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7_Memory_2_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_2_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7_Memory_2_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7_Memory_2_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7_Memory_2_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7_Memory_2_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.valid = kcg_true;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7_Memory_2_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L7_Memory_2_struct.infoFromPassing.linkedBGs[idx13].valid = kcg_true;
    outC->_L7_Memory_2_struct.infoFromPassing.linkedBGs[idx13].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L7_Memory_2_struct.infoFromPassing.linkedBGs[idx13].q_dir =
      Q_DIR_Reverse;
    outC->_L7_Memory_2_struct.infoFromPassing.linkedBGs[idx13].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L7_Memory_2_struct.infoFromPassing.linkedBGs[idx13].d_link =
      kcg_lit_int32(0);
    outC->_L7_Memory_2_struct.infoFromPassing.linkedBGs[idx13].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7_Memory_2_struct.infoFromPassing.linkedBGs[idx13].nid_c =
      kcg_lit_int32(0);
    outC->_L7_Memory_2_struct.infoFromPassing.linkedBGs[idx13].nid_bg =
      kcg_lit_int32(0);
    outC->_L7_Memory_2_struct.infoFromPassing.linkedBGs[idx13].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7_Memory_2_struct.infoFromPassing.linkedBGs[idx13].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7_Memory_2_struct.infoFromPassing.linkedBGs[idx13].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L7_Memory_2_struct.missed = kcg_true;
  outC->_L6_Memory_2_struct.valid = kcg_true;
  outC->_L6_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.nid_bg = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.q_link = Q_LINK_Unlinked;
  outC->_L6_Memory_2_struct.location.nominal = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.location.d_min = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.location.d_max = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.valid = kcg_true;
  outC->_L6_Memory_2_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L6_Memory_2_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L6_Memory_2_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_2_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L6_Memory_2_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L6_Memory_2_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L6_Memory_2_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L6_Memory_2_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.valid = kcg_true;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L6_Memory_2_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L6_Memory_2_struct.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->_L6_Memory_2_struct.infoFromPassing.linkedBGs[idx14].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L6_Memory_2_struct.infoFromPassing.linkedBGs[idx14].q_dir =
      Q_DIR_Reverse;
    outC->_L6_Memory_2_struct.infoFromPassing.linkedBGs[idx14].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L6_Memory_2_struct.infoFromPassing.linkedBGs[idx14].d_link =
      kcg_lit_int32(0);
    outC->_L6_Memory_2_struct.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L6_Memory_2_struct.infoFromPassing.linkedBGs[idx14].nid_c =
      kcg_lit_int32(0);
    outC->_L6_Memory_2_struct.infoFromPassing.linkedBGs[idx14].nid_bg =
      kcg_lit_int32(0);
    outC->_L6_Memory_2_struct.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L6_Memory_2_struct.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L6_Memory_2_struct.infoFromPassing.linkedBGs[idx14].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L6_Memory_2_struct.missed = kcg_true;
  outC->_L5_Memory_2_struct.valid = kcg_true;
  outC->_L5_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.nid_bg = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.q_link = Q_LINK_Unlinked;
  outC->_L5_Memory_2_struct.location.nominal = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.location.d_min = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.location.d_max = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.valid = kcg_true;
  outC->_L5_Memory_2_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L5_Memory_2_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5_Memory_2_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_2_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L5_Memory_2_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5_Memory_2_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5_Memory_2_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5_Memory_2_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.valid = kcg_true;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5_Memory_2_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->_L5_Memory_2_struct.infoFromPassing.linkedBGs[idx15].valid = kcg_true;
    outC->_L5_Memory_2_struct.infoFromPassing.linkedBGs[idx15].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L5_Memory_2_struct.infoFromPassing.linkedBGs[idx15].q_dir =
      Q_DIR_Reverse;
    outC->_L5_Memory_2_struct.infoFromPassing.linkedBGs[idx15].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L5_Memory_2_struct.infoFromPassing.linkedBGs[idx15].d_link =
      kcg_lit_int32(0);
    outC->_L5_Memory_2_struct.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5_Memory_2_struct.infoFromPassing.linkedBGs[idx15].nid_c =
      kcg_lit_int32(0);
    outC->_L5_Memory_2_struct.infoFromPassing.linkedBGs[idx15].nid_bg =
      kcg_lit_int32(0);
    outC->_L5_Memory_2_struct.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5_Memory_2_struct.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5_Memory_2_struct.infoFromPassing.linkedBGs[idx15].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L5_Memory_2_struct.missed = kcg_true;
  outC->_L3_Memory_2_struct = kcg_true;
  outC->_L2_Memory_2_struct.valid = kcg_true;
  outC->_L2_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.nid_bg = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.q_link = Q_LINK_Unlinked;
  outC->_L2_Memory_2_struct.location.nominal = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.location.d_min = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.location.d_max = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.valid = kcg_true;
  outC->_L2_Memory_2_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L2_Memory_2_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2_Memory_2_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_2_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_Memory_2_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2_Memory_2_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2_Memory_2_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2_Memory_2_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.valid = kcg_true;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_Memory_2_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->_L2_Memory_2_struct.infoFromPassing.linkedBGs[idx16].valid = kcg_true;
    outC->_L2_Memory_2_struct.infoFromPassing.linkedBGs[idx16].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L2_Memory_2_struct.infoFromPassing.linkedBGs[idx16].q_dir =
      Q_DIR_Reverse;
    outC->_L2_Memory_2_struct.infoFromPassing.linkedBGs[idx16].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L2_Memory_2_struct.infoFromPassing.linkedBGs[idx16].d_link =
      kcg_lit_int32(0);
    outC->_L2_Memory_2_struct.infoFromPassing.linkedBGs[idx16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2_Memory_2_struct.infoFromPassing.linkedBGs[idx16].nid_c =
      kcg_lit_int32(0);
    outC->_L2_Memory_2_struct.infoFromPassing.linkedBGs[idx16].nid_bg =
      kcg_lit_int32(0);
    outC->_L2_Memory_2_struct.infoFromPassing.linkedBGs[idx16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2_Memory_2_struct.infoFromPassing.linkedBGs[idx16].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2_Memory_2_struct.infoFromPassing.linkedBGs[idx16].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L2_Memory_2_struct.missed = kcg_true;
  outC->_L1_Memory_2_struct = kcg_true;
  outC->_L9_Memory_2_struct.valid = kcg_true;
  outC->_L9_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.nid_bg = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.q_link = Q_LINK_Unlinked;
  outC->_L9_Memory_2_struct.location.nominal = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.location.d_min = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.location.d_max = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.valid = kcg_true;
  outC->_L9_Memory_2_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L9_Memory_2_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L9_Memory_2_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_2_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L9_Memory_2_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L9_Memory_2_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L9_Memory_2_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L9_Memory_2_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.valid = kcg_true;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9_Memory_2_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->_L9_Memory_2_struct.infoFromPassing.linkedBGs[idx17].valid = kcg_true;
    outC->_L9_Memory_2_struct.infoFromPassing.linkedBGs[idx17].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L9_Memory_2_struct.infoFromPassing.linkedBGs[idx17].q_dir =
      Q_DIR_Reverse;
    outC->_L9_Memory_2_struct.infoFromPassing.linkedBGs[idx17].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L9_Memory_2_struct.infoFromPassing.linkedBGs[idx17].d_link =
      kcg_lit_int32(0);
    outC->_L9_Memory_2_struct.infoFromPassing.linkedBGs[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9_Memory_2_struct.infoFromPassing.linkedBGs[idx17].nid_c =
      kcg_lit_int32(0);
    outC->_L9_Memory_2_struct.infoFromPassing.linkedBGs[idx17].nid_bg =
      kcg_lit_int32(0);
    outC->_L9_Memory_2_struct.infoFromPassing.linkedBGs[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9_Memory_2_struct.infoFromPassing.linkedBGs[idx17].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9_Memory_2_struct.infoFromPassing.linkedBGs[idx17].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L9_Memory_2_struct.missed = kcg_true;
  outC->M_Input_Memory_2_struct.valid = kcg_true;
  outC->M_Input_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.nid_bg = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.q_link = Q_LINK_Unlinked;
  outC->M_Input_Memory_2_struct.location.nominal = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.location.d_min = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.location.d_max = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.valid = kcg_true;
  outC->M_Input_Memory_2_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->M_Input_Memory_2_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_2_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->M_Input_Memory_2_struct.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->M_Input_Memory_2_struct.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->M_Input_Memory_2_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->M_Input_Memory_2_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.valid = kcg_true;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->M_Input_Memory_2_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->M_Input_Memory_2_struct.infoFromPassing.linkedBGs[idx18].valid = kcg_true;
    outC->M_Input_Memory_2_struct.infoFromPassing.linkedBGs[idx18].nid_LRBG =
      kcg_lit_int32(0);
    outC->M_Input_Memory_2_struct.infoFromPassing.linkedBGs[idx18].q_dir =
      Q_DIR_Reverse;
    outC->M_Input_Memory_2_struct.infoFromPassing.linkedBGs[idx18].q_scale =
      Q_SCALE_10_cm_scale;
    outC->M_Input_Memory_2_struct.infoFromPassing.linkedBGs[idx18].d_link =
      kcg_lit_int32(0);
    outC->M_Input_Memory_2_struct.infoFromPassing.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->M_Input_Memory_2_struct.infoFromPassing.linkedBGs[idx18].nid_c =
      kcg_lit_int32(0);
    outC->M_Input_Memory_2_struct.infoFromPassing.linkedBGs[idx18].nid_bg =
      kcg_lit_int32(0);
    outC->M_Input_Memory_2_struct.infoFromPassing.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->M_Input_Memory_2_struct.infoFromPassing.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->M_Input_Memory_2_struct.infoFromPassing.linkedBGs[idx18].q_locacc =
      kcg_lit_int32(0);
  }
  outC->M_Input_Memory_2_struct.missed = kcg_true;
  outC->Reset_Memory_2_struct = kcg_true;
  outC->MemCond_Memory_2_struct = kcg_true;
  outC->InitVal_Memory_2_struct.valid = kcg_true;
  outC->InitVal_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.nid_bg = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.q_link = Q_LINK_Unlinked;
  outC->InitVal_Memory_2_struct.location.nominal = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.location.d_min = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.location.d_max = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.valid = kcg_true;
  outC->InitVal_Memory_2_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->InitVal_Memory_2_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_2_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->InitVal_Memory_2_struct.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->InitVal_Memory_2_struct.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->InitVal_Memory_2_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->InitVal_Memory_2_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.valid = kcg_true;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->InitVal_Memory_2_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx19 = 0; idx19 < 33; idx19++) {
    outC->InitVal_Memory_2_struct.infoFromPassing.linkedBGs[idx19].valid = kcg_true;
    outC->InitVal_Memory_2_struct.infoFromPassing.linkedBGs[idx19].nid_LRBG =
      kcg_lit_int32(0);
    outC->InitVal_Memory_2_struct.infoFromPassing.linkedBGs[idx19].q_dir =
      Q_DIR_Reverse;
    outC->InitVal_Memory_2_struct.infoFromPassing.linkedBGs[idx19].q_scale =
      Q_SCALE_10_cm_scale;
    outC->InitVal_Memory_2_struct.infoFromPassing.linkedBGs[idx19].d_link =
      kcg_lit_int32(0);
    outC->InitVal_Memory_2_struct.infoFromPassing.linkedBGs[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->InitVal_Memory_2_struct.infoFromPassing.linkedBGs[idx19].nid_c =
      kcg_lit_int32(0);
    outC->InitVal_Memory_2_struct.infoFromPassing.linkedBGs[idx19].nid_bg =
      kcg_lit_int32(0);
    outC->InitVal_Memory_2_struct.infoFromPassing.linkedBGs[idx19].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->InitVal_Memory_2_struct.infoFromPassing.linkedBGs[idx19].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->InitVal_Memory_2_struct.infoFromPassing.linkedBGs[idx19].q_locacc =
      kcg_lit_int32(0);
  }
  outC->InitVal_Memory_2_struct.missed = kcg_true;
  outC->Out_Memory_2_struct.valid = kcg_true;
  outC->Out_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.nid_bg = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.q_link = Q_LINK_Unlinked;
  outC->Out_Memory_2_struct.location.nominal = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.location.d_min = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.location.d_max = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.valid = kcg_true;
  outC->Out_Memory_2_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->Out_Memory_2_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->Out_Memory_2_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_2_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Out_Memory_2_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Out_Memory_2_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Out_Memory_2_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Out_Memory_2_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.valid = kcg_true;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Out_Memory_2_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->Out_Memory_2_struct.infoFromPassing.linkedBGs[idx20].valid = kcg_true;
    outC->Out_Memory_2_struct.infoFromPassing.linkedBGs[idx20].nid_LRBG =
      kcg_lit_int32(0);
    outC->Out_Memory_2_struct.infoFromPassing.linkedBGs[idx20].q_dir =
      Q_DIR_Reverse;
    outC->Out_Memory_2_struct.infoFromPassing.linkedBGs[idx20].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Out_Memory_2_struct.infoFromPassing.linkedBGs[idx20].d_link =
      kcg_lit_int32(0);
    outC->Out_Memory_2_struct.infoFromPassing.linkedBGs[idx20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Out_Memory_2_struct.infoFromPassing.linkedBGs[idx20].nid_c =
      kcg_lit_int32(0);
    outC->Out_Memory_2_struct.infoFromPassing.linkedBGs[idx20].nid_bg =
      kcg_lit_int32(0);
    outC->Out_Memory_2_struct.infoFromPassing.linkedBGs[idx20].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Out_Memory_2_struct.infoFromPassing.linkedBGs[idx20].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Out_Memory_2_struct.infoFromPassing.linkedBGs[idx20].q_locacc =
      kcg_lit_int32(0);
  }
  outC->Out_Memory_2_struct.missed = kcg_true;
  outC->_L7_Memory_1_struct.valid = kcg_true;
  outC->_L7_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L7_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L7_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L7_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx21].valid = kcg_true;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx21].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx21].q_dir =
      Q_DIR_Reverse;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx21].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx21].d_link =
      kcg_lit_int32(0);
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx21].nid_c =
      kcg_lit_int32(0);
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx21].nid_bg =
      kcg_lit_int32(0);
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx21].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7_Memory_1_struct.infoFromPassing.linkedBGs[idx21].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L7_Memory_1_struct.missed = kcg_true;
  outC->_L6_Memory_1_struct.valid = kcg_true;
  outC->_L6_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L6_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L6_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L6_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L6_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L6_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx22 = 0; idx22 < 33; idx22++) {
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx22].valid = kcg_true;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx22].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx22].q_dir =
      Q_DIR_Reverse;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx22].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx22].d_link =
      kcg_lit_int32(0);
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx22].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx22].nid_c =
      kcg_lit_int32(0);
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx22].nid_bg =
      kcg_lit_int32(0);
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx22].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx22].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L6_Memory_1_struct.infoFromPassing.linkedBGs[idx22].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L6_Memory_1_struct.missed = kcg_true;
  outC->_L5_Memory_1_struct.valid = kcg_true;
  outC->_L5_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L5_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L5_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L5_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx23 = 0; idx23 < 33; idx23++) {
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx23].valid = kcg_true;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx23].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx23].q_dir =
      Q_DIR_Reverse;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx23].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx23].d_link =
      kcg_lit_int32(0);
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx23].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx23].nid_c =
      kcg_lit_int32(0);
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx23].nid_bg =
      kcg_lit_int32(0);
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx23].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx23].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5_Memory_1_struct.infoFromPassing.linkedBGs[idx23].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L5_Memory_1_struct.missed = kcg_true;
  outC->_L3_Memory_1_struct = kcg_true;
  outC->_L2_Memory_1_struct.valid = kcg_true;
  outC->_L2_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L2_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L2_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L2_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx24 = 0; idx24 < 33; idx24++) {
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx24].valid = kcg_true;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx24].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx24].q_dir =
      Q_DIR_Reverse;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx24].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx24].d_link =
      kcg_lit_int32(0);
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx24].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx24].nid_c =
      kcg_lit_int32(0);
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx24].nid_bg =
      kcg_lit_int32(0);
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx24].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx24].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2_Memory_1_struct.infoFromPassing.linkedBGs[idx24].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L2_Memory_1_struct.missed = kcg_true;
  outC->_L1_Memory_1_struct = kcg_true;
  outC->_L9_Memory_1_struct.valid = kcg_true;
  outC->_L9_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L9_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L9_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L9_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L9_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx25 = 0; idx25 < 33; idx25++) {
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx25].valid = kcg_true;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx25].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx25].q_dir =
      Q_DIR_Reverse;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx25].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx25].d_link =
      kcg_lit_int32(0);
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx25].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx25].nid_c =
      kcg_lit_int32(0);
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx25].nid_bg =
      kcg_lit_int32(0);
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx25].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx25].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9_Memory_1_struct.infoFromPassing.linkedBGs[idx25].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L9_Memory_1_struct.missed = kcg_true;
  outC->M_Input_Memory_1_struct.valid = kcg_true;
  outC->M_Input_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->M_Input_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->M_Input_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->M_Input_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->M_Input_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx26 = 0; idx26 < 33; idx26++) {
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx26].valid = kcg_true;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx26].nid_LRBG =
      kcg_lit_int32(0);
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx26].q_dir =
      Q_DIR_Reverse;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx26].q_scale =
      Q_SCALE_10_cm_scale;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx26].d_link =
      kcg_lit_int32(0);
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx26].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx26].nid_c =
      kcg_lit_int32(0);
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx26].nid_bg =
      kcg_lit_int32(0);
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx26].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx26].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->M_Input_Memory_1_struct.infoFromPassing.linkedBGs[idx26].q_locacc =
      kcg_lit_int32(0);
  }
  outC->M_Input_Memory_1_struct.missed = kcg_true;
  outC->Reset_Memory_1_struct = kcg_true;
  outC->MemCond_Memory_1_struct = kcg_true;
  outC->InitVal_Memory_1_struct.valid = kcg_true;
  outC->InitVal_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->InitVal_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->InitVal_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->InitVal_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->InitVal_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx27 = 0; idx27 < 33; idx27++) {
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx27].valid = kcg_true;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx27].nid_LRBG =
      kcg_lit_int32(0);
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx27].q_dir =
      Q_DIR_Reverse;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx27].q_scale =
      Q_SCALE_10_cm_scale;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx27].d_link =
      kcg_lit_int32(0);
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx27].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx27].nid_c =
      kcg_lit_int32(0);
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx27].nid_bg =
      kcg_lit_int32(0);
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx27].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx27].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->InitVal_Memory_1_struct.infoFromPassing.linkedBGs[idx27].q_locacc =
      kcg_lit_int32(0);
  }
  outC->InitVal_Memory_1_struct.missed = kcg_true;
  outC->Out_Memory_1_struct.valid = kcg_true;
  outC->Out_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->Out_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->Out_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->Out_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Out_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Out_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx28 = 0; idx28 < 33; idx28++) {
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx28].valid = kcg_true;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx28].nid_LRBG =
      kcg_lit_int32(0);
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx28].q_dir =
      Q_DIR_Reverse;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx28].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx28].d_link =
      kcg_lit_int32(0);
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx28].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx28].nid_c =
      kcg_lit_int32(0);
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx28].nid_bg =
      kcg_lit_int32(0);
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx28].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx28].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Out_Memory_1_struct.infoFromPassing.linkedBGs[idx28].q_locacc =
      kcg_lit_int32(0);
  }
  outC->Out_Memory_1_struct.missed = kcg_true;
  outC->_L8_Memory_2_struct.valid = kcg_true;
  outC->_L8_Memory_2_struct.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.nid_bg = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.q_link = Q_LINK_Unlinked;
  outC->_L8_Memory_2_struct.location.nominal = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.location.d_min = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.location.d_max = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.valid = kcg_true;
  outC->_L8_Memory_2_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L8_Memory_2_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8_Memory_2_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_2_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8_Memory_2_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8_Memory_2_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8_Memory_2_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8_Memory_2_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.valid = kcg_true;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_Memory_2_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx29 = 0; idx29 < 33; idx29++) {
    outC->_L8_Memory_2_struct.infoFromPassing.linkedBGs[idx29].valid = kcg_true;
    outC->_L8_Memory_2_struct.infoFromPassing.linkedBGs[idx29].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L8_Memory_2_struct.infoFromPassing.linkedBGs[idx29].q_dir =
      Q_DIR_Reverse;
    outC->_L8_Memory_2_struct.infoFromPassing.linkedBGs[idx29].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L8_Memory_2_struct.infoFromPassing.linkedBGs[idx29].d_link =
      kcg_lit_int32(0);
    outC->_L8_Memory_2_struct.infoFromPassing.linkedBGs[idx29].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8_Memory_2_struct.infoFromPassing.linkedBGs[idx29].nid_c =
      kcg_lit_int32(0);
    outC->_L8_Memory_2_struct.infoFromPassing.linkedBGs[idx29].nid_bg =
      kcg_lit_int32(0);
    outC->_L8_Memory_2_struct.infoFromPassing.linkedBGs[idx29].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8_Memory_2_struct.infoFromPassing.linkedBGs[idx29].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8_Memory_2_struct.infoFromPassing.linkedBGs[idx29].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L8_Memory_2_struct.missed = kcg_true;
  outC->_L8_Memory_1_struct.valid = kcg_true;
  outC->_L8_Memory_1_struct.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.nid_bg = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.q_link = Q_LINK_Unlinked;
  outC->_L8_Memory_1_struct.location.nominal = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.location.d_min = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.location.d_max = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.valid = kcg_true;
  outC->_L8_Memory_1_struct.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(
      0);
  outC->_L8_Memory_1_struct.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8_Memory_1_struct.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.valid = kcg_true;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_Memory_1_struct.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx30 = 0; idx30 < 33; idx30++) {
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx30].valid = kcg_true;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx30].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx30].q_dir =
      Q_DIR_Reverse;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx30].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx30].d_link =
      kcg_lit_int32(0);
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx30].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx30].nid_c =
      kcg_lit_int32(0);
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx30].nid_bg =
      kcg_lit_int32(0);
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx30].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx30].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8_Memory_1_struct.infoFromPassing.linkedBGs[idx30].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L8_Memory_1_struct.missed = kcg_true;
  outC->init = kcg_true;
  outC->lastBG.valid = kcg_true;
  outC->lastBG.nid_c = kcg_lit_int32(0);
  outC->lastBG.nid_bg = kcg_lit_int32(0);
  outC->lastBG.q_link = Q_LINK_Unlinked;
  outC->lastBG.location.nominal = kcg_lit_int32(0);
  outC->lastBG.location.d_min = kcg_lit_int32(0);
  outC->lastBG.location.d_max = kcg_lit_int32(0);
  outC->lastBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.valid = kcg_true;
  outC->lastBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->lastBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->lastBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->lastBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->lastBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->lastBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->lastBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->lastBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.valid = kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->lastBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->lastBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->lastBG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->lastBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->lastBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->lastBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->lastBG.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->lastBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx31 = 0; idx31 < 33; idx31++) {
    outC->lastBG.infoFromPassing.linkedBGs[idx31].valid = kcg_true;
    outC->lastBG.infoFromPassing.linkedBGs[idx31].nid_LRBG = kcg_lit_int32(0);
    outC->lastBG.infoFromPassing.linkedBGs[idx31].q_dir = Q_DIR_Reverse;
    outC->lastBG.infoFromPassing.linkedBGs[idx31].q_scale = Q_SCALE_10_cm_scale;
    outC->lastBG.infoFromPassing.linkedBGs[idx31].d_link = kcg_lit_int32(0);
    outC->lastBG.infoFromPassing.linkedBGs[idx31].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->lastBG.infoFromPassing.linkedBGs[idx31].nid_c = kcg_lit_int32(0);
    outC->lastBG.infoFromPassing.linkedBGs[idx31].nid_bg = kcg_lit_int32(0);
    outC->lastBG.infoFromPassing.linkedBGs[idx31].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->lastBG.infoFromPassing.linkedBGs[idx31].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->lastBG.infoFromPassing.linkedBGs[idx31].q_locacc = kcg_lit_int32(0);
  }
  outC->lastBG.missed = kcg_true;
  outC->prvBG.valid = kcg_true;
  outC->prvBG.nid_c = kcg_lit_int32(0);
  outC->prvBG.nid_bg = kcg_lit_int32(0);
  outC->prvBG.q_link = Q_LINK_Unlinked;
  outC->prvBG.location.nominal = kcg_lit_int32(0);
  outC->prvBG.location.d_min = kcg_lit_int32(0);
  outC->prvBG.location.d_max = kcg_lit_int32(0);
  outC->prvBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.valid = kcg_true;
  outC->prvBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->prvBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->prvBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->prvBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->prvBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->prvBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->prvBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->prvBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.valid = kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->prvBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->prvBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->prvBG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->prvBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->prvBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->prvBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->prvBG.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->prvBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx32 = 0; idx32 < 33; idx32++) {
    outC->prvBG.infoFromPassing.linkedBGs[idx32].valid = kcg_true;
    outC->prvBG.infoFromPassing.linkedBGs[idx32].nid_LRBG = kcg_lit_int32(0);
    outC->prvBG.infoFromPassing.linkedBGs[idx32].q_dir = Q_DIR_Reverse;
    outC->prvBG.infoFromPassing.linkedBGs[idx32].q_scale = Q_SCALE_10_cm_scale;
    outC->prvBG.infoFromPassing.linkedBGs[idx32].d_link = kcg_lit_int32(0);
    outC->prvBG.infoFromPassing.linkedBGs[idx32].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->prvBG.infoFromPassing.linkedBGs[idx32].nid_c = kcg_lit_int32(0);
    outC->prvBG.infoFromPassing.linkedBGs[idx32].nid_bg = kcg_lit_int32(0);
    outC->prvBG.infoFromPassing.linkedBGs[idx32].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->prvBG.infoFromPassing.linkedBGs[idx32].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->prvBG.infoFromPassing.linkedBGs[idx32].q_locacc = kcg_lit_int32(0);
  }
  outC->prvBG.missed = kcg_true;
  /* _L21=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
  /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */
  positionedBGs_ids_equal_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_equal_1);
  /* _L19=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#2)/ */
  positionedBGs_ids_equal_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_equal_2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->prvBG_loc,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->storedBG_loc,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->mem_BG,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void lastAndPrevBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L21=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::indexOfBG_by_id#1)/ */
  indexOfBG_by_id_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_indexOfBG_by_id_1);
  /* _L9=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#1)/ */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_equal_1);
  /* _L19=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#2)/ */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_equal_2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->prvBG_loc,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->storedBG_loc,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->mem_BG,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  SV_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *SV,
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &SV->Context_storedBG_loc,
    &outC->storedBG_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &SV->Context_prvBG_loc,
    &outC->prvBG_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &SV->Context__L8_Memory_2,
    &outC->_L8_Memory_2_struct);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &SV->Context__L8_Memory_1,
    &outC->_L8_Memory_1_struct);
  SV->Context_init = outC->init;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &SV->Context_mem_BG,
    &outC->mem_BG);
}

void kcg_load_SV_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC,
  SV_lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *SV)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->storedBG_loc,
    &SV->Context_storedBG_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->prvBG_loc,
    &SV->Context_prvBG_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L8_Memory_2_struct,
    &SV->Context__L8_Memory_2);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L8_Memory_1_struct,
    &SV->Context__L8_Memory_1);
  outC->init = SV->Context_init;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->mem_BG,
    &SV->Context_mem_BG);
}

/*
  Expanded instances for: CalculateTrainPosition_Pkg::BG_utilities_Pkg::lastAndPrevBG/
  @2: (linear::Memory#2)
  @1: (linear::Memory#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** lastAndPrevBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

