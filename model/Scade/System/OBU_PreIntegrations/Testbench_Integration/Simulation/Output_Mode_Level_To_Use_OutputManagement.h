/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Output_Mode_Level_To_Use_OutputManagement_H_
#define _Output_Mode_Level_To_Use_OutputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Mode_Level_Level_And_Mode_Types_Pkg /* Compatible_Mode_And_Level/ */ Compatible_Mode_And_Level;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* currentMode/ */ mem_currentMode;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  M_LEVEL /* _L3/ */ _L3;
  T_Mode_Level_And_Mode_Types_Pkg /* _L4/ */ _L4;
  M_MODE /* _L5/ */ _L5;
  M_MODE /* _L6/ */ _L6;
  M_MODE /* _L7/ */ _L7;
  M_MODE /* _L8/ */ _L8;
  M_MODE /* _L9/ */ _L9;
  M_MODE /* _L10/ */ _L10;
  M_MODE /* _L11/ */ _L11;
  M_MODE /* _L12/ */ _L12;
  M_MODE /* _L13/ */ _L13;
  M_MODE /* _L14/ */ _L14;
  M_MODE /* _L15/ */ _L15;
  M_MODE /* _L16/ */ _L16;
  M_MODE /* _L17/ */ _L17;
  M_MODE /* _L18/ */ _L18;
  M_MODE /* _L19/ */ _L19;
  M_MODE /* _L20/ */ _L20;
  M_MODE /* _L21/ */ _L21;
  M_MODE /* _L22/ */ _L22;
  kcg_bool /* _L24/ */ _L24;
  T_Mode_Level_And_Mode_Types_Pkg /* _L25/ */ _L25;
  T_Mode_Level_And_Mode_Types_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
} outC_Output_Mode_Level_To_Use_OutputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* OutputManagement::Output_Mode_Level_To_Use/ */
extern void Output_Mode_Level_To_Use_OutputManagement(
  /* next_level/ */
  M_LEVEL next_level,
  /* currentMode/ */
  T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* Level_Mode_Compatible/ */
  kcg_bool Level_Mode_Compatible,
  /* isNewLevel/ */
  kcg_bool isNewLevel,
  outC_Output_Mode_Level_To_Use_OutputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Output_Mode_Level_To_Use_reset_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Output_Mode_Level_To_Use_init_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* currentMode/ */ Context_mem_currentMode;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_Output_Mode_Level_To_Use_OutputManagement;

extern void kcg_save_SV_Output_Mode_Level_To_Use_OutputManagement(
  SV_Output_Mode_Level_To_Use_OutputManagement *SV,
  outC_Output_Mode_Level_To_Use_OutputManagement *outC);
extern void kcg_load_SV_Output_Mode_Level_To_Use_OutputManagement(
  outC_Output_Mode_Level_To_Use_OutputManagement *outC,
  SV_Output_Mode_Level_To_Use_OutputManagement *SV);



#endif /* _Output_Mode_Level_To_Use_OutputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output_Mode_Level_To_Use_OutputManagement.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

