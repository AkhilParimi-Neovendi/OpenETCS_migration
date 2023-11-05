/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _TrackDiscontinuity_CalcTrainPos_InfraLib_H_
#define _TrackDiscontinuity_CalcTrainPos_InfraLib_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* TrainPosCalibrated/ */ TrainPosCalibrated;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L15/ */ _L15;
  kcg_bool /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L21/ */ _L21;
  kcg_int32 /* _L20/ */ _L20;
  kcg_float32 /* _L26/ */ _L26;
  kcg_float32 /* _L25/ */ _L25;
  kcg_float32 /* _L24/ */ _L24;
  kcg_float32 /* _L23/ */ _L23;
  kcg_int32 /* _L28/ */ _L28;
  TrackSectionData_T_InfraLib /* _L27/ */ _L27;
  TrainPosRaw_T_InfraLib /* _L29/ */ _L29;
  kcg_int32 /* _L30/ */ _L30;
  kcg_float32 /* _L31/ */ _L31;
  kcg_float32 /* _L33/ */ _L33;
  kcg_float32 /* _L32/ */ _L32;
} outC_TrackDiscontinuity_CalcTrainPos_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::TrackDiscontinuity_CalcTrainPos/ */
extern void TrackDiscontinuity_CalcTrainPos_InfraLib(
  /* DeltaIn/ */
  kcg_int32 DeltaIn,
  /* StartSection/ */
  kcg_int32 StartSection,
  /* SectionDataIn/ */
  TrackSectionData_T_InfraLib *SectionDataIn,
  outC_TrackDiscontinuity_CalcTrainPos_InfraLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrackDiscontinuity_CalcTrainPos_reset_InfraLib(
  outC_TrackDiscontinuity_CalcTrainPos_InfraLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrackDiscontinuity_CalcTrainPos_init_InfraLib(
  outC_TrackDiscontinuity_CalcTrainPos_InfraLib *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrackDiscontinuity_CalcTrainPos_InfraLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackDiscontinuity_CalcTrainPos_InfraLib.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

