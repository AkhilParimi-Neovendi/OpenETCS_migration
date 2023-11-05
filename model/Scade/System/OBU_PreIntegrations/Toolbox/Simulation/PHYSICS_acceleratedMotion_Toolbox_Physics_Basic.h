/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _PHYSICS_acceleratedMotion_Toolbox_Physics_Basic_H_
#define _PHYSICS_acceleratedMotion_Toolbox_Physics_Basic_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* newPosition/ */ newPosition;
  kcg_float32 /* newVelocity/ */ newVelocity;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* @1/Ma_Output/ */ Ma_Output_Max_1_float32;
  kcg_float32 /* @1/I2/ */ I2_Max_1_float32;
  kcg_float32 /* @1/I1/ */ I1_Max_1_float32;
  kcg_float32 /* @1/_L4/ */ _L4_Max_1_float32;
  kcg_bool /* @1/_L3/ */ _L3_Max_1_float32;
  kcg_float32 /* @1/_L2/ */ _L2_Max_1_float32;
  kcg_float32 /* @1/_L1/ */ _L1_Max_1_float32;
  kcg_float32 /* @2/Ma_Output/ */ Ma_Output_Max_2_float32;
  kcg_float32 /* @2/I2/ */ I2_Max_2_float32;
  kcg_float32 /* @2/I1/ */ I1_Max_2_float32;
  kcg_float32 /* @2/_L4/ */ _L4_Max_2_float32;
  kcg_bool /* @2/_L3/ */ _L3_Max_2_float32;
  kcg_float32 /* @2/_L2/ */ _L2_Max_2_float32;
  kcg_float32 /* @2/_L1/ */ _L1_Max_2_float32;
  kcg_float32 /* timeInSeconds/ */ timeInSeconds;
  kcg_float32 /* _L30/ */ _L30;
  kcg_float32 /* _L26/ */ _L26;
  kcg_float32 /* _L24/ */ _L24;
  kcg_float32 /* _L23/ */ _L23;
  kcg_float32 /* _L15/ */ _L15;
  kcg_float32 /* _L14/ */ _L14;
  kcg_float32 /* _L12/ */ _L12;
  kcg_float32 /* _L10/ */ _L10;
  kcg_float32 /* _L7/ */ _L7;
  kcg_float32 /* _L6/ */ _L6;
  kcg_float32 /* _L4/ */ _L4;
  kcg_float32 /* _L1/ */ _L1;
  kcg_float32 /* _L32/ */ _L32;
  kcg_float32 /* _L33/ */ _L33;
  kcg_int32 /* _L34/ */ _L34;
  kcg_float32 /* _L35/ */ _L35;
  kcg_float32 /* _L37/ */ _L37;
  kcg_float32 /* _L38/ */ _L38;
  kcg_float32 /* _L39/ */ _L39;
  kcg_float32 /* _L40/ */ _L40;
  kcg_float32 /* _L41/ */ _L41;
  kcg_float32 /* _L42/ */ _L42;
} outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::Basic::PHYSICS_acceleratedMotion/ */
extern void PHYSICS_acceleratedMotion_Toolbox_Physics_Basic(
  /* acceleration/ */
  kcg_float32 acceleration,
  /* currentPosition/ */
  kcg_float32 currentPosition,
  /* currentVelocity/ */
  kcg_float32 currentVelocity,
  /* timeSinceLastCycle/ */
  kcg_int32 timeSinceLastCycle,
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PHYSICS_acceleratedMotion_reset_Toolbox_Physics_Basic(
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PHYSICS_acceleratedMotion_init_Toolbox_Physics_Basic(
  outC_PHYSICS_acceleratedMotion_Toolbox_Physics_Basic *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Toolbox::Physics::Basic::PHYSICS_acceleratedMotion/
  @1: (math::Max#1)
  @2: (math::Max#2)
*/

#endif /* _PHYSICS_acceleratedMotion_Toolbox_Physics_Basic_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PHYSICS_acceleratedMotion_Toolbox_Physics_Basic.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

