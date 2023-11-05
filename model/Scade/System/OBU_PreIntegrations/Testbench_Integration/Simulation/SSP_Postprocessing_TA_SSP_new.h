/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _SSP_Postprocessing_TA_SSP_new_H_
#define _SSP_Postprocessing_TA_SSP_new_H_

#include "kcg_types.h"
#include "SSP_Position_SSP_with_BGs_TA_SSP_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* available/ */ available;
  StaticSpeedProfile_t_TrackAtlasTypes /* SSP/ */ SSP;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L4/ */ _L4;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Position_SSP_with_BGs_TA_SSP_new /* _L2=(TA_SSP_new::SSP_Position_SSP_with_BGs#1)/ */ Context_SSP_Position_SSP_with_BGs_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L1/ */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
} outC_SSP_Postprocessing_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::SSP_Postprocessing/ */
extern void SSP_Postprocessing_TA_SSP_new(
  /* Profile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* pos_prvLRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* there_is_prvLRBG/ */
  kcg_bool there_is_prvLRBG,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_SSP_Postprocessing_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Postprocessing_reset_TA_SSP_new(
  outC_SSP_Postprocessing_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Postprocessing_init_TA_SSP_new(
  outC_SSP_Postprocessing_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* _L4/ */ Context__L4;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_SSP_Postprocessing_TA_SSP_new;

extern void kcg_save_SV_SSP_Postprocessing_TA_SSP_new(
  SV_SSP_Postprocessing_TA_SSP_new *SV,
  outC_SSP_Postprocessing_TA_SSP_new *outC);
extern void kcg_load_SV_SSP_Postprocessing_TA_SSP_new(
  outC_SSP_Postprocessing_TA_SSP_new *outC,
  SV_SSP_Postprocessing_TA_SSP_new *SV);



#endif /* _SSP_Postprocessing_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Postprocessing_TA_SSP_new.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

