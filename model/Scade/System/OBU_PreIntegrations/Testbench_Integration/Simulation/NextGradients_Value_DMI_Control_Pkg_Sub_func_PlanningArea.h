/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea_H_

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
  kcg_float32 /* _L26/ */ _L26;
  kcg_float32 /* _L25/ */ _L25;
  array_float32_32 /* _L24/ */ _L24;
  array_float32_12 /* _L23/ */ _L23;
  kcg_float32 /* _L22/ */ _L22;
  kcg_float32 /* _L21/ */ _L21;
  kcg_float32 /* _L20/ */ _L20;
  kcg_float32 /* _L19/ */ _L19;
  kcg_float32 /* _L18/ */ _L18;
  kcg_float32 /* _L17/ */ _L17;
  kcg_float32 /* _L16/ */ _L16;
  kcg_float32 /* _L15/ */ _L15;
  kcg_float32 /* _L14/ */ _L14;
  kcg_float32 /* _L13/ */ _L13;
} outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value/ */
extern void NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* GradientsFirstIndex/ */
  kcg_int32 GradientsFirstIndex,
  /* inGradientsValue/ */
  array_float32_32 *inGradientsValue,
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextGradients_Value_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextGradients_Value_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

