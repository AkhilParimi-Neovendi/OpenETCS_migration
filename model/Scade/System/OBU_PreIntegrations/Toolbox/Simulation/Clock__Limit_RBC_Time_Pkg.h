/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _Clock__Limit_RBC_Time_Pkg_H_
#define _Clock__Limit_RBC_Time_Pkg_H_

#include "kcg_types.h"
#include "Clock__Reset_RBC_Time_Pkg.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Clock_T /* outClock/ */ outClock;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Clock__GetSeconds_RBC_Time_Pkg /* _L10=(RBC_Time_Pkg::Clock__GetSeconds#1)/ */ Context_Clock__GetSeconds_1;
  outC_Clock__Reset_RBC_Time_Pkg /* _L11=(RBC_Time_Pkg::Clock__Reset#1)/ */ Context_Clock__Reset_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Clock_T /* _L1/ */ _L1;
  kcg_bool /* _L9/ */ _L9;
  kcg_int64 /* _L8/ */ _L8;
  Clock_T /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  T_TRAIN /* _L4/ */ _L4;
  T_TRAIN /* _L3/ */ _L3;
  T_TRAIN /* _L2/ */ _L2;
  T_TRAIN /* _L10/ */ _L10;
  Clock_T /* _L11/ */ _L11;
} outC_Clock__Limit_RBC_Time_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Time_Pkg::Clock__Limit/ */
extern void Clock__Limit_RBC_Time_Pkg(
  /* inClock/ */
  Clock_T *inClock,
  outC_Clock__Limit_RBC_Time_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Clock__Limit_reset_RBC_Time_Pkg(
  outC_Clock__Limit_RBC_Time_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Clock__Limit_init_RBC_Time_Pkg(
  outC_Clock__Limit_RBC_Time_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Clock__Limit_RBC_Time_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Clock__Limit_RBC_Time_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

