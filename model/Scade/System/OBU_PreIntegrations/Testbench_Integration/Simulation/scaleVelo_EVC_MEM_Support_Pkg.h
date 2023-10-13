/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _scaleVelo_EVC_MEM_Support_Pkg_H_
#define _scaleVelo_EVC_MEM_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* v_evc/ */ v_evc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_MAMODE /* _L1/ */ _L1;
  P003_OBU_T_TM /* _L2/ */ _L2;
  M_MAMODE /* _L3/ */ _L3;
  V_NVLIMSUPERV /* _L4/ */ _L4;
  V_NVLIMSUPERV /* _L6/ */ _L6;
  V_NVONSIGHT /* _L7/ */ _L7;
  V_NVSHUNT /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  V_NVLIMSUPERV /* _L11/ */ _L11;
  V_MAMODE /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  kcg_int64 /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
  kcg_int64 /* _L17/ */ _L17;
  kcg_int64 /* _L18/ */ _L18;
} outC_scaleVelo_EVC_MEM_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_MEM_Support_Pkg::scaleVelo/ */
extern void scaleVelo_EVC_MEM_Support_Pkg(
  /* maMode/ */
  M_MAMODE maMode,
  /* v_track/ */
  V_MAMODE v_track,
  /* nationalValues/ */
  P003_OBU_T_TM *nationalValues,
  outC_scaleVelo_EVC_MEM_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void scaleVelo_reset_EVC_MEM_Support_Pkg(
  outC_scaleVelo_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void scaleVelo_init_EVC_MEM_Support_Pkg(
  outC_scaleVelo_EVC_MEM_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _scaleVelo_EVC_MEM_Support_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** scaleVelo_EVC_MEM_Support_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

