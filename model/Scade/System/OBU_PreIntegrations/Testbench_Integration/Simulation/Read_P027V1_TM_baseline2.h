/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Read_P027V1_TM_baseline2_H_
#define _Read_P027V1_TM_baseline2_H_

#include "kcg_types.h"
#include "Read_P027V1_sections_TM_baseline2.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* received/ */ received;
  P027V1_OBU_T_TM_baseline2 /* P027V1_out/ */ P027V1_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Read_P027V1_sections_TM_baseline2 /* _L184=(TM_baseline2::Read_P027V1_sections#1)/ */ Context_Read_P027V1_sections_1[33];
  outC_RECV_ReadPackets_TM_lib_internal /* _L5=(TM_lib_internal::RECV_ReadPackets#1)/ */ Context_RECV_ReadPackets_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @2/IfBlock1:else: */ else_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_IfBlock1;
  kcg_bool /* @2/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_IfBlock1;
  kcg_bool /* @2/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  kcg_bool /* @3/IfBlock1:else: */ else_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_IfBlock1;
  kcg_bool /* @3/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_IfBlock1;
  kcg_bool /* @3/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_OBU_body_enum_T_TM_baseline2 /* @1/P027V1_OBU_body/ */ P027V1_OBU_body_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @1/meta_qdiff/ */ meta_qdiff_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @1/n_iter_sections/ */ n_iter_sections_C_P027V1_compr_onboard_body_1;
  MetadataElement_T_Common_Types_Pkg /* @1/Metadata_Element/ */ Metadata_Element_C_P027V1_compr_onboard_body_1;
  CompressedPacketData_T_Common_Types_Pkg /* @1/PacketData/ */ PacketData_C_P027V1_compr_onboard_body_1;
  NID_PACKET /* @1/_L28/ */ _L28_C_P027V1_compr_onboard_body_1;
  Q_SCALE /* @1/_L29/ */ _L29_C_P027V1_compr_onboard_body_1;
  Q_DIR /* @1/_L30/ */ _L30_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @1/_L24/ */ _L24_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @1/_L25/ */ _L25_C_P027V1_compr_onboard_body_1;
  kcg_bool /* @1/_L22/ */ _L22_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @1/_L21/ */ _L21_C_P027V1_compr_onboard_body_1;
  MetadataElement_T_Common_Types_Pkg /* @1/_L20/ */ _L20_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @1/_L18/ */ _L18_C_P027V1_compr_onboard_body_1;
  array_int64_5 /* @1/_L6/ */ _L6_C_P027V1_compr_onboard_body_1;
  CompressedPacketData_T_Common_Types_Pkg /* @1/_L9/ */ _L9_C_P027V1_compr_onboard_body_1;
  P027V1_OBU_body_enum_T_TM_baseline2 /* @1/_L10/ */ _L10_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @1/_L16/ */ _L16_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @1/_L15/ */ _L15_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @1/_L14/ */ _L14_C_P027V1_compr_onboard_body_1;
  kcg_bool /* @2/IfBlock1:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_IfBlock1;
  Q_DIR /* @2/IfBlock1:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_IfBlock1;
  kcg_bool /* @2/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1;
  Q_DIR /* @2/IfBlock1:else:else:then:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1;
  kcg_bool /* @2/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1;
  Q_DIR /* @2/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1;
  Q_DIR /* @2/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1;
  kcg_bool /* @2/IfBlock1:else:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1;
  kcg_bool /* @2/error/ */ error_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @2/q_dir_in/ */ q_dir_in_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  kcg_bool /* @2/_L13/ */ _L13_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @2/_L12/ */ _L12_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @2/q_dir_int/ */ q_dir_int_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  Q_DIR /* @2/q_dir/ */ q_dir_CAST_Int_to_Q_DIR_1_C_P027V1_compr_onboard_body_1;
  kcg_bool /* @3/IfBlock1:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_IfBlock1;
  Q_SCALE /* @3/IfBlock1:then:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_IfBlock1;
  kcg_bool /* @3/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1;
  Q_SCALE /* @3/IfBlock1:else:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_else_IfBlock1;
  Q_SCALE /* @3/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1;
  kcg_bool /* @3/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_else_else_else_IfBlock1;
  Q_SCALE /* @3/IfBlock1:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1;
  kcg_bool /* @3/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1_then_else_IfBlock1;
  kcg_int64 /* @3/q_scale_in/ */ q_scale_in_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  kcg_bool /* @3/error/ */ error_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @3/_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  kcg_bool /* @3/_L4/ */ _L4_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @3/q_scale_int/ */ q_scale_int_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  Q_SCALE /* @3/q_scale/ */ q_scale_CAST_Int_to_Q_SCALE_1_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @4/_L1/ */ _L1_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @4/_L5/ */ _L5_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  kcg_bool /* @4/_L4/ */ _L4_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @4/_L3/ */ _L3_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  kcg_bool /* @4/_L2/ */ _L2_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  kcg_int64 /* @4/nid_packet_int/ */ nid_packet_int_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  NID_PACKET /* @4/nid_packet/ */ nid_packet_CAST_Int_to_NID_PACKET_1_C_P027V1_compr_onboard_body_1;
  P027V1_OBU_T_TM_baseline2 /* @5/P027V1_out/ */ P027V1_out_C_P027V1_merge_body_sections_1;
  P027V1_OBU_body_enum_T_TM_baseline2 /* @5/body/ */ body_C_P027V1_merge_body_sections_1;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* @5/sections/ */ sections_C_P027V1_merge_body_sections_1;
  P027V1_OBU_T_TM_baseline2 /* @5/_L75/ */ _L75_C_P027V1_merge_body_sections_1;
  kcg_bool /* @5/_L69/ */ _L69_C_P027V1_merge_body_sections_1;
  Q_DIR /* @5/_L70/ */ _L70_C_P027V1_merge_body_sections_1;
  Q_SCALE /* @5/_L71/ */ _L71_C_P027V1_merge_body_sections_1;
  P027V1_OBU_body_enum_T_TM_baseline2 /* @5/_L68/ */ _L68_C_P027V1_merge_body_sections_1;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* @5/_L1/ */ _L1_C_P027V1_merge_body_sections_1;
  CompressedPacketData_T_Common_Types_Pkg /* _L5/ */ _L5;
  MetadataElement_T_Common_Types_Pkg /* _L30/ */ _L30;
  P027V1_OBU_body_enum_T_TM_baseline2 /* _L166/ */ _L166;
  kcg_int64 /* _L168/ */ _L168;
  kcg_int64 /* _L167/ */ _L167;
  CompressedPackets_T_Common_Types_Pkg /* _L169/ */ _L169;
  array_int64_33 /* _L170/ */ _L170;
  array_int64_33 /* _L171/ */ _L171;
  _26_array /* _L172/ */ _L172;
  P027V1_OBU_T_TM_baseline2 /* _L178/ */ _L178;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 /* _L182/ */ _L182;
  kcg_int64 /* _L184/ */ _L184;
  kcg_bool /* _L185/ */ _L185;
  kcg_bool /* _L186/ */ _L186;
} outC_Read_P027V1_TM_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_baseline2::Read_P027V1/ */
extern void Read_P027V1_TM_baseline2(
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P027V1_TM_baseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Read_P027V1_reset_TM_baseline2(outC_Read_P027V1_TM_baseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Read_P027V1_init_TM_baseline2(outC_Read_P027V1_TM_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_baseline2::Read_P027V1/
  @1: (TM_conversions_baseline2::C_P027V1_compr_onboard_body#1)
  @2: @1/(TM_conversions::CAST_Int_to_Q_DIR#1)
  @3: @1/(TM_conversions::CAST_Int_to_Q_SCALE#1)
  @4: @1/(TM_conversions::CAST_Int_to_NID_PACKET#1)
  @5: (TM_lib_internal::C_P027V1_merge_body_sections#1)
*/

#endif /* _Read_P027V1_TM_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P027V1_TM_baseline2.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

