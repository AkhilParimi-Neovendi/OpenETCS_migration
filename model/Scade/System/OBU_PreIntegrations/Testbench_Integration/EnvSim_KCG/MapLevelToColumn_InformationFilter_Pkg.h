/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _MapLevelToColumn_InformationFilter_Pkg_H_
#define _MapLevelToColumn_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* outColumn/ */ outColumn;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVEL /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
} outC_MapLevelToColumn_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::MapLevelToColumn/ */
extern void MapLevelToColumn_InformationFilter_Pkg(
  /* inLevel/ */
  M_LEVEL inLevel,
  outC_MapLevelToColumn_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MapLevelToColumn_reset_InformationFilter_Pkg(
  outC_MapLevelToColumn_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MapLevelToColumn_init_InformationFilter_Pkg(
  outC_MapLevelToColumn_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MapLevelToColumn_InformationFilter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MapLevelToColumn_InformationFilter_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

