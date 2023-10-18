/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkOdometry_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::checkOdometry/ */
void checkOdometry_Receive_TrackSide_Msg_Pkg(
  /* actualOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* inCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC)
{
  /* outMessageComplete/ */
  static kcg_bool outMessageComplete_partial;
  /* outBGIsChangedEarly/ */
  static kcg_bool outBGIsChangedEarly_partial;
  /* outCollector/ */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector_partial;
  /* outMessageComplete/ */
  static kcg_bool _1_outMessageComplete_partial;
  /* outBGIsChangedEarly/ */
  static kcg_bool _2_outBGIsChangedEarly_partial;
  /* outCollector/ */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _3_outCollector_partial;

  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L30, inCollector);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L19 = outC->_L30.totalTelegrams;
  outC->_L20 = outC->_L19 > outC->_L21;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L11, actualOdometry);
  outC->_L12 = outC->_L11.valid;
  outC->_L22 = outC->_L12 & outC->_L20;
  outC->isValid = outC->_L22;
  outC->IfBlock1_clock = outC->isValid;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &outC->_L7_then_IfBlock1,
      actualOdometry);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L6_then_IfBlock1,
      &outC->_L7_then_IfBlock1.odo);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L9_then_IfBlock1,
      inCollector);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L10_then_IfBlock1,
      &outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo);
    kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &outC->_L11_then_IfBlock1,
      (OdometryLocations_T_Obu_BasicTypes_Pkg *)
        &cMaxDistanceBalisesInGroup_BG_Types_Pkg);
    /* IfBlock1:then:_L5=(BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance#2)/ */
    checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg(
      &outC->_L6_then_IfBlock1,
      &outC->_L10_then_IfBlock1,
      &outC->_L11_then_IfBlock1,
      &outC->Context_checkMaxAbsOdoDistance_2);
    outC->_L5_then_IfBlock1 =
      outC->Context_checkMaxAbsOdoDistance_2.isLessThanOrEqual;
    outC->_L3_then_IfBlock1 = !outC->_L5_then_IfBlock1;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L20_then_IfBlock1,
      inCollector);
    outC->_L19_then_IfBlock1 = outC->_L20_then_IfBlock1.BGMessageSent;
    outC->_L21_then_IfBlock1 = !outC->_L19_then_IfBlock1;
    outC->_L22_then_IfBlock1 = outC->_L21_then_IfBlock1 & outC->_L3_then_IfBlock1;
    outC->_L16_then_IfBlock1 = outC->_L9_then_IfBlock1.badBaliseFlag;
    outC->_L13_then_IfBlock1 = outC->_L9_then_IfBlock1.collectedTelegrams;
    outC->_L12_then_IfBlock1 = outC->_L9_then_IfBlock1.collectedTelegrams;
    outC->_L14_then_IfBlock1 = outC->_L12_then_IfBlock1 < outC->_L13_then_IfBlock1;
    outC->_L15_then_IfBlock1 = outC->_L3_then_IfBlock1 & outC->_L14_then_IfBlock1;
    outC->_L17_then_IfBlock1 = outC->_L15_then_IfBlock1 & outC->_L16_then_IfBlock1;
    /* IfBlock1:then:_L18=(Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB#1)/ */
    updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      outC->_L17_then_IfBlock1,
      &outC->_L9_then_IfBlock1,
      &outC->Context_updateCollectorSingleBB_1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L18_then_IfBlock1,
      &outC->Context_updateCollectorSingleBB_1.outCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector_partial,
      &outC->_L18_then_IfBlock1);
    outBGIsChangedEarly_partial = outC->_L15_then_IfBlock1;
    outMessageComplete_partial = outC->_L22_then_IfBlock1;
    outC->outMessageComplete = outMessageComplete_partial;
    outC->outBGIsChangedEarly = outBGIsChangedEarly_partial;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &outCollector_partial);
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L3_else_IfBlock1,
      inCollector);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_3_outCollector_partial,
      &outC->_L3_else_IfBlock1);
    outC->_L2_else_IfBlock1 = kcg_false;
    _2_outBGIsChangedEarly_partial = outC->_L2_else_IfBlock1;
    outC->_L1_else_IfBlock1 = kcg_false;
    _1_outMessageComplete_partial = outC->_L1_else_IfBlock1;
    outC->outMessageComplete = _1_outMessageComplete_partial;
    outC->outBGIsChangedEarly = _2_outBGIsChangedEarly_partial;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &_3_outCollector_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void checkOdometry_init_Receive_TrackSide_Msg_Pkg(
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->_L30.badBaliseFlag = kcg_true;
  outC->_L30.BGMessageSent = kcg_true;
  outC->_L30.C_ID = kcg_lit_int64(0);
  outC->_L30.BG_ID = kcg_lit_int64(0);
  outC->_L30.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L30.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int64(
      0);
  outC->_L30.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L30.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(
      0);
  outC->_L30.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(
      0);
  outC->_L30.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L30.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L30.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L30.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L30.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L30.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L30.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L30.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L30.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L30.collectedTelegrams = kcg_lit_int64(0);
  outC->_L30.totalTelegrams = kcg_lit_int64(0);
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_lit_int64(0);
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_lit_int64(0);
  outC->_L12 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.timestamp = kcg_lit_int64(0);
  outC->_L11.odo.o_nominal = kcg_lit_int64(0);
  outC->_L11.odo.o_min = kcg_lit_int64(0);
  outC->_L11.odo.o_max = kcg_lit_int64(0);
  outC->_L11.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L11.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L11.speed.v_lower = kcg_lit_int64(0);
  outC->_L11.speed.v_upper = kcg_lit_int64(0);
  outC->_L11.acceleration = kcg_lit_int64(0);
  outC->_L11.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->isValid = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_true;
  outC->_L2_else_IfBlock1 = kcg_true;
  outC->_L3_else_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L3_else_IfBlock1.BGMessageSent = kcg_true;
  outC->_L3_else_IfBlock1.C_ID = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.BG_ID = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3_else_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3_else_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.collectedTelegrams = kcg_lit_int64(0);
  outC->_L3_else_IfBlock1.totalTelegrams = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.valid = kcg_true;
  outC->_L7_then_IfBlock1.timestamp = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.odo.o_nominal = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.odo.o_min = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.odo.o_max = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.speed.v_lower = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.speed.v_upper = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.acceleration = kcg_lit_int64(0);
  outC->_L7_then_IfBlock1.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7_then_IfBlock1.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6_then_IfBlock1.o_nominal = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.o_min = kcg_lit_int64(0);
  outC->_L6_then_IfBlock1.o_max = kcg_lit_int64(0);
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->_L10_then_IfBlock1.o_nominal = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.o_min = kcg_lit_int64(0);
  outC->_L10_then_IfBlock1.o_max = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L9_then_IfBlock1.BGMessageSent = kcg_true;
  outC->_L9_then_IfBlock1.C_ID = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.BG_ID = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.collectedTelegrams = kcg_lit_int64(0);
  outC->_L9_then_IfBlock1.totalTelegrams = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.o_nominal = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.o_min = kcg_lit_int64(0);
  outC->_L11_then_IfBlock1.o_max = kcg_lit_int64(0);
  outC->_L12_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L13_then_IfBlock1 = kcg_lit_int64(0);
  outC->_L14_then_IfBlock1 = kcg_true;
  outC->_L15_then_IfBlock1 = kcg_true;
  outC->_L16_then_IfBlock1 = kcg_true;
  outC->_L17_then_IfBlock1 = kcg_true;
  outC->_L18_then_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L18_then_IfBlock1.BGMessageSent = kcg_true;
  outC->_L18_then_IfBlock1.C_ID = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.BG_ID = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.collectedTelegrams = kcg_lit_int64(0);
  outC->_L18_then_IfBlock1.totalTelegrams = kcg_lit_int64(0);
  outC->_L19_then_IfBlock1 = kcg_true;
  outC->_L20_then_IfBlock1.badBaliseFlag = kcg_true;
  outC->_L20_then_IfBlock1.BGMessageSent = kcg_true;
  outC->_L20_then_IfBlock1.C_ID = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.BG_ID = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20_then_IfBlock1.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20_then_IfBlock1.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.collectedTelegrams = kcg_lit_int64(0);
  outC->_L20_then_IfBlock1.totalTelegrams = kcg_lit_int64(0);
  outC->_L21_then_IfBlock1 = kcg_true;
  outC->_L22_then_IfBlock1 = kcg_true;
  outC->outCollector.badBaliseFlag = kcg_true;
  outC->outCollector.BGMessageSent = kcg_true;
  outC->outCollector.C_ID = kcg_lit_int64(0);
  outC->outCollector.BG_ID = kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->outCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->outCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->outCollector.collectedTelegrams = kcg_lit_int64(0);
  outC->outCollector.totalTelegrams = kcg_lit_int64(0);
  outC->outBGIsChangedEarly = kcg_true;
  outC->outMessageComplete = kcg_true;
  /* IfBlock1:then:_L18=(Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB#1)/ */
  updateCollectorSingleBB_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_updateCollectorSingleBB_1);
  /* IfBlock1:then:_L5=(BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance#2)/ */
  checkMaxAbsOdoDistance_init_BasicLocationFunctions_Pkg(
    &outC->Context_checkMaxAbsOdoDistance_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void checkOdometry_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC)
{
  /* IfBlock1:then:_L18=(Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB#1)/ */
  updateCollectorSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    &outC->Context_updateCollectorSingleBB_1);
  /* IfBlock1:then:_L5=(BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance#2)/ */
  checkMaxAbsOdoDistance_reset_BasicLocationFunctions_Pkg(
    &outC->Context_checkMaxAbsOdoDistance_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkOdometry_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

