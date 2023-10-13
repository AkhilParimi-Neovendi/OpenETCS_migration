/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_
#define _ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_

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
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  M_SUPERVISION_STATUS_DMI_Types_Pkg /* _L10/ */ _L10;
  M_MODE /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L6/ */ _L6;
  M_MODE /* _L5/ */ _L5;
  M_MODE /* _L4/ */ _L4;
  M_MODE /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L13/ */ _L13;
  M_MODE /* _L14/ */ _L14;
  M_MODE /* _L15/ */ _L15;
  kcg_bool /* _L18/ */ _L18;
  M_MODE /* _L17/ */ _L17;
  M_MODE /* _L16/ */ _L16;
  kcg_bool /* _L19/ */ _L19;
} outC_ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetDigital/ */
extern void ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_dynamic/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

extern void ConditionDistanceToTargetDigital_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ConditionDistanceToTargetDigital_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

