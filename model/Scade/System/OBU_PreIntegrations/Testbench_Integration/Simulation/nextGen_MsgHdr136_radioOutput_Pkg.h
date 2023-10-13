/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _nextGen_MsgHdr136_radioOutput_Pkg_H_
#define _nextGen_MsgHdr136_radioOutput_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_136_T_TM_radio_messages /* outnextGenHeader/ */ outnextGenHeader;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L1/ */ _L1;
  M_136_T_TM_radio_messages /* _L2/ */ _L2;
  kcg_int64 /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  NID_MESSAGE /* _L14/ */ _L14;
  T_TRAIN /* _L15/ */ _L15;
  NID_ENGINE /* _L16/ */ _L16;
} outC_nextGen_MsgHdr136_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::nextGen_MsgHdr136/ */
extern void nextGen_MsgHdr136_radioOutput_Pkg(
  /* inCommonHeader/ */
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *inCommonHeader,
  outC_nextGen_MsgHdr136_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void nextGen_MsgHdr136_reset_radioOutput_Pkg(
  outC_nextGen_MsgHdr136_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void nextGen_MsgHdr136_init_radioOutput_Pkg(
  outC_nextGen_MsgHdr136_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _nextGen_MsgHdr136_radioOutput_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextGen_MsgHdr136_radioOutput_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

