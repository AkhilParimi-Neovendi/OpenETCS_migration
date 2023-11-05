/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _CalcBrakingCurves_integration_CalcBrakingCurves_Pkg_H_
#define _CalcBrakingCurves_integration_CalcBrakingCurves_Pkg_H_

#include "kcg_types.h"
#include "CalculateBrakingCurve_CalcBrakingCurves_Pkg.h"
#include "makeEmptyParabolaCurve_CalcBrakingCurves_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CurveCollection_T_CalcBrakingCurves_types /* curveCollection/ */ curveCollection;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* MRSPCurves/ */ MRSPCurves;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L33/ */ _L33;
  kcg_bool /* _L79/ */ _L79;
  kcg_bool /* _L98/ */ _L98;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L99/ */ _L99;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalculateBrakingCurve_CalcBrakingCurves_Pkg /* _L72=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#1)/ */ Context_CalculateBrakingCurve_1[110];
  outC_makeEmptyParabolaCurve_CalcBrakingCurves_types /* _L112=(CalcBrakingCurves_types::makeEmptyParabolaCurve#1)/ */ Context_makeEmptyParabolaCurve_1;
  outC_CalculateBrakingCurve_CalcBrakingCurves_Pkg /* _L98=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#5)/ */ Context_CalculateBrakingCurve_5;
  outC_CalculateBrakingCurve_CalcBrakingCurves_Pkg /* _L79=(CalcBrakingCurves_Pkg::CalculateBrakingCurve#3)/ */ Context_CalculateBrakingCurve_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* targetsUpdated/ */ targetsUpdated;
  ParabolaCurve_T_CalcBrakingCurves_types /* emptyCurve/ */ emptyCurve;
  ASafe_T_CalcBrakingCurves_types /* _L4/ */ _L4;
  _26_array /* _L6/ */ _L6;
  array_float32_110 /* _L22/ */ _L22;
  ASafe_T_CalcBrakingCurves_types /* _L29/ */ _L29;
  TargetCollection_T_TargetManagement_types /* _L35/ */ _L35;
  Target_real_T_TargetManagement_types /* _L43/ */ _L43;
  Target_real_T_TargetManagement_types /* _L42/ */ _L42;
  Target_list_MRSP_real_T_TargetManagement_types /* _L41/ */ _L41;
  kcg_bool /* _L40/ */ _L40;
  CurveCollection_T_CalcBrakingCurves_types /* _L58/ */ _L58;
  kcg_bool /* _L60/ */ _L60;
  TrainLocations_real_T_SDM_Types_Pkg /* _L65/ */ _L65;
  L_internal_real_Type_SDM_Types_Pkg /* _L71/ */ _L71;
  kcg_int32 /* _L72/ */ _L72;
  kcg_bool /* _L75/ */ _L75;
  kcg_bool /* _L78/ */ _L78;
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* _L83/ */ _L83;
  kcg_bool /* _L86/ */ _L86;
  kcg_bool /* _L102/ */ _L102;
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* _L106/ */ _L106;
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* _L109/ */ _L109;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L112/ */ _L112;
  ASafe_T_CalcBrakingCurves_types /* _L114/ */ _L114;
  kcg_bool /* _L115/ */ _L115;
} outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalcBrakingCurves_Pkg::CalcBrakingCurves_integration/ */
extern void CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
  /* TrainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *TrainLocations,
  /* targetCollection/ */
  TargetCollection_T_TargetManagement_types *targetCollection,
  /* A_Safe/ */
  ASafe_T_CalcBrakingCurves_types *A_Safe,
  /* A_Expected/ */
  ASafe_T_CalcBrakingCurves_types *A_Expected,
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalcBrakingCurves_integration_init_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  ParabolaCurve_T_CalcBrakingCurves_types /* _L99/ */ Context__L99;
  kcg_bool /* _L98/ */ Context__L98;
  kcg_bool /* _L79/ */ Context__L79;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L33/ */ Context__L33;
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* MRSPCurves/ */ Context_MRSPCurves;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg;

extern void kcg_save_SV_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
  SV_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *SV,
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC);
extern void kcg_load_SV_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
  outC_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *outC,
  SV_CalcBrakingCurves_integration_CalcBrakingCurves_Pkg *SV);



#endif /* _CalcBrakingCurves_integration_CalcBrakingCurves_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcBrakingCurves_integration_CalcBrakingCurves_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

