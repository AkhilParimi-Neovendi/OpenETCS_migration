/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _EntryInLevel2or3_OutputToRBC_H_
#define _EntryInLevel2or3_OutputToRBC_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* PositionReportNeeded/ */ PositionReportNeeded;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L11/ */ _L11;
  M_LEVEL /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  M_LEVEL /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
} outC_EntryInLevel2or3_OutputToRBC;

/* ===========  node initialization and cycle functions  =========== */
/* OutputToRBC::EntryInLevel2or3/ */
extern void EntryInLevel2or3_OutputToRBC(
  /* last_level/ */
  M_LEVEL last_level,
  /* new_level/ */
  M_LEVEL new_level,
  outC_EntryInLevel2or3_OutputToRBC *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EntryInLevel2or3_reset_OutputToRBC(
  outC_EntryInLevel2or3_OutputToRBC *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EntryInLevel2or3_init_OutputToRBC(
  outC_EntryInLevel2or3_OutputToRBC *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EntryInLevel2or3_OutputToRBC_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EntryInLevel2or3_OutputToRBC.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

