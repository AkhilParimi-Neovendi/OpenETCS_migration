/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Area_D_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _Area_D_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"
#include "NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float32_32 /* GradientsStart/ */ GradientsStart;
  array_float32_32 /* GradientsEnd/ */ GradientsEnd;
  tSpeedPoints /* PlaningAreaSpeedProfile/ */ PlaningAreaSpeedProfile;
  kcg_float32 /* CeilingPermittedSpeed/ */ CeilingPermittedSpeed;
  array_float32_32 /* GradientsValue/ */ GradientsValue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NextGradients_DMI_Control_Pkg_Sub_func_PlanningArea /* _L1=(DMI_Control_Pkg::Sub_func::PlanningArea::NextGradients#1)/ */ Context_NextGradients_1;
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea /* _L13=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles#1)/ */ Context_NextSpeedProfiles_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L7/ */ _L7;
  array_float32_32 /* _L6/ */ _L6;
  array_float32_32 /* _L5/ */ _L5;
  array_float32_32 /* _L4/ */ _L4;
  array_float32_32 /* _L1/ */ _L1;
  array_float32_32 /* _L2/ */ _L2;
  array_float32_32 /* _L3/ */ _L3;
  kcg_float32 /* _L8/ */ _L8;
  array_float32_32 /* _L9/ */ _L9;
  array_float32_32 /* _L10/ */ _L10;
  tSpeedPoints /* _L11/ */ _L11;
  kcg_float32 /* _L12/ */ _L12;
  array_float32_10 /* _L14/ */ _L14;
  array_float32_10 /* _L13/ */ _L13;
} outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::Area_D/ */
extern void Area_D_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inTrainPosition/ */
  kcg_float32 inTrainPosition,
  /* inGradientsValue/ */
  array_float32_32 *inGradientsValue,
  /* inGradientsEnd/ */
  array_float32_32 *inGradientsEnd,
  /* inGradientsStart/ */
  array_float32_32 *inGradientsStart,
  /* inCeilingPermittedSpeed/ */
  kcg_float32 inCeilingPermittedSpeed,
  /* inSpeedProfile_Distance/ */
  array_float32_32 *inSpeedProfile_Distance,
  /* inSpeedProfile_Speed/ */
  array_float32_32 *inSpeedProfile_Speed,
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Area_D_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Area_D_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_Area_D_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Area_D_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Area_D_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

