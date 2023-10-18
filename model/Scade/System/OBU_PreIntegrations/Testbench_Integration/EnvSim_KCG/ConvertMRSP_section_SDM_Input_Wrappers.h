/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _ConvertMRSP_section_SDM_Input_Wrappers_H_
#define _ConvertMRSP_section_SDM_Input_Wrappers_H_

#include "kcg_types.h"
#include "TransformV_intToV_real_SDM_Types_Pkg.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MRSP_internal_section_T_TargetManagement_types /* MRSP_section_int/ */ MRSP_section_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransformV_intToV_real_SDM_Types_Pkg /* _L8=(SDM_Types_Pkg::TransformV_intToV_real#6)/ */ Context_TransformV_intToV_real_6;
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L7=(SDM_Types_Pkg::TransformL_intToL_real#12)/ */ Context_TransformL_intToL_real_12;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  MRSP_internal_section_T_TargetManagement_types /* _L6/ */ _L6;
  L_internal_real_Type_SDM_Types_Pkg /* _L7/ */ _L7;
  V_internal_real_Type_SDM_Types_Pkg /* _L8/ */ _L8;
  MRSP_section_t_TrackAtlasTypes /* _L9/ */ _L9;
} outC_ConvertMRSP_section_SDM_Input_Wrappers;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Input_Wrappers::ConvertMRSP_section/ */
extern void ConvertMRSP_section_SDM_Input_Wrappers(
  /* MRSP_section_ext/ */
  MRSP_section_t_TrackAtlasTypes *MRSP_section_ext,
  outC_ConvertMRSP_section_SDM_Input_Wrappers *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertMRSP_section_reset_SDM_Input_Wrappers(
  outC_ConvertMRSP_section_SDM_Input_Wrappers *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertMRSP_section_init_SDM_Input_Wrappers(
  outC_ConvertMRSP_section_SDM_Input_Wrappers *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConvertMRSP_section_SDM_Input_Wrappers_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertMRSP_section_SDM_Input_Wrappers.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

