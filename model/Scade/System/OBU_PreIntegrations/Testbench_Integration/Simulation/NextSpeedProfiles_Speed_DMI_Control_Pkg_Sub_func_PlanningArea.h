/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float64_10 /* SpeedProfiles_Speed/ */ SpeedProfiles_Speed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L40/ */ _L40;
  kcg_float64 /* _L39/ */ _L39;
  array_float64_10 /* _L38/ */ _L38;
  kcg_float64 /* _L37/ */ _L37;
  kcg_float64 /* _L36/ */ _L36;
  kcg_float64 /* _L35/ */ _L35;
  kcg_float64 /* _L34/ */ _L34;
  array_float64_32 /* _L32/ */ _L32;
  kcg_float64 /* _L31/ */ _L31;
  kcg_float64 /* _L29/ */ _L29;
  kcg_float64 /* _L28/ */ _L28;
  kcg_float64 /* _L27/ */ _L27;
} outC_NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed/ */
extern void NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inSpeedProfiles_FirstIndex/ */
  kcg_int64 inSpeedProfiles_FirstIndex,
  /* inSpeedProfiles_Speed/ */
  array_float64_32 *inSpeedProfiles_Speed,
  outC_NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextSpeedProfiles_Speed_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextSpeedProfiles_Speed_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

