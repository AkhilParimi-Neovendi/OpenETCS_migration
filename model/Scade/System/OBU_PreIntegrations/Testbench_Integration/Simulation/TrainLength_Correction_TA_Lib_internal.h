/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _TrainLength_Correction_TA_Lib_internal_H_
#define _TrainLength_Correction_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* corrected_distance/ */ corrected_distance;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* _L1/ */ _L1;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  StaticSpeedSection_t_TrackAtlasTypes /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
} outC_TrainLength_Correction_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::TrainLength_Correction/ */
extern void TrainLength_Correction_TA_Lib_internal(
  /* Static_Speed_Profile/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Static_Speed_Profile,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* i/ */
  kcg_int64 i,
  /* v_static/ */
  V_internal_Type_Obu_BasicTypes_Pkg v_static,
  /* distance/ */
  L_internal_Type_Obu_BasicTypes_Pkg distance,
  outC_TrainLength_Correction_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrainLength_Correction_reset_TA_Lib_internal(
  outC_TrainLength_Correction_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrainLength_Correction_init_TA_Lib_internal(
  outC_TrainLength_Correction_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrainLength_Correction_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainLength_Correction_TA_Lib_internal.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

