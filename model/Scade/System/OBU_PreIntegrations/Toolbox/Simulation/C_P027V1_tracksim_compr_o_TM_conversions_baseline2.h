/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _C_P027V1_tracksim_compr_o_TM_conversions_baseline2_H_
#define _C_P027V1_tracksim_compr_o_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "C_P027_flatten_sections_qdiff_TM_lib_internal.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* Header/ */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* P027V1_sections_compressed/ */ P027V1_sections_compressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal /* _L439=(TM_lib_internal::C_P027_flatten_sections_qdiff#2)/ */ Context_C_P027_flatten_sections_qdiff_2;
  outC_T_DeterminePacketSizeInt_TM_lib_internal /* _L434=(TM_lib_internal::T_DeterminePacketSizeInt#2)/ */ Context_T_DeterminePacketSizeInt_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* p_size/ */ p_size;
  kcg_int32 /* _L456/ */ _L456;
  kcg_int32 /* _L455/ */ _L455;
  MetadataElement_T_Common_Types_Pkg /* _L454/ */ _L454;
  kcg_int32 /* _L449/ */ _L449;
  kcg_int32 /* _L450/ */ _L450;
  kcg_int32 /* _L451/ */ _L451;
  kcg_int32 /* _L452/ */ _L452;
  P027V1_trackside_qdifflist_T_TM_baseline2 /* _L453/ */ _L453;
  array_int32_432 /* _L448/ */ _L448;
  P027V1_section_int_T_TM_baseline2 /* _L447/ */ _L447;
  kcg_int32 /* _L446/ */ _L446;
  kcg_int32 /* _L445/ */ _L445;
  P015_section_array_T_TM /* _L444/ */ _L444;
  kcg_int32 /* _L443/ */ _L443;
  CompressedPacketData_T_Common_Types_Pkg /* _L442/ */ _L442;
  kcg_int32 /* _L440/ */ _L440;
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 /* _L439/ */ _L439;
  kcg_bool /* _L438/ */ _L438;
  array_int32_68 /* _L437/ */ _L437;
  kcg_int32 /* _L435/ */ _L435;
  kcg_int32 /* _L434/ */ _L434;
  kcg_int32 /* _L433/ */ _L433;
  Q_DIR /* _L457/ */ _L457;
} outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ */
extern void C_P027V1_tracksim_compr_o_TM_conversions_baseline2(
  /* i/ */
  kcg_int32 i,
  /* P027V1_sections_from_track/ */
  P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* meta_first_section_in/ */
  kcg_int32 meta_first_section_in,
  /* q_dir/ */
  Q_DIR q_dir,
  outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2 *outC);

extern void C_P027V1_tracksim_compr_o_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P027V1_tracksim_compr_o_init_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P027V1_tracksim_compr_o_TM_conversions_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_tracksim_compr_o_TM_conversions_baseline2.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

