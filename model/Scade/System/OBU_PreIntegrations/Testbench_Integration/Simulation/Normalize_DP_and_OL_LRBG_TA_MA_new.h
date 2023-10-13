/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Normalize_DP_and_OL_LRBG_TA_MA_new_H_
#define _Normalize_DP_and_OL_LRBG_TA_MA_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DP_or_OL_t_TrackAtlasTypes /* dangerpoint/ */ dangerpoint;
  DP_or_OL_t_TrackAtlasTypes /* overlap/ */ overlap;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MovementAuthority_t_TrackAtlasTypes /* _L8/ */ _L8;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L12/ */ _L12;
  DP_or_OL_t_TrackAtlasTypes /* _L61/ */ _L61;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L64/ */ _L64;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L63/ */ _L63;
  kcg_bool /* _L62/ */ _L62;
  kcg_int64 /* _L65/ */ _L65;
  DP_or_OL_t_TrackAtlasTypes /* _L66/ */ _L66;
  MovementAuthority_t_TrackAtlasTypes /* _L74/ */ _L74;
  DP_or_OL_t_TrackAtlasTypes /* _L73/ */ _L73;
  kcg_int64 /* _L72/ */ _L72;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L69/ */ _L69;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L70/ */ _L70;
  kcg_bool /* _L71/ */ _L71;
  DP_or_OL_t_TrackAtlasTypes /* _L68/ */ _L68;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L67/ */ _L67;
} outC_Normalize_DP_and_OL_LRBG_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::Normalize_DP_and_OL_LRBG/ */
extern void Normalize_DP_and_OL_LRBG_TA_MA_new(
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* MA_in/ */
  MovementAuthority_t_TrackAtlasTypes *MA_in,
  outC_Normalize_DP_and_OL_LRBG_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Normalize_DP_and_OL_LRBG_reset_TA_MA_new(
  outC_Normalize_DP_and_OL_LRBG_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Normalize_DP_and_OL_LRBG_init_TA_MA_new(
  outC_Normalize_DP_and_OL_LRBG_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Normalize_DP_and_OL_LRBG_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Normalize_DP_and_OL_LRBG_TA_MA_new.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

