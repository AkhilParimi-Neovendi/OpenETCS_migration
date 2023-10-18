/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _emptyBCAcc_CalcBrakingCurves_Pkg_H_
#define _emptyBCAcc_CalcBrakingCurves_Pkg_H_

#include "kcg_types.h"
#include "makeEmptyParabolaCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BCAccumulator_type_CalcBrakingCurves_Pkg /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_makeEmptyParabolaCurve_CalcBrakingCurves_types /* _L10=(CalcBrakingCurves_types::makeEmptyParabolaCurve#2)/ */ Context_makeEmptyParabolaCurve_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BCAccumulator_type_CalcBrakingCurves_Pkg /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  kcg_int64 /* _L8/ */ _L8;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L10/ */ _L10;
} outC_emptyBCAcc_CalcBrakingCurves_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::emptyBCAcc/ */
extern void emptyBCAcc_CalcBrakingCurves_Pkg(
  outC_emptyBCAcc_CalcBrakingCurves_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void emptyBCAcc_reset_CalcBrakingCurves_Pkg(
  outC_emptyBCAcc_CalcBrakingCurves_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void emptyBCAcc_init_CalcBrakingCurves_Pkg(
  outC_emptyBCAcc_CalcBrakingCurves_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _emptyBCAcc_CalcBrakingCurves_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** emptyBCAcc_CalcBrakingCurves_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

