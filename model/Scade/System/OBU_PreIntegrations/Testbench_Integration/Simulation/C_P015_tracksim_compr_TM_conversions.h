/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _C_P015_tracksim_compr_TM_conversions_H_
#define _C_P015_tracksim_compr_TM_conversions_H_

#include "kcg_types.h"
#include "C_P015_flatten_sections_TM_lib_internal.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* Header/ */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* P015_compressed/ */ P015_compressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_DeterminePacketSizeInt_TM_lib_internal /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */ Context_T_DeterminePacketSizeInt_1;
  outC_C_P015_flatten_sections_TM_lib_internal /* _L380=(TM_lib_internal::C_P015_flatten_sections#1)/ */ Context_C_P015_flatten_sections_1;
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal /* _L404=(TM_lib_internal::T_Build_Metadata_Packet_ID#1)/ */ Context_T_Build_Metadata_Packet_ID_1;
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
  P015_trackide_sectionlist_T_TM /* sections/ */ sections;
  kcg_int32 /* n_iter/ */ n_iter;
  P015_trackside_int_T_TM /* _L1/ */ _L1;
  MetadataElement_T_Common_Types_Pkg /* _L204/ */ _L204;
  kcg_int32 /* _L206/ */ _L206;
  array_int32_350 /* _L209/ */ _L209;
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
  P015_trackide_sectionlist_T_TM /* _L371/ */ _L371;
  kcg_int32 /* _L370/ */ _L370;
  kcg_int32 /* _L369/ */ _L369;
  kcg_int32 /* _L368/ */ _L368;
  kcg_int32 /* _L367/ */ _L367;
  kcg_int32 /* _L366/ */ _L366;
  kcg_int32 /* _L365/ */ _L365;
  array_int32_6 /* _L373/ */ _L373;
  kcg_int32 /* _L378/ */ _L378;
  kcg_int32 /* _L379/ */ _L379;
  P015_sections_array_flat_T_TM /* _L380/ */ _L380;
  array_int32_21 /* _L381/ */ _L381;
  CompressedPacketData_T_Common_Types_Pkg /* _L383/ */ _L383;
  array_int32_150 /* _L384/ */ _L384;
  kcg_int32 /* _L387/ */ _L387;
  kcg_int32 /* _L395/ */ _L395;
  kcg_int32 /* _L394/ */ _L394;
  kcg_int32 /* _L393/ */ _L393;
  kcg_int32 /* _L392/ */ _L392;
  kcg_int32 /* _L391/ */ _L391;
  kcg_int32 /* _L390/ */ _L390;
  kcg_int32 /* _L389/ */ _L389;
  kcg_int32 /* _L388/ */ _L388;
  kcg_int32 /* _L396/ */ _L396;
  P015_trackide_sectionlist_T_TM /* _L398/ */ _L398;
  array_int32_15 /* _L399/ */ _L399;
  array_int32_22 /* _L400/ */ _L400;
  kcg_int32 /* _L402/ */ _L402;
  P044_other_data_TM_TrainToTrack /* _L403/ */ _L403;
  nid_packet_meta_TM /* _L404/ */ _L404;
  kcg_int32 /* _L405/ */ _L405;
} outC_C_P015_tracksim_compr_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P015_tracksim_compr/ */
extern void C_P015_tracksim_compr_TM_conversions(
  /* P015_from_track/ */
  P015_trackside_int_T_TM *P015_from_track,
  outC_C_P015_tracksim_compr_TM_conversions *outC);

extern void C_P015_tracksim_compr_reset_TM_conversions(
  outC_C_P015_tracksim_compr_TM_conversions *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P015_tracksim_compr_init_TM_conversions(
  outC_C_P015_tracksim_compr_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_conversions::C_P015_tracksim_compr/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

#endif /* _C_P015_tracksim_compr_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P015_tracksim_compr_TM_conversions.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

