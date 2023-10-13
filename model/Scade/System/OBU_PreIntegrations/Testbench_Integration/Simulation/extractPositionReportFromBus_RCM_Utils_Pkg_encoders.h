/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _extractPositionReportFromBus_RCM_Utils_Pkg_encoders_H_
#define _extractPositionReportFromBus_RCM_Utils_Pkg_encoders_H_

#include "kcg_types.h"
#include "extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* found/ */ found;
  M_TrainTrack_Message_T_TM_radio_messages /* positionReport/ */ positionReport;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders /* _L2=(RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr#1)/ */ Context_extractPositionReportFromBus_itr_1[5];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  _21_array /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_int64 /* _L8/ */ _L8;
  M_TrainTrack_Message_T_TM_radio_messages /* _L9/ */ _L9;
} outC_extractPositionReportFromBus_RCM_Utils_Pkg_encoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus/ */
extern void extractPositionReportFromBus_RCM_Utils_Pkg_encoders(
  /* messageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *messageBus,
  outC_extractPositionReportFromBus_RCM_Utils_Pkg_encoders *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void extractPositionReportFromBus_reset_RCM_Utils_Pkg_encoders(
  outC_extractPositionReportFromBus_RCM_Utils_Pkg_encoders *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void extractPositionReportFromBus_init_RCM_Utils_Pkg_encoders(
  outC_extractPositionReportFromBus_RCM_Utils_Pkg_encoders *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _extractPositionReportFromBus_RCM_Utils_Pkg_encoders_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** extractPositionReportFromBus_RCM_Utils_Pkg_encoders.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

