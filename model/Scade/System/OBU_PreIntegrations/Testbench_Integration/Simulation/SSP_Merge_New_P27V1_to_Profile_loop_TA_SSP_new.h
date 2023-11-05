/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new_H_
#define _SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* SSP/ */ SSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L11/ */ _L11;
  StaticSpeedSection_t_TrackAtlasTypes /* _L15/ */ _L15;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L19/ */ _L19;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L20/ */ _L20;
} outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::SSP_Merge_New_P27V1_to_Profile_loop/ */
extern void SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new(
  /* i/ */
  kcg_int32 i,
  /* SP/ */
  StaticSpeedProfile_t_TrackAtlasTypes *SP,
  /* First_Section_To_Replace/ */
  kcg_int32 First_Section_To_Replace,
  /* new_SP_received/ */
  StaticSpeedProfile_t_TrackAtlasTypes *new_SP_received,
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Merge_New_P27V1_to_Profile_loop_reset_TA_SSP_new(
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Merge_New_P27V1_to_Profile_loop_init_TA_SSP_new(
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

