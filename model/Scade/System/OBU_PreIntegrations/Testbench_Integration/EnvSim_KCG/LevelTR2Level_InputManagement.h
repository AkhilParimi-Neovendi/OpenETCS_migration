/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _LevelTR2Level_InputManagement_H_
#define _LevelTR2Level_InputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* OutLevel/ */ OutLevel;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVELTR /* _L1/ */ _L1;
  M_LEVEL /* _L2/ */ _L2;
  M_LEVEL /* _L3/ */ _L3;
  M_LEVEL /* _L4/ */ _L4;
  M_LEVEL /* _L5/ */ _L5;
  M_LEVEL /* _L6/ */ _L6;
  M_LEVEL /* _L7/ */ _L7;
} outC_LevelTR2Level_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::LevelTR2Level/ */
extern void LevelTR2Level_InputManagement(
  /* InLevelTR/ */
  M_LEVELTR InLevelTR,
  outC_LevelTR2Level_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LevelTR2Level_reset_InputManagement(
  outC_LevelTR2Level_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LevelTR2Level_init_InputManagement(
  outC_LevelTR2Level_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LevelTR2Level_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelTR2Level_InputManagement.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

