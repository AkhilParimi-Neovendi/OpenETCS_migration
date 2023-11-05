/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _MA_L23_Preprocessing_TA_MA_new_H_
#define _MA_L23_Preprocessing_TA_MA_new_H_

#include "kcg_types.h"
#include "MA_Convert_P15_to_DistanceProfile_TA_MA_new.h"
#include "MoveMAAbsolute_new_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* MA/ */ MA;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveMAAbsolute_new_TA_Lib_internal /* _L13=(TA_Lib_internal::MoveMAAbsolute_new#1)/ */ Context_MoveMAAbsolute_new_1;
  outC_MA_Convert_P15_to_DistanceProfile_TA_MA_new /* _L14=(TA_MA_new::MA_Convert_P15_to_DistanceProfile#1)/ */ Context_MA_Convert_P15_to_DistanceProfile_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_OBU_T_TM /* _L1/ */ _L1;
  MovementAuthority_t_TrackAtlasTypes /* _L14/ */ _L14;
  MovementAuthority_t_TrackAtlasTypes /* _L13/ */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L21/ */ _L21;
  P003V1_OBU_T_TM_baseline2 /* _L22/ */ _L22;
} outC_MA_L23_Preprocessing_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::MA_L23_Preprocessing/ */
extern void MA_L23_Preprocessing_TA_MA_new(
  /* p15/ */
  P015_OBU_T_TM *p15,
  /* reset/ */
  kcg_bool reset,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* NV_in/ */
  P003V1_OBU_T_TM_baseline2 *NV_in,
  outC_MA_L23_Preprocessing_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MA_L23_Preprocessing_reset_TA_MA_new(
  outC_MA_L23_Preprocessing_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MA_L23_Preprocessing_init_TA_MA_new(
  outC_MA_L23_Preprocessing_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MA_L23_Preprocessing_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_L23_Preprocessing_TA_MA_new.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

