/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _MoveTrainPosition_SDM_GradientAcceleration_Pkg_H_
#define _MoveTrainPosition_SDM_GradientAcceleration_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* newFront/ */ newFront;
  kcg_float64 /* newRear/ */ newRear;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ACC_SDM_GradientAcceleration_Pkg /* _L3/ */ _L3;
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  L_internal_real_Type_SDM_Types_Pkg /* _L6/ */ _L6;
  L_internal_real_Type_SDM_Types_Pkg /* _L7/ */ _L7;
  ACC_SDM_GradientAcceleration_Pkg /* _L8/ */ _L8;
} outC_MoveTrainPosition_SDM_GradientAcceleration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_GradientAcceleration_Pkg::MoveTrainPosition/ */
extern void MoveTrainPosition_SDM_GradientAcceleration_Pkg(
  /* distanceStep/ */
  kcg_float64 distanceStep,
  /* Accu/ */
  ACC_SDM_GradientAcceleration_Pkg *Accu,
  outC_MoveTrainPosition_SDM_GradientAcceleration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MoveTrainPosition_reset_SDM_GradientAcceleration_Pkg(
  outC_MoveTrainPosition_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MoveTrainPosition_init_SDM_GradientAcceleration_Pkg(
  outC_MoveTrainPosition_SDM_GradientAcceleration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MoveTrainPosition_SDM_GradientAcceleration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveTrainPosition_SDM_GradientAcceleration_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

