/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _SSP_Preprocessing_TA_SSP_new_H_
#define _SSP_Preprocessing_TA_SSP_new_H_

#include "kcg_types.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new.h"
#include "MoveSSPSectionsAbsolute_new_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  StaticSpeedProfile_t_TrackAtlasTypes /* SSP/ */ SSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveSSPSectionsAbsolute_new_TA_Lib_internal /* _L13=(TA_Lib_internal::MoveSSPSectionsAbsolute_new#1)/ */ Context_MoveSSPSectionsAbsolute_new_1;
  outC_SSP_Convert_P27V1_to_DistanceProfile_TA_SSP_new /* _L14=(TA_SSP_new::SSP_Convert_P27V1_to_DistanceProfile#1)/ */ Context_SSP_Convert_P27V1_to_DistanceProfile_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_T_TM_baseline2 /* _L1/ */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L14/ */ _L14;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L13/ */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L21/ */ _L21;
} outC_SSP_Preprocessing_TA_SSP_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP_new::SSP_Preprocessing/ */
extern void SSP_Preprocessing_TA_SSP_new(
  /* p27v1/ */
  P027V1_OBU_T_TM_baseline2 *p27v1,
  /* reset/ */
  kcg_bool reset,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_SSP_Preprocessing_TA_SSP_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SSP_Preprocessing_reset_TA_SSP_new(
  outC_SSP_Preprocessing_TA_SSP_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SSP_Preprocessing_init_TA_SSP_new(
  outC_SSP_Preprocessing_TA_SSP_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SSP_Preprocessing_TA_SSP_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Preprocessing_TA_SSP_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

