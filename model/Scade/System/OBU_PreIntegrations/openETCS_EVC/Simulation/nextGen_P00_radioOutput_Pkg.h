/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _nextGen_P00_radioOutput_Pkg_H_
#define _nextGen_P00_radioOutput_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P000_TM_TrainToTrack /* outP0/ */ outP0;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L1/ */ _L1;
  P000_TM_TrainToTrack /* _L2/ */ _L2;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L34/ */ _L34;
  kcg_int32 /* _L33/ */ _L33;
  Q_SCALE /* _L32/ */ _L32;
  kcg_int32 /* _L31/ */ _L31;
  kcg_int32 /* _L30/ */ _L30;
  Q_DIRLRBG /* _L29/ */ _L29;
  Q_DLRBG /* _L28/ */ _L28;
  kcg_int32 /* _L27/ */ _L27;
  kcg_int32 /* _L26/ */ _L26;
  Q_LENGTH /* _L25/ */ _L25;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L23/ */ _L23;
  Q_DIRTRAIN /* _L22/ */ _L22;
  M_MODE /* _L21/ */ _L21;
  M_LEVEL /* _L20/ */ _L20;
  kcg_int32 /* _L19/ */ _L19;
  kcg_bool /* _L35/ */ _L35;
  Position_Report_TrainToTrack /* _L36/ */ _L36;
} outC_nextGen_P00_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::nextGen_P00/ */
extern void nextGen_P00_radioOutput_Pkg(
  /* inP0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *inP0,
  outC_nextGen_P00_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void nextGen_P00_reset_radioOutput_Pkg(
  outC_nextGen_P00_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void nextGen_P00_init_radioOutput_Pkg(
  outC_nextGen_P00_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _nextGen_P00_radioOutput_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextGen_P00_radioOutput_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

