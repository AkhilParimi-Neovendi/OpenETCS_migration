/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P080_compr_onboard_TM_conversions_H_
#define _C_P080_compr_onboard_TM_conversions_H_

#include "kcg_types.h"
#include "C_P080_unflatten_sections_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P080_OBU_T_TM /* P080_onboard/ */ P080_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P080_unflatten_sections_TM_lib_internal /* _L5=(TM_lib_internal::C_P080_unflatten_sections#1)/ */ Context_C_P080_unflatten_sections_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* @1/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_SCALE_1_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else: */ else_clock_CAST_Int_to_Q_SCALE_1_IfBlock1;
  kcg_bool /* @4/IfBlock1: */ IfBlock1_clock_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @4/IfBlock1:else:else: */ else_clock_CAST_Int_to_Q_DIR_1_else_IfBlock1;
  kcg_bool /* @4/IfBlock1:else: */ else_clock_CAST_Int_to_Q_DIR_1_IfBlock1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* @1/q_scale/ */ q_scale_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @1/q_scale_int/ */ q_scale_int_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/_L4/ */ _L4_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @1/_L2/ */ _L2_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/error/ */ error_CAST_Int_to_Q_SCALE_1;
  kcg_int32 /* @1/q_scale_in/ */ q_scale_in_CAST_Int_to_Q_SCALE_1;
  kcg_bool /* @1/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_then_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_else_else_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:else:else:then:_L1/ */ _L1_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
  kcg_bool /* @1/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_SCALE_1_then_else_else_IfBlock1;
  Q_SCALE /* @1/IfBlock1:then:_L2/ */ _L2_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
  kcg_bool /* @1/IfBlock1:then:_L3/ */ _L3_CAST_Int_to_Q_SCALE_1_then_IfBlock1;
  N_ITER /* @2/n_iter/ */ n_iter_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/n_iter_int/ */ n_iter_int_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/_L9/ */ _L9_CAST_Int_to_N_ITER_1;
  kcg_bool /* @2/_L10/ */ _L10_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/_L11/ */ _L11_CAST_Int_to_N_ITER_1;
  kcg_bool /* @2/_L12/ */ _L12_CAST_Int_to_N_ITER_1;
  kcg_int32 /* @2/_L1/ */ _L1_CAST_Int_to_N_ITER_1;
  L_PACKET /* @3/l_packet/ */ l_packet_CAST_Int_to_L_PACKET_1;
  kcg_int32 /* @3/l_packet_int/ */ l_packet_int_CAST_Int_to_L_PACKET_1;
  kcg_int32 /* @3/_L13/ */ _L13_CAST_Int_to_L_PACKET_1;
  kcg_int32 /* @3/_L12/ */ _L12_CAST_Int_to_L_PACKET_1;
  kcg_bool /* @3/_L8/ */ _L8_CAST_Int_to_L_PACKET_1;
  kcg_bool /* @3/_L9/ */ _L9_CAST_Int_to_L_PACKET_1;
  kcg_int32 /* @3/_L1/ */ _L1_CAST_Int_to_L_PACKET_1;
  Q_DIR /* @4/q_dir/ */ q_dir_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @4/q_dir_int/ */ q_dir_int_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @4/_L12/ */ _L12_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @4/_L13/ */ _L13_CAST_Int_to_Q_DIR_1;
  kcg_int32 /* @4/q_dir_in/ */ q_dir_in_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @4/error/ */ error_CAST_Int_to_Q_DIR_1;
  kcg_bool /* @4/IfBlock1:else:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @4/IfBlock1:else:then:_L3/ */ _L3_CAST_Int_to_Q_DIR_1_then_else_IfBlock1;
  Q_DIR /* @4/IfBlock1:else:else:else:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  kcg_bool /* @4/IfBlock1:else:else:else:_L1/ */ _L1_CAST_Int_to_Q_DIR_1_else_else_else_IfBlock1;
  Q_DIR /* @4/IfBlock1:else:else:then:_L2/ */ _L2_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  kcg_bool /* @4/IfBlock1:else:else:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_else_else_IfBlock1;
  Q_DIR /* @4/IfBlock1:then:_L4/ */ _L4_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  kcg_bool /* @4/IfBlock1:then:_L5/ */ _L5_CAST_Int_to_Q_DIR_1_then_IfBlock1;
  NID_PACKET /* @5/nid_packet/ */ nid_packet_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @5/nid_packet_int/ */ nid_packet_int_CAST_Int_to_NID_PACKET_1;
  kcg_bool /* @5/_L2/ */ _L2_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @5/_L3/ */ _L3_CAST_Int_to_NID_PACKET_1;
  kcg_bool /* @5/_L4/ */ _L4_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @5/_L5/ */ _L5_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @5/_L1/ */ _L1_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  P080_sections_array_flat_T_TM /* _L13/ */ _L13;
  NID_PACKET /* _L12/ */ _L12;
  Q_DIR /* _L11/ */ _L11;
  P080_OBU_T_TM /* _L10/ */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* _L9/ */ _L9;
  L_PACKET /* _L8/ */ _L8;
  N_ITER /* _L7/ */ _L7;
  array_int32_3 /* _L6/ */ _L6;
  P080_OBU_sectionlist_enum_T_TM /* _L5/ */ _L5;
  Q_SCALE /* _L4/ */ _L4;
  P044_other_data_TM_TrainToTrack /* _L2/ */ _L2;
  P044_other_data_TM_TrainToTrack /* _L1/ */ _L1;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  MetadataElement_T_Common_Types_Pkg /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
} outC_C_P080_compr_onboard_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P080_compr_onboard/ */
extern void C_P080_compr_onboard_TM_conversions(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P080_compr_onboard_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P080_compr_onboard_reset_TM_conversions(
  outC_C_P080_compr_onboard_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P080_compr_onboard_init_TM_conversions(
  outC_C_P080_compr_onboard_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_conversions::C_P080_compr_onboard/
  @1: (TM_conversions::CAST_Int_to_Q_SCALE#1)
  @2: (TM_conversions::CAST_Int_to_N_ITER#1)
  @3: (TM_conversions::CAST_Int_to_L_PACKET#1)
  @4: (TM_conversions::CAST_Int_to_Q_DIR#1)
  @5: (TM_conversions::CAST_Int_to_NID_PACKET#1)
*/

#endif /* _C_P080_compr_onboard_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P080_compr_onboard_TM_conversions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

