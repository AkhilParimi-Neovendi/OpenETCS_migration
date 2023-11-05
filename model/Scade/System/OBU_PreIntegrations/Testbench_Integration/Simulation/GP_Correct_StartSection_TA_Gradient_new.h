/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _GP_Correct_StartSection_TA_Gradient_new_H_
#define _GP_Correct_StartSection_TA_Gradient_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* Profile_out/ */ Profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* _L1/ */ _L1;
  Gradient_section_t_TrackAtlasTypes /* _L3/ */ _L3;
  GradientProfile_t_TrackAtlasTypes /* _L5/ */ _L5;
  Gradient_section_t_TrackAtlasTypes /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  Gradient_section_t_TrackAtlasTypes /* _L12/ */ _L12;
} outC_GP_Correct_StartSection_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Correct_StartSection/ */
extern void GP_Correct_StartSection_TA_Gradient_new(
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* Loc_BG/ */
  kcg_int32 Loc_BG,
  outC_GP_Correct_StartSection_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Correct_StartSection_reset_TA_Gradient_new(
  outC_GP_Correct_StartSection_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Correct_StartSection_init_TA_Gradient_new(
  outC_GP_Correct_StartSection_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GP_Correct_StartSection_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Correct_StartSection_TA_Gradient_new.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

