/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _AFB_Toolbox_Physics_H_
#define _AFB_Toolbox_Physics_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* calculatedAcceleration/ */ calculatedAcceleration;
  kcg_bool /* afbActive/ */ afbActive;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* @1/_L2/ */ _L2_FlipFlopSet_1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:then:IfBlock2: */ IfBlock2_clock_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:else: */ else_clock_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
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
  kcg_float64 /* IfBlock1:then:IfBlock2:else:then:_L16/ */ _L16_then_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:then:_L15/ */ _L15_then_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:then:_L3/ */ _L3_then_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:then:_L5/ */ _L5_then_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:then:_L6/ */ _L6_then_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:then:_L7/ */ _L7_then_else_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:else:then:_L8/ */ _L8_then_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:then:_L9/ */ _L9_then_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:then:_L10/ */ _L10_then_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:then:_L11/ */ _L11_then_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:then:_L13/ */ _L13_then_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:then:_L14/ */ _L14_then_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:else:_L19/ */ _L19_else_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:else:_L18/ */ _L18_else_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:else:_L17/ */ _L17_else_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:else:_L16/ */ _L16_else_else_IfBlock2_then_IfBlock1;
  kcg_bool /* IfBlock1:then:IfBlock2:else:else:_L15/ */ _L15_else_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:else:_L14/ */ _L14_else_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:else:_L13/ */ _L13_else_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:else:_L12/ */ _L12_else_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:else:_L10/ */ _L10_else_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:else:else:_L9/ */ _L9_else_else_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:IfBlock2:then:_L1/ */ _L1_then_IfBlock2_then_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L26/ */ _L26_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L27/ */ _L27_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L19/ */ _L19_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L17/ */ _L17_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L18/ */ _L18_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L16/ */ _L16_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L14/ */ _L14_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L13/ */ _L13_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L12/ */ _L12_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L11/ */ _L11_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L10/ */ _L10_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L9/ */ _L9_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L6/ */ _L6_else_IfBlock1;
  kcg_float64 /* realTargetSpeed/ */ realTargetSpeed;
  kcg_bool /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
} outC_AFB_Toolbox_Physics;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Physics::AFB/ */
extern void AFB_Toolbox_Physics(
  /* targetSpeed/ */
  kcg_float64 targetSpeed,
  /* traction/ */
  kcg_float64 traction,
  /* brake/ */
  kcg_float64 brake,
  /* currentSpeed/ */
  kcg_float64 currentSpeed,
  outC_AFB_Toolbox_Physics *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AFB_reset_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AFB_init_Toolbox_Physics(outC_AFB_Toolbox_Physics *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* @1/_L2/ */ Context__L2_FlipFlopSet_1;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_AFB_Toolbox_Physics;

extern void kcg_save_SV_AFB_Toolbox_Physics(
  SV_AFB_Toolbox_Physics *SV,
  outC_AFB_Toolbox_Physics *outC);
extern void kcg_load_SV_AFB_Toolbox_Physics(
  outC_AFB_Toolbox_Physics *outC,
  SV_AFB_Toolbox_Physics *SV);

/*
  Expanded instances for: Toolbox::Physics::AFB/
  @1: (digital::FlipFlopSet#1)
*/

#endif /* _AFB_Toolbox_Physics_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AFB_Toolbox_Physics.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

