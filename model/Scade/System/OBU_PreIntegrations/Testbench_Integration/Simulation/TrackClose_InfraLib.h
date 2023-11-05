/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _TrackClose_InfraLib_H_
#define _TrackClose_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedBaliseMessage_TM /* BaliseMessage/ */ BaliseMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TrackSectionData_T_InfraLib /* _L1/ */ _L1;
  CompressedBaliseMessage_TM /* _L6/ */ _L6;
} outC_TrackClose_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::TrackClose/ */
extern void TrackClose_InfraLib(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  outC_TrackClose_InfraLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrackClose_reset_InfraLib(outC_TrackClose_InfraLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrackClose_init_InfraLib(outC_TrackClose_InfraLib *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrackClose_InfraLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackClose_InfraLib.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

