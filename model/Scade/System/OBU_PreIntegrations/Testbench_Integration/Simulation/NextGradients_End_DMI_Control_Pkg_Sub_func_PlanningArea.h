/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L40/ */ _L40;
  kcg_float32 /* _L39/ */ _L39;
  array_float32_12 /* _L38/ */ _L38;
  kcg_float32 /* _L37/ */ _L37;
  kcg_float32 /* _L36/ */ _L36;
  kcg_float32 /* _L35/ */ _L35;
  kcg_float32 /* _L34/ */ _L34;
  kcg_float32 /* _L33/ */ _L33;
  array_float32_32 /* _L32/ */ _L32;
  kcg_float32 /* _L31/ */ _L31;
  kcg_float32 /* _L30/ */ _L30;
  kcg_float32 /* _L29/ */ _L29;
  kcg_float32 /* _L28/ */ _L28;
  kcg_float32 /* _L27/ */ _L27;
} outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End/ */
extern void NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* GradientsFirstIndex/ */
  kcg_int32 GradientsFirstIndex,
  /* inGradientsEnd/ */
  array_float32_32 *inGradientsEnd,
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextGradients_End_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextGradients_End_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

