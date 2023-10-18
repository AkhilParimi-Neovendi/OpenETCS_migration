/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Move_DP_or_OL_new_TA_Lib_internal_H_
#define _Move_DP_or_OL_new_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DP_or_OL_t_TrackAtlasTypes /* DP_or_OL_out/ */ DP_or_OL_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DP_or_OL_t_TrackAtlasTypes /* _L2/ */ _L2;
  DP_or_OL_t_TrackAtlasTypes /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L130/ */ _L130;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L142/ */ _L142;
} outC_Move_DP_or_OL_new_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Move_DP_or_OL_new/ */
extern void Move_DP_or_OL_new_TA_Lib_internal(
  /* DP_or_OL_in/ */
  DP_or_OL_t_TrackAtlasTypes *DP_or_OL_in,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_Move_DP_or_OL_new_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Move_DP_or_OL_new_reset_TA_Lib_internal(
  outC_Move_DP_or_OL_new_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Move_DP_or_OL_new_init_TA_Lib_internal(
  outC_Move_DP_or_OL_new_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Move_DP_or_OL_new_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Move_DP_or_OL_new_TA_Lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

