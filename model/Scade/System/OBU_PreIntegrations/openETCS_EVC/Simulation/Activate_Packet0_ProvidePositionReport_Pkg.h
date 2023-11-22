/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Activate_Packet0_ProvidePositionReport_Pkg_H_
#define _Activate_Packet0_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* out_packet0/ */ out_packet0;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Position_Report_TrainToTrack /* _L1/ */ _L1;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
} outC_Activate_Packet0_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::Activate_Packet0/ */
extern void Activate_Packet0_ProvidePositionReport_Pkg(
  /* in_packet0/ */
  Position_Report_TrainToTrack *in_packet0,
  outC_Activate_Packet0_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Activate_Packet0_reset_ProvidePositionReport_Pkg(
  outC_Activate_Packet0_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Activate_Packet0_init_ProvidePositionReport_Pkg(
  outC_Activate_Packet0_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Activate_Packet0_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Activate_Packet0_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

