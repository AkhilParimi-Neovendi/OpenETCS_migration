/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _probe_RadioOutput_RadioSupport_Pkg_H_
#define _probe_RadioOutput_RadioSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_MESSAGE /* msg1/ */ msg1;
  NID_MESSAGE /* msg2/ */ msg2;
  NID_MESSAGE /* msg3/ */ msg3;
  NID_MESSAGE /* msg4/ */ msg4;
  NID_MESSAGE /* msg5/ */ msg5;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L1/ */ _L1;
  M_TrainTrack_Message_T_TM_radio_messages /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  M_TrainTrack_Message_T_TM_radio_messages /* _L4/ */ _L4;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L11/ */ _L11;
  M_TrainTrack_Message_T_TM_radio_messages /* _L10/ */ _L10;
  kcg_int64 /* _L9/ */ _L9;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L8/ */ _L8;
  M_TrainTrack_Message_T_TM_radio_messages /* _L7/ */ _L7;
  kcg_int64 /* _L16/ */ _L16;
  kcg_int64 /* _L15/ */ _L15;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L14/ */ _L14;
  M_TrainTrack_Message_T_TM_radio_messages /* _L13/ */ _L13;
  M_TrainTrack_Message_T_TM_radio_messages /* _L12/ */ _L12;
  kcg_int64 /* _L26/ */ _L26;
  M_TrainTrack_Message_T_TM_radio_messages /* _L25/ */ _L25;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L24/ */ _L24;
  M_TrainTrack_Message_T_TM_radio_messages /* _L23/ */ _L23;
  kcg_int64 /* _L22/ */ _L22;
  kcg_int64 /* _L31/ */ _L31;
  M_TrainTrack_Message_T_TM_radio_messages /* _L30/ */ _L30;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L29/ */ _L29;
  M_TrainTrack_Message_T_TM_radio_messages /* _L28/ */ _L28;
  kcg_int64 /* _L27/ */ _L27;
} outC_probe_RadioOutput_RadioSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RadioSupport_Pkg::probe_RadioOutput/ */
extern void probe_RadioOutput_RadioSupport_Pkg(
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  outC_probe_RadioOutput_RadioSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void probe_RadioOutput_reset_RadioSupport_Pkg(
  outC_probe_RadioOutput_RadioSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void probe_RadioOutput_init_RadioSupport_Pkg(
  outC_probe_RadioOutput_RadioSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _probe_RadioOutput_RadioSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** probe_RadioOutput_RadioSupport_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

