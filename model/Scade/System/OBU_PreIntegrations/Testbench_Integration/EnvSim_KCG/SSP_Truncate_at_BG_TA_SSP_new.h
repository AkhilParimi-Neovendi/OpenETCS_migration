/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _SSP_Truncate_at_BG_TA_SSP_new_H_
#define _SSP_Truncate_at_BG_TA_SSP_new_H_

#include "kcg_types.h"
#include "SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new.h"
#include "SSP_Truncate_at_BG_loop_TA_SSP_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* Profile_out/ */ Profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SSP_Truncate_at_BG_loop_TA_SSP_new /* _L10=(TA_SSP_new::SSP_Truncate_at_BG_loop#1)/ */ Context_SSP_Truncate_at_BG_loop_1[50];
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new /* _L4=(TA_SSP_new::SSP_Find_First_Speed_Section_After_BG_loop#1)/ */ Context_SSP_Find_First_Speed_Section_After_BG_loop_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* _L1/ */ _L1;
  kcg_int64 /* _L8/ */ _L8;
  _4_array /* _L6/ */ _L6;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L12/ */ _L12;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L17/ */ _L17;
} outC_SSP_Truncate_at_BG_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::SSP_Truncate_at_BG/ */
extern void SSP_Truncate_at_BG_TA_SSP_new(
  /* Profile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_SSP_Truncate_at_BG_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Truncate_at_BG_reset_TA_SSP_new(
  outC_SSP_Truncate_at_BG_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Truncate_at_BG_init_TA_SSP_new(
  outC_SSP_Truncate_at_BG_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SSP_Truncate_at_BG_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Truncate_at_BG_TA_SSP_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

