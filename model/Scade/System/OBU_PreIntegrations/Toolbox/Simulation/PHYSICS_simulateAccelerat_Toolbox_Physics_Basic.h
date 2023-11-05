/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _PHYSICS_simulateAccelerat_Toolbox_Physics_Basic_H_
#define _PHYSICS_simulateAccelerat_Toolbox_Physics_Basic_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* acceleration/ */ acceleration;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_float32 /* currentAcceleration/ */ currentAcceleration;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L1/ */ _L1;
  kcg_float32 /* _L2/ */ _L2;
  kcg_float32 /* _L3/ */ _L3;
  kcg_float32 /* _L5/ */ _L5;
  kcg_float32 /* _L6/ */ _L6;
  kcg_float32 /* _L7/ */ _L7;
  kcg_float32 /* _L8/ */ _L8;
  kcg_float32 /* _L9/ */ _L9;
} outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::Basic::PHYSICS_simulateAccelerationBuildupTime/ */
extern void PHYSICS_simulateAccelerat_Toolbox_Physics_Basic(
  /* requestedAcceleration/ */
  kcg_float32 requestedAcceleration,
  outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic *outC);

extern void PHYSICS_simulateAccelerat_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void PHYSICS_simulateAccelerat_init_Toolbox_Physics_Basic(
  outC_PHYSICS_simulateAccelerat_Toolbox_Physics_Basic *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PHYSICS_simulateAccelerat_Toolbox_Physics_Basic_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PHYSICS_simulateAccelerat_Toolbox_Physics_Basic.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

