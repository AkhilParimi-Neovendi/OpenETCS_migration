/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _TrackInit_InfraLib_H_
#define _TrackInit_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* SectionData_out/ */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* _L1/ */ _L1;
  CompressedBaliseMessage_TM /* _L4/ */ _L4;
  TrackSectionData_T_InfraLib /* _L8/ */ _L8;
  TrainPosRaw_T_InfraLib /* _L10/ */ _L10;
  kcg_float32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
} outC_TrackInit_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::TrackInit/ */
extern void TrackInit_InfraLib(
  /* TrainPosIn/ */
  kcg_float32 TrainPosIn,
  /* InitialOffset/ */
  kcg_int32 InitialOffset,
  outC_TrackInit_InfraLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrackInit_reset_InfraLib(outC_TrackInit_InfraLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrackInit_init_InfraLib(outC_TrackInit_InfraLib *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrackInit_InfraLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackInit_InfraLib.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

