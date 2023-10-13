/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _InputLocalisation_InputManagement_H_
#define _InputLocalisation_InputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* train_standstill/ */ train_standstill;
  trainPosition_T_TrainPosition_Types_Pck /* trainPosition/ */ trainPosition;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* Data_From_Localisation_To_Mode/ */ Data_From_Localisation_To_Mode;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Loc_BG_In_Expected_List_In_SR/ */ Loc_BG_In_Expected_List_In_SR;
  kcg_bool /* Loc_BG_In_Expected_List_In_SH/ */ Loc_BG_In_Expected_List_In_SH;
  positionErrors_T_TrainPosition_Types_Pck /* Loc_PositionErrors/ */ Loc_PositionErrors;
  trainPosition_T_TrainPosition_Types_Pck /* Loc_Train_Position/ */ Loc_Train_Position;
  Speed_T_Obu_BasicTypes_Pkg /* Loc_Train_Speed/ */ Loc_Train_Speed;
  kcg_bool /* Loc_Train_Standstill/ */ Loc_Train_Standstill;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  positionErrors_T_TrainPosition_Types_Pck /* _L12/ */ _L12;
  trainPosition_T_TrainPosition_Types_Pck /* _L11/ */ _L11;
  Speed_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  positionErrors_T_TrainPosition_Types_Pck /* _L18/ */ _L18;
  trainPosition_T_TrainPosition_Types_Pck /* _L19/ */ _L19;
  Speed_T_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  trainPosition_T_TrainPosition_Types_Pck /* _L23/ */ _L23;
} outC_InputLocalisation_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::InputLocalisation/ */
extern void InputLocalisation_InputManagement(
  /* Data_From_Localisation/ */
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  outC_InputLocalisation_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InputLocalisation_reset_InputManagement(
  outC_InputLocalisation_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InputLocalisation_init_InputManagement(
  outC_InputLocalisation_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InputLocalisation_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputLocalisation_InputManagement.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

