/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Clock__SetSeconds_RBC_Time_Pkg_H_
#define _Clock__SetSeconds_RBC_Time_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Clock_T /* outClock/ */ outClock;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Clock_T /* _L1/ */ _L1;
  Clock_T /* _L2/ */ _L2;
  T_TRAIN /* _L3/ */ _L3;
} outC_Clock__SetSeconds_RBC_Time_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Time_Pkg::Clock__SetSeconds/ */
extern void Clock__SetSeconds_RBC_Time_Pkg(
  /* inClock/ */
  Clock_T *inClock,
  /* inValue/ */
  T_TRAIN inValue,
  outC_Clock__SetSeconds_RBC_Time_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Clock__SetSeconds_reset_RBC_Time_Pkg(
  outC_Clock__SetSeconds_RBC_Time_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Clock__SetSeconds_init_RBC_Time_Pkg(
  outC_Clock__SetSeconds_RBC_Time_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Clock__SetSeconds_RBC_Time_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Clock__SetSeconds_RBC_Time_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

