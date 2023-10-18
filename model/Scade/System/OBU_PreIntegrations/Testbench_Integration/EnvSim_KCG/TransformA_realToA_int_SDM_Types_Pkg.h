/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _TransformA_realToA_int_SDM_Types_Pkg_H_
#define _TransformA_realToA_int_SDM_Types_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  A_internal_Type_Obu_BasicTypes_Pkg /* acc_int/ */ acc_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  A_internal_real_Type_SDM_Types_Pkg /* _L1/ */ _L1;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
} outC_TransformA_realToA_int_SDM_Types_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Types_Pkg::TransformA_realToA_int/ */
extern void TransformA_realToA_int_SDM_Types_Pkg(
  /* acc_real/ */
  A_internal_real_Type_SDM_Types_Pkg acc_real,
  outC_TransformA_realToA_int_SDM_Types_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TransformA_realToA_int_reset_SDM_Types_Pkg(
  outC_TransformA_realToA_int_SDM_Types_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TransformA_realToA_int_init_SDM_Types_Pkg(
  outC_TransformA_realToA_int_SDM_Types_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TransformA_realToA_int_SDM_Types_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransformA_realToA_int_SDM_Types_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

