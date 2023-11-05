/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _ConvertGradient_section_SDM_Input_Wrappers_H_
#define _ConvertGradient_section_SDM_Input_Wrappers_H_

#include "kcg_types.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Gradient_section_real_t_SDM_GradientAcceleration_types /* Gradient_section_int/ */ Gradient_section_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L7=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */ Context_TransformL_intToL_real_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  G_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  Gradient_section_real_t_SDM_GradientAcceleration_types /* _L6/ */ _L6;
  L_internal_real_Type_SDM_Types_Pkg /* _L7/ */ _L7;
  Gradient_section_t_TrackAtlasTypes /* _L9/ */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L10/ */ _L10;
  kcg_float32 /* _L11/ */ _L11;
} outC_ConvertGradient_section_SDM_Input_Wrappers;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Input_Wrappers::ConvertGradient_section/ */
extern void ConvertGradient_section_SDM_Input_Wrappers(
  /* Gradient_section_ext/ */
  Gradient_section_t_TrackAtlasTypes *Gradient_section_ext,
  outC_ConvertGradient_section_SDM_Input_Wrappers *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertGradient_section_reset_SDM_Input_Wrappers(
  outC_ConvertGradient_section_SDM_Input_Wrappers *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertGradient_section_init_SDM_Input_Wrappers(
  outC_ConvertGradient_section_SDM_Input_Wrappers *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConvertGradient_section_SDM_Input_Wrappers_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertGradient_section_SDM_Input_Wrappers.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

