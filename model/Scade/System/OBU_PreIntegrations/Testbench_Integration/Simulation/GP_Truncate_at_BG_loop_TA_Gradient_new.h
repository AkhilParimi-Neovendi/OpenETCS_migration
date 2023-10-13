/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _GP_Truncate_at_BG_loop_TA_Gradient_new_H_
#define _GP_Truncate_at_BG_loop_TA_Gradient_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  GradientProfile_t_TrackAtlasTypes /* Profile_out/ */ Profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  GradientProfile_t_TrackAtlasTypes /* _L2/ */ _L2;
  GradientProfile_t_TrackAtlasTypes /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  GradientProfile_t_TrackAtlasTypes /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
  Gradient_section_t_TrackAtlasTypes /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
} outC_GP_Truncate_at_BG_loop_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Truncate_at_BG_loop/ */
extern void GP_Truncate_at_BG_loop_TA_Gradient_new(
  /* i/ */
  kcg_int64 i,
  /* Acc/ */
  GradientProfile_t_TrackAtlasTypes *Acc,
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* Pointer/ */
  kcg_int64 Pointer,
  outC_GP_Truncate_at_BG_loop_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Truncate_at_BG_loop_reset_TA_Gradient_new(
  outC_GP_Truncate_at_BG_loop_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Truncate_at_BG_loop_init_TA_Gradient_new(
  outC_GP_Truncate_at_BG_loop_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GP_Truncate_at_BG_loop_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Truncate_at_BG_loop_TA_Gradient_new.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

