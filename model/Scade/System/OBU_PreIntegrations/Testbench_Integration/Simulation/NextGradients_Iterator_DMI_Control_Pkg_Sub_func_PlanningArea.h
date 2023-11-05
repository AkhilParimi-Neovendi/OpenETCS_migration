/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outFirstIndexOfNextGradients/ */ outFirstIndexOfNextGradients;
  kcg_float32 /* AccOut/ */ AccOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L1/ */ _L1;
  kcg_float32 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
} outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients_Iterator/ */
extern void NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inTrainPosition/ */
  kcg_float32 inTrainPosition,
  /* inGradientsStart/ */
  kcg_float32 inGradientsStart,
  outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextGradients_Iterator_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextGradients_Iterator_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextGradients_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

