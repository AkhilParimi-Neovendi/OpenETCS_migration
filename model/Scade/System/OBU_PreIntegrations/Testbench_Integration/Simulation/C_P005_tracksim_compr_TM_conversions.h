/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _C_P005_tracksim_compr_TM_conversions_H_
#define _C_P005_tracksim_compr_TM_conversions_H_

#include "kcg_types.h"
#include "C_P005_flatten_sections_TM_lib_internal.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* Header/ */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* P005_compressed/ */ P005_compressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_DeterminePacketSizeInt_TM_lib_internal /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */ Context_T_DeterminePacketSizeInt_1;
  outC_C_P005_flatten_sections_TM_lib_internal /* _L380=(TM_lib_internal::C_P005_flatten_sections#1)/ */ Context_C_P005_flatten_sections_1;
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal /* _L388=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */ Context_T_Build_Metadata_Packet_ID_1;
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
  kcg_int32 /* p_size/ */ p_size;
  P005_trackside_int_T_TM /* _L1/ */ _L1;
  MetadataElement_T_Common_Types_Pkg /* _L204/ */ _L204;
  kcg_int32 /* _L206/ */ _L206;
  array_int32_400 /* _L209/ */ _L209;
  kcg_int32 /* _L212/ */ _L212;
  kcg_int32 /* _L213/ */ _L213;
  kcg_int32 /* _L336/ */ _L336;
  kcg_int32 /* _L219/ */ _L219;
  kcg_int32 /* _L218/ */ _L218;
  kcg_int32 /* _L217/ */ _L217;
  kcg_int32 /* _L216/ */ _L216;
  kcg_int32 /* _L215/ */ _L215;
  kcg_bool /* _L214/ */ _L214;
  Q_DIR /* _L356/ */ _L356;
  kcg_int32 /* _L371/ */ _L371;
  kcg_int32 /* _L370/ */ _L370;
  kcg_int32 /* _L369/ */ _L369;
  kcg_int32 /* _L368/ */ _L368;
  kcg_int32 /* _L367/ */ _L367;
  kcg_int32 /* _L366/ */ _L366;
  P005_trackide_sectionlist_T_TM /* _L365/ */ _L365;
  array_int32_4 /* _L373/ */ _L373;
  P005_section_int_T_TM /* _L375/ */ _L375;
  P044_other_data_TM_TrainToTrack /* _L376/ */ _L376;
  kcg_int32 /* _L378/ */ _L378;
  kcg_int32 /* _L379/ */ _L379;
  P005_sections_array_flat_T_TM /* _L380/ */ _L380;
  array_int32_5 /* _L381/ */ _L381;
  CompressedPacketData_T_Common_Types_Pkg /* _L383/ */ _L383;
  array_int32_100 /* _L384/ */ _L384;
  _44_array /* _L386/ */ _L386;
  P005_OBU_sectionlist_int_T_TM /* _L385/ */ _L385;
  kcg_int32 /* _L387/ */ _L387;
  nid_packet_meta_TM /* _L388/ */ _L388;
} outC_C_P005_tracksim_compr_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P005_tracksim_compr/ */
extern void C_P005_tracksim_compr_TM_conversions(
  /* P005_from_track/ */
  P005_trackside_int_T_TM *P005_from_track,
  outC_C_P005_tracksim_compr_TM_conversions *outC);

extern void C_P005_tracksim_compr_reset_TM_conversions(
  outC_C_P005_tracksim_compr_TM_conversions *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P005_tracksim_compr_init_TM_conversions(
  outC_C_P005_tracksim_compr_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_conversions::C_P005_tracksim_compr/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

#endif /* _C_P005_tracksim_compr_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P005_tracksim_compr_TM_conversions.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

