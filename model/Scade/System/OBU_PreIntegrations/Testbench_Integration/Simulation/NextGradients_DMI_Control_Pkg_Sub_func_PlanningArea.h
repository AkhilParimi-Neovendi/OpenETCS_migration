/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"
#include "NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float32_32 /* GradientsStartDMI/ */ GradientsStartDMI;
  array_float32_32 /* GradientsEndDMI/ */ GradientsEndDMI;
  array_float32_32 /* GradientsValueDMI/ */ GradientsValueDMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NextGradients_Start_DMI_Control_Pkg_Sub_func_PlanningArea /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Start#1)/ */ Context_NextGradients_Start_1;
  outC_NextGradients_End_DMI_Control_Pkg_Sub_func_PlanningArea /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_End#1)/ */ Context_NextGradients_End_1;
  outC_NextGradients_Value_DMI_Control_Pkg_Sub_func_PlanningArea /* _=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Value#1)/ */ Context_NextGradients_Value_1;
  outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea /* _L6=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator#1)/ */ Context_NextGradients_Iterator_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* lGradientsFirstIndex/ */ lGradientsFirstIndex;
  kcg_float32 /* _L2/ */ _L2;
  array_float32_32 /* _L3/ */ _L3;
  kcg_int32 /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  array_float32_32 /* _L43/ */ _L43;
  kcg_int32 /* _L44/ */ _L44;
  kcg_int32 /* _L45/ */ _L45;
  kcg_int32 /* _L46/ */ _L46;
  array_float32_32 /* _L47/ */ _L47;
  array_float32_32 /* _L48/ */ _L48;
  kcg_float32 /* _L51/ */ _L51;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L12/ */ _L12;
  array_float32_32 /* _L52/ */ _L52;
  array_float32_32 /* _L53/ */ _L53;
  array_float32_32 /* _L54/ */ _L54;
} outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients/ */
extern void NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inTrainPosition/ */
  kcg_float32 inTrainPosition,
  /* inGradientsStart/ */
  array_float32_32 *inGradientsStart,
  /* inGradientsEnd/ */
  array_float32_32 *inGradientsEnd,
  /* inGradientsValue/ */
  array_float32_32 *inGradientsValue,
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextGradients_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextGradients_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

