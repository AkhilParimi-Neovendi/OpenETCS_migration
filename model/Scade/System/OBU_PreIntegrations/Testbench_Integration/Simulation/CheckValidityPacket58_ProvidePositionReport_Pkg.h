/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _CheckValidityPacket58_ProvidePositionReport_Pkg_H_
#define _CheckValidityPacket58_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "BG_hasBeenReported_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* found/ */ found;
  ReportedBGList_T_ProvidePositionReport_Pkg /* updatedBGs/ */ updatedBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* reportedBGs/ */ mem_reportedBGs;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BG_hasBeenReported_ProvidePositionReport_Pkg /* _L35=(ProvidePositionReport_Pkg::BG_hasBeenReported#1)/ */ Context_BG_hasBeenReported_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L5/ */ _L5;
  odometry_T_Obu_BasicTypes_Pkg /* _L31/ */ _L31;
  NID_BG /* _L32/ */ _L32;
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L33/ */ _L33;
  kcg_bool /* _L35/ */ _L35;
  BG_Header_T_BG_Types_Pkg /* _L49/ */ _L49;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L50/ */ _L50;
} outC_CheckValidityPacket58_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::CheckValidityPacket58/ */
extern void CheckValidityPacket58_ProvidePositionReport_Pkg(
  /* bgCommonHeader/ */
  BG_Header_T_BG_Types_Pkg *bgCommonHeader,
  /* reportedBGs/ */
  ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckValidityPacket58_reset_ProvidePositionReport_Pkg(
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckValidityPacket58_init_ProvidePositionReport_Pkg(
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* reportedBGs/ */ Context_mem_reportedBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_CheckValidityPacket58_ProvidePositionReport_Pkg;

extern void kcg_save_SV_CheckValidityPacket58_ProvidePositionReport_Pkg(
  SV_CheckValidityPacket58_ProvidePositionReport_Pkg *SV,
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC);
extern void kcg_load_SV_CheckValidityPacket58_ProvidePositionReport_Pkg(
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg *outC,
  SV_CheckValidityPacket58_ProvidePositionReport_Pkg *SV);



#endif /* _CheckValidityPacket58_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckValidityPacket58_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

