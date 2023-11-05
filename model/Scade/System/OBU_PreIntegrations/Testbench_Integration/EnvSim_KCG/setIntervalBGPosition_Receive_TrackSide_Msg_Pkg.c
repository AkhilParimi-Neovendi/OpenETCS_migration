/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition/ */
void setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
  /* inOldPosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* incenterOfBalisePosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L2, inOldPosition);
  outC->_L18 = outC->_L2.odometerOfBaliseDetection.valid;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L4,
    incenterOfBalisePosition);
  /* _L7= */
  if (outC->_L18) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L7, &outC->_L2);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L7, &outC->_L4);
  }
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->outUpdateBGPosition,
    &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void setIntervalBGPosition_init_Receive_TrackSide_Msg_Pkg(
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->_L18 = kcg_true;
  outC->_L7.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L7.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L7.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L7.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L7.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L4.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L4.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L4.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L4.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.valid = kcg_true;
  outC->_L2.odometerOfBaliseDetection.timestamp = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.odo.o_nominal = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.speed.v_lower = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.speed.v_upper = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.acceleration = kcg_lit_int32(0);
  outC->_L2.odometerOfBaliseDetection.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L2.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L2.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.valid = kcg_true;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.timestamp = kcg_lit_int32(
      0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.odo.o_min = kcg_lit_int32(
      0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.odo.o_max = kcg_lit_int32(
      0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outUpdateBGPosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outUpdateBGPosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->outUpdateBGPosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void setIntervalBGPosition_reset_Receive_TrackSide_Msg_Pkg(
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

