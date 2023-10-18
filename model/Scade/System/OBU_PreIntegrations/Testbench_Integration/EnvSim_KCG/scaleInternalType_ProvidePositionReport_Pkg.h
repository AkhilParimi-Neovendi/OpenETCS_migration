/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _scaleInternalType_ProvidePositionReport_Pkg_H_
#define _scaleInternalType_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* scaledValue/ */ scaledValue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* _L1/ */ _L1;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  Location_T_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  Location_T_Obu_BasicTypes_Pkg /* _L8/ */ _L8;
  Location_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
} outC_scaleInternalType_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::scaleInternalType/ */
extern void scaleInternalType_ProvidePositionReport_Pkg(
  /* scale/ */
  Q_SCALE scale,
  /* internalValue/ */
  kcg_int64 internalValue,
  outC_scaleInternalType_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void scaleInternalType_reset_ProvidePositionReport_Pkg(
  outC_scaleInternalType_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void scaleInternalType_init_ProvidePositionReport_Pkg(
  outC_scaleInternalType_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _scaleInternalType_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** scaleInternalType_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

