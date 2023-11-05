/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion_H_
#define _ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion_H_

#include "kcg_types.h"
#include "CAST_NID_PRVLRBG_to_int_TM_conversions.h"
#include "CAST_D_LRBG_to_int_TM_conversions.h"
#include "CAST_NID_NTC_to_int_TM_conversions.h"
#include "CAST_V_TRAIN_to_int_TM_conversions.h"
#include "CAST_L_DOUBTUNDER_to_int_TM_conversions.h"
#include "CAST_L_DOUBTOVER_to_int_TM_conversions.h"
#include "CAST_NID_LRBG_to_int_TM_conversions.h"
#include "CAST_L_PACKET_to_int_TM_conversions.h"
#include "CAST_NID_PACKET_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* oldP001/ */ oldP001;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_NID_NTC_to_int_TM_conversions /* _L34=(TM_conversions::CAST_NID_NTC_to_int#2)/ */ Context_CAST_NID_NTC_to_int_2;
  outC_CAST_V_TRAIN_to_int_TM_conversions /* _L31=(TM_conversions::CAST_V_TRAIN_to_int#1)/ */ Context_CAST_V_TRAIN_to_int_1;
  outC_CAST_L_DOUBTUNDER_to_int_TM_conversions /* _L29=(TM_conversions::CAST_L_DOUBTUNDER_to_int#1)/ */ Context_CAST_L_DOUBTUNDER_to_int_1;
  outC_CAST_L_DOUBTOVER_to_int_TM_conversions /* _L28=(TM_conversions::CAST_L_DOUBTOVER_to_int#1)/ */ Context_CAST_L_DOUBTOVER_to_int_1;
  outC_CAST_D_LRBG_to_int_TM_conversions /* _L35=(TM_conversions::CAST_D_LRBG_to_int#2)/ */ Context_CAST_D_LRBG_to_int_2;
  outC_CAST_NID_PRVLRBG_to_int_TM_conversions /* _L36=(TM_conversions::CAST_NID_PRVLRBG_to_int#1)/ */ Context_CAST_NID_PRVLRBG_to_int_1;
  outC_CAST_NID_LRBG_to_int_TM_conversions /* _L25=(TM_conversions::CAST_NID_LRBG_to_int#1)/ */ Context_CAST_NID_LRBG_to_int_1;
  outC_CAST_L_PACKET_to_int_TM_conversions /* _L23=(TM_conversions::CAST_L_PACKET_to_int#1)/ */ Context_CAST_L_PACKET_to_int_1;
  outC_CAST_NID_PACKET_to_int_TM_conversions /* _L22=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */ Context_CAST_NID_PACKET_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P001_TM_TrainToTrack /* _L1/ */ _L1;
  kcg_bool /* _L18/ */ _L18;
  NID_PACKET /* _L17/ */ _L17;
  L_PACKET /* _L16/ */ _L16;
  Q_SCALE /* _L15/ */ _L15;
  NID_LRBG /* _L14/ */ _L14;
  NID_PRVLRBG /* _L13/ */ _L13;
  D_LRBG /* _L12/ */ _L12;
  Q_DIRLRBG /* _L11/ */ _L11;
  Q_DLRBG /* _L10/ */ _L10;
  L_DOUBTOVER /* _L9/ */ _L9;
  L_DOUBTUNDER /* _L8/ */ _L8;
  Q_LENGTH /* _L7/ */ _L7;
  L_TRAININT /* _L6/ */ _L6;
  V_TRAIN /* _L5/ */ _L5;
  Q_DIRTRAIN /* _L4/ */ _L4;
  M_MODE /* _L3/ */ _L3;
  M_LEVEL /* _L2/ */ _L2;
  Position_Report_based_on_two_balise_groups_TrainToTrack /* _L20/ */ _L20;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L23/ */ _L23;
  kcg_int32 /* _L25/ */ _L25;
  kcg_int32 /* _L28/ */ _L28;
  kcg_int32 /* _L29/ */ _L29;
  kcg_int32 /* _L31/ */ _L31;
  NID_NTC /* _L33/ */ _L33;
  kcg_int32 /* _L34/ */ _L34;
  kcg_int32 /* _L35/ */ _L35;
  kcg_int32 /* _L36/ */ _L36;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L38/ */ _L38;
} outC_ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertP001/ */
extern void ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newP001/ */
  P001_TM_TrainToTrack *newP001,
  outC_ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ConvertP001_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ConvertP001_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertP001_RBC_Model_Pkg_TrainTrackMsgConversion.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

