/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _InputF2Functions_Interfaces_H_
#define _InputF2Functions_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* T_NVCONTACT_Overpass/ */ T_NVCONTACT_Overpass;
  kcg_bool /* Error_BG_System_Version/ */ Error_BG_System_Version;
  kcg_bool /* Failure_Occured/ */ Failure_Occured;
  kcg_bool /* Continue_Shunting_Function_Active/ */ Continue_Shunting_Function_Active;
  kcg_bool /* Stop_Shunting_Stored/ */ Stop_Shunting_Stored;
  kcg_bool /* Linking_Reaction_To_Trip/ */ Linking_Reaction_To_Trip;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  NID_C /* _L14/ */ _L14;
  NID_ERRORBG_BG_Types_Pkg /* _L13/ */ _L13;
  MSG_Errors_T_Common_Types_Pkg /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
} outC_InputF2Functions_Interfaces;

/* ===========  node initialization and cycle functions  =========== */
/* Interfaces::InputF2Functions/ */
extern void InputF2Functions_Interfaces(
  /* Data_From_F2_Functions/ */
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  outC_InputF2Functions_Interfaces *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InputF2Functions_reset_Interfaces(
  outC_InputF2Functions_Interfaces *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InputF2Functions_init_Interfaces(
  outC_InputF2Functions_Interfaces *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InputF2Functions_Interfaces_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputF2Functions_Interfaces.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

