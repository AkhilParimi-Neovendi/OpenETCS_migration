/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _SSP_Position_SSP_with_BGs_TA_SSP_new_H_
#define _SSP_Position_SSP_with_BGs_TA_SSP_new_H_

#include "kcg_types.h"
#include "SSP_Correct_StartSection_TA_SSP_new.h"
#include "SSP_Truncate_at_BG_TA_SSP_new.h"
#include "SSP_Normalize_Profile_TA_SSP_new.h"
#include "SSP_Merge_New_P27V1_to_Profile_TA_SSP_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* ProfileOut/ */ ProfileOut;
  kcg_bool /* available/ */ available;
  StaticSpeedProfile_t_TrackAtlasTypes /* ProfileLoopOut/ */ ProfileLoopOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Correct_StartSection_TA_SSP_new /* _L29=(TA_SSP_new::SSP_Correct_StartSection#1)/ */ Context_SSP_Correct_StartSection_1;
  outC_SSP_Truncate_at_BG_TA_SSP_new /* _L22=(TA_SSP_new::SSP_Truncate_at_BG#1)/ */ Context_SSP_Truncate_at_BG_1;
  outC_SSP_Normalize_Profile_TA_SSP_new /* _L16=(TA_SSP_new::SSP_Normalize_Profile#1)/ */ Context_SSP_Normalize_Profile_1;
  outC_SSP_Correct_StartSection_TA_SSP_new /* _L30=(TA_SSP_new::SSP_Correct_StartSection#2)/ */ Context_SSP_Correct_StartSection_2;
  outC_SSP_Truncate_at_BG_TA_SSP_new /* _L23=(TA_SSP_new::SSP_Truncate_at_BG#2)/ */ Context_SSP_Truncate_at_BG_2;
  outC_SSP_Normalize_Profile_TA_SSP_new /* _L18=(TA_SSP_new::SSP_Normalize_Profile#2)/ */ Context_SSP_Normalize_Profile_2;
  outC_SSP_Merge_New_P27V1_to_Profile_TA_SSP_new /* _L6=(TA_SSP_new::SSP_Merge_New_P27V1_to_Profile#1)/ */ Context_SSP_Merge_New_P27V1_to_Profile_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* _L4/ */ _L4;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L5/ */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L6/ */ _L6;
  kcg_bool /* _L15/ */ _L15;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L16/ */ _L16;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L18/ */ _L18;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L22/ */ _L22;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L23/ */ _L23;
  kcg_bool /* _L28/ */ _L28;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L29/ */ _L29;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L30/ */ _L30;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L33/ */ _L33;
} outC_SSP_Position_SSP_with_BGs_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::SSP_Position_SSP_with_BGs/ */
extern void SSP_Position_SSP_with_BGs_TA_SSP_new(
  /* ProfileIn/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* pos_prvLRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* there_is_prvLRBG/ */
  kcg_bool there_is_prvLRBG,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* LastProfile/ */
  StaticSpeedProfile_t_TrackAtlasTypes *LastProfile,
  outC_SSP_Position_SSP_with_BGs_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Position_SSP_with_BGs_reset_TA_SSP_new(
  outC_SSP_Position_SSP_with_BGs_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Position_SSP_with_BGs_init_TA_SSP_new(
  outC_SSP_Position_SSP_with_BGs_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SSP_Position_SSP_with_BGs_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Position_SSP_with_BGs_TA_SSP_new.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

