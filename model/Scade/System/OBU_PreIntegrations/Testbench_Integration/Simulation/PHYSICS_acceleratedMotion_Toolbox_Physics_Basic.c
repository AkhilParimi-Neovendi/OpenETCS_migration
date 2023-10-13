/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.h"

/* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion/ */
void PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
  /* acceleration/ */
  kcg_float64 acceleration,
  /* currentPosition/ */
  kcg_float64 currentPosition,
  /* currentVelocity/ */
  kcg_float64 currentVelocity,
  /* timeSinceLastCycle/ */
  kcg_int64 timeSinceLastCycle,
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC)
{
  outC->_L6 = kcg_lit_float64(0.0);
  outC->I2_Max_1_float64 = outC->_L6;
  outC->_L2_Max_1_float64 = outC->I2_Max_1_float64;
  outC->_L37 = currentVelocity;
  outC->_L7 = kcg_lit_float64(1000.0);
  outC->_L34 = timeSinceLastCycle;
  outC->_L10 = /* _L10= */(kcg_float64) outC->_L34;
  outC->_L26 = outC->_L10 / outC->_L7;
  outC->timeInSeconds = outC->_L26;
  outC->_L40 = outC->timeInSeconds;
  outC->_L33 = acceleration;
  outC->_L4 = outC->_L33 * outC->_L40;
  outC->_L14 = outC->_L4 + outC->_L37;
  outC->I1_Max_1_float64 = outC->_L14;
  outC->_L1_Max_1_float64 = outC->I1_Max_1_float64;
  outC->_L3_Max_1_float64 = outC->_L1_Max_1_float64 >= outC->_L2_Max_1_float64;
  /* @1/_L4= */
  if (outC->_L3_Max_1_float64) {
    outC->_L4_Max_1_float64 = outC->_L1_Max_1_float64;
  }
  else {
    outC->_L4_Max_1_float64 = outC->_L2_Max_1_float64;
  }
  outC->Ma_Output_Max_1_float64 = outC->_L4_Max_1_float64;
  outC->_L38 = currentPosition;
  outC->_L30 = outC->timeInSeconds;
  outC->_L35 = currentVelocity;
  outC->_L15 = outC->_L35 * outC->_L30;
  outC->_L1 = outC->timeInSeconds;
  outC->_L23 = kcg_lit_float64(0.5);
  outC->_L32 = acceleration;
  outC->_L12 = outC->_L32 * outC->_L23 * outC->_L1 * outC->_L1;
  outC->_L24 = outC->_L12 + outC->_L15 + outC->_L38;
  outC->I2_Max_2_float64 = outC->_L24;
  outC->_L2_Max_2_float64 = outC->I2_Max_2_float64;
  outC->_L39 = currentPosition;
  outC->I1_Max_2_float64 = outC->_L39;
  outC->_L1_Max_2_float64 = outC->I1_Max_2_float64;
  outC->_L3_Max_2_float64 = outC->_L1_Max_2_float64 >= outC->_L2_Max_2_float64;
  /* @2/_L4= */
  if (outC->_L3_Max_2_float64) {
    outC->_L4_Max_2_float64 = outC->_L1_Max_2_float64;
  }
  else {
    outC->_L4_Max_2_float64 = outC->_L2_Max_2_float64;
  }
  outC->Ma_Output_Max_2_float64 = outC->_L4_Max_2_float64;
  outC->_L42 = outC->Ma_Output_Max_2_float64;
  outC->newPosition = outC->_L42;
  outC->_L41 = outC->Ma_Output_Max_1_float64;
  outC->newVelocity = outC->_L41;
}

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_acceleratedMotion_init_Toolbox_Physics_Basic(
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC)
{
  outC->_L42 = kcg_lit_float64(0.0);
  outC->_L41 = kcg_lit_float64(0.0);
  outC->_L40 = kcg_lit_float64(0.0);
  outC->_L39 = kcg_lit_float64(0.0);
  outC->_L38 = kcg_lit_float64(0.0);
  outC->_L37 = kcg_lit_float64(0.0);
  outC->_L35 = kcg_lit_float64(0.0);
  outC->_L34 = kcg_lit_int64(0);
  outC->_L33 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_float64(0.0);
  outC->timeInSeconds = kcg_lit_float64(0.0);
  outC->_L1_Max_2_float64 = kcg_lit_float64(0.0);
  outC->_L2_Max_2_float64 = kcg_lit_float64(0.0);
  outC->_L3_Max_2_float64 = kcg_true;
  outC->_L4_Max_2_float64 = kcg_lit_float64(0.0);
  outC->I1_Max_2_float64 = kcg_lit_float64(0.0);
  outC->I2_Max_2_float64 = kcg_lit_float64(0.0);
  outC->Ma_Output_Max_2_float64 = kcg_lit_float64(0.0);
  outC->_L1_Max_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_Max_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Max_1_float64 = kcg_true;
  outC->_L4_Max_1_float64 = kcg_lit_float64(0.0);
  outC->I1_Max_1_float64 = kcg_lit_float64(0.0);
  outC->I2_Max_1_float64 = kcg_lit_float64(0.0);
  outC->Ma_Output_Max_1_float64 = kcg_lit_float64(0.0);
  outC->newVelocity = kcg_lit_float64(0.0);
  outC->newPosition = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PHYSICS_acceleratedMotion_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Toolbox::Physics::Basic::PHYSICS_acceleratedMotion/
  @1: (math::Max#1)
  @2: (math::Max#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

