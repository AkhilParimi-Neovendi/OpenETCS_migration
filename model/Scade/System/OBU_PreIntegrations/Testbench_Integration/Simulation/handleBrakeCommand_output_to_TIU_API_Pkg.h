/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _handleBrakeCommand_output_to_TIU_API_Pkg_H_
#define _handleBrakeCommand_output_to_TIU_API_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Brake_command_T_TIU_Types_Pkg /* out_brake_command/ */ out_brake_command;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  Brake_command_T_TIU_Types_Pkg /* in_brake_command/ */ mem_in_brake_command;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Brake_command_T_TIU_Types_Pkg /* _L1/ */ _L1;
  Brake_command_T_TIU_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
  Brake_command_T_TIU_Types_Pkg /* _L7/ */ _L7;
  Brake_command_T_TIU_Types_Pkg /* _L8/ */ _L8;
  Brake_command_T_TIU_Types_Pkg /* _L9/ */ _L9;
} outC_handleBrakeCommand_output_to_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::handleBrakeCommand/ */
extern void handleBrakeCommand_output_to_TIU_API_Pkg(
  /* in_brake_command/ */
  Brake_command_T_TIU_Types_Pkg *in_brake_command,
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void handleBrakeCommand_reset_output_to_TIU_API_Pkg(
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void handleBrakeCommand_init_output_to_TIU_API_Pkg(
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  Brake_command_T_TIU_Types_Pkg /* in_brake_command/ */ Context_mem_in_brake_command;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_handleBrakeCommand_output_to_TIU_API_Pkg;

extern void kcg_save_SV_handleBrakeCommand_output_to_TIU_API_Pkg(
  SV_handleBrakeCommand_output_to_TIU_API_Pkg *SV,
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC);
extern void kcg_load_SV_handleBrakeCommand_output_to_TIU_API_Pkg(
  outC_handleBrakeCommand_output_to_TIU_API_Pkg *outC,
  SV_handleBrakeCommand_output_to_TIU_API_Pkg *SV);



#endif /* _handleBrakeCommand_output_to_TIU_API_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** handleBrakeCommand_output_to_TIU_API_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

