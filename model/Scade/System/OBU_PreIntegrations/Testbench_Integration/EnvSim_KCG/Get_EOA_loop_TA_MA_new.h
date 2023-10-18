/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Get_EOA_loop_TA_MA_new_H_
#define _Get_EOA_loop_TA_MA_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  L_internal_Type_Obu_BasicTypes_Pkg /* currentEOA/ */ currentEOA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L3/ */ _L3;
  MovementAuthoritySection_t_TrackAtlasTypes /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L37/ */ _L37;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L41/ */ _L41;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L42/ */ _L42;
} outC_Get_EOA_loop_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::Get_EOA_loop/ */
extern void Get_EOA_loop_TA_MA_new(
  /* i/ */
  kcg_int64 i,
  /* acc/ */
  L_internal_Type_Obu_BasicTypes_Pkg acc,
  /* MA_sections/ */
  MovementAuthoritySectionlist_t_TrackAtlasTypes *MA_sections,
  outC_Get_EOA_loop_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Get_EOA_loop_reset_TA_MA_new(outC_Get_EOA_loop_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Get_EOA_loop_init_TA_MA_new(outC_Get_EOA_loop_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Get_EOA_loop_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Get_EOA_loop_TA_MA_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

