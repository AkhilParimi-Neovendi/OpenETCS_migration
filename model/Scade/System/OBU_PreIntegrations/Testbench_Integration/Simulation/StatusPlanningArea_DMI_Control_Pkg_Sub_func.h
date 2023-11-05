/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _StatusPlanningArea_DMI_Control_Pkg_Sub_func_H_
#define _StatusPlanningArea_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Visibility/ */ Visibility;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_PlanningAreaStatus /* PlanningAreaStatus: */ PlanningAreaStatus_state_nxt;
  kcg_bool /* PlanningAreaStatus: */ PlanningAreaStatus_reset_act;
  kcg_bool /* PlanningAreaStatus: */ PlanningAreaStatus_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_PlanningAreaStatus /* PlanningAreaStatus: */ PlanningAreaStatus_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* PlanningAreaStatus:NotVisible:_L2/ */ _L2_NotVisible_PlanningAreaStatus;
  kcg_bool /* PlanningAreaStatus:Visible:_L2/ */ _L2_Visible_PlanningAreaStatus;
  SSM_ST_PlanningAreaStatus /* PlanningAreaStatus: */ PlanningAreaStatus_state_sel;
  SSM_TR_PlanningAreaStatus /* PlanningAreaStatus: */ PlanningAreaStatus_fired_strong;
  SSM_TR_PlanningAreaStatus /* PlanningAreaStatus: */ PlanningAreaStatus_fired;
  kcg_bool /* ShowingState/ */ ShowingState;
  kcg_bool /* HidingState/ */ HidingState;
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
} outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::StatusPlanningArea/ */
extern void StatusPlanningArea_DMI_Control_Pkg_Sub_func(
  /* ModeIndex/ */
  kcg_int32 ModeIndex,
  /* Hide/ */
  kcg_bool Hide,
  /* show/ */
  kcg_bool show,
  /* MousePressed/ */
  kcg_bool MousePressed,
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC);

extern void StatusPlanningArea_reset_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void StatusPlanningArea_init_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* PlanningAreaStatus: */ Context_PlanningAreaStatus_reset_nxt;
  kcg_bool /* PlanningAreaStatus: */ Context_PlanningAreaStatus_reset_act;
  SSM_ST_PlanningAreaStatus /* PlanningAreaStatus: */ Context_PlanningAreaStatus_state_nxt;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_StatusPlanningArea_DMI_Control_Pkg_Sub_func;

extern void kcg_save_SV_StatusPlanningArea_DMI_Control_Pkg_Sub_func(
  SV_StatusPlanningArea_DMI_Control_Pkg_Sub_func *SV,
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC);
extern void kcg_load_SV_StatusPlanningArea_DMI_Control_Pkg_Sub_func(
  outC_StatusPlanningArea_DMI_Control_Pkg_Sub_func *outC,
  SV_StatusPlanningArea_DMI_Control_Pkg_Sub_func *SV);



#endif /* _StatusPlanningArea_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** StatusPlanningArea_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

