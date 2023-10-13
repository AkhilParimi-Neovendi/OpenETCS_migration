/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _GP_Position_GP_with_BGs_TA_Gradient_new_H_
#define _GP_Position_GP_with_BGs_TA_Gradient_new_H_

#include "kcg_types.h"
#include "GP_Correct_StartSection_TA_Gradient_new.h"
#include "GP_Truncate_at_BG_TA_Gradient_new.h"
#include "GP_Normalize_Profile_TA_Gradient_new.h"
#include "GP_Merge_New_P21_to_Profile_TA_Gradient_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* ProfileOut/ */ ProfileOut;
  kcg_bool /* available/ */ available;
  GradientProfile_t_TrackAtlasTypes /* ProfileLoopOut/ */ ProfileLoopOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Truncate_at_BG_TA_Gradient_new /* _L23=(TA_Gradient_new::GP_Truncate_at_BG#3)/ */ Context_GP_Truncate_at_BG_3;
  outC_GP_Normalize_Profile_TA_Gradient_new /* _L18=(TA_Gradient_new::GP_Normalize_Profile#2)/ */ Context_GP_Normalize_Profile_2;
  outC_GP_Correct_StartSection_TA_Gradient_new /* _L24=(TA_Gradient_new::GP_Correct_StartSection#1)/ */ Context_GP_Correct_StartSection_1;
  outC_GP_Truncate_at_BG_TA_Gradient_new /* _L22=(TA_Gradient_new::GP_Truncate_at_BG#2)/ */ Context_GP_Truncate_at_BG_2;
  outC_GP_Normalize_Profile_TA_Gradient_new /* _L16=(TA_Gradient_new::GP_Normalize_Profile#1)/ */ Context_GP_Normalize_Profile_1;
  outC_GP_Merge_New_P21_to_Profile_TA_Gradient_new /* _L6=(TA_Gradient_new::GP_Merge_New_P21_to_Profile#1)/ */ Context_GP_Merge_New_P21_to_Profile_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* _L4/ */ _L4;
  GradientProfile_t_TrackAtlasTypes /* _L5/ */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  GradientProfile_t_TrackAtlasTypes /* _L6/ */ _L6;
  kcg_bool /* _L15/ */ _L15;
  GradientProfile_t_TrackAtlasTypes /* _L16/ */ _L16;
  GradientProfile_t_TrackAtlasTypes /* _L18/ */ _L18;
  GradientProfile_t_TrackAtlasTypes /* _L22/ */ _L22;
  GradientProfile_t_TrackAtlasTypes /* _L23/ */ _L23;
  GradientProfile_t_TrackAtlasTypes /* _L24/ */ _L24;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
} outC_GP_Position_GP_with_BGs_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Position_GP_with_BGs/ */
extern void GP_Position_GP_with_BGs_TA_Gradient_new(
  /* ProfileIn/ */
  GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* pos_prvLRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* there_is_prvLRBG/ */
  kcg_bool there_is_prvLRBG,
  /* LastProfile/ */
  GradientProfile_t_TrackAtlasTypes *LastProfile,
  outC_GP_Position_GP_with_BGs_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Position_GP_with_BGs_reset_TA_Gradient_new(
  outC_GP_Position_GP_with_BGs_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Position_GP_with_BGs_init_TA_Gradient_new(
  outC_GP_Position_GP_with_BGs_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GP_Position_GP_with_BGs_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Position_GP_with_BGs_TA_Gradient_new.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

