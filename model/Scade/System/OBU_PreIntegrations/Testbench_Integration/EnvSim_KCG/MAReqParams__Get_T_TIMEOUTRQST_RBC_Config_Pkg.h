/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg_H_
#define _MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_TIMEOUTRQST /* out_T_TIMEOUTRQST/ */ out_T_TIMEOUTRQST;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MAReqParams_T /* _L1/ */ _L1;
  T_TIMEOUTRQST /* _L2/ */ _L2;
} outC_MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Config_Pkg::MAReqParams__Get_T_TIMEOUTRQST/ */
extern void MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg(
  /* inMAReqParams/ */
  MAReqParams_T *inMAReqParams,
  outC_MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MAReqParams__Get_T_TIMEOUTRQST_reset_RBC_Config_Pkg(
  outC_MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MAReqParams__Get_T_TIMEOUTRQST_init_RBC_Config_Pkg(
  outC_MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MAReqParams__Get_T_TIMEOUTRQST_RBC_Config_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

