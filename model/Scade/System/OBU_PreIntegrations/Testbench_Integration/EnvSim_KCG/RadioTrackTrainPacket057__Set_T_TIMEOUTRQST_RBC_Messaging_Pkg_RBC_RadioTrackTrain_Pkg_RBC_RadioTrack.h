/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrac
#define _RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrac

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P057_trackside_int_T_TM /* outRadioTrackTrainPacket/ */ outRadioTrackTrainPacket;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P057_trackside_int_T_TM /* _L1/ */ _L1;
  T_TIMEOUTRQST /* _L2/ */ _L2;
  P057_trackside_int_T_TM /* _L3/ */ _L3;
} outC_RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_Radio;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_T_TIMEOUTRQST/ */
extern void RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack(
  /* inRadioTrackTrainPacket/ */
  P057_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* in_T_TIMEOUTRQST/ */
  T_TIMEOUTRQST in_T_TIMEOUTRQST,
  outC_RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_Radio *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_Radi(
  outC_RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_Radio *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_Radio(
  outC_RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_Radio *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrac */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainPacket057__Set_T_TIMEOUTRQST_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrack.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

