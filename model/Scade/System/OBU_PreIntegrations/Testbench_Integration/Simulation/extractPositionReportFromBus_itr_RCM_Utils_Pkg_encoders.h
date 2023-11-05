/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders_H_
#define _extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* cont/ */ cont;
  kcg_int32 /* acc_out/ */ acc_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  M_TrainTrack_Message_T_TM_radio_messages /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  kcg_int32 /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
  kcg_int32 /* _L86/ */ _L86;
  kcg_int32 /* _L87/ */ _L87;
  kcg_bool /* _L88/ */ _L88;
  kcg_bool /* _L89/ */ _L89;
  kcg_bool /* _L90/ */ _L90;
  kcg_int32 /* _L91/ */ _L91;
  kcg_bool /* _L92/ */ _L92;
  kcg_int32 /* _L93/ */ _L93;
} outC_extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr/ */
extern void extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders(
  /* i/ */
  kcg_int32 i,
  /* acc_in/ */
  kcg_int32 acc_in,
  /* message/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *message,
  outC_extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void extractPositionReportFromBus_itr_reset_RCM_Utils_Pkg_encoders(
  outC_extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void extractPositionReportFromBus_itr_init_RCM_Utils_Pkg_encoders(
  outC_extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

