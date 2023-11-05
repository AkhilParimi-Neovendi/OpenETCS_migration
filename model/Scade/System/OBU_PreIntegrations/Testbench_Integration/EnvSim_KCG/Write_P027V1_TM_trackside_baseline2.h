/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Write_P027V1_TM_trackside_baseline2_H_
#define _Write_P027V1_TM_trackside_baseline2_H_

#include "kcg_types.h"
#include "C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.h"
#include "C_P027V1_tracksim_compr_body_TM_conversions_baseline2.h"
#include "SEND_WriteMessageHeader_TM_lib_internal.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Error/ */ Error;
  CompressedPackets_T_Common_Types_Pkg /* PacketsOut/ */ PacketsOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2 /* _L50=(TM_conversions_baseline2::C_P027V1_tracksim_merge_sections#1)/ */ Context_C_P027V1_tracksim_merge_sections_1[33];
  outC_SEND_MessageData_TM_lib_internal /* _L10=(TM_lib_internal::SEND_MessageData#1)/ */ Context_SEND_MessageData_1;
  outC_SEND_WriteMessageHeader_TM_lib_internal /* _L4=(TM_lib_internal::SEND_WriteMessageHeader#1)/ */ Context_SEND_WriteMessageHeader_1;
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 /* _L43=(TM_conversions_baseline2::C_P027V1_tracksim_compr_body#1)/ */ Context_C_P027V1_tracksim_compr_body_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_trackside_int_T_TM_baseline2 /* _L1/ */ _L1;
  Metadata_T_Common_Types_Pkg /* _L4/ */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L18/ */ _L18;
  kcg_int32 /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* _L39/ */ _L39;
  CompressedPackets_T_Common_Types_Pkg /* _L40/ */ _L40;
  CompressedPacketData_T_Common_Types_Pkg /* _L42/ */ _L42;
  Metadata_T_Common_Types_Pkg /* _L41/ */ _L41;
  CompressedPacketData_T_Common_Types_Pkg /* _L44/ */ _L44;
  MetadataElement_T_Common_Types_Pkg /* _L43/ */ _L43;
  P027V1_OBU_sectionlist_int_T_TM_baseline2 /* _L45/ */ _L45;
  kcg_int32 /* _L46/ */ _L46;
  kcg_int32 /* _L50/ */ _L50;
  CompressedPackets_T_Common_Types_Pkg /* _L51/ */ _L51;
  kcg_bool /* _L52/ */ _L52;
  array_int32_33 /* _L54/ */ _L54;
  array_int32_33 /* _L55/ */ _L55;
  kcg_int32 /* _L56/ */ _L56;
  Q_DIR /* _L59/ */ _L59;
  _20_array /* _L60/ */ _L60;
} outC_Write_P027V1_TM_trackside_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_trackside_baseline2::Write_P027V1/ */
extern void Write_P027V1_TM_trackside_baseline2(
  /* Packet27V1/ */
  P027V1_trackside_int_T_TM_baseline2 *Packet27V1,
  /* Packets/ */
  CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P027V1_TM_trackside_baseline2 *outC);

extern void Write_P027V1_reset_TM_trackside_baseline2(
  outC_Write_P027V1_TM_trackside_baseline2 *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Write_P027V1_init_TM_trackside_baseline2(
  outC_Write_P027V1_TM_trackside_baseline2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_P027V1_TM_trackside_baseline2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_P027V1_TM_trackside_baseline2.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

