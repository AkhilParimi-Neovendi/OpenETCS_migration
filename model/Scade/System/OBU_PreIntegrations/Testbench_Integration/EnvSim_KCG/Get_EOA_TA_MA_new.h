/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Get_EOA_TA_MA_new_H_
#define _Get_EOA_TA_MA_new_H_

#include "kcg_types.h"
#include "Get_EOA_loop_TA_MA_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* currentEOA/ */ currentEOA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Get_EOA_loop_TA_MA_new /* _L2=(TA_MA_new::Get_EOA_loop#1)/ */ Context_Get_EOA_loop_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  MovementAuthority_t_TrackAtlasTypes /* _L6/ */ _L6;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L37/ */ _L37;
  _80_array /* _L38/ */ _L38;
} outC_Get_EOA_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::Get_EOA/ */
extern void Get_EOA_TA_MA_new(
  /* MA_absolute/ */
  MovementAuthority_t_TrackAtlasTypes *MA_absolute,
  outC_Get_EOA_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Get_EOA_reset_TA_MA_new(outC_Get_EOA_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Get_EOA_init_TA_MA_new(outC_Get_EOA_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Get_EOA_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Get_EOA_TA_MA_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

