/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */
#ifndef _PosData__UpdateWithP001_RBC_Session_Pkg_H_
#define _PosData__UpdateWithP001_RBC_Session_Pkg_H_

#include "kcg_types.h"
#include "_71_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "PosData__Set_NID_PRVLRBG_RBC_Session_Pkg.h"
#include "PosData__Set_Q_DIRLRBG_RBC_Session_Pkg.h"
#include "_70_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "_69_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "PosData__Set_M_LEVEL_RBC_Session_Pkg.h"
#include "PosData__Set_Q_LENGTH_RBC_Session_Pkg.h"
#include "_68_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "PosData__Set_L_TRAININT_RBC_Session_Pkg.h"
#include "PosData__Set_NID_NTC_RBC_Session_Pkg.h"
#include "_67_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "PosData__Set_Q_DIRTRAIN_RBC_Session_Pkg.h"
#include "PosData__Set_M_MODE_RBC_Session_Pkg.h"
#include "_66_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "PosData__Set_L_DOUBTOVER_RBC_Session_Pkg.h"
#include "PosData__Set_D_LRBG_RBC_Session_Pkg.h"
#include "_65_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "_64_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "_63_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "_62_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "_61_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "_60_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "PosData__Set_V_TRAIN_RBC_Session_Pkg.h"
#include "PosData__Set_Q_DLRBG_RBC_Session_Pkg.h"
#include "_59_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "PosData__Set_L_DOUBTUNDER_RBC_Session_Pkg.h"
#include "_58_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "_57_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg.h"
#include "PosData__Set_Q_SCALE_RBC_Session_Pkg.h"
#include "_52_RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
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
  outC_PosData__Set_NID_NTC_RBC_Session_Pkg /* _L26=(RBC_Session_Pkg::PosData__Set_NID_NTC#1)/ */ Context_PosData__Set_NID_NTC_1;
  outC__59_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L8=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_NID_NTC#1)/ */ Context_RadioTrainTrackPacket001__Get_NID_NTC_1;
  outC_PosData__Set_M_LEVEL_RBC_Session_Pkg /* _L31=(RBC_Session_Pkg::PosData__Set_M_LEVEL#1)/ */ Context_PosData__Set_M_LEVEL_1;
  outC__65_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L18=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_M_LEVEL#1)/ */ _1_Context_RadioTrainTrackPacket001__Get_M_LEVEL_1;
  outC_PosData__Set_M_MODE_RBC_Session_Pkg /* _L22=(RBC_Session_Pkg::PosData__Set_M_MODE#1)/ */ Context_PosData__Set_M_MODE_1;
  outC__62_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L14=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_M_MODE#1)/ */ _2_Context_RadioTrainTrackPacket001__Get_M_MODE_1;
  outC_PosData__Set_Q_DIRTRAIN_RBC_Session_Pkg /* _L23=(RBC_Session_Pkg::PosData__Set_Q_DIRTRAIN#1)/ */ Context_PosData__Set_Q_DIRTRAIN_1;
  outC_PosData__Set_V_TRAIN_RBC_Session_Pkg /* _L10=(RBC_Session_Pkg::PosData__Set_V_TRAIN#1)/ */ Context_PosData__Set_V_TRAIN_1;
  outC__61_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L13=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_V_TRAIN#1)/ */ _3_Context_RadioTrainTrackPacket001__Get_V_TRAIN_1;
  outC_PosData__Set_L_TRAININT_RBC_Session_Pkg /* _L27=(RBC_Session_Pkg::PosData__Set_L_TRAININT#1)/ */ Context_PosData__Set_L_TRAININT_1;
  outC__58_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L6=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_TRAININT#1)/ */ _4_Context_RadioTrainTrackPacket001__Get_L_TRAININT_1;
  outC_PosData__Set_Q_LENGTH_RBC_Session_Pkg /* _L30=(RBC_Session_Pkg::PosData__Set_Q_LENGTH#1)/ */ Context_PosData__Set_Q_LENGTH_1;
  outC__68_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L28=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_Q_LENGTH#1)/ */ _5_Context_RadioTrainTrackPacket001__Get_Q_LENGTH_1;
  outC_PosData__Set_L_DOUBTUNDER_RBC_Session_Pkg /* _L7=(RBC_Session_Pkg::PosData__Set_L_DOUBTUNDER#1)/ */ Context_PosData__Set_L_DOUBTUNDER_1;
  outC_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L4=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_DOUBTUNDER#1)/ */ _6_Context_RadioTrainTrackPacket001__Get_L_DOUBTUNDER_1;
  outC_PosData__Set_L_DOUBTOVER_RBC_Session_Pkg /* _L20=(RBC_Session_Pkg::PosData__Set_L_DOUBTOVER#1)/ */ Context_PosData__Set_L_DOUBTOVER_1;
  outC__67_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L25=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_DOUBTOVER#1)/ */ _7_Context_RadioTrainTrackPacket001__Get_L_DOUBTOVER_1;
  outC_PosData__Set_Q_DLRBG_RBC_Session_Pkg /* _L9=(RBC_Session_Pkg::PosData__Set_Q_DLRBG#1)/ */ Context_PosData__Set_Q_DLRBG_1;
  outC__64_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L17=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_Q_DLRBG#1)/ */ _8_Context_RadioTrainTrackPacket001__Get_Q_DLRBG_1;
  outC__70_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L33=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_Q_DIRTRAIN#1)/ */ _9_Context_RadioTrainTrackPacket001__Get_Q_DIRTRAIN_1;
  outC_PosData__Set_Q_DIRLRBG_RBC_Session_Pkg /* _L34=(RBC_Session_Pkg::PosData__Set_Q_DIRLRBG#1)/ */ Context_PosData__Set_Q_DIRLRBG_1;
  outC__63_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L16=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_Q_DIRLRBG#1)/ */ _10_Context_RadioTrainTrackPacket001__Get_Q_DIRLRBG_1;
  outC_PosData__Set_D_LRBG_RBC_Session_Pkg /* _L19=(RBC_Session_Pkg::PosData__Set_D_LRBG#1)/ */ Context_PosData__Set_D_LRBG_1;
  outC__60_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L12=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_D_LRBG#1)/ */ _11_Context_RadioTrainTrackPacket001__Get_D_LRBG_1;
  outC_PosData__Set_NID_PRVLRBG_RBC_Session_Pkg /* _L35=(RBC_Session_Pkg::PosData__Set_NID_PRVLRBG#1)/ */ Context_PosData__Set_NID_PRVLRBG_1;
  outC_PosData__Set_NID_LRBG_RBC_Session_Pkg /* _L11=(RBC_Session_Pkg::PosData__Set_NID_LRBG#1)/ */ Context_PosData__Set_NID_LRBG_1;
  outC__66_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L21=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_NID_LRBG#1)/ */ _12_Context_RadioTrainTrackPacket001__Get_NID_LRBG_1;
  outC_PosData__Set_Q_SCALE_RBC_Session_Pkg /* _L3=(RBC_Session_Pkg::PosData__Set_Q_SCALE#1)/ */ Context_PosData__Set_Q_SCALE_1;
  outC__69_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L32=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_Q_SCALE#1)/ */ _13_Context_RadioTrainTrackPacket001__Get_Q_SCALE_1;
  outC__71_RadioTrainTrackPacket001__RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacket001_Pkg /* _L36=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_NID_PRVLRBG#1)/ */ _14_Context_RadioTrainTrackPacket001__Get_NID_PRVLRBG_1;
  outC__57_RadioTrainTrackPackets__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L5=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP001#1)/ */ Context_RadioTrainTrackPackets__GetP001_1;
  outC__52_RadioTrainTrackMessage__G_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg /* _L29=(RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackMessage__GetPackets#1)/ */ Context_RadioTrainTrackMessage__GetPackets_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PosData_T /* _L34/ */ _L34;
  Q_DIRTRAIN /* _L33/ */ _L33;
  Q_SCALE /* _L32/ */ _L32;
  PosData_T /* _L31/ */ _L31;
  PosData_T /* _L30/ */ _L30;
  outPackets_T_Common_Types_Pkg /* _L29/ */ _L29;
  Q_LENGTH /* _L28/ */ _L28;
  PosData_T /* _L27/ */ _L27;
  PosData_T /* _L26/ */ _L26;
  L_DOUBTOVER /* _L25/ */ _L25;
  PosData_T /* _L24/ */ _L24;
  PosData_T /* _L23/ */ _L23;
  PosData_T /* _L22/ */ _L22;
  NID_LRBG /* _L21/ */ _L21;
  PosData_T /* _L20/ */ _L20;
  PosData_T /* _L19/ */ _L19;
  M_LEVEL /* _L18/ */ _L18;
  Q_DLRBG /* _L17/ */ _L17;
  Q_DIRLRBG /* _L16/ */ _L16;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L15/ */ _L15;
  M_MODE /* _L14/ */ _L14;
  V_TRAIN /* _L13/ */ _L13;
  D_LRBG /* _L12/ */ _L12;
  PosData_T /* _L11/ */ _L11;
  PosData_T /* _L10/ */ _L10;
  PosData_T /* _L9/ */ _L9;
  NID_NTC /* _L8/ */ _L8;
  PosData_T /* _L7/ */ _L7;
  L_TRAININT /* _L6/ */ _L6;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L5/ */ _L5;
  L_DOUBTUNDER /* _L4/ */ _L4;
  PosData_T /* _L3/ */ _L3;
  PosData_T /* _L35/ */ _L35;
  NID_PRVLRBG /* _L36/ */ _L36;
} outC_PosData__UpdateWithP001_RBC_Session_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Session_Pkg::PosData__UpdateWithP001/ */
extern void PosData__UpdateWithP001_RBC_Session_Pkg(
  /* inPosData/ */
  PosData_T *inPosData,
  /* inRadioTrainTrackMessage/ */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  outC_PosData__UpdateWithP001_RBC_Session_Pkg *outC);

extern void PosData__UpdateWithP001_reset_RBC_Session_Pkg(
  outC_PosData__UpdateWithP001_RBC_Session_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void PosData__UpdateWithP001_init_RBC_Session_Pkg(
  outC_PosData__UpdateWithP001_RBC_Session_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PosData__UpdateWithP001_RBC_Session_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** PosData__UpdateWithP001_RBC_Session_Pkg.h
** Generation date: 2023-09-12T13:45:50
*************************************************************$ */

