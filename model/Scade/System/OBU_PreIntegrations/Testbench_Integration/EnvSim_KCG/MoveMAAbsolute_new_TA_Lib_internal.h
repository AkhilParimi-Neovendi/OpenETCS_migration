/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _MoveMAAbsolute_new_TA_Lib_internal_H_
#define _MoveMAAbsolute_new_TA_Lib_internal_H_

#include "kcg_types.h"
#include "Move_DP_or_OL_new_TA_Lib_internal.h"
#include "MoveMAAbsolute_Loop_new_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* ProfileOut/ */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveMAAbsolute_Loop_new_TA_Lib_internal /* _L4=(TA_Lib_internal::MoveMAAbsolute_Loop_new#1)/ */ Context_MoveMAAbsolute_Loop_new_1[10];
  outC_Move_DP_or_OL_new_TA_Lib_internal /* _L119=(TA_Lib_internal::Move_DP_or_OL_new#1)/ */ Context_Move_DP_or_OL_new_1;
  outC_Move_DP_or_OL_new_TA_Lib_internal /* _L106=(TA_Lib_internal::Move_DP_or_OL_new#2)/ */ Context_Move_DP_or_OL_new_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L37/ */ _L37;
  array_int32_10 /* _L40/ */ _L40;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L72/ */ _L72;
  MovementAuthority_t_TrackAtlasTypes /* _L103/ */ _L103;
  MovementAuthority_t_TrackAtlasTypes /* _L101/ */ _L101;
  DP_or_OL_t_TrackAtlasTypes /* _L106/ */ _L106;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L109/ */ _L109;
  DP_or_OL_t_TrackAtlasTypes /* _L114/ */ _L114;
  DP_or_OL_t_TrackAtlasTypes /* _L115/ */ _L115;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L120/ */ _L120;
  DP_or_OL_t_TrackAtlasTypes /* _L119/ */ _L119;
  MovementAuthority_t_TrackAtlasTypes /* _L121/ */ _L121;
  MovementAuthority_t_TrackAtlasTypes /* _L122/ */ _L122;
  kcg_bool /* _L123/ */ _L123;
  kcg_bool /* _L124/ */ _L124;
} outC_MoveMAAbsolute_new_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveMAAbsolute_new/ */
extern void MoveMAAbsolute_new_TA_Lib_internal(
  /* ProfileIn/ */
  MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MoveMAAbsolute_new_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MoveMAAbsolute_new_reset_TA_Lib_internal(
  outC_MoveMAAbsolute_new_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MoveMAAbsolute_new_init_TA_Lib_internal(
  outC_MoveMAAbsolute_new_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MoveMAAbsolute_new_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveMAAbsolute_new_TA_Lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

