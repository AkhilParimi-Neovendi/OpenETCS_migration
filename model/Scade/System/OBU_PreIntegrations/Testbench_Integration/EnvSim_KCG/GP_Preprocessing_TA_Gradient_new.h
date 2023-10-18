/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _GP_Preprocessing_TA_Gradient_new_H_
#define _GP_Preprocessing_TA_Gradient_new_H_

#include "kcg_types.h"
#include "GP_Convert_P21_to_DistanceProfile_TA_Gradient_new.h"
#include "MoveGPSectionsAbsolute_new_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  GradientProfile_t_TrackAtlasTypes /* GP/ */ GP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MoveGPSectionsAbsolute_new_TA_Lib_internal /* _L13=(TA_Lib_internal::MoveGPSectionsAbsolute_new#1)/ */ Context_MoveGPSectionsAbsolute_new_1;
  outC_GP_Convert_P21_to_DistanceProfile_TA_Gradient_new /* _L14=(TA_Gradient_new::GP_Convert_P21_to_DistanceProfile#1)/ */ Context_GP_Convert_P21_to_DistanceProfile_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_OBU_T_TM /* _L1/ */ _L1;
  GradientProfile_t_TrackAtlasTypes /* _L14/ */ _L14;
  GradientProfile_t_TrackAtlasTypes /* _L13/ */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L21/ */ _L21;
} outC_GP_Preprocessing_TA_Gradient_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Gradient_new::GP_Preprocessing/ */
extern void GP_Preprocessing_TA_Gradient_new(
  /* p21/ */
  P021_OBU_T_TM *p21,
  /* reset/ */
  kcg_bool reset,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_GP_Preprocessing_TA_Gradient_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GP_Preprocessing_reset_TA_Gradient_new(
  outC_GP_Preprocessing_TA_Gradient_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GP_Preprocessing_init_TA_Gradient_new(
  outC_GP_Preprocessing_TA_Gradient_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GP_Preprocessing_TA_Gradient_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Preprocessing_TA_Gradient_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

