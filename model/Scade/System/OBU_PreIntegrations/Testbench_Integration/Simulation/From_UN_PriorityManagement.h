/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _From_UN_PriorityManagement_H_
#define _From_UN_PriorityManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* FromUN_To_NewMode/ */ FromUN_To_NewMode;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* Condition2SH/ */ Condition2SH;
  kcg_bool /* Condition2SR/ */ Condition2SR;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
} outC_From_UN_PriorityManagement;

/* ===========  node initialization and cycle functions  =========== */
/* PriorityManagement::From_UN/ */
extern void From_UN_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition5/ */
  kcg_bool Condition5,
  /* Condition13/ */
  kcg_bool Condition13,
  /* Condition25/ */
  kcg_bool Condition25,
  /* Condition28/ */
  kcg_bool Condition28,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition34/ */
  kcg_bool Condition34,
  /* Condition44/ */
  kcg_bool Condition44,
  /* Condition45/ */
  kcg_bool Condition45,
  /* Condition56/ */
  kcg_bool Condition56,
  /* Condition61/ */
  kcg_bool Condition61,
  /* Condition71/ */
  kcg_bool Condition71,
  /* ConditionUN2TR/ */
  kcg_bool ConditionUN2TR,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_UN_PriorityManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void From_UN_reset_PriorityManagement(
  outC_From_UN_PriorityManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void From_UN_init_PriorityManagement(
  outC_From_UN_PriorityManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _From_UN_PriorityManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_UN_PriorityManagement.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

