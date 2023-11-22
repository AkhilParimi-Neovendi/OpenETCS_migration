/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _MA_L23_Postprocessing_TA_MA_new_H_
#define _MA_L23_Postprocessing_TA_MA_new_H_

#include "kcg_types.h"
#include "MA_Normalize_MA_LRBG_TA_MA_new.h"
#include "Update_MA_TA_MA_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* MA_at_LRBG/ */ MA_at_LRBG;
  MovementAuthority_t_TrackAtlasTypes /* MA_absolute/ */ MA_absolute;
  kcg_bool /* MA_available/ */ MA_available;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MA_Normalize_MA_LRBG_TA_MA_new /* _L14=(TA_MA_new::MA_Normalize_MA_LRBG#1)/ */ Context_MA_Normalize_MA_LRBG_1;
  outC_Update_MA_TA_MA_new /* _L2=(TA_MA_new::Update_MA#1)/ */ Context_Update_MA_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  MovementAuthority_t_TrackAtlasTypes /* _L2/ */ _L2;
  MovementAuthority_t_TrackAtlasTypes /* _L8/ */ _L8;
  MovementAuthority_t_TrackAtlasTypes /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
} outC_MA_L23_Postprocessing_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::MA_L23_Postprocessing/ */
extern void MA_L23_Postprocessing_TA_MA_new(
  /* Profile_in/ */
  MovementAuthority_t_TrackAtlasTypes *Profile_in,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MA_L23_Postprocessing_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MA_L23_Postprocessing_reset_TA_MA_new(
  outC_MA_L23_Postprocessing_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MA_L23_Postprocessing_init_TA_MA_new(
  outC_MA_L23_Postprocessing_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MA_L23_Postprocessing_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_L23_Postprocessing_TA_MA_new.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

