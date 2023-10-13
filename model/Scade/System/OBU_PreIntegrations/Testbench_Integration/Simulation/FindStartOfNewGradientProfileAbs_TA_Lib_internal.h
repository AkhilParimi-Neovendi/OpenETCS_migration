/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _FindStartOfNewGradientProfileAbs_TA_Lib_internal_H_
#define _FindStartOfNewGradientProfileAbs_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* relevant_section/ */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal /* _L94=(TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP#1)/ */ Context_FindStartOfNewGradientProfileAbs_LOOP_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  GradientProfile_t_TrackAtlasTypes /* _L1/ */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  GradientProfile_t_TrackAtlasTypes /* _L93/ */ _L93;
  kcg_int64 /* _L94/ */ _L94;
  kcg_bool /* _L96/ */ _L96;
  _2_array /* _L98/ */ _L98;
  kcg_int64 /* _L99/ */ _L99;
  kcg_int64 /* _L100/ */ _L100;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L198/ */ _L198;
} outC_FindStartOfNewGradientProfileAbs_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindStartOfNewGradientProfileAbs/ */
extern void FindStartOfNewGradientProfileAbs_TA_Lib_internal(
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* New_Profile/ */
  GradientProfile_t_TrackAtlasTypes *New_Profile,
  outC_FindStartOfNewGradientProfileAbs_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FindStartOfNewGradientProfileAbs_reset_TA_Lib_internal(
  outC_FindStartOfNewGradientProfileAbs_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FindStartOfNewGradientProfileAbs_init_TA_Lib_internal(
  outC_FindStartOfNewGradientProfileAbs_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FindStartOfNewGradientProfileAbs_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindStartOfNewGradientProfileAbs_TA_Lib_internal.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

