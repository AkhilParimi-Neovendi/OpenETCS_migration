/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _bildBGHeader_CheckBGConsistency_Pkg_SubFunction_H_
#define _bildBGHeader_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BG_Header_T_BG_Types_Pkg /* bgHeader/ */ bgHeader;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BG_Header_T_BG_Types_Pkg /* _L2/ */ _L2;
  Q_UPDOWN /* _L12/ */ _L12;
  M_VERSION /* _L11/ */ _L11;
  Q_MEDIA /* _L10/ */ _L10;
  N_PIG /* _L9/ */ _L9;
  N_TOTAL /* _L8/ */ _L8;
  M_DUP /* _L7/ */ _L7;
  M_MCOUNT /* _L6/ */ _L6;
  NID_C /* _L5/ */ _L5;
  NID_BG /* _L4/ */ _L4;
  Q_LINK /* _L3/ */ _L3;
  kcg_bool /* _L19/ */ _L19;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  MsgSource_T_Common_Types_Pkg /* _L17/ */ _L17;
  BG_Message_T_BG_Types_Pkg /* _L16/ */ _L16;
  RadioMessage_T_Radio_Types_Pkg /* _L15/ */ _L15;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  odometry_T_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  Q_NVLOCACC /* _L23/ */ _L23;
  Q_DIRLRBG /* _L25/ */ _L25;
  Q_DIRTRAIN /* _L26/ */ _L26;
  TelegramHeader_T_BG_Types_Pkg /* _L27/ */ _L27;
  TrackSide_ForCheck_T_Common_Types_Pkg /* _L28/ */ _L28;
} outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::bildBGHeader/ */
extern void bildBGHeader_CheckBGConsistency_Pkg_SubFunction(
  /* trackSideForCheck/ */
  TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void bildBGHeader_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void bildBGHeader_init_CheckBGConsistency_Pkg_SubFunction(
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _bildBGHeader_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** bildBGHeader_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

