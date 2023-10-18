/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _PHYSICS_MovementSimulation_Toolbox_Physics_H_
#define _PHYSICS_MovementSimulation_Toolbox_Physics_H_

#include "kcg_types.h"
#include "TRAIN_systemTimeGenerator_Toolbox_Functions.h"
#include "ODO_Toolbox_TrainModules.h"
#include "PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.h"
#include "PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.h"
#include "PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic.h"
#include "m_s_To_km_h_Toolbox_Converters.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* position/ */ position;
  kcg_float64 /* velocity/ */ velocity;
  T_internal_Type_Obu_BasicTypes_Pkg /* timestamp/ */ timestamp;
  odometry_T_Obu_BasicTypes_Pkg /* odometry/ */ odometry;
  kcg_bool /* resetOut/ */ resetOut;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool /* @1/_L2/ */ _L2_FlipFlopSet_1;
  kcg_float64 /* SM1:Driving:_L15/ */ _L15_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L14/ */ _L14_Driving_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_m_s_To_km_h_Toolbox_Converters /* SM1:Driving:_L20=(Toolbox::Converters::m_s_To_km_h#2)/ */ Context_m_s_To_km_h_2;
  outC_ODO_Toolbox_TrainModules /* _L5=(Toolbox::TrainModules::ODO#1)/ */ Context_ODO_1;
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions /* _L67=(Toolbox::Functions::TRAIN_systemTimeGenerator#1)/ */ Context_TRAIN_systemTimeGenerator_1;
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic /* SM1:Driving:_L33=(Toolbox::Physics::Basic::PHYSICS_acceleratedMotion#1)/ */ Context_PHYSICS_acceleratedMotion_1;
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic /* SM1:Driving:_L32=(Toolbox::Physics::Basic::PHYSICS_simulateAirResistance#1)/ */ Context_PHYSICS_simulateAirResistance_1;
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic /* SM1:Driving:_L30=(Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime#1)/ */ Context_PHYSICS_simulateAccelerationBuildupTime_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool every;
  kcg_bool every2;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/FFS_Output/ */ FFS_Output_FlipFlopSet_1;
  kcg_bool /* @1/Init/ */ Init_FlipFlopSet_1;
  kcg_bool /* @1/Reset/ */ Reset_FlipFlopSet_1;
  kcg_bool /* @1/Set/ */ Set_FlipFlopSet_1;
  kcg_bool /* @1/_L13/ */ _L13_FlipFlopSet_1;
  kcg_bool /* @1/_L12/ */ _L12_FlipFlopSet_1;
  kcg_bool /* @1/_L11/ */ _L11_FlipFlopSet_1;
  kcg_bool /* @1/_L6/ */ _L6_FlipFlopSet_1;
  kcg_bool /* @1/_L5/ */ _L5_FlipFlopSet_1;
  kcg_bool /* @1/_L4/ */ _L4_FlipFlopSet_1;
  kcg_bool /* @1/_L10/ */ _L10_FlipFlopSet_1;
  kcg_float64 /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L1/ */ _L1_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_float64 /* SM1:Reset:_L4/ */ _L4_Reset_SM1;
  kcg_float64 /* SM1:Reset:_L2/ */ _L2_Reset_SM1;
  kcg_float64 /* SM1:Driving:_L37/ */ _L37_Driving_SM1;
  kcg_int64 /* SM1:Driving:_L35/ */ _L35_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L33/ */ _L33_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L34/ */ _L34_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L32/ */ _L32_Driving_SM1;
  kcg_bool /* SM1:Driving:_L31/ */ _L31_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L30/ */ _L30_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L29/ */ _L29_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L28/ */ _L28_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L27/ */ _L27_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L26/ */ _L26_Driving_SM1;
  kcg_bool /* SM1:Driving:_L25/ */ _L25_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L21/ */ _L21_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L20/ */ _L20_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L19/ */ _L19_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L18/ */ _L18_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L16/ */ _L16_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L8/ */ _L8_Driving_SM1;
  kcg_float64 /* SM1:Driving:_L6/ */ _L6_Driving_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_float64 /* tmpVelocity/ */ tmpVelocity;
  kcg_float64 /* tmpPosition/ */ tmpPosition;
  kcg_float64 /* finalAccelerationInPercent/ */ finalAccelerationInPercent;
  kcg_bool /* needZeroPosition/ */ needZeroPosition;
  kcg_float64 /* tmpAcceleration/ */ tmpAcceleration;
  odometry_T_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L21/ */ _L21;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* _L24/ */ _L24;
  kcg_int64 /* _L25/ */ _L25;
  kcg_bool /* _L28/ */ _L28;
  kcg_float64 /* _L62/ */ _L62;
  kcg_int64 /* _L64/ */ _L64;
  kcg_float64 /* _L65/ */ _L65;
  kcg_float64 /* _L66/ */ _L66;
  kcg_int64 /* _L67/ */ _L67;
  kcg_bool /* _L70/ */ _L70;
  kcg_bool /* _L71/ */ _L71;
  kcg_float64 /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
  kcg_float64 /* _L74/ */ _L74;
  kcg_bool /* _L75/ */ _L75;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
  kcg_int64 /* _L79/ */ _L79;
  kcg_float64 /* _L81/ */ _L81;
  kcg_int64 /* _L83/ */ _L83;
  kcg_float64 /* _L82/ */ _L82;
} outC_PHYSICS_MovementSimulation_Toolbox_Physics;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::PHYSICS_MovementSimulation/ */
extern void PHYSICS_MovementSimulation_Toolbox_Physics(
  /* reset/ */
  kcg_bool reset,
  /* accelerationInPercent/ */
  kcg_float64 accelerationInPercent,
  /* tractionCutOffFromEVC/ */
  kcg_bool tractionCutOffFromEVC,
  /* activateServiceBrakeFromEVC/ */
  kcg_bool activateServiceBrakeFromEVC,
  /* activateEmergencyBrakeFromEVC/ */
  kcg_bool activateEmergencyBrakeFromEVC,
  /* initialPosition/ */
  kcg_float64 initialPosition,
  /* initialVelocity/ */
  kcg_float64 initialVelocity,
  /* timeSinceLastCycle/ */
  kcg_int64 timeSinceLastCycle,
  /* activateBrakeBuildupTime/ */
  kcg_bool activateBrakeBuildupTime,
  /* activateAirResistance/ */
  kcg_bool activateAirResistance,
  /* maximumAcceleration/ */
  kcg_float64 maximumAcceleration,
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PHYSICS_MovementSimulation_reset_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PHYSICS_MovementSimulation_init_Toolbox_Physics(
  outC_PHYSICS_MovementSimulation_Toolbox_Physics *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Toolbox::Physics::PHYSICS_MovementSimulation/
  @1: (digital::FlipFlopSet#1)
*/

#endif /* _PHYSICS_MovementSimulation_Toolbox_Physics_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PHYSICS_MovementSimulation_Toolbox_Physics.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

