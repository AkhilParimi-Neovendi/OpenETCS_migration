/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _FindStartOfNewSpeedProfileAbs_TA_Lib_internal_H_
#define _FindStartOfNewSpeedProfileAbs_TA_Lib_internal_H_

#include "kcg_types.h"
#include "FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* relevant_section/ */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal /* _L94=(TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP#1)/ */ Context_FindStartOfNewSpeedProfileAbs_LOOP_1[50];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* _L1/ */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L93/ */ _L93;
  kcg_int32 /* _L94/ */ _L94;
  kcg_bool /* _L96/ */ _L96;
  _4_array /* _L98/ */ _L98;
  kcg_int32 /* _L99/ */ _L99;
  kcg_int32 /* _L100/ */ _L100;
  M_TrainTrack_compressed_packets_T_TM_radio_messages /* _L198/ */ _L198;
} outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs/ */
extern void FindStartOfNewSpeedProfileAbs_TA_Lib_internal(
  /* Profile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* New_Profile/ */
  StaticSpeedProfile_t_TrackAtlasTypes *New_Profile,
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FindStartOfNewSpeedProfileAbs_reset_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FindStartOfNewSpeedProfileAbs_init_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfileAbs_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FindStartOfNewSpeedProfileAbs_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindStartOfNewSpeedProfileAbs_TA_Lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

