/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new_H_
#define _MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new_H_

#include "kcg_types.h"
#include "CAST_Q_SECTIONTIMER_to_bool_TM_conversions.h"
#include "Normalize_Distance_d_internal_t_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  AccuDistanceProfileMA_TA_MA_new /* SpeedtProfile/ */ SpeedtProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Normalize_Distance_d_internal_t_TA_Lib_internal /* _L242=(TA_Lib_internal::Normalize_Distance_d_internal_t#2)/ */ Context_Normalize_Distance_d_internal_t_2;
  outC_CAST_Q_SECTIONTIMER_to_bool_TM_conversions /* _L259=(TM_conversions::CAST_Q_SECTIONTIMER_to_bool#1)/ */ Context_CAST_Q_SECTIONTIMER_to_bool_1;
  outC_Normalize_Distance_d_internal_t_TA_Lib_internal /* _L241=(TA_Lib_internal::Normalize_Distance_d_internal_t#1)/ */ Context_Normalize_Distance_d_internal_t_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* section_d/ */ section_d;
  Q_SCALE /* _L139/ */ _L139;
  kcg_int32 /* _L134/ */ _L134;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L133/ */ _L133;
  kcg_int32 /* _L131/ */ _L131;
  AccuDistanceProfileMA_TA_MA_new /* _L125/ */ _L125;
  P015_OBU_sectionlist_enum_T_TM /* _L121/ */ _L121;
  AccuDistanceProfileMA_TA_MA_new /* _L142/ */ _L142;
  kcg_int32 /* _L144/ */ _L144;
  P015_section_enum_T_TM /* _L227/ */ _L227;
  MovementAuthoritySection_t_TrackAtlasTypes /* _L238/ */ _L238;
  L_SECTION /* _L239/ */ _L239;
  D_SECTIONTIMERSTOPLOC /* _L240/ */ _L240;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L241/ */ _L241;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L242/ */ _L242;
  kcg_bool /* _L243/ */ _L243;
  Q_SECTIONTIMER /* _L244/ */ _L244;
  T_SECTIONTIMER /* _L245/ */ _L245;
  kcg_int32 /* _L248/ */ _L248;
  kcg_int32 /* _L249/ */ _L249;
  MovementAuthoritySection_t_TrackAtlasTypes /* _L252/ */ _L252;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L256/ */ _L256;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L255/ */ _L255;
  kcg_int32 /* _L257/ */ _L257;
  kcg_int32 /* _L258/ */ _L258;
  kcg_bool /* _L259/ */ _L259;
  kcg_int32 /* _L260/ */ _L260;
  kcg_int32 /* _L261/ */ _L261;
  T_SECTIONTIMER /* _L262/ */ _L262;
  kcg_int32 /* _L263/ */ _L263;
  kcg_bool /* _L264/ */ _L264;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L265/ */ _L265;
  AccuDistanceProfileMA_TA_MA_new /* _L275/ */ _L275;
  N_ITER /* _L279/ */ _L279;
  kcg_int32 /* _L280/ */ _L280;
  kcg_bool /* _L281/ */ _L281;
  kcg_int32 /* _L282/ */ _L282;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L286/ */ _L286;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L285/ */ _L285;
  kcg_int32 /* _L289/ */ _L289;
} outC_MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::MA_Convert_P15_to_DistanceProfile_loop/ */
extern void MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new(
  /* i/ */
  kcg_int32 i,
  /* ProfileAccu/ */
  AccuDistanceProfileMA_TA_MA_new *ProfileAccu,
  /* SectionsIn/ */
  P015_OBU_sectionlist_enum_T_TM *SectionsIn,
  /* n_iter/ */
  N_ITER n_iter,
  /* q_scale/ */
  Q_SCALE q_scale,
  outC_MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MA_Convert_P15_to_DistanceProfile_loop_reset_TA_MA_new(
  outC_MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MA_Convert_P15_to_DistanceProfile_loop_init_TA_MA_new(
  outC_MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

