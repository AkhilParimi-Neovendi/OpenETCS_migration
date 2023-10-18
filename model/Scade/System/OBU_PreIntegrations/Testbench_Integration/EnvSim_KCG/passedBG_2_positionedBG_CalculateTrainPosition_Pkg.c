/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "passedBG_2_positionedBG_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::passedBG_2_positionedBG/ */
void passedBG_2_positionedBG_CalculateTrainPosition_Pkg(
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* passedBG_asAnnounced/ */
  positionedBG_T_TrainPosition_Types_Pck *passedBG_asAnnounced,
  /* previouslyPassedLinkedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *previouslyPassedLinkedBG,
  /* passedBGSeqNo/ */
  kcg_int64 passedBGSeqNo,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg *outC)
{
  /* foundNotWhereAnnounced/ */
  static kcg_bool foundNotWhereAnnounced_partial;
  /* location/ */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg location_partial;
  /* foundNotWhereAnnounced_loc/ */
  static kcg_bool foundNotWhereAnnounced_loc_partial;
  static kcg_bool noname;
  /* foundNotWhereAnnounced/ */
  static kcg_bool _1_foundNotWhereAnnounced_partial;
  /* location/ */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _2_location_partial;
  /* foundNotWhereAnnounced_loc/ */
  static kcg_bool _3_foundNotWhereAnnounced_loc_partial;
  /* foundNotWhereAnnounced/ */
  static kcg_bool _4_foundNotWhereAnnounced_partial;
  /* location/ */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _5_location_partial;
  /* foundNotWhereAnnounced_loc/ */
  static kcg_bool _6_foundNotWhereAnnounced_loc_partial;
  /* foundNotWhereAnnounced/ */
  static kcg_bool _7_foundNotWhereAnnounced_partial;
  /* location/ */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _8_location_partial;
  /* foundNotWhereAnnounced_loc/ */
  static kcg_bool _9_foundNotWhereAnnounced_loc_partial;
  static kcg_bool _10_noname;
  /* foundNotWhereAnnounced_loc/ */
  static kcg_bool _11_foundNotWhereAnnounced_loc_partial;
  /* location/ */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _12_location_partial;
  /* foundNotWhereAnnounced/ */
  static kcg_bool _13_foundNotWhereAnnounced_partial;
  static kcg_bool _14_noname;
  /* foundNotWhereAnnounced_loc/ */
  static kcg_bool _15_foundNotWhereAnnounced_loc_partial;
  /* location/ */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _16_location_partial;
  /* foundNotWhereAnnounced/ */
  static kcg_bool _17_foundNotWhereAnnounced_partial;

  outC->_L327 = kcg_false;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L307,
    passedBG_asAnnounced);
  outC->_L309 = outC->_L307.infoFromLinking.linkingInfo.q_linkorientation;
  outC->_L310 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L319 = outC->_L310 == outC->_L309;
  outC->_L312 = Q_DIRLRBG_Reverse;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L306, passedBG);
  outC->_L308 = outC->_L306.BG_Header.trainOrientationToBG;
  outC->_L318 = outC->_L308 == outC->_L312;
  outC->_L320 = outC->_L318 & outC->_L319;
  outC->_L311 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction;
  outC->_L316 = outC->_L311 == outC->_L309;
  outC->_L313 = Q_DIRLRBG_Nominal;
  outC->_L315 = outC->_L313 == outC->_L308;
  outC->_L317 = outC->_L315 & outC->_L316;
  outC->_L321 = outC->_L317 | outC->_L320;
  outC->_L322 = !outC->_L321;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L58, passedBG);
  outC->_L305 = outC->_L58.BG_Header.valid;
  outC->_L301 = outC->_L58.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L41,
    passedBG_asAnnounced);
  outC->_L181 = outC->_L41.infoFromLinking.valid;
  outC->_L65 = outC->_L58.BG_Header.q_link;
  outC->_L64 = outC->_L41.q_link;
  outC->_L66 = outC->_L64 == outC->_L65;
  outC->_L303 = Q_LINK_Linked;
  outC->_L302 = outC->_L303 == outC->_L64;
  outC->_L62 = outC->_L58.BG_Header.nid_c;
  outC->_L61 = outC->_L41.nid_c;
  outC->_L63 = outC->_L61 == outC->_L62;
  outC->_L59 = outC->_L58.BG_Header.nid_bg;
  outC->_L57 = outC->_L41.nid_bg;
  outC->_L60 = outC->_L57 == outC->_L59;
  outC->_L56 = outC->_L41.valid;
  outC->_L67 = outC->_L56 & outC->_L60 & outC->_L63 & outC->_L302 & outC->_L66 &
    outC->_L181 & outC->_L301 & outC->_L305;
  outC->BG_wasAnnounced = outC->_L67;
  outC->_L297 = outC->BG_wasAnnounced;
  outC->BGpassedInUnexpectedDirection_loc = outC->_L297 & outC->_L322;
  outC->_L325 = outC->BGpassedInUnexpectedDirection_loc;
  outC->ifAnnouncedOrABGWasPreviouslyPassed_clock = (!outC->BG_wasAnnounced) &
    (!(*previouslyPassedLinkedBG).valid);
  /* ifAnnouncedOrABGWasPreviouslyPassed: */
  if (outC->ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    foundNotWhereAnnounced_loc_partial = kcg_false;
    outC->foundNotWhereAnnounced_loc = foundNotWhereAnnounced_loc_partial;
  }
  else {
    outC->else_clock_ifAnnouncedOrABGWasPreviouslyPassed =
      (!outC->BG_wasAnnounced) & (*previouslyPassedLinkedBG).valid;
    /* ifAnnouncedOrABGWasPreviouslyPassed:else: */
    if (outC->else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      _15_foundNotWhereAnnounced_loc_partial = kcg_false;
      _3_foundNotWhereAnnounced_loc_partial = _15_foundNotWhereAnnounced_loc_partial;
    }
    else {
      outC->else_clock_else_ifAnnouncedOrABGWasPreviouslyPassed =
        outC->BG_wasAnnounced & (!(*previouslyPassedLinkedBG).valid);
      /* ifAnnouncedOrABGWasPreviouslyPassed:else:else: */
      if (outC->else_clock_else_ifAnnouncedOrABGWasPreviouslyPassed) {
        _6_foundNotWhereAnnounced_loc_partial = kcg_false;
        _11_foundNotWhereAnnounced_loc_partial = _6_foundNotWhereAnnounced_loc_partial;
      }
      else {
        kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
          &outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          passedBG_asAnnounced);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L14_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location);
        kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
          &outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          previouslyPassedLinkedBG);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L8_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location);
        kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
          &outC->_L3_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo);
        kcg_copy_passedBG_T_BG_Types_Pkg(
          &outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          passedBG);
        kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
          &outC->_L6_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo);
        /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L2=(BasicLocationFunctions_Pkg::add_odo_2_Location#6)/ */
        add_odo_2_Location_BasicLocationFunctions_Pkg(
          &outC->_L8_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L3_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L6_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_add_odo_2_Location_6);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L2_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_add_odo_2_Location_6.location);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L4_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies);
        /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L1=(BasicLocationFunctions_Pkg::add_2_Distances#14)/ */
        add_2_Distances_BasicLocationFunctions_Pkg(
          &outC->_L2_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L4_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_add_2_Distances_14);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L1_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_add_2_Distances_14.distance);
        /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L9=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#3)/ */
        overlapOf_2_Locations_BasicLocationFunctions_Pkg(
          &outC->_L14_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L1_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_overlapOf_2_Locations_3);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L9_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_overlapOf_2_Locations_3.loc);
        outC->_L10_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed =
          outC->Context_overlapOf_2_Locations_3.overlap;
        outC->_L12_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed =
          !outC->_L10_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
        _9_foundNotWhereAnnounced_loc_partial =
          outC->_L12_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
        _11_foundNotWhereAnnounced_loc_partial = _9_foundNotWhereAnnounced_loc_partial;
      }
      _3_foundNotWhereAnnounced_loc_partial = _11_foundNotWhereAnnounced_loc_partial;
    }
    outC->foundNotWhereAnnounced_loc = _3_foundNotWhereAnnounced_loc_partial;
  }
  outC->_L284 = outC->foundNotWhereAnnounced_loc;
  outC->_L326 = outC->_L284 | outC->_L325;
  outC->BGpassedInUnexpectedDirection = outC->BGpassedInUnexpectedDirection_loc;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L15, passedBG);
  outC->_L296 = outC->_L15.valid;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L295, &outC->_L15.BG_Header);
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &outC->_L285,
    (passedBG_T_BG_Types_Pkg *) &cNoPassedBG_CalculateTrainPosition_Pkg);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L16, passedBG);
  /* _L283= */
  if (outC->_L326) {
    kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L283, &outC->_L285);
  }
  else {
    kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L283, &outC->_L16);
  }
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L282,
    trainProperties);
  outC->_L281 = passedBGSeqNo;
  outC->_L37 = outC->_L295.nid_c;
  outC->_L38 = outC->_L295.nid_bg;
  outC->_L39 = outC->_L295.q_link;
  /* ifAnnouncedOrABGWasPreviouslyPassed: */
  if (outC->ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    kcg_copy_passedBG_T_BG_Types_Pkg(
      &outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed,
      passedBG);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L21_then_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L20_then_ifAnnouncedOrABGWasPreviouslyPassed,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cOdometryInitialValue_Obu_BasicTypes_Pkg);
    /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L24=(BasicLocationFunctions_Pkg::sub_2_odoDistances#8)/ */
    sub_2_odoDistances_BasicLocationFunctions_Pkg(
      &outC->_L21_then_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->_L20_then_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_sub_2_odoDistances_8);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L24_then_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_sub_2_odoDistances_8.distance);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L25_then_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies);
    /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L22=(BasicLocationFunctions_Pkg::add_2_Distances#9)/ */
    add_2_Distances_BasicLocationFunctions_Pkg(
      &outC->_L24_then_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->_L25_then_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_add_2_Distances_9);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L22_then_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_add_2_Distances_9.distance);
    /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L26=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#4)/ */
    overlapOf_2_Locations_BasicLocationFunctions_Pkg(
      &outC->_L22_then_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->_L22_then_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_overlapOf_2_Locations_4);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L26_then_ifAnnouncedOrABGWasPreviouslyPassed,
      &outC->Context_overlapOf_2_Locations_4.loc);
    outC->_L27_then_ifAnnouncedOrABGWasPreviouslyPassed =
      outC->Context_overlapOf_2_Locations_4.overlap;
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &location_partial,
      &outC->_L26_then_ifAnnouncedOrABGWasPreviouslyPassed);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->location, &location_partial);
  }
  else {
    /* ifAnnouncedOrABGWasPreviouslyPassed:else: */
    if (outC->else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        previouslyPassedLinkedBG);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &outC->_L7_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.location);
      kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
        &outC->_L11_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo);
      kcg_copy_passedBG_T_BG_Types_Pkg(
        &outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        passedBG);
      kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
        &outC->_L9_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo);
      /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L6=(BasicLocationFunctions_Pkg::add_odo_2_Location#5)/ */
      add_odo_2_Location_BasicLocationFunctions_Pkg(
        &outC->_L7_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L11_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L9_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->Context_add_odo_2_Location_5);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &outC->_L6_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->Context_add_odo_2_Location_5.location);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &outC->_L13_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies);
      /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L8=(BasicLocationFunctions_Pkg::add_2_Distances#13)/ */
      add_2_Distances_BasicLocationFunctions_Pkg(
        &outC->_L6_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L13_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->Context_add_2_Distances_13);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &outC->_L8_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->Context_add_2_Distances_13.distance);
      /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L14=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#5)/ */
      overlapOf_2_Locations_BasicLocationFunctions_Pkg(
        &outC->_L8_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->_L8_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->Context_overlapOf_2_Locations_5);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &outC->_L14_then_else_ifAnnouncedOrABGWasPreviouslyPassed,
        &outC->Context_overlapOf_2_Locations_5.loc);
      outC->_L15_then_else_ifAnnouncedOrABGWasPreviouslyPassed =
        outC->Context_overlapOf_2_Locations_5.overlap;
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &_16_location_partial,
        &outC->_L14_then_else_ifAnnouncedOrABGWasPreviouslyPassed);
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &_2_location_partial,
        &_16_location_partial);
    }
    else {
      /* ifAnnouncedOrABGWasPreviouslyPassed:else:else: */
      if (outC->else_clock_else_ifAnnouncedOrABGWasPreviouslyPassed) {
        kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
          &outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          passedBG_asAnnounced);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L2_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_5_location_partial,
          &outC->_L2_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_12_location_partial,
          &_5_location_partial);
      }
      else {
        /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L15=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#6)/ */
        overlapOf_2_Locations_BasicLocationFunctions_Pkg(
          &outC->_L14_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->_L14_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_overlapOf_2_Locations_6);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &outC->_L15_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
          &outC->Context_overlapOf_2_Locations_6.loc);
        outC->_L16_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed =
          outC->Context_overlapOf_2_Locations_6.overlap;
        /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L5= */
        if (outC->_L10_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed) {
          kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &outC->_L5_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
            &outC->_L9_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed);
        }
        else {
          kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
            &outC->_L5_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed,
            &outC->_L15_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed);
        }
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_8_location_partial,
          &outC->_L5_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed);
        kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
          &_12_location_partial,
          &_8_location_partial);
      }
      kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &_2_location_partial,
        &_12_location_partial);
    }
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->location,
      &_2_location_partial);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L182, &outC->location);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L185,
    (infoFromLinking_T_TrainPosition_Types_Pck *)
      &cNoInfoFromLinking_CalculateTrainPosition_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L40,
    passedBG_asAnnounced);
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L183,
    &outC->_L40.infoFromLinking);
  outC->_L68 = outC->BG_wasAnnounced;
  /* _L184= */
  if (outC->_L68) {
    kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(&outC->_L184, &outC->_L183);
  }
  else {
    kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(&outC->_L184, &outC->_L185);
  }
  outC->_L14.valid = outC->_L296;
  outC->_L14.nid_c = outC->_L37;
  outC->_L14.nid_bg = outC->_L38;
  outC->_L14.q_link = outC->_L39;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L14.location, &outC->_L182);
  outC->_L14.seqNoOnTrack = outC->_L281;
  kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(
    &outC->_L14.infoFromLinking,
    &outC->_L184);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L14.infoFromPassing, &outC->_L283);
  outC->_L14.missed = outC->_L327;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedPositionedBG_loc,
    &outC->_L14);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L262,
    &outC->passedPositionedBG_loc);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L264, passedBG);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->_L263, &outC->_L264.linkedBGs);
  /* _L265=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs#1)/ */
  positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->_L262,
    &outC->_L263,
    &outC->_L282,
    &outC->Context_positionLinkedBGs_1);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L265,
    &outC->Context_positionLinkedBGs_1.linkedPositionedBGs);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->linkedBGs,
    &outC->_L265);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->passedPositionedBG,
    &outC->_L14);
  /* ifAnnouncedOrABGWasPreviouslyPassed: */
  if (outC->ifAnnouncedOrABGWasPreviouslyPassed_clock) {
    foundNotWhereAnnounced_partial = kcg_false;
    noname = outC->_L27_then_ifAnnouncedOrABGWasPreviouslyPassed;
    outC->foundNotWhereAnnounced = foundNotWhereAnnounced_partial;
  }
  else {
    /* ifAnnouncedOrABGWasPreviouslyPassed:else: */
    if (outC->else_clock_ifAnnouncedOrABGWasPreviouslyPassed) {
      _17_foundNotWhereAnnounced_partial = kcg_false;
      _14_noname = outC->_L15_then_else_ifAnnouncedOrABGWasPreviouslyPassed;
      _1_foundNotWhereAnnounced_partial = _17_foundNotWhereAnnounced_partial;
    }
    else {
      /* ifAnnouncedOrABGWasPreviouslyPassed:else:else: */
      if (outC->else_clock_else_ifAnnouncedOrABGWasPreviouslyPassed) {
        _4_foundNotWhereAnnounced_partial = kcg_false;
        _13_foundNotWhereAnnounced_partial = _4_foundNotWhereAnnounced_partial;
      }
      else {
        _10_noname = outC->_L16_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
        _7_foundNotWhereAnnounced_partial =
          outC->_L12_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed;
        _13_foundNotWhereAnnounced_partial = _7_foundNotWhereAnnounced_partial;
      }
      _1_foundNotWhereAnnounced_partial = _13_foundNotWhereAnnounced_partial;
    }
    outC->foundNotWhereAnnounced = _1_foundNotWhereAnnounced_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void passedBG_2_positionedBG_init_CalculateTrainPosition_Pkg(
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg *outC)
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

  outC->_L327 = kcg_true;
  outC->_L326 = kcg_true;
  outC->_L325 = kcg_true;
  outC->_L322 = kcg_true;
  outC->_L321 = kcg_true;
  outC->_L320 = kcg_true;
  outC->_L319 = kcg_true;
  outC->_L318 = kcg_true;
  outC->_L317 = kcg_true;
  outC->_L316 = kcg_true;
  outC->_L315 = kcg_true;
  outC->_L313 = Q_DIRLRBG_Reverse;
  outC->_L312 = Q_DIRLRBG_Reverse;
  outC->_L311 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L310 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L309 =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L308 = Q_DIRLRBG_Reverse;
  outC->_L307.valid = kcg_true;
  outC->_L307.nid_c = kcg_lit_int64(0);
  outC->_L307.nid_bg = kcg_lit_int64(0);
  outC->_L307.q_link = Q_LINK_Unlinked;
  outC->_L307.location.nominal = kcg_lit_int64(0);
  outC->_L307.location.d_min = kcg_lit_int64(0);
  outC->_L307.location.d_max = kcg_lit_int64(0);
  outC->_L307.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.valid = kcg_true;
  outC->_L307.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L307.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L307.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L307.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L307.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L307.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L307.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L307.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L307.infoFromPassing.valid = kcg_true;
  outC->_L307.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L307.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L307.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L307.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L307.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L307.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L307.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L307.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L307.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L307.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L307.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L307.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L307.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L307.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L307.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L307.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L307.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L307.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L307.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L307.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L307.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L307.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L307.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L307.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L307.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L307.missed = kcg_true;
  outC->_L306.valid = kcg_true;
  outC->_L306.BG_Header.valid = kcg_true;
  outC->_L306.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L306.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L306.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L306.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L306.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L306.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L306.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L306.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L306.BG_Header.bgPosition.valid = kcg_true;
  outC->_L306.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L306.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L306.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L306.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L306.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L306.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L306.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L306.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L306.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L306.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L306.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L306.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L306.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L306.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L306.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L306.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L306.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L306.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L306.linkedBGs[idx1].valid = kcg_true;
    outC->_L306.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L306.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L306.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L306.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L306.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L306.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L306.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L306.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L306.linkedBGs[idx1].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L306.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L305 = kcg_true;
  outC->_L303 = Q_LINK_Unlinked;
  outC->_L302 = kcg_true;
  outC->_L301 = kcg_true;
  outC->_L297 = kcg_true;
  outC->_L296 = kcg_true;
  outC->_L295.valid = kcg_true;
  outC->_L295.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L295.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L295.q_media = Q_MEDIA_Balise;
  outC->_L295.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L295.m_mcount = kcg_lit_int64(0);
  outC->_L295.nid_c = kcg_lit_int64(0);
  outC->_L295.nid_bg = kcg_lit_int64(0);
  outC->_L295.q_link = Q_LINK_Unlinked;
  outC->_L295.bgPosition.valid = kcg_true;
  outC->_L295.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L295.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L295.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L295.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L295.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L295.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L295.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L295.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L295.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L295.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L295.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L295.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L295.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L295.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L295.q_nvlocacc = kcg_lit_int64(0);
  outC->_L295.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L295.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L295.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L285.valid = kcg_true;
  outC->_L285.BG_Header.valid = kcg_true;
  outC->_L285.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L285.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L285.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L285.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L285.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L285.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L285.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L285.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L285.BG_Header.bgPosition.valid = kcg_true;
  outC->_L285.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L285.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L285.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L285.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L285.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L285.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L285.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L285.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L285.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L285.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L285.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L285.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L285.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L285.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L285.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L285.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L285.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L285.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L285.linkedBGs[idx2].valid = kcg_true;
    outC->_L285.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L285.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L285.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L285.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L285.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L285.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L285.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L285.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L285.linkedBGs[idx2].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L285.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L284 = kcg_true;
  outC->_L283.valid = kcg_true;
  outC->_L283.BG_Header.valid = kcg_true;
  outC->_L283.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L283.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L283.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L283.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L283.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L283.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L283.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L283.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L283.BG_Header.bgPosition.valid = kcg_true;
  outC->_L283.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L283.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L283.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L283.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L283.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L283.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L283.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L283.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L283.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L283.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L283.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L283.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L283.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L283.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L283.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L283.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L283.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L283.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L283.linkedBGs[idx3].valid = kcg_true;
    outC->_L283.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L283.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L283.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L283.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L283.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L283.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L283.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L283.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L283.linkedBGs[idx3].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L283.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L282.nid_engine = kcg_lit_int64(0);
  outC->_L282.nid_operational = kcg_lit_int64(0);
  outC->_L282.l_train = kcg_lit_int64(0);
  outC->_L282.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L282.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L282.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L282.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L282.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L282.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L282.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L282.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L282.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L282.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L282.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L282.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L281 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L265[idx5].valid = kcg_true;
    outC->_L265[idx5].nid_c = kcg_lit_int64(0);
    outC->_L265[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L265[idx5].q_link = Q_LINK_Unlinked;
    outC->_L265[idx5].location.nominal = kcg_lit_int64(0);
    outC->_L265[idx5].location.d_min = kcg_lit_int64(0);
    outC->_L265[idx5].location.d_max = kcg_lit_int64(0);
    outC->_L265[idx5].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.valid = kcg_true;
    outC->_L265[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L265[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L265[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L265[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L265[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L265[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L265[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.valid = kcg_true;
    outC->_L265[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L265[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L265[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L265[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L265[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L265[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L265[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L265[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L265[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L265[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L265[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L265[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L265[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
      outC->_L265[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L265[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L265[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
      outC->_L265[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L265[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
      outC->_L265[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
      outC->_L265[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L265[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L265[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
    }
    outC->_L265[idx5].missed = kcg_true;
  }
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L263[idx6].valid = kcg_true;
    outC->_L263[idx6].nid_LRBG = kcg_lit_int64(0);
    outC->_L263[idx6].q_dir = Q_DIR_Reverse;
    outC->_L263[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L263[idx6].d_link = kcg_lit_int64(0);
    outC->_L263[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L263[idx6].nid_c = kcg_lit_int64(0);
    outC->_L263[idx6].nid_bg = kcg_lit_int64(0);
    outC->_L263[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L263[idx6].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L263[idx6].q_locacc = kcg_lit_int64(0);
  }
  outC->_L264.valid = kcg_true;
  outC->_L264.BG_Header.valid = kcg_true;
  outC->_L264.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L264.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L264.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L264.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L264.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L264.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L264.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L264.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L264.BG_Header.bgPosition.valid = kcg_true;
  outC->_L264.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L264.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L264.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L264.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L264.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L264.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L264.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L264.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L264.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L264.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L264.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L264.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L264.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L264.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L264.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L264.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L264.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L264.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L264.linkedBGs[idx7].valid = kcg_true;
    outC->_L264.linkedBGs[idx7].nid_LRBG = kcg_lit_int64(0);
    outC->_L264.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L264.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L264.linkedBGs[idx7].d_link = kcg_lit_int64(0);
    outC->_L264.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L264.linkedBGs[idx7].nid_c = kcg_lit_int64(0);
    outC->_L264.linkedBGs[idx7].nid_bg = kcg_lit_int64(0);
    outC->_L264.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L264.linkedBGs[idx7].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L264.linkedBGs[idx7].q_locacc = kcg_lit_int64(0);
  }
  outC->_L262.valid = kcg_true;
  outC->_L262.nid_c = kcg_lit_int64(0);
  outC->_L262.nid_bg = kcg_lit_int64(0);
  outC->_L262.q_link = Q_LINK_Unlinked;
  outC->_L262.location.nominal = kcg_lit_int64(0);
  outC->_L262.location.d_min = kcg_lit_int64(0);
  outC->_L262.location.d_max = kcg_lit_int64(0);
  outC->_L262.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.valid = kcg_true;
  outC->_L262.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L262.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L262.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L262.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L262.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L262.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L262.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L262.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L262.infoFromPassing.valid = kcg_true;
  outC->_L262.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L262.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L262.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L262.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L262.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L262.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L262.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L262.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(
      0);
  outC->_L262.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L262.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L262.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L262.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L262.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L262.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L262.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L262.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int64(0);
    outC->_L262.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L262.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L262.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int64(0);
    outC->_L262.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L262.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int64(0);
    outC->_L262.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int64(0);
    outC->_L262.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L262.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L262.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int64(0);
  }
  outC->_L262.missed = kcg_true;
  outC->_L185.valid = kcg_true;
  outC->_L185.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L185.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L185.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L185.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L185.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L185.d_link.nominal = kcg_lit_int64(0);
  outC->_L185.d_link.d_min = kcg_lit_int64(0);
  outC->_L185.d_link.d_max = kcg_lit_int64(0);
  outC->_L185.linkingInfo.valid = kcg_true;
  outC->_L185.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L185.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L185.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L185.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L185.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L185.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L185.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L185.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L185.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L185.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L184.valid = kcg_true;
  outC->_L184.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L184.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L184.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L184.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L184.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L184.d_link.nominal = kcg_lit_int64(0);
  outC->_L184.d_link.d_min = kcg_lit_int64(0);
  outC->_L184.d_link.d_max = kcg_lit_int64(0);
  outC->_L184.linkingInfo.valid = kcg_true;
  outC->_L184.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L184.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L184.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L184.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L184.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L184.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L184.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L184.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L184.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L184.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L183.valid = kcg_true;
  outC->_L183.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L183.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L183.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L183.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L183.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L183.d_link.nominal = kcg_lit_int64(0);
  outC->_L183.d_link.d_min = kcg_lit_int64(0);
  outC->_L183.d_link.d_max = kcg_lit_int64(0);
  outC->_L183.linkingInfo.valid = kcg_true;
  outC->_L183.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L183.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L183.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L183.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L183.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L183.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L183.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L183.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L183.linkingInfo.q_linkreaction = Q_LINKREACTION_Train_trip;
  outC->_L183.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L182.nominal = kcg_lit_int64(0);
  outC->_L182.d_min = kcg_lit_int64(0);
  outC->_L182.d_max = kcg_lit_int64(0);
  outC->_L181 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L65 = Q_LINK_Unlinked;
  outC->_L64 = Q_LINK_Unlinked;
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_lit_int64(0);
  outC->_L61 = kcg_lit_int64(0);
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_lit_int64(0);
  outC->_L58.valid = kcg_true;
  outC->_L58.BG_Header.valid = kcg_true;
  outC->_L58.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L58.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L58.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L58.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L58.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L58.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L58.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L58.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L58.BG_Header.bgPosition.valid = kcg_true;
  outC->_L58.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L58.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L58.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L58.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L58.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L58.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L58.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L58.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L58.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L58.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L58.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L58.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L58.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L58.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L58.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L58.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L58.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L58.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L58.linkedBGs[idx9].valid = kcg_true;
    outC->_L58.linkedBGs[idx9].nid_LRBG = kcg_lit_int64(0);
    outC->_L58.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L58.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L58.linkedBGs[idx9].d_link = kcg_lit_int64(0);
    outC->_L58.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L58.linkedBGs[idx9].nid_c = kcg_lit_int64(0);
    outC->_L58.linkedBGs[idx9].nid_bg = kcg_lit_int64(0);
    outC->_L58.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L58.linkedBGs[idx9].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L58.linkedBGs[idx9].q_locacc = kcg_lit_int64(0);
  }
  outC->_L57 = kcg_lit_int64(0);
  outC->_L56 = kcg_true;
  outC->_L41.valid = kcg_true;
  outC->_L41.nid_c = kcg_lit_int64(0);
  outC->_L41.nid_bg = kcg_lit_int64(0);
  outC->_L41.q_link = Q_LINK_Unlinked;
  outC->_L41.location.nominal = kcg_lit_int64(0);
  outC->_L41.location.d_min = kcg_lit_int64(0);
  outC->_L41.location.d_max = kcg_lit_int64(0);
  outC->_L41.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.valid = kcg_true;
  outC->_L41.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L41.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L41.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L41.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L41.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L41.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L41.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L41.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L41.infoFromPassing.valid = kcg_true;
  outC->_L41.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L41.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L41.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L41.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L41.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L41.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L41.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L41.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L41.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L41.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L41.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L41.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L41.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L41.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->_L41.infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int64(0);
    outC->_L41.infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
    outC->_L41.infoFromPassing.linkedBGs[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L41.infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int64(0);
    outC->_L41.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L41.infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int64(0);
    outC->_L41.infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int64(0);
    outC->_L41.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L41.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L41.infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int64(0);
  }
  outC->_L41.missed = kcg_true;
  outC->_L40.valid = kcg_true;
  outC->_L40.nid_c = kcg_lit_int64(0);
  outC->_L40.nid_bg = kcg_lit_int64(0);
  outC->_L40.q_link = Q_LINK_Unlinked;
  outC->_L40.location.nominal = kcg_lit_int64(0);
  outC->_L40.location.d_min = kcg_lit_int64(0);
  outC->_L40.location.d_max = kcg_lit_int64(0);
  outC->_L40.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.valid = kcg_true;
  outC->_L40.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L40.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L40.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L40.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L40.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L40.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L40.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L40.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L40.infoFromPassing.valid = kcg_true;
  outC->_L40.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L40.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L40.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L40.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L40.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L40.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L40.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L40.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L40.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L40.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L40.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L40.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L40.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L40.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L40.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L40.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L40.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L40.infoFromPassing.linkedBGs[idx11].nid_LRBG = kcg_lit_int64(0);
    outC->_L40.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
    outC->_L40.infoFromPassing.linkedBGs[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L40.infoFromPassing.linkedBGs[idx11].d_link = kcg_lit_int64(0);
    outC->_L40.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L40.infoFromPassing.linkedBGs[idx11].nid_c = kcg_lit_int64(0);
    outC->_L40.infoFromPassing.linkedBGs[idx11].nid_bg = kcg_lit_int64(0);
    outC->_L40.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L40.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L40.infoFromPassing.linkedBGs[idx11].q_locacc = kcg_lit_int64(0);
  }
  outC->_L40.missed = kcg_true;
  outC->_L39 = Q_LINK_Unlinked;
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L16.valid = kcg_true;
  outC->_L16.BG_Header.valid = kcg_true;
  outC->_L16.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L16.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L16.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L16.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L16.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L16.BG_Header.bgPosition.valid = kcg_true;
  outC->_L16.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L16.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L16.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L16.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L16.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L16.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L16.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L16.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L16.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L16.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L16.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L16.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L16.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L16.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L16.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L16.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L16.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->_L16.linkedBGs[idx12].valid = kcg_true;
    outC->_L16.linkedBGs[idx12].nid_LRBG = kcg_lit_int64(0);
    outC->_L16.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
    outC->_L16.linkedBGs[idx12].q_scale = Q_SCALE_10_cm_scale;
    outC->_L16.linkedBGs[idx12].d_link = kcg_lit_int64(0);
    outC->_L16.linkedBGs[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L16.linkedBGs[idx12].nid_c = kcg_lit_int64(0);
    outC->_L16.linkedBGs[idx12].nid_bg = kcg_lit_int64(0);
    outC->_L16.linkedBGs[idx12].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L16.linkedBGs[idx12].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L16.linkedBGs[idx12].q_locacc = kcg_lit_int64(0);
  }
  outC->_L15.valid = kcg_true;
  outC->_L15.BG_Header.valid = kcg_true;
  outC->_L15.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L15.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L15.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L15.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L15.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L15.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L15.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L15.BG_Header.bgPosition.valid = kcg_true;
  outC->_L15.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L15.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L15.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L15.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L15.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L15.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L15.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L15.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L15.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L15.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L15.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L15.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L15.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L15.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L15.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L15.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L15.linkedBGs[idx13].valid = kcg_true;
    outC->_L15.linkedBGs[idx13].nid_LRBG = kcg_lit_int64(0);
    outC->_L15.linkedBGs[idx13].q_dir = Q_DIR_Reverse;
    outC->_L15.linkedBGs[idx13].q_scale = Q_SCALE_10_cm_scale;
    outC->_L15.linkedBGs[idx13].d_link = kcg_lit_int64(0);
    outC->_L15.linkedBGs[idx13].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15.linkedBGs[idx13].nid_c = kcg_lit_int64(0);
    outC->_L15.linkedBGs[idx13].nid_bg = kcg_lit_int64(0);
    outC->_L15.linkedBGs[idx13].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15.linkedBGs[idx13].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L15.linkedBGs[idx13].q_locacc = kcg_lit_int64(0);
  }
  outC->_L14.valid = kcg_true;
  outC->_L14.nid_c = kcg_lit_int64(0);
  outC->_L14.nid_bg = kcg_lit_int64(0);
  outC->_L14.q_link = Q_LINK_Unlinked;
  outC->_L14.location.nominal = kcg_lit_int64(0);
  outC->_L14.location.d_min = kcg_lit_int64(0);
  outC->_L14.location.d_max = kcg_lit_int64(0);
  outC->_L14.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.valid = kcg_true;
  outC->_L14.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L14.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L14.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L14.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L14.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L14.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L14.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.valid = kcg_true;
  outC->_L14.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L14.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L14.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L14.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L14.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L14.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L14.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(
      0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(
      0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(
      0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L14.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L14.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L14.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L14.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->_L14.infoFromPassing.linkedBGs[idx14].nid_LRBG = kcg_lit_int64(0);
    outC->_L14.infoFromPassing.linkedBGs[idx14].q_dir = Q_DIR_Reverse;
    outC->_L14.infoFromPassing.linkedBGs[idx14].q_scale = Q_SCALE_10_cm_scale;
    outC->_L14.infoFromPassing.linkedBGs[idx14].d_link = kcg_lit_int64(0);
    outC->_L14.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L14.infoFromPassing.linkedBGs[idx14].nid_c = kcg_lit_int64(0);
    outC->_L14.infoFromPassing.linkedBGs[idx14].nid_bg = kcg_lit_int64(0);
    outC->_L14.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L14.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L14.infoFromPassing.linkedBGs[idx14].q_locacc = kcg_lit_int64(0);
  }
  outC->_L14.missed = kcg_true;
  outC->BGpassedInUnexpectedDirection_loc = kcg_true;
  outC->foundNotWhereAnnounced_loc = kcg_true;
  outC->passedPositionedBG_loc.valid = kcg_true;
  outC->passedPositionedBG_loc.nid_c = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.nid_bg = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG_loc.location.nominal = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.location.d_min = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.location.d_max = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.seqNoOnTrack = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.valid = kcg_true;
  outC->passedPositionedBG_loc.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->passedPositionedBG_loc.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.valid = kcg_true;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.valid = kcg_true;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(
      0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->passedPositionedBG_loc.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx15].valid = kcg_true;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx15].nid_LRBG =
      kcg_lit_int64(0);
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx15].q_dir =
      Q_DIR_Reverse;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx15].q_scale =
      Q_SCALE_10_cm_scale;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx15].d_link =
      kcg_lit_int64(0);
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx15].nid_c =
      kcg_lit_int64(0);
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx15].nid_bg =
      kcg_lit_int64(0);
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->passedPositionedBG_loc.infoFromPassing.linkedBGs[idx15].q_locacc =
      kcg_lit_int64(0);
  }
  outC->passedPositionedBG_loc.missed = kcg_true;
  outC->location.nominal = kcg_lit_int64(0);
  outC->location.d_min = kcg_lit_int64(0);
  outC->location.d_max = kcg_lit_int64(0);
  outC->BG_wasAnnounced = kcg_true;
  outC->ifAnnouncedOrABGWasPreviouslyPassed_clock = kcg_true;
  outC->_L15_then_else_ifAnnouncedOrABGWasPreviouslyPassed = kcg_true;
  outC->_L14_then_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L14_then_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min =
    kcg_lit_int64(0);
  outC->_L14_then_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max =
    kcg_lit_int64(0);
  outC->_L6_then_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L6_then_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min = kcg_lit_int64(
      0);
  outC->_L6_then_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max = kcg_lit_int64(
      0);
  outC->_L7_then_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L7_then_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min = kcg_lit_int64(
      0);
  outC->_L7_then_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max = kcg_lit_int64(
      0);
  outC->_L8_then_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L8_then_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min = kcg_lit_int64(
      0);
  outC->_L8_then_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max = kcg_lit_int64(
      0);
  outC->_L9_then_else_ifAnnouncedOrABGWasPreviouslyPassed.o_nominal =
    kcg_lit_int64(0);
  outC->_L9_then_else_ifAnnouncedOrABGWasPreviouslyPassed.o_min = kcg_lit_int64(
      0);
  outC->_L9_then_else_ifAnnouncedOrABGWasPreviouslyPassed.o_max = kcg_lit_int64(
      0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.valid = kcg_true;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.valid =
    kcg_true;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx16].valid =
      kcg_true;
    outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx16].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx16].q_dir =
      Q_DIR_Reverse;
    outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx16].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx16].d_link =
      kcg_lit_int64(0);
    outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx16].nid_c =
      kcg_lit_int64(0);
    outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx16].nid_bg =
      kcg_lit_int64(0);
    outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx16].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L10_then_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx16].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L11_then_else_ifAnnouncedOrABGWasPreviouslyPassed.o_nominal =
    kcg_lit_int64(0);
  outC->_L11_then_else_ifAnnouncedOrABGWasPreviouslyPassed.o_min =
    kcg_lit_int64(0);
  outC->_L11_then_else_ifAnnouncedOrABGWasPreviouslyPassed.o_max =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.valid = kcg_true;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.nid_c =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.nid_bg =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.q_link =
    Q_LINK_Unlinked;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.location.nominal =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.location.d_min =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.location.d_max =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.seqNoOnTrack =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.valid =
    kcg_true;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.valid =
    kcg_true;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx17].valid =
      kcg_true;
    outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx17].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx17].q_dir =
      Q_DIR_Reverse;
    outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx17].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx17].d_link =
      kcg_lit_int64(0);
    outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx17].nid_c =
      kcg_lit_int64(0);
    outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx17].nid_bg =
      kcg_lit_int64(0);
    outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx17].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx17].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L12_then_else_ifAnnouncedOrABGWasPreviouslyPassed.missed = kcg_true;
  outC->_L13_then_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L13_then_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min =
    kcg_lit_int64(0);
  outC->_L13_then_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max =
    kcg_lit_int64(0);
  outC->else_clock_else_ifAnnouncedOrABGWasPreviouslyPassed = kcg_true;
  outC->_L14_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L14_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min =
    kcg_lit_int64(0);
  outC->_L14_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.valid = kcg_true;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.valid =
    kcg_true;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx18].valid =
      kcg_true;
    outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx18].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx18].q_dir =
      Q_DIR_Reverse;
    outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx18].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx18].d_link =
      kcg_lit_int64(0);
    outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx18].nid_c =
      kcg_lit_int64(0);
    outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx18].nid_bg =
      kcg_lit_int64(0);
    outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L13_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx18].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L12_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed = kcg_true;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.valid = kcg_true;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nid_c =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nid_bg =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.q_link =
    Q_LINK_Unlinked;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location.nominal =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location.d_min =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location.d_max =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.seqNoOnTrack =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.valid =
    kcg_true;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.valid =
    kcg_true;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx19 = 0; idx19 < 33; idx19++) {
    outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx19].valid =
      kcg_true;
    outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx19].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx19].q_dir =
      Q_DIR_Reverse;
    outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx19].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx19].d_link =
      kcg_lit_int64(0);
    outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx19].nid_c =
      kcg_lit_int64(0);
    outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx19].nid_bg =
      kcg_lit_int64(0);
    outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx19].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx19].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx19].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L11_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.missed = kcg_true;
  outC->_L9_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L9_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min =
    kcg_lit_int64(0);
  outC->_L9_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max =
    kcg_lit_int64(0);
  outC->_L10_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed = kcg_true;
  outC->_L8_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L8_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min =
    kcg_lit_int64(0);
  outC->_L8_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.valid = kcg_true;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nid_c =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nid_bg =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.q_link =
    Q_LINK_Unlinked;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location.nominal =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location.d_min =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location.d_max =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.seqNoOnTrack =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.valid =
    kcg_true;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.valid =
    kcg_true;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx20].valid =
      kcg_true;
    outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx20].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx20].q_dir =
      Q_DIR_Reverse;
    outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx20].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx20].d_link =
      kcg_lit_int64(0);
    outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx20].nid_c =
      kcg_lit_int64(0);
    outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx20].nid_bg =
      kcg_lit_int64(0);
    outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx20].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx20].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx20].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L7_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.missed = kcg_true;
  outC->_L6_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.o_nominal =
    kcg_lit_int64(0);
  outC->_L6_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.o_min =
    kcg_lit_int64(0);
  outC->_L6_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.o_max =
    kcg_lit_int64(0);
  outC->_L5_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L5_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min =
    kcg_lit_int64(0);
  outC->_L5_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max =
    kcg_lit_int64(0);
  outC->_L4_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L4_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min =
    kcg_lit_int64(0);
  outC->_L4_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max =
    kcg_lit_int64(0);
  outC->_L3_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.o_nominal =
    kcg_lit_int64(0);
  outC->_L3_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.o_min =
    kcg_lit_int64(0);
  outC->_L3_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.o_max =
    kcg_lit_int64(0);
  outC->_L2_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L2_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min =
    kcg_lit_int64(0);
  outC->_L2_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max =
    kcg_lit_int64(0);
  outC->_L1_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L1_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min =
    kcg_lit_int64(0);
  outC->_L1_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max =
    kcg_lit_int64(0);
  outC->_L15_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L15_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min =
    kcg_lit_int64(0);
  outC->_L15_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max =
    kcg_lit_int64(0);
  outC->_L16_else_else_else_ifAnnouncedOrABGWasPreviouslyPassed = kcg_true;
  outC->_L2_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nominal =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_min =
    kcg_lit_int64(0);
  outC->_L2_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.valid = kcg_true;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nid_c =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.nid_bg =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.q_link =
    Q_LINK_Unlinked;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location.nominal =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location.d_min =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.location.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.seqNoOnTrack =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.valid =
    kcg_true;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.valid =
    kcg_true;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx21].valid =
      kcg_true;
    outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx21].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx21].q_dir =
      Q_DIR_Reverse;
    outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx21].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx21].d_link =
      kcg_lit_int64(0);
    outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx21].nid_c =
      kcg_lit_int64(0);
    outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx21].nid_bg =
      kcg_lit_int64(0);
    outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx21].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.infoFromPassing.linkedBGs[idx21].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L1_then_else_else_ifAnnouncedOrABGWasPreviouslyPassed.missed = kcg_true;
  outC->else_clock_ifAnnouncedOrABGWasPreviouslyPassed = kcg_true;
  outC->_L25_then_ifAnnouncedOrABGWasPreviouslyPassed.nominal = kcg_lit_int64(0);
  outC->_L25_then_ifAnnouncedOrABGWasPreviouslyPassed.d_min = kcg_lit_int64(0);
  outC->_L25_then_ifAnnouncedOrABGWasPreviouslyPassed.d_max = kcg_lit_int64(0);
  outC->_L24_then_ifAnnouncedOrABGWasPreviouslyPassed.nominal = kcg_lit_int64(0);
  outC->_L24_then_ifAnnouncedOrABGWasPreviouslyPassed.d_min = kcg_lit_int64(0);
  outC->_L24_then_ifAnnouncedOrABGWasPreviouslyPassed.d_max = kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.valid = kcg_true;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.valid = kcg_true;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx22 = 0; idx22 < 33; idx22++) {
    outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx22].valid =
      kcg_true;
    outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx22].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx22].q_dir =
      Q_DIR_Reverse;
    outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx22].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx22].d_link =
      kcg_lit_int64(0);
    outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx22].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx22].nid_c =
      kcg_lit_int64(0);
    outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx22].nid_bg =
      kcg_lit_int64(0);
    outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx22].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx22].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L23_then_ifAnnouncedOrABGWasPreviouslyPassed.linkedBGs[idx22].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L22_then_ifAnnouncedOrABGWasPreviouslyPassed.nominal = kcg_lit_int64(0);
  outC->_L22_then_ifAnnouncedOrABGWasPreviouslyPassed.d_min = kcg_lit_int64(0);
  outC->_L22_then_ifAnnouncedOrABGWasPreviouslyPassed.d_max = kcg_lit_int64(0);
  outC->_L21_then_ifAnnouncedOrABGWasPreviouslyPassed.o_nominal = kcg_lit_int64(
      0);
  outC->_L21_then_ifAnnouncedOrABGWasPreviouslyPassed.o_min = kcg_lit_int64(0);
  outC->_L21_then_ifAnnouncedOrABGWasPreviouslyPassed.o_max = kcg_lit_int64(0);
  outC->_L20_then_ifAnnouncedOrABGWasPreviouslyPassed.o_nominal = kcg_lit_int64(
      0);
  outC->_L20_then_ifAnnouncedOrABGWasPreviouslyPassed.o_min = kcg_lit_int64(0);
  outC->_L20_then_ifAnnouncedOrABGWasPreviouslyPassed.o_max = kcg_lit_int64(0);
  outC->_L27_then_ifAnnouncedOrABGWasPreviouslyPassed = kcg_true;
  outC->_L26_then_ifAnnouncedOrABGWasPreviouslyPassed.nominal = kcg_lit_int64(0);
  outC->_L26_then_ifAnnouncedOrABGWasPreviouslyPassed.d_min = kcg_lit_int64(0);
  outC->_L26_then_ifAnnouncedOrABGWasPreviouslyPassed.d_max = kcg_lit_int64(0);
  for (idx24 = 0; idx24 < 33; idx24++) {
    outC->linkedBGs[idx24].valid = kcg_true;
    outC->linkedBGs[idx24].nid_c = kcg_lit_int64(0);
    outC->linkedBGs[idx24].nid_bg = kcg_lit_int64(0);
    outC->linkedBGs[idx24].q_link = Q_LINK_Unlinked;
    outC->linkedBGs[idx24].location.nominal = kcg_lit_int64(0);
    outC->linkedBGs[idx24].location.d_min = kcg_lit_int64(0);
    outC->linkedBGs[idx24].location.d_max = kcg_lit_int64(0);
    outC->linkedBGs[idx24].seqNoOnTrack = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.valid = kcg_true;
    outC->linkedBGs[idx24].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->linkedBGs[idx24].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->linkedBGs[idx24].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->linkedBGs[idx24].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->linkedBGs[idx24].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->linkedBGs[idx24].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->linkedBGs[idx24].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.valid = kcg_true;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.valid = kcg_true;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->linkedBGs[idx24].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx23 = 0; idx23 < 33; idx23++) {
      outC->linkedBGs[idx24].infoFromPassing.linkedBGs[idx23].valid = kcg_true;
      outC->linkedBGs[idx24].infoFromPassing.linkedBGs[idx23].nid_LRBG =
        kcg_lit_int64(0);
      outC->linkedBGs[idx24].infoFromPassing.linkedBGs[idx23].q_dir = Q_DIR_Reverse;
      outC->linkedBGs[idx24].infoFromPassing.linkedBGs[idx23].q_scale =
        Q_SCALE_10_cm_scale;
      outC->linkedBGs[idx24].infoFromPassing.linkedBGs[idx23].d_link =
        kcg_lit_int64(0);
      outC->linkedBGs[idx24].infoFromPassing.linkedBGs[idx23].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->linkedBGs[idx24].infoFromPassing.linkedBGs[idx23].nid_c =
        kcg_lit_int64(0);
      outC->linkedBGs[idx24].infoFromPassing.linkedBGs[idx23].nid_bg =
        kcg_lit_int64(0);
      outC->linkedBGs[idx24].infoFromPassing.linkedBGs[idx23].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->linkedBGs[idx24].infoFromPassing.linkedBGs[idx23].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->linkedBGs[idx24].infoFromPassing.linkedBGs[idx23].q_locacc =
        kcg_lit_int64(0);
    }
    outC->linkedBGs[idx24].missed = kcg_true;
  }
  outC->BGpassedInUnexpectedDirection = kcg_true;
  outC->foundNotWhereAnnounced = kcg_true;
  outC->passedPositionedBG.valid = kcg_true;
  outC->passedPositionedBG.nid_c = kcg_lit_int64(0);
  outC->passedPositionedBG.nid_bg = kcg_lit_int64(0);
  outC->passedPositionedBG.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG.location.nominal = kcg_lit_int64(0);
  outC->passedPositionedBG.location.d_min = kcg_lit_int64(0);
  outC->passedPositionedBG.location.d_max = kcg_lit_int64(0);
  outC->passedPositionedBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.valid = kcg_true;
  outC->passedPositionedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->passedPositionedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->passedPositionedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->passedPositionedBG.infoFromPassing.valid = kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->passedPositionedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->passedPositionedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->passedPositionedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->passedPositionedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedPositionedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->passedPositionedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx25 = 0; idx25 < 33; idx25++) {
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx25].valid = kcg_true;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx25].nid_LRBG =
      kcg_lit_int64(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx25].q_dir = Q_DIR_Reverse;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx25].q_scale =
      Q_SCALE_10_cm_scale;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx25].d_link =
      kcg_lit_int64(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx25].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx25].nid_c =
      kcg_lit_int64(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx25].nid_bg =
      kcg_lit_int64(0);
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx25].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx25].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->passedPositionedBG.infoFromPassing.linkedBGs[idx25].q_locacc =
      kcg_lit_int64(0);
  }
  outC->passedPositionedBG.missed = kcg_true;
  /* _L265=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs#1)/ */
  positionLinkedBGs_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionLinkedBGs_1);
  /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L26=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#4)/ */
  overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_4);
  /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L22=(BasicLocationFunctions_Pkg::add_2_Distances#9)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_9);
  /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L24=(BasicLocationFunctions_Pkg::sub_2_odoDistances#8)/ */
  sub_2_odoDistances_init_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_8);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L14=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#5)/ */
  overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_5);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L8=(BasicLocationFunctions_Pkg::add_2_Distances#13)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_13);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L6=(BasicLocationFunctions_Pkg::add_odo_2_Location#5)/ */
  add_odo_2_Location_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_odo_2_Location_5);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L15=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#6)/ */
  overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_6);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L9=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#3)/ */
  overlapOf_2_Locations_init_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_3);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L1=(BasicLocationFunctions_Pkg::add_2_Distances#14)/ */
  add_2_Distances_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_14);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L2=(BasicLocationFunctions_Pkg::add_odo_2_Location#6)/ */
  add_odo_2_Location_init_BasicLocationFunctions_Pkg(
    &outC->Context_add_odo_2_Location_6);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void passedBG_2_positionedBG_reset_CalculateTrainPosition_Pkg(
  outC_passedBG_2_positionedBG_CalculateTrainPosition_Pkg *outC)
{
  /* _L265=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs#1)/ */
  positionLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_positionLinkedBGs_1);
  /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L26=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#4)/ */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_4);
  /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L22=(BasicLocationFunctions_Pkg::add_2_Distances#9)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_9);
  /* ifAnnouncedOrABGWasPreviouslyPassed:then:_L24=(BasicLocationFunctions_Pkg::sub_2_odoDistances#8)/ */
  sub_2_odoDistances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_sub_2_odoDistances_8);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L14=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#5)/ */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_5);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L8=(BasicLocationFunctions_Pkg::add_2_Distances#13)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_13);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:then:_L6=(BasicLocationFunctions_Pkg::add_odo_2_Location#5)/ */
  add_odo_2_Location_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_odo_2_Location_5);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L15=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#6)/ */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_6);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L9=(BasicLocationFunctions_Pkg::overlapOf_2_Locations#3)/ */
  overlapOf_2_Locations_reset_BasicLocationFunctions_Pkg(
    &outC->Context_overlapOf_2_Locations_3);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L1=(BasicLocationFunctions_Pkg::add_2_Distances#14)/ */
  add_2_Distances_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_2_Distances_14);
  /* ifAnnouncedOrABGWasPreviouslyPassed:else:else:else:_L2=(BasicLocationFunctions_Pkg::add_odo_2_Location#6)/ */
  add_odo_2_Location_reset_BasicLocationFunctions_Pkg(
    &outC->Context_add_odo_2_Location_6);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** passedBG_2_positionedBG_CalculateTrainPosition_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

