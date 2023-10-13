/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg_H_
#define _TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg_H_

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
  M_AIRTIGHT /* _L2/ */ _L2;
  TrainData_T /* _L3/ */ _L3;
} outC_TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::TrainData__Set_M_AIRTIGHT/ */
extern void TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg(
  /* inTrainData/ */
  TrainData_T *inTrainData,
  /* in_M_AIRTIGHT/ */
  M_AIRTIGHT in_M_AIRTIGHT,
  outC_TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrainData__Set_M_AIRTIGHT_reset_RBC_Session_Pkg(
  outC_TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrainData__Set_M_AIRTIGHT_init_RBC_Session_Pkg(
  outC_TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainData__Set_M_AIRTIGHT_RBC_Session_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

