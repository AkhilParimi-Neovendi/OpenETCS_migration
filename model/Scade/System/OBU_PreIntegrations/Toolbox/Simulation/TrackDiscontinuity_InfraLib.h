/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _TrackDiscontinuity_InfraLib_H_
#define _TrackDiscontinuity_InfraLib_H_

#include "kcg_types.h"
#include "TrackDiscontinuity_CalcTr_InfraLib.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TrackSectionData_T_InfraLib /* SectionData_out/ */ SectionData_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrackDiscontinuity_CalcTr_InfraLib /* _L79=(InfraLib::TrackDiscontinuity_CalcTrainPos#2)/ */ Context_TrackDiscontinuity_CalcTrainPos_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* @1/A_Output/ */ A_Output_Abs_3_int64;
  kcg_int64 /* @1/A_Input/ */ A_Input_Abs_3_int64;
  kcg_int64 /* @1/_L8/ */ _L8_Abs_3_int64;
  kcg_int64 /* @1/_L5/ */ _L5_Abs_3_int64;
  kcg_int64 /* @1/_L3/ */ _L3_Abs_3_int64;
  kcg_int64 /* @1/_L2/ */ _L2_Abs_3_int64;
  kcg_bool /* @1/_L1/ */ _L1_Abs_3_int64;
  kcg_int64 /* NewOffset/ */ NewOffset;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  TrackSectionData_T_InfraLib /* _L16/ */ _L16;
  kcg_int64 /* _L49/ */ _L49;
  kcg_int64 /* _L50/ */ _L50;
  kcg_int64 /* _L57/ */ _L57;
  kcg_float64 /* _L59/ */ _L59;
  kcg_float64 /* _L60/ */ _L60;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  kcg_float64 /* _L79/ */ _L79;
  TrackSectionData_T_InfraLib /* _L80/ */ _L80;
  TrainPosRaw_T_InfraLib /* _L81/ */ _L81;
  kcg_float64 /* _L82/ */ _L82;
  kcg_int64 /* _L83/ */ _L83;
  TrackSectionData_T_InfraLib /* _L88/ */ _L88;
  TrainPosRaw_T_InfraLib /* _L89/ */ _L89;
  TrainPosRaw_T_InfraLib /* _L90/ */ _L90;
  kcg_int64 /* _L91/ */ _L91;
} outC_TrackDiscontinuity_InfraLib;

/* ===========  node initialization and cycle functions  =========== */
/* InfraLib::TrackDiscontinuity/ */
extern void TrackDiscontinuity_InfraLib(
  /* SectionData_in/ */
  TrackSectionData_T_InfraLib *SectionData_in,
  /* StartSection/ */
  kcg_int64 StartSection,
  /* EndSection/ */
  kcg_int64 EndSection,
  outC_TrackDiscontinuity_InfraLib *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrackDiscontinuity_reset_InfraLib(
  outC_TrackDiscontinuity_InfraLib *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrackDiscontinuity_init_InfraLib(
  outC_TrackDiscontinuity_InfraLib *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: InfraLib::TrackDiscontinuity/
  @1: (math::Abs#3)
*/

#endif /* _TrackDiscontinuity_InfraLib_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackDiscontinuity_InfraLib.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

