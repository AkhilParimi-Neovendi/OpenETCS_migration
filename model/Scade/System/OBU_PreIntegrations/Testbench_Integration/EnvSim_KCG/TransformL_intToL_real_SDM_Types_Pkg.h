/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _TransformL_intToL_real_SDM_Types_Pkg_H_
#define _TransformL_intToL_real_SDM_Types_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* loc_real/ */ loc_real;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
} outC_TransformL_intToL_real_SDM_Types_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Types_Pkg::TransformL_intToL_real/ */
extern void TransformL_intToL_real_SDM_Types_Pkg(
  /* loc_int/ */
  L_internal_Type_Obu_BasicTypes_Pkg loc_int,
  outC_TransformL_intToL_real_SDM_Types_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TransformL_intToL_real_reset_SDM_Types_Pkg(
  outC_TransformL_intToL_real_SDM_Types_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TransformL_intToL_real_init_SDM_Types_Pkg(
  outC_TransformL_intToL_real_SDM_Types_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TransformL_intToL_real_SDM_Types_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransformL_intToL_real_SDM_Types_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

