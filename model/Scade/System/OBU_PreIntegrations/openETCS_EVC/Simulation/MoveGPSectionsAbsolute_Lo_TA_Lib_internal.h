/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _MoveGPSectionsAbsolute_Lo_TA_Lib_internal_H_
#define _MoveGPSectionsAbsolute_Lo_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* ProfileOut/ */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  GradientProfile_t_TrackAtlasTypes /* _L2/ */ _L2;
  Gradient_section_t_TrackAtlasTypes /* _L6/ */ _L6;
  GradientProfile_t_TrackAtlasTypes /* _L7/ */ _L7;
  Gradient_section_t_TrackAtlasTypes /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L130/ */ _L130;
  kcg_bool /* _L143/ */ _L143;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L254/ */ _L254;
  kcg_int32 /* _L255/ */ _L255;
  Gradient_section_t_TrackAtlasTypes /* _L256/ */ _L256;
  kcg_int32 /* _L257/ */ _L257;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L259/ */ _L259;
} outC_MoveGPSectionsAbsolute_Lo_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveGPSectionsAbsolute_Loop_new/ */
extern void MoveGPSectionsAbsolute_Lo_TA_Lib_internal(
  /* i/ */
  kcg_int32 i,
  /* ProfileIn/ */
  GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MoveGPSectionsAbsolute_Lo_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MoveGPSectionsAbsolute_Lo_reset_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_Lo_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MoveGPSectionsAbsolute_Lo_init_TA_Lib_internal(
  outC_MoveGPSectionsAbsolute_Lo_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MoveGPSectionsAbsolute_Lo_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveGPSectionsAbsolute_Lo_TA_Lib_internal.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

