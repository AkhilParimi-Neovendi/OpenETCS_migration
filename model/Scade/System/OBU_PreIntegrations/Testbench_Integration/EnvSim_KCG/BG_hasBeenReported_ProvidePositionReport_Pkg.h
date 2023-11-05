/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _BG_hasBeenReported_ProvidePositionReport_Pkg_H_
#define _BG_hasBeenReported_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "UpdateReportedBG_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* found/ */ found;
  ReportedBGList_T_ProvidePositionReport_Pkg /* updatedBGs/ */ updatedBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_UpdateReportedBG_ProvidePositionReport_Pkg /* _L22=(ProvidePositionReport_Pkg::UpdateReportedBG#3)/ */ Context_UpdateReportedBG_3[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L9/ */ _L9;
  array_int32_8 /* _L2/ */ _L2;
  NID_BG /* _L1/ */ _L1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  _67_array /* _L18/ */ _L18;
  kcg_bool /* _L21/ */ _L21;
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
} outC_BG_hasBeenReported_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::BG_hasBeenReported/ */
extern void BG_hasBeenReported_ProvidePositionReport_Pkg(
  /* reportedBGs/ */
  ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* nidBg/ */
  NID_BG nidBg,
  /* location/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *location,
  outC_BG_hasBeenReported_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BG_hasBeenReported_reset_ProvidePositionReport_Pkg(
  outC_BG_hasBeenReported_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BG_hasBeenReported_init_ProvidePositionReport_Pkg(
  outC_BG_hasBeenReported_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BG_hasBeenReported_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BG_hasBeenReported_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

