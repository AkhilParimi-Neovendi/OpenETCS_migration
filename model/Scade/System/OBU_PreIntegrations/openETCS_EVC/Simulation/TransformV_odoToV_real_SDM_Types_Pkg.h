/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _TransformV_odoToV_real_SDM_Types_Pkg_H_
#define _TransformV_odoToV_real_SDM_Types_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_real_Type_SDM_Types_Pkg /* v_real/ */ v_real;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  kcg_float32 /* _L2/ */ _L2;
  kcg_float32 /* _L3/ */ _L3;
  kcg_float32 /* _L4/ */ _L4;
} outC_TransformV_odoToV_real_SDM_Types_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Types_Pkg::TransformV_odoToV_real/ */
extern void TransformV_odoToV_real_SDM_Types_Pkg(
  /* v_odo/ */
  V_odometry_Type_Obu_BasicTypes_Pkg v_odo,
  outC_TransformV_odoToV_real_SDM_Types_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TransformV_odoToV_real_reset_SDM_Types_Pkg(
  outC_TransformV_odoToV_real_SDM_Types_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TransformV_odoToV_real_init_SDM_Types_Pkg(
  outC_TransformV_odoToV_real_SDM_Types_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TransformV_odoToV_real_SDM_Types_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransformV_odoToV_real_SDM_Types_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

