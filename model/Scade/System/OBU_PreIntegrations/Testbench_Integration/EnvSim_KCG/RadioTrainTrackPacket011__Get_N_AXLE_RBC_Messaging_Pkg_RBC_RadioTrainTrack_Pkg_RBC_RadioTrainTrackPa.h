/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP
#define _RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  N_AXLE /* out_N_AXLE/ */ out_N_AXLE;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg /* _L1/ */ _L1;
  N_AXLE /* _L2/ */ _L2;
} outC_RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_N_AXLE/ */
extern void RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa(
  /* inRadioTrainTrackPacket/ */
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  outC_RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RadioTrainTrackPacket011__Get_N_AXLE_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
  outC_RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackPacket011__Get_N_AXLE_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr(
  outC_RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackPacket011__Get_N_AXLE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

