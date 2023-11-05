/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _NormalTransition_InputManagement_H_
#define _NormalTransition_InputManagement_H_

#include "kcg_types.h"
#include "scaledDistance_2_distance_InputManagement.h"
#include "LevelTR2Level_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_LevelTransition_Level_And_Mode_Types_Pkg /* One_Iter/ */ One_Iter;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_LevelTR2Level_InputManagement /* _L18=(InputManagement::LevelTR2Level#1)/ */ Context_LevelTR2Level_1;
  outC_scaledDistance_2_distance_InputManagement /* _L20=(InputManagement::scaledDistance_2_distance#2)/ */ Context_scaledDistance_2_distance_2;
  outC_scaledDistance_2_distance_InputManagement /* _L19=(InputManagement::scaledDistance_2_distance#1)/ */ Context_scaledDistance_2_distance_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVEL /* Loc_Req_Level/ */ Loc_Req_Level;
  M_LEVELTR /* Loc_Level_Transition/ */ Loc_Level_Transition;
  kcg_bool /* Loc_ImmediateAck/ */ Loc_ImmediateAck;
  L_internal_Type_Obu_BasicTypes_Pkg /* Loc_Ack_Length/ */ Loc_Ack_Length;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  NID_LRBG /* _L2/ */ _L2;
  kcg_bool /* _L10/ */ _L10;
  Q_DIR /* _L11/ */ _L11;
  Q_SCALE /* _L12/ */ _L12;
  D_LEVELTR /* _L13/ */ _L13;
  M_LEVELTR /* _L14/ */ _L14;
  NID_NTC /* _L15/ */ _L15;
  L_ACKLEVELTR /* _L16/ */ _L16;
  M_LEVEL /* _L18/ */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  D_LEVELTR /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  T_TransitionType_Level_And_Mode_Types_Pkg /* _L24/ */ _L24;
  M_LEVELTR /* _L26/ */ _L26;
  M_LEVEL /* _L27/ */ _L27;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L28/ */ _L28;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L32/ */ _L32;
  kcg_int32 /* _L33/ */ _L33;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L34/ */ _L34;
} outC_NormalTransition_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::NormalTransition/ */
extern void NormalTransition_InputManagement(
  /* LRBG/ */
  NID_LRBG LRBG,
  /* referenceLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  /* P41_OneIter/ */
  P41_LevelTransitionOrder_T_Packet_Types_Pkg *P41_OneIter,
  outC_NormalTransition_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void NormalTransition_reset_InputManagement(
  outC_NormalTransition_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void NormalTransition_init_InputManagement(
  outC_NormalTransition_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _NormalTransition_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** NormalTransition_InputManagement.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

