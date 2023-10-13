/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _AggregatePackets_ProvidePositionReport_Pkg_H_
#define _AggregatePackets_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  outPackets_T_Common_Types_Pkg /* outPackets/ */ outPackets;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L4/ */ _L4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L3/ */ _L3;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L2/ */ _L2;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L1/ */ _L1;
  outPackets_T_Common_Types_Pkg /* _L6/ */ _L6;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* _L7/ */ _L7;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg /* _L8/ */ _L8;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg /* _L22/ */ _L22;
} outC_AggregatePackets_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::AggregatePackets/ */
extern void AggregatePackets_ProvidePositionReport_Pkg(
  /* inPacket0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *inPacket0,
  /* inPacket1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inPacket1,
  /* inPacket4/ */
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *inPacket4,
  /* inPacket5/ */
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *inPacket5,
  outC_AggregatePackets_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AggregatePackets_reset_ProvidePositionReport_Pkg(
  outC_AggregatePackets_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AggregatePackets_init_ProvidePositionReport_Pkg(
  outC_AggregatePackets_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AggregatePackets_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AggregatePackets_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

