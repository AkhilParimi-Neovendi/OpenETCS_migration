/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _SessionManagement__SetPosData_RBC_Session_Pkg_H_
#define _SessionManagement__SetPosData_RBC_Session_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SessionManagement_T /* outSessionManagement/ */ outSessionManagement;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SessionManagement_T /* _L1/ */ _L1;
  PosData_T /* _L2/ */ _L2;
  SessionManagement_T /* _L3/ */ _L3;
} outC_SessionManagement__SetPosData_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::SessionManagement__SetPosData/ */
extern void SessionManagement__SetPosData_RBC_Session_Pkg(
  /* inSessionManagement/ */
  SessionManagement_T *inSessionManagement,
  /* inPosData/ */
  PosData_T *inPosData,
  outC_SessionManagement__SetPosData_RBC_Session_Pkg *outC);

extern void SessionManagement__SetPosData_reset_RBC_Session_Pkg(
  outC_SessionManagement__SetPosData_RBC_Session_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SessionManagement__SetPosData_init_RBC_Session_Pkg(
  outC_SessionManagement__SetPosData_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SessionManagement__SetPosData_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SessionManagement__SetPosData_RBC_Session_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

