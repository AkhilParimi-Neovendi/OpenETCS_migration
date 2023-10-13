/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _C_P003V1_tracksim_compr_TM_conversions_baseline2_H_
#define _C_P003V1_tracksim_compr_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* Header/ */ Header;
  CompressedPacketData_T_Common_Types_Pkg /* P003V1_compressed/ */ P003V1_compressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_DeterminePacketSizeInt_TM_lib_internal /* _L379=(TM_lib_internal::T_DeterminePacketSizeInt#1)/ */ Context_T_DeterminePacketSizeInt_1;
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal /* _L412=(TM_lib_internal::T_Build_Metadata_Packet_ID#2)/ */ Context_T_Build_Metadata_Packet_ID_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @1/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else: */ else_clock_CAST_Int_to_Q_DIR_1_IfBlock1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_DIR /* @1/q_dir/ */ q_dir_CAST_Int_to_Q_DIR_1;
  kcg_int64 /* @1/q_dir_int/ */ q_dir_int_CAST_Int_to_Q_DIR_1;
  kcg_int64 /* @1/_L12/ */ _L12_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/_L13/ */ _L13_CAST_Int_to_Q_DIR_1;
  kcg_int64 /* @1/q_dir_in/ */ q_dir_in_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/error/ */ error_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @1/IfBlock1:else:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:else:else:then:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  Q_DIR /* @1/IfBlock1:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  kcg_bool /* @1/IfBlock1:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  kcg_int64 /* p_size/ */ p_size;
  P003V1_trackide_sectionlist_T_TM_baseline2 /* sections/ */ sections;
  P003V1_trackside_int_T_TM_baseline2 /* _L1/ */ _L1;
  MetadataElement_T_Common_Types_Pkg /* _L204/ */ _L204;
  kcg_int64 /* _L206/ */ _L206;
  array_int64_444 /* _L209/ */ _L209;
  kcg_int64 /* _L212/ */ _L212;
  kcg_int64 /* _L213/ */ _L213;
  kcg_int64 /* _L336/ */ _L336;
  kcg_int64 /* _L218/ */ _L218;
  kcg_int64 /* _L217/ */ _L217;
  kcg_int64 /* _L216/ */ _L216;
  kcg_int64 /* _L215/ */ _L215;
  kcg_bool /* _L214/ */ _L214;
  Q_DIR /* _L356/ */ _L356;
  kcg_int64 /* _L366/ */ _L366;
  P003V1_trackide_sectionlist_T_TM_baseline2 /* _L365/ */ _L365;
  array_int64_6 /* _L373/ */ _L373;
  kcg_int64 /* _L378/ */ _L378;
  kcg_int64 /* _L379/ */ _L379;
  array_int64_24 /* _L381/ */ _L381;
  CompressedPacketData_T_Common_Types_Pkg /* _L383/ */ _L383;
  array_int64_56 /* _L384/ */ _L384;
  kcg_int64 /* _L387/ */ _L387;
  kcg_int64 /* _L388/ */ _L388;
  kcg_int64 /* _L389/ */ _L389;
  kcg_int64 /* _L390/ */ _L390;
  kcg_int64 /* _L391/ */ _L391;
  kcg_int64 /* _L392/ */ _L392;
  kcg_int64 /* _L393/ */ _L393;
  kcg_int64 /* _L394/ */ _L394;
  kcg_int64 /* _L395/ */ _L395;
  kcg_int64 /* _L396/ */ _L396;
  kcg_int64 /* _L397/ */ _L397;
  kcg_int64 /* _L398/ */ _L398;
  kcg_int64 /* _L399/ */ _L399;
  kcg_int64 /* _L400/ */ _L400;
  kcg_int64 /* _L401/ */ _L401;
  kcg_int64 /* _L402/ */ _L402;
  kcg_int64 /* _L403/ */ _L403;
  kcg_int64 /* _L404/ */ _L404;
  array_int64_18 /* _L407/ */ _L407;
  P003V1_trackide_sectionlist_T_TM_baseline2 /* _L408/ */ _L408;
  kcg_int64 /* _L409/ */ _L409;
  nid_packet_meta_TM /* _L412/ */ _L412;
} outC_C_P003V1_tracksim_compr_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ */
extern void C_P003V1_tracksim_compr_TM_conversions_baseline2(
  /* P003V1_from_track/ */
  P003V1_trackside_int_T_TM_baseline2 *P003V1_from_track,
  outC_C_P003V1_tracksim_compr_TM_conversions_baseline2 *outC);

extern void C_P003V1_tracksim_compr_reset_TM_conversions_baseline2(
  outC_C_P003V1_tracksim_compr_TM_conversions_baseline2 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P003V1_tracksim_compr_init_TM_conversions_baseline2(
  outC_C_P003V1_tracksim_compr_TM_conversions_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_conversions_baseline2::C_P003V1_tracksim_compr/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
*/

#endif /* _C_P003V1_tracksim_compr_TM_conversions_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003V1_tracksim_compr_TM_conversions_baseline2.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

