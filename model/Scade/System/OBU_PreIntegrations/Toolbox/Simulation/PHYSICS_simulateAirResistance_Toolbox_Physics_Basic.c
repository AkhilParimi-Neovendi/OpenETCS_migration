/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.h"

/* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance/ */
void PHYSICS_simulateAirResistance_Toolbox_Physics_Basic(
  /* currentVelocity/ */
  kcg_float32 currentVelocity,
  /* currentAcceleration/ */
  kcg_float32 currentAcceleration,
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC)
{
  outC->_L1 = kcg_lit_float32(42000.0);
  outC->_L10 = kcg_lit_float32(2.0);
  outC->_L16 = currentVelocity;
  outC->_L13 = kcg_lit_float32(10.4);
  outC->_L3 = kcg_lit_float32(0.2);
  outC->_L6 = kcg_lit_float32(1.2);
  outC->_L8 = outC->_L6 * outC->_L3 * outC->_L13 * outC->_L16 * outC->_L16;
  outC->_L12 = outC->_L8 / outC->_L10;
  outC->_L4 = outC->_L12 / outC->_L1;
  outC->_L15 = currentAcceleration;
  outC->_L14 = outC->_L15 - outC->_L4;
  outC->newAcceleration = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void PHYSICS_simulateAirResistance_init_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC)
{
  outC->_L1 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_float32(0.0);
  outC->_L12 = kcg_lit_float32(0.0);
  outC->_L13 = kcg_lit_float32(0.0);
  outC->_L14 = kcg_lit_float32(0.0);
  outC->_L15 = kcg_lit_float32(0.0);
  outC->_L16 = kcg_lit_float32(0.0);
  outC->newAcceleration = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PHYSICS_simulateAirResistance_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

