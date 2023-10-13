/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _GP_Postprocessing_TA_Gradient_new_H_
#define _GP_Postprocessing_TA_Gradient_new_H_

#include "kcg_types.h"
#include "GP_Position_GP_with_BGs_TA_Gradient_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* available/ */ available;
  GradientProfile_t_TrackAtlasTypes /* GP/ */ GP;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  GradientProfile_t_TrackAtlasTypes /* _L4/ */ _L4;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GP_Position_GP_with_BGs_TA_Gradient_new /* _L2=(TA_Gradient_new::GP_Position_GP_with_BGs#1)/ */ Context_GP_Position_GP_with_BGs_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  GradientProfile_t_TrackAtlasTypes /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  GradientProfile_t_TrackAtlasTypes /* _L1/ */ _L1;
  GradientProfile_t_TrackAtlasTypes /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
} outC_GP_Postprocessing_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Postprocessing/ */
extern void GP_Postprocessing_TA_Gradient_new(
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* pos_prvLRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* there_is_prvLRBG/ */
  kcg_bool there_is_prvLRBG,
  outC_GP_Postprocessing_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Postprocessing_reset_TA_Gradient_new(
  outC_GP_Postprocessing_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Postprocessing_init_TA_Gradient_new(
  outC_GP_Postprocessing_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  GradientProfile_t_TrackAtlasTypes /* _L4/ */ Context__L4;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_GP_Postprocessing_TA_Gradient_new;

extern void kcg_save_SV_GP_Postprocessing_TA_Gradient_new(
  SV_GP_Postprocessing_TA_Gradient_new *SV,
  outC_GP_Postprocessing_TA_Gradient_new *outC);
extern void kcg_load_SV_GP_Postprocessing_TA_Gradient_new(
  outC_GP_Postprocessing_TA_Gradient_new *outC,
  SV_GP_Postprocessing_TA_Gradient_new *SV);



#endif /* _GP_Postprocessing_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Postprocessing_TA_Gradient_new.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

