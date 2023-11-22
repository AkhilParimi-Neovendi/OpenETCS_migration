/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _GP_Merge_New_P21_to_Profi_TA_Gradient_new_H_
#define _GP_Merge_New_P21_to_Profi_TA_Gradient_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* GradientProfile_out/ */ GradientProfile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  GradientProfile_t_TrackAtlasTypes /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L11/ */ _L11;
  Gradient_section_t_TrackAtlasTypes /* _L15/ */ _L15;
  GradientProfile_t_TrackAtlasTypes /* _L19/ */ _L19;
  GradientProfile_t_TrackAtlasTypes /* _L20/ */ _L20;
} outC_GP_Merge_New_P21_to_Profi_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Merge_New_P21_to_Profile_loop/ */
extern void GP_Merge_New_P21_to_Profi_TA_Gradient_new(
  /* i/ */
  kcg_int32 i,
  /* GP/ */
  GradientProfile_t_TrackAtlasTypes *GP,
  /* First_Section_To_Replace/ */
  kcg_int32 First_Section_To_Replace,
  /* new_GP_received/ */
  GradientProfile_t_TrackAtlasTypes *new_GP_received,
  outC_GP_Merge_New_P21_to_Profi_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Merge_New_P21_to_Profi_reset_TA_Gradient_new(
  outC_GP_Merge_New_P21_to_Profi_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Merge_New_P21_to_Profi_init_TA_Gradient_new(
  outC_GP_Merge_New_P21_to_Profi_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GP_Merge_New_P21_to_Profi_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Merge_New_P21_to_Profi_TA_Gradient_new.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

