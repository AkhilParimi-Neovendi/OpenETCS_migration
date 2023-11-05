/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new_H_
#define _SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new_H_

#include "kcg_types.h"
#include "Eval_Q_Front_TA_Lib_internal.h"
#include "Normalize_Distance_d_internal_t_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* SpeedtProfile/ */ SpeedtProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Normalize_Distance_d_internal_t_TA_Lib_internal /* _L135=(TA_Lib_internal::Normalize_Distance_d_internal_t#2)/ */ Context_Normalize_Distance_d_internal_t_2;
  outC_Eval_Q_Front_TA_Lib_internal /* _L160=(TA_Lib_internal::Eval_Q_Front#1)/ */ Context_Eval_Q_Front_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* _L139/ */ _L139;
  D_STATIC /* _L138/ */ _L138;
  V_STATIC /* _L137/ */ _L137;
  StaticSpeedSection_t_TrackAtlasTypes /* _L136/ */ _L136;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L135/ */ _L135;
  kcg_int32 /* _L134/ */ _L134;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L133/ */ _L133;
  kcg_int32 /* _L131/ */ _L131;
  kcg_bool /* _L130/ */ _L130;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L125/ */ _L125;
  P027V1_section_enum_T_TM_baseline2 /* _L123/ */ _L123;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* _L121/ */ _L121;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L142/ */ _L142;
  StaticSpeedSection_t_TrackAtlasTypes /* _L143/ */ _L143;
  kcg_int32 /* _L144/ */ _L144;
  kcg_int32 /* _L145/ */ _L145;
  kcg_int32 /* _L146/ */ _L146;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L147/ */ _L147;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L148/ */ _L148;
  kcg_int32 /* _L154/ */ _L154;
  kcg_int32 /* _L155/ */ _L155;
  kcg_int32 /* _L156/ */ _L156;
  kcg_int32 /* _L157/ */ _L157;
  kcg_int32 /* _L158/ */ _L158;
  Q_FRONT /* _L159/ */ _L159;
  kcg_bool /* _L160/ */ _L160;
} outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile_loop/ */
extern void SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new(
  /* i/ */
  kcg_int32 i,
  /* ProfileAccu/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileAccu,
  /* SectionIn/ */
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* q_scale/ */
  Q_SCALE q_scale,
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Convert_P27V1_to_DistanceProfile_loop_reset_TA_SSP_new(
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Convert_P27V1_to_DistanceProfile_loop_init_TA_SSP_new(
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP_new.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

