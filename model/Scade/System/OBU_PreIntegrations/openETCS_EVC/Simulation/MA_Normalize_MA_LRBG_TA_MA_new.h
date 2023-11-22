/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _MA_Normalize_MA_LRBG_TA_MA_new_H_
#define _MA_Normalize_MA_LRBG_TA_MA_new_H_

#include "kcg_types.h"
#include "Normalize_DP_and_OL_LRBG_TA_MA_new.h"
#include "MA_Normalize_Sections_loop_TA_MA_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* ProfileNormalized_LRBG/ */ ProfileNormalized_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MA_Normalize_Sections_loop_TA_MA_new /* _L3=(TA_MA_new::MA_Normalize_Sections_loop#1)/ */ Context_MA_Normalize_Sections_loop_1[50];
  outC_Normalize_DP_and_OL_LRBG_TA_MA_new /* _L35=(TA_MA_new::Normalize_DP_and_OL_LRBG#1)/ */ Context_Normalize_DP_and_OL_LRBG_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MovementAuthority_t_TrackAtlasTypes /* _L1/ */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L3/ */ _L3;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L4/ */ _L4;
  DP_or_OL_t_TrackAtlasTypes /* _L36/ */ _L36;
  DP_or_OL_t_TrackAtlasTypes /* _L35/ */ _L35;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L37/ */ _L37;
  MovementAuthority_t_TrackAtlasTypes /* _L68/ */ _L68;
  MovementAuthority_t_TrackAtlasTypes /* _L69/ */ _L69;
  MovementAuthority_t_TrackAtlasTypes /* _L70/ */ _L70;
  MovementAuthority_t_TrackAtlasTypes /* _L72/ */ _L72;
} outC_MA_Normalize_MA_LRBG_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::MA_Normalize_MA_LRBG/ */
extern void MA_Normalize_MA_LRBG_TA_MA_new(
  /* ProfileIn/ */
  MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  /* pos_BG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_MA_Normalize_MA_LRBG_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MA_Normalize_MA_LRBG_reset_TA_MA_new(
  outC_MA_Normalize_MA_LRBG_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MA_Normalize_MA_LRBG_init_TA_MA_new(
  outC_MA_Normalize_MA_LRBG_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MA_Normalize_MA_LRBG_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_Normalize_MA_LRBG_TA_MA_new.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

