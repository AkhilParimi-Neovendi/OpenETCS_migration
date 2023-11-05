/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P027V1_tracksim_compr_body_TM_conversions_baseline2_H_
#define _C_P027V1_tracksim_compr_body_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* Header/ */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* P027V1_body_compressed/ */ P027V1_body_compressed;
  P027V1_OBU_sectionlist_int_T_TM_baseline2 /* P027V1_sections/ */ P027V1_sections;
  kcg_int32 /* n_iter_k_out/ */ n_iter_k_out;
  kcg_int32 /* meta_first_section/ */ meta_first_section;
  Q_DIR /* q_dir/ */ q_dir;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal /* _L403=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */ Context_T_Build_Metadata_Packet_ID_1;
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal /* _L405=(TM_lib_internal::T_Build_Metadata_Packet_ID#3)/ */ Context_T_Build_Metadata_Packet_ID_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @1/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else: */ else_clock_CAST_Int_to_Q_DIR_1_IfBlock1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DIR /* @1/q_dir/ */ q_dir_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @1/q_dir_int/ */ q_dir_int_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @1/_L12/ */ _L12_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/_L13/ */ _L13_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @1/q_dir_in/ */ q_dir_in_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/error/ */ error_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/IfBlock1:else:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:else:else:then:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  kcg_bool /* @1/IfBlock1:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  kcg_int32 /* n_iter_k/ */ n_iter_k;
  Q_DIR /* l_qdir/ */ l_qdir;
  P027V1_trackside_int_T_TM_baseline2 /* _L1/ */ _L1;
  MetadataElement_T_Common_Types_Pkg /* _L204/ */ _L204;
  kcg_int32 /* _L206/ */ _L206;
  array_int32_494 /* _L209/ */ _L209;
  kcg_int32 /* _L212/ */ _L212;
  kcg_int32 /* _L213/ */ _L213;
  kcg_int32 /* _L336/ */ _L336;
  kcg_int32 /* _L219/ */ _L219;
  kcg_int32 /* _L218/ */ _L218;
  kcg_int32 /* _L217/ */ _L217;
  kcg_int32 /* _L216/ */ _L216;
  kcg_int32 /* _L215/ */ _L215;
  kcg_bool /* _L214/ */ _L214;
  kcg_int32 /* _L371/ */ _L371;
  kcg_int32 /* _L370/ */ _L370;
  P027V1_trackside_qdifflist_T_TM_baseline2 /* _L369/ */ _L369;
  kcg_int32 /* _L368/ */ _L368;
  P027V1_trackside_sectionlist_T_TM_baseline2 /* _L367/ */ _L367;
  array_int32_6 /* _L373/ */ _L373;
  CompressedPacketData_T_Common_Types_Pkg /* _L383/ */ _L383;
  _37_array /* _L386/ */ _L386;
  P027V1_OBU_sectionlist_int_T_TM_baseline2 /* _L385/ */ _L385;
  kcg_int32 /* _L387/ */ _L387;
  kcg_int32 /* _L391/ */ _L391;
  P027V1_section_int_T_TM_baseline2 /* _L394/ */ _L394;
  kcg_int32 /* _L396/ */ _L396;
  kcg_int32 /* _L400/ */ _L400;
  nid_packet_meta_TM /* _L403/ */ _L403;
  nid_packet_meta_TM /* _L405/ */ _L405;
  Q_DIR /* _L406/ */ _L406;
} outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ */
extern void C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
  /* P027V1_from_track/ */
  P027V1_trackside_int_T_TM_baseline2 *P027V1_from_track,
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 *outC);

extern void C_P027V1_tracksim_compr_body_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P027V1_tracksim_compr_body_init_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_conversions_baseline2::C_P027V1_tracksim_compr_body/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

#endif /* _C_P027V1_tracksim_compr_body_TM_conversions_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_tracksim_compr_body_TM_conversions_baseline2.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

