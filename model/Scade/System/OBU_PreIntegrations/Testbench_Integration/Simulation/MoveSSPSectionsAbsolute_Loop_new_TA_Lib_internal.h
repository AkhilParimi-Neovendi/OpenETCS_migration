/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal_H_
#define _MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* ProfileOut/ */ ProfileOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L2/ */ _L2;
  StaticSpeedSection_t_TrackAtlasTypes /* _L6/ */ _L6;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L7/ */ _L7;
  StaticSpeedSection_t_TrackAtlasTypes /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L130/ */ _L130;
  kcg_bool /* _L143/ */ _L143;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L254/ */ _L254;
  kcg_int64 /* _L255/ */ _L255;
  StaticSpeedSection_t_TrackAtlasTypes /* _L256/ */ _L256;
  kcg_int64 /* _L257/ */ _L257;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L258/ */ _L258;
} outC_MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new/ */
extern void MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal(
  /* i/ */
  kcg_int64 i,
  /* ProfileIn/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MoveSSPSectionsAbsolute_Loop_new_reset_TA_Lib_internal(
  outC_MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MoveSSPSectionsAbsolute_Loop_new_init_TA_Lib_internal(
  outC_MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

