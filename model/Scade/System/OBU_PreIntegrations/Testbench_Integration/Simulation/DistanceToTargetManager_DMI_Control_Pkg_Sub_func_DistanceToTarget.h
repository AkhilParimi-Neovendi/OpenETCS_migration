/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_
#define _DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_

#include "kcg_types.h"
#include "ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"
#include "ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"
#include "CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* DistanceToTarget_toDisplay/ */ DistanceToTarget_toDisplay;
  kcg_float64 /* InterpolatedDistanceToTarget_toDisplay/ */ InterpolatedDistanceToTarget_toDisplay;
  kcg_bool /* DistanceToTargetBarVisibility_toDisplay/ */ DistanceToTargetBarVisibility_toDisplay;
  kcg_bool /* DistanceToTargetVisibilityDigital_toDisplay/ */ DistanceToTargetVisibilityDigital_toDisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L19/ */ _L19;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget /* DistanceToTargetBarIfBlock:then:_L2=(DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget#1)/ */ Context_CalculateDistanceToTarget_1;
  outC_ConditionDistanceToTargetDigital_DMI_Control_Pkg_Sub_func_DistanceToTarget /* _L19=(DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetDigital#2)/ */ Context_ConditionDistanceToTargetDigital_2;
  outC_ConditionDistanceToTargetBar_DMI_Control_Pkg_Sub_func_DistanceToTarget /* _L6=(DMI_Control_Pkg::Sub_func::DistanceToTarget::ConditionDistanceToTargetBar#1)/ */ Context_ConditionDistanceToTargetBar_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  kcg_bool /* DistanceToTargetA2IfBlock: */ DistanceToTargetA2IfBlock_clock;
  kcg_bool /* DistanceToTargetBarIfBlock: */ DistanceToTargetBarIfBlock_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* DistanceToTargetA2IfBlock:then:_L2/ */ _L2_then_DistanceToTargetA2IfBlock;
  kcg_float64 /* DistanceToTargetA2IfBlock:then:_L1/ */ _L1_then_DistanceToTargetA2IfBlock;
  kcg_bool /* DistanceToTargetA2IfBlock:else:_L1/ */ _L1_else_DistanceToTargetA2IfBlock;
  kcg_float64 /* DistanceToTargetBarIfBlock:then:_L15/ */ _L15_then_DistanceToTargetBarIfBlock;
  kcg_bool /* DistanceToTargetBarIfBlock:then:_L6/ */ _L6_then_DistanceToTargetBarIfBlock;
  kcg_float64 /* DistanceToTargetBarIfBlock:then:_L2/ */ _L2_then_DistanceToTargetBarIfBlock;
  kcg_bool /* DistanceToTargetBarIfBlock:else:_L5/ */ _L5_else_DistanceToTargetBarIfBlock;
  kcg_bool /* ConditionTargetBar/ */ ConditionTargetBar;
  kcg_float64 /* localDistanceToTarget/ */ localDistanceToTarget;
  kcg_bool /* ConditionDistanceToTarget/ */ ConditionDistanceToTarget;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  kcg_float64 /* _L11/ */ _L11;
  kcg_bool /* _L21/ */ _L21;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L20/ */ _L20;
  kcg_float64 /* _L22/ */ _L22;
  kcg_float64 /* _L23/ */ _L23;
} outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DistanceToTarget::DistanceToTargetManager/ */
extern void DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DMI_dynamic/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

extern void DistanceToTargetManager_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DistanceToTargetManager_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_bool /* DistanceToTargetVisibilityDigital_toDisplay/ */ Context_DistanceToTargetVisibilityDigital_toDisplay;
  kcg_bool /* DistanceToTargetBarVisibility_toDisplay/ */ Context_DistanceToTargetBarVisibility_toDisplay;
  kcg_float64 /* InterpolatedDistanceToTarget_toDisplay/ */ Context_InterpolatedDistanceToTarget_toDisplay;
  kcg_float64 /* DistanceToTarget_toDisplay/ */ Context_DistanceToTarget_toDisplay;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* _L19/ */ Context__L19;
  kcg_bool /* _L6/ */ Context__L6;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget Context_CalculateDistanceToTarget_1;
} SV_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget;

extern void kcg_save_SV_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  SV_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *SV,
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);
extern void kcg_load_SV_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC,
  SV_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget *SV);



#endif /* _DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

