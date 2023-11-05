/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _GP_Merge_New_P21_to_Profile_TA_Gradient_new_H_
#define _GP_Merge_New_P21_to_Profile_TA_Gradient_new_H_

#include "kcg_types.h"
#include "GP_Merge_New_P21_to_Profile_loop_TA_Gradient_new.h"
#include "FindStartOfNewGradientProfileAbs_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* GradientdProfile_out/ */ GradientdProfile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Merge_New_P21_to_Profile_loop_TA_Gradient_new /* _L14=(TA_Gradient_new::GP_Merge_New_P21_to_Profile_loop#1)/ */ Context_GP_Merge_New_P21_to_Profile_loop_1[50];
  outC_FindStartOfNewGradientProfileAbs_TA_Lib_internal /* _L1=(TA_Lib_internal::FindStartOfNewGradientProfileAbs#1)/ */ Context_FindStartOfNewGradientProfileAbs_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  GradientProfile_t_TrackAtlasTypes /* _L5/ */ _L5;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L9/ */ _L9;
  GradientProfile_t_TrackAtlasTypes /* _L14/ */ _L14;
  GradientProfile_t_TrackAtlasTypes /* _L45/ */ _L45;
  _3_array /* _L47/ */ _L47;
  kcg_bool /* _L148/ */ _L148;
} outC_GP_Merge_New_P21_to_Profile_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Merge_New_P21_to_Profile/ */
extern void GP_Merge_New_P21_to_Profile_TA_Gradient_new(
  /* new_GP/ */
  GradientProfile_t_TrackAtlasTypes *new_GP,
  /* Last_GradientProfile_in/ */
  GradientProfile_t_TrackAtlasTypes *Last_GradientProfile_in,
  outC_GP_Merge_New_P21_to_Profile_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Merge_New_P21_to_Profile_reset_TA_Gradient_new(
  outC_GP_Merge_New_P21_to_Profile_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Merge_New_P21_to_Profile_init_TA_Gradient_new(
  outC_GP_Merge_New_P21_to_Profile_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GP_Merge_New_P21_to_Profile_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Merge_New_P21_to_Profile_TA_Gradient_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

