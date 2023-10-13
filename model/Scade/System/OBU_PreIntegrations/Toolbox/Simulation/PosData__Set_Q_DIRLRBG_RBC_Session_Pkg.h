/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _PosData__Set_Q_DIRLRBG_RBC_Session_Pkg_H_
#define _PosData__Set_Q_DIRLRBG_RBC_Session_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PosData_T /* outPosData/ */ outPosData;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PosData_T /* _L1/ */ _L1;
  Q_DIRLRBG /* _L2/ */ _L2;
  PosData_T /* _L3/ */ _L3;
} outC_PosData__Set_Q_DIRLRBG_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::PosData__Set_Q_DIRLRBG/ */
extern void PosData__Set_Q_DIRLRBG_RBC_Session_Pkg(
  /* inPosData/ */
  PosData_T *inPosData,
  /* in_Q_DIRLRBG/ */
  Q_DIRLRBG in_Q_DIRLRBG,
  outC_PosData__Set_Q_DIRLRBG_RBC_Session_Pkg *outC);

extern void PosData__Set_Q_DIRLRBG_reset_RBC_Session_Pkg(
  outC_PosData__Set_Q_DIRLRBG_RBC_Session_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void PosData__Set_Q_DIRLRBG_init_RBC_Session_Pkg(
  outC_PosData__Set_Q_DIRLRBG_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PosData__Set_Q_DIRLRBG_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosData__Set_Q_DIRLRBG_RBC_Session_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

