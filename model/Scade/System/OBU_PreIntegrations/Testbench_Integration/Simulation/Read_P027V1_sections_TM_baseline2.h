/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Read_P027V1_sections_TM_baseline2_H_
#define _Read_P027V1_sections_TM_baseline2_H_

#include "kcg_types.h"
#include "C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2.h"
#include "T_Decode_Metadata_L2_TM_lib_internal.h"
#include "RECV_ReadPackets_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  P027V1_section_enum_T_TM_baseline2 /* P027V1_OBU_section_out/ */ P027V1_OBU_section_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P027V1_compr_onboard_sections_level2_TM_conversions_baseline2 /* _L177=(TM_conversions_baseline2::C_P027V1_compr_onboard_sections_level2#1)/ */ Context_C_P027V1_compr_onboard_sections_level2_1;
  outC_RECV_ReadPackets_TM_lib_internal /* _L172=(TM_lib_internal::RECV_ReadPackets#1)/ */ Context_RECV_ReadPackets_1;
  outC_T_Decode_Metadata_L2_TM_lib_internal /* _L176=(TM_lib_internal::T_Decode_Metadata_L2#1)/ */ Context_T_Decode_Metadata_L2_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_section_enum_T_TM_baseline2 /* _L177/ */ _L177;
  kcg_int64 /* _L176/ */ _L176;
  CompressedPackets_T_Common_Types_Pkg /* _L175/ */ _L175;
  kcg_int64 /* _L174/ */ _L174;
  CompressedPacketData_T_Common_Types_Pkg /* _L172/ */ _L172;
  MetadataElement_T_Common_Types_Pkg /* _L173/ */ _L173;
  kcg_int64 /* _L171/ */ _L171;
  kcg_int64 /* _L179/ */ _L179;
  kcg_bool /* _L180/ */ _L180;
  kcg_bool /* _L181/ */ _L181;
} outC_Read_P027V1_sections_TM_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_baseline2::Read_P027V1_sections/ */
extern void Read_P027V1_sections_TM_baseline2(
  /* i/ */
  kcg_int64 i,
  /* Message_IN/ */
  CompressedPackets_T_Common_Types_Pkg *Message_IN,
  /* n_iter_outer/ */
  kcg_int64 n_iter_outer,
  /* meta_sections/ */
  kcg_int64 meta_sections,
  outC_Read_P027V1_sections_TM_baseline2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Read_P027V1_sections_reset_TM_baseline2(
  outC_Read_P027V1_sections_TM_baseline2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Read_P027V1_sections_init_TM_baseline2(
  outC_Read_P027V1_sections_TM_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Read_P027V1_sections_TM_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Read_P027V1_sections_TM_baseline2.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

