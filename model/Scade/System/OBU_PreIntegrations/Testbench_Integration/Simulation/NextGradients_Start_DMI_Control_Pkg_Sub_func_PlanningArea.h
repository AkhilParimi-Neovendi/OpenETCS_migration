/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea_H_

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
  kcg_float32 /* _L12/ */ _L12;
  kcg_float32 /* _L11/ */ _L11;
  kcg_float32 /* _L10/ */ _L10;
  kcg_float32 /* _L9/ */ _L9;
  kcg_float32 /* _L8/ */ _L8;
  kcg_float32 /* _L7/ */ _L7;
  kcg_float32 /* _L6/ */ _L6;
  array_float32_32 /* _L5/ */ _L5;
  kcg_float32 /* _L4/ */ _L4;
  kcg_float32 /* _L3/ */ _L3;
  kcg_float32 /* _L2/ */ _L2;
  array_float32_12 /* _L1/ */ _L1;
  kcg_float32 /* _L14/ */ _L14;
  kcg_float32 /* _L13/ */ _L13;
} outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start/ */
extern void NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* GradientsFirstIndex/ */
  kcg_int32 GradientsFirstIndex,
  /* inGradientsStart/ */
  array_float32_32 *inGradientsStart,
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextGradients_Start_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextGradients_Start_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

