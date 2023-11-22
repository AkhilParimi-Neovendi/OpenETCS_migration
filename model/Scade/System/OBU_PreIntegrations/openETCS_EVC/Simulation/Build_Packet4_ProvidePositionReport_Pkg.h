/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Build_Packet4_ProvidePositionReport_Pkg_H_
#define _Build_Packet4_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* packet4/ */ packet4;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  M_ERROR /* _L2/ */ _L2;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L4/ */ _L4;
} outC_Build_Packet4_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Build_Packet4/ */
extern void Build_Packet4_ProvidePositionReport_Pkg(
  /* errorMsg/ */
  ErrorMessage_T_ProvidePositionReport_Pkg *errorMsg,
  outC_Build_Packet4_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Build_Packet4_reset_ProvidePositionReport_Pkg(
  outC_Build_Packet4_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Build_Packet4_init_ProvidePositionReport_Pkg(
  outC_Build_Packet4_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Build_Packet4_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_Packet4_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

