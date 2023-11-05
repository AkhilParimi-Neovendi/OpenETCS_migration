/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculateTrainPosition_CalculateTrainPosition_Pkg.h"

/* CalculateTrainPosition_Pkg::calculateTrainPosition/ */
void calculateTrainPosition_CalculateTrainPosition_Pkg(
  /* currentOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *currentOdometry,
  /* passedBG/ */
  passedBG_T_BG_Types_Pkg *passedBG,
  /* msgFromTrack/ */
  ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* reset/ */
  kcg_bool reset,
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  /* errors_loc/ */
  static positionErrors_T_TrainPosition_Types_Pck errors_loc_partial;
  /* passedBG_asPositionedBG/ */
  static positionedBG_T_TrainPosition_Types_Pck passedBG_asPositionedBG_partial;
  /* BGs_preloc/ */
  static positionedBGs_T_TrainPosition_Types_Pck BGs_preloc_partial;
  /* errors_loc/ */
  static positionErrors_T_TrainPosition_Types_Pck _1_errors_loc_partial;
  /* passedBG_asPositionedBG/ */
  static positionedBG_T_TrainPosition_Types_Pck _2_passedBG_asPositionedBG_partial;
  /* BGs_preloc/ */
  static positionedBGs_T_TrainPosition_Types_Pck _3_BGs_preloc_partial;
  /* BGs_preloc/ */
  static positionedBGs_T_TrainPosition_Types_Pck _4_BGs_preloc_partial;
  /* errors_loc/ */
  static positionErrors_T_TrainPosition_Types_Pck _5_errors_loc_partial;
  /* BGs_preloc/ */
  static positionedBGs_T_TrainPosition_Types_Pck _6_BGs_preloc_partial;
  /* errors_loc/ */
  static positionErrors_T_TrainPosition_Types_Pck _7_errors_loc_partial;
  static kcg_int32 noname;
  /* BGs_loc/ */
  static positionedBGs_T_TrainPosition_Types_Pck last_BGs_loc;

  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&last_BGs_loc, &outC->BGs_loc);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L309, msgFromTrack);
  /* _L306=(CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG#1)/ */
  msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
    &outC->_L309,
    &outC->Context_msg_2_passedBG_1);
  kcg_copy_passedBG_T_BG_Types_Pkg(
    &outC->_L306,
    &outC->Context_msg_2_passedBG_1.passedBG);
  outC->_L307 = outC->Context_msg_2_passedBG_1.BG_passed;
  outC->_L308 = outC->Context_msg_2_passedBG_1.onlyBGsAnnouncedViaRadio;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L247, passedBG);
  outC->_L244 = outC->_L247.valid;
  outC->_L245 = outC->_L247.BG_Header.valid;
  outC->_L248 = outC->_L245 & outC->_L244;
  /* _L333= */
  if (outC->_L244) {
    outC->_L333 = outC->_L248;
  }
  else {
    outC->_L333 = outC->_L307;
  }
  outC->BG_passed = outC->_L333;
  outC->if_BGpassed_or_onlyAnnounced_clock = outC->BG_passed | reset;
  outC->_L243 = !outC->_L245;
  outC->_L246 = outC->_L243 & outC->_L244;
  /* _L332= */
  if (outC->_L244) {
    outC->_L332 = outC->_L246;
  }
  else {
    outC->_L332 = outC->_L308;
  }
  outC->onlyBGsAnnouncedViaRadio = outC->_L332;
  if (outC->if_BGpassed_or_onlyAnnounced_clock) {
  }
  else {
    outC->else_clock_if_BGpassed_or_onlyAnnounced = outC->onlyBGsAnnouncedViaRadio;
    if (outC->else_clock_if_BGpassed_or_onlyAnnounced) {
    }
    else {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L6_else_else_if_BGpassed_or_onlyAnnounced,
        &last_BGs_loc);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &_4_BGs_preloc_partial,
        &outC->_L6_else_else_if_BGpassed_or_onlyAnnounced);
    }
  }
  /* _L331= */
  if (outC->_L244) {
    kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L331, &outC->_L247);
  }
  else {
    kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L331, &outC->_L306);
  }
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->passedBG_loc, &outC->_L331);
  /* if_BGpassed_or_onlyAnnounced: */
  if (outC->if_BGpassed_or_onlyAnnounced_clock) {
    kcg_copy_passedBG_T_BG_Types_Pkg(
      &outC->_L24_then_if_BGpassed_or_onlyAnnounced,
      &outC->passedBG_loc);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L9_then_if_BGpassed_or_onlyAnnounced,
      &last_BGs_loc);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L14_then_if_BGpassed_or_onlyAnnounced,
      (positionedBGs_T_TrainPosition_Types_Pck *)
        &cNoPositionedBGs_CalculateTrainPosition_Pkg);
    outC->_L16_then_if_BGpassed_or_onlyAnnounced = reset;
    /* if_BGpassed_or_onlyAnnounced:then:_L19= */
    if (outC->_L16_then_if_BGpassed_or_onlyAnnounced) {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L19_then_if_BGpassed_or_onlyAnnounced,
        &outC->_L14_then_if_BGpassed_or_onlyAnnounced);
    }
    else {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L19_then_if_BGpassed_or_onlyAnnounced,
        &outC->_L9_then_if_BGpassed_or_onlyAnnounced);
    }
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &outC->_L21_then_if_BGpassed_or_onlyAnnounced,
      trainProperties);
    /* if_BGpassed_or_onlyAnnounced:then:_L10=(CalculateTrainPosition_Pkg::calculateBGLocations#6)/ */
    calculateBGLocations_CalculateTrainPosition_Pkg(
      &outC->_L24_then_if_BGpassed_or_onlyAnnounced,
      &outC->_L19_then_if_BGpassed_or_onlyAnnounced,
      outC->_L16_then_if_BGpassed_or_onlyAnnounced,
      &outC->_L21_then_if_BGpassed_or_onlyAnnounced,
      &outC->Context_calculateBGLocations_6);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L10_then_if_BGpassed_or_onlyAnnounced,
      &outC->Context_calculateBGLocations_6.BGs);
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &outC->_L11_then_if_BGpassed_or_onlyAnnounced,
      &outC->Context_calculateBGLocations_6.errors);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L12_then_if_BGpassed_or_onlyAnnounced,
      &outC->Context_calculateBGLocations_6.passedPositionedBG);
    outC->_L23_then_if_BGpassed_or_onlyAnnounced = kcg_true;
    /* if_BGpassed_or_onlyAnnounced:then:_L22=(CalculateTrainPosition_Pkg::delDispensableBGs#2)/ */
    delDispensableBGs_CalculateTrainPosition_Pkg(
      &outC->_L10_then_if_BGpassed_or_onlyAnnounced,
      outC->_L23_then_if_BGpassed_or_onlyAnnounced,
      &outC->Context_delDispensableBGs_2);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L22_then_if_BGpassed_or_onlyAnnounced,
      &outC->Context_delDispensableBGs_2.BGs_out);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &BGs_preloc_partial,
      &outC->_L22_then_if_BGpassed_or_onlyAnnounced);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->BGs_preloc,
      &BGs_preloc_partial);
  }
  else {
    /* if_BGpassed_or_onlyAnnounced:else: */
    if (outC->else_clock_if_BGpassed_or_onlyAnnounced) {
      kcg_copy_passedBG_T_BG_Types_Pkg(
        &outC->_L17_then_else_if_BGpassed_or_onlyAnnounced,
        &outC->passedBG_loc);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L9_then_else_if_BGpassed_or_onlyAnnounced,
        &last_BGs_loc);
      kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
        &outC->_L16_then_else_if_BGpassed_or_onlyAnnounced,
        trainProperties);
      /* if_BGpassed_or_onlyAnnounced:else:then:_L14=(CalculateTrainPosition_Pkg::addAnnouncedBGs#1)/ */
      addAnnouncedBGs_CalculateTrainPosition_Pkg(
        &outC->_L17_then_else_if_BGpassed_or_onlyAnnounced,
        &outC->_L9_then_else_if_BGpassed_or_onlyAnnounced,
        &outC->_L16_then_else_if_BGpassed_or_onlyAnnounced,
        &outC->Context_addAnnouncedBGs_1);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L14_then_else_if_BGpassed_or_onlyAnnounced,
        &outC->Context_addAnnouncedBGs_1.BGs_out);
      outC->_L13_then_else_if_BGpassed_or_onlyAnnounced =
        outC->Context_addAnnouncedBGs_1.overrun;
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &_6_BGs_preloc_partial,
        &outC->_L14_then_else_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &_3_BGs_preloc_partial,
        &_6_BGs_preloc_partial);
    }
    else {
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &_3_BGs_preloc_partial,
        &_4_BGs_preloc_partial);
    }
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->BGs_preloc,
      &_3_BGs_preloc_partial);
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L386,
    &outC->BGs_preloc);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L201, currentOdometry);
  outC->_L238 = reset;
  outC->_L259 = outC->BG_passed;
  outC->_L260 = outC->onlyBGsAnnouncedViaRadio;
  outC->_L258 = outC->_L260 | outC->_L259 | outC->_L238;
  /* if_BGpassed_or_onlyAnnounced: */
  if (outC->if_BGpassed_or_onlyAnnounced_clock) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &passedBG_asPositionedBG_partial,
      &outC->_L12_then_if_BGpassed_or_onlyAnnounced);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->passedBG_asPositionedBG,
      &passedBG_asPositionedBG_partial);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_2_passedBG_asPositionedBG_partial,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->passedBG_asPositionedBG,
      &_2_passedBG_asPositionedBG_partial);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L256,
    &outC->passedBG_asPositionedBG);
  /* trainPositionInfo=(CalculateTrainPosition_Pkg::calculateTrainPositionInfo#1)/ */
  calculateTrainPositionInfo_CalculateTrainPosition_Pkg(
    &outC->_L201,
    &outC->_L386,
    outC->_L258,
    &outC->_L256,
    outC->_L238,
    &outC->Context_calculateTrainPositionInfo_1);
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->trainPositionInfo,
    &outC->Context_calculateTrainPositionInfo_1.trainPositionInfo);
  outC->_L216 =
    outC->Context_calculateTrainPositionInfo_1.positionCalculationNotConsistent;
  kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(
    &outC->_L327,
    &outC->trainPositionInfo);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L329,
    &outC->_L327.trainPosition);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L385,
    &outC->BGs_preloc);
  outC->_L321 = kcg_true;
  /* _L322=(CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed#2)/ */
  linkedBG_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->_L329,
    &outC->_L385,
    outC->_L321,
    &outC->Context_linkedBG_missed_2);
  outC->_L322 = outC->Context_linkedBG_missed_2.missed;
  outC->_L323 = outC->Context_linkedBG_missed_2.indexOfBG;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L324,
    &outC->Context_linkedBG_missed_2.BG);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L384,
    &outC->Context_linkedBG_missed_2.BGs_out);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs_loc, &outC->_L384);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->BGs, &outC->_L384);
  /* if_BGpassed_or_onlyAnnounced: */
  if (outC->if_BGpassed_or_onlyAnnounced_clock) {
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &errors_loc_partial,
      &outC->_L11_then_if_BGpassed_or_onlyAnnounced);
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &outC->errors_loc,
      &errors_loc_partial);
  }
  else {
    /* if_BGpassed_or_onlyAnnounced:else: */
    if (outC->else_clock_if_BGpassed_or_onlyAnnounced) {
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &outC->_L2_then_else_if_BGpassed_or_onlyAnnounced,
        (positionErrors_T_TrainPosition_Types_Pck *)
          &cNoPositionErrors_CalculateTrainPosition_Pkg);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &outC->_L15_then_else_if_BGpassed_or_onlyAnnounced,
        &outC->_L2_then_else_if_BGpassed_or_onlyAnnounced);
      if (kcg_true) {
        outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.outOfMemSpace =
          outC->_L13_then_else_if_BGpassed_or_onlyAnnounced;
      }
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &_7_errors_loc_partial,
        &outC->_L15_then_else_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &_1_errors_loc_partial,
        &_7_errors_loc_partial);
    }
    else {
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &outC->_L4_else_else_if_BGpassed_or_onlyAnnounced,
        (positionErrors_T_TrainPosition_Types_Pck *)
          &cNoPositionErrors_CalculateTrainPosition_Pkg);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &_5_errors_loc_partial,
        &outC->_L4_else_else_if_BGpassed_or_onlyAnnounced);
      kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
        &_1_errors_loc_partial,
        &_5_errors_loc_partial);
    }
    kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
      &outC->errors_loc,
      &_1_errors_loc_partial);
  }
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(
    &outC->_L371,
    &outC->errors_loc);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L383, &outC->_L371.bg);
  outC->_L382 = outC->_L371.BGpassedInUnexpectedDirection;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->missedLinkedBG,
    &outC->_L324);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L372,
    &outC->missedLinkedBG);
  outC->linkedBGMissed = outC->_L322;
  outC->_L380 = outC->linkedBGMissed;
  /* _L381= */
  if (outC->_L380) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L381, &outC->_L372);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L381, &outC->_L383);
  }
  outC->_L379 = kcg_false;
  outC->_L373 = outC->_L371.BG_LinkingConsistencyError;
  outC->_L378 = outC->_L380 | outC->_L373;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L336,
    &outC->passedBG_asPositionedBG);
  outC->_L335 = reset;
  /* _L334=(CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed#1)/ */
  twoConsecutiveLinkedBGs_missed_CalculateTrainPosition_Pkg_Linking_Pkg(
    outC->_L322,
    &outC->_L324,
    &outC->_L336,
    outC->_L335,
    &outC->Context_twoConsecutiveLinkedBGs_missed_1);
  outC->_L334 =
    outC->Context_twoConsecutiveLinkedBGs_missed_1.secondConsecutiveBG_missed;
  outC->twoConsecutiveLinkedBGsMissed = outC->_L334;
  outC->_L377 = outC->twoConsecutiveLinkedBGsMissed;
  outC->positionCalculationNotConsistent = outC->_L216;
  outC->_L376 = outC->positionCalculationNotConsistent;
  outC->_L375 = outC->_L371.passedBG_foundNotWhereExpected;
  outC->_L374 = outC->_L371.outOfMemSpace;
  outC->_L370.outOfMemSpace = outC->_L374;
  outC->_L370.passedBG_foundNotWhereExpected = outC->_L375;
  outC->_L370.positionCalculation_inconsistent = outC->_L376;
  outC->_L370.linkedBGMissed = outC->_L380;
  outC->_L370.BGpassedInUnexpectedDirection = outC->_L382;
  outC->_L370.BG_LinkingConsistencyError = outC->_L378;
  outC->_L370.twoConsecutiveLinkedBGs_missed = outC->_L377;
  outC->_L370.doubleRepositioningError = outC->_L379;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L370.bg, &outC->_L381);
  kcg_copy_positionErrors_T_TrainPosition_Types_Pck(&outC->errors, &outC->_L370);
  noname = outC->_L323;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
    &outC->_L207,
    trainProperties);
  /* _L200=(CalculateTrainPosition_Pkg::calculateTrainpositionAttributes#1)/ */
  calculateTrainpositionAttributes_CalculateTrainPosition_Pkg(
    &outC->trainPositionInfo,
    &outC->_L201,
    &outC->_L207,
    &outC->Context_calculateTrainpositionAttributes_1);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L200,
    &outC->Context_calculateTrainpositionAttributes_1.trainPosition);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPosition,
    &outC->_L200);
}

