/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg_H_
#define _TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrainData_T /* outTrainData/ */ outTrainData;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrainData_T /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  TrainData_T /* _L3/ */ _L3;
} outC_TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::TrainData__SetNumberOfOnboardPhoneNumbers/ */
extern void TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg(
  /* inTrainData/ */
  TrainData_T *inTrainData,
  /* inNumberOfOnboardPhoneNumbers/ */
  kcg_int32 inNumberOfOnboardPhoneNumbers,
  outC_TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrainData__SetNumberOfOnboardPhoneNumbers_reset_RBC_Session_Pkg(
  outC_TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrainData__SetNumberOfOnboardPhoneNumbers_init_RBC_Session_Pkg(
  outC_TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainData__SetNumberOfOnboardPhoneNumbers_RBC_Session_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

