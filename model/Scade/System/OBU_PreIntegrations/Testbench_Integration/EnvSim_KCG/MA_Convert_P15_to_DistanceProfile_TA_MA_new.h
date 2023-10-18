/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _MA_Convert_P15_to_DistanceProfile_TA_MA_new_H_
#define _MA_Convert_P15_to_DistanceProfile_TA_MA_new_H_

#include "kcg_types.h"
#include "EVAL_T_LOA_TA_Lib_internal.h"
#include "Normalize_Dangerpoint_TA_MA_new.h"
#include "Normalize_Overlap_TA_MA_new.h"
#include "Pack_Endsection_TA_MA_new.h"
#include "MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* MovementAuthority/ */ MovementAuthority;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Normalize_Overlap_TA_MA_new /* _L132=(TA_MA_new::Normalize_Overlap#1)/ */ Context_Normalize_Overlap_1;
  outC_Normalize_Dangerpoint_TA_MA_new /* _L130=(TA_MA_new::Normalize_Dangerpoint#1)/ */ Context_Normalize_Dangerpoint_1;
  outC_MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new /* _L77=(TA_MA_new::MA_Convert_P15_to_DistanceProfile_loop#1)/ */ Context_MA_Convert_P15_to_DistanceProfile_loop_1[10];
  outC_Pack_Endsection_TA_MA_new /* _L134=(TA_MA_new::Pack_Endsection#1)/ */ Context_Pack_Endsection_1;
  outC_EVAL_T_LOA_TA_Lib_internal /* _L145=(TA_Lib_internal::EVAL_T_LOA#2)/ */ Context_EVAL_T_LOA_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_OBU_sectionlist_enum_T_TM /* _L71/ */ _L71;
  Q_SCALE /* _L65/ */ _L65;
  _94_array /* _L74/ */ _L74;
  _47_array /* _L76/ */ _L76;
  AccuDistanceProfileMA_TA_MA_new /* _L77/ */ _L77;
  AccuDistanceProfileMA_TA_MA_new /* _L83/ */ _L83;
  MovementAuthority_t_TrackAtlasTypes /* _L128/ */ _L128;
  kcg_bool /* _L130/ */ _L130;
  DP_or_OL_t_TrackAtlasTypes /* _L131/ */ _L131;
  kcg_bool /* _L132/ */ _L132;
  DP_or_OL_t_TrackAtlasTypes /* _L133/ */ _L133;
  P015_section_enum_T_TM /* _L134/ */ _L134;
  P015_OBU_T_TM /* _L137/ */ _L137;
  kcg_bool /* _L138/ */ _L138;
  MA_Level_t_TrackAtlasTypes /* _L139/ */ _L139;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L140/ */ _L140;
  Q_DIR /* _L141/ */ _L141;
  N_ITER /* _L142/ */ _L142;
  kcg_bool /* _L145/ */ _L145;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L146/ */ _L146;
  V_LOA /* _L149/ */ _L149;
  P003V1_OBU_T_TM_baseline2 /* _L152/ */ _L152;
  kcg_bool /* _L157/ */ _L157;
  Endtimer_t_TrackAtlasTypes /* _L156/ */ _L156;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L162/ */ _L162;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L161/ */ _L161;
  N_ITER /* _L163/ */ _L163;
  P015_OBU_sectionlist_enum_T_TM /* _L166/ */ _L166;
  array_int64_10 /* _L167/ */ _L167;
  MovementAuthority_t_TrackAtlasTypes /* _L168/ */ _L168;
  MovementAuthority_t_TrackAtlasTypes /* _L169/ */ _L169;
} outC_MA_Convert_P15_to_DistanceProfile_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::MA_Convert_P15_to_DistanceProfile/ */
extern void MA_Convert_P15_to_DistanceProfile_TA_MA_new(
  /* Packet15_in/ */
  P015_OBU_T_TM *Packet15_in,
  /* NV_in/ */
  P003V1_OBU_T_TM_baseline2 *NV_in,
  outC_MA_Convert_P15_to_DistanceProfile_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MA_Convert_P15_to_DistanceProfile_reset_TA_MA_new(
  outC_MA_Convert_P15_to_DistanceProfile_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MA_Convert_P15_to_DistanceProfile_init_TA_MA_new(
  outC_MA_Convert_P15_to_DistanceProfile_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MA_Convert_P15_to_DistanceProfile_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_Convert_P15_to_DistanceProfile_TA_MA_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

