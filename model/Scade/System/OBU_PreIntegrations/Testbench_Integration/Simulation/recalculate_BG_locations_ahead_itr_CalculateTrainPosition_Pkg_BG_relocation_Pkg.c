/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_locations_ahead_itr/ */
void recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  /* refBGs_in/ */
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *refBGs_in,
  /* BG_in/ */
  positionedBG_T_TrainPosition_Types_Pck *BG_in,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  static positionedBG_T_TrainPosition_Types_Pck op_call;
  static LocWithInAcc_T_Obu_BasicTypes_Pkg noname;

  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L152,
    refBGs_in);
  outC->_L158 = outC->_L152.recalculate;
  outC->every = outC->_L158;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L147, BG_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L290,
    &outC->_L152.prevLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L291,
    &outC->_L152.refBG);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L273,
    refBGs_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L282,
    &outC->_L273.sumOfBestDistances);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L274, BG_in);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L275, &outC->_L274.infoFromPassing);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L277,
    &outC->_L275.BG_Header.bgPosition.odo);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L267,
    &outC->_L273.prevLinkedBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L269, &outC->_L267.infoFromPassing);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L271,
    &outC->_L269.BG_Header.bgPosition.odo);
  /* _L279=(BasicLocationFunctions_Pkg::sub_2_odoDistances#4)/ */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L277,
    &outC->_L271,
    &outC->Context_sub_2_odoDistances_4);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L279,
    &outC->Context_sub_2_odoDistances_4.distance);
  /* _L280=(BasicLocationFunctions_Pkg::add_2_Distances#8)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L279,
    &outC->_L282,
    &outC->Context_add_2_Distances_8);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L280,
    &outC->Context_add_2_Distances_8.distance);
  outC->_L270 = outC->_L269.valid;
  outC->_L268 = outC->_L267.valid;
  outC->_L276 = outC->_L275.valid;
  outC->_L240 = Q_LINK_Linked;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L237, BG_in);
  outC->_L238 = outC->_L237.q_link;
  outC->_L239 = outC->_L238 == outC->_L240;
  outC->_L259 = outC->_L237.valid;
  outC->_L278 = outC->_L259 & outC->_L239 & outC->_L276 & outC->_L268 &
    outC->_L270;
  /* _L281= */
  if (outC->_L278) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L281, &outC->_L280);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L281, &outC->_L282);
  }
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L253,
    &outC->_L237.infoFromLinking);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L254, &outC->_L253.d_link);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L229,
    refBGs_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L230,
    &outC->_L229.sumOfBestDistances);
  /* _L255=(BasicLocationFunctions_Pkg::add_2_Distances#7)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L254,
    &outC->_L230,
    &outC->Context_add_2_Distances_7);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L255,
    &outC->Context_add_2_Distances_7.distance);
  outC->_L260 = outC->_L253.valid;
  outC->_L258 = outC->_L259 & outC->_L260;
  /* _L256= */
  if (outC->_L258) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L256, &outC->_L255);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L256, &outC->_L281);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L244,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L286,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L64,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L71, &outC->_L64.refBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L62, BG_in);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L59, &outC->_L62.location);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L188, BG_in);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L197,
    trainProperties);
  /* _L220=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies)/ */
  calculateLocalBGInaccuracies_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L188,
    &outC->_L197,
    &outC->Context_calculateLocalBGInaccuracies);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L220,
    &outC->Context_calculateLocalBGInaccuracies.localInaccuracies);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->BG_loc_inacc, &outC->_L220);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L216, &outC->BG_loc_inacc);
  outC->_L51 = outC->_L59.nominal;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L217,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L218, &outC->_L217);
  if (kcg_true) {
    outC->_L218.nominal = outC->_L51;
  }
  /* _L219=(BasicLocationFunctions_Pkg::add_2_Distances#6)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L216,
    &outC->_L218,
    &outC->Context_add_2_Distances_6);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L219,
    &outC->Context_add_2_Distances_6.distance);
  /* _L302=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_BasicLocationFunctions_Pkg(
    &outC->_L219,
    &outC->_L59,
    &outC->Context_overlapOf_2_Locations_1);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L302,
    &outC->Context_overlapOf_2_Locations_1.loc);
  outC->_L303 = outC->Context_overlapOf_2_Locations_1.overlap;
  /* _L304= */
  if (outC->_L303) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L304, &outC->_L302);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L304, &outC->_L59);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L74, BG_in);
  /* _L67=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#3)/ */
  positionedBGs_ids_equal_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L71,
    &outC->_L74,
    &outC->Context_positionedBGs_ids_equal_3);
  outC->_L67 = outC->Context_positionedBGs_ids_equal_3.idsEqual;
  outC->BGin_is_refBG = outC->_L67;
  outC->_L61 = outC->BGin_is_refBG;
  /* _L52= */
  if (outC->_L61) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L52, &outC->_L304);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L52, &outC->_L59);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->refLocation, &outC->_L52);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L76, &outC->refLocation);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L75, &outC->_L71);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L75.location, &outC->_L76);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L167, &outC->_L75);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L167.infoFromLinking.expectedLocation,
      &outC->_L76);
  }
  outC->_L165 = outC->_L71.infoFromLinking.valid;
  outC->_L164 = outC->_L71.valid;
  outC->_L169 = outC->_L164 & outC->_L165;
  /* _L168= */
  if (outC->_L169) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L168, &outC->_L167);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L168, &outC->_L75);
  }
  /* _L163= */
  if (outC->_L67) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L163, &outC->_L168);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L163, &outC->_L71);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->refBG, &outC->_L163);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L78, &outC->refBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L93, &outC->_L78.infoFromPassing);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L95,
    &outC->_L93.BG_Header.bgPosition.odo);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L82,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L86,
    &outC->_L82.prevLinkedBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L88, &outC->_L86.infoFromPassing);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L90,
    &outC->_L88.BG_Header.bgPosition.odo);
  /* _L92=(BasicLocationFunctions_Pkg::sub_2_odoDistances#2)/ */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L95,
    &outC->_L90,
    &outC->Context_sub_2_odoDistances_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L92,
    &outC->Context_sub_2_odoDistances_2.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L294,
    &outC->_L88.BG_Header.BG_centerDetectionInaccuraccuracies);
  /* _L297=(BasicLocationFunctions_Pkg::add_2_Distances#9)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L92,
    &outC->_L294,
    &outC->Context_add_2_Distances_9);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L297,
    &outC->Context_add_2_Distances_9.distance);
  outC->_L89 = outC->_L88.valid;
  outC->_L87 = outC->_L86.valid;
  outC->_L94 = outC->_L93.valid;
  outC->_L105 = outC->_L78.q_link;
  outC->_L107 = Q_LINK_Linked;
  outC->_L106 = outC->_L107 == outC->_L105;
  outC->_L83 = !outC->_L106;
  outC->_L77 = outC->BGin_is_refBG;
  outC->_L84 = outC->_L77 & outC->_L83;
  outC->_L96 = outC->_L84 & outC->_L94 & outC->_L87 & outC->_L89;
  /* _L285= */
  if (outC->_L96) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L285, &outC->_L297);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L285, &outC->_L286);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->d_prevLinkedBG_refBG,
    &outC->_L285);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L287,
    &outC->d_prevLinkedBG_refBG);
  /* _L288=(BasicLocationFunctions_Pkg::sub_2_distances#4)/ */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L244,
    &outC->_L287,
    &outC->Context_sub_2_distances_4);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L288,
    &outC->Context_sub_2_distances_4.distance);
  outC->_L236 = outC->BGin_is_refBG;
  outC->_L257 = outC->_L236 & outC->_L259;
  /* _L243= */
  if (outC->_L257) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L243, &outC->_L288);
  }
  else {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L243, &outC->_L256);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->sumOfBestDistances,
    &outC->_L243);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L305,
    &outC->sumOfBestDistances);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L293,
    trainProperties);
  if (outC->every) {
    /* _L289=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead#1)/ */
    recalculate_BG_location_ahead_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
      &outC->_L147,
      &outC->_L290,
      &outC->_L291,
      &outC->_L305,
      &outC->_L293,
      &outC->Context_recalculate_BG_location_ahead_1);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &op_call,
      &outC->Context_recalculate_BG_location_ahead_1.BG_out);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L292,
    &outC->_L152.sumOfBestDistances);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&noname, &outC->_L292);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L301,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L115, &outC->refBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L128, &outC->_L115.infoFromPassing);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L130,
    &outC->_L128.BG_Header.bgPosition.odo);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L118,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L122,
    &outC->_L118.prevUnlinkedBG);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L124, &outC->_L122.infoFromPassing);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L126,
    &outC->_L124.BG_Header.bgPosition.odo);
  /* _L127=(BasicLocationFunctions_Pkg::sub_2_odoDistances#3)/ */
  sub_2_odoDistances_BasicLocationFunctions_Pkg(
    &outC->_L130,
    &outC->_L126,
    &outC->Context_sub_2_odoDistances_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L127,
    &outC->Context_sub_2_odoDistances_3.distance);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L296,
    &outC->_L124.BG_Header.BG_centerDetectionInaccuraccuracies);
  /* _L300=(BasicLocationFunctions_Pkg::add_2_Distances#12)/ */
  add_2_Distances_BasicLocationFunctions_Pkg(
    &outC->_L127,
    &outC->_L296,
    &outC->Context_add_2_Distances_12);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L300,
    &outC->Context_add_2_Distances_12.distance);
  if (outC->every) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L289, &op_call);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L289, &outC->_L301);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L265,
    &outC->sumOfBestDistances);
  /* _L154= */
  if (outC->_L158) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L154, &outC->_L289);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L154, &outC->_L147);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->relocatedBG,
    &outC->_L154);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L172,
    &outC->relocatedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L174, &outC->refBG);
  outC->_L173 = outC->BGin_is_refBG;
  /* _L175= */
  if (outC->_L173) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L175, &outC->_L174);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L175, &outC->_L172);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->BG_out, &outC->_L175);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L162, &outC->refBG);
  outC->_L161 = outC->_L74.valid;
  outC->_L69 = outC->_L64.recalculate;
  outC->_L160 = outC->_L69 & outC->_L161;
  outC->_L159 = outC->_L67 | outC->_L160;
  outC->recalculateSubsequentBGs = outC->_L159;
  outC->_L157 = outC->recalculateSubsequentBGs;
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L144,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L143,
    &outC->_L144.prevUnlinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L148,
    &outC->relocatedBG);
  outC->_L139 = outC->_L148.q_link;
  outC->_L141 = Q_LINK_Unlinked;
  outC->_L140 = outC->_L141 == outC->_L139;
  /* _L142= */
  if (outC->_L140) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L142, &outC->_L148);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L142, &outC->_L143);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L133, &outC->_L115.location);
  /* _L132=(BasicLocationFunctions_Pkg::sub_2_distances#3)/ */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L133,
    &outC->_L300,
    &outC->Context_sub_2_distances_3);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L132,
    &outC->Context_sub_2_distances_3.distance);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L134, &outC->_L122);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L134.location, &outC->_L132);
  }
  outC->_L125 = outC->_L124.valid;
  outC->_L123 = outC->_L122.valid;
  outC->_L129 = outC->_L128.valid;
  outC->_L136 = outC->_L115.q_link;
  outC->_L138 = Q_LINK_Unlinked;
  outC->_L137 = outC->_L138 == outC->_L136;
  outC->_L119 = !outC->_L137;
  outC->_L114 = outC->BGin_is_refBG;
  outC->_L120 = outC->_L114 & outC->_L119;
  outC->_L131 = outC->_L120 & outC->_L129 & outC->_L123 & outC->_L125;
  /* _L121= */
  if (outC->_L131) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L121, &outC->_L134);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L121, &outC->_L142);
  }
  outC->_L116 = outC->_L114 & outC->_L137;
  /* _L117= */
  if (outC->_L116) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L117, &outC->_L115);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L117, &outC->_L121);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->prevUnlinkedBG,
    &outC->_L117);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L156,
    &outC->prevUnlinkedBG);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->_L113,
    refBGs_in);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L112,
    &outC->_L113.prevLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L149,
    &outC->relocatedBG);
  outC->_L108 = outC->_L149.q_link;
  outC->_L110 = Q_LINK_Linked;
  outC->_L109 = outC->_L110 == outC->_L108;
  /* _L111= */
  if (outC->_L109) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L111, &outC->_L149);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L111, &outC->_L112);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L98, &outC->_L78.location);
  /* _L97=(BasicLocationFunctions_Pkg::sub_2_distances#2)/ */
  sub_2_distances_BasicLocationFunctions_Pkg(
    &outC->_L98,
    &outC->_L297,
    &outC->Context_sub_2_distances_2);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L97,
    &outC->Context_sub_2_distances_2.distance);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L99, &outC->_L86);
  if (kcg_true) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L99.location, &outC->_L97);
  }
  /* _L85= */
  if (outC->_L96) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L85, &outC->_L99);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L85, &outC->_L111);
  }
  outC->_L80 = outC->_L77 & outC->_L106;
  /* _L81= */
  if (outC->_L80) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L81, &outC->_L78);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L81, &outC->_L85);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->prevLinkedBG,
    &outC->_L81);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L155,
    &outC->prevLinkedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L36.refBG,
    &outC->_L162);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L36.prevLinkedBG,
    &outC->_L155);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L36.prevUnlinkedBG,
    &outC->_L156);
  outC->_L36.recalculate = outC->_L157;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L36.sumOfBestDistances,
    &outC->_L265);
  kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->refBGs_out,
    &outC->_L36);
}

