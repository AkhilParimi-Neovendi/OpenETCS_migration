/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack
#define _RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_LEVEL /* out_M_LEVEL/ */ out_M_LEVEL;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L1/ */ _L1;
  M_LEVEL /* _L2/ */ _L2;
} outC_RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_LEVEL/ */
extern void RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
  /* inRadioTrainTrackPacket/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  outC_RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT *outC);

extern void RadioTrainTrackPacket000__Get_M_LEVEL_reset_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
  outC_RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RadioTrainTrackPacket000__Get_M_LEVEL_init_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT(
  outC_RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainT *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

