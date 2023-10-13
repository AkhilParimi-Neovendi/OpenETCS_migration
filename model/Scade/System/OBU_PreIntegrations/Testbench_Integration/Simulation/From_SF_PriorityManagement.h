/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _From_SF_PriorityManagement_H_
#define _From_SF_PriorityManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* FromSF_To_NewMode/ */ FromSF_To_NewMode;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  T_Mode_Level_And_Mode_Types_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
} outC_From_SF_PriorityManagement;

/* ===========  node initialization and cycle functions  =========== */
/* PriorityManagement::From_SF/ */
extern void From_SF_PriorityManagement(
  /* Condition1/ */
  kcg_bool Condition1,
  /* Condition29/ */
  kcg_bool Condition29,
  /* previousMode_Loc/ */
  T_Mode_Level_And_Mode_Types_Pkg previousMode_Loc,
  outC_From_SF_PriorityManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void From_SF_reset_PriorityManagement(
  outC_From_SF_PriorityManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void From_SF_init_PriorityManagement(
  outC_From_SF_PriorityManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _From_SF_PriorityManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** From_SF_PriorityManagement.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

