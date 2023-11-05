/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_MovementSimulation_Toolbox_Physics.h"

/* Toolbox::Physics::PHYSICS_MovementSimulation/ */
void PHYSICS_MovementSimulation_Toolbox_Physics(
  /* reset/ */
  kcg_bool reset,
  /* accelerationInPercent/ */
  kcg_float32 accelerationInPercent,
  /* tractionCutOffFromEVC/ */
  kcg_bool tractionCutOffFromEVC,
  /* activateServiceBrakeFromEVC/ */
  kcg_bool activateServiceBrakeFromEVC,
  /* activateEmergencyBrakeFromEVC/ */
  kcg_bool activateEmergencyBrakeFromEVC,
  /* initialPosition/ */
  kcg_float32 initialPosition,
  /* initialVelocity/ */
  kcg_float32 initialVelocity,
  /* timeSinceLastCycle/ */
  kcg_int32 timeSinceLastCycle,
  /* activateBrakeBuildupTime/ */
  kcg_bool activateBrakeBuildupTime,
  /* activateAirResistance/ */
  kcg_bool activateAirResistance,
  /* maximumAcceleration/ */
  kcg_float32 maximumAcceleration,
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
{
  static kcg_float32 op_call;
  static kcg_float32 _1_op_call;
  /* finalAccelerationInPercent/ */
  static kcg_float32 finalAccelerationInPercent_partial;
  /* finalAccelerationInPercent/ */
  static kcg_float32 _2_finalAccelerationInPercent_partial;
  /* finalAccelerationInPercent/ */
  static kcg_float32 _3_finalAccelerationInPercent_partial;
  /* finalAccelerationInPercent/ */
  static kcg_float32 _4_finalAccelerationInPercent_partial;
  /* finalAccelerationInPercent/ */
  static kcg_float32 _5_finalAccelerationInPercent_partial;
  /* finalAccelerationInPercent/ */
  static kcg_float32 _6_finalAccelerationInPercent_partial;
  /* position/ */
  static kcg_float32 position_partial;
  /* velocity/ */
  static kcg_float32 velocity_partial;
  /* tmpVelocity/ */
  static kcg_float32 tmpVelocity_partial;
  /* tmpPosition/ */
  static kcg_float32 tmpPosition_partial;
  /* tmpAcceleration/ */
  static kcg_float32 tmpAcceleration_partial;
  /* SM1: */
  static _118_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  static _119_SSM_TR_SM1 SM1_fired_partial;
  /* position/ */
  static kcg_float32 _7_position_partial;
  /* velocity/ */
  static kcg_float32 _8_velocity_partial;
  /* tmpVelocity/ */
  static kcg_float32 _9_tmpVelocity_partial;
  /* tmpPosition/ */
  static kcg_float32 _10_tmpPosition_partial;
  /* tmpAcceleration/ */
  static kcg_float32 _11_tmpAcceleration_partial;
  /* SM1: */
  static _118_SSM_ST_SM1 _12_SM1_state_nxt_partial;
  /* SM1: */
  static kcg_bool _13_SM1_reset_nxt_partial;
  /* SM1: */
  static _119_SSM_TR_SM1 _14_SM1_fired_partial;
  /* SM1: */
  static _118_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  static kcg_bool SM1_reset_act_partial;
  /* SM1: */
  static _119_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Reset:<1> */
  static kcg_bool tr_1_guard_Reset_SM1;
  /* SM1: */
  static _118_SSM_ST_SM1 _15_SM1_state_act_partial;
  /* SM1: */
  static kcg_bool _16_SM1_reset_act_partial;
  /* SM1: */
  static _119_SSM_TR_SM1 _17_SM1_fired_strong_partial;
  /* SM1:Driving:<1> */
  static kcg_bool tr_1_guard_Driving_SM1;
  /* SM1: */
  static kcg_bool SM1_reset_sel;
  /* SM1: */
  static kcg_bool SM1_reset_prv;

  outC->_L4_FlipFlopSet_1 = outC->_L2_FlipFlopSet_1;
  outC->_L74 = kcg_lit_float32(0.0);
  outC->_L72 = accelerationInPercent;
  outC->_L73 = outC->_L72 <= outC->_L74;
  outC->Reset_FlipFlopSet_1 = outC->_L73;
  outC->_L6_FlipFlopSet_1 = outC->Reset_FlipFlopSet_1;
  outC->_L11_FlipFlopSet_1 = !outC->_L6_FlipFlopSet_1;
  outC->_L12_FlipFlopSet_1 = outC->_L11_FlipFlopSet_1 & outC->_L4_FlipFlopSet_1;
  outC->_L77 = activateEmergencyBrakeFromEVC;
  outC->_L76 = activateServiceBrakeFromEVC;
  outC->_L71 = tractionCutOffFromEVC;
  outC->_L75 = outC->_L71 | outC->_L76 | outC->_L77;
  outC->Set_FlipFlopSet_1 = outC->_L75;
  outC->_L5_FlipFlopSet_1 = outC->Set_FlipFlopSet_1;
  outC->_L13_FlipFlopSet_1 = outC->_L5_FlipFlopSet_1 | outC->_L12_FlipFlopSet_1;
  outC->Init_FlipFlopSet_1 = kcg_false;
  outC->_L10_FlipFlopSet_1 = outC->Init_FlipFlopSet_1;
  /* @1/_L2= */
  if (outC->init) {
    outC->_L2_FlipFlopSet_1 = outC->_L10_FlipFlopSet_1;
  }
  else {
    outC->_L2_FlipFlopSet_1 = outC->_L13_FlipFlopSet_1;
  }
  outC->FFS_Output_FlipFlopSet_1 = outC->_L2_FlipFlopSet_1;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Driving_SM1 :
      tr_1_guard_Driving_SM1 = reset;
      if (tr_1_guard_Driving_SM1) {
        _15_SM1_state_act_partial = SSM_st_Reset_SM1;
      }
      else {
        _15_SM1_state_act_partial = SSM_st_Driving_SM1;
      }
      outC->SM1_state_act = _15_SM1_state_act_partial;
      break;
    case SSM_st_Reset_SM1 :
      tr_1_guard_Reset_SM1 = kcg_true;
      if (tr_1_guard_Reset_SM1) {
        SM1_state_act_partial = SSM_st_Driving_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_Reset_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      outC->_L31_Driving_SM1 = activateBrakeBuildupTime;
      outC->every = outC->_L31_Driving_SM1;
      outC->_L27_Driving_SM1 = kcg_lit_float32(100.0);
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->IfBlock1_clock = activateEmergencyBrakeFromEVC;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = activateServiceBrakeFromEVC;
  }
  outC->_L70 = outC->FFS_Output_FlipFlopSet_1;
  outC->needZeroPosition = outC->_L70;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = kcg_lit_float32(-100.0);
    finalAccelerationInPercent_partial = outC->_L2_then_IfBlock1;
    outC->finalAccelerationInPercent = finalAccelerationInPercent_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = kcg_lit_float32(-50.0);
      _6_finalAccelerationInPercent_partial = outC->_L1_then_else_IfBlock1;
      _2_finalAccelerationInPercent_partial = _6_finalAccelerationInPercent_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = tractionCutOffFromEVC | outC->needZeroPosition;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = kcg_lit_float32(0.0);
        _3_finalAccelerationInPercent_partial = outC->_L1_then_else_else_IfBlock1;
        _5_finalAccelerationInPercent_partial = _3_finalAccelerationInPercent_partial;
      }
      else {
        outC->_L1_else_else_else_IfBlock1 = accelerationInPercent;
        _4_finalAccelerationInPercent_partial = outC->_L1_else_else_else_IfBlock1;
        _5_finalAccelerationInPercent_partial = _4_finalAccelerationInPercent_partial;
      }
      _2_finalAccelerationInPercent_partial = _5_finalAccelerationInPercent_partial;
    }
    outC->finalAccelerationInPercent = _2_finalAccelerationInPercent_partial;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      outC->_L16_Driving_SM1 = outC->finalAccelerationInPercent;
      outC->_L21_Driving_SM1 = outC->_L16_Driving_SM1;
      outC->_L26_Driving_SM1 = outC->_L21_Driving_SM1 / outC->_L27_Driving_SM1;
      outC->_L29_Driving_SM1 = maximumAcceleration;
      outC->_L28_Driving_SM1 = outC->_L29_Driving_SM1 * outC->_L26_Driving_SM1;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Driving_SM1 :
      _16_SM1_reset_act_partial = tr_1_guard_Driving_SM1;
      outC->SM1_reset_act = _16_SM1_reset_act_partial;
      break;
    case SSM_st_Reset_SM1 :
      SM1_reset_act_partial = tr_1_guard_Reset_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      if (outC->SM1_reset_act) {
        /* SM1:Driving:_L30=(Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime#1)/ */
        PHYSICS_simulateAccelerationBuildupTime_reset_Toolbox_Physics_Basic(
          &outC->Context_PHYSICS_simulateAccelerationBuildupTime_1);
      }
      if (outC->every) {
        /* SM1:Driving:_L30=(Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime#1)/ */
        PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
          outC->_L28_Driving_SM1,
          &outC->Context_PHYSICS_simulateAccelerationBuildupTime_1);
        op_call = outC->Context_PHYSICS_simulateAccelerationBuildupTime_1.acceleration;
      }
      outC->_L25_Driving_SM1 = activateAirResistance;
      outC->every2 = outC->_L25_Driving_SM1;
      outC->_L19_Driving_SM1 = initialVelocity;
      if (outC->SM1_reset_act) {
        outC->init1 = kcg_true;
      }
      /* SM1:Driving:_L8= */
      if (outC->init1) {
        outC->_L8_Driving_SM1 = outC->_L19_Driving_SM1;
      }
      else {
        outC->_L8_Driving_SM1 = outC->_L15_Driving_SM1;
      }
      if (outC->every) {
        outC->_L30_Driving_SM1 = op_call;
      }
      else {
        outC->_L30_Driving_SM1 = outC->_L28_Driving_SM1;
      }
      if (outC->every2) {
        /* SM1:Driving:_L32=(Toolbox::Physics::Basic::PHYSICS_simulateAirResistance#1)/ */
        PHYSICS_simulateAirResistance_Toolbox_Physics_Basic(
          outC->_L8_Driving_SM1,
          outC->_L30_Driving_SM1,
          &outC->Context_PHYSICS_simulateAirResistance_1);
        _1_op_call = outC->Context_PHYSICS_simulateAirResistance_1.newAcceleration;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L66 = kcg_lit_float32(100.0);
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      if (outC->every2) {
        outC->_L32_Driving_SM1 = _1_op_call;
      }
      else {
        outC->_L32_Driving_SM1 = outC->_L30_Driving_SM1;
      }
      _11_tmpAcceleration_partial = outC->_L32_Driving_SM1;
      outC->_L37_Driving_SM1 = _11_tmpAcceleration_partial;
      outC->_L18_Driving_SM1 = initialPosition;
      /* SM1:Driving:_L6= */
      if (outC->init1) {
        outC->_L6_Driving_SM1 = outC->_L18_Driving_SM1;
      }
      else {
        outC->_L6_Driving_SM1 = outC->_L14_Driving_SM1;
      }
      outC->_L35_Driving_SM1 = timeSinceLastCycle;
      /* SM1:Driving:_L33=(Toolbox::Physics::Basic::PHYSICS_acceleratedMotion#1)/ */
      PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
        outC->_L37_Driving_SM1,
        outC->_L6_Driving_SM1,
        outC->_L8_Driving_SM1,
        outC->_L35_Driving_SM1,
        &outC->Context_PHYSICS_acceleratedMotion_1);
      outC->_L33_Driving_SM1 = outC->Context_PHYSICS_acceleratedMotion_1.newPosition;
      outC->_L34_Driving_SM1 = outC->Context_PHYSICS_acceleratedMotion_1.newVelocity;
      _9_tmpVelocity_partial = outC->_L34_Driving_SM1;
      outC->tmpVelocity = _9_tmpVelocity_partial;
      break;
    case SSM_st_Reset_SM1 :
      outC->_L2_Reset_SM1 = kcg_lit_float32(0.0);
      tmpVelocity_partial = outC->_L2_Reset_SM1;
      outC->tmpVelocity = tmpVelocity_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L6 = outC->tmpVelocity;
  outC->_L82 = outC->_L6 * outC->_L66;
  outC->_L83 = /* _L83= */(kcg_int32) outC->_L82;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      outC->tmpAcceleration = _11_tmpAcceleration_partial;
      break;
    case SSM_st_Reset_SM1 :
      tmpAcceleration_partial = kcg_lit_float32(0.0);
      outC->tmpAcceleration = tmpAcceleration_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L81 = outC->tmpAcceleration;
  outC->_L79 = timeSinceLastCycle;
  /* _L67=(Toolbox::Functions::TRAIN_systemTimeGenerator#1)/ */
  TRAIN_systemTimeGenerator_Toolbox_Functions(
    outC->_L79,
    &outC->Context_TRAIN_systemTimeGenerator_1);
  outC->_L67 = outC->Context_TRAIN_systemTimeGenerator_1.timestamp;
  outC->_L65 = outC->_L81 * outC->_L66;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      _10_tmpPosition_partial = outC->_L33_Driving_SM1;
      outC->tmpPosition = _10_tmpPosition_partial;
      break;
    case SSM_st_Reset_SM1 :
      outC->_L4_Reset_SM1 = initialPosition;
      tmpPosition_partial = outC->_L4_Reset_SM1;
      outC->tmpPosition = tmpPosition_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L21 = outC->tmpPosition;
  outC->_L62 = outC->_L66 * outC->_L21;
  outC->_L64 = /* _L64= */(kcg_int32) outC->_L62;
  outC->_L28 = reset;
  outC->resetOut = outC->_L28;
  outC->_L25 = /* _L25= */(kcg_int32) outC->_L65;
  outC->_L24 = cabAFirst_Obu_BasicTypes_Pkg;
  /* _L5=(Toolbox::TrainModules::ODO#1)/ */
  ODO_Toolbox_TrainModules(
    outC->_L67,
    outC->_L83,
    outC->_L25,
    outC->_L64,
    outC->_L24,
    &outC->Context_ODO_1);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L5,
    &outC->Context_ODO_1.odometry);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->odometry, &outC->_L5);
  outC->timestamp = outC->_L67;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Driving_SM1 :
      if (tr_1_guard_Driving_SM1) {
        _17_SM1_fired_strong_partial = SSM_TR_Driving_Reset_1_Driving_SM1;
      }
      else {
        _17_SM1_fired_strong_partial = _162_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _17_SM1_fired_strong_partial;
      break;
    case SSM_st_Reset_SM1 :
      if (tr_1_guard_Reset_SM1) {
        SM1_fired_strong_partial = SSM_TR_Reset_Driving_1_Reset_SM1;
      }
      else {
        SM1_fired_strong_partial = _162_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      _14_SM1_fired_partial = outC->SM1_fired_strong;
      _13_SM1_reset_nxt_partial = kcg_false;
      _12_SM1_state_nxt_partial = SSM_st_Driving_SM1;
      /* SM1:Driving:_L20=(Toolbox::Converters::m_s_To_km_h#2)/ */
      m_s_To_km_h_Toolbox_Converters(
        outC->_L34_Driving_SM1,
        &outC->Context_m_s_To_km_h_2);
      outC->_L20_Driving_SM1 = outC->Context_m_s_To_km_h_2.km_h;
      outC->_L15_Driving_SM1 = _9_tmpVelocity_partial;
      outC->_L14_Driving_SM1 = _10_tmpPosition_partial;
      _8_velocity_partial = outC->_L20_Driving_SM1;
      _7_position_partial = outC->_L33_Driving_SM1;
      outC->position = _7_position_partial;
      outC->velocity = _8_velocity_partial;
      outC->SM1_state_nxt = _12_SM1_state_nxt_partial;
      break;
    case SSM_st_Reset_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_Reset_SM1;
      velocity_partial = outC->_L2_Reset_SM1;
      position_partial = outC->_L4_Reset_SM1;
      outC->position = position_partial;
      outC->velocity = velocity_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Driving_SM1 :
      outC->SM1_reset_nxt = _13_SM1_reset_nxt_partial;
      outC->SM1_fired = _14_SM1_fired_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_Reset_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_MovementSimulation_init_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
{
  outC->_L82 = kcg_lit_float32(0.0);
  outC->_L83 = kcg_lit_int32(0);
  outC->_L81 = kcg_lit_float32(0.0);
  outC->_L79 = kcg_lit_int32(0);
  outC->_L77 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L75 = kcg_true;
  outC->_L74 = kcg_lit_float32(0.0);
  outC->_L73 = kcg_true;
  outC->_L72 = kcg_lit_float32(0.0);
  outC->_L71 = kcg_true;
  outC->_L70 = kcg_true;
  outC->_L67 = kcg_lit_int32(0);
  outC->_L66 = kcg_lit_float32(0.0);
  outC->_L65 = kcg_lit_float32(0.0);
  outC->_L64 = kcg_lit_int32(0);
  outC->_L62 = kcg_lit_float32(0.0);
  outC->_L28 = kcg_true;
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L5.valid = kcg_true;
  outC->_L5.timestamp = kcg_lit_int32(0);
  outC->_L5.odo.o_nominal = kcg_lit_int32(0);
  outC->_L5.odo.o_min = kcg_lit_int32(0);
  outC->_L5.odo.o_max = kcg_lit_int32(0);
  outC->_L5.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L5.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L5.speed.v_lower = kcg_lit_int32(0);
  outC->_L5.speed.v_upper = kcg_lit_int32(0);
  outC->_L5.acceleration = kcg_lit_int32(0);
  outC->_L5.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->tmpAcceleration = kcg_lit_float32(0.0);
  outC->needZeroPosition = kcg_true;
  outC->finalAccelerationInPercent = kcg_lit_float32(0.0);
  outC->tmpPosition = kcg_lit_float32(0.0);
  outC->tmpVelocity = kcg_lit_float32(0.0);
  outC->SM1_fired = _162_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _162_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Reset_SM1;
  outC->SM1_state_sel = SSM_st_Reset_SM1;
  outC->IfBlock1_clock = kcg_true;
  outC->every2 = kcg_true;
  outC->every = kcg_true;
  outC->_L6_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L8_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L16_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L18_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L19_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L20_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L21_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L25_Driving_SM1 = kcg_true;
  outC->_L26_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L27_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L28_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L29_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L30_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L31_Driving_SM1 = kcg_true;
  outC->_L32_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L34_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L33_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L35_Driving_SM1 = kcg_lit_int32(0);
  outC->_L37_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L2_Reset_SM1 = kcg_lit_float32(0.0);
  outC->_L4_Reset_SM1 = kcg_lit_float32(0.0);
  outC->_L1_then_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_float32(0.0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_lit_float32(0.0);
  outC->_L10_FlipFlopSet_1 = kcg_true;
  outC->_L4_FlipFlopSet_1 = kcg_true;
  outC->_L5_FlipFlopSet_1 = kcg_true;
  outC->_L6_FlipFlopSet_1 = kcg_true;
  outC->_L11_FlipFlopSet_1 = kcg_true;
  outC->_L12_FlipFlopSet_1 = kcg_true;
  outC->_L13_FlipFlopSet_1 = kcg_true;
  outC->Set_FlipFlopSet_1 = kcg_true;
  outC->Reset_FlipFlopSet_1 = kcg_true;
  outC->Init_FlipFlopSet_1 = kcg_true;
  outC->FFS_Output_FlipFlopSet_1 = kcg_true;
  outC->_L14_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L15_Driving_SM1 = kcg_lit_float32(0.0);
  outC->_L2_FlipFlopSet_1 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->resetOut = kcg_true;
  outC->odometry.valid = kcg_true;
  outC->odometry.timestamp = kcg_lit_int32(0);
  outC->odometry.odo.o_nominal = kcg_lit_int32(0);
  outC->odometry.odo.o_min = kcg_lit_int32(0);
  outC->odometry.odo.o_max = kcg_lit_int32(0);
  outC->odometry.speed.v_safeNominal = kcg_lit_int32(0);
  outC->odometry.speed.v_rawNominal = kcg_lit_int32(0);
  outC->odometry.speed.v_lower = kcg_lit_int32(0);
  outC->odometry.speed.v_upper = kcg_lit_int32(0);
  outC->odometry.acceleration = kcg_lit_int32(0);
  outC->odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->timestamp = kcg_lit_int32(0);
  outC->velocity = kcg_lit_float32(0.0);
  outC->position = kcg_lit_float32(0.0);
  /* SM1:Driving:_L20=(Toolbox::Converters::m_s_To_km_h#2)/ */
  m_s_To_km_h_init_Toolbox_Converters(&outC->Context_m_s_To_km_h_2);
  /* _L5=(Toolbox::TrainModules::ODO#1)/ */
  ODO_init_Toolbox_TrainModules(&outC->Context_ODO_1);
  /* _L67=(Toolbox::Functions::TRAIN_systemTimeGenerator#1)/ */
  TRAIN_systemTimeGenerator_init_Toolbox_Functions(
    &outC->Context_TRAIN_systemTimeGenerator_1);
  /* SM1:Driving:_L33=(Toolbox::Physics::Basic::PHYSICS_acceleratedMotion#1)/ */
  PHYSICS_acceleratedMotion_init_Toolbox_Physics_Basic(
    &outC->Context_PHYSICS_acceleratedMotion_1);
  /* SM1:Driving:_L32=(Toolbox::Physics::Basic::PHYSICS_simulateAirResistance#1)/ */
  PHYSICS_simulateAirResistance_init_Toolbox_Physics_Basic(
    &outC->Context_PHYSICS_simulateAirResistance_1);
  /* SM1:Driving:_L30=(Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime#1)/ */
  PHYSICS_simulateAccelerationBuildupTime_init_Toolbox_Physics_Basic(
    &outC->Context_PHYSICS_simulateAccelerationBuildupTime_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_Reset_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PHYSICS_MovementSimulation_reset_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* SM1:Driving:_L20=(Toolbox::Converters::m_s_To_km_h#2)/ */
  m_s_To_km_h_reset_Toolbox_Converters(&outC->Context_m_s_To_km_h_2);
  /* _L5=(Toolbox::TrainModules::ODO#1)/ */
  ODO_reset_Toolbox_TrainModules(&outC->Context_ODO_1);
  /* _L67=(Toolbox::Functions::TRAIN_systemTimeGenerator#1)/ */
  TRAIN_systemTimeGenerator_reset_Toolbox_Functions(
    &outC->Context_TRAIN_systemTimeGenerator_1);
  /* SM1:Driving:_L33=(Toolbox::Physics::Basic::PHYSICS_acceleratedMotion#1)/ */
  PHYSICS_acceleratedMotion_reset_Toolbox_Physics_Basic(
    &outC->Context_PHYSICS_acceleratedMotion_1);
  /* SM1:Driving:_L32=(Toolbox::Physics::Basic::PHYSICS_simulateAirResistance#1)/ */
  PHYSICS_simulateAirResistance_reset_Toolbox_Physics_Basic(
    &outC->Context_PHYSICS_simulateAirResistance_1);
  /* SM1:Driving:_L30=(Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime#1)/ */
  PHYSICS_simulateAccelerationBuildupTime_reset_Toolbox_Physics_Basic(
    &outC->Context_PHYSICS_simulateAccelerationBuildupTime_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_Reset_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_PHYSICS_MovementSimulation_Toolbox_Physics(
  SV_PHYSICS_MovementSimulation_Toolbox_Physics *SV,
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC)
{
  kcg_save_SV_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
    &SV->Context_PHYSICS_simulateAccelerationBuildupTime_1,
    &outC->Context_PHYSICS_simulateAccelerationBuildupTime_1);
  kcg_save_SV_TRAIN_systemTimeGenerator_Toolbox_Functions(
    &SV->Context_TRAIN_systemTimeGenerator_1,
    &outC->Context_TRAIN_systemTimeGenerator_1);
  SV->Context_SM1_reset_nxt = outC->SM1_reset_nxt;
  SV->Context_SM1_reset_act = outC->SM1_reset_act;
  SV->Context_SM1_state_nxt = outC->SM1_state_nxt;
  SV->Context__L14 = outC->_L14_Driving_SM1;
  SV->Context__L15 = outC->_L15_Driving_SM1;
  SV->Context__L2_FlipFlopSet_1 = outC->_L2_FlipFlopSet_1;
  SV->_1_Context_init = outC->init1;
  SV->Context_init = outC->init;
}

void kcg_load_SV_PHYSICS_MovementSimulation_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC,
  SV_PHYSICS_MovementSimulation_Toolbox_Physics *SV)
{
  kcg_load_SV_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
    &outC->Context_PHYSICS_simulateAccelerationBuildupTime_1,
    &SV->Context_PHYSICS_simulateAccelerationBuildupTime_1);
  kcg_load_SV_TRAIN_systemTimeGenerator_Toolbox_Functions(
    &outC->Context_TRAIN_systemTimeGenerator_1,
    &SV->Context_TRAIN_systemTimeGenerator_1);
  outC->SM1_reset_nxt = SV->Context_SM1_reset_nxt;
  outC->SM1_reset_act = SV->Context_SM1_reset_act;
  outC->SM1_state_nxt = SV->Context_SM1_state_nxt;
  outC->_L14_Driving_SM1 = SV->Context__L14;
  outC->_L15_Driving_SM1 = SV->Context__L15;
  outC->_L2_FlipFlopSet_1 = SV->Context__L2_FlipFlopSet_1;
  outC->init1 = SV->_1_Context_init;
  outC->init = SV->Context_init;
}

/*
  Expanded instances for: Toolbox::Physics::PHYSICS_MovementSimulation/
  @1: (digital::FlipFlopSet#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PHYSICS_MovementSimulation_Toolbox_Physics.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

