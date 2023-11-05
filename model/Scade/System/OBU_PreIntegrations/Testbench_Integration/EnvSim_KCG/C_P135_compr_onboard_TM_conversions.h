/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P135_compr_onboard_TM_conversions_H_
#define _C_P135_compr_onboard_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P135_OBU_T_TM /* P135_onboard/ */ P135_onboard;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
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
  NID_PACKET /* @2/nid_packet/ */ nid_packet_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @2/nid_packet_int/ */ nid_packet_int_CAST_Int_to_NID_PACKET_1;
  kcg_bool /* @2/_L2/ */ _L2_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @2/_L3/ */ _L3_CAST_Int_to_NID_PACKET_1;
  kcg_bool /* @2/_L4/ */ _L4_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @2/_L5/ */ _L5_CAST_Int_to_NID_PACKET_1;
  kcg_int32 /* @2/_L1/ */ _L1_CAST_Int_to_NID_PACKET_1;
  NID_PACKET /* _L12/ */ _L12;
  P135_OBU_T_TM /* _L10/ */ _L10;
  CompressedPacketData_T_Common_Types_Pkg /* _L9/ */ _L9;
  Q_DIR /* _L4/ */ _L4;
  MetadataElement_T_Common_Types_Pkg /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  array_int32_3 /* _L45/ */ _L45;
  kcg_int32 /* _L59/ */ _L59;
  kcg_int32 /* _L58/ */ _L58;
  kcg_int32 /* _L57/ */ _L57;
} outC_C_P135_compr_onboard_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P135_compr_onboard/ */
extern void C_P135_compr_onboard_TM_conversions(
  /* PacketData/ */
  CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* Metadata_Element/ */
  MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P135_compr_onboard_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P135_compr_onboard_reset_TM_conversions(
  outC_C_P135_compr_onboard_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P135_compr_onboard_init_TM_conversions(
  outC_C_P135_compr_onboard_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: TM_conversions::C_P135_compr_onboard/
  @1: (TM_conversions::CAST_Int_to_Q_DIR#1)
  @2: (TM_conversions::CAST_Int_to_NID_PACKET#1)
*/

#endif /* _C_P135_compr_onboard_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P135_compr_onboard_TM_conversions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

