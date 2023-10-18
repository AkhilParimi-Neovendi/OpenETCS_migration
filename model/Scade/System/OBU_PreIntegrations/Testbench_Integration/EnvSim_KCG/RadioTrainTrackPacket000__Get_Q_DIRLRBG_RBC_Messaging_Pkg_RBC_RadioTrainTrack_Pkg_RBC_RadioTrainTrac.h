/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra
#define _RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Q_DIRLRBG /* out_Q_DIRLRBG/ */ out_Q_DIRLRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L1/ */ _L1;
  Q_DIRLRBG /* _L2/ */ _L2;
} outC_RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DIRLRBG/ */
extern void RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac(
  /* inRadioTrainTrackPacket/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  outC_RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai *outC);

extern void RadioTrainTrackPacket000__Get_Q_DIRLRBG_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra(
  outC_RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackPacket000__Get_Q_DIRLRBG_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
  outC_RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTra */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrac.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

