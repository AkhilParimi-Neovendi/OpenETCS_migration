/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _PosData__Get_NID_LRBG_RBC_Session_Pkg_H_
#define _PosData__Get_NID_LRBG_RBC_Session_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_LRBG /* out_NID_LRBG/ */ out_NID_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PosData_T /* _L1/ */ _L1;
  NID_LRBG /* _L2/ */ _L2;
} outC_PosData__Get_NID_LRBG_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::PosData__Get_NID_LRBG/ */
extern void PosData__Get_NID_LRBG_RBC_Session_Pkg(
  /* inPosData/ */
  PosData_T *inPosData,
  outC_PosData__Get_NID_LRBG_RBC_Session_Pkg *outC);

extern void PosData__Get_NID_LRBG_reset_RBC_Session_Pkg(
  outC_PosData__Get_NID_LRBG_RBC_Session_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void PosData__Get_NID_LRBG_init_RBC_Session_Pkg(
  outC_PosData__Get_NID_LRBG_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PosData__Get_NID_LRBG_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosData__Get_NID_LRBG_RBC_Session_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

