/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _Clock__GetSeconds_RBC_Time_Pkg_H_
#define _Clock__GetSeconds_RBC_Time_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_TRAIN /* outValue/ */ outValue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Clock_T /* _L1/ */ _L1;
  T_TRAIN /* _L2/ */ _L2;
} outC_Clock__GetSeconds_RBC_Time_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Time_Pkg::Clock__GetSeconds/ */
extern void Clock__GetSeconds_RBC_Time_Pkg(
  /* inClock/ */
  Clock_T *inClock,
  outC_Clock__GetSeconds_RBC_Time_Pkg *outC);

extern void Clock__GetSeconds_reset_RBC_Time_Pkg(
  outC_Clock__GetSeconds_RBC_Time_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Clock__GetSeconds_init_RBC_Time_Pkg(
  outC_Clock__GetSeconds_RBC_Time_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Clock__GetSeconds_RBC_Time_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Clock__GetSeconds_RBC_Time_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

