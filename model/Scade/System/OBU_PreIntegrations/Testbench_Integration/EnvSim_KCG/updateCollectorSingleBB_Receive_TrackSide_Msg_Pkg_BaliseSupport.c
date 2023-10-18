/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB/ */
void updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* inSingleBadBalise/ */
  kcg_bool inSingleBadBalise,
  /* inCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  outC->_L13 = kcg_false;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L2, inCollector);
  outC->_L11 = outC->_L2.badBaliseFlag;
  outC->_L1 = inSingleBadBalise;
  /* _L12= */
  if (outC->_L1) {
    outC->_L12 = outC->_L13;
  }
  else {
    outC->_L12 = outC->_L11;
  }
  outC->_L10 = outC->_L2.BGMessageSent;
  outC->_L9 = outC->_L2.C_ID;
  outC->_L8 = outC->_L2.BG_ID;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L7,
    &outC->_L2.balisePosition);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L6,
    &outC->_L2.positionFirstContact);
  outC->_L5 = outC->_L2.collectedTelegrams;
  outC->_L4 = outC->_L2.totalTelegrams;
  outC->_L3.badBaliseFlag = outC->_L12;
  outC->_L3.BGMessageSent = outC->_L10;
  outC->_L3.C_ID = outC->_L9;
  outC->_L3.BG_ID = outC->_L8;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.balisePosition,
    &outC->_L7);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L3.positionFirstContact,
    &outC->_L6);
  outC->_L3.collectedTelegrams = outC->_L5;
  outC->_L3.totalTelegrams = outC->_L4;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void updateCollectorSingleBB_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L6.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L6.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int64(0);
  outC->_L6.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L6.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L6.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L6.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L6.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int64(0);
  outC->_L6.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int64(0);
  outC->_L6.odometerOfBaliseDetection.acceleration = kcg_lit_int64(0);
  outC->_L6.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L6.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L6.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L7.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L7.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L7.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int64(0);
  outC->_L7.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L7.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int64(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int64(0);
  outC->_L7.odometerOfBaliseDetection.acceleration = kcg_lit_int64(0);
  outC->_L7.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L7.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L7.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L3.badBaliseFlag = kcg_true;
  outC->_L3.BGMessageSent = kcg_true;
  outC->_L3.C_ID = kcg_lit_int64(0);
  outC->_L3.BG_ID = kcg_lit_int64(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L3.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L3.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L3.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L3.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L3.collectedTelegrams = kcg_lit_int64(0);
  outC->_L3.totalTelegrams = kcg_lit_int64(0);
  outC->_L2.badBaliseFlag = kcg_true;
  outC->_L2.BGMessageSent = kcg_true;
  outC->_L2.C_ID = kcg_lit_int64(0);
  outC->_L2.BG_ID = kcg_lit_int64(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.balisePosition.odometerOfBaliseDetection.timestamp = kcg_lit_int64(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int64(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int64(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L2.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2.collectedTelegrams = kcg_lit_int64(0);
  outC->_L2.totalTelegrams = kcg_lit_int64(0);
  outC->_L1 = kcg_true;
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
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void updateCollectorSingleBB_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