#ifndef KCG_USER_DEFINED_INIT
void calculateTrainPosition_init_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
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

  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L386[idx1].valid = kcg_true;
    outC->_L386[idx1].nid_c = kcg_lit_int32(0);
    outC->_L386[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L386[idx1].q_link = Q_LINK_Unlinked;
    outC->_L386[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L386[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L386[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L386[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.valid = kcg_true;
    outC->_L386[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L386[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L386[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L386[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L386[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L386[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L386[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.valid = kcg_true;
    outC->_L386[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L386[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L386[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L386[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L386[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L386[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L386[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L386[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L386[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L386[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L386[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L386[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L386[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L386[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L386[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L386[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L386[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L386[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L386[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L386[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L386[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L386[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L386[idx1].missed = kcg_true;
  }
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L385[idx3].valid = kcg_true;
    outC->_L385[idx3].nid_c = kcg_lit_int32(0);
    outC->_L385[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L385[idx3].q_link = Q_LINK_Unlinked;
    outC->_L385[idx3].location.nominal = kcg_lit_int32(0);
    outC->_L385[idx3].location.d_min = kcg_lit_int32(0);
    outC->_L385[idx3].location.d_max = kcg_lit_int32(0);
    outC->_L385[idx3].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.valid = kcg_true;
    outC->_L385[idx3].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L385[idx3].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L385[idx3].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L385[idx3].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L385[idx3].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L385[idx3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L385[idx3].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.valid = kcg_true;
    outC->_L385[idx3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L385[idx3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L385[idx3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L385[idx3].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L385[idx3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L385[idx3].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L385[idx3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L385[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L385[idx3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L385[idx3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L385[idx3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L385[idx3].infoFromPassing.linkedBGs[idx2].valid = kcg_true;
      outC->_L385[idx3].infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
      outC->_L385[idx3].infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
      outC->_L385[idx3].infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
      outC->_L385[idx3].infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
      outC->_L385[idx3].infoFromPassing.linkedBGs[idx2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L385[idx3].infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
      outC->_L385[idx3].infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
      outC->_L385[idx3].infoFromPassing.linkedBGs[idx2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L385[idx3].infoFromPassing.linkedBGs[idx2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L385[idx3].infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
    }
    outC->_L385[idx3].missed = kcg_true;
  }
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L384[idx5].valid = kcg_true;
    outC->_L384[idx5].nid_c = kcg_lit_int32(0);
    outC->_L384[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L384[idx5].q_link = Q_LINK_Unlinked;
    outC->_L384[idx5].location.nominal = kcg_lit_int32(0);
    outC->_L384[idx5].location.d_min = kcg_lit_int32(0);
    outC->_L384[idx5].location.d_max = kcg_lit_int32(0);
    outC->_L384[idx5].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.valid = kcg_true;
    outC->_L384[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L384[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L384[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L384[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L384[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L384[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L384[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.valid = kcg_true;
    outC->_L384[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L384[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L384[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L384[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L384[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L384[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L384[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L384[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L384[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L384[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L384[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L384[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L384[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
      outC->_L384[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L384[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L384[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
      outC->_L384[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L384[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
      outC->_L384[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
      outC->_L384[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L384[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L384[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
    }
    outC->_L384[idx5].missed = kcg_true;
  }
  outC->_L370.outOfMemSpace = kcg_true;
  outC->_L370.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L370.positionCalculation_inconsistent = kcg_true;
  outC->_L370.linkedBGMissed = kcg_true;
  outC->_L370.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L370.BG_LinkingConsistencyError = kcg_true;
  outC->_L370.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L370.doubleRepositioningError = kcg_true;
  outC->_L370.bg.valid = kcg_true;
  outC->_L370.bg.nid_c = kcg_lit_int32(0);
  outC->_L370.bg.nid_bg = kcg_lit_int32(0);
  outC->_L370.bg.q_link = Q_LINK_Unlinked;
  outC->_L370.bg.location.nominal = kcg_lit_int32(0);
  outC->_L370.bg.location.d_min = kcg_lit_int32(0);
  outC->_L370.bg.location.d_max = kcg_lit_int32(0);
  outC->_L370.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.valid = kcg_true;
  outC->_L370.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L370.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L370.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L370.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L370.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L370.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L370.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L370.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.valid = kcg_true;
  outC->_L370.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L370.bg.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L370.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L370.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L370.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L370.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L370.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L370.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L370.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L370.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L370.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L370.bg.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L370.bg.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int32(0);
    outC->_L370.bg.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L370.bg.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L370.bg.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int32(0);
    outC->_L370.bg.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L370.bg.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int32(0);
    outC->_L370.bg.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L370.bg.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L370.bg.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L370.bg.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int32(0);
  }
  outC->_L370.bg.missed = kcg_true;
  outC->_L371.outOfMemSpace = kcg_true;
  outC->_L371.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L371.positionCalculation_inconsistent = kcg_true;
  outC->_L371.linkedBGMissed = kcg_true;
  outC->_L371.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L371.BG_LinkingConsistencyError = kcg_true;
  outC->_L371.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L371.doubleRepositioningError = kcg_true;
  outC->_L371.bg.valid = kcg_true;
  outC->_L371.bg.nid_c = kcg_lit_int32(0);
  outC->_L371.bg.nid_bg = kcg_lit_int32(0);
  outC->_L371.bg.q_link = Q_LINK_Unlinked;
  outC->_L371.bg.location.nominal = kcg_lit_int32(0);
  outC->_L371.bg.location.d_min = kcg_lit_int32(0);
  outC->_L371.bg.location.d_max = kcg_lit_int32(0);
  outC->_L371.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.valid = kcg_true;
  outC->_L371.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L371.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L371.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L371.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L371.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L371.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L371.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L371.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.valid = kcg_true;
  outC->_L371.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L371.bg.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L371.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L371.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L371.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L371.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L371.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L371.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L371.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L371.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L371.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L371.bg.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L371.bg.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
    outC->_L371.bg.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L371.bg.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L371.bg.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
    outC->_L371.bg.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L371.bg.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
    outC->_L371.bg.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L371.bg.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L371.bg.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L371.bg.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
  }
  outC->_L371.bg.missed = kcg_true;
  outC->_L372.valid = kcg_true;
  outC->_L372.nid_c = kcg_lit_int32(0);
  outC->_L372.nid_bg = kcg_lit_int32(0);
  outC->_L372.q_link = Q_LINK_Unlinked;
  outC->_L372.location.nominal = kcg_lit_int32(0);
  outC->_L372.location.d_min = kcg_lit_int32(0);
  outC->_L372.location.d_max = kcg_lit_int32(0);
  outC->_L372.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.valid = kcg_true;
  outC->_L372.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L372.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L372.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L372.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L372.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L372.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L372.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L372.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L372.infoFromPassing.valid = kcg_true;
  outC->_L372.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L372.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L372.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L372.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L372.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L372.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L372.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L372.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L372.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L372.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L372.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L372.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L372.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L372.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx8 = 0; idx8 < 33; idx8++) {
    outC->_L372.infoFromPassing.linkedBGs[idx8].valid = kcg_true;
    outC->_L372.infoFromPassing.linkedBGs[idx8].nid_LRBG = kcg_lit_int32(0);
    outC->_L372.infoFromPassing.linkedBGs[idx8].q_dir = Q_DIR_Reverse;
    outC->_L372.infoFromPassing.linkedBGs[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L372.infoFromPassing.linkedBGs[idx8].d_link = kcg_lit_int32(0);
    outC->_L372.infoFromPassing.linkedBGs[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L372.infoFromPassing.linkedBGs[idx8].nid_c = kcg_lit_int32(0);
    outC->_L372.infoFromPassing.linkedBGs[idx8].nid_bg = kcg_lit_int32(0);
    outC->_L372.infoFromPassing.linkedBGs[idx8].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L372.infoFromPassing.linkedBGs[idx8].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L372.infoFromPassing.linkedBGs[idx8].q_locacc = kcg_lit_int32(0);
  }
  outC->_L372.missed = kcg_true;
  outC->_L373 = kcg_true;
  outC->_L374 = kcg_true;
  outC->_L375 = kcg_true;
  outC->_L376 = kcg_true;
  outC->_L377 = kcg_true;
  outC->_L378 = kcg_true;
  outC->_L379 = kcg_true;
  outC->_L380 = kcg_true;
  outC->_L381.valid = kcg_true;
  outC->_L381.nid_c = kcg_lit_int32(0);
  outC->_L381.nid_bg = kcg_lit_int32(0);
  outC->_L381.q_link = Q_LINK_Unlinked;
  outC->_L381.location.nominal = kcg_lit_int32(0);
  outC->_L381.location.d_min = kcg_lit_int32(0);
  outC->_L381.location.d_max = kcg_lit_int32(0);
  outC->_L381.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.valid = kcg_true;
  outC->_L381.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L381.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L381.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L381.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L381.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L381.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L381.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L381.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L381.infoFromPassing.valid = kcg_true;
  outC->_L381.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L381.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L381.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L381.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L381.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L381.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L381.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L381.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L381.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L381.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L381.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L381.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L381.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L381.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->_L381.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->_L381.infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int32(0);
    outC->_L381.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->_L381.infoFromPassing.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L381.infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int32(0);
    outC->_L381.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L381.infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int32(0);
    outC->_L381.infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int32(0);
    outC->_L381.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L381.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L381.infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int32(0);
  }
  outC->_L381.missed = kcg_true;
  outC->_L382 = kcg_true;
  outC->_L383.valid = kcg_true;
  outC->_L383.nid_c = kcg_lit_int32(0);
  outC->_L383.nid_bg = kcg_lit_int32(0);
  outC->_L383.q_link = Q_LINK_Unlinked;
  outC->_L383.location.nominal = kcg_lit_int32(0);
  outC->_L383.location.d_min = kcg_lit_int32(0);
  outC->_L383.location.d_max = kcg_lit_int32(0);
  outC->_L383.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.valid = kcg_true;
  outC->_L383.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L383.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L383.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L383.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L383.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L383.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L383.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L383.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L383.infoFromPassing.valid = kcg_true;
  outC->_L383.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L383.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L383.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L383.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L383.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L383.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L383.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L383.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L383.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L383.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L383.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L383.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L383.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L383.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx10 = 0; idx10 < 33; idx10++) {
    outC->_L383.infoFromPassing.linkedBGs[idx10].valid = kcg_true;
    outC->_L383.infoFromPassing.linkedBGs[idx10].nid_LRBG = kcg_lit_int32(0);
    outC->_L383.infoFromPassing.linkedBGs[idx10].q_dir = Q_DIR_Reverse;
    outC->_L383.infoFromPassing.linkedBGs[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L383.infoFromPassing.linkedBGs[idx10].d_link = kcg_lit_int32(0);
    outC->_L383.infoFromPassing.linkedBGs[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L383.infoFromPassing.linkedBGs[idx10].nid_c = kcg_lit_int32(0);
    outC->_L383.infoFromPassing.linkedBGs[idx10].nid_bg = kcg_lit_int32(0);
    outC->_L383.infoFromPassing.linkedBGs[idx10].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L383.infoFromPassing.linkedBGs[idx10].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L383.infoFromPassing.linkedBGs[idx10].q_locacc = kcg_lit_int32(0);
  }
  outC->_L383.missed = kcg_true;
  outC->_L336.valid = kcg_true;
  outC->_L336.nid_c = kcg_lit_int32(0);
  outC->_L336.nid_bg = kcg_lit_int32(0);
  outC->_L336.q_link = Q_LINK_Unlinked;
  outC->_L336.location.nominal = kcg_lit_int32(0);
  outC->_L336.location.d_min = kcg_lit_int32(0);
  outC->_L336.location.d_max = kcg_lit_int32(0);
  outC->_L336.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.valid = kcg_true;
  outC->_L336.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L336.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L336.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L336.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L336.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L336.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L336.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L336.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L336.infoFromPassing.valid = kcg_true;
  outC->_L336.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L336.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L336.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L336.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L336.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L336.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L336.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L336.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L336.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L336.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L336.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L336.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L336.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L336.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx11 = 0; idx11 < 33; idx11++) {
    outC->_L336.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
    outC->_L336.infoFromPassing.linkedBGs[idx11].nid_LRBG = kcg_lit_int32(0);
    outC->_L336.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
    outC->_L336.infoFromPassing.linkedBGs[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L336.infoFromPassing.linkedBGs[idx11].d_link = kcg_lit_int32(0);
    outC->_L336.infoFromPassing.linkedBGs[idx11].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L336.infoFromPassing.linkedBGs[idx11].nid_c = kcg_lit_int32(0);
    outC->_L336.infoFromPassing.linkedBGs[idx11].nid_bg = kcg_lit_int32(0);
    outC->_L336.infoFromPassing.linkedBGs[idx11].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L336.infoFromPassing.linkedBGs[idx11].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L336.infoFromPassing.linkedBGs[idx11].q_locacc = kcg_lit_int32(0);
  }
  outC->_L336.missed = kcg_true;
  outC->_L335 = kcg_true;
  outC->_L334 = kcg_true;
  outC->_L333 = kcg_true;
  outC->_L332 = kcg_true;
  outC->_L331.valid = kcg_true;
  outC->_L331.BG_Header.valid = kcg_true;
  outC->_L331.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L331.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L331.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L331.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L331.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L331.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L331.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L331.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L331.BG_Header.bgPosition.valid = kcg_true;
  outC->_L331.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L331.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L331.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L331.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L331.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L331.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L331.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L331.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L331.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L331.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L331.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L331.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L331.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L331.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L331.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L331.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L331.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L331.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx12 = 0; idx12 < 33; idx12++) {
    outC->_L331.linkedBGs[idx12].valid = kcg_true;
    outC->_L331.linkedBGs[idx12].nid_LRBG = kcg_lit_int32(0);
    outC->_L331.linkedBGs[idx12].q_dir = Q_DIR_Reverse;
    outC->_L331.linkedBGs[idx12].q_scale = Q_SCALE_10_cm_scale;
    outC->_L331.linkedBGs[idx12].d_link = kcg_lit_int32(0);
    outC->_L331.linkedBGs[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L331.linkedBGs[idx12].nid_c = kcg_lit_int32(0);
    outC->_L331.linkedBGs[idx12].nid_bg = kcg_lit_int32(0);
    outC->_L331.linkedBGs[idx12].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L331.linkedBGs[idx12].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L331.linkedBGs[idx12].q_locacc = kcg_lit_int32(0);
  }
  outC->_L321 = kcg_true;
  outC->_L324.valid = kcg_true;
  outC->_L324.nid_c = kcg_lit_int32(0);
  outC->_L324.nid_bg = kcg_lit_int32(0);
  outC->_L324.q_link = Q_LINK_Unlinked;
  outC->_L324.location.nominal = kcg_lit_int32(0);
  outC->_L324.location.d_min = kcg_lit_int32(0);
  outC->_L324.location.d_max = kcg_lit_int32(0);
  outC->_L324.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.valid = kcg_true;
  outC->_L324.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L324.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L324.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L324.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L324.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L324.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L324.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L324.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L324.infoFromPassing.valid = kcg_true;
  outC->_L324.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L324.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L324.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L324.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L324.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L324.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L324.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L324.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L324.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L324.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L324.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L324.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L324.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L324.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L324.infoFromPassing.linkedBGs[idx13].valid = kcg_true;
    outC->_L324.infoFromPassing.linkedBGs[idx13].nid_LRBG = kcg_lit_int32(0);
    outC->_L324.infoFromPassing.linkedBGs[idx13].q_dir = Q_DIR_Reverse;
    outC->_L324.infoFromPassing.linkedBGs[idx13].q_scale = Q_SCALE_10_cm_scale;
    outC->_L324.infoFromPassing.linkedBGs[idx13].d_link = kcg_lit_int32(0);
    outC->_L324.infoFromPassing.linkedBGs[idx13].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L324.infoFromPassing.linkedBGs[idx13].nid_c = kcg_lit_int32(0);
    outC->_L324.infoFromPassing.linkedBGs[idx13].nid_bg = kcg_lit_int32(0);
    outC->_L324.infoFromPassing.linkedBGs[idx13].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L324.infoFromPassing.linkedBGs[idx13].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L324.infoFromPassing.linkedBGs[idx13].q_locacc = kcg_lit_int32(0);
  }
  outC->_L324.missed = kcg_true;
  outC->_L323 = kcg_lit_int32(0);
  outC->_L322 = kcg_true;
  outC->_L327.valid = kcg_true;
  outC->_L327.timestamp = kcg_lit_int32(0);
  outC->_L327.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L327.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L327.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L327.trainPositionDerivedFromLastLinkedBG.nominal = kcg_lit_int32(0);
  outC->_L327.trainPositionDerivedFromLastLinkedBG.d_min = kcg_lit_int32(0);
  outC->_L327.trainPositionDerivedFromLastLinkedBG.d_max = kcg_lit_int32(0);
  outC->_L327.trainPositionDerivedFromLastUnlinkedBG.nominal = kcg_lit_int32(0);
  outC->_L327.trainPositionDerivedFromLastUnlinkedBG.d_min = kcg_lit_int32(0);
  outC->_L327.trainPositionDerivedFromLastUnlinkedBG.d_max = kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.valid = kcg_true;
  outC->_L327.prevPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L327.prevPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L327.prevPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L327.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L327.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L327.prevPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L327.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L327.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L327.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L327.prevPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L327.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx14].valid =
      kcg_true;
    outC->_L327.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx14].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L327.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx14].q_dir =
      Q_DIR_Reverse;
    outC->_L327.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx14].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L327.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx14].d_link =
      kcg_lit_int32(0);
    outC->_L327.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L327.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx14].nid_c =
      kcg_lit_int32(0);
    outC->_L327.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx14].nid_bg =
      kcg_lit_int32(0);
    outC->_L327.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L327.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L327.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx14].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L327.prevPassedLinkedBG.missed = kcg_true;
  outC->_L327.lastPassedLinkedBG.valid = kcg_true;
  outC->_L327.lastPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L327.lastPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L327.lastPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L327.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L327.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L327.lastPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L327.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L327.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L327.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L327.lastPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->_L327.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx15].valid =
      kcg_true;
    outC->_L327.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx15].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L327.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx15].q_dir =
      Q_DIR_Reverse;
    outC->_L327.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx15].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L327.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx15].d_link =
      kcg_lit_int32(0);
    outC->_L327.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L327.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx15].nid_c =
      kcg_lit_int32(0);
    outC->_L327.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx15].nid_bg =
      kcg_lit_int32(0);
    outC->_L327.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L327.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L327.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx15].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L327.lastPassedLinkedBG.missed = kcg_true;
  outC->_L327.lastPassedUnlinkedBG.valid = kcg_true;
  outC->_L327.lastPassedUnlinkedBG.nid_c = kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.nid_bg = kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->_L327.lastPassedUnlinkedBG.location.nominal = kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.location.d_min = kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.location.d_max = kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(
      0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(
      0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L327.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L327.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->_L327.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx16].valid =
      kcg_true;
    outC->_L327.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx16].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L327.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx16].q_dir =
      Q_DIR_Reverse;
    outC->_L327.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx16].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L327.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx16].d_link =
      kcg_lit_int32(0);
    outC->_L327.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L327.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx16].nid_c =
      kcg_lit_int32(0);
    outC->_L327.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx16].nid_bg =
      kcg_lit_int32(0);
    outC->_L327.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L327.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx16].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L327.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx16].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L327.lastPassedUnlinkedBG.missed = kcg_true;
  outC->_L327.speed = kcg_lit_int32(0);
  outC->_L327.linkingIsUsedOnboard = kcg_true;
  outC->_L329.nominal = kcg_lit_int32(0);
  outC->_L329.d_min = kcg_lit_int32(0);
  outC->_L329.d_max = kcg_lit_int32(0);
  outC->_L309.valid = kcg_true;
  outC->_L309.source = msrc_undefined_Common_Types_Pkg;
  outC->_L309.radioMetadata.t_train_reference = kcg_true;
  outC->_L309.radioMetadata.nid_em = kcg_true;
  outC->_L309.radioMetadata.q_scale = kcg_true;
  outC->_L309.radioMetadata.d_sr = kcg_true;
  outC->_L309.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L309.radioMetadata.d_ref = kcg_true;
  outC->_L309.radioMetadata.q_dir = kcg_true;
  outC->_L309.radioMetadata.d_emergencystop = kcg_true;
  outC->_L309.radioMetadata.m_version = kcg_true;
  outC->_L309.BG_Common_Header.valid = kcg_true;
  outC->_L309.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L309.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L309.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L309.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L309.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L309.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L309.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L309.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L309.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L309.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L309.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L309.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L309.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L309.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L309.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L309.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L309.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L309.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L309.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L309.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L309.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L309.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L309.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L309.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L309.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L309.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L309.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L309.packets.PacketHeaders[idx17].nid_packet = kcg_lit_int32(0);
    outC->_L309.packets.PacketHeaders[idx17].q_dir = Q_DIR_Reverse;
    outC->_L309.packets.PacketHeaders[idx17].valid = kcg_true;
    outC->_L309.packets.PacketHeaders[idx17].startAddress = kcg_lit_int32(0);
    outC->_L309.packets.PacketHeaders[idx17].endAddress = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 500; idx18++) {
    outC->_L309.packets.PacketData[idx18] = kcg_lit_int32(0);
  }
  outC->_L309.sendingRBC.valid = kcg_true;
  outC->_L309.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L309.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L309.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L306.valid = kcg_true;
  outC->_L306.BG_Header.valid = kcg_true;
  outC->_L306.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L306.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L306.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L306.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L306.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L306.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L306.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L306.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L306.BG_Header.bgPosition.valid = kcg_true;
  outC->_L306.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L306.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L306.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L306.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L306.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L306.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L306.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L306.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L306.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L306.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L306.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L306.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L306.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L306.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L306.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L306.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L306.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L306.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx19 = 0; idx19 < 33; idx19++) {
    outC->_L306.linkedBGs[idx19].valid = kcg_true;
    outC->_L306.linkedBGs[idx19].nid_LRBG = kcg_lit_int32(0);
    outC->_L306.linkedBGs[idx19].q_dir = Q_DIR_Reverse;
    outC->_L306.linkedBGs[idx19].q_scale = Q_SCALE_10_cm_scale;
    outC->_L306.linkedBGs[idx19].d_link = kcg_lit_int32(0);
    outC->_L306.linkedBGs[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L306.linkedBGs[idx19].nid_c = kcg_lit_int32(0);
    outC->_L306.linkedBGs[idx19].nid_bg = kcg_lit_int32(0);
    outC->_L306.linkedBGs[idx19].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L306.linkedBGs[idx19].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L306.linkedBGs[idx19].q_locacc = kcg_lit_int32(0);
  }
  outC->_L307 = kcg_true;
  outC->_L308 = kcg_true;
  outC->_L260 = kcg_true;
  outC->_L259 = kcg_true;
  outC->_L258 = kcg_true;
  outC->_L256.valid = kcg_true;
  outC->_L256.nid_c = kcg_lit_int32(0);
  outC->_L256.nid_bg = kcg_lit_int32(0);
  outC->_L256.q_link = Q_LINK_Unlinked;
  outC->_L256.location.nominal = kcg_lit_int32(0);
  outC->_L256.location.d_min = kcg_lit_int32(0);
  outC->_L256.location.d_max = kcg_lit_int32(0);
  outC->_L256.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.valid = kcg_true;
  outC->_L256.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L256.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L256.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L256.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L256.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L256.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L256.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L256.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L256.infoFromPassing.valid = kcg_true;
  outC->_L256.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L256.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L256.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L256.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L256.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L256.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L256.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L256.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->_L256.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L256.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L256.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L256.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L256.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L256.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->_L256.infoFromPassing.linkedBGs[idx20].valid = kcg_true;
    outC->_L256.infoFromPassing.linkedBGs[idx20].nid_LRBG = kcg_lit_int32(0);
    outC->_L256.infoFromPassing.linkedBGs[idx20].q_dir = Q_DIR_Reverse;
    outC->_L256.infoFromPassing.linkedBGs[idx20].q_scale = Q_SCALE_10_cm_scale;
    outC->_L256.infoFromPassing.linkedBGs[idx20].d_link = kcg_lit_int32(0);
    outC->_L256.infoFromPassing.linkedBGs[idx20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L256.infoFromPassing.linkedBGs[idx20].nid_c = kcg_lit_int32(0);
    outC->_L256.infoFromPassing.linkedBGs[idx20].nid_bg = kcg_lit_int32(0);
    outC->_L256.infoFromPassing.linkedBGs[idx20].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L256.infoFromPassing.linkedBGs[idx20].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L256.infoFromPassing.linkedBGs[idx20].q_locacc = kcg_lit_int32(0);
  }
  outC->_L256.missed = kcg_true;
  outC->_L243 = kcg_true;
  outC->_L244 = kcg_true;
  outC->_L245 = kcg_true;
  outC->_L246 = kcg_true;
  outC->_L247.valid = kcg_true;
  outC->_L247.BG_Header.valid = kcg_true;
  outC->_L247.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L247.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L247.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L247.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L247.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L247.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L247.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L247.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L247.BG_Header.bgPosition.valid = kcg_true;
  outC->_L247.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L247.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L247.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L247.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L247.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L247.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L247.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L247.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L247.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L247.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L247.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L247.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L247.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L247.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L247.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L247.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L247.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L247.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->_L247.linkedBGs[idx21].valid = kcg_true;
    outC->_L247.linkedBGs[idx21].nid_LRBG = kcg_lit_int32(0);
    outC->_L247.linkedBGs[idx21].q_dir = Q_DIR_Reverse;
    outC->_L247.linkedBGs[idx21].q_scale = Q_SCALE_10_cm_scale;
    outC->_L247.linkedBGs[idx21].d_link = kcg_lit_int32(0);
    outC->_L247.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L247.linkedBGs[idx21].nid_c = kcg_lit_int32(0);
    outC->_L247.linkedBGs[idx21].nid_bg = kcg_lit_int32(0);
    outC->_L247.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L247.linkedBGs[idx21].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L247.linkedBGs[idx21].q_locacc = kcg_lit_int32(0);
  }
  outC->_L248 = kcg_true;
  outC->_L238 = kcg_true;
  outC->_L216 = kcg_true;
  outC->_L207.nid_engine = kcg_lit_int32(0);
  outC->_L207.nid_operational = kcg_lit_int32(0);
  outC->_L207.l_train = kcg_lit_int32(0);
  outC->_L207.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L207.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L207.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L207.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L207.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L207.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L207.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L207.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L207.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L207.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L207.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L207.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L201.valid = kcg_true;
  outC->_L201.timestamp = kcg_lit_int32(0);
  outC->_L201.odo.o_nominal = kcg_lit_int32(0);
  outC->_L201.odo.o_min = kcg_lit_int32(0);
  outC->_L201.odo.o_max = kcg_lit_int32(0);
  outC->_L201.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L201.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L201.speed.v_lower = kcg_lit_int32(0);
  outC->_L201.speed.v_upper = kcg_lit_int32(0);
  outC->_L201.acceleration = kcg_lit_int32(0);
  outC->_L201.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L201.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L200.valid = kcg_true;
  outC->_L200.timestamp = kcg_lit_int32(0);
  outC->_L200.trainPositionIsUnknown = kcg_true;
  outC->_L200.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L200.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L200.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L200.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L200.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L200.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L200.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L200.LRBG.valid = kcg_true;
  outC->_L200.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L200.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L200.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L200.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L200.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L200.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L200.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L200.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L200.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L200.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L200.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L200.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L200.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L200.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L200.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L200.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L200.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L200.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L200.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L200.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L200.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L200.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L200.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L200.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L200.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx22 = 0; idx22 < 33; idx22++) {
    outC->_L200.LRBG.infoFromPassing.linkedBGs[idx22].valid = kcg_true;
    outC->_L200.LRBG.infoFromPassing.linkedBGs[idx22].nid_LRBG = kcg_lit_int32(0);
    outC->_L200.LRBG.infoFromPassing.linkedBGs[idx22].q_dir = Q_DIR_Reverse;
    outC->_L200.LRBG.infoFromPassing.linkedBGs[idx22].q_scale = Q_SCALE_10_cm_scale;
    outC->_L200.LRBG.infoFromPassing.linkedBGs[idx22].d_link = kcg_lit_int32(0);
    outC->_L200.LRBG.infoFromPassing.linkedBGs[idx22].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L200.LRBG.infoFromPassing.linkedBGs[idx22].nid_c = kcg_lit_int32(0);
    outC->_L200.LRBG.infoFromPassing.linkedBGs[idx22].nid_bg = kcg_lit_int32(0);
    outC->_L200.LRBG.infoFromPassing.linkedBGs[idx22].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L200.LRBG.infoFromPassing.linkedBGs[idx22].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L200.LRBG.infoFromPassing.linkedBGs[idx22].q_locacc = kcg_lit_int32(0);
  }
  outC->_L200.LRBG.missed = kcg_true;
  outC->_L200.prvLRBG.valid = kcg_true;
  outC->_L200.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L200.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L200.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L200.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L200.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L200.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L200.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L200.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L200.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L200.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L200.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L200.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L200.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L200.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L200.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx23 = 0; idx23 < 33; idx23++) {
    outC->_L200.prvLRBG.infoFromPassing.linkedBGs[idx23].valid = kcg_true;
    outC->_L200.prvLRBG.infoFromPassing.linkedBGs[idx23].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L200.prvLRBG.infoFromPassing.linkedBGs[idx23].q_dir = Q_DIR_Reverse;
    outC->_L200.prvLRBG.infoFromPassing.linkedBGs[idx23].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L200.prvLRBG.infoFromPassing.linkedBGs[idx23].d_link = kcg_lit_int32(0);
    outC->_L200.prvLRBG.infoFromPassing.linkedBGs[idx23].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L200.prvLRBG.infoFromPassing.linkedBGs[idx23].nid_c = kcg_lit_int32(0);
    outC->_L200.prvLRBG.infoFromPassing.linkedBGs[idx23].nid_bg = kcg_lit_int32(0);
    outC->_L200.prvLRBG.infoFromPassing.linkedBGs[idx23].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L200.prvLRBG.infoFromPassing.linkedBGs[idx23].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L200.prvLRBG.infoFromPassing.linkedBGs[idx23].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L200.prvLRBG.missed = kcg_true;
  outC->_L200.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L200.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L200.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L200.linkingIsUsedOnboard = kcg_true;
  outC->_L200.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L200.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L200.maxSafeRearEndPosition = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 41; idx25++) {
    outC->BGs_preloc[idx25].valid = kcg_true;
    outC->BGs_preloc[idx25].nid_c = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].nid_bg = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].q_link = Q_LINK_Unlinked;
    outC->BGs_preloc[idx25].location.nominal = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].location.d_min = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].location.d_max = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].seqNoOnTrack = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.valid = kcg_true;
    outC->BGs_preloc[idx25].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs_preloc[idx25].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs_preloc[idx25].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->BGs_preloc[idx25].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs_preloc[idx25].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs_preloc[idx25].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs_preloc[idx25].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.valid = kcg_true;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs_preloc[idx25].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx24 = 0; idx24 < 33; idx24++) {
      outC->BGs_preloc[idx25].infoFromPassing.linkedBGs[idx24].valid = kcg_true;
      outC->BGs_preloc[idx25].infoFromPassing.linkedBGs[idx24].nid_LRBG =
        kcg_lit_int32(0);
      outC->BGs_preloc[idx25].infoFromPassing.linkedBGs[idx24].q_dir = Q_DIR_Reverse;
      outC->BGs_preloc[idx25].infoFromPassing.linkedBGs[idx24].q_scale =
        Q_SCALE_10_cm_scale;
      outC->BGs_preloc[idx25].infoFromPassing.linkedBGs[idx24].d_link =
        kcg_lit_int32(0);
      outC->BGs_preloc[idx25].infoFromPassing.linkedBGs[idx24].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs_preloc[idx25].infoFromPassing.linkedBGs[idx24].nid_c =
        kcg_lit_int32(0);
      outC->BGs_preloc[idx25].infoFromPassing.linkedBGs[idx24].nid_bg =
        kcg_lit_int32(0);
      outC->BGs_preloc[idx25].infoFromPassing.linkedBGs[idx24].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs_preloc[idx25].infoFromPassing.linkedBGs[idx24].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs_preloc[idx25].infoFromPassing.linkedBGs[idx24].q_locacc =
        kcg_lit_int32(0);
    }
    outC->BGs_preloc[idx25].missed = kcg_true;
  }
  outC->missedLinkedBG.valid = kcg_true;
  outC->missedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->missedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->missedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->missedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->missedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->missedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->missedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->missedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(
      0);
  outC->missedLinkedBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->missedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->missedLinkedBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->missedLinkedBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->missedLinkedBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->missedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->missedLinkedBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->missedLinkedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->missedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->missedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->missedLinkedBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->missedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->missedLinkedBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->missedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->missedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->missedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->missedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->missedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx26 = 0; idx26 < 33; idx26++) {
    outC->missedLinkedBG.infoFromPassing.linkedBGs[idx26].valid = kcg_true;
    outC->missedLinkedBG.infoFromPassing.linkedBGs[idx26].nid_LRBG =
      kcg_lit_int32(0);
    outC->missedLinkedBG.infoFromPassing.linkedBGs[idx26].q_dir = Q_DIR_Reverse;
    outC->missedLinkedBG.infoFromPassing.linkedBGs[idx26].q_scale =
      Q_SCALE_10_cm_scale;
    outC->missedLinkedBG.infoFromPassing.linkedBGs[idx26].d_link = kcg_lit_int32(0);
    outC->missedLinkedBG.infoFromPassing.linkedBGs[idx26].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->missedLinkedBG.infoFromPassing.linkedBGs[idx26].nid_c = kcg_lit_int32(0);
    outC->missedLinkedBG.infoFromPassing.linkedBGs[idx26].nid_bg = kcg_lit_int32(0);
    outC->missedLinkedBG.infoFromPassing.linkedBGs[idx26].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->missedLinkedBG.infoFromPassing.linkedBGs[idx26].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->missedLinkedBG.infoFromPassing.linkedBGs[idx26].q_locacc =
      kcg_lit_int32(0);
  }
  outC->missedLinkedBG.missed = kcg_true;
  outC->twoConsecutiveLinkedBGsMissed = kcg_true;
  outC->linkedBGMissed = kcg_true;
  outC->passedBG_loc.valid = kcg_true;
  outC->passedBG_loc.BG_Header.valid = kcg_true;
  outC->passedBG_loc.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->passedBG_loc.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedBG_loc.BG_Header.q_media = Q_MEDIA_Balise;
  outC->passedBG_loc.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->passedBG_loc.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.nid_c = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.q_link = Q_LINK_Unlinked;
  outC->passedBG_loc.BG_Header.bgPosition.valid = kcg_true;
  outC->passedBG_loc.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedBG_loc.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedBG_loc.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->passedBG_loc.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->passedBG_loc.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->passedBG_loc.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx27 = 0; idx27 < 33; idx27++) {
    outC->passedBG_loc.linkedBGs[idx27].valid = kcg_true;
    outC->passedBG_loc.linkedBGs[idx27].nid_LRBG = kcg_lit_int32(0);
    outC->passedBG_loc.linkedBGs[idx27].q_dir = Q_DIR_Reverse;
    outC->passedBG_loc.linkedBGs[idx27].q_scale = Q_SCALE_10_cm_scale;
    outC->passedBG_loc.linkedBGs[idx27].d_link = kcg_lit_int32(0);
    outC->passedBG_loc.linkedBGs[idx27].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedBG_loc.linkedBGs[idx27].nid_c = kcg_lit_int32(0);
    outC->passedBG_loc.linkedBGs[idx27].nid_bg = kcg_lit_int32(0);
    outC->passedBG_loc.linkedBGs[idx27].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedBG_loc.linkedBGs[idx27].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->passedBG_loc.linkedBGs[idx27].q_locacc = kcg_lit_int32(0);
  }
  outC->trainPositionInfo.valid = kcg_true;
  outC->trainPositionInfo.timestamp = kcg_lit_int32(0);
  outC->trainPositionInfo.trainPosition.nominal = kcg_lit_int32(0);
  outC->trainPositionInfo.trainPosition.d_min = kcg_lit_int32(0);
  outC->trainPositionInfo.trainPosition.d_max = kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastLinkedBG.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.trainPositionDerivedFromLastUnlinkedBG.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.prevPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx28 = 0; idx28 < 33; idx28++) {
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx28].valid =
      kcg_true;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx28].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx28].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx28].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx28].d_link =
      kcg_lit_int32(0);
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx28].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx28].nid_c =
      kcg_lit_int32(0);
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx28].nid_bg =
      kcg_lit_int32(0);
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx28].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx28].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.prevPassedLinkedBG.infoFromPassing.linkedBGs[idx28].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPositionInfo.prevPassedLinkedBG.missed = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.nid_c = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.nid_bg = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedLinkedBG.location.nominal = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.location.d_min = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.location.d_max = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx29 = 0; idx29 < 33; idx29++) {
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx29].valid =
      kcg_true;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx29].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx29].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx29].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx29].d_link =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx29].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx29].nid_c =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx29].nid_bg =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx29].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx29].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.lastPassedLinkedBG.infoFromPassing.linkedBGs[idx29].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPositionInfo.lastPassedLinkedBG.missed = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.nid_c = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.nid_bg = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.q_link = Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.nominal = kcg_lit_int32(
      0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.d_min = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.location.d_max = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.valid = kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx30 = 0; idx30 < 33; idx30++) {
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx30].valid =
      kcg_true;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx30].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx30].q_dir =
      Q_DIR_Reverse;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx30].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx30].d_link =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx30].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx30].nid_c =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx30].nid_bg =
      kcg_lit_int32(0);
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx30].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx30].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPositionInfo.lastPassedUnlinkedBG.infoFromPassing.linkedBGs[idx30].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPositionInfo.lastPassedUnlinkedBG.missed = kcg_true;
  outC->trainPositionInfo.speed = kcg_lit_int32(0);
  outC->trainPositionInfo.linkingIsUsedOnboard = kcg_true;
  outC->positionCalculationNotConsistent = kcg_true;
  outC->passedBG_asPositionedBG.valid = kcg_true;
  outC->passedBG_asPositionedBG.nid_c = kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.nid_bg = kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.q_link = Q_LINK_Unlinked;
  outC->passedBG_asPositionedBG.location.nominal = kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.location.d_min = kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.location.d_max = kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.valid = kcg_true;
  outC->passedBG_asPositionedBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->passedBG_asPositionedBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->passedBG_asPositionedBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->passedBG_asPositionedBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->passedBG_asPositionedBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->passedBG_asPositionedBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->passedBG_asPositionedBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.valid = kcg_true;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->passedBG_asPositionedBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx31 = 0; idx31 < 33; idx31++) {
    outC->passedBG_asPositionedBG.infoFromPassing.linkedBGs[idx31].valid = kcg_true;
    outC->passedBG_asPositionedBG.infoFromPassing.linkedBGs[idx31].nid_LRBG =
      kcg_lit_int32(0);
    outC->passedBG_asPositionedBG.infoFromPassing.linkedBGs[idx31].q_dir =
      Q_DIR_Reverse;
    outC->passedBG_asPositionedBG.infoFromPassing.linkedBGs[idx31].q_scale =
      Q_SCALE_10_cm_scale;
    outC->passedBG_asPositionedBG.infoFromPassing.linkedBGs[idx31].d_link =
      kcg_lit_int32(0);
    outC->passedBG_asPositionedBG.infoFromPassing.linkedBGs[idx31].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedBG_asPositionedBG.infoFromPassing.linkedBGs[idx31].nid_c =
      kcg_lit_int32(0);
    outC->passedBG_asPositionedBG.infoFromPassing.linkedBGs[idx31].nid_bg =
      kcg_lit_int32(0);
    outC->passedBG_asPositionedBG.infoFromPassing.linkedBGs[idx31].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedBG_asPositionedBG.infoFromPassing.linkedBGs[idx31].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->passedBG_asPositionedBG.infoFromPassing.linkedBGs[idx31].q_locacc =
      kcg_lit_int32(0);
  }
  outC->passedBG_asPositionedBG.missed = kcg_true;
  outC->errors_loc.outOfMemSpace = kcg_true;
  outC->errors_loc.passedBG_foundNotWhereExpected = kcg_true;
  outC->errors_loc.positionCalculation_inconsistent = kcg_true;
  outC->errors_loc.linkedBGMissed = kcg_true;
  outC->errors_loc.BGpassedInUnexpectedDirection = kcg_true;
  outC->errors_loc.BG_LinkingConsistencyError = kcg_true;
  outC->errors_loc.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->errors_loc.doubleRepositioningError = kcg_true;
  outC->errors_loc.bg.valid = kcg_true;
  outC->errors_loc.bg.nid_c = kcg_lit_int32(0);
  outC->errors_loc.bg.nid_bg = kcg_lit_int32(0);
  outC->errors_loc.bg.q_link = Q_LINK_Unlinked;
  outC->errors_loc.bg.location.nominal = kcg_lit_int32(0);
  outC->errors_loc.bg.location.d_min = kcg_lit_int32(0);
  outC->errors_loc.bg.location.d_max = kcg_lit_int32(0);
  outC->errors_loc.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.valid = kcg_true;
  outC->errors_loc.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->errors_loc.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->errors_loc.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->errors_loc.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->errors_loc.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->errors_loc.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->errors_loc.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.valid = kcg_true;
  outC->errors_loc.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->errors_loc.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->errors_loc.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->errors_loc.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->errors_loc.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->errors_loc.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->errors_loc.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->errors_loc.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->errors_loc.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->errors_loc.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->errors_loc.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx32 = 0; idx32 < 33; idx32++) {
    outC->errors_loc.bg.infoFromPassing.linkedBGs[idx32].valid = kcg_true;
    outC->errors_loc.bg.infoFromPassing.linkedBGs[idx32].nid_LRBG =
      kcg_lit_int32(0);
    outC->errors_loc.bg.infoFromPassing.linkedBGs[idx32].q_dir = Q_DIR_Reverse;
    outC->errors_loc.bg.infoFromPassing.linkedBGs[idx32].q_scale =
      Q_SCALE_10_cm_scale;
    outC->errors_loc.bg.infoFromPassing.linkedBGs[idx32].d_link = kcg_lit_int32(0);
    outC->errors_loc.bg.infoFromPassing.linkedBGs[idx32].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->errors_loc.bg.infoFromPassing.linkedBGs[idx32].nid_c = kcg_lit_int32(0);
    outC->errors_loc.bg.infoFromPassing.linkedBGs[idx32].nid_bg = kcg_lit_int32(0);
    outC->errors_loc.bg.infoFromPassing.linkedBGs[idx32].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->errors_loc.bg.infoFromPassing.linkedBGs[idx32].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->errors_loc.bg.infoFromPassing.linkedBGs[idx32].q_locacc =
      kcg_lit_int32(0);
  }
  outC->errors_loc.bg.missed = kcg_true;
  outC->onlyBGsAnnouncedViaRadio = kcg_true;
  outC->BG_passed = kcg_true;
  outC->if_BGpassed_or_onlyAnnounced_clock = kcg_true;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.valid = kcg_true;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.valid = kcg_true;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx33 = 0; idx33 < 33; idx33++) {
    outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.linkedBGs[idx33].valid =
      kcg_true;
    outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.linkedBGs[idx33].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.linkedBGs[idx33].q_dir =
      Q_DIR_Reverse;
    outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.linkedBGs[idx33].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.linkedBGs[idx33].d_link =
      kcg_lit_int32(0);
    outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.linkedBGs[idx33].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.linkedBGs[idx33].nid_c =
      kcg_lit_int32(0);
    outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.linkedBGs[idx33].nid_bg =
      kcg_lit_int32(0);
    outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.linkedBGs[idx33].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.linkedBGs[idx33].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L17_then_else_if_BGpassed_or_onlyAnnounced.linkedBGs[idx33].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.nid_engine = kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.nid_operational =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.l_train = kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.d_baliseAntenna_2_frontend.nominal =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.d_baliseAntenna_2_frontend.d_min =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.d_baliseAntenna_2_frontend.d_max =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.d_frontend_2_rearend.nominal =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.d_frontend_2_rearend.d_min =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.d_frontend_2_rearend.d_max =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.locationAccuracy_DefaultValue.nominal =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.locationAccuracy_DefaultValue.d_min =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.locationAccuracy_DefaultValue.d_max =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.centerDetectionAcc_DefaultValue.nominal =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.centerDetectionAcc_DefaultValue.d_min =
    kcg_lit_int32(0);
  outC->_L16_then_else_if_BGpassed_or_onlyAnnounced.centerDetectionAcc_DefaultValue.d_max =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.outOfMemSpace = kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.passedBG_foundNotWhereExpected =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.positionCalculation_inconsistent =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.linkedBGMissed = kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.BGpassedInUnexpectedDirection =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.BG_LinkingConsistencyError =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.twoConsecutiveLinkedBGs_missed =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.doubleRepositioningError =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.valid = kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.nid_c = kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.nid_bg = kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.q_link = Q_LINK_Unlinked;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.location.nominal =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.location.d_min =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.location.d_max =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.seqNoOnTrack =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.valid =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.valid =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx34 = 0; idx34 < 33; idx34++) {
    outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx34].valid =
      kcg_true;
    outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx34].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx34].q_dir =
      Q_DIR_Reverse;
    outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx34].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx34].d_link =
      kcg_lit_int32(0);
    outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx34].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx34].nid_c =
      kcg_lit_int32(0);
    outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx34].nid_bg =
      kcg_lit_int32(0);
    outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx34].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx34].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx34].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L15_then_else_if_BGpassed_or_onlyAnnounced.bg.missed = kcg_true;
  for (idx36 = 0; idx36 < 41; idx36++) {
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].valid = kcg_true;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].nid_c =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].nid_bg =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].q_link =
      Q_LINK_Unlinked;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].location.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].location.d_min =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].location.d_max =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].seqNoOnTrack =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.valid =
      kcg_true;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.d_link.d_min =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.d_link.d_max =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.linkingInfo.valid =
      kcg_true;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.valid =
      kcg_true;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.valid =
      kcg_true;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx35 = 0; idx35 < 33; idx35++) {
      outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.linkedBGs[idx35].valid =
        kcg_true;
      outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.linkedBGs[idx35].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.linkedBGs[idx35].q_dir =
        Q_DIR_Reverse;
      outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.linkedBGs[idx35].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.linkedBGs[idx35].d_link =
        kcg_lit_int32(0);
      outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.linkedBGs[idx35].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.linkedBGs[idx35].nid_c =
        kcg_lit_int32(0);
      outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.linkedBGs[idx35].nid_bg =
        kcg_lit_int32(0);
      outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.linkedBGs[idx35].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.linkedBGs[idx35].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].infoFromPassing.linkedBGs[idx35].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L14_then_else_if_BGpassed_or_onlyAnnounced[idx36].missed = kcg_true;
  }
  outC->_L13_then_else_if_BGpassed_or_onlyAnnounced = kcg_true;
  for (idx38 = 0; idx38 < 41; idx38++) {
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].valid = kcg_true;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].nid_c =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].nid_bg =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].q_link =
      Q_LINK_Unlinked;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].location.nominal =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].location.d_min =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].location.d_max =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].seqNoOnTrack =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.valid =
      kcg_true;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.d_link.d_min =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.d_link.d_max =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.linkingInfo.valid =
      kcg_true;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.valid =
      kcg_true;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.valid =
      kcg_true;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx37 = 0; idx37 < 33; idx37++) {
      outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.linkedBGs[idx37].valid =
        kcg_true;
      outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.linkedBGs[idx37].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.linkedBGs[idx37].q_dir =
        Q_DIR_Reverse;
      outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.linkedBGs[idx37].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.linkedBGs[idx37].d_link =
        kcg_lit_int32(0);
      outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.linkedBGs[idx37].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.linkedBGs[idx37].nid_c =
        kcg_lit_int32(0);
      outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.linkedBGs[idx37].nid_bg =
        kcg_lit_int32(0);
      outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.linkedBGs[idx37].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.linkedBGs[idx37].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].infoFromPassing.linkedBGs[idx37].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L9_then_else_if_BGpassed_or_onlyAnnounced[idx38].missed = kcg_true;
  }
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.outOfMemSpace = kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.passedBG_foundNotWhereExpected =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.positionCalculation_inconsistent =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.linkedBGMissed = kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.BGpassedInUnexpectedDirection =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.BG_LinkingConsistencyError =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.twoConsecutiveLinkedBGs_missed =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.doubleRepositioningError =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.valid = kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.nid_c = kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.nid_bg = kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.q_link = Q_LINK_Unlinked;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.location.nominal =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.location.d_min =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.location.d_max =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.seqNoOnTrack =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.valid =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.valid =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx39 = 0; idx39 < 33; idx39++) {
    outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx39].valid =
      kcg_true;
    outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx39].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx39].q_dir =
      Q_DIR_Reverse;
    outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx39].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx39].d_link =
      kcg_lit_int32(0);
    outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx39].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx39].nid_c =
      kcg_lit_int32(0);
    outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx39].nid_bg =
      kcg_lit_int32(0);
    outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx39].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx39].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx39].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L2_then_else_if_BGpassed_or_onlyAnnounced.bg.missed = kcg_true;
  for (idx41 = 0; idx41 < 41; idx41++) {
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].valid = kcg_true;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].nid_c =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].nid_bg =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].q_link =
      Q_LINK_Unlinked;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].location.nominal =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].location.d_min =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].location.d_max =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].seqNoOnTrack =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.valid =
      kcg_true;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.d_link.d_min =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.d_link.d_max =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.linkingInfo.valid =
      kcg_true;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.valid =
      kcg_true;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.valid =
      kcg_true;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx40 = 0; idx40 < 33; idx40++) {
      outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.linkedBGs[idx40].valid =
        kcg_true;
      outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.linkedBGs[idx40].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.linkedBGs[idx40].q_dir =
        Q_DIR_Reverse;
      outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.linkedBGs[idx40].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.linkedBGs[idx40].d_link =
        kcg_lit_int32(0);
      outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.linkedBGs[idx40].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.linkedBGs[idx40].nid_c =
        kcg_lit_int32(0);
      outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.linkedBGs[idx40].nid_bg =
        kcg_lit_int32(0);
      outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.linkedBGs[idx40].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.linkedBGs[idx40].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].infoFromPassing.linkedBGs[idx40].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L6_else_else_if_BGpassed_or_onlyAnnounced[idx41].missed = kcg_true;
  }
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.outOfMemSpace = kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.passedBG_foundNotWhereExpected =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.positionCalculation_inconsistent =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.linkedBGMissed = kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.BGpassedInUnexpectedDirection =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.BG_LinkingConsistencyError =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.twoConsecutiveLinkedBGs_missed =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.doubleRepositioningError =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.valid = kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.nid_c = kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.nid_bg = kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.q_link = Q_LINK_Unlinked;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.location.nominal =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.location.d_min =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.location.d_max =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.seqNoOnTrack =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.valid =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.valid =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx42 = 0; idx42 < 33; idx42++) {
    outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx42].valid =
      kcg_true;
    outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx42].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx42].q_dir =
      Q_DIR_Reverse;
    outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx42].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx42].d_link =
      kcg_lit_int32(0);
    outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx42].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx42].nid_c =
      kcg_lit_int32(0);
    outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx42].nid_bg =
      kcg_lit_int32(0);
    outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx42].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx42].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx42].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L4_else_else_if_BGpassed_or_onlyAnnounced.bg.missed = kcg_true;
  outC->else_clock_if_BGpassed_or_onlyAnnounced = kcg_true;
  for (idx44 = 0; idx44 < 41; idx44++) {
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].valid = kcg_true;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].nid_c = kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].nid_bg = kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].q_link = Q_LINK_Unlinked;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].location.nominal =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].location.d_min =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].location.d_max =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].seqNoOnTrack =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.valid =
      kcg_true;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.d_link.d_min =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.d_link.d_max =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.linkingInfo.valid =
      kcg_true;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.valid =
      kcg_true;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.valid =
      kcg_true;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx43 = 0; idx43 < 33; idx43++) {
      outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.linkedBGs[idx43].valid =
        kcg_true;
      outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.linkedBGs[idx43].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.linkedBGs[idx43].q_dir =
        Q_DIR_Reverse;
      outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.linkedBGs[idx43].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.linkedBGs[idx43].d_link =
        kcg_lit_int32(0);
      outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.linkedBGs[idx43].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.linkedBGs[idx43].nid_c =
        kcg_lit_int32(0);
      outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.linkedBGs[idx43].nid_bg =
        kcg_lit_int32(0);
      outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.linkedBGs[idx43].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.linkedBGs[idx43].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].infoFromPassing.linkedBGs[idx43].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L19_then_if_BGpassed_or_onlyAnnounced[idx44].missed = kcg_true;
  }
  outC->_L16_then_if_BGpassed_or_onlyAnnounced = kcg_true;
  for (idx46 = 0; idx46 < 41; idx46++) {
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].valid = kcg_true;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].nid_c = kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].nid_bg = kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].q_link = Q_LINK_Unlinked;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].location.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].location.d_min =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].location.d_max =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].seqNoOnTrack =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.valid =
      kcg_true;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.d_link.d_min =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.d_link.d_max =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.linkingInfo.valid =
      kcg_true;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.valid =
      kcg_true;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.valid =
      kcg_true;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx45 = 0; idx45 < 33; idx45++) {
      outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.linkedBGs[idx45].valid =
        kcg_true;
      outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.linkedBGs[idx45].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.linkedBGs[idx45].q_dir =
        Q_DIR_Reverse;
      outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.linkedBGs[idx45].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.linkedBGs[idx45].d_link =
        kcg_lit_int32(0);
      outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.linkedBGs[idx45].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.linkedBGs[idx45].nid_c =
        kcg_lit_int32(0);
      outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.linkedBGs[idx45].nid_bg =
        kcg_lit_int32(0);
      outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.linkedBGs[idx45].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.linkedBGs[idx45].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].infoFromPassing.linkedBGs[idx45].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L14_then_if_BGpassed_or_onlyAnnounced[idx46].missed = kcg_true;
  }
  for (idx48 = 0; idx48 < 41; idx48++) {
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].valid = kcg_true;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].nid_c = kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].nid_bg = kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].q_link = Q_LINK_Unlinked;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].location.nominal =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].location.d_min =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].location.d_max =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].seqNoOnTrack =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.valid =
      kcg_true;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.d_link.d_min =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.d_link.d_max =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.linkingInfo.valid =
      kcg_true;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.valid =
      kcg_true;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.valid =
      kcg_true;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx47 = 0; idx47 < 33; idx47++) {
      outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.linkedBGs[idx47].valid =
        kcg_true;
      outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.linkedBGs[idx47].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.linkedBGs[idx47].q_dir =
        Q_DIR_Reverse;
      outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.linkedBGs[idx47].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.linkedBGs[idx47].d_link =
        kcg_lit_int32(0);
      outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.linkedBGs[idx47].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.linkedBGs[idx47].nid_c =
        kcg_lit_int32(0);
      outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.linkedBGs[idx47].nid_bg =
        kcg_lit_int32(0);
      outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.linkedBGs[idx47].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.linkedBGs[idx47].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].infoFromPassing.linkedBGs[idx47].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L10_then_if_BGpassed_or_onlyAnnounced[idx48].missed = kcg_true;
  }
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.outOfMemSpace = kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.passedBG_foundNotWhereExpected =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.positionCalculation_inconsistent =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.linkedBGMissed = kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.BGpassedInUnexpectedDirection =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.BG_LinkingConsistencyError =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.twoConsecutiveLinkedBGs_missed =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.doubleRepositioningError =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.valid = kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.nid_c = kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.nid_bg = kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.q_link = Q_LINK_Unlinked;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.location.nominal =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.location.d_min =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.location.d_max =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.valid =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.valid =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx49 = 0; idx49 < 33; idx49++) {
    outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx49].valid =
      kcg_true;
    outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx49].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx49].q_dir =
      Q_DIR_Reverse;
    outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx49].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx49].d_link =
      kcg_lit_int32(0);
    outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx49].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx49].nid_c =
      kcg_lit_int32(0);
    outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx49].nid_bg =
      kcg_lit_int32(0);
    outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx49].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx49].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.infoFromPassing.linkedBGs[idx49].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L11_then_if_BGpassed_or_onlyAnnounced.bg.missed = kcg_true;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.valid = kcg_true;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.nid_c = kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.nid_bg = kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.q_link = Q_LINK_Unlinked;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.location.nominal = kcg_lit_int32(
      0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.location.d_min = kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.location.d_max = kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.valid = kcg_true;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.valid = kcg_true;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx50 = 0; idx50 < 33; idx50++) {
    outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.linkedBGs[idx50].valid =
      kcg_true;
    outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.linkedBGs[idx50].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.linkedBGs[idx50].q_dir =
      Q_DIR_Reverse;
    outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.linkedBGs[idx50].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.linkedBGs[idx50].d_link =
      kcg_lit_int32(0);
    outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.linkedBGs[idx50].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.linkedBGs[idx50].nid_c =
      kcg_lit_int32(0);
    outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.linkedBGs[idx50].nid_bg =
      kcg_lit_int32(0);
    outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.linkedBGs[idx50].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.linkedBGs[idx50].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L12_then_if_BGpassed_or_onlyAnnounced.infoFromPassing.linkedBGs[idx50].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L12_then_if_BGpassed_or_onlyAnnounced.missed = kcg_true;
  for (idx52 = 0; idx52 < 41; idx52++) {
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].valid = kcg_true;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].nid_c = kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].nid_bg = kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].q_link = Q_LINK_Unlinked;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].location.nominal =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].location.d_min =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].location.d_max =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].seqNoOnTrack =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.valid =
      kcg_true;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.d_link.d_min =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.d_link.d_max =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.linkingInfo.valid =
      kcg_true;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.valid =
      kcg_true;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.valid =
      kcg_true;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx51 = 0; idx51 < 33; idx51++) {
      outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.linkedBGs[idx51].valid =
        kcg_true;
      outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.linkedBGs[idx51].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.linkedBGs[idx51].q_dir =
        Q_DIR_Reverse;
      outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.linkedBGs[idx51].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.linkedBGs[idx51].d_link =
        kcg_lit_int32(0);
      outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.linkedBGs[idx51].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.linkedBGs[idx51].nid_c =
        kcg_lit_int32(0);
      outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.linkedBGs[idx51].nid_bg =
        kcg_lit_int32(0);
      outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.linkedBGs[idx51].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.linkedBGs[idx51].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].infoFromPassing.linkedBGs[idx51].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L9_then_if_BGpassed_or_onlyAnnounced[idx52].missed = kcg_true;
  }
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.nid_engine = kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.nid_operational = kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.l_train = kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.d_baliseAntenna_2_frontend.nominal =
    kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.d_baliseAntenna_2_frontend.d_min =
    kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.d_baliseAntenna_2_frontend.d_max =
    kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.d_frontend_2_rearend.nominal =
    kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.d_frontend_2_rearend.d_min =
    kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.d_frontend_2_rearend.d_max =
    kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.locationAccuracy_DefaultValue.nominal =
    kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.locationAccuracy_DefaultValue.d_min =
    kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.locationAccuracy_DefaultValue.d_max =
    kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.centerDetectionAcc_DefaultValue.nominal =
    kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.centerDetectionAcc_DefaultValue.d_min =
    kcg_lit_int32(0);
  outC->_L21_then_if_BGpassed_or_onlyAnnounced.centerDetectionAcc_DefaultValue.d_max =
    kcg_lit_int32(0);
  for (idx54 = 0; idx54 < 41; idx54++) {
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].valid = kcg_true;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].nid_c = kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].nid_bg = kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].q_link = Q_LINK_Unlinked;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].location.nominal =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].location.d_min =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].location.d_max =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].seqNoOnTrack =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.valid =
      kcg_true;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.d_link.d_min =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.d_link.d_max =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.linkingInfo.valid =
      kcg_true;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.valid =
      kcg_true;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.valid =
      kcg_true;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx53 = 0; idx53 < 33; idx53++) {
      outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.linkedBGs[idx53].valid =
        kcg_true;
      outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.linkedBGs[idx53].nid_LRBG =
        kcg_lit_int32(0);
      outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.linkedBGs[idx53].q_dir =
        Q_DIR_Reverse;
      outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.linkedBGs[idx53].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.linkedBGs[idx53].d_link =
        kcg_lit_int32(0);
      outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.linkedBGs[idx53].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.linkedBGs[idx53].nid_c =
        kcg_lit_int32(0);
      outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.linkedBGs[idx53].nid_bg =
        kcg_lit_int32(0);
      outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.linkedBGs[idx53].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.linkedBGs[idx53].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].infoFromPassing.linkedBGs[idx53].q_locacc =
        kcg_lit_int32(0);
    }
    outC->_L22_then_if_BGpassed_or_onlyAnnounced[idx54].missed = kcg_true;
  }
  outC->_L23_then_if_BGpassed_or_onlyAnnounced = kcg_true;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.valid = kcg_true;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.valid = kcg_true;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.nid_bg = kcg_lit_int32(
      0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L24_then_if_BGpassed_or_onlyAnnounced.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx55 = 0; idx55 < 33; idx55++) {
    outC->_L24_then_if_BGpassed_or_onlyAnnounced.linkedBGs[idx55].valid = kcg_true;
    outC->_L24_then_if_BGpassed_or_onlyAnnounced.linkedBGs[idx55].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L24_then_if_BGpassed_or_onlyAnnounced.linkedBGs[idx55].q_dir =
      Q_DIR_Reverse;
    outC->_L24_then_if_BGpassed_or_onlyAnnounced.linkedBGs[idx55].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L24_then_if_BGpassed_or_onlyAnnounced.linkedBGs[idx55].d_link =
      kcg_lit_int32(0);
    outC->_L24_then_if_BGpassed_or_onlyAnnounced.linkedBGs[idx55].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L24_then_if_BGpassed_or_onlyAnnounced.linkedBGs[idx55].nid_c =
      kcg_lit_int32(0);
    outC->_L24_then_if_BGpassed_or_onlyAnnounced.linkedBGs[idx55].nid_bg =
      kcg_lit_int32(0);
    outC->_L24_then_if_BGpassed_or_onlyAnnounced.linkedBGs[idx55].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L24_then_if_BGpassed_or_onlyAnnounced.linkedBGs[idx55].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L24_then_if_BGpassed_or_onlyAnnounced.linkedBGs[idx55].q_locacc =
      kcg_lit_int32(0);
  }
  outC->errors.outOfMemSpace = kcg_true;
  outC->errors.passedBG_foundNotWhereExpected = kcg_true;
  outC->errors.positionCalculation_inconsistent = kcg_true;
  outC->errors.linkedBGMissed = kcg_true;
  outC->errors.BGpassedInUnexpectedDirection = kcg_true;
  outC->errors.BG_LinkingConsistencyError = kcg_true;
  outC->errors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->errors.doubleRepositioningError = kcg_true;
  outC->errors.bg.valid = kcg_true;
  outC->errors.bg.nid_c = kcg_lit_int32(0);
  outC->errors.bg.nid_bg = kcg_lit_int32(0);
  outC->errors.bg.q_link = Q_LINK_Unlinked;
  outC->errors.bg.location.nominal = kcg_lit_int32(0);
  outC->errors.bg.location.d_min = kcg_lit_int32(0);
  outC->errors.bg.location.d_max = kcg_lit_int32(0);
  outC->errors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.valid = kcg_true;
  outC->errors.bg.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->errors.bg.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->errors.bg.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->errors.bg.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->errors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->errors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->errors.bg.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->errors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->errors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->errors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->errors.bg.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->errors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->errors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->errors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->errors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx56 = 0; idx56 < 33; idx56++) {
    outC->errors.bg.infoFromPassing.linkedBGs[idx56].valid = kcg_true;
    outC->errors.bg.infoFromPassing.linkedBGs[idx56].nid_LRBG = kcg_lit_int32(0);
    outC->errors.bg.infoFromPassing.linkedBGs[idx56].q_dir = Q_DIR_Reverse;
    outC->errors.bg.infoFromPassing.linkedBGs[idx56].q_scale = Q_SCALE_10_cm_scale;
    outC->errors.bg.infoFromPassing.linkedBGs[idx56].d_link = kcg_lit_int32(0);
    outC->errors.bg.infoFromPassing.linkedBGs[idx56].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->errors.bg.infoFromPassing.linkedBGs[idx56].nid_c = kcg_lit_int32(0);
    outC->errors.bg.infoFromPassing.linkedBGs[idx56].nid_bg = kcg_lit_int32(0);
    outC->errors.bg.infoFromPassing.linkedBGs[idx56].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->errors.bg.infoFromPassing.linkedBGs[idx56].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->errors.bg.infoFromPassing.linkedBGs[idx56].q_locacc = kcg_lit_int32(0);
  }
  outC->errors.bg.missed = kcg_true;
  for (idx58 = 0; idx58 < 41; idx58++) {
    outC->BGs[idx58].valid = kcg_true;
    outC->BGs[idx58].nid_c = kcg_lit_int32(0);
    outC->BGs[idx58].nid_bg = kcg_lit_int32(0);
    outC->BGs[idx58].q_link = Q_LINK_Unlinked;
    outC->BGs[idx58].location.nominal = kcg_lit_int32(0);
    outC->BGs[idx58].location.d_min = kcg_lit_int32(0);
    outC->BGs[idx58].location.d_max = kcg_lit_int32(0);
    outC->BGs[idx58].seqNoOnTrack = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.valid = kcg_true;
    outC->BGs[idx58].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->BGs[idx58].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->BGs[idx58].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->BGs[idx58].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->BGs[idx58].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->BGs[idx58].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->BGs[idx58].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.valid = kcg_true;
    outC->BGs[idx58].infoFromPassing.BG_Header.valid = kcg_true;
    outC->BGs[idx58].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->BGs[idx58].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->BGs[idx58].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->BGs[idx58].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->BGs[idx58].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->BGs[idx58].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->BGs[idx58].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->BGs[idx58].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->BGs[idx58].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->BGs[idx58].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx57 = 0; idx57 < 33; idx57++) {
      outC->BGs[idx58].infoFromPassing.linkedBGs[idx57].valid = kcg_true;
      outC->BGs[idx58].infoFromPassing.linkedBGs[idx57].nid_LRBG = kcg_lit_int32(0);
      outC->BGs[idx58].infoFromPassing.linkedBGs[idx57].q_dir = Q_DIR_Reverse;
      outC->BGs[idx58].infoFromPassing.linkedBGs[idx57].q_scale = Q_SCALE_10_cm_scale;
      outC->BGs[idx58].infoFromPassing.linkedBGs[idx57].d_link = kcg_lit_int32(0);
      outC->BGs[idx58].infoFromPassing.linkedBGs[idx57].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->BGs[idx58].infoFromPassing.linkedBGs[idx57].nid_c = kcg_lit_int32(0);
      outC->BGs[idx58].infoFromPassing.linkedBGs[idx57].nid_bg = kcg_lit_int32(0);
      outC->BGs[idx58].infoFromPassing.linkedBGs[idx57].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->BGs[idx58].infoFromPassing.linkedBGs[idx57].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->BGs[idx58].infoFromPassing.linkedBGs[idx57].q_locacc = kcg_lit_int32(0);
    }
    outC->BGs[idx58].missed = kcg_true;
  }
  outC->trainPosition.valid = kcg_true;
  outC->trainPosition.timestamp = kcg_lit_int32(0);
  outC->trainPosition.trainPositionIsUnknown = kcg_true;
  outC->trainPosition.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->trainPosition.trainPosition.nominal = kcg_lit_int32(0);
  outC->trainPosition.trainPosition.d_min = kcg_lit_int32(0);
  outC->trainPosition.trainPosition.d_max = kcg_lit_int32(0);
  outC->trainPosition.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->trainPosition.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->trainPosition.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->trainPosition.LRBG.valid = kcg_true;
  outC->trainPosition.LRBG.nid_c = kcg_lit_int32(0);
  outC->trainPosition.LRBG.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.LRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.location.nominal = kcg_lit_int32(0);
  outC->trainPosition.LRBG.location.d_min = kcg_lit_int32(0);
  outC->trainPosition.LRBG.location.d_max = kcg_lit_int32(0);
  outC->trainPosition.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(
      0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx59 = 0; idx59 < 33; idx59++) {
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx59].valid = kcg_true;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx59].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx59].q_dir = Q_DIR_Reverse;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx59].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx59].d_link =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx59].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx59].nid_c =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx59].nid_bg =
      kcg_lit_int32(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx59].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx59].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx59].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPosition.LRBG.missed = kcg_true;
  outC->trainPosition.prvLRBG.valid = kcg_true;
  outC->trainPosition.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(
      0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx60 = 0; idx60 < 33; idx60++) {
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx60].valid = kcg_true;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx60].nid_LRBG =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx60].q_dir =
      Q_DIR_Reverse;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx60].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx60].d_link =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx60].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx60].nid_c =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx60].nid_bg =
      kcg_lit_int32(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx60].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx60].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx60].q_locacc =
      kcg_lit_int32(0);
  }
  outC->trainPosition.prvLRBG.missed = kcg_true;
  outC->trainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->trainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->trainPosition.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->trainPosition.linkingIsUsedOnboard = kcg_true;
  outC->trainPosition.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->trainPosition.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->trainPosition.maxSafeRearEndPosition = kcg_lit_int32(0);
  /* _L200=(CalculateTrainPosition_Pkg::calculateTrainpositionAttributes#1)/ */
  calculateTrainpositionAttributes_init_CalculateTrainPosition_Pkg(
    &outC->Context_calculateTrainpositionAttributes_1);
  /* _L334=(CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed#1)/ */
  twoConsecutiveLinkedBGs_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->Context_twoConsecutiveLinkedBGs_missed_1);
  /* _L322=(CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed#2)/ */
  linkedBG_missed_init_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->Context_linkedBG_missed_2);
  /* trainPositionInfo=(CalculateTrainPosition_Pkg::calculateTrainPositionInfo#1)/ */
  calculateTrainPositionInfo_init_CalculateTrainPosition_Pkg(
    &outC->Context_calculateTrainPositionInfo_1);
  /* if_BGpassed_or_onlyAnnounced:then:_L22=(CalculateTrainPosition_Pkg::delDispensableBGs#2)/ */
  delDispensableBGs_init_CalculateTrainPosition_Pkg(
    &outC->Context_delDispensableBGs_2);
  /* if_BGpassed_or_onlyAnnounced:then:_L10=(CalculateTrainPosition_Pkg::calculateBGLocations#6)/ */
  calculateBGLocations_init_CalculateTrainPosition_Pkg(
    &outC->Context_calculateBGLocations_6);
  /* if_BGpassed_or_onlyAnnounced:else:then:_L14=(CalculateTrainPosition_Pkg::addAnnouncedBGs#1)/ */
  addAnnouncedBGs_init_CalculateTrainPosition_Pkg(
    &outC->Context_addAnnouncedBGs_1);
  /* _L306=(CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG#1)/ */
  msg_2_passedBG_init_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
    &outC->Context_msg_2_passedBG_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->BGs_loc,
    (positionedBGs_T_TrainPosition_Types_Pck *)
      &cNoPositionedBGs_CalculateTrainPosition_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calculateTrainPosition_reset_CalculateTrainPosition_Pkg(
  outC_calculateTrainPosition_CalculateTrainPosition_Pkg *outC)
{
  /* _L200=(CalculateTrainPosition_Pkg::calculateTrainpositionAttributes#1)/ */
  calculateTrainpositionAttributes_reset_CalculateTrainPosition_Pkg(
    &outC->Context_calculateTrainpositionAttributes_1);
  /* _L334=(CalculateTrainPosition_Pkg::Linking_Pkg::twoConsecutiveLinkedBGs_missed#1)/ */
  twoConsecutiveLinkedBGs_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->Context_twoConsecutiveLinkedBGs_missed_1);
  /* _L322=(CalculateTrainPosition_Pkg::Linking_Pkg::linkedBG_missed#2)/ */
  linkedBG_missed_reset_CalculateTrainPosition_Pkg_Linking_Pkg(
    &outC->Context_linkedBG_missed_2);
  /* trainPositionInfo=(CalculateTrainPosition_Pkg::calculateTrainPositionInfo#1)/ */
  calculateTrainPositionInfo_reset_CalculateTrainPosition_Pkg(
    &outC->Context_calculateTrainPositionInfo_1);
  /* if_BGpassed_or_onlyAnnounced:then:_L22=(CalculateTrainPosition_Pkg::delDispensableBGs#2)/ */
  delDispensableBGs_reset_CalculateTrainPosition_Pkg(
    &outC->Context_delDispensableBGs_2);
  /* if_BGpassed_or_onlyAnnounced:then:_L10=(CalculateTrainPosition_Pkg::calculateBGLocations#6)/ */
  calculateBGLocations_reset_CalculateTrainPosition_Pkg(
    &outC->Context_calculateBGLocations_6);
  /* if_BGpassed_or_onlyAnnounced:else:then:_L14=(CalculateTrainPosition_Pkg::addAnnouncedBGs#1)/ */
  addAnnouncedBGs_reset_CalculateTrainPosition_Pkg(
    &outC->Context_addAnnouncedBGs_1);
  /* _L306=(CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG#1)/ */
  msg_2_passedBG_reset_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
    &outC->Context_msg_2_passedBG_1);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->BGs_loc,
    (positionedBGs_T_TrainPosition_Types_Pck *)
      &cNoPositionedBGs_CalculateTrainPosition_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calculateTrainPosition_CalculateTrainPosition_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

