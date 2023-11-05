/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2_H_
#define _C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "CAST_Int_to_V_STATIC_TM_conversions.h"
#include "CAST_Int_to_Q_FRONT_TM_conversions.h"
#include "CAST_Int_to_D_STATIC_TM_conversions.h"
#include "C_P027V1_us_array_qdiff_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P027V1_section_enum_T_TM_baseline2 /* P027V1_section_onbard/ */ P027V1_section_onbard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_D_STATIC_TM_conversions /* _L30=(TM_conversions::CAST_Int_to_D_STATIC#1)/ */ Context_CAST_Int_to_D_STATIC_1;
  outC_CAST_Int_to_Q_FRONT_TM_conversions /* _L31=(TM_conversions::CAST_Int_to_Q_FRONT#1)/ */ Context_CAST_Int_to_Q_FRONT_1;
  outC_CAST_Int_to_V_STATIC_TM_conversions /* _L32=(TM_conversions::CAST_Int_to_V_STATIC#1)/ */ Context_CAST_Int_to_V_STATIC_1;
  outC_C_P027V1_us_array_qdiff_TM_lib_internal /* @1/_L7=(TM_lib_internal::C_P027V1_us_array_qdiff#1)/ */ Context_C_P027V1_us_array_qdiff_1_C_P027V1_unflatten_sections_qdiff_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 /* @1/sections/ */ sections_C_P027V1_unflatten_sections_qdiff_1;
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* @1/flat/ */ flat_C_P027V1_unflatten_sections_qdiff_1;
  kcg_int32 /* @1/n_iter/ */ n_iter_C_P027V1_unflatten_sections_qdiff_1;
  kcg_bool /* @1/n_iter_ok/ */ n_iter_ok_C_P027V1_unflatten_sections_qdiff_1;
  kcg_bool /* @1/_L11/ */ _L11_C_P027V1_unflatten_sections_qdiff_1;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 /* @1/_L9/ */ _L9_C_P027V1_unflatten_sections_qdiff_1;
  kcg_int32 /* @1/_L7/ */ _L7_C_P027V1_unflatten_sections_qdiff_1;
  array_int32_64_32 /* @1/_L6/ */ _L6_C_P027V1_unflatten_sections_qdiff_1;
  array_int32_32 /* @1/_L5/ */ _L5_C_P027V1_unflatten_sections_qdiff_1;
  kcg_int32 /* @1/_L3/ */ _L3_C_P027V1_unflatten_sections_qdiff_1;
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* @1/_L1/ */ _L1_C_P027V1_unflatten_sections_qdiff_1;
  N_ITER /* @2/n_iter/ */ n_iter_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/n_iter_int/ */ n_iter_int_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/_L9/ */ _L9_CAST_Int_to_N_ITER_1;
  kcg_bool /* @2/_L10/ */ _L10_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/_L11/ */ _L11_CAST_Int_to_N_ITER_1;
  kcg_bool /* @2/_L12/ */ _L12_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/_L1/ */ _L1_CAST_Int_to_N_ITER_1;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  P027V1_section_enum_T_TM_baseline2 /* _L10/ */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* _L9/ */ _L9;
  array_int32_3 /* _L6/ */ _L6;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 /* _L5/ */ _L5;
  MetadataElement_T_Common_Types_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L26/ */ _L26;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  array_int32_64 /* _L29/ */ _L29;
  V_STATIC /* _L32/ */ _L32;
  Q_FRONT /* _L31/ */ _L31;
  D_STATIC /* _L30/ */ _L30;
  N_ITER /* _L33/ */ _L33;
} outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/ */
extern void C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P027V1_compr_onboard_sections_level2_reset_TM_conversions_baseline2(
  outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P027V1_compr_onboard_sections_level2_init_TM_conversions_baseline2(
  outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2/
  @1: (TM_lib_internal::C_P027V1_unflatten_sections_qdiff#1)
  @2: (TM_conversions::CAST_Int_to_N_ITER#1)
*/

#endif /* _C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

