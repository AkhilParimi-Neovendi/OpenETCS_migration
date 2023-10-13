/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionDerivedFromPassedBG/ */
void positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* odoPosition/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *odoPosition,
  /* passedRefBG/ */
  positionedBG_T_TrainPosition_Types_Pck *passedRefBG,
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* position/ */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg position_partial;
  /* position/ */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _1_position_partial;

  outC->IfBlock1_clock = (*passedRefBG).valid &
    (*passedRefBG).infoFromPassing.valid;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L18_then_IfBlock1,
      passedRefBG);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L20_then_IfBlock1,
      &outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L19_then_IfBlock1,
      &outC->_L18_then_IfBlock1.location);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L17_then_IfBlock1,
      odoPosition);
    /* IfBlock1:then:_L15=(BasicLocationFunctions_Pkg::add_odo_2_Location#6)/ */
    add_odo_2_Location_BasicLocationFunctions_Pkg(
      &outC->_L19_then_IfBlock1,
      &outC->_L20_then_IfBlock1,
      &outC->_L17_then_IfBlock1,
      &outC->Context_add_odo_2_Location_6);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L15_then_IfBlock1,
      &outC->Context_add_odo_2_Location_6.location);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &position_partial,
      &outC->_L15_then_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->position, &position_partial);
  }
  else {
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L5_else_IfBlock1,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cOdometryInitialValue_Obu_BasicTypes_Pkg);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L4_else_IfBlock1,
      odoPosition);
    /* IfBlock1:else:_L3=(BasicLocationFunctions_Pkg::sub_2_odoDistances#1)/ */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &outC->_L4_else_IfBlock1,
      &outC->_L5_else_IfBlock1,
      &outC->Context_sub_2_odoDistances_1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L3_else_IfBlock1,
      &outC->Context_sub_2_odoDistances_1.distance);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &_1_position_partial,
      &outC->_L3_else_IfBlock1);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->position,
      &_1_position_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void positionDerivedFromPassedBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  static kcg_size idx;

  outC->IfBlock1_clock = kcg_true;
  outC->_L3_else_IfBlock1.nominal = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.d_min = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.d_max = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.o_nominal = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.o_min = kcg_lit_int64(0);
  outC->_L4_else_IfBlock1.o_max = kcg_lit_int64(0);
  outC->_L5_else_IfBlock1.o_nominal = kcg_lit_int64(0);
  outC->_L5_else_IfBlock1.o_min = kcg_lit_int64(0);
  outC->_L5_else_IfBlock1.o_max = kcg_lit_int64(0);
  outC->_L19_then_IfBlock1.nominal = kcg_lit_int64(0);
  outC->_L19_then_IfBlock1.d_min = kcg_lit_int64(0);
  outC->_L19_then_IfBlock1.d_max = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.valid = kcg_true;
  outC->_L18_then_IfBlock1.nid_c = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.nid_bg = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L18_then_IfBlock1.location.nominal = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.location.d_min = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.location.d_max = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromLinking.valid = kcg_true;
  outC->_L18_then_IfBlock1.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->_L18_then_IfBlock1.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L18_then_IfBlock1.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->_L18_then_IfBlock1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L18_then_IfBlock1.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L18_then_IfBlock1.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L18_then_IfBlock1.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L18_then_IfBlock1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L18_then_IfBlock1.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->_L18_then_IfBlock1.infoFromPassing.valid = kcg_true;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L18_then_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L18_then_IfBlock1.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L18_then_IfBlock1.infoFromPassing.linkedBGs[idx].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L18_then_IfBlock1.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L18_then_IfBlock1.infoFromPassing.linkedBGs[idx].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L18_then_IfBlock1.infoFromPassing.linkedBGs[idx].d_link =
      kcg_lit_int64(0);
    outC->_L18_then_IfBlock1.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L18_then_IfBlock1.infoFromPassing.linkedBGs[idx].nid_c =
      kcg_lit_int64(0);
    outC->_L18_then_IfBlock1.infoFromPassing.linkedBGs[idx].nid_bg =
      kcg_lit_int64(0);
    outC->_L18_then_IfBlock1.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L18_then_IfBlock1.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L18_then_IfBlock1.infoFromPassing.linkedBGs[idx].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L18_then_IfBlock1.missed = kcg_true;
  outC->_L17_then_IfBlock1.o_nominal = kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.o_min = kcg_lit_int64(0);
  outC->_L17_then_IfBlock1.o_max = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.nominal = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.d_min = kcg_lit_int64(0);
  outC->_L15_then_IfBlock1.d_max = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.o_nominal = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.o_min = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.o_max = kcg_lit_int64(0);
  outC->position.nominal = kcg_lit_int64(0);
  outC->position.d_min = kcg_lit_int64(0);
  outC->position.d_max = kcg_lit_int64(0);
  /* IfBlock1:then:_L15=(BasicLocationFunctions_Pkg::add_odo_2_Location#6)/ */
  add_odo_2_Location_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_odo_2_Location_6);
  /* IfBlock1:else:_L3=(BasicLocationFunctions_Pkg::sub_2_odoDistances#1)/ */
  sub_2_odoDistances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void positionDerivedFromPassedBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  /* IfBlock1:then:_L15=(BasicLocationFunctions_Pkg::add_odo_2_Location#6)/ */
  add_odo_2_Location_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_odo_2_Location_6);
  /* IfBlock1:else:_L3=(BasicLocationFunctions_Pkg::sub_2_odoDistances#1)/ */
  sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** positionDerivedFromPassedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

