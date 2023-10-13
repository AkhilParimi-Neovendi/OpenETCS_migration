/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _vOdometry2Extern_RadioSupport_Pkg_H_
#define _vOdometry2Extern_RadioSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_TRAIN /* v_SRS/ */ v_SRS;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_internal_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
} outC_vOdometry2Extern_RadioSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RadioSupport_Pkg::vOdometry2Extern/ */
extern void vOdometry2Extern_RadioSupport_Pkg(
  /* v_odometry/ */
  V_internal_Type_Obu_BasicTypes_Pkg v_odometry,
  outC_vOdometry2Extern_RadioSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void vOdometry2Extern_reset_RadioSupport_Pkg(
  outC_vOdometry2Extern_RadioSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void vOdometry2Extern_init_RadioSupport_Pkg(
  outC_vOdometry2Extern_RadioSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _vOdometry2Extern_RadioSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** vOdometry2Extern_RadioSupport_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

