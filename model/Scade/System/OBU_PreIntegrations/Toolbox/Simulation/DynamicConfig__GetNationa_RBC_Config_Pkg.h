/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _DynamicConfig__GetNationa_RBC_Config_Pkg_H_
#define _DynamicConfig__GetNationa_RBC_Config_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NationalParams_T /* outNationalParams/ */ outNationalParams;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DynamicConfig_T /* _L1/ */ _L1;
  NationalParams_T /* _L2/ */ _L2;
} outC_DynamicConfig__GetNationa_RBC_Config_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Config_Pkg::DynamicConfig__GetNationalParams/ */
extern void DynamicConfig__GetNationa_RBC_Config_Pkg(
  /* inDynamicConfig/ */
  DynamicConfig_T *inDynamicConfig,
  outC_DynamicConfig__GetNationa_RBC_Config_Pkg *outC);

extern void DynamicConfig__GetNationa_reset_RBC_Config_Pkg(
  outC_DynamicConfig__GetNationa_RBC_Config_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DynamicConfig__GetNationa_init_RBC_Config_Pkg(
  outC_DynamicConfig__GetNationa_RBC_Config_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DynamicConfig__GetNationa_RBC_Config_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DynamicConfig__GetNationa_RBC_Config_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

