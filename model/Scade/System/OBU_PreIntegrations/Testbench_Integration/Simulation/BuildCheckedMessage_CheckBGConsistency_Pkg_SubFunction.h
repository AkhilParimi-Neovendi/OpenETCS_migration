/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction_H_
#define _BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
#include "bildBGHeader_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* checkedMessage/ */ checkedMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction /* _L59=(CheckBGConsistency_Pkg::SubFunction::bildBGHeader#1)/ */ Context_bildBGHeader_1;
  outC_MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction /* _L82=(CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter#1)/ */ Context_MergAllPackets_Iter_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MsgSource_T_Common_Types_Pkg /* _L38/ */ _L38;
  ReceivedMessage_T_Common_Types_Pkg /* _L40/ */ _L40;
  kcg_bool /* _L44/ */ _L44;
  TelegramArray_T_BG_Types_Pkg /* _L43/ */ _L43;
  kcg_int64 /* _L42/ */ _L42;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L41/ */ _L41;
  RadioMetadata_T_Common_Types_Pkg /* _L46/ */ _L46;
  BG_Header_T_BG_Types_Pkg /* _L59/ */ _L59;
  TrackSide_ForCheck_T_Common_Types_Pkg /* _L60/ */ _L60;
  Q_NVLOCACC /* _L61/ */ _L61;
  TrackSide_ForCheck_T_Common_Types_Pkg /* _L62/ */ _L62;
  BG_Message_T_BG_Types_Pkg /* _L63/ */ _L63;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L66/ */ _L66;
  Telegram_T_BG_Types_Pkg /* _L82/ */ _L82;
  CompressedPackets_T_Common_Types_Pkg /* _L84/ */ _L84;
  RBC_Id_T_Common_Types_Pkg /* _L85/ */ _L85;
} outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage/ */
extern void BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
  /* trackSideForCheck/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BuildCheckedMessage_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BuildCheckedMessage_init_CheckBGConsistency_Pkg_SubFunction(
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

