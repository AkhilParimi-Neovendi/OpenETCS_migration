/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _From_SR_PriorityManagement_H_
#define _From_SR_PriorityManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* FromSR_To_NewMode/ */ FromSR_To_NewMode;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else: */ else_clock_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
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
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:then:_L2/ */ _L2_then_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:else:else:then:_L1/ */ _L1_then_else_else_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:else:then:_L1/ */ _L1_then_else_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* Condition2FS/ */ Condition2FS;
  kcg_bool /* Condition2SH/ */ Condition2SH;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
} outC_From_SR_PriorityManagement;

/* ===========  node initialization and cycle functions  =========== */
/* PriorityManagement::From_SR/ */
extern void From_SR_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition5/ */
  kcg_bool Condition5,
  /* Condition6/ */
  kcg_bool Condition6,
  /* Condition13/ */
  kcg_bool Condition13,
  /* Condition21/ */
  kcg_bool Condition21,
  /* Condition28/ */
  kcg_bool Condition28,
  /* Condition29/ */
  kcg_bool Condition29,
  /* Condition31/ */
  kcg_bool Condition31,
  /* Condition32/ */
  kcg_bool Condition32,
  /* Condition40/ */
  kcg_bool Condition40,
  /* Condition46/ */
  kcg_bool Condition46,
  /* Condition51/ */
  kcg_bool Condition51,
  /* Condition56/ */
  kcg_bool Condition56,
  /* Condition59/ */
  kcg_bool Condition59,
  /* Condition72/ */
  kcg_bool Condition72,
  /* ConditionSR2TR/ */
  kcg_bool ConditionSR2TR,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_SR_PriorityManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void From_SR_reset_PriorityManagement(
  outC_From_SR_PriorityManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void From_SR_init_PriorityManagement(
  outC_From_SR_PriorityManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _From_SR_PriorityManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_SR_PriorityManagement.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

