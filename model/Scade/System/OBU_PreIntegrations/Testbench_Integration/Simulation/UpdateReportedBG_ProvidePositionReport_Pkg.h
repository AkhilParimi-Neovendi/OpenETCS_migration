/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _UpdateReportedBG_ProvidePositionReport_Pkg_H_
#define _UpdateReportedBG_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* found/ */ found;
  ReportedBG_T_ProvidePositionReport_Pkg /* out_reportedBG/ */ out_reportedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  NID_BG /* _L5/ */ _L5;
  NID_BG /* _L3/ */ _L3;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L10/ */ _L10;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L11/ */ _L11;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L39/ */ _L39;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L38/ */ _L38;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L37/ */ _L37;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L52/ */ _L52;
} outC_UpdateReportedBG_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::UpdateReportedBG/ */
extern void UpdateReportedBG_ProvidePositionReport_Pkg(
  /* foldedFound/ */
  kcg_bool foldedFound,
  /* reportedBG/ */
  ReportedBG_T_ProvidePositionReport_Pkg *reportedBG,
  /* BG_IDToCheck/ */
  NID_BG BG_IDToCheck,
  /* location/ */
  OdometryLocations_T_Obu_BasicTypes_Pkg *location,
  outC_UpdateReportedBG_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void UpdateReportedBG_reset_ProvidePositionReport_Pkg(
  outC_UpdateReportedBG_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void UpdateReportedBG_init_ProvidePositionReport_Pkg(
  outC_UpdateReportedBG_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _UpdateReportedBG_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** UpdateReportedBG_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