#ifndef KCG_USER_DEFINED_INIT
void recalculate_BG_locations_ahead_itr_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
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
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;
  static kcg_size idx60;
  static kcg_size idx61;
  static kcg_size idx62;
  static kcg_size idx63;
  static kcg_size idx64;
  static kcg_size idx65;
  static kcg_size idx66;
  static kcg_size idx67;
  static kcg_size idx68;
  static kcg_size idx69;
  static kcg_size idx70;
  static kcg_size idx71;
  static kcg_size idx72;
  static kcg_size idx73;
  static kcg_size idx74;
  static kcg_size idx75;
  static kcg_size idx76;
  static kcg_size idx77;
  static kcg_size idx78;
  static kcg_size idx79;

  outC->_L305.nominal = kcg_lit_int64(0);
  outC->_L305.d_min = kcg_lit_int64(0);
  outC->_L305.d_max = kcg_lit_int64(0);
  outC->_L304.nominal = kcg_lit_int64(0);
  outC->_L304.d_min = kcg_lit_int64(0);
  outC->_L304.d_max = kcg_lit_int64(0);
  outC->_L302.nominal = kcg_lit_int64(0);
  outC->_L302.d_min = kcg_lit_int64(0);
  outC->_L302.d_max = kcg_lit_int64(0);
  outC->_L303 = kcg_true;
  outC->_L301.valid = kcg_true;
  outC->_L301.nid_c = kcg_lit_int64(0);
  outC->_L301.nid_bg = kcg_lit_int64(0);
  outC->_L301.q_link = Q_LINK_Unlinked;
  outC->_L301.location.nominal = kcg_lit_int64(0);
  outC->_L301.location.d_min = kcg_lit_int64(0);
  outC->_L301.location.d_max = kcg_lit_int64(0);
  outC->_L301.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.valid = kcg_true;
  outC->_L301.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L301.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L301.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L301.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L301.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L301.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L301.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L301.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L301.infoFromPassing.valid = kcg_true;
  outC->_L301.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L301.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L301.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L301.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L301.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L301.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L301.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L301.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L301.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L301.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L301.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L301.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L301.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L301.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L301.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L301.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L301.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L301.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L301.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L301.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L301.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L301.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L301.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L301.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L301.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L301.missed = kcg_true;
  outC->_L300.nominal = kcg_lit_int64(0);
  outC->_L300.d_min = kcg_lit_int64(0);
  outC->_L300.d_max = kcg_lit_int64(0);
  outC->_L297.nominal = kcg_lit_int64(0);
  outC->_L297.d_min = kcg_lit_int64(0);
  outC->_L297.d_max = kcg_lit_int64(0);
  outC->_L296.nominal = kcg_lit_int64(0);
  outC->_L296.d_min = kcg_lit_int64(0);
  outC->_L296.d_max = kcg_lit_int64(0);
  outC->_L294.nominal = kcg_lit_int64(0);
  outC->_L294.d_min = kcg_lit_int64(0);
  outC->_L294.d_max = kcg_lit_int64(0);
  outC->_L293.nid_engine = kcg_lit_int64(0);
  outC->_L293.nid_operational = kcg_lit_int64(0);
  outC->_L293.l_train = kcg_lit_int64(0);
  outC->_L293.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L293.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L293.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L293.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L293.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L293.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L293.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L293.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L293.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L293.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L293.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L293.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L292.nominal = kcg_lit_int64(0);
  outC->_L292.d_min = kcg_lit_int64(0);
  outC->_L292.d_max = kcg_lit_int64(0);
  outC->_L291.valid = kcg_true;
  outC->_L291.nid_c = kcg_lit_int64(0);
  outC->_L291.nid_bg = kcg_lit_int64(0);
  outC->_L291.q_link = Q_LINK_Unlinked;
  outC->_L291.location.nominal = kcg_lit_int64(0);
  outC->_L291.location.d_min = kcg_lit_int64(0);
  outC->_L291.location.d_max = kcg_lit_int64(0);
  outC->_L291.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.valid = kcg_true;
  outC->_L291.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L291.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L291.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L291.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L291.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L291.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L291.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L291.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L291.infoFromPassing.valid = kcg_true;
  outC->_L291.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L291.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L291.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L291.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L291.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L291.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L291.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L291.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L291.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L291.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L291.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L291.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L291.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L291.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L291.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L291.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L291.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L291.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L291.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L291.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L291.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L291.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L291.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L291.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L291.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L291.missed = kcg_true;
  outC->_L290.valid = kcg_true;
  outC->_L290.nid_c = kcg_lit_int64(0);
  outC->_L290.nid_bg = kcg_lit_int64(0);
  outC->_L290.q_link = Q_LINK_Unlinked;
  outC->_L290.location.nominal = kcg_lit_int64(0);
  outC->_L290.location.d_min = kcg_lit_int64(0);
  outC->_L290.location.d_max = kcg_lit_int64(0);
  outC->_L290.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.valid = kcg_true;
  outC->_L290.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L290.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L290.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L290.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L290.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L290.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L290.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L290.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L290.infoFromPassing.valid = kcg_true;
  outC->_L290.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L290.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L290.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L290.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L290.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L290.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L290.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L290.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L290.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L290.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L290.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L290.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L290.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L290.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L290.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L290.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L290.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L290.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L290.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L290.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L290.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L290.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L290.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L290.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L290.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L290.missed = kcg_true;
  outC->_L289.valid = kcg_true;
  outC->_L289.nid_c = kcg_lit_int64(0);
  outC->_L289.nid_bg = kcg_lit_int64(0);
  outC->_L289.q_link = Q_LINK_Unlinked;
  outC->_L289.location.nominal = kcg_lit_int64(0);
  outC->_L289.location.d_min = kcg_lit_int64(0);
  outC->_L289.location.d_max = kcg_lit_int64(0);
  outC->_L289.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.valid = kcg_true;
  outC->_L289.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L289.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L289.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L289.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L289.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L289.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L289.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L289.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L289.infoFromPassing.valid = kcg_true;
  outC->_L289.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L289.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L289.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L289.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L289.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L289.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L289.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L289.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L289.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L289.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L289.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L289.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L289.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L289.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L289.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L289.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L289.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L289.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L289.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L289.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L289.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L289.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L289.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L289.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L289.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L289.missed = kcg_true;
  outC->_L288.nominal = kcg_lit_int64(0);
  outC->_L288.d_min = kcg_lit_int64(0);
  outC->_L288.d_max = kcg_lit_int64(0);
  outC->_L287.nominal = kcg_lit_int64(0);
  outC->_L287.d_min = kcg_lit_int64(0);
  outC->_L287.d_max = kcg_lit_int64(0);
  outC->_L286.nominal = kcg_lit_int64(0);
  outC->_L286.d_min = kcg_lit_int64(0);
  outC->_L286.d_max = kcg_lit_int64(0);
  outC->_L285.nominal = kcg_lit_int64(0);
  outC->_L285.d_min = kcg_lit_int64(0);
  outC->_L285.d_max = kcg_lit_int64(0);
  outC->_L282.nominal = kcg_lit_int64(0);
  outC->_L282.d_min = kcg_lit_int64(0);
  outC->_L282.d_max = kcg_lit_int64(0);
  outC->_L281.nominal = kcg_lit_int64(0);
  outC->_L281.d_min = kcg_lit_int64(0);
  outC->_L281.d_max = kcg_lit_int64(0);
  outC->_L280.nominal = kcg_lit_int64(0);
  outC->_L280.d_min = kcg_lit_int64(0);
  outC->_L280.d_max = kcg_lit_int64(0);
  outC->_L279.nominal = kcg_lit_int64(0);
  outC->_L279.d_min = kcg_lit_int64(0);
  outC->_L279.d_max = kcg_lit_int64(0);
  outC->_L278 = kcg_true;
  outC->_L277.o_nominal = kcg_lit_int64(0);
  outC->_L277.o_min = kcg_lit_int64(0);
  outC->_L277.o_max = kcg_lit_int64(0);
  outC->_L276 = kcg_true;
  outC->_L275.valid = kcg_true;
  outC->_L275.BG_Header.valid = kcg_true;
  outC->_L275.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L275.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L275.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L275.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L275.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L275.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L275.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L275.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L275.BG_Header.bgPosition.valid = kcg_true;
  outC->_L275.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L275.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L275.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L275.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L275.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L275.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L275.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L275.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L275.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L275.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L275.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L275.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L275.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L275.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L275.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L275.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L275.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L275.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L275.linkedBGs[idx4].valid = kcg_true;
    outC->_L275.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
    outC->_L275.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L275.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L275.linkedBGs[idx4].d_link = kcg_lit_int64(0);
    outC->_L275.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L275.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
    outC->_L275.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
    outC->_L275.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L275.linkedBGs[idx4].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L275.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
  }
  outC->_L274.valid = kcg_true;
  outC->_L274.nid_c = kcg_lit_int64(0);
  outC->_L274.nid_bg = kcg_lit_int64(0);
  outC->_L274.q_link = Q_LINK_Unlinked;
  outC->_L274.location.nominal = kcg_lit_int64(0);
  outC->_L274.location.d_min = kcg_lit_int64(0);
  outC->_L274.location.d_max = kcg_lit_int64(0);
  outC->_L274.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.valid = kcg_true;
  outC->_L274.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L274.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L274.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L274.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L274.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L274.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L274.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L274.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L274.infoFromPassing.valid = kcg_true;
  outC->_L274.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L274.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L274.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L274.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L274.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L274.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L274.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L274.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L274.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L274.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L274.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L274.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L274.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L274.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L274.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L274.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int64(0);
    outC->_L274.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L274.infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L274.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int64(0);
    outC->_L274.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L274.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int64(0);
    outC->_L274.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L274.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L274.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L274.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int64(0);
  }
  outC->_L274.missed = kcg_true;
  outC->_L273.refBG.valid = kcg_true;
  outC->_L273.refBG.nid_c = kcg_lit_int64(0);
  outC->_L273.refBG.nid_bg = kcg_lit_int64(0);
  outC->_L273.refBG.q_link = Q_LINK_Unlinked;
  outC->_L273.refBG.location.nominal = kcg_lit_int64(0);
  outC->_L273.refBG.location.d_min = kcg_lit_int64(0);
  outC->_L273.refBG.location.d_max = kcg_lit_int64(0);
  outC->_L273.refBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.valid = kcg_true;
  outC->_L273.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L273.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L273.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L273.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L273.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L273.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L273.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.valid = kcg_true;
  outC->_L273.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L273.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L273.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L273.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L273.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L273.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L273.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L273.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L273.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L273.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L273.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L273.refBG.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L273.refBG.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int64(0);
    outC->_L273.refBG.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L273.refBG.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L273.refBG.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int64(0);
    outC->_L273.refBG.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L273.refBG.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int64(0);
    outC->_L273.refBG.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int64(0);
    outC->_L273.refBG.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L273.refBG.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L273.refBG.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int64(0);
  }
  outC->_L273.refBG.missed = kcg_true;
  outC->_L273.prevLinkedBG.valid = kcg_true;
  outC->_L273.prevLinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L273.prevLinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L273.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->_L273.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L273.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->_L273.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L273.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L273.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L273.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L273.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L273.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->_L273.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L273.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L273.prevLinkedBG.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L273.prevLinkedBG.infoFromPassing.linkedBGs[idx7].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L273.prevLinkedBG.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L273.prevLinkedBG.infoFromPassing.linkedBGs[idx7].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L273.prevLinkedBG.infoFromPassing.linkedBGs[idx7].d_link =
      kcg_lit_int64(0);
    outC->_L273.prevLinkedBG.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L273.prevLinkedBG.infoFromPassing.linkedBGs[idx7].nid_c =
      kcg_lit_int64(0);
    outC->_L273.prevLinkedBG.infoFromPassing.linkedBGs[idx7].nid_bg =
      kcg_lit_int64(0);
    outC->_L273.prevLinkedBG.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L273.prevLinkedBG.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L273.prevLinkedBG.infoFromPassing.linkedBGs[idx7].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L273.prevLinkedBG.missed = kcg_true;
  outC->_L273.prevUnlinkedBG.valid = kcg_true;
  outC->_L273.prevUnlinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L273.prevUnlinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L273.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L273.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L273.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L273.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(
      0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L273.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(
      0);
  outC->_L273.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L273.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L273.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(
      0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L273.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L273.prevUnlinkedBG.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L273.prevUnlinkedBG.infoFromPassing.linkedBGs[idx8].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L273.prevUnlinkedBG.infoFromPassing.linkedBGs[idx8].q_dir =
      Q_DIR_Reverse;
    outC->_L273.prevUnlinkedBG.infoFromPassing.linkedBGs[idx8].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L273.prevUnlinkedBG.infoFromPassing.linkedBGs[idx8].d_link =
      kcg_lit_int64(0);
    outC->_L273.prevUnlinkedBG.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L273.prevUnlinkedBG.infoFromPassing.linkedBGs[idx8].nid_c =
      kcg_lit_int64(0);
    outC->_L273.prevUnlinkedBG.infoFromPassing.linkedBGs[idx8].nid_bg =
      kcg_lit_int64(0);
    outC->_L273.prevUnlinkedBG.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L273.prevUnlinkedBG.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L273.prevUnlinkedBG.infoFromPassing.linkedBGs[idx8].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L273.prevUnlinkedBG.missed = kcg_true;
  outC->_L273.recalculate = kcg_true;
  outC->_L273.sumOfBestDistances.nominal = kcg_lit_int64(0);
  outC->_L273.sumOfBestDistances.d_min = kcg_lit_int64(0);
  outC->_L273.sumOfBestDistances.d_max = kcg_lit_int64(0);
  outC->_L271.o_nominal = kcg_lit_int64(0);
  outC->_L271.o_min = kcg_lit_int64(0);
  outC->_L271.o_max = kcg_lit_int64(0);
  outC->_L270 = kcg_true;
  outC->_L269.valid = kcg_true;
  outC->_L269.BG_Header.valid = kcg_true;
  outC->_L269.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L269.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L269.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L269.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L269.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L269.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L269.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L269.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L269.BG_Header.bgPosition.valid = kcg_true;
  outC->_L269.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L269.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L269.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L269.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L269.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L269.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L269.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L269.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L269.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L269.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L269.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L269.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L269.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L269.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L269.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L269.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L269.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L269.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L269.linkedBGs[idx9].valid = kcg_true;
    outC->_L269.linkedBGs[idx9].nid_LRBG = kcg_lit_int64(0);
    outC->_L269.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L269.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L269.linkedBGs[idx9].d_link = kcg_lit_int64(0);
    outC->_L269.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L269.linkedBGs[idx9].nid_c = kcg_lit_int64(0);
    outC->_L269.linkedBGs[idx9].nid_bg = kcg_lit_int64(0);
    outC->_L269.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L269.linkedBGs[idx9].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L269.linkedBGs[idx9].q_locacc = kcg_lit_int64(0);
  }
  outC->_L268 = kcg_true;
  outC->_L267.valid = kcg_true;
  outC->_L267.nid_c = kcg_lit_int64(0);
  outC->_L267.nid_bg = kcg_lit_int64(0);
  outC->_L267.q_link = Q_LINK_Unlinked;
  outC->_L267.location.nominal = kcg_lit_int64(0);
  outC->_L267.location.d_min = kcg_lit_int64(0);
  outC->_L267.location.d_max = kcg_lit_int64(0);
  outC->_L267.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.valid = kcg_true;
  outC->_L267.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L267.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L267.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L267.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L267.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L267.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L267.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L267.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L267.infoFromPassing.valid = kcg_true;
  outC->_L267.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L267.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L267.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L267.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L267.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L267.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L267.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L267.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L267.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L267.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L267.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L267.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L267.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L267.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L267.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->_L267.infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int64(0);
    outC->_L267.infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
    outC->_L267.infoFromPassing.linkedBGs[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L267.infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int64(0);
    outC->_L267.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L267.infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int64(0);
    outC->_L267.infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int64(0);
    outC->_L267.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L267.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L267.infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int64(0);
  }
  outC->_L267.missed = kcg_true;
  outC->_L265.nominal = kcg_lit_int64(0);
  outC->_L265.d_min = kcg_lit_int64(0);
  outC->_L265.d_max = kcg_lit_int64(0);
  outC->_L260 = kcg_true;
  outC->_L259 = kcg_true;
  outC->_L258 = kcg_true;
  outC->_L257 = kcg_true;
  outC->_L256.nominal = kcg_lit_int64(0);
  outC->_L256.d_min = kcg_lit_int64(0);
  outC->_L256.d_max = kcg_lit_int64(0);
  outC->_L255.nominal = kcg_lit_int64(0);
  outC->_L255.d_min = kcg_lit_int64(0);
  outC->_L255.d_max = kcg_lit_int64(0);
  outC->_L254.nominal = kcg_lit_int64(0);
  outC->_L254.d_min = kcg_lit_int64(0);
  outC->_L254.d_max = kcg_lit_int64(0);
  outC->_L253.valid = kcg_true;
  outC->_L253.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L253.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L253.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L253.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L253.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L253.d_link.nominal = kcg_lit_int64(0);
  outC->_L253.d_link.d_min = kcg_lit_int64(0);
  outC->_L253.d_link.d_max = kcg_lit_int64(0);
  outC->_L253.linkingInfo.valid = kcg_true;
  outC->_L253.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L253.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L253.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L253.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L253.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L253.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L253.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L253.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L253.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L253.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L244.nominal = kcg_lit_int64(0);
  outC->_L244.d_min = kcg_lit_int64(0);
  outC->_L244.d_max = kcg_lit_int64(0);
  outC->_L243.nominal = kcg_lit_int64(0);
  outC->_L243.d_min = kcg_lit_int64(0);
  outC->_L243.d_max = kcg_lit_int64(0);
  outC->_L237.valid = kcg_true;
  outC->_L237.nid_c = kcg_lit_int64(0);
  outC->_L237.nid_bg = kcg_lit_int64(0);
  outC->_L237.q_link = Q_LINK_Unlinked;
  outC->_L237.location.nominal = kcg_lit_int64(0);
  outC->_L237.location.d_min = kcg_lit_int64(0);
  outC->_L237.location.d_max = kcg_lit_int64(0);
  outC->_L237.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.valid = kcg_true;
  outC->_L237.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L237.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L237.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L237.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L237.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L237.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L237.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L237.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L237.infoFromPassing.valid = kcg_true;
  outC->_L237.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L237.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L237.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L237.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L237.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L237.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L237.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L237.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L237.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L237.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L237.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L237.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L237.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L237.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L237.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L237.infoFromPassing.linkedBGs[idx11].nid_LRBG = kcg_lit_int64(0);
    outC->_L237.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
    outC->_L237.infoFromPassing.linkedBGs[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L237.infoFromPassing.linkedBGs[idx11].d_link = kcg_lit_int64(0);
    outC->_L237.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L237.infoFromPassing.linkedBGs[idx11].nid_c = kcg_lit_int64(0);
    outC->_L237.infoFromPassing.linkedBGs[idx11].nid_bg = kcg_lit_int64(0);
    outC->_L237.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L237.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L237.infoFromPassing.linkedBGs[idx11].q_locacc = kcg_lit_int64(0);
  }
  outC->_L237.missed = kcg_true;
  outC->_L238 = Q_LINK_Unlinked;
  outC->_L239 = kcg_true;
  outC->_L240 = Q_LINK_Unlinked;
  outC->_L236 = kcg_true;
  outC->_L230.nominal = kcg_lit_int64(0);
  outC->_L230.d_min = kcg_lit_int64(0);
  outC->_L230.d_max = kcg_lit_int64(0);
  outC->_L229.refBG.valid = kcg_true;
  outC->_L229.refBG.nid_c = kcg_lit_int64(0);
  outC->_L229.refBG.nid_bg = kcg_lit_int64(0);
  outC->_L229.refBG.q_link = Q_LINK_Unlinked;
  outC->_L229.refBG.location.nominal = kcg_lit_int64(0);
  outC->_L229.refBG.location.d_min = kcg_lit_int64(0);
  outC->_L229.refBG.location.d_max = kcg_lit_int64(0);
  outC->_L229.refBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.valid = kcg_true;
  outC->_L229.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L229.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L229.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L229.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L229.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L229.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L229.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.valid = kcg_true;
  outC->_L229.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L229.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L229.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L229.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L229.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L229.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L229.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L229.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L229.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L229.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L229.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->_L229.refBG.infoFromPassing.linkedBGs[idx12].valid = kcg_true;
    outC->_L229.refBG.infoFromPassing.linkedBGs[idx12].nid_LRBG = kcg_lit_int64(0);
    outC->_L229.refBG.infoFromPassing.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
    outC->_L229.refBG.infoFromPassing.linkedBGs[idx12].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L229.refBG.infoFromPassing.linkedBGs[idx12].d_link = kcg_lit_int64(0);
    outC->_L229.refBG.infoFromPassing.linkedBGs[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L229.refBG.infoFromPassing.linkedBGs[idx12].nid_c = kcg_lit_int64(0);
    outC->_L229.refBG.infoFromPassing.linkedBGs[idx12].nid_bg = kcg_lit_int64(0);
    outC->_L229.refBG.infoFromPassing.linkedBGs[idx12].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L229.refBG.infoFromPassing.linkedBGs[idx12].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L229.refBG.infoFromPassing.linkedBGs[idx12].q_locacc = kcg_lit_int64(0);
  }
  outC->_L229.refBG.missed = kcg_true;
  outC->_L229.prevLinkedBG.valid = kcg_true;
  outC->_L229.prevLinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L229.prevLinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L229.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->_L229.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L229.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->_L229.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L229.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L229.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L229.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L229.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L229.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->_L229.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L229.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L229.prevLinkedBG.infoFromPassing.linkedBGs[idx13].valid = kcg_true;
    outC->_L229.prevLinkedBG.infoFromPassing.linkedBGs[idx13].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L229.prevLinkedBG.infoFromPassing.linkedBGs[idx13].q_dir = Q_DIR_Reverse;
    outC->_L229.prevLinkedBG.infoFromPassing.linkedBGs[idx13].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L229.prevLinkedBG.infoFromPassing.linkedBGs[idx13].d_link =
      kcg_lit_int64(0);
    outC->_L229.prevLinkedBG.infoFromPassing.linkedBGs[idx13].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L229.prevLinkedBG.infoFromPassing.linkedBGs[idx13].nid_c =
      kcg_lit_int64(0);
    outC->_L229.prevLinkedBG.infoFromPassing.linkedBGs[idx13].nid_bg =
      kcg_lit_int64(0);
    outC->_L229.prevLinkedBG.infoFromPassing.linkedBGs[idx13].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L229.prevLinkedBG.infoFromPassing.linkedBGs[idx13].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L229.prevLinkedBG.infoFromPassing.linkedBGs[idx13].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L229.prevLinkedBG.missed = kcg_true;
  outC->_L229.prevUnlinkedBG.valid = kcg_true;
  outC->_L229.prevUnlinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L229.prevUnlinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L229.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L229.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L229.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L229.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(
      0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L229.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(
      0);
  outC->_L229.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L229.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L229.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(
      0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L229.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L229.prevUnlinkedBG.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->_L229.prevUnlinkedBG.infoFromPassing.linkedBGs[idx14].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L229.prevUnlinkedBG.infoFromPassing.linkedBGs[idx14].q_dir =
      Q_DIR_Reverse;
    outC->_L229.prevUnlinkedBG.infoFromPassing.linkedBGs[idx14].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L229.prevUnlinkedBG.infoFromPassing.linkedBGs[idx14].d_link =
      kcg_lit_int64(0);
    outC->_L229.prevUnlinkedBG.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L229.prevUnlinkedBG.infoFromPassing.linkedBGs[idx14].nid_c =
      kcg_lit_int64(0);
    outC->_L229.prevUnlinkedBG.infoFromPassing.linkedBGs[idx14].nid_bg =
      kcg_lit_int64(0);
    outC->_L229.prevUnlinkedBG.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L229.prevUnlinkedBG.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L229.prevUnlinkedBG.infoFromPassing.linkedBGs[idx14].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L229.prevUnlinkedBG.missed = kcg_true;
  outC->_L229.recalculate = kcg_true;
  outC->_L229.sumOfBestDistances.nominal = kcg_lit_int64(0);
  outC->_L229.sumOfBestDistances.d_min = kcg_lit_int64(0);
  outC->_L229.sumOfBestDistances.d_max = kcg_lit_int64(0);
  outC->_L220.nominal = kcg_lit_int64(0);
  outC->_L220.d_min = kcg_lit_int64(0);
  outC->_L220.d_max = kcg_lit_int64(0);
  outC->_L219.nominal = kcg_lit_int64(0);
  outC->_L219.d_min = kcg_lit_int64(0);
  outC->_L219.d_max = kcg_lit_int64(0);
  outC->_L218.nominal = kcg_lit_int64(0);
  outC->_L218.d_min = kcg_lit_int64(0);
  outC->_L218.d_max = kcg_lit_int64(0);
  outC->_L217.nominal = kcg_lit_int64(0);
  outC->_L217.d_min = kcg_lit_int64(0);
  outC->_L217.d_max = kcg_lit_int64(0);
  outC->_L216.nominal = kcg_lit_int64(0);
  outC->_L216.d_min = kcg_lit_int64(0);
  outC->_L216.d_max = kcg_lit_int64(0);
  outC->_L197.nid_engine = kcg_lit_int64(0);
  outC->_L197.nid_operational = kcg_lit_int64(0);
  outC->_L197.l_train = kcg_lit_int64(0);
  outC->_L197.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L197.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L197.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L197.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L197.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L197.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L197.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L197.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L197.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L197.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L197.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L197.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L188.valid = kcg_true;
  outC->_L188.nid_c = kcg_lit_int64(0);
  outC->_L188.nid_bg = kcg_lit_int64(0);
  outC->_L188.q_link = Q_LINK_Unlinked;
  outC->_L188.location.nominal = kcg_lit_int64(0);
  outC->_L188.location.d_min = kcg_lit_int64(0);
  outC->_L188.location.d_max = kcg_lit_int64(0);
  outC->_L188.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.valid = kcg_true;
  outC->_L188.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L188.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L188.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L188.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L188.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L188.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L188.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L188.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.valid = kcg_true;
  outC->_L188.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L188.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L188.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L188.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L188.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L188.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L188.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L188.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L188.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L188.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L188.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L188.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L188.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L188.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->_L188.infoFromPassing.linkedBGs[idx15].valid = kcg_true;
    outC->_L188.infoFromPassing.linkedBGs[idx15].nid_LRBG = kcg_lit_int64(0);
    outC->_L188.infoFromPassing.linkedBGs[idx15].q_dir = Q_DIR_Reverse;
    outC->_L188.infoFromPassing.linkedBGs[idx15].q_scale = Q_SCALE_10_cm_scale;
    outC->_L188.infoFromPassing.linkedBGs[idx15].d_link = kcg_lit_int64(0);
    outC->_L188.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L188.infoFromPassing.linkedBGs[idx15].nid_c = kcg_lit_int64(0);
    outC->_L188.infoFromPassing.linkedBGs[idx15].nid_bg = kcg_lit_int64(0);
    outC->_L188.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L188.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L188.infoFromPassing.linkedBGs[idx15].q_locacc = kcg_lit_int64(0);
  }
  outC->_L188.missed = kcg_true;
  outC->_L147.valid = kcg_true;
  outC->_L147.nid_c = kcg_lit_int64(0);
  outC->_L147.nid_bg = kcg_lit_int64(0);
  outC->_L147.q_link = Q_LINK_Unlinked;
  outC->_L147.location.nominal = kcg_lit_int64(0);
  outC->_L147.location.d_min = kcg_lit_int64(0);
  outC->_L147.location.d_max = kcg_lit_int64(0);
  outC->_L147.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.valid = kcg_true;
  outC->_L147.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L147.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L147.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L147.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L147.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L147.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L147.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L147.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L147.infoFromPassing.valid = kcg_true;
  outC->_L147.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L147.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L147.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L147.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L147.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L147.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L147.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L147.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L147.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L147.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L147.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L147.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L147.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L147.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->_L147.infoFromPassing.linkedBGs[idx16].valid = kcg_true;
    outC->_L147.infoFromPassing.linkedBGs[idx16].nid_LRBG = kcg_lit_int64(0);
    outC->_L147.infoFromPassing.linkedBGs[idx16].q_dir = Q_DIR_Reverse;
    outC->_L147.infoFromPassing.linkedBGs[idx16].q_scale = Q_SCALE_10_cm_scale;
    outC->_L147.infoFromPassing.linkedBGs[idx16].d_link = kcg_lit_int64(0);
    outC->_L147.infoFromPassing.linkedBGs[idx16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L147.infoFromPassing.linkedBGs[idx16].nid_c = kcg_lit_int64(0);
    outC->_L147.infoFromPassing.linkedBGs[idx16].nid_bg = kcg_lit_int64(0);
    outC->_L147.infoFromPassing.linkedBGs[idx16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L147.infoFromPassing.linkedBGs[idx16].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L147.infoFromPassing.linkedBGs[idx16].q_locacc = kcg_lit_int64(0);
  }
  outC->_L147.missed = kcg_true;
  outC->_L74.valid = kcg_true;
  outC->_L74.nid_c = kcg_lit_int64(0);
  outC->_L74.nid_bg = kcg_lit_int64(0);
  outC->_L74.q_link = Q_LINK_Unlinked;
  outC->_L74.location.nominal = kcg_lit_int64(0);
  outC->_L74.location.d_min = kcg_lit_int64(0);
  outC->_L74.location.d_max = kcg_lit_int64(0);
  outC->_L74.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.valid = kcg_true;
  outC->_L74.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L74.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L74.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L74.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L74.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L74.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L74.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L74.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.valid = kcg_true;
  outC->_L74.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L74.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L74.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L74.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L74.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L74.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L74.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L74.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L74.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L74.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L74.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L74.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L74.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->_L74.infoFromPassing.linkedBGs[idx17].valid = kcg_true;
    outC->_L74.infoFromPassing.linkedBGs[idx17].nid_LRBG = kcg_lit_int64(0);
    outC->_L74.infoFromPassing.linkedBGs[idx17].q_dir = Q_DIR_Reverse;
    outC->_L74.infoFromPassing.linkedBGs[idx17].q_scale = Q_SCALE_10_cm_scale;
    outC->_L74.infoFromPassing.linkedBGs[idx17].d_link = kcg_lit_int64(0);
    outC->_L74.infoFromPassing.linkedBGs[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L74.infoFromPassing.linkedBGs[idx17].nid_c = kcg_lit_int64(0);
    outC->_L74.infoFromPassing.linkedBGs[idx17].nid_bg = kcg_lit_int64(0);
    outC->_L74.infoFromPassing.linkedBGs[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L74.infoFromPassing.linkedBGs[idx17].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L74.infoFromPassing.linkedBGs[idx17].q_locacc = kcg_lit_int64(0);
  }
  outC->_L74.missed = kcg_true;
  outC->_L62.valid = kcg_true;
  outC->_L62.nid_c = kcg_lit_int64(0);
  outC->_L62.nid_bg = kcg_lit_int64(0);
  outC->_L62.q_link = Q_LINK_Unlinked;
  outC->_L62.location.nominal = kcg_lit_int64(0);
  outC->_L62.location.d_min = kcg_lit_int64(0);
  outC->_L62.location.d_max = kcg_lit_int64(0);
  outC->_L62.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.valid = kcg_true;
  outC->_L62.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L62.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L62.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L62.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L62.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L62.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L62.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L62.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L62.infoFromPassing.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L62.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L62.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L62.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L62.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L62.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L62.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L62.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->_L62.infoFromPassing.linkedBGs[idx18].valid = kcg_true;
    outC->_L62.infoFromPassing.linkedBGs[idx18].nid_LRBG = kcg_lit_int64(0);
    outC->_L62.infoFromPassing.linkedBGs[idx18].q_dir = Q_DIR_Reverse;
    outC->_L62.infoFromPassing.linkedBGs[idx18].q_scale = Q_SCALE_10_cm_scale;
    outC->_L62.infoFromPassing.linkedBGs[idx18].d_link = kcg_lit_int64(0);
    outC->_L62.infoFromPassing.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L62.infoFromPassing.linkedBGs[idx18].nid_c = kcg_lit_int64(0);
    outC->_L62.infoFromPassing.linkedBGs[idx18].nid_bg = kcg_lit_int64(0);
    outC->_L62.infoFromPassing.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L62.infoFromPassing.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L62.infoFromPassing.linkedBGs[idx18].q_locacc = kcg_lit_int64(0);
  }
  outC->_L62.missed = kcg_true;
  outC->_L175.valid = kcg_true;
  outC->_L175.nid_c = kcg_lit_int64(0);
  outC->_L175.nid_bg = kcg_lit_int64(0);
  outC->_L175.q_link = Q_LINK_Unlinked;
  outC->_L175.location.nominal = kcg_lit_int64(0);
  outC->_L175.location.d_min = kcg_lit_int64(0);
  outC->_L175.location.d_max = kcg_lit_int64(0);
  outC->_L175.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.valid = kcg_true;
  outC->_L175.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L175.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L175.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L175.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L175.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L175.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L175.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L175.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L175.infoFromPassing.valid = kcg_true;
  outC->_L175.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L175.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L175.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L175.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L175.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L175.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L175.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L175.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L175.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L175.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L175.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L175.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L175.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L175.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx19 = 0; idx19 < 33; idx19++) {
    outC->_L175.infoFromPassing.linkedBGs[idx19].valid = kcg_true;
    outC->_L175.infoFromPassing.linkedBGs[idx19].nid_LRBG = kcg_lit_int64(0);
    outC->_L175.infoFromPassing.linkedBGs[idx19].q_dir = Q_DIR_Reverse;
    outC->_L175.infoFromPassing.linkedBGs[idx19].q_scale = Q_SCALE_10_cm_scale;
    outC->_L175.infoFromPassing.linkedBGs[idx19].d_link = kcg_lit_int64(0);
    outC->_L175.infoFromPassing.linkedBGs[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L175.infoFromPassing.linkedBGs[idx19].nid_c = kcg_lit_int64(0);
    outC->_L175.infoFromPassing.linkedBGs[idx19].nid_bg = kcg_lit_int64(0);
    outC->_L175.infoFromPassing.linkedBGs[idx19].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L175.infoFromPassing.linkedBGs[idx19].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L175.infoFromPassing.linkedBGs[idx19].q_locacc = kcg_lit_int64(0);
  }
  outC->_L175.missed = kcg_true;
  outC->_L174.valid = kcg_true;
  outC->_L174.nid_c = kcg_lit_int64(0);
  outC->_L174.nid_bg = kcg_lit_int64(0);
  outC->_L174.q_link = Q_LINK_Unlinked;
  outC->_L174.location.nominal = kcg_lit_int64(0);
  outC->_L174.location.d_min = kcg_lit_int64(0);
  outC->_L174.location.d_max = kcg_lit_int64(0);
  outC->_L174.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.valid = kcg_true;
  outC->_L174.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L174.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L174.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L174.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L174.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L174.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L174.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L174.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L174.infoFromPassing.valid = kcg_true;
  outC->_L174.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L174.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L174.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L174.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L174.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L174.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L174.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L174.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L174.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L174.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L174.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L174.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L174.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L174.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->_L174.infoFromPassing.linkedBGs[idx20].valid = kcg_true;
    outC->_L174.infoFromPassing.linkedBGs[idx20].nid_LRBG = kcg_lit_int64(0);
    outC->_L174.infoFromPassing.linkedBGs[idx20].q_dir = Q_DIR_Reverse;
    outC->_L174.infoFromPassing.linkedBGs[idx20].q_scale = Q_SCALE_10_cm_scale;
    outC->_L174.infoFromPassing.linkedBGs[idx20].d_link = kcg_lit_int64(0);
    outC->_L174.infoFromPassing.linkedBGs[idx20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L174.infoFromPassing.linkedBGs[idx20].nid_c = kcg_lit_int64(0);
    outC->_L174.infoFromPassing.linkedBGs[idx20].nid_bg = kcg_lit_int64(0);
    outC->_L174.infoFromPassing.linkedBGs[idx20].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L174.infoFromPassing.linkedBGs[idx20].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L174.infoFromPassing.linkedBGs[idx20].q_locacc = kcg_lit_int64(0);
  }
  outC->_L174.missed = kcg_true;
  outC->_L173 = kcg_true;
  outC->_L172.valid = kcg_true;
  outC->_L172.nid_c = kcg_lit_int64(0);
  outC->_L172.nid_bg = kcg_lit_int64(0);
  outC->_L172.q_link = Q_LINK_Unlinked;
  outC->_L172.location.nominal = kcg_lit_int64(0);
  outC->_L172.location.d_min = kcg_lit_int64(0);
  outC->_L172.location.d_max = kcg_lit_int64(0);
  outC->_L172.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.valid = kcg_true;
  outC->_L172.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L172.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L172.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L172.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L172.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L172.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L172.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L172.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L172.infoFromPassing.valid = kcg_true;
  outC->_L172.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L172.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L172.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L172.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L172.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L172.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L172.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L172.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L172.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L172.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L172.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L172.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L172.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L172.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->_L172.infoFromPassing.linkedBGs[idx21].valid = kcg_true;
    outC->_L172.infoFromPassing.linkedBGs[idx21].nid_LRBG = kcg_lit_int64(0);
    outC->_L172.infoFromPassing.linkedBGs[idx21].q_dir = Q_DIR_Reverse;
    outC->_L172.infoFromPassing.linkedBGs[idx21].q_scale = Q_SCALE_10_cm_scale;
    outC->_L172.infoFromPassing.linkedBGs[idx21].d_link = kcg_lit_int64(0);
    outC->_L172.infoFromPassing.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L172.infoFromPassing.linkedBGs[idx21].nid_c = kcg_lit_int64(0);
    outC->_L172.infoFromPassing.linkedBGs[idx21].nid_bg = kcg_lit_int64(0);
    outC->_L172.infoFromPassing.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L172.infoFromPassing.linkedBGs[idx21].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L172.infoFromPassing.linkedBGs[idx21].q_locacc = kcg_lit_int64(0);
  }
  outC->_L172.missed = kcg_true;
  outC->_L169 = kcg_true;
  outC->_L168.valid = kcg_true;
  outC->_L168.nid_c = kcg_lit_int64(0);
  outC->_L168.nid_bg = kcg_lit_int64(0);
  outC->_L168.q_link = Q_LINK_Unlinked;
  outC->_L168.location.nominal = kcg_lit_int64(0);
  outC->_L168.location.d_min = kcg_lit_int64(0);
  outC->_L168.location.d_max = kcg_lit_int64(0);
  outC->_L168.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.valid = kcg_true;
  outC->_L168.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L168.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L168.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L168.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L168.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L168.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L168.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L168.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L168.infoFromPassing.valid = kcg_true;
  outC->_L168.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L168.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L168.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L168.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L168.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L168.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L168.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L168.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L168.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L168.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L168.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L168.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L168.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L168.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx22 = 0; idx22 < 33; idx22++) {
    outC->_L168.infoFromPassing.linkedBGs[idx22].valid = kcg_true;
    outC->_L168.infoFromPassing.linkedBGs[idx22].nid_LRBG = kcg_lit_int64(0);
    outC->_L168.infoFromPassing.linkedBGs[idx22].q_dir = Q_DIR_Reverse;
    outC->_L168.infoFromPassing.linkedBGs[idx22].q_scale = Q_SCALE_10_cm_scale;
    outC->_L168.infoFromPassing.linkedBGs[idx22].d_link = kcg_lit_int64(0);
    outC->_L168.infoFromPassing.linkedBGs[idx22].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L168.infoFromPassing.linkedBGs[idx22].nid_c = kcg_lit_int64(0);
    outC->_L168.infoFromPassing.linkedBGs[idx22].nid_bg = kcg_lit_int64(0);
    outC->_L168.infoFromPassing.linkedBGs[idx22].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L168.infoFromPassing.linkedBGs[idx22].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L168.infoFromPassing.linkedBGs[idx22].q_locacc = kcg_lit_int64(0);
  }
  outC->_L168.missed = kcg_true;
  outC->_L167.valid = kcg_true;
  outC->_L167.nid_c = kcg_lit_int64(0);
  outC->_L167.nid_bg = kcg_lit_int64(0);
  outC->_L167.q_link = Q_LINK_Unlinked;
  outC->_L167.location.nominal = kcg_lit_int64(0);
  outC->_L167.location.d_min = kcg_lit_int64(0);
  outC->_L167.location.d_max = kcg_lit_int64(0);
  outC->_L167.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.valid = kcg_true;
  outC->_L167.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L167.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L167.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L167.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L167.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L167.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L167.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L167.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L167.infoFromPassing.valid = kcg_true;
  outC->_L167.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L167.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L167.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L167.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L167.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L167.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L167.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L167.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L167.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L167.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L167.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L167.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L167.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L167.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx23 = 0; idx23 < 33; idx23++) {
    outC->_L167.infoFromPassing.linkedBGs[idx23].valid = kcg_true;
    outC->_L167.infoFromPassing.linkedBGs[idx23].nid_LRBG = kcg_lit_int64(0);
    outC->_L167.infoFromPassing.linkedBGs[idx23].q_dir = Q_DIR_Reverse;
    outC->_L167.infoFromPassing.linkedBGs[idx23].q_scale = Q_SCALE_10_cm_scale;
    outC->_L167.infoFromPassing.linkedBGs[idx23].d_link = kcg_lit_int64(0);
    outC->_L167.infoFromPassing.linkedBGs[idx23].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L167.infoFromPassing.linkedBGs[idx23].nid_c = kcg_lit_int64(0);
    outC->_L167.infoFromPassing.linkedBGs[idx23].nid_bg = kcg_lit_int64(0);
    outC->_L167.infoFromPassing.linkedBGs[idx23].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L167.infoFromPassing.linkedBGs[idx23].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L167.infoFromPassing.linkedBGs[idx23].q_locacc = kcg_lit_int64(0);
  }
  outC->_L167.missed = kcg_true;
  outC->_L165 = kcg_true;
  outC->_L164 = kcg_true;
  outC->_L163.valid = kcg_true;
  outC->_L163.nid_c = kcg_lit_int64(0);
  outC->_L163.nid_bg = kcg_lit_int64(0);
  outC->_L163.q_link = Q_LINK_Unlinked;
  outC->_L163.location.nominal = kcg_lit_int64(0);
  outC->_L163.location.d_min = kcg_lit_int64(0);
  outC->_L163.location.d_max = kcg_lit_int64(0);
  outC->_L163.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.valid = kcg_true;
  outC->_L163.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L163.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L163.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L163.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L163.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L163.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L163.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L163.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L163.infoFromPassing.valid = kcg_true;
  outC->_L163.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L163.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L163.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L163.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L163.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L163.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L163.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L163.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L163.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L163.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L163.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L163.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L163.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L163.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx24 = 0; idx24 < 33; idx24++) {
    outC->_L163.infoFromPassing.linkedBGs[idx24].valid = kcg_true;
    outC->_L163.infoFromPassing.linkedBGs[idx24].nid_LRBG = kcg_lit_int64(0);
    outC->_L163.infoFromPassing.linkedBGs[idx24].q_dir = Q_DIR_Reverse;
    outC->_L163.infoFromPassing.linkedBGs[idx24].q_scale = Q_SCALE_10_cm_scale;
    outC->_L163.infoFromPassing.linkedBGs[idx24].d_link = kcg_lit_int64(0);
    outC->_L163.infoFromPassing.linkedBGs[idx24].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L163.infoFromPassing.linkedBGs[idx24].nid_c = kcg_lit_int64(0);
    outC->_L163.infoFromPassing.linkedBGs[idx24].nid_bg = kcg_lit_int64(0);
    outC->_L163.infoFromPassing.linkedBGs[idx24].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L163.infoFromPassing.linkedBGs[idx24].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L163.infoFromPassing.linkedBGs[idx24].q_locacc = kcg_lit_int64(0);
  }
  outC->_L163.missed = kcg_true;
  outC->_L162.valid = kcg_true;
  outC->_L162.nid_c = kcg_lit_int64(0);
  outC->_L162.nid_bg = kcg_lit_int64(0);
  outC->_L162.q_link = Q_LINK_Unlinked;
  outC->_L162.location.nominal = kcg_lit_int64(0);
  outC->_L162.location.d_min = kcg_lit_int64(0);
  outC->_L162.location.d_max = kcg_lit_int64(0);
  outC->_L162.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.valid = kcg_true;
  outC->_L162.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L162.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L162.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L162.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L162.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L162.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L162.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L162.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L162.infoFromPassing.valid = kcg_true;
  outC->_L162.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L162.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L162.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L162.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L162.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L162.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L162.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L162.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L162.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L162.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L162.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L162.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L162.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L162.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx25 = 0; idx25 < 33; idx25++) {
    outC->_L162.infoFromPassing.linkedBGs[idx25].valid = kcg_true;
    outC->_L162.infoFromPassing.linkedBGs[idx25].nid_LRBG = kcg_lit_int64(0);
    outC->_L162.infoFromPassing.linkedBGs[idx25].q_dir = Q_DIR_Reverse;
    outC->_L162.infoFromPassing.linkedBGs[idx25].q_scale = Q_SCALE_10_cm_scale;
    outC->_L162.infoFromPassing.linkedBGs[idx25].d_link = kcg_lit_int64(0);
    outC->_L162.infoFromPassing.linkedBGs[idx25].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L162.infoFromPassing.linkedBGs[idx25].nid_c = kcg_lit_int64(0);
    outC->_L162.infoFromPassing.linkedBGs[idx25].nid_bg = kcg_lit_int64(0);
    outC->_L162.infoFromPassing.linkedBGs[idx25].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L162.infoFromPassing.linkedBGs[idx25].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L162.infoFromPassing.linkedBGs[idx25].q_locacc = kcg_lit_int64(0);
  }
  outC->_L162.missed = kcg_true;
  outC->_L161 = kcg_true;
  outC->_L160 = kcg_true;
  outC->_L159 = kcg_true;
  outC->_L158 = kcg_true;
  outC->_L157 = kcg_true;
  outC->_L156.valid = kcg_true;
  outC->_L156.nid_c = kcg_lit_int64(0);
  outC->_L156.nid_bg = kcg_lit_int64(0);
  outC->_L156.q_link = Q_LINK_Unlinked;
  outC->_L156.location.nominal = kcg_lit_int64(0);
  outC->_L156.location.d_min = kcg_lit_int64(0);
  outC->_L156.location.d_max = kcg_lit_int64(0);
  outC->_L156.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.valid = kcg_true;
  outC->_L156.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L156.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L156.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L156.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L156.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L156.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L156.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L156.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L156.infoFromPassing.valid = kcg_true;
  outC->_L156.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L156.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L156.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L156.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L156.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L156.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L156.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L156.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L156.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L156.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L156.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L156.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L156.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L156.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx26 = 0; idx26 < 33; idx26++) {
    outC->_L156.infoFromPassing.linkedBGs[idx26].valid = kcg_true;
    outC->_L156.infoFromPassing.linkedBGs[idx26].nid_LRBG = kcg_lit_int64(0);
    outC->_L156.infoFromPassing.linkedBGs[idx26].q_dir = Q_DIR_Reverse;
    outC->_L156.infoFromPassing.linkedBGs[idx26].q_scale = Q_SCALE_10_cm_scale;
    outC->_L156.infoFromPassing.linkedBGs[idx26].d_link = kcg_lit_int64(0);
    outC->_L156.infoFromPassing.linkedBGs[idx26].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L156.infoFromPassing.linkedBGs[idx26].nid_c = kcg_lit_int64(0);
    outC->_L156.infoFromPassing.linkedBGs[idx26].nid_bg = kcg_lit_int64(0);
    outC->_L156.infoFromPassing.linkedBGs[idx26].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L156.infoFromPassing.linkedBGs[idx26].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L156.infoFromPassing.linkedBGs[idx26].q_locacc = kcg_lit_int64(0);
  }
  outC->_L156.missed = kcg_true;
  outC->_L155.valid = kcg_true;
  outC->_L155.nid_c = kcg_lit_int64(0);
  outC->_L155.nid_bg = kcg_lit_int64(0);
  outC->_L155.q_link = Q_LINK_Unlinked;
  outC->_L155.location.nominal = kcg_lit_int64(0);
  outC->_L155.location.d_min = kcg_lit_int64(0);
  outC->_L155.location.d_max = kcg_lit_int64(0);
  outC->_L155.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.valid = kcg_true;
  outC->_L155.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L155.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L155.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L155.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L155.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L155.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L155.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L155.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L155.infoFromPassing.valid = kcg_true;
  outC->_L155.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L155.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L155.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L155.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L155.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L155.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L155.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L155.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L155.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L155.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L155.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L155.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L155.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L155.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx27 = 0; idx27 < 33; idx27++) {
    outC->_L155.infoFromPassing.linkedBGs[idx27].valid = kcg_true;
    outC->_L155.infoFromPassing.linkedBGs[idx27].nid_LRBG = kcg_lit_int64(0);
    outC->_L155.infoFromPassing.linkedBGs[idx27].q_dir = Q_DIR_Reverse;
    outC->_L155.infoFromPassing.linkedBGs[idx27].q_scale = Q_SCALE_10_cm_scale;
    outC->_L155.infoFromPassing.linkedBGs[idx27].d_link = kcg_lit_int64(0);
    outC->_L155.infoFromPassing.linkedBGs[idx27].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L155.infoFromPassing.linkedBGs[idx27].nid_c = kcg_lit_int64(0);
    outC->_L155.infoFromPassing.linkedBGs[idx27].nid_bg = kcg_lit_int64(0);
    outC->_L155.infoFromPassing.linkedBGs[idx27].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L155.infoFromPassing.linkedBGs[idx27].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L155.infoFromPassing.linkedBGs[idx27].q_locacc = kcg_lit_int64(0);
  }
  outC->_L155.missed = kcg_true;
  outC->_L154.valid = kcg_true;
  outC->_L154.nid_c = kcg_lit_int64(0);
  outC->_L154.nid_bg = kcg_lit_int64(0);
  outC->_L154.q_link = Q_LINK_Unlinked;
  outC->_L154.location.nominal = kcg_lit_int64(0);
  outC->_L154.location.d_min = kcg_lit_int64(0);
  outC->_L154.location.d_max = kcg_lit_int64(0);
  outC->_L154.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.valid = kcg_true;
  outC->_L154.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L154.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L154.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L154.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L154.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L154.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L154.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L154.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L154.infoFromPassing.valid = kcg_true;
  outC->_L154.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L154.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L154.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L154.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L154.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L154.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L154.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L154.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L154.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L154.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L154.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L154.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L154.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L154.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx28 = 0; idx28 < 33; idx28++) {
    outC->_L154.infoFromPassing.linkedBGs[idx28].valid = kcg_true;
    outC->_L154.infoFromPassing.linkedBGs[idx28].nid_LRBG = kcg_lit_int64(0);
    outC->_L154.infoFromPassing.linkedBGs[idx28].q_dir = Q_DIR_Reverse;
    outC->_L154.infoFromPassing.linkedBGs[idx28].q_scale = Q_SCALE_10_cm_scale;
    outC->_L154.infoFromPassing.linkedBGs[idx28].d_link = kcg_lit_int64(0);
    outC->_L154.infoFromPassing.linkedBGs[idx28].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L154.infoFromPassing.linkedBGs[idx28].nid_c = kcg_lit_int64(0);
    outC->_L154.infoFromPassing.linkedBGs[idx28].nid_bg = kcg_lit_int64(0);
    outC->_L154.infoFromPassing.linkedBGs[idx28].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L154.infoFromPassing.linkedBGs[idx28].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L154.infoFromPassing.linkedBGs[idx28].q_locacc = kcg_lit_int64(0);
  }
  outC->_L154.missed = kcg_true;
  outC->_L152.refBG.valid = kcg_true;
  outC->_L152.refBG.nid_c = kcg_lit_int64(0);
  outC->_L152.refBG.nid_bg = kcg_lit_int64(0);
  outC->_L152.refBG.q_link = Q_LINK_Unlinked;
  outC->_L152.refBG.location.nominal = kcg_lit_int64(0);
  outC->_L152.refBG.location.d_min = kcg_lit_int64(0);
  outC->_L152.refBG.location.d_max = kcg_lit_int64(0);
  outC->_L152.refBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.valid = kcg_true;
  outC->_L152.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L152.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L152.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L152.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L152.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L152.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L152.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.valid = kcg_true;
  outC->_L152.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L152.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L152.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L152.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L152.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L152.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L152.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L152.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L152.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L152.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L152.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx29 = 0; idx29 < 33; idx29++) {
    outC->_L152.refBG.infoFromPassing.linkedBGs[idx29].valid = kcg_true;
    outC->_L152.refBG.infoFromPassing.linkedBGs[idx29].nid_LRBG = kcg_lit_int64(0);
    outC->_L152.refBG.infoFromPassing.linkedBGs[idx29].q_dir = Q_DIR_Reverse;
    outC->_L152.refBG.infoFromPassing.linkedBGs[idx29].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L152.refBG.infoFromPassing.linkedBGs[idx29].d_link = kcg_lit_int64(0);
    outC->_L152.refBG.infoFromPassing.linkedBGs[idx29].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L152.refBG.infoFromPassing.linkedBGs[idx29].nid_c = kcg_lit_int64(0);
    outC->_L152.refBG.infoFromPassing.linkedBGs[idx29].nid_bg = kcg_lit_int64(0);
    outC->_L152.refBG.infoFromPassing.linkedBGs[idx29].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L152.refBG.infoFromPassing.linkedBGs[idx29].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L152.refBG.infoFromPassing.linkedBGs[idx29].q_locacc = kcg_lit_int64(0);
  }
  outC->_L152.refBG.missed = kcg_true;
  outC->_L152.prevLinkedBG.valid = kcg_true;
  outC->_L152.prevLinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L152.prevLinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L152.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->_L152.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L152.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->_L152.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L152.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L152.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L152.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L152.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L152.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->_L152.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L152.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx30 = 0; idx30 < 33; idx30++) {
    outC->_L152.prevLinkedBG.infoFromPassing.linkedBGs[idx30].valid = kcg_true;
    outC->_L152.prevLinkedBG.infoFromPassing.linkedBGs[idx30].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L152.prevLinkedBG.infoFromPassing.linkedBGs[idx30].q_dir = Q_DIR_Reverse;
    outC->_L152.prevLinkedBG.infoFromPassing.linkedBGs[idx30].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L152.prevLinkedBG.infoFromPassing.linkedBGs[idx30].d_link =
      kcg_lit_int64(0);
    outC->_L152.prevLinkedBG.infoFromPassing.linkedBGs[idx30].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L152.prevLinkedBG.infoFromPassing.linkedBGs[idx30].nid_c =
      kcg_lit_int64(0);
    outC->_L152.prevLinkedBG.infoFromPassing.linkedBGs[idx30].nid_bg =
      kcg_lit_int64(0);
    outC->_L152.prevLinkedBG.infoFromPassing.linkedBGs[idx30].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L152.prevLinkedBG.infoFromPassing.linkedBGs[idx30].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L152.prevLinkedBG.infoFromPassing.linkedBGs[idx30].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L152.prevLinkedBG.missed = kcg_true;
  outC->_L152.prevUnlinkedBG.valid = kcg_true;
  outC->_L152.prevUnlinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L152.prevUnlinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L152.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L152.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L152.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L152.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(
      0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L152.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(
      0);
  outC->_L152.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L152.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L152.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(
      0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L152.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx31 = 0; idx31 < 33; idx31++) {
    outC->_L152.prevUnlinkedBG.infoFromPassing.linkedBGs[idx31].valid = kcg_true;
    outC->_L152.prevUnlinkedBG.infoFromPassing.linkedBGs[idx31].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L152.prevUnlinkedBG.infoFromPassing.linkedBGs[idx31].q_dir =
      Q_DIR_Reverse;
    outC->_L152.prevUnlinkedBG.infoFromPassing.linkedBGs[idx31].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L152.prevUnlinkedBG.infoFromPassing.linkedBGs[idx31].d_link =
      kcg_lit_int64(0);
    outC->_L152.prevUnlinkedBG.infoFromPassing.linkedBGs[idx31].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L152.prevUnlinkedBG.infoFromPassing.linkedBGs[idx31].nid_c =
      kcg_lit_int64(0);
    outC->_L152.prevUnlinkedBG.infoFromPassing.linkedBGs[idx31].nid_bg =
      kcg_lit_int64(0);
    outC->_L152.prevUnlinkedBG.infoFromPassing.linkedBGs[idx31].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L152.prevUnlinkedBG.infoFromPassing.linkedBGs[idx31].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L152.prevUnlinkedBG.infoFromPassing.linkedBGs[idx31].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L152.prevUnlinkedBG.missed = kcg_true;
  outC->_L152.recalculate = kcg_true;
  outC->_L152.sumOfBestDistances.nominal = kcg_lit_int64(0);
  outC->_L152.sumOfBestDistances.d_min = kcg_lit_int64(0);
  outC->_L152.sumOfBestDistances.d_max = kcg_lit_int64(0);
  outC->_L149.valid = kcg_true;
  outC->_L149.nid_c = kcg_lit_int64(0);
  outC->_L149.nid_bg = kcg_lit_int64(0);
  outC->_L149.q_link = Q_LINK_Unlinked;
  outC->_L149.location.nominal = kcg_lit_int64(0);
  outC->_L149.location.d_min = kcg_lit_int64(0);
  outC->_L149.location.d_max = kcg_lit_int64(0);
  outC->_L149.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.valid = kcg_true;
  outC->_L149.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L149.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L149.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L149.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L149.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L149.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L149.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L149.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L149.infoFromPassing.valid = kcg_true;
  outC->_L149.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L149.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L149.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L149.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L149.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L149.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L149.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L149.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L149.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L149.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L149.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L149.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L149.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L149.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx32 = 0; idx32 < 33; idx32++) {
    outC->_L149.infoFromPassing.linkedBGs[idx32].valid = kcg_true;
    outC->_L149.infoFromPassing.linkedBGs[idx32].nid_LRBG = kcg_lit_int64(0);
    outC->_L149.infoFromPassing.linkedBGs[idx32].q_dir = Q_DIR_Reverse;
    outC->_L149.infoFromPassing.linkedBGs[idx32].q_scale = Q_SCALE_10_cm_scale;
    outC->_L149.infoFromPassing.linkedBGs[idx32].d_link = kcg_lit_int64(0);
    outC->_L149.infoFromPassing.linkedBGs[idx32].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L149.infoFromPassing.linkedBGs[idx32].nid_c = kcg_lit_int64(0);
    outC->_L149.infoFromPassing.linkedBGs[idx32].nid_bg = kcg_lit_int64(0);
    outC->_L149.infoFromPassing.linkedBGs[idx32].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L149.infoFromPassing.linkedBGs[idx32].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L149.infoFromPassing.linkedBGs[idx32].q_locacc = kcg_lit_int64(0);
  }
  outC->_L149.missed = kcg_true;
  outC->_L148.valid = kcg_true;
  outC->_L148.nid_c = kcg_lit_int64(0);
  outC->_L148.nid_bg = kcg_lit_int64(0);
  outC->_L148.q_link = Q_LINK_Unlinked;
  outC->_L148.location.nominal = kcg_lit_int64(0);
  outC->_L148.location.d_min = kcg_lit_int64(0);
  outC->_L148.location.d_max = kcg_lit_int64(0);
  outC->_L148.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.valid = kcg_true;
  outC->_L148.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L148.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L148.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L148.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L148.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L148.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L148.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L148.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L148.infoFromPassing.valid = kcg_true;
  outC->_L148.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L148.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L148.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L148.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L148.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L148.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L148.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L148.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L148.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L148.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L148.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L148.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L148.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L148.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx33 = 0; idx33 < 33; idx33++) {
    outC->_L148.infoFromPassing.linkedBGs[idx33].valid = kcg_true;
    outC->_L148.infoFromPassing.linkedBGs[idx33].nid_LRBG = kcg_lit_int64(0);
    outC->_L148.infoFromPassing.linkedBGs[idx33].q_dir = Q_DIR_Reverse;
    outC->_L148.infoFromPassing.linkedBGs[idx33].q_scale = Q_SCALE_10_cm_scale;
    outC->_L148.infoFromPassing.linkedBGs[idx33].d_link = kcg_lit_int64(0);
    outC->_L148.infoFromPassing.linkedBGs[idx33].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L148.infoFromPassing.linkedBGs[idx33].nid_c = kcg_lit_int64(0);
    outC->_L148.infoFromPassing.linkedBGs[idx33].nid_bg = kcg_lit_int64(0);
    outC->_L148.infoFromPassing.linkedBGs[idx33].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L148.infoFromPassing.linkedBGs[idx33].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L148.infoFromPassing.linkedBGs[idx33].q_locacc = kcg_lit_int64(0);
  }
  outC->_L148.missed = kcg_true;
  outC->_L114 = kcg_true;
  outC->_L115.valid = kcg_true;
  outC->_L115.nid_c = kcg_lit_int64(0);
  outC->_L115.nid_bg = kcg_lit_int64(0);
  outC->_L115.q_link = Q_LINK_Unlinked;
  outC->_L115.location.nominal = kcg_lit_int64(0);
  outC->_L115.location.d_min = kcg_lit_int64(0);
  outC->_L115.location.d_max = kcg_lit_int64(0);
  outC->_L115.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.valid = kcg_true;
  outC->_L115.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L115.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L115.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L115.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L115.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L115.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L115.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L115.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L115.infoFromPassing.valid = kcg_true;
  outC->_L115.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L115.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L115.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L115.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L115.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L115.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L115.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L115.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L115.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L115.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L115.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L115.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L115.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L115.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx34 = 0; idx34 < 33; idx34++) {
    outC->_L115.infoFromPassing.linkedBGs[idx34].valid = kcg_true;
    outC->_L115.infoFromPassing.linkedBGs[idx34].nid_LRBG = kcg_lit_int64(0);
    outC->_L115.infoFromPassing.linkedBGs[idx34].q_dir = Q_DIR_Reverse;
    outC->_L115.infoFromPassing.linkedBGs[idx34].q_scale = Q_SCALE_10_cm_scale;
    outC->_L115.infoFromPassing.linkedBGs[idx34].d_link = kcg_lit_int64(0);
    outC->_L115.infoFromPassing.linkedBGs[idx34].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L115.infoFromPassing.linkedBGs[idx34].nid_c = kcg_lit_int64(0);
    outC->_L115.infoFromPassing.linkedBGs[idx34].nid_bg = kcg_lit_int64(0);
    outC->_L115.infoFromPassing.linkedBGs[idx34].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L115.infoFromPassing.linkedBGs[idx34].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L115.infoFromPassing.linkedBGs[idx34].q_locacc = kcg_lit_int64(0);
  }
  outC->_L115.missed = kcg_true;
  outC->_L116 = kcg_true;
  outC->_L117.valid = kcg_true;
  outC->_L117.nid_c = kcg_lit_int64(0);
  outC->_L117.nid_bg = kcg_lit_int64(0);
  outC->_L117.q_link = Q_LINK_Unlinked;
  outC->_L117.location.nominal = kcg_lit_int64(0);
  outC->_L117.location.d_min = kcg_lit_int64(0);
  outC->_L117.location.d_max = kcg_lit_int64(0);
  outC->_L117.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.valid = kcg_true;
  outC->_L117.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L117.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L117.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L117.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L117.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L117.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L117.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L117.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L117.infoFromPassing.valid = kcg_true;
  outC->_L117.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L117.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L117.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L117.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L117.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L117.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L117.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L117.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L117.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L117.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L117.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L117.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L117.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L117.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx35 = 0; idx35 < 33; idx35++) {
    outC->_L117.infoFromPassing.linkedBGs[idx35].valid = kcg_true;
    outC->_L117.infoFromPassing.linkedBGs[idx35].nid_LRBG = kcg_lit_int64(0);
    outC->_L117.infoFromPassing.linkedBGs[idx35].q_dir = Q_DIR_Reverse;
    outC->_L117.infoFromPassing.linkedBGs[idx35].q_scale = Q_SCALE_10_cm_scale;
    outC->_L117.infoFromPassing.linkedBGs[idx35].d_link = kcg_lit_int64(0);
    outC->_L117.infoFromPassing.linkedBGs[idx35].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L117.infoFromPassing.linkedBGs[idx35].nid_c = kcg_lit_int64(0);
    outC->_L117.infoFromPassing.linkedBGs[idx35].nid_bg = kcg_lit_int64(0);
    outC->_L117.infoFromPassing.linkedBGs[idx35].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L117.infoFromPassing.linkedBGs[idx35].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L117.infoFromPassing.linkedBGs[idx35].q_locacc = kcg_lit_int64(0);
  }
  outC->_L117.missed = kcg_true;
  outC->_L118.refBG.valid = kcg_true;
  outC->_L118.refBG.nid_c = kcg_lit_int64(0);
  outC->_L118.refBG.nid_bg = kcg_lit_int64(0);
  outC->_L118.refBG.q_link = Q_LINK_Unlinked;
  outC->_L118.refBG.location.nominal = kcg_lit_int64(0);
  outC->_L118.refBG.location.d_min = kcg_lit_int64(0);
  outC->_L118.refBG.location.d_max = kcg_lit_int64(0);
  outC->_L118.refBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.valid = kcg_true;
  outC->_L118.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L118.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L118.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L118.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L118.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L118.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L118.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.valid = kcg_true;
  outC->_L118.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L118.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L118.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L118.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L118.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L118.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L118.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L118.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L118.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L118.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L118.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx36 = 0; idx36 < 33; idx36++) {
    outC->_L118.refBG.infoFromPassing.linkedBGs[idx36].valid = kcg_true;
    outC->_L118.refBG.infoFromPassing.linkedBGs[idx36].nid_LRBG = kcg_lit_int64(0);
    outC->_L118.refBG.infoFromPassing.linkedBGs[idx36].q_dir = Q_DIR_Reverse;
    outC->_L118.refBG.infoFromPassing.linkedBGs[idx36].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L118.refBG.infoFromPassing.linkedBGs[idx36].d_link = kcg_lit_int64(0);
    outC->_L118.refBG.infoFromPassing.linkedBGs[idx36].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L118.refBG.infoFromPassing.linkedBGs[idx36].nid_c = kcg_lit_int64(0);
    outC->_L118.refBG.infoFromPassing.linkedBGs[idx36].nid_bg = kcg_lit_int64(0);
    outC->_L118.refBG.infoFromPassing.linkedBGs[idx36].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L118.refBG.infoFromPassing.linkedBGs[idx36].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L118.refBG.infoFromPassing.linkedBGs[idx36].q_locacc = kcg_lit_int64(0);
  }
  outC->_L118.refBG.missed = kcg_true;
  outC->_L118.prevLinkedBG.valid = kcg_true;
  outC->_L118.prevLinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L118.prevLinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L118.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->_L118.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L118.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->_L118.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L118.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L118.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L118.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L118.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L118.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->_L118.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L118.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx37 = 0; idx37 < 33; idx37++) {
    outC->_L118.prevLinkedBG.infoFromPassing.linkedBGs[idx37].valid = kcg_true;
    outC->_L118.prevLinkedBG.infoFromPassing.linkedBGs[idx37].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L118.prevLinkedBG.infoFromPassing.linkedBGs[idx37].q_dir = Q_DIR_Reverse;
    outC->_L118.prevLinkedBG.infoFromPassing.linkedBGs[idx37].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L118.prevLinkedBG.infoFromPassing.linkedBGs[idx37].d_link =
      kcg_lit_int64(0);
    outC->_L118.prevLinkedBG.infoFromPassing.linkedBGs[idx37].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L118.prevLinkedBG.infoFromPassing.linkedBGs[idx37].nid_c =
      kcg_lit_int64(0);
    outC->_L118.prevLinkedBG.infoFromPassing.linkedBGs[idx37].nid_bg =
      kcg_lit_int64(0);
    outC->_L118.prevLinkedBG.infoFromPassing.linkedBGs[idx37].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L118.prevLinkedBG.infoFromPassing.linkedBGs[idx37].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L118.prevLinkedBG.infoFromPassing.linkedBGs[idx37].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L118.prevLinkedBG.missed = kcg_true;
  outC->_L118.prevUnlinkedBG.valid = kcg_true;
  outC->_L118.prevUnlinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L118.prevUnlinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L118.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L118.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L118.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L118.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(
      0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L118.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(
      0);
  outC->_L118.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L118.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L118.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(
      0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L118.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx38 = 0; idx38 < 33; idx38++) {
    outC->_L118.prevUnlinkedBG.infoFromPassing.linkedBGs[idx38].valid = kcg_true;
    outC->_L118.prevUnlinkedBG.infoFromPassing.linkedBGs[idx38].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L118.prevUnlinkedBG.infoFromPassing.linkedBGs[idx38].q_dir =
      Q_DIR_Reverse;
    outC->_L118.prevUnlinkedBG.infoFromPassing.linkedBGs[idx38].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L118.prevUnlinkedBG.infoFromPassing.linkedBGs[idx38].d_link =
      kcg_lit_int64(0);
    outC->_L118.prevUnlinkedBG.infoFromPassing.linkedBGs[idx38].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L118.prevUnlinkedBG.infoFromPassing.linkedBGs[idx38].nid_c =
      kcg_lit_int64(0);
    outC->_L118.prevUnlinkedBG.infoFromPassing.linkedBGs[idx38].nid_bg =
      kcg_lit_int64(0);
    outC->_L118.prevUnlinkedBG.infoFromPassing.linkedBGs[idx38].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L118.prevUnlinkedBG.infoFromPassing.linkedBGs[idx38].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L118.prevUnlinkedBG.infoFromPassing.linkedBGs[idx38].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L118.prevUnlinkedBG.missed = kcg_true;
  outC->_L118.recalculate = kcg_true;
  outC->_L118.sumOfBestDistances.nominal = kcg_lit_int64(0);
  outC->_L118.sumOfBestDistances.d_min = kcg_lit_int64(0);
  outC->_L118.sumOfBestDistances.d_max = kcg_lit_int64(0);
  outC->_L119 = kcg_true;
  outC->_L120 = kcg_true;
  outC->_L121.valid = kcg_true;
  outC->_L121.nid_c = kcg_lit_int64(0);
  outC->_L121.nid_bg = kcg_lit_int64(0);
  outC->_L121.q_link = Q_LINK_Unlinked;
  outC->_L121.location.nominal = kcg_lit_int64(0);
  outC->_L121.location.d_min = kcg_lit_int64(0);
  outC->_L121.location.d_max = kcg_lit_int64(0);
  outC->_L121.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.valid = kcg_true;
  outC->_L121.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L121.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L121.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L121.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L121.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L121.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L121.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L121.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L121.infoFromPassing.valid = kcg_true;
  outC->_L121.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L121.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L121.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L121.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L121.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L121.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L121.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L121.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L121.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L121.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L121.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L121.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L121.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L121.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx39 = 0; idx39 < 33; idx39++) {
    outC->_L121.infoFromPassing.linkedBGs[idx39].valid = kcg_true;
    outC->_L121.infoFromPassing.linkedBGs[idx39].nid_LRBG = kcg_lit_int64(0);
    outC->_L121.infoFromPassing.linkedBGs[idx39].q_dir = Q_DIR_Reverse;
    outC->_L121.infoFromPassing.linkedBGs[idx39].q_scale = Q_SCALE_10_cm_scale;
    outC->_L121.infoFromPassing.linkedBGs[idx39].d_link = kcg_lit_int64(0);
    outC->_L121.infoFromPassing.linkedBGs[idx39].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L121.infoFromPassing.linkedBGs[idx39].nid_c = kcg_lit_int64(0);
    outC->_L121.infoFromPassing.linkedBGs[idx39].nid_bg = kcg_lit_int64(0);
    outC->_L121.infoFromPassing.linkedBGs[idx39].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L121.infoFromPassing.linkedBGs[idx39].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L121.infoFromPassing.linkedBGs[idx39].q_locacc = kcg_lit_int64(0);
  }
  outC->_L121.missed = kcg_true;
  outC->_L122.valid = kcg_true;
  outC->_L122.nid_c = kcg_lit_int64(0);
  outC->_L122.nid_bg = kcg_lit_int64(0);
  outC->_L122.q_link = Q_LINK_Unlinked;
  outC->_L122.location.nominal = kcg_lit_int64(0);
  outC->_L122.location.d_min = kcg_lit_int64(0);
  outC->_L122.location.d_max = kcg_lit_int64(0);
  outC->_L122.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.valid = kcg_true;
  outC->_L122.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L122.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L122.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L122.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L122.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L122.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L122.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L122.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L122.infoFromPassing.valid = kcg_true;
  outC->_L122.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L122.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L122.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L122.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L122.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L122.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L122.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L122.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L122.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L122.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L122.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L122.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L122.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L122.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx40 = 0; idx40 < 33; idx40++) {
    outC->_L122.infoFromPassing.linkedBGs[idx40].valid = kcg_true;
    outC->_L122.infoFromPassing.linkedBGs[idx40].nid_LRBG = kcg_lit_int64(0);
    outC->_L122.infoFromPassing.linkedBGs[idx40].q_dir = Q_DIR_Reverse;
    outC->_L122.infoFromPassing.linkedBGs[idx40].q_scale = Q_SCALE_10_cm_scale;
    outC->_L122.infoFromPassing.linkedBGs[idx40].d_link = kcg_lit_int64(0);
    outC->_L122.infoFromPassing.linkedBGs[idx40].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L122.infoFromPassing.linkedBGs[idx40].nid_c = kcg_lit_int64(0);
    outC->_L122.infoFromPassing.linkedBGs[idx40].nid_bg = kcg_lit_int64(0);
    outC->_L122.infoFromPassing.linkedBGs[idx40].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L122.infoFromPassing.linkedBGs[idx40].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L122.infoFromPassing.linkedBGs[idx40].q_locacc = kcg_lit_int64(0);
  }
  outC->_L122.missed = kcg_true;
  outC->_L123 = kcg_true;
  outC->_L124.valid = kcg_true;
  outC->_L124.BG_Header.valid = kcg_true;
  outC->_L124.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L124.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L124.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L124.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L124.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L124.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L124.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L124.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L124.BG_Header.bgPosition.valid = kcg_true;
  outC->_L124.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L124.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L124.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L124.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L124.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L124.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L124.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L124.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L124.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L124.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L124.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L124.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L124.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L124.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L124.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L124.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L124.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L124.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx41 = 0; idx41 < 33; idx41++) {
    outC->_L124.linkedBGs[idx41].valid = kcg_true;
    outC->_L124.linkedBGs[idx41].nid_LRBG = kcg_lit_int64(0);
    outC->_L124.linkedBGs[idx41].q_dir = Q_DIR_Reverse;
    outC->_L124.linkedBGs[idx41].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124.linkedBGs[idx41].d_link = kcg_lit_int64(0);
    outC->_L124.linkedBGs[idx41].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L124.linkedBGs[idx41].nid_c = kcg_lit_int64(0);
    outC->_L124.linkedBGs[idx41].nid_bg = kcg_lit_int64(0);
    outC->_L124.linkedBGs[idx41].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L124.linkedBGs[idx41].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L124.linkedBGs[idx41].q_locacc = kcg_lit_int64(0);
  }
  outC->_L125 = kcg_true;
  outC->_L126.o_nominal = kcg_lit_int64(0);
  outC->_L126.o_min = kcg_lit_int64(0);
  outC->_L126.o_max = kcg_lit_int64(0);
  outC->_L127.nominal = kcg_lit_int64(0);
  outC->_L127.d_min = kcg_lit_int64(0);
  outC->_L127.d_max = kcg_lit_int64(0);
  outC->_L128.valid = kcg_true;
  outC->_L128.BG_Header.valid = kcg_true;
  outC->_L128.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L128.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L128.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L128.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L128.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L128.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L128.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L128.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L128.BG_Header.bgPosition.valid = kcg_true;
  outC->_L128.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L128.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L128.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L128.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L128.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L128.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L128.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L128.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L128.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L128.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L128.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L128.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L128.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L128.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L128.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L128.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L128.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L128.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx42 = 0; idx42 < 33; idx42++) {
    outC->_L128.linkedBGs[idx42].valid = kcg_true;
    outC->_L128.linkedBGs[idx42].nid_LRBG = kcg_lit_int64(0);
    outC->_L128.linkedBGs[idx42].q_dir = Q_DIR_Reverse;
    outC->_L128.linkedBGs[idx42].q_scale = Q_SCALE_10_cm_scale;
    outC->_L128.linkedBGs[idx42].d_link = kcg_lit_int64(0);
    outC->_L128.linkedBGs[idx42].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L128.linkedBGs[idx42].nid_c = kcg_lit_int64(0);
    outC->_L128.linkedBGs[idx42].nid_bg = kcg_lit_int64(0);
    outC->_L128.linkedBGs[idx42].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L128.linkedBGs[idx42].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L128.linkedBGs[idx42].q_locacc = kcg_lit_int64(0);
  }
  outC->_L129 = kcg_true;
  outC->_L130.o_nominal = kcg_lit_int64(0);
  outC->_L130.o_min = kcg_lit_int64(0);
  outC->_L130.o_max = kcg_lit_int64(0);
  outC->_L131 = kcg_true;
  outC->_L132.nominal = kcg_lit_int64(0);
  outC->_L132.d_min = kcg_lit_int64(0);
  outC->_L132.d_max = kcg_lit_int64(0);
  outC->_L133.nominal = kcg_lit_int64(0);
  outC->_L133.d_min = kcg_lit_int64(0);
  outC->_L133.d_max = kcg_lit_int64(0);
  outC->_L134.valid = kcg_true;
  outC->_L134.nid_c = kcg_lit_int64(0);
  outC->_L134.nid_bg = kcg_lit_int64(0);
  outC->_L134.q_link = Q_LINK_Unlinked;
  outC->_L134.location.nominal = kcg_lit_int64(0);
  outC->_L134.location.d_min = kcg_lit_int64(0);
  outC->_L134.location.d_max = kcg_lit_int64(0);
  outC->_L134.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.valid = kcg_true;
  outC->_L134.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L134.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L134.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L134.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L134.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L134.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L134.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L134.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L134.infoFromPassing.valid = kcg_true;
  outC->_L134.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L134.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L134.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L134.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L134.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L134.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L134.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L134.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L134.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L134.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L134.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L134.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L134.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L134.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx43 = 0; idx43 < 33; idx43++) {
    outC->_L134.infoFromPassing.linkedBGs[idx43].valid = kcg_true;
    outC->_L134.infoFromPassing.linkedBGs[idx43].nid_LRBG = kcg_lit_int64(0);
    outC->_L134.infoFromPassing.linkedBGs[idx43].q_dir = Q_DIR_Reverse;
    outC->_L134.infoFromPassing.linkedBGs[idx43].q_scale = Q_SCALE_10_cm_scale;
    outC->_L134.infoFromPassing.linkedBGs[idx43].d_link = kcg_lit_int64(0);
    outC->_L134.infoFromPassing.linkedBGs[idx43].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L134.infoFromPassing.linkedBGs[idx43].nid_c = kcg_lit_int64(0);
    outC->_L134.infoFromPassing.linkedBGs[idx43].nid_bg = kcg_lit_int64(0);
    outC->_L134.infoFromPassing.linkedBGs[idx43].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L134.infoFromPassing.linkedBGs[idx43].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L134.infoFromPassing.linkedBGs[idx43].q_locacc = kcg_lit_int64(0);
  }
  outC->_L134.missed = kcg_true;
  outC->_L136 = Q_LINK_Unlinked;
  outC->_L137 = kcg_true;
  outC->_L138 = Q_LINK_Unlinked;
  outC->_L139 = Q_LINK_Unlinked;
  outC->_L140 = kcg_true;
  outC->_L141 = Q_LINK_Unlinked;
  outC->_L142.valid = kcg_true;
  outC->_L142.nid_c = kcg_lit_int64(0);
  outC->_L142.nid_bg = kcg_lit_int64(0);
  outC->_L142.q_link = Q_LINK_Unlinked;
  outC->_L142.location.nominal = kcg_lit_int64(0);
  outC->_L142.location.d_min = kcg_lit_int64(0);
  outC->_L142.location.d_max = kcg_lit_int64(0);
  outC->_L142.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.valid = kcg_true;
  outC->_L142.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L142.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L142.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L142.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L142.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L142.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L142.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L142.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L142.infoFromPassing.valid = kcg_true;
  outC->_L142.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L142.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L142.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L142.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L142.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L142.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L142.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L142.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L142.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L142.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L142.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L142.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L142.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L142.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx44 = 0; idx44 < 33; idx44++) {
    outC->_L142.infoFromPassing.linkedBGs[idx44].valid = kcg_true;
    outC->_L142.infoFromPassing.linkedBGs[idx44].nid_LRBG = kcg_lit_int64(0);
    outC->_L142.infoFromPassing.linkedBGs[idx44].q_dir = Q_DIR_Reverse;
    outC->_L142.infoFromPassing.linkedBGs[idx44].q_scale = Q_SCALE_10_cm_scale;
    outC->_L142.infoFromPassing.linkedBGs[idx44].d_link = kcg_lit_int64(0);
    outC->_L142.infoFromPassing.linkedBGs[idx44].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L142.infoFromPassing.linkedBGs[idx44].nid_c = kcg_lit_int64(0);
    outC->_L142.infoFromPassing.linkedBGs[idx44].nid_bg = kcg_lit_int64(0);
    outC->_L142.infoFromPassing.linkedBGs[idx44].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L142.infoFromPassing.linkedBGs[idx44].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L142.infoFromPassing.linkedBGs[idx44].q_locacc = kcg_lit_int64(0);
  }
  outC->_L142.missed = kcg_true;
  outC->_L143.valid = kcg_true;
  outC->_L143.nid_c = kcg_lit_int64(0);
  outC->_L143.nid_bg = kcg_lit_int64(0);
  outC->_L143.q_link = Q_LINK_Unlinked;
  outC->_L143.location.nominal = kcg_lit_int64(0);
  outC->_L143.location.d_min = kcg_lit_int64(0);
  outC->_L143.location.d_max = kcg_lit_int64(0);
  outC->_L143.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.valid = kcg_true;
  outC->_L143.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L143.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L143.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L143.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L143.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L143.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L143.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L143.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L143.infoFromPassing.valid = kcg_true;
  outC->_L143.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L143.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L143.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L143.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L143.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L143.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L143.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L143.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L143.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L143.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L143.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L143.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L143.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L143.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx45 = 0; idx45 < 33; idx45++) {
    outC->_L143.infoFromPassing.linkedBGs[idx45].valid = kcg_true;
    outC->_L143.infoFromPassing.linkedBGs[idx45].nid_LRBG = kcg_lit_int64(0);
    outC->_L143.infoFromPassing.linkedBGs[idx45].q_dir = Q_DIR_Reverse;
    outC->_L143.infoFromPassing.linkedBGs[idx45].q_scale = Q_SCALE_10_cm_scale;
    outC->_L143.infoFromPassing.linkedBGs[idx45].d_link = kcg_lit_int64(0);
    outC->_L143.infoFromPassing.linkedBGs[idx45].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L143.infoFromPassing.linkedBGs[idx45].nid_c = kcg_lit_int64(0);
    outC->_L143.infoFromPassing.linkedBGs[idx45].nid_bg = kcg_lit_int64(0);
    outC->_L143.infoFromPassing.linkedBGs[idx45].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L143.infoFromPassing.linkedBGs[idx45].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L143.infoFromPassing.linkedBGs[idx45].q_locacc = kcg_lit_int64(0);
  }
  outC->_L143.missed = kcg_true;
  outC->_L144.refBG.valid = kcg_true;
  outC->_L144.refBG.nid_c = kcg_lit_int64(0);
  outC->_L144.refBG.nid_bg = kcg_lit_int64(0);
  outC->_L144.refBG.q_link = Q_LINK_Unlinked;
  outC->_L144.refBG.location.nominal = kcg_lit_int64(0);
  outC->_L144.refBG.location.d_min = kcg_lit_int64(0);
  outC->_L144.refBG.location.d_max = kcg_lit_int64(0);
  outC->_L144.refBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.valid = kcg_true;
  outC->_L144.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L144.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L144.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L144.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L144.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L144.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L144.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.valid = kcg_true;
  outC->_L144.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L144.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L144.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L144.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L144.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L144.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L144.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L144.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L144.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L144.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L144.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx46 = 0; idx46 < 33; idx46++) {
    outC->_L144.refBG.infoFromPassing.linkedBGs[idx46].valid = kcg_true;
    outC->_L144.refBG.infoFromPassing.linkedBGs[idx46].nid_LRBG = kcg_lit_int64(0);
    outC->_L144.refBG.infoFromPassing.linkedBGs[idx46].q_dir = Q_DIR_Reverse;
    outC->_L144.refBG.infoFromPassing.linkedBGs[idx46].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L144.refBG.infoFromPassing.linkedBGs[idx46].d_link = kcg_lit_int64(0);
    outC->_L144.refBG.infoFromPassing.linkedBGs[idx46].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L144.refBG.infoFromPassing.linkedBGs[idx46].nid_c = kcg_lit_int64(0);
    outC->_L144.refBG.infoFromPassing.linkedBGs[idx46].nid_bg = kcg_lit_int64(0);
    outC->_L144.refBG.infoFromPassing.linkedBGs[idx46].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L144.refBG.infoFromPassing.linkedBGs[idx46].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L144.refBG.infoFromPassing.linkedBGs[idx46].q_locacc = kcg_lit_int64(0);
  }
  outC->_L144.refBG.missed = kcg_true;
  outC->_L144.prevLinkedBG.valid = kcg_true;
  outC->_L144.prevLinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L144.prevLinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L144.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->_L144.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L144.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->_L144.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L144.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L144.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L144.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L144.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L144.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->_L144.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L144.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx47 = 0; idx47 < 33; idx47++) {
    outC->_L144.prevLinkedBG.infoFromPassing.linkedBGs[idx47].valid = kcg_true;
    outC->_L144.prevLinkedBG.infoFromPassing.linkedBGs[idx47].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L144.prevLinkedBG.infoFromPassing.linkedBGs[idx47].q_dir = Q_DIR_Reverse;
    outC->_L144.prevLinkedBG.infoFromPassing.linkedBGs[idx47].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L144.prevLinkedBG.infoFromPassing.linkedBGs[idx47].d_link =
      kcg_lit_int64(0);
    outC->_L144.prevLinkedBG.infoFromPassing.linkedBGs[idx47].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L144.prevLinkedBG.infoFromPassing.linkedBGs[idx47].nid_c =
      kcg_lit_int64(0);
    outC->_L144.prevLinkedBG.infoFromPassing.linkedBGs[idx47].nid_bg =
      kcg_lit_int64(0);
    outC->_L144.prevLinkedBG.infoFromPassing.linkedBGs[idx47].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L144.prevLinkedBG.infoFromPassing.linkedBGs[idx47].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L144.prevLinkedBG.infoFromPassing.linkedBGs[idx47].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L144.prevLinkedBG.missed = kcg_true;
  outC->_L144.prevUnlinkedBG.valid = kcg_true;
  outC->_L144.prevUnlinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L144.prevUnlinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L144.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L144.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L144.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L144.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(
      0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L144.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(
      0);
  outC->_L144.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L144.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L144.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(
      0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L144.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx48 = 0; idx48 < 33; idx48++) {
    outC->_L144.prevUnlinkedBG.infoFromPassing.linkedBGs[idx48].valid = kcg_true;
    outC->_L144.prevUnlinkedBG.infoFromPassing.linkedBGs[idx48].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L144.prevUnlinkedBG.infoFromPassing.linkedBGs[idx48].q_dir =
      Q_DIR_Reverse;
    outC->_L144.prevUnlinkedBG.infoFromPassing.linkedBGs[idx48].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L144.prevUnlinkedBG.infoFromPassing.linkedBGs[idx48].d_link =
      kcg_lit_int64(0);
    outC->_L144.prevUnlinkedBG.infoFromPassing.linkedBGs[idx48].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L144.prevUnlinkedBG.infoFromPassing.linkedBGs[idx48].nid_c =
      kcg_lit_int64(0);
    outC->_L144.prevUnlinkedBG.infoFromPassing.linkedBGs[idx48].nid_bg =
      kcg_lit_int64(0);
    outC->_L144.prevUnlinkedBG.infoFromPassing.linkedBGs[idx48].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L144.prevUnlinkedBG.infoFromPassing.linkedBGs[idx48].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L144.prevUnlinkedBG.infoFromPassing.linkedBGs[idx48].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L144.prevUnlinkedBG.missed = kcg_true;
  outC->_L144.recalculate = kcg_true;
  outC->_L144.sumOfBestDistances.nominal = kcg_lit_int64(0);
  outC->_L144.sumOfBestDistances.d_min = kcg_lit_int64(0);
  outC->_L144.sumOfBestDistances.d_max = kcg_lit_int64(0);
  outC->_L112.valid = kcg_true;
  outC->_L112.nid_c = kcg_lit_int64(0);
  outC->_L112.nid_bg = kcg_lit_int64(0);
  outC->_L112.q_link = Q_LINK_Unlinked;
  outC->_L112.location.nominal = kcg_lit_int64(0);
  outC->_L112.location.d_min = kcg_lit_int64(0);
  outC->_L112.location.d_max = kcg_lit_int64(0);
  outC->_L112.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.valid = kcg_true;
  outC->_L112.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L112.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L112.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L112.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L112.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L112.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L112.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L112.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L112.infoFromPassing.valid = kcg_true;
  outC->_L112.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L112.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L112.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L112.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L112.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L112.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L112.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L112.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L112.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L112.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L112.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L112.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L112.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L112.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx49 = 0; idx49 < 33; idx49++) {
    outC->_L112.infoFromPassing.linkedBGs[idx49].valid = kcg_true;
    outC->_L112.infoFromPassing.linkedBGs[idx49].nid_LRBG = kcg_lit_int64(0);
    outC->_L112.infoFromPassing.linkedBGs[idx49].q_dir = Q_DIR_Reverse;
    outC->_L112.infoFromPassing.linkedBGs[idx49].q_scale = Q_SCALE_10_cm_scale;
    outC->_L112.infoFromPassing.linkedBGs[idx49].d_link = kcg_lit_int64(0);
    outC->_L112.infoFromPassing.linkedBGs[idx49].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L112.infoFromPassing.linkedBGs[idx49].nid_c = kcg_lit_int64(0);
    outC->_L112.infoFromPassing.linkedBGs[idx49].nid_bg = kcg_lit_int64(0);
    outC->_L112.infoFromPassing.linkedBGs[idx49].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L112.infoFromPassing.linkedBGs[idx49].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L112.infoFromPassing.linkedBGs[idx49].q_locacc = kcg_lit_int64(0);
  }
  outC->_L112.missed = kcg_true;
  outC->_L113.refBG.valid = kcg_true;
  outC->_L113.refBG.nid_c = kcg_lit_int64(0);
  outC->_L113.refBG.nid_bg = kcg_lit_int64(0);
  outC->_L113.refBG.q_link = Q_LINK_Unlinked;
  outC->_L113.refBG.location.nominal = kcg_lit_int64(0);
  outC->_L113.refBG.location.d_min = kcg_lit_int64(0);
  outC->_L113.refBG.location.d_max = kcg_lit_int64(0);
  outC->_L113.refBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.valid = kcg_true;
  outC->_L113.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L113.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L113.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L113.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L113.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L113.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L113.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.valid = kcg_true;
  outC->_L113.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L113.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L113.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L113.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L113.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L113.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L113.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L113.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L113.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L113.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L113.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx50 = 0; idx50 < 33; idx50++) {
    outC->_L113.refBG.infoFromPassing.linkedBGs[idx50].valid = kcg_true;
    outC->_L113.refBG.infoFromPassing.linkedBGs[idx50].nid_LRBG = kcg_lit_int64(0);
    outC->_L113.refBG.infoFromPassing.linkedBGs[idx50].q_dir = Q_DIR_Reverse;
    outC->_L113.refBG.infoFromPassing.linkedBGs[idx50].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L113.refBG.infoFromPassing.linkedBGs[idx50].d_link = kcg_lit_int64(0);
    outC->_L113.refBG.infoFromPassing.linkedBGs[idx50].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L113.refBG.infoFromPassing.linkedBGs[idx50].nid_c = kcg_lit_int64(0);
    outC->_L113.refBG.infoFromPassing.linkedBGs[idx50].nid_bg = kcg_lit_int64(0);
    outC->_L113.refBG.infoFromPassing.linkedBGs[idx50].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L113.refBG.infoFromPassing.linkedBGs[idx50].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L113.refBG.infoFromPassing.linkedBGs[idx50].q_locacc = kcg_lit_int64(0);
  }
  outC->_L113.refBG.missed = kcg_true;
  outC->_L113.prevLinkedBG.valid = kcg_true;
  outC->_L113.prevLinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L113.prevLinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L113.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->_L113.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L113.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->_L113.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L113.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L113.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L113.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L113.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L113.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->_L113.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L113.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx51 = 0; idx51 < 33; idx51++) {
    outC->_L113.prevLinkedBG.infoFromPassing.linkedBGs[idx51].valid = kcg_true;
    outC->_L113.prevLinkedBG.infoFromPassing.linkedBGs[idx51].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L113.prevLinkedBG.infoFromPassing.linkedBGs[idx51].q_dir = Q_DIR_Reverse;
    outC->_L113.prevLinkedBG.infoFromPassing.linkedBGs[idx51].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L113.prevLinkedBG.infoFromPassing.linkedBGs[idx51].d_link =
      kcg_lit_int64(0);
    outC->_L113.prevLinkedBG.infoFromPassing.linkedBGs[idx51].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L113.prevLinkedBG.infoFromPassing.linkedBGs[idx51].nid_c =
      kcg_lit_int64(0);
    outC->_L113.prevLinkedBG.infoFromPassing.linkedBGs[idx51].nid_bg =
      kcg_lit_int64(0);
    outC->_L113.prevLinkedBG.infoFromPassing.linkedBGs[idx51].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L113.prevLinkedBG.infoFromPassing.linkedBGs[idx51].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L113.prevLinkedBG.infoFromPassing.linkedBGs[idx51].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L113.prevLinkedBG.missed = kcg_true;
  outC->_L113.prevUnlinkedBG.valid = kcg_true;
  outC->_L113.prevUnlinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L113.prevUnlinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L113.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L113.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L113.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L113.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(
      0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L113.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(
      0);
  outC->_L113.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L113.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L113.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(
      0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L113.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx52 = 0; idx52 < 33; idx52++) {
    outC->_L113.prevUnlinkedBG.infoFromPassing.linkedBGs[idx52].valid = kcg_true;
    outC->_L113.prevUnlinkedBG.infoFromPassing.linkedBGs[idx52].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L113.prevUnlinkedBG.infoFromPassing.linkedBGs[idx52].q_dir =
      Q_DIR_Reverse;
    outC->_L113.prevUnlinkedBG.infoFromPassing.linkedBGs[idx52].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L113.prevUnlinkedBG.infoFromPassing.linkedBGs[idx52].d_link =
      kcg_lit_int64(0);
    outC->_L113.prevUnlinkedBG.infoFromPassing.linkedBGs[idx52].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L113.prevUnlinkedBG.infoFromPassing.linkedBGs[idx52].nid_c =
      kcg_lit_int64(0);
    outC->_L113.prevUnlinkedBG.infoFromPassing.linkedBGs[idx52].nid_bg =
      kcg_lit_int64(0);
    outC->_L113.prevUnlinkedBG.infoFromPassing.linkedBGs[idx52].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L113.prevUnlinkedBG.infoFromPassing.linkedBGs[idx52].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L113.prevUnlinkedBG.infoFromPassing.linkedBGs[idx52].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L113.prevUnlinkedBG.missed = kcg_true;
  outC->_L113.recalculate = kcg_true;
  outC->_L113.sumOfBestDistances.nominal = kcg_lit_int64(0);
  outC->_L113.sumOfBestDistances.d_min = kcg_lit_int64(0);
  outC->_L113.sumOfBestDistances.d_max = kcg_lit_int64(0);
  outC->_L111.valid = kcg_true;
  outC->_L111.nid_c = kcg_lit_int64(0);
  outC->_L111.nid_bg = kcg_lit_int64(0);
  outC->_L111.q_link = Q_LINK_Unlinked;
  outC->_L111.location.nominal = kcg_lit_int64(0);
  outC->_L111.location.d_min = kcg_lit_int64(0);
  outC->_L111.location.d_max = kcg_lit_int64(0);
  outC->_L111.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.valid = kcg_true;
  outC->_L111.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L111.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L111.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L111.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L111.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L111.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L111.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L111.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L111.infoFromPassing.valid = kcg_true;
  outC->_L111.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L111.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L111.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L111.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L111.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L111.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L111.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L111.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L111.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L111.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L111.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L111.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L111.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L111.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx53 = 0; idx53 < 33; idx53++) {
    outC->_L111.infoFromPassing.linkedBGs[idx53].valid = kcg_true;
    outC->_L111.infoFromPassing.linkedBGs[idx53].nid_LRBG = kcg_lit_int64(0);
    outC->_L111.infoFromPassing.linkedBGs[idx53].q_dir = Q_DIR_Reverse;
    outC->_L111.infoFromPassing.linkedBGs[idx53].q_scale = Q_SCALE_10_cm_scale;
    outC->_L111.infoFromPassing.linkedBGs[idx53].d_link = kcg_lit_int64(0);
    outC->_L111.infoFromPassing.linkedBGs[idx53].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L111.infoFromPassing.linkedBGs[idx53].nid_c = kcg_lit_int64(0);
    outC->_L111.infoFromPassing.linkedBGs[idx53].nid_bg = kcg_lit_int64(0);
    outC->_L111.infoFromPassing.linkedBGs[idx53].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L111.infoFromPassing.linkedBGs[idx53].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L111.infoFromPassing.linkedBGs[idx53].q_locacc = kcg_lit_int64(0);
  }
  outC->_L111.missed = kcg_true;
  outC->_L110 = Q_LINK_Unlinked;
  outC->_L109 = kcg_true;
  outC->_L108 = Q_LINK_Unlinked;
  outC->_L107 = Q_LINK_Unlinked;
  outC->_L106 = kcg_true;
  outC->_L105 = Q_LINK_Unlinked;
  outC->_L99.valid = kcg_true;
  outC->_L99.nid_c = kcg_lit_int64(0);
  outC->_L99.nid_bg = kcg_lit_int64(0);
  outC->_L99.q_link = Q_LINK_Unlinked;
  outC->_L99.location.nominal = kcg_lit_int64(0);
  outC->_L99.location.d_min = kcg_lit_int64(0);
  outC->_L99.location.d_max = kcg_lit_int64(0);
  outC->_L99.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.valid = kcg_true;
  outC->_L99.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L99.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L99.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L99.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L99.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L99.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L99.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L99.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L99.infoFromPassing.valid = kcg_true;
  outC->_L99.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L99.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L99.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L99.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L99.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L99.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L99.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L99.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L99.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L99.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L99.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L99.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L99.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L99.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L99.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L99.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx54 = 0; idx54 < 33; idx54++) {
    outC->_L99.infoFromPassing.linkedBGs[idx54].valid = kcg_true;
    outC->_L99.infoFromPassing.linkedBGs[idx54].nid_LRBG = kcg_lit_int64(0);
    outC->_L99.infoFromPassing.linkedBGs[idx54].q_dir = Q_DIR_Reverse;
    outC->_L99.infoFromPassing.linkedBGs[idx54].q_scale = Q_SCALE_10_cm_scale;
    outC->_L99.infoFromPassing.linkedBGs[idx54].d_link = kcg_lit_int64(0);
    outC->_L99.infoFromPassing.linkedBGs[idx54].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L99.infoFromPassing.linkedBGs[idx54].nid_c = kcg_lit_int64(0);
    outC->_L99.infoFromPassing.linkedBGs[idx54].nid_bg = kcg_lit_int64(0);
    outC->_L99.infoFromPassing.linkedBGs[idx54].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L99.infoFromPassing.linkedBGs[idx54].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L99.infoFromPassing.linkedBGs[idx54].q_locacc = kcg_lit_int64(0);
  }
  outC->_L99.missed = kcg_true;
  outC->_L98.nominal = kcg_lit_int64(0);
  outC->_L98.d_min = kcg_lit_int64(0);
  outC->_L98.d_max = kcg_lit_int64(0);
  outC->_L97.nominal = kcg_lit_int64(0);
  outC->_L97.d_min = kcg_lit_int64(0);
  outC->_L97.d_max = kcg_lit_int64(0);
  outC->_L96 = kcg_true;
  outC->_L95.o_nominal = kcg_lit_int64(0);
  outC->_L95.o_min = kcg_lit_int64(0);
  outC->_L95.o_max = kcg_lit_int64(0);
  outC->_L94 = kcg_true;
  outC->_L93.valid = kcg_true;
  outC->_L93.BG_Header.valid = kcg_true;
  outC->_L93.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L93.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L93.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L93.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L93.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L93.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L93.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L93.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L93.BG_Header.bgPosition.valid = kcg_true;
  outC->_L93.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L93.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L93.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L93.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L93.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L93.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L93.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L93.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L93.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L93.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L93.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L93.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L93.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L93.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L93.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L93.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L93.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L93.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx55 = 0; idx55 < 33; idx55++) {
    outC->_L93.linkedBGs[idx55].valid = kcg_true;
    outC->_L93.linkedBGs[idx55].nid_LRBG = kcg_lit_int64(0);
    outC->_L93.linkedBGs[idx55].q_dir = Q_DIR_Reverse;
    outC->_L93.linkedBGs[idx55].q_scale = Q_SCALE_10_cm_scale;
    outC->_L93.linkedBGs[idx55].d_link = kcg_lit_int64(0);
    outC->_L93.linkedBGs[idx55].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L93.linkedBGs[idx55].nid_c = kcg_lit_int64(0);
    outC->_L93.linkedBGs[idx55].nid_bg = kcg_lit_int64(0);
    outC->_L93.linkedBGs[idx55].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L93.linkedBGs[idx55].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L93.linkedBGs[idx55].q_locacc = kcg_lit_int64(0);
  }
  outC->_L92.nominal = kcg_lit_int64(0);
  outC->_L92.d_min = kcg_lit_int64(0);
  outC->_L92.d_max = kcg_lit_int64(0);
  outC->_L90.o_nominal = kcg_lit_int64(0);
  outC->_L90.o_min = kcg_lit_int64(0);
  outC->_L90.o_max = kcg_lit_int64(0);
  outC->_L89 = kcg_true;
  outC->_L88.valid = kcg_true;
  outC->_L88.BG_Header.valid = kcg_true;
  outC->_L88.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L88.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L88.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L88.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L88.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L88.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L88.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L88.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L88.BG_Header.bgPosition.valid = kcg_true;
  outC->_L88.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L88.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L88.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L88.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L88.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L88.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L88.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L88.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L88.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L88.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L88.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L88.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L88.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L88.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L88.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L88.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L88.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L88.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx56 = 0; idx56 < 33; idx56++) {
    outC->_L88.linkedBGs[idx56].valid = kcg_true;
    outC->_L88.linkedBGs[idx56].nid_LRBG = kcg_lit_int64(0);
    outC->_L88.linkedBGs[idx56].q_dir = Q_DIR_Reverse;
    outC->_L88.linkedBGs[idx56].q_scale = Q_SCALE_10_cm_scale;
    outC->_L88.linkedBGs[idx56].d_link = kcg_lit_int64(0);
    outC->_L88.linkedBGs[idx56].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L88.linkedBGs[idx56].nid_c = kcg_lit_int64(0);
    outC->_L88.linkedBGs[idx56].nid_bg = kcg_lit_int64(0);
    outC->_L88.linkedBGs[idx56].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L88.linkedBGs[idx56].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L88.linkedBGs[idx56].q_locacc = kcg_lit_int64(0);
  }
  outC->_L87 = kcg_true;
  outC->_L86.valid = kcg_true;
  outC->_L86.nid_c = kcg_lit_int64(0);
  outC->_L86.nid_bg = kcg_lit_int64(0);
  outC->_L86.q_link = Q_LINK_Unlinked;
  outC->_L86.location.nominal = kcg_lit_int64(0);
  outC->_L86.location.d_min = kcg_lit_int64(0);
  outC->_L86.location.d_max = kcg_lit_int64(0);
  outC->_L86.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.valid = kcg_true;
  outC->_L86.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L86.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L86.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L86.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L86.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L86.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L86.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L86.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L86.infoFromPassing.valid = kcg_true;
  outC->_L86.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L86.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L86.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L86.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L86.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L86.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L86.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L86.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L86.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L86.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L86.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L86.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L86.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L86.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L86.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L86.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx57 = 0; idx57 < 33; idx57++) {
    outC->_L86.infoFromPassing.linkedBGs[idx57].valid = kcg_true;
    outC->_L86.infoFromPassing.linkedBGs[idx57].nid_LRBG = kcg_lit_int64(0);
    outC->_L86.infoFromPassing.linkedBGs[idx57].q_dir = Q_DIR_Reverse;
    outC->_L86.infoFromPassing.linkedBGs[idx57].q_scale = Q_SCALE_10_cm_scale;
    outC->_L86.infoFromPassing.linkedBGs[idx57].d_link = kcg_lit_int64(0);
    outC->_L86.infoFromPassing.linkedBGs[idx57].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L86.infoFromPassing.linkedBGs[idx57].nid_c = kcg_lit_int64(0);
    outC->_L86.infoFromPassing.linkedBGs[idx57].nid_bg = kcg_lit_int64(0);
    outC->_L86.infoFromPassing.linkedBGs[idx57].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L86.infoFromPassing.linkedBGs[idx57].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L86.infoFromPassing.linkedBGs[idx57].q_locacc = kcg_lit_int64(0);
  }
  outC->_L86.missed = kcg_true;
  outC->_L85.valid = kcg_true;
  outC->_L85.nid_c = kcg_lit_int64(0);
  outC->_L85.nid_bg = kcg_lit_int64(0);
  outC->_L85.q_link = Q_LINK_Unlinked;
  outC->_L85.location.nominal = kcg_lit_int64(0);
  outC->_L85.location.d_min = kcg_lit_int64(0);
  outC->_L85.location.d_max = kcg_lit_int64(0);
  outC->_L85.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.valid = kcg_true;
  outC->_L85.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L85.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L85.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L85.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L85.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L85.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L85.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L85.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L85.infoFromPassing.valid = kcg_true;
  outC->_L85.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L85.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L85.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L85.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L85.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L85.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L85.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L85.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L85.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L85.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L85.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L85.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L85.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L85.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L85.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L85.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx58 = 0; idx58 < 33; idx58++) {
    outC->_L85.infoFromPassing.linkedBGs[idx58].valid = kcg_true;
    outC->_L85.infoFromPassing.linkedBGs[idx58].nid_LRBG = kcg_lit_int64(0);
    outC->_L85.infoFromPassing.linkedBGs[idx58].q_dir = Q_DIR_Reverse;
    outC->_L85.infoFromPassing.linkedBGs[idx58].q_scale = Q_SCALE_10_cm_scale;
    outC->_L85.infoFromPassing.linkedBGs[idx58].d_link = kcg_lit_int64(0);
    outC->_L85.infoFromPassing.linkedBGs[idx58].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L85.infoFromPassing.linkedBGs[idx58].nid_c = kcg_lit_int64(0);
    outC->_L85.infoFromPassing.linkedBGs[idx58].nid_bg = kcg_lit_int64(0);
    outC->_L85.infoFromPassing.linkedBGs[idx58].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L85.infoFromPassing.linkedBGs[idx58].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L85.infoFromPassing.linkedBGs[idx58].q_locacc = kcg_lit_int64(0);
  }
  outC->_L85.missed = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L82.refBG.valid = kcg_true;
  outC->_L82.refBG.nid_c = kcg_lit_int64(0);
  outC->_L82.refBG.nid_bg = kcg_lit_int64(0);
  outC->_L82.refBG.q_link = Q_LINK_Unlinked;
  outC->_L82.refBG.location.nominal = kcg_lit_int64(0);
  outC->_L82.refBG.location.d_min = kcg_lit_int64(0);
  outC->_L82.refBG.location.d_max = kcg_lit_int64(0);
  outC->_L82.refBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.valid = kcg_true;
  outC->_L82.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L82.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L82.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L82.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L82.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L82.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L82.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.valid = kcg_true;
  outC->_L82.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L82.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L82.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L82.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L82.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L82.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L82.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L82.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L82.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L82.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L82.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx59 = 0; idx59 < 33; idx59++) {
    outC->_L82.refBG.infoFromPassing.linkedBGs[idx59].valid = kcg_true;
    outC->_L82.refBG.infoFromPassing.linkedBGs[idx59].nid_LRBG = kcg_lit_int64(0);
    outC->_L82.refBG.infoFromPassing.linkedBGs[idx59].q_dir = Q_DIR_Reverse;
    outC->_L82.refBG.infoFromPassing.linkedBGs[idx59].q_scale = Q_SCALE_10_cm_scale;
    outC->_L82.refBG.infoFromPassing.linkedBGs[idx59].d_link = kcg_lit_int64(0);
    outC->_L82.refBG.infoFromPassing.linkedBGs[idx59].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L82.refBG.infoFromPassing.linkedBGs[idx59].nid_c = kcg_lit_int64(0);
    outC->_L82.refBG.infoFromPassing.linkedBGs[idx59].nid_bg = kcg_lit_int64(0);
    outC->_L82.refBG.infoFromPassing.linkedBGs[idx59].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L82.refBG.infoFromPassing.linkedBGs[idx59].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L82.refBG.infoFromPassing.linkedBGs[idx59].q_locacc = kcg_lit_int64(0);
  }
  outC->_L82.refBG.missed = kcg_true;
  outC->_L82.prevLinkedBG.valid = kcg_true;
  outC->_L82.prevLinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L82.prevLinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L82.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L82.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L82.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L82.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L82.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L82.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L82.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L82.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx60 = 0; idx60 < 33; idx60++) {
    outC->_L82.prevLinkedBG.infoFromPassing.linkedBGs[idx60].valid = kcg_true;
    outC->_L82.prevLinkedBG.infoFromPassing.linkedBGs[idx60].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L82.prevLinkedBG.infoFromPassing.linkedBGs[idx60].q_dir = Q_DIR_Reverse;
    outC->_L82.prevLinkedBG.infoFromPassing.linkedBGs[idx60].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L82.prevLinkedBG.infoFromPassing.linkedBGs[idx60].d_link =
      kcg_lit_int64(0);
    outC->_L82.prevLinkedBG.infoFromPassing.linkedBGs[idx60].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L82.prevLinkedBG.infoFromPassing.linkedBGs[idx60].nid_c =
      kcg_lit_int64(0);
    outC->_L82.prevLinkedBG.infoFromPassing.linkedBGs[idx60].nid_bg =
      kcg_lit_int64(0);
    outC->_L82.prevLinkedBG.infoFromPassing.linkedBGs[idx60].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L82.prevLinkedBG.infoFromPassing.linkedBGs[idx60].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L82.prevLinkedBG.infoFromPassing.linkedBGs[idx60].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L82.prevLinkedBG.missed = kcg_true;
  outC->_L82.prevUnlinkedBG.valid = kcg_true;
  outC->_L82.prevUnlinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L82.prevUnlinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L82.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(
      0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L82.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L82.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L82.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L82.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L82.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L82.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L82.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx61 = 0; idx61 < 33; idx61++) {
    outC->_L82.prevUnlinkedBG.infoFromPassing.linkedBGs[idx61].valid = kcg_true;
    outC->_L82.prevUnlinkedBG.infoFromPassing.linkedBGs[idx61].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L82.prevUnlinkedBG.infoFromPassing.linkedBGs[idx61].q_dir =
      Q_DIR_Reverse;
    outC->_L82.prevUnlinkedBG.infoFromPassing.linkedBGs[idx61].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L82.prevUnlinkedBG.infoFromPassing.linkedBGs[idx61].d_link =
      kcg_lit_int64(0);
    outC->_L82.prevUnlinkedBG.infoFromPassing.linkedBGs[idx61].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L82.prevUnlinkedBG.infoFromPassing.linkedBGs[idx61].nid_c =
      kcg_lit_int64(0);
    outC->_L82.prevUnlinkedBG.infoFromPassing.linkedBGs[idx61].nid_bg =
      kcg_lit_int64(0);
    outC->_L82.prevUnlinkedBG.infoFromPassing.linkedBGs[idx61].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L82.prevUnlinkedBG.infoFromPassing.linkedBGs[idx61].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L82.prevUnlinkedBG.infoFromPassing.linkedBGs[idx61].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L82.prevUnlinkedBG.missed = kcg_true;
  outC->_L82.recalculate = kcg_true;
  outC->_L82.sumOfBestDistances.nominal = kcg_lit_int64(0);
  outC->_L82.sumOfBestDistances.d_min = kcg_lit_int64(0);
  outC->_L82.sumOfBestDistances.d_max = kcg_lit_int64(0);
  outC->_L81.valid = kcg_true;
  outC->_L81.nid_c = kcg_lit_int64(0);
  outC->_L81.nid_bg = kcg_lit_int64(0);
  outC->_L81.q_link = Q_LINK_Unlinked;
  outC->_L81.location.nominal = kcg_lit_int64(0);
  outC->_L81.location.d_min = kcg_lit_int64(0);
  outC->_L81.location.d_max = kcg_lit_int64(0);
  outC->_L81.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.valid = kcg_true;
  outC->_L81.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L81.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L81.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L81.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L81.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L81.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L81.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L81.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.valid = kcg_true;
  outC->_L81.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L81.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L81.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L81.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L81.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L81.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L81.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L81.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L81.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L81.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L81.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L81.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L81.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx62 = 0; idx62 < 33; idx62++) {
    outC->_L81.infoFromPassing.linkedBGs[idx62].valid = kcg_true;
    outC->_L81.infoFromPassing.linkedBGs[idx62].nid_LRBG = kcg_lit_int64(0);
    outC->_L81.infoFromPassing.linkedBGs[idx62].q_dir = Q_DIR_Reverse;
    outC->_L81.infoFromPassing.linkedBGs[idx62].q_scale = Q_SCALE_10_cm_scale;
    outC->_L81.infoFromPassing.linkedBGs[idx62].d_link = kcg_lit_int64(0);
    outC->_L81.infoFromPassing.linkedBGs[idx62].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L81.infoFromPassing.linkedBGs[idx62].nid_c = kcg_lit_int64(0);
    outC->_L81.infoFromPassing.linkedBGs[idx62].nid_bg = kcg_lit_int64(0);
    outC->_L81.infoFromPassing.linkedBGs[idx62].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L81.infoFromPassing.linkedBGs[idx62].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L81.infoFromPassing.linkedBGs[idx62].q_locacc = kcg_lit_int64(0);
  }
  outC->_L81.missed = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L78.valid = kcg_true;
  outC->_L78.nid_c = kcg_lit_int64(0);
  outC->_L78.nid_bg = kcg_lit_int64(0);
  outC->_L78.q_link = Q_LINK_Unlinked;
  outC->_L78.location.nominal = kcg_lit_int64(0);
  outC->_L78.location.d_min = kcg_lit_int64(0);
  outC->_L78.location.d_max = kcg_lit_int64(0);
  outC->_L78.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.valid = kcg_true;
  outC->_L78.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L78.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L78.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L78.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L78.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L78.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L78.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L78.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L78.infoFromPassing.valid = kcg_true;
  outC->_L78.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L78.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L78.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L78.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L78.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L78.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L78.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L78.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L78.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L78.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L78.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L78.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L78.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L78.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L78.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L78.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx63 = 0; idx63 < 33; idx63++) {
    outC->_L78.infoFromPassing.linkedBGs[idx63].valid = kcg_true;
    outC->_L78.infoFromPassing.linkedBGs[idx63].nid_LRBG = kcg_lit_int64(0);
    outC->_L78.infoFromPassing.linkedBGs[idx63].q_dir = Q_DIR_Reverse;
    outC->_L78.infoFromPassing.linkedBGs[idx63].q_scale = Q_SCALE_10_cm_scale;
    outC->_L78.infoFromPassing.linkedBGs[idx63].d_link = kcg_lit_int64(0);
    outC->_L78.infoFromPassing.linkedBGs[idx63].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L78.infoFromPassing.linkedBGs[idx63].nid_c = kcg_lit_int64(0);
    outC->_L78.infoFromPassing.linkedBGs[idx63].nid_bg = kcg_lit_int64(0);
    outC->_L78.infoFromPassing.linkedBGs[idx63].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L78.infoFromPassing.linkedBGs[idx63].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L78.infoFromPassing.linkedBGs[idx63].q_locacc = kcg_lit_int64(0);
  }
  outC->_L78.missed = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L76.nominal = kcg_lit_int64(0);
  outC->_L76.d_min = kcg_lit_int64(0);
  outC->_L76.d_max = kcg_lit_int64(0);
  outC->_L75.valid = kcg_true;
  outC->_L75.nid_c = kcg_lit_int64(0);
  outC->_L75.nid_bg = kcg_lit_int64(0);
  outC->_L75.q_link = Q_LINK_Unlinked;
  outC->_L75.location.nominal = kcg_lit_int64(0);
  outC->_L75.location.d_min = kcg_lit_int64(0);
  outC->_L75.location.d_max = kcg_lit_int64(0);
  outC->_L75.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.valid = kcg_true;
  outC->_L75.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L75.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L75.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L75.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L75.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L75.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L75.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L75.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L75.infoFromPassing.valid = kcg_true;
  outC->_L75.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L75.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L75.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L75.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L75.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L75.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L75.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L75.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L75.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L75.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L75.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L75.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L75.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx64 = 0; idx64 < 33; idx64++) {
    outC->_L75.infoFromPassing.linkedBGs[idx64].valid = kcg_true;
    outC->_L75.infoFromPassing.linkedBGs[idx64].nid_LRBG = kcg_lit_int64(0);
    outC->_L75.infoFromPassing.linkedBGs[idx64].q_dir = Q_DIR_Reverse;
    outC->_L75.infoFromPassing.linkedBGs[idx64].q_scale = Q_SCALE_10_cm_scale;
    outC->_L75.infoFromPassing.linkedBGs[idx64].d_link = kcg_lit_int64(0);
    outC->_L75.infoFromPassing.linkedBGs[idx64].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L75.infoFromPassing.linkedBGs[idx64].nid_c = kcg_lit_int64(0);
    outC->_L75.infoFromPassing.linkedBGs[idx64].nid_bg = kcg_lit_int64(0);
    outC->_L75.infoFromPassing.linkedBGs[idx64].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L75.infoFromPassing.linkedBGs[idx64].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L75.infoFromPassing.linkedBGs[idx64].q_locacc = kcg_lit_int64(0);
  }
  outC->_L75.missed = kcg_true;
  outC->_L64.refBG.valid = kcg_true;
  outC->_L64.refBG.nid_c = kcg_lit_int64(0);
  outC->_L64.refBG.nid_bg = kcg_lit_int64(0);
  outC->_L64.refBG.q_link = Q_LINK_Unlinked;
  outC->_L64.refBG.location.nominal = kcg_lit_int64(0);
  outC->_L64.refBG.location.d_min = kcg_lit_int64(0);
  outC->_L64.refBG.location.d_max = kcg_lit_int64(0);
  outC->_L64.refBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.valid = kcg_true;
  outC->_L64.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L64.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L64.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L64.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L64.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L64.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L64.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.valid = kcg_true;
  outC->_L64.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L64.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L64.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L64.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L64.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L64.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L64.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L64.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L64.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L64.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L64.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx65 = 0; idx65 < 33; idx65++) {
    outC->_L64.refBG.infoFromPassing.linkedBGs[idx65].valid = kcg_true;
    outC->_L64.refBG.infoFromPassing.linkedBGs[idx65].nid_LRBG = kcg_lit_int64(0);
    outC->_L64.refBG.infoFromPassing.linkedBGs[idx65].q_dir = Q_DIR_Reverse;
    outC->_L64.refBG.infoFromPassing.linkedBGs[idx65].q_scale = Q_SCALE_10_cm_scale;
    outC->_L64.refBG.infoFromPassing.linkedBGs[idx65].d_link = kcg_lit_int64(0);
    outC->_L64.refBG.infoFromPassing.linkedBGs[idx65].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L64.refBG.infoFromPassing.linkedBGs[idx65].nid_c = kcg_lit_int64(0);
    outC->_L64.refBG.infoFromPassing.linkedBGs[idx65].nid_bg = kcg_lit_int64(0);
    outC->_L64.refBG.infoFromPassing.linkedBGs[idx65].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L64.refBG.infoFromPassing.linkedBGs[idx65].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L64.refBG.infoFromPassing.linkedBGs[idx65].q_locacc = kcg_lit_int64(0);
  }
  outC->_L64.refBG.missed = kcg_true;
  outC->_L64.prevLinkedBG.valid = kcg_true;
  outC->_L64.prevLinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L64.prevLinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L64.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L64.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L64.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L64.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L64.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L64.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L64.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L64.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx66 = 0; idx66 < 33; idx66++) {
    outC->_L64.prevLinkedBG.infoFromPassing.linkedBGs[idx66].valid = kcg_true;
    outC->_L64.prevLinkedBG.infoFromPassing.linkedBGs[idx66].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L64.prevLinkedBG.infoFromPassing.linkedBGs[idx66].q_dir = Q_DIR_Reverse;
    outC->_L64.prevLinkedBG.infoFromPassing.linkedBGs[idx66].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L64.prevLinkedBG.infoFromPassing.linkedBGs[idx66].d_link =
      kcg_lit_int64(0);
    outC->_L64.prevLinkedBG.infoFromPassing.linkedBGs[idx66].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L64.prevLinkedBG.infoFromPassing.linkedBGs[idx66].nid_c =
      kcg_lit_int64(0);
    outC->_L64.prevLinkedBG.infoFromPassing.linkedBGs[idx66].nid_bg =
      kcg_lit_int64(0);
    outC->_L64.prevLinkedBG.infoFromPassing.linkedBGs[idx66].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L64.prevLinkedBG.infoFromPassing.linkedBGs[idx66].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L64.prevLinkedBG.infoFromPassing.linkedBGs[idx66].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L64.prevLinkedBG.missed = kcg_true;
  outC->_L64.prevUnlinkedBG.valid = kcg_true;
  outC->_L64.prevUnlinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L64.prevUnlinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L64.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(
      0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L64.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L64.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L64.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L64.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L64.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L64.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L64.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx67 = 0; idx67 < 33; idx67++) {
    outC->_L64.prevUnlinkedBG.infoFromPassing.linkedBGs[idx67].valid = kcg_true;
    outC->_L64.prevUnlinkedBG.infoFromPassing.linkedBGs[idx67].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L64.prevUnlinkedBG.infoFromPassing.linkedBGs[idx67].q_dir =
      Q_DIR_Reverse;
    outC->_L64.prevUnlinkedBG.infoFromPassing.linkedBGs[idx67].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L64.prevUnlinkedBG.infoFromPassing.linkedBGs[idx67].d_link =
      kcg_lit_int64(0);
    outC->_L64.prevUnlinkedBG.infoFromPassing.linkedBGs[idx67].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L64.prevUnlinkedBG.infoFromPassing.linkedBGs[idx67].nid_c =
      kcg_lit_int64(0);
    outC->_L64.prevUnlinkedBG.infoFromPassing.linkedBGs[idx67].nid_bg =
      kcg_lit_int64(0);
    outC->_L64.prevUnlinkedBG.infoFromPassing.linkedBGs[idx67].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L64.prevUnlinkedBG.infoFromPassing.linkedBGs[idx67].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L64.prevUnlinkedBG.infoFromPassing.linkedBGs[idx67].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L64.prevUnlinkedBG.missed = kcg_true;
  outC->_L64.recalculate = kcg_true;
  outC->_L64.sumOfBestDistances.nominal = kcg_lit_int64(0);
  outC->_L64.sumOfBestDistances.d_min = kcg_lit_int64(0);
  outC->_L64.sumOfBestDistances.d_max = kcg_lit_int64(0);
  outC->_L67 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.nid_c = kcg_lit_int64(0);
  outC->_L71.nid_bg = kcg_lit_int64(0);
  outC->_L71.q_link = Q_LINK_Unlinked;
  outC->_L71.location.nominal = kcg_lit_int64(0);
  outC->_L71.location.d_min = kcg_lit_int64(0);
  outC->_L71.location.d_max = kcg_lit_int64(0);
  outC->_L71.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.valid = kcg_true;
  outC->_L71.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L71.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L71.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L71.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L71.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L71.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L71.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L71.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L71.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L71.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L71.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L71.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L71.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L71.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L71.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L71.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx68 = 0; idx68 < 33; idx68++) {
    outC->_L71.infoFromPassing.linkedBGs[idx68].valid = kcg_true;
    outC->_L71.infoFromPassing.linkedBGs[idx68].nid_LRBG = kcg_lit_int64(0);
    outC->_L71.infoFromPassing.linkedBGs[idx68].q_dir = Q_DIR_Reverse;
    outC->_L71.infoFromPassing.linkedBGs[idx68].q_scale = Q_SCALE_10_cm_scale;
    outC->_L71.infoFromPassing.linkedBGs[idx68].d_link = kcg_lit_int64(0);
    outC->_L71.infoFromPassing.linkedBGs[idx68].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L71.infoFromPassing.linkedBGs[idx68].nid_c = kcg_lit_int64(0);
    outC->_L71.infoFromPassing.linkedBGs[idx68].nid_bg = kcg_lit_int64(0);
    outC->_L71.infoFromPassing.linkedBGs[idx68].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L71.infoFromPassing.linkedBGs[idx68].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L71.infoFromPassing.linkedBGs[idx68].q_locacc = kcg_lit_int64(0);
  }
  outC->_L71.missed = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L51 = kcg_lit_int64(0);
  outC->_L52.nominal = kcg_lit_int64(0);
  outC->_L52.d_min = kcg_lit_int64(0);
  outC->_L52.d_max = kcg_lit_int64(0);
  outC->_L59.nominal = kcg_lit_int64(0);
  outC->_L59.d_min = kcg_lit_int64(0);
  outC->_L59.d_max = kcg_lit_int64(0);
  outC->_L36.refBG.valid = kcg_true;
  outC->_L36.refBG.nid_c = kcg_lit_int64(0);
  outC->_L36.refBG.nid_bg = kcg_lit_int64(0);
  outC->_L36.refBG.q_link = Q_LINK_Unlinked;
  outC->_L36.refBG.location.nominal = kcg_lit_int64(0);
  outC->_L36.refBG.location.d_min = kcg_lit_int64(0);
  outC->_L36.refBG.location.d_max = kcg_lit_int64(0);
  outC->_L36.refBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.valid = kcg_true;
  outC->_L36.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L36.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L36.refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L36.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L36.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L36.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L36.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.valid = kcg_true;
  outC->_L36.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L36.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L36.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L36.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L36.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L36.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L36.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L36.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L36.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L36.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx69 = 0; idx69 < 33; idx69++) {
    outC->_L36.refBG.infoFromPassing.linkedBGs[idx69].valid = kcg_true;
    outC->_L36.refBG.infoFromPassing.linkedBGs[idx69].nid_LRBG = kcg_lit_int64(0);
    outC->_L36.refBG.infoFromPassing.linkedBGs[idx69].q_dir = Q_DIR_Reverse;
    outC->_L36.refBG.infoFromPassing.linkedBGs[idx69].q_scale = Q_SCALE_10_cm_scale;
    outC->_L36.refBG.infoFromPassing.linkedBGs[idx69].d_link = kcg_lit_int64(0);
    outC->_L36.refBG.infoFromPassing.linkedBGs[idx69].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L36.refBG.infoFromPassing.linkedBGs[idx69].nid_c = kcg_lit_int64(0);
    outC->_L36.refBG.infoFromPassing.linkedBGs[idx69].nid_bg = kcg_lit_int64(0);
    outC->_L36.refBG.infoFromPassing.linkedBGs[idx69].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L36.refBG.infoFromPassing.linkedBGs[idx69].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L36.refBG.infoFromPassing.linkedBGs[idx69].q_locacc = kcg_lit_int64(0);
  }
  outC->_L36.refBG.missed = kcg_true;
  outC->_L36.prevLinkedBG.valid = kcg_true;
  outC->_L36.prevLinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L36.prevLinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L36.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L36.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L36.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L36.prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L36.prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L36.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L36.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L36.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx70 = 0; idx70 < 33; idx70++) {
    outC->_L36.prevLinkedBG.infoFromPassing.linkedBGs[idx70].valid = kcg_true;
    outC->_L36.prevLinkedBG.infoFromPassing.linkedBGs[idx70].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L36.prevLinkedBG.infoFromPassing.linkedBGs[idx70].q_dir = Q_DIR_Reverse;
    outC->_L36.prevLinkedBG.infoFromPassing.linkedBGs[idx70].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L36.prevLinkedBG.infoFromPassing.linkedBGs[idx70].d_link =
      kcg_lit_int64(0);
    outC->_L36.prevLinkedBG.infoFromPassing.linkedBGs[idx70].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L36.prevLinkedBG.infoFromPassing.linkedBGs[idx70].nid_c =
      kcg_lit_int64(0);
    outC->_L36.prevLinkedBG.infoFromPassing.linkedBGs[idx70].nid_bg =
      kcg_lit_int64(0);
    outC->_L36.prevLinkedBG.infoFromPassing.linkedBGs[idx70].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L36.prevLinkedBG.infoFromPassing.linkedBGs[idx70].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L36.prevLinkedBG.infoFromPassing.linkedBGs[idx70].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L36.prevLinkedBG.missed = kcg_true;
  outC->_L36.prevUnlinkedBG.valid = kcg_true;
  outC->_L36.prevUnlinkedBG.nid_c = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.nid_bg = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L36.prevUnlinkedBG.location.nominal = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.location.d_min = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.location.d_max = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L36.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(
      0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L36.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L36.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L36.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L36.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L36.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L36.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L36.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx71 = 0; idx71 < 33; idx71++) {
    outC->_L36.prevUnlinkedBG.infoFromPassing.linkedBGs[idx71].valid = kcg_true;
    outC->_L36.prevUnlinkedBG.infoFromPassing.linkedBGs[idx71].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L36.prevUnlinkedBG.infoFromPassing.linkedBGs[idx71].q_dir =
      Q_DIR_Reverse;
    outC->_L36.prevUnlinkedBG.infoFromPassing.linkedBGs[idx71].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L36.prevUnlinkedBG.infoFromPassing.linkedBGs[idx71].d_link =
      kcg_lit_int64(0);
    outC->_L36.prevUnlinkedBG.infoFromPassing.linkedBGs[idx71].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L36.prevUnlinkedBG.infoFromPassing.linkedBGs[idx71].nid_c =
      kcg_lit_int64(0);
    outC->_L36.prevUnlinkedBG.infoFromPassing.linkedBGs[idx71].nid_bg =
      kcg_lit_int64(0);
    outC->_L36.prevUnlinkedBG.infoFromPassing.linkedBGs[idx71].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L36.prevUnlinkedBG.infoFromPassing.linkedBGs[idx71].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L36.prevUnlinkedBG.infoFromPassing.linkedBGs[idx71].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L36.prevUnlinkedBG.missed = kcg_true;
  outC->_L36.recalculate = kcg_true;
  outC->_L36.sumOfBestDistances.nominal = kcg_lit_int64(0);
  outC->_L36.sumOfBestDistances.d_min = kcg_lit_int64(0);
  outC->_L36.sumOfBestDistances.d_max = kcg_lit_int64(0);
  outC->d_prevLinkedBG_refBG.nominal = kcg_lit_int64(0);
  outC->d_prevLinkedBG_refBG.d_min = kcg_lit_int64(0);
  outC->d_prevLinkedBG_refBG.d_max = kcg_lit_int64(0);
  outC->sumOfBestDistances.nominal = kcg_lit_int64(0);
  outC->sumOfBestDistances.d_min = kcg_lit_int64(0);
  outC->sumOfBestDistances.d_max = kcg_lit_int64(0);
  outC->BG_loc_inacc.nominal = kcg_lit_int64(0);
  outC->BG_loc_inacc.d_min = kcg_lit_int64(0);
  outC->BG_loc_inacc.d_max = kcg_lit_int64(0);
  outC->relocatedBG.valid = kcg_true;
  outC->relocatedBG.nid_c = kcg_lit_int64(0);
  outC->relocatedBG.nid_bg = kcg_lit_int64(0);
  outC->relocatedBG.q_link = Q_LINK_Unlinked;
  outC->relocatedBG.location.nominal = kcg_lit_int64(0);
  outC->relocatedBG.location.d_min = kcg_lit_int64(0);
  outC->relocatedBG.location.d_max = kcg_lit_int64(0);
  outC->relocatedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.valid = kcg_true;
  outC->relocatedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->relocatedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->relocatedBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->relocatedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->relocatedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->relocatedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->relocatedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->relocatedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.valid = kcg_true;
  outC->relocatedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->relocatedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->relocatedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->relocatedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->relocatedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->relocatedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->relocatedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->relocatedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->relocatedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->relocatedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->relocatedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx72 = 0; idx72 < 33; idx72++) {
    outC->relocatedBG.infoFromPassing.linkedBGs[idx72].valid = kcg_true;
    outC->relocatedBG.infoFromPassing.linkedBGs[idx72].nid_LRBG = kcg_lit_int64(0);
    outC->relocatedBG.infoFromPassing.linkedBGs[idx72].q_dir = Q_DIR_Reverse;
    outC->relocatedBG.infoFromPassing.linkedBGs[idx72].q_scale =
      Q_SCALE_10_cm_scale;
    outC->relocatedBG.infoFromPassing.linkedBGs[idx72].d_link = kcg_lit_int64(0);
    outC->relocatedBG.infoFromPassing.linkedBGs[idx72].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->relocatedBG.infoFromPassing.linkedBGs[idx72].nid_c = kcg_lit_int64(0);
    outC->relocatedBG.infoFromPassing.linkedBGs[idx72].nid_bg = kcg_lit_int64(0);
    outC->relocatedBG.infoFromPassing.linkedBGs[idx72].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->relocatedBG.infoFromPassing.linkedBGs[idx72].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->relocatedBG.infoFromPassing.linkedBGs[idx72].q_locacc = kcg_lit_int64(0);
  }
  outC->relocatedBG.missed = kcg_true;
  outC->prevUnlinkedBG.valid = kcg_true;
  outC->prevUnlinkedBG.nid_c = kcg_lit_int64(0);
  outC->prevUnlinkedBG.nid_bg = kcg_lit_int64(0);
  outC->prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->prevUnlinkedBG.location.nominal = kcg_lit_int64(0);
  outC->prevUnlinkedBG.location.d_min = kcg_lit_int64(0);
  outC->prevUnlinkedBG.location.d_max = kcg_lit_int64(0);
  outC->prevUnlinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(
      0);
  outC->prevUnlinkedBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->prevUnlinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx73 = 0; idx73 < 33; idx73++) {
    outC->prevUnlinkedBG.infoFromPassing.linkedBGs[idx73].valid = kcg_true;
    outC->prevUnlinkedBG.infoFromPassing.linkedBGs[idx73].nid_LRBG =
      kcg_lit_int64(0);
    outC->prevUnlinkedBG.infoFromPassing.linkedBGs[idx73].q_dir = Q_DIR_Reverse;
    outC->prevUnlinkedBG.infoFromPassing.linkedBGs[idx73].q_scale =
      Q_SCALE_10_cm_scale;
    outC->prevUnlinkedBG.infoFromPassing.linkedBGs[idx73].d_link = kcg_lit_int64(0);
    outC->prevUnlinkedBG.infoFromPassing.linkedBGs[idx73].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->prevUnlinkedBG.infoFromPassing.linkedBGs[idx73].nid_c = kcg_lit_int64(0);
    outC->prevUnlinkedBG.infoFromPassing.linkedBGs[idx73].nid_bg = kcg_lit_int64(0);
    outC->prevUnlinkedBG.infoFromPassing.linkedBGs[idx73].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->prevUnlinkedBG.infoFromPassing.linkedBGs[idx73].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->prevUnlinkedBG.infoFromPassing.linkedBGs[idx73].q_locacc =
      kcg_lit_int64(0);
  }
  outC->prevUnlinkedBG.missed = kcg_true;
  outC->prevLinkedBG.valid = kcg_true;
  outC->prevLinkedBG.nid_c = kcg_lit_int64(0);
  outC->prevLinkedBG.nid_bg = kcg_lit_int64(0);
  outC->prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->prevLinkedBG.location.nominal = kcg_lit_int64(0);
  outC->prevLinkedBG.location.d_min = kcg_lit_int64(0);
  outC->prevLinkedBG.location.d_max = kcg_lit_int64(0);
  outC->prevLinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->prevLinkedBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->prevLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->prevLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->prevLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->prevLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->prevLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx74 = 0; idx74 < 33; idx74++) {
    outC->prevLinkedBG.infoFromPassing.linkedBGs[idx74].valid = kcg_true;
    outC->prevLinkedBG.infoFromPassing.linkedBGs[idx74].nid_LRBG = kcg_lit_int64(0);
    outC->prevLinkedBG.infoFromPassing.linkedBGs[idx74].q_dir = Q_DIR_Reverse;
    outC->prevLinkedBG.infoFromPassing.linkedBGs[idx74].q_scale =
      Q_SCALE_10_cm_scale;
    outC->prevLinkedBG.infoFromPassing.linkedBGs[idx74].d_link = kcg_lit_int64(0);
    outC->prevLinkedBG.infoFromPassing.linkedBGs[idx74].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->prevLinkedBG.infoFromPassing.linkedBGs[idx74].nid_c = kcg_lit_int64(0);
    outC->prevLinkedBG.infoFromPassing.linkedBGs[idx74].nid_bg = kcg_lit_int64(0);
    outC->prevLinkedBG.infoFromPassing.linkedBGs[idx74].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->prevLinkedBG.infoFromPassing.linkedBGs[idx74].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->prevLinkedBG.infoFromPassing.linkedBGs[idx74].q_locacc = kcg_lit_int64(0);
  }
  outC->prevLinkedBG.missed = kcg_true;
  outC->refBG.valid = kcg_true;
  outC->refBG.nid_c = kcg_lit_int64(0);
  outC->refBG.nid_bg = kcg_lit_int64(0);
  outC->refBG.q_link = Q_LINK_Unlinked;
  outC->refBG.location.nominal = kcg_lit_int64(0);
  outC->refBG.location.d_min = kcg_lit_int64(0);
  outC->refBG.location.d_max = kcg_lit_int64(0);
  outC->refBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.valid = kcg_true;
  outC->refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->refBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->refBG.infoFromPassing.valid = kcg_true;
  outC->refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->refBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->refBG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->refBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->refBG.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx75 = 0; idx75 < 33; idx75++) {
    outC->refBG.infoFromPassing.linkedBGs[idx75].valid = kcg_true;
    outC->refBG.infoFromPassing.linkedBGs[idx75].nid_LRBG = kcg_lit_int64(0);
    outC->refBG.infoFromPassing.linkedBGs[idx75].q_dir = Q_DIR_Reverse;
    outC->refBG.infoFromPassing.linkedBGs[idx75].q_scale = Q_SCALE_10_cm_scale;
    outC->refBG.infoFromPassing.linkedBGs[idx75].d_link = kcg_lit_int64(0);
    outC->refBG.infoFromPassing.linkedBGs[idx75].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->refBG.infoFromPassing.linkedBGs[idx75].nid_c = kcg_lit_int64(0);
    outC->refBG.infoFromPassing.linkedBGs[idx75].nid_bg = kcg_lit_int64(0);
    outC->refBG.infoFromPassing.linkedBGs[idx75].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->refBG.infoFromPassing.linkedBGs[idx75].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->refBG.infoFromPassing.linkedBGs[idx75].q_locacc = kcg_lit_int64(0);
  }
  outC->refBG.missed = kcg_true;
  outC->refLocation.nominal = kcg_lit_int64(0);
  outC->refLocation.d_min = kcg_lit_int64(0);
  outC->refLocation.d_max = kcg_lit_int64(0);
  outC->recalculateSubsequentBGs = kcg_true;
  outC->BGin_is_refBG = kcg_true;
  outC->every = kcg_true;
  outC->BG_out.valid = kcg_true;
  outC->BG_out.nid_c = kcg_lit_int64(0);
  outC->BG_out.nid_bg = kcg_lit_int64(0);
  outC->BG_out.q_link = Q_LINK_Unlinked;
  outC->BG_out.location.nominal = kcg_lit_int64(0);
  outC->BG_out.location.d_min = kcg_lit_int64(0);
  outC->BG_out.location.d_max = kcg_lit_int64(0);
  outC->BG_out.seqNoOnTrack = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.valid = kcg_true;
  outC->BG_out.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->BG_out.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->BG_out.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->BG_out.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->BG_out.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->BG_out.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->BG_out.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->BG_out.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.valid = kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.valid = kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->BG_out.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->BG_out.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->BG_out.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->BG_out.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->BG_out.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->BG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->BG_out.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->BG_out.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->BG_out.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx76 = 0; idx76 < 33; idx76++) {
    outC->BG_out.infoFromPassing.linkedBGs[idx76].valid = kcg_true;
    outC->BG_out.infoFromPassing.linkedBGs[idx76].nid_LRBG = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx76].q_dir = Q_DIR_Reverse;
    outC->BG_out.infoFromPassing.linkedBGs[idx76].q_scale = Q_SCALE_10_cm_scale;
    outC->BG_out.infoFromPassing.linkedBGs[idx76].d_link = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx76].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BG_out.infoFromPassing.linkedBGs[idx76].nid_c = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx76].nid_bg = kcg_lit_int64(0);
    outC->BG_out.infoFromPassing.linkedBGs[idx76].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BG_out.infoFromPassing.linkedBGs[idx76].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BG_out.infoFromPassing.linkedBGs[idx76].q_locacc = kcg_lit_int64(0);
  }
  outC->BG_out.missed = kcg_true;
  outC->refBGs_out.refBG.valid = kcg_true;
  outC->refBGs_out.refBG.nid_c = kcg_lit_int64(0);
  outC->refBGs_out.refBG.nid_bg = kcg_lit_int64(0);
  outC->refBGs_out.refBG.q_link = Q_LINK_Unlinked;
  outC->refBGs_out.refBG.location.nominal = kcg_lit_int64(0);
  outC->refBGs_out.refBG.location.d_min = kcg_lit_int64(0);
  outC->refBGs_out.refBG.location.d_max = kcg_lit_int64(0);
  outC->refBGs_out.refBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromLinking.valid = kcg_true;
  outC->refBGs_out.refBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(
      0);
  outC->refBGs_out.refBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(
      0);
  outC->refBGs_out.refBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->refBGs_out.refBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->refBGs_out.refBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->refBGs_out.refBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->refBGs_out.refBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->refBGs_out.refBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->refBGs_out.refBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.valid = kcg_true;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->refBGs_out.refBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx77 = 0; idx77 < 33; idx77++) {
    outC->refBGs_out.refBG.infoFromPassing.linkedBGs[idx77].valid = kcg_true;
    outC->refBGs_out.refBG.infoFromPassing.linkedBGs[idx77].nid_LRBG =
      kcg_lit_int64(0);
    outC->refBGs_out.refBG.infoFromPassing.linkedBGs[idx77].q_dir = Q_DIR_Reverse;
    outC->refBGs_out.refBG.infoFromPassing.linkedBGs[idx77].q_scale =
      Q_SCALE_10_cm_scale;
    outC->refBGs_out.refBG.infoFromPassing.linkedBGs[idx77].d_link =
      kcg_lit_int64(0);
    outC->refBGs_out.refBG.infoFromPassing.linkedBGs[idx77].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->refBGs_out.refBG.infoFromPassing.linkedBGs[idx77].nid_c =
      kcg_lit_int64(0);
    outC->refBGs_out.refBG.infoFromPassing.linkedBGs[idx77].nid_bg =
      kcg_lit_int64(0);
    outC->refBGs_out.refBG.infoFromPassing.linkedBGs[idx77].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->refBGs_out.refBG.infoFromPassing.linkedBGs[idx77].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->refBGs_out.refBG.infoFromPassing.linkedBGs[idx77].q_locacc =
      kcg_lit_int64(0);
  }
  outC->refBGs_out.refBG.missed = kcg_true;
  outC->refBGs_out.prevLinkedBG.valid = kcg_true;
  outC->refBGs_out.prevLinkedBG.nid_c = kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.nid_bg = kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.q_link = Q_LINK_Unlinked;
  outC->refBGs_out.prevLinkedBG.location.nominal = kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.location.d_min = kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.location.d_max = kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.valid = kcg_true;
  outC->refBGs_out.prevLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->refBGs_out.prevLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->refBGs_out.prevLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->refBGs_out.prevLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->refBGs_out.prevLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->refBGs_out.prevLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->refBGs_out.prevLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.valid = kcg_true;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(
      0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->refBGs_out.prevLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx78 = 0; idx78 < 33; idx78++) {
    outC->refBGs_out.prevLinkedBG.infoFromPassing.linkedBGs[idx78].valid = kcg_true;
    outC->refBGs_out.prevLinkedBG.infoFromPassing.linkedBGs[idx78].nid_LRBG =
      kcg_lit_int64(0);
    outC->refBGs_out.prevLinkedBG.infoFromPassing.linkedBGs[idx78].q_dir =
      Q_DIR_Reverse;
    outC->refBGs_out.prevLinkedBG.infoFromPassing.linkedBGs[idx78].q_scale =
      Q_SCALE_10_cm_scale;
    outC->refBGs_out.prevLinkedBG.infoFromPassing.linkedBGs[idx78].d_link =
      kcg_lit_int64(0);
    outC->refBGs_out.prevLinkedBG.infoFromPassing.linkedBGs[idx78].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->refBGs_out.prevLinkedBG.infoFromPassing.linkedBGs[idx78].nid_c =
      kcg_lit_int64(0);
    outC->refBGs_out.prevLinkedBG.infoFromPassing.linkedBGs[idx78].nid_bg =
      kcg_lit_int64(0);
    outC->refBGs_out.prevLinkedBG.infoFromPassing.linkedBGs[idx78].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->refBGs_out.prevLinkedBG.infoFromPassing.linkedBGs[idx78].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->refBGs_out.prevLinkedBG.infoFromPassing.linkedBGs[idx78].q_locacc =
      kcg_lit_int64(0);
  }
  outC->refBGs_out.prevLinkedBG.missed = kcg_true;
  outC->refBGs_out.prevUnlinkedBG.valid = kcg_true;
  outC->refBGs_out.prevUnlinkedBG.nid_c = kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.nid_bg = kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->refBGs_out.prevUnlinkedBG.location.nominal = kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.location.d_min = kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.location.d_max = kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->refBGs_out.prevUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->refBGs_out.prevUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx79 = 0; idx79 < 33; idx79++) {
    outC->refBGs_out.prevUnlinkedBG.infoFromPassing.linkedBGs[idx79].valid =
      kcg_true;
    outC->refBGs_out.prevUnlinkedBG.infoFromPassing.linkedBGs[idx79].nid_LRBG =
      kcg_lit_int64(0);
    outC->refBGs_out.prevUnlinkedBG.infoFromPassing.linkedBGs[idx79].q_dir =
      Q_DIR_Reverse;
    outC->refBGs_out.prevUnlinkedBG.infoFromPassing.linkedBGs[idx79].q_scale =
      Q_SCALE_10_cm_scale;
    outC->refBGs_out.prevUnlinkedBG.infoFromPassing.linkedBGs[idx79].d_link =
      kcg_lit_int64(0);
    outC->refBGs_out.prevUnlinkedBG.infoFromPassing.linkedBGs[idx79].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->refBGs_out.prevUnlinkedBG.infoFromPassing.linkedBGs[idx79].nid_c =
      kcg_lit_int64(0);
    outC->refBGs_out.prevUnlinkedBG.infoFromPassing.linkedBGs[idx79].nid_bg =
      kcg_lit_int64(0);
    outC->refBGs_out.prevUnlinkedBG.infoFromPassing.linkedBGs[idx79].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->refBGs_out.prevUnlinkedBG.infoFromPassing.linkedBGs[idx79].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->refBGs_out.prevUnlinkedBG.infoFromPassing.linkedBGs[idx79].q_locacc =
      kcg_lit_int64(0);
  }
  outC->refBGs_out.prevUnlinkedBG.missed = kcg_true;
  outC->refBGs_out.recalculate = kcg_true;
  outC->refBGs_out.sumOfBestDistances.nominal = kcg_lit_int64(0);
  outC->refBGs_out.sumOfBestDistances.d_min = kcg_lit_int64(0);
  outC->refBGs_out.sumOfBestDistances.d_max = kcg_lit_int64(0);
  /* _L97=(BasicLocationFunctions_Pkg::sub_2_distances#2)/ */
  sub_2_distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_2);
  /* _L132=(BasicLocationFunctions_Pkg::sub_2_distances#3)/ */
  sub_2_distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_3);
  /* _L300=(BasicLocationFunctions_Pkg::add_2_Distances#12)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_12);
  /* _L127=(BasicLocationFunctions_Pkg::sub_2_odoDistances#3)/ */
  sub_2_odoDistances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_3);
  /* _L289=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead#1)/ */
  recalculate_BG_location_ahead_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_recalculate_BG_location_ahead_1);
  /* _L288=(BasicLocationFunctions_Pkg::sub_2_distances#4)/ */
  sub_2_distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_4);
  /* _L297=(BasicLocationFunctions_Pkg::add_2_Distances#9)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_9);
  /* _L92=(BasicLocationFunctions_Pkg::sub_2_odoDistances#2)/ */
  sub_2_odoDistances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_2);
  /* _L67=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#3)/ */
  positionedBGs_ids_equal_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_equal_3);
  /* _L302=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L219=(BasicLocationFunctions_Pkg::add_2_Distances#6)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_6);
  /* _L220=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies)/ */
  calculateLocalBGInaccuracies_init_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_calculateLocalBGInaccuracies);
  /* _L255=(BasicLocationFunctions_Pkg::add_2_Distances#7)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_7);
  /* _L280=(BasicLocationFunctions_Pkg::add_2_Distances#8)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_8);
  /* _L279=(BasicLocationFunctions_Pkg::sub_2_odoDistances#4)/ */
  sub_2_odoDistances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void recalculate_BG_locations_ahead_itr_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  outC_recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg *outC)
{
  /* _L97=(BasicLocationFunctions_Pkg::sub_2_distances#2)/ */
  sub_2_distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_2);
  /* _L132=(BasicLocationFunctions_Pkg::sub_2_distances#3)/ */
  sub_2_distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_3);
  /* _L300=(BasicLocationFunctions_Pkg::add_2_Distances#12)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_12);
  /* _L127=(BasicLocationFunctions_Pkg::sub_2_odoDistances#3)/ */
  sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_3);
  /* _L289=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::recalculate_BG_location_ahead#1)/ */
  recalculate_BG_location_ahead_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_recalculate_BG_location_ahead_1);
  /* _L288=(BasicLocationFunctions_Pkg::sub_2_distances#4)/ */
  sub_2_distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_distances_4);
  /* _L297=(BasicLocationFunctions_Pkg::add_2_Distances#9)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_9);
  /* _L92=(BasicLocationFunctions_Pkg::sub_2_odoDistances#2)/ */
  sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_2);
  /* _L67=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionedBGs_ids_equal#3)/ */
  positionedBGs_ids_equal_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionedBGs_ids_equal_3);
  /* _L302=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#1)/ */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_1);
  /* _L219=(BasicLocationFunctions_Pkg::add_2_Distances#6)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_6);
  /* _L220=(CalculateTrainPosition_Pkg::BG_relocation_Pkg::calculateLocalBGInaccuracies)/ */
  calculateLocalBGInaccuracies_reset_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
    &outC->Context_calculateLocalBGInaccuracies);
  /* _L255=(BasicLocationFunctions_Pkg::add_2_Distances#7)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_7);
  /* _L280=(BasicLocationFunctions_Pkg::add_2_Distances#8)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_8);
  /* _L279=(BasicLocationFunctions_Pkg::sub_2_odoDistances#4)/ */
  sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** recalculate_BG_locations_ahead_itr_CalculateTrainPosition_Pkg_BG_relocation_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

