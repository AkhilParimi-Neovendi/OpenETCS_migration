/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ConditionnalTransition_InputManagement_H_
#define _ConditionnalTransition_InputManagement_H_

#include "kcg_types.h"
#include "LevelTR2Level_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_LevelTransition_Level_And_Mode_Types_Pkg /* One_Transition/ */ One_Transition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LevelTR2Level_InputManagement /* _L16=(InputManagement::LevelTR2Level#2)/ */ Context_LevelTR2Level_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVELTR /* Loc_Level_Transition/ */ Loc_Level_Transition;
  M_LEVEL /* Loc_Req_Level/ */ Loc_Req_Level;
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  NID_LRBG /* _L1/ */ _L1;
  kcg_bool /* _L6/ */ _L6;
  Q_DIR /* _L7/ */ _L7;
  M_LEVELTR /* _L8/ */ _L8;
  NID_NTC /* _L9/ */ _L9;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L10/ */ _L10;
  kcg_int32 /* _L12/ */ _L12;
  T_TransitionType_Level_And_Mode_Types_Pkg /* _L13/ */ _L13;
  M_LEVEL /* _L16/ */ _L16;
  M_LEVELTR /* _L17/ */ _L17;
  M_LEVEL /* _L18/ */ _L18;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
} outC_ConditionnalTransition_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::ConditionnalTransition/ */
extern void ConditionnalTransition_InputManagement(
  /* LRBG/ */
  NID_LRBG LRBG,
  /* referenceLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* Packet_46_One_Iter/ */
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *Packet_46_One_Iter,
  outC_ConditionnalTransition_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConditionnalTransition_reset_InputManagement(
  outC_ConditionnalTransition_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConditionnalTransition_init_InputManagement(
  outC_ConditionnalTransition_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConditionnalTransition_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConditionnalTransition_InputManagement.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

