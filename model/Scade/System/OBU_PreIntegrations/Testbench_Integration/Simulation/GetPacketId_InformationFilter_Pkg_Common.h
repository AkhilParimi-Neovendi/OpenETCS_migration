/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _GetPacketId_InformationFilter_Pkg_Common_H_
#define _GetPacketId_InformationFilter_Pkg_Common_H_

#include "kcg_types.h"
#include "T_extract_nid_packet_from_metadata_selector_TM.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* outPacketId/ */ outPacketId;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_extract_nid_packet_from_metadata_selector_TM /* _L5=(TM::T_extract_nid_packet_from_metadata_selector#1)/ */ Context_T_extract_nid_packet_from_metadata_selector_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_int64 /* _L5/ */ _L5;
  NID_PACKET /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_int64 /* _L8/ */ _L8;
  kcg_int64 /* _L9/ */ _L9;
} outC_GetPacketId_InformationFilter_Pkg_Common;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::Common::GetPacketId/ */
extern void GetPacketId_InformationFilter_Pkg_Common(
  /* inPacket/ */
  MetadataElement_T_Common_Types_Pkg *inPacket,
  outC_GetPacketId_InformationFilter_Pkg_Common *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GetPacketId_reset_InformationFilter_Pkg_Common(
  outC_GetPacketId_InformationFilter_Pkg_Common *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GetPacketId_init_InformationFilter_Pkg_Common(
  outC_GetPacketId_InformationFilter_Pkg_Common *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GetPacketId_InformationFilter_Pkg_Common_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GetPacketId_InformationFilter_Pkg_Common.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

