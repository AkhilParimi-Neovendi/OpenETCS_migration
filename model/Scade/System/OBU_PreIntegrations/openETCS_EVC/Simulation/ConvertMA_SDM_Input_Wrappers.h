/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _ConvertMA_SDM_Input_Wrappers_H_
#define _ConvertMA_SDM_Input_Wrappers_H_

#include "kcg_types.h"
#include "SelectEndSection_SDM_Input_Wrappers.h"
#include "TransformV_intToV_real_SDM_Types_Pkg.h"
#include "TransformL_intToL_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MA_section_real_T_TargetManagement_types /* Ma_out/ */ Ma_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransformV_intToV_real_SDM_Types_Pkg /* _L20=(SDM_Types_Pkg::TransformV_intToV_real#1)/ */ Context_TransformV_intToV_real_1;
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L25=(SDM_Types_Pkg::TransformL_intToL_real#3)/ */ Context_TransformL_intToL_real_3;
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L19=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */ _1_Context_TransformL_intToL_real_1;
  outC_TransformV_intToV_real_SDM_Types_Pkg /* _L23=(SDM_Types_Pkg::TransformV_intToV_real#2)/ */ _2_Context_TransformV_intToV_real_2;
  outC_TransformL_intToL_real_SDM_Types_Pkg /* _L21=(SDM_Types_Pkg::TransformL_intToL_real#2)/ */ _3_Context_TransformL_intToL_real_2;
  outC_TransformV_intToV_real_SDM_Types_Pkg /* _L187=(SDM_Types_Pkg::TransformV_intToV_real#3)/ */ _4_Context_TransformV_intToV_real_3;
  outC_SelectEndSection_SDM_Input_Wrappers /* _L199=(SDM_Input_Wrappers::SelectEndSection#2)/ */ Context_SelectEndSection_2[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* _L19/ */ _L19;
  V_internal_real_Type_SDM_Types_Pkg /* _L20/ */ _L20;
  L_internal_real_Type_SDM_Types_Pkg /* _L21/ */ _L21;
  V_internal_real_Type_SDM_Types_Pkg /* _L23/ */ _L23;
  L_internal_real_Type_SDM_Types_Pkg /* _L25/ */ _L25;
  EOA_real_T_TargetManagement_types /* _L39/ */ _L39;
  MovementAuthority_t_TrackAtlasTypes /* _L89/ */ _L89;
  MA_section_real_T_TargetManagement_types /* _L114/ */ _L114;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L115/ */ _L115;
  kcg_bool /* _L116/ */ _L116;
  DP_or_OL_t_TrackAtlasTypes /* _L117/ */ _L117;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L118/ */ _L118;
  kcg_bool /* _L119/ */ _L119;
  DP_or_OL_t_TrackAtlasTypes /* _L120/ */ _L120;
  kcg_bool /* _L121/ */ _L121;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L125/ */ _L125;
  DP_or_OL_t_TrackAtlasTypes /* _L129/ */ _L129;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L131/ */ _L131;
  DP_or_OL_t_TrackAtlasTypes /* _L132/ */ _L132;
  kcg_bool /* _L133/ */ _L133;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L134/ */ _L134;
  MA_Level_t_TrackAtlasTypes /* _L186/ */ _L186;
  V_internal_real_Type_SDM_Types_Pkg /* _L187/ */ _L187;
  kcg_bool /* _L192/ */ _L192;
  MovementAuthoritySectionlist_t_TrackAtlasTypes /* _L191/ */ _L191;
  MovementAuthority_t_TrackAtlasTypes /* _L193/ */ _L193;
  kcg_int32 /* _L199/ */ _L199;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L200/ */ _L200;
  kcg_int32 /* _L201/ */ _L201;
  kcg_bool /* _L202/ */ _L202;
  kcg_bool /* _L204/ */ _L204;
  kcg_int32 /* _L205/ */ _L205;
} outC_ConvertMA_SDM_Input_Wrappers;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Input_Wrappers::ConvertMA/ */
extern void ConvertMA_SDM_Input_Wrappers(
  /* Ma_in/ */
  MovementAuthority_t_TrackAtlasTypes *Ma_in,
  outC_ConvertMA_SDM_Input_Wrappers *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertMA_reset_SDM_Input_Wrappers(
  outC_ConvertMA_SDM_Input_Wrappers *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertMA_init_SDM_Input_Wrappers(
  outC_ConvertMA_SDM_Input_Wrappers *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConvertMA_SDM_Input_Wrappers_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertMA_SDM_Input_Wrappers.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

