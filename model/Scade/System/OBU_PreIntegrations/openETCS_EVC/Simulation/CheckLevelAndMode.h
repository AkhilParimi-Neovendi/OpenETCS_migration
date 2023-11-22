/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CheckLevelAndMode_H_
#define _CheckLevelAndMode_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Level_Mode_Compatible/ */ Level_Mode_Compatible;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Mode_Level_And_Mode_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
} outC_CheckLevelAndMode;

/* ===========  node initialization and cycle functions  =========== */
/* CheckLevelAndMode/ */
extern void CheckLevelAndMode(
  /* Level/ */
  M_LEVEL Level,
  /* Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Mode,
  outC_CheckLevelAndMode *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckLevelAndMode_reset(outC_CheckLevelAndMode *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckLevelAndMode_init(outC_CheckLevelAndMode *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckLevelAndMode_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckLevelAndMode.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

