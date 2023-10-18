/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _SSP_Normalize_Profile_loop_TA_SSP_new_H_
#define _SSP_Normalize_Profile_loop_TA_SSP_new_H_

#include "kcg_types.h"
#include "TrainLength_Correction_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* ProfileNormalized_LRBG/ */ ProfileNormalized_LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrainLength_Correction_TA_Lib_internal /* _L45=(TA_Lib_internal::TrainLength_Correction#1)/ */ Context_TrainLength_Correction_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L2/ */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  StaticSpeedSection_t_TrackAtlasTypes /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  StaticSpeedSection_t_TrackAtlasTypes /* _L7/ */ _L7;
  kcg_int64 /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L38/ */ _L38;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L39/ */ _L39;
  kcg_int64 /* _L40/ */ _L40;
  kcg_bool /* _L44/ */ _L44;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L45/ */ _L45;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L46/ */ _L46;
  kcg_int64 /* _L47/ */ _L47;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L48/ */ _L48;
  kcg_bool /* _L49/ */ _L49;
  StaticSpeedSection_t_TrackAtlasTypes /* _L50/ */ _L50;
} outC_SSP_Normalize_Profile_loop_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::SSP_Normalize_Profile_loop/ */
extern void SSP_Normalize_Profile_loop_TA_SSP_new(
  /* i/ */
  kcg_int64 i,
  /* ProfileIn/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_BG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_SSP_Normalize_Profile_loop_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Normalize_Profile_loop_reset_TA_SSP_new(
  outC_SSP_Normalize_Profile_loop_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Normalize_Profile_loop_init_TA_SSP_new(
  outC_SSP_Normalize_Profile_loop_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SSP_Normalize_Profile_loop_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Normalize_Profile_loop_TA_SSP_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

