/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _getTIUStatusFromCommand_output_to_TIU_API_Pkg_H_
#define _getTIUStatusFromCommand_output_to_TIU_API_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_commandStatus_T_TIU_Types_Pkg /* outStatus/ */ outStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L3/ */ _L3;
  TIU_commandStatus_T_TIU_Types_Pkg /* _L4/ */ _L4;
  M_Isolation_status_T_TIU_Types_Pkg /* _L8/ */ _L8;
  M_Isolation_status_T_TIU_Types_Pkg /* _L10/ */ _L10;
  Isolation_Status_T_TIU_Types_Pkg /* _L11/ */ _L11;
  Brake_command_T_TIU_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  M_brake_signal_command_T_TIU_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
} outC_getTIUStatusFromCommand_output_to_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::getTIUStatusFromCommand/ */
extern void getTIUStatusFromCommand_output_to_TIU_API_Pkg(
  /* in_IsolationStatus/ */
  Isolation_Status_T_TIU_Types_Pkg *in_IsolationStatus,
  /* in_brake_command/ */
  Brake_command_T_TIU_Types_Pkg *in_brake_command,
  outC_getTIUStatusFromCommand_output_to_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getTIUStatusFromCommand_reset_output_to_TIU_API_Pkg(
  outC_getTIUStatusFromCommand_output_to_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getTIUStatusFromCommand_init_output_to_TIU_API_Pkg(
  outC_getTIUStatusFromCommand_output_to_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _getTIUStatusFromCommand_output_to_TIU_API_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getTIUStatusFromCommand_output_to_TIU_API_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

