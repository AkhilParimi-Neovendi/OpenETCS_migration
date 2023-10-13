/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _PosData__Get_D_LRBG_RBC_Session_Pkg_H_
#define _PosData__Get_D_LRBG_RBC_Session_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  D_LRBG /* out_D_LRBG/ */ out_D_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PosData_T /* _L1/ */ _L1;
  D_LRBG /* _L2/ */ _L2;
} outC_PosData__Get_D_LRBG_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::PosData__Get_D_LRBG/ */
extern void PosData__Get_D_LRBG_RBC_Session_Pkg(
  /* inPosData/ */
  PosData_T *inPosData,
  outC_PosData__Get_D_LRBG_RBC_Session_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PosData__Get_D_LRBG_reset_RBC_Session_Pkg(
  outC_PosData__Get_D_LRBG_RBC_Session_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PosData__Get_D_LRBG_init_RBC_Session_Pkg(
  outC_PosData__Get_D_LRBG_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PosData__Get_D_LRBG_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosData__Get_D_LRBG_RBC_Session_Pkg.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

