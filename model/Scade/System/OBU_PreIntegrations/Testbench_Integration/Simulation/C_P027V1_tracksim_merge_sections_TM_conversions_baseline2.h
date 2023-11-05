/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _C_P027V1_tracksim_merge_sections_TM_conversions_baseline2_H_
#define _C_P027V1_tracksim_merge_sections_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2.h"
#include "SEND_WriteMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  CompressedPackets_T_Common_Types_Pkg /* Packets_Out/ */ Packets_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_MessageData_TM_lib_internal /* _L433=(TM_lib_internal::SEND_MessageData#1)/ */ Context_SEND_MessageData_1;
  outC_SEND_WriteMessageHeader_TM_lib_internal /* _L435=(TM_lib_internal::SEND_WriteMessageHeader#1)/ */ Context_SEND_WriteMessageHeader_1;
  outC_C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2 /* _L431=(TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section#2)/ */ Context_C_P027V1_tracksim_compr_one_section_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* _L432/ */ _L432;
  MetadataElement_T_Common_Types_Pkg /* _L431/ */ _L431;
  Metadata_T_Common_Types_Pkg /* _L435/ */ _L435;
  kcg_int32 /* _L436/ */ _L436;
  kcg_int32 /* _L437/ */ _L437;
  CompressedPackets_T_Common_Types_Pkg /* _L434/ */ _L434;
  CompressedPacketData_T_Common_Types_Pkg /* _L433/ */ _L433;
  kcg_int32 /* _L438/ */ _L438;
  CompressedPackets_T_Common_Types_Pkg /* _L439/ */ _L439;
  P027V1_section_int_T_TM_baseline2 /* _L440/ */ _L440;
  kcg_int32 /* _L441/ */ _L441;
  CompressedPacketData_T_Common_Types_Pkg /* _L443/ */ _L443;
  Metadata_T_Common_Types_Pkg /* _L442/ */ _L442;
  kcg_int32 /* _L446/ */ _L446;
  kcg_bool /* _L447/ */ _L447;
  kcg_int32 /* _L448/ */ _L448;
  Q_DIR /* _L449/ */ _L449;
} outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ */
extern void C_P027V1_tracksim_merge_sections_TM_conversions_baseline2(
  /* i/ */
  kcg_int32 i,
  /* PacketStream_in/ */
  CompressedPackets_T_Common_Types_Pkg *PacketStream_in,
  /* P027V1_sections_from_track/ */
  P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* n_iter/ */
  kcg_int32 n_iter,
  /* meta_first_section_in/ */
  kcg_int32 meta_first_section_in,
  /* q_dir/ */
  Q_DIR q_dir,
  outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2 *outC);

extern void C_P027V1_tracksim_merge_sections_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void C_P027V1_tracksim_merge_sections_init_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P027V1_tracksim_merge_sections_TM_conversions_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

