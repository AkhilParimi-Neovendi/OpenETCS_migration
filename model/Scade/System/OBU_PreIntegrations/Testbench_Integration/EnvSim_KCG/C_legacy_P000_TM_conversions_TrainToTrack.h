/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_legacy_P000_TM_conversions_TrainToTrack_H_
#define _C_legacy_P000_TM_conversions_TrainToTrack_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P000_TM_TrainToTrack /* p/ */ p;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L1/ */ _L1;
  Position_Report_TrainToTrack /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  P000_TM_TrainToTrack /* _L6/ */ _L6;
  kcg_int32 /* _L38/ */ _L38;
  M_LEVEL /* _L37/ */ _L37;
  M_MODE /* _L36/ */ _L36;
  Q_DIRTRAIN /* _L35/ */ _L35;
  kcg_int32 /* _L34/ */ _L34;
  kcg_int32 /* _L33/ */ _L33;
  Q_LENGTH /* _L32/ */ _L32;
  kcg_int32 /* _L31/ */ _L31;
  kcg_int32 /* _L30/ */ _L30;
  Q_DLRBG /* _L29/ */ _L29;
  Q_DIRLRBG /* _L28/ */ _L28;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L26/ */ _L26;
  Q_SCALE /* _L25/ */ _L25;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L23/ */ _L23;
} outC_C_legacy_P000_TM_conversions_TrainToTrack;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_TrainToTrack::C_legacy_P000/ */
extern void C_legacy_P000_TM_conversions_TrainToTrack(
  /* legacy_in/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *legacy_in,
  outC_C_legacy_P000_TM_conversions_TrainToTrack *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_legacy_P000_reset_TM_conversions_TrainToTrack(
  outC_C_legacy_P000_TM_conversions_TrainToTrack *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_legacy_P000_init_TM_conversions_TrainToTrack(
  outC_C_legacy_P000_TM_conversions_TrainToTrack *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_legacy_P000_TM_conversions_TrainToTrack_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_legacy_P000_TM_conversions_TrainToTrack.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

