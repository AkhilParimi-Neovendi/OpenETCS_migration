/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _RBCSessionRequests_OutputToRBC_H_
#define _RBCSessionRequests_OutputToRBC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Connection_to_RBC_Requested/ */ Connection_to_RBC_Requested;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVEL /* Loc_new_level/ */ Loc_new_level;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  M_LEVEL /* _L1/ */ _L1;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L16/ */ _L16;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L15/ */ _L15;
  NID_LRBG /* _L14/ */ _L14;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  M_LEVEL /* _L17/ */ _L17;
  M_LEVEL /* _L18/ */ _L18;
  M_LEVEL /* _L19/ */ _L19;
  M_LEVEL /* _L20/ */ _L20;
} outC_RBCSessionRequests_OutputToRBC;

/* ===========  node initialization and cycle functions  =========== */
/* OutputToRBC::RBCSessionRequests/ */
extern void RBCSessionRequests_OutputToRBC(
  /* last_level/ */
  M_LEVEL last_level,
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  outC_RBCSessionRequests_OutputToRBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RBCSessionRequests_reset_OutputToRBC(
  outC_RBCSessionRequests_OutputToRBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RBCSessionRequests_init_OutputToRBC(
  outC_RBCSessionRequests_OutputToRBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBCSessionRequests_OutputToRBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBCSessionRequests_OutputToRBC.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

