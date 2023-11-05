/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient_new_H_
#define _GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient_new_H_

#include "kcg_types.h"
#include "EVAL_Q_GDIR_TA_Lib_internal.h"
#include "Normalize_Distance_d_internal_t_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* GradientProfile/ */ GradientProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Normalize_Distance_d_internal_t_TA_Lib_internal /* _L122=(TA_Lib_internal::Normalize_Distance_d_internal_t#4)/ */ Context_Normalize_Distance_d_internal_t_4;
  outC_EVAL_Q_GDIR_TA_Lib_internal /* _L127=(TA_Lib_internal::EVAL_Q_GDIR#2)/ */ Context_EVAL_Q_GDIR_2;
  outC_Normalize_Distance_d_internal_t_TA_Lib_internal /* _L135=(TA_Lib_internal::Normalize_Distance_d_internal_t#3)/ */ Context_Normalize_Distance_d_internal_t_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L141/ */ _L141;
  P021_section_enum_T_TM /* _L140/ */ _L140;
  Q_SCALE /* _L139/ */ _L139;
  D_GRADIENT /* _L138/ */ _L138;
  D_GRADIENT /* _L137/ */ _L137;
  Gradient_section_t_TrackAtlasTypes /* _L136/ */ _L136;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L135/ */ _L135;
  kcg_int32 /* _L134/ */ _L134;
  GradientProfile_t_TrackAtlasTypes /* _L133/ */ _L133;
  kcg_int32 /* _L131/ */ _L131;
  kcg_bool /* _L130/ */ _L130;
  Q_GDIR /* _L129/ */ _L129;
  P021_OBU_sectionlist_enum_T_TM /* _L128/ */ _L128;
  G_internal_Type_Obu_BasicTypes_Pkg /* _L127/ */ _L127;
  kcg_int32 /* _L126/ */ _L126;
  GradientProfile_t_TrackAtlasTypes /* _L125/ */ _L125;
  G_A /* _L124/ */ _L124;
  P021_section_enum_T_TM /* _L123/ */ _L123;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L122/ */ _L122;
  P021_OBU_sectionlist_enum_T_TM /* _L121/ */ _L121;
  GradientProfile_t_TrackAtlasTypes /* _L142/ */ _L142;
  Gradient_section_t_TrackAtlasTypes /* _L143/ */ _L143;
  kcg_int32 /* _L144/ */ _L144;
  kcg_int32 /* _L145/ */ _L145;
  kcg_int32 /* _L146/ */ _L146;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L147/ */ _L147;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L148/ */ _L148;
  kcg_int32 /* _L149/ */ _L149;
  kcg_int32 /* _L150/ */ _L150;
  kcg_int32 /* _L151/ */ _L151;
  kcg_int32 /* _L152/ */ _L152;
  kcg_int32 /* _L153/ */ _L153;
} outC_GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Convert_P21_to_DistanceProfile_loop/ */
extern void GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient_new(
  /* i/ */
  kcg_int32 i,
  /* ProfileAccu/ */
  GradientProfile_t_TrackAtlasTypes *ProfileAccu,
  /* SectionIn/ */
  P021_OBU_sectionlist_enum_T_TM *SectionIn,
  /* q_scale/ */
  Q_SCALE q_scale,
  outC_GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Convert_P21_to_DistanceProfile_loop_reset_TA_Gradient_new(
  outC_GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Convert_P21_to_DistanceProfile_loop_init_TA_Gradient_new(
  outC_GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

