/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessageTri_RBC_Scenario_Pkg.h"

/* RBC_Scenario_Pkg::RadioTrackTrainMessageTrigger__Trigger/ */
void RadioTrackTrainMessageTri_RBC_Scenario_Pkg(
  /* inLRBG/ */
  NID_LRBG inLRBG,
  /* inDistanceToLRBG/ */
  kcg_float32 inDistanceToLRBG,
  /* inTriggerId/ */
  kcg_int32 inTriggerId,
  /* inRBCTime/ */
  T_TRAIN inRBCTime,
  /* inLRBGTrigger/ */
  NID_LRBG inLRBGTrigger,
  /* inMinDistanceToLRBGTrigger/ */
  kcg_float32 inMinDistanceToLRBGTrigger,
  /* inMaxDistanceToLRBGTrigger/ */
  kcg_float32 inMaxDistanceToLRBGTrigger,
  /* inTriggerIdHidden/ */
  kcg_int32 inTriggerIdHidden,
  /* inActivatorTimeout/ */
  kcg_float32 inActivatorTimeout,
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg *outC)
{
  /* outTriggerId/ */
  kcg_int32 outTriggerId_partial;
  /* valid/ */
  kcg_bool valid_partial;
  /* setReferenceTime/ */
  kcg_bool setReferenceTime_partial;
  /* referenceTime/ */
  T_TRAIN referenceTime_partial;
  /* referenceTime/ */
  T_TRAIN _1_referenceTime_partial;
  /* setReferenceTime/ */
  kcg_bool _2_setReferenceTime_partial;
  /* referenceTime/ */
  T_TRAIN _3_referenceTime_partial;
  /* setReferenceTime/ */
  kcg_bool _4_setReferenceTime_partial;
  /* valid/ */
  kcg_bool _5_valid_partial;
  /* outTriggerId/ */
  kcg_int32 _6_outTriggerId_partial;
  /* valid/ */
  kcg_bool _7_valid_partial;
  /* outTriggerId/ */
  kcg_int32 _8_outTriggerId_partial;
  /* outTriggerId/ */
  kcg_int32 _9_outTriggerId_partial;
  /* valid/ */
  kcg_bool _10_valid_partial;
  /* setReferenceTime/ */
  kcg_bool _11_setReferenceTime_partial;
  /* referenceTime/ */
  T_TRAIN _12_referenceTime_partial;
  /* referenceTime/ */
  T_TRAIN last_referenceTime;
  /* setReferenceTime/ */
  kcg_bool last_setReferenceTime;
  /* valid/ */
  kcg_bool last_valid;

  last_referenceTime = outC->referenceTime;
  last_setReferenceTime = outC->setReferenceTime;
  last_valid = outC->valid;
  outC->_L5 = inActivatorTimeout;
  outC->_L6 = /* _L6= */(kcg_int32) outC->_L5;
  outC->activatorTimeout = outC->_L6;
  outC->IfBlock1_clock = (inLRBG == inLRBGTrigger) &
    (inMinDistanceToLRBGTrigger >= kcg_lit_float32(0.0)) &
    (inMaxDistanceToLRBGTrigger >= kcg_lit_float32(0.0)) &
    (inMaxDistanceToLRBGTrigger > inMinDistanceToLRBGTrigger) &
    (inDistanceToLRBG >= inMinDistanceToLRBGTrigger) & (inDistanceToLRBG <
      inMaxDistanceToLRBGTrigger) & last_valid;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->IfBlock2_clock_then_IfBlock1 = last_setReferenceTime;
    /* IfBlock1:then:IfBlock2: */
    if (outC->IfBlock2_clock_then_IfBlock1) {
      outC->_L3_then_IfBlock2_then_IfBlock1 = inRBCTime;
      _3_referenceTime_partial = outC->_L3_then_IfBlock2_then_IfBlock1;
      referenceTime_partial = _3_referenceTime_partial;
    }
    else {
      _1_referenceTime_partial = last_referenceTime;
      referenceTime_partial = _1_referenceTime_partial;
    }
    outC->IfBlock3_clock_then_IfBlock1 = (outC->activatorTimeout <=
        kcg_lit_int32(0)) | ((outC->activatorTimeout > kcg_lit_int32(0)) &
        (inRBCTime - referenceTime_partial >= outC->activatorTimeout));
    /* IfBlock1:then:IfBlock3: */
    if (outC->IfBlock3_clock_then_IfBlock1) {
      outC->_L10_then_IfBlock3_then_IfBlock1 = inTriggerIdHidden;
      _8_outTriggerId_partial = outC->_L10_then_IfBlock3_then_IfBlock1;
      outC->_L17_then_IfBlock3_then_IfBlock1 = kcg_false;
      _7_valid_partial = outC->_L17_then_IfBlock3_then_IfBlock1;
      outTriggerId_partial = _8_outTriggerId_partial;
      valid_partial = _7_valid_partial;
    }
    else {
      _5_valid_partial = last_valid;
      outC->_L2_else_IfBlock3_then_IfBlock1 = inTriggerId;
      _6_outTriggerId_partial = outC->_L2_else_IfBlock3_then_IfBlock1;
      outTriggerId_partial = _6_outTriggerId_partial;
      valid_partial = _5_valid_partial;
    }
    /* IfBlock1:then:IfBlock2: */
    if (outC->IfBlock2_clock_then_IfBlock1) {
      outC->_L1_then_IfBlock2_then_IfBlock1 = kcg_false;
      _4_setReferenceTime_partial = outC->_L1_then_IfBlock2_then_IfBlock1;
      setReferenceTime_partial = _4_setReferenceTime_partial;
    }
    else {
      _2_setReferenceTime_partial = last_setReferenceTime;
      setReferenceTime_partial = _2_setReferenceTime_partial;
    }
    outC->outTriggerId = outTriggerId_partial;
    outC->valid = valid_partial;
    outC->setReferenceTime = setReferenceTime_partial;
    outC->referenceTime = referenceTime_partial;
  }
  else {
    _12_referenceTime_partial = last_referenceTime;
    _11_setReferenceTime_partial = last_setReferenceTime;
    _10_valid_partial = last_valid;
    outC->_L2_else_IfBlock1 = inTriggerId;
    _9_outTriggerId_partial = outC->_L2_else_IfBlock1;
    outC->outTriggerId = _9_outTriggerId_partial;
    outC->valid = _10_valid_partial;
    outC->setReferenceTime = _11_setReferenceTime_partial;
    outC->referenceTime = _12_referenceTime_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainMessageTri_init_RBC_Scenario_Pkg(
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg *outC)
{
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->activatorTimeout = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L2_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L10_then_IfBlock3_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L17_then_IfBlock3_then_IfBlock1 = kcg_true;
  outC->_L2_else_IfBlock3_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock2_then_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock2_then_IfBlock1 = kcg_lit_int32(0);
  outC->IfBlock3_clock_then_IfBlock1 = kcg_true;
  outC->IfBlock2_clock_then_IfBlock1 = kcg_true;
  outC->outTriggerId = kcg_lit_int32(0);
  outC->valid = kcg_true;
  outC->setReferenceTime = kcg_true;
  outC->referenceTime = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RadioTrackTrainMessageTri_reset_RBC_Scenario_Pkg(
  outC_RadioTrackTrainMessageTri_RBC_Scenario_Pkg *outC)
{
  outC->valid = kcg_true;
  outC->setReferenceTime = kcg_true;
  outC->referenceTime = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainMessageTri_RBC_Scenario_Pkg.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

