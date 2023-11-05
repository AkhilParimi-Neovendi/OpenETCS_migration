/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _AddBGToFIFO_ProvidePositionReport_Pkg_H_
#define _AddBGToFIFO_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* out_reportedBGs/ */ out_reportedBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L2/ */ _L2;
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L5/ */ _L5;
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L6/ */ _L6;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L7/ */ _L7;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L8/ */ _L8;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L9/ */ _L9;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L10/ */ _L10;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L11/ */ _L11;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L12/ */ _L12;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L13/ */ _L13;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L14/ */ _L14;
  ReportedBG_T_ProvidePositionReport_Pkg /* _L45/ */ _L45;
  NID_BG /* _L54/ */ _L54;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L55/ */ _L55;
  trainPosition_T_TrainPosition_Types_Pck /* _L56/ */ _L56;
  positionedBG_T_TrainPosition_Types_Pck /* _L57/ */ _L57;
} outC_AddBGToFIFO_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::AddBGToFIFO/ */
extern void AddBGToFIFO_ProvidePositionReport_Pkg(
  /* reportedBGs/ */
  ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* reportIsSent/ */
  kcg_bool reportIsSent,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_AddBGToFIFO_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AddBGToFIFO_reset_ProvidePositionReport_Pkg(
  outC_AddBGToFIFO_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AddBGToFIFO_init_ProvidePositionReport_Pkg(
  outC_AddBGToFIFO_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AddBGToFIFO_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AddBGToFIFO_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

