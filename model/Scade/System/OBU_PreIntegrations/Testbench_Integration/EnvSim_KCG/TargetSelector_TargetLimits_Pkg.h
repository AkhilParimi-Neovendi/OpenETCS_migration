/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _TargetSelector_TargetLimits_Pkg_H_
#define _TargetSelector_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "TransformV_realToV_int_SDM_Types_Pkg.h"
#include "TransformL_realToL_int_SDM_Types_Pkg.h"
#include "TargetIterator_TargetLimits_Pkg.h"
#include "v_SBI1_TargetLimits_Pkg.h"
#include "selectLEValid_TargetLimits_Pkg.h"
#include "TransformV_realToV_odo_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Target_T_TargetManagement_types /* MostRestrictiveDisplayedTarget/ */ MostRestrictiveDisplayedTarget;
  ParabolaCurve_T_CalcBrakingCurves_types /* MostRestrictiveEBDCurve/ */ MostRestrictiveEBDCurve;
  ParabolaCurve_T_CalcBrakingCurves_types /* SBDcurve/ */ SBDcurve;
  ParabolaCurve_T_CalcBrakingCurves_types /* GUIcurve/ */ GUIcurve;
  kcg_bool /* GUICurveEnabled/ */ GUICurveEnabled;
  V_internal_real_Type_SDM_Types_Pkg /* V_Target/ */ V_Target;
  V_odometry_Type_Obu_BasicTypes_Pkg /* V_P_MRDT/ */ V_P_MRDT;
  L_internal_real_Type_SDM_Types_Pkg /* D_EOA/ */ D_EOA;
  L_internal_real_Type_SDM_Types_Pkg /* D_SvL/ */ D_SvL;
  V_internal_real_Type_SDM_Types_Pkg /* v_est/ */ v_est;
  T_trac_t_TargetLimits_Pkg /* T/ */ T;
  V_internal_real_Type_SDM_Types_Pkg /* V_ura/ */ V_ura;
  bec_t_TargetLimits_Pkg /* bec/ */ bec;
  L_internal_real_Type_SDM_Types_Pkg /* D_SBI2/ */ D_SBI2;
  kcg_bool /* valid_D_SBI2/ */ valid_D_SBI2;
  L_internal_real_Type_SDM_Types_Pkg /* D_estfront/ */ D_estfront;
  L_internal_real_Type_SDM_Types_Pkg /* D_maxsafefront/ */ D_maxsafefront;
  kcg_bool /* freshMRDT/ */ freshMRDT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransformL_realToL_int_SDM_Types_Pkg /* _L294=(SDM_Types_Pkg::TransformL_realToL_int#1)/ */ Context_TransformL_realToL_int_1;
  outC_TransformV_realToV_int_SDM_Types_Pkg /* _L295=(SDM_Types_Pkg::TransformV_realToV_int#1)/ */ Context_TransformV_realToV_int_1;
  outC_TransformV_realToV_odo_SDM_Types_Pkg /* _L302=(SDM_Types_Pkg::TransformV_realToV_odo#1)/ */ Context_TransformV_realToV_odo_1;
  outC_selectLEValid_TargetLimits_Pkg /* _L261=(TargetLimits_Pkg::selectLEValid#1)/ */ Context_selectLEValid_1;
  outC_v_SBI1_TargetLimits_Pkg /* _L264=(TargetLimits_Pkg::v_SBI1#2)/ */ Context_v_SBI1_2;
  outC_TargetIterator_TargetLimits_Pkg /* _L59=(TargetLimits_Pkg::TargetIterator#4)/ */ Context_TargetIterator_4;
  outC_TargetIterator_TargetLimits_Pkg /* _L28=(TargetLimits_Pkg::TargetIterator#2)/ */ Context_TargetIterator_2[110];
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* CurvesMRSP/ */ CurvesMRSP;
  ParabolaCurve_T_CalcBrakingCurves_types /* CurveSvL/ */ CurveSvL;
  Target_list_MRSP_real_T_TargetManagement_types /* TargetsMRSP/ */ TargetsMRSP;
  Target_real_T_TargetManagement_types /* TargetEOA/ */ TargetEOA;
  Target_real_T_TargetManagement_types /* TargetSvL/ */ TargetSvL;
  ParabolaCurve_T_CalcBrakingCurves_types /* GuiCurve/ */ GuiCurve;
  kcg_bool /* GuiCurveEn/ */ GuiCurveEn;
  ParabolaCurve_T_CalcBrakingCurves_types /* CurveSBD/ */ CurveSBD;
  _99_array /* _L42/ */ _L42;
  _27_array /* _L40/ */ _L40;
  kcg_bool /* _L36/ */ _L36;
  _98_array /* _L33/ */ _L33;
  kcg_int64 /* _L28/ */ _L28;
  TargetIteratorAkku_TargetLimits_Pkg /* _L29/ */ _L29;
  kcg_bool /* _L59/ */ _L59;
  TargetIteratorAkku_TargetLimits_Pkg /* _L60/ */ _L60;
  kcg_int64 /* _L55/ */ _L55;
  L_internal_real_Type_SDM_Types_Pkg /* _L69/ */ _L69;
  L_internal_real_Type_SDM_Types_Pkg /* _L65/ */ _L65;
  kcg_int64 /* _L80/ */ _L80;
  kcg_bool /* _L110/ */ _L110;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L109/ */ _L109;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L108/ */ _L108;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L107/ */ _L107;
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* _L106/ */ _L106;
  CurveCollection_T_CalcBrakingCurves_types /* _L113/ */ _L113;
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* _L115/ */ _L115;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L117/ */ _L117;
  TargetCollection_T_TargetManagement_types /* _L118/ */ _L118;
  Target_real_T_TargetManagement_types /* _L127/ */ _L127;
  Target_real_T_TargetManagement_types /* _L126/ */ _L126;
  Target_list_MRSP_real_T_TargetManagement_types /* _L125/ */ _L125;
  kcg_bool /* _L124/ */ _L124;
  Target_real_T_TargetManagement_types /* _L130/ */ _L130;
  Target_list_MRSP_real_T_TargetManagement_types /* _L132/ */ _L132;
  Target_real_T_TargetManagement_types /* _L133/ */ _L133;
  Target_real_T_TargetManagement_types /* _L134/ */ _L134;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L153/ */ _L153;
  Target_real_T_TargetManagement_types /* _L152/ */ _L152;
  Target_list_MRSP_real_T_TargetManagement_types /* _L162/ */ _L162;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L158/ */ _L158;
  Target_real_T_TargetManagement_types /* _L157/ */ _L157;
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* _L156/ */ _L156;
  odometry_T_Obu_BasicTypes_Pkg /* _L173/ */ _L173;
  kcg_bool /* _L180/ */ _L180;
  kcg_bool /* _L179/ */ _L179;
  kcg_bool /* _L178/ */ _L178;
  P3_NationalValues_T_Packet_Types_Pkg /* _L177/ */ _L177;
  Q_NVINHSMICPERM /* _L176/ */ _L176;
  bec_t_TargetLimits_Pkg /* _L194/ */ _L194;
  T_trac_t_TargetLimits_Pkg /* _L195/ */ _L195;
  L_internal_real_Type_SDM_Types_Pkg /* _L196/ */ _L196;
  trainData_internal_t_SDM_Types_Pkg /* _L199/ */ _L199;
  t_Brake_t_SDMModelPkg /* _L200/ */ _L200;
  V_internal_real_Type_SDM_Types_Pkg /* _L201/ */ _L201;
  V_internal_real_Type_SDM_Types_Pkg /* _L202/ */ _L202;
  TargetType_T_TargetManagement_types /* _L203/ */ _L203;
  kcg_bool /* _L204/ */ _L204;
  TargetType_T_TargetManagement_types /* _L205/ */ _L205;
  trainData_internal_t_SDM_Types_Pkg /* _L211/ */ _L211;
  odometry_T_Obu_BasicTypes_Pkg /* _L210/ */ _L210;
  t_Brake_t_SDMModelPkg /* _L209/ */ _L209;
  T_trac_t_TargetLimits_Pkg /* _L238/ */ _L238;
  bec_t_TargetLimits_Pkg /* _L243/ */ _L243;
  kcg_int64 /* _L242/ */ _L242;
  kcg_float64 /* _L241/ */ _L241;
  TargetType_T_TargetManagement_types /* _L240/ */ _L240;
  TargetIteratorAkku_TargetLimits_Pkg /* _L239/ */ _L239;
  L_internal_real_Type_SDM_Types_Pkg /* _L246/ */ _L246;
  L_internal_real_Type_SDM_Types_Pkg /* _L245/ */ _L245;
  TrainLocations_real_T_SDM_Types_Pkg /* _L244/ */ _L244;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L249/ */ _L249;
  kcg_bool /* _L250/ */ _L250;
  kcg_bool /* _L252/ */ _L252;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L251/ */ _L251;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L254/ */ _L254;
  kcg_bool /* _L253/ */ _L253;
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types /* _L255/ */ _L255;
  array_bool_110 /* _L256/ */ _L256;
  kcg_int64 /* _L257/ */ _L257;
  kcg_bool /* _L264/ */ _L264;
  V_internal_real_Type_SDM_Types_Pkg /* _L265/ */ _L265;
  kcg_bool /* _L261/ */ _L261;
  kcg_bool /* _L262/ */ _L262;
  kcg_float64 /* _L263/ */ _L263;
  T_internal_real_Type_SDM_Types_Pkg /* _L259/ */ _L259;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L266/ */ _L266;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L267/ */ _L267;
  L_internal_real_Type_SDM_Types_Pkg /* _L269/ */ _L269;
  TrainLocations_real_T_SDM_Types_Pkg /* _L268/ */ _L268;
  Target_real_T_TargetManagement_types /* _L271/ */ _L271;
  L_internal_real_Type_SDM_Types_Pkg /* _L270/ */ _L270;
  Target_real_T_TargetManagement_types /* _L272/ */ _L272;
  kcg_bool /* _L275/ */ _L275;
  TargetType_T_TargetManagement_types /* _L274/ */ _L274;
  TargetType_T_TargetManagement_types /* _L273/ */ _L273;
  kcg_bool /* _L277/ */ _L277;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L276/ */ _L276;
  V_internal_real_Type_SDM_Types_Pkg /* _L278/ */ _L278;
  kcg_bool /* _L281/ */ _L281;
  TargetType_T_TargetManagement_types /* _L280/ */ _L280;
  TargetType_T_TargetManagement_types /* _L279/ */ _L279;
  Target_real_T_TargetManagement_types /* _L282/ */ _L282;
  Target_real_T_TargetManagement_types /* _L283/ */ _L283;
  array_float64_110 /* _L286/ */ _L286;
  Target_T_TargetManagement_types /* _L287/ */ _L287;
  V_internal_real_Type_SDM_Types_Pkg /* _L293/ */ _L293;
  L_internal_real_Type_SDM_Types_Pkg /* _L292/ */ _L292;
  TargetType_T_TargetManagement_types /* _L291/ */ _L291;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L294/ */ _L294;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L295/ */ _L295;
  TargetType_T_TargetManagement_types /* _L297/ */ _L297;
  kcg_bool /* _L296/ */ _L296;
  V_internal_real_Type_SDM_Types_Pkg /* _L298/ */ _L298;
  V_odometry_Type_Obu_BasicTypes_Pkg /* _L302/ */ _L302;
  kcg_bool /* _L303/ */ _L303;
} outC_TargetSelector_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::TargetSelector/ */
extern void TargetSelector_TargetLimits_Pkg(
  /* Targets/ */
  TargetCollection_T_TargetManagement_types *Targets,
  /* Curves/ */
  CurveCollection_T_CalcBrakingCurves_types *Curves,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* trainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* T_b/ */
  t_Brake_t_SDMModelPkg *T_b,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* trainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  outC_TargetSelector_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TargetSelector_reset_TargetLimits_Pkg(
  outC_TargetSelector_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TargetSelector_init_TargetLimits_Pkg(
  outC_TargetSelector_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TargetSelector_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TargetSelector_TargetLimits_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

