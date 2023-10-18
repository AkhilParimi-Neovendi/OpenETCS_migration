/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Input_Reversing_Mode_InputManagement_H_
#define _Input_Reversing_Mode_InputManagement_H_

#include "kcg_types.h"
#include "scaledDistance_2_distance_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* Reversing_Data/ */ Reversing_Data;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_scaledDistance_2_distance_InputManagement /* _L18=(InputManagement::scaledDistance_2_distance#1)/ */ Context_scaledDistance_2_distance_1;
  outC_scaledDistance_2_distance_InputManagement /* _L19=(InputManagement::scaledDistance_2_distance#2)/ */ Context_scaledDistance_2_distance_2;
  outC_scaledDistance_2_distance_InputManagement /* _L20=(InputManagement::scaledDistance_2_distance#3)/ */ Context_scaledDistance_2_distance_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L14/ */ _L14;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg /* _L13/ */ _L13;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L7/ */ _L7;
  Q_DIR /* _L8/ */ _L8;
  Q_SCALE /* _L9/ */ _L9;
  D_STARTREVERSE /* _L10/ */ _L10;
  L_REVERSEAREA /* _L11/ */ _L11;
  kcg_bool /* _L2/ */ _L2;
  Q_DIR /* _L3/ */ _L3;
  Q_SCALE /* _L4/ */ _L4;
  D_REVERSE /* _L5/ */ _L5;
  V_REVERSE /* _L6/ */ _L6;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
  kcg_int64 /* _L17/ */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
} outC_Input_Reversing_Mode_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::Input_Reversing_Mode/ */
extern void Input_Reversing_Mode_InputManagement(
  /* P_138/ */
  P138_ReversingAreaInformation_T_Packet_Types_Pkg *P_138,
  /* P_139/ */
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg *P_139,
  /* referenceLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  outC_Input_Reversing_Mode_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Input_Reversing_Mode_reset_InputManagement(
  outC_Input_Reversing_Mode_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Input_Reversing_Mode_init_InputManagement(
  outC_Input_Reversing_Mode_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Input_Reversing_Mode_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_Reversing_Mode_InputManagement.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

