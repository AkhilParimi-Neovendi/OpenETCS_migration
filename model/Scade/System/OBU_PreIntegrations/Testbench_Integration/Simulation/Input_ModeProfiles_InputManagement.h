/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Input_ModeProfiles_InputManagement_H_
#define _Input_ModeProfiles_InputManagement_H_

#include "kcg_types.h"
#include "scaledDistance_2_distance_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* Mode_Profile_On_Borad/ */ Mode_Profile_On_Borad;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_scaledDistance_2_distance_InputManagement /* _L20=(InputManagement::scaledDistance_2_distance#2)/ */ Context_scaledDistance_2_distance_2;
  outC_scaledDistance_2_distance_InputManagement /* _L21=(InputManagement::scaledDistance_2_distance#3)/ */ Context_scaledDistance_2_distance_3;
  outC_scaledDistance_2_distance_InputManagement /* _L22=(InputManagement::scaledDistance_2_distance#4)/ */ Context_scaledDistance_2_distance_4;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_MA_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  T_MA_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  T_MA_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  T_MA_Level_And_Mode_Types_Pkg /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  M_MAMODE /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  T_MA_Level_And_Mode_Types_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* Loc_MO_Profile_Available/ */ Loc_MO_Profile_Available;
  T_MA_Level_And_Mode_Types_Pkg /* Loc_Mode_Profile/ */ Loc_Mode_Profile;
  M_MAMODE /* Loc_MAMode/ */ Loc_MAMode;
  T_MA_Level_And_Mode_Types_Pkg /* _L16/ */ _L16;
  P80_ModeProfile_T_Packet_Types_Pkg /* _L15/ */ _L15;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L5/ */ _L5;
  Q_DIR /* _L6/ */ _L6;
  Q_SCALE /* _L7/ */ _L7;
  D_MAMODE /* _L8/ */ _L8;
  M_MAMODE /* _L9/ */ _L9;
  V_MAMODE /* _L10/ */ _L10;
  L_MAMODE /* _L11/ */ _L11;
  L_ACKMAMODE /* _L12/ */ _L12;
  Q_MAMODE /* _L13/ */ _L13;
  kcg_int64 /* _L17/ */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L22/ */ _L22;
} outC_Input_ModeProfiles_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::Input_ModeProfiles/ */
extern void Input_ModeProfiles_InputManagement(
  /* P_80_One_Iter/ */
  P80_ModeProfile_T_Packet_Types_Pkg *P_80_One_Iter,
  /* referenceLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation,
  outC_Input_ModeProfiles_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Input_ModeProfiles_reset_InputManagement(
  outC_Input_ModeProfiles_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Input_ModeProfiles_init_InputManagement(
  outC_Input_ModeProfiles_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Input_ModeProfiles_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_ModeProfiles_InputManagement.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

