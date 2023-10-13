/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic.h"

/* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime/ */
void PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
  /* requestedAcceleration/ */
  kcg_float64 requestedAcceleration,
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC)
{
  /* currentAcceleration/ */
  static kcg_float64 last_currentAcceleration;

  last_currentAcceleration = outC->currentAcceleration;
  outC->_L3 = last_currentAcceleration;
  outC->_L8 = kcg_lit_float64(0.04);
  outC->_L5 = requestedAcceleration;
  outC->_L6 = outC->_L5 - outC->_L3;
  outC->_L7 = outC->_L6 * outC->_L8;
  outC->_L9 = outC->_L7 + outC->_L3;
  outC->_L1 = requestedAcceleration;
  /* _L2= */
  if (outC->init) {
    outC->_L2 = outC->_L1;
  }
  else {
    outC->_L2 = outC->_L9;
  }
  outC->acceleration = outC->_L2;
  outC->currentAcceleration = outC->_L2;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_simulateAccelerationBuildupTime_init_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC)
{
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->acceleration = kcg_lit_float64(0.0);
  outC->currentAcceleration = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void PHYSICS_simulateAccelerationBuildupTime_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC)
{
  outC->init = kcg_true;
  outC->currentAcceleration = kcg_lit_float64(0.0);
}


void kcg_save_SV_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
  SV_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *SV,
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC)
{
  SV->Context_currentAcceleration = outC->currentAcceleration;
  SV->Context_init = outC->init;
}

void kcg_load_SV_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *outC,
  SV_PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic *SV)
{
  outC->currentAcceleration = SV->Context_currentAcceleration;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PHYSICS_simulateAccelerationBuildupTime_Toolbox_Physics_Basic.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

