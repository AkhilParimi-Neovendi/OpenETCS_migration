/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _LevelFilter_InformationFilter_Pkg_FirstFilter_H_
#define _LevelFilter_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"
#include "MapLevelToColumn_InformationFilter_Pkg.h"
#include "MapPacketIdToRow_InformationFilter_Pkg.h"
#include "CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outStoreInTransitionBuffer/ */ outStoreInTransitionBuffer;
  kcg_bool /* outPacketAccept/ */ outPacketAccept;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckLevelExceptions_InformationFilter_Pkg_FirstFilter /* _L16=(InformationFilter_Pkg::FirstFilter::CheckLevelExceptions#1)/ */ Context_CheckLevelExceptions_1;
  outC_MapLevelToColumn_InformationFilter_Pkg /* _L22=(InformationFilter_Pkg::MapLevelToColumn#1)/ */ Context_MapLevelToColumn_1;
  outC_MapPacketIdToRow_InformationFilter_Pkg /* _L17=(InformationFilter_Pkg::MapPacketIdToRow#1)/ */ Context_MapPacketIdToRow_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* row/ */ row;
  kcg_int64 /* column/ */ column;
  M_LEVEL /* _L2/ */ _L2;
  LevelDecisionTableActionKind_DataDictionary_Pkg /* _L3/ */ _L3;
  LevelDecisionTableType_DataDictionary_Pkg /* _L4/ */ _L4;
  LevelDecisionTableType_DataDictionary_Pkg /* _L5/ */ _L5;
  LevelDecisionTableActionKind_DataDictionary_Pkg /* _L6/ */ _L6;
  LevelDecisionTableActionKind_DataDictionary_Pkg /* _L10/ */ _L10;
  MsgSource_T_Common_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L16/ */ _L16;
  kcg_int64 /* _L17/ */ _L17;
  kcg_int64 /* _L18/ */ _L18;
  kcg_int64 /* _L20/ */ _L20;
  kcg_int64 /* _L21/ */ _L21;
  kcg_int64 /* _L22/ */ _L22;
  kcg_int64 /* _L23/ */ _L23;
  kcg_int64 /* _L24/ */ _L24;
  MsgSource_T_Common_Types_Pkg /* _L25/ */ _L25;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_int64 /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
} outC_LevelFilter_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::LevelFilter/ */
extern void LevelFilter_InformationFilter_Pkg_FirstFilter(
  /* inPendingL1Transition/ */
  kcg_bool inPendingL1Transition,
  /* inPendingL2L3Transition/ */
  kcg_bool inPendingL2L3Transition,
  /* inPendingAckOfTrainData/ */
  kcg_bool inPendingAckOfTrainData,
  /* inEmergencyStopAccepted/ */
  kcg_bool inEmergencyStopAccepted,
  /* inLastAckTextMessageId/ */
  kcg_int64 inLastAckTextMessageId,
  /* inPendingNTCTransition/ */
  kcg_bool inPendingNTCTransition,
  /* inSPPAndGradientOnBoard/ */
  kcg_bool inSPPAndGradientOnBoard,
  /* inMACoverNotFullLength/ */
  kcg_bool inMACoverNotFullLength,
  /* inLevel/ */
  M_LEVEL inLevel,
  /* inPacketOrigin/ */
  MsgSource_T_Common_Types_Pkg inPacketOrigin,
  /* inPacketId/ */
  kcg_int64 inPacketId,
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LevelFilter_reset_InformationFilter_Pkg_FirstFilter(
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LevelFilter_init_InformationFilter_Pkg_FirstFilter(
  outC_LevelFilter_InformationFilter_Pkg_FirstFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LevelFilter_InformationFilter_Pkg_FirstFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelFilter_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

