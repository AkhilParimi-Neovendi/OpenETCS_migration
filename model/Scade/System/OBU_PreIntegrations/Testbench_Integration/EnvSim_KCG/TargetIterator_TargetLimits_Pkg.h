/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _TargetIterator_TargetLimits_Pkg_H_
#define _TargetIterator_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "surplusTractionDeltas_TargetLimits_Pkg.h"
#include "d_SBI2_TargetLimits_Pkg.h"
#include "v_SBI2_TargetLimits_Pkg.h"
#include "selectLEValid_TargetLimits_Pkg.h"
#include "isLEValid_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* goOn/ */ goOn;
  TargetIteratorAkku_TargetLimits_Pkg /* Akku_out/ */ Akku_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isLEValid_TargetLimits_Pkg /* _L34=(TargetLimits_Pkg::isLEValid#1)/ */ Context_isLEValid_1;
  outC_selectLEValid_TargetLimits_Pkg /* _L102=(TargetLimits_Pkg::selectLEValid#1)/ */ Context_selectLEValid_1;
  outC_v_SBI2_TargetLimits_Pkg /* _L101=(TargetLimits_Pkg::v_SBI2#1)/ */ Context_v_SBI2_1;
  outC_d_SBI2_TargetLimits_Pkg /* _L1=(TargetLimits_Pkg::d_SBI2#1)/ */ Context_d_SBI2_1;
  outC_surplusTractionDeltas_TargetLimits_Pkg /* _L74=(TargetLimits_Pkg::surplusTractionDeltas#1)/ */ Context_surplusTractionDeltas_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* valid/ */ valid;
  L_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L9/ */ _L9;
  TargetIteratorAkku_TargetLimits_Pkg /* _L26/ */ _L26;
  kcg_bool /* _L34/ */ _L34;
  TargetIteratorAkku_TargetLimits_Pkg /* _L35/ */ _L35;
  TargetIteratorAkku_TargetLimits_Pkg /* _L45/ */ _L45;
  TargetIteratorAkku_TargetLimits_Pkg /* _L46/ */ _L46;
  kcg_int32 /* _L47/ */ _L47;
  kcg_bool /* _L49/ */ _L49;
  TargetType_T_TargetManagement_types /* _L50/ */ _L50;
  TargetType_T_TargetManagement_types /* _L54/ */ _L54;
  kcg_bool /* _L53/ */ _L53;
  bec_t_TargetLimits_Pkg /* _L74/ */ _L74;
  T_trac_t_TargetLimits_Pkg /* _L73/ */ _L73;
  V_internal_real_Type_SDM_Types_Pkg /* _L72/ */ _L72;
  V_internal_real_Type_SDM_Types_Pkg /* _L71/ */ _L71;
  trainData_internal_t_SDM_Types_Pkg /* _L75/ */ _L75;
  odometry_T_Obu_BasicTypes_Pkg /* _L76/ */ _L76;
  t_Brake_t_SDMModelPkg /* _L77/ */ _L77;
  TargetType_T_TargetManagement_types /* _L78/ */ _L78;
  L_internal_real_Type_SDM_Types_Pkg /* _L79/ */ _L79;
  Target_real_T_TargetManagement_types /* _L80/ */ _L80;
  V_internal_real_Type_SDM_Types_Pkg /* _L81/ */ _L81;
  TargetType_T_TargetManagement_types /* _L82/ */ _L82;
  Target_real_T_TargetManagement_types /* _L83/ */ _L83;
  TargetType_T_TargetManagement_types /* _L84/ */ _L84;
  Target_real_T_TargetManagement_types /* _L87/ */ _L87;
  TargetType_T_TargetManagement_types /* _L86/ */ _L86;
  TargetIteratorAkku_TargetLimits_Pkg /* _L95/ */ _L95;
  T_trac_t_TargetLimits_Pkg /* _L97/ */ _L97;
  kcg_bool /* _L101/ */ _L101;
  V_internal_real_Type_SDM_Types_Pkg /* _L100/ */ _L100;
  kcg_bool /* _L102/ */ _L102;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L103/ */ _L103;
  T_internal_real_Type_SDM_Types_Pkg /* _L104/ */ _L104;
  L_internal_real_Type_SDM_Types_Pkg /* _L107/ */ _L107;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L108/ */ _L108;
  kcg_bool /* _L109/ */ _L109;
  kcg_float32 /* _L111/ */ _L111;
  kcg_bool /* _L110/ */ _L110;
  V_internal_real_Type_SDM_Types_Pkg /* _L112/ */ _L112;
  kcg_int32 /* _L113/ */ _L113;
  V_internal_real_Type_SDM_Types_Pkg /* _L115/ */ _L115;
  Target_real_T_TargetManagement_types /* _L114/ */ _L114;
  TargetIteratorAkku_TargetLimits_Pkg /* _L116/ */ _L116;
  kcg_bool /* _L117/ */ _L117;
  kcg_bool /* _L119/ */ _L119;
  kcg_bool /* _L120/ */ _L120;
  kcg_int32 /* _L121/ */ _L121;
  TargetIteratorAkku_TargetLimits_Pkg /* _L122/ */ _L122;
  TargetIteratorAkku_TargetLimits_Pkg /* _L123/ */ _L123;
  kcg_int32 /* _L124/ */ _L124;
  kcg_int32 /* _L125/ */ _L125;
  TargetType_T_TargetManagement_types /* _L126/ */ _L126;
  kcg_bool /* _L127/ */ _L127;
  kcg_bool /* _L128/ */ _L128;
} outC_TargetIterator_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::TargetIterator/ */
extern void TargetIterator_TargetLimits_Pkg(
  /* index/ */
  kcg_int32 index,
  /* Akku_in/ */
  TargetIteratorAkku_TargetLimits_Pkg *Akku_in,
  /* target/ */
  Target_real_T_TargetManagement_types *target,
  /* targetCurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *targetCurve,
  /* trainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* T_b/ */
  t_Brake_t_SDMModelPkg *T_b,
  /* D_maxsafefront/ */
  L_internal_real_Type_SDM_Types_Pkg D_maxsafefront,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  outC_TargetIterator_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TargetIterator_reset_TargetLimits_Pkg(
  outC_TargetIterator_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TargetIterator_init_TargetLimits_Pkg(
  outC_TargetIterator_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TargetIterator_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TargetIterator_TargetLimits_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

