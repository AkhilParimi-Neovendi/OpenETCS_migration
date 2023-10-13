/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _PosRepParams__Get_Q_DIR_RBC_Config_Pkg_H_
#define _PosRepParams__Get_Q_DIR_RBC_Config_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_DIR /* out_Q_DIR/ */ out_Q_DIR;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PosRepParams_T /* _L1/ */ _L1;
  Q_DIR /* _L2/ */ _L2;
} outC_PosRepParams__Get_Q_DIR_RBC_Config_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Config_Pkg::PosRepParams__Get_Q_DIR/ */
extern void PosRepParams__Get_Q_DIR_RBC_Config_Pkg(
  /* inPosRepParams/ */
  PosRepParams_T *inPosRepParams,
  outC_PosRepParams__Get_Q_DIR_RBC_Config_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PosRepParams__Get_Q_DIR_reset_RBC_Config_Pkg(
  outC_PosRepParams__Get_Q_DIR_RBC_Config_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PosRepParams__Get_Q_DIR_init_RBC_Config_Pkg(
  outC_PosRepParams__Get_Q_DIR_RBC_Config_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PosRepParams__Get_Q_DIR_RBC_Config_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosRepParams__Get_Q_DIR_RBC_Config_Pkg.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

