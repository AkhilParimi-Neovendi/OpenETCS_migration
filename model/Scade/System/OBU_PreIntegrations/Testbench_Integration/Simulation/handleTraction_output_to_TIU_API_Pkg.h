/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _handleTraction_output_to_TIU_API_Pkg_H_
#define _handleTraction_output_to_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "mapModeToTractionCutOff_output_to_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Type_I_train_commands_T_TIU_Types_Pkg /* outTrainCommands/ */ outTrainCommands;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_traction_cutoff_command_T_TIU_Types_Pkg /* tractionCutOffStatus/ */ tractionCutOffStatus;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mapModeToTractionCutOff_output_to_TIU_API_Pkg /* _L5=(output_to_TIU_API_Pkg::mapModeToTractionCutOff#1)/ */ Context_mapModeToTractionCutOff_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_traction_cutoff_command_T_TIU_Types_Pkg /* tempTractionCutOffStatus/ */ tempTractionCutOffStatus;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L5/ */ _L5;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L7/ */ _L7;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L8/ */ _L8;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L12/ */ _L12;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L13/ */ _L13;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L16/ */ _L16;
  Type_I_train_commands_T_TIU_Types_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L17/ */ _L17;
  Type_I_train_commands_T_TIU_Types_Pkg /* _L18/ */ _L18;
  Type_I_train_commands_T_TIU_Types_Pkg /* _L19/ */ _L19;
  Type_I_train_commands_T_TIU_Types_Pkg /* _L20/ */ _L20;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L21/ */ _L21;
} outC_handleTraction_output_to_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::handleTraction/ */
extern void handleTraction_output_to_TIU_API_Pkg(
  /* in_train_commands/ */
  Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* inModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  outC_handleTraction_output_to_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void handleTraction_reset_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void handleTraction_init_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_traction_cutoff_command_T_TIU_Types_Pkg /* tractionCutOffStatus/ */ Context_tractionCutOffStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_handleTraction_output_to_TIU_API_Pkg;

extern void kcg_save_SV_handleTraction_output_to_TIU_API_Pkg(
  SV_handleTraction_output_to_TIU_API_Pkg *SV,
  outC_handleTraction_output_to_TIU_API_Pkg *outC);
extern void kcg_load_SV_handleTraction_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC,
  SV_handleTraction_output_to_TIU_API_Pkg *SV);



#endif /* _handleTraction_output_to_TIU_API_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** handleTraction_output_to_TIU_API_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

