/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _GP_Normalize_Profile_loop_TA_Gradient_new_H_
#define _GP_Normalize_Profile_loop_TA_Gradient_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* ProfileNormalized_LRBG/ */ ProfileNormalized_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* Loc_Section_Abs/ */ Loc_Section_Abs;
  Gradient_section_t_TrackAtlasTypes /* Ga_section_at_LRBG/ */ Ga_section_at_LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg /* L_Gradient/ */ L_Gradient;
  kcg_int32 /* _L1/ */ _L1;
  GradientProfile_t_TrackAtlasTypes /* _L2/ */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  Gradient_section_t_TrackAtlasTypes /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  Gradient_section_t_TrackAtlasTypes /* _L7/ */ _L7;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L15/ */ _L15;
  GradientProfile_t_TrackAtlasTypes /* _L14/ */ _L14;
  Gradient_section_t_TrackAtlasTypes /* _L13/ */ _L13;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  kcg_int32 /* _L24/ */ _L24;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L25/ */ _L25;
  kcg_int32 /* _L26/ */ _L26;
  Gradient_section_t_TrackAtlasTypes /* _L34/ */ _L34;
  kcg_int32 /* _L33/ */ _L33;
  GradientProfile_t_TrackAtlasTypes /* _L32/ */ _L32;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L31/ */ _L31;
  GradientProfile_t_TrackAtlasTypes /* _L30/ */ _L30;
  Gradient_section_t_TrackAtlasTypes /* _L12/ */ _L12;
  kcg_int32 /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_int32 /* _L37/ */ _L37;
} outC_GP_Normalize_Profile_loop_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Normalize_Profile_loop/ */
extern void GP_Normalize_Profile_loop_TA_Gradient_new(
  /* i/ */
  kcg_int32 i,
  /* ProfileIn/ */
  GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_BG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_GP_Normalize_Profile_loop_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Normalize_Profile_loop_reset_TA_Gradient_new(
  outC_GP_Normalize_Profile_loop_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Normalize_Profile_loop_init_TA_Gradient_new(
  outC_GP_Normalize_Profile_loop_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GP_Normalize_Profile_loop_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Normalize_Profile_loop_TA_Gradient_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

