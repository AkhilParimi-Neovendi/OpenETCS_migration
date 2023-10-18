/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _ReceiveReportParameters_ProvidePositionReport_Pkg_H_
#define _ReceiveReportParameters_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Read_P058_Legacy_TM_specific.h"
#include "CheckValidityPacket58_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* out_reportedBGs/ */ out_reportedBGs;
  kcg_bool /* present/ */ present;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* posRepParam/ */ posRepParam;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* reportedBGs/ */ mem_reportedBGs;
  kcg_bool init;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* @1/_L4/ */ _L4_MemoryBasic_1_struct;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckValidityPacket58_ProvidePositionReport_Pkg /* _L8=(ProvidePositionReport_Pkg::CheckValidityPacket58#1)/ */ Context_CheckValidityPacket58_1;
  outC_Read_P058_Legacy_TM_specific /* _L69=(TM_specific::Read_P058_Legacy#1)/ */ Context_Read_P058_Legacy_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P58_PositionReportParameters_T_Packet_Types_Pkg /* @1/Memorized/ */ Memorized_MemoryBasic_1_struct;
  kcg_bool /* @1/Write/ */ Write_MemoryBasic_1_struct;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* @1/Init/ */ Init_MemoryBasic_1_struct;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* @1/BM_Input/ */ BM_Input_MemoryBasic_1_struct;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* @1/_L7/ */ _L7_MemoryBasic_1_struct;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* @1/_L6/ */ _L6_MemoryBasic_1_struct;
  kcg_bool /* @1/_L5/ */ _L5_MemoryBasic_1_struct;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* @1/_L2/ */ _L2_MemoryBasic_1_struct;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* _L14/ */ _L14;
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L65/ */ _L65;
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L66/ */ _L66;
  ReceivedMessage_T_Common_Types_Pkg /* _L67/ */ _L67;
  CompressedPackets_T_Common_Types_Pkg /* _L68/ */ _L68;
  BG_Header_T_BG_Types_Pkg /* _L72/ */ _L72;
  kcg_bool /* _L71/ */ _L71;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* _L69/ */ _L69;
} outC_ReceiveReportParameters_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::ReceiveReportParameters/ */
extern void ReceiveReportParameters_ProvidePositionReport_Pkg(
  /* reportedBGs/ */
  ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ReceiveReportParameters_reset_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ReceiveReportParameters_init_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: ProvidePositionReport_Pkg::ReceiveReportParameters/
  @1: (linear::MemoryBasic#1)
*/

#endif /* _ReceiveReportParameters_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ReceiveReportParameters_ProvidePositionReport_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

