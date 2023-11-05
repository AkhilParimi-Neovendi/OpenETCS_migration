/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _MRSPPreindicationSelector_TargetLimits_Pkg_H_
#define _MRSPPreindicationSelector_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "MRSPPreindicationIterator_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* D_preindication/ */ D_preindication;
  L_internal_real_Type_SDM_Types_Pkg /* D_I_V_MRSP/ */ D_I_V_MRSP;
  kcg_bool /* valid/ */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MRSPPreindicationIterator_TargetLimits_Pkg /* _L3=(TargetLimits_Pkg::MRSPPreindicationIterator#1)/ */ Context_MRSPPreindicationIterator_1[110];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MRSP_internal_section_T_TargetManagement_types /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L10/ */ _L10;
  V_internal_real_Type_SDM_Types_Pkg /* _L9/ */ _L9;
  L_internal_real_Type_SDM_Types_Pkg /* _L8/ */ _L8;
  MRSP_internal_T_TargetManagement_types /* _L11/ */ _L11;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L12/ */ _L12;
  kcg_bool /* _L15/ */ _L15;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L16/ */ _L16;
  T_trac_t_TargetLimits_Pkg /* _L17/ */ _L17;
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* _L18/ */ _L18;
  array_bool_110 /* _L26/ */ _L26;
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* _L27/ */ _L27;
  _107_array /* _L28/ */ _L28;
  MRSP_internal_section_T_TargetManagement_types /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_float32 /* _L41/ */ _L41;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L68/ */ _L68;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L69/ */ _L69;
  T_trac_t_TargetLimits_Pkg /* _L70/ */ _L70;
  T_trac_t_TargetLimits_Pkg /* _L71/ */ _L71;
  T_trac_t_TargetLimits_Pkg /* _L72/ */ _L72;
  kcg_float32 /* _L73/ */ _L73;
  T_internal_real_Type_SDM_Types_Pkg /* _L74/ */ _L74;
  T_trac_t_TargetLimits_Pkg /* _L75/ */ _L75;
  T_trac_t_TargetLimits_Pkg /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
  T_trac_t_TargetLimits_Pkg /* _L81/ */ _L81;
  kcg_float32 /* _L83/ */ _L83;
  kcg_float32 /* _L85/ */ _L85;
  T_internal_real_Type_SDM_Types_Pkg /* _L84/ */ _L84;
  kcg_float32 /* _L86/ */ _L86;
} outC_MRSPPreindicationSelector_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::MRSPPreindicationSelector/ */
extern void MRSPPreindicationSelector_TargetLimits_Pkg(
  /* MRSP/ */
  MRSP_internal_T_TargetManagement_types *MRSP,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* SBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  /* isEoA/ */
  kcg_bool isEoA,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_MRSPPreindicationSelector_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MRSPPreindicationSelector_reset_TargetLimits_Pkg(
  outC_MRSPPreindicationSelector_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MRSPPreindicationSelector_init_TargetLimits_Pkg(
  outC_MRSPPreindicationSelector_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MRSPPreindicationSelector_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MRSPPreindicationSelector_TargetLimits_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

