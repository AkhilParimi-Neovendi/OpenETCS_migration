/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_
#define _ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition/ */ Condition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L4/ */ _L4;
  M_MODE /* _L2/ */ _L2;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L5/ */ _L5;
  M_MODE /* _L6/ */ _L6;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  M_MODE /* _L12/ */ _L12;
  M_MODE /* _L13/ */ _L13;
} outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar/ */
extern void ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_dynamic/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

extern void ConditionDistanceToTargetBar_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ConditionDistanceToTargetBar_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

