/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _MRSPPreindicationIterator_TargetLimits_Pkg_H_
#define _MRSPPreindicationIterator_TargetLimits_Pkg_H_

#include "kcg_types.h"
#include "d_I_MRSP_TargetLimits_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* goOn/ */ goOn;
  MRSP_internal_section_T_TargetManagement_types /* MRSP_preindication_next/ */ MRSP_preindication_next;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_d_I_MRSP_TargetLimits_Pkg /* _L90=(TargetLimits_Pkg::d_I_MRSP#1)/ */ Context_d_I_MRSP_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* D_I/ */ D_I;
  V_internal_real_Type_SDM_Types_Pkg /* V_MRSPn/ */ V_MRSPn;
  V_internal_real_Type_SDM_Types_Pkg /* V_MRSPn_1/ */ V_MRSPn_1;
  L_internal_real_Type_SDM_Types_Pkg /* D_I_1/ */ D_I_1;
  kcg_bool /* lastIsValid/ */ lastIsValid;
  L_internal_real_Type_SDM_Types_Pkg /* D_start/ */ D_start;
  kcg_bool /* simpleCaseFulfilled/ */ simpleCaseFulfilled;
  kcg_bool /* cornerCaseFulfilled/ */ cornerCaseFulfilled;
  kcg_bool /* finalize/ */ finalize;
  kcg_bool /* currentlyValid/ */ currentlyValid;
  kcg_bool /* finalCaseFulfilled/ */ finalCaseFulfilled;
  kcg_bool /* _L6/ */ _L6;
  V_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  L_internal_real_Type_SDM_Types_Pkg /* _L4/ */ _L4;
  MRSP_internal_section_T_TargetManagement_types /* _L7/ */ _L7;
  MRSP_internal_section_T_TargetManagement_types /* _L8/ */ _L8;
  kcg_bool /* _L21/ */ _L21;
  V_internal_real_Type_SDM_Types_Pkg /* _L20/ */ _L20;
  L_internal_real_Type_SDM_Types_Pkg /* _L19/ */ _L19;
  L_internal_real_Type_SDM_Types_Pkg /* _L22/ */ _L22;
  T_internal_real_Type_SDM_Types_Pkg /* _L25/ */ _L25;
  kcg_float32 /* _L26/ */ _L26;
  kcg_float32 /* _L27/ */ _L27;
  L_internal_real_Type_SDM_Types_Pkg /* _L28/ */ _L28;
  MRSP_internal_section_T_TargetManagement_types /* _L29/ */ _L29;
  kcg_bool /* _L33/ */ _L33;
  V_internal_real_Type_SDM_Types_Pkg /* _L35/ */ _L35;
  V_internal_real_Type_SDM_Types_Pkg /* _L39/ */ _L39;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  L_internal_real_Type_SDM_Types_Pkg /* _L46/ */ _L46;
  L_internal_real_Type_SDM_Types_Pkg /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L49/ */ _L49;
  V_internal_real_Type_SDM_Types_Pkg /* _L50/ */ _L50;
  V_internal_real_Type_SDM_Types_Pkg /* _L51/ */ _L51;
  L_internal_real_Type_SDM_Types_Pkg /* _L52/ */ _L52;
  L_internal_real_Type_SDM_Types_Pkg /* _L53/ */ _L53;
  kcg_float32 /* _L54/ */ _L54;
  L_internal_real_Type_SDM_Types_Pkg /* _L57/ */ _L57;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  kcg_bool /* _L65/ */ _L65;
  kcg_bool /* _L70/ */ _L70;
  L_internal_real_Type_SDM_Types_Pkg /* _L71/ */ _L71;
  kcg_bool /* _L72/ */ _L72;
  L_internal_real_Type_SDM_Types_Pkg /* _L73/ */ _L73;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L79/ */ _L79;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L84/ */ _L84;
  kcg_bool /* _L87/ */ _L87;
  ParabolaCurve_T_CalcBrakingCurves_types /* _L88/ */ _L88;
  T_trac_t_TargetLimits_Pkg /* _L89/ */ _L89;
  kcg_bool /* _L90/ */ _L90;
  kcg_bool /* _L97/ */ _L97;
  kcg_bool /* _L96/ */ _L96;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L102/ */ _L102;
  L_internal_real_Type_SDM_Types_Pkg /* _L103/ */ _L103;
  L_internal_real_Type_SDM_Types_Pkg /* _L104/ */ _L104;
  kcg_int32 /* _L107/ */ _L107;
  kcg_int32 /* _L108/ */ _L108;
  kcg_bool /* _L110/ */ _L110;
  kcg_bool /* _L111/ */ _L111;
  kcg_bool /* _L113/ */ _L113;
  kcg_bool /* _L115/ */ _L115;
  kcg_bool /* _L114/ */ _L114;
  kcg_bool /* _L116/ */ _L116;
  kcg_bool /* _L118/ */ _L118;
  kcg_bool /* _L117/ */ _L117;
  kcg_bool /* _L124/ */ _L124;
  kcg_bool /* _L123/ */ _L123;
  kcg_bool /* _L125/ */ _L125;
} outC_MRSPPreindicationIterator_TargetLimits_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* TargetLimits_Pkg::MRSPPreindicationIterator/ */
extern void MRSPPreindicationIterator_TargetLimits_Pkg(
  /* i/ */
  kcg_int32 i,
  /* MRSP_preindication_mix/ */
  MRSP_internal_section_T_TargetManagement_types *MRSP_preindication_mix,
  /* MRSP_sect_n/ */
  MRSP_internal_section_T_TargetManagement_types *MRSP_sect_n,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_MRSPPreindicationIterator_TargetLimits_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MRSPPreindicationIterator_reset_TargetLimits_Pkg(
  outC_MRSPPreindicationIterator_TargetLimits_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MRSPPreindicationIterator_init_TargetLimits_Pkg(
  outC_MRSPPreindicationIterator_TargetLimits_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MRSPPreindicationIterator_TargetLimits_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MRSPPreindicationIterator_TargetLimits_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

