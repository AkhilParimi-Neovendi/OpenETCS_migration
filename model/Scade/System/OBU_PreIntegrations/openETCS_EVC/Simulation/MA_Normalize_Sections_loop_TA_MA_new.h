/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _MA_Normalize_Sections_loop_TA_MA_new_H_
#define _MA_Normalize_Sections_loop_TA_MA_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* ProfileNormalized_LRBG/ */ ProfileNormalized_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L2/ */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  _2_MovementAuthoritySection_t_TrackAtlasTypes /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  _2_MovementAuthoritySection_t_TrackAtlasTypes /* _L7/ */ _L7;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L45/ */ _L45;
  kcg_int32 /* _L48/ */ _L48;
  kcg_int32 /* _L47/ */ _L47;
  _2_MovementAuthoritySection_t_TrackAtlasTypes /* _L49/ */ _L49;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L50/ */ _L50;
  kcg_int32 /* _L51/ */ _L51;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L52/ */ _L52;
} outC_MA_Normalize_Sections_loop_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::MA_Normalize_Sections_loop/ */
extern void MA_Normalize_Sections_loop_TA_MA_new(
  /* i/ */
  kcg_int32 i,
  /* ProfileIn/ */
  MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileIn,
  /* pos_BG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_MA_Normalize_Sections_loop_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MA_Normalize_Sections_loop_reset_TA_MA_new(
  outC_MA_Normalize_Sections_loop_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MA_Normalize_Sections_loop_init_TA_MA_new(
  outC_MA_Normalize_Sections_loop_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MA_Normalize_Sections_loop_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_Normalize_Sections_loop_TA_MA_new.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

