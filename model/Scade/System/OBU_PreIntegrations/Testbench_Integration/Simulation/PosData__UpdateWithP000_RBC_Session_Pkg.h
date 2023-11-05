/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _PosData__UpdateWithP000_RBC_Session_Pkg_H_
#define _PosData__UpdateWithP000_RBC_Session_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackPacket000__Get_NID_NTC_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_M_MODE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_Q_DIRTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_L_DOUBTUNDER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_L_DOUBTOVER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_Q_DLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_D_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPacket000__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg.h"
#include "RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "PosData__Set_Q_DIRLRBG_RBC_Session_Pkg.h"
#include "PosData__Set_M_LEVEL_RBC_Session_Pkg.h"
#include "PosData__Set_Q_LENGTH_RBC_Session_Pkg.h"
#include "PosData__Set_L_TRAININT_RBC_Session_Pkg.h"
#include "PosData__Set_NID_NTC_RBC_Session_Pkg.h"
#include "PosData__Set_Q_DIRTRAIN_RBC_Session_Pkg.h"
#include "PosData__Set_M_MODE_RBC_Session_Pkg.h"
#include "PosData__Set_L_DOUBTOVER_RBC_Session_Pkg.h"
#include "PosData__Set_D_LRBG_RBC_Session_Pkg.h"
#include "PosData__Set_V_TRAIN_RBC_Session_Pkg.h"
#include "PosData__Set_Q_DLRBG_RBC_Session_Pkg.h"
#include "PosData__Set_L_DOUBTUNDER_RBC_Session_Pkg.h"
#include "PosData__Set_Q_SCALE_RBC_Session_Pkg.h"
#include "RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "PosData__Set_NID_LRBG_RBC_Session_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PosData_T /* outPosData/ */ outPosData;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_PosData__Set_NID_NTC_RBC_Session_Pkg /* _L45=(RBC_Session_Pkg::PosData__Set_NID_NTC#1)/ */ Context_PosData__Set_NID_NTC_1;
  outC_RadioTrainTrackPacket000__Get_NID_NTC_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L22=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_NID_NTC#1)/ */ Context_RadioTrainTrackPacket000__Get_NID_NTC_1;
  outC_PosData__Set_M_LEVEL_RBC_Session_Pkg /* _L44=(RBC_Session_Pkg::PosData__Set_M_LEVEL#1)/ */ Context_PosData__Set_M_LEVEL_1;
  outC_RadioTrainTrackPacket000__Get_M_LEVEL_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_LEVEL#1)/ */ Context_RadioTrainTrackPacket000__Get_M_LEVEL_1;
  outC_PosData__Set_M_MODE_RBC_Session_Pkg /* _L43=(RBC_Session_Pkg::PosData__Set_M_MODE#1)/ */ Context_PosData__Set_M_MODE_1;
  outC_RadioTrainTrackPacket000__Get_M_MODE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L20=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_M_MODE#1)/ */ Context_RadioTrainTrackPacket000__Get_M_MODE_1;
  outC_PosData__Set_Q_DIRTRAIN_RBC_Session_Pkg /* _L42=(RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN#1)/ */ Context_PosData__Set_Q_DIRTRAIN_1;
  outC_RadioTrainTrackPacket000__Get_Q_DIRTRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DIRTRAIN#1)/ */ Context_RadioTrainTrackPacket000__Get_Q_DIRTRAIN_1;
  outC_PosData__Set_V_TRAIN_RBC_Session_Pkg /* _L41=(RBC_Session_Pkg::PosData__Set_V_TRAIN#1)/ */ Context_PosData__Set_V_TRAIN_1;
  outC_RadioTrainTrackPacket000__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L19=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN#1)/ */ Context_RadioTrainTrackPacket000__Get_V_TRAIN_1;
  outC_PosData__Set_L_TRAININT_RBC_Session_Pkg /* _L40=(RBC_Session_Pkg::PosData__Set_L_TRAININT#1)/ */ Context_PosData__Set_L_TRAININT_1;
  outC_RadioTrainTrackPacket000__Get_L_TRAININT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_TRAININT#1)/ */ Context_RadioTrainTrackPacket000__Get_L_TRAININT_1;
  outC_PosData__Set_Q_LENGTH_RBC_Session_Pkg /* _L37=(RBC_Session_Pkg::PosData__Set_Q_LENGTH#1)/ */ Context_PosData__Set_Q_LENGTH_1;
  outC_RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH#1)/ */ Context_RadioTrainTrackPacket000__Get_Q_LENGTH_1;
  outC_PosData__Set_L_DOUBTUNDER_RBC_Session_Pkg /* _L36=(RBC_Session_Pkg::PosData__Set_L_DOUBTUNDER#1)/ */ Context_PosData__Set_L_DOUBTUNDER_1;
  outC_RadioTrainTrackPacket000__Get_L_DOUBTUNDER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L15=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTUNDER#1)/ */ Context_RadioTrainTrackPacket000__Get_L_DOUBTUNDER_1;
  outC_PosData__Set_L_DOUBTOVER_RBC_Session_Pkg /* _L35=(RBC_Session_Pkg::PosData__Set_L_DOUBTOVER#1)/ */ Context_PosData__Set_L_DOUBTOVER_1;
  outC_RadioTrainTrackPacket000__Get_L_DOUBTOVER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_L_DOUBTOVER#1)/ */ Context_RadioTrainTrackPacket000__Get_L_DOUBTOVER_1;
  outC_PosData__Set_Q_DLRBG_RBC_Session_Pkg /* _L32=(RBC_Session_Pkg::PosData__Set_Q_DLRBG#1)/ */ Context_PosData__Set_Q_DLRBG_1;
  outC_RadioTrainTrackPacket000__Get_Q_DLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DLRBG#1)/ */ Context_RadioTrainTrackPacket000__Get_Q_DLRBG_1;
  outC_PosData__Set_Q_DIRLRBG_RBC_Session_Pkg /* _L26=(RBC_Session_Pkg::PosData__Set_Q_DIRLRBG#1)/ */ Context_PosData__Set_Q_DIRLRBG_1;
  outC_RadioTrainTrackPacket000__Get_Q_DIRLRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_DIRLRBG#1)/ */ Context_RadioTrainTrackPacket000__Get_Q_DIRLRBG_1;
  outC_PosData__Set_D_LRBG_RBC_Session_Pkg /* _L23=(RBC_Session_Pkg::PosData__Set_D_LRBG#1)/ */ Context_PosData__Set_D_LRBG_1;
  outC_RadioTrainTrackPacket000__Get_D_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L11=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_D_LRBG#1)/ */ Context_RadioTrainTrackPacket000__Get_D_LRBG_1;
  outC_PosData__Set_NID_LRBG_RBC_Session_Pkg /* _L6=(RBC_Session_Pkg::PosData__Set_NID_LRBG#1)/ */ Context_PosData__Set_NID_LRBG_1;
  outC_RadioTrainTrackPacket000__Get_NID_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_NID_LRBG#1)/ */ Context_RadioTrainTrackPacket000__Get_NID_LRBG_1;
  outC_PosData__Set_Q_SCALE_RBC_Session_Pkg /* _L7=(RBC_Session_Pkg::PosData__Set_Q_SCALE#1)/ */ Context_PosData__Set_Q_SCALE_1;
  outC_RadioTrainTrackPacket000__Get_Q_SCALE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket000_Pkg /* _L10=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_SCALE#1)/ */ Context_RadioTrainTrackPacket000__Get_Q_SCALE_1;
  outC_RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000#1)/ */ Context_RadioTrainTrackPackets__GetP000_1;
  outC_RadioTrainTrackMessage__GetPackets_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L3=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */ Context_RadioTrainTrackMessage__GetPackets_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PosData_T /* _L1/ */ _L1;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L2/ */ _L2;
  outPackets_T_Common_Types_Pkg /* _L3/ */ _L3;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L4/ */ _L4;
  NID_LRBG /* _L5/ */ _L5;
  PosData_T /* _L6/ */ _L6;
  PosData_T /* _L7/ */ _L7;
  Q_SCALE /* _L10/ */ _L10;
  D_LRBG /* _L11/ */ _L11;
  Q_DIRLRBG /* _L12/ */ _L12;
  Q_DLRBG /* _L13/ */ _L13;
  L_DOUBTOVER /* _L14/ */ _L14;
  L_DOUBTUNDER /* _L15/ */ _L15;
  Q_LENGTH /* _L16/ */ _L16;
  L_TRAININT /* _L17/ */ _L17;
  Q_DIRTRAIN /* _L18/ */ _L18;
  V_TRAIN /* _L19/ */ _L19;
  M_MODE /* _L20/ */ _L20;
  M_LEVEL /* _L21/ */ _L21;
  NID_NTC /* _L22/ */ _L22;
  PosData_T /* _L23/ */ _L23;
  PosData_T /* _L26/ */ _L26;
  PosData_T /* _L32/ */ _L32;
  PosData_T /* _L35/ */ _L35;
  PosData_T /* _L36/ */ _L36;
  PosData_T /* _L37/ */ _L37;
  PosData_T /* _L40/ */ _L40;
  PosData_T /* _L41/ */ _L41;
  PosData_T /* _L42/ */ _L42;
  PosData_T /* _L43/ */ _L43;
  PosData_T /* _L44/ */ _L44;
  PosData_T /* _L45/ */ _L45;
} outC_PosData__UpdateWithP000_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::PosData__UpdateWithP000/ */
extern void PosData__UpdateWithP000_RBC_Session_Pkg(
  /* inPosData/ */
  PosData_T *inPosData,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_PosData__UpdateWithP000_RBC_Session_Pkg *outC);

extern void PosData__UpdateWithP000_reset_RBC_Session_Pkg(
  outC_PosData__UpdateWithP000_RBC_Session_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void PosData__UpdateWithP000_init_RBC_Session_Pkg(
  outC_PosData__UpdateWithP000_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PosData__UpdateWithP000_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosData__UpdateWithP000_RBC_Session_Pkg.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

