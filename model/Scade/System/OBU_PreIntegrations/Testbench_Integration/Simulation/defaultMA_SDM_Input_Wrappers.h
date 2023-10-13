/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _defaultMA_SDM_Input_Wrappers_H_
#define _defaultMA_SDM_Input_Wrappers_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MA_section_real_T_TargetManagement_types /* Ma_out/ */ Ma_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  EOA_real_T_TargetManagement_types /* _L39/ */ _L39;
  MA_section_real_T_TargetManagement_types /* _L114/ */ _L114;
  kcg_bool /* _L195/ */ _L195;
  kcg_float64 /* _L196/ */ _L196;
  MA_Level_t_TrackAtlasTypes /* _L197/ */ _L197;
} outC_defaultMA_SDM_Input_Wrappers;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Input_Wrappers::defaultMA/ */
extern void defaultMA_SDM_Input_Wrappers(
  outC_defaultMA_SDM_Input_Wrappers *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void defaultMA_reset_SDM_Input_Wrappers(
  outC_defaultMA_SDM_Input_Wrappers *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void defaultMA_init_SDM_Input_Wrappers(
  outC_defaultMA_SDM_Input_Wrappers *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _defaultMA_SDM_Input_Wrappers_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** defaultMA_SDM_Input_Wrappers.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

