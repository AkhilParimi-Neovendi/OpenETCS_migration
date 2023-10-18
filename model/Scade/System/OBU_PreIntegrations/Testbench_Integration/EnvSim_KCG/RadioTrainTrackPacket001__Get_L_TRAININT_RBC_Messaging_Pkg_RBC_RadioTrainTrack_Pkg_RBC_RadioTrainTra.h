/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrainTrackPacket001__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr
#define _RadioTrainTrackPacket001__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_TRAININT /* out_L_TRAININT/ */ out_L_TRAININT;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
} outC_RadioTrainTrackPacket001__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_TRAININT/ */
extern void RadioTrainTrackPacket001__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra(
  /* inRadioTrainTrackPacket/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  outC_RadioTrainTrackPacket001__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra *outC);

extern void RadioTrainTrackPacket001__Get_L_TRAININT_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTr(
  outC_RadioTrainTrackPacket001__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackPacket001__Get_L_TRAININT_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra(
  outC_RadioTrainTrackPacket001__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrainTrackPacket001__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackPacket001__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

