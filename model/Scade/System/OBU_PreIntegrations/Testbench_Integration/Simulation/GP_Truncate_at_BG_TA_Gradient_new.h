/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _GP_Truncate_at_BG_TA_Gradient_new_H_
#define _GP_Truncate_at_BG_TA_Gradient_new_H_

#include "kcg_types.h"
#include "GP_Find_First_Gsection_After_BG_loop_TA_Gradient_new.h"
#include "GP_Truncate_at_BG_loop_TA_Gradient_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* Profile_out/ */ Profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Truncate_at_BG_loop_TA_Gradient_new /* _L10=(TA_Gradient_new::GP_Truncate_at_BG_loop#1)/ */ Context_GP_Truncate_at_BG_loop_1[50];
  outC_GP_Find_First_Gsection_After_BG_loop_TA_Gradient_new /* _L4=(TA_Gradient_new::GP_Find_First_Gsection_After_BG_loop#1)/ */ Context_GP_Find_First_Gsection_After_BG_loop_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* _L1/ */ _L1;
  kcg_int32 /* _L8/ */ _L8;
  _2_array /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L10/ */ _L10;
  GradientProfile_t_TrackAtlasTypes /* _L12/ */ _L12;
  GradientProfile_t_TrackAtlasTypes /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L17/ */ _L17;
  kcg_bool /* _L11/ */ _L11;
} outC_GP_Truncate_at_BG_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Truncate_at_BG/ */
extern void GP_Truncate_at_BG_TA_Gradient_new(
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  outC_GP_Truncate_at_BG_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Truncate_at_BG_reset_TA_Gradient_new(
  outC_GP_Truncate_at_BG_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Truncate_at_BG_init_TA_Gradient_new(
  outC_GP_Truncate_at_BG_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GP_Truncate_at_BG_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Truncate_at_BG_TA_Gradient_new.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

