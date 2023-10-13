/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _PHYSICS_simulateAirResistance_Toolbox_Physics_Basic_H_
#define _PHYSICS_simulateAirResistance_Toolbox_Physics_Basic_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* newAcceleration/ */ newAcceleration;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L15/ */ _L15;
  kcg_float64 /* _L14/ */ _L14;
  kcg_float64 /* _L13/ */ _L13;
  kcg_float64 /* _L12/ */ _L12;
  kcg_float64 /* _L10/ */ _L10;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L1/ */ _L1;
} outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::Basic::PHYSICS_simulateAirResistance/ */
extern void PHYSICS_simulateAirResistance_Toolbox_Physics_Basic(
  /* currentVelocity/ */
  kcg_float64 currentVelocity,
  /* currentAcceleration/ */
  kcg_float64 currentAcceleration,
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PHYSICS_simulateAirResistance_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PHYSICS_simulateAirResistance_init_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAirResistance_Toolbox_Physics_Basic *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PHYSICS_simulateAirResistance_Toolbox_Physics_Basic_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PHYSICS_simulateAirResistance_Toolbox_Physics_Basic.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

