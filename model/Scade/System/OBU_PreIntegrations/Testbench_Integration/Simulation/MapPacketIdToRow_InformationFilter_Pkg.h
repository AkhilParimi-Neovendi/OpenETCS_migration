/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _MapPacketIdToRow_InformationFilter_Pkg_H_
#define _MapPacketIdToRow_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* outRow/ */ outRow;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
} outC_MapPacketIdToRow_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::MapPacketIdToRow/ */
extern void MapPacketIdToRow_InformationFilter_Pkg(
  /* inPacketId/ */
  kcg_int64 inPacketId,
  outC_MapPacketIdToRow_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MapPacketIdToRow_reset_InformationFilter_Pkg(
  outC_MapPacketIdToRow_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MapPacketIdToRow_init_InformationFilter_Pkg(
  outC_MapPacketIdToRow_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MapPacketIdToRow_InformationFilter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MapPacketIdToRow_InformationFilter_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

