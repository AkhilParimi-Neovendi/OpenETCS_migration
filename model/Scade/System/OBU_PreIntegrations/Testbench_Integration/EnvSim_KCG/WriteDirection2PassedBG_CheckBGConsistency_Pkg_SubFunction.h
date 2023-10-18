/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction_H_
#define _WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* passedBG_out/ */ passedBG_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L14/ */ _L14;
  ReceivedMessage_T_Common_Types_Pkg /* _L15/ */ _L15;
  ReceivedMessage_T_Common_Types_Pkg /* _L16/ */ _L16;
  Q_DIRLRBG /* _L18/ */ _L18;
  ReceivedMessage_T_Common_Types_Pkg /* _L19/ */ _L19;
  Q_DIRTRAIN /* _L21/ */ _L21;
  ReceivedMessage_T_Common_Types_Pkg /* _L25/ */ _L25;
  ReceivedMessage_T_Common_Types_Pkg /* _L23/ */ _L23;
  ReceivedMessage_T_Common_Types_Pkg /* _L22/ */ _L22;
  Q_DIRTRAIN /* _L27/ */ _L27;
  Q_DIRLRBG /* _L28/ */ _L28;
} outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG/ */
extern void WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
  /* isNominal/ */
  kcg_bool isNominal,
  /* passedBG_in/ */
  ReceivedMessage_T_Common_Types_Pkg *passedBG_in,
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void WriteDirection2PassedBG_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void WriteDirection2PassedBG_init_CheckBGConsistency_Pkg_SubFunction(
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

