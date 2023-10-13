/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _SessionManagement__GetPosData_RBC_Session_Pkg_H_
#define _SessionManagement__GetPosData_RBC_Session_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PosData_T /* outPositionManagement/ */ outPositionManagement;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SessionManagement_T /* _L1/ */ _L1;
  PosData_T /* _L2/ */ _L2;
} outC_SessionManagement__GetPosData_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::SessionManagement__GetPosData/ */
extern void SessionManagement__GetPosData_RBC_Session_Pkg(
  /* inSessionManagement/ */
  SessionManagement_T *inSessionManagement,
  outC_SessionManagement__GetPosData_RBC_Session_Pkg *outC);

extern void SessionManagement__GetPosData_reset_RBC_Session_Pkg(
  outC_SessionManagement__GetPosData_RBC_Session_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SessionManagement__GetPosData_init_RBC_Session_Pkg(
  outC_SessionManagement__GetPosData_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SessionManagement__GetPosData_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SessionManagement__GetPosData_RBC_Session_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

