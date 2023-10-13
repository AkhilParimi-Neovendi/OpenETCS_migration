/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal_H_
#define _FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  kcg_int64 /* relevant_section/ */ relevant_section;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* @1/A_Output/ */ A_Output_Abs_1_int64;
  kcg_int64 /* @1/A_Input/ */ A_Input_Abs_1_int64;
  kcg_int64 /* @1/_L8/ */ _L8_Abs_1_int64;
  kcg_int64 /* @1/_L5/ */ _L5_Abs_1_int64;
  kcg_int64 /* @1/_L3/ */ _L3_Abs_1_int64;
  kcg_int64 /* @1/_L2/ */ _L2_Abs_1_int64;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_int64;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  StaticSpeedSection_t_TrackAtlasTypes /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
  kcg_int64 /* _L8/ */ _L8;
  kcg_int64 /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L26/ */ _L26;
  kcg_int64 /* _L25/ */ _L25;
  kcg_int64 /* _L24/ */ _L24;
  kcg_int64 /* _L23/ */ _L23;
  kcg_int64 /* _L22/ */ _L22;
  kcg_int64 /* _L21/ */ _L21;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L27/ */ _L27;
} outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP/ */
extern void FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal(
  /* i/ */
  kcg_int64 i,
  /* Acc/ */
  kcg_int64 Acc,
  /* distance_in/ */
  L_internal_Type_Obu_BasicTypes_Pkg distance_in,
  /* Profile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FindStartOfNewSpeedProfileAbs_LOOP_reset_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FindStartOfNewSpeedProfileAbs_LOOP_init_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP/
  @1: (math::Abs#1)
*/

#endif /* _FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

