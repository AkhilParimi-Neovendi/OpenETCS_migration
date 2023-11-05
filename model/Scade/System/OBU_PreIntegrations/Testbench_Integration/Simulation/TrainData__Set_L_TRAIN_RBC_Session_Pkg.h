/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _TrainData__Set_L_TRAIN_RBC_Session_Pkg_H_
#define _TrainData__Set_L_TRAIN_RBC_Session_Pkg_H_

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
  L_TRAIN /* _L2/ */ _L2;
  TrainData_T /* _L3/ */ _L3;
} outC_TrainData__Set_L_TRAIN_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::TrainData__Set_L_TRAIN/ */
extern void TrainData__Set_L_TRAIN_RBC_Session_Pkg(
  /* inTrainData/ */
  TrainData_T *inTrainData,
  /* in_L_TRAIN/ */
  L_TRAIN in_L_TRAIN,
  outC_TrainData__Set_L_TRAIN_RBC_Session_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrainData__Set_L_TRAIN_reset_RBC_Session_Pkg(
  outC_TrainData__Set_L_TRAIN_RBC_Session_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrainData__Set_L_TRAIN_init_RBC_Session_Pkg(
  outC_TrainData__Set_L_TRAIN_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrainData__Set_L_TRAIN_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainData__Set_L_TRAIN_RBC_Session_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

