/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _SelectEndSection_SDM_Input_Wrappers_H_
#define _SelectEndSection_SDM_Input_Wrappers_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* go_on/ */ go_on;
  L_internal_Type_Obu_BasicTypes_Pkg /* eoa/ */ eoa;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  _2_MovementAuthoritySection_t_TrackAtlasTypes /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
} outC_SelectEndSection_SDM_Input_Wrappers;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Input_Wrappers::SelectEndSection/ */
extern void SelectEndSection_SDM_Input_Wrappers(
  /* I/ */
  L_internal_Type_Obu_BasicTypes_Pkg I,
  /* section/ */
  _2_MovementAuthoritySection_t_TrackAtlasTypes *section,
  outC_SelectEndSection_SDM_Input_Wrappers *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SelectEndSection_reset_SDM_Input_Wrappers(
  outC_SelectEndSection_SDM_Input_Wrappers *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SelectEndSection_init_SDM_Input_Wrappers(
  outC_SelectEndSection_SDM_Input_Wrappers *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SelectEndSection_SDM_Input_Wrappers_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SelectEndSection_SDM_Input_Wrappers.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

