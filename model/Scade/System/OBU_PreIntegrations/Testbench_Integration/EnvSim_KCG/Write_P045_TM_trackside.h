/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Write_P045_TM_trackside_H_
#define _Write_P045_TM_trackside_H_

#include "kcg_types.h"
#include "C_P045_tracksim_compr_TM_conversions.h"
#include "SEND_MessageData_TM_lib_internal.h"
#include "SEND_WriteBaliseMessageHeader_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Error/ */ Error;
  CompressedPackets_T_Common_Types_Pkg /* RadioPacketsOut/ */ RadioPacketsOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_MessageData_TM_lib_internal /* _L10=(TM_lib_internal::SEND_MessageData#1)/ */ Context_SEND_MessageData_1;
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal /* _L4=(TM_lib_internal::SEND_WriteBaliseMessageHeader#1)/ */ Context_SEND_WriteBaliseMessageHeader_1;
  outC_C_P045_tracksim_compr_TM_conversions /* _L43=(TM_conversions::C_P045_tracksim_compr#1)/ */ Context_C_P045_tracksim_compr_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P045_trackside_int_T_TM /* _L1/ */ _L1;
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
} outC_Write_P045_TM_trackside;

/* ===========  node initialization and cycle functions  =========== */
/* TM_trackside::Write_P045/ */
extern void Write_P045_TM_trackside(
  /* Packet45/ */
  P045_trackside_int_T_TM *Packet45,
  /* Packets/ */
  CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P045_TM_trackside *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Write_P045_reset_TM_trackside(outC_Write_P045_TM_trackside *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Write_P045_init_TM_trackside(outC_Write_P045_TM_trackside *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Write_P045_TM_trackside_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Write_P045_TM_trackside.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

