/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _InputLocalisation_Interfaces_H_
#define _InputLocalisation_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* BG_In_Expected_List_In_SR/ */ BG_In_Expected_List_In_SR;
  kcg_bool /* BG_In_Expected_List_In_SH/ */ BG_In_Expected_List_In_SH;
  kcg_bool /* Linked_BG_Pased_In_Wrong_Direction/ */ Linked_BG_Pased_In_Wrong_Direction;
  trainPosition_T_TrainPosition_Types_Pck /* Train_Position/ */ Train_Position;
  Speed_T_Obu_BasicTypes_Pkg /* Train_Speed/ */ Train_Speed;
  kcg_bool /* Train_Standstill/ */ Train_Standstill;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  positionErrors_T_TrainPosition_Types_Pck /* _L12/ */ _L12;
  trainPosition_T_TrainPosition_Types_Pck /* _L11/ */ _L11;
  Speed_T_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L15/ */ _L15;
} outC_InputLocalisation_Interfaces;

/* ===========  node initialization and cycle functions  =========== */
/* Interfaces::InputLocalisation/ */
extern void InputLocalisation_Interfaces(
  /* Data_From_Localisation/ */
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  outC_InputLocalisation_Interfaces *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InputLocalisation_reset_Interfaces(
  outC_InputLocalisation_Interfaces *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InputLocalisation_init_Interfaces(
  outC_InputLocalisation_Interfaces *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InputLocalisation_Interfaces_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputLocalisation_Interfaces.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

