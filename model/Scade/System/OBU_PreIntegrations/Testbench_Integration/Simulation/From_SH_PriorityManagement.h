/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _From_SH_PriorityManagement_H_
#define _From_SH_PriorityManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* FromSH_To_NewMode/ */ FromSH_To_NewMode;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* Condition2SB/ */ Condition2SB;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
} outC_From_SH_PriorityManagement;

/* ===========  node initialization and cycle functions  =========== */
/* PriorityManagement::From_SH/ */
extern void From_SH_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condtition13/ */
  kcg_bool Condtition13,
  /* Condition19/ */
  kcg_bool Condition19,
  /* Condition26/ */
  kcg_bool Condition26,
  /* Condition27/ */
  kcg_bool Condition27,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition30/ */
  kcg_bool Condition30,
  /* Condition46/ */
  kcg_bool Condition46,
  /* ConditionSH2TR/ */
  kcg_bool ConditionSH2TR,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_SH_PriorityManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void From_SH_reset_PriorityManagement(
  outC_From_SH_PriorityManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void From_SH_init_PriorityManagement(
  outC_From_SH_PriorityManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _From_SH_PriorityManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_SH_PriorityManagement.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

