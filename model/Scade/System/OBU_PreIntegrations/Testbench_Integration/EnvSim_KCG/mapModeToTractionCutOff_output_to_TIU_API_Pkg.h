/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _mapModeToTractionCutOff_output_to_TIU_API_Pkg_H_
#define _mapModeToTractionCutOff_output_to_TIU_API_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_traction_cutoff_command_T_TIU_Types_Pkg /* tractionCutOff/ */ tractionCutOff;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L2/ */ _L2;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L4/ */ _L4;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L5/ */ _L5;
  M_traction_cutoff_command_T_TIU_Types_Pkg /* _L7/ */ _L7;
  M_MODE /* _L8/ */ _L8;
} outC_mapModeToTractionCutOff_output_to_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* output_to_TIU_API_Pkg::mapModeToTractionCutOff/ */
extern void mapModeToTractionCutOff_output_to_TIU_API_Pkg(
  /* inModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  outC_mapModeToTractionCutOff_output_to_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mapModeToTractionCutOff_reset_output_to_TIU_API_Pkg(
  outC_mapModeToTractionCutOff_output_to_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mapModeToTractionCutOff_init_output_to_TIU_API_Pkg(
  outC_mapModeToTractionCutOff_output_to_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _mapModeToTractionCutOff_output_to_TIU_API_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mapModeToTractionCutOff_output_to_TIU_API_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

