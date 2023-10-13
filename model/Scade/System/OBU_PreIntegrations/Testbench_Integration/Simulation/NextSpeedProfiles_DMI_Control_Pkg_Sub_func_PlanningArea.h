/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea_H_
#define _NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea_H_

#include "kcg_types.h"
#include "NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea.h"
#include "NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float64_10 /* SpeedProfile_Distance_DMI/ */ SpeedProfile_Distance_DMI;
  array_float64_10 /* SpeedProfile_Speed_DMI/ */ SpeedProfile_Speed_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NextSpeedProfiles_Distance_DMI_Control_Pkg_Sub_func_PlanningArea /* _L38=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Distance#1)/ */ Context_NextSpeedProfiles_Distance_1;
  outC_NextSpeedProfiles_Speed_DMI_Control_Pkg_Sub_func_PlanningArea /* _L40=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Speed#1)/ */ Context_NextSpeedProfiles_Speed_1;
  outC_NextSpeedProfiles_Iterator_DMI_Control_Pkg_Sub_func_PlanningArea /* _L6=(DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles_Iterator#1)/ */ Context_NextSpeedProfiles_Iterator_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* lSpeedProfileFirstIndex/ */ lSpeedProfileFirstIndex;
  kcg_float64 /* _L2/ */ _L2;
  array_float64_32 /* _L3/ */ _L3;
  kcg_int64 /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  array_float64_10 /* _L38/ */ _L38;
  array_float64_10 /* _L40/ */ _L40;
  array_float64_32 /* _L43/ */ _L43;
  kcg_int64 /* _L44/ */ _L44;
  kcg_int64 /* _L46/ */ _L46;
  kcg_float64 /* _L51/ */ _L51;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L12/ */ _L12;
  array_float64_32 /* _L48/ */ _L48;
} outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::PlanningArea::NextSpeedProfiles/ */
extern void NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea(
  /* inTrainPosition/ */
  kcg_float64 inTrainPosition,
  /* inSpeedProfile_Distance/ */
  array_float64_32 *inSpeedProfile_Distance,
  /* inSpeedProfile_Speed/ */
  array_float64_32 *inSpeedProfile_Speed,
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NextSpeedProfiles_reset_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NextSpeedProfiles_init_DMI_Control_Pkg_Sub_func_PlanningArea(
  outC_NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NextSpeedProfiles_DMI_Control_Pkg_Sub_func_PlanningArea.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

