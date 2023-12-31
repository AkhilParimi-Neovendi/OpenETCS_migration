/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new_H_
#define _SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  kcg_int32 /* Pointer/ */ Pointer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L7/ */ _L7;
  StaticSpeedSection_t_TrackAtlasTypes /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
} outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::SSP_Find_First_Speed_Section_After_BG_loop/ */
extern void SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new(
  /* i/ */
  kcg_int32 i,
  /* Acc/ */
  kcg_int32 Acc,
  /* Profile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Find_First_Speed_Section_After_BG_loop_reset_TA_SSP_new(
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Find_First_Speed_Section_After_BG_loop_init_TA_SSP_new(
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

