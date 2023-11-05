/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float32_10 /* SpeedProfiles_Distance/ */ SpeedProfiles_Distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L40/ */ _L40;
  kcg_float32 /* _L39/ */ _L39;
  array_float32_10 /* _L38/ */ _L38;
  kcg_float32 /* _L37/ */ _L37;
  kcg_float32 /* _L36/ */ _L36;
  kcg_float32 /* _L35/ */ _L35;
  kcg_float32 /* _L34/ */ _L34;
  array_float32_32 /* _L32/ */ _L32;
  kcg_float32 /* _L31/ */ _L31;
  kcg_float32 /* _L29/ */ _L29;
  kcg_float32 /* _L28/ */ _L28;
  kcg_float32 /* _L27/ */ _L27;
} outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance/ */
extern void NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inSpeedProfiles_FirstIndex/ */
  kcg_int32 inSpeedProfiles_FirstIndex,
  /* inSpeedProfiles_Distance/ */
  array_float32_32 *inSpeedProfiles_Distance,
  outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextSpeedProfiles_Distance_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextSpeedProfiles_Distance_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

