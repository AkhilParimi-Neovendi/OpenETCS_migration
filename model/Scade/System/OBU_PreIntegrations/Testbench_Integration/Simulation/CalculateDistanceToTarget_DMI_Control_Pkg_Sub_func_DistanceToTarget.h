/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_
#define _CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* InterpolatedDistanceToTarget/ */ InterpolatedDistanceToTarget;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L10/ */ _L10_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L9/ */ _L9_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L8/ */ _L8_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L7/ */ _L7_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L6/ */ _L6_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L2/ */ _L2_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L3/ */ _L3_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L5/ */ _L5_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
} outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::DistanceToTarget::CalculateDistanceToTarget/ */
extern void CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  /* DistanceToTarget/ */
  kcg_float64 DistanceToTarget,
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

extern void CalculateDistanceToTarget_reset_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CalculateDistanceToTarget_init_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_float64 /* InterpolatedDistanceToTarget/ */ Context_InterpolatedDistanceToTarget;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget;

extern void kcg_save_SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *SV,
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC);
extern void kcg_load_SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget(
  outC_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *outC,
  SV_CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget *SV);



#endif /* _CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalculateDistanceToTarget_DMI_Control_Pkg_Sub_func_DistanceToTarget.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

