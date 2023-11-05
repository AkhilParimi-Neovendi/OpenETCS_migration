/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _RBC_Clock_Tick_RBC_Time_Pkg_H_
#define _RBC_Clock_Tick_RBC_Time_Pkg_H_

#include "kcg_types.h"
#include "Clock__Tick_RBC_Time_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* outDataBus/ */ outDataBus;
  Clock_T /* outClock/ */ outClock;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Clock__Tick_RBC_Time_Pkg /* _L2=(RBC_Time_Pkg::Clock__Tick#1)/ */ Context_Clock__Tick_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* _L3/ */ _L3;
  Clock_T /* _L2/ */ _L2;
  Clock_T /* _L1/ */ _L1;
  RBC_Data_T_RBC_DataBus_Pkg /* _L4/ */ _L4;
} outC_RBC_Clock_Tick_RBC_Time_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Time_Pkg::RBC_Clock_Tick/ */
extern void RBC_Clock_Tick_RBC_Time_Pkg(
  /* inDataBus/ */
  RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  outC_RBC_Clock_Tick_RBC_Time_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RBC_Clock_Tick_reset_RBC_Time_Pkg(
  outC_RBC_Clock_Tick_RBC_Time_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RBC_Clock_Tick_init_RBC_Time_Pkg(
  outC_RBC_Clock_Tick_RBC_Time_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RBC_Clock_Tick_RBC_Time_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RBC_Clock_Tick_RBC_Time_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

